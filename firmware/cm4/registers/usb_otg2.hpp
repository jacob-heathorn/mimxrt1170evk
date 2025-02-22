#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// USB
namespace nUSB_OTG2 {


// Identification register
union ID {
  
  // Bit field definition.
  struct {
    // read-only - ID
    uint32_t ID : 6;
    uint32_t _reserved_0 : 2;
    // read-only - NID
    uint32_t NID : 6;
    uint32_t _reserved_1 : 2;
    // read-only - REVISION
    uint32_t REVISION : 8;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID() = delete;
  inline void Reset() volatile { this->value = 0xE4A1FA05; }
  static inline volatile ID &Instance() { return *reinterpret_cast<volatile ID*>(0x4042C000); }
};

// Hardware General
union HWGENERAL {
  
  // PHYW
  enum class ePHYW : uint32_t {
    // 8 bit wide data bus (Software non-programmable)
    eDATA_BUS_8 = 0,
    // 16 bit wide data bus (Software non-programmable)
    eDATA_BUS_16 = 1,
    // Reset to 8 bit wide data bus (Software programmable)
    eSW_RST_8 = 2,
    // Reset to 16 bit wide data bus (Software programmable)
    eSW_RST_16 = 3,
  };
  
  // PHYM
  enum class ePHYM : uint32_t {
    // UTMI/UMTI+
    eUTMI = 0,
    // ULPI DDR
    eULPI_DDR = 1,
    // ULPI
    eULPI = 2,
    // Serial Only
    eSERIAL = 3,
    // Software programmable - reset to UTMI/UTMI+
    eSW_RST_UTMI = 4,
    // Software programmable - reset to ULPI DDR
    eSW_RST_ULPI_DDR = 5,
    // Software programmable - reset to ULPI
    eSW_RST_ULPI = 6,
    // Software programmable - reset to Serial
    eSW_RST_SERIAL = 7,
  };
  
  // SM
  enum class eSM : uint32_t {
    // No Serial Engine, always use parallel signalling.
    eSERIAL_ENGINE_NO = 0,
    // Serial Engine present, always use serial signalling for FS/LS.
    eSERIAL_ENGINE_EN = 1,
    // Software programmable - Reset to use parallel signalling for FS/LS
    eSW_RST_PARALLEL = 2,
    // Software programmable - Reset to use serial signalling for FS/LS
    eSW_RST_SERIAL_ENG = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-only - PHYW
    ePHYW PHYW : 2;
    // read-only - PHYM
    ePHYM PHYM : 3;
    // read-only - SM
    eSM SM : 2;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HWGENERAL() = delete;
  inline void Reset() volatile { this->value = 0x00000015; }
  static inline volatile HWGENERAL &Instance() { return *reinterpret_cast<volatile HWGENERAL*>(0x4042C004); }
};

// Host Hardware Parameters
union HWHOST {
  
  // HC
  enum class eHC : uint32_t {
    // Not supported
    eHOST_OP_DIS = 0,
    // Supported
    eHOST_OP_EN = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - HC
    eHC HC : 1;
    // read-only - NPORT
    uint32_t NPORT : 3;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HWHOST() = delete;
  inline void Reset() volatile { this->value = 0x10020001; }
  static inline volatile HWHOST &Instance() { return *reinterpret_cast<volatile HWHOST*>(0x4042C008); }
};

// Device Hardware Parameters
union HWDEVICE {
  
  // DC
  enum class eDC : uint32_t {
    // Not supported
    eDEVICE_OP_DIS = 0,
    // Supported
    eDEVICE_OP_EN = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - DC
    eDC DC : 1;
    // read-only - DEVEP
    uint32_t DEVEP : 5;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HWDEVICE() = delete;
  inline void Reset() volatile { this->value = 0x00000011; }
  static inline volatile HWDEVICE &Instance() { return *reinterpret_cast<volatile HWDEVICE*>(0x4042C00C); }
};

// TX Buffer Hardware Parameters
union HWTXBUF {
  
  // Bit field definition.
  struct {
    // read-only - TXBURST
    uint32_t TXBURST : 8;
    uint32_t _reserved_0 : 8;
    // read-only - TXCHANADD
    uint32_t TXCHANADD : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HWTXBUF() = delete;
  inline void Reset() volatile { this->value = 0x80080B08; }
  static inline volatile HWTXBUF &Instance() { return *reinterpret_cast<volatile HWTXBUF*>(0x4042C010); }
};

// RX Buffer Hardware Parameters
union HWRXBUF {
  
  // Bit field definition.
  struct {
    // read-only - RXBURST
    uint32_t RXBURST : 8;
    // read-only - RXADD
    uint32_t RXADD : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HWRXBUF() = delete;
  inline void Reset() volatile { this->value = 0x00000808; }
  static inline volatile HWRXBUF &Instance() { return *reinterpret_cast<volatile HWRXBUF*>(0x4042C014); }
};

// General Purpose Timer #0 Load
union GPTIMER0LD {
  
  // Bit field definition.
  struct {
    // read-write - GPTLD
    uint32_t GPTLD : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER0LD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER0LD &Instance() { return *reinterpret_cast<volatile GPTIMER0LD*>(0x4042C080); }
};

// General Purpose Timer #0 Controller
union GPTIMER0CTRL {
  
  // GPTMODE
  enum class eGPTMODE : uint32_t {
    // One Shot Mode
    eONE_SHOT = 0,
    // Repeat Mode
    eREPEAT = 1,
  };
  
  // GPTRST
  enum class eGPTRST : uint32_t {
    // No action
    eNO_ACTION = 0,
    // Load counter value from GPTLD bits in n_GPTIMER0LD
    eLOAD_CNTR = 1,
  };
  
  // GPTRUN
  enum class eGPTRUN : uint32_t {
    // Stop counting
    eSTOP_CNTR = 0,
    // Run
    eRUN = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - GPTCNT
    uint32_t GPTCNT : 24;
    // read-write - GPTMODE
    eGPTMODE GPTMODE : 1;
    uint32_t _reserved_0 : 5;
    // read-write - GPTRST
    eGPTRST GPTRST : 1;
    // read-write - GPTRUN
    eGPTRUN GPTRUN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER0CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER0CTRL &Instance() { return *reinterpret_cast<volatile GPTIMER0CTRL*>(0x4042C084); }
};

// General Purpose Timer #1 Load
union GPTIMER1LD {
  
  // Bit field definition.
  struct {
    // read-write - GPTLD
    uint32_t GPTLD : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER1LD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER1LD &Instance() { return *reinterpret_cast<volatile GPTIMER1LD*>(0x4042C088); }
};

// General Purpose Timer #1 Controller
union GPTIMER1CTRL {
  
  // GPTMODE
  enum class eGPTMODE : uint32_t {
    // One Shot Mode
    eONE_SHOT = 0,
    // Repeat Mode
    eREPEAT = 1,
  };
  
  // GPTRST
  enum class eGPTRST : uint32_t {
    // No action
    eNO_ACTION = 0,
    // Load counter value from GPTLD bits in USB_n_GPTIMER0LD
    eLOAD_CNTR = 1,
  };
  
  // GPTRUN
  enum class eGPTRUN : uint32_t {
    // Stop counting
    eSTOP_CNTR = 0,
    // Run
    eRUN = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - GPTCNT
    uint32_t GPTCNT : 24;
    // read-write - GPTMODE
    eGPTMODE GPTMODE : 1;
    uint32_t _reserved_0 : 5;
    // read-write - GPTRST
    eGPTRST GPTRST : 1;
    // read-write - GPTRUN
    eGPTRUN GPTRUN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER1CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER1CTRL &Instance() { return *reinterpret_cast<volatile GPTIMER1CTRL*>(0x4042C08C); }
};

// System Bus Config
union SBUSCFG {
  
  // AHBBRST
  enum class eAHBBRST : uint32_t {
    // Incremental burst of unspecified length only
    eINCR_BURST = 0,
    // INCR4 burst, then single transfer
    eINCR4_BURST = 1,
    // INCR8 burst, INCR4 burst, then single transfer
    eINCR8_BURST = 2,
    // INCR16 burst, INCR8 burst, INCR4 burst, then single transfer
    eINCR16_BURST = 3,
    // INCR4 burst, then incremental burst of unspecified length
    eINCR4_UNSPEC = 5,
    // INCR8 burst, INCR4 burst, then incremental burst of unspecified length
    eINCR8_4_UNSPEC = 6,
    // INCR16 burst, INCR8 burst, INCR4 burst, then incremental burst of unspecified length
    eINCR16_8_4_UNSPEC = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHBBRST
    eAHBBRST AHBBRST : 3;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SBUSCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SBUSCFG &Instance() { return *reinterpret_cast<volatile SBUSCFG*>(0x4042C090); }
};

// Capability Registers Length
union CAPLENGTH {
  
  // Bit field definition.
  struct {
    // read-only - CAPLENGTH
    uint32_t CAPLENGTH : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CAPLENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000040; }
  static inline volatile CAPLENGTH &Instance() { return *reinterpret_cast<volatile CAPLENGTH*>(0x4042C100); }
};

// Host Controller Interface Version
union HCIVERSION {
  
  // Bit field definition.
  struct {
    // read-only - HCIVERSION
    uint32_t HCIVERSION : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HCIVERSION() = delete;
  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile HCIVERSION &Instance() { return *reinterpret_cast<volatile HCIVERSION*>(0x4042C102); }
};

// Host Controller Structural Parameters
union HCSPARAMS {
  
  // N_CC
  enum class eN_CC : uint32_t {
    // There is no internal Companion Controller and port-ownership hand-off is not supported.
    eNO_COMP_CONTROLLER = 0,
    // There are internal companion controller(s) and port-ownership hand-offs is supported.
    eCOMP_CONTROLLER = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - N_PORTS
    uint32_t N_PORTS : 4;
    // read-only - PPC
    uint32_t PPC : 1;
    uint32_t _reserved_0 : 3;
    // read-only - N_PCC
    uint32_t N_PCC : 4;
    // read-only - N_CC
    eN_CC N_CC : 4;
    // read-only - PI
    uint32_t PI : 1;
    uint32_t _reserved_1 : 3;
    // read-only - N_PTT
    uint32_t N_PTT : 4;
    // read-only - N_TT
    uint32_t N_TT : 4;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HCSPARAMS() = delete;
  inline void Reset() volatile { this->value = 0x00010011; }
  static inline volatile HCSPARAMS &Instance() { return *reinterpret_cast<volatile HCSPARAMS*>(0x4042C104); }
};

// Host Controller Capability Parameters
union HCCPARAMS {
  
  // Bit field definition.
  struct {
    // read-only - ADC
    uint32_t ADC : 1;
    // read-only - PFL
    uint32_t PFL : 1;
    // read-only - ASP
    uint32_t ASP : 1;
    uint32_t _reserved_0 : 1;
    // read-only - IST
    uint32_t IST : 4;
    // read-only - EECP
    uint32_t EECP : 8;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HCCPARAMS() = delete;
  inline void Reset() volatile { this->value = 0x00000006; }
  static inline volatile HCCPARAMS &Instance() { return *reinterpret_cast<volatile HCCPARAMS*>(0x4042C108); }
};

// Device Controller Interface Version
union DCIVERSION {
  
  // Bit field definition.
  struct {
    // read-only - DCIVERSION
    uint32_t DCIVERSION : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIVERSION() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile DCIVERSION &Instance() { return *reinterpret_cast<volatile DCIVERSION*>(0x4042C120); }
};

// Device Controller Capability Parameters
union DCCPARAMS {
  
  // Bit field definition.
  struct {
    // read-only - DEN
    uint32_t DEN : 5;
    uint32_t _reserved_0 : 2;
    // read-only - DC
    uint32_t DC : 1;
    // read-only - HC
    uint32_t HC : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCCPARAMS() = delete;
  inline void Reset() volatile { this->value = 0x00000188; }
  static inline volatile DCCPARAMS &Instance() { return *reinterpret_cast<volatile DCCPARAMS*>(0x4042C124); }
};

// USB Command Register
union USBCMD {
  
  // PSE
  enum class ePSE : uint32_t {
    // Do not process the Periodic Schedule
    eDONT_PROCESS_PT = 0,
    // Use the PERIODICLISTBASE register to access the Periodic Schedule.
    ePROCESS_PT_PERIODICLISTBASE = 1,
  };
  
  // ASE
  enum class eASE : uint32_t {
    // Do not process the Asynchronous Schedule.
    eDONT_PROCESS_ASYNC = 0,
    // Use the ASYNCLISTADDR register to access the Asynchronous Schedule.
    eACCESS_ASYNC = 1,
  };
  
  // ITC
  enum class eITC : uint32_t {
    // Immediate (no threshold)
    eIMMEDIATE = 0,
    // 1 micro-frame
    eMICROFRAME_1 = 1,
    // 2 micro-frames
    eMICROFRAME_2 = 2,
    // 4 micro-frames
    eMICROFRAME_4 = 4,
    // 8 micro-frames
    eMICROFRAME_8 = 8,
    // 16 micro-frames
    eMICROFRAME_16 = 16,
    // 32 micro-frames
    eMICROFRAME_32 = 32,
    // 64 micro-frames
    eMICROFRAME_64 = 64,
  };
  
  // Bit field definition.
  struct {
    // read-write - RS
    uint32_t RS : 1;
    // read-write - RST
    uint32_t RST : 1;
    // read-write - FS_1
    uint32_t FS_1 : 2;
    // read-write - PSE
    ePSE PSE : 1;
    // read-write - ASE
    eASE ASE : 1;
    // read-write - IAA
    uint32_t IAA : 1;
    uint32_t _reserved_0 : 1;
    // read-write - ASP
    uint32_t ASP : 2;
    uint32_t _reserved_1 : 1;
    // read-write - ASPE
    uint32_t ASPE : 1;
    uint32_t _reserved_2 : 1;
    // read-write - SUTW
    uint32_t SUTW : 1;
    // read-write - ATDTW
    uint32_t ATDTW : 1;
    // read-write - FS_2
    uint32_t FS_2 : 1;
    // read-write - ITC
    eITC ITC : 8;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USBCMD() = delete;
  inline void Reset() volatile { this->value = 0x00080000; }
  static inline volatile USBCMD &Instance() { return *reinterpret_cast<volatile USBCMD*>(0x4042C140); }
};

// USB Status Register
union USBSTS {
  
  // Bit field definition.
  struct {
    // read-write - UI
    uint32_t UI : 1;
    // read-write - UEI
    uint32_t UEI : 1;
    // read-write - PCI
    uint32_t PCI : 1;
    // read-write - FRI
    uint32_t FRI : 1;
    // read-write - SEI
    uint32_t SEI : 1;
    // read-write - AAI
    uint32_t AAI : 1;
    // read-write - URI
    uint32_t URI : 1;
    // read-write - SRI
    uint32_t SRI : 1;
    // read-write - SLI
    uint32_t SLI : 1;
    uint32_t _reserved_0 : 1;
    // read-write - ULPII
    uint32_t ULPII : 1;
    uint32_t _reserved_1 : 1;
    // read-write - HCH
    uint32_t HCH : 1;
    // read-write - RCL
    uint32_t RCL : 1;
    // read-write - PS
    uint32_t PS : 1;
    // read-write - AS
    uint32_t AS : 1;
    // read-only - NAKI
    uint32_t NAKI : 1;
    uint32_t _reserved_2 : 7;
    // read-write - TI0
    uint32_t TI0 : 1;
    // read-write - TI1
    uint32_t TI1 : 1;
    uint32_t _reserved_3 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USBSTS() = delete;
  inline void Reset() volatile { this->value = 0x00000080; }
  static inline volatile USBSTS &Instance() { return *reinterpret_cast<volatile USBSTS*>(0x4042C144); }
};

// Interrupt Enable Register
union USBINTR {
  
  // Bit field definition.
  struct {
    // read-write - UE
    uint32_t UE : 1;
    // read-write - UEE
    uint32_t UEE : 1;
    // read-write - PCE
    uint32_t PCE : 1;
    // read-write - FRE
    uint32_t FRE : 1;
    // read-write - SEE
    uint32_t SEE : 1;
    // read-write - AAE
    uint32_t AAE : 1;
    // read-write - URE
    uint32_t URE : 1;
    // read-write - SRE
    uint32_t SRE : 1;
    // read-write - SLE
    uint32_t SLE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - ULPIE
    uint32_t ULPIE : 1;
    uint32_t _reserved_1 : 5;
    // read-write - NAKE
    uint32_t NAKE : 1;
    uint32_t _reserved_2 : 1;
    // read-write - UAIE
    uint32_t UAIE : 1;
    // read-write - UPIE
    uint32_t UPIE : 1;
    uint32_t _reserved_3 : 4;
    // read-write - TIE0
    uint32_t TIE0 : 1;
    // read-write - TIE1
    uint32_t TIE1 : 1;
    uint32_t _reserved_4 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USBINTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile USBINTR &Instance() { return *reinterpret_cast<volatile USBINTR*>(0x4042C148); }
};

// USB Frame Index
union FRINDEX {
  
  // FRINDEX
  enum class eFRINDEX : uint32_t {
    // (1024) 12
    eFRINDEX_1024 = 0,
    // (512) 11
    eFRINDEX_512 = 1,
    // (256) 10
    eFRINDEX_256 = 2,
    // (128) 9
    eFRINDEX_128 = 3,
    // (64) 8
    eFRINDEX_64 = 4,
    // (32) 7
    eFRINDEX_32 = 5,
    // (16) 6
    eFRINDEX_16 = 6,
    // (8) 5
    eFRINDEX_8 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - FRINDEX
    eFRINDEX FRINDEX : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FRINDEX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FRINDEX &Instance() { return *reinterpret_cast<volatile FRINDEX*>(0x4042C14C); }
};

// Device Address
union DEVICEADDR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - USBADRA
    uint32_t USBADRA : 1;
    // read-write - USBADR
    uint32_t USBADR : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEVICEADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DEVICEADDR &Instance() { return *reinterpret_cast<volatile DEVICEADDR*>(0x4042C154); }
};

// Frame List Base Address
union PERIODICLISTBASE {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-write - BASEADR
    uint32_t BASEADR : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PERIODICLISTBASE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PERIODICLISTBASE &Instance() { return *reinterpret_cast<volatile PERIODICLISTBASE*>(0x4042C154); }
};

// Next Asynch. Address
union ASYNCLISTADDR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 5;
    // read-write - ASYBASE
    uint32_t ASYBASE : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ASYNCLISTADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASYNCLISTADDR &Instance() { return *reinterpret_cast<volatile ASYNCLISTADDR*>(0x4042C158); }
};

// Endpoint List Address
union ENDPTLISTADDR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - EPBASE
    uint32_t EPBASE : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTLISTADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTLISTADDR &Instance() { return *reinterpret_cast<volatile ENDPTLISTADDR*>(0x4042C158); }
};

// Programmable Burst Size
union BURSTSIZE {
  
  // Bit field definition.
  struct {
    // read-write - RXPBURST
    uint32_t RXPBURST : 8;
    // read-write - TXPBURST
    uint32_t TXPBURST : 9;
    uint32_t _reserved_0 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BURSTSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000808; }
  static inline volatile BURSTSIZE &Instance() { return *reinterpret_cast<volatile BURSTSIZE*>(0x4042C160); }
};

// TX FIFO Fill Tuning
union TXFILLTUNING {
  
  // Bit field definition.
  struct {
    // read-write - TXSCHOH
    uint32_t TXSCHOH : 8;
    // read-write - TXSCHHEALTH
    uint32_t TXSCHHEALTH : 5;
    uint32_t _reserved_0 : 3;
    // read-write - TXFIFOTHRES
    uint32_t TXFIFOTHRES : 6;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TXFILLTUNING() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXFILLTUNING &Instance() { return *reinterpret_cast<volatile TXFILLTUNING*>(0x4042C164); }
};

// Endpoint NAK
union ENDPTNAK {
  
  // Bit field definition.
  struct {
    // read-write - EPRN
    uint32_t EPRN : 8;
    uint32_t _reserved_0 : 8;
    // read-write - EPTN
    uint32_t EPTN : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTNAK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTNAK &Instance() { return *reinterpret_cast<volatile ENDPTNAK*>(0x4042C178); }
};

// Endpoint NAK Enable
union ENDPTNAKEN {
  
  // Bit field definition.
  struct {
    // read-write - EPRNE
    uint32_t EPRNE : 8;
    uint32_t _reserved_0 : 8;
    // read-write - EPTNE
    uint32_t EPTNE : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTNAKEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTNAKEN &Instance() { return *reinterpret_cast<volatile ENDPTNAKEN*>(0x4042C17C); }
};

// Configure Flag Register
union CONFIGFLAG {
  
  // CF
  enum class eCF : uint32_t {
    // Port routing control logic default-routes each port to an implementation dependent classic host controller.
    ePORT_ROUTING_CLASSIC_HOST = 0,
    // Port routing control logic default-routes all ports to this host controller.
    ePORT_ROUTING_HOST = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - CF
    eCF CF : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CONFIGFLAG() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile CONFIGFLAG &Instance() { return *reinterpret_cast<volatile CONFIGFLAG*>(0x4042C180); }
};

// Port Status & Control
union PORTSC1 {
  
  // OCA
  enum class eOCA : uint32_t {
    // This port does not have an over-current condition.
    eNO_OVERCURRENT = 0,
    // This port currently has an over-current condition
    eOVERCURRENT = 1,
  };
  
  // LS
  enum class eLS : uint32_t {
    // SE0
    eSE0 = 0,
    // K-state
    eK_STATE = 1,
    // J-state
    eJ_STATE = 2,
    // Undefined
    eUNDEFINED = 3,
  };
  
  // PIC
  enum class ePIC : uint32_t {
    // Port indicators are off
    ePORT_INDICATOR_OFF = 0,
    // Amber
    ePORT_IND_AMBER = 1,
    // Green
    ePORT_IND_GREEN = 2,
    // Undefined
    eUNDEFINED = 3,
  };
  
  // PTC
  enum class ePTC : uint32_t {
    // TEST_MODE_DISABLE
    eTST_MODE_DIS = 0,
    // J_STATE
    eJ_STATE = 1,
    // K_STATE
    eK_STATE = 2,
    // SE0 (host) / NAK (device)
    eSE0 = 3,
    // Packet
    ePCKT = 4,
    // FORCE_ENABLE_HS
    eHS = 5,
    // FORCE_ENABLE_FS
    eFS = 6,
    // FORCE_ENABLE_LS
    eLS = 7,
  };
  
  // PHCD
  enum class ePHCD : uint32_t {
    // Enable PHY clock
    ePHY_CLK_EN = 0,
    // Disable PHY clock
    ePHY_CLK_DIS = 1,
  };
  
  // PFSC
  enum class ePFSC : uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Forced to full speed
    eFULL_SPEED = 1,
  };
  
  // PSPD
  enum class ePSPD : uint32_t {
    // Full Speed
    eFS = 0,
    // Low Speed
    eLS = 1,
    // High Speed
    eHS = 2,
    // Undefined
    eUNDEFINED = 3,
  };
  
  // PTW
  enum class ePTW : uint32_t {
    // Select the 8-bit UTMI interface [60MHz]
    eUTMI_8 = 0,
    // Select the 16-bit UTMI interface [30MHz]
    eUTMI_16 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - CCS
    uint32_t CCS : 1;
    // read-write - CSC
    uint32_t CSC : 1;
    // read-write - PE
    uint32_t PE : 1;
    // read-write - PEC
    uint32_t PEC : 1;
    // read-only - OCA
    eOCA OCA : 1;
    // read-write - OCC
    uint32_t OCC : 1;
    // read-write - FPR
    uint32_t FPR : 1;
    // read-write - SUSP
    uint32_t SUSP : 1;
    // read-write - PR
    uint32_t PR : 1;
    // read-only - HSP
    uint32_t HSP : 1;
    // read-write - LS
    eLS LS : 2;
    // read-write - PP
    uint32_t PP : 1;
    // read-write - PO
    uint32_t PO : 1;
    // read-write - PIC
    ePIC PIC : 2;
    // read-write - PTC
    ePTC PTC : 4;
    // read-write - WKCN
    uint32_t WKCN : 1;
    // read-write - WKDC
    uint32_t WKDC : 1;
    // read-write - WKOC
    uint32_t WKOC : 1;
    // read-write - PHCD
    ePHCD PHCD : 1;
    // read-write - PFSC
    ePFSC PFSC : 1;
    // read-write - PTS_2
    uint32_t PTS_2 : 1;
    // read-write - PSPD
    ePSPD PSPD : 2;
    // read-write - PTW
    ePTW PTW : 1;
    // read-write - STS
    uint32_t STS : 1;
    // read-write - PTS_1
    uint32_t PTS_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PORTSC1() = delete;
  inline void Reset() volatile { this->value = 0x1C000004; }
  static inline volatile PORTSC1 &Instance() { return *reinterpret_cast<volatile PORTSC1*>(0x4042C184); }
};

// On-The-Go Status & control
union OTGSC {
  
  // Bit field definition.
  struct {
    // read-write - VD
    uint32_t VD : 1;
    // read-write - VC
    uint32_t VC : 1;
    uint32_t _reserved_0 : 1;
    // read-write - OT
    uint32_t OT : 1;
    // read-write - DP
    uint32_t DP : 1;
    // read-write - IDPU
    uint32_t IDPU : 1;
    uint32_t _reserved_1 : 2;
    // read-only - ID
    uint32_t ID : 1;
    // read-only - AVV
    uint32_t AVV : 1;
    // read-only - ASV
    uint32_t ASV : 1;
    // read-only - BSV
    uint32_t BSV : 1;
    // read-only - BSE
    uint32_t BSE : 1;
    // read-only - TOG_1MS
    uint32_t TOG_1MS : 1;
    // read-only - DPS
    uint32_t DPS : 1;
    uint32_t _reserved_2 : 1;
    // read-write - IDIS
    uint32_t IDIS : 1;
    // read-write - AVVIS
    uint32_t AVVIS : 1;
    // read-write - ASVIS
    uint32_t ASVIS : 1;
    // read-write - BSVIS
    uint32_t BSVIS : 1;
    // read-write - BSEIS
    uint32_t BSEIS : 1;
    // read-write - STATUS_1MS
    uint32_t STATUS_1MS : 1;
    // read-write - DPIS
    uint32_t DPIS : 1;
    uint32_t _reserved_3 : 1;
    // read-write - IDIE
    uint32_t IDIE : 1;
    // read-write - AVVIE
    uint32_t AVVIE : 1;
    // read-write - ASVIE
    uint32_t ASVIE : 1;
    // read-write - BSVIE
    uint32_t BSVIE : 1;
    // read-write - BSEIE
    uint32_t BSEIE : 1;
    // read-write - EN_1MS
    uint32_t EN_1MS : 1;
    // read-write - DPIE
    uint32_t DPIE : 1;
    uint32_t _reserved_4 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OTGSC() = delete;
  inline void Reset() volatile { this->value = 0x00202F20; }
  static inline volatile OTGSC &Instance() { return *reinterpret_cast<volatile OTGSC*>(0x4042C1A4); }
};

// USB Device Mode
union USBMODE {
  
  // CM
  enum class eCM : uint32_t {
    // Idle [Default for combination host/device]
    eIDL = 0,
    // Device Controller [Default for device only controller]
    eDEVICE_CONTR = 2,
    // Host Controller [Default for host only controller]
    eHOST_CONTR = 3,
  };
  
  // ES
  enum class eES : uint32_t {
    // Little Endian [Default]
    eLITTLE_ENDIAN = 0,
    // Big Endian
    eBIG_ENDIAN = 1,
  };
  
  // SLOM
  enum class eSLOM : uint32_t {
    // Setup Lockouts On (default);
    eLOCKOUT_ON = 0,
    // Setup Lockouts Off
    eLOCKOUT_OFF = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - CM
    eCM CM : 2;
    // read-write - ES
    eES ES : 1;
    // read-write - SLOM
    eSLOM SLOM : 1;
    // read-write - SDIS
    uint32_t SDIS : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USBMODE() = delete;
  inline void Reset() volatile { this->value = 0x00005000; }
  static inline volatile USBMODE &Instance() { return *reinterpret_cast<volatile USBMODE*>(0x4042C1A8); }
};

// Endpoint Setup Status
union ENDPTSETUPSTAT {
  
  // Bit field definition.
  struct {
    // read-write - ENDPTSETUPSTAT
    uint32_t ENDPTSETUPSTAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTSETUPSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTSETUPSTAT &Instance() { return *reinterpret_cast<volatile ENDPTSETUPSTAT*>(0x4042C1AC); }
};

// Endpoint Prime
union ENDPTPRIME {
  
  // Bit field definition.
  struct {
    // read-write - PERB
    uint32_t PERB : 8;
    uint32_t _reserved_0 : 8;
    // read-write - PETB
    uint32_t PETB : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTPRIME() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTPRIME &Instance() { return *reinterpret_cast<volatile ENDPTPRIME*>(0x4042C1B0); }
};

// Endpoint Flush
union ENDPTFLUSH {
  
  // Bit field definition.
  struct {
    // read-write - FERB
    uint32_t FERB : 8;
    uint32_t _reserved_0 : 8;
    // read-write - FETB
    uint32_t FETB : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTFLUSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTFLUSH &Instance() { return *reinterpret_cast<volatile ENDPTFLUSH*>(0x4042C1B4); }
};

// Endpoint Status
union ENDPTSTAT {
  
  // Bit field definition.
  struct {
    // read-only - ERBR
    uint32_t ERBR : 8;
    uint32_t _reserved_0 : 8;
    // read-only - ETBR
    uint32_t ETBR : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTSTAT &Instance() { return *reinterpret_cast<volatile ENDPTSTAT*>(0x4042C1B8); }
};

// Endpoint Complete
union ENDPTCOMPLETE {
  
  // Bit field definition.
  struct {
    // read-write - ERCE
    uint32_t ERCE : 8;
    uint32_t _reserved_0 : 8;
    // read-write - ETCE
    uint32_t ETCE : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCOMPLETE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCOMPLETE &Instance() { return *reinterpret_cast<volatile ENDPTCOMPLETE*>(0x4042C1BC); }
};

// Endpoint Control0
union ENDPTCTRL0 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_1 : 3;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_2 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    uint32_t _reserved_3 : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_4 : 3;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_5 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00800080; }
  static inline volatile ENDPTCTRL0 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL0*>(0x4042C1C0); }
};

// Endpoint Control 1
union ENDPTCTRL1 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    // read-write - RXD
    uint32_t RXD : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_0 : 1;
    // read-write - RXI
    uint32_t RXI : 1;
    // read-write - RXR
    uint32_t RXR : 1;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_1 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    // read-write - TXD
    uint32_t TXD : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_2 : 1;
    // read-write - TXI
    uint32_t TXI : 1;
    // read-write - TXR
    uint32_t TXR : 1;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL1 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL1*>(0x4042C1C4); }
};

// Endpoint Control 2
union ENDPTCTRL2 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    // read-write - RXD
    uint32_t RXD : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_0 : 1;
    // read-write - RXI
    uint32_t RXI : 1;
    // read-write - RXR
    uint32_t RXR : 1;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_1 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    // read-write - TXD
    uint32_t TXD : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_2 : 1;
    // read-write - TXI
    uint32_t TXI : 1;
    // read-write - TXR
    uint32_t TXR : 1;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL2 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL2*>(0x4042C1C8); }
};

// Endpoint Control 3
union ENDPTCTRL3 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    // read-write - RXD
    uint32_t RXD : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_0 : 1;
    // read-write - RXI
    uint32_t RXI : 1;
    // read-write - RXR
    uint32_t RXR : 1;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_1 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    // read-write - TXD
    uint32_t TXD : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_2 : 1;
    // read-write - TXI
    uint32_t TXI : 1;
    // read-write - TXR
    uint32_t TXR : 1;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL3 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL3*>(0x4042C1CC); }
};

// Endpoint Control 4
union ENDPTCTRL4 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    // read-write - RXD
    uint32_t RXD : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_0 : 1;
    // read-write - RXI
    uint32_t RXI : 1;
    // read-write - RXR
    uint32_t RXR : 1;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_1 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    // read-write - TXD
    uint32_t TXD : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_2 : 1;
    // read-write - TXI
    uint32_t TXI : 1;
    // read-write - TXR
    uint32_t TXR : 1;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL4 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL4*>(0x4042C1D0); }
};

// Endpoint Control 5
union ENDPTCTRL5 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    // read-write - RXD
    uint32_t RXD : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_0 : 1;
    // read-write - RXI
    uint32_t RXI : 1;
    // read-write - RXR
    uint32_t RXR : 1;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_1 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    // read-write - TXD
    uint32_t TXD : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_2 : 1;
    // read-write - TXI
    uint32_t TXI : 1;
    // read-write - TXR
    uint32_t TXR : 1;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL5 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL5*>(0x4042C1D4); }
};

// Endpoint Control 6
union ENDPTCTRL6 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    // read-write - RXD
    uint32_t RXD : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_0 : 1;
    // read-write - RXI
    uint32_t RXI : 1;
    // read-write - RXR
    uint32_t RXR : 1;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_1 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    // read-write - TXD
    uint32_t TXD : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_2 : 1;
    // read-write - TXI
    uint32_t TXI : 1;
    // read-write - TXR
    uint32_t TXR : 1;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL6 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL6*>(0x4042C1D8); }
};

// Endpoint Control 7
union ENDPTCTRL7 {
  
  // Bit field definition.
  struct {
    // read-write - RXS
    uint32_t RXS : 1;
    // read-write - RXD
    uint32_t RXD : 1;
    // read-write - RXT
    uint32_t RXT : 2;
    uint32_t _reserved_0 : 1;
    // read-write - RXI
    uint32_t RXI : 1;
    // read-write - RXR
    uint32_t RXR : 1;
    // read-write - RXE
    uint32_t RXE : 1;
    uint32_t _reserved_1 : 8;
    // read-write - TXS
    uint32_t TXS : 1;
    // read-write - TXD
    uint32_t TXD : 1;
    // read-write - TXT
    uint32_t TXT : 2;
    uint32_t _reserved_2 : 1;
    // read-write - TXI
    uint32_t TXI : 1;
    // read-write - TXR
    uint32_t TXR : 1;
    // read-write - TXE
    uint32_t TXE : 1;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL7 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL7*>(0x4042C1DC); }
};


} // namespace nUSB_OTG2