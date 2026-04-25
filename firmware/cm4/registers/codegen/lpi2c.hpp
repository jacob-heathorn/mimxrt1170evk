#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LPI2C
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Lpi2c {
  static_assert( Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u || Instance == 5u || Instance == 6u,
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
struct VERID_fields_ {

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
};  // struct VERID_fields_

struct VERID : ftl::mmio::Register<
    kBase + 0x0u,
    std::uint32_t,
    0x01010003u,
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
  // Master Transmit FIFO Size
  using MTXFIFO = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Master Receive FIFO Size
  using MRXFIFO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PARAM_fields_

struct PARAM : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint32_t,
    0x00000202u,
    ftl::mmio::RO,
    typename PARAM_fields_::MTXFIFO,
    ftl::mmio::Reserved<4, 4>,
    typename PARAM_fields_::MRXFIFO,
    ftl::mmio::Reserved<20, 12>> {
  using MTXFIFO = typename PARAM_fields_::MTXFIFO;
  using MRXFIFO = typename PARAM_fields_::MRXFIFO;
};

  
// Master Control
struct MCR_fields_ {

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
};  // struct MCR_fields_

struct MCR : ftl::mmio::Register<
    kBase + 0x10u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MCR_fields_::MEN,
    typename MCR_fields_::RST,
    typename MCR_fields_::DOZEN,
    typename MCR_fields_::DBGEN,
    ftl::mmio::Reserved<4, 4>,
    typename MCR_fields_::RTF,
    typename MCR_fields_::RRF,
    ftl::mmio::Reserved<22, 10>> {
  using eMEN = typename MCR_fields_::eMEN;
  using eRST = typename MCR_fields_::eRST;
  using eDOZEN = typename MCR_fields_::eDOZEN;
  using eDBGEN = typename MCR_fields_::eDBGEN;
  using eRTF = typename MCR_fields_::eRTF;
  using eRRF = typename MCR_fields_::eRRF;
  using MEN = typename MCR_fields_::MEN;
  using RST = typename MCR_fields_::RST;
  using DOZEN = typename MCR_fields_::DOZEN;
  using DBGEN = typename MCR_fields_::DBGEN;
  using RTF = typename MCR_fields_::RTF;
  using RRF = typename MCR_fields_::RRF;
};

  
// Master Status
struct MSR_fields_ {

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
};  // struct MSR_fields_

struct MSR : ftl::mmio::Register<
    kBase + 0x14u,
    std::uint32_t,
    0x00000001u,
    ftl::mmio::RW,
    typename MSR_fields_::TDF,
    typename MSR_fields_::RDF,
    ftl::mmio::Reserved<6, 2>,
    typename MSR_fields_::EPF,
    typename MSR_fields_::SDF,
    typename MSR_fields_::NDF,
    typename MSR_fields_::ALF,
    typename MSR_fields_::FEF,
    typename MSR_fields_::PLTF,
    typename MSR_fields_::DMF,
    ftl::mmio::Reserved<9, 15>,
    typename MSR_fields_::MBF,
    typename MSR_fields_::BBF,
    ftl::mmio::Reserved<6, 26>> {
  using eTDF = typename MSR_fields_::eTDF;
  using eRDF = typename MSR_fields_::eRDF;
  using eEPF = typename MSR_fields_::eEPF;
  using eSDF = typename MSR_fields_::eSDF;
  using eNDF = typename MSR_fields_::eNDF;
  using eALF = typename MSR_fields_::eALF;
  using eFEF = typename MSR_fields_::eFEF;
  using ePLTF = typename MSR_fields_::ePLTF;
  using eDMF = typename MSR_fields_::eDMF;
  using eMBF = typename MSR_fields_::eMBF;
  using eBBF = typename MSR_fields_::eBBF;
  using TDF = typename MSR_fields_::TDF;
  using RDF = typename MSR_fields_::RDF;
  using EPF = typename MSR_fields_::EPF;
  using SDF = typename MSR_fields_::SDF;
  using NDF = typename MSR_fields_::NDF;
  using ALF = typename MSR_fields_::ALF;
  using FEF = typename MSR_fields_::FEF;
  using PLTF = typename MSR_fields_::PLTF;
  using DMF = typename MSR_fields_::DMF;
  using MBF = typename MSR_fields_::MBF;
  using BBF = typename MSR_fields_::BBF;
};

  
// Master Interrupt Enable
struct MIER_fields_ {

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
};  // struct MIER_fields_

struct MIER : ftl::mmio::Register<
    kBase + 0x18u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MIER_fields_::TDIE,
    typename MIER_fields_::RDIE,
    ftl::mmio::Reserved<6, 2>,
    typename MIER_fields_::EPIE,
    typename MIER_fields_::SDIE,
    typename MIER_fields_::NDIE,
    typename MIER_fields_::ALIE,
    typename MIER_fields_::FEIE,
    typename MIER_fields_::PLTIE,
    typename MIER_fields_::DMIE,
    ftl::mmio::Reserved<17, 15>> {
  using eTDIE = typename MIER_fields_::eTDIE;
  using eRDIE = typename MIER_fields_::eRDIE;
  using eEPIE = typename MIER_fields_::eEPIE;
  using eSDIE = typename MIER_fields_::eSDIE;
  using eNDIE = typename MIER_fields_::eNDIE;
  using eALIE = typename MIER_fields_::eALIE;
  using eFEIE = typename MIER_fields_::eFEIE;
  using ePLTIE = typename MIER_fields_::ePLTIE;
  using eDMIE = typename MIER_fields_::eDMIE;
  using TDIE = typename MIER_fields_::TDIE;
  using RDIE = typename MIER_fields_::RDIE;
  using EPIE = typename MIER_fields_::EPIE;
  using SDIE = typename MIER_fields_::SDIE;
  using NDIE = typename MIER_fields_::NDIE;
  using ALIE = typename MIER_fields_::ALIE;
  using FEIE = typename MIER_fields_::FEIE;
  using PLTIE = typename MIER_fields_::PLTIE;
  using DMIE = typename MIER_fields_::DMIE;
};

  
// Master DMA Enable
struct MDER_fields_ {

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
};  // struct MDER_fields_

struct MDER : ftl::mmio::Register<
    kBase + 0x1Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MDER_fields_::TDDE,
    typename MDER_fields_::RDDE,
    ftl::mmio::Reserved<30, 2>> {
  using eTDDE = typename MDER_fields_::eTDDE;
  using eRDDE = typename MDER_fields_::eRDDE;
  using TDDE = typename MDER_fields_::TDDE;
  using RDDE = typename MDER_fields_::RDDE;
};

  
// Master Configuration 0
struct MCFGR0_fields_ {

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
};  // struct MCFGR0_fields_

struct MCFGR0 : ftl::mmio::Register<
    kBase + 0x20u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MCFGR0_fields_::HREN,
    typename MCFGR0_fields_::HRPOL,
    typename MCFGR0_fields_::HRSEL,
    ftl::mmio::Reserved<5, 3>,
    typename MCFGR0_fields_::CIRFIFO,
    typename MCFGR0_fields_::RDMO,
    ftl::mmio::Reserved<22, 10>> {
  using eHREN = typename MCFGR0_fields_::eHREN;
  using eHRPOL = typename MCFGR0_fields_::eHRPOL;
  using eHRSEL = typename MCFGR0_fields_::eHRSEL;
  using eCIRFIFO = typename MCFGR0_fields_::eCIRFIFO;
  using eRDMO = typename MCFGR0_fields_::eRDMO;
  using HREN = typename MCFGR0_fields_::HREN;
  using HRPOL = typename MCFGR0_fields_::HRPOL;
  using HRSEL = typename MCFGR0_fields_::HRSEL;
  using CIRFIFO = typename MCFGR0_fields_::CIRFIFO;
  using RDMO = typename MCFGR0_fields_::RDMO;
};

  
// Master Configuration 1
struct MCFGR1_fields_ {

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
};  // struct MCFGR1_fields_

struct MCFGR1 : ftl::mmio::Register<
    kBase + 0x24u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MCFGR1_fields_::PRESCALE,
    ftl::mmio::Reserved<5, 3>,
    typename MCFGR1_fields_::AUTOSTOP,
    typename MCFGR1_fields_::IGNACK,
    typename MCFGR1_fields_::TIMECFG,
    ftl::mmio::Reserved<5, 11>,
    typename MCFGR1_fields_::MATCFG,
    ftl::mmio::Reserved<5, 19>,
    typename MCFGR1_fields_::PINCFG,
    ftl::mmio::Reserved<5, 27>> {
  using ePRESCALE = typename MCFGR1_fields_::ePRESCALE;
  using eAUTOSTOP = typename MCFGR1_fields_::eAUTOSTOP;
  using eIGNACK = typename MCFGR1_fields_::eIGNACK;
  using eTIMECFG = typename MCFGR1_fields_::eTIMECFG;
  using eMATCFG = typename MCFGR1_fields_::eMATCFG;
  using ePINCFG = typename MCFGR1_fields_::ePINCFG;
  using PRESCALE = typename MCFGR1_fields_::PRESCALE;
  using AUTOSTOP = typename MCFGR1_fields_::AUTOSTOP;
  using IGNACK = typename MCFGR1_fields_::IGNACK;
  using TIMECFG = typename MCFGR1_fields_::TIMECFG;
  using MATCFG = typename MCFGR1_fields_::MATCFG;
  using PINCFG = typename MCFGR1_fields_::PINCFG;
};

  
// Master Configuration 2
struct MCFGR2_fields_ {
  // Bus Idle Timeout
  using BUSIDLE = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SCL
  using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SDA
  using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MCFGR2_fields_

struct MCFGR2 : ftl::mmio::Register<
    kBase + 0x28u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MCFGR2_fields_::BUSIDLE,
    ftl::mmio::Reserved<4, 12>,
    typename MCFGR2_fields_::FILTSCL,
    ftl::mmio::Reserved<4, 20>,
    typename MCFGR2_fields_::FILTSDA,
    ftl::mmio::Reserved<4, 28>> {
  using BUSIDLE = typename MCFGR2_fields_::BUSIDLE;
  using FILTSCL = typename MCFGR2_fields_::FILTSCL;
  using FILTSDA = typename MCFGR2_fields_::FILTSDA;
};

  
// Master Configuration 3
struct MCFGR3_fields_ {
  // Pin Low Timeout
  using PINLOW = ftl::mmio::Field<12, 8, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MCFGR3_fields_

struct MCFGR3 : ftl::mmio::Register<
    kBase + 0x2Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<8, 0>,
    typename MCFGR3_fields_::PINLOW,
    ftl::mmio::Reserved<12, 20>> {
  using PINLOW = typename MCFGR3_fields_::PINLOW;
};

  
// Master Data Match
struct MDMR_fields_ {
  // Match 0 Value
  using MATCH0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match 1 Value
  using MATCH1 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MDMR_fields_

struct MDMR : ftl::mmio::Register<
    kBase + 0x40u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MDMR_fields_::MATCH0,
    ftl::mmio::Reserved<8, 8>,
    typename MDMR_fields_::MATCH1,
    ftl::mmio::Reserved<8, 24>> {
  using MATCH0 = typename MDMR_fields_::MATCH0;
  using MATCH1 = typename MDMR_fields_::MATCH1;
};

  
// Master Clock Configuration 0
struct MCCR0_fields_ {
  // Clock Low Period
  using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock High Period
  using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Setup Hold Delay
  using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MCCR0_fields_

struct MCCR0 : ftl::mmio::Register<
    kBase + 0x48u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MCCR0_fields_::CLKLO,
    ftl::mmio::Reserved<2, 6>,
    typename MCCR0_fields_::CLKHI,
    ftl::mmio::Reserved<2, 14>,
    typename MCCR0_fields_::SETHOLD,
    ftl::mmio::Reserved<2, 22>,
    typename MCCR0_fields_::DATAVD,
    ftl::mmio::Reserved<2, 30>> {
  using CLKLO = typename MCCR0_fields_::CLKLO;
  using CLKHI = typename MCCR0_fields_::CLKHI;
  using SETHOLD = typename MCCR0_fields_::SETHOLD;
  using DATAVD = typename MCCR0_fields_::DATAVD;
};

  
// Master Clock Configuration 1
struct MCCR1_fields_ {
  // Clock Low Period
  using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock High Period
  using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Setup Hold Delay
  using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MCCR1_fields_

struct MCCR1 : ftl::mmio::Register<
    kBase + 0x50u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MCCR1_fields_::CLKLO,
    ftl::mmio::Reserved<2, 6>,
    typename MCCR1_fields_::CLKHI,
    ftl::mmio::Reserved<2, 14>,
    typename MCCR1_fields_::SETHOLD,
    ftl::mmio::Reserved<2, 22>,
    typename MCCR1_fields_::DATAVD,
    ftl::mmio::Reserved<2, 30>> {
  using CLKLO = typename MCCR1_fields_::CLKLO;
  using CLKHI = typename MCCR1_fields_::CLKHI;
  using SETHOLD = typename MCCR1_fields_::SETHOLD;
  using DATAVD = typename MCCR1_fields_::DATAVD;
};

  
// Master FIFO Control
struct MFCR_fields_ {
  // Transmit FIFO Watermark
  using TXWATER = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive FIFO Watermark
  using RXWATER = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MFCR_fields_

struct MFCR : ftl::mmio::Register<
    kBase + 0x58u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename MFCR_fields_::TXWATER,
    ftl::mmio::Reserved<14, 2>,
    typename MFCR_fields_::RXWATER,
    ftl::mmio::Reserved<14, 18>> {
  using TXWATER = typename MFCR_fields_::TXWATER;
  using RXWATER = typename MFCR_fields_::RXWATER;
};

  
// Master FIFO Status
struct MFSR_fields_ {
  // Transmit FIFO Count
  using TXCOUNT = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive FIFO Count
  using RXCOUNT = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct MFSR_fields_

struct MFSR : ftl::mmio::Register<
    kBase + 0x5Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    typename MFSR_fields_::TXCOUNT,
    ftl::mmio::Reserved<13, 3>,
    typename MFSR_fields_::RXCOUNT,
    ftl::mmio::Reserved<13, 19>> {
  using TXCOUNT = typename MFSR_fields_::TXCOUNT;
  using RXCOUNT = typename MFSR_fields_::RXCOUNT;
};

  
// Master Transmit Data
struct MTDR_fields_ {

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
};  // struct MTDR_fields_

struct MTDR : ftl::mmio::Register<
    kBase + 0x60u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    typename MTDR_fields_::DATA,
    typename MTDR_fields_::CMD,
    ftl::mmio::Reserved<21, 11>> {
  using eCMD = typename MTDR_fields_::eCMD;
  using DATA = typename MTDR_fields_::DATA;
  using CMD = typename MTDR_fields_::CMD;
};

  
// Master Receive Data
struct MRDR_fields_ {

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
};  // struct MRDR_fields_

struct MRDR : ftl::mmio::Register<
    kBase + 0x70u,
    std::uint32_t,
    0x00004000u,
    ftl::mmio::RO,
    typename MRDR_fields_::DATA,
    ftl::mmio::Reserved<6, 8>,
    typename MRDR_fields_::RXEMPTY,
    ftl::mmio::Reserved<17, 15>> {
  using eRXEMPTY = typename MRDR_fields_::eRXEMPTY;
  using DATA = typename MRDR_fields_::DATA;
  using RXEMPTY = typename MRDR_fields_::RXEMPTY;
};

  
// Slave Control
struct SCR_fields_ {

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
};  // struct SCR_fields_

struct SCR : ftl::mmio::Register<
    kBase + 0x110u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename SCR_fields_::SEN,
    typename SCR_fields_::RST,
    ftl::mmio::Reserved<2, 2>,
    typename SCR_fields_::FILTEN,
    typename SCR_fields_::FILTDZ,
    ftl::mmio::Reserved<2, 6>,
    typename SCR_fields_::RTF,
    typename SCR_fields_::RRF,
    ftl::mmio::Reserved<22, 10>> {
  using eSEN = typename SCR_fields_::eSEN;
  using eRST = typename SCR_fields_::eRST;
  using eFILTEN = typename SCR_fields_::eFILTEN;
  using eFILTDZ = typename SCR_fields_::eFILTDZ;
  using eRTF = typename SCR_fields_::eRTF;
  using eRRF = typename SCR_fields_::eRRF;
  using SEN = typename SCR_fields_::SEN;
  using RST = typename SCR_fields_::RST;
  using FILTEN = typename SCR_fields_::FILTEN;
  using FILTDZ = typename SCR_fields_::FILTDZ;
  using RTF = typename SCR_fields_::RTF;
  using RRF = typename SCR_fields_::RRF;
};

  
// Slave Status
struct SSR_fields_ {

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
};  // struct SSR_fields_

struct SSR : ftl::mmio::Register<
    kBase + 0x114u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename SSR_fields_::TDF,
    typename SSR_fields_::RDF,
    typename SSR_fields_::AVF,
    typename SSR_fields_::TAF,
    ftl::mmio::Reserved<4, 4>,
    typename SSR_fields_::RSF,
    typename SSR_fields_::SDF,
    typename SSR_fields_::BEF,
    typename SSR_fields_::FEF,
    typename SSR_fields_::AM0F,
    typename SSR_fields_::AM1F,
    typename SSR_fields_::GCF,
    typename SSR_fields_::SARF,
    ftl::mmio::Reserved<8, 16>,
    typename SSR_fields_::SBF,
    typename SSR_fields_::BBF,
    ftl::mmio::Reserved<6, 26>> {
  using eTDF = typename SSR_fields_::eTDF;
  using eRDF = typename SSR_fields_::eRDF;
  using eAVF = typename SSR_fields_::eAVF;
  using eTAF = typename SSR_fields_::eTAF;
  using eRSF = typename SSR_fields_::eRSF;
  using eSDF = typename SSR_fields_::eSDF;
  using eBEF = typename SSR_fields_::eBEF;
  using eFEF = typename SSR_fields_::eFEF;
  using eAM0F = typename SSR_fields_::eAM0F;
  using eAM1F = typename SSR_fields_::eAM1F;
  using eGCF = typename SSR_fields_::eGCF;
  using eSARF = typename SSR_fields_::eSARF;
  using eSBF = typename SSR_fields_::eSBF;
  using eBBF = typename SSR_fields_::eBBF;
  using TDF = typename SSR_fields_::TDF;
  using RDF = typename SSR_fields_::RDF;
  using AVF = typename SSR_fields_::AVF;
  using TAF = typename SSR_fields_::TAF;
  using RSF = typename SSR_fields_::RSF;
  using SDF = typename SSR_fields_::SDF;
  using BEF = typename SSR_fields_::BEF;
  using FEF = typename SSR_fields_::FEF;
  using AM0F = typename SSR_fields_::AM0F;
  using AM1F = typename SSR_fields_::AM1F;
  using GCF = typename SSR_fields_::GCF;
  using SARF = typename SSR_fields_::SARF;
  using SBF = typename SSR_fields_::SBF;
  using BBF = typename SSR_fields_::BBF;
};

  
// Slave Interrupt Enable
struct SIER_fields_ {

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
};  // struct SIER_fields_

struct SIER : ftl::mmio::Register<
    kBase + 0x118u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename SIER_fields_::TDIE,
    typename SIER_fields_::RDIE,
    typename SIER_fields_::AVIE,
    typename SIER_fields_::TAIE,
    ftl::mmio::Reserved<4, 4>,
    typename SIER_fields_::RSIE,
    typename SIER_fields_::SDIE,
    typename SIER_fields_::BEIE,
    typename SIER_fields_::FEIE,
    typename SIER_fields_::AM0IE,
    typename SIER_fields_::AM1IE,
    typename SIER_fields_::GCIE,
    typename SIER_fields_::SARIE,
    ftl::mmio::Reserved<16, 16>> {
  using eTDIE = typename SIER_fields_::eTDIE;
  using eRDIE = typename SIER_fields_::eRDIE;
  using eAVIE = typename SIER_fields_::eAVIE;
  using eTAIE = typename SIER_fields_::eTAIE;
  using eRSIE = typename SIER_fields_::eRSIE;
  using eSDIE = typename SIER_fields_::eSDIE;
  using eBEIE = typename SIER_fields_::eBEIE;
  using eFEIE = typename SIER_fields_::eFEIE;
  using eAM0IE = typename SIER_fields_::eAM0IE;
  using eAM1IE = typename SIER_fields_::eAM1IE;
  using eGCIE = typename SIER_fields_::eGCIE;
  using eSARIE = typename SIER_fields_::eSARIE;
  using TDIE = typename SIER_fields_::TDIE;
  using RDIE = typename SIER_fields_::RDIE;
  using AVIE = typename SIER_fields_::AVIE;
  using TAIE = typename SIER_fields_::TAIE;
  using RSIE = typename SIER_fields_::RSIE;
  using SDIE = typename SIER_fields_::SDIE;
  using BEIE = typename SIER_fields_::BEIE;
  using FEIE = typename SIER_fields_::FEIE;
  using AM0IE = typename SIER_fields_::AM0IE;
  using AM1IE = typename SIER_fields_::AM1IE;
  using GCIE = typename SIER_fields_::GCIE;
  using SARIE = typename SIER_fields_::SARIE;
};

  
// Slave DMA Enable
struct SDER_fields_ {

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
};  // struct SDER_fields_

struct SDER : ftl::mmio::Register<
    kBase + 0x11Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename SDER_fields_::TDDE,
    typename SDER_fields_::RDDE,
    typename SDER_fields_::AVDE,
    ftl::mmio::Reserved<29, 3>> {
  using eTDDE = typename SDER_fields_::eTDDE;
  using eRDDE = typename SDER_fields_::eRDDE;
  using eAVDE = typename SDER_fields_::eAVDE;
  using TDDE = typename SDER_fields_::TDDE;
  using RDDE = typename SDER_fields_::RDDE;
  using AVDE = typename SDER_fields_::AVDE;
};

  
// Slave Configuration 1
struct SCFGR1_fields_ {

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
};  // struct SCFGR1_fields_

struct SCFGR1 : ftl::mmio::Register<
    kBase + 0x124u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename SCFGR1_fields_::ADRSTALL,
    typename SCFGR1_fields_::RXSTALL,
    typename SCFGR1_fields_::TXDSTALL,
    typename SCFGR1_fields_::ACKSTALL,
    ftl::mmio::Reserved<4, 4>,
    typename SCFGR1_fields_::GCEN,
    typename SCFGR1_fields_::SAEN,
    typename SCFGR1_fields_::TXCFG,
    typename SCFGR1_fields_::RXCFG,
    typename SCFGR1_fields_::IGNACK,
    typename SCFGR1_fields_::HSMEN,
    ftl::mmio::Reserved<2, 14>,
    typename SCFGR1_fields_::ADDRCFG,
    ftl::mmio::Reserved<13, 19>> {
  using eADRSTALL = typename SCFGR1_fields_::eADRSTALL;
  using eRXSTALL = typename SCFGR1_fields_::eRXSTALL;
  using eTXDSTALL = typename SCFGR1_fields_::eTXDSTALL;
  using eACKSTALL = typename SCFGR1_fields_::eACKSTALL;
  using eGCEN = typename SCFGR1_fields_::eGCEN;
  using eSAEN = typename SCFGR1_fields_::eSAEN;
  using eTXCFG = typename SCFGR1_fields_::eTXCFG;
  using eRXCFG = typename SCFGR1_fields_::eRXCFG;
  using eIGNACK = typename SCFGR1_fields_::eIGNACK;
  using eHSMEN = typename SCFGR1_fields_::eHSMEN;
  using eADDRCFG = typename SCFGR1_fields_::eADDRCFG;
  using ADRSTALL = typename SCFGR1_fields_::ADRSTALL;
  using RXSTALL = typename SCFGR1_fields_::RXSTALL;
  using TXDSTALL = typename SCFGR1_fields_::TXDSTALL;
  using ACKSTALL = typename SCFGR1_fields_::ACKSTALL;
  using GCEN = typename SCFGR1_fields_::GCEN;
  using SAEN = typename SCFGR1_fields_::SAEN;
  using TXCFG = typename SCFGR1_fields_::TXCFG;
  using RXCFG = typename SCFGR1_fields_::RXCFG;
  using IGNACK = typename SCFGR1_fields_::IGNACK;
  using HSMEN = typename SCFGR1_fields_::HSMEN;
  using ADDRCFG = typename SCFGR1_fields_::ADDRCFG;
};

  
// Slave Configuration 2
struct SCFGR2_fields_ {
  // Clock Hold Time
  using CLKHOLD = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SCL
  using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SDA
  using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCFGR2_fields_

struct SCFGR2 : ftl::mmio::Register<
    kBase + 0x128u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename SCFGR2_fields_::CLKHOLD,
    ftl::mmio::Reserved<4, 4>,
    typename SCFGR2_fields_::DATAVD,
    ftl::mmio::Reserved<2, 14>,
    typename SCFGR2_fields_::FILTSCL,
    ftl::mmio::Reserved<4, 20>,
    typename SCFGR2_fields_::FILTSDA,
    ftl::mmio::Reserved<4, 28>> {
  using CLKHOLD = typename SCFGR2_fields_::CLKHOLD;
  using DATAVD = typename SCFGR2_fields_::DATAVD;
  using FILTSCL = typename SCFGR2_fields_::FILTSCL;
  using FILTSDA = typename SCFGR2_fields_::FILTSDA;
};

  
// Slave Address Match
struct SAMR_fields_ {
  // Address 0 Value
  using ADDR0 = ftl::mmio::Field<10, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Address 1 Value
  using ADDR1 = ftl::mmio::Field<10, 17, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SAMR_fields_

struct SAMR : ftl::mmio::Register<
    kBase + 0x140u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    typename SAMR_fields_::ADDR0,
    ftl::mmio::Reserved<6, 11>,
    typename SAMR_fields_::ADDR1,
    ftl::mmio::Reserved<5, 27>> {
  using ADDR0 = typename SAMR_fields_::ADDR0;
  using ADDR1 = typename SAMR_fields_::ADDR1;
};

  
// Slave Address Status
struct SASR_fields_ {

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
};  // struct SASR_fields_

struct SASR : ftl::mmio::Register<
    kBase + 0x150u,
    std::uint32_t,
    0x00004000u,
    ftl::mmio::RO,
    typename SASR_fields_::RADDR,
    ftl::mmio::Reserved<3, 11>,
    typename SASR_fields_::ANV,
    ftl::mmio::Reserved<17, 15>> {
  using eANV = typename SASR_fields_::eANV;
  using RADDR = typename SASR_fields_::RADDR;
  using ANV = typename SASR_fields_::ANV;
};

  
// Slave Transmit ACK
struct STAR_fields_ {

  enum class eTXNACK : std::uint32_t {
    // Write a Transmit ACK for each received word
    eTRANSMIT_ACK = 0,
    // Write a Transmit NACK for each received word
    eTRANSMIT_NACK = 1,
  };
  // Transmit NACK
  using TXNACK = ftl::mmio::Field<1, 0, eTXNACK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct STAR_fields_

struct STAR : ftl::mmio::Register<
    kBase + 0x154u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename STAR_fields_::TXNACK,
    ftl::mmio::Reserved<31, 1>> {
  using eTXNACK = typename STAR_fields_::eTXNACK;
  using TXNACK = typename STAR_fields_::TXNACK;
};

  
// Slave Transmit Data
struct STDR_fields_ {
  // Transmit Data
  using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct STDR_fields_

struct STDR : ftl::mmio::Register<
    kBase + 0x160u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    typename STDR_fields_::DATA,
    ftl::mmio::Reserved<24, 8>> {
  using DATA = typename STDR_fields_::DATA;
};

  
// Slave Receive Data
struct SRDR_fields_ {

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
};  // struct SRDR_fields_

struct SRDR : ftl::mmio::Register<
    kBase + 0x170u,
    std::uint32_t,
    0x00004000u,
    ftl::mmio::RO,
    typename SRDR_fields_::DATA,
    ftl::mmio::Reserved<6, 8>,
    typename SRDR_fields_::RXEMPTY,
    typename SRDR_fields_::SOF,
    ftl::mmio::Reserved<16, 16>> {
  using eRXEMPTY = typename SRDR_fields_::eRXEMPTY;
  using eSOF = typename SRDR_fields_::eSOF;
  using DATA = typename SRDR_fields_::DATA;
  using RXEMPTY = typename SRDR_fields_::RXEMPTY;
  using SOF = typename SRDR_fields_::SOF;
};
};

}  // namespace regs