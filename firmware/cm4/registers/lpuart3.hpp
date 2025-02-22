#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LPUART
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nLPUART3 {


// Version ID Register
//
union VERID {
  
  enum class eFEATURE : uint32_t {
    eSTANDARD = 1, // Standard feature set.
    eMODEM = 3, // Standard feature set with MODEM/IrDA support.
  };
  
  // Bit field definition.
  struct {
    /// read-only - Feature Identification Number
    eFEATURE FEATURE : 16;
    /// read-only - Minor Version Number
    uint32_t MINOR : 8;
    /// read-only - Major Version Number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x04010003; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x40084000); }
};

// Parameter Register
//
union PARAM {
  
  // Bit field definition.
  struct {
    /// read-only - Transmit FIFO Size
    uint32_t TXFIFO : 8;
    /// read-only - Receive FIFO Size
    uint32_t RXFIFO : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00000202; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x40084004); }
};

// LPUART Global Register
//
union GLOBAL {
  
  enum class eRST : uint32_t {
    eNO_EFFECT = 0, // Module is not reset.
    eRESET = 1, // Module is reset.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Software Reset
    eRST RST : 1;
    uint32_t _reserved_1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GLOBAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GLOBAL &Instance() { return *reinterpret_cast<volatile GLOBAL*>(0x40084008); }
};

// LPUART Pin Configuration Register
//
union PINCFG {
  
  enum class eTRGSEL : uint32_t {
    eDISABLED = 0, // Input trigger is disabled.
    eTRG_RXD = 1, // Input trigger is used instead of RXD pin input.
    eTRG_CTS = 2, // Input trigger is used instead of CTS_B pin input.
    eTRG_TXD = 3, // Input trigger is used to modulate the TXD pin output. The TXD pin output (after TXINV configuration) is internally ANDed with the input trigger.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Trigger Select
    eTRGSEL TRGSEL : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PINCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PINCFG &Instance() { return *reinterpret_cast<volatile PINCFG*>(0x4008400C); }
};

// LPUART Baud Rate Register
//
union BAUD {
  
  enum class eSBNS : uint32_t {
    eONE = 0, // One stop bit.
    eTWO = 1, // Two stop bits.
  };
  
  enum class eRXEDGIE : uint32_t {
    eDISABLE = 0, // Hardware interrupts from STAT[RXEDGIF] are disabled.
    eENABLE = 1, // Hardware interrupt is requested when STAT[RXEDGIF] flag is 1.
  };
  
  enum class eLBKDIE : uint32_t {
    eDISABLE = 0, // Hardware interrupts from STAT[LBKDIF] flag are disabled (use polling).
    eENABLE = 1, // Hardware interrupt is requested when STAT[LBKDIF] flag is 1.
  };
  
  enum class eRESYNCDIS : uint32_t {
    eRESYNC = 0, // Resynchronization during received data word is supported.
    eNO_RESYNC = 1, // Resynchronization during received data word is disabled.
  };
  
  enum class eBOTHEDGE : uint32_t {
    eDISABLED = 0, // Receiver samples input data using the rising edge of the baud rate clock.
    eENABLED = 1, // Receiver samples input data using the rising and falling edge of the baud rate clock.
  };
  
  enum class eMATCFG : uint32_t {
    eADDR_MATCH = 0, // Address Match Wakeup
    eIDLE_MATCH = 1, // Idle Match Wakeup
    eONOFF_MATCH = 2, // Match On and Match Off
    eRWU_MATCH = 3, // Enables RWU on Data Match and Match On/Off for transmitter CTS input
  };
  
  enum class eRDMAE : uint32_t {
    eDISABLED = 0, // DMA request disabled.
    eENABLED = 1, // DMA request enabled.
  };
  
  enum class eTDMAE : uint32_t {
    eDISABLED = 0, // DMA request disabled.
    eENABLED = 1, // DMA request enabled.
  };
  
  enum class eOSR : uint32_t {
    eDEFAULT = 0, // Writing 0 to this field results in an oversampling ratio of 16
    eOSR_4 = 3, // Oversampling ratio of 4, requires BOTHEDGE to be set.
    eOSR_5 = 4, // Oversampling ratio of 5, requires BOTHEDGE to be set.
    eOSR_6 = 5, // Oversampling ratio of 6, requires BOTHEDGE to be set.
    eOSR_7 = 6, // Oversampling ratio of 7, requires BOTHEDGE to be set.
    eOSR_8 = 7, // Oversampling ratio of 8.
    eOSR_9 = 8, // Oversampling ratio of 9.
    eOSR_10 = 9, // Oversampling ratio of 10.
    eOSR_11 = 10, // Oversampling ratio of 11.
    eOSR_12 = 11, // Oversampling ratio of 12.
    eOSR_13 = 12, // Oversampling ratio of 13.
    eOSR_14 = 13, // Oversampling ratio of 14.
    eOSR_15 = 14, // Oversampling ratio of 15.
    eOSR_16 = 15, // Oversampling ratio of 16.
    eOSR_17 = 16, // Oversampling ratio of 17.
    eOSR_18 = 17, // Oversampling ratio of 18.
    eOSR_19 = 18, // Oversampling ratio of 19.
    eOSR_20 = 19, // Oversampling ratio of 20.
    eOSR_21 = 20, // Oversampling ratio of 21.
    eOSR_22 = 21, // Oversampling ratio of 22.
    eOSR_23 = 22, // Oversampling ratio of 23.
    eOSR_24 = 23, // Oversampling ratio of 24.
    eOSR_25 = 24, // Oversampling ratio of 25.
    eOSR_26 = 25, // Oversampling ratio of 26.
    eOSR_27 = 26, // Oversampling ratio of 27.
    eOSR_28 = 27, // Oversampling ratio of 28.
    eOSR_29 = 28, // Oversampling ratio of 29.
    eOSR_30 = 29, // Oversampling ratio of 30.
    eOSR_31 = 30, // Oversampling ratio of 31.
    eOSR_32 = 31, // Oversampling ratio of 32.
  };
  
  enum class eM10 : uint32_t {
    eDISABLED = 0, // Receiver and transmitter use 7-bit to 9-bit data characters.
    eENABLED = 1, // Receiver and transmitter use 10-bit data characters.
  };
  
  enum class eMAEN2 : uint32_t {
    eDISABLED = 0, // Normal operation.
    eENABLED = 1, // Enables automatic address matching or data matching mode for MATCH[MA2].
  };
  
  enum class eMAEN1 : uint32_t {
    eDISABLED = 0, // Normal operation.
    eENABLED = 1, // Enables automatic address matching or data matching mode for MATCH[MA1].
  };
  
  // Bit field definition.
  struct {
    /// read-write - Baud Rate Modulo Divisor.
    uint32_t SBR : 13;
    /// read-write - Stop Bit Number Select
    eSBNS SBNS : 1;
    /// read-write - RX Input Active Edge Interrupt Enable
    eRXEDGIE RXEDGIE : 1;
    /// read-write - LIN Break Detect Interrupt Enable
    eLBKDIE LBKDIE : 1;
    /// read-write - Resynchronization Disable
    eRESYNCDIS RESYNCDIS : 1;
    /// read-write - Both Edge Sampling
    eBOTHEDGE BOTHEDGE : 1;
    /// read-write - Match Configuration
    eMATCFG MATCFG : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Receiver Full DMA Enable
    eRDMAE RDMAE : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Transmitter DMA Enable
    eTDMAE TDMAE : 1;
    /// read-write - Oversampling Ratio
    eOSR OSR : 5;
    /// read-write - 10-bit Mode select
    eM10 M10 : 1;
    /// read-write - Match Address Mode Enable 2
    eMAEN2 MAEN2 : 1;
    /// read-write - Match Address Mode Enable 1
    eMAEN1 MAEN1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BAUD() = delete;
  inline void Reset() volatile { this->value = 0x0F000004; }
  static inline volatile BAUD &Instance() { return *reinterpret_cast<volatile BAUD*>(0x40084010); }
};

// LPUART Status Register
//
union STAT {
  
  enum class eMA2F : uint32_t {
    eNOMATCH = 0, // Received data is not equal to MA2
    eMATCH = 1, // Received data is equal to MA2
  };
  
  enum class eMA1F : uint32_t {
    eNOMATCH = 0, // Received data is not equal to MA1
    eMATCH = 1, // Received data is equal to MA1
  };
  
  enum class ePF : uint32_t {
    eNOPARITY = 0, // No parity error.
    ePARITY = 1, // Parity error.
  };
  
  enum class eFE : uint32_t {
    eNOERROR = 0, // No framing error detected. This does not guarantee the framing is correct.
    eERROR = 1, // Framing error.
  };
  
  enum class eNF : uint32_t {
    eNONOISE = 0, // No noise detected.
    eNOISE = 1, // Noise detected in the received character in the DATA register.
  };
  
  enum class eOR : uint32_t {
    eNO_OVERRUN = 0, // No overrun.
    eOVERRUN = 1, // Receive overrun (new LPUART data lost).
  };
  
  enum class eIDLE : uint32_t {
    eNOIDLE = 0, // No idle line detected.
    eIDLE = 1, // Idle line is detected.
  };
  
  enum class eRDRF : uint32_t {
    eNO_RXDATA = 0, // Receive FIFO level is less than watermark.
    eRXDATA = 1, // Receive FIFO level is equal or greater than watermark.
  };
  
  enum class eTC : uint32_t {
    eACTIVE = 0, // Transmitter active (sending data, a preamble, or a break).
    eCOMPLETE = 1, // Transmitter idle (transmission activity complete).
  };
  
  enum class eTDRE : uint32_t {
    eTXDATA = 0, // Transmit FIFO level is greater than watermark.
    eNO_TXDATA = 1, // Transmit FIFO level is equal or less than watermark.
  };
  
  enum class eRAF : uint32_t {
    eIDLE = 0, // LPUART receiver idle waiting for a start bit.
    eACTIVE = 1, // LPUART receiver active (RXD input not idle).
  };
  
  enum class eLBKDE : uint32_t {
    eDISABLED = 0, // LIN break detect is disabled, normal break character can be detected.
    eENABLED = 1, // LIN break detect is enabled. LIN break character is detected at length of 11 bit times (if M = 0) or 12 (if M = 1) or 13 (M10 = 1).
  };
  
  enum class eBRK13 : uint32_t {
    eSHORT = 0, // Break character is transmitted with length of 9 to 13 bit times.
    eLONG = 1, // Break character is transmitted with length of 12 to 15 bit times.
  };
  
  enum class eRWUID : uint32_t {
    eIDLE_NOTSET = 0, // During receive standby state (RWU = 1), the IDLE bit does not get set upon detection of an idle character. During address match wakeup, the IDLE bit does not set when an address does not match.
    eIDLE_SET = 1, // During receive standby state (RWU = 1), the IDLE bit gets set upon detection of an idle character. During address match wakeup, the IDLE bit does set when an address does not match.
  };
  
  enum class eRXINV : uint32_t {
    eNOT_INVERTED = 0, // Receive data not inverted.
    eINVERTED = 1, // Receive data inverted.
  };
  
  enum class eMSBF : uint32_t {
    eLSB_FIRST = 0, // LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received after the start bit is identified as bit0.
    eMSB_FIRST = 1, // MSB (identified as bit9, bit8, bit7 or bit6) is the first bit that is transmitted following the start bit depending on the setting of CTRL[M], CTRL[PE] and BAUD[M10]. .
  };
  
  enum class eRXEDGIF : uint32_t {
    eNO_EDGE = 0, // No active edge on the receive pin has occurred.
    eEDGE = 1, // An active edge on the receive pin has occurred.
  };
  
  enum class eLBKDIF : uint32_t {
    eNOT_DETECTED = 0, // No LIN break character has been detected.
    eDETECTED = 1, // LIN break character has been detected.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 14;
    /// read-write - Match 2 Flag
    eMA2F MA2F : 1;
    /// read-write - Match 1 Flag
    eMA1F MA1F : 1;
    /// read-write - Parity Error Flag
    ePF PF : 1;
    /// read-write - Framing Error Flag
    eFE FE : 1;
    /// read-write - Noise Flag
    eNF NF : 1;
    /// read-write - Receiver Overrun Flag
    eOR OR : 1;
    /// read-write - Idle Line Flag
    eIDLE IDLE : 1;
    /// read-only - Receive Data Register Full Flag
    eRDRF RDRF : 1;
    /// read-only - Transmission Complete Flag
    eTC TC : 1;
    /// read-only - Transmit Data Register Empty Flag
    eTDRE TDRE : 1;
    /// read-only - Receiver Active Flag
    eRAF RAF : 1;
    /// read-write - LIN Break Detection Enable
    eLBKDE LBKDE : 1;
    /// read-write - Break Character Generation Length
    eBRK13 BRK13 : 1;
    /// read-write - Receive Wake Up Idle Detect
    eRWUID RWUID : 1;
    /// read-write - Receive Data Inversion
    eRXINV RXINV : 1;
    /// read-write - MSB First
    eMSBF MSBF : 1;
    /// read-write - RXD Pin Active Edge Interrupt Flag
    eRXEDGIF RXEDGIF : 1;
    /// read-write - LIN Break Detect Interrupt Flag
    eLBKDIF LBKDIF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT() = delete;
  inline void Reset() volatile { this->value = 0x00C00000; }
  static inline volatile STAT &Instance() { return *reinterpret_cast<volatile STAT*>(0x40084014); }
};

// LPUART Control Register
//
union CTRL {
  
  enum class ePT : uint32_t {
    eEVEN = 0, // Even parity.
    eODD = 1, // Odd parity.
  };
  
  enum class ePE : uint32_t {
    eDISABLED = 0, // No hardware parity generation or checking.
    eENABLED = 1, // Parity enabled.
  };
  
  enum class eILT : uint32_t {
    eFROM_START = 0, // Idle character bit count starts after start bit.
    eFROM_STOP = 1, // Idle character bit count starts after stop bit.
  };
  
  enum class eWAKE : uint32_t {
    eIDLE = 0, // Configures RWU for idle-line wakeup.
    eMARK = 1, // Configures RWU with address-mark wakeup.
  };
  
  enum class eM : uint32_t {
    eDATA8 = 0, // Receiver and transmitter use 8-bit data characters.
    eDATA9 = 1, // Receiver and transmitter use 9-bit data characters.
  };
  
  enum class eRSRC : uint32_t {
    eNO_EFFECT = 0, // Provided LOOPS is set, RSRC is cleared, selects internal loop back mode and the LPUART does not use the RXD pin.
    eONEWIRE = 1, // Single-wire LPUART mode where the TXD pin is connected to the transmitter output and receiver input.
  };
  
  enum class eDOZEEN : uint32_t {
    eENABLED = 0, // LPUART is enabled in Doze mode.
    eDISABLED = 1, // LPUART is disabled in Doze mode .
  };
  
  enum class eLOOPS : uint32_t {
    eNOFFECT = 0, // Normal operation - RXD and TXD use separate pins.
    eLOOPBACK = 1, // Loop mode or single-wire mode where transmitter outputs are internally connected to receiver input (see RSRC bit).
  };
  
  enum class eIDLECFG : uint32_t {
    eIDLE_1 = 0, // 1 idle character
    eIDLE_2 = 1, // 2 idle characters
    eIDLE_4 = 2, // 4 idle characters
    eIDLE_8 = 3, // 8 idle characters
    eIDLE_16 = 4, // 16 idle characters
    eIDLE_32 = 5, // 32 idle characters
    eIDLE_64 = 6, // 64 idle characters
    eIDLE_128 = 7, // 128 idle characters
  };
  
  enum class eM7 : uint32_t {
    eNO_EFFECT = 0, // Receiver and transmitter use 8-bit to 10-bit data characters.
    eDATA7 = 1, // Receiver and transmitter use 7-bit data characters.
  };
  
  enum class eMA2IE : uint32_t {
    eDISABLED = 0, // MA2F interrupt disabled
    eENABLED = 1, // MA2F interrupt enabled
  };
  
  enum class eMA1IE : uint32_t {
    eDISABLED = 0, // MA1F interrupt disabled
    eENABLED = 1, // MA1F interrupt enabled
  };
  
  enum class eSBK : uint32_t {
    eNO_EFFECT = 0, // Normal transmitter operation.
    eTX_BREAK = 1, // Queue break character(s) to be sent.
  };
  
  enum class eRWU : uint32_t {
    eNO_EFFECT = 0, // Normal receiver operation.
    eRX_WAKEUP = 1, // LPUART receiver in standby waiting for wakeup condition.
  };
  
  enum class eRE : uint32_t {
    eDISABLED = 0, // Receiver disabled.
    eENABLED = 1, // Receiver enabled.
  };
  
  enum class eTE : uint32_t {
    eDISABLED = 0, // Transmitter disabled.
    eENABLED = 1, // Transmitter enabled.
  };
  
  enum class eILIE : uint32_t {
    eDISABLED = 0, // Hardware interrupts from IDLE disabled; use polling.
    eENABLED = 1, // Hardware interrupt is requested when IDLE flag is 1.
  };
  
  enum class eRIE : uint32_t {
    eDISABLED = 0, // Hardware interrupts from RDRF disabled.
    eENABLED = 1, // Hardware interrupt is requested when RDRF flag is 1.
  };
  
  enum class eTCIE : uint32_t {
    eDISABLED = 0, // Hardware interrupts from TC disabled.
    eENABLED = 1, // Hardware interrupt is requested when TC flag is 1.
  };
  
  enum class eTIE : uint32_t {
    eDISABLED = 0, // Hardware interrupts from TDRE disabled.
    eENABLED = 1, // Hardware interrupt is requested when TDRE flag is 1.
  };
  
  enum class ePEIE : uint32_t {
    eDISABLED = 0, // PF interrupts disabled; use polling).
    eENABLED = 1, // Hardware interrupt is requested when PF is set.
  };
  
  enum class eFEIE : uint32_t {
    eDISABLED = 0, // FE interrupts disabled; use polling.
    eENABLED = 1, // Hardware interrupt is requested when FE is set.
  };
  
  enum class eNEIE : uint32_t {
    eDISABLED = 0, // NF interrupts disabled; use polling.
    eENABLED = 1, // Hardware interrupt is requested when NF is set.
  };
  
  enum class eORIE : uint32_t {
    eDISABLED = 0, // OR interrupts disabled; use polling.
    eENABLED = 1, // Hardware interrupt is requested when OR is set.
  };
  
  enum class eTXINV : uint32_t {
    eNOT_INVERTED = 0, // Transmit data not inverted.
    eINVERTED = 1, // Transmit data inverted.
  };
  
  enum class eTXDIR : uint32_t {
    eTX_INPUT = 0, // TXD pin is an input in single-wire mode.
    eTX_OUTPUT = 1, // TXD pin is an output in single-wire mode.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Parity Type
    ePT PT : 1;
    /// read-write - Parity Enable
    ePE PE : 1;
    /// read-write - Idle Line Type Select
    eILT ILT : 1;
    /// read-write - Receiver Wakeup Method Select
    eWAKE WAKE : 1;
    /// read-write - 9-Bit or 8-Bit Mode Select
    eM M : 1;
    /// read-write - Receiver Source Select
    eRSRC RSRC : 1;
    /// read-write - Doze Enable
    eDOZEEN DOZEEN : 1;
    /// read-write - Loop Mode Select
    eLOOPS LOOPS : 1;
    /// read-write - Idle Configuration
    eIDLECFG IDLECFG : 3;
    /// read-write - 7-Bit Mode Select
    eM7 M7 : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Match 2 Interrupt Enable
    eMA2IE MA2IE : 1;
    /// read-write - Match 1 Interrupt Enable
    eMA1IE MA1IE : 1;
    /// read-write - Send Break
    eSBK SBK : 1;
    /// read-write - Receiver Wakeup Control
    eRWU RWU : 1;
    /// read-write - Receiver Enable
    eRE RE : 1;
    /// read-write - Transmitter Enable
    eTE TE : 1;
    /// read-write - Idle Line Interrupt Enable
    eILIE ILIE : 1;
    /// read-write - Receiver Interrupt Enable
    eRIE RIE : 1;
    /// read-write - Transmission Complete Interrupt Enable for
    eTCIE TCIE : 1;
    /// read-write - Transmit Interrupt Enable
    eTIE TIE : 1;
    /// read-write - Parity Error Interrupt Enable
    ePEIE PEIE : 1;
    /// read-write - Framing Error Interrupt Enable
    eFEIE FEIE : 1;
    /// read-write - Noise Error Interrupt Enable
    eNEIE NEIE : 1;
    /// read-write - Overrun Interrupt Enable
    eORIE ORIE : 1;
    /// read-write - Transmit Data Inversion
    eTXINV TXINV : 1;
    /// read-write - TXD Pin Direction in Single-Wire Mode
    eTXDIR TXDIR : 1;
    /// read-write - Receive Bit 9 / Transmit Bit 8
    uint32_t R9T8 : 1;
    /// read-write - Receive Bit 8 / Transmit Bit 9
    uint32_t R8T9 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40084018); }
};

// LPUART Data Register
//
union DATA {
  
  enum class eIDLINE : uint32_t {
    eNO_IDLE = 0, // Receiver was not idle before receiving this character.
    eIDLE = 1, // Receiver was idle before receiving this character.
  };
  
  enum class eRXEMPT : uint32_t {
    eNOT_EMPTY = 0, // Receive buffer contains valid data.
    eEMPTY = 1, // Receive buffer is empty, data returned on read is not valid.
  };
  
  enum class eFRETSC : uint32_t {
    eNO_ERROR = 0, // The dataword is received without a frame error on read, or transmit a normal character on write.
    eERROR = 1, // The dataword is received with a frame error, or transmit an idle or break character on transmit.
  };
  
  enum class ePARITYE : uint32_t {
    eNO_PARITY = 0, // The dataword is received without a parity error.
    ePARITY = 1, // The dataword is received with a parity error.
  };
  
  enum class eNOISY : uint32_t {
    eNO_NOISE = 0, // The dataword is received without noise.
    eNOISE = 1, // The data is received with noise.
  };
  
  // Bit field definition.
  struct {
    /// read-write - R0T0
    uint32_t R0T0 : 1;
    /// read-write - R1T1
    uint32_t R1T1 : 1;
    /// read-write - R2T2
    uint32_t R2T2 : 1;
    /// read-write - R3T3
    uint32_t R3T3 : 1;
    /// read-write - R4T4
    uint32_t R4T4 : 1;
    /// read-write - R5T5
    uint32_t R5T5 : 1;
    /// read-write - R6T6
    uint32_t R6T6 : 1;
    /// read-write - R7T7
    uint32_t R7T7 : 1;
    /// read-write - R8T8
    uint32_t R8T8 : 1;
    /// read-write - R9T9
    uint32_t R9T9 : 1;
    uint32_t _reserved_0 : 1;
    /// read-only - Idle Line
    eIDLINE IDLINE : 1;
    /// read-only - Receive Buffer Empty
    eRXEMPT RXEMPT : 1;
    /// read-write - Frame Error / Transmit Special Character
    eFRETSC FRETSC : 1;
    /// read-only - Parity Error
    ePARITYE PARITYE : 1;
    /// read-only - Noisy Data Received
    eNOISY NOISY : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATA() = delete;
  inline void Reset() volatile { this->value = 0x00001000; }
  static inline volatile DATA &Instance() { return *reinterpret_cast<volatile DATA*>(0x4008401C); }
};

// LPUART Match Address Register
//
union MATCH {
  
  // Bit field definition.
  struct {
    /// read-write - Match Address 1
    uint32_t MA1 : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - Match Address 2
    uint32_t MA2 : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MATCH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MATCH &Instance() { return *reinterpret_cast<volatile MATCH*>(0x40084020); }
};

// LPUART Modem IrDA Register
//
union MODIR {
  
  enum class eTXCTSE : uint32_t {
    eDISABLED = 0, // CTS has no effect on the transmitter.
    eENABLED = 1, // Enables clear-to-send operation. The transmitter checks the state of CTS each time it is ready to send a character. If CTS is asserted, the character is sent. If CTS is deasserted, the signal TXD remains in the mark state and transmission is delayed until CTS is asserted. Changes in CTS as a character is being sent do not affect its transmission.
  };
  
  enum class eTXRTSE : uint32_t {
    eDISABLED = 0, // The transmitter has no effect on RTS.
    eENABLED = 1, // When a character is placed into an empty transmit shift register, RTS asserts one bit time before the start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter FIFO and shift register are completely sent, including the last stop bit.
  };
  
  enum class eTXRTSPOL : uint32_t {
    eLOW = 0, // Transmitter RTS is active low.
    eHIGH = 1, // Transmitter RTS is active high.
  };
  
  enum class eRXRTSE : uint32_t {
    eDISABLED = 0, // The receiver has no effect on RTS.
    eENABLED = 1, // RTS is deasserted if the receiver data register is full or a start bit has been detected that would cause the receiver data register to become full. RTS is asserted if the receiver data register is not full and has not detected a start bit that would cause the receiver data register to become full.
  };
  
  enum class eTXCTSC : uint32_t {
    eSTART = 0, // CTS input is sampled at the start of each character.
    eIDLE = 1, // CTS input is sampled when the transmitter is idle.
  };
  
  enum class eTXCTSSRC : uint32_t {
    eCTS = 0, // CTS input is the CTS_B pin.
    eMATCH = 1, // CTS input is an internal connection to the receiver address match result.
  };
  
  enum class eTNP : uint32_t {
    eONE_SAMPLE = 0, // 1/OSR.
    eTWO_SAMPLE = 1, // 2/OSR.
    eTHREE_SAMPLE = 2, // 3/OSR.
    eFOUR_SAMPLE = 3, // 4/OSR.
  };
  
  enum class eIREN : uint32_t {
    eDISABLED = 0, // IR disabled.
    eENABLED = 1, // IR enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmitter clear-to-send enable
    eTXCTSE TXCTSE : 1;
    /// read-write - Transmitter request-to-send enable
    eTXRTSE TXRTSE : 1;
    /// read-write - Transmitter request-to-send polarity
    eTXRTSPOL TXRTSPOL : 1;
    /// read-write - Receiver request-to-send enable
    eRXRTSE RXRTSE : 1;
    /// read-write - Transmit CTS Configuration
    eTXCTSC TXCTSC : 1;
    /// read-write - Transmit CTS Source
    eTXCTSSRC TXCTSSRC : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Receive RTS Configuration
    uint32_t RTSWATER : 2;
    uint32_t _reserved_1 : 6;
    /// read-write - Transmitter narrow pulse
    eTNP TNP : 2;
    /// read-write - Infrared enable
    eIREN IREN : 1;
    uint32_t _reserved_2 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MODIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MODIR &Instance() { return *reinterpret_cast<volatile MODIR*>(0x40084024); }
};

// LPUART FIFO Register
//
union FIFO {
  
  enum class eRXFIFOSIZE : uint32_t {
    eFIFO_1 = 0, // Receive FIFO/Buffer depth = 1 dataword.
    eFIFO_4 = 1, // Receive FIFO/Buffer depth = 4 datawords.
    eFIFO_8 = 2, // Receive FIFO/Buffer depth = 8 datawords.
    eFIFO_16 = 3, // Receive FIFO/Buffer depth = 16 datawords.
    eFIFO_32 = 4, // Receive FIFO/Buffer depth = 32 datawords.
    eFIFO_64 = 5, // Receive FIFO/Buffer depth = 64 datawords.
    eFIFO_128 = 6, // Receive FIFO/Buffer depth = 128 datawords.
    eFIFO_256 = 7, // Receive FIFO/Buffer depth = 256 datawords.
  };
  
  enum class eRXFE : uint32_t {
    eDISABLED = 0, // Receive FIFO is not enabled. Buffer depth is 1.
    eENABLED = 1, // Receive FIFO is enabled. Buffer depth is indicted by RXFIFOSIZE.
  };
  
  enum class eTXFIFOSIZE : uint32_t {
    eFIFO_1 = 0, // Transmit FIFO/Buffer depth = 1 dataword.
    eFIFO_4 = 1, // Transmit FIFO/Buffer depth = 4 datawords.
    eFIFO_8 = 2, // Transmit FIFO/Buffer depth = 8 datawords.
    eFIFO_16 = 3, // Transmit FIFO/Buffer depth = 16 datawords.
    eFIFO_32 = 4, // Transmit FIFO/Buffer depth = 32 datawords.
    eFIFO_64 = 5, // Transmit FIFO/Buffer depth = 64 datawords.
    eFIFO_128 = 6, // Transmit FIFO/Buffer depth = 128 datawords.
    eFIFO_256 = 7, // Transmit FIFO/Buffer depth = 256 datawords
  };
  
  enum class eTXFE : uint32_t {
    eDISABLED = 0, // Transmit FIFO is not enabled. Buffer depth is 1.
    eENABLED = 1, // Transmit FIFO is enabled. Buffer depth is indicated by TXFIFOSIZE.
  };
  
  enum class eRXUFE : uint32_t {
    eDISABLED = 0, // RXUF flag does not generate an interrupt to the host.
    eENABLED = 1, // RXUF flag generates an interrupt to the host.
  };
  
  enum class eTXOFE : uint32_t {
    eDISABLED = 0, // TXOF flag does not generate an interrupt to the host.
    eENABLED = 1, // TXOF flag generates an interrupt to the host.
  };
  
  enum class eRXIDEN : uint32_t {
    eDISABLED = 0, // Disable RDRF assertion due to partially filled FIFO when receiver is idle.
    eIDLE_1 = 1, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 1 character.
    eIDLE_2 = 2, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 2 characters.
    eIDLE_4 = 3, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 4 characters.
    eIDLE_8 = 4, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 8 characters.
    eIDLE_16 = 5, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 16 characters.
    eIDLE_32 = 6, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 32 characters.
    eIDLE_64 = 7, // Enable RDRF assertion due to partially filled FIFO when receiver is idle for 64 characters.
  };
  
  enum class eRXFLUSH : uint32_t {
    eNO_EFFECT = 0, // No flush operation occurs.
    eRXFIFO_RST = 1, // All data in the receive FIFO/buffer is cleared out.
  };
  
  enum class eTXFLUSH : uint32_t {
    eNO_EFFECT = 0, // No flush operation occurs.
    eTXFIFO_RST = 1, // All data in the transmit FIFO is cleared out.
  };
  
  enum class eRXUF : uint32_t {
    eNO_UNDERFLOW = 0, // No receive FIFO underflow has occurred since the last time the flag was cleared.
    eUNDERFLOW = 1, // At least one receive FIFO underflow has occurred since the last time the flag was cleared.
  };
  
  enum class eTXOF : uint32_t {
    eNO_OVERFLOW = 0, // No transmit FIFO overflow has occurred since the last time the flag was cleared.
    eOVERFLOW = 1, // At least one transmit FIFO overflow has occurred since the last time the flag was cleared.
  };
  
  enum class eRXEMPT : uint32_t {
    eNOT_EMPTY = 0, // Receive buffer is not empty.
    eEMPTY = 1, // Receive buffer is empty.
  };
  
  enum class eTXEMPT : uint32_t {
    eNOT_EMPTY = 0, // Transmit buffer is not empty.
    eEMPTY = 1, // Transmit buffer is empty.
  };
  
  // Bit field definition.
  struct {
    /// read-only - Receive FIFO Buffer Depth
    eRXFIFOSIZE RXFIFOSIZE : 3;
    /// read-write - Receive FIFO Enable
    eRXFE RXFE : 1;
    /// read-only - Transmit FIFO Buffer Depth
    eTXFIFOSIZE TXFIFOSIZE : 3;
    /// read-write - Transmit FIFO Enable
    eTXFE TXFE : 1;
    /// read-write - Receive FIFO Underflow Interrupt Enable
    eRXUFE RXUFE : 1;
    /// read-write - Transmit FIFO Overflow Interrupt Enable
    eTXOFE TXOFE : 1;
    /// read-write - Receiver Idle Empty Enable
    eRXIDEN RXIDEN : 3;
    uint32_t _reserved_0 : 1;
    /// read-write - Receive FIFO Flush
    eRXFLUSH RXFLUSH : 1;
    /// read-write - Transmit FIFO Flush
    eTXFLUSH TXFLUSH : 1;
    /// read-write - Receiver FIFO Underflow Flag
    eRXUF RXUF : 1;
    /// read-write - Transmitter FIFO Overflow Flag
    eTXOF TXOF : 1;
    uint32_t _reserved_1 : 4;
    /// read-only - Receive FIFO/Buffer Empty
    eRXEMPT RXEMPT : 1;
    /// read-only - Transmit FIFO/Buffer Empty
    eTXEMPT TXEMPT : 1;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FIFO() = delete;
  inline void Reset() volatile { this->value = 0x00C00011; }
  static inline volatile FIFO &Instance() { return *reinterpret_cast<volatile FIFO*>(0x40084028); }
};

// LPUART Watermark Register
//
union WATER {
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Watermark
    uint32_t TXWATER : 2;
    uint32_t _reserved_0 : 6;
    /// read-only - Transmit Counter
    uint32_t TXCOUNT : 3;
    uint32_t _reserved_1 : 5;
    /// read-write - Receive Watermark
    uint32_t RXWATER : 2;
    uint32_t _reserved_2 : 6;
    /// read-only - Receive Counter
    uint32_t RXCOUNT : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WATER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WATER &Instance() { return *reinterpret_cast<volatile WATER*>(0x4008402C); }
};


} // namespace nLPUART3