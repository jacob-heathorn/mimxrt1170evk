#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LPUART
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::lpuart1 {

// Version ID Register
namespace VERID_fields_ {

  enum class eFEATURE : std::uint32_t {
    // Standard feature set.
    eSTANDARD = 1,
    // Standard feature set with MODEM/IrDA support.
    eMODEM = 3,
  };
  // Feature Identification Number
  using FEATURE = ftl::mmio::Field<16, 0, eFEATURE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Minor Version Number
  using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Major Version Number
  using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace VERID_fields_

struct VERID : ftl::mmio::Register<
    0x4007C000u,
    std::uint32_t,
    0x04010003u,
    ftl::mmio::RO,
    VERID_fields_::FEATURE,
    VERID_fields_::MINOR,
    VERID_fields_::MAJOR> {
  using eFEATURE = VERID_fields_::eFEATURE;
  using FEATURE = VERID_fields_::FEATURE;
  using MINOR = VERID_fields_::MINOR;
  using MAJOR = VERID_fields_::MAJOR;
};

// Parameter Register
namespace PARAM_fields_ {
  // Transmit FIFO Size
  using TXFIFO = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive FIFO Size
  using RXFIFO = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace PARAM_fields_

struct PARAM : ftl::mmio::Register<
    0x4007C004u,
    std::uint32_t,
    0x00000202u,
    ftl::mmio::RO,
    PARAM_fields_::TXFIFO,
    PARAM_fields_::RXFIFO,
    ftl::mmio::Reserved<16, 16>> {
  using TXFIFO = PARAM_fields_::TXFIFO;
  using RXFIFO = PARAM_fields_::RXFIFO;
};

// LPUART Global Register
namespace GLOBAL_fields_ {

  enum class eRST : std::uint32_t {
    // Module is not reset.
    eNO_EFFECT = 0,
    // Module is reset.
    eRESET = 1,
  };
  // Software Reset
  using RST = ftl::mmio::Field<1, 1, eRST, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace GLOBAL_fields_

struct GLOBAL : ftl::mmio::Register<
    0x4007C008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    GLOBAL_fields_::RST,
    ftl::mmio::Reserved<30, 2>> {
  using eRST = GLOBAL_fields_::eRST;
  using RST = GLOBAL_fields_::RST;
};

// LPUART Pin Configuration Register
namespace PINCFG_fields_ {

  enum class eTRGSEL : std::uint32_t {
    // Input trigger is disabled.
    eDISABLED = 0,
    // Input trigger is used instead of RXD pin input.
    eTRG_RXD = 1,
    // Input trigger is used instead of CTS_B pin input.
    eTRG_CTS = 2,
    // Input trigger is used to modulate the TXD pin output. The TXD pin output (after TXINV configuration) is internally ANDed with the input trigger.
    eTRG_TXD = 3,
  };
  // Trigger Select
  using TRGSEL = ftl::mmio::Field<2, 0, eTRGSEL, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace PINCFG_fields_

struct PINCFG : ftl::mmio::Register<
    0x4007C00Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PINCFG_fields_::TRGSEL,
    ftl::mmio::Reserved<30, 2>> {
  using eTRGSEL = PINCFG_fields_::eTRGSEL;
  using TRGSEL = PINCFG_fields_::TRGSEL;
};

// LPUART Baud Rate Register
namespace BAUD_fields_ {

  enum class eSBNS : std::uint32_t {
    // One stop bit.
    eONE = 0,
    // Two stop bits.
    eTWO = 1,
  };

  enum class eRXEDGIE : std::uint32_t {
    // Hardware interrupts from STAT[RXEDGIF] are disabled.
    eDISABLE = 0,
    // Hardware interrupt is requested when STAT[RXEDGIF] flag is 1.
    eENABLE = 1,
  };

  enum class eLBKDIE : std::uint32_t {
    // Hardware interrupts from STAT[LBKDIF] flag are disabled (use polling).
    eDISABLE = 0,
    // Hardware interrupt is requested when STAT[LBKDIF] flag is 1.
    eENABLE = 1,
  };

  enum class eRESYNCDIS : std::uint32_t {
    // Resynchronization during received data word is supported.
    eRESYNC = 0,
    // Resynchronization during received data word is disabled.
    eNO_RESYNC = 1,
  };

  enum class eBOTHEDGE : std::uint32_t {
    // Receiver samples input data using the rising edge of the baud rate clock.
    eDISABLED = 0,
    // Receiver samples input data using the rising and falling edge of the baud rate clock.
    eENABLED = 1,
  };

  enum class eMATCFG : std::uint32_t {
    // Address Match Wakeup
    eADDR_MATCH = 0,
    // Idle Match Wakeup
    eIDLE_MATCH = 1,
    // Match On and Match Off
    eONOFF_MATCH = 2,
    // Enables RWU on Data Match and Match On/Off for transmitter CTS input
    eRWU_MATCH = 3,
  };

  enum class eRDMAE : std::uint32_t {
    // DMA request disabled.
    eDISABLED = 0,
    // DMA request enabled.
    eENABLED = 1,
  };

  enum class eTDMAE : std::uint32_t {
    // DMA request disabled.
    eDISABLED = 0,
    // DMA request enabled.
    eENABLED = 1,
  };

  enum class eOSR : std::uint32_t {
    // Writing 0 to this field results in an oversampling ratio of 16
    eDEFAULT = 0,
    // Oversampling ratio of 4, requires BOTHEDGE to be set.
    eOSR_4 = 3,
    // Oversampling ratio of 5, requires BOTHEDGE to be set.
    eOSR_5 = 4,
    // Oversampling ratio of 6, requires BOTHEDGE to be set.
    eOSR_6 = 5,
    // Oversampling ratio of 7, requires BOTHEDGE to be set.
    eOSR_7 = 6,
    // Oversampling ratio of 8.
    eOSR_8 = 7,
    // Oversampling ratio of 9.
    eOSR_9 = 8,
    // Oversampling ratio of 10.
    eOSR_10 = 9,
    // Oversampling ratio of 11.
    eOSR_11 = 10,
    // Oversampling ratio of 12.
    eOSR_12 = 11,
    // Oversampling ratio of 13.
    eOSR_13 = 12,
    // Oversampling ratio of 14.
    eOSR_14 = 13,
    // Oversampling ratio of 15.
    eOSR_15 = 14,
    // Oversampling ratio of 16.
    eOSR_16 = 15,
    // Oversampling ratio of 17.
    eOSR_17 = 16,
    // Oversampling ratio of 18.
    eOSR_18 = 17,
    // Oversampling ratio of 19.
    eOSR_19 = 18,
    // Oversampling ratio of 20.
    eOSR_20 = 19,
    // Oversampling ratio of 21.
    eOSR_21 = 20,
    // Oversampling ratio of 22.
    eOSR_22 = 21,
    // Oversampling ratio of 23.
    eOSR_23 = 22,
    // Oversampling ratio of 24.
    eOSR_24 = 23,
    // Oversampling ratio of 25.
    eOSR_25 = 24,
    // Oversampling ratio of 26.
    eOSR_26 = 25,
    // Oversampling ratio of 27.
    eOSR_27 = 26,
    // Oversampling ratio of 28.
    eOSR_28 = 27,
    // Oversampling ratio of 29.
    eOSR_29 = 28,
    // Oversampling ratio of 30.
    eOSR_30 = 29,
    // Oversampling ratio of 31.
    eOSR_31 = 30,
    // Oversampling ratio of 32.
    eOSR_32 = 31,
  };

  enum class eM10 : std::uint32_t {
    // Receiver and transmitter use 7-bit to 9-bit data characters.
    eDISABLED = 0,
    // Receiver and transmitter use 10-bit data characters.
    eENABLED = 1,
  };

  enum class eMAEN2 : std::uint32_t {
    // Normal operation.
    eDISABLED = 0,
    // Enables automatic address matching or data matching mode for MATCH[MA2].
    eENABLED = 1,
  };

  enum class eMAEN1 : std::uint32_t {
    // Normal operation.
    eDISABLED = 0,
    // Enables automatic address matching or data matching mode for MATCH[MA1].
    eENABLED = 1,
  };
  // Baud Rate Modulo Divisor.
  using SBR = ftl::mmio::Field<13, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Stop Bit Number Select
  using SBNS = ftl::mmio::Field<1, 13, eSBNS, ftl::mmio::RW, ftl::mmio::Normal>;
  // RX Input Active Edge Interrupt Enable
  using RXEDGIE = ftl::mmio::Field<1, 14, eRXEDGIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LIN Break Detect Interrupt Enable
  using LBKDIE = ftl::mmio::Field<1, 15, eLBKDIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Resynchronization Disable
  using RESYNCDIS = ftl::mmio::Field<1, 16, eRESYNCDIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Both Edge Sampling
  using BOTHEDGE = ftl::mmio::Field<1, 17, eBOTHEDGE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match Configuration
  using MATCFG = ftl::mmio::Field<2, 18, eMATCFG, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Full DMA Enable
  using RDMAE = ftl::mmio::Field<1, 21, eRDMAE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmitter DMA Enable
  using TDMAE = ftl::mmio::Field<1, 23, eTDMAE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Oversampling Ratio
  using OSR = ftl::mmio::Field<5, 24, eOSR, ftl::mmio::RW, ftl::mmio::Normal>;
  // 10-bit Mode select
  using M10 = ftl::mmio::Field<1, 29, eM10, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match Address Mode Enable 2
  using MAEN2 = ftl::mmio::Field<1, 30, eMAEN2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match Address Mode Enable 1
  using MAEN1 = ftl::mmio::Field<1, 31, eMAEN1, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace BAUD_fields_

struct BAUD : ftl::mmio::Register<
    0x4007C010u,
    std::uint32_t,
    0x0F000004u,
    ftl::mmio::RW,
    BAUD_fields_::SBR,
    BAUD_fields_::SBNS,
    BAUD_fields_::RXEDGIE,
    BAUD_fields_::LBKDIE,
    BAUD_fields_::RESYNCDIS,
    BAUD_fields_::BOTHEDGE,
    BAUD_fields_::MATCFG,
    ftl::mmio::Reserved<1, 20>,
    BAUD_fields_::RDMAE,
    ftl::mmio::Reserved<1, 22>,
    BAUD_fields_::TDMAE,
    BAUD_fields_::OSR,
    BAUD_fields_::M10,
    BAUD_fields_::MAEN2,
    BAUD_fields_::MAEN1> {
  using eSBNS = BAUD_fields_::eSBNS;
  using eRXEDGIE = BAUD_fields_::eRXEDGIE;
  using eLBKDIE = BAUD_fields_::eLBKDIE;
  using eRESYNCDIS = BAUD_fields_::eRESYNCDIS;
  using eBOTHEDGE = BAUD_fields_::eBOTHEDGE;
  using eMATCFG = BAUD_fields_::eMATCFG;
  using eRDMAE = BAUD_fields_::eRDMAE;
  using eTDMAE = BAUD_fields_::eTDMAE;
  using eOSR = BAUD_fields_::eOSR;
  using eM10 = BAUD_fields_::eM10;
  using eMAEN2 = BAUD_fields_::eMAEN2;
  using eMAEN1 = BAUD_fields_::eMAEN1;
  using SBR = BAUD_fields_::SBR;
  using SBNS = BAUD_fields_::SBNS;
  using RXEDGIE = BAUD_fields_::RXEDGIE;
  using LBKDIE = BAUD_fields_::LBKDIE;
  using RESYNCDIS = BAUD_fields_::RESYNCDIS;
  using BOTHEDGE = BAUD_fields_::BOTHEDGE;
  using MATCFG = BAUD_fields_::MATCFG;
  using RDMAE = BAUD_fields_::RDMAE;
  using TDMAE = BAUD_fields_::TDMAE;
  using OSR = BAUD_fields_::OSR;
  using M10 = BAUD_fields_::M10;
  using MAEN2 = BAUD_fields_::MAEN2;
  using MAEN1 = BAUD_fields_::MAEN1;
};

// LPUART Status Register
namespace STAT_fields_ {

  enum class eMA2F : std::uint32_t {
    // Received data is not equal to MA2
    eNOMATCH = 0,
    // Received data is equal to MA2
    eMATCH = 1,
  };

  enum class eMA1F : std::uint32_t {
    // Received data is not equal to MA1
    eNOMATCH = 0,
    // Received data is equal to MA1
    eMATCH = 1,
  };

  enum class ePF : std::uint32_t {
    // No parity error.
    eNOPARITY = 0,
    // Parity error.
    ePARITY = 1,
  };

  enum class eFE : std::uint32_t {
    // No framing error detected. This does not guarantee the framing is correct.
    eNOERROR = 0,
    // Framing error.
    eERROR = 1,
  };

  enum class eNF : std::uint32_t {
    // No noise detected.
    eNONOISE = 0,
    // Noise detected in the received character in the DATA register.
    eNOISE = 1,
  };

  enum class eOR : std::uint32_t {
    // No overrun.
    eNO_OVERRUN = 0,
    // Receive overrun (new LPUART data lost).
    eOVERRUN = 1,
  };

  enum class eIDLE : std::uint32_t {
    // No idle line detected.
    eNOIDLE = 0,
    // Idle line is detected.
    eIDLE = 1,
  };

  enum class eRDRF : std::uint32_t {
    // Receive FIFO level is less than watermark.
    eNO_RXDATA = 0,
    // Receive FIFO level is equal or greater than watermark.
    eRXDATA = 1,
  };

  enum class eTC : std::uint32_t {
    // Transmitter active (sending data, a preamble, or a break).
    eACTIVE = 0,
    // Transmitter idle (transmission activity complete).
    eCOMPLETE = 1,
  };

  enum class eTDRE : std::uint32_t {
    // Transmit FIFO level is greater than watermark.
    eTXDATA = 0,
    // Transmit FIFO level is equal or less than watermark.
    eNO_TXDATA = 1,
  };

  enum class eRAF : std::uint32_t {
    // LPUART receiver idle waiting for a start bit.
    eIDLE = 0,
    // LPUART receiver active (RXD input not idle).
    eACTIVE = 1,
  };

  enum class eLBKDE : std::uint32_t {
    // LIN break detect is disabled, normal break character can be detected.
    eDISABLED = 0,
    // LIN break detect is enabled. LIN break character is detected at length of 11 bit times (if M = 0) or 12 (if M = 1) or 13 (M10 = 1).
    eENABLED = 1,
  };

  enum class eBRK13 : std::uint32_t {
    // Break character is transmitted with length of 9 to 13 bit times.
    eSHORT = 0,
    // Break character is transmitted with length of 12 to 15 bit times.
    eLONG = 1,
  };

  enum class eRWUID : std::uint32_t {
    // During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character. During address match wakeup, the IDLE bit does not set when an address does not match.
    eIDLE_NOTSET = 0,
    // During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character. During address match wakeup, the IDLE bit does set when an address does not match.
    eIDLE_SET = 1,
  };

  enum class eRXINV : std::uint32_t {
    // Receive data not inverted.
    eNOT_INVERTED = 0,
    // Receive data inverted.
    eINVERTED = 1,
  };

  enum class eMSBF : std::uint32_t {
    // LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
    eLSB_FIRST = 0,
    // MSB (identified as bit9, bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of CTRL[M], CTRL[PE] and BAUD[M10]. .
    eMSB_FIRST = 1,
  };

  enum class eRXEDGIF : std::uint32_t {
    // No active edge on the receive pin has occurred.
    eNO_EDGE = 0,
    // An active edge on the receive pin has occurred.
    eEDGE = 1,
  };

  enum class eLBKDIF : std::uint32_t {
    // No LIN break character has been detected.
    eNOT_DETECTED = 0,
    // LIN break character has been detected.
    eDETECTED = 1,
  };
  // Match 2 Flag
  using MA2F = ftl::mmio::Field<1, 14, eMA2F, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Match 1 Flag
  using MA1F = ftl::mmio::Field<1, 15, eMA1F, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Parity Error Flag
  using PF = ftl::mmio::Field<1, 16, ePF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Framing Error Flag
  using FE = ftl::mmio::Field<1, 17, eFE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Noise Flag
  using NF = ftl::mmio::Field<1, 18, eNF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receiver Overrun Flag
  using OR = ftl::mmio::Field<1, 19, eOR, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Idle Line Flag
  using IDLE = ftl::mmio::Field<1, 20, eIDLE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receive Data Register Full Flag
  using RDRF = ftl::mmio::Field<1, 21, eRDRF, ftl::mmio::RO, ftl::mmio::Normal>;
  // Transmission Complete Flag
  using TC = ftl::mmio::Field<1, 22, eTC, ftl::mmio::RO, ftl::mmio::Normal>;
  // Transmit Data Register Empty Flag
  using TDRE = ftl::mmio::Field<1, 23, eTDRE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receiver Active Flag
  using RAF = ftl::mmio::Field<1, 24, eRAF, ftl::mmio::RO, ftl::mmio::Normal>;
  // LIN Break Detection Enable
  using LBKDE = ftl::mmio::Field<1, 25, eLBKDE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Break Character Generation Length
  using BRK13 = ftl::mmio::Field<1, 26, eBRK13, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive Wake Up Idle Detect
  using RWUID = ftl::mmio::Field<1, 27, eRWUID, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive Data Inversion
  using RXINV = ftl::mmio::Field<1, 28, eRXINV, ftl::mmio::RW, ftl::mmio::Normal>;
  // MSB First
  using MSBF = ftl::mmio::Field<1, 29, eMSBF, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD Pin Active Edge Interrupt Flag
  using RXEDGIF = ftl::mmio::Field<1, 30, eRXEDGIF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // LIN Break Detect Interrupt Flag
  using LBKDIF = ftl::mmio::Field<1, 31, eLBKDIF, ftl::mmio::RW, ftl::mmio::OneToClear>;
}  // namespace STAT_fields_

struct STAT : ftl::mmio::Register<
    0x4007C014u,
    std::uint32_t,
    0x00C00000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<14, 0>,
    STAT_fields_::MA2F,
    STAT_fields_::MA1F,
    STAT_fields_::PF,
    STAT_fields_::FE,
    STAT_fields_::NF,
    STAT_fields_::OR,
    STAT_fields_::IDLE,
    STAT_fields_::RDRF,
    STAT_fields_::TC,
    STAT_fields_::TDRE,
    STAT_fields_::RAF,
    STAT_fields_::LBKDE,
    STAT_fields_::BRK13,
    STAT_fields_::RWUID,
    STAT_fields_::RXINV,
    STAT_fields_::MSBF,
    STAT_fields_::RXEDGIF,
    STAT_fields_::LBKDIF> {
  using eMA2F = STAT_fields_::eMA2F;
  using eMA1F = STAT_fields_::eMA1F;
  using ePF = STAT_fields_::ePF;
  using eFE = STAT_fields_::eFE;
  using eNF = STAT_fields_::eNF;
  using eOR = STAT_fields_::eOR;
  using eIDLE = STAT_fields_::eIDLE;
  using eRDRF = STAT_fields_::eRDRF;
  using eTC = STAT_fields_::eTC;
  using eTDRE = STAT_fields_::eTDRE;
  using eRAF = STAT_fields_::eRAF;
  using eLBKDE = STAT_fields_::eLBKDE;
  using eBRK13 = STAT_fields_::eBRK13;
  using eRWUID = STAT_fields_::eRWUID;
  using eRXINV = STAT_fields_::eRXINV;
  using eMSBF = STAT_fields_::eMSBF;
  using eRXEDGIF = STAT_fields_::eRXEDGIF;
  using eLBKDIF = STAT_fields_::eLBKDIF;
  using MA2F = STAT_fields_::MA2F;
  using MA1F = STAT_fields_::MA1F;
  using PF = STAT_fields_::PF;
  using FE = STAT_fields_::FE;
  using NF = STAT_fields_::NF;
  using OR = STAT_fields_::OR;
  using IDLE = STAT_fields_::IDLE;
  using RDRF = STAT_fields_::RDRF;
  using TC = STAT_fields_::TC;
  using TDRE = STAT_fields_::TDRE;
  using RAF = STAT_fields_::RAF;
  using LBKDE = STAT_fields_::LBKDE;
  using BRK13 = STAT_fields_::BRK13;
  using RWUID = STAT_fields_::RWUID;
  using RXINV = STAT_fields_::RXINV;
  using MSBF = STAT_fields_::MSBF;
  using RXEDGIF = STAT_fields_::RXEDGIF;
  using LBKDIF = STAT_fields_::LBKDIF;
};

// LPUART Control Register
namespace CTRL_fields_ {

  enum class ePT : std::uint32_t {
    // Even parity.
    eEVEN = 0,
    // Odd parity.
    eODD = 1,
  };

  enum class ePE : std::uint32_t {
    // No hardware parity generation or checking.
    eDISABLED = 0,
    // Parity enabled.
    eENABLED = 1,
  };

  enum class eILT : std::uint32_t {
    // Idle character bit count starts after start bit.
    eFROM_START = 0,
    // Idle character bit count starts after stop bit.
    eFROM_STOP = 1,
  };

  enum class eWAKE : std::uint32_t {
    // Configures RWU for idle-line wakeup.
    eIDLE = 0,
    // Configures RWU with address-mark wakeup.
    eMARK = 1,
  };

  enum class eM : std::uint32_t {
    // Receiver and transmitter use 8-bit data characters.
    eDATA8 = 0,
    // Receiver and transmitter use 9-bit data characters.
    eDATA9 = 1,
  };

  enum class eRSRC : std::uint32_t {
    // Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the LPUART does not use the RXD pin.
    eNO_EFFECT = 0,
    // Single-wire LPUART mode where the TXD pin is connected to the transmitter output and receiver input.
    eONEWIRE = 1,
  };

  enum class eDOZEEN : std::uint32_t {
    // LPUART is enabled in Doze mode.
    eENABLED = 0,
    // LPUART is disabled in Doze mode .
    eDISABLED = 1,
  };

  enum class eLOOPS : std::uint32_t {
    // Normal operation - RXD and TXD use separate pins.
    eNOFFECT = 0,
    // Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input (see RSRC bit).
    eLOOPBACK = 1,
  };

  enum class eIDLECFG : std::uint32_t {
    // 1 idle character
    eIDLE_1 = 0,
    // 2 idle characters
    eIDLE_2 = 1,
    // 4 idle characters
    eIDLE_4 = 2,
    // 8 idle characters
    eIDLE_8 = 3,
    // 16 idle characters
    eIDLE_16 = 4,
    // 32 idle characters
    eIDLE_32 = 5,
    // 64 idle characters
    eIDLE_64 = 6,
    // 128 idle characters
    eIDLE_128 = 7,
  };

  enum class eM7 : std::uint32_t {
    // Receiver and transmitter use 8-bit to 10-bit data characters.
    eNO_EFFECT = 0,
    // Receiver and transmitter use 7-bit data characters.
    eDATA7 = 1,
  };

  enum class eMA2IE : std::uint32_t {
    // MA2F interrupt disabled
    eDISABLED = 0,
    // MA2F interrupt enabled
    eENABLED = 1,
  };

  enum class eMA1IE : std::uint32_t {
    // MA1F interrupt disabled
    eDISABLED = 0,
    // MA1F interrupt enabled
    eENABLED = 1,
  };

  enum class eSBK : std::uint32_t {
    // Normal transmitter operation.
    eNO_EFFECT = 0,
    // Queue break character(s) to be sent.
    eTX_BREAK = 1,
  };

  enum class eRWU : std::uint32_t {
    // Normal receiver operation.
    eNO_EFFECT = 0,
    // LPUART receiver in standby waiting for wakeup condition.
    eRX_WAKEUP = 1,
  };

  enum class eRE : std::uint32_t {
    // Receiver disabled.
    eDISABLED = 0,
    // Receiver enabled.
    eENABLED = 1,
  };

  enum class eTE : std::uint32_t {
    // Transmitter disabled.
    eDISABLED = 0,
    // Transmitter enabled.
    eENABLED = 1,
  };

  enum class eILIE : std::uint32_t {
    // Hardware interrupts from IDLE disabled; use polling.
    eDISABLED = 0,
    // Hardware interrupt is requested when IDLE flag is 1.
    eENABLED = 1,
  };

  enum class eRIE : std::uint32_t {
    // Hardware interrupts from RDRF disabled.
    eDISABLED = 0,
    // Hardware interrupt is requested when RDRF flag is 1.
    eENABLED = 1,
  };

  enum class eTCIE : std::uint32_t {
    // Hardware interrupts from TC disabled.
    eDISABLED = 0,
    // Hardware interrupt is requested when TC flag is 1.
    eENABLED = 1,
  };

  enum class eTIE : std::uint32_t {
    // Hardware interrupts from TDRE disabled.
    eDISABLED = 0,
    // Hardware interrupt is requested when TDRE flag is 1.
    eENABLED = 1,
  };

  enum class ePEIE : std::uint32_t {
    // PF interrupts disabled; use polling).
    eDISABLED = 0,
    // Hardware interrupt is requested when PF is set.
    eENABLED = 1,
  };

  enum class eFEIE : std::uint32_t {
    // FE interrupts disabled; use polling.
    eDISABLED = 0,
    // Hardware interrupt is requested when FE is set.
    eENABLED = 1,
  };

  enum class eNEIE : std::uint32_t {
    // NF interrupts disabled; use polling.
    eDISABLED = 0,
    // Hardware interrupt is requested when NF is set.
    eENABLED = 1,
  };

  enum class eORIE : std::uint32_t {
    // OR interrupts disabled; use polling.
    eDISABLED = 0,
    // Hardware interrupt is requested when OR is set.
    eENABLED = 1,
  };

  enum class eTXINV : std::uint32_t {
    // Transmit data not inverted.
    eNOT_INVERTED = 0,
    // Transmit data inverted.
    eINVERTED = 1,
  };

  enum class eTXDIR : std::uint32_t {
    // TXD pin is an input in single-wire mode.
    eTX_INPUT = 0,
    // TXD pin is an output in single-wire mode.
    eTX_OUTPUT = 1,
  };
  // Parity Type
  using PT = ftl::mmio::Field<1, 0, ePT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Parity Enable
  using PE = ftl::mmio::Field<1, 1, ePE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Idle Line Type Select
  using ILT = ftl::mmio::Field<1, 2, eILT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Wakeup Method Select
  using WAKE = ftl::mmio::Field<1, 3, eWAKE, ftl::mmio::RW, ftl::mmio::Normal>;
  // 9-Bit or 8-Bit Mode Select
  using M = ftl::mmio::Field<1, 4, eM, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Source Select
  using RSRC = ftl::mmio::Field<1, 5, eRSRC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Doze Enable
  using DOZEEN = ftl::mmio::Field<1, 6, eDOZEEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Loop Mode Select
  using LOOPS = ftl::mmio::Field<1, 7, eLOOPS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Idle Configuration
  using IDLECFG = ftl::mmio::Field<3, 8, eIDLECFG, ftl::mmio::RW, ftl::mmio::Normal>;
  // 7-Bit Mode Select
  using M7 = ftl::mmio::Field<1, 11, eM7, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match 2 Interrupt Enable
  using MA2IE = ftl::mmio::Field<1, 14, eMA2IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match 1 Interrupt Enable
  using MA1IE = ftl::mmio::Field<1, 15, eMA1IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Send Break
  using SBK = ftl::mmio::Field<1, 16, eSBK, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Wakeup Control
  using RWU = ftl::mmio::Field<1, 17, eRWU, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Enable
  using RE = ftl::mmio::Field<1, 18, eRE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmitter Enable
  using TE = ftl::mmio::Field<1, 19, eTE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Idle Line Interrupt Enable
  using ILIE = ftl::mmio::Field<1, 20, eILIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Interrupt Enable
  using RIE = ftl::mmio::Field<1, 21, eRIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmission Complete Interrupt Enable for
  using TCIE = ftl::mmio::Field<1, 22, eTCIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit Interrupt Enable
  using TIE = ftl::mmio::Field<1, 23, eTIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Parity Error Interrupt Enable
  using PEIE = ftl::mmio::Field<1, 24, ePEIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Framing Error Interrupt Enable
  using FEIE = ftl::mmio::Field<1, 25, eFEIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Noise Error Interrupt Enable
  using NEIE = ftl::mmio::Field<1, 26, eNEIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Overrun Interrupt Enable
  using ORIE = ftl::mmio::Field<1, 27, eORIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit Data Inversion
  using TXINV = ftl::mmio::Field<1, 28, eTXINV, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD Pin Direction in Single-Wire Mode
  using TXDIR = ftl::mmio::Field<1, 29, eTXDIR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive Bit 9 / Transmit Bit 8
  using R9T8 = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive Bit 8 / Transmit Bit 9
  using R8T9 = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace CTRL_fields_

struct CTRL : ftl::mmio::Register<
    0x4007C018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL_fields_::PT,
    CTRL_fields_::PE,
    CTRL_fields_::ILT,
    CTRL_fields_::WAKE,
    CTRL_fields_::M,
    CTRL_fields_::RSRC,
    CTRL_fields_::DOZEEN,
    CTRL_fields_::LOOPS,
    CTRL_fields_::IDLECFG,
    CTRL_fields_::M7,
    ftl::mmio::Reserved<2, 12>,
    CTRL_fields_::MA2IE,
    CTRL_fields_::MA1IE,
    CTRL_fields_::SBK,
    CTRL_fields_::RWU,
    CTRL_fields_::RE,
    CTRL_fields_::TE,
    CTRL_fields_::ILIE,
    CTRL_fields_::RIE,
    CTRL_fields_::TCIE,
    CTRL_fields_::TIE,
    CTRL_fields_::PEIE,
    CTRL_fields_::FEIE,
    CTRL_fields_::NEIE,
    CTRL_fields_::ORIE,
    CTRL_fields_::TXINV,
    CTRL_fields_::TXDIR,
    CTRL_fields_::R9T8,
    CTRL_fields_::R8T9> {
  using ePT = CTRL_fields_::ePT;
  using ePE = CTRL_fields_::ePE;
  using eILT = CTRL_fields_::eILT;
  using eWAKE = CTRL_fields_::eWAKE;
  using eM = CTRL_fields_::eM;
  using eRSRC = CTRL_fields_::eRSRC;
  using eDOZEEN = CTRL_fields_::eDOZEEN;
  using eLOOPS = CTRL_fields_::eLOOPS;
  using eIDLECFG = CTRL_fields_::eIDLECFG;
  using eM7 = CTRL_fields_::eM7;
  using eMA2IE = CTRL_fields_::eMA2IE;
  using eMA1IE = CTRL_fields_::eMA1IE;
  using eSBK = CTRL_fields_::eSBK;
  using eRWU = CTRL_fields_::eRWU;
  using eRE = CTRL_fields_::eRE;
  using eTE = CTRL_fields_::eTE;
  using eILIE = CTRL_fields_::eILIE;
  using eRIE = CTRL_fields_::eRIE;
  using eTCIE = CTRL_fields_::eTCIE;
  using eTIE = CTRL_fields_::eTIE;
  using ePEIE = CTRL_fields_::ePEIE;
  using eFEIE = CTRL_fields_::eFEIE;
  using eNEIE = CTRL_fields_::eNEIE;
  using eORIE = CTRL_fields_::eORIE;
  using eTXINV = CTRL_fields_::eTXINV;
  using eTXDIR = CTRL_fields_::eTXDIR;
  using PT = CTRL_fields_::PT;
  using PE = CTRL_fields_::PE;
  using ILT = CTRL_fields_::ILT;
  using WAKE = CTRL_fields_::WAKE;
  using M = CTRL_fields_::M;
  using RSRC = CTRL_fields_::RSRC;
  using DOZEEN = CTRL_fields_::DOZEEN;
  using LOOPS = CTRL_fields_::LOOPS;
  using IDLECFG = CTRL_fields_::IDLECFG;
  using M7 = CTRL_fields_::M7;
  using MA2IE = CTRL_fields_::MA2IE;
  using MA1IE = CTRL_fields_::MA1IE;
  using SBK = CTRL_fields_::SBK;
  using RWU = CTRL_fields_::RWU;
  using RE = CTRL_fields_::RE;
  using TE = CTRL_fields_::TE;
  using ILIE = CTRL_fields_::ILIE;
  using RIE = CTRL_fields_::RIE;
  using TCIE = CTRL_fields_::TCIE;
  using TIE = CTRL_fields_::TIE;
  using PEIE = CTRL_fields_::PEIE;
  using FEIE = CTRL_fields_::FEIE;
  using NEIE = CTRL_fields_::NEIE;
  using ORIE = CTRL_fields_::ORIE;
  using TXINV = CTRL_fields_::TXINV;
  using TXDIR = CTRL_fields_::TXDIR;
  using R9T8 = CTRL_fields_::R9T8;
  using R8T9 = CTRL_fields_::R8T9;
};

// LPUART Data Register
namespace DATA_fields_ {

  enum class eIDLINE : std::uint32_t {
    // Receiver was not idle before receiving this character.
    eNO_IDLE = 0,
    // Receiver was idle before receiving this character.
    eIDLE = 1,
  };

  enum class eRXEMPT : std::uint32_t {
    // Receive buffer contains valid data.
    eNOT_EMPTY = 0,
    // Receive buffer is empty, data returned on read is not valid.
    eEMPTY = 1,
  };

  enum class eFRETSC : std::uint32_t {
    // The dataword is received without a frame error on read, or transmit a normal character on write.
    eNO_ERROR = 0,
    // The dataword is received with a frame error, or transmit an idle or break character on transmit.
    eERROR = 1,
  };

  enum class ePARITYE : std::uint32_t {
    // The dataword is received without a parity error.
    eNO_PARITY = 0,
    // The dataword is received with a parity error.
    ePARITY = 1,
  };

  enum class eNOISY : std::uint32_t {
    // The dataword is received without noise.
    eNO_NOISE = 0,
    // The data is received with noise.
    eNOISE = 1,
  };
  // R0T0
  using R0T0 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R1T1
  using R1T1 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R2T2
  using R2T2 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R3T3
  using R3T3 = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R4T4
  using R4T4 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R5T5
  using R5T5 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R6T6
  using R6T6 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R7T7
  using R7T7 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R8T8
  using R8T8 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // R9T9
  using R9T9 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Idle Line
  using IDLINE = ftl::mmio::Field<1, 11, eIDLINE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive Buffer Empty
  using RXEMPT = ftl::mmio::Field<1, 12, eRXEMPT, ftl::mmio::RO, ftl::mmio::Normal>;
  // Frame Error / Transmit Special Character
  using FRETSC = ftl::mmio::Field<1, 13, eFRETSC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Parity Error
  using PARITYE = ftl::mmio::Field<1, 14, ePARITYE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Noisy Data Received
  using NOISY = ftl::mmio::Field<1, 15, eNOISY, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace DATA_fields_

struct DATA : ftl::mmio::Register<
    0x4007C01Cu,
    std::uint32_t,
    0x00001000u,
    ftl::mmio::RW,
    DATA_fields_::R0T0,
    DATA_fields_::R1T1,
    DATA_fields_::R2T2,
    DATA_fields_::R3T3,
    DATA_fields_::R4T4,
    DATA_fields_::R5T5,
    DATA_fields_::R6T6,
    DATA_fields_::R7T7,
    DATA_fields_::R8T8,
    DATA_fields_::R9T9,
    ftl::mmio::Reserved<1, 10>,
    DATA_fields_::IDLINE,
    DATA_fields_::RXEMPT,
    DATA_fields_::FRETSC,
    DATA_fields_::PARITYE,
    DATA_fields_::NOISY,
    ftl::mmio::Reserved<16, 16>> {
  using eIDLINE = DATA_fields_::eIDLINE;
  using eRXEMPT = DATA_fields_::eRXEMPT;
  using eFRETSC = DATA_fields_::eFRETSC;
  using ePARITYE = DATA_fields_::ePARITYE;
  using eNOISY = DATA_fields_::eNOISY;
  using R0T0 = DATA_fields_::R0T0;
  using R1T1 = DATA_fields_::R1T1;
  using R2T2 = DATA_fields_::R2T2;
  using R3T3 = DATA_fields_::R3T3;
  using R4T4 = DATA_fields_::R4T4;
  using R5T5 = DATA_fields_::R5T5;
  using R6T6 = DATA_fields_::R6T6;
  using R7T7 = DATA_fields_::R7T7;
  using R8T8 = DATA_fields_::R8T8;
  using R9T9 = DATA_fields_::R9T9;
  using IDLINE = DATA_fields_::IDLINE;
  using RXEMPT = DATA_fields_::RXEMPT;
  using FRETSC = DATA_fields_::FRETSC;
  using PARITYE = DATA_fields_::PARITYE;
  using NOISY = DATA_fields_::NOISY;
};

// LPUART Match Address Register
namespace MATCH_fields_ {
  // Match Address 1
  using MA1 = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match Address 2
  using MA2 = ftl::mmio::Field<10, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MATCH_fields_

struct MATCH : ftl::mmio::Register<
    0x4007C020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MATCH_fields_::MA1,
    ftl::mmio::Reserved<6, 10>,
    MATCH_fields_::MA2,
    ftl::mmio::Reserved<6, 26>> {
  using MA1 = MATCH_fields_::MA1;
  using MA2 = MATCH_fields_::MA2;
};

// LPUART Modem IrDA Register
namespace MODIR_fields_ {

  enum class eTXCTSE : std::uint32_t {
    // CTS has no effect on the transmitter.
    eDISABLED = 0,
    // Enables clear-to-send operation. The transmitter checks the state of CTS each time it is ready to send a character. If CTS is asserted, the character is sent. If CTS is deasserted, the signal TXD remains in the mark state and transmission is delayed until CTS is asserted. Changes in CTS as a character is being sent do not affect its transmission.
    eENABLED = 1,
  };

  enum class eTXRTSE : std::uint32_t {
    // The transmitter has no effect on RTS.
    eDISABLED = 0,
    // When a character is placed into an empty transmit shift register, RTS asserts one bit time before the start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter FIFO and shift register are completely sent, including the last stop bit.
    eENABLED = 1,
  };

  enum class eTXRTSPOL : std::uint32_t {
    // Transmitter RTS is active low.
    eLOW = 0,
    // Transmitter RTS is active high.
    eHIGH = 1,
  };

  enum class eRXRTSE : std::uint32_t {
    // The receiver has no effect on RTS.
    eDISABLED = 0,
    // RTS is deasserted if the receiver data register is full or a start bit has been detected that would cause the receiver data register to become full. RTS is asserted if the receiver data register is not full and has not detected a start bit that would cause the receiver data register to become full.
    eENABLED = 1,
  };

  enum class eTXCTSC : std::uint32_t {
    // CTS input is sampled at the start of each character.
    eSTART = 0,
    // CTS input is sampled when the transmitter is idle.
    eIDLE = 1,
  };

  enum class eTXCTSSRC : std::uint32_t {
    // CTS input is the CTS_B pin.
    eCTS = 0,
    // CTS input is an internal connection to the receiver address match result.
    eMATCH = 1,
  };

  enum class eTNP : std::uint32_t {
    // 1/OSR.
    eONE_SAMPLE = 0,
    // 2/OSR.
    eTWO_SAMPLE = 1,
    // 3/OSR.
    eTHREE_SAMPLE = 2,
    // 4/OSR.
    eFOUR_SAMPLE = 3,
  };

  enum class eIREN : std::uint32_t {
    // IR disabled.
    eDISABLED = 0,
    // IR enabled.
    eENABLED = 1,
  };
  // Transmitter clear-to-send enable
  using TXCTSE = ftl::mmio::Field<1, 0, eTXCTSE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmitter request-to-send enable
  using TXRTSE = ftl::mmio::Field<1, 1, eTXRTSE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmitter request-to-send polarity
  using TXRTSPOL = ftl::mmio::Field<1, 2, eTXRTSPOL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver request-to-send enable
  using RXRTSE = ftl::mmio::Field<1, 3, eRXRTSE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit CTS Configuration
  using TXCTSC = ftl::mmio::Field<1, 4, eTXCTSC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit CTS Source
  using TXCTSSRC = ftl::mmio::Field<1, 5, eTXCTSSRC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive RTS Configuration
  using RTSWATER = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmitter narrow pulse
  using TNP = ftl::mmio::Field<2, 16, eTNP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Infrared enable
  using IREN = ftl::mmio::Field<1, 18, eIREN, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace MODIR_fields_

struct MODIR : ftl::mmio::Register<
    0x4007C024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MODIR_fields_::TXCTSE,
    MODIR_fields_::TXRTSE,
    MODIR_fields_::TXRTSPOL,
    MODIR_fields_::RXRTSE,
    MODIR_fields_::TXCTSC,
    MODIR_fields_::TXCTSSRC,
    ftl::mmio::Reserved<2, 6>,
    MODIR_fields_::RTSWATER,
    ftl::mmio::Reserved<6, 10>,
    MODIR_fields_::TNP,
    MODIR_fields_::IREN,
    ftl::mmio::Reserved<13, 19>> {
  using eTXCTSE = MODIR_fields_::eTXCTSE;
  using eTXRTSE = MODIR_fields_::eTXRTSE;
  using eTXRTSPOL = MODIR_fields_::eTXRTSPOL;
  using eRXRTSE = MODIR_fields_::eRXRTSE;
  using eTXCTSC = MODIR_fields_::eTXCTSC;
  using eTXCTSSRC = MODIR_fields_::eTXCTSSRC;
  using eTNP = MODIR_fields_::eTNP;
  using eIREN = MODIR_fields_::eIREN;
  using TXCTSE = MODIR_fields_::TXCTSE;
  using TXRTSE = MODIR_fields_::TXRTSE;
  using TXRTSPOL = MODIR_fields_::TXRTSPOL;
  using RXRTSE = MODIR_fields_::RXRTSE;
  using TXCTSC = MODIR_fields_::TXCTSC;
  using TXCTSSRC = MODIR_fields_::TXCTSSRC;
  using RTSWATER = MODIR_fields_::RTSWATER;
  using TNP = MODIR_fields_::TNP;
  using IREN = MODIR_fields_::IREN;
};

// LPUART FIFO Register
namespace FIFO_fields_ {

  enum class eRXFIFOSIZE : std::uint32_t {
    // Receive FIFO/Buffer depth = 1 dataword.
    eFIFO_1 = 0,
    // Receive FIFO/Buffer depth = 4 datawords.
    eFIFO_4 = 1,
    // Receive FIFO/Buffer depth = 8 datawords.
    eFIFO_8 = 2,
    // Receive FIFO/Buffer depth = 16 datawords.
    eFIFO_16 = 3,
    // Receive FIFO/Buffer depth = 32 datawords.
    eFIFO_32 = 4,
    // Receive FIFO/Buffer depth = 64 datawords.
    eFIFO_64 = 5,
    // Receive FIFO/Buffer depth = 128 datawords.
    eFIFO_128 = 6,
    // Receive FIFO/Buffer depth = 256 datawords.
    eFIFO_256 = 7,
  };

  enum class eRXFE : std::uint32_t {
    // Receive FIFO is not enabled. Buffer depth is 1.
    eDISABLED = 0,
    // Receive FIFO is enabled. Buffer depth is indicted by RXFIFOSIZE.
    eENABLED = 1,
  };

  enum class eTXFIFOSIZE : std::uint32_t {
    // Transmit FIFO/Buffer depth = 1 dataword.
    eFIFO_1 = 0,
    // Transmit FIFO/Buffer depth = 4 datawords.
    eFIFO_4 = 1,
    // Transmit FIFO/Buffer depth = 8 datawords.
    eFIFO_8 = 2,
    // Transmit FIFO/Buffer depth = 16 datawords.
    eFIFO_16 = 3,
    // Transmit FIFO/Buffer depth = 32 datawords.
    eFIFO_32 = 4,
    // Transmit FIFO/Buffer depth = 64 datawords.
    eFIFO_64 = 5,
    // Transmit FIFO/Buffer depth = 128 datawords.
    eFIFO_128 = 6,
    // Transmit FIFO/Buffer depth = 256 datawords
    eFIFO_256 = 7,
  };

  enum class eTXFE : std::uint32_t {
    // Transmit FIFO is not enabled. Buffer depth is 1.
    eDISABLED = 0,
    // Transmit FIFO is enabled. Buffer depth is indicated by TXFIFOSIZE.
    eENABLED = 1,
  };

  enum class eRXUFE : std::uint32_t {
    // RXUF flag does not generate an interrupt to the host.
    eDISABLED = 0,
    // RXUF flag generates an interrupt to the host.
    eENABLED = 1,
  };

  enum class eTXOFE : std::uint32_t {
    // TXOF flag does not generate an interrupt to the host.
    eDISABLED = 0,
    // TXOF flag generates an interrupt to the host.
    eENABLED = 1,
  };

  enum class eRXIDEN : std::uint32_t {
    // Disable RDRF assertion due to partially filled FIFO when receiver is idle.
    eDISABLED = 0,
    // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 1 character.
    eIDLE_1 = 1,
    // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 2 characters.
    eIDLE_2 = 2,
    // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 4 characters.
    eIDLE_4 = 3,
    // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 8 characters.
    eIDLE_8 = 4,
    // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 16 characters.
    eIDLE_16 = 5,
    // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 32 characters.
    eIDLE_32 = 6,
    // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 64 characters.
    eIDLE_64 = 7,
  };

  enum class eRXFLUSH : std::uint32_t {
    // No flush operation occurs.
    eNO_EFFECT = 0,
    // All data in the receive FIFO/buffer is cleared out.
    eRXFIFO_RST = 1,
  };

  enum class eTXFLUSH : std::uint32_t {
    // No flush operation occurs.
    eNO_EFFECT = 0,
    // All data in the transmit FIFO is cleared out.
    eTXFIFO_RST = 1,
  };

  enum class eRXUF : std::uint32_t {
    // No receive FIFO underflow has occurred since the last time the flag was cleared.
    eNO_UNDERFLOW = 0,
    // At least one receive FIFO underflow has occurred since the last time the flag was cleared.
    eUNDERFLOW = 1,
  };

  enum class eTXOF : std::uint32_t {
    // No transmit FIFO overflow has occurred since the last time the flag was cleared.
    eNO_OVERFLOW = 0,
    // At least one transmit FIFO overflow has occurred since the last time the flag was cleared.
    eOVERFLOW = 1,
  };

  enum class eRXEMPT : std::uint32_t {
    // Receive buffer is not empty.
    eNOT_EMPTY = 0,
    // Receive buffer is empty.
    eEMPTY = 1,
  };

  enum class eTXEMPT : std::uint32_t {
    // Transmit buffer is not empty.
    eNOT_EMPTY = 0,
    // Transmit buffer is empty.
    eEMPTY = 1,
  };
  // Receive FIFO Buffer Depth
  using RXFIFOSIZE = ftl::mmio::Field<3, 0, eRXFIFOSIZE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive FIFO Enable
  using RXFE = ftl::mmio::Field<1, 3, eRXFE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit FIFO Buffer Depth
  using TXFIFOSIZE = ftl::mmio::Field<3, 4, eTXFIFOSIZE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Transmit FIFO Enable
  using TXFE = ftl::mmio::Field<1, 7, eTXFE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive FIFO Underflow Interrupt Enable
  using RXUFE = ftl::mmio::Field<1, 8, eRXUFE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit FIFO Overflow Interrupt Enable
  using TXOFE = ftl::mmio::Field<1, 9, eTXOFE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Idle Empty Enable
  using RXIDEN = ftl::mmio::Field<3, 10, eRXIDEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive FIFO Flush
  using RXFLUSH = ftl::mmio::Field<1, 14, eRXFLUSH, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit FIFO Flush
  using TXFLUSH = ftl::mmio::Field<1, 15, eTXFLUSH, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver FIFO Underflow Flag
  using RXUF = ftl::mmio::Field<1, 16, eRXUF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmitter FIFO Overflow Flag
  using TXOF = ftl::mmio::Field<1, 17, eTXOF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receive FIFO/Buffer Empty
  using RXEMPT = ftl::mmio::Field<1, 22, eRXEMPT, ftl::mmio::RO, ftl::mmio::Normal>;
  // Transmit FIFO/Buffer Empty
  using TXEMPT = ftl::mmio::Field<1, 23, eTXEMPT, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace FIFO_fields_

struct FIFO : ftl::mmio::Register<
    0x4007C028u,
    std::uint32_t,
    0x00C00011u,
    ftl::mmio::RW,
    FIFO_fields_::RXFIFOSIZE,
    FIFO_fields_::RXFE,
    FIFO_fields_::TXFIFOSIZE,
    FIFO_fields_::TXFE,
    FIFO_fields_::RXUFE,
    FIFO_fields_::TXOFE,
    FIFO_fields_::RXIDEN,
    ftl::mmio::Reserved<1, 13>,
    FIFO_fields_::RXFLUSH,
    FIFO_fields_::TXFLUSH,
    FIFO_fields_::RXUF,
    FIFO_fields_::TXOF,
    ftl::mmio::Reserved<4, 18>,
    FIFO_fields_::RXEMPT,
    FIFO_fields_::TXEMPT,
    ftl::mmio::Reserved<8, 24>> {
  using eRXFIFOSIZE = FIFO_fields_::eRXFIFOSIZE;
  using eRXFE = FIFO_fields_::eRXFE;
  using eTXFIFOSIZE = FIFO_fields_::eTXFIFOSIZE;
  using eTXFE = FIFO_fields_::eTXFE;
  using eRXUFE = FIFO_fields_::eRXUFE;
  using eTXOFE = FIFO_fields_::eTXOFE;
  using eRXIDEN = FIFO_fields_::eRXIDEN;
  using eRXFLUSH = FIFO_fields_::eRXFLUSH;
  using eTXFLUSH = FIFO_fields_::eTXFLUSH;
  using eRXUF = FIFO_fields_::eRXUF;
  using eTXOF = FIFO_fields_::eTXOF;
  using eRXEMPT = FIFO_fields_::eRXEMPT;
  using eTXEMPT = FIFO_fields_::eTXEMPT;
  using RXFIFOSIZE = FIFO_fields_::RXFIFOSIZE;
  using RXFE = FIFO_fields_::RXFE;
  using TXFIFOSIZE = FIFO_fields_::TXFIFOSIZE;
  using TXFE = FIFO_fields_::TXFE;
  using RXUFE = FIFO_fields_::RXUFE;
  using TXOFE = FIFO_fields_::TXOFE;
  using RXIDEN = FIFO_fields_::RXIDEN;
  using RXFLUSH = FIFO_fields_::RXFLUSH;
  using TXFLUSH = FIFO_fields_::TXFLUSH;
  using RXUF = FIFO_fields_::RXUF;
  using TXOF = FIFO_fields_::TXOF;
  using RXEMPT = FIFO_fields_::RXEMPT;
  using TXEMPT = FIFO_fields_::TXEMPT;
};

// LPUART Watermark Register
namespace WATER_fields_ {
  // Transmit Watermark
  using TXWATER = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit Counter
  using TXCOUNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive Watermark
  using RXWATER = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive Counter
  using RXCOUNT = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
}  // namespace WATER_fields_

struct WATER : ftl::mmio::Register<
    0x4007C02Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    WATER_fields_::TXWATER,
    ftl::mmio::Reserved<6, 2>,
    WATER_fields_::TXCOUNT,
    ftl::mmio::Reserved<5, 11>,
    WATER_fields_::RXWATER,
    ftl::mmio::Reserved<6, 18>,
    WATER_fields_::RXCOUNT,
    ftl::mmio::Reserved<5, 27>> {
  using TXWATER = WATER_fields_::TXWATER;
  using TXCOUNT = WATER_fields_::TXCOUNT;
  using RXWATER = WATER_fields_::RXWATER;
  using RXCOUNT = WATER_fields_::RXCOUNT;
};

}  // namespace regs::lpuart1