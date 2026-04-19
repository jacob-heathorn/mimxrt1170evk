#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LPI2C
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::lpi2c5 {

// Version ID
namespace VERID_Fields {

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
}  // namespace VERID_Fields

using VERID = ftl::mmio::Register<
    0x40C34000u,
    0x01010003u,
    ftl::mmio::RO,
    VERID_Fields::FEATURE,
    VERID_Fields::MINOR,
    VERID_Fields::MAJOR>;

// Parameter
namespace PARAM_Fields {
  // Master Transmit FIFO Size
  using MTXFIFO = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Master Receive FIFO Size
  using MRXFIFO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace PARAM_Fields

using PARAM = ftl::mmio::Register<
    0x40C34004u,
    0x00000202u,
    ftl::mmio::RO,
    PARAM_Fields::MTXFIFO,
    ftl::mmio::Reserved<4, 4>,
    PARAM_Fields::MRXFIFO,
    ftl::mmio::Reserved<20, 12>>;

// Master Control
namespace MCR_Fields {

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
}  // namespace MCR_Fields

using MCR = ftl::mmio::Register<
    0x40C34010u,
    0x00000000u,
    ftl::mmio::RW,
    MCR_Fields::MEN,
    MCR_Fields::RST,
    MCR_Fields::DOZEN,
    MCR_Fields::DBGEN,
    ftl::mmio::Reserved<4, 4>,
    MCR_Fields::RTF,
    MCR_Fields::RRF,
    ftl::mmio::Reserved<22, 10>>;

// Master Status
namespace MSR_Fields {

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
}  // namespace MSR_Fields

using MSR = ftl::mmio::Register<
    0x40C34014u,
    0x00000001u,
    ftl::mmio::RW,
    MSR_Fields::TDF,
    MSR_Fields::RDF,
    ftl::mmio::Reserved<6, 2>,
    MSR_Fields::EPF,
    MSR_Fields::SDF,
    MSR_Fields::NDF,
    MSR_Fields::ALF,
    MSR_Fields::FEF,
    MSR_Fields::PLTF,
    MSR_Fields::DMF,
    ftl::mmio::Reserved<9, 15>,
    MSR_Fields::MBF,
    MSR_Fields::BBF,
    ftl::mmio::Reserved<6, 26>>;

// Master Interrupt Enable
namespace MIER_Fields {

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
}  // namespace MIER_Fields

using MIER = ftl::mmio::Register<
    0x40C34018u,
    0x00000000u,
    ftl::mmio::RW,
    MIER_Fields::TDIE,
    MIER_Fields::RDIE,
    ftl::mmio::Reserved<6, 2>,
    MIER_Fields::EPIE,
    MIER_Fields::SDIE,
    MIER_Fields::NDIE,
    MIER_Fields::ALIE,
    MIER_Fields::FEIE,
    MIER_Fields::PLTIE,
    MIER_Fields::DMIE,
    ftl::mmio::Reserved<17, 15>>;

// Master DMA Enable
namespace MDER_Fields {

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
}  // namespace MDER_Fields

using MDER = ftl::mmio::Register<
    0x40C3401Cu,
    0x00000000u,
    ftl::mmio::RW,
    MDER_Fields::TDDE,
    MDER_Fields::RDDE,
    ftl::mmio::Reserved<30, 2>>;

// Master Configuration 0
namespace MCFGR0_Fields {

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
}  // namespace MCFGR0_Fields

using MCFGR0 = ftl::mmio::Register<
    0x40C34020u,
    0x00000000u,
    ftl::mmio::RW,
    MCFGR0_Fields::HREN,
    MCFGR0_Fields::HRPOL,
    MCFGR0_Fields::HRSEL,
    ftl::mmio::Reserved<5, 3>,
    MCFGR0_Fields::CIRFIFO,
    MCFGR0_Fields::RDMO,
    ftl::mmio::Reserved<22, 10>>;

// Master Configuration 1
namespace MCFGR1_Fields {

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
}  // namespace MCFGR1_Fields

using MCFGR1 = ftl::mmio::Register<
    0x40C34024u,
    0x00000000u,
    ftl::mmio::RW,
    MCFGR1_Fields::PRESCALE,
    ftl::mmio::Reserved<5, 3>,
    MCFGR1_Fields::AUTOSTOP,
    MCFGR1_Fields::IGNACK,
    MCFGR1_Fields::TIMECFG,
    ftl::mmio::Reserved<5, 11>,
    MCFGR1_Fields::MATCFG,
    ftl::mmio::Reserved<5, 19>,
    MCFGR1_Fields::PINCFG,
    ftl::mmio::Reserved<5, 27>>;

// Master Configuration 2
namespace MCFGR2_Fields {
  // Bus Idle Timeout
  using BUSIDLE = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SCL
  using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SDA
  using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCFGR2_Fields

using MCFGR2 = ftl::mmio::Register<
    0x40C34028u,
    0x00000000u,
    ftl::mmio::RW,
    MCFGR2_Fields::BUSIDLE,
    ftl::mmio::Reserved<4, 12>,
    MCFGR2_Fields::FILTSCL,
    ftl::mmio::Reserved<4, 20>,
    MCFGR2_Fields::FILTSDA,
    ftl::mmio::Reserved<4, 28>>;

// Master Configuration 3
namespace MCFGR3_Fields {
  // Pin Low Timeout
  using PINLOW = ftl::mmio::Field<12, 8, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCFGR3_Fields

using MCFGR3 = ftl::mmio::Register<
    0x40C3402Cu,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<8, 0>,
    MCFGR3_Fields::PINLOW,
    ftl::mmio::Reserved<12, 20>>;

// Master Data Match
namespace MDMR_Fields {
  // Match 0 Value
  using MATCH0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match 1 Value
  using MATCH1 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MDMR_Fields

using MDMR = ftl::mmio::Register<
    0x40C34040u,
    0x00000000u,
    ftl::mmio::RW,
    MDMR_Fields::MATCH0,
    ftl::mmio::Reserved<8, 8>,
    MDMR_Fields::MATCH1,
    ftl::mmio::Reserved<8, 24>>;

// Master Clock Configuration 0
namespace MCCR0_Fields {
  // Clock Low Period
  using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock High Period
  using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Setup Hold Delay
  using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCCR0_Fields

using MCCR0 = ftl::mmio::Register<
    0x40C34048u,
    0x00000000u,
    ftl::mmio::RW,
    MCCR0_Fields::CLKLO,
    ftl::mmio::Reserved<2, 6>,
    MCCR0_Fields::CLKHI,
    ftl::mmio::Reserved<2, 14>,
    MCCR0_Fields::SETHOLD,
    ftl::mmio::Reserved<2, 22>,
    MCCR0_Fields::DATAVD,
    ftl::mmio::Reserved<2, 30>>;

// Master Clock Configuration 1
namespace MCCR1_Fields {
  // Clock Low Period
  using CLKLO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock High Period
  using CLKHI = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Setup Hold Delay
  using SETHOLD = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MCCR1_Fields

using MCCR1 = ftl::mmio::Register<
    0x40C34050u,
    0x00000000u,
    ftl::mmio::RW,
    MCCR1_Fields::CLKLO,
    ftl::mmio::Reserved<2, 6>,
    MCCR1_Fields::CLKHI,
    ftl::mmio::Reserved<2, 14>,
    MCCR1_Fields::SETHOLD,
    ftl::mmio::Reserved<2, 22>,
    MCCR1_Fields::DATAVD,
    ftl::mmio::Reserved<2, 30>>;

// Master FIFO Control
namespace MFCR_Fields {
  // Transmit FIFO Watermark
  using TXWATER = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive FIFO Watermark
  using RXWATER = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MFCR_Fields

using MFCR = ftl::mmio::Register<
    0x40C34058u,
    0x00000000u,
    ftl::mmio::RW,
    MFCR_Fields::TXWATER,
    ftl::mmio::Reserved<14, 2>,
    MFCR_Fields::RXWATER,
    ftl::mmio::Reserved<14, 18>>;

// Master FIFO Status
namespace MFSR_Fields {
  // Transmit FIFO Count
  using TXCOUNT = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive FIFO Count
  using RXCOUNT = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace MFSR_Fields

using MFSR = ftl::mmio::Register<
    0x40C3405Cu,
    0x00000000u,
    ftl::mmio::RO,
    MFSR_Fields::TXCOUNT,
    ftl::mmio::Reserved<13, 3>,
    MFSR_Fields::RXCOUNT,
    ftl::mmio::Reserved<13, 19>>;

// Master Transmit Data
namespace MTDR_Fields {

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
}  // namespace MTDR_Fields

using MTDR = ftl::mmio::Register<
    0x40C34060u,
    0x00000000u,
    ftl::mmio::WO,
    MTDR_Fields::DATA,
    MTDR_Fields::CMD,
    ftl::mmio::Reserved<21, 11>>;

// Master Receive Data
namespace MRDR_Fields {

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
}  // namespace MRDR_Fields

using MRDR = ftl::mmio::Register<
    0x40C34070u,
    0x00004000u,
    ftl::mmio::RO,
    MRDR_Fields::DATA,
    ftl::mmio::Reserved<6, 8>,
    MRDR_Fields::RXEMPTY,
    ftl::mmio::Reserved<17, 15>>;

// Slave Control
namespace SCR_Fields {

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
}  // namespace SCR_Fields

using SCR = ftl::mmio::Register<
    0x40C34110u,
    0x00000000u,
    ftl::mmio::RW,
    SCR_Fields::SEN,
    SCR_Fields::RST,
    ftl::mmio::Reserved<2, 2>,
    SCR_Fields::FILTEN,
    SCR_Fields::FILTDZ,
    ftl::mmio::Reserved<2, 6>,
    SCR_Fields::RTF,
    SCR_Fields::RRF,
    ftl::mmio::Reserved<22, 10>>;

// Slave Status
namespace SSR_Fields {

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
}  // namespace SSR_Fields

using SSR = ftl::mmio::Register<
    0x40C34114u,
    0x00000000u,
    ftl::mmio::RW,
    SSR_Fields::TDF,
    SSR_Fields::RDF,
    SSR_Fields::AVF,
    SSR_Fields::TAF,
    ftl::mmio::Reserved<4, 4>,
    SSR_Fields::RSF,
    SSR_Fields::SDF,
    SSR_Fields::BEF,
    SSR_Fields::FEF,
    SSR_Fields::AM0F,
    SSR_Fields::AM1F,
    SSR_Fields::GCF,
    SSR_Fields::SARF,
    ftl::mmio::Reserved<8, 16>,
    SSR_Fields::SBF,
    SSR_Fields::BBF,
    ftl::mmio::Reserved<6, 26>>;

// Slave Interrupt Enable
namespace SIER_Fields {

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
}  // namespace SIER_Fields

using SIER = ftl::mmio::Register<
    0x40C34118u,
    0x00000000u,
    ftl::mmio::RW,
    SIER_Fields::TDIE,
    SIER_Fields::RDIE,
    SIER_Fields::AVIE,
    SIER_Fields::TAIE,
    ftl::mmio::Reserved<4, 4>,
    SIER_Fields::RSIE,
    SIER_Fields::SDIE,
    SIER_Fields::BEIE,
    SIER_Fields::FEIE,
    SIER_Fields::AM0IE,
    SIER_Fields::AM1IE,
    SIER_Fields::GCIE,
    SIER_Fields::SARIE,
    ftl::mmio::Reserved<16, 16>>;

// Slave DMA Enable
namespace SDER_Fields {

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
}  // namespace SDER_Fields

using SDER = ftl::mmio::Register<
    0x40C3411Cu,
    0x00000000u,
    ftl::mmio::RW,
    SDER_Fields::TDDE,
    SDER_Fields::RDDE,
    SDER_Fields::AVDE,
    ftl::mmio::Reserved<29, 3>>;

// Slave Configuration 1
namespace SCFGR1_Fields {

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
}  // namespace SCFGR1_Fields

using SCFGR1 = ftl::mmio::Register<
    0x40C34124u,
    0x00000000u,
    ftl::mmio::RW,
    SCFGR1_Fields::ADRSTALL,
    SCFGR1_Fields::RXSTALL,
    SCFGR1_Fields::TXDSTALL,
    SCFGR1_Fields::ACKSTALL,
    ftl::mmio::Reserved<4, 4>,
    SCFGR1_Fields::GCEN,
    SCFGR1_Fields::SAEN,
    SCFGR1_Fields::TXCFG,
    SCFGR1_Fields::RXCFG,
    SCFGR1_Fields::IGNACK,
    SCFGR1_Fields::HSMEN,
    ftl::mmio::Reserved<2, 14>,
    SCFGR1_Fields::ADDRCFG,
    ftl::mmio::Reserved<13, 19>>;

// Slave Configuration 2
namespace SCFGR2_Fields {
  // Clock Hold Time
  using CLKHOLD = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Data Valid Delay
  using DATAVD = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SCL
  using FILTSCL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Glitch Filter SDA
  using FILTSDA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SCFGR2_Fields

using SCFGR2 = ftl::mmio::Register<
    0x40C34128u,
    0x00000000u,
    ftl::mmio::RW,
    SCFGR2_Fields::CLKHOLD,
    ftl::mmio::Reserved<4, 4>,
    SCFGR2_Fields::DATAVD,
    ftl::mmio::Reserved<2, 14>,
    SCFGR2_Fields::FILTSCL,
    ftl::mmio::Reserved<4, 20>,
    SCFGR2_Fields::FILTSDA,
    ftl::mmio::Reserved<4, 28>>;

// Slave Address Match
namespace SAMR_Fields {
  // Address 0 Value
  using ADDR0 = ftl::mmio::Field<10, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Address 1 Value
  using ADDR1 = ftl::mmio::Field<10, 17, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAMR_Fields

using SAMR = ftl::mmio::Register<
    0x40C34140u,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SAMR_Fields::ADDR0,
    ftl::mmio::Reserved<6, 11>,
    SAMR_Fields::ADDR1,
    ftl::mmio::Reserved<5, 27>>;

// Slave Address Status
namespace SASR_Fields {

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
}  // namespace SASR_Fields

using SASR = ftl::mmio::Register<
    0x40C34150u,
    0x00004000u,
    ftl::mmio::RO,
    SASR_Fields::RADDR,
    ftl::mmio::Reserved<3, 11>,
    SASR_Fields::ANV,
    ftl::mmio::Reserved<17, 15>>;

// Slave Transmit ACK
namespace STAR_Fields {

  enum class eTXNACK : std::uint32_t {
    // Write a Transmit ACK for each received word
    eTRANSMIT_ACK = 0,
    // Write a Transmit NACK for each received word
    eTRANSMIT_NACK = 1,
  };
  // Transmit NACK
  using TXNACK = ftl::mmio::Field<1, 0, eTXNACK, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace STAR_Fields

using STAR = ftl::mmio::Register<
    0x40C34154u,
    0x00000000u,
    ftl::mmio::RW,
    STAR_Fields::TXNACK,
    ftl::mmio::Reserved<31, 1>>;

// Slave Transmit Data
namespace STDR_Fields {
  // Transmit Data
  using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
}  // namespace STDR_Fields

using STDR = ftl::mmio::Register<
    0x40C34160u,
    0x00000000u,
    ftl::mmio::WO,
    STDR_Fields::DATA,
    ftl::mmio::Reserved<24, 8>>;

// Slave Receive Data
namespace SRDR_Fields {

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
}  // namespace SRDR_Fields

using SRDR = ftl::mmio::Register<
    0x40C34170u,
    0x00004000u,
    ftl::mmio::RO,
    SRDR_Fields::DATA,
    ftl::mmio::Reserved<6, 8>,
    SRDR_Fields::RXEMPTY,
    SRDR_Fields::SOF,
    ftl::mmio::Reserved<16, 16>>;

}  // namespace regs::lpi2c5