#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// FlexSPI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Flexspi {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Flexspi: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x400CC000u :
      Instance == 2u ? 0x400D0000u :
      0u;

  // Module Control 0
  struct MCR0_fields_ {
    enum class eSWRESET : std::uint32_t {
      // No impact
      eval0 = 0,
      // Software reset
      eval1 = 1,
    };

    enum class eMDIS : std::uint32_t {
      // No impact
      eval0 = 0,
      // Module disable
      eval1 = 1,
    };

    enum class eRXCLKSRC : std::uint32_t {
      // Dummy Read strobe that FlexSPI generates, looped back internally
      eval0 = 0,
      // Dummy Read strobe that FlexSPI generates, looped back from DQS pad
      eval1 = 1,
      // Flash-memory-provided read strobe and input from DQS pad
      eval3 = 3,
    };

    enum class eARDFEN : std::uint32_t {
      // AHB read access disabled. IP bus reads IP receive FIFO. AHB Bus read access to IP receive FIFO memory space produces bus error.
      eval0 = 0,
      // AHB read access enabled. AHB bus reads IP receive FIFO. IP Bus read access to IP receive FIFO memory space returns data zero and causes no bus error.
      eval1 = 1,
    };

    enum class eATDFEN : std::uint32_t {
      // AHB write access disabled. IP bus writes to IP transmit FIFO. AHB bus write access to IP transmit FIFO memory space produces bus error.
      eval0 = 0,
      // AHB write access enabled. AHB bus writes to IP transmit FIFO. IP Bus write access to IP transmit FIFO memory space is ignored and causes no bus error.
      eval1 = 1,
    };

    enum class eSERCLKDIV : std::uint32_t {
      // Divided by 1
      eval0 = 0,
      // Divided by 2
      eval1 = 1,
      // Divided by 3
      eval2 = 2,
      // Divided by 4
      eval3 = 3,
      // Divided by 5
      eval4 = 4,
      // Divided by 6
      eval5 = 5,
      // Divided by 7
      eval6 = 6,
      // Divided by 8
      eval7 = 7,
    };

    enum class eHSEN : std::uint32_t {
      // Disable
      eval0 = 0,
      // Enable
      eval1 = 1,
    };

    enum class eDOZEEN : std::uint32_t {
      // Disable
      eval0 = 0,
      // Enable
      eval1 = 1,
    };

    enum class eCOMBINATIONEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSCKFREERUNEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Software Reset
    using SWRESET = ftl::mmio::Field<1, 0, eSWRESET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Module Disable
    using MDIS = ftl::mmio::Field<1, 1, eMDIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Clock Source for Flash Reading
    using RXCLKSRC = ftl::mmio::Field<2, 4, eRXCLKSRC, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Access to IP Receive FIFO Enable
    using ARDFEN = ftl::mmio::Field<1, 6, eARDFEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Write Access to IP Transmit FIFO Enable
    using ATDFEN = ftl::mmio::Field<1, 7, eATDFEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Serial Root Clock Divider
    using SERCLKDIV = ftl::mmio::Field<3, 8, eSERCLKDIV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Half Speed Serial Flash Memory Access Enable
    using HSEN = ftl::mmio::Field<1, 11, eHSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Doze Mode Enable
    using DOZEEN = ftl::mmio::Field<1, 12, eDOZEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Combination Mode Enable
    using COMBINATIONEN = ftl::mmio::Field<1, 13, eCOMBINATIONEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // SCLK Free-running Enable
    using SCKFREERUNEN = ftl::mmio::Field<1, 14, eSCKFREERUNEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timeout Wait Cycle for IP Command Grant
    using IPGRANTWAIT = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timeouts Wait Cycle for AHB command Grant
    using AHBGRANTWAIT = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCR0_fields_

  struct MCR0 : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0xFFFF80C2u,
      ftl::mmio::RW,
      typename MCR0_fields_::SWRESET,
      typename MCR0_fields_::MDIS,
      ftl::mmio::Reserved<2, 2>,
      typename MCR0_fields_::RXCLKSRC,
      typename MCR0_fields_::ARDFEN,
      typename MCR0_fields_::ATDFEN,
      typename MCR0_fields_::SERCLKDIV,
      typename MCR0_fields_::HSEN,
      typename MCR0_fields_::DOZEEN,
      typename MCR0_fields_::COMBINATIONEN,
      typename MCR0_fields_::SCKFREERUNEN,
      ftl::mmio::Reserved<1, 15>,
      typename MCR0_fields_::IPGRANTWAIT,
      typename MCR0_fields_::AHBGRANTWAIT> {
    using eSWRESET = typename MCR0_fields_::eSWRESET;
    using eMDIS = typename MCR0_fields_::eMDIS;
    using eRXCLKSRC = typename MCR0_fields_::eRXCLKSRC;
    using eARDFEN = typename MCR0_fields_::eARDFEN;
    using eATDFEN = typename MCR0_fields_::eATDFEN;
    using eSERCLKDIV = typename MCR0_fields_::eSERCLKDIV;
    using eHSEN = typename MCR0_fields_::eHSEN;
    using eDOZEEN = typename MCR0_fields_::eDOZEEN;
    using eCOMBINATIONEN = typename MCR0_fields_::eCOMBINATIONEN;
    using eSCKFREERUNEN = typename MCR0_fields_::eSCKFREERUNEN;
    using SWRESET = typename MCR0_fields_::SWRESET;
    using MDIS = typename MCR0_fields_::MDIS;
    using RXCLKSRC = typename MCR0_fields_::RXCLKSRC;
    using ARDFEN = typename MCR0_fields_::ARDFEN;
    using ATDFEN = typename MCR0_fields_::ATDFEN;
    using SERCLKDIV = typename MCR0_fields_::SERCLKDIV;
    using HSEN = typename MCR0_fields_::HSEN;
    using DOZEEN = typename MCR0_fields_::DOZEEN;
    using COMBINATIONEN = typename MCR0_fields_::COMBINATIONEN;
    using SCKFREERUNEN = typename MCR0_fields_::SCKFREERUNEN;
    using IPGRANTWAIT = typename MCR0_fields_::IPGRANTWAIT;
    using AHBGRANTWAIT = typename MCR0_fields_::AHBGRANTWAIT;
  };

  // Module Control 1
  struct MCR1_fields_ {
    // AHB Bus Wait
    using AHBBUSWAIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command Sequence Wait
    using SEQWAIT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCR1_fields_

  struct MCR1 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0xFFFFFFFFu,
      ftl::mmio::RW,
      typename MCR1_fields_::AHBBUSWAIT,
      typename MCR1_fields_::SEQWAIT> {
    using AHBBUSWAIT = typename MCR1_fields_::AHBBUSWAIT;
    using SEQWAIT = typename MCR1_fields_::SEQWAIT;
  };

  // Module Control 2
  struct MCR2_fields_ {
    enum class eCLRAHBBUFOPT : std::uint32_t {
      // Not cleared automatically
      eval0 = 0,
      // Cleared automatically
      eval1 = 1,
    };

    enum class eSAMEDEVICEEN : std::uint32_t {
      // In Individual mode, FLSHA1CRx and FLSHA2CRx, FLSHB1CRx and FLSHB2CRx settings are applied to Flash A1, A2, B1, B2 separately. In Parallel mode, FLSHA1CRx register setting is applied to Flash A1 and B1, FLSHA2CRx register setting is applied to Flash A2 and B2. FLSHB1CRx and FLSHB2CRx register settings are ignored.
      eindividual_parallel = 0,
      // FLSHA1CR0, FLSHA1CR1, and FLSHA1CR2 register settings are applied to Flash A1, A2, B1, B2. FLSHA2CRx, FLSHB1CRx, and FLSHB2CRx settings are ignored.
      eENABLE = 1,
    };

    enum class eSCKBDIFFOPT : std::uint32_t {
      // Use B_SCLK pad as port B SCLK clock output. Port B flash memory access is available.
      eval1 = 0,
      // Use B_SCLK pad as port A SCLK inverted clock output (Differential clock to A_SCLK). Port B flash memory access is not available.
      eval0 = 1,
    };

    // Clear AHB Buffer
    using CLRAHBBUFOPT = ftl::mmio::Field<1, 11, eCLRAHBBUFOPT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Same Device Enable
    using SAMEDEVICEEN = ftl::mmio::Field<1, 15, eSAMEDEVICEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // SCLK Port B Differential Output
    using SCKBDIFFOPT = ftl::mmio::Field<1, 19, eSCKBDIFFOPT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Resume Wait Duration
    using RESUMEWAIT = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCR2_fields_

  struct MCR2 : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x200081F7u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename MCR2_fields_::CLRAHBBUFOPT,
      ftl::mmio::Reserved<3, 12>,
      typename MCR2_fields_::SAMEDEVICEEN,
      ftl::mmio::Reserved<3, 16>,
      typename MCR2_fields_::SCKBDIFFOPT,
      ftl::mmio::Reserved<4, 20>,
      typename MCR2_fields_::RESUMEWAIT> {
    using eCLRAHBBUFOPT = typename MCR2_fields_::eCLRAHBBUFOPT;
    using eSAMEDEVICEEN = typename MCR2_fields_::eSAMEDEVICEEN;
    using eSCKBDIFFOPT = typename MCR2_fields_::eSCKBDIFFOPT;
    using CLRAHBBUFOPT = typename MCR2_fields_::CLRAHBBUFOPT;
    using SAMEDEVICEEN = typename MCR2_fields_::SAMEDEVICEEN;
    using SCKBDIFFOPT = typename MCR2_fields_::SCKBDIFFOPT;
    using RESUMEWAIT = typename MCR2_fields_::RESUMEWAIT;
  };

  // AHB Bus Control
  struct AHBCR_fields_ {
    enum class eAPAREN : std::uint32_t {
      // Flash is accessed in Individual mode.
      eindividual = 0,
      // Flash is accessed in Parallel mode.
      eENABLE = 1,
    };

    enum class eCLRAHBRXBUF : std::uint32_t {
      // No impact.
      eval0 = 0,
      // Enable clear operation.
      eval1 = 1,
    };

    enum class eCACHABLEEN : std::uint32_t {
      // Disabled. When an AHB bus cacheable read access occurs, FlexSPI does not check whether it hit the AHB transmit buffer.
      eval0 = 0,
      // Enabled. When an AHB bus cacheable read access occurs, FlexSPI first checks whether the access hit the AHB transmit buffer.
      eval1 = 1,
    };

    enum class eBUFFERABLEEN : std::uint32_t {
      // Disabled. For all AHB write accesses (bufferable or nonbufferable), FlexSPI returns AHB Bus Ready after transmitting all data and finishing command.
      eval0 = 0,
      // Enabled. For AHB bufferable write access, FlexSPI returns AHB Bus Ready when the arbitrator grants the AHB command. FlexSPI does not wait for the AHB command to finish.
      eval1 = 1,
    };

    enum class ePREFETCHEN : std::uint32_t {
      // Disable
      evalue0 = 0,
      // Enable
      evalue1 = 1,
    };

    enum class eREADADDROPT : std::uint32_t {
      // AHB read burst start address alignment is limited when flash memory is accessed in parallel mode or flash is word-addressable.
      eval0 = 0,
      // AHB read burst start address alignment is not limited. FlexSPI fetches more data than the AHB burst requires for address alignment.
      eval1 = 1,
    };

    enum class eREADSZALIGN : std::uint32_t {
      // Register settings such as PREFETCH_EN and OTFAD_EN determine AHB read size.
      eval0 = 0,
      // AHB read size to up size to 8 bytes aligned, no prefetching
      eval1 = 1,
    };

    enum class eECCEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSPLITEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSPLIT_LIMIT : std::uint32_t {
      // 8 bytes
      eval0 = 0,
      // 16 bytes
      eval1 = 1,
      // 32 bytes
      eval2 = 2,
      // 64 bytes
      eval3 = 3,
    };

    enum class eKEYECCEN : std::uint32_t {
      // Disable
      eval0 = 0,
      // Enable
      eval1 = 1,
    };

    enum class eECCSINGLEERRCLR : std::uint32_t {
      // No function
      eval0 = 0,
      // Clear
      eval1 = 1,
    };

    enum class eECCMULTIERRCLR : std::uint32_t {
      // No function
      eval0 = 0,
      // Clear
      eval1 = 1,
    };

    enum class eHMSTRIDREMAP : std::uint32_t {
      // Disable
      eval0 = 0,
      // Enable
      eval1 = 1,
    };

    enum class eECCSWAPEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // AHB Parallel Mode Enable
    using APAREN = ftl::mmio::Field<1, 0, eAPAREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clear AHB Receive Buffer
    using CLRAHBRXBUF = ftl::mmio::Field<1, 1, eCLRAHBRXBUF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Cacheable Read Access Enable
    using CACHABLEEN = ftl::mmio::Field<1, 3, eCACHABLEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bufferable Write Access Enable
    using BUFFERABLEEN = ftl::mmio::Field<1, 4, eBUFFERABLEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 5, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Address Option
    using READADDROPT = ftl::mmio::Field<1, 6, eREADADDROPT, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Size Alignment
    using READSZALIGN = ftl::mmio::Field<1, 10, eREADSZALIGN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read ECC Enable
    using ECCEN = ftl::mmio::Field<1, 11, eECCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Transaction Split Enable
    using SPLITEN = ftl::mmio::Field<1, 12, eSPLITEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Split Limit Size
    using SPLIT_LIMIT = ftl::mmio::Field<2, 13, eSPLIT_LIMIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // OTFAD Key Blob ECC Enable
    using KEYECCEN = ftl::mmio::Field<1, 15, eKEYECCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB ECC Single-Bit Error Clear
    using ECCSINGLEERRCLR = ftl::mmio::Field<1, 16, eECCSINGLEERRCLR, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB ECC Multibit Error Clear
    using ECCMULTIERRCLR = ftl::mmio::Field<1, 17, eECCMULTIERRCLR, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID Remapping Enable
    using HMSTRIDREMAP = ftl::mmio::Field<1, 18, eHMSTRIDREMAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // ECC Read Data Swap Enable
    using ECCSWAPEN = ftl::mmio::Field<1, 19, eECCSWAPEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBCR_fields_

  struct AHBCR : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000018u,
      ftl::mmio::RW,
      typename AHBCR_fields_::APAREN,
      typename AHBCR_fields_::CLRAHBRXBUF,
      ftl::mmio::Reserved<1, 2>,
      typename AHBCR_fields_::CACHABLEEN,
      typename AHBCR_fields_::BUFFERABLEEN,
      typename AHBCR_fields_::PREFETCHEN,
      typename AHBCR_fields_::READADDROPT,
      ftl::mmio::Reserved<3, 7>,
      typename AHBCR_fields_::READSZALIGN,
      typename AHBCR_fields_::ECCEN,
      typename AHBCR_fields_::SPLITEN,
      typename AHBCR_fields_::SPLIT_LIMIT,
      typename AHBCR_fields_::KEYECCEN,
      typename AHBCR_fields_::ECCSINGLEERRCLR,
      typename AHBCR_fields_::ECCMULTIERRCLR,
      typename AHBCR_fields_::HMSTRIDREMAP,
      typename AHBCR_fields_::ECCSWAPEN,
      ftl::mmio::Reserved<12, 20>> {
    using eAPAREN = typename AHBCR_fields_::eAPAREN;
    using eCLRAHBRXBUF = typename AHBCR_fields_::eCLRAHBRXBUF;
    using eCACHABLEEN = typename AHBCR_fields_::eCACHABLEEN;
    using eBUFFERABLEEN = typename AHBCR_fields_::eBUFFERABLEEN;
    using ePREFETCHEN = typename AHBCR_fields_::ePREFETCHEN;
    using eREADADDROPT = typename AHBCR_fields_::eREADADDROPT;
    using eREADSZALIGN = typename AHBCR_fields_::eREADSZALIGN;
    using eECCEN = typename AHBCR_fields_::eECCEN;
    using eSPLITEN = typename AHBCR_fields_::eSPLITEN;
    using eSPLIT_LIMIT = typename AHBCR_fields_::eSPLIT_LIMIT;
    using eKEYECCEN = typename AHBCR_fields_::eKEYECCEN;
    using eECCSINGLEERRCLR = typename AHBCR_fields_::eECCSINGLEERRCLR;
    using eECCMULTIERRCLR = typename AHBCR_fields_::eECCMULTIERRCLR;
    using eHMSTRIDREMAP = typename AHBCR_fields_::eHMSTRIDREMAP;
    using eECCSWAPEN = typename AHBCR_fields_::eECCSWAPEN;
    using APAREN = typename AHBCR_fields_::APAREN;
    using CLRAHBRXBUF = typename AHBCR_fields_::CLRAHBRXBUF;
    using CACHABLEEN = typename AHBCR_fields_::CACHABLEEN;
    using BUFFERABLEEN = typename AHBCR_fields_::BUFFERABLEEN;
    using PREFETCHEN = typename AHBCR_fields_::PREFETCHEN;
    using READADDROPT = typename AHBCR_fields_::READADDROPT;
    using READSZALIGN = typename AHBCR_fields_::READSZALIGN;
    using ECCEN = typename AHBCR_fields_::ECCEN;
    using SPLITEN = typename AHBCR_fields_::SPLITEN;
    using SPLIT_LIMIT = typename AHBCR_fields_::SPLIT_LIMIT;
    using KEYECCEN = typename AHBCR_fields_::KEYECCEN;
    using ECCSINGLEERRCLR = typename AHBCR_fields_::ECCSINGLEERRCLR;
    using ECCMULTIERRCLR = typename AHBCR_fields_::ECCMULTIERRCLR;
    using HMSTRIDREMAP = typename AHBCR_fields_::HMSTRIDREMAP;
    using ECCSWAPEN = typename AHBCR_fields_::ECCSWAPEN;
  };

  // Interrupt Enable
  struct INTEN_fields_ {
    enum class eIPCMDDONEEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eIPCMDGEEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eAHBCMDGEEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eIPCMDERREN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eAHBCMDERREN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eIPRXWAEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eIPTXWEEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eSCKSTOPBYRDEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eSCKSTOPBYWREN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eAHBBUSERROREN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eSEQTIMEOUTEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eKEYDONEEN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eKEYERROREN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eECCMULTIERREN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    enum class eECCSINGLEERREN : std::uint32_t {
      // Disable interrupt or no impact
      evalue0 = 0,
      // Enable interrupt
      evalue1 = 1,
    };

    // IP-Triggered Command Sequences Execution Finished Interrupt Enable
    using IPCMDDONEEN = ftl::mmio::Field<1, 0, eIPCMDDONEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // IP-Triggered Command Sequences Grant Timeout Interrupt Enable
    using IPCMDGEEN = ftl::mmio::Field<1, 1, eIPCMDGEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB-Triggered Command Sequences Grant Timeout Interrupt Enable.
    using AHBCMDGEEN = ftl::mmio::Field<1, 2, eAHBCMDGEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // IP-Triggered Command Sequences Error Detected Interrupt Enable
    using IPCMDERREN = ftl::mmio::Field<1, 3, eIPCMDERREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB-Triggered Command Sequences Error Detected Interrupt Enable
    using AHBCMDERREN = ftl::mmio::Field<1, 4, eAHBCMDERREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // IP Receive FIFO Watermark Available Interrupt Enable
    using IPRXWAEN = ftl::mmio::Field<1, 5, eIPRXWAEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // IP Transmit FIFO Watermark Empty Interrupt Enable
    using IPTXWEEN = ftl::mmio::Field<1, 6, eIPTXWEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // SCLK Stopped By Read Interrupt Enable
    using SCKSTOPBYRDEN = ftl::mmio::Field<1, 8, eSCKSTOPBYRDEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // SCLK Stopped By Write Interrupt Enable
    using SCKSTOPBYWREN = ftl::mmio::Field<1, 9, eSCKSTOPBYWREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Bus Error Interrupt Enable
    using AHBBUSERROREN = ftl::mmio::Field<1, 10, eAHBBUSERROREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sequence execution Timeout Interrupt Enable
    using SEQTIMEOUTEN = ftl::mmio::Field<1, 11, eSEQTIMEOUTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OTFAD Key Blob Processing Done Interrupt Enable
    using KEYDONEEN = ftl::mmio::Field<1, 12, eKEYDONEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OTFAD Key Blob Processing Error Interrupt Enable
    using KEYERROREN = ftl::mmio::Field<1, 13, eKEYERROREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ECC Multibit Error Interrupt Enable
    using ECCMULTIERREN = ftl::mmio::Field<1, 14, eECCMULTIERREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ECC Single-Bit Error Interrupt Enable
    using ECCSINGLEERREN = ftl::mmio::Field<1, 15, eECCSINGLEERREN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct INTEN_fields_

  struct INTEN : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename INTEN_fields_::IPCMDDONEEN,
      typename INTEN_fields_::IPCMDGEEN,
      typename INTEN_fields_::AHBCMDGEEN,
      typename INTEN_fields_::IPCMDERREN,
      typename INTEN_fields_::AHBCMDERREN,
      typename INTEN_fields_::IPRXWAEN,
      typename INTEN_fields_::IPTXWEEN,
      ftl::mmio::Reserved<1, 7>,
      typename INTEN_fields_::SCKSTOPBYRDEN,
      typename INTEN_fields_::SCKSTOPBYWREN,
      typename INTEN_fields_::AHBBUSERROREN,
      typename INTEN_fields_::SEQTIMEOUTEN,
      typename INTEN_fields_::KEYDONEEN,
      typename INTEN_fields_::KEYERROREN,
      typename INTEN_fields_::ECCMULTIERREN,
      typename INTEN_fields_::ECCSINGLEERREN,
      ftl::mmio::Reserved<16, 16>> {
    using eIPCMDDONEEN = typename INTEN_fields_::eIPCMDDONEEN;
    using eIPCMDGEEN = typename INTEN_fields_::eIPCMDGEEN;
    using eAHBCMDGEEN = typename INTEN_fields_::eAHBCMDGEEN;
    using eIPCMDERREN = typename INTEN_fields_::eIPCMDERREN;
    using eAHBCMDERREN = typename INTEN_fields_::eAHBCMDERREN;
    using eIPRXWAEN = typename INTEN_fields_::eIPRXWAEN;
    using eIPTXWEEN = typename INTEN_fields_::eIPTXWEEN;
    using eSCKSTOPBYRDEN = typename INTEN_fields_::eSCKSTOPBYRDEN;
    using eSCKSTOPBYWREN = typename INTEN_fields_::eSCKSTOPBYWREN;
    using eAHBBUSERROREN = typename INTEN_fields_::eAHBBUSERROREN;
    using eSEQTIMEOUTEN = typename INTEN_fields_::eSEQTIMEOUTEN;
    using eKEYDONEEN = typename INTEN_fields_::eKEYDONEEN;
    using eKEYERROREN = typename INTEN_fields_::eKEYERROREN;
    using eECCMULTIERREN = typename INTEN_fields_::eECCMULTIERREN;
    using eECCSINGLEERREN = typename INTEN_fields_::eECCSINGLEERREN;
    using IPCMDDONEEN = typename INTEN_fields_::IPCMDDONEEN;
    using IPCMDGEEN = typename INTEN_fields_::IPCMDGEEN;
    using AHBCMDGEEN = typename INTEN_fields_::AHBCMDGEEN;
    using IPCMDERREN = typename INTEN_fields_::IPCMDERREN;
    using AHBCMDERREN = typename INTEN_fields_::AHBCMDERREN;
    using IPRXWAEN = typename INTEN_fields_::IPRXWAEN;
    using IPTXWEEN = typename INTEN_fields_::IPTXWEEN;
    using SCKSTOPBYRDEN = typename INTEN_fields_::SCKSTOPBYRDEN;
    using SCKSTOPBYWREN = typename INTEN_fields_::SCKSTOPBYWREN;
    using AHBBUSERROREN = typename INTEN_fields_::AHBBUSERROREN;
    using SEQTIMEOUTEN = typename INTEN_fields_::SEQTIMEOUTEN;
    using KEYDONEEN = typename INTEN_fields_::KEYDONEEN;
    using KEYERROREN = typename INTEN_fields_::KEYERROREN;
    using ECCMULTIERREN = typename INTEN_fields_::ECCMULTIERREN;
    using ECCSINGLEERREN = typename INTEN_fields_::ECCSINGLEERREN;
  };

  // Interrupt
  struct INTR_fields_ {
    enum class eIPCMDDONE : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eIPCMDGE : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eAHBCMDGE : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eIPCMDERR : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eAHBCMDERR : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eIPRXWA : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eIPTXWE : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eSCKSTOPBYRD : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eSCKSTOPBYWR : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eAHBBUSERROR : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eSEQTIMEOUT : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eKEYERROR : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eECCMULTIERR : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    enum class eECCSINGLEERR : std::uint32_t {
      // Interrupt condition has not occurred
      eNO_INTERRUPT = 0,
      // Interrupt condition has occurred
      eINTERRUPT = 1,
    };

    // IP-Triggered Command Sequences Execution Finished
    using IPCMDDONE = ftl::mmio::Field<1, 0, eIPCMDDONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IP-Triggered Command Sequences Grant Timeout
    using IPCMDGE = ftl::mmio::Field<1, 1, eIPCMDGE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AHB-Triggered Command Sequences Grant Timeout
    using AHBCMDGE = ftl::mmio::Field<1, 2, eAHBCMDGE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IP-Triggered Command Sequences Error
    using IPCMDERR = ftl::mmio::Field<1, 3, eIPCMDERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AHB-Triggered Command Sequences Error
    using AHBCMDERR = ftl::mmio::Field<1, 4, eAHBCMDERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IP Receive FIFO Watermark Available
    using IPRXWA = ftl::mmio::Field<1, 5, eIPRXWA, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IP Transmit FIFO Watermark Empty
    using IPTXWE = ftl::mmio::Field<1, 6, eIPTXWE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // SCLK Stopped Due To Full Receive FIFO
    using SCKSTOPBYRD = ftl::mmio::Field<1, 8, eSCKSTOPBYRD, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // SCLK Stopped Due To Empty Transmit FIFO
    using SCKSTOPBYWR = ftl::mmio::Field<1, 9, eSCKSTOPBYWR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AHB Bus Error
    using AHBBUSERROR = ftl::mmio::Field<1, 10, eAHBBUSERROR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Sequence Execution Timeout
    using SEQTIMEOUT = ftl::mmio::Field<1, 11, eSEQTIMEOUT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OTFAD key blob processing done interrupt.
    using KEYDONE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OTFAD Key Blob Processing Error
    using KEYERROR = ftl::mmio::Field<1, 13, eKEYERROR, ftl::mmio::RO, ftl::mmio::Normal>;
    // ECC Multibit Error
    using ECCMULTIERR = ftl::mmio::Field<1, 14, eECCMULTIERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ECC Single-Bit Error
    using ECCSINGLEERR = ftl::mmio::Field<1, 15, eECCSINGLEERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct INTR_fields_

  struct INTR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename INTR_fields_::IPCMDDONE,
      typename INTR_fields_::IPCMDGE,
      typename INTR_fields_::AHBCMDGE,
      typename INTR_fields_::IPCMDERR,
      typename INTR_fields_::AHBCMDERR,
      typename INTR_fields_::IPRXWA,
      typename INTR_fields_::IPTXWE,
      ftl::mmio::Reserved<1, 7>,
      typename INTR_fields_::SCKSTOPBYRD,
      typename INTR_fields_::SCKSTOPBYWR,
      typename INTR_fields_::AHBBUSERROR,
      typename INTR_fields_::SEQTIMEOUT,
      typename INTR_fields_::KEYDONE,
      typename INTR_fields_::KEYERROR,
      typename INTR_fields_::ECCMULTIERR,
      typename INTR_fields_::ECCSINGLEERR,
      ftl::mmio::Reserved<16, 16>> {
    using eIPCMDDONE = typename INTR_fields_::eIPCMDDONE;
    using eIPCMDGE = typename INTR_fields_::eIPCMDGE;
    using eAHBCMDGE = typename INTR_fields_::eAHBCMDGE;
    using eIPCMDERR = typename INTR_fields_::eIPCMDERR;
    using eAHBCMDERR = typename INTR_fields_::eAHBCMDERR;
    using eIPRXWA = typename INTR_fields_::eIPRXWA;
    using eIPTXWE = typename INTR_fields_::eIPTXWE;
    using eSCKSTOPBYRD = typename INTR_fields_::eSCKSTOPBYRD;
    using eSCKSTOPBYWR = typename INTR_fields_::eSCKSTOPBYWR;
    using eAHBBUSERROR = typename INTR_fields_::eAHBBUSERROR;
    using eSEQTIMEOUT = typename INTR_fields_::eSEQTIMEOUT;
    using eKEYERROR = typename INTR_fields_::eKEYERROR;
    using eECCMULTIERR = typename INTR_fields_::eECCMULTIERR;
    using eECCSINGLEERR = typename INTR_fields_::eECCSINGLEERR;
    using IPCMDDONE = typename INTR_fields_::IPCMDDONE;
    using IPCMDGE = typename INTR_fields_::IPCMDGE;
    using AHBCMDGE = typename INTR_fields_::AHBCMDGE;
    using IPCMDERR = typename INTR_fields_::IPCMDERR;
    using AHBCMDERR = typename INTR_fields_::AHBCMDERR;
    using IPRXWA = typename INTR_fields_::IPRXWA;
    using IPTXWE = typename INTR_fields_::IPTXWE;
    using SCKSTOPBYRD = typename INTR_fields_::SCKSTOPBYRD;
    using SCKSTOPBYWR = typename INTR_fields_::SCKSTOPBYWR;
    using AHBBUSERROR = typename INTR_fields_::AHBBUSERROR;
    using SEQTIMEOUT = typename INTR_fields_::SEQTIMEOUT;
    using KEYDONE = typename INTR_fields_::KEYDONE;
    using KEYERROR = typename INTR_fields_::KEYERROR;
    using ECCMULTIERR = typename INTR_fields_::ECCMULTIERR;
    using ECCSINGLEERR = typename INTR_fields_::ECCSINGLEERR;
  };

  // LUT Key
  struct LUTKEY_fields_ {
    // LUT Key
    using KEY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LUTKEY_fields_

  struct LUTKEY : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x5AF05AF0u,
      ftl::mmio::RW,
      typename LUTKEY_fields_::KEY> {
    using KEY = typename LUTKEY_fields_::KEY;
  };

  // LUT Control
  struct LUTCR_fields_ {
    enum class eLOCK : std::uint32_t {
      // LUT is unlocked (LUTCR[UNLOCK] must be 1)
      evalue0 = 0,
      // LUT is locked and cannot be written
      evalue1 = 1,
    };

    enum class eUNLOCK : std::uint32_t {
      // LUT is locked (LUTCR[LOCK] must be 1)
      evalue0 = 0,
      // LUT is unlocked and can be written
      evalue1 = 1,
    };

    // Lock LUT
    using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Unlock LUT
    using UNLOCK = ftl::mmio::Field<1, 1, eUNLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LUTCR_fields_

  struct LUTCR : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      typename LUTCR_fields_::LOCK,
      typename LUTCR_fields_::UNLOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eLOCK = typename LUTCR_fields_::eLOCK;
    using eUNLOCK = typename LUTCR_fields_::eUNLOCK;
    using LOCK = typename LUTCR_fields_::LOCK;
    using UNLOCK = typename LUTCR_fields_::UNLOCK;
  };

  // AHB Receive Buffer 0 Control 0
  struct AHBRXBUF0CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF0CR0_fields_

  struct AHBRXBUF0CR0 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x80000040u,
      ftl::mmio::RW,
      typename AHBRXBUF0CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF0CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF0CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF0CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF0CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF0CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF0CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF0CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF0CR0_fields_::PREFETCHEN;
  };

  // AHB Receive Buffer 1 Control 0
  struct AHBRXBUF1CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF1CR0_fields_

  struct AHBRXBUF1CR0 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x80010040u,
      ftl::mmio::RW,
      typename AHBRXBUF1CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF1CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF1CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF1CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF1CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF1CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF1CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF1CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF1CR0_fields_::PREFETCHEN;
  };

  // AHB Receive Buffer 2 Control 0
  struct AHBRXBUF2CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF2CR0_fields_

  struct AHBRXBUF2CR0 : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x80020040u,
      ftl::mmio::RW,
      typename AHBRXBUF2CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF2CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF2CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF2CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF2CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF2CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF2CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF2CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF2CR0_fields_::PREFETCHEN;
  };

  // AHB Receive Buffer 3 Control 0
  struct AHBRXBUF3CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF3CR0_fields_

  struct AHBRXBUF3CR0 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x80030040u,
      ftl::mmio::RW,
      typename AHBRXBUF3CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF3CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF3CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF3CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF3CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF3CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF3CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF3CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF3CR0_fields_::PREFETCHEN;
  };

  // AHB Receive Buffer 4 Control 0
  struct AHBRXBUF4CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF4CR0_fields_

  struct AHBRXBUF4CR0 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x80040040u,
      ftl::mmio::RW,
      typename AHBRXBUF4CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF4CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF4CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF4CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF4CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF4CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF4CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF4CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF4CR0_fields_::PREFETCHEN;
  };

  // AHB Receive Buffer 5 Control 0
  struct AHBRXBUF5CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF5CR0_fields_

  struct AHBRXBUF5CR0 : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x80050040u,
      ftl::mmio::RW,
      typename AHBRXBUF5CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF5CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF5CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF5CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF5CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF5CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF5CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF5CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF5CR0_fields_::PREFETCHEN;
  };

  // AHB Receive Buffer 6 Control 0
  struct AHBRXBUF6CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF6CR0_fields_

  struct AHBRXBUF6CR0 : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x80060040u,
      ftl::mmio::RW,
      typename AHBRXBUF6CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF6CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF6CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF6CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF6CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF6CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF6CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF6CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF6CR0_fields_::PREFETCHEN;
  };

  // AHB Receive Buffer 7 Control 0
  struct AHBRXBUF7CR0_fields_ {
    enum class ePREFETCHEN : std::uint32_t {
      // Disabled
      evalue0 = 0,
      // Enabled when is enabled.
      evalue1 = 1,
    };

    // AHB Receive Buffer Size
    using BUFSZ = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller ID
    using MSTRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Controller Read Priority
    using PRIORITY = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Prefetch Enable
    using PREFETCHEN = ftl::mmio::Field<1, 31, ePREFETCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AHBRXBUF7CR0_fields_

  struct AHBRXBUF7CR0 : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0x80070040u,
      ftl::mmio::RW,
      typename AHBRXBUF7CR0_fields_::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename AHBRXBUF7CR0_fields_::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename AHBRXBUF7CR0_fields_::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename AHBRXBUF7CR0_fields_::PREFETCHEN> {
    using ePREFETCHEN = typename AHBRXBUF7CR0_fields_::ePREFETCHEN;
    using BUFSZ = typename AHBRXBUF7CR0_fields_::BUFSZ;
    using MSTRID = typename AHBRXBUF7CR0_fields_::MSTRID;
    using PRIORITY = typename AHBRXBUF7CR0_fields_::PRIORITY;
    using PREFETCHEN = typename AHBRXBUF7CR0_fields_::PREFETCHEN;
  };

  // Flash Control 0
  struct FLSHA1CR0_fields_ {
    enum class eSPLITWREN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSPLITRDEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Flash Size in KB
    using FLSHSZ = ftl::mmio::Field<23, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Write Access Split Function Enable
    using SPLITWREN = ftl::mmio::Field<1, 30, eSPLITWREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Access Split Function Enable
    using SPLITRDEN = ftl::mmio::Field<1, 31, eSPLITRDEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FLSHA1CR0_fields_

  struct FLSHA1CR0 : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename FLSHA1CR0_fields_::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename FLSHA1CR0_fields_::SPLITWREN,
      typename FLSHA1CR0_fields_::SPLITRDEN> {
    using eSPLITWREN = typename FLSHA1CR0_fields_::eSPLITWREN;
    using eSPLITRDEN = typename FLSHA1CR0_fields_::eSPLITRDEN;
    using FLSHSZ = typename FLSHA1CR0_fields_::FLSHSZ;
    using SPLITWREN = typename FLSHA1CR0_fields_::SPLITWREN;
    using SPLITRDEN = typename FLSHA1CR0_fields_::SPLITRDEN;
  };

  // Flash Control 0
  struct FLSHA2CR0_fields_ {
    enum class eSPLITWREN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSPLITRDEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Flash Size in KB
    using FLSHSZ = ftl::mmio::Field<23, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Write Access Split Function Enable
    using SPLITWREN = ftl::mmio::Field<1, 30, eSPLITWREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Access Split Function Enable
    using SPLITRDEN = ftl::mmio::Field<1, 31, eSPLITRDEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FLSHA2CR0_fields_

  struct FLSHA2CR0 : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename FLSHA2CR0_fields_::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename FLSHA2CR0_fields_::SPLITWREN,
      typename FLSHA2CR0_fields_::SPLITRDEN> {
    using eSPLITWREN = typename FLSHA2CR0_fields_::eSPLITWREN;
    using eSPLITRDEN = typename FLSHA2CR0_fields_::eSPLITRDEN;
    using FLSHSZ = typename FLSHA2CR0_fields_::FLSHSZ;
    using SPLITWREN = typename FLSHA2CR0_fields_::SPLITWREN;
    using SPLITRDEN = typename FLSHA2CR0_fields_::SPLITRDEN;
  };

  // Flash Control 0
  struct FLSHB1CR0_fields_ {
    enum class eSPLITWREN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSPLITRDEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Flash Size in KB
    using FLSHSZ = ftl::mmio::Field<23, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Write Access Split Function Enable
    using SPLITWREN = ftl::mmio::Field<1, 30, eSPLITWREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Access Split Function Enable
    using SPLITRDEN = ftl::mmio::Field<1, 31, eSPLITRDEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FLSHB1CR0_fields_

  struct FLSHB1CR0 : ftl::mmio::Register<
      kBase + 0x68u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename FLSHB1CR0_fields_::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename FLSHB1CR0_fields_::SPLITWREN,
      typename FLSHB1CR0_fields_::SPLITRDEN> {
    using eSPLITWREN = typename FLSHB1CR0_fields_::eSPLITWREN;
    using eSPLITRDEN = typename FLSHB1CR0_fields_::eSPLITRDEN;
    using FLSHSZ = typename FLSHB1CR0_fields_::FLSHSZ;
    using SPLITWREN = typename FLSHB1CR0_fields_::SPLITWREN;
    using SPLITRDEN = typename FLSHB1CR0_fields_::SPLITRDEN;
  };

  // Flash Control 0
  struct FLSHB2CR0_fields_ {
    enum class eSPLITWREN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSPLITRDEN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Flash Size in KB
    using FLSHSZ = ftl::mmio::Field<23, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Write Access Split Function Enable
    using SPLITWREN = ftl::mmio::Field<1, 30, eSPLITWREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Read Access Split Function Enable
    using SPLITRDEN = ftl::mmio::Field<1, 31, eSPLITRDEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FLSHB2CR0_fields_

  struct FLSHB2CR0 : ftl::mmio::Register<
      kBase + 0x6Cu,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename FLSHB2CR0_fields_::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename FLSHB2CR0_fields_::SPLITWREN,
      typename FLSHB2CR0_fields_::SPLITRDEN> {
    using eSPLITWREN = typename FLSHB2CR0_fields_::eSPLITWREN;
    using eSPLITRDEN = typename FLSHB2CR0_fields_::eSPLITRDEN;
    using FLSHSZ = typename FLSHB2CR0_fields_::FLSHSZ;
    using SPLITWREN = typename FLSHB2CR0_fields_::SPLITWREN;
    using SPLITRDEN = typename FLSHB2CR0_fields_::SPLITRDEN;
  };

  // Flash Control 1
  struct FLSHCR1_fields_ {
    enum class eWA : std::uint32_t {
      // Byte-addressable
      evalue0 = 0,
      // Word-addressable
      evalue1 = 1,
    };

    enum class eCSINTERVALUNIT : std::uint32_t {
      // 1 serial clock cycle
      eval0 = 0,
      // 256 serial clock cycles
      eval1 = 1,
    };

    // Serial Flash CS Setup Time
    using TCSS = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Serial Flash CS Hold Time
    using TCSH = ftl::mmio::Field<5, 5, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Word-Addressable
    using WA = ftl::mmio::Field<1, 10, eWA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column Address Size
    using CAS = ftl::mmio::Field<4, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Chip Select Interval Unit
    using CSINTERVALUNIT = ftl::mmio::Field<1, 15, eCSINTERVALUNIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Chip Select Interval
    using CSINTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FLSHCR1_fields_

  template<std::uint32_t Index>
  struct FLSHCR1 : ftl::mmio::Register<
      kBase + 0x70u + (Index * 0x4u),
      std::uint32_t,
      0x00000063u,
      ftl::mmio::RW,
      typename FLSHCR1_fields_::TCSS,
      typename FLSHCR1_fields_::TCSH,
      typename FLSHCR1_fields_::WA,
      typename FLSHCR1_fields_::CAS,
      typename FLSHCR1_fields_::CSINTERVALUNIT,
      typename FLSHCR1_fields_::CSINTERVAL> {
    static_assert(Index < 4u, "FLSHCR1: Index out of range");
    using eWA = typename FLSHCR1_fields_::eWA;
    using eCSINTERVALUNIT = typename FLSHCR1_fields_::eCSINTERVALUNIT;
    using TCSS = typename FLSHCR1_fields_::TCSS;
    using TCSH = typename FLSHCR1_fields_::TCSH;
    using WA = typename FLSHCR1_fields_::WA;
    using CAS = typename FLSHCR1_fields_::CAS;
    using CSINTERVALUNIT = typename FLSHCR1_fields_::CSINTERVALUNIT;
    using CSINTERVAL = typename FLSHCR1_fields_::CSINTERVAL;
  };

  // Flash Control 2
  struct FLSHCR2_fields_ {
    enum class eAWRWAITUNIT : std::uint32_t {
      // 2
      eval0 = 0,
      // 8
      eval1 = 1,
      // 32
      eval2 = 2,
      // 128
      eval3 = 3,
      // 512
      eval4 = 4,
      // 2048
      eval5 = 5,
      // 8192
      eval6 = 6,
      // 32768
      eval7 = 7,
    };

    // Sequence Index for AHB Read-Triggered Command in LUT
    using ARDSEQID = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sequence Number for AHB Read-Triggered Command
    using ARDSEQNUM = ftl::mmio::Field<3, 5, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sequence Index for AHB Write-Triggered Command
    using AWRSEQID = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sequence Number for AHB Write-Triggered Command
    using AWRSEQNUM = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHB Write Wait
    using AWRWAIT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AWRWAIT Unit
    using AWRWAITUNIT = ftl::mmio::Field<3, 28, eAWRWAITUNIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using CLRINSTRPTR = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FLSHCR2_fields_

  template<std::uint32_t Index>
  struct FLSHCR2 : ftl::mmio::Register<
      kBase + 0x80u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename FLSHCR2_fields_::ARDSEQID,
      ftl::mmio::Reserved<1, 4>,
      typename FLSHCR2_fields_::ARDSEQNUM,
      typename FLSHCR2_fields_::AWRSEQID,
      ftl::mmio::Reserved<1, 12>,
      typename FLSHCR2_fields_::AWRSEQNUM,
      typename FLSHCR2_fields_::AWRWAIT,
      typename FLSHCR2_fields_::AWRWAITUNIT,
      typename FLSHCR2_fields_::CLRINSTRPTR> {
    static_assert(Index < 4u, "FLSHCR2: Index out of range");
    using eAWRWAITUNIT = typename FLSHCR2_fields_::eAWRWAITUNIT;
    using ARDSEQID = typename FLSHCR2_fields_::ARDSEQID;
    using ARDSEQNUM = typename FLSHCR2_fields_::ARDSEQNUM;
    using AWRSEQID = typename FLSHCR2_fields_::AWRSEQID;
    using AWRSEQNUM = typename FLSHCR2_fields_::AWRSEQNUM;
    using AWRWAIT = typename FLSHCR2_fields_::AWRWAIT;
    using AWRWAITUNIT = typename FLSHCR2_fields_::AWRWAITUNIT;
    using CLRINSTRPTR = typename FLSHCR2_fields_::CLRINSTRPTR;
  };

  // Flash Control 4
  struct FLSHCR4_fields_ {
    enum class eWMOPT1 : std::uint32_t {
      // When writing to an external device, DQS pin is used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst start address alignment is not limited.
      eDISABLE = 0,
      // When writing to an external device, DQS pin is not used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst start address alignment is limited.
      eENABLE = 1,
    };

    enum class eWMOPT2 : std::uint32_t {
      // When writing to an external device, DQS pin is used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst length is not limited.
      eval0 = 0,
      // When writing to an external device, DQS pin is not used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst length is limited. The minimum write burst length should be 4.
      eval1 = 1,
    };

    enum class eWMENA : std::uint32_t {
      // Disabled. When writing to external device, DQS(RWDS) pin is not driven.
      eval0 = 0,
      // Enabled. When writing to external device, FlexSPI drives DQS(RWDS) pin as write mask output.
      eval1 = 1,
    };

    enum class eWMENB : std::uint32_t {
      // Disabled. When writing to external device, DQS(RWDS) pin is not driven.
      eval0 = 0,
      // Enabled. When writing to external device, FlexSPI drives DQS(RWDS) pin as write mask output.
      eval1 = 1,
    };

    // Write Mask Option 1
    using WMOPT1 = ftl::mmio::Field<1, 0, eWMOPT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Mask Option 2
    using WMOPT2 = ftl::mmio::Field<1, 1, eWMOPT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Mask Enable for Port A
    using WMENA = ftl::mmio::Field<1, 2, eWMENA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Mask Enable for Port B
    using WMENB = ftl::mmio::Field<1, 3, eWMENB, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FLSHCR4_fields_

  struct FLSHCR4 : ftl::mmio::Register<
      kBase + 0x94u,
      std::uint32_t,
      0x000000C3u,
      ftl::mmio::RW,
      typename FLSHCR4_fields_::WMOPT1,
      typename FLSHCR4_fields_::WMOPT2,
      typename FLSHCR4_fields_::WMENA,
      typename FLSHCR4_fields_::WMENB,
      ftl::mmio::Reserved<28, 4>> {
    using eWMOPT1 = typename FLSHCR4_fields_::eWMOPT1;
    using eWMOPT2 = typename FLSHCR4_fields_::eWMOPT2;
    using eWMENA = typename FLSHCR4_fields_::eWMENA;
    using eWMENB = typename FLSHCR4_fields_::eWMENB;
    using WMOPT1 = typename FLSHCR4_fields_::WMOPT1;
    using WMOPT2 = typename FLSHCR4_fields_::WMOPT2;
    using WMENA = typename FLSHCR4_fields_::WMENA;
    using WMENB = typename FLSHCR4_fields_::WMENB;
  };

  // IP Control 0
  struct IPCR0_fields_ {
    // Serial Flash Address
    using SFAR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IPCR0_fields_

  struct IPCR0 : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IPCR0_fields_::SFAR> {
    using SFAR = typename IPCR0_fields_::SFAR;
  };

  // IP Control 1
  struct IPCR1_fields_ {
    enum class eIPAREN : std::uint32_t {
      // Disabled. Flash memory is accessed in Individual mode.
      eDISABLE = 0,
      // Enabled. Flash memory is accessed in Parallel mode.
      eENABLE = 1,
    };

    // Flash Read/Program Data Size (in bytes) for IP command.
    using IDATSZ = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sequence Index in LUT for IP command.
    using ISEQID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sequence Number for IP command: ISEQNUM+1.
    using ISEQNUM = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Parallel Mode Enable for IP Commands
    using IPAREN = ftl::mmio::Field<1, 31, eIPAREN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IPCR1_fields_

  struct IPCR1 : ftl::mmio::Register<
      kBase + 0xA4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IPCR1_fields_::IDATSZ,
      typename IPCR1_fields_::ISEQID,
      ftl::mmio::Reserved<4, 20>,
      typename IPCR1_fields_::ISEQNUM,
      ftl::mmio::Reserved<4, 27>,
      typename IPCR1_fields_::IPAREN> {
    using eIPAREN = typename IPCR1_fields_::eIPAREN;
    using IDATSZ = typename IPCR1_fields_::IDATSZ;
    using ISEQID = typename IPCR1_fields_::ISEQID;
    using ISEQNUM = typename IPCR1_fields_::ISEQNUM;
    using IPAREN = typename IPCR1_fields_::IPAREN;
  };

  // IP Command
  struct IPCMD_fields_ {
    enum class eTRG : std::uint32_t {
      // No action
      evalue0 = 0,
      // Start the IP command that the IPCR0 and IPCR1 registers define.
      evalue1 = 1,
    };

    // Command Trigger
    using TRG = ftl::mmio::Field<1, 0, eTRG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IPCMD_fields_

  struct IPCMD : ftl::mmio::Register<
      kBase + 0xB0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IPCMD_fields_::TRG,
      ftl::mmio::Reserved<31, 1>> {
    using eTRG = typename IPCMD_fields_::eTRG;
    using TRG = typename IPCMD_fields_::TRG;
  };

  // IP Receive FIFO Control
  struct IPRXFCR_fields_ {
    enum class eCLRIPRXF : std::uint32_t {
      // No function
      evalue0 = 0,
      // A clock cycle pulse clears all valid data entries in IP receive FIFO.
      evalue1 = 1,
    };

    enum class eRXDMAEN : std::uint32_t {
      // Disabled. The processor reads the FIFO.
      eval0 = 0,
      // Enabled. DMA reads the FIFO.
      eval1 = 1,
    };

    // Clear IP Receive FIFO
    using CLRIPRXF = ftl::mmio::Field<1, 0, eCLRIPRXF, ftl::mmio::RW, ftl::mmio::Normal>;
    // IP Receive FIFO Reading by DMA Enable
    using RXDMAEN = ftl::mmio::Field<1, 1, eRXDMAEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // IP Receive FIFO Watermark Level
    using RXWMRK = ftl::mmio::Field<5, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IPRXFCR_fields_

  struct IPRXFCR : ftl::mmio::Register<
      kBase + 0xB8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IPRXFCR_fields_::CLRIPRXF,
      typename IPRXFCR_fields_::RXDMAEN,
      typename IPRXFCR_fields_::RXWMRK,
      ftl::mmio::Reserved<25, 7>> {
    using eCLRIPRXF = typename IPRXFCR_fields_::eCLRIPRXF;
    using eRXDMAEN = typename IPRXFCR_fields_::eRXDMAEN;
    using CLRIPRXF = typename IPRXFCR_fields_::CLRIPRXF;
    using RXDMAEN = typename IPRXFCR_fields_::RXDMAEN;
    using RXWMRK = typename IPRXFCR_fields_::RXWMRK;
  };

  // IP Transmit FIFO Control
  struct IPTXFCR_fields_ {
    enum class eCLRIPTXF : std::uint32_t {
      // No function
      evalue0 = 0,
      // A clock cycle pulse clears all valid data entries in the IP transmit FIFO.
      evalue1 = 1,
    };

    enum class eTXDMAEN : std::uint32_t {
      // Processor
      eval0 = 0,
      // DMA
      eval1 = 1,
    };

    // Clear IP Transmit FIFO
    using CLRIPTXF = ftl::mmio::Field<1, 0, eCLRIPTXF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit FIFO DMA Enable
    using TXDMAEN = ftl::mmio::Field<1, 1, eTXDMAEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Watermark Level
    using TXWMRK = ftl::mmio::Field<5, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IPTXFCR_fields_

  struct IPTXFCR : ftl::mmio::Register<
      kBase + 0xBCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IPTXFCR_fields_::CLRIPTXF,
      typename IPTXFCR_fields_::TXDMAEN,
      typename IPTXFCR_fields_::TXWMRK,
      ftl::mmio::Reserved<25, 7>> {
    using eCLRIPTXF = typename IPTXFCR_fields_::eCLRIPTXF;
    using eTXDMAEN = typename IPTXFCR_fields_::eTXDMAEN;
    using CLRIPTXF = typename IPTXFCR_fields_::CLRIPTXF;
    using TXDMAEN = typename IPTXFCR_fields_::TXDMAEN;
    using TXWMRK = typename IPTXFCR_fields_::TXWMRK;
  };

  // DLL Control 0
  struct DLLCR_fields_ {
    enum class eDLLEN : std::uint32_t {
      // Disable
      evalue0 = 0,
      // Enable
      evalue1 = 1,
    };

    enum class eDLLRESET : std::uint32_t {
      // No function
      evalue0 = 0,
      // Force DLL reset.
      evalue1 = 1,
    };

    enum class eOVRDEN : std::uint32_t {
      // Disable
      evalue0 = 0,
      // Enable
      evalue1 = 1,
    };

    // DLL Calibration Enable
    using DLLEN = ftl::mmio::Field<1, 0, eDLLEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL reset
    using DLLRESET = ftl::mmio::Field<1, 1, eDLLRESET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Target Delay Line
    using SLVDLYTARGET = ftl::mmio::Field<4, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Target Clock Delay Line Override Value Enable
    using OVRDEN = ftl::mmio::Field<1, 8, eOVRDEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Target Clock Delay Line Override Value
    using OVRDVAL = ftl::mmio::Field<6, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reference Clock Delay Line Phase Adjust Gap. REFPHASEGAP setting of 2h is recommended if DLLEN is set.
    using REFPHASEGAP = ftl::mmio::Field<2, 15, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DLLCR_fields_

  template<std::uint32_t Index>
  struct DLLCR : ftl::mmio::Register<
      kBase + 0xC0u + (Index * 0x4u),
      std::uint32_t,
      0x00000100u,
      ftl::mmio::RW,
      typename DLLCR_fields_::DLLEN,
      typename DLLCR_fields_::DLLRESET,
      ftl::mmio::Reserved<1, 2>,
      typename DLLCR_fields_::SLVDLYTARGET,
      ftl::mmio::Reserved<1, 7>,
      typename DLLCR_fields_::OVRDEN,
      typename DLLCR_fields_::OVRDVAL,
      typename DLLCR_fields_::REFPHASEGAP,
      ftl::mmio::Reserved<15, 17>> {
    static_assert(Index < 2u, "DLLCR: Index out of range");
    using eDLLEN = typename DLLCR_fields_::eDLLEN;
    using eDLLRESET = typename DLLCR_fields_::eDLLRESET;
    using eOVRDEN = typename DLLCR_fields_::eOVRDEN;
    using DLLEN = typename DLLCR_fields_::DLLEN;
    using DLLRESET = typename DLLCR_fields_::DLLRESET;
    using SLVDLYTARGET = typename DLLCR_fields_::SLVDLYTARGET;
    using OVRDEN = typename DLLCR_fields_::OVRDEN;
    using OVRDVAL = typename DLLCR_fields_::OVRDVAL;
    using REFPHASEGAP = typename DLLCR_fields_::REFPHASEGAP;
  };

  // Misc Control 4
  struct MISCCR4_fields_ {
    // AHB Address
    using AHBADDRESS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MISCCR4_fields_

  struct MISCCR4 : ftl::mmio::Register<
      kBase + 0xD0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MISCCR4_fields_::AHBADDRESS> {
    using AHBADDRESS = typename MISCCR4_fields_::AHBADDRESS;
  };

  // Miscellaneous Control 5
  struct MISCCR5_fields_ {
    // ECC Single-Bit Error Correction Indicator
    using ECCSINGLEERRORCORR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MISCCR5_fields_

  struct MISCCR5 : ftl::mmio::Register<
      kBase + 0xD4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MISCCR5_fields_::ECCSINGLEERRORCORR> {
    using ECCSINGLEERRORCORR = typename MISCCR5_fields_::ECCSINGLEERRORCORR;
  };

  // Miscellaneous Control 6
  struct MISCCR6_fields_ {
    enum class eVALID : std::uint32_t {
      // Invalid
      eINVALID = 0,
      // Valid
      eVALID = 1,
    };

    enum class eHIT : std::uint32_t {
      // Address not hit
      eNOT_HIT = 0,
      // Address hit
      eHIT = 1,
    };

    // ECC Single-Bit Error Information Valid
    using VALID = ftl::mmio::Field<1, 0, eVALID, ftl::mmio::RO, ftl::mmio::Normal>;
    // ECC Single-Bit Error Information Hit
    using HIT = ftl::mmio::Field<1, 1, eHIT, ftl::mmio::RO, ftl::mmio::Normal>;
    // ECC Single-Bit Error Address
    using ADDRESS = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MISCCR6_fields_

  struct MISCCR6 : ftl::mmio::Register<
      kBase + 0xD8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MISCCR6_fields_::VALID,
      typename MISCCR6_fields_::HIT,
      typename MISCCR6_fields_::ADDRESS> {
    using eVALID = typename MISCCR6_fields_::eVALID;
    using eHIT = typename MISCCR6_fields_::eHIT;
    using VALID = typename MISCCR6_fields_::VALID;
    using HIT = typename MISCCR6_fields_::HIT;
    using ADDRESS = typename MISCCR6_fields_::ADDRESS;
  };

  // Miscellaneous Control 7
  struct MISCCR7_fields_ {
    enum class eHIT : std::uint32_t {
      // Address not hit
      eNOT_HIT = 0,
      // Address hit
      eHIT = 1,
    };

    // ECC Multibit Error Information Valid
    using VALID = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // ECC Multibit Error Information Hit
    using HIT = ftl::mmio::Field<1, 1, eHIT, ftl::mmio::RO, ftl::mmio::Normal>;
    // ECC multi error address
    using ADDRESS = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MISCCR7_fields_

  struct MISCCR7 : ftl::mmio::Register<
      kBase + 0xDCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MISCCR7_fields_::VALID,
      typename MISCCR7_fields_::HIT,
      typename MISCCR7_fields_::ADDRESS> {
    using eHIT = typename MISCCR7_fields_::eHIT;
    using VALID = typename MISCCR7_fields_::VALID;
    using HIT = typename MISCCR7_fields_::HIT;
    using ADDRESS = typename MISCCR7_fields_::ADDRESS;
  };

  // Status 0
  struct STS0_fields_ {
    enum class eSEQIDLE : std::uint32_t {
      // Not idle
      evalue0 = 0,
      // Idle
      evalue1 = 1,
    };

    enum class eARBIDLE : std::uint32_t {
      // Not idle
      evalue0 = 0,
      // Idle
      evalue1 = 1,
    };

    enum class eARBCMDSRC : std::uint32_t {
      // Trigger source is AHB read command.
      eval0 = 0,
      // Trigger source is AHB write command.
      eval1 = 1,
      // Trigger source is IP command (by writing 1 to IPCMD[TRG]).
      eval2 = 2,
      // Trigger source is a suspended command that has resumed.
      eval3 = 3,
    };

    // SEQ_CTL State Machine Idle
    using SEQIDLE = ftl::mmio::Field<1, 0, eSEQIDLE, ftl::mmio::RO, ftl::mmio::Normal>;
    // ARB_CTL State Machine Idle
    using ARBIDLE = ftl::mmio::Field<1, 1, eARBIDLE, ftl::mmio::RO, ftl::mmio::Normal>;
    // ARB Command Source
    using ARBCMDSRC = ftl::mmio::Field<2, 2, eARBCMDSRC, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct STS0_fields_

  struct STS0 : ftl::mmio::Register<
      kBase + 0xE0u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RO,
      typename STS0_fields_::SEQIDLE,
      typename STS0_fields_::ARBIDLE,
      typename STS0_fields_::ARBCMDSRC,
      ftl::mmio::Reserved<28, 4>> {
    using eSEQIDLE = typename STS0_fields_::eSEQIDLE;
    using eARBIDLE = typename STS0_fields_::eARBIDLE;
    using eARBCMDSRC = typename STS0_fields_::eARBCMDSRC;
    using SEQIDLE = typename STS0_fields_::SEQIDLE;
    using ARBIDLE = typename STS0_fields_::ARBIDLE;
    using ARBCMDSRC = typename STS0_fields_::ARBCMDSRC;
  };

  // Status 1
  struct STS1_fields_ {
    enum class eAHBCMDERRCODE : std::uint32_t {
      // No error
      eval0 = 0,
      // AHB Write command with JMP_ON_CS instruction used in the sequence
      eval2 = 2,
      // Unknown instruction opcode in the sequence
      eval3 = 3,
      // DUMMY_SDR or DUMMY_RWDS_SDR instruction used in DDR sequence
      eval4 = 4,
      // DUMMY_DDR or DUMMY_RWDS_DDR instruction used in SDR sequence
      eval5 = 5,
      // Sequence execution timeout
      eval6 = 14,
    };

    enum class eIPCMDERRCODE : std::uint32_t {
      // No error
      eval0 = 0,
      // IP command with JMP_ON_CS instruction used in the sequence
      eval2 = 2,
      // Unknown instruction opcode in the sequence
      eval3 = 3,
      // DUMMY_SDR or DUMMY_RWDS_SDR instruction used in DDR sequence
      eval4 = 4,
      // DUMMY_DDR or DUMMY_RWDS_DDR instruction used in SDR sequence
      eval5 = 5,
      // Flash memory access start address exceeds entire flash address range (A1, A2, B1, and B2)
      eval6 = 6,
      // Sequence execution timeout
      eval7 = 14,
      // Flash boundary crossed
      eval8 = 15,
    };

    // AHB Command Error ID
    using AHBCMDERRID = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // AHB Command Error Code
    using AHBCMDERRCODE = ftl::mmio::Field<4, 8, eAHBCMDERRCODE, ftl::mmio::RO, ftl::mmio::Normal>;
    // IP Command Error ID
    using IPCMDERRID = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // IP Command Error Code
    using IPCMDERRCODE = ftl::mmio::Field<4, 24, eIPCMDERRCODE, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct STS1_fields_

  struct STS1 : ftl::mmio::Register<
      kBase + 0xE4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename STS1_fields_::AHBCMDERRID,
      ftl::mmio::Reserved<4, 4>,
      typename STS1_fields_::AHBCMDERRCODE,
      ftl::mmio::Reserved<4, 12>,
      typename STS1_fields_::IPCMDERRID,
      ftl::mmio::Reserved<4, 20>,
      typename STS1_fields_::IPCMDERRCODE,
      ftl::mmio::Reserved<4, 28>> {
    using eAHBCMDERRCODE = typename STS1_fields_::eAHBCMDERRCODE;
    using eIPCMDERRCODE = typename STS1_fields_::eIPCMDERRCODE;
    using AHBCMDERRID = typename STS1_fields_::AHBCMDERRID;
    using AHBCMDERRCODE = typename STS1_fields_::AHBCMDERRCODE;
    using IPCMDERRID = typename STS1_fields_::IPCMDERRID;
    using IPCMDERRCODE = typename STS1_fields_::IPCMDERRCODE;
  };

  // Status 2
  struct STS2_fields_ {
    enum class eASLVLOCK : std::uint32_t {
      // Not locked
      eval0 = 0,
      // Locked
      eval1 = 1,
    };

    enum class eAREFLOCK : std::uint32_t {
      // Not locked
      eval0 = 0,
      // Locked
      eval1 = 1,
    };

    enum class eBSLVLOCK : std::uint32_t {
      // Not locked
      eval0 = 0,
      // Locked
      eval1 = 1,
    };

    enum class eBREFLOCK : std::uint32_t {
      // Not locked
      eval0 = 0,
      // Locked
      eval1 = 1,
    };

    // Flash A Sample Target Delay Line Locked
    using ASLVLOCK = ftl::mmio::Field<1, 0, eASLVLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flash A Sample Clock Reference Delay Line Locked
    using AREFLOCK = ftl::mmio::Field<1, 1, eAREFLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flash A Sample Clock Target Delay Line Delay Cell Number
    using ASLVSEL = ftl::mmio::Field<6, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flash A Sample Clock Reference Delay Line Delay Cell Number
    using AREFSEL = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flash B Sample Target Reference Delay Line Locked
    using BSLVLOCK = ftl::mmio::Field<1, 16, eBSLVLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flash B Sample Clock Reference Delay Line Locked
    using BREFLOCK = ftl::mmio::Field<1, 17, eBREFLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flash B Sample Clock Target Delay Line Delay Cell Number
    using BSLVSEL = ftl::mmio::Field<6, 18, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flash B Sample Clock Reference Delay Line Delay Cell Number
    using BREFSEL = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct STS2_fields_

  struct STS2 : ftl::mmio::Register<
      kBase + 0xE8u,
      std::uint32_t,
      0x01000100u,
      ftl::mmio::RO,
      typename STS2_fields_::ASLVLOCK,
      typename STS2_fields_::AREFLOCK,
      typename STS2_fields_::ASLVSEL,
      typename STS2_fields_::AREFSEL,
      ftl::mmio::Reserved<2, 14>,
      typename STS2_fields_::BSLVLOCK,
      typename STS2_fields_::BREFLOCK,
      typename STS2_fields_::BSLVSEL,
      typename STS2_fields_::BREFSEL,
      ftl::mmio::Reserved<2, 30>> {
    using eASLVLOCK = typename STS2_fields_::eASLVLOCK;
    using eAREFLOCK = typename STS2_fields_::eAREFLOCK;
    using eBSLVLOCK = typename STS2_fields_::eBSLVLOCK;
    using eBREFLOCK = typename STS2_fields_::eBREFLOCK;
    using ASLVLOCK = typename STS2_fields_::ASLVLOCK;
    using AREFLOCK = typename STS2_fields_::AREFLOCK;
    using ASLVSEL = typename STS2_fields_::ASLVSEL;
    using AREFSEL = typename STS2_fields_::AREFSEL;
    using BSLVLOCK = typename STS2_fields_::BSLVLOCK;
    using BREFLOCK = typename STS2_fields_::BREFLOCK;
    using BSLVSEL = typename STS2_fields_::BSLVSEL;
    using BREFSEL = typename STS2_fields_::BREFSEL;
  };

  // AHB Suspend Status
  struct AHBSPNDSTS_fields_ {
    enum class eACTIVE : std::uint32_t {
      // No suspended AHB read prefetch command.
      eval0 = 0,
      // An AHB read prefetch command sequence has been suspended.
      eval1 = 1,
    };

    // Active AHB Read Prefetch Suspended
    using ACTIVE = ftl::mmio::Field<1, 0, eACTIVE, ftl::mmio::RO, ftl::mmio::Normal>;
    // AHB Receive Buffer ID for Suspended Command Sequence
    using BUFID = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Data Left
    using DATLFT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AHBSPNDSTS_fields_

  struct AHBSPNDSTS : ftl::mmio::Register<
      kBase + 0xECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename AHBSPNDSTS_fields_::ACTIVE,
      typename AHBSPNDSTS_fields_::BUFID,
      ftl::mmio::Reserved<12, 4>,
      typename AHBSPNDSTS_fields_::DATLFT> {
    using eACTIVE = typename AHBSPNDSTS_fields_::eACTIVE;
    using ACTIVE = typename AHBSPNDSTS_fields_::ACTIVE;
    using BUFID = typename AHBSPNDSTS_fields_::BUFID;
    using DATLFT = typename AHBSPNDSTS_fields_::DATLFT;
  };

  // IP Receive FIFO Status
  struct IPRXFSTS_fields_ {
    // Fill Level of IP Receive FIFO
    using FILL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read Data Counter
    using RDCNTR = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IPRXFSTS_fields_

  struct IPRXFSTS : ftl::mmio::Register<
      kBase + 0xF0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename IPRXFSTS_fields_::FILL,
      ftl::mmio::Reserved<8, 8>,
      typename IPRXFSTS_fields_::RDCNTR> {
    using FILL = typename IPRXFSTS_fields_::FILL;
    using RDCNTR = typename IPRXFSTS_fields_::RDCNTR;
  };

  // IP Transmit FIFO Status
  struct IPTXFSTS_fields_ {
    // Fill Level of IP Transmit FIFO
    using FILL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write Data Counter
    using WRCNTR = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IPTXFSTS_fields_

  struct IPTXFSTS : ftl::mmio::Register<
      kBase + 0xF4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename IPTXFSTS_fields_::FILL,
      ftl::mmio::Reserved<8, 8>,
      typename IPTXFSTS_fields_::WRCNTR> {
    using FILL = typename IPTXFSTS_fields_::FILL;
    using WRCNTR = typename IPTXFSTS_fields_::WRCNTR;
  };

  // IP Receive FIFO Data x
  struct RFDR_fields_ {
    // Receive Data
    using RXDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RFDR_fields_

  template<std::uint32_t Index>
  struct RFDR : ftl::mmio::Register<
      kBase + 0x100u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RFDR_fields_::RXDATA> {
    static_assert(Index < 32u, "RFDR: Index out of range");
    using RXDATA = typename RFDR_fields_::RXDATA;
  };

  // IP TX FIFO Data x
  struct TFDR_fields_ {
    // Transmit Data
    using TXDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct TFDR_fields_

  template<std::uint32_t Index>
  struct TFDR : ftl::mmio::Register<
      kBase + 0x180u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename TFDR_fields_::TXDATA> {
    static_assert(Index < 32u, "TFDR: Index out of range");
    using TXDATA = typename TFDR_fields_::TXDATA;
  };

  // Lookup Table x
  struct LUT_fields_ {
    // OPERAND0
    using OPERAND0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // NUM_PADS0
    using NUM_PADS0 = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // OPCODE
    using OPCODE0 = ftl::mmio::Field<6, 10, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // OPERAND1
    using OPERAND1 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // NUM_PADS1
    using NUM_PADS1 = ftl::mmio::Field<2, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // OPCODE1
    using OPCODE1 = ftl::mmio::Field<6, 26, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LUT_fields_

  template<std::uint32_t Index>
  struct LUT : ftl::mmio::Register<
      kBase + 0x200u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename LUT_fields_::OPERAND0,
      typename LUT_fields_::NUM_PADS0,
      typename LUT_fields_::OPCODE0,
      typename LUT_fields_::OPERAND1,
      typename LUT_fields_::NUM_PADS1,
      typename LUT_fields_::OPCODE1> {
    static_assert(Index < 64u, "LUT: Index out of range");
    using OPERAND0 = typename LUT_fields_::OPERAND0;
    using NUM_PADS0 = typename LUT_fields_::NUM_PADS0;
    using OPCODE0 = typename LUT_fields_::OPCODE0;
    using OPERAND1 = typename LUT_fields_::OPERAND1;
    using NUM_PADS1 = typename LUT_fields_::NUM_PADS1;
    using OPCODE1 = typename LUT_fields_::OPCODE1;
  };

  // AHB Controller ID 0 Control
  struct HMSTR0CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR0CR_fields_

  struct HMSTR0CR : ftl::mmio::Register<
      kBase + 0x400u,
      std::uint32_t,
      0x0040FFCFu,
      ftl::mmio::RW,
      typename HMSTR0CR_fields_::MASK,
      typename HMSTR0CR_fields_::MSTRID> {
    using eMASK = typename HMSTR0CR_fields_::eMASK;
    using MASK = typename HMSTR0CR_fields_::MASK;
    using MSTRID = typename HMSTR0CR_fields_::MSTRID;
  };

  // AHB Controller ID 1 Control
  struct HMSTR1CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR1CR_fields_

  struct HMSTR1CR : ftl::mmio::Register<
      kBase + 0x404u,
      std::uint32_t,
      0x0000FFCFu,
      ftl::mmio::RW,
      typename HMSTR1CR_fields_::MASK,
      typename HMSTR1CR_fields_::MSTRID> {
    using eMASK = typename HMSTR1CR_fields_::eMASK;
    using MASK = typename HMSTR1CR_fields_::MASK;
    using MSTRID = typename HMSTR1CR_fields_::MSTRID;
  };

  // AHB Controller ID 2 Control
  struct HMSTR2CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR2CR_fields_

  struct HMSTR2CR : ftl::mmio::Register<
      kBase + 0x408u,
      std::uint32_t,
      0x0004F00Fu,
      ftl::mmio::RW,
      typename HMSTR2CR_fields_::MASK,
      typename HMSTR2CR_fields_::MSTRID> {
    using eMASK = typename HMSTR2CR_fields_::eMASK;
    using MASK = typename HMSTR2CR_fields_::MASK;
    using MSTRID = typename HMSTR2CR_fields_::MSTRID;
  };

  // AHB Controller ID 3 Control
  struct HMSTR3CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR3CR_fields_

  struct HMSTR3CR : ftl::mmio::Register<
      kBase + 0x40Cu,
      std::uint32_t,
      0x0022807Fu,
      ftl::mmio::RW,
      typename HMSTR3CR_fields_::MASK,
      typename HMSTR3CR_fields_::MSTRID> {
    using eMASK = typename HMSTR3CR_fields_::eMASK;
    using MASK = typename HMSTR3CR_fields_::MASK;
    using MSTRID = typename HMSTR3CR_fields_::MSTRID;
  };

  // AHB Controller ID 4 Control
  struct HMSTR4CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR4CR_fields_

  struct HMSTR4CR : ftl::mmio::Register<
      kBase + 0x410u,
      std::uint32_t,
      0x0032F87Fu,
      ftl::mmio::RW,
      typename HMSTR4CR_fields_::MASK,
      typename HMSTR4CR_fields_::MSTRID> {
    using eMASK = typename HMSTR4CR_fields_::eMASK;
    using MASK = typename HMSTR4CR_fields_::MASK;
    using MSTRID = typename HMSTR4CR_fields_::MSTRID;
  };

  // AHB Controller ID 5 Control
  struct HMSTR5CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR5CR_fields_

  struct HMSTR5CR : ftl::mmio::Register<
      kBase + 0x414u,
      std::uint32_t,
      0x0011F87Fu,
      ftl::mmio::RW,
      typename HMSTR5CR_fields_::MASK,
      typename HMSTR5CR_fields_::MSTRID> {
    using eMASK = typename HMSTR5CR_fields_::eMASK;
    using MASK = typename HMSTR5CR_fields_::MASK;
    using MSTRID = typename HMSTR5CR_fields_::MSTRID;
  };

  // AHB Controller ID 6 Control
  struct HMSTR6CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR6CR_fields_

  struct HMSTR6CR : ftl::mmio::Register<
      kBase + 0x418u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename HMSTR6CR_fields_::MASK,
      typename HMSTR6CR_fields_::MSTRID> {
    using eMASK = typename HMSTR6CR_fields_::eMASK;
    using MASK = typename HMSTR6CR_fields_::MASK;
    using MSTRID = typename HMSTR6CR_fields_::MSTRID;
  };

  // AHB Controller ID 7 Control
  struct HMSTR7CR_fields_ {
    enum class eMASK : std::uint32_t {
      // Mask
      eDISABLE = 0,
      // Unmask
      eENABLE = 1,
    };

    // Mask bits for AHB Controller ID.
    using MASK = ftl::mmio::Field<16, 0, eMASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controller ID
    using MSTRID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HMSTR7CR_fields_

  struct HMSTR7CR : ftl::mmio::Register<
      kBase + 0x41Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename HMSTR7CR_fields_::MASK,
      typename HMSTR7CR_fields_::MSTRID> {
    using eMASK = typename HMSTR7CR_fields_::eMASK;
    using MASK = typename HMSTR7CR_fields_::MASK;
    using MSTRID = typename HMSTR7CR_fields_::MSTRID;
  };

  // HADDR REMAP Start Address
  struct HADDRSTART_fields_ {
    enum class eREMAPEN : std::uint32_t {
      // HADDR REMAP Disabled
      eval0 = 0,
      // HADDR REMAP Enabled
      eval1 = 1,
    };

    enum class eKBINECC : std::uint32_t {
      // FlexSPI fetches keyblob at base address + offset
      eval0 = 0,
      // FlexSPI fetches keyblob at base address + offset * 2
      eval1 = 1,
    };

    // AHB Bus Address Remap Enable
    using REMAPEN = ftl::mmio::Field<1, 0, eREMAPEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OTFAD Keyblob in ECC
    using KBINECC = ftl::mmio::Field<1, 1, eKBINECC, ftl::mmio::RW, ftl::mmio::Normal>;
    // HADDR Start Address
    using ADDRSTART = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HADDRSTART_fields_

  struct HADDRSTART : ftl::mmio::Register<
      kBase + 0x420u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename HADDRSTART_fields_::REMAPEN,
      typename HADDRSTART_fields_::KBINECC,
      ftl::mmio::Reserved<10, 2>,
      typename HADDRSTART_fields_::ADDRSTART> {
    using eREMAPEN = typename HADDRSTART_fields_::eREMAPEN;
    using eKBINECC = typename HADDRSTART_fields_::eKBINECC;
    using REMAPEN = typename HADDRSTART_fields_::REMAPEN;
    using KBINECC = typename HADDRSTART_fields_::KBINECC;
    using ADDRSTART = typename HADDRSTART_fields_::ADDRSTART;
  };

  // HADDR REMAP END ADDR
  struct HADDREND_fields_ {
    // End Address of HADDR Remap Range
    using ENDSTART = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HADDREND_fields_

  struct HADDREND : ftl::mmio::Register<
      kBase + 0x424u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      typename HADDREND_fields_::ENDSTART> {
    using ENDSTART = typename HADDREND_fields_::ENDSTART;
  };

  // HADDR Remap Offset
  struct HADDROFFSET_fields_ {
    // HADDR Offset
    using ADDROFFSET = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HADDROFFSET_fields_

  struct HADDROFFSET : ftl::mmio::Register<
      kBase + 0x428u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      typename HADDROFFSET_fields_::ADDROFFSET> {
    using ADDROFFSET = typename HADDROFFSET_fields_::ADDROFFSET;
  };

};

}  // namespace regs