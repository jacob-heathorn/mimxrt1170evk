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
  struct Mcr0Fields {
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
  };  // struct Mcr0Fields

  struct MCR0 : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0xFFFF80C2u,
      ftl::mmio::RW,
      typename Mcr0Fields::SWRESET,
      typename Mcr0Fields::MDIS,
      ftl::mmio::Reserved<2, 2>,
      typename Mcr0Fields::RXCLKSRC,
      typename Mcr0Fields::ARDFEN,
      typename Mcr0Fields::ATDFEN,
      typename Mcr0Fields::SERCLKDIV,
      typename Mcr0Fields::HSEN,
      typename Mcr0Fields::DOZEEN,
      typename Mcr0Fields::COMBINATIONEN,
      typename Mcr0Fields::SCKFREERUNEN,
      ftl::mmio::Reserved<1, 15>,
      typename Mcr0Fields::IPGRANTWAIT,
      typename Mcr0Fields::AHBGRANTWAIT> {
    using eSWRESET = typename Mcr0Fields::eSWRESET;
    using eMDIS = typename Mcr0Fields::eMDIS;
    using eRXCLKSRC = typename Mcr0Fields::eRXCLKSRC;
    using eARDFEN = typename Mcr0Fields::eARDFEN;
    using eATDFEN = typename Mcr0Fields::eATDFEN;
    using eSERCLKDIV = typename Mcr0Fields::eSERCLKDIV;
    using eHSEN = typename Mcr0Fields::eHSEN;
    using eDOZEEN = typename Mcr0Fields::eDOZEEN;
    using eCOMBINATIONEN = typename Mcr0Fields::eCOMBINATIONEN;
    using eSCKFREERUNEN = typename Mcr0Fields::eSCKFREERUNEN;
    using SWRESET = typename Mcr0Fields::SWRESET;
    using MDIS = typename Mcr0Fields::MDIS;
    using RXCLKSRC = typename Mcr0Fields::RXCLKSRC;
    using ARDFEN = typename Mcr0Fields::ARDFEN;
    using ATDFEN = typename Mcr0Fields::ATDFEN;
    using SERCLKDIV = typename Mcr0Fields::SERCLKDIV;
    using HSEN = typename Mcr0Fields::HSEN;
    using DOZEEN = typename Mcr0Fields::DOZEEN;
    using COMBINATIONEN = typename Mcr0Fields::COMBINATIONEN;
    using SCKFREERUNEN = typename Mcr0Fields::SCKFREERUNEN;
    using IPGRANTWAIT = typename Mcr0Fields::IPGRANTWAIT;
    using AHBGRANTWAIT = typename Mcr0Fields::AHBGRANTWAIT;
  };

  // Module Control 1
  struct Mcr1Fields {
    // AHB Bus Wait
    using AHBBUSWAIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command Sequence Wait
    using SEQWAIT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mcr1Fields

  struct MCR1 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0xFFFFFFFFu,
      ftl::mmio::RW,
      typename Mcr1Fields::AHBBUSWAIT,
      typename Mcr1Fields::SEQWAIT> {
    using AHBBUSWAIT = typename Mcr1Fields::AHBBUSWAIT;
    using SEQWAIT = typename Mcr1Fields::SEQWAIT;
  };

  // Module Control 2
  struct Mcr2Fields {
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
  };  // struct Mcr2Fields

  struct MCR2 : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x200081F7u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Mcr2Fields::CLRAHBBUFOPT,
      ftl::mmio::Reserved<3, 12>,
      typename Mcr2Fields::SAMEDEVICEEN,
      ftl::mmio::Reserved<3, 16>,
      typename Mcr2Fields::SCKBDIFFOPT,
      ftl::mmio::Reserved<4, 20>,
      typename Mcr2Fields::RESUMEWAIT> {
    using eCLRAHBBUFOPT = typename Mcr2Fields::eCLRAHBBUFOPT;
    using eSAMEDEVICEEN = typename Mcr2Fields::eSAMEDEVICEEN;
    using eSCKBDIFFOPT = typename Mcr2Fields::eSCKBDIFFOPT;
    using CLRAHBBUFOPT = typename Mcr2Fields::CLRAHBBUFOPT;
    using SAMEDEVICEEN = typename Mcr2Fields::SAMEDEVICEEN;
    using SCKBDIFFOPT = typename Mcr2Fields::SCKBDIFFOPT;
    using RESUMEWAIT = typename Mcr2Fields::RESUMEWAIT;
  };

  // AHB Bus Control
  struct AhbcrFields {
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
  };  // struct AhbcrFields

  struct AHBCR : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000018u,
      ftl::mmio::RW,
      typename AhbcrFields::APAREN,
      typename AhbcrFields::CLRAHBRXBUF,
      ftl::mmio::Reserved<1, 2>,
      typename AhbcrFields::CACHABLEEN,
      typename AhbcrFields::BUFFERABLEEN,
      typename AhbcrFields::PREFETCHEN,
      typename AhbcrFields::READADDROPT,
      ftl::mmio::Reserved<3, 7>,
      typename AhbcrFields::READSZALIGN,
      typename AhbcrFields::ECCEN,
      typename AhbcrFields::SPLITEN,
      typename AhbcrFields::SPLIT_LIMIT,
      typename AhbcrFields::KEYECCEN,
      typename AhbcrFields::ECCSINGLEERRCLR,
      typename AhbcrFields::ECCMULTIERRCLR,
      typename AhbcrFields::HMSTRIDREMAP,
      typename AhbcrFields::ECCSWAPEN,
      ftl::mmio::Reserved<12, 20>> {
    using eAPAREN = typename AhbcrFields::eAPAREN;
    using eCLRAHBRXBUF = typename AhbcrFields::eCLRAHBRXBUF;
    using eCACHABLEEN = typename AhbcrFields::eCACHABLEEN;
    using eBUFFERABLEEN = typename AhbcrFields::eBUFFERABLEEN;
    using ePREFETCHEN = typename AhbcrFields::ePREFETCHEN;
    using eREADADDROPT = typename AhbcrFields::eREADADDROPT;
    using eREADSZALIGN = typename AhbcrFields::eREADSZALIGN;
    using eECCEN = typename AhbcrFields::eECCEN;
    using eSPLITEN = typename AhbcrFields::eSPLITEN;
    using eSPLIT_LIMIT = typename AhbcrFields::eSPLIT_LIMIT;
    using eKEYECCEN = typename AhbcrFields::eKEYECCEN;
    using eECCSINGLEERRCLR = typename AhbcrFields::eECCSINGLEERRCLR;
    using eECCMULTIERRCLR = typename AhbcrFields::eECCMULTIERRCLR;
    using eHMSTRIDREMAP = typename AhbcrFields::eHMSTRIDREMAP;
    using eECCSWAPEN = typename AhbcrFields::eECCSWAPEN;
    using APAREN = typename AhbcrFields::APAREN;
    using CLRAHBRXBUF = typename AhbcrFields::CLRAHBRXBUF;
    using CACHABLEEN = typename AhbcrFields::CACHABLEEN;
    using BUFFERABLEEN = typename AhbcrFields::BUFFERABLEEN;
    using PREFETCHEN = typename AhbcrFields::PREFETCHEN;
    using READADDROPT = typename AhbcrFields::READADDROPT;
    using READSZALIGN = typename AhbcrFields::READSZALIGN;
    using ECCEN = typename AhbcrFields::ECCEN;
    using SPLITEN = typename AhbcrFields::SPLITEN;
    using SPLIT_LIMIT = typename AhbcrFields::SPLIT_LIMIT;
    using KEYECCEN = typename AhbcrFields::KEYECCEN;
    using ECCSINGLEERRCLR = typename AhbcrFields::ECCSINGLEERRCLR;
    using ECCMULTIERRCLR = typename AhbcrFields::ECCMULTIERRCLR;
    using HMSTRIDREMAP = typename AhbcrFields::HMSTRIDREMAP;
    using ECCSWAPEN = typename AhbcrFields::ECCSWAPEN;
  };

  // Interrupt Enable
  struct IntenFields {
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
  };  // struct IntenFields

  struct INTEN : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IntenFields::IPCMDDONEEN,
      typename IntenFields::IPCMDGEEN,
      typename IntenFields::AHBCMDGEEN,
      typename IntenFields::IPCMDERREN,
      typename IntenFields::AHBCMDERREN,
      typename IntenFields::IPRXWAEN,
      typename IntenFields::IPTXWEEN,
      ftl::mmio::Reserved<1, 7>,
      typename IntenFields::SCKSTOPBYRDEN,
      typename IntenFields::SCKSTOPBYWREN,
      typename IntenFields::AHBBUSERROREN,
      typename IntenFields::SEQTIMEOUTEN,
      typename IntenFields::KEYDONEEN,
      typename IntenFields::KEYERROREN,
      typename IntenFields::ECCMULTIERREN,
      typename IntenFields::ECCSINGLEERREN,
      ftl::mmio::Reserved<16, 16>> {
    using eIPCMDDONEEN = typename IntenFields::eIPCMDDONEEN;
    using eIPCMDGEEN = typename IntenFields::eIPCMDGEEN;
    using eAHBCMDGEEN = typename IntenFields::eAHBCMDGEEN;
    using eIPCMDERREN = typename IntenFields::eIPCMDERREN;
    using eAHBCMDERREN = typename IntenFields::eAHBCMDERREN;
    using eIPRXWAEN = typename IntenFields::eIPRXWAEN;
    using eIPTXWEEN = typename IntenFields::eIPTXWEEN;
    using eSCKSTOPBYRDEN = typename IntenFields::eSCKSTOPBYRDEN;
    using eSCKSTOPBYWREN = typename IntenFields::eSCKSTOPBYWREN;
    using eAHBBUSERROREN = typename IntenFields::eAHBBUSERROREN;
    using eSEQTIMEOUTEN = typename IntenFields::eSEQTIMEOUTEN;
    using eKEYDONEEN = typename IntenFields::eKEYDONEEN;
    using eKEYERROREN = typename IntenFields::eKEYERROREN;
    using eECCMULTIERREN = typename IntenFields::eECCMULTIERREN;
    using eECCSINGLEERREN = typename IntenFields::eECCSINGLEERREN;
    using IPCMDDONEEN = typename IntenFields::IPCMDDONEEN;
    using IPCMDGEEN = typename IntenFields::IPCMDGEEN;
    using AHBCMDGEEN = typename IntenFields::AHBCMDGEEN;
    using IPCMDERREN = typename IntenFields::IPCMDERREN;
    using AHBCMDERREN = typename IntenFields::AHBCMDERREN;
    using IPRXWAEN = typename IntenFields::IPRXWAEN;
    using IPTXWEEN = typename IntenFields::IPTXWEEN;
    using SCKSTOPBYRDEN = typename IntenFields::SCKSTOPBYRDEN;
    using SCKSTOPBYWREN = typename IntenFields::SCKSTOPBYWREN;
    using AHBBUSERROREN = typename IntenFields::AHBBUSERROREN;
    using SEQTIMEOUTEN = typename IntenFields::SEQTIMEOUTEN;
    using KEYDONEEN = typename IntenFields::KEYDONEEN;
    using KEYERROREN = typename IntenFields::KEYERROREN;
    using ECCMULTIERREN = typename IntenFields::ECCMULTIERREN;
    using ECCSINGLEERREN = typename IntenFields::ECCSINGLEERREN;
  };

  // Interrupt
  struct IntrFields {
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
  };  // struct IntrFields

  struct INTR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IntrFields::IPCMDDONE,
      typename IntrFields::IPCMDGE,
      typename IntrFields::AHBCMDGE,
      typename IntrFields::IPCMDERR,
      typename IntrFields::AHBCMDERR,
      typename IntrFields::IPRXWA,
      typename IntrFields::IPTXWE,
      ftl::mmio::Reserved<1, 7>,
      typename IntrFields::SCKSTOPBYRD,
      typename IntrFields::SCKSTOPBYWR,
      typename IntrFields::AHBBUSERROR,
      typename IntrFields::SEQTIMEOUT,
      typename IntrFields::KEYDONE,
      typename IntrFields::KEYERROR,
      typename IntrFields::ECCMULTIERR,
      typename IntrFields::ECCSINGLEERR,
      ftl::mmio::Reserved<16, 16>> {
    using eIPCMDDONE = typename IntrFields::eIPCMDDONE;
    using eIPCMDGE = typename IntrFields::eIPCMDGE;
    using eAHBCMDGE = typename IntrFields::eAHBCMDGE;
    using eIPCMDERR = typename IntrFields::eIPCMDERR;
    using eAHBCMDERR = typename IntrFields::eAHBCMDERR;
    using eIPRXWA = typename IntrFields::eIPRXWA;
    using eIPTXWE = typename IntrFields::eIPTXWE;
    using eSCKSTOPBYRD = typename IntrFields::eSCKSTOPBYRD;
    using eSCKSTOPBYWR = typename IntrFields::eSCKSTOPBYWR;
    using eAHBBUSERROR = typename IntrFields::eAHBBUSERROR;
    using eSEQTIMEOUT = typename IntrFields::eSEQTIMEOUT;
    using eKEYERROR = typename IntrFields::eKEYERROR;
    using eECCMULTIERR = typename IntrFields::eECCMULTIERR;
    using eECCSINGLEERR = typename IntrFields::eECCSINGLEERR;
    using IPCMDDONE = typename IntrFields::IPCMDDONE;
    using IPCMDGE = typename IntrFields::IPCMDGE;
    using AHBCMDGE = typename IntrFields::AHBCMDGE;
    using IPCMDERR = typename IntrFields::IPCMDERR;
    using AHBCMDERR = typename IntrFields::AHBCMDERR;
    using IPRXWA = typename IntrFields::IPRXWA;
    using IPTXWE = typename IntrFields::IPTXWE;
    using SCKSTOPBYRD = typename IntrFields::SCKSTOPBYRD;
    using SCKSTOPBYWR = typename IntrFields::SCKSTOPBYWR;
    using AHBBUSERROR = typename IntrFields::AHBBUSERROR;
    using SEQTIMEOUT = typename IntrFields::SEQTIMEOUT;
    using KEYDONE = typename IntrFields::KEYDONE;
    using KEYERROR = typename IntrFields::KEYERROR;
    using ECCMULTIERR = typename IntrFields::ECCMULTIERR;
    using ECCSINGLEERR = typename IntrFields::ECCSINGLEERR;
  };

  // LUT Key
  struct LutkeyFields {
    // LUT Key
    using KEY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LutkeyFields

  struct LUTKEY : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x5AF05AF0u,
      ftl::mmio::RW,
      typename LutkeyFields::KEY> {
    using KEY = typename LutkeyFields::KEY;
  };

  // LUT Control
  struct LutcrFields {
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
  };  // struct LutcrFields

  struct LUTCR : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      typename LutcrFields::LOCK,
      typename LutcrFields::UNLOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eLOCK = typename LutcrFields::eLOCK;
    using eUNLOCK = typename LutcrFields::eUNLOCK;
    using LOCK = typename LutcrFields::LOCK;
    using UNLOCK = typename LutcrFields::UNLOCK;
  };

  // AHB Receive Buffer 0 Control 0
  struct Ahbrxbuf0cr0Fields {
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
  };  // struct Ahbrxbuf0cr0Fields

  struct AHBRXBUF0CR0 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x80000040u,
      ftl::mmio::RW,
      typename Ahbrxbuf0cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf0cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf0cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf0cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf0cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf0cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf0cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf0cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf0cr0Fields::PREFETCHEN;
  };

  // AHB Receive Buffer 1 Control 0
  struct Ahbrxbuf1cr0Fields {
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
  };  // struct Ahbrxbuf1cr0Fields

  struct AHBRXBUF1CR0 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x80010040u,
      ftl::mmio::RW,
      typename Ahbrxbuf1cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf1cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf1cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf1cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf1cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf1cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf1cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf1cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf1cr0Fields::PREFETCHEN;
  };

  // AHB Receive Buffer 2 Control 0
  struct Ahbrxbuf2cr0Fields {
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
  };  // struct Ahbrxbuf2cr0Fields

  struct AHBRXBUF2CR0 : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x80020040u,
      ftl::mmio::RW,
      typename Ahbrxbuf2cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf2cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf2cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf2cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf2cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf2cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf2cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf2cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf2cr0Fields::PREFETCHEN;
  };

  // AHB Receive Buffer 3 Control 0
  struct Ahbrxbuf3cr0Fields {
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
  };  // struct Ahbrxbuf3cr0Fields

  struct AHBRXBUF3CR0 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x80030040u,
      ftl::mmio::RW,
      typename Ahbrxbuf3cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf3cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf3cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf3cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf3cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf3cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf3cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf3cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf3cr0Fields::PREFETCHEN;
  };

  // AHB Receive Buffer 4 Control 0
  struct Ahbrxbuf4cr0Fields {
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
  };  // struct Ahbrxbuf4cr0Fields

  struct AHBRXBUF4CR0 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x80040040u,
      ftl::mmio::RW,
      typename Ahbrxbuf4cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf4cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf4cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf4cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf4cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf4cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf4cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf4cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf4cr0Fields::PREFETCHEN;
  };

  // AHB Receive Buffer 5 Control 0
  struct Ahbrxbuf5cr0Fields {
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
  };  // struct Ahbrxbuf5cr0Fields

  struct AHBRXBUF5CR0 : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x80050040u,
      ftl::mmio::RW,
      typename Ahbrxbuf5cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf5cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf5cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf5cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf5cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf5cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf5cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf5cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf5cr0Fields::PREFETCHEN;
  };

  // AHB Receive Buffer 6 Control 0
  struct Ahbrxbuf6cr0Fields {
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
  };  // struct Ahbrxbuf6cr0Fields

  struct AHBRXBUF6CR0 : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x80060040u,
      ftl::mmio::RW,
      typename Ahbrxbuf6cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf6cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf6cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf6cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf6cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf6cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf6cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf6cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf6cr0Fields::PREFETCHEN;
  };

  // AHB Receive Buffer 7 Control 0
  struct Ahbrxbuf7cr0Fields {
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
  };  // struct Ahbrxbuf7cr0Fields

  struct AHBRXBUF7CR0 : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0x80070040u,
      ftl::mmio::RW,
      typename Ahbrxbuf7cr0Fields::BUFSZ,
      ftl::mmio::Reserved<6, 10>,
      typename Ahbrxbuf7cr0Fields::MSTRID,
      ftl::mmio::Reserved<4, 20>,
      typename Ahbrxbuf7cr0Fields::PRIORITY,
      ftl::mmio::Reserved<4, 27>,
      typename Ahbrxbuf7cr0Fields::PREFETCHEN> {
    using ePREFETCHEN = typename Ahbrxbuf7cr0Fields::ePREFETCHEN;
    using BUFSZ = typename Ahbrxbuf7cr0Fields::BUFSZ;
    using MSTRID = typename Ahbrxbuf7cr0Fields::MSTRID;
    using PRIORITY = typename Ahbrxbuf7cr0Fields::PRIORITY;
    using PREFETCHEN = typename Ahbrxbuf7cr0Fields::PREFETCHEN;
  };

  // Flash Control 0
  struct Flsha1cr0Fields {
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
  };  // struct Flsha1cr0Fields

  struct FLSHA1CR0 : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename Flsha1cr0Fields::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename Flsha1cr0Fields::SPLITWREN,
      typename Flsha1cr0Fields::SPLITRDEN> {
    using eSPLITWREN = typename Flsha1cr0Fields::eSPLITWREN;
    using eSPLITRDEN = typename Flsha1cr0Fields::eSPLITRDEN;
    using FLSHSZ = typename Flsha1cr0Fields::FLSHSZ;
    using SPLITWREN = typename Flsha1cr0Fields::SPLITWREN;
    using SPLITRDEN = typename Flsha1cr0Fields::SPLITRDEN;
  };

  // Flash Control 0
  struct Flsha2cr0Fields {
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
  };  // struct Flsha2cr0Fields

  struct FLSHA2CR0 : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename Flsha2cr0Fields::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename Flsha2cr0Fields::SPLITWREN,
      typename Flsha2cr0Fields::SPLITRDEN> {
    using eSPLITWREN = typename Flsha2cr0Fields::eSPLITWREN;
    using eSPLITRDEN = typename Flsha2cr0Fields::eSPLITRDEN;
    using FLSHSZ = typename Flsha2cr0Fields::FLSHSZ;
    using SPLITWREN = typename Flsha2cr0Fields::SPLITWREN;
    using SPLITRDEN = typename Flsha2cr0Fields::SPLITRDEN;
  };

  // Flash Control 0
  struct Flshb1cr0Fields {
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
  };  // struct Flshb1cr0Fields

  struct FLSHB1CR0 : ftl::mmio::Register<
      kBase + 0x68u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename Flshb1cr0Fields::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename Flshb1cr0Fields::SPLITWREN,
      typename Flshb1cr0Fields::SPLITRDEN> {
    using eSPLITWREN = typename Flshb1cr0Fields::eSPLITWREN;
    using eSPLITRDEN = typename Flshb1cr0Fields::eSPLITRDEN;
    using FLSHSZ = typename Flshb1cr0Fields::FLSHSZ;
    using SPLITWREN = typename Flshb1cr0Fields::SPLITWREN;
    using SPLITRDEN = typename Flshb1cr0Fields::SPLITRDEN;
  };

  // Flash Control 0
  struct Flshb2cr0Fields {
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
  };  // struct Flshb2cr0Fields

  struct FLSHB2CR0 : ftl::mmio::Register<
      kBase + 0x6Cu,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename Flshb2cr0Fields::FLSHSZ,
      ftl::mmio::Reserved<7, 23>,
      typename Flshb2cr0Fields::SPLITWREN,
      typename Flshb2cr0Fields::SPLITRDEN> {
    using eSPLITWREN = typename Flshb2cr0Fields::eSPLITWREN;
    using eSPLITRDEN = typename Flshb2cr0Fields::eSPLITRDEN;
    using FLSHSZ = typename Flshb2cr0Fields::FLSHSZ;
    using SPLITWREN = typename Flshb2cr0Fields::SPLITWREN;
    using SPLITRDEN = typename Flshb2cr0Fields::SPLITRDEN;
  };

  // Flash Control 1
  struct Flshcr1Fields {
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
  };  // struct Flshcr1Fields

  template<std::uint32_t Index>
  struct FLSHCR1 : ftl::mmio::Register<
      kBase + 0x70u + (Index * 0x4u),
      std::uint32_t,
      0x00000063u,
      ftl::mmio::RW,
      typename Flshcr1Fields::TCSS,
      typename Flshcr1Fields::TCSH,
      typename Flshcr1Fields::WA,
      typename Flshcr1Fields::CAS,
      typename Flshcr1Fields::CSINTERVALUNIT,
      typename Flshcr1Fields::CSINTERVAL> {
    static_assert(Index < 4u, "FLSHCR1: Index out of range");
    using eWA = typename Flshcr1Fields::eWA;
    using eCSINTERVALUNIT = typename Flshcr1Fields::eCSINTERVALUNIT;
    using TCSS = typename Flshcr1Fields::TCSS;
    using TCSH = typename Flshcr1Fields::TCSH;
    using WA = typename Flshcr1Fields::WA;
    using CAS = typename Flshcr1Fields::CAS;
    using CSINTERVALUNIT = typename Flshcr1Fields::CSINTERVALUNIT;
    using CSINTERVAL = typename Flshcr1Fields::CSINTERVAL;
  };

  // Flash Control 2
  struct Flshcr2Fields {
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
  };  // struct Flshcr2Fields

  template<std::uint32_t Index>
  struct FLSHCR2 : ftl::mmio::Register<
      kBase + 0x80u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Flshcr2Fields::ARDSEQID,
      ftl::mmio::Reserved<1, 4>,
      typename Flshcr2Fields::ARDSEQNUM,
      typename Flshcr2Fields::AWRSEQID,
      ftl::mmio::Reserved<1, 12>,
      typename Flshcr2Fields::AWRSEQNUM,
      typename Flshcr2Fields::AWRWAIT,
      typename Flshcr2Fields::AWRWAITUNIT,
      typename Flshcr2Fields::CLRINSTRPTR> {
    static_assert(Index < 4u, "FLSHCR2: Index out of range");
    using eAWRWAITUNIT = typename Flshcr2Fields::eAWRWAITUNIT;
    using ARDSEQID = typename Flshcr2Fields::ARDSEQID;
    using ARDSEQNUM = typename Flshcr2Fields::ARDSEQNUM;
    using AWRSEQID = typename Flshcr2Fields::AWRSEQID;
    using AWRSEQNUM = typename Flshcr2Fields::AWRSEQNUM;
    using AWRWAIT = typename Flshcr2Fields::AWRWAIT;
    using AWRWAITUNIT = typename Flshcr2Fields::AWRWAITUNIT;
    using CLRINSTRPTR = typename Flshcr2Fields::CLRINSTRPTR;
  };

  // Flash Control 4
  struct Flshcr4Fields {
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
  };  // struct Flshcr4Fields

  struct FLSHCR4 : ftl::mmio::Register<
      kBase + 0x94u,
      std::uint32_t,
      0x000000C3u,
      ftl::mmio::RW,
      typename Flshcr4Fields::WMOPT1,
      typename Flshcr4Fields::WMOPT2,
      typename Flshcr4Fields::WMENA,
      typename Flshcr4Fields::WMENB,
      ftl::mmio::Reserved<28, 4>> {
    using eWMOPT1 = typename Flshcr4Fields::eWMOPT1;
    using eWMOPT2 = typename Flshcr4Fields::eWMOPT2;
    using eWMENA = typename Flshcr4Fields::eWMENA;
    using eWMENB = typename Flshcr4Fields::eWMENB;
    using WMOPT1 = typename Flshcr4Fields::WMOPT1;
    using WMOPT2 = typename Flshcr4Fields::WMOPT2;
    using WMENA = typename Flshcr4Fields::WMENA;
    using WMENB = typename Flshcr4Fields::WMENB;
  };

  // IP Control 0
  struct Ipcr0Fields {
    // Serial Flash Address
    using SFAR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ipcr0Fields

  struct IPCR0 : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Ipcr0Fields::SFAR> {
    using SFAR = typename Ipcr0Fields::SFAR;
  };

  // IP Control 1
  struct Ipcr1Fields {
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
  };  // struct Ipcr1Fields

  struct IPCR1 : ftl::mmio::Register<
      kBase + 0xA4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Ipcr1Fields::IDATSZ,
      typename Ipcr1Fields::ISEQID,
      ftl::mmio::Reserved<4, 20>,
      typename Ipcr1Fields::ISEQNUM,
      ftl::mmio::Reserved<4, 27>,
      typename Ipcr1Fields::IPAREN> {
    using eIPAREN = typename Ipcr1Fields::eIPAREN;
    using IDATSZ = typename Ipcr1Fields::IDATSZ;
    using ISEQID = typename Ipcr1Fields::ISEQID;
    using ISEQNUM = typename Ipcr1Fields::ISEQNUM;
    using IPAREN = typename Ipcr1Fields::IPAREN;
  };

  // IP Command
  struct IpcmdFields {
    enum class eTRG : std::uint32_t {
      // No action
      evalue0 = 0,
      // Start the IP command that the IPCR0 and IPCR1 registers define.
      evalue1 = 1,
    };

    // Command Trigger
    using TRG = ftl::mmio::Field<1, 0, eTRG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IpcmdFields

  struct IPCMD : ftl::mmio::Register<
      kBase + 0xB0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IpcmdFields::TRG,
      ftl::mmio::Reserved<31, 1>> {
    using eTRG = typename IpcmdFields::eTRG;
    using TRG = typename IpcmdFields::TRG;
  };

  // IP Receive FIFO Control
  struct IprxfcrFields {
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
  };  // struct IprxfcrFields

  struct IPRXFCR : ftl::mmio::Register<
      kBase + 0xB8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IprxfcrFields::CLRIPRXF,
      typename IprxfcrFields::RXDMAEN,
      typename IprxfcrFields::RXWMRK,
      ftl::mmio::Reserved<25, 7>> {
    using eCLRIPRXF = typename IprxfcrFields::eCLRIPRXF;
    using eRXDMAEN = typename IprxfcrFields::eRXDMAEN;
    using CLRIPRXF = typename IprxfcrFields::CLRIPRXF;
    using RXDMAEN = typename IprxfcrFields::RXDMAEN;
    using RXWMRK = typename IprxfcrFields::RXWMRK;
  };

  // IP Transmit FIFO Control
  struct IptxfcrFields {
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
  };  // struct IptxfcrFields

  struct IPTXFCR : ftl::mmio::Register<
      kBase + 0xBCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IptxfcrFields::CLRIPTXF,
      typename IptxfcrFields::TXDMAEN,
      typename IptxfcrFields::TXWMRK,
      ftl::mmio::Reserved<25, 7>> {
    using eCLRIPTXF = typename IptxfcrFields::eCLRIPTXF;
    using eTXDMAEN = typename IptxfcrFields::eTXDMAEN;
    using CLRIPTXF = typename IptxfcrFields::CLRIPTXF;
    using TXDMAEN = typename IptxfcrFields::TXDMAEN;
    using TXWMRK = typename IptxfcrFields::TXWMRK;
  };

  // DLL Control 0
  struct DllcrFields {
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
  };  // struct DllcrFields

  template<std::uint32_t Index>
  struct DLLCR : ftl::mmio::Register<
      kBase + 0xC0u + (Index * 0x4u),
      std::uint32_t,
      0x00000100u,
      ftl::mmio::RW,
      typename DllcrFields::DLLEN,
      typename DllcrFields::DLLRESET,
      ftl::mmio::Reserved<1, 2>,
      typename DllcrFields::SLVDLYTARGET,
      ftl::mmio::Reserved<1, 7>,
      typename DllcrFields::OVRDEN,
      typename DllcrFields::OVRDVAL,
      typename DllcrFields::REFPHASEGAP,
      ftl::mmio::Reserved<15, 17>> {
    static_assert(Index < 2u, "DLLCR: Index out of range");
    using eDLLEN = typename DllcrFields::eDLLEN;
    using eDLLRESET = typename DllcrFields::eDLLRESET;
    using eOVRDEN = typename DllcrFields::eOVRDEN;
    using DLLEN = typename DllcrFields::DLLEN;
    using DLLRESET = typename DllcrFields::DLLRESET;
    using SLVDLYTARGET = typename DllcrFields::SLVDLYTARGET;
    using OVRDEN = typename DllcrFields::OVRDEN;
    using OVRDVAL = typename DllcrFields::OVRDVAL;
    using REFPHASEGAP = typename DllcrFields::REFPHASEGAP;
  };

  // Misc Control 4
  struct Misccr4Fields {
    // AHB Address
    using AHBADDRESS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Misccr4Fields

  struct MISCCR4 : ftl::mmio::Register<
      kBase + 0xD0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Misccr4Fields::AHBADDRESS> {
    using AHBADDRESS = typename Misccr4Fields::AHBADDRESS;
  };

  // Miscellaneous Control 5
  struct Misccr5Fields {
    // ECC Single-Bit Error Correction Indicator
    using ECCSINGLEERRORCORR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Misccr5Fields

  struct MISCCR5 : ftl::mmio::Register<
      kBase + 0xD4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Misccr5Fields::ECCSINGLEERRORCORR> {
    using ECCSINGLEERRORCORR = typename Misccr5Fields::ECCSINGLEERRORCORR;
  };

  // Miscellaneous Control 6
  struct Misccr6Fields {
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
  };  // struct Misccr6Fields

  struct MISCCR6 : ftl::mmio::Register<
      kBase + 0xD8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Misccr6Fields::VALID,
      typename Misccr6Fields::HIT,
      typename Misccr6Fields::ADDRESS> {
    using eVALID = typename Misccr6Fields::eVALID;
    using eHIT = typename Misccr6Fields::eHIT;
    using VALID = typename Misccr6Fields::VALID;
    using HIT = typename Misccr6Fields::HIT;
    using ADDRESS = typename Misccr6Fields::ADDRESS;
  };

  // Miscellaneous Control 7
  struct Misccr7Fields {
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
  };  // struct Misccr7Fields

  struct MISCCR7 : ftl::mmio::Register<
      kBase + 0xDCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Misccr7Fields::VALID,
      typename Misccr7Fields::HIT,
      typename Misccr7Fields::ADDRESS> {
    using eHIT = typename Misccr7Fields::eHIT;
    using VALID = typename Misccr7Fields::VALID;
    using HIT = typename Misccr7Fields::HIT;
    using ADDRESS = typename Misccr7Fields::ADDRESS;
  };

  // Status 0
  struct Sts0Fields {
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
  };  // struct Sts0Fields

  struct STS0 : ftl::mmio::Register<
      kBase + 0xE0u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RO,
      typename Sts0Fields::SEQIDLE,
      typename Sts0Fields::ARBIDLE,
      typename Sts0Fields::ARBCMDSRC,
      ftl::mmio::Reserved<28, 4>> {
    using eSEQIDLE = typename Sts0Fields::eSEQIDLE;
    using eARBIDLE = typename Sts0Fields::eARBIDLE;
    using eARBCMDSRC = typename Sts0Fields::eARBCMDSRC;
    using SEQIDLE = typename Sts0Fields::SEQIDLE;
    using ARBIDLE = typename Sts0Fields::ARBIDLE;
    using ARBCMDSRC = typename Sts0Fields::ARBCMDSRC;
  };

  // Status 1
  struct Sts1Fields {
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
  };  // struct Sts1Fields

  struct STS1 : ftl::mmio::Register<
      kBase + 0xE4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Sts1Fields::AHBCMDERRID,
      ftl::mmio::Reserved<4, 4>,
      typename Sts1Fields::AHBCMDERRCODE,
      ftl::mmio::Reserved<4, 12>,
      typename Sts1Fields::IPCMDERRID,
      ftl::mmio::Reserved<4, 20>,
      typename Sts1Fields::IPCMDERRCODE,
      ftl::mmio::Reserved<4, 28>> {
    using eAHBCMDERRCODE = typename Sts1Fields::eAHBCMDERRCODE;
    using eIPCMDERRCODE = typename Sts1Fields::eIPCMDERRCODE;
    using AHBCMDERRID = typename Sts1Fields::AHBCMDERRID;
    using AHBCMDERRCODE = typename Sts1Fields::AHBCMDERRCODE;
    using IPCMDERRID = typename Sts1Fields::IPCMDERRID;
    using IPCMDERRCODE = typename Sts1Fields::IPCMDERRCODE;
  };

  // Status 2
  struct Sts2Fields {
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
  };  // struct Sts2Fields

  struct STS2 : ftl::mmio::Register<
      kBase + 0xE8u,
      std::uint32_t,
      0x01000100u,
      ftl::mmio::RO,
      typename Sts2Fields::ASLVLOCK,
      typename Sts2Fields::AREFLOCK,
      typename Sts2Fields::ASLVSEL,
      typename Sts2Fields::AREFSEL,
      ftl::mmio::Reserved<2, 14>,
      typename Sts2Fields::BSLVLOCK,
      typename Sts2Fields::BREFLOCK,
      typename Sts2Fields::BSLVSEL,
      typename Sts2Fields::BREFSEL,
      ftl::mmio::Reserved<2, 30>> {
    using eASLVLOCK = typename Sts2Fields::eASLVLOCK;
    using eAREFLOCK = typename Sts2Fields::eAREFLOCK;
    using eBSLVLOCK = typename Sts2Fields::eBSLVLOCK;
    using eBREFLOCK = typename Sts2Fields::eBREFLOCK;
    using ASLVLOCK = typename Sts2Fields::ASLVLOCK;
    using AREFLOCK = typename Sts2Fields::AREFLOCK;
    using ASLVSEL = typename Sts2Fields::ASLVSEL;
    using AREFSEL = typename Sts2Fields::AREFSEL;
    using BSLVLOCK = typename Sts2Fields::BSLVLOCK;
    using BREFLOCK = typename Sts2Fields::BREFLOCK;
    using BSLVSEL = typename Sts2Fields::BSLVSEL;
    using BREFSEL = typename Sts2Fields::BREFSEL;
  };

  // AHB Suspend Status
  struct AhbspndstsFields {
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
  };  // struct AhbspndstsFields

  struct AHBSPNDSTS : ftl::mmio::Register<
      kBase + 0xECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename AhbspndstsFields::ACTIVE,
      typename AhbspndstsFields::BUFID,
      ftl::mmio::Reserved<12, 4>,
      typename AhbspndstsFields::DATLFT> {
    using eACTIVE = typename AhbspndstsFields::eACTIVE;
    using ACTIVE = typename AhbspndstsFields::ACTIVE;
    using BUFID = typename AhbspndstsFields::BUFID;
    using DATLFT = typename AhbspndstsFields::DATLFT;
  };

  // IP Receive FIFO Status
  struct IprxfstsFields {
    // Fill Level of IP Receive FIFO
    using FILL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read Data Counter
    using RDCNTR = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IprxfstsFields

  struct IPRXFSTS : ftl::mmio::Register<
      kBase + 0xF0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename IprxfstsFields::FILL,
      ftl::mmio::Reserved<8, 8>,
      typename IprxfstsFields::RDCNTR> {
    using FILL = typename IprxfstsFields::FILL;
    using RDCNTR = typename IprxfstsFields::RDCNTR;
  };

  // IP Transmit FIFO Status
  struct IptxfstsFields {
    // Fill Level of IP Transmit FIFO
    using FILL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write Data Counter
    using WRCNTR = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IptxfstsFields

  struct IPTXFSTS : ftl::mmio::Register<
      kBase + 0xF4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename IptxfstsFields::FILL,
      ftl::mmio::Reserved<8, 8>,
      typename IptxfstsFields::WRCNTR> {
    using FILL = typename IptxfstsFields::FILL;
    using WRCNTR = typename IptxfstsFields::WRCNTR;
  };

  // IP Receive FIFO Data x
  struct RfdrFields {
    // Receive Data
    using RXDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RfdrFields

  template<std::uint32_t Index>
  struct RFDR : ftl::mmio::Register<
      kBase + 0x100u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RfdrFields::RXDATA> {
    static_assert(Index < 32u, "RFDR: Index out of range");
    using RXDATA = typename RfdrFields::RXDATA;
  };

  // IP TX FIFO Data x
  struct TfdrFields {
    // Transmit Data
    using TXDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct TfdrFields

  template<std::uint32_t Index>
  struct TFDR : ftl::mmio::Register<
      kBase + 0x180u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename TfdrFields::TXDATA> {
    static_assert(Index < 32u, "TFDR: Index out of range");
    using TXDATA = typename TfdrFields::TXDATA;
  };

  // Lookup Table x
  struct LutFields {
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
  };  // struct LutFields

  template<std::uint32_t Index>
  struct LUT : ftl::mmio::Register<
      kBase + 0x200u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename LutFields::OPERAND0,
      typename LutFields::NUM_PADS0,
      typename LutFields::OPCODE0,
      typename LutFields::OPERAND1,
      typename LutFields::NUM_PADS1,
      typename LutFields::OPCODE1> {
    static_assert(Index < 64u, "LUT: Index out of range");
    using OPERAND0 = typename LutFields::OPERAND0;
    using NUM_PADS0 = typename LutFields::NUM_PADS0;
    using OPCODE0 = typename LutFields::OPCODE0;
    using OPERAND1 = typename LutFields::OPERAND1;
    using NUM_PADS1 = typename LutFields::NUM_PADS1;
    using OPCODE1 = typename LutFields::OPCODE1;
  };

  // AHB Controller ID 0 Control
  struct Hmstr0crFields {
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
  };  // struct Hmstr0crFields

  struct HMSTR0CR : ftl::mmio::Register<
      kBase + 0x400u,
      std::uint32_t,
      0x0040FFCFu,
      ftl::mmio::RW,
      typename Hmstr0crFields::MASK,
      typename Hmstr0crFields::MSTRID> {
    using eMASK = typename Hmstr0crFields::eMASK;
    using MASK = typename Hmstr0crFields::MASK;
    using MSTRID = typename Hmstr0crFields::MSTRID;
  };

  // AHB Controller ID 1 Control
  struct Hmstr1crFields {
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
  };  // struct Hmstr1crFields

  struct HMSTR1CR : ftl::mmio::Register<
      kBase + 0x404u,
      std::uint32_t,
      0x0000FFCFu,
      ftl::mmio::RW,
      typename Hmstr1crFields::MASK,
      typename Hmstr1crFields::MSTRID> {
    using eMASK = typename Hmstr1crFields::eMASK;
    using MASK = typename Hmstr1crFields::MASK;
    using MSTRID = typename Hmstr1crFields::MSTRID;
  };

  // AHB Controller ID 2 Control
  struct Hmstr2crFields {
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
  };  // struct Hmstr2crFields

  struct HMSTR2CR : ftl::mmio::Register<
      kBase + 0x408u,
      std::uint32_t,
      0x0004F00Fu,
      ftl::mmio::RW,
      typename Hmstr2crFields::MASK,
      typename Hmstr2crFields::MSTRID> {
    using eMASK = typename Hmstr2crFields::eMASK;
    using MASK = typename Hmstr2crFields::MASK;
    using MSTRID = typename Hmstr2crFields::MSTRID;
  };

  // AHB Controller ID 3 Control
  struct Hmstr3crFields {
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
  };  // struct Hmstr3crFields

  struct HMSTR3CR : ftl::mmio::Register<
      kBase + 0x40Cu,
      std::uint32_t,
      0x0022807Fu,
      ftl::mmio::RW,
      typename Hmstr3crFields::MASK,
      typename Hmstr3crFields::MSTRID> {
    using eMASK = typename Hmstr3crFields::eMASK;
    using MASK = typename Hmstr3crFields::MASK;
    using MSTRID = typename Hmstr3crFields::MSTRID;
  };

  // AHB Controller ID 4 Control
  struct Hmstr4crFields {
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
  };  // struct Hmstr4crFields

  struct HMSTR4CR : ftl::mmio::Register<
      kBase + 0x410u,
      std::uint32_t,
      0x0032F87Fu,
      ftl::mmio::RW,
      typename Hmstr4crFields::MASK,
      typename Hmstr4crFields::MSTRID> {
    using eMASK = typename Hmstr4crFields::eMASK;
    using MASK = typename Hmstr4crFields::MASK;
    using MSTRID = typename Hmstr4crFields::MSTRID;
  };

  // AHB Controller ID 5 Control
  struct Hmstr5crFields {
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
  };  // struct Hmstr5crFields

  struct HMSTR5CR : ftl::mmio::Register<
      kBase + 0x414u,
      std::uint32_t,
      0x0011F87Fu,
      ftl::mmio::RW,
      typename Hmstr5crFields::MASK,
      typename Hmstr5crFields::MSTRID> {
    using eMASK = typename Hmstr5crFields::eMASK;
    using MASK = typename Hmstr5crFields::MASK;
    using MSTRID = typename Hmstr5crFields::MSTRID;
  };

  // AHB Controller ID 6 Control
  struct Hmstr6crFields {
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
  };  // struct Hmstr6crFields

  struct HMSTR6CR : ftl::mmio::Register<
      kBase + 0x418u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Hmstr6crFields::MASK,
      typename Hmstr6crFields::MSTRID> {
    using eMASK = typename Hmstr6crFields::eMASK;
    using MASK = typename Hmstr6crFields::MASK;
    using MSTRID = typename Hmstr6crFields::MSTRID;
  };

  // AHB Controller ID 7 Control
  struct Hmstr7crFields {
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
  };  // struct Hmstr7crFields

  struct HMSTR7CR : ftl::mmio::Register<
      kBase + 0x41Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Hmstr7crFields::MASK,
      typename Hmstr7crFields::MSTRID> {
    using eMASK = typename Hmstr7crFields::eMASK;
    using MASK = typename Hmstr7crFields::MASK;
    using MSTRID = typename Hmstr7crFields::MSTRID;
  };

  // HADDR REMAP Start Address
  struct HaddrstartFields {
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
  };  // struct HaddrstartFields

  struct HADDRSTART : ftl::mmio::Register<
      kBase + 0x420u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename HaddrstartFields::REMAPEN,
      typename HaddrstartFields::KBINECC,
      ftl::mmio::Reserved<10, 2>,
      typename HaddrstartFields::ADDRSTART> {
    using eREMAPEN = typename HaddrstartFields::eREMAPEN;
    using eKBINECC = typename HaddrstartFields::eKBINECC;
    using REMAPEN = typename HaddrstartFields::REMAPEN;
    using KBINECC = typename HaddrstartFields::KBINECC;
    using ADDRSTART = typename HaddrstartFields::ADDRSTART;
  };

  // HADDR REMAP END ADDR
  struct HaddrendFields {
    // End Address of HADDR Remap Range
    using ENDSTART = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HaddrendFields

  struct HADDREND : ftl::mmio::Register<
      kBase + 0x424u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      typename HaddrendFields::ENDSTART> {
    using ENDSTART = typename HaddrendFields::ENDSTART;
  };

  // HADDR Remap Offset
  struct HaddroffsetFields {
    // HADDR Offset
    using ADDROFFSET = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HaddroffsetFields

  struct HADDROFFSET : ftl::mmio::Register<
      kBase + 0x428u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      typename HaddroffsetFields::ADDROFFSET> {
    using ADDROFFSET = typename HaddroffsetFields::ADDROFFSET;
  };

};

}  // namespace regs