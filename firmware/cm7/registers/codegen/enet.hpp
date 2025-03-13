#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// ENET
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nENET {


// Interrupt Event Register
union EIR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 15;
    // read-write - Timestamp Timer
    uint32_t TS_TIMER : 1;
    // read-write - Transmit Timestamp Available
    uint32_t TS_AVAIL : 1;
    // read-write - Node Wakeup Request Indication
    uint32_t WAKEUP : 1;
    // read-write - Payload Receive Error
    uint32_t PLR : 1;
    // read-write - Transmit FIFO Underrun
    uint32_t UN : 1;
    // read-write - Collision Retry Limit
    uint32_t RL : 1;
    // read-write - Late Collision
    uint32_t LC : 1;
    // read-write - Ethernet Bus Error
    uint32_t EBERR : 1;
    // read-write - MII Interrupt.
    uint32_t MII : 1;
    // read-write - Receive Buffer Interrupt
    uint32_t RXB : 1;
    // read-write - Receive Frame Interrupt
    uint32_t RXF : 1;
    // read-write - Transmit Buffer Interrupt
    uint32_t TXB : 1;
    // read-write - Transmit Frame Interrupt
    uint32_t TXF : 1;
    // read-write - Graceful Stop Complete
    uint32_t GRA : 1;
    // read-write - Babbling Transmit Error
    uint32_t BABT : 1;
    // read-write - Babbling Receive Error
    uint32_t BABR : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  EIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile EIR &ref() { return *reinterpret_cast<volatile EIR*>(0x40424004); }
};

// Interrupt Mask Register
union EIMR {
  
  // TS_TIMER Interrupt Mask
  enum class eTS_TIMER : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // TS_AVAIL Interrupt Mask
  enum class eTS_AVAIL : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // WAKEUP Interrupt Mask
  enum class eWAKEUP : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // PLR Interrupt Mask
  enum class ePLR : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // UN Interrupt Mask
  enum class eUN : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // RL Interrupt Mask
  enum class eRL : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // LC Interrupt Mask
  enum class eLC : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // EBERR Interrupt Mask
  enum class eEBERR : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // MII Interrupt Mask
  enum class eMII : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // RXB Interrupt Mask
  enum class eRXB : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // RXF Interrupt Mask
  enum class eRXF : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // TXB Interrupt Mask
  enum class eTXB : uint32_t {
    // The corresponding interrupt source is masked.
    eMASKED = 0,
    // The corresponding interrupt source is not masked.
    eUNMASKED = 1,
  };
  
  // TXF Interrupt Mask
  enum class eTXF : uint32_t {
    // The corresponding interrupt source is masked.
    eMASKED = 0,
    // The corresponding interrupt source is not masked.
    eUNMASKED = 1,
  };
  
  // GRA Interrupt Mask
  enum class eGRA : uint32_t {
    // The corresponding interrupt source is masked.
    eMASKED = 0,
    // The corresponding interrupt source is not masked.
    eUMASKED = 1,
  };
  
  // BABT Interrupt Mask
  enum class eBABT : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // BABR Interrupt Mask
  enum class eBABR : uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 15;
    // read-write - TS_TIMER Interrupt Mask
    eTS_TIMER TS_TIMER : 1;
    // read-write - TS_AVAIL Interrupt Mask
    eTS_AVAIL TS_AVAIL : 1;
    // read-write - WAKEUP Interrupt Mask
    eWAKEUP WAKEUP : 1;
    // read-write - PLR Interrupt Mask
    ePLR PLR : 1;
    // read-write - UN Interrupt Mask
    eUN UN : 1;
    // read-write - RL Interrupt Mask
    eRL RL : 1;
    // read-write - LC Interrupt Mask
    eLC LC : 1;
    // read-write - EBERR Interrupt Mask
    eEBERR EBERR : 1;
    // read-write - MII Interrupt Mask
    eMII MII : 1;
    // read-write - RXB Interrupt Mask
    eRXB RXB : 1;
    // read-write - RXF Interrupt Mask
    eRXF RXF : 1;
    // read-write - TXB Interrupt Mask
    eTXB TXB : 1;
    // read-write - TXF Interrupt Mask
    eTXF TXF : 1;
    // read-write - GRA Interrupt Mask
    eGRA GRA : 1;
    // read-write - BABT Interrupt Mask
    eBABT BABT : 1;
    // read-write - BABR Interrupt Mask
    eBABR BABR : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  EIMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile EIMR &ref() { return *reinterpret_cast<volatile EIMR*>(0x40424008); }
};

// Receive Descriptor Active Register - Ring 0
union RDAR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - Receive Descriptor Active
    uint32_t RDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDAR &ref() { return *reinterpret_cast<volatile RDAR*>(0x40424010); }
};

// Transmit Descriptor Active Register - Ring 0
union TDAR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - Transmit Descriptor Active
    uint32_t TDAR : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDAR &ref() { return *reinterpret_cast<volatile TDAR*>(0x40424014); }
};

// Ethernet Control Register
union ECR {
  
  // Ethernet Enable
  enum class eETHEREN : uint32_t {
    // Reception immediately stops and transmission stops after a bad CRC is appended to any currently transmitted frame.
    eZERO = 0,
    // MAC is enabled, and reception and transmission are possible.
    eONE = 1,
  };
  
  // Magic Packet Detection Enable
  enum class eMAGICEN : uint32_t {
    // Magic detection logic disabled.
    eZERO = 0,
    // The MAC core detects magic packets and asserts EIR[WAKEUP] when a frame is detected.
    eONE = 1,
  };
  
  // Sleep Mode Enable
  enum class eSLEEP : uint32_t {
    // Normal operating mode.
    eZERO = 0,
    // Sleep mode.
    eONE = 1,
  };
  
  // EN1588 Enable
  enum class eEN1588 : uint32_t {
    // Legacy FEC buffer descriptors and functions enabled.
    eZERO = 0,
    // Enhanced frame time-stamping functions enabled. Has no effect within the MAC besides controlling the DMA control bit ena_1588.
    eONE = 1,
  };
  
  // Debug Enable
  enum class eDBGEN : uint32_t {
    // MAC continues operation in debug mode.
    eZERO = 0,
    // MAC enters hardware freeze mode when the processor is in debug mode.
    eONE = 1,
  };
  
  // Descriptor Byte Swapping Enable
  enum class eDBSWP : uint32_t {
    // The buffer descriptor bytes are not swapped to support big-endian devices.
    eZERO = 0,
    // The buffer descriptor bytes are swapped to support little-endian devices.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Ethernet MAC Reset
    uint32_t RESET : 1;
    // read-write - Ethernet Enable
    eETHEREN ETHEREN : 1;
    // read-write - Magic Packet Detection Enable
    eMAGICEN MAGICEN : 1;
    // read-write - Sleep Mode Enable
    eSLEEP SLEEP : 1;
    // read-write - EN1588 Enable
    eEN1588 EN1588 : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Debug Enable
    eDBGEN DBGEN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Descriptor Byte Swapping Enable
    eDBSWP DBSWP : 1;
    uint32_t _reserved_2 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECR() = delete;
  inline void Reset() volatile { this->value = 0x70000000; }
  static inline volatile ECR &ref() { return *reinterpret_cast<volatile ECR*>(0x40424024); }
};

// MII Management Frame Register
union MMFR {
  
  // Bit field definition.
  struct {
    // read-write - Management Frame Data
    uint32_t DATA : 16;
    // read-write - Turn Around
    uint32_t TA : 2;
    // read-write - Register Address
    uint32_t RA : 5;
    // read-write - PHY Address
    uint32_t PA : 5;
    // read-write - Operation Code
    uint32_t OP : 2;
    // read-write - Start Of Frame Delimiter
    uint32_t ST : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MMFR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MMFR &ref() { return *reinterpret_cast<volatile MMFR*>(0x40424040); }
};

// MII Speed Control Register
union MSCR {
  
  // Disable Preamble
  enum class eDIS_PRE : uint32_t {
    // Preamble enabled.
    eZERO = 0,
    // Preamble (32 ones) is not prepended to the MII management frame.
    eONE = 1,
  };
  
  // Hold time On MDIO Output
  enum class eHOLDTIME : uint32_t {
    // 1 internal module clock cycle
    eVAL_1 = 0,
    // 2 internal module clock cycles
    eVAL2 = 1,
    // 3 internal module clock cycles
    eVAL3 = 2,
    // 8 internal module clock cycles
    eVAL8 = 7,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - MII Speed
    uint32_t MII_SPEED : 6;
    // read-write - Disable Preamble
    eDIS_PRE DIS_PRE : 1;
    // read-write - Hold time On MDIO Output
    eHOLDTIME HOLDTIME : 3;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MSCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MSCR &ref() { return *reinterpret_cast<volatile MSCR*>(0x40424044); }
};

// MIB Control Register
union MIBC {
  
  // MIB Clear
  enum class eMIB_CLEAR : uint32_t {
    // See note above.
    eZERO = 0,
    // All statistics counters are reset to 0.
    eONE = 1,
  };
  
  // MIB Idle
  enum class eMIB_IDLE : uint32_t {
    // The MIB block is updating MIB counters.
    eZERO = 0,
    // The MIB block is not currently updating any MIB counters.
    eONE = 1,
  };
  
  // Disable MIB Logic
  enum class eMIB_DIS : uint32_t {
    // MIB logic is enabled.
    eZERO = 0,
    // MIB logic is disabled. The MIB logic halts and does not update any MIB counters.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 29;
    // read-write - MIB Clear
    eMIB_CLEAR MIB_CLEAR : 1;
    // read-only - MIB Idle
    eMIB_IDLE MIB_IDLE : 1;
    // read-write - Disable MIB Logic
    eMIB_DIS MIB_DIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIBC() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile MIBC &ref() { return *reinterpret_cast<volatile MIBC*>(0x40424064); }
};

// Receive Control Register
union RCR {
  
  // Internal Loopback
  enum class eLOOP : uint32_t {
    // Loopback disabled.
    eZERO = 0,
    // Transmitted frames are looped back internal to the device and transmit MII output signals are not asserted. DRT must be cleared.
    eONE = 1,
  };
  
  // Disable Receive On Transmit
  enum class eDRT : uint32_t {
    // Receive path operates independently of transmit (i.e., full-duplex mode). Can also be used to monitor transmit activity in half-duplex mode.
    eZERO = 0,
    // Disable reception of frames while transmitting. (Normally used for half-duplex mode.)
    eONE = 1,
  };
  
  // Media Independent Interface Mode
  enum class eMII_MODE : uint32_t {
    // MII or RMII mode, as indicated by the RMII_MODE field.
    eONE = 1,
  };
  
  // Promiscuous Mode
  enum class ePROM : uint32_t {
    // Disabled.
    eZERO = 0,
    // Enabled.
    eONE = 1,
  };
  
  // Broadcast Frame Reject
  enum class eBC_REJ : uint32_t {
    // Will not reject frames as described above
    eZERO = 0,
    // Will reject frames as described above
    eONE = 1,
  };
  
  // Flow Control Enable
  enum class eFCE : uint32_t {
    // Disable flow control
    eZERO = 0,
    // Enable flow control
    eONE = 1,
  };
  
  // RMII Mode Enable
  enum class eRMII_MODE : uint32_t {
    // MAC configured for MII mode.
    eZERO = 0,
    // MAC configured for RMII operation.
    eONE = 1,
  };
  
  // Enables 10-Mbit/s mode of the RMII .
  enum class eRMII_10T : uint32_t {
    // 100-Mbit/s operation.
    eZERO = 0,
    // 10-Mbit/s operation.
    eONE = 1,
  };
  
  // Enable Frame Padding Remove On Receive
  enum class ePADEN : uint32_t {
    // No padding is removed on receive by the MAC.
    eZERO = 0,
    // Padding is removed from received frames.
    eONE = 1,
  };
  
  // Terminate/Forward Pause Frames
  enum class ePAUFWD : uint32_t {
    // Pause frames are terminated and discarded in the MAC.
    eZERO = 0,
    // Pause frames are forwarded to the user application.
    eONE = 1,
  };
  
  // Terminate/Forward Received CRC
  enum class eCRCFWD : uint32_t {
    // The CRC field of received frames is transmitted to the user application.
    eZERO = 0,
    // The CRC field is stripped from the frame.
    eONE = 1,
  };
  
  // MAC Control Frame Enable
  enum class eCFEN : uint32_t {
    // MAC control frames with any opcode other than 0x0001 (pause frame) are accepted and forwarded to the client interface.
    eZERO = 0,
    // MAC control frames with any opcode other than 0x0001 (pause frame) are silently discarded.
    eONE = 1,
  };
  
  // Payload Length Check Disable
  enum class eNLC : uint32_t {
    // The payload length check is disabled.
    eZERO = 0,
    // The core checks the frame's payload length with the frame length/type field. Errors are indicated in the EIR[PLR] field.
    eONE = 1,
  };
  
  // Graceful Receive Stopped
  enum class eGRS : uint32_t {
    // Receive not stopped
    eZERO = 0,
    // Receive stopped
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Internal Loopback
    eLOOP LOOP : 1;
    // read-write - Disable Receive On Transmit
    eDRT DRT : 1;
    // read-write - Media Independent Interface Mode
    eMII_MODE MII_MODE : 1;
    // read-write - Promiscuous Mode
    ePROM PROM : 1;
    // read-write - Broadcast Frame Reject
    eBC_REJ BC_REJ : 1;
    // read-write - Flow Control Enable
    eFCE FCE : 1;
    uint32_t _reserved_0 : 2;
    // read-write - RMII Mode Enable
    eRMII_MODE RMII_MODE : 1;
    // read-write - Enables 10-Mbit/s mode of the RMII .
    eRMII_10T RMII_10T : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Enable Frame Padding Remove On Receive
    ePADEN PADEN : 1;
    // read-write - Terminate/Forward Pause Frames
    ePAUFWD PAUFWD : 1;
    // read-write - Terminate/Forward Received CRC
    eCRCFWD CRCFWD : 1;
    // read-write - MAC Control Frame Enable
    eCFEN CFEN : 1;
    // read-write - Maximum Frame Length
    uint32_t MAX_FL : 14;
    // read-write - Payload Length Check Disable
    eNLC NLC : 1;
    // read-only - Graceful Receive Stopped
    eGRS GRS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR() = delete;
  inline void Reset() volatile { this->value = 0x05EE0001; }
  static inline volatile RCR &ref() { return *reinterpret_cast<volatile RCR*>(0x40424084); }
};

// Transmit Control Register
union TCR {
  
  // Graceful Transmit Stop
  enum class eGTS : uint32_t {
    // Disable graceful transmit stop
    eZERO = 0,
    // Enable graceful transmit stop
    eONE = 1,
  };
  
  // Full-Duplex Enable
  enum class eFDEN : uint32_t {
    // Disable full-duplex
    eZERO = 0,
    // Enable full-duplex
    eONE = 1,
  };
  
  // Transmit Frame Control Pause
  enum class eTFC_PAUSE : uint32_t {
    // No PAUSE frame transmitted.
    eZERO = 0,
    // The MAC stops transmission of data frames after the current transmission is complete.
    eONE = 1,
  };
  
  // Source MAC Address Select On Transmit
  enum class eADDSEL : uint32_t {
    // Node MAC address programmed on PADDR1/2 registers.
    eVAL_MAC = 0,
  };
  
  // Set MAC Address On Transmit
  enum class eADDINS : uint32_t {
    // The source MAC address is not modified by the MAC.
    eZERO = 0,
    // The MAC overwrites the source MAC address with the programmed MAC address according to ADDSEL.
    eONE = 1,
  };
  
  // Forward Frame From Application With CRC
  enum class eCRCFWD : uint32_t {
    // TxBD[TC] controls whether the frame has a CRC from the application.
    eZERO = 0,
    // The transmitter does not append any CRC to transmitted frames, as it is expecting a frame with CRC from the application.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Graceful Transmit Stop
    eGTS GTS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Full-Duplex Enable
    eFDEN FDEN : 1;
    // read-write - Transmit Frame Control Pause
    eTFC_PAUSE TFC_PAUSE : 1;
    // read-only - Receive Frame Control Pause
    uint32_t RFC_PAUSE : 1;
    // read-write - Source MAC Address Select On Transmit
    eADDSEL ADDSEL : 3;
    // read-write - Set MAC Address On Transmit
    eADDINS ADDINS : 1;
    // read-write - Forward Frame From Application With CRC
    eCRCFWD CRCFWD : 1;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR &ref() { return *reinterpret_cast<volatile TCR*>(0x404240C4); }
};

// Physical Address Lower Register
union PALR {
  
  // Bit field definition.
  struct {
    // read-write - Pause Address
    uint32_t PADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PALR &ref() { return *reinterpret_cast<volatile PALR*>(0x404240E4); }
};

// Physical Address Upper Register
union PAUR {
  
  // Bit field definition.
  struct {
    // read-only - Type Field In PAUSE Frames
    uint32_t TYPE : 16;
    // read-write - Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used for exact match, and the source address field in PAUSE frames
    uint32_t PADDR2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PAUR() = delete;
  inline void Reset() volatile { this->value = 0x00008808; }
  static inline volatile PAUR &ref() { return *reinterpret_cast<volatile PAUR*>(0x404240E8); }
};

// Opcode/Pause Duration Register
union OPD {
  
  // Bit field definition.
  struct {
    // read-write - Pause Duration
    uint32_t PAUSE_DUR : 16;
    // read-only - Opcode Field In PAUSE Frames
    uint32_t OPCODE : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OPD() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile OPD &ref() { return *reinterpret_cast<volatile OPD*>(0x404240EC); }
};

// Transmit Interrupt Coalescing Register
union TXIC_0 {
  
  // Interrupt Coalescing Timer Clock Source Select
  enum class eICCS : uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };
  
  // Interrupt Coalescing Enable
  enum class eICEN : uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    // read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    // read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    // read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TXIC_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXIC_0 &ref() { return *reinterpret_cast<volatile TXIC_0*>(0x404240F0); }
};
// Transmit Interrupt Coalescing Register
union TXIC_1 {
  
  // Interrupt Coalescing Timer Clock Source Select
  enum class eICCS : uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };
  
  // Interrupt Coalescing Enable
  enum class eICEN : uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    // read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    // read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    // read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TXIC_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXIC_1 &ref() { return *reinterpret_cast<volatile TXIC_1*>(0x404240F4); }
};
// Transmit Interrupt Coalescing Register
union TXIC_2 {
  
  // Interrupt Coalescing Timer Clock Source Select
  enum class eICCS : uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };
  
  // Interrupt Coalescing Enable
  enum class eICEN : uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    // read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    // read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    // read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TXIC_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXIC_2 &ref() { return *reinterpret_cast<volatile TXIC_2*>(0x404240F8); }
};

// Receive Interrupt Coalescing Register
union RXIC_0 {
  
  // Interrupt Coalescing Timer Clock Source Select
  enum class eICCS : uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };
  
  // Interrupt Coalescing Enable
  enum class eICEN : uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    // read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    // read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    // read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIC_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIC_0 &ref() { return *reinterpret_cast<volatile RXIC_0*>(0x40424100); }
};
// Receive Interrupt Coalescing Register
union RXIC_1 {
  
  // Interrupt Coalescing Timer Clock Source Select
  enum class eICCS : uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };
  
  // Interrupt Coalescing Enable
  enum class eICEN : uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    // read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    // read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    // read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIC_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIC_1 &ref() { return *reinterpret_cast<volatile RXIC_1*>(0x40424104); }
};
// Receive Interrupt Coalescing Register
union RXIC_2 {
  
  // Interrupt Coalescing Timer Clock Source Select
  enum class eICCS : uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };
  
  // Interrupt Coalescing Enable
  enum class eICEN : uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt coalescing timer threshold
    uint32_t ICTT : 16;
    uint32_t _reserved_0 : 4;
    // read-write - Interrupt coalescing frame count threshold
    uint32_t ICFT : 8;
    uint32_t _reserved_1 : 2;
    // read-write - Interrupt Coalescing Timer Clock Source Select
    eICCS ICCS : 1;
    // read-write - Interrupt Coalescing Enable
    eICEN ICEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIC_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIC_2 &ref() { return *reinterpret_cast<volatile RXIC_2*>(0x40424108); }
};

// Descriptor Individual Upper Address Register
union IAUR {
  
  // Bit field definition.
  struct {
    // read-write - Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    uint32_t IADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IAUR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IAUR &ref() { return *reinterpret_cast<volatile IAUR*>(0x40424118); }
};

// Descriptor Individual Lower Address Register
union IALR {
  
  // Bit field definition.
  struct {
    // read-write - Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    uint32_t IADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IALR &ref() { return *reinterpret_cast<volatile IALR*>(0x4042411C); }
};

// Descriptor Group Upper Address Register
union GAUR {
  
  // Bit field definition.
  struct {
    // read-write - Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    uint32_t GADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GAUR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GAUR &ref() { return *reinterpret_cast<volatile GAUR*>(0x40424120); }
};

// Descriptor Group Lower Address Register
union GALR {
  
  // Bit field definition.
  struct {
    // read-write - Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    uint32_t GADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GALR &ref() { return *reinterpret_cast<volatile GALR*>(0x40424124); }
};

// Transmit FIFO Watermark Register
union TFWR {
  
  // Transmit FIFO Write
  enum class eTFWR : uint32_t {
    // 64 bytes written.
    eVAL64_0 = 0,
    // 64 bytes written.
    eVAL64_1 = 1,
    // 128 bytes written.
    eVAL128 = 2,
    // 192 bytes written.
    eVAL192 = 3,
    // 1984 bytes written.
    eVAL1984 = 31,
  };
  
  // Store And Forward Enable
  enum class eSTRFWD : uint32_t {
    // Reset. The transmission start threshold is programmed in TFWR[TFWR].
    eZERO = 0,
    // Enabled.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit FIFO Write
    eTFWR TFWR : 6;
    uint32_t _reserved_0 : 2;
    // read-write - Store And Forward Enable
    eSTRFWD STRFWD : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFWR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFWR &ref() { return *reinterpret_cast<volatile TFWR*>(0x40424144); }
};

// Receive Descriptor Ring 0 Start Register
union RDSR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - Pointer to the beginning of the receive buffer descriptor queue.
    uint32_t R_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDSR &ref() { return *reinterpret_cast<volatile RDSR*>(0x40424180); }
};

// Transmit Buffer Descriptor Ring 0 Start Register
union TDSR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - Pointer to the beginning of the transmit buffer descriptor queue.
    uint32_t X_DES_START : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDSR &ref() { return *reinterpret_cast<volatile TDSR*>(0x40424184); }
};

// Maximum Receive Buffer Size Register - Ring 0
union MRBR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Receive buffer size in bytes
    uint32_t R_BUF_SIZE : 10;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MRBR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MRBR &ref() { return *reinterpret_cast<volatile MRBR*>(0x40424188); }
};

// Receive FIFO Section Full Threshold
union RSFL {
  
  // Bit field definition.
  struct {
    // read-write - Value Of Receive FIFO Section Full Threshold
    uint32_t RX_SECTION_FULL : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RSFL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RSFL &ref() { return *reinterpret_cast<volatile RSFL*>(0x40424190); }
};

// Receive FIFO Section Empty Threshold
union RSEM {
  
  // Bit field definition.
  struct {
    // read-write - Value Of The Receive FIFO Section Empty Threshold
    uint32_t RX_SECTION_EMPTY : 8;
    uint32_t _reserved_0 : 8;
    // read-write - RX Status FIFO Section Empty Threshold
    uint32_t STAT_SECTION_EMPTY : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RSEM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RSEM &ref() { return *reinterpret_cast<volatile RSEM*>(0x40424194); }
};

// Receive FIFO Almost Empty Threshold
union RAEM {
  
  // Bit field definition.
  struct {
    // read-write - Value Of The Receive FIFO Almost Empty Threshold
    uint32_t RX_ALMOST_EMPTY : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RAEM() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile RAEM &ref() { return *reinterpret_cast<volatile RAEM*>(0x40424198); }
};

// Receive FIFO Almost Full Threshold
union RAFL {
  
  // Bit field definition.
  struct {
    // read-write - Value Of The Receive FIFO Almost Full Threshold
    uint32_t RX_ALMOST_FULL : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RAFL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile RAFL &ref() { return *reinterpret_cast<volatile RAFL*>(0x4042419C); }
};

// Transmit FIFO Section Empty Threshold
union TSEM {
  
  // Bit field definition.
  struct {
    // read-write - Value Of The Transmit FIFO Section Empty Threshold
    uint32_t TX_SECTION_EMPTY : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TSEM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TSEM &ref() { return *reinterpret_cast<volatile TSEM*>(0x404241A0); }
};

// Transmit FIFO Almost Empty Threshold
union TAEM {
  
  // Bit field definition.
  struct {
    // read-write - Value of Transmit FIFO Almost Empty Threshold
    uint32_t TX_ALMOST_EMPTY : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TAEM() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile TAEM &ref() { return *reinterpret_cast<volatile TAEM*>(0x404241A4); }
};

// Transmit FIFO Almost Full Threshold
union TAFL {
  
  // Bit field definition.
  struct {
    // read-write - Value Of The Transmit FIFO Almost Full Threshold
    uint32_t TX_ALMOST_FULL : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TAFL() = delete;
  inline void Reset() volatile { this->value = 0x00000008; }
  static inline volatile TAFL &ref() { return *reinterpret_cast<volatile TAFL*>(0x404241A8); }
};

// Transmit Inter-Packet Gap
union TIPG {
  
  // Bit field definition.
  struct {
    // read-write - Transmit Inter-Packet Gap
    uint32_t IPG : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIPG() = delete;
  inline void Reset() volatile { this->value = 0x0000000C; }
  static inline volatile TIPG &ref() { return *reinterpret_cast<volatile TIPG*>(0x404241AC); }
};

// Frame Truncation Length
union FTRL {
  
  // Bit field definition.
  struct {
    // read-write - Frame Truncation Length
    uint32_t TRUNC_FL : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FTRL() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile FTRL &ref() { return *reinterpret_cast<volatile FTRL*>(0x404241B0); }
};

// Transmit Accelerator Function Configuration
union TACC {
  
  // TX FIFO Shift-16
  enum class eSHIFT16 : uint32_t {
    // Disabled.
    eZERO = 0,
    // Indicates to the transmit data FIFO that the written frames contain two additional octets before the frame data. This means the actual frame begins at bit 16 of the first word written into the FIFO. This function allows putting the frame payload on a 32-bit boundary in memory, as the 14-byte Ethernet header is extended to a 16-byte header.
    eONE = 1,
  };
  
  // Enables insertion of IP header checksum.
  enum class eIPCHK : uint32_t {
    // Checksum is not inserted.
    eZERO = 0,
    // If an IP frame is transmitted, the checksum is inserted automatically. The IP header checksum field must be cleared. If a non-IP frame is transmitted the frame is not modified.
    eONE = 1,
  };
  
  // Enables insertion of protocol checksum.
  enum class ePROCHK : uint32_t {
    // Checksum not inserted.
    eZERO = 0,
    // If an IP frame with a known protocol is transmitted, the checksum is inserted automatically into the frame. The checksum field must be cleared. The other frames are not modified.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TX FIFO Shift-16
    eSHIFT16 SHIFT16 : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Enables insertion of IP header checksum.
    eIPCHK IPCHK : 1;
    // read-write - Enables insertion of protocol checksum.
    ePROCHK PROCHK : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TACC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TACC &ref() { return *reinterpret_cast<volatile TACC*>(0x404241C0); }
};

// Receive Accelerator Function Configuration
union RACC {
  
  // Enable Padding Removal For Short IP Frames
  enum class ePADREM : uint32_t {
    // Padding not removed.
    eZERO = 0,
    // Any bytes following the IP payload section of the frame are removed from the frame.
    eONE = 1,
  };
  
  // Enable Discard Of Frames With Wrong IPv4 Header Checksum
  enum class eIPDIS : uint32_t {
    // Frames with wrong IPv4 header checksum are not discarded.
    eZERO = 0,
    // If an IPv4 frame is received with a mismatching header checksum, the frame is discarded. IPv6 has no header checksum and is not affected by this setting. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
    eONE = 1,
  };
  
  // Enable Discard Of Frames With Wrong Protocol Checksum
  enum class ePRODIS : uint32_t {
    // Frames with wrong checksum are not discarded.
    eZERO = 0,
    // If a TCP/IP, UDP/IP, or ICMP/IP frame is received that has a wrong TCP, UDP, or ICMP checksum, the frame is discarded. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
    eONE = 1,
  };
  
  // Enable Discard Of Frames With MAC Layer Errors
  enum class eLINEDIS : uint32_t {
    // Frames with errors are not discarded.
    eZERO = 0,
    // Any frame received with a CRC, length, or PHY error is automatically discarded and not forwarded to the user application interface.
    eONE = 1,
  };
  
  // RX FIFO Shift-16
  enum class eSHIFT16 : uint32_t {
    // Disabled.
    eZERO = 0,
    // Instructs the MAC to write two additional bytes in front of each frame received into the RX FIFO.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable Padding Removal For Short IP Frames
    ePADREM PADREM : 1;
    // read-write - Enable Discard Of Frames With Wrong IPv4 Header Checksum
    eIPDIS IPDIS : 1;
    // read-write - Enable Discard Of Frames With Wrong Protocol Checksum
    ePRODIS PRODIS : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Enable Discard Of Frames With MAC Layer Errors
    eLINEDIS LINEDIS : 1;
    // read-write - RX FIFO Shift-16
    eSHIFT16 SHIFT16 : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RACC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RACC &ref() { return *reinterpret_cast<volatile RACC*>(0x404241C4); }
};

// Tx Packet Count Statistic Register
union RMON_T_PACKETS {
  
  // Bit field definition.
  struct {
    // read-only - Packet count
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_PACKETS &ref() { return *reinterpret_cast<volatile RMON_T_PACKETS*>(0x40424204); }
};

// Tx Broadcast Packets Statistic Register
union RMON_T_BC_PKT {
  
  // Bit field definition.
  struct {
    // read-only - Number of broadcast packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_BC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_BC_PKT &ref() { return *reinterpret_cast<volatile RMON_T_BC_PKT*>(0x40424208); }
};

// Tx Multicast Packets Statistic Register
union RMON_T_MC_PKT {
  
  // Bit field definition.
  struct {
    // read-only - Number of multicast packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_MC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_MC_PKT &ref() { return *reinterpret_cast<volatile RMON_T_MC_PKT*>(0x4042420C); }
};

// Tx Packets with CRC/Align Error Statistic Register
union RMON_T_CRC_ALIGN {
  
  // Bit field definition.
  struct {
    // read-only - Number of packets with CRC/align error
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_CRC_ALIGN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_CRC_ALIGN &ref() { return *reinterpret_cast<volatile RMON_T_CRC_ALIGN*>(0x40424210); }
};

// Tx Packets Less Than Bytes and Good CRC Statistic Register
union RMON_T_UNDERSIZE {
  
  // Bit field definition.
  struct {
    // read-only - Number of transmit packets less than 64 bytes with good CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_UNDERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_UNDERSIZE &ref() { return *reinterpret_cast<volatile RMON_T_UNDERSIZE*>(0x40424214); }
};

// Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
union RMON_T_OVERSIZE {
  
  // Bit field definition.
  struct {
    // read-only - Number of transmit packets greater than MAX_FL bytes with good CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_OVERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_OVERSIZE &ref() { return *reinterpret_cast<volatile RMON_T_OVERSIZE*>(0x40424218); }
};

// Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
union RMON_T_FRAG {
  
  // Bit field definition.
  struct {
    // read-only - Number of packets less than 64 bytes with bad CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_FRAG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_FRAG &ref() { return *reinterpret_cast<volatile RMON_T_FRAG*>(0x4042421C); }
};

// Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
union RMON_T_JAB {
  
  // Bit field definition.
  struct {
    // read-only - Number of transmit packets greater than MAX_FL bytes and bad CRC
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_JAB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_JAB &ref() { return *reinterpret_cast<volatile RMON_T_JAB*>(0x40424220); }
};

// Tx Collision Count Statistic Register
union RMON_T_COL {
  
  // Bit field definition.
  struct {
    // read-only - Number of transmit collisions
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_COL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_COL &ref() { return *reinterpret_cast<volatile RMON_T_COL*>(0x40424224); }
};

// Tx 64-Byte Packets Statistic Register
union RMON_T_P64 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 64-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P64 &ref() { return *reinterpret_cast<volatile RMON_T_P64*>(0x40424228); }
};

// Tx 65- to 127-byte Packets Statistic Register
union RMON_T_P65TO127 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 65- to 127-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P65TO127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P65TO127 &ref() { return *reinterpret_cast<volatile RMON_T_P65TO127*>(0x4042422C); }
};

// Tx 128- to 255-byte Packets Statistic Register
union RMON_T_P128TO255 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 128- to 255-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P128TO255() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P128TO255 &ref() { return *reinterpret_cast<volatile RMON_T_P128TO255*>(0x40424230); }
};

// Tx 256- to 511-byte Packets Statistic Register
union RMON_T_P256TO511 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 256- to 511-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P256TO511() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P256TO511 &ref() { return *reinterpret_cast<volatile RMON_T_P256TO511*>(0x40424234); }
};

// Tx 512- to 1023-byte Packets Statistic Register
union RMON_T_P512TO1023 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 512- to 1023-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P512TO1023() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P512TO1023 &ref() { return *reinterpret_cast<volatile RMON_T_P512TO1023*>(0x40424238); }
};

// Tx 1024- to 2047-byte Packets Statistic Register
union RMON_T_P1024TO2047 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 1024- to 2047-byte transmit packets
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P1024TO2047() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P1024TO2047 &ref() { return *reinterpret_cast<volatile RMON_T_P1024TO2047*>(0x4042423C); }
};

// Tx Packets Greater Than 2048 Bytes Statistic Register
union RMON_T_P_GTE2048 {
  
  // Bit field definition.
  struct {
    // read-only - Number of transmit packets greater than 2048 bytes
    uint32_t TXPKTS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_P_GTE2048() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_P_GTE2048 &ref() { return *reinterpret_cast<volatile RMON_T_P_GTE2048*>(0x40424240); }
};

// Tx Octets Statistic Register
union RMON_T_OCTETS {
  
  // Bit field definition.
  struct {
    // read-only - Number of transmit octets
    uint32_t TXOCTS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_T_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_T_OCTETS &ref() { return *reinterpret_cast<volatile RMON_T_OCTETS*>(0x40424244); }
};

// Frames Transmitted OK Statistic Register
union IEEE_T_FRAME_OK {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted OK
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_FRAME_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_FRAME_OK &ref() { return *reinterpret_cast<volatile IEEE_T_FRAME_OK*>(0x4042424C); }
};

// Frames Transmitted with Single Collision Statistic Register
union IEEE_T_1COL {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted with one collision
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_1COL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_1COL &ref() { return *reinterpret_cast<volatile IEEE_T_1COL*>(0x40424250); }
};

// Frames Transmitted with Multiple Collisions Statistic Register
union IEEE_T_MCOL {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted with multiple collisions
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_MCOL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_MCOL &ref() { return *reinterpret_cast<volatile IEEE_T_MCOL*>(0x40424254); }
};

// Frames Transmitted after Deferral Delay Statistic Register
union IEEE_T_DEF {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted with deferral delay
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_DEF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_DEF &ref() { return *reinterpret_cast<volatile IEEE_T_DEF*>(0x40424258); }
};

// Frames Transmitted with Late Collision Statistic Register
union IEEE_T_LCOL {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted with late collision
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_LCOL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_LCOL &ref() { return *reinterpret_cast<volatile IEEE_T_LCOL*>(0x4042425C); }
};

// Frames Transmitted with Excessive Collisions Statistic Register
union IEEE_T_EXCOL {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted with excessive collisions
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_EXCOL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_EXCOL &ref() { return *reinterpret_cast<volatile IEEE_T_EXCOL*>(0x40424260); }
};

// Frames Transmitted with Tx FIFO Underrun Statistic Register
union IEEE_T_MACERR {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted with transmit FIFO underrun
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_MACERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_MACERR &ref() { return *reinterpret_cast<volatile IEEE_T_MACERR*>(0x40424264); }
};

// Frames Transmitted with Carrier Sense Error Statistic Register
union IEEE_T_CSERR {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames transmitted with carrier sense error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_CSERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_CSERR &ref() { return *reinterpret_cast<volatile IEEE_T_CSERR*>(0x40424268); }
};

// Reserved Statistic Register
union IEEE_T_SQE {
  
  // Bit field definition.
  struct {
    // read-only - This read-only field is reserved and always has the value 0
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_SQE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_SQE &ref() { return *reinterpret_cast<volatile IEEE_T_SQE*>(0x4042426C); }
};

// Flow Control Pause Frames Transmitted Statistic Register
union IEEE_T_FDXFC {
  
  // Bit field definition.
  struct {
    // read-only - Number of flow-control pause frames transmitted
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_FDXFC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_FDXFC &ref() { return *reinterpret_cast<volatile IEEE_T_FDXFC*>(0x40424270); }
};

// Octet Count for Frames Transmitted w/o Error Statistic Register
union IEEE_T_OCTETS_OK {
  
  // Bit field definition.
  struct {
    // read-only - Octet count for frames transmitted without error Counts total octets (includes header and FCS fields).
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_T_OCTETS_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_T_OCTETS_OK &ref() { return *reinterpret_cast<volatile IEEE_T_OCTETS_OK*>(0x40424274); }
};

// Rx Packet Count Statistic Register
union RMON_R_PACKETS {
  
  // Bit field definition.
  struct {
    // read-only - Number of packets received
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_PACKETS &ref() { return *reinterpret_cast<volatile RMON_R_PACKETS*>(0x40424284); }
};

// Rx Broadcast Packets Statistic Register
union RMON_R_BC_PKT {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive broadcast packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_BC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_BC_PKT &ref() { return *reinterpret_cast<volatile RMON_R_BC_PKT*>(0x40424288); }
};

// Rx Multicast Packets Statistic Register
union RMON_R_MC_PKT {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive multicast packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_MC_PKT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_MC_PKT &ref() { return *reinterpret_cast<volatile RMON_R_MC_PKT*>(0x4042428C); }
};

// Rx Packets with CRC/Align Error Statistic Register
union RMON_R_CRC_ALIGN {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive packets with CRC or align error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_CRC_ALIGN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_CRC_ALIGN &ref() { return *reinterpret_cast<volatile RMON_R_CRC_ALIGN*>(0x40424290); }
};

// Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
union RMON_R_UNDERSIZE {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive packets with less than 64 bytes and good CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_UNDERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_UNDERSIZE &ref() { return *reinterpret_cast<volatile RMON_R_UNDERSIZE*>(0x40424294); }
};

// Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
union RMON_R_OVERSIZE {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive packets greater than MAX_FL and good CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_OVERSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_OVERSIZE &ref() { return *reinterpret_cast<volatile RMON_R_OVERSIZE*>(0x40424298); }
};

// Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
union RMON_R_FRAG {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive packets with less than 64 bytes and bad CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_FRAG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_FRAG &ref() { return *reinterpret_cast<volatile RMON_R_FRAG*>(0x4042429C); }
};

// Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
union RMON_R_JAB {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive packets greater than MAX_FL and bad CRC
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_JAB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_JAB &ref() { return *reinterpret_cast<volatile RMON_R_JAB*>(0x404242A0); }
};

// Rx 64-Byte Packets Statistic Register
union RMON_R_P64 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 64-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P64 &ref() { return *reinterpret_cast<volatile RMON_R_P64*>(0x404242A8); }
};

// Rx 65- to 127-Byte Packets Statistic Register
union RMON_R_P65TO127 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 65- to 127-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P65TO127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P65TO127 &ref() { return *reinterpret_cast<volatile RMON_R_P65TO127*>(0x404242AC); }
};

// Rx 128- to 255-Byte Packets Statistic Register
union RMON_R_P128TO255 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 128- to 255-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P128TO255() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P128TO255 &ref() { return *reinterpret_cast<volatile RMON_R_P128TO255*>(0x404242B0); }
};

// Rx 256- to 511-Byte Packets Statistic Register
union RMON_R_P256TO511 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 256- to 511-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P256TO511() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P256TO511 &ref() { return *reinterpret_cast<volatile RMON_R_P256TO511*>(0x404242B4); }
};

// Rx 512- to 1023-Byte Packets Statistic Register
union RMON_R_P512TO1023 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 512- to 1023-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P512TO1023() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P512TO1023 &ref() { return *reinterpret_cast<volatile RMON_R_P512TO1023*>(0x404242B8); }
};

// Rx 1024- to 2047-Byte Packets Statistic Register
union RMON_R_P1024TO2047 {
  
  // Bit field definition.
  struct {
    // read-only - Number of 1024- to 2047-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P1024TO2047() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P1024TO2047 &ref() { return *reinterpret_cast<volatile RMON_R_P1024TO2047*>(0x404242BC); }
};

// Rx Packets Greater than 2048 Bytes Statistic Register
union RMON_R_P_GTE2048 {
  
  // Bit field definition.
  struct {
    // read-only - Number of greater-than-2048-byte receive packets
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_P_GTE2048() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_P_GTE2048 &ref() { return *reinterpret_cast<volatile RMON_R_P_GTE2048*>(0x404242C0); }
};

// Rx Octets Statistic Register
union RMON_R_OCTETS {
  
  // Bit field definition.
  struct {
    // read-only - Number of receive octets
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMON_R_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMON_R_OCTETS &ref() { return *reinterpret_cast<volatile RMON_R_OCTETS*>(0x404242C4); }
};

// Frames not Counted Correctly Statistic Register
union IEEE_R_DROP {
  
  // Bit field definition.
  struct {
    // read-only - Frame count
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_DROP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_DROP &ref() { return *reinterpret_cast<volatile IEEE_R_DROP*>(0x404242C8); }
};

// Frames Received OK Statistic Register
union IEEE_R_FRAME_OK {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames received OK
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_FRAME_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_FRAME_OK &ref() { return *reinterpret_cast<volatile IEEE_R_FRAME_OK*>(0x404242CC); }
};

// Frames Received with CRC Error Statistic Register
union IEEE_R_CRC {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames received with CRC error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_CRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_CRC &ref() { return *reinterpret_cast<volatile IEEE_R_CRC*>(0x404242D0); }
};

// Frames Received with Alignment Error Statistic Register
union IEEE_R_ALIGN {
  
  // Bit field definition.
  struct {
    // read-only - Number of frames received with alignment error
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_ALIGN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_ALIGN &ref() { return *reinterpret_cast<volatile IEEE_R_ALIGN*>(0x404242D4); }
};

// Receive FIFO Overflow Count Statistic Register
union IEEE_R_MACERR {
  
  // Bit field definition.
  struct {
    // read-only - Receive FIFO overflow count
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_MACERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_MACERR &ref() { return *reinterpret_cast<volatile IEEE_R_MACERR*>(0x404242D8); }
};

// Flow Control Pause Frames Received Statistic Register
union IEEE_R_FDXFC {
  
  // Bit field definition.
  struct {
    // read-only - Number of flow-control pause frames received
    uint32_t COUNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_FDXFC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_FDXFC &ref() { return *reinterpret_cast<volatile IEEE_R_FDXFC*>(0x404242DC); }
};

// Octet Count for Frames Received without Error Statistic Register
union IEEE_R_OCTETS_OK {
  
  // Bit field definition.
  struct {
    // read-only - Number of octets for frames received without error
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEEE_R_OCTETS_OK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEEE_R_OCTETS_OK &ref() { return *reinterpret_cast<volatile IEEE_R_OCTETS_OK*>(0x404242E0); }
};

// Adjustable Timer Control Register
union ATCR {
  
  // Enable Timer
  enum class eEN : uint32_t {
    // The timer stops at the current value.
    eZERO = 0,
    // The timer starts incrementing.
    eONE = 1,
  };
  
  // Enable One-Shot Offset Event
  enum class eOFFEN : uint32_t {
    // Disable.
    eZERO = 0,
    // The timer can be reset to zero when the given offset time is reached (offset event). The field is cleared when the offset event is reached, so no further event occurs until the field is set again. The timer offset value must be set before setting this field.
    eONE = 1,
  };
  
  // Reset Timer On Offset Event
  enum class eOFFRST : uint32_t {
    // The timer is not affected and no action occurs, besides clearing OFFEN, when the offset is reached.
    eZERO = 0,
    // If OFFEN is set, the timer resets to zero when the offset setting is reached. The offset event does not cause a timer interrupt.
    eONE = 1,
  };
  
  // Enable Periodical Event
  enum class ePEREN : uint32_t {
    // Disable.
    eZERO = 0,
    // A period event interrupt can be generated (EIR[TS_TIMER]) and the event signal output is asserted when the timer wraps around according to the periodic setting ATPER. The timer period value must be set before setting this bit. Not all devices contain the event signal output. See the chip configuration details.
    eONE = 1,
  };
  
  // Enables event signal output external pin frc_evt_period assertion on period event
  enum class ePINPER : uint32_t {
    // Disable.
    eZERO = 0,
    // Enable.
    eONE = 1,
  };
  
  // Capture Timer Value
  enum class eCAPTURE : uint32_t {
    // No effect.
    eZERO = 0,
    // The current time is captured and can be read from the ATVR register.
    eONE = 1,
  };
  
  // Enable Timer Slave Mode
  enum class eSLAVE : uint32_t {
    // The timer is active and all configuration fields in this register are relevant.
    eZERO = 0,
    // The internal timer is disabled and the externally provided timer value is used. All other fields, except CAPTURE, in this register have no effect. CAPTURE can still be used to capture the current timer value.
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable Timer
    eEN EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Enable One-Shot Offset Event
    eOFFEN OFFEN : 1;
    // read-write - Reset Timer On Offset Event
    eOFFRST OFFRST : 1;
    // read-write - Enable Periodical Event
    ePEREN PEREN : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Enables event signal output external pin frc_evt_period assertion on period event
    ePINPER PINPER : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Reset Timer
    uint32_t RESTART : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Capture Timer Value
    eCAPTURE CAPTURE : 1;
    uint32_t _reserved_4 : 1;
    // read-write - Enable Timer Slave Mode
    eSLAVE SLAVE : 1;
    uint32_t _reserved_5 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATCR &ref() { return *reinterpret_cast<volatile ATCR*>(0x40424400); }
};

// Timer Value Register
union ATVR {
  
  // Bit field definition.
  struct {
    // read-write - A write sets the timer
    uint32_t ATIME : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATVR &ref() { return *reinterpret_cast<volatile ATVR*>(0x40424404); }
};

// Timer Offset Register
union ATOFF {
  
  // Bit field definition.
  struct {
    // read-write - Offset value for one-shot event generation
    uint32_t OFFSET : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATOFF &ref() { return *reinterpret_cast<volatile ATOFF*>(0x40424408); }
};

// Timer Period Register
union ATPER {
  
  // Bit field definition.
  struct {
    // read-write - Value for generating periodic events
    uint32_t PERIOD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATPER() = delete;
  inline void Reset() volatile { this->value = 0x3B9ACA00; }
  static inline volatile ATPER &ref() { return *reinterpret_cast<volatile ATPER*>(0x4042440C); }
};

// Timer Correction Register
union ATCOR {
  
  // Bit field definition.
  struct {
    // read-write - Correction Counter Wrap-Around Value
    uint32_t COR : 31;
    uint32_t _reserved_0 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATCOR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATCOR &ref() { return *reinterpret_cast<volatile ATCOR*>(0x40424410); }
};

// Time-Stamping Clock Period Register
union ATINC {
  
  // Bit field definition.
  struct {
    // read-write - Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
    uint32_t INC : 7;
    uint32_t _reserved_0 : 1;
    // read-write - Correction Increment Value
    uint32_t INC_CORR : 7;
    uint32_t _reserved_1 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATINC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATINC &ref() { return *reinterpret_cast<volatile ATINC*>(0x40424414); }
};

// Timestamp of Last Transmitted Frame
union ATSTMP {
  
  // Bit field definition.
  struct {
    // read-only - Timestamp of the last frame transmitted by the core that had TxBD[TS] set the ff_tx_ts_frm signal asserted from the user application
    uint32_t TIMESTAMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ATSTMP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ATSTMP &ref() { return *reinterpret_cast<volatile ATSTMP*>(0x40424418); }
};

// Timer Global Status Register
union TGSR {
  
  // Copy Of Timer Flag For Channel 0
  enum class eTF0 : uint32_t {
    // Timer Flag for Channel 0 is clear
    eZERO = 0,
    // Timer Flag for Channel 0 is set
    eONE = 1,
  };
  
  // Copy Of Timer Flag For Channel 1
  enum class eTF1 : uint32_t {
    // Timer Flag for Channel 1 is clear
    eZERO = 0,
    // Timer Flag for Channel 1 is set
    eONE = 1,
  };
  
  // Copy Of Timer Flag For Channel 2
  enum class eTF2 : uint32_t {
    // Timer Flag for Channel 2 is clear
    eZERO = 0,
    // Timer Flag for Channel 2 is set
    eONE = 1,
  };
  
  // Copy Of Timer Flag For Channel 3
  enum class eTF3 : uint32_t {
    // Timer Flag for Channel 3 is clear
    eZERO = 0,
    // Timer Flag for Channel 3 is set
    eONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Copy Of Timer Flag For Channel 0
    eTF0 TF0 : 1;
    // read-write - Copy Of Timer Flag For Channel 1
    eTF1 TF1 : 1;
    // read-write - Copy Of Timer Flag For Channel 2
    eTF2 TF2 : 1;
    // read-write - Copy Of Timer Flag For Channel 3
    eTF3 TF3 : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TGSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TGSR &ref() { return *reinterpret_cast<volatile TGSR*>(0x40424604); }
};

// Timer Control Status Register
union TCSR0 {
  
  // Timer DMA Request Enable
  enum class eTDRE : uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };
  
  // Timer Mode
  enum class eTMODE : uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_HIGH = 15,
  };
  
  // Timer Interrupt Enable
  enum class eTIE : uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };
  
  // Timer Flag
  enum class eTF : uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };
  
  // Timer Pulse Width Control
  enum class eTPWC : uint32_t {
    // Pulse width is one 1588-clock cycle.
    eVALW1 = 0,
    // Pulse width is two 1588-clock cycles.
    eVALW2 = 1,
    // Pulse width is three 1588-clock cycles.
    eVALW3 = 2,
    // Pulse width is four 1588-clock cycles.
    eVALW4 = 3,
    // Pulse width is 32 1588-clock cycles.
    eVALW32 = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Timer Mode
    eTMODE TMODE : 4;
    // read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    // read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pulse Width Control
    eTPWC TPWC : 5;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR0 &ref() { return *reinterpret_cast<volatile TCSR0*>(0x40424608); }
};

// Timer Compare Capture Register
union TCCR0 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR0 &ref() { return *reinterpret_cast<volatile TCCR0*>(0x4042460C); }
};

// Timer Control Status Register
union TCSR1 {
  
  // Timer DMA Request Enable
  enum class eTDRE : uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };
  
  // Timer Mode
  enum class eTMODE : uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_HIGH = 15,
  };
  
  // Timer Interrupt Enable
  enum class eTIE : uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };
  
  // Timer Flag
  enum class eTF : uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };
  
  // Timer Pulse Width Control
  enum class eTPWC : uint32_t {
    // Pulse width is one 1588-clock cycle.
    eVALW1 = 0,
    // Pulse width is two 1588-clock cycles.
    eVALW2 = 1,
    // Pulse width is three 1588-clock cycles.
    eVALW3 = 2,
    // Pulse width is four 1588-clock cycles.
    eVALW4 = 3,
    // Pulse width is 32 1588-clock cycles.
    eVALW32 = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Timer Mode
    eTMODE TMODE : 4;
    // read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    // read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pulse Width Control
    eTPWC TPWC : 5;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR1 &ref() { return *reinterpret_cast<volatile TCSR1*>(0x40424610); }
};

// Timer Compare Capture Register
union TCCR1 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR1 &ref() { return *reinterpret_cast<volatile TCCR1*>(0x40424614); }
};

// Timer Control Status Register
union TCSR2 {
  
  // Timer DMA Request Enable
  enum class eTDRE : uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };
  
  // Timer Mode
  enum class eTMODE : uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_HIGH = 15,
  };
  
  // Timer Interrupt Enable
  enum class eTIE : uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };
  
  // Timer Flag
  enum class eTF : uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };
  
  // Timer Pulse Width Control
  enum class eTPWC : uint32_t {
    // Pulse width is one 1588-clock cycle.
    eVALW1 = 0,
    // Pulse width is two 1588-clock cycles.
    eVALW2 = 1,
    // Pulse width is three 1588-clock cycles.
    eVALW3 = 2,
    // Pulse width is four 1588-clock cycles.
    eVALW4 = 3,
    // Pulse width is 32 1588-clock cycles.
    eVALW32 = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Timer Mode
    eTMODE TMODE : 4;
    // read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    // read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pulse Width Control
    eTPWC TPWC : 5;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR2 &ref() { return *reinterpret_cast<volatile TCSR2*>(0x40424618); }
};

// Timer Compare Capture Register
union TCCR2 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR2 &ref() { return *reinterpret_cast<volatile TCCR2*>(0x4042461C); }
};

// Timer Control Status Register
union TCSR3 {
  
  // Timer DMA Request Enable
  enum class eTDRE : uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };
  
  // Timer Mode
  enum class eTMODE : uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for 1 to 32 1588-clock cycles as specified by TPWC.
    eTMR_OUT_CMP_HIGH = 15,
  };
  
  // Timer Interrupt Enable
  enum class eTIE : uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };
  
  // Timer Flag
  enum class eTF : uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };
  
  // Timer Pulse Width Control
  enum class eTPWC : uint32_t {
    // Pulse width is one 1588-clock cycle.
    eVALW1 = 0,
    // Pulse width is two 1588-clock cycles.
    eVALW2 = 1,
    // Pulse width is three 1588-clock cycles.
    eVALW3 = 2,
    // Pulse width is four 1588-clock cycles.
    eVALW4 = 3,
    // Pulse width is 32 1588-clock cycles.
    eVALW32 = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer DMA Request Enable
    eTDRE TDRE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Timer Mode
    eTMODE TMODE : 4;
    // read-write - Timer Interrupt Enable
    eTIE TIE : 1;
    // read-write - Timer Flag
    eTF TF : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pulse Width Control
    eTPWC TPWC : 5;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR3 &ref() { return *reinterpret_cast<volatile TCSR3*>(0x40424620); }
};

// Timer Compare Capture Register
union TCCR3 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Capture Compare
    uint32_t TCC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCCR3 &ref() { return *reinterpret_cast<volatile TCCR3*>(0x40424624); }
};


} // namespace nENET