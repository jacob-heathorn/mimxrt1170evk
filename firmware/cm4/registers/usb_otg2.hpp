#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // USB
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nUSB_OTG2 {


// Identification register
//
union ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ID : 6;
    uint32_t _reserved_1 : 2;
    uint32_t NID : 6;
    uint32_t _reserved_2 : 2;
    uint32_t REVISION : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID() = delete;
  inline void Reset() volatile { this->value = 0xE4A1FA05; }
  static inline volatile ID &Instance() { return *reinterpret_cast<volatile ID*>(0x4042C000); }
};

// Hardware General
//
union HWGENERAL {
  
  // Enum definitions.
  enum class ePHYW : uint32_t {
    eDATA_BUS_8 = 0, // 8 bit wide data bus (Software non-programmable)
    eDATA_BUS_16 = 1, // 16 bit wide data bus (Software non-programmable)
    eSW_RST_8 = 2, // Reset to 8 bit wide data bus (Software programmable)
    eSW_RST_16 = 3, // Reset to 16 bit wide data bus (Software programmable)
  };
  enum class ePHYM : uint32_t {
    eUTMI = 0, // UTMI/UMTI+
    eULPI_DDR = 1, // ULPI DDR
    eULPI = 2, // ULPI
    eSERIAL = 3, // Serial Only
    eSW_RST_UTMI = 4, // Software programmable - reset to UTMI/UTMI+
    eSW_RST_ULPI_DDR = 5, // Software programmable - reset to ULPI DDR
    eSW_RST_ULPI = 6, // Software programmable - reset to ULPI
    eSW_RST_SERIAL = 7, // Software programmable - reset to Serial
  };
  enum class eSM : uint32_t {
    eSERIAL_ENGINE_NO = 0, // No Serial Engine, always use parallel signalling.
    eSERIAL_ENGINE_EN = 1, // Serial Engine present, always use serial signalling for FS/LS.
    eSW_RST_PARALLEL = 2, // Software programmable - Reset to use parallel signalling for FS/LS
    eSW_RST_SERIAL_ENG = 3, // Software programmable - Reset to use serial signalling for FS/LS
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    ePHYW PHYW : 2;
    ePHYM PHYM : 3;
    eSM SM : 2;
    uint32_t _reserved_end : 21;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HWGENERAL() = delete;
  inline void Reset() volatile { this->value = 0x00000015; }
  static inline volatile HWGENERAL &Instance() { return *reinterpret_cast<volatile HWGENERAL*>(0x4042C004); }
};

// Host Hardware Parameters
//
union HWHOST {
  
  // Enum definitions.
  enum class eHC : uint32_t {
    eHOST_OP_DIS = 0, // Not supported
    eHOST_OP_EN = 1, // Supported
  };
  
  // Bit field definition.
  struct {
    eHC HC : 1;
    uint32_t NPORT : 3;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HWHOST() = delete;
  inline void Reset() volatile { this->value = 0x10020001; }
  static inline volatile HWHOST &Instance() { return *reinterpret_cast<volatile HWHOST*>(0x4042C008); }
};

// Device Hardware Parameters
//
union HWDEVICE {
  
  // Enum definitions.
  enum class eDC : uint32_t {
    eDEVICE_OP_DIS = 0, // Not supported
    eDEVICE_OP_EN = 1, // Supported
  };
  
  // Bit field definition.
  struct {
    eDC DC : 1;
    uint32_t DEVEP : 5;
    uint32_t _reserved_end : 26;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HWDEVICE() = delete;
  inline void Reset() volatile { this->value = 0x00000011; }
  static inline volatile HWDEVICE &Instance() { return *reinterpret_cast<volatile HWDEVICE*>(0x4042C00C); }
};

// TX Buffer Hardware Parameters
//
union HWTXBUF {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TXBURST : 8;
    uint32_t _reserved_1 : 8;
    uint32_t TXCHANADD : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HWTXBUF() = delete;
  inline void Reset() volatile { this->value = 0x80080B08; }
  static inline volatile HWTXBUF &Instance() { return *reinterpret_cast<volatile HWTXBUF*>(0x4042C010); }
};

// RX Buffer Hardware Parameters
//
union HWRXBUF {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXBURST : 8;
    uint32_t RXADD : 8;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HWRXBUF() = delete;
  inline void Reset() volatile { this->value = 0x00000808; }
  static inline volatile HWRXBUF &Instance() { return *reinterpret_cast<volatile HWRXBUF*>(0x4042C014); }
};

// General Purpose Timer #0 Load
//
union GPTIMER0LD {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t GPTLD : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER0LD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER0LD &Instance() { return *reinterpret_cast<volatile GPTIMER0LD*>(0x4042C080); }
};

// General Purpose Timer #0 Controller
//
union GPTIMER0CTRL {
  
  // Enum definitions.
  enum class eGPTMODE : uint32_t {
    eONE_SHOT = 0, // One Shot Mode
    eREPEAT = 1, // Repeat Mode
  };
  enum class eGPTRST : uint32_t {
    eNO_ACTION = 0, // No action
    eLOAD_CNTR = 1, // Load counter value from GPTLD bits in n_GPTIMER0LD
  };
  enum class eGPTRUN : uint32_t {
    eSTOP_CNTR = 0, // Stop counting
    eRUN = 1, // Run
  };
  
  // Bit field definition.
  struct {
    uint32_t GPTCNT : 24;
    eGPTMODE GPTMODE : 1;
    uint32_t _reserved_2 : 5;
    eGPTRST GPTRST : 1;
    eGPTRUN GPTRUN : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER0CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER0CTRL &Instance() { return *reinterpret_cast<volatile GPTIMER0CTRL*>(0x4042C084); }
};

// General Purpose Timer #1 Load
//
union GPTIMER1LD {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t GPTLD : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER1LD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER1LD &Instance() { return *reinterpret_cast<volatile GPTIMER1LD*>(0x4042C088); }
};

// General Purpose Timer #1 Controller
//
union GPTIMER1CTRL {
  
  // Enum definitions.
  enum class eGPTMODE : uint32_t {
    eONE_SHOT = 0, // One Shot Mode
    eREPEAT = 1, // Repeat Mode
  };
  enum class eGPTRST : uint32_t {
    eNO_ACTION = 0, // No action
    eLOAD_CNTR = 1, // Load counter value from GPTLD bits in USB_n_GPTIMER0LD
  };
  enum class eGPTRUN : uint32_t {
    eSTOP_CNTR = 0, // Stop counting
    eRUN = 1, // Run
  };
  
  // Bit field definition.
  struct {
    uint32_t GPTCNT : 24;
    eGPTMODE GPTMODE : 1;
    uint32_t _reserved_2 : 5;
    eGPTRST GPTRST : 1;
    eGPTRUN GPTRUN : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPTIMER1CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPTIMER1CTRL &Instance() { return *reinterpret_cast<volatile GPTIMER1CTRL*>(0x4042C08C); }
};

// System Bus Config
//
union SBUSCFG {
  
  // Enum definitions.
  enum class eAHBBRST : uint32_t {
    eINCR_BURST = 0, // Incremental burst of unspecified length only
    eINCR4_BURST = 1, // INCR4 burst, then single transfer
    eINCR8_BURST = 2, // INCR8 burst, INCR4 burst, then single transfer
    eINCR16_BURST = 3, // INCR16 burst, INCR8 burst, INCR4 burst, then single transfer
    eINCR4_UNSPEC = 5, // INCR4 burst, then incremental burst of unspecified length
    eINCR8_4_UNSPEC = 6, // INCR8 burst, INCR4 burst, then incremental burst of unspecified length
    eINCR16_8_4_UNSPEC = 7, // INCR16 burst, INCR8 burst, INCR4 burst, then incremental burst of unspecified length
  };
  
  // Bit field definition.
  struct {
    eAHBBRST AHBBRST : 3;
    uint32_t _reserved_end : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SBUSCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SBUSCFG &Instance() { return *reinterpret_cast<volatile SBUSCFG*>(0x4042C090); }
};

// Capability Registers Length
//
union CAPLENGTH {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CAPLENGTH : 8;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CAPLENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000040; }
  static inline volatile CAPLENGTH &Instance() { return *reinterpret_cast<volatile CAPLENGTH*>(0x4042C100); }
};

// Host Controller Interface Version
//
union HCIVERSION {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t HCIVERSION : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HCIVERSION() = delete;
  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile HCIVERSION &Instance() { return *reinterpret_cast<volatile HCIVERSION*>(0x4042C102); }
};

// Host Controller Structural Parameters
//
union HCSPARAMS {
  
  // Enum definitions.
  enum class eN_CC : uint32_t {
    eNO_COMP_CONTROLLER = 0, // There is no internal Companion Controller and port-ownership hand-off is not supported.
    eCOMP_CONTROLLER = 1, // There are internal companion controller(s) and port-ownership hand-offs is supported.
  };
  
  // Bit field definition.
  struct {
    uint32_t N_PORTS : 4;
    uint32_t PPC : 1;
    uint32_t _reserved_2 : 3;
    uint32_t N_PCC : 4;
    eN_CC N_CC : 4;
    uint32_t PI : 1;
    uint32_t _reserved_5 : 3;
    uint32_t N_PTT : 4;
    uint32_t N_TT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HCSPARAMS() = delete;
  inline void Reset() volatile { this->value = 0x00010011; }
  static inline volatile HCSPARAMS &Instance() { return *reinterpret_cast<volatile HCSPARAMS*>(0x4042C104); }
};

// Host Controller Capability Parameters
//
union HCCPARAMS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADC : 1;
    uint32_t PFL : 1;
    uint32_t ASP : 1;
    uint32_t _reserved_3 : 1;
    uint32_t IST : 4;
    uint32_t EECP : 8;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  HCCPARAMS() = delete;
  inline void Reset() volatile { this->value = 0x00000006; }
  static inline volatile HCCPARAMS &Instance() { return *reinterpret_cast<volatile HCCPARAMS*>(0x4042C108); }
};

// Device Controller Interface Version
//
union DCIVERSION {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DCIVERSION : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DCIVERSION() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile DCIVERSION &Instance() { return *reinterpret_cast<volatile DCIVERSION*>(0x4042C120); }
};

// Device Controller Capability Parameters
//
union DCCPARAMS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DEN : 5;
    uint32_t _reserved_1 : 2;
    uint32_t DC : 1;
    uint32_t HC : 1;
    uint32_t _reserved_end : 23;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DCCPARAMS() = delete;
  inline void Reset() volatile { this->value = 0x00000188; }
  static inline volatile DCCPARAMS &Instance() { return *reinterpret_cast<volatile DCCPARAMS*>(0x4042C124); }
};

// USB Command Register
//
union USBCMD {
  
  // Enum definitions.
  enum class ePSE : uint32_t {
    eDONT_PROCESS_PT = 0, // Do not process the Periodic Schedule
    ePROCESS_PT_PERIODICLISTBASE = 1, // Use the PERIODICLISTBASE register to access the Periodic Schedule.
  };
  enum class eASE : uint32_t {
    eDONT_PROCESS_ASYNC = 0, // Do not process the Asynchronous Schedule.
    eACCESS_ASYNC = 1, // Use the ASYNCLISTADDR register to access the Asynchronous Schedule.
  };
  enum class eITC : uint32_t {
    eIMMEDIATE = 0, // Immediate (no threshold)
    eMICROFRAME_1 = 1, // 1 micro-frame
    eMICROFRAME_2 = 2, // 2 micro-frames
    eMICROFRAME_4 = 4, // 4 micro-frames
    eMICROFRAME_8 = 8, // 8 micro-frames
    eMICROFRAME_16 = 16, // 16 micro-frames
    eMICROFRAME_32 = 32, // 32 micro-frames
    eMICROFRAME_64 = 64, // 64 micro-frames
  };
  
  // Bit field definition.
  struct {
    uint32_t RS : 1;
    uint32_t RST : 1;
    uint32_t FS_1 : 2;
    ePSE PSE : 1;
    eASE ASE : 1;
    uint32_t IAA : 1;
    uint32_t _reserved_6 : 1;
    uint32_t ASP : 2;
    uint32_t _reserved_7 : 1;
    uint32_t ASPE : 1;
    uint32_t _reserved_8 : 1;
    uint32_t SUTW : 1;
    uint32_t ATDTW : 1;
    uint32_t FS_2 : 1;
    eITC ITC : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  USBCMD() = delete;
  inline void Reset() volatile { this->value = 0x00080000; }
  static inline volatile USBCMD &Instance() { return *reinterpret_cast<volatile USBCMD*>(0x4042C140); }
};

// USB Status Register
//
union USBSTS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t UI : 1;
    uint32_t UEI : 1;
    uint32_t PCI : 1;
    uint32_t FRI : 1;
    uint32_t SEI : 1;
    uint32_t AAI : 1;
    uint32_t URI : 1;
    uint32_t SRI : 1;
    uint32_t SLI : 1;
    uint32_t _reserved_9 : 1;
    uint32_t ULPII : 1;
    uint32_t _reserved_10 : 1;
    uint32_t HCH : 1;
    uint32_t RCL : 1;
    uint32_t PS : 1;
    uint32_t AS : 1;
    uint32_t NAKI : 1;
    uint32_t _reserved_15 : 7;
    uint32_t TI0 : 1;
    uint32_t TI1 : 1;
    uint32_t _reserved_end : 6;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  USBSTS() = delete;
  inline void Reset() volatile { this->value = 0x00000080; }
  static inline volatile USBSTS &Instance() { return *reinterpret_cast<volatile USBSTS*>(0x4042C144); }
};

// Interrupt Enable Register
//
union USBINTR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t UE : 1;
    uint32_t UEE : 1;
    uint32_t PCE : 1;
    uint32_t FRE : 1;
    uint32_t SEE : 1;
    uint32_t AAE : 1;
    uint32_t URE : 1;
    uint32_t SRE : 1;
    uint32_t SLE : 1;
    uint32_t _reserved_9 : 1;
    uint32_t ULPIE : 1;
    uint32_t _reserved_10 : 5;
    uint32_t NAKE : 1;
    uint32_t _reserved_11 : 1;
    uint32_t UAIE : 1;
    uint32_t UPIE : 1;
    uint32_t _reserved_13 : 4;
    uint32_t TIE0 : 1;
    uint32_t TIE1 : 1;
    uint32_t _reserved_end : 6;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  USBINTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile USBINTR &Instance() { return *reinterpret_cast<volatile USBINTR*>(0x4042C148); }
};

// USB Frame Index
//
union FRINDEX {
  
  // Enum definitions.
  enum class eFRINDEX : uint32_t {
    eFRINDEX_1024 = 0, // (1024) 12
    eFRINDEX_512 = 1, // (512) 11
    eFRINDEX_256 = 2, // (256) 10
    eFRINDEX_128 = 3, // (128) 9
    eFRINDEX_64 = 4, // (64) 8
    eFRINDEX_32 = 5, // (32) 7
    eFRINDEX_16 = 6, // (16) 6
    eFRINDEX_8 = 7, // (8) 5
  };
  
  // Bit field definition.
  struct {
    eFRINDEX FRINDEX : 14;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  FRINDEX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FRINDEX &Instance() { return *reinterpret_cast<volatile FRINDEX*>(0x4042C14C); }
};

// Device Address
//
union DEVICEADDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    uint32_t USBADRA : 1;
    uint32_t USBADR : 7;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DEVICEADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DEVICEADDR &Instance() { return *reinterpret_cast<volatile DEVICEADDR*>(0x4042C154); }
};

// Frame List Base Address
//
union PERIODICLISTBASE {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    uint32_t BASEADR : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PERIODICLISTBASE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PERIODICLISTBASE &Instance() { return *reinterpret_cast<volatile PERIODICLISTBASE*>(0x4042C154); }
};

// Next Asynch. Address
//
union ASYNCLISTADDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 5;
    uint32_t ASYBASE : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASYNCLISTADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASYNCLISTADDR &Instance() { return *reinterpret_cast<volatile ASYNCLISTADDR*>(0x4042C158); }
};

// Endpoint List Address
//
union ENDPTLISTADDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    uint32_t EPBASE : 21;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTLISTADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTLISTADDR &Instance() { return *reinterpret_cast<volatile ENDPTLISTADDR*>(0x4042C158); }
};

// Programmable Burst Size
//
union BURSTSIZE {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXPBURST : 8;
    uint32_t TXPBURST : 9;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  BURSTSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000808; }
  static inline volatile BURSTSIZE &Instance() { return *reinterpret_cast<volatile BURSTSIZE*>(0x4042C160); }
};

// TX FIFO Fill Tuning
//
union TXFILLTUNING {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TXSCHOH : 8;
    uint32_t TXSCHHEALTH : 5;
    uint32_t _reserved_2 : 3;
    uint32_t TXFIFOTHRES : 6;
    uint32_t _reserved_end : 10;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TXFILLTUNING() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TXFILLTUNING &Instance() { return *reinterpret_cast<volatile TXFILLTUNING*>(0x4042C164); }
};

// Endpoint NAK
//
union ENDPTNAK {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EPRN : 8;
    uint32_t _reserved_1 : 8;
    uint32_t EPTN : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTNAK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTNAK &Instance() { return *reinterpret_cast<volatile ENDPTNAK*>(0x4042C178); }
};

// Endpoint NAK Enable
//
union ENDPTNAKEN {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EPRNE : 8;
    uint32_t _reserved_1 : 8;
    uint32_t EPTNE : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTNAKEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTNAKEN &Instance() { return *reinterpret_cast<volatile ENDPTNAKEN*>(0x4042C17C); }
};

// Configure Flag Register
//
union CONFIGFLAG {
  
  // Enum definitions.
  enum class eCF : uint32_t {
    ePORT_ROUTING_CLASSIC_HOST = 0, // Port routing control logic default-routes each port to an implementation dependent classic host controller.
    ePORT_ROUTING_HOST = 1, // Port routing control logic default-routes all ports to this host controller.
  };
  
  // Bit field definition.
  struct {
    eCF CF : 1;
    uint32_t _reserved_end : 31;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CONFIGFLAG() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile CONFIGFLAG &Instance() { return *reinterpret_cast<volatile CONFIGFLAG*>(0x4042C180); }
};

// Port Status & Control
//
union PORTSC1 {
  
  // Enum definitions.
  enum class eOCA : uint32_t {
    eNO_OVERCURRENT = 0, // This port does not have an over-current condition.
    eOVERCURRENT = 1, // This port currently has an over-current condition
  };
  enum class eLS : uint32_t {
    eSE0 = 0, // SE0
    eK_STATE = 1, // K-state
    eJ_STATE = 2, // J-state
    eUNDEFINED = 3, // Undefined
  };
  enum class ePIC : uint32_t {
    ePORT_INDICATOR_OFF = 0, // Port indicators are off
    ePORT_IND_AMBER = 1, // Amber
    ePORT_IND_GREEN = 2, // Green
    eUNDEFINED = 3, // Undefined
  };
  enum class ePTC : uint32_t {
    eTST_MODE_DIS = 0, // TEST_MODE_DISABLE
    eJ_STATE = 1, // J_STATE
    eK_STATE = 2, // K_STATE
    eSE0 = 3, // SE0 (host) / NAK (device)
    ePCKT = 4, // Packet
    eHS = 5, // FORCE_ENABLE_HS
    eFS = 6, // FORCE_ENABLE_FS
    eLS = 7, // FORCE_ENABLE_LS
  };
  enum class ePHCD : uint32_t {
    ePHY_CLK_EN = 0, // Enable PHY clock
    ePHY_CLK_DIS = 1, // Disable PHY clock
  };
  enum class ePFSC : uint32_t {
    eNORMAL = 0, // Normal operation
    eFULL_SPEED = 1, // Forced to full speed
  };
  enum class ePSPD : uint32_t {
    eFS = 0, // Full Speed
    eLS = 1, // Low Speed
    eHS = 2, // High Speed
    eUNDEFINED = 3, // Undefined
  };
  enum class ePTW : uint32_t {
    eUTMI_8 = 0, // Select the 8-bit UTMI interface [60MHz]
    eUTMI_16 = 1, // Select the 16-bit UTMI interface [30MHz]
  };
  
  // Bit field definition.
  struct {
    uint32_t CCS : 1;
    uint32_t CSC : 1;
    uint32_t PE : 1;
    uint32_t PEC : 1;
    eOCA OCA : 1;
    uint32_t OCC : 1;
    uint32_t FPR : 1;
    uint32_t SUSP : 1;
    uint32_t PR : 1;
    uint32_t HSP : 1;
    eLS LS : 2;
    uint32_t PP : 1;
    uint32_t PO : 1;
    ePIC PIC : 2;
    ePTC PTC : 4;
    uint32_t WKCN : 1;
    uint32_t WKDC : 1;
    uint32_t WKOC : 1;
    ePHCD PHCD : 1;
    ePFSC PFSC : 1;
    uint32_t PTS_2 : 1;
    ePSPD PSPD : 2;
    ePTW PTW : 1;
    uint32_t STS : 1;
    uint32_t PTS_1 : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PORTSC1() = delete;
  inline void Reset() volatile { this->value = 0x1C000004; }
  static inline volatile PORTSC1 &Instance() { return *reinterpret_cast<volatile PORTSC1*>(0x4042C184); }
};

// On-The-Go Status & control
//
union OTGSC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VD : 1;
    uint32_t VC : 1;
    uint32_t _reserved_2 : 1;
    uint32_t OT : 1;
    uint32_t DP : 1;
    uint32_t IDPU : 1;
    uint32_t _reserved_5 : 2;
    uint32_t ID : 1;
    uint32_t AVV : 1;
    uint32_t ASV : 1;
    uint32_t BSV : 1;
    uint32_t BSE : 1;
    uint32_t TOG_1MS : 1;
    uint32_t DPS : 1;
    uint32_t _reserved_12 : 1;
    uint32_t IDIS : 1;
    uint32_t AVVIS : 1;
    uint32_t ASVIS : 1;
    uint32_t BSVIS : 1;
    uint32_t BSEIS : 1;
    uint32_t STATUS_1MS : 1;
    uint32_t DPIS : 1;
    uint32_t _reserved_19 : 1;
    uint32_t IDIE : 1;
    uint32_t AVVIE : 1;
    uint32_t ASVIE : 1;
    uint32_t BSVIE : 1;
    uint32_t BSEIE : 1;
    uint32_t EN_1MS : 1;
    uint32_t DPIE : 1;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  OTGSC() = delete;
  inline void Reset() volatile { this->value = 0x00202F20; }
  static inline volatile OTGSC &Instance() { return *reinterpret_cast<volatile OTGSC*>(0x4042C1A4); }
};

// USB Device Mode
//
union USBMODE {
  
  // Enum definitions.
  enum class eCM : uint32_t {
    eIDL = 0, // Idle [Default for combination host/device]
    eDEVICE_CONTR = 2, // Device Controller [Default for device only controller]
    eHOST_CONTR = 3, // Host Controller [Default for host only controller]
  };
  enum class eES : uint32_t {
    eLITTLE_ENDIAN = 0, // Little Endian [Default]
    eBIG_ENDIAN = 1, // Big Endian
  };
  enum class eSLOM : uint32_t {
    eLOCKOUT_ON = 0, // Setup Lockouts On (default);
    eLOCKOUT_OFF = 1, // Setup Lockouts Off
  };
  
  // Bit field definition.
  struct {
    eCM CM : 2;
    eES ES : 1;
    eSLOM SLOM : 1;
    uint32_t SDIS : 1;
    uint32_t _reserved_end : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  USBMODE() = delete;
  inline void Reset() volatile { this->value = 0x00005000; }
  static inline volatile USBMODE &Instance() { return *reinterpret_cast<volatile USBMODE*>(0x4042C1A8); }
};

// Endpoint Setup Status
//
union ENDPTSETUPSTAT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ENDPTSETUPSTAT : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTSETUPSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTSETUPSTAT &Instance() { return *reinterpret_cast<volatile ENDPTSETUPSTAT*>(0x4042C1AC); }
};

// Endpoint Prime
//
union ENDPTPRIME {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PERB : 8;
    uint32_t _reserved_1 : 8;
    uint32_t PETB : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTPRIME() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTPRIME &Instance() { return *reinterpret_cast<volatile ENDPTPRIME*>(0x4042C1B0); }
};

// Endpoint Flush
//
union ENDPTFLUSH {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t FERB : 8;
    uint32_t _reserved_1 : 8;
    uint32_t FETB : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTFLUSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTFLUSH &Instance() { return *reinterpret_cast<volatile ENDPTFLUSH*>(0x4042C1B4); }
};

// Endpoint Status
//
union ENDPTSTAT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ERBR : 8;
    uint32_t _reserved_1 : 8;
    uint32_t ETBR : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTSTAT &Instance() { return *reinterpret_cast<volatile ENDPTSTAT*>(0x4042C1B8); }
};

// Endpoint Complete
//
union ENDPTCOMPLETE {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ERCE : 8;
    uint32_t _reserved_1 : 8;
    uint32_t ETCE : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCOMPLETE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCOMPLETE &Instance() { return *reinterpret_cast<volatile ENDPTCOMPLETE*>(0x4042C1BC); }
};

// Endpoint Control0
//
union ENDPTCTRL0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t _reserved_1 : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_2 : 3;
    uint32_t RXE : 1;
    uint32_t _reserved_3 : 8;
    uint32_t TXS : 1;
    uint32_t _reserved_4 : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_5 : 3;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00800080; }
  static inline volatile ENDPTCTRL0 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL0*>(0x4042C1C0); }
};

// Endpoint Control 1
//
union ENDPTCTRL1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t RXD : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_3 : 1;
    uint32_t RXI : 1;
    uint32_t RXR : 1;
    uint32_t RXE : 1;
    uint32_t _reserved_6 : 8;
    uint32_t TXS : 1;
    uint32_t TXD : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_9 : 1;
    uint32_t TXI : 1;
    uint32_t TXR : 1;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL1 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL1*>(0x4042C1C4); }
};

// Endpoint Control 2
//
union ENDPTCTRL2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t RXD : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_3 : 1;
    uint32_t RXI : 1;
    uint32_t RXR : 1;
    uint32_t RXE : 1;
    uint32_t _reserved_6 : 8;
    uint32_t TXS : 1;
    uint32_t TXD : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_9 : 1;
    uint32_t TXI : 1;
    uint32_t TXR : 1;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL2 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL2*>(0x4042C1C8); }
};

// Endpoint Control 3
//
union ENDPTCTRL3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t RXD : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_3 : 1;
    uint32_t RXI : 1;
    uint32_t RXR : 1;
    uint32_t RXE : 1;
    uint32_t _reserved_6 : 8;
    uint32_t TXS : 1;
    uint32_t TXD : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_9 : 1;
    uint32_t TXI : 1;
    uint32_t TXR : 1;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL3 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL3*>(0x4042C1CC); }
};

// Endpoint Control 4
//
union ENDPTCTRL4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t RXD : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_3 : 1;
    uint32_t RXI : 1;
    uint32_t RXR : 1;
    uint32_t RXE : 1;
    uint32_t _reserved_6 : 8;
    uint32_t TXS : 1;
    uint32_t TXD : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_9 : 1;
    uint32_t TXI : 1;
    uint32_t TXR : 1;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL4 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL4*>(0x4042C1D0); }
};

// Endpoint Control 5
//
union ENDPTCTRL5 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t RXD : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_3 : 1;
    uint32_t RXI : 1;
    uint32_t RXR : 1;
    uint32_t RXE : 1;
    uint32_t _reserved_6 : 8;
    uint32_t TXS : 1;
    uint32_t TXD : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_9 : 1;
    uint32_t TXI : 1;
    uint32_t TXR : 1;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL5 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL5*>(0x4042C1D4); }
};

// Endpoint Control 6
//
union ENDPTCTRL6 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t RXD : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_3 : 1;
    uint32_t RXI : 1;
    uint32_t RXR : 1;
    uint32_t RXE : 1;
    uint32_t _reserved_6 : 8;
    uint32_t TXS : 1;
    uint32_t TXD : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_9 : 1;
    uint32_t TXI : 1;
    uint32_t TXR : 1;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL6 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL6*>(0x4042C1D8); }
};

// Endpoint Control 7
//
union ENDPTCTRL7 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RXS : 1;
    uint32_t RXD : 1;
    uint32_t RXT : 2;
    uint32_t _reserved_3 : 1;
    uint32_t RXI : 1;
    uint32_t RXR : 1;
    uint32_t RXE : 1;
    uint32_t _reserved_6 : 8;
    uint32_t TXS : 1;
    uint32_t TXD : 1;
    uint32_t TXT : 2;
    uint32_t _reserved_9 : 1;
    uint32_t TXI : 1;
    uint32_t TXR : 1;
    uint32_t TXE : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ENDPTCTRL7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENDPTCTRL7 &Instance() { return *reinterpret_cast<volatile ENDPTCTRL7*>(0x4042C1DC); }
};


} // namespace nUSB_OTG2