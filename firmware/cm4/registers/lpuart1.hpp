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

namespace nLPUART1 {

// Version ID Register
struct VERID_t : public Register {
  VERID_t() : Register(0x4007c000) {}

  
  // Feature Identification Number
  //
  enum class eFEATURE : uint32_t {
    eSTANDARD=1, // Standard feature set.
    eMODEM=3, // Standard feature set with MODEM/IrDA support.
  };
  eFEATURE GetFEATURE() const { return static_cast<eFEATURE>(GetBits<16>(0).to_ulong()); }
  void WaitForFEATURE(eFEATURE value) { WaitForBits<16>(0, static_cast<uint32_t>(value)); }
  
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
  enum class eRST : uint32_t {
    eNO_EFFECT=0, // Module is not reset.
    eRESET=1, // Module is reset.
  };
  void SetRST(eRST value) { SetBit(1, static_cast<uint32_t>(value)); }
  eRST GetRST() const { return static_cast<eRST>(GetBit(1)); }
  void WaitForRST(eRST value) { WaitForBit(1, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Pin Configuration Register
struct PINCFG_t : public Register {
  PINCFG_t() : Register(0x4007c00c) {}

  
  // Trigger Select
  //
  enum class eTRGSEL : uint32_t {
    eDISABLED=0, // Input trigger is disabled.
    eTRG_RXD=1, // Input trigger is used instead of RXD pin input.
    eTRG_CTS=2, // Input trigger is used instead of CTS_B pin input.
    eTRG_TXD=3, // Input trigger is used to modulate the TXD pin output. The TXD pin output (after TXINV configuration) is internally ANDed with the input trigger.
  };
  void SetTRGSEL(eTRGSEL value) { SetBits<2>(0, static_cast<uint32_t>(value)); }
  eTRGSEL GetTRGSEL() const { return static_cast<eTRGSEL>(GetBits<2>(0).to_ulong()); }
  void WaitForTRGSEL(eTRGSEL value) { WaitForBits<2>(0, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Baud Rate Register
struct BAUD_t : public Register {
  BAUD_t() : Register(0x4007c010) {}

  
  // Baud Rate Modulo Divisor.
  //
  void SetSBR(uint32_t value) { SetBits<13>(0, value); }
  uint32_t GetSBR() const { return GetBits<13>(0).to_ulong(); }
  void WaitForSBR(uint32_t value) { WaitForBits<13>(0, value); }
  
  // Stop Bit Number Select
  //
  enum class eSBNS : uint32_t {
    eONE=0, // One stop bit.
    eTWO=1, // Two stop bits.
  };
  void SetSBNS(eSBNS value) { SetBit(13, static_cast<uint32_t>(value)); }
  eSBNS GetSBNS() const { return static_cast<eSBNS>(GetBit(13)); }
  void WaitForSBNS(eSBNS value) { WaitForBit(13, static_cast<uint32_t>(value)); }
  
  // RX Input Active Edge Interrupt Enable
  //
  enum class eRXEDGIE : uint32_t {
    eDISABLE=0, // Hardware interrupts from STAT[RXEDGIF] are disabled.
    eENABLE=1, // Hardware interrupt is requested when STAT[RXEDGIF] flag is 1.
  };
  void SetRXEDGIE(eRXEDGIE value) { SetBit(14, static_cast<uint32_t>(value)); }
  eRXEDGIE GetRXEDGIE() const { return static_cast<eRXEDGIE>(GetBit(14)); }
  void WaitForRXEDGIE(eRXEDGIE value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // LIN Break Detect Interrupt Enable
  //
  enum class eLBKDIE : uint32_t {
    eDISABLE=0, // Hardware interrupts from STAT[LBKDIF] flag are disabled (use polling).
    eENABLE=1, // Hardware interrupt is requested when STAT[LBKDIF] flag is 1.
  };
  void SetLBKDIE(eLBKDIE value) { SetBit(15, static_cast<uint32_t>(value)); }
  eLBKDIE GetLBKDIE() const { return static_cast<eLBKDIE>(GetBit(15)); }
  void WaitForLBKDIE(eLBKDIE value) { WaitForBit(15, static_cast<uint32_t>(value)); }
  
  // Resynchronization Disable
  //
  enum class eRESYNCDIS : uint32_t {
    eRESYNC=0, // Resynchronization during received data word is supported.
    eNO_RESYNC=1, // Resynchronization during received data word is disabled.
  };
  void SetRESYNCDIS(eRESYNCDIS value) { SetBit(16, static_cast<uint32_t>(value)); }
  eRESYNCDIS GetRESYNCDIS() const { return static_cast<eRESYNCDIS>(GetBit(16)); }
  void WaitForRESYNCDIS(eRESYNCDIS value) { WaitForBit(16, static_cast<uint32_t>(value)); }
  
  // Both Edge Sampling
  //
  enum class eBOTHEDGE : uint32_t {
    eDISABLED=0, // Receiver samples input data using the rising edge of the baud rate clock.
    eENABLED=1, // Receiver samples input data using the rising and falling edge of the baud rate clock.
  };
  void SetBOTHEDGE(eBOTHEDGE value) { SetBit(17, static_cast<uint32_t>(value)); }
  eBOTHEDGE GetBOTHEDGE() const { return static_cast<eBOTHEDGE>(GetBit(17)); }
  void WaitForBOTHEDGE(eBOTHEDGE value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // Match Configuration
  //
  enum class eMATCFG : uint32_t {
    eADDR_MATCH=0, // Address Match Wakeup
    eIDLE_MATCH=1, // Idle Match Wakeup
    eONOFF_MATCH=2, // Match On and Match Off
    eRWU_MATCH=3, // Enables RWU on Data Match and Match On/Off for transmitter CTS input
  };
  void SetMATCFG(eMATCFG value) { SetBits<2>(18, static_cast<uint32_t>(value)); }
  eMATCFG GetMATCFG() const { return static_cast<eMATCFG>(GetBits<2>(18).to_ulong()); }
  void WaitForMATCFG(eMATCFG value) { WaitForBits<2>(18, static_cast<uint32_t>(value)); }
  
  // Receiver Full DMA Enable
  //
  enum class eRDMAE : uint32_t {
    eDISABLED=0, // DMA request disabled.
    eENABLED=1, // DMA request enabled.
  };
  void SetRDMAE(eRDMAE value) { SetBit(21, static_cast<uint32_t>(value)); }
  eRDMAE GetRDMAE() const { return static_cast<eRDMAE>(GetBit(21)); }
  void WaitForRDMAE(eRDMAE value) { WaitForBit(21, static_cast<uint32_t>(value)); }
  
  // Transmitter DMA Enable
  //
  enum class eTDMAE : uint32_t {
    eDISABLED=0, // DMA request disabled.
    eENABLED=1, // DMA request enabled.
  };
  void SetTDMAE(eTDMAE value) { SetBit(23, static_cast<uint32_t>(value)); }
  eTDMAE GetTDMAE() const { return static_cast<eTDMAE>(GetBit(23)); }
  void WaitForTDMAE(eTDMAE value) { WaitForBit(23, static_cast<uint32_t>(value)); }
  
  // Oversampling Ratio
  //
  enum class eOSR : uint32_t {
    eDEFAULT=0, // Writing 0 to this field results in an oversampling ratio of 16
    eOSR_4=3, // Oversampling ratio of 4, requires BOTHEDGE to be set.
    eOSR_5=4, // Oversampling ratio of 5, requires BOTHEDGE to be set.
    eOSR_6=5, // Oversampling ratio of 6, requires BOTHEDGE to be set.
    eOSR_7=6, // Oversampling ratio of 7, requires BOTHEDGE to be set.
    eOSR_8=7, // Oversampling ratio of 8.
    eOSR_9=8, // Oversampling ratio of 9.
    eOSR_10=9, // Oversampling ratio of 10.
    eOSR_11=10, // Oversampling ratio of 11.
    eOSR_12=11, // Oversampling ratio of 12.
    eOSR_13=12, // Oversampling ratio of 13.
    eOSR_14=13, // Oversampling ratio of 14.
    eOSR_15=14, // Oversampling ratio of 15.
    eOSR_16=15, // Oversampling ratio of 16.
    eOSR_17=16, // Oversampling ratio of 17.
    eOSR_18=17, // Oversampling ratio of 18.
    eOSR_19=18, // Oversampling ratio of 19.
    eOSR_20=19, // Oversampling ratio of 20.
    eOSR_21=20, // Oversampling ratio of 21.
    eOSR_22=21, // Oversampling ratio of 22.
    eOSR_23=22, // Oversampling ratio of 23.
    eOSR_24=23, // Oversampling ratio of 24.
    eOSR_25=24, // Oversampling ratio of 25.
    eOSR_26=25, // Oversampling ratio of 26.
    eOSR_27=26, // Oversampling ratio of 27.
    eOSR_28=27, // Oversampling ratio of 28.
    eOSR_29=28, // Oversampling ratio of 29.
    eOSR_30=29, // Oversampling ratio of 30.
    eOSR_31=30, // Oversampling ratio of 31.
    eOSR_32=31, // Oversampling ratio of 32.
  };
  void SetOSR(eOSR value) { SetBits<5>(24, static_cast<uint32_t>(value)); }
  eOSR GetOSR() const { return static_cast<eOSR>(GetBits<5>(24).to_ulong()); }
  void WaitForOSR(eOSR value) { WaitForBits<5>(24, static_cast<uint32_t>(value)); }
  
  // 10-bit Mode select
  //
  enum class eM10 : uint32_t {
    eDISABLED=0, // Receiver and transmitter use 7-bit to 9-bit data characters.
    eENABLED=1, // Receiver and transmitter use 10-bit data characters.
  };
  void SetM10(eM10 value) { SetBit(29, static_cast<uint32_t>(value)); }
  eM10 GetM10() const { return static_cast<eM10>(GetBit(29)); }
  void WaitForM10(eM10 value) { WaitForBit(29, static_cast<uint32_t>(value)); }
  
  // Match Address Mode Enable 2
  //
  enum class eMAEN2 : uint32_t {
    eDISABLED=0, // Normal operation.
    eENABLED=1, // Enables automatic address matching or data matching mode for MATCH[MA2].
  };
  void SetMAEN2(eMAEN2 value) { SetBit(30, static_cast<uint32_t>(value)); }
  eMAEN2 GetMAEN2() const { return static_cast<eMAEN2>(GetBit(30)); }
  void WaitForMAEN2(eMAEN2 value) { WaitForBit(30, static_cast<uint32_t>(value)); }
  
  // Match Address Mode Enable 1
  //
  enum class eMAEN1 : uint32_t {
    eDISABLED=0, // Normal operation.
    eENABLED=1, // Enables automatic address matching or data matching mode for MATCH[MA1].
  };
  void SetMAEN1(eMAEN1 value) { SetBit(31, static_cast<uint32_t>(value)); }
  eMAEN1 GetMAEN1() const { return static_cast<eMAEN1>(GetBit(31)); }
  void WaitForMAEN1(eMAEN1 value) { WaitForBit(31, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x0f000004); }
};

// LPUART Status Register
struct STAT_t : public Register {
  STAT_t() : Register(0x4007c014) {}

  
  // Match 2 Flag
  //
  enum class eMA2F : uint32_t {
    eNOMATCH=0, // Received data is not equal to MA2
    eMATCH=1, // Received data is equal to MA2
  };
  void SetMA2F(eMA2F value) { SetBit(14, static_cast<uint32_t>(value)); }
  eMA2F GetMA2F() const { return static_cast<eMA2F>(GetBit(14)); }
  void WaitForMA2F(eMA2F value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // Match 1 Flag
  //
  enum class eMA1F : uint32_t {
    eNOMATCH=0, // Received data is not equal to MA1
    eMATCH=1, // Received data is equal to MA1
  };
  void SetMA1F(eMA1F value) { SetBit(15, static_cast<uint32_t>(value)); }
  eMA1F GetMA1F() const { return static_cast<eMA1F>(GetBit(15)); }
  void WaitForMA1F(eMA1F value) { WaitForBit(15, static_cast<uint32_t>(value)); }
  
  // Parity Error Flag
  //
  enum class ePF : uint32_t {
    eNOPARITY=0, // No parity error.
    ePARITY=1, // Parity error.
  };
  void SetPF(ePF value) { SetBit(16, static_cast<uint32_t>(value)); }
  ePF GetPF() const { return static_cast<ePF>(GetBit(16)); }
  void WaitForPF(ePF value) { WaitForBit(16, static_cast<uint32_t>(value)); }
  
  // Framing Error Flag
  //
  enum class eFE : uint32_t {
    eNOERROR=0, // No framing error detected. This does not guarantee the framing is correct.
    eERROR=1, // Framing error.
  };
  void SetFE(eFE value) { SetBit(17, static_cast<uint32_t>(value)); }
  eFE GetFE() const { return static_cast<eFE>(GetBit(17)); }
  void WaitForFE(eFE value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // Noise Flag
  //
  enum class eNF : uint32_t {
    eNONOISE=0, // No noise detected.
    eNOISE=1, // Noise detected in the received character in the DATA register.
  };
  void SetNF(eNF value) { SetBit(18, static_cast<uint32_t>(value)); }
  eNF GetNF() const { return static_cast<eNF>(GetBit(18)); }
  void WaitForNF(eNF value) { WaitForBit(18, static_cast<uint32_t>(value)); }
  
  // Receiver Overrun Flag
  //
  enum class eOR : uint32_t {
    eNO_OVERRUN=0, // No overrun.
    eOVERRUN=1, // Receive overrun (new LPUART data lost).
  };
  void SetOR(eOR value) { SetBit(19, static_cast<uint32_t>(value)); }
  eOR GetOR() const { return static_cast<eOR>(GetBit(19)); }
  void WaitForOR(eOR value) { WaitForBit(19, static_cast<uint32_t>(value)); }
  
  // Idle Line Flag
  //
  enum class eIDLE : uint32_t {
    eNOIDLE=0, // No idle line detected.
    eIDLE=1, // Idle line is detected.
  };
  void SetIDLE(eIDLE value) { SetBit(20, static_cast<uint32_t>(value)); }
  eIDLE GetIDLE() const { return static_cast<eIDLE>(GetBit(20)); }
  void WaitForIDLE(eIDLE value) { WaitForBit(20, static_cast<uint32_t>(value)); }
  
  // Receive Data Register Full Flag
  //
  enum class eRDRF : uint32_t {
    eNO_RXDATA=0, // Receive FIFO level is less than watermark.
    eRXDATA=1, // Receive FIFO level is equal or greater than watermark.
  };
  eRDRF GetRDRF() const { return static_cast<eRDRF>(GetBit(21)); }
  void WaitForRDRF(eRDRF value) { WaitForBit(21, static_cast<uint32_t>(value)); }
  
  // Transmission Complete Flag
  //
  enum class eTC : uint32_t {
    eACTIVE=0, // Transmitter active (sending data, a preamble, or a break).
    eCOMPLETE=1, // Transmitter idle (transmission activity complete).
  };
  eTC GetTC() const { return static_cast<eTC>(GetBit(22)); }
  void WaitForTC(eTC value) { WaitForBit(22, static_cast<uint32_t>(value)); }
  
  // Transmit Data Register Empty Flag
  //
  enum class eTDRE : uint32_t {
    eTXDATA=0, // Transmit FIFO level is greater than watermark.
    eNO_TXDATA=1, // Transmit FIFO level is equal or less than watermark.
  };
  eTDRE GetTDRE() const { return static_cast<eTDRE>(GetBit(23)); }
  void WaitForTDRE(eTDRE value) { WaitForBit(23, static_cast<uint32_t>(value)); }
  
  // Receiver Active Flag
  //
  enum class eRAF : uint32_t {
    eIDLE=0, // LPUART receiver idle waiting for a start bit.
    eACTIVE=1, // LPUART receiver active (RXD input not idle).
  };
  eRAF GetRAF() const { return static_cast<eRAF>(GetBit(24)); }
  void WaitForRAF(eRAF value) { WaitForBit(24, static_cast<uint32_t>(value)); }
  
  // LIN Break Detection Enable
  //
  enum class eLBKDE : uint32_t {
    eDISABLED=0, // LIN break detect is disabled, normal break character can be detected.
    eENABLED=1, // LIN break detect is enabled. LIN break character is detected at length of 11 bit times (if M = 0) or 12 (if M = 1) or 13 (M10 = 1).
  };
  void SetLBKDE(eLBKDE value) { SetBit(25, static_cast<uint32_t>(value)); }
  eLBKDE GetLBKDE() const { return static_cast<eLBKDE>(GetBit(25)); }
  void WaitForLBKDE(eLBKDE value) { WaitForBit(25, static_cast<uint32_t>(value)); }
  
  // Break Character Generation Length
  //
  enum class eBRK13 : uint32_t {
    eSHORT=0, // Break character is transmitted with length of 9 to 13 bit times.
    eLONG=1, // Break character is transmitted with length of 12 to 15 bit times.
  };
  void SetBRK13(eBRK13 value) { SetBit(26, static_cast<uint32_t>(value)); }
  eBRK13 GetBRK13() const { return static_cast<eBRK13>(GetBit(26)); }
  void WaitForBRK13(eBRK13 value) { WaitForBit(26, static_cast<uint32_t>(value)); }
  
  // Receive Wake Up Idle Detect
  //
  enum class eRWUID : uint32_t {
    eIDLE_NOTSET=0, // During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character. During address match wakeup, the IDLE bit does not set when an address does not match.
    eIDLE_SET=1, // During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character. During address match wakeup, the IDLE bit does set when an address does not match.
  };
  void SetRWUID(eRWUID value) { SetBit(27, static_cast<uint32_t>(value)); }
  eRWUID GetRWUID() const { return static_cast<eRWUID>(GetBit(27)); }
  void WaitForRWUID(eRWUID value) { WaitForBit(27, static_cast<uint32_t>(value)); }
  
  // Receive Data Inversion
  //
  enum class eRXINV : uint32_t {
    eNOT_INVERTED=0, // Receive data not inverted.
    eINVERTED=1, // Receive data inverted.
  };
  void SetRXINV(eRXINV value) { SetBit(28, static_cast<uint32_t>(value)); }
  eRXINV GetRXINV() const { return static_cast<eRXINV>(GetBit(28)); }
  void WaitForRXINV(eRXINV value) { WaitForBit(28, static_cast<uint32_t>(value)); }
  
  // MSB First
  //
  enum class eMSBF : uint32_t {
    eLSB_FIRST=0, // LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
    eMSB_FIRST=1, // MSB (identified as bit9, bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of CTRL[M], CTRL[PE] and BAUD[M10]. .
  };
  void SetMSBF(eMSBF value) { SetBit(29, static_cast<uint32_t>(value)); }
  eMSBF GetMSBF() const { return static_cast<eMSBF>(GetBit(29)); }
  void WaitForMSBF(eMSBF value) { WaitForBit(29, static_cast<uint32_t>(value)); }
  
  // RXD Pin Active Edge Interrupt Flag
  //
  enum class eRXEDGIF : uint32_t {
    eNO_EDGE=0, // No active edge on the receive pin has occurred.
    eEDGE=1, // An active edge on the receive pin has occurred.
  };
  void SetRXEDGIF(eRXEDGIF value) { SetBit(30, static_cast<uint32_t>(value)); }
  eRXEDGIF GetRXEDGIF() const { return static_cast<eRXEDGIF>(GetBit(30)); }
  void WaitForRXEDGIF(eRXEDGIF value) { WaitForBit(30, static_cast<uint32_t>(value)); }
  
  // LIN Break Detect Interrupt Flag
  //
  enum class eLBKDIF : uint32_t {
    eNOT_DETECTED=0, // No LIN break character has been detected.
    eDETECTED=1, // LIN break character has been detected.
  };
  void SetLBKDIF(eLBKDIF value) { SetBit(31, static_cast<uint32_t>(value)); }
  eLBKDIF GetLBKDIF() const { return static_cast<eLBKDIF>(GetBit(31)); }
  void WaitForLBKDIF(eLBKDIF value) { WaitForBit(31, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00c00000); }
};

// LPUART Control Register
struct CTRL_t : public Register {
  CTRL_t() : Register(0x4007c018) {}

  
  // Parity Type
  //
  enum class ePT : uint32_t {
    eEVEN=0, // Even parity.
    eODD=1, // Odd parity.
  };
  void SetPT(ePT value) { SetBit(0, static_cast<uint32_t>(value)); }
  ePT GetPT() const { return static_cast<ePT>(GetBit(0)); }
  void WaitForPT(ePT value) { WaitForBit(0, static_cast<uint32_t>(value)); }
  
  // Parity Enable
  //
  enum class ePE : uint32_t {
    eDISABLED=0, // No hardware parity generation or checking.
    eENABLED=1, // Parity enabled.
  };
  void SetPE(ePE value) { SetBit(1, static_cast<uint32_t>(value)); }
  ePE GetPE() const { return static_cast<ePE>(GetBit(1)); }
  void WaitForPE(ePE value) { WaitForBit(1, static_cast<uint32_t>(value)); }
  
  // Idle Line Type Select
  //
  enum class eILT : uint32_t {
    eFROM_START=0, // Idle character bit count starts after start bit.
    eFROM_STOP=1, // Idle character bit count starts after stop bit.
  };
  void SetILT(eILT value) { SetBit(2, static_cast<uint32_t>(value)); }
  eILT GetILT() const { return static_cast<eILT>(GetBit(2)); }
  void WaitForILT(eILT value) { WaitForBit(2, static_cast<uint32_t>(value)); }
  
  // Receiver Wakeup Method Select
  //
  enum class eWAKE : uint32_t {
    eIDLE=0, // Configures RWU for idle-line wakeup.
    eMARK=1, // Configures RWU with address-mark wakeup.
  };
  void SetWAKE(eWAKE value) { SetBit(3, static_cast<uint32_t>(value)); }
  eWAKE GetWAKE() const { return static_cast<eWAKE>(GetBit(3)); }
  void WaitForWAKE(eWAKE value) { WaitForBit(3, static_cast<uint32_t>(value)); }
  
  // 9-Bit or 8-Bit Mode Select
  //
  enum class eM : uint32_t {
    eDATA8=0, // Receiver and transmitter use 8-bit data characters.
    eDATA9=1, // Receiver and transmitter use 9-bit data characters.
  };
  void SetM(eM value) { SetBit(4, static_cast<uint32_t>(value)); }
  eM GetM() const { return static_cast<eM>(GetBit(4)); }
  void WaitForM(eM value) { WaitForBit(4, static_cast<uint32_t>(value)); }
  
  // Receiver Source Select
  //
  enum class eRSRC : uint32_t {
    eNO_EFFECT=0, // Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the LPUART does not use the RXD pin.
    eONEWIRE=1, // Single-wire LPUART mode where the TXD pin is connected to the transmitter output and receiver input.
  };
  void SetRSRC(eRSRC value) { SetBit(5, static_cast<uint32_t>(value)); }
  eRSRC GetRSRC() const { return static_cast<eRSRC>(GetBit(5)); }
  void WaitForRSRC(eRSRC value) { WaitForBit(5, static_cast<uint32_t>(value)); }
  
  // Doze Enable
  //
  enum class eDOZEEN : uint32_t {
    eENABLED=0, // LPUART is enabled in Doze mode.
    eDISABLED=1, // LPUART is disabled in Doze mode .
  };
  void SetDOZEEN(eDOZEEN value) { SetBit(6, static_cast<uint32_t>(value)); }
  eDOZEEN GetDOZEEN() const { return static_cast<eDOZEEN>(GetBit(6)); }
  void WaitForDOZEEN(eDOZEEN value) { WaitForBit(6, static_cast<uint32_t>(value)); }
  
  // Loop Mode Select
  //
  enum class eLOOPS : uint32_t {
    eNOFFECT=0, // Normal operation - RXD and TXD use separate pins.
    eLOOPBACK=1, // Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input (see RSRC bit).
  };
  void SetLOOPS(eLOOPS value) { SetBit(7, static_cast<uint32_t>(value)); }
  eLOOPS GetLOOPS() const { return static_cast<eLOOPS>(GetBit(7)); }
  void WaitForLOOPS(eLOOPS value) { WaitForBit(7, static_cast<uint32_t>(value)); }
  
  // Idle Configuration
  //
  enum class eIDLECFG : uint32_t {
    eIDLE_1=0, // 1 idle character
    eIDLE_2=1, // 2 idle characters
    eIDLE_4=2, // 4 idle characters
    eIDLE_8=3, // 8 idle characters
    eIDLE_16=4, // 16 idle characters
    eIDLE_32=5, // 32 idle characters
    eIDLE_64=6, // 64 idle characters
    eIDLE_128=7, // 128 idle characters
  };
  void SetIDLECFG(eIDLECFG value) { SetBits<3>(8, static_cast<uint32_t>(value)); }
  eIDLECFG GetIDLECFG() const { return static_cast<eIDLECFG>(GetBits<3>(8).to_ulong()); }
  void WaitForIDLECFG(eIDLECFG value) { WaitForBits<3>(8, static_cast<uint32_t>(value)); }
  
  // 7-Bit Mode Select
  //
  enum class eM7 : uint32_t {
    eNO_EFFECT=0, // Receiver and transmitter use 8-bit to 10-bit data characters.
    eDATA7=1, // Receiver and transmitter use 7-bit data characters.
  };
  void SetM7(eM7 value) { SetBit(11, static_cast<uint32_t>(value)); }
  eM7 GetM7() const { return static_cast<eM7>(GetBit(11)); }
  void WaitForM7(eM7 value) { WaitForBit(11, static_cast<uint32_t>(value)); }
  
  // Match 2 Interrupt Enable
  //
  enum class eMA2IE : uint32_t {
    eDISABLED=0, // MA2F interrupt disabled
    eENABLED=1, // MA2F interrupt enabled
  };
  void SetMA2IE(eMA2IE value) { SetBit(14, static_cast<uint32_t>(value)); }
  eMA2IE GetMA2IE() const { return static_cast<eMA2IE>(GetBit(14)); }
  void WaitForMA2IE(eMA2IE value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // Match 1 Interrupt Enable
  //
  enum class eMA1IE : uint32_t {
    eDISABLED=0, // MA1F interrupt disabled
    eENABLED=1, // MA1F interrupt enabled
  };
  void SetMA1IE(eMA1IE value) { SetBit(15, static_cast<uint32_t>(value)); }
  eMA1IE GetMA1IE() const { return static_cast<eMA1IE>(GetBit(15)); }
  void WaitForMA1IE(eMA1IE value) { WaitForBit(15, static_cast<uint32_t>(value)); }
  
  // Send Break
  //
  enum class eSBK : uint32_t {
    eNO_EFFECT=0, // Normal transmitter operation.
    eTX_BREAK=1, // Queue break character(s) to be sent.
  };
  void SetSBK(eSBK value) { SetBit(16, static_cast<uint32_t>(value)); }
  eSBK GetSBK() const { return static_cast<eSBK>(GetBit(16)); }
  void WaitForSBK(eSBK value) { WaitForBit(16, static_cast<uint32_t>(value)); }
  
  // Receiver Wakeup Control
  //
  enum class eRWU : uint32_t {
    eNO_EFFECT=0, // Normal receiver operation.
    eRX_WAKEUP=1, // LPUART receiver in standby waiting for wakeup condition.
  };
  void SetRWU(eRWU value) { SetBit(17, static_cast<uint32_t>(value)); }
  eRWU GetRWU() const { return static_cast<eRWU>(GetBit(17)); }
  void WaitForRWU(eRWU value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // Receiver Enable
  //
  enum class eRE : uint32_t {
    eDISABLED=0, // Receiver disabled.
    eENABLED=1, // Receiver enabled.
  };
  void SetRE(eRE value) { SetBit(18, static_cast<uint32_t>(value)); }
  eRE GetRE() const { return static_cast<eRE>(GetBit(18)); }
  void WaitForRE(eRE value) { WaitForBit(18, static_cast<uint32_t>(value)); }
  
  // Transmitter Enable
  //
  enum class eTE : uint32_t {
    eDISABLED=0, // Transmitter disabled.
    eENABLED=1, // Transmitter enabled.
  };
  void SetTE(eTE value) { SetBit(19, static_cast<uint32_t>(value)); }
  eTE GetTE() const { return static_cast<eTE>(GetBit(19)); }
  void WaitForTE(eTE value) { WaitForBit(19, static_cast<uint32_t>(value)); }
  
  // Idle Line Interrupt Enable
  //
  enum class eILIE : uint32_t {
    eDISABLED=0, // Hardware interrupts from IDLE disabled; use polling.
    eENABLED=1, // Hardware interrupt is requested when IDLE flag is 1.
  };
  void SetILIE(eILIE value) { SetBit(20, static_cast<uint32_t>(value)); }
  eILIE GetILIE() const { return static_cast<eILIE>(GetBit(20)); }
  void WaitForILIE(eILIE value) { WaitForBit(20, static_cast<uint32_t>(value)); }
  
  // Receiver Interrupt Enable
  //
  enum class eRIE : uint32_t {
    eDISABLED=0, // Hardware interrupts from RDRF disabled.
    eENABLED=1, // Hardware interrupt is requested when RDRF flag is 1.
  };
  void SetRIE(eRIE value) { SetBit(21, static_cast<uint32_t>(value)); }
  eRIE GetRIE() const { return static_cast<eRIE>(GetBit(21)); }
  void WaitForRIE(eRIE value) { WaitForBit(21, static_cast<uint32_t>(value)); }
  
  // Transmission Complete Interrupt Enable for
  //
  enum class eTCIE : uint32_t {
    eDISABLED=0, // Hardware interrupts from TC disabled.
    eENABLED=1, // Hardware interrupt is requested when TC flag is 1.
  };
  void SetTCIE(eTCIE value) { SetBit(22, static_cast<uint32_t>(value)); }
  eTCIE GetTCIE() const { return static_cast<eTCIE>(GetBit(22)); }
  void WaitForTCIE(eTCIE value) { WaitForBit(22, static_cast<uint32_t>(value)); }
  
  // Transmit Interrupt Enable
  //
  enum class eTIE : uint32_t {
    eDISABLED=0, // Hardware interrupts from TDRE disabled.
    eENABLED=1, // Hardware interrupt is requested when TDRE flag is 1.
  };
  void SetTIE(eTIE value) { SetBit(23, static_cast<uint32_t>(value)); }
  eTIE GetTIE() const { return static_cast<eTIE>(GetBit(23)); }
  void WaitForTIE(eTIE value) { WaitForBit(23, static_cast<uint32_t>(value)); }
  
  // Parity Error Interrupt Enable
  //
  enum class ePEIE : uint32_t {
    eDISABLED=0, // PF interrupts disabled; use polling).
    eENABLED=1, // Hardware interrupt is requested when PF is set.
  };
  void SetPEIE(ePEIE value) { SetBit(24, static_cast<uint32_t>(value)); }
  ePEIE GetPEIE() const { return static_cast<ePEIE>(GetBit(24)); }
  void WaitForPEIE(ePEIE value) { WaitForBit(24, static_cast<uint32_t>(value)); }
  
  // Framing Error Interrupt Enable
  //
  enum class eFEIE : uint32_t {
    eDISABLED=0, // FE interrupts disabled; use polling.
    eENABLED=1, // Hardware interrupt is requested when FE is set.
  };
  void SetFEIE(eFEIE value) { SetBit(25, static_cast<uint32_t>(value)); }
  eFEIE GetFEIE() const { return static_cast<eFEIE>(GetBit(25)); }
  void WaitForFEIE(eFEIE value) { WaitForBit(25, static_cast<uint32_t>(value)); }
  
  // Noise Error Interrupt Enable
  //
  enum class eNEIE : uint32_t {
    eDISABLED=0, // NF interrupts disabled; use polling.
    eENABLED=1, // Hardware interrupt is requested when NF is set.
  };
  void SetNEIE(eNEIE value) { SetBit(26, static_cast<uint32_t>(value)); }
  eNEIE GetNEIE() const { return static_cast<eNEIE>(GetBit(26)); }
  void WaitForNEIE(eNEIE value) { WaitForBit(26, static_cast<uint32_t>(value)); }
  
  // Overrun Interrupt Enable
  //
  enum class eORIE : uint32_t {
    eDISABLED=0, // OR interrupts disabled; use polling.
    eENABLED=1, // Hardware interrupt is requested when OR is set.
  };
  void SetORIE(eORIE value) { SetBit(27, static_cast<uint32_t>(value)); }
  eORIE GetORIE() const { return static_cast<eORIE>(GetBit(27)); }
  void WaitForORIE(eORIE value) { WaitForBit(27, static_cast<uint32_t>(value)); }
  
  // Transmit Data Inversion
  //
  enum class eTXINV : uint32_t {
    eNOT_INVERTED=0, // Transmit data not inverted.
    eINVERTED=1, // Transmit data inverted.
  };
  void SetTXINV(eTXINV value) { SetBit(28, static_cast<uint32_t>(value)); }
  eTXINV GetTXINV() const { return static_cast<eTXINV>(GetBit(28)); }
  void WaitForTXINV(eTXINV value) { WaitForBit(28, static_cast<uint32_t>(value)); }
  
  // TXD Pin Direction in Single-Wire Mode
  //
  enum class eTXDIR : uint32_t {
    eTX_INPUT=0, // TXD pin is an input in single-wire mode.
    eTX_OUTPUT=1, // TXD pin is an output in single-wire mode.
  };
  void SetTXDIR(eTXDIR value) { SetBit(29, static_cast<uint32_t>(value)); }
  eTXDIR GetTXDIR() const { return static_cast<eTXDIR>(GetBit(29)); }
  void WaitForTXDIR(eTXDIR value) { WaitForBit(29, static_cast<uint32_t>(value)); }
  
  // Receive Bit 9 / Transmit Bit 8
  //
  void SetR9T8(bool value) { SetBit(30, value); }
  bool GetR9T8() const { return GetBit(30); }
  void WaitForR9T8(bool value) { WaitForBit(30, value); }
  
  // Receive Bit 8 / Transmit Bit 9
  //
  void SetR8T9(bool value) { SetBit(31, value); }
  bool GetR8T9() const { return GetBit(31); }
  void WaitForR8T9(bool value) { WaitForBit(31, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Data Register
struct DATA_t : public Register {
  DATA_t() : Register(0x4007c01c) {}

  
  // R0T0
  //
  void SetR0T0(bool value) { SetBit(0, value); }
  bool GetR0T0() const { return GetBit(0); }
  void WaitForR0T0(bool value) { WaitForBit(0, value); }
  
  // R1T1
  //
  void SetR1T1(bool value) { SetBit(1, value); }
  bool GetR1T1() const { return GetBit(1); }
  void WaitForR1T1(bool value) { WaitForBit(1, value); }
  
  // R2T2
  //
  void SetR2T2(bool value) { SetBit(2, value); }
  bool GetR2T2() const { return GetBit(2); }
  void WaitForR2T2(bool value) { WaitForBit(2, value); }
  
  // R3T3
  //
  void SetR3T3(bool value) { SetBit(3, value); }
  bool GetR3T3() const { return GetBit(3); }
  void WaitForR3T3(bool value) { WaitForBit(3, value); }
  
  // R4T4
  //
  void SetR4T4(bool value) { SetBit(4, value); }
  bool GetR4T4() const { return GetBit(4); }
  void WaitForR4T4(bool value) { WaitForBit(4, value); }
  
  // R5T5
  //
  void SetR5T5(bool value) { SetBit(5, value); }
  bool GetR5T5() const { return GetBit(5); }
  void WaitForR5T5(bool value) { WaitForBit(5, value); }
  
  // R6T6
  //
  void SetR6T6(bool value) { SetBit(6, value); }
  bool GetR6T6() const { return GetBit(6); }
  void WaitForR6T6(bool value) { WaitForBit(6, value); }
  
  // R7T7
  //
  void SetR7T7(bool value) { SetBit(7, value); }
  bool GetR7T7() const { return GetBit(7); }
  void WaitForR7T7(bool value) { WaitForBit(7, value); }
  
  // R8T8
  //
  void SetR8T8(bool value) { SetBit(8, value); }
  bool GetR8T8() const { return GetBit(8); }
  void WaitForR8T8(bool value) { WaitForBit(8, value); }
  
  // R9T9
  //
  void SetR9T9(bool value) { SetBit(9, value); }
  bool GetR9T9() const { return GetBit(9); }
  void WaitForR9T9(bool value) { WaitForBit(9, value); }
  
  // Idle Line
  //
  enum class eIDLINE : uint32_t {
    eNO_IDLE=0, // Receiver was not idle before receiving this character.
    eIDLE=1, // Receiver was idle before receiving this character.
  };
  eIDLINE GetIDLINE() const { return static_cast<eIDLINE>(GetBit(11)); }
  void WaitForIDLINE(eIDLINE value) { WaitForBit(11, static_cast<uint32_t>(value)); }
  
  // Receive Buffer Empty
  //
  enum class eRXEMPT : uint32_t {
    eNOT_EMPTY=0, // Receive buffer contains valid data.
    eEMPTY=1, // Receive buffer is empty, data returned on read is not valid.
  };
  eRXEMPT GetRXEMPT() const { return static_cast<eRXEMPT>(GetBit(12)); }
  void WaitForRXEMPT(eRXEMPT value) { WaitForBit(12, static_cast<uint32_t>(value)); }
  
  // Frame Error / Transmit Special Character
  //
  enum class eFRETSC : uint32_t {
    eNO_ERROR=0, // The dataword is received without a frame error on read, or transmit a normal character on write.
    eERROR=1, // The dataword is received with a frame error, or transmit an idle or break character on transmit.
  };
  void SetFRETSC(eFRETSC value) { SetBit(13, static_cast<uint32_t>(value)); }
  eFRETSC GetFRETSC() const { return static_cast<eFRETSC>(GetBit(13)); }
  void WaitForFRETSC(eFRETSC value) { WaitForBit(13, static_cast<uint32_t>(value)); }
  
  // Parity Error
  //
  enum class ePARITYE : uint32_t {
    eNO_PARITY=0, // The dataword is received without a parity error.
    ePARITY=1, // The dataword is received with a parity error.
  };
  ePARITYE GetPARITYE() const { return static_cast<ePARITYE>(GetBit(14)); }
  void WaitForPARITYE(ePARITYE value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // Noisy Data Received
  //
  enum class eNOISY : uint32_t {
    eNO_NOISE=0, // The dataword is received without noise.
    eNOISE=1, // The data is received with noise.
  };
  eNOISY GetNOISY() const { return static_cast<eNOISY>(GetBit(15)); }
  void WaitForNOISY(eNOISY value) { WaitForBit(15, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00001000); }
};

// LPUART Match Address Register
struct MATCH_t : public Register {
  MATCH_t() : Register(0x4007c020) {}

  
  // Match Address 1
  //
  void SetMA1(uint32_t value) { SetBits<10>(0, value); }
  uint32_t GetMA1() const { return GetBits<10>(0).to_ulong(); }
  void WaitForMA1(uint32_t value) { WaitForBits<10>(0, value); }
  
  // Match Address 2
  //
  void SetMA2(uint32_t value) { SetBits<10>(16, value); }
  uint32_t GetMA2() const { return GetBits<10>(16).to_ulong(); }
  void WaitForMA2(uint32_t value) { WaitForBits<10>(16, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART Modem IrDA Register
struct MODIR_t : public Register {
  MODIR_t() : Register(0x4007c024) {}

  
  // Transmitter clear-to-send enable
  //
  enum class eTXCTSE : uint32_t {
    eDISABLED=0, // CTS has no effect on the transmitter.
    eENABLED=1, // Enables clear-to-send operation. The transmitter checks the state of CTS each time it is ready to send a character. If CTS is asserted, the character is sent. If CTS is deasserted, the signal TXD remains in the mark state and transmission is delayed until CTS is asserted. Changes in CTS as a character is being sent do not affect its transmission.
  };
  void SetTXCTSE(eTXCTSE value) { SetBit(0, static_cast<uint32_t>(value)); }
  eTXCTSE GetTXCTSE() const { return static_cast<eTXCTSE>(GetBit(0)); }
  void WaitForTXCTSE(eTXCTSE value) { WaitForBit(0, static_cast<uint32_t>(value)); }
  
  // Transmitter request-to-send enable
  //
  enum class eTXRTSE : uint32_t {
    eDISABLED=0, // The transmitter has no effect on RTS.
    eENABLED=1, // When a character is placed into an empty transmit shift register, RTS asserts one bit time before the start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter FIFO and shift register are completely sent, including the last stop bit.
  };
  void SetTXRTSE(eTXRTSE value) { SetBit(1, static_cast<uint32_t>(value)); }
  eTXRTSE GetTXRTSE() const { return static_cast<eTXRTSE>(GetBit(1)); }
  void WaitForTXRTSE(eTXRTSE value) { WaitForBit(1, static_cast<uint32_t>(value)); }
  
  // Transmitter request-to-send polarity
  //
  enum class eTXRTSPOL : uint32_t {
    eLOW=0, // Transmitter RTS is active low.
    eHIGH=1, // Transmitter RTS is active high.
  };
  void SetTXRTSPOL(eTXRTSPOL value) { SetBit(2, static_cast<uint32_t>(value)); }
  eTXRTSPOL GetTXRTSPOL() const { return static_cast<eTXRTSPOL>(GetBit(2)); }
  void WaitForTXRTSPOL(eTXRTSPOL value) { WaitForBit(2, static_cast<uint32_t>(value)); }
  
  // Receiver request-to-send enable
  //
  enum class eRXRTSE : uint32_t {
    eDISABLED=0, // The receiver has no effect on RTS.
    eENABLED=1, // RTS is deasserted if the receiver data register is full or a start bit has been detected that would cause the receiver data register to become full. RTS is asserted if the receiver data register is not full and has not detected a start bit that would cause the receiver data register to become full.
  };
  void SetRXRTSE(eRXRTSE value) { SetBit(3, static_cast<uint32_t>(value)); }
  eRXRTSE GetRXRTSE() const { return static_cast<eRXRTSE>(GetBit(3)); }
  void WaitForRXRTSE(eRXRTSE value) { WaitForBit(3, static_cast<uint32_t>(value)); }
  
  // Transmit CTS Configuration
  //
  enum class eTXCTSC : uint32_t {
    eSTART=0, // CTS input is sampled at the start of each character.
    eIDLE=1, // CTS input is sampled when the transmitter is idle.
  };
  void SetTXCTSC(eTXCTSC value) { SetBit(4, static_cast<uint32_t>(value)); }
  eTXCTSC GetTXCTSC() const { return static_cast<eTXCTSC>(GetBit(4)); }
  void WaitForTXCTSC(eTXCTSC value) { WaitForBit(4, static_cast<uint32_t>(value)); }
  
  // Transmit CTS Source
  //
  enum class eTXCTSSRC : uint32_t {
    eCTS=0, // CTS input is the CTS_B pin.
    eMATCH=1, // CTS input is an internal connection to the receiver address match result.
  };
  void SetTXCTSSRC(eTXCTSSRC value) { SetBit(5, static_cast<uint32_t>(value)); }
  eTXCTSSRC GetTXCTSSRC() const { return static_cast<eTXCTSSRC>(GetBit(5)); }
  void WaitForTXCTSSRC(eTXCTSSRC value) { WaitForBit(5, static_cast<uint32_t>(value)); }
  
  // Receive RTS Configuration
  //
  void SetRTSWATER(uint32_t value) { SetBits<2>(8, value); }
  uint32_t GetRTSWATER() const { return GetBits<2>(8).to_ulong(); }
  void WaitForRTSWATER(uint32_t value) { WaitForBits<2>(8, value); }
  
  // Transmitter narrow pulse
  //
  enum class eTNP : uint32_t {
    eONE_SAMPLE=0, // 1/OSR.
    eTWO_SAMPLE=1, // 2/OSR.
    eTHREE_SAMPLE=2, // 3/OSR.
    eFOUR_SAMPLE=3, // 4/OSR.
  };
  void SetTNP(eTNP value) { SetBits<2>(16, static_cast<uint32_t>(value)); }
  eTNP GetTNP() const { return static_cast<eTNP>(GetBits<2>(16).to_ulong()); }
  void WaitForTNP(eTNP value) { WaitForBits<2>(16, static_cast<uint32_t>(value)); }
  
  // Infrared enable
  //
  enum class eIREN : uint32_t {
    eDISABLED=0, // IR disabled.
    eENABLED=1, // IR enabled.
  };
  void SetIREN(eIREN value) { SetBit(18, static_cast<uint32_t>(value)); }
  eIREN GetIREN() const { return static_cast<eIREN>(GetBit(18)); }
  void WaitForIREN(eIREN value) { WaitForBit(18, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// LPUART FIFO Register
struct FIFO_t : public Register {
  FIFO_t() : Register(0x4007c028) {}

  
  // Receive FIFO Buffer Depth
  //
  enum class eRXFIFOSIZE : uint32_t {
    eFIFO_1=0, // Receive FIFO/Buffer depth = 1 dataword.
    eFIFO_4=1, // Receive FIFO/Buffer depth = 4 datawords.
    eFIFO_8=2, // Receive FIFO/Buffer depth = 8 datawords.
    eFIFO_16=3, // Receive FIFO/Buffer depth = 16 datawords.
    eFIFO_32=4, // Receive FIFO/Buffer depth = 32 datawords.
    eFIFO_64=5, // Receive FIFO/Buffer depth = 64 datawords.
    eFIFO_128=6, // Receive FIFO/Buffer depth = 128 datawords.
    eFIFO_256=7, // Receive FIFO/Buffer depth = 256 datawords.
  };
  eRXFIFOSIZE GetRXFIFOSIZE() const { return static_cast<eRXFIFOSIZE>(GetBits<3>(0).to_ulong()); }
  void WaitForRXFIFOSIZE(eRXFIFOSIZE value) { WaitForBits<3>(0, static_cast<uint32_t>(value)); }
  
  // Receive FIFO Enable
  //
  enum class eRXFE : uint32_t {
    eDISABLED=0, // Receive FIFO is not enabled. Buffer depth is 1.
    eENABLED=1, // Receive FIFO is enabled. Buffer depth is indicted by RXFIFOSIZE.
  };
  void SetRXFE(eRXFE value) { SetBit(3, static_cast<uint32_t>(value)); }
  eRXFE GetRXFE() const { return static_cast<eRXFE>(GetBit(3)); }
  void WaitForRXFE(eRXFE value) { WaitForBit(3, static_cast<uint32_t>(value)); }
  
  // Transmit FIFO Buffer Depth
  //
  enum class eTXFIFOSIZE : uint32_t {
    eFIFO_1=0, // Transmit FIFO/Buffer depth = 1 dataword.
    eFIFO_4=1, // Transmit FIFO/Buffer depth = 4 datawords.
    eFIFO_8=2, // Transmit FIFO/Buffer depth = 8 datawords.
    eFIFO_16=3, // Transmit FIFO/Buffer depth = 16 datawords.
    eFIFO_32=4, // Transmit FIFO/Buffer depth = 32 datawords.
    eFIFO_64=5, // Transmit FIFO/Buffer depth = 64 datawords.
    eFIFO_128=6, // Transmit FIFO/Buffer depth = 128 datawords.
    eFIFO_256=7, // Transmit FIFO/Buffer depth = 256 datawords
  };
  eTXFIFOSIZE GetTXFIFOSIZE() const { return static_cast<eTXFIFOSIZE>(GetBits<3>(4).to_ulong()); }
  void WaitForTXFIFOSIZE(eTXFIFOSIZE value) { WaitForBits<3>(4, static_cast<uint32_t>(value)); }
  
  // Transmit FIFO Enable
  //
  enum class eTXFE : uint32_t {
    eDISABLED=0, // Transmit FIFO is not enabled. Buffer depth is 1.
    eENABLED=1, // Transmit FIFO is enabled. Buffer depth is indicated by TXFIFOSIZE.
  };
  void SetTXFE(eTXFE value) { SetBit(7, static_cast<uint32_t>(value)); }
  eTXFE GetTXFE() const { return static_cast<eTXFE>(GetBit(7)); }
  void WaitForTXFE(eTXFE value) { WaitForBit(7, static_cast<uint32_t>(value)); }
  
  // Receive FIFO Underflow Interrupt Enable
  //
  enum class eRXUFE : uint32_t {
    eDISABLED=0, // RXUF flag does not generate an interrupt to the host.
    eENABLED=1, // RXUF flag generates an interrupt to the host.
  };
  void SetRXUFE(eRXUFE value) { SetBit(8, static_cast<uint32_t>(value)); }
  eRXUFE GetRXUFE() const { return static_cast<eRXUFE>(GetBit(8)); }
  void WaitForRXUFE(eRXUFE value) { WaitForBit(8, static_cast<uint32_t>(value)); }
  
  // Transmit FIFO Overflow Interrupt Enable
  //
  enum class eTXOFE : uint32_t {
    eDISABLED=0, // TXOF flag does not generate an interrupt to the host.
    eENABLED=1, // TXOF flag generates an interrupt to the host.
  };
  void SetTXOFE(eTXOFE value) { SetBit(9, static_cast<uint32_t>(value)); }
  eTXOFE GetTXOFE() const { return static_cast<eTXOFE>(GetBit(9)); }
  void WaitForTXOFE(eTXOFE value) { WaitForBit(9, static_cast<uint32_t>(value)); }
  
  // Receiver Idle Empty Enable
  //
  enum class eRXIDEN : uint32_t {
    eDISABLED=0, // Disable RDRF assertion due to partially filled FIFO when receiver is idle.
    eIDLE_1=1, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 1 character.
    eIDLE_2=2, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 2 characters.
    eIDLE_4=3, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 4 characters.
    eIDLE_8=4, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 8 characters.
    eIDLE_16=5, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 16 characters.
    eIDLE_32=6, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 32 characters.
    eIDLE_64=7, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 64 characters.
  };
  void SetRXIDEN(eRXIDEN value) { SetBits<3>(10, static_cast<uint32_t>(value)); }
  eRXIDEN GetRXIDEN() const { return static_cast<eRXIDEN>(GetBits<3>(10).to_ulong()); }
  void WaitForRXIDEN(eRXIDEN value) { WaitForBits<3>(10, static_cast<uint32_t>(value)); }
  
  // Receive FIFO Flush
  //
  enum class eRXFLUSH : uint32_t {
    eNO_EFFECT=0, // No flush operation occurs.
    eRXFIFO_RST=1, // All data in the receive FIFO/buffer is cleared out.
  };
  void SetRXFLUSH(eRXFLUSH value) { SetBit(14, static_cast<uint32_t>(value)); }
  eRXFLUSH GetRXFLUSH() const { return static_cast<eRXFLUSH>(GetBit(14)); }
  void WaitForRXFLUSH(eRXFLUSH value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // Transmit FIFO Flush
  //
  enum class eTXFLUSH : uint32_t {
    eNO_EFFECT=0, // No flush operation occurs.
    eTXFIFO_RST=1, // All data in the transmit FIFO is cleared out.
  };
  void SetTXFLUSH(eTXFLUSH value) { SetBit(15, static_cast<uint32_t>(value)); }
  eTXFLUSH GetTXFLUSH() const { return static_cast<eTXFLUSH>(GetBit(15)); }
  void WaitForTXFLUSH(eTXFLUSH value) { WaitForBit(15, static_cast<uint32_t>(value)); }
  
  // Receiver FIFO Underflow Flag
  //
  enum class eRXUF : uint32_t {
    eNO_UNDERFLOW=0, // No receive FIFO underflow has occurred since the last time the flag was cleared.
    eUNDERFLOW=1, // At least one receive FIFO underflow has occurred since the last time the flag was cleared.
  };
  void SetRXUF(eRXUF value) { SetBit(16, static_cast<uint32_t>(value)); }
  eRXUF GetRXUF() const { return static_cast<eRXUF>(GetBit(16)); }
  void WaitForRXUF(eRXUF value) { WaitForBit(16, static_cast<uint32_t>(value)); }
  
  // Transmitter FIFO Overflow Flag
  //
  enum class eTXOF : uint32_t {
    eNO_OVERFLOW=0, // No transmit FIFO overflow has occurred since the last time the flag was cleared.
    eOVERFLOW=1, // At least one transmit FIFO overflow has occurred since the last time the flag was cleared.
  };
  void SetTXOF(eTXOF value) { SetBit(17, static_cast<uint32_t>(value)); }
  eTXOF GetTXOF() const { return static_cast<eTXOF>(GetBit(17)); }
  void WaitForTXOF(eTXOF value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // Receive FIFO/Buffer Empty
  //
  enum class eRXEMPT : uint32_t {
    eNOT_EMPTY=0, // Receive buffer is not empty.
    eEMPTY=1, // Receive buffer is empty.
  };
  eRXEMPT GetRXEMPT() const { return static_cast<eRXEMPT>(GetBit(22)); }
  void WaitForRXEMPT(eRXEMPT value) { WaitForBit(22, static_cast<uint32_t>(value)); }
  
  // Transmit FIFO/Buffer Empty
  //
  enum class eTXEMPT : uint32_t {
    eNOT_EMPTY=0, // Transmit buffer is not empty.
    eEMPTY=1, // Transmit buffer is empty.
  };
  eTXEMPT GetTXEMPT() const { return static_cast<eTXEMPT>(GetBit(23)); }
  void WaitForTXEMPT(eTXEMPT value) { WaitForBit(23, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00c00011); }
};

// LPUART Watermark Register
struct WATER_t : public Register {
  WATER_t() : Register(0x4007c02c) {}

  
  // Transmit Watermark
  //
  void SetTXWATER(uint32_t value) { SetBits<2>(0, value); }
  uint32_t GetTXWATER() const { return GetBits<2>(0).to_ulong(); }
  void WaitForTXWATER(uint32_t value) { WaitForBits<2>(0, value); }
  
  // Transmit Counter
  //
  uint32_t GetTXCOUNT() const { return GetBits<3>(8).to_ulong(); }
  void WaitForTXCOUNT(uint32_t value) { WaitForBits<3>(8, value); }
  
  // Receive Watermark
  //
  void SetRXWATER(uint32_t value) { SetBits<2>(16, value); }
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