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
  struct VERID_fields_ {
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
  };  // struct VERID_fields_

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x01020004u,
      ftl::mmio::RO,
      typename VERID_fields_::FEATURE,
      typename VERID_fields_::MINOR,
      typename VERID_fields_::MAJOR> {
    using eFEATURE = typename VERID_fields_::eFEATURE;
    using FEATURE = typename VERID_fields_::FEATURE;
    using MINOR = typename VERID_fields_::MINOR;
    using MAJOR = typename VERID_fields_::MAJOR;
  };

  // Parameter
  struct PARAM_fields_ {
    // Transmit FIFO Size
    using TXFIFO = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive FIFO Size
    using RXFIFO = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // PCS Number
    using PCSNUM = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PARAM_fields_

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00040404u,
      ftl::mmio::RO,
      typename PARAM_fields_::TXFIFO,
      typename PARAM_fields_::RXFIFO,
      typename PARAM_fields_::PCSNUM,
      ftl::mmio::Reserved<8, 24>> {
    using TXFIFO = typename PARAM_fields_::TXFIFO;
    using RXFIFO = typename PARAM_fields_::RXFIFO;
    using PCSNUM = typename PARAM_fields_::PCSNUM;
  };

  // Control
  struct CR_fields_ {
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
  };  // struct CR_fields_

  struct CR : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CR_fields_::MEN,
      typename CR_fields_::RST,
      typename CR_fields_::DOZEN,
      typename CR_fields_::DBGEN,
      ftl::mmio::Reserved<4, 4>,
      typename CR_fields_::RTF,
      typename CR_fields_::RRF,
      ftl::mmio::Reserved<22, 10>> {
    using eMEN = typename CR_fields_::eMEN;
    using eRST = typename CR_fields_::eRST;
    using eDOZEN = typename CR_fields_::eDOZEN;
    using eDBGEN = typename CR_fields_::eDBGEN;
    using eRTF = typename CR_fields_::eRTF;
    using eRRF = typename CR_fields_::eRRF;
    using MEN = typename CR_fields_::MEN;
    using RST = typename CR_fields_::RST;
    using DOZEN = typename CR_fields_::DOZEN;
    using DBGEN = typename CR_fields_::DBGEN;
    using RTF = typename CR_fields_::RTF;
    using RRF = typename CR_fields_::RRF;
  };

  // Status
  struct SR_fields_ {
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
  };  // struct SR_fields_

  struct SR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      typename SR_fields_::TDF,
      typename SR_fields_::RDF,
      ftl::mmio::Reserved<6, 2>,
      typename SR_fields_::WCF,
      typename SR_fields_::FCF,
      typename SR_fields_::TCF,
      typename SR_fields_::TEF,
      typename SR_fields_::REF,
      typename SR_fields_::DMF,
      ftl::mmio::Reserved<10, 14>,
      typename SR_fields_::MBF,
      ftl::mmio::Reserved<7, 25>> {
    using eTDF = typename SR_fields_::eTDF;
    using eRDF = typename SR_fields_::eRDF;
    using eWCF = typename SR_fields_::eWCF;
    using eFCF = typename SR_fields_::eFCF;
    using eTCF = typename SR_fields_::eTCF;
    using eTEF = typename SR_fields_::eTEF;
    using eREF = typename SR_fields_::eREF;
    using eDMF = typename SR_fields_::eDMF;
    using eMBF = typename SR_fields_::eMBF;
    using TDF = typename SR_fields_::TDF;
    using RDF = typename SR_fields_::RDF;
    using WCF = typename SR_fields_::WCF;
    using FCF = typename SR_fields_::FCF;
    using TCF = typename SR_fields_::TCF;
    using TEF = typename SR_fields_::TEF;
    using REF = typename SR_fields_::REF;
    using DMF = typename SR_fields_::DMF;
    using MBF = typename SR_fields_::MBF;
  };

  // Interrupt Enable
  struct IER_fields_ {
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
  };  // struct IER_fields_

  struct IER : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IER_fields_::TDIE,
      typename IER_fields_::RDIE,
      ftl::mmio::Reserved<6, 2>,
      typename IER_fields_::WCIE,
      typename IER_fields_::FCIE,
      typename IER_fields_::TCIE,
      typename IER_fields_::TEIE,
      typename IER_fields_::REIE,
      typename IER_fields_::DMIE,
      ftl::mmio::Reserved<18, 14>> {
    using eTDIE = typename IER_fields_::eTDIE;
    using eRDIE = typename IER_fields_::eRDIE;
    using eWCIE = typename IER_fields_::eWCIE;
    using eFCIE = typename IER_fields_::eFCIE;
    using eTCIE = typename IER_fields_::eTCIE;
    using eTEIE = typename IER_fields_::eTEIE;
    using eREIE = typename IER_fields_::eREIE;
    using eDMIE = typename IER_fields_::eDMIE;
    using TDIE = typename IER_fields_::TDIE;
    using RDIE = typename IER_fields_::RDIE;
    using WCIE = typename IER_fields_::WCIE;
    using FCIE = typename IER_fields_::FCIE;
    using TCIE = typename IER_fields_::TCIE;
    using TEIE = typename IER_fields_::TEIE;
    using REIE = typename IER_fields_::REIE;
    using DMIE = typename IER_fields_::DMIE;
  };

  // DMA Enable
  struct DER_fields_ {
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
  };  // struct DER_fields_

  struct DER : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DER_fields_::TDDE,
      typename DER_fields_::RDDE,
      ftl::mmio::Reserved<30, 2>> {
    using eTDDE = typename DER_fields_::eTDDE;
    using eRDDE = typename DER_fields_::eRDDE;
    using TDDE = typename DER_fields_::TDDE;
    using RDDE = typename DER_fields_::RDDE;
  };

  // Configuration 0
  struct CFGR0_fields_ {
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
  };  // struct CFGR0_fields_

  struct CFGR0 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      typename CFGR0_fields_::CIRFIFO,
      typename CFGR0_fields_::RDMO,
      ftl::mmio::Reserved<22, 10>> {
    using eCIRFIFO = typename CFGR0_fields_::eCIRFIFO;
    using eRDMO = typename CFGR0_fields_::eRDMO;
    using CIRFIFO = typename CFGR0_fields_::CIRFIFO;
    using RDMO = typename CFGR0_fields_::RDMO;
  };

  // Configuration 1
  struct CFGR1_fields_ {
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
  };  // struct CFGR1_fields_

  struct CFGR1 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CFGR1_fields_::MASTER,
      typename CFGR1_fields_::SAMPLE,
      typename CFGR1_fields_::AUTOPCS,
      typename CFGR1_fields_::NOSTALL,
      ftl::mmio::Reserved<4, 4>,
      typename CFGR1_fields_::PCSPOL,
      ftl::mmio::Reserved<4, 12>,
      typename CFGR1_fields_::MATCFG,
      ftl::mmio::Reserved<5, 19>,
      typename CFGR1_fields_::PINCFG,
      typename CFGR1_fields_::OUTCFG,
      typename CFGR1_fields_::PCSCFG,
      ftl::mmio::Reserved<4, 28>> {
    using eMASTER = typename CFGR1_fields_::eMASTER;
    using eSAMPLE = typename CFGR1_fields_::eSAMPLE;
    using eAUTOPCS = typename CFGR1_fields_::eAUTOPCS;
    using eNOSTALL = typename CFGR1_fields_::eNOSTALL;
    using eMATCFG = typename CFGR1_fields_::eMATCFG;
    using ePINCFG = typename CFGR1_fields_::ePINCFG;
    using eOUTCFG = typename CFGR1_fields_::eOUTCFG;
    using ePCSCFG = typename CFGR1_fields_::ePCSCFG;
    using MASTER = typename CFGR1_fields_::MASTER;
    using SAMPLE = typename CFGR1_fields_::SAMPLE;
    using AUTOPCS = typename CFGR1_fields_::AUTOPCS;
    using NOSTALL = typename CFGR1_fields_::NOSTALL;
    using PCSPOL = typename CFGR1_fields_::PCSPOL;
    using MATCFG = typename CFGR1_fields_::MATCFG;
    using PINCFG = typename CFGR1_fields_::PINCFG;
    using OUTCFG = typename CFGR1_fields_::OUTCFG;
    using PCSCFG = typename CFGR1_fields_::PCSCFG;
  };

  // Data Match 0
  struct DMR0_fields_ {
    // Match 0 Value
    using MATCH0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DMR0_fields_

  struct DMR0 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DMR0_fields_::MATCH0> {
    using MATCH0 = typename DMR0_fields_::MATCH0;
  };

  // Data Match 1
  struct DMR1_fields_ {
    // Match 1 Value
    using MATCH1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DMR1_fields_

  struct DMR1 : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DMR1_fields_::MATCH1> {
    using MATCH1 = typename DMR1_fields_::MATCH1;
  };

  // Clock Configuration
  struct CCR_fields_ {
    // SCK Divider
    using SCKDIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Delay Between Transfers
    using DBT = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PCS-to-SCK Delay
    using PCSSCK = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SCK-to-PCS Delay
    using SCKPCS = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CCR_fields_

  struct CCR : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CCR_fields_::SCKDIV,
      typename CCR_fields_::DBT,
      typename CCR_fields_::PCSSCK,
      typename CCR_fields_::SCKPCS> {
    using SCKDIV = typename CCR_fields_::SCKDIV;
    using DBT = typename CCR_fields_::DBT;
    using PCSSCK = typename CCR_fields_::PCSSCK;
    using SCKPCS = typename CCR_fields_::SCKPCS;
  };

  // FIFO Control
  struct FCR_fields_ {
    // Transmit FIFO Watermark
    using TXWATER = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive FIFO Watermark
    using RXWATER = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FCR_fields_

  struct FCR : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename FCR_fields_::TXWATER,
      ftl::mmio::Reserved<12, 4>,
      typename FCR_fields_::RXWATER,
      ftl::mmio::Reserved<12, 20>> {
    using TXWATER = typename FCR_fields_::TXWATER;
    using RXWATER = typename FCR_fields_::RXWATER;
  };

  // FIFO Status
  struct FSR_fields_ {
    // Transmit FIFO Count
    using TXCOUNT = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive FIFO Count
    using RXCOUNT = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct FSR_fields_

  struct FSR : ftl::mmio::Register<
      kBase + 0x5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename FSR_fields_::TXCOUNT,
      ftl::mmio::Reserved<11, 5>,
      typename FSR_fields_::RXCOUNT,
      ftl::mmio::Reserved<11, 21>> {
    using TXCOUNT = typename FSR_fields_::TXCOUNT;
    using RXCOUNT = typename FSR_fields_::RXCOUNT;
  };

  // Transmit Command
  struct TCR_fields_ {
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
  };  // struct TCR_fields_

  struct TCR : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x0000001Fu,
      ftl::mmio::RW,
      typename TCR_fields_::FRAMESZ,
      ftl::mmio::Reserved<4, 12>,
      typename TCR_fields_::WIDTH,
      typename TCR_fields_::TXMSK,
      typename TCR_fields_::RXMSK,
      typename TCR_fields_::CONTC,
      typename TCR_fields_::CONT,
      typename TCR_fields_::BYSW,
      typename TCR_fields_::LSBF,
      typename TCR_fields_::PCS,
      ftl::mmio::Reserved<1, 26>,
      typename TCR_fields_::PRESCALE,
      typename TCR_fields_::CPHA,
      typename TCR_fields_::CPOL> {
    using eWIDTH = typename TCR_fields_::eWIDTH;
    using eTXMSK = typename TCR_fields_::eTXMSK;
    using eRXMSK = typename TCR_fields_::eRXMSK;
    using eCONTC = typename TCR_fields_::eCONTC;
    using eCONT = typename TCR_fields_::eCONT;
    using eBYSW = typename TCR_fields_::eBYSW;
    using eLSBF = typename TCR_fields_::eLSBF;
    using ePCS = typename TCR_fields_::ePCS;
    using ePRESCALE = typename TCR_fields_::ePRESCALE;
    using eCPHA = typename TCR_fields_::eCPHA;
    using eCPOL = typename TCR_fields_::eCPOL;
    using FRAMESZ = typename TCR_fields_::FRAMESZ;
    using WIDTH = typename TCR_fields_::WIDTH;
    using TXMSK = typename TCR_fields_::TXMSK;
    using RXMSK = typename TCR_fields_::RXMSK;
    using CONTC = typename TCR_fields_::CONTC;
    using CONT = typename TCR_fields_::CONT;
    using BYSW = typename TCR_fields_::BYSW;
    using LSBF = typename TCR_fields_::LSBF;
    using PCS = typename TCR_fields_::PCS;
    using PRESCALE = typename TCR_fields_::PRESCALE;
    using CPHA = typename TCR_fields_::CPHA;
    using CPOL = typename TCR_fields_::CPOL;
  };

  // Transmit Data
  struct TDR_fields_ {
    // Transmit Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct TDR_fields_

  struct TDR : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename TDR_fields_::DATA> {
    using DATA = typename TDR_fields_::DATA;
  };

  // Receive Status
  struct RSR_fields_ {
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
  };  // struct RSR_fields_

  struct RSR : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RO,
      typename RSR_fields_::SOF,
      typename RSR_fields_::RXEMPTY,
      ftl::mmio::Reserved<30, 2>> {
    using eSOF = typename RSR_fields_::eSOF;
    using eRXEMPTY = typename RSR_fields_::eRXEMPTY;
    using SOF = typename RSR_fields_::SOF;
    using RXEMPTY = typename RSR_fields_::RXEMPTY;
  };

  // Receive Data
  struct RDR_fields_ {
    // Receive Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RDR_fields_

  struct RDR : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RDR_fields_::DATA> {
    using DATA = typename RDR_fields_::DATA;
  };

};

}  // namespace regs