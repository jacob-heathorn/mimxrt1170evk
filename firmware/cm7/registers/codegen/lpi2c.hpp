#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LPI2C
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Lpi2c {
  static_assert(
        Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u || Instance == 5u || Instance == 6u,
        "Lpi2c: Instance must be one of 1, 2, 3, 4, 5, 6");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40104000u :
      Instance == 2u ? 0x40108000u :
      Instance == 3u ? 0x4010C000u :
      Instance == 4u ? 0x40110000u :
      Instance == 5u ? 0x40C34000u :
      Instance == 6u ? 0x40C38000u :
      0u;

  // Version ID
  struct VeridFields {
    enum class eFEATURE : std::uint32_t {
      // Master only, with standard feature set
      eMASTER_ONLY = 2,
      // Master and slave, with standard feature set
      eMASTER_AND_SLAVE = 3,
    };

    // Feature Specification Number
    using FEATURE = ftl::mmio::Field<16, 0, eFEATURE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Minor Version Number
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major Version Number
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VeridFields

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x01010003u,
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
    // Master Transmit FIFO Size
    using MTXFIFO = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Master Receive FIFO Size
    using MRXFIFO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ParamFields

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000202u,
      ftl::mmio::RO,
      typename ParamFields::MTXFIFO,
      ftl::mmio::Reserved<4, 4>,
      typename ParamFields::MRXFIFO,
      ftl::mmio::Reserved<20, 12>> {
    using MTXFIFO = typename ParamFields::MTXFIFO;
    using MRXFIFO = typename ParamFields::MRXFIFO;
  };

  // Master Control
  struct McrFields {
    enum class eMEN : std::uint32_t {
      // Master logic is disabled
      eDISABLED = 0,
      // Master logic is enabled
      eENABLED = 1,
    };

    enum class eRST : std::uint32_t {
      // Master logic is not reset
      eNOT_RESET = 0,
      // Master logic is reset
      eRESET = 1,
    };

    enum class eDOZEN : std::uint32_t {
      // Master is enabled in Doze mode
      eENABLED = 0,
      // Master is disabled in Doze mode
      eDISABLED = 1,
    };

    enum class eDBGEN : std::uint32_t {
      // Master is disabled in debug mode
      eDISABLED = 0,
      // Master is enabled in debug mode
      eENABLED = 1,
    };

    enum class eRTF : std::uint32_t {
      // No effect
      eNO_EFFECT = 0,
      // Transmit FIFO is reset
      eRESET = 1,
    };

    enum class eRRF : std::uint32_t {
      // No effect
      eNO_EFFECT = 0,
      // Receive FIFO is reset
      eRESET = 1,
    };

    // Master Enable
    using MEN = ftl::mmio::Field<1, 0, eMEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset
    using RST = ftl::mmio::Field<1, 1, eRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Doze mode enable
    using DOZEN = ftl::mmio::Field<1, 2, eDOZEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBGEN = ftl::mmio::Field<1, 3, eDBGEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset Transmit FIFO
    using RTF = ftl::mmio::Field<1, 8, eRTF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset Receive FIFO
    using RRF = ftl::mmio::Field<1, 9, eRRF, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct McrFields

  struct MCR : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename McrFields::MEN,
      typename McrFields::RST,
      typename McrFields::DOZEN,
      typename McrFields::DBGEN,
      ftl::mmio::Reserved<4, 4>,
      typename McrFields::RTF,
      typename McrFields::RRF,
      ftl::mmio::Reserved<22, 10>> {
    using eMEN = typename McrFields::eMEN;
    using eRST = typename McrFields::eRST;
    using eDOZEN = typename McrFields::eDOZEN;
    using eDBGEN = typename McrFields::eDBGEN;
    using eRTF = typename McrFields::eRTF;
    using eRRF = typename McrFields::eRRF;
    using MEN = typename McrFields::MEN;
    using RST = typename McrFields::RST;
    using DOZEN = typename McrFields::DOZEN;
    using DBGEN = typename McrFields::DBGEN;
    using RTF = typename McrFields::RTF;
    using RRF = typename McrFields::RRF;
  };

  // Master Status
  struct MsrFields {
    enum class eTDF : std::uint32_t {
      // Transmit data is not requested
      eDISABLED = 0,
      // Transmit data is requested
      eENABLED = 1,
    };

    enum class eRDF : std::uint32_t {
      // Receive Data is not ready
      eDISABLED = 0,
      // Receive data is ready
      eENABLED = 1,
    };

    enum class eEPF : std::uint32_t {
      // Master has not generated a STOP or Repeated START condition
      eNO_FLAG = 0,
      // Master has generated a STOP or Repeated START condition
      eFLAG = 1,
    };

    enum class eSDF : std::uint32_t {
      // Master has not generated a STOP condition
      eNO_FLAG = 0,
      // Master has generated a STOP condition
      eFLAG = 1,
    };

    enum class eNDF : std::uint32_t {
      // Unexpected NACK was not detected
      eNO_FLAG = 0,
      // Unexpected NACK was detected
      eFLAG = 1,
    };

    enum class eALF : std::uint32_t {
      // Master has not lost arbitration
      eNO_FLAG = 0,
      // Master has lost arbitration
      eFLAG = 1,
    };

    enum class eFEF : std::uint32_t {
      // No error
      eNO_FLAG = 0,
      // Master sending or receiving data without a START condition
      eFLAG = 1,
    };

    enum class ePLTF : std::uint32_t {
      // Pin low timeout has not occurred or is disabled
      eNO_FLAG = 0,
      // Pin low timeout has occurred
      eFLAG = 1,
    };

    enum class eDMF : std::uint32_t {
      // Have not received matching data
      eNO_FLAG = 0,
      // Have received matching data
      eFLAG = 1,
    };

    enum class eMBF : std::uint32_t {
      // I2C Master is idle
      eIDLE = 0,
      // I2C Master is busy
      eBUSY = 1,
    };

    enum class eBBF : std::uint32_t {
      // I2C Bus is idle
      eIDLE = 0,
      // I2C Bus is busy
      eBUSY = 1,
    };

    // Transmit Data Flag
    using TDF = ftl::mmio::Field<1, 0, eTDF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive Data Flag
    using RDF = ftl::mmio::Field<1, 1, eRDF, ftl::mmio::RO, ftl::mmio::Normal>;
    // End Packet Flag
    using EPF = ftl::mmio::Field<1, 8, eEPF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // STOP Detect Flag
    using SDF = ftl::mmio::Field<1, 9, eSDF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // NACK Detect Flag
    using NDF = ftl::mmio::Field<1, 10, eNDF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Arbitration Lost Flag
    using ALF = ftl::mmio::Field<1, 11, eALF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Error Flag
    using FEF = ftl::mmio::Field<1, 12, eFEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Pin Low Timeout Flag
    using PLTF = ftl::mmio::Field<1, 13, ePLTF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Data Match Flag
    using DMF = ftl::mmio::Field<1, 14, eDMF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Master Busy Flag
    using MBF = ftl::mmio::Field<1, 24, eMBF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bus Busy Flag
    using BBF = ftl::mmio::Field<1, 25, eBBF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MsrFields

  struct MSR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      typename MsrFields::TDF,
      typename MsrFields::RDF,
      ftl::mmio::Reserved<6, 2>,
      typename MsrFields::EPF,
      typename MsrFields::SDF,
      typename MsrFields::NDF,
      typename MsrFields::ALF,
      typename MsrFields::FEF,
      typename MsrFields::PLTF,
      typename MsrFields::DMF,
      ftl::mmio::Reserved<9, 15>,
      typename MsrFields::MBF,
      typename MsrFields::BBF,
      ftl::mmio::Reserved<6, 26>> {
    using eTDF = typename MsrFields::eTDF;
    using eRDF = typename MsrFields::eRDF;
    using eEPF = typename MsrFields::eEPF;
    using eSDF = typename MsrFields::eSDF;
    using eNDF = typename MsrFields::eNDF;
    using eALF = typename MsrFields::eALF;
    using eFEF = typename MsrFields::eFEF;
    using ePLTF = typename MsrFields::ePLTF;
    using eDMF = typename MsrFields::eDMF;
    using eMBF = typename MsrFields::eMBF;
    using eBBF = typename MsrFields::eBBF;
    using TDF = typename MsrFields::TDF;
    using RDF = typename MsrFields::RDF;
    using EPF = typename MsrFields::EPF;
    using SDF = typename MsrFields::SDF;
    using NDF = typename MsrFields::NDF;
    using ALF = typename MsrFields::ALF;
    using FEF = typename MsrFields::FEF;
    using PLTF = typename MsrFields::PLTF;
    using DMF = typename MsrFields::DMF;
    using MBF = typename MsrFields::MBF;
    using BBF = typename MsrFields::BBF;
  };

  // Master Interrupt Enable
  struct MierFields {
    enum class eTDIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eRDIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eEPIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eSDIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eNDIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eALIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eFEIE : std::uint32_t {
      // Enabled
      eENABLED = 0,
      // Disabled
      eDISABLED = 1,
    };

    enum class ePLTIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eDMIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    // Transmit Data Interrupt Enable
    using TDIE = ftl::mmio::Field<1, 0, eTDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Interrupt Enable
    using RDIE = ftl::mmio::Field<1, 1, eRDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // End Packet Interrupt Enable
    using EPIE = ftl::mmio::Field<1, 8, eEPIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // STOP Detect Interrupt Enable
    using SDIE = ftl::mmio::Field<1, 9, eSDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // NACK Detect Interrupt Enable
    using NDIE = ftl::mmio::Field<1, 10, eNDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Arbitration Lost Interrupt Enable
    using ALIE = ftl::mmio::Field<1, 11, eALIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Error Interrupt Enable
    using FEIE = ftl::mmio::Field<1, 12, eFEIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pin Low Timeout Interrupt Enable
    using PLTIE = ftl::mmio::Field<1, 13, ePLTIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data Match Interrupt Enable
    using DMIE = ftl::mmio::Field<1, 14, eDMIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MierFields

  struct MIER : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MierFields::TDIE,
      typename MierFields::RDIE,
      ftl::mmio::Reserved<6, 2>,
      typename MierFields::EPIE,
      typename MierFields::SDIE,
      typename MierFields::NDIE,
      typename MierFields::ALIE,
      typename MierFields::FEIE,
      typename MierFields::PLTIE,
      typename MierFields::DMIE,
      ftl::mmio::Reserved<17, 15>> {
    using eTDIE = typename MierFields::eTDIE;
    using eRDIE = typename MierFields::eRDIE;
    using eEPIE = typename MierFields::eEPIE;
    using eSDIE = typename MierFields::eSDIE;
    using eNDIE = typename MierFields::eNDIE;
    using eALIE = typename MierFields::eALIE;
    using eFEIE = typename MierFields::eFEIE;
    using ePLTIE = typename MierFields::ePLTIE;
    using eDMIE = typename MierFields::eDMIE;
    using TDIE = typename MierFields::TDIE;
    using RDIE = typename MierFields::RDIE;
    using EPIE = typename MierFields::EPIE;
    using SDIE = typename MierFields::SDIE;
    using NDIE = typename MierFields::NDIE;
    using ALIE = typename MierFields::ALIE;
    using FEIE = typename MierFields::FEIE;
    using PLTIE = typename MierFields::PLTIE;
    using DMIE = typename MierFields::DMIE;
  };

  // Master DMA Enable
  struct MderFields {
    enum class eTDDE : std::uint32_t {
      // DMA request is disabled
      eDISABLED = 0,
      // DMA request is enabled
      eENABLED = 1,
    };

    enum class eRDDE : std::uint32_t {
      // DMA request is disabled
      eDISABLED = 0,
      // DMA request is enabled
      eENABLED = 1,
    };

    // Transmit Data DMA Enable
    using TDDE = ftl::mmio::Field<1, 0, eTDDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data DMA Enable
    using RDDE = ftl::mmio::Field<1, 1, eRDDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MderFields

  struct MDER : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MderFields::TDDE,
      typename MderFields::RDDE,
      ftl::mmio::Reserved<30, 2>> {
    using eTDDE = typename MderFields::eTDDE;
    using eRDDE = typename MderFields::eRDDE;
    using TDDE = typename MderFields::TDDE;
    using RDDE = typename MderFields::RDDE;
  };

  // Master Configuration 0
  struct Mcfgr0Fields {
    enum class eHREN : std::uint32_t {
      // Host request input is disabled
      eDISABLED = 0,
      // Host request input is enabled
      eENABLED = 1,
    };

    enum class eHRPOL : std::uint32_t {
      // Active low
      eACTIVE_LOW = 0,
      // Active high
      eACTIVE_HIGH = 1,
    };

    enum class eHRSEL : std::uint32_t {
      // Host request input is pin HREQ
      eDISABLED = 0,
      // Host request input is input trigger
      eENABLED = 1,
    };

    enum class eCIRFIFO : std::uint32_t {
      // Circular FIFO is disabled
      eDISABLED = 0,
      // Circular FIFO is enabled
      eENABLED = 1,
    };

    enum class eRDMO : std::uint32_t {
      // Received data is stored in the receive FIFO
      eDISABLED = 0,
      // Received data is discarded unless the the Data Match Flag (MSR[DMF]) is set
      eENABLED = 1,
    };

    // Host Request Enable
    using HREN = ftl::mmio::Field<1, 0, eHREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Host Request Polarity
    using HRPOL = ftl::mmio::Field<1, 1, eHRPOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Host Request Select
    using HRSEL = ftl::mmio::Field<1, 2, eHRSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Circular FIFO Enable
    using CIRFIFO = ftl::mmio::Field<1, 8, eCIRFIFO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Match Only
    using RDMO = ftl::mmio::Field<1, 9, eRDMO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mcfgr0Fields

  struct MCFGR0 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Mcfgr0Fields::HREN,
      typename Mcfgr0Fields::HRPOL,
      typename Mcfgr0Fields::HRSEL,
      ftl::mmio::Reserved<5, 3>,
      typename Mcfgr0Fields::CIRFIFO,
      typename Mcfgr0Fields::RDMO,
      ftl::mmio::Reserved<22, 10>> {
    using eHREN = typename Mcfgr0Fields::eHREN;
    using eHRPOL = typename Mcfgr0Fields::eHRPOL;
    using eHRSEL = typename Mcfgr0Fields::eHRSEL;
    using eCIRFIFO = typename Mcfgr0Fields::eCIRFIFO;
    using eRDMO = typename Mcfgr0Fields::eRDMO;
    using HREN = typename Mcfgr0Fields::HREN;
    using HRPOL = typename Mcfgr0Fields::HRPOL;
    using HRSEL = typename Mcfgr0Fields::HRSEL;
    using CIRFIFO = typename Mcfgr0Fields::CIRFIFO;
    using RDMO = typename Mcfgr0Fields::RDMO;
  };

  // Master Configuration 1
  struct Mcfgr1Fields {
    enum class ePRESCALE : std::uint32_t {
      // Divide by 1
      eDIVIDE_BY_1 = 0,
      // Divide by 2
      eDIVIDE_BY_2 = 1,
      // Divide by 4
      eDIVIDE_BY_4 = 2,
      // Divide by 8
      eDIVIDE_BY_8 = 3,
      // Divide by 16
      eDIVIDE_BY_16 = 4,
      // Divide by 32
      eDIVIDE_BY_32 = 5,
      // Divide by 64
      eDIVIDE_BY_64 = 6,
      // Divide by 128
      eDIVIDE_BY_128 = 7,
    };

    enum class eAUTOSTOP : std::uint32_t {
      // No effect
      eDISABLED = 0,
      // STOP condition is automatically generated whenever the transmit FIFO is empty and the LPI2C master is busy
      eENABLED = 1,
    };

    enum class eIGNACK : std::uint32_t {
      // LPI2C Master receives ACK and NACK normally
      eDISABLED = 0,
      // LPI2C Master treats a received NACK as if it (NACK) was an ACK
      eENABLED = 1,
    };

    enum class eTIMECFG : std::uint32_t {
      // MSR[PLTF] sets if SCL is low for longer than the configured timeout
      eIF_SCL_LOW = 0,
      // MSR[PLTF] sets if either SCL or SDA is low for longer than the configured timeout
      eIF_SCL_OR_SDA_LOW = 1,
    };

    enum class eMATCFG : std::uint32_t {
      // Match is disabled
      eDISABLED = 0,
      // Match is enabled (1st data word equals MDMR[MATCH0] OR MDMR[MATCH1])
      eFIRST_DATA_WORD_EQUALS_MATCH0_OR_MATCH1 = 2,
      // Match is enabled (any data word equals MDMR[MATCH0] OR MDMR[MATCH1])
      eANY_DATA_WORD_EQUALS_MATCH0_OR_MATCH1 = 3,
      // Match is enabled (1st data word equals MDMR[MATCH0] AND 2nd data word equals MDMR[MATCH1)
      eFIRST_DATA_WORD_MATCH0_AND_SECOND_DATA_WORD_MATCH1 = 4,
      // Match is enabled (any data word equals MDMR[MATCH0] AND next data word equals MDMR[MATCH1)
      eANY_DATA_WORD_MATCH0_NEXT_DATA_WORD_MATCH1 = 5,
      // Match is enabled (1st data word AND MDMR[MATCH1] equals MDMR[MATCH0] AND MDMR[MATCH1])
      eFIRST_DATA_WORD_AND_MATCH1_EQUALS_MATCH0_AND_MATCH1 = 6,
      // Match is enabled (any data word AND MDMR[MATCH1] equals MDMR[MATCH0] AND MDMR[MATCH1])
      eANY_DATA_WORD_AND_MATCH1_EQUALS_MATCH0_AND_MATCH1 = 7,
    };

    enum class ePINCFG : std::uint32_t {
      // 2-pin open drain mode
      eOPEN_DRAIN_2_PIN = 0,
      // 2-pin output only mode (ultra-fast mode)
      eOUTPUT_2_PIN_ONLY = 1,
      // 2-pin push-pull mode
      ePUSH_PULL_2_PIN = 2,
      // 4-pin push-pull mode
      ePUSH_PULL_4_PIN = 3,
      // 2-pin open drain mode with separate LPI2C slave
      eOPEN_DRAIN_2_PIN_W_LPI2C_SLAVE = 4,
      // 2-pin output only mode (ultra-fast mode) with separate LPI2C slave
      eOUTPUT_2_PIN_ONLY_W_LPI2C_SLAVE = 5,
      // 2-pin push-pull mode with separate LPI2C slave
      ePUSH_PULL_2_PIN_W_LPI2C_SLAVE = 6,
      // 4-pin push-pull mode (inverted outputs)
      ePUSH_PULL_4_PIN_W_LPI2C_SLAVE = 7,
    };

    // Prescaler
    using PRESCALE = ftl::mmio::Field<3, 0, ePRESCALE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Automatic STOP Generation
    using AUTOSTOP = ftl::mmio::Field<1, 8, eAUTOSTOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // IGNACK
    using IGNACK = ftl::mmio::Field<1, 9, eIGNACK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timeout Configuration
    using TIMECFG = ftl::mmio::Field<1, 10, eTIMECFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Match Configuration
    using MATCFG = ftl::mmio::Field<3, 16, eMATCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pin Configuration
    using PINCFG = ftl::mmio::Field<3, 24, ePINCFG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mcfgr1Fields

  struct MCFGR1 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Mcfgr1Fields::PRESCALE,
      ftl::mmio::Reserved<5, 3>,
      typename Mcfgr1Fields::AUTOSTOP,
      typename Mcfgr1Fields::IGNACK,
      typename Mcfgr1Fields::TIMECFG,
      ftl::mmio::Reserved<5, 11>,
      typename Mcfgr1Fields::MATCFG,
      ftl::mmio::Reserved<5, 19>,
      typename Mcfgr1Fields::PINCFG,
      ftl::mmio::Reserved<5, 27>> {
    using ePRESCALE = typename Mcfgr1Fields::ePRESCALE;
    using eAUTOSTOP = typename Mcfgr1Fields::eAUTOSTOP;
    using eIGNACK = typename Mcfgr1Fields::eIGNACK;
    using eTIMECFG = typename Mcfgr1Fields::eTIMECFG;
    using eMATCFG = typename Mcfgr1Fields::eMATCFG;
    using ePINCFG = typename Mcfgr1Fields::ePINCFG;
    using PRESCALE = typename Mcfgr1Fields::PRESCALE;
    using AUTOSTOP = typename Mcfgr1Fields::AUTOSTOP;
    using IGNACK = typename Mcfgr1Fields::IGNACK;
    using TIMECFG = typename Mcfgr1Fields::TIMECFG;
    using MATCFG = typename Mcfgr1Fields::MATCFG;
    using PINCFG = typename Mcfgr1Fields::PINCFG;
  };

  // Master Configuration 2
  struct Mcfgr2Fields {
    // Bus Idle Timeout
    using BUSIDLE = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Glitch Filter SCL
    using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Glitch Filter SDA
    using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mcfgr2Fields

  struct MCFGR2 : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Mcfgr2Fields::BUSIDLE,
      ftl::mmio::Reserved<4, 12>,
      typename Mcfgr2Fields::FILTSCL,
      ftl::mmio::Reserved<4, 20>,
      typename Mcfgr2Fields::FILTSDA,
      ftl::mmio::Reserved<4, 28>> {
    using BUSIDLE = typename Mcfgr2Fields::BUSIDLE;
    using FILTSCL = typename Mcfgr2Fields::FILTSCL;
    using FILTSDA = typename Mcfgr2Fields::FILTSDA;
  };

  // Master Configuration 3
  struct Mcfgr3Fields {
    // Pin Low Timeout
    using PINLOW = ftl::mmio::Field<12, 8, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mcfgr3Fields

  struct MCFGR3 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      typename Mcfgr3Fields::PINLOW,
      ftl::mmio::Reserved<12, 20>> {
    using PINLOW = typename Mcfgr3Fields::PINLOW;
  };

  // Master Data Match
  struct MdmrFields {
    // Match 0 Value
    using MATCH0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Match 1 Value
    using MATCH1 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MdmrFields

  struct MDMR : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MdmrFields::MATCH0,
      ftl::mmio::Reserved<8, 8>,
      typename MdmrFields::MATCH1,
      ftl::mmio::Reserved<8, 24>> {
    using MATCH0 = typename MdmrFields::MATCH0;
    using MATCH1 = typename MdmrFields::MATCH1;
  };

  // Master Clock Configuration 0
  struct Mccr0Fields {
    // Clock Low Period
    using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock High Period
    using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setup Hold Delay
    using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data Valid Delay
    using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mccr0Fields

  struct MCCR0 : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Mccr0Fields::CLKLO,
      ftl::mmio::Reserved<2, 6>,
      typename Mccr0Fields::CLKHI,
      ftl::mmio::Reserved<2, 14>,
      typename Mccr0Fields::SETHOLD,
      ftl::mmio::Reserved<2, 22>,
      typename Mccr0Fields::DATAVD,
      ftl::mmio::Reserved<2, 30>> {
    using CLKLO = typename Mccr0Fields::CLKLO;
    using CLKHI = typename Mccr0Fields::CLKHI;
    using SETHOLD = typename Mccr0Fields::SETHOLD;
    using DATAVD = typename Mccr0Fields::DATAVD;
  };

  // Master Clock Configuration 1
  struct Mccr1Fields {
    // Clock Low Period
    using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock High Period
    using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setup Hold Delay
    using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data Valid Delay
    using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mccr1Fields

  struct MCCR1 : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Mccr1Fields::CLKLO,
      ftl::mmio::Reserved<2, 6>,
      typename Mccr1Fields::CLKHI,
      ftl::mmio::Reserved<2, 14>,
      typename Mccr1Fields::SETHOLD,
      ftl::mmio::Reserved<2, 22>,
      typename Mccr1Fields::DATAVD,
      ftl::mmio::Reserved<2, 30>> {
    using CLKLO = typename Mccr1Fields::CLKLO;
    using CLKHI = typename Mccr1Fields::CLKHI;
    using SETHOLD = typename Mccr1Fields::SETHOLD;
    using DATAVD = typename Mccr1Fields::DATAVD;
  };

  // Master FIFO Control
  struct MfcrFields {
    // Transmit FIFO Watermark
    using TXWATER = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive FIFO Watermark
    using RXWATER = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MfcrFields

  struct MFCR : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MfcrFields::TXWATER,
      ftl::mmio::Reserved<14, 2>,
      typename MfcrFields::RXWATER,
      ftl::mmio::Reserved<14, 18>> {
    using TXWATER = typename MfcrFields::TXWATER;
    using RXWATER = typename MfcrFields::RXWATER;
  };

  // Master FIFO Status
  struct MfsrFields {
    // Transmit FIFO Count
    using TXCOUNT = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive FIFO Count
    using RXCOUNT = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MfsrFields

  struct MFSR : ftl::mmio::Register<
      kBase + 0x5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MfsrFields::TXCOUNT,
      ftl::mmio::Reserved<13, 3>,
      typename MfsrFields::RXCOUNT,
      ftl::mmio::Reserved<13, 19>> {
    using TXCOUNT = typename MfsrFields::TXCOUNT;
    using RXCOUNT = typename MfsrFields::RXCOUNT;
  };

  // Master Transmit Data
  struct MtdrFields {
    enum class eCMD : std::uint32_t {
      // Transmit DATA[7:0]
      eTRANSMIT_DATA_7_THROUGH_0 = 0,
      // Receive (DATA[7:0] + 1) bytes
      eRECEIVE_DATA_7_THROUGH_0_PLUS_ONE = 1,
      // Generate STOP condition
      eGENERATE_STOP_CONDITION = 2,
      // Receive and discard (DATA[7:0] + 1) bytes
      eRECEIVE_AND_DISCARD_DATA_7_THROUGH_0_PLUS_ONE = 3,
      // Generate (repeated) START and transmit address in DATA[7:0]
      eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0 = 4,
      // Generate (repeated) START and transmit address in DATA[7:0]. This transfer expects a NACK to be returned.
      eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0_EXPECT_NACK = 5,
      // Generate (repeated) START and transmit address in DATA[7:0] using high speed mode
      eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0_USING_HIGH_SPEED_MODE = 6,
      // Generate (repeated) START and transmit address in DATA[7:0] using high speed mode. This transfer expects a NACK to be returned.
      eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0_USING_HIGH_SPEED_MODE_EXPECT_NACK = 7,
    };

    // Transmit Data
    using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // Command Data
    using CMD = ftl::mmio::Field<3, 8, eCMD, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct MtdrFields

  struct MTDR : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename MtdrFields::DATA,
      typename MtdrFields::CMD,
      ftl::mmio::Reserved<21, 11>> {
    using eCMD = typename MtdrFields::eCMD;
    using DATA = typename MtdrFields::DATA;
    using CMD = typename MtdrFields::CMD;
  };

  // Master Receive Data
  struct MrdrFields {
    enum class eRXEMPTY : std::uint32_t {
      // Receive FIFO is not empty
      eNOT_EMPTY = 0,
      // Receive FIFO is empty
      eEMPTY = 1,
    };

    // Receive Data
    using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // RX Empty
    using RXEMPTY = ftl::mmio::Field<1, 14, eRXEMPTY, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MrdrFields

  struct MRDR : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RO,
      typename MrdrFields::DATA,
      ftl::mmio::Reserved<6, 8>,
      typename MrdrFields::RXEMPTY,
      ftl::mmio::Reserved<17, 15>> {
    using eRXEMPTY = typename MrdrFields::eRXEMPTY;
    using DATA = typename MrdrFields::DATA;
    using RXEMPTY = typename MrdrFields::RXEMPTY;
  };

  // Slave Control
  struct ScrFields {
    enum class eSEN : std::uint32_t {
      // I2C Slave mode is disabled
      eDISABLED = 0,
      // I2C Slave mode is enabled
      eENABLED = 1,
    };

    enum class eRST : std::uint32_t {
      // Slave mode logic is not reset
      eNOT_RESET = 0,
      // Slave mode logic is reset
      eRESET = 1,
    };

    enum class eFILTEN : std::uint32_t {
      // Disable digital filter and output delay counter for slave mode
      eDISABLE = 0,
      // Enable digital filter and output delay counter for slave mode
      eENABLE = 1,
    };

    enum class eFILTDZ : std::uint32_t {
      // Filter remains enabled in Doze mode
      eFILTER_ENABLED = 0,
      // Filter is disabled in Doze mode
      eFILTER_DISABLED = 1,
    };

    enum class eRTF : std::uint32_t {
      // No effect
      eNO_EFFECT = 0,
      // Transmit Data Register is now empty
      eNOW_EMPTY = 1,
    };

    enum class eRRF : std::uint32_t {
      // No effect
      eNO_EFFECT = 0,
      // Receive Data Register is now empty
      eNOW_EMPTY = 1,
    };

    // Slave Enable
    using SEN = ftl::mmio::Field<1, 0, eSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset
    using RST = ftl::mmio::Field<1, 1, eRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Filter Enable
    using FILTEN = ftl::mmio::Field<1, 4, eFILTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Filter Doze Enable
    using FILTDZ = ftl::mmio::Field<1, 5, eFILTDZ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset Transmit FIFO
    using RTF = ftl::mmio::Field<1, 8, eRTF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset Receive FIFO
    using RRF = ftl::mmio::Field<1, 9, eRRF, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScrFields

  struct SCR : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ScrFields::SEN,
      typename ScrFields::RST,
      ftl::mmio::Reserved<2, 2>,
      typename ScrFields::FILTEN,
      typename ScrFields::FILTDZ,
      ftl::mmio::Reserved<2, 6>,
      typename ScrFields::RTF,
      typename ScrFields::RRF,
      ftl::mmio::Reserved<22, 10>> {
    using eSEN = typename ScrFields::eSEN;
    using eRST = typename ScrFields::eRST;
    using eFILTEN = typename ScrFields::eFILTEN;
    using eFILTDZ = typename ScrFields::eFILTDZ;
    using eRTF = typename ScrFields::eRTF;
    using eRRF = typename ScrFields::eRRF;
    using SEN = typename ScrFields::SEN;
    using RST = typename ScrFields::RST;
    using FILTEN = typename ScrFields::FILTEN;
    using FILTDZ = typename ScrFields::FILTDZ;
    using RTF = typename ScrFields::RTF;
    using RRF = typename ScrFields::RRF;
  };

  // Slave Status
  struct SsrFields {
    enum class eTDF : std::uint32_t {
      // Transmit data not requested
      eNO_FLAG = 0,
      // Transmit data is requested
      eFLAG = 1,
    };

    enum class eRDF : std::uint32_t {
      // Receive data is not ready
      eNOT_READY = 0,
      // Receive data is ready
      eREADY = 1,
    };

    enum class eAVF : std::uint32_t {
      // Address Status Register is not valid
      eNOT_VALID = 0,
      // Address Status Register is valid
      eVALID = 1,
    };

    enum class eTAF : std::uint32_t {
      // Transmit ACK/NACK is not required
      eNOT_REQUIRED = 0,
      // Transmit ACK/NACK is required
      eREQUIRED = 1,
    };

    enum class eRSF : std::uint32_t {
      // Slave has not detected a Repeated START condition
      eNO_FLAG = 0,
      // Slave has detected a Repeated START condition
      eFLAG = 1,
    };

    enum class eSDF : std::uint32_t {
      // Slave has not detected a STOP condition
      eNO_FLAG = 0,
      // Slave has detected a STOP condition
      eFLAG = 1,
    };

    enum class eBEF : std::uint32_t {
      // Slave has not detected a bit error
      eNO_FLAG = 0,
      // Slave has detected a bit error
      eFLAG = 1,
    };

    enum class eFEF : std::uint32_t {
      // FIFO underflow or overflow was not detected
      eNO_FLAG = 0,
      // FIFO underflow or overflow was detected
      eFLAG = 1,
    };

    enum class eAM0F : std::uint32_t {
      // Have not received an ADDR0 matching address
      eNO_FLAG = 0,
      // Have received an ADDR0 matching address
      eFLAG = 1,
    };

    enum class eAM1F : std::uint32_t {
      // Have not received an ADDR1 or ADDR0/ADDR1 range matching address
      eNO_FLAG = 0,
      // Have received an ADDR1 or ADDR0/ADDR1 range matching address
      eFLAG = 1,
    };

    enum class eGCF : std::uint32_t {
      // Slave has not detected the General Call Address or the General Call Address is disabled
      eNO_FLAG = 0,
      // Slave has detected the General Call Address
      eFLAG = 1,
    };

    enum class eSARF : std::uint32_t {
      // SMBus Alert Response is disabled or not detected
      eNO_FLAG = 0,
      // SMBus Alert Response is enabled and detected
      eFLAG = 1,
    };

    enum class eSBF : std::uint32_t {
      // I2C Slave is idle
      eIDLE = 0,
      // I2C Slave is busy
      eBUSY = 1,
    };

    enum class eBBF : std::uint32_t {
      // I2C Bus is idle
      eIDLE = 0,
      // I2C Bus is busy
      eBUSY = 1,
    };

    // Transmit Data Flag
    using TDF = ftl::mmio::Field<1, 0, eTDF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive Data Flag
    using RDF = ftl::mmio::Field<1, 1, eRDF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Address Valid Flag
    using AVF = ftl::mmio::Field<1, 2, eAVF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Transmit ACK Flag
    using TAF = ftl::mmio::Field<1, 3, eTAF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Repeated Start Flag
    using RSF = ftl::mmio::Field<1, 8, eRSF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // STOP Detect Flag
    using SDF = ftl::mmio::Field<1, 9, eSDF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Bit Error Flag
    using BEF = ftl::mmio::Field<1, 10, eBEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Error Flag
    using FEF = ftl::mmio::Field<1, 11, eFEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Address Match 0 Flag
    using AM0F = ftl::mmio::Field<1, 12, eAM0F, ftl::mmio::RO, ftl::mmio::Normal>;
    // Address Match 1 Flag
    using AM1F = ftl::mmio::Field<1, 13, eAM1F, ftl::mmio::RO, ftl::mmio::Normal>;
    // General Call Flag
    using GCF = ftl::mmio::Field<1, 14, eGCF, ftl::mmio::RO, ftl::mmio::Normal>;
    // SMBus Alert Response Flag
    using SARF = ftl::mmio::Field<1, 15, eSARF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Slave Busy Flag
    using SBF = ftl::mmio::Field<1, 24, eSBF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bus Busy Flag
    using BBF = ftl::mmio::Field<1, 25, eBBF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SsrFields

  struct SSR : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SsrFields::TDF,
      typename SsrFields::RDF,
      typename SsrFields::AVF,
      typename SsrFields::TAF,
      ftl::mmio::Reserved<4, 4>,
      typename SsrFields::RSF,
      typename SsrFields::SDF,
      typename SsrFields::BEF,
      typename SsrFields::FEF,
      typename SsrFields::AM0F,
      typename SsrFields::AM1F,
      typename SsrFields::GCF,
      typename SsrFields::SARF,
      ftl::mmio::Reserved<8, 16>,
      typename SsrFields::SBF,
      typename SsrFields::BBF,
      ftl::mmio::Reserved<6, 26>> {
    using eTDF = typename SsrFields::eTDF;
    using eRDF = typename SsrFields::eRDF;
    using eAVF = typename SsrFields::eAVF;
    using eTAF = typename SsrFields::eTAF;
    using eRSF = typename SsrFields::eRSF;
    using eSDF = typename SsrFields::eSDF;
    using eBEF = typename SsrFields::eBEF;
    using eFEF = typename SsrFields::eFEF;
    using eAM0F = typename SsrFields::eAM0F;
    using eAM1F = typename SsrFields::eAM1F;
    using eGCF = typename SsrFields::eGCF;
    using eSARF = typename SsrFields::eSARF;
    using eSBF = typename SsrFields::eSBF;
    using eBBF = typename SsrFields::eBBF;
    using TDF = typename SsrFields::TDF;
    using RDF = typename SsrFields::RDF;
    using AVF = typename SsrFields::AVF;
    using TAF = typename SsrFields::TAF;
    using RSF = typename SsrFields::RSF;
    using SDF = typename SsrFields::SDF;
    using BEF = typename SsrFields::BEF;
    using FEF = typename SsrFields::FEF;
    using AM0F = typename SsrFields::AM0F;
    using AM1F = typename SsrFields::AM1F;
    using GCF = typename SsrFields::GCF;
    using SARF = typename SsrFields::SARF;
    using SBF = typename SsrFields::SBF;
    using BBF = typename SsrFields::BBF;
  };

  // Slave Interrupt Enable
  struct SierFields {
    enum class eTDIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eRDIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eAVIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eTAIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eRSIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eSDIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eBEIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eFEIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eAM0IE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eAM1IE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eGCIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eSARIE : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    // Transmit Data Interrupt Enable
    using TDIE = ftl::mmio::Field<1, 0, eTDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Interrupt Enable
    using RDIE = ftl::mmio::Field<1, 1, eRDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Valid Interrupt Enable
    using AVIE = ftl::mmio::Field<1, 2, eAVIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit ACK Interrupt Enable
    using TAIE = ftl::mmio::Field<1, 3, eTAIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Repeated Start Interrupt Enable
    using RSIE = ftl::mmio::Field<1, 8, eRSIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // STOP Detect Interrupt Enable
    using SDIE = ftl::mmio::Field<1, 9, eSDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bit Error Interrupt Enable
    using BEIE = ftl::mmio::Field<1, 10, eBEIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Error Interrupt Enable
    using FEIE = ftl::mmio::Field<1, 11, eFEIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Match 0 Interrupt Enable
    using AM0IE = ftl::mmio::Field<1, 12, eAM0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Match 1 Interrupt Enable
    using AM1IE = ftl::mmio::Field<1, 13, eAM1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // General Call Interrupt Enable
    using GCIE = ftl::mmio::Field<1, 14, eGCIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // SMBus Alert Response Interrupt Enable
    using SARIE = ftl::mmio::Field<1, 15, eSARIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SierFields

  struct SIER : ftl::mmio::Register<
      kBase + 0x118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SierFields::TDIE,
      typename SierFields::RDIE,
      typename SierFields::AVIE,
      typename SierFields::TAIE,
      ftl::mmio::Reserved<4, 4>,
      typename SierFields::RSIE,
      typename SierFields::SDIE,
      typename SierFields::BEIE,
      typename SierFields::FEIE,
      typename SierFields::AM0IE,
      typename SierFields::AM1IE,
      typename SierFields::GCIE,
      typename SierFields::SARIE,
      ftl::mmio::Reserved<16, 16>> {
    using eTDIE = typename SierFields::eTDIE;
    using eRDIE = typename SierFields::eRDIE;
    using eAVIE = typename SierFields::eAVIE;
    using eTAIE = typename SierFields::eTAIE;
    using eRSIE = typename SierFields::eRSIE;
    using eSDIE = typename SierFields::eSDIE;
    using eBEIE = typename SierFields::eBEIE;
    using eFEIE = typename SierFields::eFEIE;
    using eAM0IE = typename SierFields::eAM0IE;
    using eAM1IE = typename SierFields::eAM1IE;
    using eGCIE = typename SierFields::eGCIE;
    using eSARIE = typename SierFields::eSARIE;
    using TDIE = typename SierFields::TDIE;
    using RDIE = typename SierFields::RDIE;
    using AVIE = typename SierFields::AVIE;
    using TAIE = typename SierFields::TAIE;
    using RSIE = typename SierFields::RSIE;
    using SDIE = typename SierFields::SDIE;
    using BEIE = typename SierFields::BEIE;
    using FEIE = typename SierFields::FEIE;
    using AM0IE = typename SierFields::AM0IE;
    using AM1IE = typename SierFields::AM1IE;
    using GCIE = typename SierFields::GCIE;
    using SARIE = typename SierFields::SARIE;
  };

  // Slave DMA Enable
  struct SderFields {
    enum class eTDDE : std::uint32_t {
      // DMA request is disabled
      eDISABLED = 0,
      // DMA request is enabled
      eENABLED = 1,
    };

    enum class eRDDE : std::uint32_t {
      // DMA request is disabled
      eDISABLED = 0,
      // DMA request is enabled
      eENABLED = 1,
    };

    enum class eAVDE : std::uint32_t {
      // DMA request is disabled
      eDISABLED = 0,
      // DMA request is enabled
      eENABLED = 1,
    };

    // Transmit Data DMA Enable
    using TDDE = ftl::mmio::Field<1, 0, eTDDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data DMA Enable
    using RDDE = ftl::mmio::Field<1, 1, eRDDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Valid DMA Enable
    using AVDE = ftl::mmio::Field<1, 2, eAVDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SderFields

  struct SDER : ftl::mmio::Register<
      kBase + 0x11Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SderFields::TDDE,
      typename SderFields::RDDE,
      typename SderFields::AVDE,
      ftl::mmio::Reserved<29, 3>> {
    using eTDDE = typename SderFields::eTDDE;
    using eRDDE = typename SderFields::eRDDE;
    using eAVDE = typename SderFields::eAVDE;
    using TDDE = typename SderFields::TDDE;
    using RDDE = typename SderFields::RDDE;
    using AVDE = typename SderFields::AVDE;
  };

  // Slave Configuration 1
  struct Scfgr1Fields {
    enum class eADRSTALL : std::uint32_t {
      // Clock stretching is disabled
      eDISABLED = 0,
      // Clock stretching is enabled
      eENABLED = 1,
    };

    enum class eRXSTALL : std::uint32_t {
      // Clock stretching is disabled
      eDISABLED = 0,
      // Clock stretching is enabled
      eENABLED = 1,
    };

    enum class eTXDSTALL : std::uint32_t {
      // Clock stretching is disabled
      eDISABLED = 0,
      // Clock stretching is enabled
      eENABLED = 1,
    };

    enum class eACKSTALL : std::uint32_t {
      // Clock stretching is disabled
      eDISABLED = 0,
      // Clock stretching is enabled
      eENABLED = 1,
    };

    enum class eGCEN : std::uint32_t {
      // General Call address is disabled
      eDISABLED = 0,
      // General Call address is enabled
      eENABLED = 1,
    };

    enum class eSAEN : std::uint32_t {
      // Disables match on SMBus Alert
      eDISABLE = 0,
      // Enables match on SMBus Alert
      eENABLE = 1,
    };

    enum class eTXCFG : std::uint32_t {
      // Transmit Data Flag only asserts during a slave-transmit transfer when the Transmit Data register is empty
      eASSERTS_DURING_SLAVE_TRANSMIT_TRANSFER_WHEN_TX_DATA_EMPTY = 0,
      // Transmit Data Flag asserts whenever the Transmit Data register is empty
      eASSERTS_WHEN_TX_DATA_EMPTY = 1,
    };

    enum class eRXCFG : std::uint32_t {
      // Reading the Receive Data register returns received data and clears the Receive Data flag (MSR[RDF]).
      eRETURNS_RECEIVED_DATA_AND_CLEARS_RX_DATA_FLAG = 0,
      // Reading the Receive Data register when the Address Valid flag (SSR[AVF])is set, returns the Address Status register and clear the Address Valid flag. Reading the Receive Data register when the Address Valid flag is clear, returns received data and clears the Receive Data flag (MSR[RDF]).
      eWHEN_ADDRESS_VALID_FLAG_SET_RETURNS_ADDRESS_STATUS_AND_CLEARS_ADDRESS_VALID_FLAG = 1,
    };

    enum class eIGNACK : std::uint32_t {
      // Slave ends transfer when NACK is detected
      eENDS_TRANSFER_ON_NACK = 0,
      // Slave does not end transfer when NACK detected
      eDOES_NOT_END_TRANSFER_ON_NACK = 1,
    };

    enum class eHSMEN : std::uint32_t {
      // Disables detection of HS-mode master code
      eDISABLED = 0,
      // Enables detection of HS-mode master code
      eENABLED = 1,
    };

    enum class eADDRCFG : std::uint32_t {
      // Address match 0 (7-bit)
      eADDRESS_MATCH0_7_BIT = 0,
      // Address match 0 (10-bit)
      eADDRESS_MATCH0_10_BIT = 1,
      // Address match 0 (7-bit) or Address match 1 (7-bit)
      eADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_7_BIT = 2,
      // Address match 0 (10-bit) or Address match 1 (10-bit)
      eADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_10_BIT = 3,
      // Address match 0 (7-bit) or Address match 1 (10-bit)
      eADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_10_BIT = 4,
      // Address match 0 (10-bit) or Address match 1 (7-bit)
      eADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_7_BIT = 5,
      // From Address match 0 (7-bit) to Address match 1 (7-bit)
      eFROM_ADDRESS_MATCH0_7_BIT_TO_ADDRESS_MATCH1_7_BIT = 6,
      // From Address match 0 (10-bit) to Address match 1 (10-bit)
      eFROM_ADDRESS_MATCH0_10_BIT_TO_ADDRESS_MATCH1_10_BIT = 7,
    };

    // Address SCL Stall
    using ADRSTALL = ftl::mmio::Field<1, 0, eADRSTALL, ftl::mmio::RW, ftl::mmio::Normal>;
    // RX SCL Stall
    using RXSTALL = ftl::mmio::Field<1, 1, eRXSTALL, ftl::mmio::RW, ftl::mmio::Normal>;
    // TX Data SCL Stall
    using TXDSTALL = ftl::mmio::Field<1, 2, eTXDSTALL, ftl::mmio::RW, ftl::mmio::Normal>;
    // ACK SCL Stall
    using ACKSTALL = ftl::mmio::Field<1, 3, eACKSTALL, ftl::mmio::RW, ftl::mmio::Normal>;
    // General Call Enable
    using GCEN = ftl::mmio::Field<1, 8, eGCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // SMBus Alert Enable
    using SAEN = ftl::mmio::Field<1, 9, eSAEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Flag Configuration
    using TXCFG = ftl::mmio::Field<1, 10, eTXCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Configuration
    using RXCFG = ftl::mmio::Field<1, 11, eRXCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Ignore NACK
    using IGNACK = ftl::mmio::Field<1, 12, eIGNACK, ftl::mmio::RW, ftl::mmio::Normal>;
    // High Speed Mode Enable
    using HSMEN = ftl::mmio::Field<1, 13, eHSMEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Configuration
    using ADDRCFG = ftl::mmio::Field<3, 16, eADDRCFG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Scfgr1Fields

  struct SCFGR1 : ftl::mmio::Register<
      kBase + 0x124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Scfgr1Fields::ADRSTALL,
      typename Scfgr1Fields::RXSTALL,
      typename Scfgr1Fields::TXDSTALL,
      typename Scfgr1Fields::ACKSTALL,
      ftl::mmio::Reserved<4, 4>,
      typename Scfgr1Fields::GCEN,
      typename Scfgr1Fields::SAEN,
      typename Scfgr1Fields::TXCFG,
      typename Scfgr1Fields::RXCFG,
      typename Scfgr1Fields::IGNACK,
      typename Scfgr1Fields::HSMEN,
      ftl::mmio::Reserved<2, 14>,
      typename Scfgr1Fields::ADDRCFG,
      ftl::mmio::Reserved<13, 19>> {
    using eADRSTALL = typename Scfgr1Fields::eADRSTALL;
    using eRXSTALL = typename Scfgr1Fields::eRXSTALL;
    using eTXDSTALL = typename Scfgr1Fields::eTXDSTALL;
    using eACKSTALL = typename Scfgr1Fields::eACKSTALL;
    using eGCEN = typename Scfgr1Fields::eGCEN;
    using eSAEN = typename Scfgr1Fields::eSAEN;
    using eTXCFG = typename Scfgr1Fields::eTXCFG;
    using eRXCFG = typename Scfgr1Fields::eRXCFG;
    using eIGNACK = typename Scfgr1Fields::eIGNACK;
    using eHSMEN = typename Scfgr1Fields::eHSMEN;
    using eADDRCFG = typename Scfgr1Fields::eADDRCFG;
    using ADRSTALL = typename Scfgr1Fields::ADRSTALL;
    using RXSTALL = typename Scfgr1Fields::RXSTALL;
    using TXDSTALL = typename Scfgr1Fields::TXDSTALL;
    using ACKSTALL = typename Scfgr1Fields::ACKSTALL;
    using GCEN = typename Scfgr1Fields::GCEN;
    using SAEN = typename Scfgr1Fields::SAEN;
    using TXCFG = typename Scfgr1Fields::TXCFG;
    using RXCFG = typename Scfgr1Fields::RXCFG;
    using IGNACK = typename Scfgr1Fields::IGNACK;
    using HSMEN = typename Scfgr1Fields::HSMEN;
    using ADDRCFG = typename Scfgr1Fields::ADDRCFG;
  };

  // Slave Configuration 2
  struct Scfgr2Fields {
    // Clock Hold Time
    using CLKHOLD = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data Valid Delay
    using DATAVD = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Glitch Filter SCL
    using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Glitch Filter SDA
    using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Scfgr2Fields

  struct SCFGR2 : ftl::mmio::Register<
      kBase + 0x128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Scfgr2Fields::CLKHOLD,
      ftl::mmio::Reserved<4, 4>,
      typename Scfgr2Fields::DATAVD,
      ftl::mmio::Reserved<2, 14>,
      typename Scfgr2Fields::FILTSCL,
      ftl::mmio::Reserved<4, 20>,
      typename Scfgr2Fields::FILTSDA,
      ftl::mmio::Reserved<4, 28>> {
    using CLKHOLD = typename Scfgr2Fields::CLKHOLD;
    using DATAVD = typename Scfgr2Fields::DATAVD;
    using FILTSCL = typename Scfgr2Fields::FILTSCL;
    using FILTSDA = typename Scfgr2Fields::FILTSDA;
  };

  // Slave Address Match
  struct SamrFields {
    // Address 0 Value
    using ADDR0 = ftl::mmio::Field<10, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address 1 Value
    using ADDR1 = ftl::mmio::Field<10, 17, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SamrFields

  struct SAMR : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename SamrFields::ADDR0,
      ftl::mmio::Reserved<6, 11>,
      typename SamrFields::ADDR1,
      ftl::mmio::Reserved<5, 27>> {
    using ADDR0 = typename SamrFields::ADDR0;
    using ADDR1 = typename SamrFields::ADDR1;
  };

  // Slave Address Status
  struct SasrFields {
    enum class eANV : std::uint32_t {
      // Received Address (RADDR) is valid
      eVALID = 0,
      // Received Address (RADDR) is not valid
      eNOT_VALID = 1,
    };

    // Received Address
    using RADDR = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Address Not Valid
    using ANV = ftl::mmio::Field<1, 14, eANV, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SasrFields

  struct SASR : ftl::mmio::Register<
      kBase + 0x150u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RO,
      typename SasrFields::RADDR,
      ftl::mmio::Reserved<3, 11>,
      typename SasrFields::ANV,
      ftl::mmio::Reserved<17, 15>> {
    using eANV = typename SasrFields::eANV;
    using RADDR = typename SasrFields::RADDR;
    using ANV = typename SasrFields::ANV;
  };

  // Slave Transmit ACK
  struct StarFields {
    enum class eTXNACK : std::uint32_t {
      // Write a Transmit ACK for each received word
      eTRANSMIT_ACK = 0,
      // Write a Transmit NACK for each received word
      eTRANSMIT_NACK = 1,
    };

    // Transmit NACK
    using TXNACK = ftl::mmio::Field<1, 0, eTXNACK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StarFields

  struct STAR : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename StarFields::TXNACK,
      ftl::mmio::Reserved<31, 1>> {
    using eTXNACK = typename StarFields::eTXNACK;
    using TXNACK = typename StarFields::TXNACK;
  };

  // Slave Transmit Data
  struct StdrFields {
    // Transmit Data
    using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct StdrFields

  struct STDR : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename StdrFields::DATA,
      ftl::mmio::Reserved<24, 8>> {
    using DATA = typename StdrFields::DATA;
  };

  // Slave Receive Data
  struct SrdrFields {
    enum class eRXEMPTY : std::uint32_t {
      // The Receive Data Register is not empty
      eNOT_EMPTY = 0,
      // The Receive Data Register is empty
      eEMPTY = 1,
    };

    enum class eSOF : std::uint32_t {
      // Indicates this is not the first data word since a (repeated) START or STOP condition
      eNOT_FIRST_DATA_WORD = 0,
      // Indicates this is the first data word since a (repeated) START or STOP condition
      eFIRST_DATA_WORD = 1,
    };

    // Receive Data
    using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // RX Empty
    using RXEMPTY = ftl::mmio::Field<1, 14, eRXEMPTY, ftl::mmio::RO, ftl::mmio::Normal>;
    // Start Of Frame
    using SOF = ftl::mmio::Field<1, 15, eSOF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrdrFields

  struct SRDR : ftl::mmio::Register<
      kBase + 0x170u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RO,
      typename SrdrFields::DATA,
      ftl::mmio::Reserved<6, 8>,
      typename SrdrFields::RXEMPTY,
      typename SrdrFields::SOF,
      ftl::mmio::Reserved<16, 16>> {
    using eRXEMPTY = typename SrdrFields::eRXEMPTY;
    using eSOF = typename SrdrFields::eSOF;
    using DATA = typename SrdrFields::DATA;
    using RXEMPTY = typename SrdrFields::RXEMPTY;
    using SOF = typename SrdrFields::SOF;
  };

};

}  // namespace regs