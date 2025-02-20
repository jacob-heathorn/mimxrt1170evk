#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

#include "register32.hpp"

// Register definitions for LPUART1
//
// LPUART
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace LPUART1 {

// Version ID Register
struct VERID_t : public Register {
  VERID_t() : Register(0x4007c000) {}

  
  // Feature Identification Number
  //
  enum class FEATURE : uint32_t {
    kSTANDARD=1, // Standard feature set.
    kMODEM=3, // Standard feature set with MODEM/IrDA support.
  };
  FEATURE GetFEATURE() const { return GetBits<16>(0).to_ulong(); }
  void WaitForFEATURE(FEATURE value) { WaitForBits<16>(0, value); }
  
  // Minor Version Number
  //
  uint32_t GetMINOR() const { return GetBits<8>(16).to_ulong(); }
  void WaitForMINOR(uint32_t value) { WaitForBits<8>(16, value); }
  
  // Major Version Number
  //
  uint32_t GetMAJOR() const { return GetBits<8>(24).to_ulong(); }
  void WaitForMAJOR(uint32_t value) { WaitForBits<8>(24, value); }
  
  void Reset() { this->Set(0x04010003); }
};

// Parameter Register
struct PARAM_t : public Register {
  PARAM_t() : Register(0x4007c004) {}

  
  // Transmit FIFO Size
  //
  uint32_t GetTXFIFO() const { return GetBits<8>(0).to_ulong(); }
  void WaitForTXFIFO(uint32_t value) { WaitForBits<8>(0, value); }
  
  // Receive FIFO Size
  //
  uint32_t GetRXFIFO() const { return GetBits<8>(8).to_ulong(); }
  void WaitForRXFIFO(uint32_t value) { WaitForBits<8>(8, value); }
  
  void Reset() { this->Set(0x00000202); }
};

// LPUART Global Register
struct GLOBAL_t : public Register {
  GLOBAL_t() : Register(0x4007c008) {}

  
  // Software Reset
  //
  enum class RST : uint32_t {
    kNO_EFFECT=0, // Module is not reset.
    kRESET=1, // Module is reset.
  };
  RST GetRST() const { return GetBit(1); }
  void WaitForRST(RST value) { WaitForBit(1, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Pin Configuration Register
struct PINCFG_t : public Register {
  PINCFG_t() : Register(0x4007c00c) {}

  
  // Trigger Select
  //
  enum class TRGSEL : uint32_t {
    kDISABLED=0, // Input trigger is disabled.
    kTRG_RXD=1, // Input trigger is used instead of RXD pin input.
    kTRG_CTS=2, // Input trigger is used instead of CTS_B pin input.
    kTRG_TXD=3, // Input trigger is used to modulate the TXD pin output. The TXD pin output (after TXINV configuration) is internally ANDed with the input trigger.
  };
  TRGSEL GetTRGSEL() const { return GetBits<2>(0).to_ulong(); }
  void WaitForTRGSEL(TRGSEL value) { WaitForBits<2>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Baud Rate Register
struct BAUD_t : public Register {
  BAUD_t() : Register(0x4007c010) {}

  
  // Baud Rate Modulo Divisor.
  //
  uint32_t GetSBR() const { return GetBits<13>(0).to_ulong(); }
  void WaitForSBR(uint32_t value) { WaitForBits<13>(0, value); }
  
  // Stop Bit Number Select
  //
  enum class SBNS : uint32_t {
    kONE=0, // One stop bit.
    kTWO=1, // Two stop bits.
  };
  SBNS GetSBNS() const { return GetBit(13); }
  void WaitForSBNS(SBNS value) { WaitForBit(13, value); }
  
  // RX Input Active Edge Interrupt Enable
  //
  enum class RXEDGIE : uint32_t {
    kDISABLE=0, // Hardware interrupts from STAT[RXEDGIF] are disabled.
    kENABLE=1, // Hardware interrupt is requested when STAT[RXEDGIF] flag is 1.
  };
  RXEDGIE GetRXEDGIE() const { return GetBit(14); }
  void WaitForRXEDGIE(RXEDGIE value) { WaitForBit(14, value); }
  
  // LIN Break Detect Interrupt Enable
  //
  enum class LBKDIE : uint32_t {
    kDISABLE=0, // Hardware interrupts from STAT[LBKDIF] flag are disabled (use polling).
    kENABLE=1, // Hardware interrupt is requested when STAT[LBKDIF] flag is 1.
  };
  LBKDIE GetLBKDIE() const { return GetBit(15); }
  void WaitForLBKDIE(LBKDIE value) { WaitForBit(15, value); }
  
  // Resynchronization Disable
  //
  enum class RESYNCDIS : uint32_t {
    kRESYNC=0, // Resynchronization during received data word is supported.
    kNO_RESYNC=1, // Resynchronization during received data word is disabled.
  };
  RESYNCDIS GetRESYNCDIS() const { return GetBit(16); }
  void WaitForRESYNCDIS(RESYNCDIS value) { WaitForBit(16, value); }
  
  // Both Edge Sampling
  //
  enum class BOTHEDGE : uint32_t {
    kDISABLED=0, // Receiver samples input data using the rising edge of the baud rate clock.
    kENABLED=1, // Receiver samples input data using the rising and falling edge of the baud rate clock.
  };
  BOTHEDGE GetBOTHEDGE() const { return GetBit(17); }
  void WaitForBOTHEDGE(BOTHEDGE value) { WaitForBit(17, value); }
  
  // Match Configuration
  //
  enum class MATCFG : uint32_t {
    kADDR_MATCH=0, // Address Match Wakeup
    kIDLE_MATCH=1, // Idle Match Wakeup
    kONOFF_MATCH=2, // Match On and Match Off
    kRWU_MATCH=3, // Enables RWU on Data Match and Match On/Off for transmitter CTS input
  };
  MATCFG GetMATCFG() const { return GetBits<2>(18).to_ulong(); }
  void WaitForMATCFG(MATCFG value) { WaitForBits<2>(18, value); }
  
  // Receiver Full DMA Enable
  //
  enum class RDMAE : uint32_t {
    kDISABLED=0, // DMA request disabled.
    kENABLED=1, // DMA request enabled.
  };
  RDMAE GetRDMAE() const { return GetBit(21); }
  void WaitForRDMAE(RDMAE value) { WaitForBit(21, value); }
  
  // Transmitter DMA Enable
  //
  enum class TDMAE : uint32_t {
    kDISABLED=0, // DMA request disabled.
    kENABLED=1, // DMA request enabled.
  };
  TDMAE GetTDMAE() const { return GetBit(23); }
  void WaitForTDMAE(TDMAE value) { WaitForBit(23, value); }
  
  // Oversampling Ratio
  //
  enum class OSR : uint32_t {
    kDEFAULT=0, // Writing 0 to this field results in an oversampling ratio of 16
    kOSR_4=3, // Oversampling ratio of 4, requires BOTHEDGE to be set.
    kOSR_5=4, // Oversampling ratio of 5, requires BOTHEDGE to be set.
    kOSR_6=5, // Oversampling ratio of 6, requires BOTHEDGE to be set.
    kOSR_7=6, // Oversampling ratio of 7, requires BOTHEDGE to be set.
    kOSR_8=7, // Oversampling ratio of 8.
    kOSR_9=8, // Oversampling ratio of 9.
    kOSR_10=9, // Oversampling ratio of 10.
    kOSR_11=10, // Oversampling ratio of 11.
    kOSR_12=11, // Oversampling ratio of 12.
    kOSR_13=12, // Oversampling ratio of 13.
    kOSR_14=13, // Oversampling ratio of 14.
    kOSR_15=14, // Oversampling ratio of 15.
    kOSR_16=15, // Oversampling ratio of 16.
    kOSR_17=16, // Oversampling ratio of 17.
    kOSR_18=17, // Oversampling ratio of 18.
    kOSR_19=18, // Oversampling ratio of 19.
    kOSR_20=19, // Oversampling ratio of 20.
    kOSR_21=20, // Oversampling ratio of 21.
    kOSR_22=21, // Oversampling ratio of 22.
    kOSR_23=22, // Oversampling ratio of 23.
    kOSR_24=23, // Oversampling ratio of 24.
    kOSR_25=24, // Oversampling ratio of 25.
    kOSR_26=25, // Oversampling ratio of 26.
    kOSR_27=26, // Oversampling ratio of 27.
    kOSR_28=27, // Oversampling ratio of 28.
    kOSR_29=28, // Oversampling ratio of 29.
    kOSR_30=29, // Oversampling ratio of 30.
    kOSR_31=30, // Oversampling ratio of 31.
    kOSR_32=31, // Oversampling ratio of 32.
  };
  OSR GetOSR() const { return GetBits<5>(24).to_ulong(); }
  void WaitForOSR(OSR value) { WaitForBits<5>(24, value); }
  
  // 10-bit Mode select
  //
  enum class M10 : uint32_t {
    kDISABLED=0, // Receiver and transmitter use 7-bit to 9-bit data characters.
    kENABLED=1, // Receiver and transmitter use 10-bit data characters.
  };
  M10 GetM10() const { return GetBit(29); }
  void WaitForM10(M10 value) { WaitForBit(29, value); }
  
  // Match Address Mode Enable 2
  //
  enum class MAEN2 : uint32_t {
    kDISABLED=0, // Normal operation.
    kENABLED=1, // Enables automatic address matching or data matching mode for MATCH[MA2].
  };
  MAEN2 GetMAEN2() const { return GetBit(30); }
  void WaitForMAEN2(MAEN2 value) { WaitForBit(30, value); }
  
  // Match Address Mode Enable 1
  //
  enum class MAEN1 : uint32_t {
    kDISABLED=0, // Normal operation.
    kENABLED=1, // Enables automatic address matching or data matching mode for MATCH[MA1].
  };
  MAEN1 GetMAEN1() const { return GetBit(31); }
  void WaitForMAEN1(MAEN1 value) { WaitForBit(31, value); }
  
  void Reset() { this->Set(0x0f000004); }
};

// LPUART Status Register
struct STAT_t : public Register {
  STAT_t() : Register(0x4007c014) {}

  
  // Match 2 Flag
  //
  enum class MA2F : uint32_t {
    kNOMATCH=0, // Received data is not equal to MA2
    kMATCH=1, // Received data is equal to MA2
  };
  MA2F GetMA2F() const { return GetBit(14); }
  void WaitForMA2F(MA2F value) { WaitForBit(14, value); }
  
  // Match 1 Flag
  //
  enum class MA1F : uint32_t {
    kNOMATCH=0, // Received data is not equal to MA1
    kMATCH=1, // Received data is equal to MA1
  };
  MA1F GetMA1F() const { return GetBit(15); }
  void WaitForMA1F(MA1F value) { WaitForBit(15, value); }
  
  // Parity Error Flag
  //
  enum class PF : uint32_t {
    kNOPARITY=0, // No parity error.
    kPARITY=1, // Parity error.
  };
  PF GetPF() const { return GetBit(16); }
  void WaitForPF(PF value) { WaitForBit(16, value); }
  
  // Framing Error Flag
  //
  enum class FE : uint32_t {
    kNOERROR=0, // No framing error detected. This does not guarantee the framing is correct.
    kERROR=1, // Framing error.
  };
  FE GetFE() const { return GetBit(17); }
  void WaitForFE(FE value) { WaitForBit(17, value); }
  
  // Noise Flag
  //
  enum class NF : uint32_t {
    kNONOISE=0, // No noise detected.
    kNOISE=1, // Noise detected in the received character in the DATA register.
  };
  NF GetNF() const { return GetBit(18); }
  void WaitForNF(NF value) { WaitForBit(18, value); }
  
  // Receiver Overrun Flag
  //
  enum class OR : uint32_t {
    kNO_OVERRUN=0, // No overrun.
    kOVERRUN=1, // Receive overrun (new LPUART data lost).
  };
  OR GetOR() const { return GetBit(19); }
  void WaitForOR(OR value) { WaitForBit(19, value); }
  
  // Idle Line Flag
  //
  enum class IDLE : uint32_t {
    kNOIDLE=0, // No idle line detected.
    kIDLE=1, // Idle line is detected.
  };
  IDLE GetIDLE() const { return GetBit(20); }
  void WaitForIDLE(IDLE value) { WaitForBit(20, value); }
  
  // Receive Data Register Full Flag
  //
  enum class RDRF : uint32_t {
    kNO_RXDATA=0, // Receive FIFO level is less than watermark.
    kRXDATA=1, // Receive FIFO level is equal or greater than watermark.
  };
  RDRF GetRDRF() const { return GetBit(21); }
  void WaitForRDRF(RDRF value) { WaitForBit(21, value); }
  
  // Transmission Complete Flag
  //
  enum class TC : uint32_t {
    kACTIVE=0, // Transmitter active (sending data, a preamble, or a break).
    kCOMPLETE=1, // Transmitter idle (transmission activity complete).
  };
  TC GetTC() const { return GetBit(22); }
  void WaitForTC(TC value) { WaitForBit(22, value); }
  
  // Transmit Data Register Empty Flag
  //
  enum class TDRE : uint32_t {
    kTXDATA=0, // Transmit FIFO level is greater than watermark.
    kNO_TXDATA=1, // Transmit FIFO level is equal or less than watermark.
  };
  TDRE GetTDRE() const { return GetBit(23); }
  void WaitForTDRE(TDRE value) { WaitForBit(23, value); }
  
  // Receiver Active Flag
  //
  enum class RAF : uint32_t {
    kIDLE=0, // LPUART receiver idle waiting for a start bit.
    kACTIVE=1, // LPUART receiver active (RXD input not idle).
  };
  RAF GetRAF() const { return GetBit(24); }
  void WaitForRAF(RAF value) { WaitForBit(24, value); }
  
  // LIN Break Detection Enable
  //
  enum class LBKDE : uint32_t {
    kDISABLED=0, // LIN break detect is disabled, normal break character can be detected.
    kENABLED=1, // LIN break detect is enabled. LIN break character is detected at length of 11 bit times (if M = 0) or 12 (if M = 1) or 13 (M10 = 1).
  };
  LBKDE GetLBKDE() const { return GetBit(25); }
  void WaitForLBKDE(LBKDE value) { WaitForBit(25, value); }
  
  // Break Character Generation Length
  //
  enum class BRK13 : uint32_t {
    kSHORT=0, // Break character is transmitted with length of 9 to 13 bit times.
    kLONG=1, // Break character is transmitted with length of 12 to 15 bit times.
  };
  BRK13 GetBRK13() const { return GetBit(26); }
  void WaitForBRK13(BRK13 value) { WaitForBit(26, value); }
  
  // Receive Wake Up Idle Detect
  //
  enum class RWUID : uint32_t {
    kIDLE_NOTSET=0, // During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character. During address match wakeup, the IDLE bit does not set when an address does not match.
    kIDLE_SET=1, // During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character. During address match wakeup, the IDLE bit does set when an address does not match.
  };
  RWUID GetRWUID() const { return GetBit(27); }
  void WaitForRWUID(RWUID value) { WaitForBit(27, value); }
  
  // Receive Data Inversion
  //
  enum class RXINV : uint32_t {
    kNOT_INVERTED=0, // Receive data not inverted.
    kINVERTED=1, // Receive data inverted.
  };
  RXINV GetRXINV() const { return GetBit(28); }
  void WaitForRXINV(RXINV value) { WaitForBit(28, value); }
  
  // MSB First
  //
  enum class MSBF : uint32_t {
    kLSB_FIRST=0, // LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
    kMSB_FIRST=1, // MSB (identified as bit9, bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of CTRL[M], CTRL[PE] and BAUD[M10]. .
  };
  MSBF GetMSBF() const { return GetBit(29); }
  void WaitForMSBF(MSBF value) { WaitForBit(29, value); }
  
  // RXD Pin Active Edge Interrupt Flag
  //
  enum class RXEDGIF : uint32_t {
    kNO_EDGE=0, // No active edge on the receive pin has occurred.
    kEDGE=1, // An active edge on the receive pin has occurred.
  };
  RXEDGIF GetRXEDGIF() const { return GetBit(30); }
  void WaitForRXEDGIF(RXEDGIF value) { WaitForBit(30, value); }
  
  // LIN Break Detect Interrupt Flag
  //
  enum class LBKDIF : uint32_t {
    kNOT_DETECTED=0, // No LIN break character has been detected.
    kDETECTED=1, // LIN break character has been detected.
  };
  LBKDIF GetLBKDIF() const { return GetBit(31); }
  void WaitForLBKDIF(LBKDIF value) { WaitForBit(31, value); }
  
  void Reset() { this->Set(0x00c00000); }
};

// LPUART Control Register
struct CTRL_t : public Register {
  CTRL_t() : Register(0x4007c018) {}

  
  // Parity Type
  //
  enum class PT : uint32_t {
    kEVEN=0, // Even parity.
    kODD=1, // Odd parity.
  };
  PT GetPT() const { return GetBit(0); }
  void WaitForPT(PT value) { WaitForBit(0, value); }
  
  // Parity Enable
  //
  enum class PE : uint32_t {
    kDISABLED=0, // No hardware parity generation or checking.
    kENABLED=1, // Parity enabled.
  };
  PE GetPE() const { return GetBit(1); }
  void WaitForPE(PE value) { WaitForBit(1, value); }
  
  // Idle Line Type Select
  //
  enum class ILT : uint32_t {
    kFROM_START=0, // Idle character bit count starts after start bit.
    kFROM_STOP=1, // Idle character bit count starts after stop bit.
  };
  ILT GetILT() const { return GetBit(2); }
  void WaitForILT(ILT value) { WaitForBit(2, value); }
  
  // Receiver Wakeup Method Select
  //
  enum class WAKE : uint32_t {
    kIDLE=0, // Configures RWU for idle-line wakeup.
    kMARK=1, // Configures RWU with address-mark wakeup.
  };
  WAKE GetWAKE() const { return GetBit(3); }
  void WaitForWAKE(WAKE value) { WaitForBit(3, value); }
  
  // 9-Bit or 8-Bit Mode Select
  //
  enum class M : uint32_t {
    kDATA8=0, // Receiver and transmitter use 8-bit data characters.
    kDATA9=1, // Receiver and transmitter use 9-bit data characters.
  };
  M GetM() const { return GetBit(4); }
  void WaitForM(M value) { WaitForBit(4, value); }
  
  // Receiver Source Select
  //
  enum class RSRC : uint32_t {
    kNO_EFFECT=0, // Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the LPUART does not use the RXD pin.
    kONEWIRE=1, // Single-wire LPUART mode where the TXD pin is connected to the transmitter output and receiver input.
  };
  RSRC GetRSRC() const { return GetBit(5); }
  void WaitForRSRC(RSRC value) { WaitForBit(5, value); }
  
  // Doze Enable
  //
  enum class DOZEEN : uint32_t {
    kENABLED=0, // LPUART is enabled in Doze mode.
    kDISABLED=1, // LPUART is disabled in Doze mode .
  };
  DOZEEN GetDOZEEN() const { return GetBit(6); }
  void WaitForDOZEEN(DOZEEN value) { WaitForBit(6, value); }
  
  // Loop Mode Select
  //
  enum class LOOPS : uint32_t {
    kNOFFECT=0, // Normal operation - RXD and TXD use separate pins.
    kLOOPBACK=1, // Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input (see RSRC bit).
  };
  LOOPS GetLOOPS() const { return GetBit(7); }
  void WaitForLOOPS(LOOPS value) { WaitForBit(7, value); }
  
  // Idle Configuration
  //
  enum class IDLECFG : uint32_t {
    kIDLE_1=0, // 1 idle character
    kIDLE_2=1, // 2 idle characters
    kIDLE_4=2, // 4 idle characters
    kIDLE_8=3, // 8 idle characters
    kIDLE_16=4, // 16 idle characters
    kIDLE_32=5, // 32 idle characters
    kIDLE_64=6, // 64 idle characters
    kIDLE_128=7, // 128 idle characters
  };
  IDLECFG GetIDLECFG() const { return GetBits<3>(8).to_ulong(); }
  void WaitForIDLECFG(IDLECFG value) { WaitForBits<3>(8, value); }
  
  // 7-Bit Mode Select
  //
  enum class M7 : uint32_t {
    kNO_EFFECT=0, // Receiver and transmitter use 8-bit to 10-bit data characters.
    kDATA7=1, // Receiver and transmitter use 7-bit data characters.
  };
  M7 GetM7() const { return GetBit(11); }
  void WaitForM7(M7 value) { WaitForBit(11, value); }
  
  // Match 2 Interrupt Enable
  //
  enum class MA2IE : uint32_t {
    kDISABLED=0, // MA2F interrupt disabled
    kENABLED=1, // MA2F interrupt enabled
  };
  MA2IE GetMA2IE() const { return GetBit(14); }
  void WaitForMA2IE(MA2IE value) { WaitForBit(14, value); }
  
  // Match 1 Interrupt Enable
  //
  enum class MA1IE : uint32_t {
    kDISABLED=0, // MA1F interrupt disabled
    kENABLED=1, // MA1F interrupt enabled
  };
  MA1IE GetMA1IE() const { return GetBit(15); }
  void WaitForMA1IE(MA1IE value) { WaitForBit(15, value); }
  
  // Send Break
  //
  enum class SBK : uint32_t {
    kNO_EFFECT=0, // Normal transmitter operation.
    kTX_BREAK=1, // Queue break character(s) to be sent.
  };
  SBK GetSBK() const { return GetBit(16); }
  void WaitForSBK(SBK value) { WaitForBit(16, value); }
  
  // Receiver Wakeup Control
  //
  enum class RWU : uint32_t {
    kNO_EFFECT=0, // Normal receiver operation.
    kRX_WAKEUP=1, // LPUART receiver in standby waiting for wakeup condition.
  };
  RWU GetRWU() const { return GetBit(17); }
  void WaitForRWU(RWU value) { WaitForBit(17, value); }
  
  // Receiver Enable
  //
  enum class RE : uint32_t {
    kDISABLED=0, // Receiver disabled.
    kENABLED=1, // Receiver enabled.
  };
  RE GetRE() const { return GetBit(18); }
  void WaitForRE(RE value) { WaitForBit(18, value); }
  
  // Transmitter Enable
  //
  enum class TE : uint32_t {
    kDISABLED=0, // Transmitter disabled.
    kENABLED=1, // Transmitter enabled.
  };
  TE GetTE() const { return GetBit(19); }
  void WaitForTE(TE value) { WaitForBit(19, value); }
  
  // Idle Line Interrupt Enable
  //
  enum class ILIE : uint32_t {
    kDISABLED=0, // Hardware interrupts from IDLE disabled; use polling.
    kENABLED=1, // Hardware interrupt is requested when IDLE flag is 1.
  };
  ILIE GetILIE() const { return GetBit(20); }
  void WaitForILIE(ILIE value) { WaitForBit(20, value); }
  
  // Receiver Interrupt Enable
  //
  enum class RIE : uint32_t {
    kDISABLED=0, // Hardware interrupts from RDRF disabled.
    kENABLED=1, // Hardware interrupt is requested when RDRF flag is 1.
  };
  RIE GetRIE() const { return GetBit(21); }
  void WaitForRIE(RIE value) { WaitForBit(21, value); }
  
  // Transmission Complete Interrupt Enable for
  //
  enum class TCIE : uint32_t {
    kDISABLED=0, // Hardware interrupts from TC disabled.
    kENABLED=1, // Hardware interrupt is requested when TC flag is 1.
  };
  TCIE GetTCIE() const { return GetBit(22); }
  void WaitForTCIE(TCIE value) { WaitForBit(22, value); }
  
  // Transmit Interrupt Enable
  //
  enum class TIE : uint32_t {
    kDISABLED=0, // Hardware interrupts from TDRE disabled.
    kENABLED=1, // Hardware interrupt is requested when TDRE flag is 1.
  };
  TIE GetTIE() const { return GetBit(23); }
  void WaitForTIE(TIE value) { WaitForBit(23, value); }
  
  // Parity Error Interrupt Enable
  //
  enum class PEIE : uint32_t {
    kDISABLED=0, // PF interrupts disabled; use polling).
    kENABLED=1, // Hardware interrupt is requested when PF is set.
  };
  PEIE GetPEIE() const { return GetBit(24); }
  void WaitForPEIE(PEIE value) { WaitForBit(24, value); }
  
  // Framing Error Interrupt Enable
  //
  enum class FEIE : uint32_t {
    kDISABLED=0, // FE interrupts disabled; use polling.
    kENABLED=1, // Hardware interrupt is requested when FE is set.
  };
  FEIE GetFEIE() const { return GetBit(25); }
  void WaitForFEIE(FEIE value) { WaitForBit(25, value); }
  
  // Noise Error Interrupt Enable
  //
  enum class NEIE : uint32_t {
    kDISABLED=0, // NF interrupts disabled; use polling.
    kENABLED=1, // Hardware interrupt is requested when NF is set.
  };
  NEIE GetNEIE() const { return GetBit(26); }
  void WaitForNEIE(NEIE value) { WaitForBit(26, value); }
  
  // Overrun Interrupt Enable
  //
  enum class ORIE : uint32_t {
    kDISABLED=0, // OR interrupts disabled; use polling.
    kENABLED=1, // Hardware interrupt is requested when OR is set.
  };
  ORIE GetORIE() const { return GetBit(27); }
  void WaitForORIE(ORIE value) { WaitForBit(27, value); }
  
  // Transmit Data Inversion
  //
  enum class TXINV : uint32_t {
    kNOT_INVERTED=0, // Transmit data not inverted.
    kINVERTED=1, // Transmit data inverted.
  };
  TXINV GetTXINV() const { return GetBit(28); }
  void WaitForTXINV(TXINV value) { WaitForBit(28, value); }
  
  // TXD Pin Direction in Single-Wire Mode
  //
  enum class TXDIR : uint32_t {
    kTX_INPUT=0, // TXD pin is an input in single-wire mode.
    kTX_OUTPUT=1, // TXD pin is an output in single-wire mode.
  };
  TXDIR GetTXDIR() const { return GetBit(29); }
  void WaitForTXDIR(TXDIR value) { WaitForBit(29, value); }
  
  // Receive Bit 9 / Transmit Bit 8
  //
  bool GetR9T8() const { return GetBit(30); }
  void WaitForR9T8(bool value) { WaitForBit(30, value); }
  
  // Receive Bit 8 / Transmit Bit 9
  //
  bool GetR8T9() const { return GetBit(31); }
  void WaitForR8T9(bool value) { WaitForBit(31, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Data Register
struct DATA_t : public Register {
  DATA_t() : Register(0x4007c01c) {}

  
  // R0T0
  //
  bool GetR0T0() const { return GetBit(0); }
  void WaitForR0T0(bool value) { WaitForBit(0, value); }
  
  // R1T1
  //
  bool GetR1T1() const { return GetBit(1); }
  void WaitForR1T1(bool value) { WaitForBit(1, value); }
  
  // R2T2
  //
  bool GetR2T2() const { return GetBit(2); }
  void WaitForR2T2(bool value) { WaitForBit(2, value); }
  
  // R3T3
  //
  bool GetR3T3() const { return GetBit(3); }
  void WaitForR3T3(bool value) { WaitForBit(3, value); }
  
  // R4T4
  //
  bool GetR4T4() const { return GetBit(4); }
  void WaitForR4T4(bool value) { WaitForBit(4, value); }
  
  // R5T5
  //
  bool GetR5T5() const { return GetBit(5); }
  void WaitForR5T5(bool value) { WaitForBit(5, value); }
  
  // R6T6
  //
  bool GetR6T6() const { return GetBit(6); }
  void WaitForR6T6(bool value) { WaitForBit(6, value); }
  
  // R7T7
  //
  bool GetR7T7() const { return GetBit(7); }
  void WaitForR7T7(bool value) { WaitForBit(7, value); }
  
  // R8T8
  //
  bool GetR8T8() const { return GetBit(8); }
  void WaitForR8T8(bool value) { WaitForBit(8, value); }
  
  // R9T9
  //
  bool GetR9T9() const { return GetBit(9); }
  void WaitForR9T9(bool value) { WaitForBit(9, value); }
  
  // Idle Line
  //
  enum class IDLINE : uint32_t {
    kNO_IDLE=0, // Receiver was not idle before receiving this character.
    kIDLE=1, // Receiver was idle before receiving this character.
  };
  IDLINE GetIDLINE() const { return GetBit(11); }
  void WaitForIDLINE(IDLINE value) { WaitForBit(11, value); }
  
  // Receive Buffer Empty
  //
  enum class RXEMPT : uint32_t {
    kNOT_EMPTY=0, // Receive buffer contains valid data.
    kEMPTY=1, // Receive buffer is empty, data returned on read is not valid.
  };
  RXEMPT GetRXEMPT() const { return GetBit(12); }
  void WaitForRXEMPT(RXEMPT value) { WaitForBit(12, value); }
  
  // Frame Error / Transmit Special Character
  //
  enum class FRETSC : uint32_t {
    kNO_ERROR=0, // The dataword is received without a frame error on read, or transmit a normal character on write.
    kERROR=1, // The dataword is received with a frame error, or transmit an idle or break character on transmit.
  };
  FRETSC GetFRETSC() const { return GetBit(13); }
  void WaitForFRETSC(FRETSC value) { WaitForBit(13, value); }
  
  // Parity Error
  //
  enum class PARITYE : uint32_t {
    kNO_PARITY=0, // The dataword is received without a parity error.
    kPARITY=1, // The dataword is received with a parity error.
  };
  PARITYE GetPARITYE() const { return GetBit(14); }
  void WaitForPARITYE(PARITYE value) { WaitForBit(14, value); }
  
  // Noisy Data Received
  //
  enum class NOISY : uint32_t {
    kNO_NOISE=0, // The dataword is received without noise.
    kNOISE=1, // The data is received with noise.
  };
  NOISY GetNOISY() const { return GetBit(15); }
  void WaitForNOISY(NOISY value) { WaitForBit(15, value); }
  
  void Reset() { this->Set(0x00001000); }
};

// LPUART Match Address Register
struct MATCH_t : public Register {
  MATCH_t() : Register(0x4007c020) {}

  
  // Match Address 1
  //
  uint32_t GetMA1() const { return GetBits<10>(0).to_ulong(); }
  void WaitForMA1(uint32_t value) { WaitForBits<10>(0, value); }
  
  // Match Address 2
  //
  uint32_t GetMA2() const { return GetBits<10>(16).to_ulong(); }
  void WaitForMA2(uint32_t value) { WaitForBits<10>(16, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Modem IrDA Register
struct MODIR_t : public Register {
  MODIR_t() : Register(0x4007c024) {}

  
  // Transmitter clear-to-send enable
  //
  enum class TXCTSE : uint32_t {
    kDISABLED=0, // CTS has no effect on the transmitter.
    kENABLED=1, // Enables clear-to-send operation. The transmitter checks the state of CTS each time it is ready to send a character. If CTS is asserted, the character is sent. If CTS is deasserted, the signal TXD remains in the mark state and transmission is delayed until CTS is asserted. Changes in CTS as a character is being sent do not affect its transmission.
  };
  TXCTSE GetTXCTSE() const { return GetBit(0); }
  void WaitForTXCTSE(TXCTSE value) { WaitForBit(0, value); }
  
  // Transmitter request-to-send enable
  //
  enum class TXRTSE : uint32_t {
    kDISABLED=0, // The transmitter has no effect on RTS.
    kENABLED=1, // When a character is placed into an empty transmit shift register, RTS asserts one bit time before the start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter FIFO and shift register are completely sent, including the last stop bit.
  };
  TXRTSE GetTXRTSE() const { return GetBit(1); }
  void WaitForTXRTSE(TXRTSE value) { WaitForBit(1, value); }
  
  // Transmitter request-to-send polarity
  //
  enum class TXRTSPOL : uint32_t {
    kLOW=0, // Transmitter RTS is active low.
    kHIGH=1, // Transmitter RTS is active high.
  };
  TXRTSPOL GetTXRTSPOL() const { return GetBit(2); }
  void WaitForTXRTSPOL(TXRTSPOL value) { WaitForBit(2, value); }
  
  // Receiver request-to-send enable
  //
  enum class RXRTSE : uint32_t {
    kDISABLED=0, // The receiver has no effect on RTS.
    kENABLED=1, // RTS is deasserted if the receiver data register is full or a start bit has been detected that would cause the receiver data register to become full. RTS is asserted if the receiver data register is not full and has not detected a start bit that would cause the receiver data register to become full.
  };
  RXRTSE GetRXRTSE() const { return GetBit(3); }
  void WaitForRXRTSE(RXRTSE value) { WaitForBit(3, value); }
  
  // Transmit CTS Configuration
  //
  enum class TXCTSC : uint32_t {
    kSTART=0, // CTS input is sampled at the start of each character.
    kIDLE=1, // CTS input is sampled when the transmitter is idle.
  };
  TXCTSC GetTXCTSC() const { return GetBit(4); }
  void WaitForTXCTSC(TXCTSC value) { WaitForBit(4, value); }
  
  // Transmit CTS Source
  //
  enum class TXCTSSRC : uint32_t {
    kCTS=0, // CTS input is the CTS_B pin.
    kMATCH=1, // CTS input is an internal connection to the receiver address match result.
  };
  TXCTSSRC GetTXCTSSRC() const { return GetBit(5); }
  void WaitForTXCTSSRC(TXCTSSRC value) { WaitForBit(5, value); }
  
  // Receive RTS Configuration
  //
  uint32_t GetRTSWATER() const { return GetBits<2>(8).to_ulong(); }
  void WaitForRTSWATER(uint32_t value) { WaitForBits<2>(8, value); }
  
  // Transmitter narrow pulse
  //
  enum class TNP : uint32_t {
    kONE_SAMPLE=0, // 1/OSR.
    kTWO_SAMPLE=1, // 2/OSR.
    kTHREE_SAMPLE=2, // 3/OSR.
    kFOUR_SAMPLE=3, // 4/OSR.
  };
  TNP GetTNP() const { return GetBits<2>(16).to_ulong(); }
  void WaitForTNP(TNP value) { WaitForBits<2>(16, value); }
  
  // Infrared enable
  //
  enum class IREN : uint32_t {
    kDISABLED=0, // IR disabled.
    kENABLED=1, // IR enabled.
  };
  IREN GetIREN() const { return GetBit(18); }
  void WaitForIREN(IREN value) { WaitForBit(18, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART FIFO Register
struct FIFO_t : public Register {
  FIFO_t() : Register(0x4007c028) {}

  
  // Receive FIFO Buffer Depth
  //
  enum class RXFIFOSIZE : uint32_t {
    kFIFO_1=0, // Receive FIFO/Buffer depth = 1 dataword.
    kFIFO_4=1, // Receive FIFO/Buffer depth = 4 datawords.
    kFIFO_8=2, // Receive FIFO/Buffer depth = 8 datawords.
    kFIFO_16=3, // Receive FIFO/Buffer depth = 16 datawords.
    kFIFO_32=4, // Receive FIFO/Buffer depth = 32 datawords.
    kFIFO_64=5, // Receive FIFO/Buffer depth = 64 datawords.
    kFIFO_128=6, // Receive FIFO/Buffer depth = 128 datawords.
    kFIFO_256=7, // Receive FIFO/Buffer depth = 256 datawords.
  };
  RXFIFOSIZE GetRXFIFOSIZE() const { return GetBits<3>(0).to_ulong(); }
  void WaitForRXFIFOSIZE(RXFIFOSIZE value) { WaitForBits<3>(0, value); }
  
  // Receive FIFO Enable
  //
  enum class RXFE : uint32_t {
    kDISABLED=0, // Receive FIFO is not enabled. Buffer depth is 1.
    kENABLED=1, // Receive FIFO is enabled. Buffer depth is indicted by RXFIFOSIZE.
  };
  RXFE GetRXFE() const { return GetBit(3); }
  void WaitForRXFE(RXFE value) { WaitForBit(3, value); }
  
  // Transmit FIFO Buffer Depth
  //
  enum class TXFIFOSIZE : uint32_t {
    kFIFO_1=0, // Transmit FIFO/Buffer depth = 1 dataword.
    kFIFO_4=1, // Transmit FIFO/Buffer depth = 4 datawords.
    kFIFO_8=2, // Transmit FIFO/Buffer depth = 8 datawords.
    kFIFO_16=3, // Transmit FIFO/Buffer depth = 16 datawords.
    kFIFO_32=4, // Transmit FIFO/Buffer depth = 32 datawords.
    kFIFO_64=5, // Transmit FIFO/Buffer depth = 64 datawords.
    kFIFO_128=6, // Transmit FIFO/Buffer depth = 128 datawords.
    kFIFO_256=7, // Transmit FIFO/Buffer depth = 256 datawords
  };
  TXFIFOSIZE GetTXFIFOSIZE() const { return GetBits<3>(4).to_ulong(); }
  void WaitForTXFIFOSIZE(TXFIFOSIZE value) { WaitForBits<3>(4, value); }
  
  // Transmit FIFO Enable
  //
  enum class TXFE : uint32_t {
    kDISABLED=0, // Transmit FIFO is not enabled. Buffer depth is 1.
    kENABLED=1, // Transmit FIFO is enabled. Buffer depth is indicated by TXFIFOSIZE.
  };
  TXFE GetTXFE() const { return GetBit(7); }
  void WaitForTXFE(TXFE value) { WaitForBit(7, value); }
  
  // Receive FIFO Underflow Interrupt Enable
  //
  enum class RXUFE : uint32_t {
    kDISABLED=0, // RXUF flag does not generate an interrupt to the host.
    kENABLED=1, // RXUF flag generates an interrupt to the host.
  };
  RXUFE GetRXUFE() const { return GetBit(8); }
  void WaitForRXUFE(RXUFE value) { WaitForBit(8, value); }
  
  // Transmit FIFO Overflow Interrupt Enable
  //
  enum class TXOFE : uint32_t {
    kDISABLED=0, // TXOF flag does not generate an interrupt to the host.
    kENABLED=1, // TXOF flag generates an interrupt to the host.
  };
  TXOFE GetTXOFE() const { return GetBit(9); }
  void WaitForTXOFE(TXOFE value) { WaitForBit(9, value); }
  
  // Receiver Idle Empty Enable
  //
  enum class RXIDEN : uint32_t {
    kDISABLED=0, // Disable RDRF assertion due to partially filled FIFO when receiver is idle.
    kIDLE_1=1, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 1 character.
    kIDLE_2=2, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 2 characters.
    kIDLE_4=3, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 4 characters.
    kIDLE_8=4, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 8 characters.
    kIDLE_16=5, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 16 characters.
    kIDLE_32=6, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 32 characters.
    kIDLE_64=7, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 64 characters.
  };
  RXIDEN GetRXIDEN() const { return GetBits<3>(10).to_ulong(); }
  void WaitForRXIDEN(RXIDEN value) { WaitForBits<3>(10, value); }
  
  // Receive FIFO Flush
  //
  enum class RXFLUSH : uint32_t {
    kNO_EFFECT=0, // No flush operation occurs.
    kRXFIFO_RST=1, // All data in the receive FIFO/buffer is cleared out.
  };
  RXFLUSH GetRXFLUSH() const { return GetBit(14); }
  void WaitForRXFLUSH(RXFLUSH value) { WaitForBit(14, value); }
  
  // Transmit FIFO Flush
  //
  enum class TXFLUSH : uint32_t {
    kNO_EFFECT=0, // No flush operation occurs.
    kTXFIFO_RST=1, // All data in the transmit FIFO is cleared out.
  };
  TXFLUSH GetTXFLUSH() const { return GetBit(15); }
  void WaitForTXFLUSH(TXFLUSH value) { WaitForBit(15, value); }
  
  // Receiver FIFO Underflow Flag
  //
  enum class RXUF : uint32_t {
    kNO_UNDERFLOW=0, // No receive FIFO underflow has occurred since the last time the flag was cleared.
    kUNDERFLOW=1, // At least one receive FIFO underflow has occurred since the last time the flag was cleared.
  };
  RXUF GetRXUF() const { return GetBit(16); }
  void WaitForRXUF(RXUF value) { WaitForBit(16, value); }
  
  // Transmitter FIFO Overflow Flag
  //
  enum class TXOF : uint32_t {
    kNO_OVERFLOW=0, // No transmit FIFO overflow has occurred since the last time the flag was cleared.
    kOVERFLOW=1, // At least one transmit FIFO overflow has occurred since the last time the flag was cleared.
  };
  TXOF GetTXOF() const { return GetBit(17); }
  void WaitForTXOF(TXOF value) { WaitForBit(17, value); }
  
  // Receive FIFO/Buffer Empty
  //
  enum class RXEMPT : uint32_t {
    kNOT_EMPTY=0, // Receive buffer is not empty.
    kEMPTY=1, // Receive buffer is empty.
  };
  RXEMPT GetRXEMPT() const { return GetBit(22); }
  void WaitForRXEMPT(RXEMPT value) { WaitForBit(22, value); }
  
  // Transmit FIFO/Buffer Empty
  //
  enum class TXEMPT : uint32_t {
    kNOT_EMPTY=0, // Transmit buffer is not empty.
    kEMPTY=1, // Transmit buffer is empty.
  };
  TXEMPT GetTXEMPT() const { return GetBit(23); }
  void WaitForTXEMPT(TXEMPT value) { WaitForBit(23, value); }
  
  void Reset() { this->Set(0x00c00011); }
};

// LPUART Watermark Register
struct WATER_t : public Register {
  WATER_t() : Register(0x4007c02c) {}

  
  // Transmit Watermark
  //
  uint32_t GetTXWATER() const { return GetBits<2>(0).to_ulong(); }
  void WaitForTXWATER(uint32_t value) { WaitForBits<2>(0, value); }
  
  // Transmit Counter
  //
  uint32_t GetTXCOUNT() const { return GetBits<3>(8).to_ulong(); }
  void WaitForTXCOUNT(uint32_t value) { WaitForBits<3>(8, value); }
  
  // Receive Watermark
  //
  uint32_t GetRXWATER() const { return GetBits<2>(16).to_ulong(); }
  void WaitForRXWATER(uint32_t value) { WaitForBits<2>(16, value); }
  
  // Receive Counter
  //
  uint32_t GetRXCOUNT() const { return GetBits<3>(24).to_ulong(); }
  void WaitForRXCOUNT(uint32_t value) { WaitForBits<3>(24, value); }
  
  void Reset() { this->Set(0x00000000); }
};


struct Registers {
  VERID_t VERID{};
  PARAM_t PARAM{};
  GLOBAL_t GLOBAL{};
  PINCFG_t PINCFG{};
  BAUD_t BAUD{};
  STAT_t STAT{};
  CTRL_t CTRL{};
  DATA_t DATA{};
  MATCH_t MATCH{};
  MODIR_t MODIR{};
  FIFO_t FIFO{};
  WATER_t WATER{};
};

} // namespace LPUART1