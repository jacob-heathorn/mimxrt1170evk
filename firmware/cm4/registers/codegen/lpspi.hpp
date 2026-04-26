#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LPSPI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Lpspi {
  static_assert(
        Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u || Instance == 5u || Instance == 6u,
        "Lpspi: Instance must be one of 1, 2, 3, 4, 5, 6");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40114000u :
      Instance == 2u ? 0x40118000u :
      Instance == 3u ? 0x4011C000u :
      Instance == 4u ? 0x40120000u :
      Instance == 5u ? 0x40C2C000u :
      Instance == 6u ? 0x40C30000u :
      0u;

  // Version ID
  struct VeridFields {
    enum class eFEATURE : std::uint32_t {
      // Standard feature set supporting a 32-bit shift register.
      eSTANDARD = 4,
    };

    // Module Identification Number
    using FEATURE = ftl::mmio::Field<16, 0, eFEATURE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Minor Version Number
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major Version Number
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VeridFields

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x01020004u,
      ftl::mmio::RO,
      typename VeridFields::FEATURE,
      typename VeridFields::MINOR,
      typename VeridFields::MAJOR> {
    using eFEATURE = typename VeridFields::eFEATURE;
    using FEATURE = typename VeridFields::FEATURE;
    using MINOR = typename VeridFields::MINOR;
    using MAJOR = typename VeridFields::MAJOR;
  };

  // Parameter
  struct ParamFields {
    // Transmit FIFO Size
    using TXFIFO = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive FIFO Size
    using RXFIFO = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // PCS Number
    using PCSNUM = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ParamFields

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00040404u,
      ftl::mmio::RO,
      typename ParamFields::TXFIFO,
      typename ParamFields::RXFIFO,
      typename ParamFields::PCSNUM,
      ftl::mmio::Reserved<8, 24>> {
    using TXFIFO = typename ParamFields::TXFIFO;
    using RXFIFO = typename ParamFields::RXFIFO;
    using PCSNUM = typename ParamFields::PCSNUM;
  };

  // Control
  struct CrFields {
    enum class eMEN : std::uint32_t {
      // Disable
      eDISABLED = 0,
      // Enable
      eENABLED = 1,
    };

    enum class eRST : std::uint32_t {
      // Not reset
      eNOT_RESET = 0,
      // Reset
      eRESET = 1,
    };

    enum class eDOZEN : std::uint32_t {
      // Enable
      eENABLED = 0,
      // Disable
      eDISABLED = 1,
    };

    enum class eDBGEN : std::uint32_t {
      // Disable
      eDISABLED = 0,
      // Enable
      eENABLED = 1,
    };

    enum class eRTF : std::uint32_t {
      // No effect
      eNO_EFFECT = 0,
      // Reset
      eTXFIFO_RST = 1,
    };

    enum class eRRF : std::uint32_t {
      // No effect
      eNO_EFFECT = 0,
      // Reset
      eRXFIFO_RST = 1,
    };

    // Module Enable
    using MEN = ftl::mmio::Field<1, 0, eMEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset
    using RST = ftl::mmio::Field<1, 1, eRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Doze Mode Enable
    using DOZEN = ftl::mmio::Field<1, 2, eDOZEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBGEN = ftl::mmio::Field<1, 3, eDBGEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset Transmit FIFO
    using RTF = ftl::mmio::Field<1, 8, eRTF, ftl::mmio::WO, ftl::mmio::Normal>;
    // Reset Receive FIFO
    using RRF = ftl::mmio::Field<1, 9, eRRF, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct CrFields

  struct CR : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CrFields::MEN,
      typename CrFields::RST,
      typename CrFields::DOZEN,
      typename CrFields::DBGEN,
      ftl::mmio::Reserved<4, 4>,
      typename CrFields::RTF,
      typename CrFields::RRF,
      ftl::mmio::Reserved<22, 10>> {
    using eMEN = typename CrFields::eMEN;
    using eRST = typename CrFields::eRST;
    using eDOZEN = typename CrFields::eDOZEN;
    using eDBGEN = typename CrFields::eDBGEN;
    using eRTF = typename CrFields::eRTF;
    using eRRF = typename CrFields::eRRF;
    using MEN = typename CrFields::MEN;
    using RST = typename CrFields::RST;
    using DOZEN = typename CrFields::DOZEN;
    using DBGEN = typename CrFields::DBGEN;
    using RTF = typename CrFields::RTF;
    using RRF = typename CrFields::RRF;
  };

  // Status
  struct SrFields {
    enum class eTDF : std::uint32_t {
      // Transmit data not requested
      eTXDATA_NOT_REQST = 0,
      // Transmit data is requested
      eTXDATA_REQST = 1,
    };

    enum class eRDF : std::uint32_t {
      // Receive data not ready
      eNOTREADY = 0,
      // Receive data is ready
      eREADY = 1,
    };

    enum class eWCF : std::uint32_t {
      // Not complete
      eNOT_COMPLETED = 0,
      // Complete
      eCOMPLETED = 1,
    };

    enum class eFCF : std::uint32_t {
      // Not complete
      eNOT_COMPLETED = 0,
      // Complete
      eCOMPLETED = 1,
    };

    enum class eTCF : std::uint32_t {
      // Not complete
      eNOT_COMPLETED = 0,
      // Complete
      eCOMPLETED = 1,
    };

    enum class eTEF : std::uint32_t {
      // No underrun
      eNO_UNDERRUN = 0,
      // Underrun
      eUNDERRUN = 1,
    };

    enum class eREF : std::uint32_t {
      // No overflow
      eNOT_OVERFLOWED = 0,
      // Overflow
      eOVERFLOWED = 1,
    };

    enum class eDMF : std::uint32_t {
      // No match
      eNO_MATCH = 0,
      // Match
      eMATCH = 1,
    };

    enum class eMBF : std::uint32_t {
      // LPSPI is idle
      eIDLE = 0,
      // LPSPI is busy
      eBUSY = 1,
    };

    // Transmit Data Flag
    using TDF = ftl::mmio::Field<1, 0, eTDF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive Data Flag
    using RDF = ftl::mmio::Field<1, 1, eRDF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Word Complete Flag
    using WCF = ftl::mmio::Field<1, 8, eWCF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Frame Complete Flag
    using FCF = ftl::mmio::Field<1, 9, eFCF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transfer Complete Flag
    using TCF = ftl::mmio::Field<1, 10, eTCF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transmit Error Flag
    using TEF = ftl::mmio::Field<1, 11, eTEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Receive Error Flag
    using REF = ftl::mmio::Field<1, 12, eREF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Data Match Flag
    using DMF = ftl::mmio::Field<1, 13, eDMF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Module Busy Flag
    using MBF = ftl::mmio::Field<1, 24, eMBF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrFields

  struct SR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      typename SrFields::TDF,
      typename SrFields::RDF,
      ftl::mmio::Reserved<6, 2>,
      typename SrFields::WCF,
      typename SrFields::FCF,
      typename SrFields::TCF,
      typename SrFields::TEF,
      typename SrFields::REF,
      typename SrFields::DMF,
      ftl::mmio::Reserved<10, 14>,
      typename SrFields::MBF,
      ftl::mmio::Reserved<7, 25>> {
    using eTDF = typename SrFields::eTDF;
    using eRDF = typename SrFields::eRDF;
    using eWCF = typename SrFields::eWCF;
    using eFCF = typename SrFields::eFCF;
    using eTCF = typename SrFields::eTCF;
    using eTEF = typename SrFields::eTEF;
    using eREF = typename SrFields::eREF;
    using eDMF = typename SrFields::eDMF;
    using eMBF = typename SrFields::eMBF;
    using TDF = typename SrFields::TDF;
    using RDF = typename SrFields::RDF;
    using WCF = typename SrFields::WCF;
    using FCF = typename SrFields::FCF;
    using TCF = typename SrFields::TCF;
    using TEF = typename SrFields::TEF;
    using REF = typename SrFields::REF;
    using DMF = typename SrFields::DMF;
    using MBF = typename SrFields::MBF;
  };

  // Interrupt Enable
  struct IerFields {
    enum class eTDIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eRDIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eWCIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eFCIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eTCIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eTEIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eREIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eDMIE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Transmit Data Interrupt Enable
    using TDIE = ftl::mmio::Field<1, 0, eTDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Interrupt Enable
    using RDIE = ftl::mmio::Field<1, 1, eRDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Word Complete Interrupt Enable
    using WCIE = ftl::mmio::Field<1, 8, eWCIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Frame Complete Interrupt Enable
    using FCIE = ftl::mmio::Field<1, 9, eFCIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transfer Complete Interrupt Enable
    using TCIE = ftl::mmio::Field<1, 10, eTCIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Error Interrupt Enable
    using TEIE = ftl::mmio::Field<1, 11, eTEIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Error Interrupt Enable
    using REIE = ftl::mmio::Field<1, 12, eREIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data Match Interrupt Enable
    using DMIE = ftl::mmio::Field<1, 13, eDMIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IerFields

  struct IER : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IerFields::TDIE,
      typename IerFields::RDIE,
      ftl::mmio::Reserved<6, 2>,
      typename IerFields::WCIE,
      typename IerFields::FCIE,
      typename IerFields::TCIE,
      typename IerFields::TEIE,
      typename IerFields::REIE,
      typename IerFields::DMIE,
      ftl::mmio::Reserved<18, 14>> {
    using eTDIE = typename IerFields::eTDIE;
    using eRDIE = typename IerFields::eRDIE;
    using eWCIE = typename IerFields::eWCIE;
    using eFCIE = typename IerFields::eFCIE;
    using eTCIE = typename IerFields::eTCIE;
    using eTEIE = typename IerFields::eTEIE;
    using eREIE = typename IerFields::eREIE;
    using eDMIE = typename IerFields::eDMIE;
    using TDIE = typename IerFields::TDIE;
    using RDIE = typename IerFields::RDIE;
    using WCIE = typename IerFields::WCIE;
    using FCIE = typename IerFields::FCIE;
    using TCIE = typename IerFields::TCIE;
    using TEIE = typename IerFields::TEIE;
    using REIE = typename IerFields::REIE;
    using DMIE = typename IerFields::DMIE;
  };

  // DMA Enable
  struct DerFields {
    enum class eTDDE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eRDDE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Transmit Data DMA Enable
    using TDDE = ftl::mmio::Field<1, 0, eTDDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data DMA Enable
    using RDDE = ftl::mmio::Field<1, 1, eRDDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DerFields

  struct DER : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DerFields::TDDE,
      typename DerFields::RDDE,
      ftl::mmio::Reserved<30, 2>> {
    using eTDDE = typename DerFields::eTDDE;
    using eRDDE = typename DerFields::eRDDE;
    using TDDE = typename DerFields::TDDE;
    using RDDE = typename DerFields::RDDE;
  };

  // Configuration 0
  struct Cfgr0Fields {
    enum class eCIRFIFO : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eRDMO : std::uint32_t {
      // Disable
      eSTORED = 0,
      // Enable
      eDISCARDED = 1,
    };

    // Circular FIFO Enable
    using CIRFIFO = ftl::mmio::Field<1, 8, eCIRFIFO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Match Only
    using RDMO = ftl::mmio::Field<1, 9, eRDMO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cfgr0Fields

  struct CFGR0 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      typename Cfgr0Fields::CIRFIFO,
      typename Cfgr0Fields::RDMO,
      ftl::mmio::Reserved<22, 10>> {
    using eCIRFIFO = typename Cfgr0Fields::eCIRFIFO;
    using eRDMO = typename Cfgr0Fields::eRDMO;
    using CIRFIFO = typename Cfgr0Fields::CIRFIFO;
    using RDMO = typename Cfgr0Fields::RDMO;
  };

  // Configuration 1
  struct Cfgr1Fields {
    enum class eMASTER : std::uint32_t {
      // Slave mode
      eSLAVE_MODE = 0,
      // Master mode
      eMASTER_MODE = 1,
    };

    enum class eSAMPLE : std::uint32_t {
      // SCK edge
      eON_SCK_EDGE = 0,
      // Delayed SCK edge
      eON_DELAYED_SCK_EDGE = 1,
    };

    enum class eAUTOPCS : std::uint32_t {
      // Disable
      eDISABLED = 0,
      // Enable
      eENABLED = 1,
    };

    enum class eNOSTALL : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eMATCFG : std::uint32_t {
      // Match is disabled
      eDISABLED = 0,
      // Match first data word with compare word
      eENABLED_FIRSTDATAMATCH = 2,
      // Match any data word with compare word
      eENABLED_ANYDATAMATCH = 3,
      // Sequential match, first data word
      eENABLED_DATAMATCH_100 = 4,
      // Sequential match, any data word
      eENABLED_DATAMATCH_101 = 5,
      // Match first data word (masked) with compare word (masked)
      eENABLED_DATAMATCH_110 = 6,
      // Match any data word (masked) with compare word (masked)
      eENABLED_DATAMATCH_111 = 7,
    };

    enum class ePINCFG : std::uint32_t {
      // SIN is used for input data; SOUT is used for output data.
      eSIN_IN_SOUT_OUT = 0,
      // SIN is used for both input and output data. Only half-duplex serial transfers are supported.
      eSIN_BOTH_IN_OUT = 1,
      // SOUT is used for both input and output data. Only half-duplex serial transfers are supported.
      eSOUT_BOTH_IN_OUT = 2,
      // SOUT is used for input data; SIN is used for output data.
      eSOUT_IN_SIN_OUT = 3,
    };

    enum class eOUTCFG : std::uint32_t {
      // Output data retains last value.
      eRETAIN_LASTVALUE = 0,
      // Output data is 3-stated.
      eTRISTATED = 1,
    };

    enum class ePCSCFG : std::uint32_t {
      // PCS[3:2] are configured for chip select function
      eCHIP_SELECT = 0,
      // PCS[3:2] are configured for half-duplex 4-bit transfers (PCS[3:2] = DATA[3:2])
      eHALFDUPLEX4BIT = 1,
    };

    // Master Mode
    using MASTER = ftl::mmio::Field<1, 0, eMASTER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Point
    using SAMPLE = ftl::mmio::Field<1, 1, eSAMPLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Automatic PCS
    using AUTOPCS = ftl::mmio::Field<1, 2, eAUTOPCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Stall
    using NOSTALL = ftl::mmio::Field<1, 3, eNOSTALL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Peripheral Chip Select Polarity
    using PCSPOL = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Match Configuration
    using MATCFG = ftl::mmio::Field<3, 16, eMATCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pin Configuration
    using PINCFG = ftl::mmio::Field<2, 24, ePINCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Configuration
    using OUTCFG = ftl::mmio::Field<1, 26, eOUTCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Peripheral Chip Select Configuration
    using PCSCFG = ftl::mmio::Field<1, 27, ePCSCFG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cfgr1Fields

  struct CFGR1 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Cfgr1Fields::MASTER,
      typename Cfgr1Fields::SAMPLE,
      typename Cfgr1Fields::AUTOPCS,
      typename Cfgr1Fields::NOSTALL,
      ftl::mmio::Reserved<4, 4>,
      typename Cfgr1Fields::PCSPOL,
      ftl::mmio::Reserved<4, 12>,
      typename Cfgr1Fields::MATCFG,
      ftl::mmio::Reserved<5, 19>,
      typename Cfgr1Fields::PINCFG,
      typename Cfgr1Fields::OUTCFG,
      typename Cfgr1Fields::PCSCFG,
      ftl::mmio::Reserved<4, 28>> {
    using eMASTER = typename Cfgr1Fields::eMASTER;
    using eSAMPLE = typename Cfgr1Fields::eSAMPLE;
    using eAUTOPCS = typename Cfgr1Fields::eAUTOPCS;
    using eNOSTALL = typename Cfgr1Fields::eNOSTALL;
    using eMATCFG = typename Cfgr1Fields::eMATCFG;
    using ePINCFG = typename Cfgr1Fields::ePINCFG;
    using eOUTCFG = typename Cfgr1Fields::eOUTCFG;
    using ePCSCFG = typename Cfgr1Fields::ePCSCFG;
    using MASTER = typename Cfgr1Fields::MASTER;
    using SAMPLE = typename Cfgr1Fields::SAMPLE;
    using AUTOPCS = typename Cfgr1Fields::AUTOPCS;
    using NOSTALL = typename Cfgr1Fields::NOSTALL;
    using PCSPOL = typename Cfgr1Fields::PCSPOL;
    using MATCFG = typename Cfgr1Fields::MATCFG;
    using PINCFG = typename Cfgr1Fields::PINCFG;
    using OUTCFG = typename Cfgr1Fields::OUTCFG;
    using PCSCFG = typename Cfgr1Fields::PCSCFG;
  };

  // Data Match 0
  struct Dmr0Fields {
    // Match 0 Value
    using MATCH0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dmr0Fields

  struct DMR0 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Dmr0Fields::MATCH0> {
    using MATCH0 = typename Dmr0Fields::MATCH0;
  };

  // Data Match 1
  struct Dmr1Fields {
    // Match 1 Value
    using MATCH1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dmr1Fields

  struct DMR1 : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Dmr1Fields::MATCH1> {
    using MATCH1 = typename Dmr1Fields::MATCH1;
  };

  // Clock Configuration
  struct CcrFields {
    // SCK Divider
    using SCKDIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Delay Between Transfers
    using DBT = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PCS-to-SCK Delay
    using PCSSCK = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SCK-to-PCS Delay
    using SCKPCS = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CcrFields

  struct CCR : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CcrFields::SCKDIV,
      typename CcrFields::DBT,
      typename CcrFields::PCSSCK,
      typename CcrFields::SCKPCS> {
    using SCKDIV = typename CcrFields::SCKDIV;
    using DBT = typename CcrFields::DBT;
    using PCSSCK = typename CcrFields::PCSSCK;
    using SCKPCS = typename CcrFields::SCKPCS;
  };

  // FIFO Control
  struct FcrFields {
    // Transmit FIFO Watermark
    using TXWATER = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive FIFO Watermark
    using RXWATER = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FcrFields

  struct FCR : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename FcrFields::TXWATER,
      ftl::mmio::Reserved<12, 4>,
      typename FcrFields::RXWATER,
      ftl::mmio::Reserved<12, 20>> {
    using TXWATER = typename FcrFields::TXWATER;
    using RXWATER = typename FcrFields::RXWATER;
  };

  // FIFO Status
  struct FsrFields {
    // Transmit FIFO Count
    using TXCOUNT = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive FIFO Count
    using RXCOUNT = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct FsrFields

  struct FSR : ftl::mmio::Register<
      kBase + 0x5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename FsrFields::TXCOUNT,
      ftl::mmio::Reserved<11, 5>,
      typename FsrFields::RXCOUNT,
      ftl::mmio::Reserved<11, 21>> {
    using TXCOUNT = typename FsrFields::TXCOUNT;
    using RXCOUNT = typename FsrFields::RXCOUNT;
  };

  // Transmit Command
  struct TcrFields {
    enum class eWIDTH : std::uint32_t {
      // 1-bit transfer
      eONEBIT = 0,
      // 2-bit transfer
      eTWOBIT = 1,
      // 4-bit transfer
      eFOURBIT = 2,
    };

    enum class eTXMSK : std::uint32_t {
      // Normal transfer
      eNORMAL = 0,
      // Mask transmit data
      eMASK = 1,
    };

    enum class eRXMSK : std::uint32_t {
      // Normal transfer
      eNORMAL = 0,
      // Receive data is masked
      eMASK = 1,
    };

    enum class eCONTC : std::uint32_t {
      // Command word for start of new transfer
      eSTART = 0,
      // Command word for continuing transfer
      eCONTINUE = 1,
    };

    enum class eCONT : std::uint32_t {
      // Continuous transfer is disabled
      eDISABLED = 0,
      // Continuous transfer is enabled
      eENABLED = 1,
    };

    enum class eBYSW : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eLSBF : std::uint32_t {
      // Data is transferred MSB first
      eMSB_FIRST = 0,
      // Data is transferred LSB first
      eLSB_FIRST = 1,
    };

    enum class ePCS : std::uint32_t {
      // Transfer using PCS[0]
      eTX_PCS0 = 0,
      // Transfer using PCS[1]
      eTX_PCS1 = 1,
      // Transfer using PCS[2]
      eTX_PCS2 = 2,
      // Transfer using PCS[3]
      eTX_PCS3 = 3,
    };

    enum class ePRESCALE : std::uint32_t {
      // Divide by 1
      eDIVIDEBY1 = 0,
      // Divide by 2
      eDIVIDEBY2 = 1,
      // Divide by 4
      eDIVIDEBY4 = 2,
      // Divide by 8
      eDIVIDEBY8 = 3,
      // Divide by 16
      eDIVIDEBY16 = 4,
      // Divide by 32
      eDIVIDEBY32 = 5,
      // Divide by 64
      eDIVIDEBY64 = 6,
      // Divide by 128
      eDIVIDEBY128 = 7,
    };

    enum class eCPHA : std::uint32_t {
      // Captured
      eCAPTURED = 0,
      // Changed
      eCHANGED = 1,
    };

    enum class eCPOL : std::uint32_t {
      // Inactive low
      eINACTIVE_LOW = 0,
      // Inactive high
      eINACTIVE_HIGH = 1,
    };

    // Frame Size
    using FRAMESZ = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transfer Width
    using WIDTH = ftl::mmio::Field<2, 16, eWIDTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Data Mask
    using TXMSK = ftl::mmio::Field<1, 18, eTXMSK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Mask
    using RXMSK = ftl::mmio::Field<1, 19, eRXMSK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Continuing Command
    using CONTC = ftl::mmio::Field<1, 20, eCONTC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Continuous Transfer
    using CONT = ftl::mmio::Field<1, 21, eCONT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Byte Swap
    using BYSW = ftl::mmio::Field<1, 22, eBYSW, ftl::mmio::RW, ftl::mmio::Normal>;
    // LSB First
    using LSBF = ftl::mmio::Field<1, 23, eLSBF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Peripheral Chip Select
    using PCS = ftl::mmio::Field<2, 24, ePCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Prescaler Value
    using PRESCALE = ftl::mmio::Field<3, 27, ePRESCALE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock Phase
    using CPHA = ftl::mmio::Field<1, 30, eCPHA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock Polarity
    using CPOL = ftl::mmio::Field<1, 31, eCPOL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcrFields

  struct TCR : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x0000001Fu,
      ftl::mmio::RW,
      typename TcrFields::FRAMESZ,
      ftl::mmio::Reserved<4, 12>,
      typename TcrFields::WIDTH,
      typename TcrFields::TXMSK,
      typename TcrFields::RXMSK,
      typename TcrFields::CONTC,
      typename TcrFields::CONT,
      typename TcrFields::BYSW,
      typename TcrFields::LSBF,
      typename TcrFields::PCS,
      ftl::mmio::Reserved<1, 26>,
      typename TcrFields::PRESCALE,
      typename TcrFields::CPHA,
      typename TcrFields::CPOL> {
    using eWIDTH = typename TcrFields::eWIDTH;
    using eTXMSK = typename TcrFields::eTXMSK;
    using eRXMSK = typename TcrFields::eRXMSK;
    using eCONTC = typename TcrFields::eCONTC;
    using eCONT = typename TcrFields::eCONT;
    using eBYSW = typename TcrFields::eBYSW;
    using eLSBF = typename TcrFields::eLSBF;
    using ePCS = typename TcrFields::ePCS;
    using ePRESCALE = typename TcrFields::ePRESCALE;
    using eCPHA = typename TcrFields::eCPHA;
    using eCPOL = typename TcrFields::eCPOL;
    using FRAMESZ = typename TcrFields::FRAMESZ;
    using WIDTH = typename TcrFields::WIDTH;
    using TXMSK = typename TcrFields::TXMSK;
    using RXMSK = typename TcrFields::RXMSK;
    using CONTC = typename TcrFields::CONTC;
    using CONT = typename TcrFields::CONT;
    using BYSW = typename TcrFields::BYSW;
    using LSBF = typename TcrFields::LSBF;
    using PCS = typename TcrFields::PCS;
    using PRESCALE = typename TcrFields::PRESCALE;
    using CPHA = typename TcrFields::CPHA;
    using CPOL = typename TcrFields::CPOL;
  };

  // Transmit Data
  struct TdrFields {
    // Transmit Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct TdrFields

  struct TDR : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename TdrFields::DATA> {
    using DATA = typename TdrFields::DATA;
  };

  // Receive Status
  struct RsrFields {
    enum class eSOF : std::uint32_t {
      // Subsequent data word
      eNEXT_DATAWORD = 0,
      // First data word
      eFIRST_DATAWORD = 1,
    };

    enum class eRXEMPTY : std::uint32_t {
      // Not empty
      eNOT_EMPTY = 0,
      // Empty
      eEMPTY = 1,
    };

    // Start Of Frame
    using SOF = ftl::mmio::Field<1, 0, eSOF, ftl::mmio::RO, ftl::mmio::Normal>;
    // RX FIFO Empty
    using RXEMPTY = ftl::mmio::Field<1, 1, eRXEMPTY, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RsrFields

  struct RSR : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RO,
      typename RsrFields::SOF,
      typename RsrFields::RXEMPTY,
      ftl::mmio::Reserved<30, 2>> {
    using eSOF = typename RsrFields::eSOF;
    using eRXEMPTY = typename RsrFields::eRXEMPTY;
    using SOF = typename RsrFields::SOF;
    using RXEMPTY = typename RsrFields::RXEMPTY;
  };

  // Receive Data
  struct RdrFields {
    // Receive Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RdrFields

  struct RDR : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RdrFields::DATA> {
    using DATA = typename RdrFields::DATA;
  };

};

}  // namespace regs