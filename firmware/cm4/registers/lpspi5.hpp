#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // LPSPI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nLPSPI5 {


// Version ID
//
union VERID {
  
  // Enum definitions.
  enum class eFEATURE : uint32_t {
    eSTANDARD = 4, // Standard feature set supporting a 32-bit shift register.
  };
  
  // Bit field definition.
  struct {
    eFEATURE FEATURE : 16;
    uint32_t MINOR : 8;
    uint32_t MAJOR : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x01020004; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x40C2C000); }
};

// Parameter
//
union PARAM {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TXFIFO : 8;
    uint32_t RXFIFO : 8;
    uint32_t PCSNUM : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00040404; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x40C2C004); }
};

// Control
//
union CR {
  
  // Enum definitions.
  enum class eMEN : uint32_t {
    eDISABLED = 0, // Module is disabled
    eENABLED = 1, // Module is enabled
  };
  enum class eRST : uint32_t {
    eNOT_RESET = 0, // Module is not reset
    eRESET = 1, // Module is reset
  };
  enum class eDOZEN : uint32_t {
    eENABLED = 0, // LPSPI module is enabled in Doze mode
    eDISABLED = 1, // LPSPI module is disabled in Doze mode
  };
  enum class eDBGEN : uint32_t {
    eDISABLED = 0, // LPSPI module is disabled in debug mode
    eENABLED = 1, // LPSPI module is enabled in debug mode
  };
  enum class eRTF : uint32_t {
    eNO_EFFECT = 0, // No effect
    eTXFIFO_RST = 1, // Reset the Transmit FIFO. The register bit always reads zero.
  };
  enum class eRRF : uint32_t {
    eNO_EFFECT = 0, // No effect
    eRXFIFO_RST = 1, // Reset the Receive FIFO. The register bit always reads zero.
  };
  
  // Bit field definition.
  struct {
    eMEN MEN : 1;
    eRST RST : 1;
    eDOZEN DOZEN : 1;
    eDBGEN DBGEN : 1;
    uint32_t _reserved_4 : 4;
    eRTF RTF : 1;
    eRRF RRF : 1;
    uint32_t _reserved_end : 22;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x40C2C010); }
};

// Status
//
union SR {
  
  // Enum definitions.
  enum class eTDF : uint32_t {
    eTXDATA_NOT_REQST = 0, // Transmit data not requested
    eTXDATA_REQST = 1, // Transmit data is requested
  };
  enum class eRDF : uint32_t {
    eNOTREADY = 0, // Receive Data is not ready
    eREADY = 1, // Receive data is ready
  };
  enum class eWCF : uint32_t {
    eNOT_COMPLETED = 0, // Transfer of a received word has not yet completed
    eCOMPLETED = 1, // Transfer of a received word has completed
  };
  enum class eFCF : uint32_t {
    eNOT_COMPLETED = 0, // Frame transfer has not completed
    eCOMPLETED = 1, // Frame transfer has completed
  };
  enum class eTCF : uint32_t {
    eNOT_COMPLETED = 0, // All transfers have not completed
    eCOMPLETED = 1, // All transfers have completed
  };
  enum class eTEF : uint32_t {
    eNO_UNDERRUN = 0, // Transmit FIFO underrun has not occurred
    eUNDERRUN = 1, // Transmit FIFO underrun has occurred
  };
  enum class eREF : uint32_t {
    eNOT_OVERFLOWED = 0, // Receive FIFO has not overflowed
    eOVERFLOWED = 1, // Receive FIFO has overflowed
  };
  enum class eDMF : uint32_t {
    eNO_MATCH = 0, // Have not received matching data
    eMATCH = 1, // Have received matching data
  };
  enum class eMBF : uint32_t {
    eIDLE = 0, // LPSPI is idle
    eBUSY = 1, // LPSPI is busy
  };
  
  // Bit field definition.
  struct {
    eTDF TDF : 1;
    eRDF RDF : 1;
    uint32_t _reserved_2 : 6;
    eWCF WCF : 1;
    eFCF FCF : 1;
    eTCF TCF : 1;
    eTEF TEF : 1;
    eREF REF : 1;
    eDMF DMF : 1;
    uint32_t _reserved_8 : 10;
    eMBF MBF : 1;
    uint32_t _reserved_end : 7;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile SR &Instance() { return *reinterpret_cast<volatile SR*>(0x40C2C014); }
};

// Interrupt Enable
//
union IER {
  
  // Enum definitions.
  enum class eTDIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  enum class eRDIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  enum class eWCIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  enum class eFCIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  enum class eTCIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  enum class eTEIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  enum class eREIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  enum class eDMIE : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eTDIE TDIE : 1;
    eRDIE RDIE : 1;
    uint32_t _reserved_2 : 6;
    eWCIE WCIE : 1;
    eFCIE FCIE : 1;
    eTCIE TCIE : 1;
    eTEIE TEIE : 1;
    eREIE REIE : 1;
    eDMIE DMIE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IER &Instance() { return *reinterpret_cast<volatile IER*>(0x40C2C018); }
};

// DMA Enable
//
union DER {
  
  // Enum definitions.
  enum class eTDDE : uint32_t {
    eDISABLED = 0, // DMA request is disabled
    eENABLED = 1, // DMA request is enabled
  };
  enum class eRDDE : uint32_t {
    eDISABLED = 0, // DMA request is disabled
    eENABLED = 1, // DMA request is enabled
  };
  
  // Bit field definition.
  struct {
    eTDDE TDDE : 1;
    eRDDE RDDE : 1;
    uint32_t _reserved_end : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DER &Instance() { return *reinterpret_cast<volatile DER*>(0x40C2C01C); }
};

// Configuration 0
//
union CFGR0 {
  
  // Enum definitions.
  enum class eCIRFIFO : uint32_t {
    eDISABLED = 0, // Circular FIFO is disabled
    eENABLED = 1, // Circular FIFO is enabled
  };
  enum class eRDMO : uint32_t {
    eSTORED = 0, // Received data is stored in the receive FIFO as in normal operations
    eDISCARDED = 1, // Received data is discarded unless the SR[DMF] = 1
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    eCIRFIFO CIRFIFO : 1;
    eRDMO RDMO : 1;
    uint32_t _reserved_end : 22;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CFGR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFGR0 &Instance() { return *reinterpret_cast<volatile CFGR0*>(0x40C2C020); }
};

// Configuration 1
//
union CFGR1 {
  
  // Enum definitions.
  enum class eMASTER : uint32_t {
    eSLAVE_MODE = 0, // Slave mode
    eMASTER_MODE = 1, // Master mode
  };
  enum class eSAMPLE : uint32_t {
    eON_SCK_EDGE = 0, // Input data is sampled on SCK edge
    eON_DELAYED_SCK_EDGE = 1, // Input data is sampled on delayed SCK edge
  };
  enum class eAUTOPCS : uint32_t {
    eDISABLED = 0, // Automatic PCS generation is disabled
    eENABLED = 1, // Automatic PCS generation is enabled
  };
  enum class eNOSTALL : uint32_t {
    eDISABLED = 0, // Transfers stall when the transmit FIFO is empty
    eENABLED = 1, // Transfers do not stall, allowing transmit FIFO underruns to occur
  };
  enum class eMATCFG : uint32_t {
    eDISABLED = 0, // Match is disabled
    eENABLED_FIRSTDATAMATCH = 2, // Match is enabled is 1st data word is MATCH0 or MATCH1
    eENABLED_ANYDATAMATCH = 3, // Match is enabled on any data word equal MATCH0 or MATCH1
    eENABLED_DATAMATCH_100 = 4, // Match is enabled on data match sequence
    eENABLED_DATAMATCH_101 = 5, // Match is enabled on data match sequence
    eENABLED_DATAMATCH_110 = 6, // Match is enabled
    eENABLED_DATAMATCH_111 = 7, // Match is enabled
  };
  enum class ePINCFG : uint32_t {
    eSIN_IN_SOUT_OUT = 0, // SIN is used for input data and SOUT is used for output data
    eSIN_BOTH_IN_OUT = 1, // SIN is used for both input and output data, only half-duplex serial transfers are supported
    eSOUT_BOTH_IN_OUT = 2, // SOUT is used for both input and output data, only half-duplex serial transfers are supported
    eSOUT_IN_SIN_OUT = 3, // SOUT is used for input data and SIN is used for output data
  };
  enum class eOUTCFG : uint32_t {
    eRETAIN_LASTVALUE = 0, // Output data retains last value when chip select is negated
    eTRISTATED = 1, // Output data is tristated when chip select is negated
  };
  enum class ePCSCFG : uint32_t {
    eCHIP_SELECT = 0, // PCS[3:2] are configured for chip select function
    eHALFDUPLEX4BIT = 1, // PCS[3:2] are configured for half-duplex 4-bit transfers (PCS[3:2] = DATA[3:2])
  };
  
  // Bit field definition.
  struct {
    eMASTER MASTER : 1;
    eSAMPLE SAMPLE : 1;
    eAUTOPCS AUTOPCS : 1;
    eNOSTALL NOSTALL : 1;
    uint32_t _reserved_4 : 4;
    uint32_t PCSPOL : 4;
    uint32_t _reserved_5 : 4;
    eMATCFG MATCFG : 3;
    uint32_t _reserved_6 : 5;
    ePINCFG PINCFG : 2;
    eOUTCFG OUTCFG : 1;
    ePCSCFG PCSCFG : 1;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CFGR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFGR1 &Instance() { return *reinterpret_cast<volatile CFGR1*>(0x40C2C024); }
};

// Data Match 0
//
union DMR0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MATCH0 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DMR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMR0 &Instance() { return *reinterpret_cast<volatile DMR0*>(0x40C2C030); }
};

// Data Match 1
//
union DMR1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MATCH1 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DMR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMR1 &Instance() { return *reinterpret_cast<volatile DMR1*>(0x40C2C034); }
};

// Clock Configuration
//
union CCR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t SCKDIV : 8;
    uint32_t DBT : 8;
    uint32_t PCSSCK : 8;
    uint32_t SCKPCS : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CCR &Instance() { return *reinterpret_cast<volatile CCR*>(0x40C2C040); }
};

// FIFO Control
//
union FCR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TXWATER : 4;
    uint32_t _reserved_1 : 12;
    uint32_t RXWATER : 4;
    uint32_t _reserved_end : 12;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  FCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCR &Instance() { return *reinterpret_cast<volatile FCR*>(0x40C2C058); }
};

// FIFO Status
//
union FSR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TXCOUNT : 5;
    uint32_t _reserved_1 : 11;
    uint32_t RXCOUNT : 5;
    uint32_t _reserved_end : 11;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  FSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FSR &Instance() { return *reinterpret_cast<volatile FSR*>(0x40C2C05C); }
};

// Transmit Command
//
union TCR {
  
  // Enum definitions.
  enum class eWIDTH : uint32_t {
    eONEBIT = 0, // 1 bit transfer
    eTWOBIT = 1, // 2 bit transfer
    eFOURBIT = 2, // 4 bit transfer
  };
  enum class eTXMSK : uint32_t {
    eNORMAL = 0, // Normal transfer
    eMASK = 1, // Mask transmit data
  };
  enum class eRXMSK : uint32_t {
    eNORMAL = 0, // Normal transfer
    eMASK = 1, // Receive data is masked
  };
  enum class eCONTC : uint32_t {
    eSTART = 0, // Command word for start of new transfer
    eCONTINUE = 1, // Command word for continuing transfer
  };
  enum class eCONT : uint32_t {
    eDISABLED = 0, // Continuous transfer is disabled
    eENABLED = 1, // Continuous transfer is enabled
  };
  enum class eBYSW : uint32_t {
    eDISABLED = 0, // Byte swap is disabled
    eENABLED = 1, // Byte swap is enabled
  };
  enum class eLSBF : uint32_t {
    eMSB_FIRST = 0, // Data is transferred MSB first
    eLSB_FIRST = 1, // Data is transferred LSB first
  };
  enum class ePCS : uint32_t {
    eTX_PCS0 = 0, // Transfer using PCS[0]
    eTX_PCS1 = 1, // Transfer using PCS[1]
    eTX_PCS2 = 2, // Transfer using PCS[2]
    eTX_PCS3 = 3, // Transfer using PCS[3]
  };
  enum class ePRESCALE : uint32_t {
    eDIVIDEBY1 = 0, // Divide by 1
    eDIVIDEBY2 = 1, // Divide by 2
    eDIVIDEBY4 = 2, // Divide by 4
    eDIVIDEBY8 = 3, // Divide by 8
    eDIVIDEBY16 = 4, // Divide by 16
    eDIVIDEBY32 = 5, // Divide by 32
    eDIVIDEBY64 = 6, // Divide by 64
    eDIVIDEBY128 = 7, // Divide by 128
  };
  enum class eCPHA : uint32_t {
    eCAPTURED = 0, // Captured
    eCHANGED = 1, // Changed
  };
  enum class eCPOL : uint32_t {
    eINACTIVE_LOW = 0, // The inactive state value of SCK is low
    eINACTIVE_HIGH = 1, // The inactive state value of SCK is high
  };
  
  // Bit field definition.
  struct {
    uint32_t FRAMESZ : 12;
    uint32_t _reserved_1 : 4;
    eWIDTH WIDTH : 2;
    eTXMSK TXMSK : 1;
    eRXMSK RXMSK : 1;
    eCONTC CONTC : 1;
    eCONT CONT : 1;
    eBYSW BYSW : 1;
    eLSBF LSBF : 1;
    ePCS PCS : 2;
    uint32_t _reserved_9 : 1;
    ePRESCALE PRESCALE : 3;
    eCPHA CPHA : 1;
    eCPOL CPOL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCR() = delete;
  inline void Reset() volatile { this->value = 0x0000001F; }
  static inline volatile TCR &Instance() { return *reinterpret_cast<volatile TCR*>(0x40C2C060); }
};

// Transmit Data
//
union TDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDR &Instance() { return *reinterpret_cast<volatile TDR*>(0x40C2C064); }
};

// Receive Status
//
union RSR {
  
  // Enum definitions.
  enum class eSOF : uint32_t {
    eNEXT_DATAWORD = 0, // Subsequent data word received after PCS assertion
    eFIRST_DATAWORD = 1, // First data word received after PCS assertion
  };
  enum class eRXEMPTY : uint32_t {
    eNOT_EMPTY = 0, // RX FIFO is not empty
    eEMPTY = 1, // RX FIFO is empty
  };
  
  // Bit field definition.
  struct {
    eSOF SOF : 1;
    eRXEMPTY RXEMPTY : 1;
    uint32_t _reserved_end : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RSR() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile RSR &Instance() { return *reinterpret_cast<volatile RSR*>(0x40C2C070); }
};

// Receive Data
//
union RDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDR &Instance() { return *reinterpret_cast<volatile RDR*>(0x40C2C074); }
};


} // namespace nLPSPI5