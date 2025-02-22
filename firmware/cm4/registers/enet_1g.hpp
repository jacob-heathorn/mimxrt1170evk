#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// ENET
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nENET_1G {


// Interrupt Event Register
//
union EIR {
  
  // Bit field definition.
  struct {
    /// read-write - Receive buffer interrupt, class 1
    uint32_t RXB1 : 1;
    /// read-write - Receive frame interrupt, class 1
    uint32_t RXF1 : 1;
    /// read-write - Transmit buffer interrupt, class 1
    uint32_t TXB1 : 1;
    /// read-write - Transmit frame interrupt, class 1
    uint32_t TXF1 : 1;
    /// read-write - Receive buffer interrupt, class 2
    uint32_t RXB2 : 1;
    /// read-write - Receive frame interrupt, class 2
    uint32_t RXF2 : 1;
    /// read-write - Transmit buffer interrupt, class 2
    uint32_t TXB2 : 1;
    /// read-write - Transmit frame interrupt, class 2
    uint32_t TXF2 : 1;
    uint32_t _reserved_0 : 4;
    /// read-write - RX DMA Ring 0 flush indication
    uint32_t RXFLUSH_0 : 1;
    /// read-write - RX DMA Ring 1 flush indication
    uint32_t RXFLUSH_1 : 1;
    /// read-write - RX DMA Ring 2 flush indication
    uint32_t RXFLUSH_2 : 1;
    /// read-write - Timestamp Timer
    uint32_t TS_TIMER : 1;
    /// read-write - Transmit Timestamp Available
    uint32_t TS_AVAIL : 1;
    /// read-write - Node Wakeup Request Indication
    uint32_t WAKEUP : 1;
    /// read-write - Payload Receive Error
    uint32_t PLR : 1;
    /// read-write - Transmit FIFO Underrun
    uint32_t UN : 1;
    /// read-write - Collision Retry Limit
    uint32_t RL : 1;
    /// read-write - Late Collision
    uint32_t LC : 1;
    /// read-write - Ethernet Bus Error
    uint32_t EBERR : 1;
    /// read-write - MII Interrupt.
    uint32_t MII : 1;
    /// read-write - Receive Buffer Interrupt
    uint32_t RXB : 1;
    /// read-write - Receive Frame Interrupt
    uint32_t RXF : 1;
    /// read-write - Transmit Buffer Interrupt
    uint32_t TXB : 1;
    /// read-write - Transmit Frame Interrupt
    uint32_t TXF : 1;
    /// read-write - Graceful Stop Complete
    uint32_t GRA : 1;
    /// read-write - Babbling Transmit Error
    uint32_t BABT : 1;
    /// read-write - Babbling Receive Error
    uint32_t BABR : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  EIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile EIR &Instance() { return *reinterpret_cast<volatile EIR*>(0x40420004); }
};

// Interrupt Mask Register
//
union EIMR {
  
  enum class eRXB1 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXF1 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTXB1 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTXF1 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXB2 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXF2 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTXB2 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTXF2 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXFLUSH_0 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXFLUSH_1 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXFLUSH_2 : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTS_TIMER : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTS_AVAIL : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eWAKEUP : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class ePLR : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eUN : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRL : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eLC : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eEBERR : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eMII : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXB : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eRXF : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTXB : uint32_t {
    eMASKED = 0, // The corresponding interrupt source is masked.
    eUNMASKED = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eTXF : uint32_t {
    eMASKED = 0, // The corresponding interrupt source is masked.
    eUNMASKED = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eGRA : uint32_t {
    eMASKED = 0, // The corresponding interrupt source is masked.
    eUMASKED = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eBABT : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  enum class eBABR : uint32_t {
    eZERO = 0, // The corresponding interrupt source is masked.
    eONE = 1, // The corresponding interrupt source is not masked.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive buffer interrupt, class 1
    eRXB1 RXB1 : 1;
    /// read-write - Receive frame interrupt, class 1
    eRXF1 RXF1 : 1;
    /// read-write - Transmit buffer interrupt, class 1
    eTXB1 TXB1 : 1;
    /// read-write - Transmit frame interrupt, class 1
    eTXF1 TXF1 : 1;
    /// read-write - Receive buffer interrupt, class 2
    eRXB2 RXB2 : 1;
    /// read-write - Receive frame interrupt, class 2
    eRXF2 RXF2 : 1;
    /// read-write - Transmit buffer interrupt, class 2
    eTXB2 TXB2 : 1;
    /// read-write - Transmit frame interrupt, class 2
    eTXF2 TXF2 : 1;
    uint32_t _reserved_0 : 4;
    /// read-write - Corresponds to interrupt source EIR[RXFLUSH_0] and determines whether an interrupt condition can generate an interrupt
    eRXFLUSH_0 RXFLUSH_0 : 1;
    /// read-write - Corresponds to interrupt source EIR[RXFLUSH_1] and determines whether an interrupt condition can generate an interrupt
    eRXFLUSH_1 RXFLUSH_1 : 1;
    /// read-write - Corresponds to interrupt source EIR[RXFLUSH_2] and determines whether an interrupt condition can generate an interrupt
    eRXFLUSH_2 RXFLUSH_2 : 1;
    /// read-write - TS_TIMER Interrupt Mask
    eTS_TIMER TS_TIMER : 1;
    /// read-write - TS_AVAIL Interrupt Mask
    eTS_AVAIL TS_AVAIL : 1;
    /// read-write - WAKEUP Interrupt Mask
    eWAKEUP WAKEUP : 1;
    /// read-write - PLR Interrupt Mask
    ePLR PLR : 1;
    /// read-write - UN Interrupt Mask
    eUN UN : 1;
    /// read-write - RL Interrupt Mask
    eRL RL : 1;
    /// read-write - LC Interrupt Mask
    eLC LC : 1;
    /// read-write - EBERR Interrupt Mask
    eEBERR EBERR : 1;
    /// read-write - MII Interrupt Mask
    eMII MII : 1;
    /// read-write - RXB Interrupt Mask
    eRXB RXB : 1;
    /// read-write - RXF Interrupt Mask
    eRXF RXF : 1;
    /// read-write - TXB Interrupt Mask
    eTXB TXB : 1;
    /// read-write - TXF Interrupt Mask
    eTXF TXF : 1;
    /// read-write - GRA Interrupt Mask
    eGRA GRA : 1;
    /// read-write - BABT Interrupt Mask
    eBABT BABT : 1;
    /// read-write - BABR Interrupt Mask
    eBABR BABR : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  EIMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile EIMR &Instance() { return *reinterpret_cast<volatile EIMR*>(0x40420008); }
};

// Receive Descriptor Active Register - Ring 0
//
union RDAR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    /// read-write - Receive Descriptor Active
    uint32_t RDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDAR &Instance() { return *reinterpret_cast<volatile RDAR*>(0x40420010); }
};

// Transmit Descriptor Active Register - Ring 0
//
union TDAR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    /// read-write - Transmit Descriptor Active
    uint32_t TDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDAR &Instance() { return *reinterpret_cast<volatile TDAR*>(0x40420014); }
};

// Ethernet Control Register
//
union ECR {
  
  enum class eETHEREN : uint32_t {
    eZERO = 0, // Reception immediately stops and transmission stops after a bad CRC is appended to any currently transmitted frame.
    eONE = 1, // MAC is enabled, and reception and transmission are possible.
  };
  
  enum class eMAGICEN : uint32_t {
    eZERO = 0, // Magic detection logic disabled.
    eONE = 1, // The MAC core detects magic packets and asserts EIR[WAKEUP] when a frame is detected.
  };
  
  enum class eSLEEP : uint32_t {
    eZERO = 0, // Normal operating mode.
    eONE = 1, // Sleep mode.
  };
  
  enum class eEN1588 : uint32_t {
    eZERO = 0, // Legacy FEC buffer descriptors and functions enabled.
    eONE = 1, // Enhanced frame time-stamping functions enabled. Has no effect within the MAC besides controlling the DMA control bit ena_1588.
  };
  
  enum class eSPEED : uint32_t {
    eZERO = 0, // 10/100-Mbit/s mode
    eONE = 1, // 1000-Mbit/s mode
  };
  
  enum class eDBGEN : uint32_t {
    eZERO = 0, // MAC continues operation in debug mode.
    eONE = 1, // MAC enters hardware freeze mode when the processor is in debug mode.
  };
  
  enum class eDBSWP : uint32_t {
    eZERO = 0, // The buffer descriptor bytes are not swapped to support big-endian devices.
    eONE = 1, // The buffer descriptor bytes are swapped to support little-endian devices.
  };
  
  enum class eSVLANEN : uint32_t {
    eZERO = 0, // Only the EtherType 0x8100 will be considered for VLAN detection.
    eONE = 1, // The EtherType 0x88a8 will be considered in addition to 0x8100 (C-VLAN) to identify a VLAN frame in receive. When a VLAN frame is identified, the two bytes following the VLAN type are extracted and used by the classification match comparators, RCMRn.
  };
  
  enum class eVLANUSE2ND : uint32_t {
    eZERO = 0, // Always extract data from the first VLAN tag if it exists.
    eONE = 1, // When a double-tagged frame is detected, the data of the second tag is extracted for further processing. A double-tagged frame is defined as: The first tag can be a C-VLAN or a S-VLAN (if SVLAN_ENA = 1) The second tag must be a C-VLAN
  };
  
  enum class eSVLANDBL : uint32_t {
    eZERO = 0, // Disable S-VLAN double tag
    eONE = 1, // Enable S-VLAN double tag
  };
  
  enum class eTXC_DLY : uint32_t {
    eZERO = 0, // RGMII_TXC is not delayed.
    eONE = 1, // Generate delayed version of RGMII_TXC.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Ethernet MAC Reset
    uint32_t RESET : 1;
    /// read-write - Ethernet Enable
    eETHEREN ETHEREN : 1;
    /// read-write - Magic Packet Detection Enable
    eMAGICEN MAGICEN : 1;
    /// read-write - Sleep Mode Enable
    eSLEEP SLEEP : 1;
    /// read-write - EN1588 Enable
    eEN1588 EN1588 : 1;
    /// read-write - Selects between 10/100-Mbit/s and 1000-Mbit/s modes of operation.
    eSPEED SPEED : 1;
    /// read-write - Debug Enable
    eDBGEN DBGEN : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Descriptor Byte Swapping Enable
    eDBSWP DBSWP : 1;
    /// read-write - S-VLAN enable
    eSVLANEN SVLANEN : 1;
    /// read-write - VLAN use second tag
    eVLANUSE2ND VLANUSE2ND : 1;
    /// read-write - S-VLAN double tag
    eSVLANDBL SVLANDBL : 1;
    uint32_t _reserved_1 : 4;
    /// read-write - Transmit clock delay
    eTXC_DLY TXC_DLY : 1;
    uint32_t _reserved_2 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECR() = delete;
  inline void Reset() volatile { this->value = 0x70000000; }
  static inline volatile ECR &Instance() { return *reinterpret_cast<volatile ECR*>(0x40420024); }
};

// MII Management Frame Register
//
union MMFR {
  
  // Bit field definition.
  struct {
    /// read-write - Management Frame Data
    uint32_t DATA : 16;
    /// read-write - Turn Around
    uint32_t TA : 2;
    /// read-write - Register Address
    uint32_t RA : 5;
    /// read-write - PHY Address
    uint32_t PA : 5;
    /// read-write - Operation Code
    uint32_t OP : 2;
    /// read-write - Start Of Frame Delimiter
    uint32_t ST : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MMFR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MMFR &Instance() { return *reinterpret_cast<volatile MMFR*>(0x40420040); }
};

// MII Speed Control Register
//
union MSCR {
  
  enum class eDIS_PRE : uint32_t {
    eZERO = 0, // Preamble enabled.
    eONE = 1, // Preamble (32 ones) is not prepended to the MII management frame.
  };
  
  enum class eHOLDTIME : uint32_t {
    eVAL_1 = 0, // 1 internal module clock cycle
    eVAL2 = 1, // 2 internal module clock cycles
    eVAL3 = 2, // 3 internal module clock cycles
    eVAL8 = 7, // 8 internal module clock cycles
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - MII Speed
    uint32_t MII_SPEED : 6;
    /// read-write - Disable Preamble
    eDIS_PRE DIS_PRE : 1;
    /// read-write - Hold time On MDIO Output
    eHOLDTIME HOLDTIME : 3;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MSCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MSCR &Instance() { return *reinterpret_cast<volatile MSCR*>(0x40420044); }
};

// MIB Control Register
//
union MIBC {
  
  enum class eMIB_CLEAR : uint32_t {
    eZERO = 0, // See note above.
    eONE = 1, // All statistics counters are reset to 0.
  };
  
  enum class eMIB_IDLE : uint32_t {
    eZERO = 0, // The MIB block is updating MIB counters.
    eONE = 1, // The MIB block is not currently updating any MIB counters.
  };
  
  enum class eMIB_DIS : uint32_t {
    eZERO = 0, // MIB logic is enabled.
    eONE = 1, // MIB logic is disabled. The MIB logic halts and does not update any MIB counters.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 29;
    /// read-write - MIB Clear
    eMIB_CLEAR MIB_CLEAR : 1;
    /// read-only - MIB Idle
    eMIB_IDLE MIB_IDLE : 1;
    /// read-write - Disable MIB Logic
    eMIB_DIS MIB_DIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIBC() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile MIBC &Instance() { return *reinterpret_cast<volatile MIBC*>(0x40420064); }
};

// Receive Control Register
//
union RCR {
  
  enum class eLOOP : uint32_t {
    eZERO = 0, // Loopback disabled.
    eONE = 1, // Transmitted frames are looped back internal to the device and transmit MII output signals are not asserted. DRT must be cleared.
  };
  
  enum class eDRT : uint32_t {
    eZERO = 0, // Receive path operates independently of transmit (i.e., full-duplex mode). Can also be used to monitor transmit activity in half-duplex mode.
    eONE = 1, // Disable reception of frames while transmitting. (Normally used for half-duplex mode.)
  };
  
  enum class eMII_MODE : uint32_t {
    eONE = 1, // MII or RMII mode, as indicated by the RMII_MODE field.
  };
  
  enum class ePROM : uint32_t {
    eZERO = 0, // Disabled.
    eONE = 1, // Enabled.
  };
  
  enum class eBC_REJ : uint32_t {
    eZERO = 0, // Will not reject frames as described above
    eONE = 1, // Will reject frames as described above
  };
  
  enum class eFCE : uint32_t {
    eZERO = 0, // Disable flow control
    eONE = 1, // Enable flow control
  };
  
  enum class eRGMII_EN : uint32_t {
    eZERO = 0, // MAC configured for non-RGMII operation
    eONE = 1, // MAC configured for RGMII operation. If ECR[SPEED] is set, the MAC is in RGMII 1000-Mbit/s mode. If ECR[SPEED] is cleared, the MAC is in RGMII 10/100-Mbit/s mode.
  };
  
  enum class eRMII_MODE : uint32_t {
    eZERO = 0, // MAC configured for MII mode.
    eONE = 1, // MAC configured for RMII operation.
  };
  
  enum class eRMII_10T : uint32_t {
    eZERO = 0, // 100-Mbit/s or 1-Gbit/s operation.
    eONE = 1, // 10-Mbit/s operation.
  };
  
  enum class ePADEN : uint32_t {
    eZERO = 0, // No padding is removed on receive by the MAC.
    eONE = 1, // Padding is removed from received frames.
  };
  
  enum class ePAUFWD : uint32_t {
    eZERO = 0, // Pause frames are terminated and discarded in the MAC.
    eONE = 1, // Pause frames are forwarded to the user application.
  };
  
  enum class eCRCFWD : uint32_t {
    eZERO = 0, // The CRC field of received frames is transmitted to the user application.
    eONE = 1, // The CRC field is stripped from the frame.
  };
  
  enum class eCFEN : uint32_t {
    eZERO = 0, // MAC control frames with any opcode other than 0x0001 (pause frame) are accepted and forwarded to the client interface.
    eONE = 1, // MAC control frames with any opcode other than 0x0001 (pause frame) are silently discarded.
  };
  
  enum class eNLC : uint32_t {
    eZERO = 0, // The payload length check is disabled.
    eONE = 1, // The core checks the frame's payload length with the frame length/type field. Errors are indicated in the EIR[PLR] field.
  };
  
  enum class eGRS : uint32_t {
    eZERO = 0, // Receive not stopped
    eONE = 1, // Receive stopped
  };
  
  // Bit field definition.
  struct {
    /// read-write - Internal Loopback
    eLOOP LOOP : 1;
    /// read-write - Disable Receive On Transmit
    eDRT DRT : 1;
    /// read-write - Media Independent Interface Mode
    eMII_MODE MII_MODE : 1;
    /// read-write - Promiscuous Mode
    ePROM PROM : 1;
    /// read-write - Broadcast Frame Reject
    eBC_REJ BC_REJ : 1;
    /// read-write - Flow Control Enable
    eFCE FCE : 1;
    /// read-write - RGMII Mode Enable
    eRGMII_EN RGMII_EN : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - RMII Mode Enable
    eRMII_MODE RMII_MODE : 1;
    /// read-write - Enables 10-Mbit/s mode of the RMII or RGMII .
    eRMII_10T RMII_10T : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Enable Frame Padding Remove On Receive
    ePADEN PADEN : 1;
    /// read-write - Terminate/Forward Pause Frames
    ePAUFWD PAUFWD : 1;
    /// read-write - Terminate/Forward Received CRC
    eCRCFWD CRCFWD : 1;
    /// read-write - MAC Control Frame Enable
    eCFEN CFEN : 1;
    /// read-write - Maximum Frame Length
    uint32_t MAX_FL : 14;
    /// read-write - Payload Length Check Disable
    eNLC NLC : 1;
    /// read-only - Graceful Receive Stopped
    eGRS GRS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR() = delete;
  inline void Reset() volatile { this->value = 0x05EE0001; }
  static inline volatile RCR &Instance() { return *reinterpret_cast<volatile RCR*>(0x40420084); }
};

// Transmit Control Register
//
union TCR {
  
  enum class eGTS : uint32_t {
    eZERO = 0, // Disable graceful transmit stop
    eONE = 1, // Enable graceful transmit stop
  };
  
  enum class eFDEN : uint32_t {
    eZERO = 0, // Disable full-duplex
    eONE = 1, // Enable full-duplex
  };
  
  enum class eTFC_PAUSE : uint32_t {
    eZERO = 0, // No PAUSE frame transmitted.
    eONE = 1, // The MAC stops transmission of data frames after the current transmission is complete.
  };
  
  enum class eADDSEL : uint32_t {
    eVAL_MAC = 0, // Node MAC address programmed on PADDR1/2 registers.
  };
  
  enum class eADDINS : uint32_t {
    eZERO = 0, // The source MAC address is not modified by the MAC.
    eONE = 1, // The MAC overwrites the source MAC address with the programmed MAC address according to ADDSEL.
  };
  
  enum class eCRCFWD : uint32_t {
    eZERO = 0, // TxBD[TC] controls whether the frame has a CRC from the application.
    eONE = 1, // The transmitter does not append any CRC to transmitted frames, as it is expecting a frame with CRC from the application.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Graceful Transmit Stop
    eGTS GTS : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Full-Duplex Enable
    eFDEN FDEN : 1;
    /// read-write - Transmit Frame Control Pause
    eTFC_PAUSE TFC_PAUSE : 1;
    /// read-only - Receive Frame Control Pause
    uint32_t RFC_PAUSE : 1;
    /// read-write - Source MAC Address Select On Transmit
    eADDSEL ADDSEL : 3;
    /// read-write - Set MAC Address On Transmit
    eADDINS ADDINS : 1;
    /// read-write - Forward Frame From Application With CRC
    eCRCFWD CRCFWD : 1;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR &Instance() { return *reinterpret_cast<volatile TCR*>(0x404200C4); }
};

// Physical Address Lower Register
//
union PALR {
  
  // Bit field definition.
  struct {
    /// read-write - Pause Address
    uint32_t PADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PALR &Instance() { return *reinterpret_cast<volatile PALR*>(0x404200E4); }
};

// Physical Address Upper Register
//
union PAUR {
  
  // Bit field definition.
  struct {
    /// read-only - Type Field In PAUSE Frames
    uint32_t TYPE : 16;
    /// read-write - Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used for exact match, and the source address field in PAUSE frames
    uint32_t PADDR2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PAUR() = delete;
  inline void Reset() volatile { this->value = 0x00008808; }
  static inline volatile PAUR &Instance() { return *reinterpret_cast<volatile PAUR*>(0x404200E8); }
};

// Opcode/Pause Duration Register
//
union OPD {
  
  // Bit field definition.
  struct {
    /// read-write - Pause Duration
    uint32_t PAUSE_DUR : 16;
    /// read-only - Opcode Field In PAUSE Frames
    uint32_t OPCODE : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OPD() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile OPD &Instance() { return *reinterpret_cast<volatile OPD*>(0x404200EC); }
};

// Transmit Interrupt Coalescing Register
//
union TXIC[0] {
  
  enum class eICCS : uint32_t {
    eZERO = 0, // Use MII/GMII TX clocks.
    eONE = 1, // Use ENET system clock.
  };
  
  enum class eICEN : uint32_t {
    eZERO = 0, // Disable Interrupt coalescing.
    eONE = 1, // Enable Interrupt coalescing.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    /// read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    /// read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    /// read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TXIC[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXIC[0] &Instance() { return *reinterpret_cast<volatile TXIC[0]*>(0x404200F0); }
};
// Transmit Interrupt Coalescing Register
//
union TXIC[1] {
  
  enum class eICCS : uint32_t {
    eZERO = 0, // Use MII/GMII TX clocks.
    eONE = 1, // Use ENET system clock.
  };
  
  enum class eICEN : uint32_t {
    eZERO = 0, // Disable Interrupt coalescing.
    eONE = 1, // Enable Interrupt coalescing.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    /// read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    /// read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    /// read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TXIC[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXIC[1] &Instance() { return *reinterpret_cast<volatile TXIC[1]*>(0x404200F4); }
};
// Transmit Interrupt Coalescing Register
//
union TXIC[2] {
  
  enum class eICCS : uint32_t {
    eZERO = 0, // Use MII/GMII TX clocks.
    eONE = 1, // Use ENET system clock.
  };
  
  enum class eICEN : uint32_t {
    eZERO = 0, // Disable Interrupt coalescing.
    eONE = 1, // Enable Interrupt coalescing.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    /// read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    /// read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    /// read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TXIC[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXIC[2] &Instance() { return *reinterpret_cast<volatile TXIC[2]*>(0x404200F8); }
};

// Receive Interrupt Coalescing Register
//
union RXIC[0] {
  
  enum class eICCS : uint32_t {
    eZERO = 0, // Use MII/GMII TX clocks.
    eONE = 1, // Use ENET system clock.
  };
  
  enum class eICEN : uint32_t {
    eZERO = 0, // Disable Interrupt coalescing.
    eONE = 1, // Enable Interrupt coalescing.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    /// read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    /// read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    /// read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIC[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIC[0] &Instance() { return *reinterpret_cast<volatile RXIC[0]*>(0x40420100); }
};
// Receive Interrupt Coalescing Register
//
union RXIC[1] {
  
  enum class eICCS : uint32_t {
    eZERO = 0, // Use MII/GMII TX clocks.
    eONE = 1, // Use ENET system clock.
  };
  
  enum class eICEN : uint32_t {
    eZERO = 0, // Disable Interrupt coalescing.
    eONE = 1, // Enable Interrupt coalescing.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    /// read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    /// read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    /// read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIC[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIC[1] &Instance() { return *reinterpret_cast<volatile RXIC[1]*>(0x40420104); }
};
// Receive Interrupt Coalescing Register
//
union RXIC[2] {
  
  enum class eICCS : uint32_t {
    eZERO = 0, // Use MII/GMII TX clocks.
    eONE = 1, // Use ENET system clock.
  };
  
  enum class eICEN : uint32_t {
    eZERO = 0, // Disable Interrupt coalescing.
    eONE = 1, // Enable Interrupt coalescing.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    /// read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    /// read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    /// read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIC[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIC[2] &Instance() { return *reinterpret_cast<volatile RXIC[2]*>(0x40420108); }
};

// Descriptor Individual Upper Address Register
//
union IAUR {
  
  // Bit field definition.
  struct {
    /// read-write - Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    uint32_t IADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IAUR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IAUR &Instance() { return *reinterpret_cast<volatile IAUR*>(0x40420118); }
};

// Descriptor Individual Lower Address Register
//
union IALR {
  
  // Bit field definition.
  struct {
    /// read-write - Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    uint32_t IADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IALR &Instance() { return *reinterpret_cast<volatile IALR*>(0x4042011C); }
};

// Descriptor Group Upper Address Register
//
union GAUR {
  
  // Bit field definition.
  struct {
    /// read-write - Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    uint32_t GADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GAUR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GAUR &Instance() { return *reinterpret_cast<volatile GAUR*>(0x40420120); }
};

// Descriptor Group Lower Address Register
//
union GALR {
  
  // Bit field definition.
  struct {
    /// read-write - Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    uint32_t GADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GALR &Instance() { return *reinterpret_cast<volatile GALR*>(0x40420124); }
};

// Transmit FIFO Watermark Register
//
union TFWR {
  
  enum class eTFWR : uint32_t {
    eVAL64_0 = 0, // 64 bytes written.
    eVAL64_1 = 1, // 64 bytes written.
    eVAL128 = 2, // 128 bytes written.
    eVAL192 = 3, // 192 bytes written.
    eVAL4032 = 63, // 4032 bytes written.
  };
  
  enum class eSTRFWD : uint32_t {
    eZERO = 0, // Reset. The transmission start threshold is programmed in TFWR[TFWR].
    eONE = 1, // Enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit FIFO Write
    eTFWR TFWR : 6;
    uint32_t _reserved_0 : 2;
    /// read-write - Store And Forward Enable
    eSTRFWD STRFWD : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFWR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFWR &Instance() { return *reinterpret_cast<volatile TFWR*>(0x40420144); }
};

// Receive Descriptor Ring 1 Start Register
//
union RDSR1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Pointer to the beginning of the receive buffer descriptor queue 1.
    uint32_t R_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDSR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDSR1 &Instance() { return *reinterpret_cast<volatile RDSR1*>(0x40420160); }
};

// Transmit Buffer Descriptor Ring 1 Start Register
//
union TDSR1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Pointer to the beginning of transmit buffer descriptor queue 1.
    uint32_t X_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDSR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDSR1 &Instance() { return *reinterpret_cast<volatile TDSR1*>(0x40420164); }
};

// Maximum Receive Buffer Size Register - Ring 1
//
union MRBR1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    /// read-write - Receive buffer size (in bytes)
    uint32_t R_BUF_SIZE : 7;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MRBR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MRBR1 &Instance() { return *reinterpret_cast<volatile MRBR1*>(0x40420168); }
};

// Receive Descriptor Ring 2 Start Register
//
union RDSR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Pointer to the beginning of receive buffer descriptor queue 2.
    uint32_t R_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDSR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDSR2 &Instance() { return *reinterpret_cast<volatile RDSR2*>(0x4042016C); }
};

// Transmit Buffer Descriptor Ring 2 Start Register
//
union TDSR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Pointer to the beginning of transmit buffer descriptor queue 2.
    uint32_t X_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDSR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDSR2 &Instance() { return *reinterpret_cast<volatile TDSR2*>(0x40420170); }
};

// Maximum Receive Buffer Size Register - Ring 2
//
union MRBR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    /// read-write - Receive buffer size (in bytes)
    uint32_t R_BUF_SIZE : 7;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MRBR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MRBR2 &Instance() { return *reinterpret_cast<volatile MRBR2*>(0x40420174); }
};

// Receive Descriptor Ring 0 Start Register
//
union RDSR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Pointer to the beginning of the receive buffer descriptor queue. 0
    uint32_t R_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDSR &Instance() { return *reinterpret_cast<volatile RDSR*>(0x40420180); }
};

// Transmit Buffer Descriptor Ring 0 Start Register
//
union TDSR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Pointer to the beginning of the transmit buffer descriptor queue.
    uint32_t X_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDSR &Instance() { return *reinterpret_cast<volatile TDSR*>(0x40420184); }
};

// Maximum Receive Buffer Size Register - Ring 0
//
union MRBR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    /// read-write - Receive buffer size in bytes
    uint32_t R_BUF_SIZE : 7;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MRBR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MRBR &Instance() { return *reinterpret_cast<volatile MRBR*>(0x40420188); }
};

// Receive FIFO Section Full Threshold
//
union RSFL {
  
  // Bit field definition.
  struct {
    /// read-write - Value Of Receive FIFO Section Full Threshold
    uint32_t RX_SECTION_FULL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RSFL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RSFL &Instance() { return *reinterpret_cast<volatile RSFL*>(0x40420190); }
};

// Receive FIFO Section Empty Threshold
//
union RSEM {
  
  // Bit field definition.
  struct {
    /// read-write - Value Of The Receive FIFO Section Empty Threshold
    uint32_t RX_SECTION_EMPTY : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - RX Status FIFO Section Empty Threshold
    uint32_t STAT_SECTION_EMPTY : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RSEM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RSEM &Instance() { return *reinterpret_cast<volatile RSEM*>(0x40420194); }
};

// Receive FIFO Almost Empty Threshold
//
union RAEM {
  
  // Bit field definition.
  struct {
    /// read-write - Value Of The Receive FIFO Almost Empty Threshold
    uint32_t RX_ALMOST_EMPTY : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RAEM() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile RAEM &Instance() { return *reinterpret_cast<volatile RAEM*>(0x40420198); }
};

// Receive FIFO Almost Full Threshold
//
union RAFL {
  
  // Bit field definition.
  struct {
    /// read-write - Value Of The Receive FIFO Almost Full Threshold
    uint32_t RX_ALMOST_FULL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RAFL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile RAFL &Instance() { return *reinterpret_cast<volatile RAFL*>(0x4042019C); }
};

// Transmit FIFO Section Empty Threshold
//
union TSEM {
  
  // Bit field definition.
  struct {
    /// read-write - Value Of The Transmit FIFO Section Empty Threshold
    uint32_t TX_SECTION_EMPTY : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TSEM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TSEM &Instance() { return *reinterpret_cast<volatile TSEM*>(0x404201A0); }
};

// Transmit FIFO Almost Empty Threshold
//
union TAEM {
  
  // Bit field definition.
  struct {
    /// read-write - Value of Transmit FIFO Almost Empty Threshold
    uint32_t TX_ALMOST_EMPTY : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TAEM() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile TAEM &Instance() { return *reinterpret_cast<volatile TAEM*>(0x404201A4); }
};

// Transmit FIFO Almost Full Threshold
//
union TAFL {
  
  // Bit field definition.
  struct {
    /// read-write - Value Of The Transmit FIFO Almost Full Threshold
    uint32_t TX_ALMOST_FULL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TAFL() = delete;
  inline void Reset() volatile { this->value = 0x00000008; }
  static inline volatile TAFL &Instance() { return *reinterpret_cast<volatile TAFL*>(0x404201A8); }
};

// Transmit Inter-Packet Gap
//
union TIPG {
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Inter-Packet Gap
    uint32_t IPG : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIPG() = delete;
  inline void Reset() volatile { this->value = 0x0000000C; }
  static inline volatile TIPG &Instance() { return *reinterpret_cast<volatile TIPG*>(0x404201AC); }
};

// Frame Truncation Length
//
union FTRL {
  
  // Bit field definition.
  struct {
    /// read-write - Frame Truncation Length
    uint32_t TRUNC_FL : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FTRL() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile FTRL &Instance() { return *reinterpret_cast<volatile FTRL*>(0x404201B0); }
};

// Transmit Accelerator Function Configuration
//
union TACC {
  
  enum class eSHIFT16 : uint32_t {
    eZERO = 0, // Disabled.
    eONE = 1, // Indicates to the transmit data FIFO that the written frames contain two additional octets before the frame data. This means the actual frame begins at bit 16 of the first word written into the FIFO. This function allows putting the frame payload on a 32-bit boundary in memory, as the 14-byte Ethernet header is extended to a 16-byte header.
  };
  
  enum class eIPCHK : uint32_t {
    eZERO = 0, // Checksum is not inserted.
    eONE = 1, // If an IP frame is transmitted, the checksum is inserted automatically. The IP header checksum field must be cleared. If a non-IP frame is transmitted the frame is not modified.
  };
  
  enum class ePROCHK : uint32_t {
    eZERO = 0, // Checksum not inserted.
    eONE = 1, // If an IP frame with a known protocol is transmitted, the checksum is inserted automatically into the frame. The checksum field must be cleared. The other frames are not modified.
  };
  
  // Bit field definition.
  struct {
    /// read-write - TX FIFO Shift-16
    eSHIFT16 SHIFT16 : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Enables insertion of IP header checksum.
    eIPCHK IPCHK : 1;
    /// read-write - Enables insertion of protocol checksum.
    ePROCHK PROCHK : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TACC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TACC &Instance() { return *reinterpret_cast<volatile TACC*>(0x404201C0); }
};

// Receive Accelerator Function Configuration
//
union RACC {
  
  enum class ePADREM : uint32_t {
    eZERO = 0, // Padding not removed.
    eONE = 1, // Any bytes following the IP payload section of the frame are removed from the frame.
  };
  
  enum class eIPDIS : uint32_t {
    eZERO = 0, // Frames with wrong IPv4 header checksum are not discarded.
    eONE = 1, // If an IPv4 frame is received with a mismatching header checksum, the frame is discarded. IPv6 has no header checksum and is not affected by this setting. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
  };
  
  enum class ePRODIS : uint32_t {
    eZERO = 0, // Frames with wrong checksum are not discarded.
    eONE = 1, // If a TCP/IP, UDP/IP, or ICMP/IP frame is received that has a wrong TCP, UDP, or ICMP checksum, the frame is discarded. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
  };
  
  enum class eLINEDIS : uint32_t {
    eZERO = 0, // Frames with errors are not discarded.
    eONE = 1, // Any frame received with a CRC, length, or PHY error is automatically discarded and not forwarded to the user application interface.
  };
  
  enum class eSHIFT16 : uint32_t {
    eZERO = 0, // Disabled.
    eONE = 1, // Instructs the MAC to write two additional bytes in front of each frame received into the RX FIFO.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Padding Removal For Short IP Frames
    ePADREM PADREM : 1;
    /// read-write - Enable Discard Of Frames With Wrong IPv4 Header Checksum
    eIPDIS IPDIS : 1;
    /// read-write - Enable Discard Of Frames With Wrong Protocol Checksum
    ePRODIS PRODIS : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Enable Discard Of Frames With MAC Layer Errors
    eLINEDIS LINEDIS : 1;
    /// read-write - RX FIFO Shift-16
    eSHIFT16 SHIFT16 : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RACC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RACC &Instance() { return *reinterpret_cast<volatile RACC*>(0x404201C4); }
};

// Receive Classification Match Register for Class n
//
union RCMR1 {
  
  enum class eMATCHEN : uint32_t {
    eZERO = 0, // Disabled (default): no compares will occur and the classification indicator for this class will never assert.
    eONE = 1, // The register contents are valid and a comparison with all compare values is done when a VLAN frame is received.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Compare 0
    uint32_t CMP0 : 3;
    uint32_t _reserved_0 : 1;
    /// read-write - Compare 1
    uint32_t CMP1 : 3;
    uint32_t _reserved_1 : 1;
    /// read-write - Compare 2
    uint32_t CMP2 : 3;
    uint32_t _reserved_2 : 1;
    /// read-write - Compare 3
    uint32_t CMP3 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Match Enable
    eMATCHEN MATCHEN : 1;
    uint32_t _reserved_4 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCMR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCMR1 &Instance() { return *reinterpret_cast<volatile RCMR1*>(0x404201C8); }
};
// Receive Classification Match Register for Class n
//
union RCMR2 {
  
  enum class eMATCHEN : uint32_t {
    eZERO = 0, // Disabled (default): no compares will occur and the classification indicator for this class will never assert.
    eONE = 1, // The register contents are valid and a comparison with all compare values is done when a VLAN frame is received.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Compare 0
    uint32_t CMP0 : 3;
    uint32_t _reserved_0 : 1;
    /// read-write - Compare 1
    uint32_t CMP1 : 3;
    uint32_t _reserved_1 : 1;
    /// read-write - Compare 2
    uint32_t CMP2 : 3;
    uint32_t _reserved_2 : 1;
    /// read-write - Compare 3
    uint32_t CMP3 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Match Enable
    eMATCHEN MATCHEN : 1;
    uint32_t _reserved_4 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCMR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCMR2 &Instance() { return *reinterpret_cast<volatile RCMR2*>(0x404201CC); }
};

// DMA Class Based Configuration
//
union DMACFG1 {
  
  enum class eDMA_CLASS_EN : uint32_t {
    eZERO = 0, // The DMA controller's channel for the class is not used. Disabling the DMA controller of a class also requires disabling the class match comparator for the class (see registers RCMRn). When class 1 and class 2 queues are disabled then their frames will be placed in queue 0.
    eONE = 1, // Enable the DMA controller to support the corresponding descriptor ring for this class of traffic.
  };
  
  enum class eCALC_NOIPG : uint32_t {
    eZERO = 0, // The traffic shaper function should consider 12 octets of IPG in addition to the frame data transferred for a frame when doing bandwidth calculations. This is the default.
    eONE = 1, // Addition of 12 bytes for the IPG should be omitted when calculating the bandwidth (for traffic shaping, when writing a frame into the transmit FIFO, the shaper will usually consider 12 bytes of IPG for every frame as part of the bandwidth allocated by the frame. This addition can be suppressed, meaning short frames will become more bandwidth than large frames due to the relation of data to IPG overhead).
  };
  
  // Bit field definition.
  struct {
    /// read-write - Idle slope
    uint32_t IDLE_SLOPE : 16;
    /// read-write - DMA class enable
    eDMA_CLASS_EN DMA_CLASS_EN : 1;
    /// read-write - Calculate no IPG
    eCALC_NOIPG CALC_NOIPG : 1;
    uint32_t _reserved_0 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMACFG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMACFG1 &Instance() { return *reinterpret_cast<volatile DMACFG1*>(0x404201D8); }
};
// DMA Class Based Configuration
//
union DMACFG2 {
  
  enum class eDMA_CLASS_EN : uint32_t {
    eZERO = 0, // The DMA controller's channel for the class is not used. Disabling the DMA controller of a class also requires disabling the class match comparator for the class (see registers RCMRn). When class 1 and class 2 queues are disabled then their frames will be placed in queue 0.
    eONE = 1, // Enable the DMA controller to support the corresponding descriptor ring for this class of traffic.
  };
  
  enum class eCALC_NOIPG : uint32_t {
    eZERO = 0, // The traffic shaper function should consider 12 octets of IPG in addition to the frame data transferred for a frame when doing bandwidth calculations. This is the default.
    eONE = 1, // Addition of 12 bytes for the IPG should be omitted when calculating the bandwidth (for traffic shaping, when writing a frame into the transmit FIFO, the shaper will usually consider 12 bytes of IPG for every frame as part of the bandwidth allocated by the frame. This addition can be suppressed, meaning short frames will become more bandwidth than large frames due to the relation of data to IPG overhead).
  };
  
  // Bit field definition.
  struct {
    /// read-write - Idle slope
    uint32_t IDLE_SLOPE : 16;
    /// read-write - DMA class enable
    eDMA_CLASS_EN DMA_CLASS_EN : 1;
    /// read-write - Calculate no IPG
    eCALC_NOIPG CALC_NOIPG : 1;
    uint32_t _reserved_0 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMACFG2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMACFG2 &Instance() { return *reinterpret_cast<volatile DMACFG2*>(0x404201DC); }
};

// Receive Descriptor Active Register - Ring 1
//
union RDAR1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    /// read-write - Receive Descriptor Active
    uint32_t RDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDAR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDAR1 &Instance() { return *reinterpret_cast<volatile RDAR1*>(0x404201E0); }
};

// Transmit Descriptor Active Register - Ring 1
//
union TDAR1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    /// read-write - Transmit Descriptor Active
    uint32_t TDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDAR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDAR1 &Instance() { return *reinterpret_cast<volatile TDAR1*>(0x404201E4); }
};

// Receive Descriptor Active Register - Ring 2
//
union RDAR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    /// read-write - Receive Descriptor Active
    uint32_t RDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDAR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDAR2 &Instance() { return *reinterpret_cast<volatile RDAR2*>(0x404201E8); }
};

// Transmit Descriptor Active Register - Ring 2
//
union TDAR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    /// read-write - Transmit Descriptor Active
    uint32_t TDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDAR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDAR2 &Instance() { return *reinterpret_cast<volatile TDAR2*>(0x404201EC); }
};

// QOS Scheme
//
union QOS {
  
  enum class eTX_SCHEME : uint32_t {
    eCREDIT = 0, // Credit-based scheme
    eRR = 1, // Round-robin scheme
  };
  
  enum class eRX_FLUSH0 : uint32_t {
    eZERO = 0, // Disable
    eONE = 1, // Enable
  };
  
  enum class eRX_FLUSH1 : uint32_t {
    eZERO = 0, // Disable
    eONE = 1, // Enable
  };
  
  enum class eRX_FLUSH2 : uint32_t {
    eZERO = 0, // Disable
    eONE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - TX scheme configuration
    eTX_SCHEME TX_SCHEME : 3;
    /// read-write - RX Flush Ring 0
    eRX_FLUSH0 RX_FLUSH0 : 1;
    /// read-write - RX Flush Ring 1
    eRX_FLUSH1 RX_FLUSH1 : 1;
    /// read-write - RX Flush Ring 2
    eRX_FLUSH2 RX_FLUSH2 : 1;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  QOS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile QOS &Instance() { return *reinterpret_cast<volatile QOS*>(0x404201F0); }
};

// Tx Packet Count Statistic Register
//
union RMON_T_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Packet count
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_PACKETS &Instance() { return *reinterpret_cast<volatile RMON_T_PACKETS*>(0x40420204); }
};

// Tx Broadcast Packets Statistic Register
//
union RMON_T_BC_PKT {
  
  // Bit field definition.
  struct {
    /// read-only - Number of broadcast packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_BC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_BC_PKT &Instance() { return *reinterpret_cast<volatile RMON_T_BC_PKT*>(0x40420208); }
};

// Tx Multicast Packets Statistic Register
//
union RMON_T_MC_PKT {
  
  // Bit field definition.
  struct {
    /// read-only - Number of multicast packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_MC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_MC_PKT &Instance() { return *reinterpret_cast<volatile RMON_T_MC_PKT*>(0x4042020C); }
};

// Tx Packets with CRC/Align Error Statistic Register
//
union RMON_T_CRC_ALIGN {
  
  // Bit field definition.
  struct {
    /// read-only - Number of packets with CRC/align error
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_CRC_ALIGN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_CRC_ALIGN &Instance() { return *reinterpret_cast<volatile RMON_T_CRC_ALIGN*>(0x40420210); }
};

// Tx Packets Less Than Bytes and Good CRC Statistic Register
//
union RMON_T_UNDERSIZE {
  
  // Bit field definition.
  struct {
    /// read-only - Number of transmit packets less than 64 bytes with good CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_UNDERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_UNDERSIZE &Instance() { return *reinterpret_cast<volatile RMON_T_UNDERSIZE*>(0x40420214); }
};

// Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
//
union RMON_T_OVERSIZE {
  
  // Bit field definition.
  struct {
    /// read-only - Number of transmit packets greater than MAX_FL bytes with good CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_OVERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_OVERSIZE &Instance() { return *reinterpret_cast<volatile RMON_T_OVERSIZE*>(0x40420218); }
};

// Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
//
union RMON_T_FRAG {
  
  // Bit field definition.
  struct {
    /// read-only - Number of packets less than 64 bytes with bad CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_FRAG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_FRAG &Instance() { return *reinterpret_cast<volatile RMON_T_FRAG*>(0x4042021C); }
};

// Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
//
union RMON_T_JAB {
  
  // Bit field definition.
  struct {
    /// read-only - Number of transmit packets greater than MAX_FL bytes and bad CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_JAB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_JAB &Instance() { return *reinterpret_cast<volatile RMON_T_JAB*>(0x40420220); }
};

// Tx Collision Count Statistic Register
//
union RMON_T_COL {
  
  // Bit field definition.
  struct {
    /// read-only - Number of transmit collisions
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_COL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_COL &Instance() { return *reinterpret_cast<volatile RMON_T_COL*>(0x40420224); }
};

// Tx 64-Byte Packets Statistic Register
//
union RMON_T_P64 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 64-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P64 &Instance() { return *reinterpret_cast<volatile RMON_T_P64*>(0x40420228); }
};

// Tx 65- to 127-byte Packets Statistic Register
//
union RMON_T_P65TO127 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 65- to 127-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P65TO127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P65TO127 &Instance() { return *reinterpret_cast<volatile RMON_T_P65TO127*>(0x4042022C); }
};

// Tx 128- to 255-byte Packets Statistic Register
//
union RMON_T_P128TO255 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 128- to 255-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P128TO255() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P128TO255 &Instance() { return *reinterpret_cast<volatile RMON_T_P128TO255*>(0x40420230); }
};

// Tx 256- to 511-byte Packets Statistic Register
//
union RMON_T_P256TO511 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 256- to 511-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P256TO511() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P256TO511 &Instance() { return *reinterpret_cast<volatile RMON_T_P256TO511*>(0x40420234); }
};

// Tx 512- to 1023-byte Packets Statistic Register
//
union RMON_T_P512TO1023 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 512- to 1023-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P512TO1023() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P512TO1023 &Instance() { return *reinterpret_cast<volatile RMON_T_P512TO1023*>(0x40420238); }
};

// Tx 1024- to 2047-byte Packets Statistic Register
//
union RMON_T_P1024TO2047 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 1024- to 2047-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P1024TO2047() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P1024TO2047 &Instance() { return *reinterpret_cast<volatile RMON_T_P1024TO2047*>(0x4042023C); }
};

// Tx Packets Greater Than 2048 Bytes Statistic Register
//
union RMON_T_P_GTE2048 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of transmit packets greater than 2048 bytes
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P_GTE2048() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P_GTE2048 &Instance() { return *reinterpret_cast<volatile RMON_T_P_GTE2048*>(0x40420240); }
};

// Tx Octets Statistic Register
//
union RMON_T_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - Number of transmit octets
    uint32_t TXOCTS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_OCTETS &Instance() { return *reinterpret_cast<volatile RMON_T_OCTETS*>(0x40420244); }
};

// Frames Transmitted OK Statistic Register
//
union IEEE_T_FRAME_OK {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted OK
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_FRAME_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_FRAME_OK &Instance() { return *reinterpret_cast<volatile IEEE_T_FRAME_OK*>(0x4042024C); }
};

// Frames Transmitted with Single Collision Statistic Register
//
union IEEE_T_1COL {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted with one collision
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_1COL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_1COL &Instance() { return *reinterpret_cast<volatile IEEE_T_1COL*>(0x40420250); }
};

// Frames Transmitted with Multiple Collisions Statistic Register
//
union IEEE_T_MCOL {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted with multiple collisions
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_MCOL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_MCOL &Instance() { return *reinterpret_cast<volatile IEEE_T_MCOL*>(0x40420254); }
};

// Frames Transmitted after Deferral Delay Statistic Register
//
union IEEE_T_DEF {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted with deferral delay
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_DEF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_DEF &Instance() { return *reinterpret_cast<volatile IEEE_T_DEF*>(0x40420258); }
};

// Frames Transmitted with Late Collision Statistic Register
//
union IEEE_T_LCOL {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted with late collision
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_LCOL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_LCOL &Instance() { return *reinterpret_cast<volatile IEEE_T_LCOL*>(0x4042025C); }
};

// Frames Transmitted with Excessive Collisions Statistic Register
//
union IEEE_T_EXCOL {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted with excessive collisions
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_EXCOL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_EXCOL &Instance() { return *reinterpret_cast<volatile IEEE_T_EXCOL*>(0x40420260); }
};

// Frames Transmitted with Tx FIFO Underrun Statistic Register
//
union IEEE_T_MACERR {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted with transmit FIFO underrun
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_MACERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_MACERR &Instance() { return *reinterpret_cast<volatile IEEE_T_MACERR*>(0x40420264); }
};

// Frames Transmitted with Carrier Sense Error Statistic Register
//
union IEEE_T_CSERR {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames transmitted with carrier sense error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_CSERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_CSERR &Instance() { return *reinterpret_cast<volatile IEEE_T_CSERR*>(0x40420268); }
};

// Reserved Statistic Register
//
union IEEE_T_SQE {
  
  // Bit field definition.
  struct {
    /// read-only - This read-only field is reserved and always has the value 0
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_SQE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_SQE &Instance() { return *reinterpret_cast<volatile IEEE_T_SQE*>(0x4042026C); }
};

// Flow Control Pause Frames Transmitted Statistic Register
//
union IEEE_T_FDXFC {
  
  // Bit field definition.
  struct {
    /// read-only - Number of flow-control pause frames transmitted
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_FDXFC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_FDXFC &Instance() { return *reinterpret_cast<volatile IEEE_T_FDXFC*>(0x40420270); }
};

// Octet Count for Frames Transmitted w/o Error Statistic Register
//
union IEEE_T_OCTETS_OK {
  
  // Bit field definition.
  struct {
    /// read-only - Octet count for frames transmitted without error Counts total octets (includes header and FCS fields).
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_OCTETS_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_OCTETS_OK &Instance() { return *reinterpret_cast<volatile IEEE_T_OCTETS_OK*>(0x40420274); }
};

// Rx Packet Count Statistic Register
//
union RMON_R_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Number of packets received
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_PACKETS &Instance() { return *reinterpret_cast<volatile RMON_R_PACKETS*>(0x40420284); }
};

// Rx Broadcast Packets Statistic Register
//
union RMON_R_BC_PKT {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive broadcast packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_BC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_BC_PKT &Instance() { return *reinterpret_cast<volatile RMON_R_BC_PKT*>(0x40420288); }
};

// Rx Multicast Packets Statistic Register
//
union RMON_R_MC_PKT {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive multicast packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_MC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_MC_PKT &Instance() { return *reinterpret_cast<volatile RMON_R_MC_PKT*>(0x4042028C); }
};

// Rx Packets with CRC/Align Error Statistic Register
//
union RMON_R_CRC_ALIGN {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive packets with CRC or align error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_CRC_ALIGN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_CRC_ALIGN &Instance() { return *reinterpret_cast<volatile RMON_R_CRC_ALIGN*>(0x40420290); }
};

// Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
//
union RMON_R_UNDERSIZE {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive packets with less than 64 bytes and good CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_UNDERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_UNDERSIZE &Instance() { return *reinterpret_cast<volatile RMON_R_UNDERSIZE*>(0x40420294); }
};

// Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
//
union RMON_R_OVERSIZE {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive packets greater than MAX_FL and good CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_OVERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_OVERSIZE &Instance() { return *reinterpret_cast<volatile RMON_R_OVERSIZE*>(0x40420298); }
};

// Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
//
union RMON_R_FRAG {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive packets with less than 64 bytes and bad CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_FRAG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_FRAG &Instance() { return *reinterpret_cast<volatile RMON_R_FRAG*>(0x4042029C); }
};

// Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
//
union RMON_R_JAB {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive packets greater than MAX_FL and bad CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_JAB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_JAB &Instance() { return *reinterpret_cast<volatile RMON_R_JAB*>(0x404202A0); }
};

// Rx 64-Byte Packets Statistic Register
//
union RMON_R_P64 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 64-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P64 &Instance() { return *reinterpret_cast<volatile RMON_R_P64*>(0x404202A8); }
};

// Rx 65- to 127-Byte Packets Statistic Register
//
union RMON_R_P65TO127 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 65- to 127-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P65TO127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P65TO127 &Instance() { return *reinterpret_cast<volatile RMON_R_P65TO127*>(0x404202AC); }
};

// Rx 128- to 255-Byte Packets Statistic Register
//
union RMON_R_P128TO255 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 128- to 255-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P128TO255() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P128TO255 &Instance() { return *reinterpret_cast<volatile RMON_R_P128TO255*>(0x404202B0); }
};

// Rx 256- to 511-Byte Packets Statistic Register
//
union RMON_R_P256TO511 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 256- to 511-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P256TO511() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P256TO511 &Instance() { return *reinterpret_cast<volatile RMON_R_P256TO511*>(0x404202B4); }
};

// Rx 512- to 1023-Byte Packets Statistic Register
//
union RMON_R_P512TO1023 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 512- to 1023-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P512TO1023() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P512TO1023 &Instance() { return *reinterpret_cast<volatile RMON_R_P512TO1023*>(0x404202B8); }
};

// Rx 1024- to 2047-Byte Packets Statistic Register
//
union RMON_R_P1024TO2047 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of 1024- to 2047-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P1024TO2047() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P1024TO2047 &Instance() { return *reinterpret_cast<volatile RMON_R_P1024TO2047*>(0x404202BC); }
};

// Rx Packets Greater than 2048 Bytes Statistic Register
//
union RMON_R_P_GTE2048 {
  
  // Bit field definition.
  struct {
    /// read-only - Number of greater-than-2048-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P_GTE2048() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P_GTE2048 &Instance() { return *reinterpret_cast<volatile RMON_R_P_GTE2048*>(0x404202C0); }
};

// Rx Octets Statistic Register
//
union RMON_R_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - Number of receive octets
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_OCTETS &Instance() { return *reinterpret_cast<volatile RMON_R_OCTETS*>(0x404202C4); }
};

// Frames not Counted Correctly Statistic Register
//
union IEEE_R_DROP {
  
  // Bit field definition.
  struct {
    /// read-only - Frame count
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_DROP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_DROP &Instance() { return *reinterpret_cast<volatile IEEE_R_DROP*>(0x404202C8); }
};

// Frames Received OK Statistic Register
//
union IEEE_R_FRAME_OK {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames received OK
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_FRAME_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_FRAME_OK &Instance() { return *reinterpret_cast<volatile IEEE_R_FRAME_OK*>(0x404202CC); }
};

// Frames Received with CRC Error Statistic Register
//
union IEEE_R_CRC {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames received with CRC error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_CRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_CRC &Instance() { return *reinterpret_cast<volatile IEEE_R_CRC*>(0x404202D0); }
};

// Frames Received with Alignment Error Statistic Register
//
union IEEE_R_ALIGN {
  
  // Bit field definition.
  struct {
    /// read-only - Number of frames received with alignment error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_ALIGN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_ALIGN &Instance() { return *reinterpret_cast<volatile IEEE_R_ALIGN*>(0x404202D4); }
};

// Receive FIFO Overflow Count Statistic Register
//
union IEEE_R_MACERR {
  
  // Bit field definition.
  struct {
    /// read-only - Receive FIFO overflow count
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_MACERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_MACERR &Instance() { return *reinterpret_cast<volatile IEEE_R_MACERR*>(0x404202D8); }
};

// Flow Control Pause Frames Received Statistic Register
//
union IEEE_R_FDXFC {
  
  // Bit field definition.
  struct {
    /// read-only - Number of flow-control pause frames received
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_FDXFC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_FDXFC &Instance() { return *reinterpret_cast<volatile IEEE_R_FDXFC*>(0x404202DC); }
};

// Octet Count for Frames Received without Error Statistic Register
//
union IEEE_R_OCTETS_OK {
  
  // Bit field definition.
  struct {
    /// read-only - Number of octets for frames received without error
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_OCTETS_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_OCTETS_OK &Instance() { return *reinterpret_cast<volatile IEEE_R_OCTETS_OK*>(0x404202E0); }
};

// Adjustable Timer Control Register
//
union ATCR {
  
  enum class eEN : uint32_t {
    eZERO = 0, // The timer stops at the current value.
    eONE = 1, // The timer starts incrementing.
  };
  
  enum class eOFFEN : uint32_t {
    eZERO = 0, // Disable.
    eONE = 1, // The timer can be reset to zero when the given offset time is reached (offset event). The field is cleared when the offset event is reached, so no further event occurs until the field is set again. The timer offset value must be set before setting this field.
  };
  
  enum class eOFFRST : uint32_t {
    eZERO = 0, // The timer is not affected and no action occurs, besides clearing OFFEN, when the offset is reached.
    eONE = 1, // If OFFEN is set, the timer resets to zero when the offset setting is reached. The offset event does not cause a timer interrupt.
  };
  
  enum class ePEREN : uint32_t {
    eZERO = 0, // Disable.
    eONE = 1, // A period event interrupt can be generated (EIR[TS_TIMER]) and the event signal output is asserted when the timer wraps around according to the periodic setting ATPER. The timer period value must be set before setting this bit. Not all devices contain the event signal output. See the chip configuration details.
  };
  
  enum class ePINPER : uint32_t {
    eZERO = 0, // Disable.
    eONE = 1, // Enable.
  };
  
  enum class eCAPTURE : uint32_t {
    eZERO = 0, // No effect.
    eONE = 1, // The current time is captured and can be read from the ATVR register.
  };
  
  enum class eSLAVE : uint32_t {
    eZERO = 0, // The timer is active and all configuration fields in this register are relevant.
    eONE = 1, // The internal timer is disabled and the externally provided timer value is used. All other fields, except CAPTURE, in this register have no effect. CAPTURE can still be used to capture the current timer value.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Timer
    eEN EN : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Enable One-Shot Offset Event
    eOFFEN OFFEN : 1;
    /// read-write - Reset Timer On Offset Event
    eOFFRST OFFRST : 1;
    /// read-write - Enable Periodical Event
    ePEREN PEREN : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Enables event signal output external pin frc_evt_period assertion on period event
    ePINPER PINPER : 1;
    uint32_t _reserved_2 : 1;
    /// read-write - Reset Timer
    uint32_t RESTART : 1;
    uint32_t _reserved_3 : 1;
    /// read-write - Capture Timer Value
    eCAPTURE CAPTURE : 1;
    uint32_t _reserved_4 : 1;
    /// read-write - Enable Timer Slave Mode
    eSLAVE SLAVE : 1;
    uint32_t _reserved_5 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATCR &Instance() { return *reinterpret_cast<volatile ATCR*>(0x40420400); }
};

// Timer Value Register
//
union ATVR {
  
  // Bit field definition.
  struct {
    /// read-write - A write sets the timer
    uint32_t ATIME : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATVR &Instance() { return *reinterpret_cast<volatile ATVR*>(0x40420404); }
};

// Timer Offset Register
//
union ATOFF {
  
  // Bit field definition.
  struct {
    /// read-write - Offset value for one-shot event generation
    uint32_t OFFSET : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATOFF &Instance() { return *reinterpret_cast<volatile ATOFF*>(0x40420408); }
};

// Timer Period Register
//
union ATPER {
  
  // Bit field definition.
  struct {
    /// read-write - Value for generating periodic events
    uint32_t PERIOD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATPER() = delete;
  inline void Reset() volatile { this->value = 0x3B9ACA00; }
  static inline volatile ATPER &Instance() { return *reinterpret_cast<volatile ATPER*>(0x4042040C); }
};

// Timer Correction Register
//
union ATCOR {
  
  // Bit field definition.
  struct {
    /// read-write - Correction Counter Wrap-Around Value
    uint32_t COR : 31;
    uint32_t _reserved_0 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATCOR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATCOR &Instance() { return *reinterpret_cast<volatile ATCOR*>(0x40420410); }
};

// Time-Stamping Clock Period Register
//
union ATINC {
  
  // Bit field definition.
  struct {
    /// read-write - Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
    uint32_t INC : 7;
    uint32_t _reserved_0 : 1;
    /// read-write - Correction Increment Value
    uint32_t INC_CORR : 7;
    uint32_t _reserved_1 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATINC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATINC &Instance() { return *reinterpret_cast<volatile ATINC*>(0x40420414); }
};

// Timestamp of Last Transmitted Frame
//
union ATSTMP {
  
  // Bit field definition.
  struct {
    /// read-only - Timestamp of the last frame transmitted by the core that had TxBD[TS] set the ff_tx_ts_frm signal asserted from the user application
    uint32_t TIMESTAMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATSTMP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATSTMP &Instance() { return *reinterpret_cast<volatile ATSTMP*>(0x40420418); }
};

// Timer Global Status Register
//
union TGSR {
  
  enum class eTF0 : uint32_t {
    eZERO = 0, // Timer Flag for Channel 0 is clear
    eONE = 1, // Timer Flag for Channel 0 is set
  };
  
  enum class eTF1 : uint32_t {
    eZERO = 0, // Timer Flag for Channel 1 is clear
    eONE = 1, // Timer Flag for Channel 1 is set
  };
  
  enum class eTF2 : uint32_t {
    eZERO = 0, // Timer Flag for Channel 2 is clear
    eONE = 1, // Timer Flag for Channel 2 is set
  };
  
  enum class eTF3 : uint32_t {
    eZERO = 0, // Timer Flag for Channel 3 is clear
    eONE = 1, // Timer Flag for Channel 3 is set
  };
  
  // Bit field definition.
  struct {
    /// read-write - Copy Of Timer Flag For Channel 0
    eTF0 TF0 : 1;
    /// read-write - Copy Of Timer Flag For Channel 1
    eTF1 TF1 : 1;
    /// read-write - Copy Of Timer Flag For Channel 2
    eTF2 TF2 : 1;
    /// read-write - Copy Of Timer Flag For Channel 3
    eTF3 TF3 : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TGSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TGSR &Instance() { return *reinterpret_cast<volatile TGSR*>(0x40420604); }
};

// Timer Control Status Register
//
union TCSR0 {
  
  enum class eTDRE : uint32_t {
    eZERO = 0, // DMA request is disabled
    eONE = 1, // DMA request is enabled
  };
  
  enum class eTMODE : uint32_t {
    eTMR_DIS = 0, // Timer Channel is disabled.
    eTMR_RE = 1, // Timer Channel is configured for Input Capture on rising edge.
    eTMR_FE = 2, // Timer Channel is configured for Input Capture on falling edge.
    eTMR_BE = 3, // Timer Channel is configured for Input Capture on both edges.
    eTMR_OUT = 4, // Timer Channel is configured for Output Compare - software only.
    eTMR_TOGGLE = 5, // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_CLR = 6, // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_SET_OUT = 7, // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_CLR_SET1 = 9, // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET = 10, // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_OUT_CMP_LOW = 14, // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15, // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
  };
  
  enum class eTIE : uint32_t {
    eZERO = 0, // Interrupt is disabled
    eONE = 1, // Interrupt is enabled
  };
  
  enum class eTF : uint32_t {
    eZERO = 0, // Input Capture or Output Compare has not occurred.
    eONE = 1, // Input Capture or Output Compare has occurred.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Mode
    eTMODE TMODE : 4;
    /// read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    /// read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR0 &Instance() { return *reinterpret_cast<volatile TCSR0*>(0x40420608); }
};

// Timer Compare Capture Register
//
union TCCR0 {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR0 &Instance() { return *reinterpret_cast<volatile TCCR0*>(0x4042060C); }
};

// Timer Control Status Register
//
union TCSR1 {
  
  enum class eTDRE : uint32_t {
    eZERO = 0, // DMA request is disabled
    eONE = 1, // DMA request is enabled
  };
  
  enum class eTMODE : uint32_t {
    eTMR_DIS = 0, // Timer Channel is disabled.
    eTMR_RE = 1, // Timer Channel is configured for Input Capture on rising edge.
    eTMR_FE = 2, // Timer Channel is configured for Input Capture on falling edge.
    eTMR_BE = 3, // Timer Channel is configured for Input Capture on both edges.
    eTMR_OUT = 4, // Timer Channel is configured for Output Compare - software only.
    eTMR_TOGGLE = 5, // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_CLR = 6, // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_SET_OUT = 7, // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_CLR_SET1 = 9, // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET = 10, // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_OUT_CMP_LOW = 14, // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15, // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
  };
  
  enum class eTIE : uint32_t {
    eZERO = 0, // Interrupt is disabled
    eONE = 1, // Interrupt is enabled
  };
  
  enum class eTF : uint32_t {
    eZERO = 0, // Input Capture or Output Compare has not occurred.
    eONE = 1, // Input Capture or Output Compare has occurred.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Mode
    eTMODE TMODE : 4;
    /// read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    /// read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR1 &Instance() { return *reinterpret_cast<volatile TCSR1*>(0x40420610); }
};

// Timer Compare Capture Register
//
union TCCR1 {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR1 &Instance() { return *reinterpret_cast<volatile TCCR1*>(0x40420614); }
};

// Timer Control Status Register
//
union TCSR2 {
  
  enum class eTDRE : uint32_t {
    eZERO = 0, // DMA request is disabled
    eONE = 1, // DMA request is enabled
  };
  
  enum class eTMODE : uint32_t {
    eTMR_DIS = 0, // Timer Channel is disabled.
    eTMR_RE = 1, // Timer Channel is configured for Input Capture on rising edge.
    eTMR_FE = 2, // Timer Channel is configured for Input Capture on falling edge.
    eTMR_BE = 3, // Timer Channel is configured for Input Capture on both edges.
    eTMR_OUT = 4, // Timer Channel is configured for Output Compare - software only.
    eTMR_TOGGLE = 5, // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_CLR = 6, // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_SET_OUT = 7, // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_CLR_SET1 = 9, // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET = 10, // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_OUT_CMP_LOW = 14, // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15, // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
  };
  
  enum class eTIE : uint32_t {
    eZERO = 0, // Interrupt is disabled
    eONE = 1, // Interrupt is enabled
  };
  
  enum class eTF : uint32_t {
    eZERO = 0, // Input Capture or Output Compare has not occurred.
    eONE = 1, // Input Capture or Output Compare has occurred.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Mode
    eTMODE TMODE : 4;
    /// read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    /// read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR2 &Instance() { return *reinterpret_cast<volatile TCSR2*>(0x40420618); }
};

// Timer Compare Capture Register
//
union TCCR2 {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR2 &Instance() { return *reinterpret_cast<volatile TCCR2*>(0x4042061C); }
};

// Timer Control Status Register
//
union TCSR3 {
  
  enum class eTDRE : uint32_t {
    eZERO = 0, // DMA request is disabled
    eONE = 1, // DMA request is enabled
  };
  
  enum class eTMODE : uint32_t {
    eTMR_DIS = 0, // Timer Channel is disabled.
    eTMR_RE = 1, // Timer Channel is configured for Input Capture on rising edge.
    eTMR_FE = 2, // Timer Channel is configured for Input Capture on falling edge.
    eTMR_BE = 3, // Timer Channel is configured for Input Capture on both edges.
    eTMR_OUT = 4, // Timer Channel is configured for Output Compare - software only.
    eTMR_TOGGLE = 5, // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_CLR = 6, // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_SET_OUT = 7, // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_CLR_SET1 = 9, // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET = 10, // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_OUT_CMP_LOW = 14, // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15, // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
  };
  
  enum class eTIE : uint32_t {
    eZERO = 0, // Interrupt is disabled
    eONE = 1, // Interrupt is enabled
  };
  
  enum class eTF : uint32_t {
    eZERO = 0, // Input Capture or Output Compare has not occurred.
    eONE = 1, // Input Capture or Output Compare has occurred.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Mode
    eTMODE TMODE : 4;
    /// read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    /// read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR3 &Instance() { return *reinterpret_cast<volatile TCSR3*>(0x40420620); }
};

// Timer Compare Capture Register
//
union TCCR3 {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR3 &Instance() { return *reinterpret_cast<volatile TCCR3*>(0x40420624); }
};


} // namespace nENET_1G