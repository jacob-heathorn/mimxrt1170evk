#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LPI2C
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::lpi2c5 {

// Version ID
namespace VERID_fields_ {

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
}  // namespace VERID_fields_

struct VERID : ftl::mmio::Register<
    0x40C34000u,
    0x01010003u,
    ftl::mmio::RO,
    VERID_fields_::FEATURE,
    VERID_fields_::MINOR,
    VERID_fields_::MAJOR> {
  using eFEATURE = VERID_fields_::eFEATURE;
  using FEATURE = VERID_fields_::FEATURE;
  using MINOR = VERID_fields_::MINOR;
  using MAJOR = VERID_fields_::MAJOR;
};

// Parameter
namespace PARAM_fields_ {
  // Master Transmit FIFO Size
  using MTXFIFO = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Master Receive FIFO Size
  using MRXFIFO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace PARAM_fields_

struct PARAM : ftl::mmio::Register<
    0x40C34004u,
    0x00000202u,
    ftl::mmio::RO,
    PARAM_fields_::MTXFIFO,
    ftl::mmio::Reserved<4, 4>,
    PARAM_fields_::MRXFIFO,
    ftl::mmio::Reserved<20, 12>> {
  using MTXFIFO = PARAM_fields_::MTXFIFO;
  using MRXFIFO = PARAM_fields_::MRXFIFO;
};

// Master Control
namespace MCR_fields_ {

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
}  // namespace MCR_fields_

struct MCR : ftl::mmio::Register<
    0x40C34010u,
    0x00000000u,
    ftl::mmio::RW,
    MCR_fields_::MEN,
    MCR_fields_::RST,
    MCR_fields_::DOZEN,
    MCR_fields_::DBGEN,
    ftl::mmio::Reserved<4, 4>,
    MCR_fields_::RTF,
    MCR_fields_::RRF,
    ftl::mmio::Reserved<22, 10>> {
  using eMEN = MCR_fields_::eMEN;
  using eRST = MCR_fields_::eRST;
  using eDOZEN = MCR_fields_::eDOZEN;
  using eDBGEN = MCR_fields_::eDBGEN;
  using eRTF = MCR_fields_::eRTF;
  using eRRF = MCR_fields_::eRRF;
  using MEN = MCR_fields_::MEN;
  using RST = MCR_fields_::RST;
  using DOZEN = MCR_fields_::DOZEN;
  using DBGEN = MCR_fields_::DBGEN;
  using RTF = MCR_fields_::RTF;
  using RRF = MCR_fields_::RRF;
};

// Master Status
namespace MSR_fields_ {

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
}  // namespace MSR_fields_

struct MSR : ftl::mmio::Register<
    0x40C34014u,
    0x00000001u,
    ftl::mmio::RW,
    MSR_fields_::TDF,
    MSR_fields_::RDF,
    ftl::mmio::Reserved<6, 2>,
    MSR_fields_::EPF,
    MSR_fields_::SDF,
    MSR_fields_::NDF,
    MSR_fields_::ALF,
    MSR_fields_::FEF,
    MSR_fields_::PLTF,
    MSR_fields_::DMF,
    ftl::mmio::Reserved<9, 15>,
    MSR_fields_::MBF,
    MSR_fields_::BBF,
    ftl::mmio::Reserved<6, 26>> {
  using eTDF = MSR_fields_::eTDF;
  using eRDF = MSR_fields_::eRDF;
  using eEPF = MSR_fields_::eEPF;
  using eSDF = MSR_fields_::eSDF;
  using eNDF = MSR_fields_::eNDF;
  using eALF = MSR_fields_::eALF;
  using eFEF = MSR_fields_::eFEF;
  using ePLTF = MSR_fields_::ePLTF;
  using eDMF = MSR_fields_::eDMF;
  using eMBF = MSR_fields_::eMBF;
  using eBBF = MSR_fields_::eBBF;
  using TDF = MSR_fields_::TDF;
  using RDF = MSR_fields_::RDF;
  using EPF = MSR_fields_::EPF;
  using SDF = MSR_fields_::SDF;
  using NDF = MSR_fields_::NDF;
  using ALF = MSR_fields_::ALF;
  using FEF = MSR_fields_::FEF;
  using PLTF = MSR_fields_::PLTF;
  using DMF = MSR_fields_::DMF;
  using MBF = MSR_fields_::MBF;
  using BBF = MSR_fields_::BBF;
};

// Master Interrupt Enable
namespace MIER_fields_ {

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
}  // namespace MIER_fields_

struct MIER : ftl::mmio::Register<
    0x40C34018u,
    0x00000000u,
    ftl::mmio::RW,
    MIER_fields_::TDIE,
    MIER_fields_::RDIE,
    ftl::mmio::Reserved<6, 2>,
    MIER_fields_::EPIE,
    MIER_fields_::SDIE,
    MIER_fields_::NDIE,
    MIER_fields_::ALIE,
    MIER_fields_::FEIE,
    MIER_fields_::PLTIE,
    MIER_fields_::DMIE,
    ftl::mmio::Reserved<17, 15>> {
  using eTDIE = MIER_fields_::eTDIE;
  using eRDIE = MIER_fields_::eRDIE;
  using eEPIE = MIER_fields_::eEPIE;
  using eSDIE = MIER_fields_::eSDIE;
  using eNDIE = MIER_fields_::eNDIE;
  using eALIE = MIER_fields_::eALIE;
  using eFEIE = MIER_fields_::eFEIE;
  using ePLTIE = MIER_fields_::ePLTIE;
  using eDMIE = MIER_fields_::eDMIE;
  using TDIE = MIER_fields_::TDIE;
  using RDIE = MIER_fields_::RDIE;
  using EPIE = MIER_fields_::EPIE;
  using SDIE = MIER_fields_::SDIE;
  using NDIE = MIER_fields_::NDIE;
  using ALIE = MIER_fields_::ALIE;
  using FEIE = MIER_fields_::FEIE;
  using PLTIE = MIER_fields_::PLTIE;
  using DMIE = MIER_fields_::DMIE;
};

// Master DMA Enable
namespace MDER_fields_ {

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
}  // namespace MDER_fields_

struct MDER : ftl::mmio::Register<
    0x40C3401Cu,
    0x00000000u,
    ftl::mmio::RW,
    MDER_fields_::TDDE,
    MDER_fields_::RDDE,
    ftl::mmio::Reserved<30, 2>> {
  using eTDDE = MDER_fields_::eTDDE;
  using eRDDE = MDER_fields_::eRDDE;
  using TDDE = MDER_fields_::TDDE;
  using RDDE = MDER_fields_::RDDE;
};

// Master Configuration 0
namespace MCFGR0_fields_ {

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
}  // namespace MCFGR0_fields_

struct MCFGR0 : ftl::mmio::Register<
    0x40C34020u,
    0x00000000u,
    ftl::mmio::RW,
    MCFGR0_fields_::HREN,
    MCFGR0_fields_::HRPOL,
    MCFGR0_fields_::HRSEL,
    ftl::mmio::Reserved<5, 3>,
    MCFGR0_fields_::CIRFIFO,
    MCFGR0_fields_::RDMO,
    ftl::mmio::Reserved<22, 10>> {
  using eHREN = MCFGR0_fields_::eHREN;
  using eHRPOL = MCFGR0_fields_::eHRPOL;
  using eHRSEL = MCFGR0_fields_::eHRSEL;
  using eCIRFIFO = MCFGR0_fields_::eCIRFIFO;
  using eRDMO = MCFGR0_fields_::eRDMO;
  using HREN = MCFGR0_fields_::HREN;
  using HRPOL = MCFGR0_fields_::HRPOL;
  using HRSEL = MCFGR0_fields_::HRSEL;
  using CIRFIFO = MCFGR0_fields_::CIRFIFO;
  using RDMO = MCFGR0_fields_::RDMO;
};

// Master Configuration 1
namespace MCFGR1_fields_ {

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
}  // namespace MCFGR1_fields_

struct MCFGR1 : ftl::mmio::Register<
    0x40C34024u,
    0x00000000u,
    ftl::mmio::RW,
    MCFGR1_fields_::PRESCALE,
    ftl::mmio::Reserved<5, 3>,
    MCFGR1_fields_::AUTOSTOP,
    MCFGR1_fields_::IGNACK,
    MCFGR1_fields_::TIMECFG,
    ftl::mmio::Reserved<5, 11>,
    MCFGR1_fields_::MATCFG,
    ftl::mmio::Reserved<5, 19>,
    MCFGR1_fields_::PINCFG,
    ftl::mmio::Reserved<5, 27>> {
  using ePRESCALE = MCFGR1_fields_::ePRESCALE;
  using eAUTOSTOP = MCFGR1_fields_::eAUTOSTOP;
  using eIGNACK = MCFGR1_fields_::eIGNACK;
  using eTIMECFG = MCFGR1_fields_::eTIMECFG;
  using eMATCFG = MCFGR1_fields_::eMATCFG;
  using ePINCFG = MCFGR1_fields_::ePINCFG;
  using PRESCALE = MCFGR1_fields_::PRESCALE;
  using AUTOSTOP = MCFGR1_fields_::AUTOSTOP;
  using IGNACK = MCFGR1_fields_::IGNACK;
  using TIMECFG = MCFGR1_fields_::TIMECFG;
  using MATCFG = MCFGR1_fields_::MATCFG;
  using PINCFG = MCFGR1_fields_::PINCFG;
};

// Master Configuration 2
namespace MCFGR2_fields_ {
  // Bus Idle Timeout
  using BUSIDLE = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SCL
  using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SDA
  using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCFGR2_fields_

struct MCFGR2 : ftl::mmio::Register<
    0x40C34028u,
    0x00000000u,
    ftl::mmio::RW,
    MCFGR2_fields_::BUSIDLE,
    ftl::mmio::Reserved<4, 12>,
    MCFGR2_fields_::FILTSCL,
    ftl::mmio::Reserved<4, 20>,
    MCFGR2_fields_::FILTSDA,
    ftl::mmio::Reserved<4, 28>> {
  using BUSIDLE = MCFGR2_fields_::BUSIDLE;
  using FILTSCL = MCFGR2_fields_::FILTSCL;
  using FILTSDA = MCFGR2_fields_::FILTSDA;
};

// Master Configuration 3
namespace MCFGR3_fields_ {
  // Pin Low Timeout
  using PINLOW = ftl::mmio::Field<12, 8, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCFGR3_fields_

struct MCFGR3 : ftl::mmio::Register<
    0x40C3402Cu,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<8, 0>,
    MCFGR3_fields_::PINLOW,
    ftl::mmio::Reserved<12, 20>> {
  using PINLOW = MCFGR3_fields_::PINLOW;
};

// Master Data Match
namespace MDMR_fields_ {
  // Match 0 Value
  using MATCH0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match 1 Value
  using MATCH1 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MDMR_fields_

struct MDMR : ftl::mmio::Register<
    0x40C34040u,
    0x00000000u,
    ftl::mmio::RW,
    MDMR_fields_::MATCH0,
    ftl::mmio::Reserved<8, 8>,
    MDMR_fields_::MATCH1,
    ftl::mmio::Reserved<8, 24>> {
  using MATCH0 = MDMR_fields_::MATCH0;
  using MATCH1 = MDMR_fields_::MATCH1;
};

// Master Clock Configuration 0
namespace MCCR0_fields_ {
  // Clock Low Period
  using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock High Period
  using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Setup Hold Delay
  using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCCR0_fields_

struct MCCR0 : ftl::mmio::Register<
    0x40C34048u,
    0x00000000u,
    ftl::mmio::RW,
    MCCR0_fields_::CLKLO,
    ftl::mmio::Reserved<2, 6>,
    MCCR0_fields_::CLKHI,
    ftl::mmio::Reserved<2, 14>,
    MCCR0_fields_::SETHOLD,
    ftl::mmio::Reserved<2, 22>,
    MCCR0_fields_::DATAVD,
    ftl::mmio::Reserved<2, 30>> {
  using CLKLO = MCCR0_fields_::CLKLO;
  using CLKHI = MCCR0_fields_::CLKHI;
  using SETHOLD = MCCR0_fields_::SETHOLD;
  using DATAVD = MCCR0_fields_::DATAVD;
};

// Master Clock Configuration 1
namespace MCCR1_fields_ {
  // Clock Low Period
  using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock High Period
  using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Setup Hold Delay
  using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCCR1_fields_

struct MCCR1 : ftl::mmio::Register<
    0x40C34050u,
    0x00000000u,
    ftl::mmio::RW,
    MCCR1_fields_::CLKLO,
    ftl::mmio::Reserved<2, 6>,
    MCCR1_fields_::CLKHI,
    ftl::mmio::Reserved<2, 14>,
    MCCR1_fields_::SETHOLD,
    ftl::mmio::Reserved<2, 22>,
    MCCR1_fields_::DATAVD,
    ftl::mmio::Reserved<2, 30>> {
  using CLKLO = MCCR1_fields_::CLKLO;
  using CLKHI = MCCR1_fields_::CLKHI;
  using SETHOLD = MCCR1_fields_::SETHOLD;
  using DATAVD = MCCR1_fields_::DATAVD;
};

// Master FIFO Control
namespace MFCR_fields_ {
  // Transmit FIFO Watermark
  using TXWATER = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive FIFO Watermark
  using RXWATER = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MFCR_fields_

struct MFCR : ftl::mmio::Register<
    0x40C34058u,
    0x00000000u,
    ftl::mmio::RW,
    MFCR_fields_::TXWATER,
    ftl::mmio::Reserved<14, 2>,
    MFCR_fields_::RXWATER,
    ftl::mmio::Reserved<14, 18>> {
  using TXWATER = MFCR_fields_::TXWATER;
  using RXWATER = MFCR_fields_::RXWATER;
};

// Master FIFO Status
namespace MFSR_fields_ {
  // Transmit FIFO Count
  using TXCOUNT = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive FIFO Count
  using RXCOUNT = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace MFSR_fields_

struct MFSR : ftl::mmio::Register<
    0x40C3405Cu,
    0x00000000u,
    ftl::mmio::RO,
    MFSR_fields_::TXCOUNT,
    ftl::mmio::Reserved<13, 3>,
    MFSR_fields_::RXCOUNT,
    ftl::mmio::Reserved<13, 19>> {
  using TXCOUNT = MFSR_fields_::TXCOUNT;
  using RXCOUNT = MFSR_fields_::RXCOUNT;
};

// Master Transmit Data
namespace MTDR_fields_ {

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
}  // namespace MTDR_fields_

struct MTDR : ftl::mmio::Register<
    0x40C34060u,
    0x00000000u,
    ftl::mmio::WO,
    MTDR_fields_::DATA,
    MTDR_fields_::CMD,
    ftl::mmio::Reserved<21, 11>> {
  using eCMD = MTDR_fields_::eCMD;
  using DATA = MTDR_fields_::DATA;
  using CMD = MTDR_fields_::CMD;
};

// Master Receive Data
namespace MRDR_fields_ {

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
}  // namespace MRDR_fields_

struct MRDR : ftl::mmio::Register<
    0x40C34070u,
    0x00004000u,
    ftl::mmio::RO,
    MRDR_fields_::DATA,
    ftl::mmio::Reserved<6, 8>,
    MRDR_fields_::RXEMPTY,
    ftl::mmio::Reserved<17, 15>> {
  using eRXEMPTY = MRDR_fields_::eRXEMPTY;
  using DATA = MRDR_fields_::DATA;
  using RXEMPTY = MRDR_fields_::RXEMPTY;
};

// Slave Control
namespace SCR_fields_ {

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
}  // namespace SCR_fields_

struct SCR : ftl::mmio::Register<
    0x40C34110u,
    0x00000000u,
    ftl::mmio::RW,
    SCR_fields_::SEN,
    SCR_fields_::RST,
    ftl::mmio::Reserved<2, 2>,
    SCR_fields_::FILTEN,
    SCR_fields_::FILTDZ,
    ftl::mmio::Reserved<2, 6>,
    SCR_fields_::RTF,
    SCR_fields_::RRF,
    ftl::mmio::Reserved<22, 10>> {
  using eSEN = SCR_fields_::eSEN;
  using eRST = SCR_fields_::eRST;
  using eFILTEN = SCR_fields_::eFILTEN;
  using eFILTDZ = SCR_fields_::eFILTDZ;
  using eRTF = SCR_fields_::eRTF;
  using eRRF = SCR_fields_::eRRF;
  using SEN = SCR_fields_::SEN;
  using RST = SCR_fields_::RST;
  using FILTEN = SCR_fields_::FILTEN;
  using FILTDZ = SCR_fields_::FILTDZ;
  using RTF = SCR_fields_::RTF;
  using RRF = SCR_fields_::RRF;
};

// Slave Status
namespace SSR_fields_ {

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
}  // namespace SSR_fields_

struct SSR : ftl::mmio::Register<
    0x40C34114u,
    0x00000000u,
    ftl::mmio::RW,
    SSR_fields_::TDF,
    SSR_fields_::RDF,
    SSR_fields_::AVF,
    SSR_fields_::TAF,
    ftl::mmio::Reserved<4, 4>,
    SSR_fields_::RSF,
    SSR_fields_::SDF,
    SSR_fields_::BEF,
    SSR_fields_::FEF,
    SSR_fields_::AM0F,
    SSR_fields_::AM1F,
    SSR_fields_::GCF,
    SSR_fields_::SARF,
    ftl::mmio::Reserved<8, 16>,
    SSR_fields_::SBF,
    SSR_fields_::BBF,
    ftl::mmio::Reserved<6, 26>> {
  using eTDF = SSR_fields_::eTDF;
  using eRDF = SSR_fields_::eRDF;
  using eAVF = SSR_fields_::eAVF;
  using eTAF = SSR_fields_::eTAF;
  using eRSF = SSR_fields_::eRSF;
  using eSDF = SSR_fields_::eSDF;
  using eBEF = SSR_fields_::eBEF;
  using eFEF = SSR_fields_::eFEF;
  using eAM0F = SSR_fields_::eAM0F;
  using eAM1F = SSR_fields_::eAM1F;
  using eGCF = SSR_fields_::eGCF;
  using eSARF = SSR_fields_::eSARF;
  using eSBF = SSR_fields_::eSBF;
  using eBBF = SSR_fields_::eBBF;
  using TDF = SSR_fields_::TDF;
  using RDF = SSR_fields_::RDF;
  using AVF = SSR_fields_::AVF;
  using TAF = SSR_fields_::TAF;
  using RSF = SSR_fields_::RSF;
  using SDF = SSR_fields_::SDF;
  using BEF = SSR_fields_::BEF;
  using FEF = SSR_fields_::FEF;
  using AM0F = SSR_fields_::AM0F;
  using AM1F = SSR_fields_::AM1F;
  using GCF = SSR_fields_::GCF;
  using SARF = SSR_fields_::SARF;
  using SBF = SSR_fields_::SBF;
  using BBF = SSR_fields_::BBF;
};

// Slave Interrupt Enable
namespace SIER_fields_ {

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
}  // namespace SIER_fields_

struct SIER : ftl::mmio::Register<
    0x40C34118u,
    0x00000000u,
    ftl::mmio::RW,
    SIER_fields_::TDIE,
    SIER_fields_::RDIE,
    SIER_fields_::AVIE,
    SIER_fields_::TAIE,
    ftl::mmio::Reserved<4, 4>,
    SIER_fields_::RSIE,
    SIER_fields_::SDIE,
    SIER_fields_::BEIE,
    SIER_fields_::FEIE,
    SIER_fields_::AM0IE,
    SIER_fields_::AM1IE,
    SIER_fields_::GCIE,
    SIER_fields_::SARIE,
    ftl::mmio::Reserved<16, 16>> {
  using eTDIE = SIER_fields_::eTDIE;
  using eRDIE = SIER_fields_::eRDIE;
  using eAVIE = SIER_fields_::eAVIE;
  using eTAIE = SIER_fields_::eTAIE;
  using eRSIE = SIER_fields_::eRSIE;
  using eSDIE = SIER_fields_::eSDIE;
  using eBEIE = SIER_fields_::eBEIE;
  using eFEIE = SIER_fields_::eFEIE;
  using eAM0IE = SIER_fields_::eAM0IE;
  using eAM1IE = SIER_fields_::eAM1IE;
  using eGCIE = SIER_fields_::eGCIE;
  using eSARIE = SIER_fields_::eSARIE;
  using TDIE = SIER_fields_::TDIE;
  using RDIE = SIER_fields_::RDIE;
  using AVIE = SIER_fields_::AVIE;
  using TAIE = SIER_fields_::TAIE;
  using RSIE = SIER_fields_::RSIE;
  using SDIE = SIER_fields_::SDIE;
  using BEIE = SIER_fields_::BEIE;
  using FEIE = SIER_fields_::FEIE;
  using AM0IE = SIER_fields_::AM0IE;
  using AM1IE = SIER_fields_::AM1IE;
  using GCIE = SIER_fields_::GCIE;
  using SARIE = SIER_fields_::SARIE;
};

// Slave DMA Enable
namespace SDER_fields_ {

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
}  // namespace SDER_fields_

struct SDER : ftl::mmio::Register<
    0x40C3411Cu,
    0x00000000u,
    ftl::mmio::RW,
    SDER_fields_::TDDE,
    SDER_fields_::RDDE,
    SDER_fields_::AVDE,
    ftl::mmio::Reserved<29, 3>> {
  using eTDDE = SDER_fields_::eTDDE;
  using eRDDE = SDER_fields_::eRDDE;
  using eAVDE = SDER_fields_::eAVDE;
  using TDDE = SDER_fields_::TDDE;
  using RDDE = SDER_fields_::RDDE;
  using AVDE = SDER_fields_::AVDE;
};

// Slave Configuration 1
namespace SCFGR1_fields_ {

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
}  // namespace SCFGR1_fields_

struct SCFGR1 : ftl::mmio::Register<
    0x40C34124u,
    0x00000000u,
    ftl::mmio::RW,
    SCFGR1_fields_::ADRSTALL,
    SCFGR1_fields_::RXSTALL,
    SCFGR1_fields_::TXDSTALL,
    SCFGR1_fields_::ACKSTALL,
    ftl::mmio::Reserved<4, 4>,
    SCFGR1_fields_::GCEN,
    SCFGR1_fields_::SAEN,
    SCFGR1_fields_::TXCFG,
    SCFGR1_fields_::RXCFG,
    SCFGR1_fields_::IGNACK,
    SCFGR1_fields_::HSMEN,
    ftl::mmio::Reserved<2, 14>,
    SCFGR1_fields_::ADDRCFG,
    ftl::mmio::Reserved<13, 19>> {
  using eADRSTALL = SCFGR1_fields_::eADRSTALL;
  using eRXSTALL = SCFGR1_fields_::eRXSTALL;
  using eTXDSTALL = SCFGR1_fields_::eTXDSTALL;
  using eACKSTALL = SCFGR1_fields_::eACKSTALL;
  using eGCEN = SCFGR1_fields_::eGCEN;
  using eSAEN = SCFGR1_fields_::eSAEN;
  using eTXCFG = SCFGR1_fields_::eTXCFG;
  using eRXCFG = SCFGR1_fields_::eRXCFG;
  using eIGNACK = SCFGR1_fields_::eIGNACK;
  using eHSMEN = SCFGR1_fields_::eHSMEN;
  using eADDRCFG = SCFGR1_fields_::eADDRCFG;
  using ADRSTALL = SCFGR1_fields_::ADRSTALL;
  using RXSTALL = SCFGR1_fields_::RXSTALL;
  using TXDSTALL = SCFGR1_fields_::TXDSTALL;
  using ACKSTALL = SCFGR1_fields_::ACKSTALL;
  using GCEN = SCFGR1_fields_::GCEN;
  using SAEN = SCFGR1_fields_::SAEN;
  using TXCFG = SCFGR1_fields_::TXCFG;
  using RXCFG = SCFGR1_fields_::RXCFG;
  using IGNACK = SCFGR1_fields_::IGNACK;
  using HSMEN = SCFGR1_fields_::HSMEN;
  using ADDRCFG = SCFGR1_fields_::ADDRCFG;
};

// Slave Configuration 2
namespace SCFGR2_fields_ {
  // Clock Hold Time
  using CLKHOLD = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SCL
  using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SDA
  using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SCFGR2_fields_

struct SCFGR2 : ftl::mmio::Register<
    0x40C34128u,
    0x00000000u,
    ftl::mmio::RW,
    SCFGR2_fields_::CLKHOLD,
    ftl::mmio::Reserved<4, 4>,
    SCFGR2_fields_::DATAVD,
    ftl::mmio::Reserved<2, 14>,
    SCFGR2_fields_::FILTSCL,
    ftl::mmio::Reserved<4, 20>,
    SCFGR2_fields_::FILTSDA,
    ftl::mmio::Reserved<4, 28>> {
  using CLKHOLD = SCFGR2_fields_::CLKHOLD;
  using DATAVD = SCFGR2_fields_::DATAVD;
  using FILTSCL = SCFGR2_fields_::FILTSCL;
  using FILTSDA = SCFGR2_fields_::FILTSDA;
};

// Slave Address Match
namespace SAMR_fields_ {
  // Address 0 Value
  using ADDR0 = ftl::mmio::Field<10, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Address 1 Value
  using ADDR1 = ftl::mmio::Field<10, 17, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAMR_fields_

struct SAMR : ftl::mmio::Register<
    0x40C34140u,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SAMR_fields_::ADDR0,
    ftl::mmio::Reserved<6, 11>,
    SAMR_fields_::ADDR1,
    ftl::mmio::Reserved<5, 27>> {
  using ADDR0 = SAMR_fields_::ADDR0;
  using ADDR1 = SAMR_fields_::ADDR1;
};

// Slave Address Status
namespace SASR_fields_ {

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
}  // namespace SASR_fields_

struct SASR : ftl::mmio::Register<
    0x40C34150u,
    0x00004000u,
    ftl::mmio::RO,
    SASR_fields_::RADDR,
    ftl::mmio::Reserved<3, 11>,
    SASR_fields_::ANV,
    ftl::mmio::Reserved<17, 15>> {
  using eANV = SASR_fields_::eANV;
  using RADDR = SASR_fields_::RADDR;
  using ANV = SASR_fields_::ANV;
};

// Slave Transmit ACK
namespace STAR_fields_ {

  enum class eTXNACK : std::uint32_t {
    // Write a Transmit ACK for each received word
    eTRANSMIT_ACK = 0,
    // Write a Transmit NACK for each received word
    eTRANSMIT_NACK = 1,
  };
  // Transmit NACK
  using TXNACK = ftl::mmio::Field<1, 0, eTXNACK, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace STAR_fields_

struct STAR : ftl::mmio::Register<
    0x40C34154u,
    0x00000000u,
    ftl::mmio::RW,
    STAR_fields_::TXNACK,
    ftl::mmio::Reserved<31, 1>> {
  using eTXNACK = STAR_fields_::eTXNACK;
  using TXNACK = STAR_fields_::TXNACK;
};

// Slave Transmit Data
namespace STDR_fields_ {
  // Transmit Data
  using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
}  // namespace STDR_fields_

struct STDR : ftl::mmio::Register<
    0x40C34160u,
    0x00000000u,
    ftl::mmio::WO,
    STDR_fields_::DATA,
    ftl::mmio::Reserved<24, 8>> {
  using DATA = STDR_fields_::DATA;
};

// Slave Receive Data
namespace SRDR_fields_ {

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
}  // namespace SRDR_fields_

struct SRDR : ftl::mmio::Register<
    0x40C34170u,
    0x00004000u,
    ftl::mmio::RO,
    SRDR_fields_::DATA,
    ftl::mmio::Reserved<6, 8>,
    SRDR_fields_::RXEMPTY,
    SRDR_fields_::SOF,
    ftl::mmio::Reserved<16, 16>> {
  using eRXEMPTY = SRDR_fields_::eRXEMPTY;
  using eSOF = SRDR_fields_::eSOF;
  using DATA = SRDR_fields_::DATA;
  using RXEMPTY = SRDR_fields_::RXEMPTY;
  using SOF = SRDR_fields_::SOF;
};

}  // namespace regs::lpi2c5