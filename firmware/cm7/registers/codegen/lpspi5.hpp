#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LPSPI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nLPSPI5 {


// Version ID
union VERID {
  
  // Module Identification Number
  enum class eFEATURE : uint32_t {
    // Standard feature set supporting a 32-bit shift register.
    eSTANDARD = 4,
  };
  
  // Bit field definition.
  struct {
    // read-only - Module Identification Number
    eFEATURE FEATURE : 16;
    // read-only - Minor Version Number
    uint32_t MINOR : 8;
    // read-only - Major Version Number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x01020004; }
  static inline volatile VERID &ref() { return *reinterpret_cast<volatile VERID*>(0x40C2C000); }
};

// Parameter
union PARAM {
  
  // Bit field definition.
  struct {
    // read-only - Transmit FIFO Size
    uint32_t TXFIFO : 8;
    // read-only - Receive FIFO Size
    uint32_t RXFIFO : 8;
    // read-only - PCS Number
    uint32_t PCSNUM : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00040404; }
  static inline volatile PARAM &ref() { return *reinterpret_cast<volatile PARAM*>(0x40C2C004); }
};

// Control
union CR {
  
  // Module Enable
  enum class eMEN : uint32_t {
    // Disable
    eDISABLED = 0,
    // Enable
    eENABLED = 1,
  };
  
  // Software Reset
  enum class eRST : uint32_t {
    // Not reset
    eNOT_RESET = 0,
    // Reset
    eRESET = 1,
  };
  
  // Doze Mode Enable
  enum class eDOZEN : uint32_t {
    // Enable
    eENABLED = 0,
    // Disable
    eDISABLED = 1,
  };
  
  // Debug Enable
  enum class eDBGEN : uint32_t {
    // Disable
    eDISABLED = 0,
    // Enable
    eENABLED = 1,
  };
  
  // Reset Transmit FIFO
  enum class eRTF : uint32_t {
    // No effect
    eNO_EFFECT = 0,
    // Reset
    eTXFIFO_RST = 1,
  };
  
  // Reset Receive FIFO
  enum class eRRF : uint32_t {
    // No effect
    eNO_EFFECT = 0,
    // Reset
    eRXFIFO_RST = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Module Enable
    eMEN MEN : 1;
    // read-write - Software Reset
    eRST RST : 1;
    // read-write - Doze Mode Enable
    eDOZEN DOZEN : 1;
    // read-write - Debug Enable
    eDBGEN DBGEN : 1;
    uint32_t _reserved_0 : 4;
    // write-only - Reset Transmit FIFO
    eRTF RTF : 1;
    // write-only - Reset Receive FIFO
    eRRF RRF : 1;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &ref() { return *reinterpret_cast<volatile CR*>(0x40C2C010); }
};

// Status
union SR {
  
  // Transmit Data Flag
  enum class eTDF : uint32_t {
    // Transmit data not requested
    eTXDATA_NOT_REQST = 0,
    // Transmit data is requested
    eTXDATA_REQST = 1,
  };
  
  // Receive Data Flag
  enum class eRDF : uint32_t {
    // Receive data not ready
    eNOTREADY = 0,
    // Receive data is ready
    eREADY = 1,
  };
  
  // Word Complete Flag
  enum class eWCF : uint32_t {
    // Not complete
    eNOT_COMPLETED = 0,
    // Complete
    eCOMPLETED = 1,
  };
  
  // Frame Complete Flag
  enum class eFCF : uint32_t {
    // Not complete
    eNOT_COMPLETED = 0,
    // Complete
    eCOMPLETED = 1,
  };
  
  // Transfer Complete Flag
  enum class eTCF : uint32_t {
    // Not complete
    eNOT_COMPLETED = 0,
    // Complete
    eCOMPLETED = 1,
  };
  
  // Transmit Error Flag
  enum class eTEF : uint32_t {
    // No underrun
    eNO_UNDERRUN = 0,
    // Underrun
    eUNDERRUN = 1,
  };
  
  // Receive Error Flag
  enum class eREF : uint32_t {
    // No overflow
    eNOT_OVERFLOWED = 0,
    // Overflow
    eOVERFLOWED = 1,
  };
  
  // Data Match Flag
  enum class eDMF : uint32_t {
    // No match
    eNO_MATCH = 0,
    // Match
    eMATCH = 1,
  };
  
  // Module Busy Flag
  enum class eMBF : uint32_t {
    // LPSPI is idle
    eIDLE = 0,
    // LPSPI is busy
    eBUSY = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Transmit Data Flag
    eTDF TDF : 1;
    // read-only - Receive Data Flag
    eRDF RDF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Word Complete Flag
    eWCF WCF : 1;
    // read-write - Frame Complete Flag
    eFCF FCF : 1;
    // read-write - Transfer Complete Flag
    eTCF TCF : 1;
    // read-write - Transmit Error Flag
    eTEF TEF : 1;
    // read-write - Receive Error Flag
    eREF REF : 1;
    // read-write - Data Match Flag
    eDMF DMF : 1;
    uint32_t _reserved_1 : 10;
    // read-only - Module Busy Flag
    eMBF MBF : 1;
    uint32_t _reserved_2 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile SR &ref() { return *reinterpret_cast<volatile SR*>(0x40C2C014); }
};

// Interrupt Enable
union IER {
  
  // Transmit Data Interrupt Enable
  enum class eTDIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Receive Data Interrupt Enable
  enum class eRDIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Word Complete Interrupt Enable
  enum class eWCIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Frame Complete Interrupt Enable
  enum class eFCIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Transfer Complete Interrupt Enable
  enum class eTCIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Transmit Error Interrupt Enable
  enum class eTEIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Receive Error Interrupt Enable
  enum class eREIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Data Match Interrupt Enable
  enum class eDMIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit Data Interrupt Enable
    eTDIE TDIE : 1;
    // read-write - Receive Data Interrupt Enable
    eRDIE RDIE : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Word Complete Interrupt Enable
    eWCIE WCIE : 1;
    // read-write - Frame Complete Interrupt Enable
    eFCIE FCIE : 1;
    // read-write - Transfer Complete Interrupt Enable
    eTCIE TCIE : 1;
    // read-write - Transmit Error Interrupt Enable
    eTEIE TEIE : 1;
    // read-write - Receive Error Interrupt Enable
    eREIE REIE : 1;
    // read-write - Data Match Interrupt Enable
    eDMIE DMIE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IER &ref() { return *reinterpret_cast<volatile IER*>(0x40C2C018); }
};

// DMA Enable
union DER {
  
  // Transmit Data DMA Enable
  enum class eTDDE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Receive Data DMA Enable
  enum class eRDDE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit Data DMA Enable
    eTDDE TDDE : 1;
    // read-write - Receive Data DMA Enable
    eRDDE RDDE : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DER &ref() { return *reinterpret_cast<volatile DER*>(0x40C2C01C); }
};

// Configuration 0
union CFGR0 {
  
  // Circular FIFO Enable
  enum class eCIRFIFO : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Receive Data Match Only
  enum class eRDMO : uint32_t {
    // Disable
    eSTORED = 0,
    // Enable
    eDISCARDED = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - Circular FIFO Enable
    eCIRFIFO CIRFIFO : 1;
    // read-write - Receive Data Match Only
    eRDMO RDMO : 1;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFGR0 &ref() { return *reinterpret_cast<volatile CFGR0*>(0x40C2C020); }
};

// Configuration 1
union CFGR1 {
  
  // Master Mode
  enum class eMASTER : uint32_t {
    // Slave mode
    eSLAVE_MODE = 0,
    // Master mode
    eMASTER_MODE = 1,
  };
  
  // Sample Point
  enum class eSAMPLE : uint32_t {
    // SCK edge
    eON_SCK_EDGE = 0,
    // Delayed SCK edge
    eON_DELAYED_SCK_EDGE = 1,
  };
  
  // Automatic PCS
  enum class eAUTOPCS : uint32_t {
    // Disable
    eDISABLED = 0,
    // Enable
    eENABLED = 1,
  };
  
  // No Stall
  enum class eNOSTALL : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Match Configuration
  enum class eMATCFG : uint32_t {
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
  
  // Pin Configuration
  enum class ePINCFG : uint32_t {
    // SIN is used for input data; SOUT is used for output data.
    eSIN_IN_SOUT_OUT = 0,
    // SIN is used for both input and output data. Only half-duplex serial transfers are supported.
    eSIN_BOTH_IN_OUT = 1,
    // SOUT is used for both input and output data. Only half-duplex serial transfers are supported.
    eSOUT_BOTH_IN_OUT = 2,
    // SOUT is used for input data; SIN is used for output data.
    eSOUT_IN_SIN_OUT = 3,
  };
  
  // Output Configuration
  enum class eOUTCFG : uint32_t {
    // Output data retains last value.
    eRETAIN_LASTVALUE = 0,
    // Output data is 3-stated.
    eTRISTATED = 1,
  };
  
  // Peripheral Chip Select Configuration
  enum class ePCSCFG : uint32_t {
    // PCS[3:2] are configured for chip select function
    eCHIP_SELECT = 0,
    // PCS[3:2] are configured for half-duplex 4-bit transfers (PCS[3:2] = DATA[3:2])
    eHALFDUPLEX4BIT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Master Mode
    eMASTER MASTER : 1;
    // read-write - Sample Point
    eSAMPLE SAMPLE : 1;
    // read-write - Automatic PCS
    eAUTOPCS AUTOPCS : 1;
    // read-write - No Stall
    eNOSTALL NOSTALL : 1;
    uint32_t _reserved_0 : 4;
    // read-write - Peripheral Chip Select Polarity
    uint32_t PCSPOL : 4;
    uint32_t _reserved_1 : 4;
    // read-write - Match Configuration
    eMATCFG MATCFG : 3;
    uint32_t _reserved_2 : 5;
    // read-write - Pin Configuration
    ePINCFG PINCFG : 2;
    // read-write - Output Configuration
    eOUTCFG OUTCFG : 1;
    // read-write - Peripheral Chip Select Configuration
    ePCSCFG PCSCFG : 1;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFGR1 &ref() { return *reinterpret_cast<volatile CFGR1*>(0x40C2C024); }
};

// Data Match 0
union DMR0 {
  
  // Bit field definition.
  struct {
    // read-write - Match 0 Value
    uint32_t MATCH0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMR0 &ref() { return *reinterpret_cast<volatile DMR0*>(0x40C2C030); }
};

// Data Match 1
union DMR1 {
  
  // Bit field definition.
  struct {
    // read-write - Match 1 Value
    uint32_t MATCH1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMR1 &ref() { return *reinterpret_cast<volatile DMR1*>(0x40C2C034); }
};

// Clock Configuration
union CCR {
  
  // Bit field definition.
  struct {
    // read-write - SCK Divider
    uint32_t SCKDIV : 8;
    // read-write - Delay Between Transfers
    uint32_t DBT : 8;
    // read-write - PCS-to-SCK Delay
    uint32_t PCSSCK : 8;
    // read-write - SCK-to-PCS Delay
    uint32_t SCKPCS : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CCR &ref() { return *reinterpret_cast<volatile CCR*>(0x40C2C040); }
};

// FIFO Control
union FCR {
  
  // Bit field definition.
  struct {
    // read-write - Transmit FIFO Watermark
    uint32_t TXWATER : 4;
    uint32_t _reserved_0 : 12;
    // read-write - Receive FIFO Watermark
    uint32_t RXWATER : 4;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCR &ref() { return *reinterpret_cast<volatile FCR*>(0x40C2C058); }
};

// FIFO Status
union FSR {
  
  // Bit field definition.
  struct {
    // read-only - Transmit FIFO Count
    uint32_t TXCOUNT : 5;
    uint32_t _reserved_0 : 11;
    // read-only - Receive FIFO Count
    uint32_t RXCOUNT : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FSR &ref() { return *reinterpret_cast<volatile FSR*>(0x40C2C05C); }
};

// Transmit Command
union TCR {
  
  // Transfer Width
  enum class eWIDTH : uint32_t {
    // 1-bit transfer
    eONEBIT = 0,
    // 2-bit transfer
    eTWOBIT = 1,
    // 4-bit transfer
    eFOURBIT = 2,
  };
  
  // Transmit Data Mask
  enum class eTXMSK : uint32_t {
    // Normal transfer
    eNORMAL = 0,
    // Mask transmit data
    eMASK = 1,
  };
  
  // Receive Data Mask
  enum class eRXMSK : uint32_t {
    // Normal transfer
    eNORMAL = 0,
    // Receive data is masked
    eMASK = 1,
  };
  
  // Continuing Command
  enum class eCONTC : uint32_t {
    // Command word for start of new transfer
    eSTART = 0,
    // Command word for continuing transfer
    eCONTINUE = 1,
  };
  
  // Continuous Transfer
  enum class eCONT : uint32_t {
    // Continuous transfer is disabled
    eDISABLED = 0,
    // Continuous transfer is enabled
    eENABLED = 1,
  };
  
  // Byte Swap
  enum class eBYSW : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // LSB First
  enum class eLSBF : uint32_t {
    // Data is transferred MSB first
    eMSB_FIRST = 0,
    // Data is transferred LSB first
    eLSB_FIRST = 1,
  };
  
  // Peripheral Chip Select
  enum class ePCS : uint32_t {
    // Transfer using PCS[0]
    eTX_PCS0 = 0,
    // Transfer using PCS[1]
    eTX_PCS1 = 1,
    // Transfer using PCS[2]
    eTX_PCS2 = 2,
    // Transfer using PCS[3]
    eTX_PCS3 = 3,
  };
  
  // Prescaler Value
  enum class ePRESCALE : uint32_t {
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
  
  // Clock Phase
  enum class eCPHA : uint32_t {
    // Captured
    eCAPTURED = 0,
    // Changed
    eCHANGED = 1,
  };
  
  // Clock Polarity
  enum class eCPOL : uint32_t {
    // Inactive low
    eINACTIVE_LOW = 0,
    // Inactive high
    eINACTIVE_HIGH = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Frame Size
    uint32_t FRAMESZ : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Transfer Width
    eWIDTH WIDTH : 2;
    // read-write - Transmit Data Mask
    eTXMSK TXMSK : 1;
    // read-write - Receive Data Mask
    eRXMSK RXMSK : 1;
    // read-write - Continuing Command
    eCONTC CONTC : 1;
    // read-write - Continuous Transfer
    eCONT CONT : 1;
    // read-write - Byte Swap
    eBYSW BYSW : 1;
    // read-write - LSB First
    eLSBF LSBF : 1;
    // read-write - Peripheral Chip Select
    ePCS PCS : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Prescaler Value
    ePRESCALE PRESCALE : 3;
    // read-write - Clock Phase
    eCPHA CPHA : 1;
    // read-write - Clock Polarity
    eCPOL CPOL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000001F; }
  static inline volatile TCR &ref() { return *reinterpret_cast<volatile TCR*>(0x40C2C060); }
};

// Transmit Data
union TDR {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDR &ref() { return *reinterpret_cast<volatile TDR*>(0x40C2C064); }
};

// Receive Status
union RSR {
  
  // Start Of Frame
  enum class eSOF : uint32_t {
    // Subsequent data word
    eNEXT_DATAWORD = 0,
    // First data word
    eFIRST_DATAWORD = 1,
  };
  
  // RX FIFO Empty
  enum class eRXEMPTY : uint32_t {
    // Not empty
    eNOT_EMPTY = 0,
    // Empty
    eEMPTY = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Start Of Frame
    eSOF SOF : 1;
    // read-only - RX FIFO Empty
    eRXEMPTY RXEMPTY : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile RSR &ref() { return *reinterpret_cast<volatile RSR*>(0x40C2C070); }
};

// Receive Data
union RDR {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDR &ref() { return *reinterpret_cast<volatile RDR*>(0x40C2C074); }
};


} // namespace nLPSPI5