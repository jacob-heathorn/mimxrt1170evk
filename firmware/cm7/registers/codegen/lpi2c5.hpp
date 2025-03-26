#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LPI2C
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nLPI2C5 {


// Version ID
union VERID {
  
  // Feature Specification Number
  enum class eFEATURE : uint32_t {
    // Master only, with standard feature set
    eMASTER_ONLY = 2,
    // Master and slave, with standard feature set
    eMASTER_AND_SLAVE = 3,
  };
  
  // Bit field definition.
  struct {
    // read-only - Feature Specification Number
    eFEATURE FEATURE : 16;
    // read-only - Minor Version Number
    uint32_t MINOR : 8;
    // read-only - Major Version Number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x01010003; }
  static inline volatile VERID &ref() { return *reinterpret_cast<volatile VERID*>(0x40C34000); }
};

// Parameter
union PARAM {
  
  // Bit field definition.
  struct {
    // read-only - Master Transmit FIFO Size
    uint32_t MTXFIFO : 4;
    uint32_t _reserved_0 : 4;
    // read-only - Master Receive FIFO Size
    uint32_t MRXFIFO : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00000202; }
  static inline volatile PARAM &ref() { return *reinterpret_cast<volatile PARAM*>(0x40C34004); }
};

// Master Control
union MCR {
  
  // Master Enable
  enum class eMEN : uint32_t {
    // Master logic is disabled
    eDISABLED = 0,
    // Master logic is enabled
    eENABLED = 1,
  };
  
  // Software Reset
  enum class eRST : uint32_t {
    // Master logic is not reset
    eNOT_RESET = 0,
    // Master logic is reset
    eRESET = 1,
  };
  
  // Doze mode enable
  enum class eDOZEN : uint32_t {
    // Master is enabled in Doze mode
    eENABLED = 0,
    // Master is disabled in Doze mode
    eDISABLED = 1,
  };
  
  // Debug Enable
  enum class eDBGEN : uint32_t {
    // Master is disabled in debug mode
    eDISABLED = 0,
    // Master is enabled in debug mode
    eENABLED = 1,
  };
  
  // Reset Transmit FIFO
  enum class eRTF : uint32_t {
    // No effect
    eNO_EFFECT = 0,
    // Transmit FIFO is reset
    eRESET = 1,
  };
  
  // Reset Receive FIFO
  enum class eRRF : uint32_t {
    // No effect
    eNO_EFFECT = 0,
    // Receive FIFO is reset
    eRESET = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Master Enable
    eMEN MEN : 1;
    // read-write - Software Reset
    eRST RST : 1;
    // read-write - Doze mode enable
    eDOZEN DOZEN : 1;
    // read-write - Debug Enable
    eDBGEN DBGEN : 1;
    uint32_t _reserved_0 : 4;
    // read-write - Reset Transmit FIFO
    eRTF RTF : 1;
    // read-write - Reset Receive FIFO
    eRRF RRF : 1;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCR &ref() { return *reinterpret_cast<volatile MCR*>(0x40C34010); }
};

// Master Status
union MSR {
  
  // Transmit Data Flag
  enum class eTDF : uint32_t {
    // Transmit data is not requested
    eDISABLED = 0,
    // Transmit data is requested
    eENABLED = 1,
  };
  
  // Receive Data Flag
  enum class eRDF : uint32_t {
    // Receive Data is not ready
    eDISABLED = 0,
    // Receive data is ready
    eENABLED = 1,
  };
  
  // End Packet Flag
  enum class eEPF : uint32_t {
    // Master has not generated a STOP or Repeated START condition
    eNO_FLAG = 0,
    // Master has generated a STOP or Repeated START condition
    eFLAG = 1,
  };
  
  // STOP Detect Flag
  enum class eSDF : uint32_t {
    // Master has not generated a STOP condition
    eNO_FLAG = 0,
    // Master has generated a STOP condition
    eFLAG = 1,
  };
  
  // NACK Detect Flag
  enum class eNDF : uint32_t {
    // Unexpected NACK was not detected
    eNO_FLAG = 0,
    // Unexpected NACK was detected
    eFLAG = 1,
  };
  
  // Arbitration Lost Flag
  enum class eALF : uint32_t {
    // Master has not lost arbitration
    eNO_FLAG = 0,
    // Master has lost arbitration
    eFLAG = 1,
  };
  
  // FIFO Error Flag
  enum class eFEF : uint32_t {
    // No error
    eNO_FLAG = 0,
    // Master sending or receiving data without a START condition
    eFLAG = 1,
  };
  
  // Pin Low Timeout Flag
  enum class ePLTF : uint32_t {
    // Pin low timeout has not occurred or is disabled
    eNO_FLAG = 0,
    // Pin low timeout has occurred
    eFLAG = 1,
  };
  
  // Data Match Flag
  enum class eDMF : uint32_t {
    // Have not received matching data
    eNO_FLAG = 0,
    // Have received matching data
    eFLAG = 1,
  };
  
  // Master Busy Flag
  enum class eMBF : uint32_t {
    // I2C Master is idle
    eIDLE = 0,
    // I2C Master is busy
    eBUSY = 1,
  };
  
  // Bus Busy Flag
  enum class eBBF : uint32_t {
    // I2C Bus is idle
    eIDLE = 0,
    // I2C Bus is busy
    eBUSY = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Transmit Data Flag
    eTDF TDF : 1;
    // read-only - Receive Data Flag
    eRDF RDF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - End Packet Flag
    eEPF EPF : 1;
    // read-write - STOP Detect Flag
    eSDF SDF : 1;
    // read-write - NACK Detect Flag
    eNDF NDF : 1;
    // read-write - Arbitration Lost Flag
    eALF ALF : 1;
    // read-write - FIFO Error Flag
    eFEF FEF : 1;
    // read-write - Pin Low Timeout Flag
    ePLTF PLTF : 1;
    // read-write - Data Match Flag
    eDMF DMF : 1;
    uint32_t _reserved_1 : 9;
    // read-only - Master Busy Flag
    eMBF MBF : 1;
    // read-only - Bus Busy Flag
    eBBF BBF : 1;
    uint32_t _reserved_2 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MSR() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile MSR &ref() { return *reinterpret_cast<volatile MSR*>(0x40C34014); }
};

// Master Interrupt Enable
union MIER {
  
  // Transmit Data Interrupt Enable
  enum class eTDIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Receive Data Interrupt Enable
  enum class eRDIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // End Packet Interrupt Enable
  enum class eEPIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // STOP Detect Interrupt Enable
  enum class eSDIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // NACK Detect Interrupt Enable
  enum class eNDIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Arbitration Lost Interrupt Enable
  enum class eALIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // FIFO Error Interrupt Enable
  enum class eFEIE : uint32_t {
    // Enabled
    eENABLED = 0,
    // Disabled
    eDISABLED = 1,
  };
  
  // Pin Low Timeout Interrupt Enable
  enum class ePLTIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Data Match Interrupt Enable
  enum class eDMIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit Data Interrupt Enable
    eTDIE TDIE : 1;
    // read-write - Receive Data Interrupt Enable
    eRDIE RDIE : 1;
    uint32_t _reserved_0 : 6;
    // read-write - End Packet Interrupt Enable
    eEPIE EPIE : 1;
    // read-write - STOP Detect Interrupt Enable
    eSDIE SDIE : 1;
    // read-write - NACK Detect Interrupt Enable
    eNDIE NDIE : 1;
    // read-write - Arbitration Lost Interrupt Enable
    eALIE ALIE : 1;
    // read-write - FIFO Error Interrupt Enable
    eFEIE FEIE : 1;
    // read-write - Pin Low Timeout Interrupt Enable
    ePLTIE PLTIE : 1;
    // read-write - Data Match Interrupt Enable
    eDMIE DMIE : 1;
    uint32_t _reserved_1 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIER &ref() { return *reinterpret_cast<volatile MIER*>(0x40C34018); }
};

// Master DMA Enable
union MDER {
  
  // Transmit Data DMA Enable
  enum class eTDDE : uint32_t {
    // DMA request is disabled
    eDISABLED = 0,
    // DMA request is enabled
    eENABLED = 1,
  };
  
  // Receive Data DMA Enable
  enum class eRDDE : uint32_t {
    // DMA request is disabled
    eDISABLED = 0,
    // DMA request is enabled
    eENABLED = 1,
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

  MDER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MDER &ref() { return *reinterpret_cast<volatile MDER*>(0x40C3401C); }
};

// Master Configuration 0
union MCFGR0 {
  
  // Host Request Enable
  enum class eHREN : uint32_t {
    // Host request input is disabled
    eDISABLED = 0,
    // Host request input is enabled
    eENABLED = 1,
  };
  
  // Host Request Polarity
  enum class eHRPOL : uint32_t {
    // Active low
    eACTIVE_LOW = 0,
    // Active high
    eACTIVE_HIGH = 1,
  };
  
  // Host Request Select
  enum class eHRSEL : uint32_t {
    // Host request input is pin HREQ
    eDISABLED = 0,
    // Host request input is input trigger
    eENABLED = 1,
  };
  
  // Circular FIFO Enable
  enum class eCIRFIFO : uint32_t {
    // Circular FIFO is disabled
    eDISABLED = 0,
    // Circular FIFO is enabled
    eENABLED = 1,
  };
  
  // Receive Data Match Only
  enum class eRDMO : uint32_t {
    // Received data is stored in the receive FIFO
    eDISABLED = 0,
    // Received data is discarded unless the the Data Match Flag (MSR[DMF]) is set
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Host Request Enable
    eHREN HREN : 1;
    // read-write - Host Request Polarity
    eHRPOL HRPOL : 1;
    // read-write - Host Request Select
    eHRSEL HRSEL : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Circular FIFO Enable
    eCIRFIFO CIRFIFO : 1;
    // read-write - Receive Data Match Only
    eRDMO RDMO : 1;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCFGR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCFGR0 &ref() { return *reinterpret_cast<volatile MCFGR0*>(0x40C34020); }
};

// Master Configuration 1
union MCFGR1 {
  
  // Prescaler
  enum class ePRESCALE : uint32_t {
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
  
  // Automatic STOP Generation
  enum class eAUTOSTOP : uint32_t {
    // No effect
    eDISABLED = 0,
    // STOP condition is automatically generated whenever the transmit FIFO is empty and the LPI2C master is busy
    eENABLED = 1,
  };
  
  // IGNACK
  enum class eIGNACK : uint32_t {
    // LPI2C Master receives ACK and NACK normally
    eDISABLED = 0,
    // LPI2C Master treats a received NACK as if it (NACK) was an ACK
    eENABLED = 1,
  };
  
  // Timeout Configuration
  enum class eTIMECFG : uint32_t {
    // MSR[PLTF] sets if SCL is low for longer than the configured timeout
    eIF_SCL_LOW = 0,
    // MSR[PLTF] sets if either SCL or SDA is low for longer than the configured timeout
    eIF_SCL_OR_SDA_LOW = 1,
  };
  
  // Match Configuration
  enum class eMATCFG : uint32_t {
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
  
  // Pin Configuration
  enum class ePINCFG : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Prescaler
    ePRESCALE PRESCALE : 3;
    uint32_t _reserved_0 : 5;
    // read-write - Automatic STOP Generation
    eAUTOSTOP AUTOSTOP : 1;
    // read-write - IGNACK
    eIGNACK IGNACK : 1;
    // read-write - Timeout Configuration
    eTIMECFG TIMECFG : 1;
    uint32_t _reserved_1 : 5;
    // read-write - Match Configuration
    eMATCFG MATCFG : 3;
    uint32_t _reserved_2 : 5;
    // read-write - Pin Configuration
    ePINCFG PINCFG : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCFGR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCFGR1 &ref() { return *reinterpret_cast<volatile MCFGR1*>(0x40C34024); }
};

// Master Configuration 2
union MCFGR2 {
  
  // Bit field definition.
  struct {
    // read-write - Bus Idle Timeout
    uint32_t BUSIDLE : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Glitch Filter SCL
    uint32_t FILTSCL : 4;
    uint32_t _reserved_1 : 4;
    // read-write - Glitch Filter SDA
    uint32_t FILTSDA : 4;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCFGR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCFGR2 &ref() { return *reinterpret_cast<volatile MCFGR2*>(0x40C34028); }
};

// Master Configuration 3
union MCFGR3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - Pin Low Timeout
    uint32_t PINLOW : 12;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCFGR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCFGR3 &ref() { return *reinterpret_cast<volatile MCFGR3*>(0x40C3402C); }
};

// Master Data Match
union MDMR {
  
  // Bit field definition.
  struct {
    // read-write - Match 0 Value
    uint32_t MATCH0 : 8;
    uint32_t _reserved_0 : 8;
    // read-write - Match 1 Value
    uint32_t MATCH1 : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MDMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MDMR &ref() { return *reinterpret_cast<volatile MDMR*>(0x40C34040); }
};

// Master Clock Configuration 0
union MCCR0 {
  
  // Bit field definition.
  struct {
    // read-write - Clock Low Period
    uint32_t CLKLO : 6;
    uint32_t _reserved_0 : 2;
    // read-write - Clock High Period
    uint32_t CLKHI : 6;
    uint32_t _reserved_1 : 2;
    // read-write - Setup Hold Delay
    uint32_t SETHOLD : 6;
    uint32_t _reserved_2 : 2;
    // read-write - Data Valid Delay
    uint32_t DATAVD : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCCR0 &ref() { return *reinterpret_cast<volatile MCCR0*>(0x40C34048); }
};

// Master Clock Configuration 1
union MCCR1 {
  
  // Bit field definition.
  struct {
    // read-write - Clock Low Period
    uint32_t CLKLO : 6;
    uint32_t _reserved_0 : 2;
    // read-write - Clock High Period
    uint32_t CLKHI : 6;
    uint32_t _reserved_1 : 2;
    // read-write - Setup Hold Delay
    uint32_t SETHOLD : 6;
    uint32_t _reserved_2 : 2;
    // read-write - Data Valid Delay
    uint32_t DATAVD : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCCR1 &ref() { return *reinterpret_cast<volatile MCCR1*>(0x40C34050); }
};

// Master FIFO Control
union MFCR {
  
  // Bit field definition.
  struct {
    // read-write - Transmit FIFO Watermark
    uint32_t TXWATER : 2;
    uint32_t _reserved_0 : 14;
    // read-write - Receive FIFO Watermark
    uint32_t RXWATER : 2;
    uint32_t _reserved_1 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MFCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MFCR &ref() { return *reinterpret_cast<volatile MFCR*>(0x40C34058); }
};

// Master FIFO Status
union MFSR {
  
  // Bit field definition.
  struct {
    // read-only - Transmit FIFO Count
    uint32_t TXCOUNT : 3;
    uint32_t _reserved_0 : 13;
    // read-only - Receive FIFO Count
    uint32_t RXCOUNT : 3;
    uint32_t _reserved_1 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MFSR &ref() { return *reinterpret_cast<volatile MFSR*>(0x40C3405C); }
};

// Master Transmit Data
union MTDR {
  
  // Command Data
  enum class eCMD : uint32_t {
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
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t DATA : 8;
    // write-only - Command Data
    eCMD CMD : 3;
    uint32_t _reserved_0 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTDR &ref() { return *reinterpret_cast<volatile MTDR*>(0x40C34060); }
};

// Master Receive Data
union MRDR {
  
  // RX Empty
  enum class eRXEMPTY : uint32_t {
    // Receive FIFO is not empty
    eNOT_EMPTY = 0,
    // Receive FIFO is empty
    eEMPTY = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t DATA : 8;
    uint32_t _reserved_0 : 6;
    // read-only - RX Empty
    eRXEMPTY RXEMPTY : 1;
    uint32_t _reserved_1 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MRDR() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile MRDR &ref() { return *reinterpret_cast<volatile MRDR*>(0x40C34070); }
};

// Slave Control
union SCR {
  
  // Slave Enable
  enum class eSEN : uint32_t {
    // I2C Slave mode is disabled
    eDISABLED = 0,
    // I2C Slave mode is enabled
    eENABLED = 1,
  };
  
  // Software Reset
  enum class eRST : uint32_t {
    // Slave mode logic is not reset
    eNOT_RESET = 0,
    // Slave mode logic is reset
    eRESET = 1,
  };
  
  // Filter Enable
  enum class eFILTEN : uint32_t {
    // Disable digital filter and output delay counter for slave mode
    eDISABLE = 0,
    // Enable digital filter and output delay counter for slave mode
    eENABLE = 1,
  };
  
  // Filter Doze Enable
  enum class eFILTDZ : uint32_t {
    // Filter remains enabled in Doze mode
    eFILTER_ENABLED = 0,
    // Filter is disabled in Doze mode
    eFILTER_DISABLED = 1,
  };
  
  // Reset Transmit FIFO
  enum class eRTF : uint32_t {
    // No effect
    eNO_EFFECT = 0,
    // Transmit Data Register is now empty
    eNOW_EMPTY = 1,
  };
  
  // Reset Receive FIFO
  enum class eRRF : uint32_t {
    // No effect
    eNO_EFFECT = 0,
    // Receive Data Register is now empty
    eNOW_EMPTY = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slave Enable
    eSEN SEN : 1;
    // read-write - Software Reset
    eRST RST : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Filter Enable
    eFILTEN FILTEN : 1;
    // read-write - Filter Doze Enable
    eFILTDZ FILTDZ : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Reset Transmit FIFO
    eRTF RTF : 1;
    // read-write - Reset Receive FIFO
    eRRF RRF : 1;
    uint32_t _reserved_2 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCR &ref() { return *reinterpret_cast<volatile SCR*>(0x40C34110); }
};

// Slave Status
union SSR {
  
  // Transmit Data Flag
  enum class eTDF : uint32_t {
    // Transmit data not requested
    eNO_FLAG = 0,
    // Transmit data is requested
    eFLAG = 1,
  };
  
  // Receive Data Flag
  enum class eRDF : uint32_t {
    // Receive data is not ready
    eNOT_READY = 0,
    // Receive data is ready
    eREADY = 1,
  };
  
  // Address Valid Flag
  enum class eAVF : uint32_t {
    // Address Status Register is not valid
    eNOT_VALID = 0,
    // Address Status Register is valid
    eVALID = 1,
  };
  
  // Transmit ACK Flag
  enum class eTAF : uint32_t {
    // Transmit ACK/NACK is not required
    eNOT_REQUIRED = 0,
    // Transmit ACK/NACK is required
    eREQUIRED = 1,
  };
  
  // Repeated Start Flag
  enum class eRSF : uint32_t {
    // Slave has not detected a Repeated START condition
    eNO_FLAG = 0,
    // Slave has detected a Repeated START condition
    eFLAG = 1,
  };
  
  // STOP Detect Flag
  enum class eSDF : uint32_t {
    // Slave has not detected a STOP condition
    eNO_FLAG = 0,
    // Slave has detected a STOP condition
    eFLAG = 1,
  };
  
  // Bit Error Flag
  enum class eBEF : uint32_t {
    // Slave has not detected a bit error
    eNO_FLAG = 0,
    // Slave has detected a bit error
    eFLAG = 1,
  };
  
  // FIFO Error Flag
  enum class eFEF : uint32_t {
    // FIFO underflow or overflow was not detected
    eNO_FLAG = 0,
    // FIFO underflow or overflow was detected
    eFLAG = 1,
  };
  
  // Address Match 0 Flag
  enum class eAM0F : uint32_t {
    // Have not received an ADDR0 matching address
    eNO_FLAG = 0,
    // Have received an ADDR0 matching address
    eFLAG = 1,
  };
  
  // Address Match 1 Flag
  enum class eAM1F : uint32_t {
    // Have not received an ADDR1 or ADDR0/ADDR1 range matching address
    eNO_FLAG = 0,
    // Have received an ADDR1 or ADDR0/ADDR1 range matching address
    eFLAG = 1,
  };
  
  // General Call Flag
  enum class eGCF : uint32_t {
    // Slave has not detected the General Call Address or the General Call Address is disabled
    eNO_FLAG = 0,
    // Slave has detected the General Call Address
    eFLAG = 1,
  };
  
  // SMBus Alert Response Flag
  enum class eSARF : uint32_t {
    // SMBus Alert Response is disabled or not detected
    eNO_FLAG = 0,
    // SMBus Alert Response is enabled and detected
    eFLAG = 1,
  };
  
  // Slave Busy Flag
  enum class eSBF : uint32_t {
    // I2C Slave is idle
    eIDLE = 0,
    // I2C Slave is busy
    eBUSY = 1,
  };
  
  // Bus Busy Flag
  enum class eBBF : uint32_t {
    // I2C Bus is idle
    eIDLE = 0,
    // I2C Bus is busy
    eBUSY = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Transmit Data Flag
    eTDF TDF : 1;
    // read-only - Receive Data Flag
    eRDF RDF : 1;
    // read-only - Address Valid Flag
    eAVF AVF : 1;
    // read-only - Transmit ACK Flag
    eTAF TAF : 1;
    uint32_t _reserved_0 : 4;
    // read-write - Repeated Start Flag
    eRSF RSF : 1;
    // read-write - STOP Detect Flag
    eSDF SDF : 1;
    // read-write - Bit Error Flag
    eBEF BEF : 1;
    // read-write - FIFO Error Flag
    eFEF FEF : 1;
    // read-only - Address Match 0 Flag
    eAM0F AM0F : 1;
    // read-only - Address Match 1 Flag
    eAM1F AM1F : 1;
    // read-only - General Call Flag
    eGCF GCF : 1;
    // read-only - SMBus Alert Response Flag
    eSARF SARF : 1;
    uint32_t _reserved_1 : 8;
    // read-only - Slave Busy Flag
    eSBF SBF : 1;
    // read-only - Bus Busy Flag
    eBBF BBF : 1;
    uint32_t _reserved_2 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SSR &ref() { return *reinterpret_cast<volatile SSR*>(0x40C34114); }
};

// Slave Interrupt Enable
union SIER {
  
  // Transmit Data Interrupt Enable
  enum class eTDIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Receive Data Interrupt Enable
  enum class eRDIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Address Valid Interrupt Enable
  enum class eAVIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Transmit ACK Interrupt Enable
  enum class eTAIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Repeated Start Interrupt Enable
  enum class eRSIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // STOP Detect Interrupt Enable
  enum class eSDIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Bit Error Interrupt Enable
  enum class eBEIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // FIFO Error Interrupt Enable
  enum class eFEIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Address Match 0 Interrupt Enable
  enum class eAM0IE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Address Match 1 Interrupt Enable
  enum class eAM1IE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // General Call Interrupt Enable
  enum class eGCIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // SMBus Alert Response Interrupt Enable
  enum class eSARIE : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit Data Interrupt Enable
    eTDIE TDIE : 1;
    // read-write - Receive Data Interrupt Enable
    eRDIE RDIE : 1;
    // read-write - Address Valid Interrupt Enable
    eAVIE AVIE : 1;
    // read-write - Transmit ACK Interrupt Enable
    eTAIE TAIE : 1;
    uint32_t _reserved_0 : 4;
    // read-write - Repeated Start Interrupt Enable
    eRSIE RSIE : 1;
    // read-write - STOP Detect Interrupt Enable
    eSDIE SDIE : 1;
    // read-write - Bit Error Interrupt Enable
    eBEIE BEIE : 1;
    // read-write - FIFO Error Interrupt Enable
    eFEIE FEIE : 1;
    // read-write - Address Match 0 Interrupt Enable
    eAM0IE AM0IE : 1;
    // read-write - Address Match 1 Interrupt Enable
    eAM1IE AM1IE : 1;
    // read-write - General Call Interrupt Enable
    eGCIE GCIE : 1;
    // read-write - SMBus Alert Response Interrupt Enable
    eSARIE SARIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SIER &ref() { return *reinterpret_cast<volatile SIER*>(0x40C34118); }
};

// Slave DMA Enable
union SDER {
  
  // Transmit Data DMA Enable
  enum class eTDDE : uint32_t {
    // DMA request is disabled
    eDISABLED = 0,
    // DMA request is enabled
    eENABLED = 1,
  };
  
  // Receive Data DMA Enable
  enum class eRDDE : uint32_t {
    // DMA request is disabled
    eDISABLED = 0,
    // DMA request is enabled
    eENABLED = 1,
  };
  
  // Address Valid DMA Enable
  enum class eAVDE : uint32_t {
    // DMA request is disabled
    eDISABLED = 0,
    // DMA request is enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit Data DMA Enable
    eTDDE TDDE : 1;
    // read-write - Receive Data DMA Enable
    eRDDE RDDE : 1;
    // read-write - Address Valid DMA Enable
    eAVDE AVDE : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SDER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SDER &ref() { return *reinterpret_cast<volatile SDER*>(0x40C3411C); }
};

// Slave Configuration 1
union SCFGR1 {
  
  // Address SCL Stall
  enum class eADRSTALL : uint32_t {
    // Clock stretching is disabled
    eDISABLED = 0,
    // Clock stretching is enabled
    eENABLED = 1,
  };
  
  // RX SCL Stall
  enum class eRXSTALL : uint32_t {
    // Clock stretching is disabled
    eDISABLED = 0,
    // Clock stretching is enabled
    eENABLED = 1,
  };
  
  // TX Data SCL Stall
  enum class eTXDSTALL : uint32_t {
    // Clock stretching is disabled
    eDISABLED = 0,
    // Clock stretching is enabled
    eENABLED = 1,
  };
  
  // ACK SCL Stall
  enum class eACKSTALL : uint32_t {
    // Clock stretching is disabled
    eDISABLED = 0,
    // Clock stretching is enabled
    eENABLED = 1,
  };
  
  // General Call Enable
  enum class eGCEN : uint32_t {
    // General Call address is disabled
    eDISABLED = 0,
    // General Call address is enabled
    eENABLED = 1,
  };
  
  // SMBus Alert Enable
  enum class eSAEN : uint32_t {
    // Disables match on SMBus Alert
    eDISABLE = 0,
    // Enables match on SMBus Alert
    eENABLE = 1,
  };
  
  // Transmit Flag Configuration
  enum class eTXCFG : uint32_t {
    // Transmit Data Flag only asserts during a slave-transmit transfer when the Transmit Data register is empty
    eASSERTS_DURING_SLAVE_TRANSMIT_TRANSFER_WHEN_TX_DATA_EMPTY = 0,
    // Transmit Data Flag asserts whenever the Transmit Data register is empty
    eASSERTS_WHEN_TX_DATA_EMPTY = 1,
  };
  
  // Receive Data Configuration
  enum class eRXCFG : uint32_t {
    // Reading the Receive Data register returns received data and clears the Receive Data flag (MSR[RDF]).
    eRETURNS_RECEIVED_DATA_AND_CLEARS_RX_DATA_FLAG = 0,
    // Reading the Receive Data register when the Address Valid flag (SSR[AVF])is set, returns the Address Status register and clear the Address Valid flag. Reading the Receive Data register when the Address Valid flag is clear, returns received data and clears the Receive Data flag (MSR[RDF]).
    eWHEN_ADDRESS_VALID_FLAG_SET_RETURNS_ADDRESS_STATUS_AND_CLEARS_ADDRESS_VALID_FLAG = 1,
  };
  
  // Ignore NACK
  enum class eIGNACK : uint32_t {
    // Slave ends transfer when NACK is detected
    eENDS_TRANSFER_ON_NACK = 0,
    // Slave does not end transfer when NACK detected
    eDOES_NOT_END_TRANSFER_ON_NACK = 1,
  };
  
  // High Speed Mode Enable
  enum class eHSMEN : uint32_t {
    // Disables detection of HS-mode master code
    eDISABLED = 0,
    // Enables detection of HS-mode master code
    eENABLED = 1,
  };
  
  // Address Configuration
  enum class eADDRCFG : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Address SCL Stall
    eADRSTALL ADRSTALL : 1;
    // read-write - RX SCL Stall
    eRXSTALL RXSTALL : 1;
    // read-write - TX Data SCL Stall
    eTXDSTALL TXDSTALL : 1;
    // read-write - ACK SCL Stall
    eACKSTALL ACKSTALL : 1;
    uint32_t _reserved_0 : 4;
    // read-write - General Call Enable
    eGCEN GCEN : 1;
    // read-write - SMBus Alert Enable
    eSAEN SAEN : 1;
    // read-write - Transmit Flag Configuration
    eTXCFG TXCFG : 1;
    // read-write - Receive Data Configuration
    eRXCFG RXCFG : 1;
    // read-write - Ignore NACK
    eIGNACK IGNACK : 1;
    // read-write - High Speed Mode Enable
    eHSMEN HSMEN : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Address Configuration
    eADDRCFG ADDRCFG : 3;
    uint32_t _reserved_2 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCFGR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCFGR1 &ref() { return *reinterpret_cast<volatile SCFGR1*>(0x40C34124); }
};

// Slave Configuration 2
union SCFGR2 {
  
  // Bit field definition.
  struct {
    // read-write - Clock Hold Time
    uint32_t CLKHOLD : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Data Valid Delay
    uint32_t DATAVD : 6;
    uint32_t _reserved_1 : 2;
    // read-write - Glitch Filter SCL
    uint32_t FILTSCL : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Glitch Filter SDA
    uint32_t FILTSDA : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCFGR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCFGR2 &ref() { return *reinterpret_cast<volatile SCFGR2*>(0x40C34128); }
};

// Slave Address Match
union SAMR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Address 0 Value
    uint32_t ADDR0 : 10;
    uint32_t _reserved_1 : 6;
    // read-write - Address 1 Value
    uint32_t ADDR1 : 10;
    uint32_t _reserved_2 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SAMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SAMR &ref() { return *reinterpret_cast<volatile SAMR*>(0x40C34140); }
};

// Slave Address Status
union SASR {
  
  // Address Not Valid
  enum class eANV : uint32_t {
    // Received Address (RADDR) is valid
    eVALID = 0,
    // Received Address (RADDR) is not valid
    eNOT_VALID = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Received Address
    uint32_t RADDR : 11;
    uint32_t _reserved_0 : 3;
    // read-only - Address Not Valid
    eANV ANV : 1;
    uint32_t _reserved_1 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SASR() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile SASR &ref() { return *reinterpret_cast<volatile SASR*>(0x40C34150); }
};

// Slave Transmit ACK
union STAR {
  
  // Transmit NACK
  enum class eTXNACK : uint32_t {
    // Write a Transmit ACK for each received word
    eTRANSMIT_ACK = 0,
    // Write a Transmit NACK for each received word
    eTRANSMIT_NACK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit NACK
    eTXNACK TXNACK : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAR &ref() { return *reinterpret_cast<volatile STAR*>(0x40C34154); }
};

// Slave Transmit Data
union STDR {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t DATA : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STDR &ref() { return *reinterpret_cast<volatile STDR*>(0x40C34160); }
};

// Slave Receive Data
union SRDR {
  
  // RX Empty
  enum class eRXEMPTY : uint32_t {
    // The Receive Data Register is not empty
    eNOT_EMPTY = 0,
    // The Receive Data Register is empty
    eEMPTY = 1,
  };
  
  // Start Of Frame
  enum class eSOF : uint32_t {
    // Indicates this is not the first data word since a (repeated) START or STOP condition
    eNOT_FIRST_DATA_WORD = 0,
    // Indicates this is the first data word since a (repeated) START or STOP condition
    eFIRST_DATA_WORD = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t DATA : 8;
    uint32_t _reserved_0 : 6;
    // read-only - RX Empty
    eRXEMPTY RXEMPTY : 1;
    // read-only - Start Of Frame
    eSOF SOF : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRDR() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile SRDR &ref() { return *reinterpret_cast<volatile SRDR*>(0x40C34170); }
};


} // namespace nLPI2C5