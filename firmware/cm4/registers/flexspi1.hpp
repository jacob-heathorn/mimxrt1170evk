#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// FlexSPI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nFLEXSPI1 {


// Module Control 0
//
union MCR0 {
  
  enum class eSWRESET : uint32_t {
    eval0 = 0, // No impact
    eval1 = 1, // Software reset
  };
  
  enum class eMDIS : uint32_t {
    eval0 = 0, // No impact
    eval1 = 1, // Module disable
  };
  
  enum class eRXCLKSRC : uint32_t {
    eval0 = 0, // Dummy Read strobe that FlexSPI generates, looped back internally
    eval1 = 1, // Dummy Read strobe that FlexSPI generates, looped back from DQS pad
    eval3 = 3, // Flash-memory-provided read strobe and input from DQS pad
  };
  
  enum class eARDFEN : uint32_t {
    eval0 = 0, // AHB read access disabled. IP bus reads IP receive FIFO. AHB Bus read access to IP receive FIFO memory space produces bus error.
    eval1 = 1, // AHB read access enabled. AHB bus reads IP receive FIFO. IP Bus read access to IP receive FIFO memory space returns data zero and causes no bus error.
  };
  
  enum class eATDFEN : uint32_t {
    eval0 = 0, // AHB write access disabled. IP bus writes to IP transmit FIFO. AHB bus write access to IP transmit FIFO memory space produces bus error.
    eval1 = 1, // AHB write access enabled. AHB bus writes to IP transmit FIFO. IP Bus write access to IP transmit FIFO memory space is ignored and causes no bus error.
  };
  
  enum class eSERCLKDIV : uint32_t {
    eval0 = 0, // Divided by 1
    eval1 = 1, // Divided by 2
    eval2 = 2, // Divided by 3
    eval3 = 3, // Divided by 4
    eval4 = 4, // Divided by 5
    eval5 = 5, // Divided by 6
    eval6 = 6, // Divided by 7
    eval7 = 7, // Divided by 8
  };
  
  enum class eHSEN : uint32_t {
    eval0 = 0, // Disable
    eval1 = 1, // Enable
  };
  
  enum class eDOZEEN : uint32_t {
    eval0 = 0, // Disable
    eval1 = 1, // Enable
  };
  
  enum class eCOMBINATIONEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSCKFREERUNEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - Software Reset
    eSWRESET SWRESET : 1;
    /// read-write - Module Disable
    eMDIS MDIS : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Sample Clock Source for Flash Reading
    eRXCLKSRC RXCLKSRC : 2;
    /// read-write - AHB Read Access to IP Receive FIFO Enable
    eARDFEN ARDFEN : 1;
    /// read-write - AHB Write Access to IP Transmit FIFO Enable
    eATDFEN ATDFEN : 1;
    /// read-write - Serial Root Clock Divider
    eSERCLKDIV SERCLKDIV : 3;
    /// read-write - Half Speed Serial Flash Memory Access Enable
    eHSEN HSEN : 1;
    /// read-write - Doze Mode Enable
    eDOZEEN DOZEEN : 1;
    /// read-write - Combination Mode Enable
    eCOMBINATIONEN COMBINATIONEN : 1;
    /// read-write - SCLK Free-running Enable
    eSCKFREERUNEN SCKFREERUNEN : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Timeout Wait Cycle for IP Command Grant
    uint32_t IPGRANTWAIT : 8;
    /// read-write - Timeouts Wait Cycle for AHB command Grant
    uint32_t AHBGRANTWAIT : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR0() = delete;
  inline void Reset() volatile { this->value = 0xFFFF80C2; }
  static inline volatile MCR0 &Instance() { return *reinterpret_cast<volatile MCR0*>(0x400CC000); }
};

// Module Control 1
//
union MCR1 {
  
  // Bit field definition.
  struct {
    /// read-write - AHB Bus Wait
    uint32_t AHBBUSWAIT : 16;
    /// read-write - Command Sequence Wait
    uint32_t SEQWAIT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR1() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MCR1 &Instance() { return *reinterpret_cast<volatile MCR1*>(0x400CC004); }
};

// Module Control 2
//
union MCR2 {
  
  enum class eCLRAHBBUFOPT : uint32_t {
    eval0 = 0, // Not cleared automatically
    eval1 = 1, // Cleared automatically
  };
  
  enum class eSAMEDEVICEEN : uint32_t {
    eindividual_parallel = 0, // In Individual mode, FLSHA1CRx and FLSHA2CRx, FLSHB1CRx and FLSHB2CRx settings are applied to Flash A1, A2, B1, B2 separately. In Parallel mode, FLSHA1CRx register setting is applied to Flash A1 and B1, FLSHA2CRx register setting is applied to Flash A2 and B2. FLSHB1CRx and FLSHB2CRx register settings are ignored.
    eENABLE = 1, // FLSHA1CR0, FLSHA1CR1, and FLSHA1CR2 register settings are applied to Flash A1, A2, B1, B2. FLSHA2CRx, FLSHB1CRx, and FLSHB2CRx settings are ignored.
  };
  
  enum class eSCKBDIFFOPT : uint32_t {
    eval1 = 0, // Use B_SCLK pad as port B SCLK clock output. Port B flash memory access is available.
    eval0 = 1, // Use B_SCLK pad as port A SCLK inverted clock output (Differential clock to A_SCLK). Port B flash memory access is not available.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    /// read-write - Clear AHB Buffer
    eCLRAHBBUFOPT CLRAHBBUFOPT : 1;
    uint32_t _reserved_1 : 3;
    /// read-write - Same Device Enable
    eSAMEDEVICEEN SAMEDEVICEEN : 1;
    uint32_t _reserved_2 : 3;
    /// read-write - SCLK Port B Differential Output
    eSCKBDIFFOPT SCKBDIFFOPT : 1;
    uint32_t _reserved_3 : 4;
    /// read-write - Resume Wait Duration
    uint32_t RESUMEWAIT : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR2() = delete;
  inline void Reset() volatile { this->value = 0x200081F7; }
  static inline volatile MCR2 &Instance() { return *reinterpret_cast<volatile MCR2*>(0x400CC008); }
};

// AHB Bus Control
//
union AHBCR {
  
  enum class eAPAREN : uint32_t {
    eindividual = 0, // Flash is accessed in Individual mode.
    eENABLE = 1, // Flash is accessed in Parallel mode.
  };
  
  enum class eCLRAHBRXBUF : uint32_t {
    eval0 = 0, // No impact.
    eval1 = 1, // Enable clear operation.
  };
  
  enum class eCACHABLEEN : uint32_t {
    eval0 = 0, // Disabled. When an AHB bus cacheable read access occurs, FlexSPI does not check whether it hit the AHB transmit buffer.
    eval1 = 1, // Enabled. When an AHB bus cacheable read access occurs, FlexSPI first checks whether the access hit the AHB transmit buffer.
  };
  
  enum class eBUFFERABLEEN : uint32_t {
    eval0 = 0, // Disabled. For all AHB write accesses (bufferable or nonbufferable), FlexSPI returns AHB Bus Ready after transmitting all data and finishing command.
    eval1 = 1, // Enabled. For AHB bufferable write access, FlexSPI returns AHB Bus Ready when the arbitrator grants the AHB command. FlexSPI does not wait for the AHB command to finish.
  };
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disable
    evalue1 = 1, // Enable
  };
  
  enum class eREADADDROPT : uint32_t {
    eval0 = 0, // AHB read burst start address alignment is limited when flash memory is accessed in parallel mode or flash is word-addressable.
    eval1 = 1, // AHB read burst start address alignment is not limited. FlexSPI fetches more data than the AHB burst requires for address alignment.
  };
  
  enum class eREADSZALIGN : uint32_t {
    eval0 = 0, // Register settings such as PREFETCH_EN and OTFAD_EN determine AHB read size.
    eval1 = 1, // AHB read size to up size to 8 bytes aligned, no prefetching
  };
  
  enum class eECCEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSPLITEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSPLIT_LIMIT : uint32_t {
    eval0 = 0, // 8 bytes
    eval1 = 1, // 16 bytes
    eval2 = 2, // 32 bytes
    eval3 = 3, // 64 bytes
  };
  
  enum class eKEYECCEN : uint32_t {
    eval0 = 0, // Disable
    eval1 = 1, // Enable
  };
  
  enum class eECCSINGLEERRCLR : uint32_t {
    eval0 = 0, // No function
    eval1 = 1, // Clear
  };
  
  enum class eECCMULTIERRCLR : uint32_t {
    eval0 = 0, // No function
    eval1 = 1, // Clear
  };
  
  enum class eHMSTRIDREMAP : uint32_t {
    eval0 = 0, // Disable
    eval1 = 1, // Enable
  };
  
  enum class eECCSWAPEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Parallel Mode Enable
    eAPAREN APAREN : 1;
    /// read-write - Clear AHB Receive Buffer
    eCLRAHBRXBUF CLRAHBRXBUF : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Cacheable Read Access Enable
    eCACHABLEEN CACHABLEEN : 1;
    /// read-write - Bufferable Write Access Enable
    eBUFFERABLEEN BUFFERABLEEN : 1;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
    /// read-write - AHB Read Address Option
    eREADADDROPT READADDROPT : 1;
    uint32_t _reserved_1 : 3;
    /// read-write - AHB Read Size Alignment
    eREADSZALIGN READSZALIGN : 1;
    /// read-write - AHB Read ECC Enable
    eECCEN ECCEN : 1;
    /// read-write - AHB Transaction Split Enable
    eSPLITEN SPLITEN : 1;
    /// read-write - AHB Split Limit Size
    eSPLIT_LIMIT SPLIT_LIMIT : 2;
    /// read-write - OTFAD Key Blob ECC Enable
    eKEYECCEN KEYECCEN : 1;
    /// read-write - AHB ECC Single-Bit Error Clear
    eECCSINGLEERRCLR ECCSINGLEERRCLR : 1;
    /// read-write - AHB ECC Multibit Error Clear
    eECCMULTIERRCLR ECCMULTIERRCLR : 1;
    /// read-write - AHB Controller ID Remapping Enable
    eHMSTRIDREMAP HMSTRIDREMAP : 1;
    /// read-write - ECC Read Data Swap Enable
    eECCSWAPEN ECCSWAPEN : 1;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBCR() = delete;
  inline void Reset() volatile { this->value = 0x00000018; }
  static inline volatile AHBCR &Instance() { return *reinterpret_cast<volatile AHBCR*>(0x400CC00C); }
};

// Interrupt Enable
//
union INTEN {
  
  enum class eIPCMDDONEEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eIPCMDGEEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eAHBCMDGEEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eIPCMDERREN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eAHBCMDERREN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eIPRXWAEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eIPTXWEEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eSCKSTOPBYRDEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eSCKSTOPBYWREN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eAHBBUSERROREN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eSEQTIMEOUTEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eKEYDONEEN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eKEYERROREN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eECCMULTIERREN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  enum class eECCSINGLEERREN : uint32_t {
    evalue0 = 0, // Disable interrupt or no impact
    evalue1 = 1, // Enable interrupt
  };
  
  // Bit field definition.
  struct {
    /// read-write - IP-Triggered Command Sequences Execution Finished Interrupt Enable
    eIPCMDDONEEN IPCMDDONEEN : 1;
    /// read-write - IP-Triggered Command Sequences Grant Timeout Interrupt Enable
    eIPCMDGEEN IPCMDGEEN : 1;
    /// read-write - AHB-Triggered Command Sequences Grant Timeout Interrupt Enable.
    eAHBCMDGEEN AHBCMDGEEN : 1;
    /// read-write - IP-Triggered Command Sequences Error Detected Interrupt Enable
    eIPCMDERREN IPCMDERREN : 1;
    /// read-write - AHB-Triggered Command Sequences Error Detected Interrupt Enable
    eAHBCMDERREN AHBCMDERREN : 1;
    /// read-write - IP Receive FIFO Watermark Available Interrupt Enable
    eIPRXWAEN IPRXWAEN : 1;
    /// read-write - IP Transmit FIFO Watermark Empty Interrupt Enable
    eIPTXWEEN IPTXWEEN : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - SCLK Stopped By Read Interrupt Enable
    eSCKSTOPBYRDEN SCKSTOPBYRDEN : 1;
    /// read-write - SCLK Stopped By Write Interrupt Enable
    eSCKSTOPBYWREN SCKSTOPBYWREN : 1;
    /// read-write - AHB Bus Error Interrupt Enable
    eAHBBUSERROREN AHBBUSERROREN : 1;
    /// read-write - Sequence execution Timeout Interrupt Enable
    eSEQTIMEOUTEN SEQTIMEOUTEN : 1;
    /// read-write - OTFAD Key Blob Processing Done Interrupt Enable
    eKEYDONEEN KEYDONEEN : 1;
    /// read-write - OTFAD Key Blob Processing Error Interrupt Enable
    eKEYERROREN KEYERROREN : 1;
    /// read-write - ECC Multibit Error Interrupt Enable
    eECCMULTIERREN ECCMULTIERREN : 1;
    /// read-write - ECC Single-Bit Error Interrupt Enable
    eECCSINGLEERREN ECCSINGLEERREN : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTEN &Instance() { return *reinterpret_cast<volatile INTEN*>(0x400CC010); }
};

// Interrupt
//
union INTR {
  
  enum class eIPCMDDONE : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eIPCMDGE : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eAHBCMDGE : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eIPCMDERR : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eAHBCMDERR : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eIPRXWA : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eIPTXWE : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eSCKSTOPBYRD : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eSCKSTOPBYWR : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eAHBBUSERROR : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eSEQTIMEOUT : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eKEYERROR : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eECCMULTIERR : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  enum class eECCSINGLEERR : uint32_t {
    eNO_INTERRUPT = 0, // Interrupt condition has not occurred
    eINTERRUPT = 1, // Interrupt condition has occurred
  };
  
  // Bit field definition.
  struct {
    /// read-write - IP-Triggered Command Sequences Execution Finished
    eIPCMDDONE IPCMDDONE : 1;
    /// read-write - IP-Triggered Command Sequences Grant Timeout
    eIPCMDGE IPCMDGE : 1;
    /// read-write - AHB-Triggered Command Sequences Grant Timeout
    eAHBCMDGE AHBCMDGE : 1;
    /// read-write - IP-Triggered Command Sequences Error
    eIPCMDERR IPCMDERR : 1;
    /// read-write - AHB-Triggered Command Sequences Error
    eAHBCMDERR AHBCMDERR : 1;
    /// read-write - IP Receive FIFO Watermark Available
    eIPRXWA IPRXWA : 1;
    /// read-write - IP Transmit FIFO Watermark Empty
    eIPTXWE IPTXWE : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - SCLK Stopped Due To Full Receive FIFO
    eSCKSTOPBYRD SCKSTOPBYRD : 1;
    /// read-write - SCLK Stopped Due To Empty Transmit FIFO
    eSCKSTOPBYWR SCKSTOPBYWR : 1;
    /// read-write - AHB Bus Error
    eAHBBUSERROR AHBBUSERROR : 1;
    /// read-write - Sequence Execution Timeout
    eSEQTIMEOUT SEQTIMEOUT : 1;
    /// read-write - OTFAD key blob processing done interrupt.
    uint32_t KEYDONE : 1;
    /// read-only - OTFAD Key Blob Processing Error
    eKEYERROR KEYERROR : 1;
    /// read-write - ECC Multibit Error
    eECCMULTIERR ECCMULTIERR : 1;
    /// read-write - ECC Single-Bit Error
    eECCSINGLEERR ECCSINGLEERR : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTR &Instance() { return *reinterpret_cast<volatile INTR*>(0x400CC014); }
};

// LUT Key
//
union LUTKEY {
  
  // Bit field definition.
  struct {
    /// read-write - LUT Key
    uint32_t KEY : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUTKEY() = delete;
  inline void Reset() volatile { this->value = 0x5AF05AF0; }
  static inline volatile LUTKEY &Instance() { return *reinterpret_cast<volatile LUTKEY*>(0x400CC018); }
};

// LUT Control
//
union LUTCR {
  
  enum class eLOCK : uint32_t {
    evalue0 = 0, // LUT is unlocked (LUTCR[UNLOCK] must be 1)
    evalue1 = 1, // LUT is locked and cannot be written
  };
  
  enum class eUNLOCK : uint32_t {
    evalue0 = 0, // LUT is locked (LUTCR[LOCK] must be 1)
    evalue1 = 1, // LUT is unlocked and can be written
  };
  
  // Bit field definition.
  struct {
    /// read-write - Lock LUT
    eLOCK LOCK : 1;
    /// read-write - Unlock LUT
    eUNLOCK UNLOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUTCR() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile LUTCR &Instance() { return *reinterpret_cast<volatile LUTCR*>(0x400CC01C); }
};

// AHB Receive Buffer 0 Control 0
//
union AHBRXBUF0CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF0CR0() = delete;
  inline void Reset() volatile { this->value = 0x80000040; }
  static inline volatile AHBRXBUF0CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF0CR0*>(0x400CC020); }
};

// AHB Receive Buffer 1 Control 0
//
union AHBRXBUF1CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF1CR0() = delete;
  inline void Reset() volatile { this->value = 0x80010040; }
  static inline volatile AHBRXBUF1CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF1CR0*>(0x400CC024); }
};

// AHB Receive Buffer 2 Control 0
//
union AHBRXBUF2CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF2CR0() = delete;
  inline void Reset() volatile { this->value = 0x80020040; }
  static inline volatile AHBRXBUF2CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF2CR0*>(0x400CC028); }
};

// AHB Receive Buffer 3 Control 0
//
union AHBRXBUF3CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF3CR0() = delete;
  inline void Reset() volatile { this->value = 0x80030040; }
  static inline volatile AHBRXBUF3CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF3CR0*>(0x400CC02C); }
};

// AHB Receive Buffer 4 Control 0
//
union AHBRXBUF4CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF4CR0() = delete;
  inline void Reset() volatile { this->value = 0x80040040; }
  static inline volatile AHBRXBUF4CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF4CR0*>(0x400CC030); }
};

// AHB Receive Buffer 5 Control 0
//
union AHBRXBUF5CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF5CR0() = delete;
  inline void Reset() volatile { this->value = 0x80050040; }
  static inline volatile AHBRXBUF5CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF5CR0*>(0x400CC034); }
};

// AHB Receive Buffer 6 Control 0
//
union AHBRXBUF6CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF6CR0() = delete;
  inline void Reset() volatile { this->value = 0x80060040; }
  static inline volatile AHBRXBUF6CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF6CR0*>(0x400CC038); }
};

// AHB Receive Buffer 7 Control 0
//
union AHBRXBUF7CR0 {
  
  enum class ePREFETCHEN : uint32_t {
    evalue0 = 0, // Disabled
    evalue1 = 1, // Enabled when is enabled.
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    /// read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    /// read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBRXBUF7CR0() = delete;
  inline void Reset() volatile { this->value = 0x80070040; }
  static inline volatile AHBRXBUF7CR0 &Instance() { return *reinterpret_cast<volatile AHBRXBUF7CR0*>(0x400CC03C); }
};

// Flash Control 0
//
union FLSHA1CR0 {
  
  enum class eSPLITWREN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSPLITRDEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    /// read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    /// read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHA1CR0() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHA1CR0 &Instance() { return *reinterpret_cast<volatile FLSHA1CR0*>(0x400CC060); }
};

// Flash Control 0
//
union FLSHA2CR0 {
  
  enum class eSPLITWREN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSPLITRDEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    /// read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    /// read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHA2CR0() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHA2CR0 &Instance() { return *reinterpret_cast<volatile FLSHA2CR0*>(0x400CC064); }
};

// Flash Control 0
//
union FLSHB1CR0 {
  
  enum class eSPLITWREN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSPLITRDEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    /// read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    /// read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHB1CR0() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHB1CR0 &Instance() { return *reinterpret_cast<volatile FLSHB1CR0*>(0x400CC068); }
};

// Flash Control 0
//
union FLSHB2CR0 {
  
  enum class eSPLITWREN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSPLITRDEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    /// read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    /// read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHB2CR0() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHB2CR0 &Instance() { return *reinterpret_cast<volatile FLSHB2CR0*>(0x400CC06C); }
};

// Flash Control 1
//
union FLSHCR1A1 {
  
  enum class eWA : uint32_t {
    evalue0 = 0, // Byte-addressable
    evalue1 = 1, // Word-addressable
  };
  
  enum class eCSINTERVALUNIT : uint32_t {
    eval0 = 0, // 1 serial clock cycle
    eval1 = 1, // 256 serial clock cycles
  };
  
  // Bit field definition.
  struct {
    /// read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    /// read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    /// read-write - Word-Addressable
    eWA WA : 1;
    /// read-write - Column Address Size
    uint32_t CAS : 4;
    /// read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    /// read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR1A1() = delete;
  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1A1 &Instance() { return *reinterpret_cast<volatile FLSHCR1A1*>(0x400CC070); }
};
// Flash Control 1
//
union FLSHCR1A2 {
  
  enum class eWA : uint32_t {
    evalue0 = 0, // Byte-addressable
    evalue1 = 1, // Word-addressable
  };
  
  enum class eCSINTERVALUNIT : uint32_t {
    eval0 = 0, // 1 serial clock cycle
    eval1 = 1, // 256 serial clock cycles
  };
  
  // Bit field definition.
  struct {
    /// read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    /// read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    /// read-write - Word-Addressable
    eWA WA : 1;
    /// read-write - Column Address Size
    uint32_t CAS : 4;
    /// read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    /// read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR1A2() = delete;
  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1A2 &Instance() { return *reinterpret_cast<volatile FLSHCR1A2*>(0x400CC074); }
};
// Flash Control 1
//
union FLSHCR1B1 {
  
  enum class eWA : uint32_t {
    evalue0 = 0, // Byte-addressable
    evalue1 = 1, // Word-addressable
  };
  
  enum class eCSINTERVALUNIT : uint32_t {
    eval0 = 0, // 1 serial clock cycle
    eval1 = 1, // 256 serial clock cycles
  };
  
  // Bit field definition.
  struct {
    /// read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    /// read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    /// read-write - Word-Addressable
    eWA WA : 1;
    /// read-write - Column Address Size
    uint32_t CAS : 4;
    /// read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    /// read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR1B1() = delete;
  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1B1 &Instance() { return *reinterpret_cast<volatile FLSHCR1B1*>(0x400CC078); }
};
// Flash Control 1
//
union FLSHCR1B2 {
  
  enum class eWA : uint32_t {
    evalue0 = 0, // Byte-addressable
    evalue1 = 1, // Word-addressable
  };
  
  enum class eCSINTERVALUNIT : uint32_t {
    eval0 = 0, // 1 serial clock cycle
    eval1 = 1, // 256 serial clock cycles
  };
  
  // Bit field definition.
  struct {
    /// read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    /// read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    /// read-write - Word-Addressable
    eWA WA : 1;
    /// read-write - Column Address Size
    uint32_t CAS : 4;
    /// read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    /// read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR1B2() = delete;
  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1B2 &Instance() { return *reinterpret_cast<volatile FLSHCR1B2*>(0x400CC07C); }
};

// Flash Control 2
//
union FLSHCR2A1 {
  
  enum class eAWRWAITUNIT : uint32_t {
    eval0 = 0, // 2
    eval1 = 1, // 8
    eval2 = 2, // 32
    eval3 = 3, // 128
    eval4 = 4, // 512
    eval5 = 5, // 2048
    eval6 = 6, // 8192
    eval7 = 7, // 32768
  };
  
  // Bit field definition.
  struct {
    /// read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    /// read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    /// read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    /// read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    /// read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    /// read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    /// read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR2A1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2A1 &Instance() { return *reinterpret_cast<volatile FLSHCR2A1*>(0x400CC080); }
};
// Flash Control 2
//
union FLSHCR2A2 {
  
  enum class eAWRWAITUNIT : uint32_t {
    eval0 = 0, // 2
    eval1 = 1, // 8
    eval2 = 2, // 32
    eval3 = 3, // 128
    eval4 = 4, // 512
    eval5 = 5, // 2048
    eval6 = 6, // 8192
    eval7 = 7, // 32768
  };
  
  // Bit field definition.
  struct {
    /// read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    /// read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    /// read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    /// read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    /// read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    /// read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    /// read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR2A2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2A2 &Instance() { return *reinterpret_cast<volatile FLSHCR2A2*>(0x400CC084); }
};
// Flash Control 2
//
union FLSHCR2B1 {
  
  enum class eAWRWAITUNIT : uint32_t {
    eval0 = 0, // 2
    eval1 = 1, // 8
    eval2 = 2, // 32
    eval3 = 3, // 128
    eval4 = 4, // 512
    eval5 = 5, // 2048
    eval6 = 6, // 8192
    eval7 = 7, // 32768
  };
  
  // Bit field definition.
  struct {
    /// read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    /// read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    /// read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    /// read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    /// read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    /// read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    /// read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR2B1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2B1 &Instance() { return *reinterpret_cast<volatile FLSHCR2B1*>(0x400CC088); }
};
// Flash Control 2
//
union FLSHCR2B2 {
  
  enum class eAWRWAITUNIT : uint32_t {
    eval0 = 0, // 2
    eval1 = 1, // 8
    eval2 = 2, // 32
    eval3 = 3, // 128
    eval4 = 4, // 512
    eval5 = 5, // 2048
    eval6 = 6, // 8192
    eval7 = 7, // 32768
  };
  
  // Bit field definition.
  struct {
    /// read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    /// read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    /// read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    /// read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    /// read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    /// read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    /// read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR2B2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2B2 &Instance() { return *reinterpret_cast<volatile FLSHCR2B2*>(0x400CC08C); }
};

// Flash Control 4
//
union FLSHCR4 {
  
  enum class eWMOPT1 : uint32_t {
    eDISABLE = 0, // When writing to an external device, DQS pin is used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst start address alignment is not limited.
    eENABLE = 1, // When writing to an external device, DQS pin is not used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst start address alignment is limited.
  };
  
  enum class eWMOPT2 : uint32_t {
    eval0 = 0, // When writing to an external device, DQS pin is used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst length is not limited.
    eval1 = 1, // When writing to an external device, DQS pin is not used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst length is limited. The minimum write burst length should be 4.
  };
  
  enum class eWMENA : uint32_t {
    eval0 = 0, // Disabled. When writing to external device, DQS(RWDS) pin is not driven.
    eval1 = 1, // Enabled. When writing to external device, FlexSPI drives DQS(RWDS) pin as write mask output.
  };
  
  enum class eWMENB : uint32_t {
    eval0 = 0, // Disabled. When writing to external device, DQS(RWDS) pin is not driven.
    eval1 = 1, // Enabled. When writing to external device, FlexSPI drives DQS(RWDS) pin as write mask output.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Write Mask Option 1
    eWMOPT1 WMOPT1 : 1;
    /// read-write - Write Mask Option 2
    eWMOPT2 WMOPT2 : 1;
    /// read-write - Write Mask Enable for Port A
    eWMENA WMENA : 1;
    /// read-write - Write Mask Enable for Port B
    eWMENB WMENB : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLSHCR4() = delete;
  inline void Reset() volatile { this->value = 0x000000C3; }
  static inline volatile FLSHCR4 &Instance() { return *reinterpret_cast<volatile FLSHCR4*>(0x400CC094); }
};

// IP Control 0
//
union IPCR0 {
  
  // Bit field definition.
  struct {
    /// read-write - Serial Flash Address
    uint32_t SFAR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR0 &Instance() { return *reinterpret_cast<volatile IPCR0*>(0x400CC0A0); }
};

// IP Control 1
//
union IPCR1 {
  
  enum class eIPAREN : uint32_t {
    eDISABLE = 0, // Disabled. Flash memory is accessed in Individual mode.
    eENABLE = 1, // Enabled. Flash memory is accessed in Parallel mode.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flash Read/Program Data Size (in bytes) for IP command.
    uint32_t IDATSZ : 16;
    /// read-write - Sequence Index in LUT for IP command.
    uint32_t ISEQID : 4;
    uint32_t _reserved_0 : 4;
    /// read-write - Sequence Number for IP command: ISEQNUM+1.
    uint32_t ISEQNUM : 3;
    uint32_t _reserved_1 : 4;
    /// read-write - Parallel Mode Enable for IP Commands
    eIPAREN IPAREN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR1 &Instance() { return *reinterpret_cast<volatile IPCR1*>(0x400CC0A4); }
};

// IP Command
//
union IPCMD {
  
  enum class eTRG : uint32_t {
    evalue0 = 0, // No action
    evalue1 = 1, // Start the IP command that the IPCR0 and IPCR1 registers define.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Command Trigger
    eTRG TRG : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCMD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCMD &Instance() { return *reinterpret_cast<volatile IPCMD*>(0x400CC0B0); }
};

// IP Receive FIFO Control
//
union IPRXFCR {
  
  enum class eCLRIPRXF : uint32_t {
    evalue0 = 0, // No function
    evalue1 = 1, // A clock cycle pulse clears all valid data entries in IP receive FIFO.
  };
  
  enum class eRXDMAEN : uint32_t {
    eval0 = 0, // Disabled. The processor reads the FIFO.
    eval1 = 1, // Enabled. DMA reads the FIFO.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Clear IP Receive FIFO
    eCLRIPRXF CLRIPRXF : 1;
    /// read-write - IP Receive FIFO Reading by DMA Enable
    eRXDMAEN RXDMAEN : 1;
    /// read-write - IP Receive FIFO Watermark Level
    uint32_t RXWMRK : 5;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPRXFCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPRXFCR &Instance() { return *reinterpret_cast<volatile IPRXFCR*>(0x400CC0B8); }
};

// IP Transmit FIFO Control
//
union IPTXFCR {
  
  enum class eCLRIPTXF : uint32_t {
    evalue0 = 0, // No function
    evalue1 = 1, // A clock cycle pulse clears all valid data entries in the IP transmit FIFO.
  };
  
  enum class eTXDMAEN : uint32_t {
    eval0 = 0, // Processor
    eval1 = 1, // DMA
  };
  
  // Bit field definition.
  struct {
    /// read-write - Clear IP Transmit FIFO
    eCLRIPTXF CLRIPTXF : 1;
    /// read-write - Transmit FIFO DMA Enable
    eTXDMAEN TXDMAEN : 1;
    /// read-write - Transmit Watermark Level
    uint32_t TXWMRK : 5;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPTXFCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPTXFCR &Instance() { return *reinterpret_cast<volatile IPTXFCR*>(0x400CC0BC); }
};

// DLL Control 0
//
union DLLCRA {
  
  enum class eDLLEN : uint32_t {
    evalue0 = 0, // Disable
    evalue1 = 1, // Enable
  };
  
  enum class eDLLRESET : uint32_t {
    evalue0 = 0, // No function
    evalue1 = 1, // Force DLL reset.
  };
  
  enum class eOVRDEN : uint32_t {
    evalue0 = 0, // Disable
    evalue1 = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - DLL Calibration Enable
    eDLLEN DLLEN : 1;
    /// read-write - DLL reset
    eDLLRESET DLLRESET : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Target Delay Line
    uint32_t SLVDLYTARGET : 4;
    uint32_t _reserved_1 : 1;
    /// read-write - Target Clock Delay Line Override Value Enable
    eOVRDEN OVRDEN : 1;
    /// read-write - Target Clock Delay Line Override Value
    uint32_t OVRDVAL : 6;
    /// read-write - Reference Clock Delay Line Phase Adjust Gap. REFPHASEGAP setting of 2h is recommended if DLLEN is set.
    uint32_t REFPHASEGAP : 2;
    uint32_t _reserved_2 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DLLCRA() = delete;
  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile DLLCRA &Instance() { return *reinterpret_cast<volatile DLLCRA*>(0x400CC0C0); }
};
// DLL Control 0
//
union DLLCRB {
  
  enum class eDLLEN : uint32_t {
    evalue0 = 0, // Disable
    evalue1 = 1, // Enable
  };
  
  enum class eDLLRESET : uint32_t {
    evalue0 = 0, // No function
    evalue1 = 1, // Force DLL reset.
  };
  
  enum class eOVRDEN : uint32_t {
    evalue0 = 0, // Disable
    evalue1 = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - DLL Calibration Enable
    eDLLEN DLLEN : 1;
    /// read-write - DLL reset
    eDLLRESET DLLRESET : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Target Delay Line
    uint32_t SLVDLYTARGET : 4;
    uint32_t _reserved_1 : 1;
    /// read-write - Target Clock Delay Line Override Value Enable
    eOVRDEN OVRDEN : 1;
    /// read-write - Target Clock Delay Line Override Value
    uint32_t OVRDVAL : 6;
    /// read-write - Reference Clock Delay Line Phase Adjust Gap. REFPHASEGAP setting of 2h is recommended if DLLEN is set.
    uint32_t REFPHASEGAP : 2;
    uint32_t _reserved_2 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DLLCRB() = delete;
  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile DLLCRB &Instance() { return *reinterpret_cast<volatile DLLCRB*>(0x400CC0C4); }
};

// Misc Control 4
//
union MISCCR4 {
  
  // Bit field definition.
  struct {
    /// read-only - AHB Address
    uint32_t AHBADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MISCCR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR4 &Instance() { return *reinterpret_cast<volatile MISCCR4*>(0x400CC0D0); }
};

// Miscellaneous Control 5
//
union MISCCR5 {
  
  // Bit field definition.
  struct {
    /// read-only - ECC Single-Bit Error Correction Indicator
    uint32_t ECCSINGLEERRORCORR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MISCCR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR5 &Instance() { return *reinterpret_cast<volatile MISCCR5*>(0x400CC0D4); }
};

// Miscellaneous Control 6
//
union MISCCR6 {
  
  enum class eVALID : uint32_t {
    eINVALID = 0, // Invalid
    eVALID = 1, // Valid
  };
  
  enum class eHIT : uint32_t {
    eNOT_HIT = 0, // Address not hit
    eHIT = 1, // Address hit
  };
  
  // Bit field definition.
  struct {
    /// read-only - ECC Single-Bit Error Information Valid
    eVALID VALID : 1;
    /// read-only - ECC Single-Bit Error Information Hit
    eHIT HIT : 1;
    /// read-only - ECC Single-Bit Error Address
    uint32_t ADDRESS : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MISCCR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR6 &Instance() { return *reinterpret_cast<volatile MISCCR6*>(0x400CC0D8); }
};

// Miscellaneous Control 7
//
union MISCCR7 {
  
  enum class eHIT : uint32_t {
    eNOT_HIT = 0, // Address not hit
    eHIT = 1, // Address hit
  };
  
  // Bit field definition.
  struct {
    /// read-only - ECC Multibit Error Information Valid
    uint32_t VALID : 1;
    /// read-only - ECC Multibit Error Information Hit
    eHIT HIT : 1;
    /// read-only - ECC multi error address
    uint32_t ADDRESS : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MISCCR7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR7 &Instance() { return *reinterpret_cast<volatile MISCCR7*>(0x400CC0DC); }
};

// Status 0
//
union STS0 {
  
  enum class eSEQIDLE : uint32_t {
    evalue0 = 0, // Not idle
    evalue1 = 1, // Idle
  };
  
  enum class eARBIDLE : uint32_t {
    evalue0 = 0, // Not idle
    evalue1 = 1, // Idle
  };
  
  enum class eARBCMDSRC : uint32_t {
    eval0 = 0, // Trigger source is AHB read command.
    eval1 = 1, // Trigger source is AHB write command.
    eval2 = 2, // Trigger source is IP command (by writing 1 to IPCMD[TRG]).
    eval3 = 3, // Trigger source is a suspended command that has resumed.
  };
  
  // Bit field definition.
  struct {
    /// read-only - SEQ_CTL State Machine Idle
    eSEQIDLE SEQIDLE : 1;
    /// read-only - ARB_CTL State Machine Idle
    eARBIDLE ARBIDLE : 1;
    /// read-only - ARB Command Source
    eARBCMDSRC ARBCMDSRC : 2;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS0() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile STS0 &Instance() { return *reinterpret_cast<volatile STS0*>(0x400CC0E0); }
};

// Status 1
//
union STS1 {
  
  enum class eAHBCMDERRCODE : uint32_t {
    eval0 = 0, // No error
    eval2 = 2, // AHB Write command with JMP_ON_CS instruction used in the sequence
    eval3 = 3, // Unknown instruction opcode in the sequence
    eval4 = 4, // DUMMY_SDR or DUMMY_RWDS_SDR instruction used in DDR sequence
    eval5 = 5, // DUMMY_DDR or DUMMY_RWDS_DDR instruction used in SDR sequence
    eval6 = 14, // Sequence execution timeout
  };
  
  enum class eIPCMDERRCODE : uint32_t {
    eval0 = 0, // No error
    eval2 = 2, // IP command with JMP_ON_CS instruction used in the sequence
    eval3 = 3, // Unknown instruction opcode in the sequence
    eval4 = 4, // DUMMY_SDR or DUMMY_RWDS_SDR instruction used in DDR sequence
    eval5 = 5, // DUMMY_DDR or DUMMY_RWDS_DDR instruction used in SDR sequence
    eval6 = 6, // Flash memory access start address exceeds entire flash address range (A1, A2, B1, and B2)
    eval7 = 14, // Sequence execution timeout
    eval8 = 15, // Flash boundary crossed
  };
  
  // Bit field definition.
  struct {
    /// read-only - AHB Command Error ID
    uint32_t AHBCMDERRID : 4;
    uint32_t _reserved_0 : 4;
    /// read-only - AHB Command Error Code
    eAHBCMDERRCODE AHBCMDERRCODE : 4;
    uint32_t _reserved_1 : 4;
    /// read-only - IP Command Error ID
    uint32_t IPCMDERRID : 4;
    uint32_t _reserved_2 : 4;
    /// read-only - IP Command Error Code
    eIPCMDERRCODE IPCMDERRCODE : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS1 &Instance() { return *reinterpret_cast<volatile STS1*>(0x400CC0E4); }
};

// Status 2
//
union STS2 {
  
  enum class eASLVLOCK : uint32_t {
    eval0 = 0, // Not locked
    eval1 = 1, // Locked
  };
  
  enum class eAREFLOCK : uint32_t {
    eval0 = 0, // Not locked
    eval1 = 1, // Locked
  };
  
  enum class eBSLVLOCK : uint32_t {
    eval0 = 0, // Not locked
    eval1 = 1, // Locked
  };
  
  enum class eBREFLOCK : uint32_t {
    eval0 = 0, // Not locked
    eval1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    /// read-only - Flash A Sample Target Delay Line Locked
    eASLVLOCK ASLVLOCK : 1;
    /// read-only - Flash A Sample Clock Reference Delay Line Locked
    eAREFLOCK AREFLOCK : 1;
    /// read-only - Flash A Sample Clock Target Delay Line Delay Cell Number
    uint32_t ASLVSEL : 6;
    /// read-only - Flash A Sample Clock Reference Delay Line Delay Cell Number
    uint32_t AREFSEL : 6;
    uint32_t _reserved_0 : 2;
    /// read-only - Flash B Sample Target Reference Delay Line Locked
    eBSLVLOCK BSLVLOCK : 1;
    /// read-only - Flash B Sample Clock Reference Delay Line Locked
    eBREFLOCK BREFLOCK : 1;
    /// read-only - Flash B Sample Clock Target Delay Line Delay Cell Number
    uint32_t BSLVSEL : 6;
    /// read-only - Flash B Sample Clock Reference Delay Line Delay Cell Number
    uint32_t BREFSEL : 6;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS2() = delete;
  inline void Reset() volatile { this->value = 0x01000100; }
  static inline volatile STS2 &Instance() { return *reinterpret_cast<volatile STS2*>(0x400CC0E8); }
};

// AHB Suspend Status
//
union AHBSPNDSTS {
  
  enum class eACTIVE : uint32_t {
    eval0 = 0, // No suspended AHB read prefetch command.
    eval1 = 1, // An AHB read prefetch command sequence has been suspended.
  };
  
  // Bit field definition.
  struct {
    /// read-only - Active AHB Read Prefetch Suspended
    eACTIVE ACTIVE : 1;
    /// read-only - AHB Receive Buffer ID for Suspended Command Sequence
    uint32_t BUFID : 3;
    uint32_t _reserved_0 : 12;
    /// read-only - Data Left
    uint32_t DATLFT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AHBSPNDSTS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AHBSPNDSTS &Instance() { return *reinterpret_cast<volatile AHBSPNDSTS*>(0x400CC0EC); }
};

// IP Receive FIFO Status
//
union IPRXFSTS {
  
  // Bit field definition.
  struct {
    /// read-only - Fill Level of IP Receive FIFO
    uint32_t FILL : 8;
    uint32_t _reserved_0 : 8;
    /// read-only - Read Data Counter
    uint32_t RDCNTR : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPRXFSTS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPRXFSTS &Instance() { return *reinterpret_cast<volatile IPRXFSTS*>(0x400CC0F0); }
};

// IP Transmit FIFO Status
//
union IPTXFSTS {
  
  // Bit field definition.
  struct {
    /// read-only - Fill Level of IP Transmit FIFO
    uint32_t FILL : 8;
    uint32_t _reserved_0 : 8;
    /// read-only - Write Data Counter
    uint32_t WRCNTR : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPTXFSTS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPTXFSTS &Instance() { return *reinterpret_cast<volatile IPTXFSTS*>(0x400CC0F4); }
};

// IP Receive FIFO Data x
//
union RFDR[0] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[0] &Instance() { return *reinterpret_cast<volatile RFDR[0]*>(0x400CC100); }
};
// IP Receive FIFO Data x
//
union RFDR[1] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[1] &Instance() { return *reinterpret_cast<volatile RFDR[1]*>(0x400CC104); }
};
// IP Receive FIFO Data x
//
union RFDR[2] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[2] &Instance() { return *reinterpret_cast<volatile RFDR[2]*>(0x400CC108); }
};
// IP Receive FIFO Data x
//
union RFDR[3] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[3] &Instance() { return *reinterpret_cast<volatile RFDR[3]*>(0x400CC10C); }
};
// IP Receive FIFO Data x
//
union RFDR[4] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[4] &Instance() { return *reinterpret_cast<volatile RFDR[4]*>(0x400CC110); }
};
// IP Receive FIFO Data x
//
union RFDR[5] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[5] &Instance() { return *reinterpret_cast<volatile RFDR[5]*>(0x400CC114); }
};
// IP Receive FIFO Data x
//
union RFDR[6] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[6] &Instance() { return *reinterpret_cast<volatile RFDR[6]*>(0x400CC118); }
};
// IP Receive FIFO Data x
//
union RFDR[7] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[7] &Instance() { return *reinterpret_cast<volatile RFDR[7]*>(0x400CC11C); }
};
// IP Receive FIFO Data x
//
union RFDR[8] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[8] &Instance() { return *reinterpret_cast<volatile RFDR[8]*>(0x400CC120); }
};
// IP Receive FIFO Data x
//
union RFDR[9] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[9] &Instance() { return *reinterpret_cast<volatile RFDR[9]*>(0x400CC124); }
};
// IP Receive FIFO Data x
//
union RFDR[10] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[10] &Instance() { return *reinterpret_cast<volatile RFDR[10]*>(0x400CC128); }
};
// IP Receive FIFO Data x
//
union RFDR[11] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[11] &Instance() { return *reinterpret_cast<volatile RFDR[11]*>(0x400CC12C); }
};
// IP Receive FIFO Data x
//
union RFDR[12] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[12] &Instance() { return *reinterpret_cast<volatile RFDR[12]*>(0x400CC130); }
};
// IP Receive FIFO Data x
//
union RFDR[13] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[13] &Instance() { return *reinterpret_cast<volatile RFDR[13]*>(0x400CC134); }
};
// IP Receive FIFO Data x
//
union RFDR[14] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[14] &Instance() { return *reinterpret_cast<volatile RFDR[14]*>(0x400CC138); }
};
// IP Receive FIFO Data x
//
union RFDR[15] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[15] &Instance() { return *reinterpret_cast<volatile RFDR[15]*>(0x400CC13C); }
};
// IP Receive FIFO Data x
//
union RFDR[16] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[16] &Instance() { return *reinterpret_cast<volatile RFDR[16]*>(0x400CC140); }
};
// IP Receive FIFO Data x
//
union RFDR[17] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[17] &Instance() { return *reinterpret_cast<volatile RFDR[17]*>(0x400CC144); }
};
// IP Receive FIFO Data x
//
union RFDR[18] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[18] &Instance() { return *reinterpret_cast<volatile RFDR[18]*>(0x400CC148); }
};
// IP Receive FIFO Data x
//
union RFDR[19] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[19] &Instance() { return *reinterpret_cast<volatile RFDR[19]*>(0x400CC14C); }
};
// IP Receive FIFO Data x
//
union RFDR[20] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[20] &Instance() { return *reinterpret_cast<volatile RFDR[20]*>(0x400CC150); }
};
// IP Receive FIFO Data x
//
union RFDR[21] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[21] &Instance() { return *reinterpret_cast<volatile RFDR[21]*>(0x400CC154); }
};
// IP Receive FIFO Data x
//
union RFDR[22] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[22] &Instance() { return *reinterpret_cast<volatile RFDR[22]*>(0x400CC158); }
};
// IP Receive FIFO Data x
//
union RFDR[23] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[23] &Instance() { return *reinterpret_cast<volatile RFDR[23]*>(0x400CC15C); }
};
// IP Receive FIFO Data x
//
union RFDR[24] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[24] &Instance() { return *reinterpret_cast<volatile RFDR[24]*>(0x400CC160); }
};
// IP Receive FIFO Data x
//
union RFDR[25] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[25] &Instance() { return *reinterpret_cast<volatile RFDR[25]*>(0x400CC164); }
};
// IP Receive FIFO Data x
//
union RFDR[26] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[26] &Instance() { return *reinterpret_cast<volatile RFDR[26]*>(0x400CC168); }
};
// IP Receive FIFO Data x
//
union RFDR[27] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[27] &Instance() { return *reinterpret_cast<volatile RFDR[27]*>(0x400CC16C); }
};
// IP Receive FIFO Data x
//
union RFDR[28] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[28] &Instance() { return *reinterpret_cast<volatile RFDR[28]*>(0x400CC170); }
};
// IP Receive FIFO Data x
//
union RFDR[29] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[29] &Instance() { return *reinterpret_cast<volatile RFDR[29]*>(0x400CC174); }
};
// IP Receive FIFO Data x
//
union RFDR[30] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[30] &Instance() { return *reinterpret_cast<volatile RFDR[30]*>(0x400CC178); }
};
// IP Receive FIFO Data x
//
union RFDR[31] {
  
  // Bit field definition.
  struct {
    /// read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFDR[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR[31] &Instance() { return *reinterpret_cast<volatile RFDR[31]*>(0x400CC17C); }
};

// IP TX FIFO Data x
//
union TFDR[0] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[0] &Instance() { return *reinterpret_cast<volatile TFDR[0]*>(0x400CC180); }
};
// IP TX FIFO Data x
//
union TFDR[1] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[1] &Instance() { return *reinterpret_cast<volatile TFDR[1]*>(0x400CC184); }
};
// IP TX FIFO Data x
//
union TFDR[2] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[2] &Instance() { return *reinterpret_cast<volatile TFDR[2]*>(0x400CC188); }
};
// IP TX FIFO Data x
//
union TFDR[3] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[3] &Instance() { return *reinterpret_cast<volatile TFDR[3]*>(0x400CC18C); }
};
// IP TX FIFO Data x
//
union TFDR[4] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[4] &Instance() { return *reinterpret_cast<volatile TFDR[4]*>(0x400CC190); }
};
// IP TX FIFO Data x
//
union TFDR[5] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[5] &Instance() { return *reinterpret_cast<volatile TFDR[5]*>(0x400CC194); }
};
// IP TX FIFO Data x
//
union TFDR[6] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[6] &Instance() { return *reinterpret_cast<volatile TFDR[6]*>(0x400CC198); }
};
// IP TX FIFO Data x
//
union TFDR[7] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[7] &Instance() { return *reinterpret_cast<volatile TFDR[7]*>(0x400CC19C); }
};
// IP TX FIFO Data x
//
union TFDR[8] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[8] &Instance() { return *reinterpret_cast<volatile TFDR[8]*>(0x400CC1A0); }
};
// IP TX FIFO Data x
//
union TFDR[9] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[9] &Instance() { return *reinterpret_cast<volatile TFDR[9]*>(0x400CC1A4); }
};
// IP TX FIFO Data x
//
union TFDR[10] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[10] &Instance() { return *reinterpret_cast<volatile TFDR[10]*>(0x400CC1A8); }
};
// IP TX FIFO Data x
//
union TFDR[11] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[11] &Instance() { return *reinterpret_cast<volatile TFDR[11]*>(0x400CC1AC); }
};
// IP TX FIFO Data x
//
union TFDR[12] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[12] &Instance() { return *reinterpret_cast<volatile TFDR[12]*>(0x400CC1B0); }
};
// IP TX FIFO Data x
//
union TFDR[13] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[13] &Instance() { return *reinterpret_cast<volatile TFDR[13]*>(0x400CC1B4); }
};
// IP TX FIFO Data x
//
union TFDR[14] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[14] &Instance() { return *reinterpret_cast<volatile TFDR[14]*>(0x400CC1B8); }
};
// IP TX FIFO Data x
//
union TFDR[15] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[15] &Instance() { return *reinterpret_cast<volatile TFDR[15]*>(0x400CC1BC); }
};
// IP TX FIFO Data x
//
union TFDR[16] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[16] &Instance() { return *reinterpret_cast<volatile TFDR[16]*>(0x400CC1C0); }
};
// IP TX FIFO Data x
//
union TFDR[17] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[17] &Instance() { return *reinterpret_cast<volatile TFDR[17]*>(0x400CC1C4); }
};
// IP TX FIFO Data x
//
union TFDR[18] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[18] &Instance() { return *reinterpret_cast<volatile TFDR[18]*>(0x400CC1C8); }
};
// IP TX FIFO Data x
//
union TFDR[19] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[19] &Instance() { return *reinterpret_cast<volatile TFDR[19]*>(0x400CC1CC); }
};
// IP TX FIFO Data x
//
union TFDR[20] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[20] &Instance() { return *reinterpret_cast<volatile TFDR[20]*>(0x400CC1D0); }
};
// IP TX FIFO Data x
//
union TFDR[21] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[21] &Instance() { return *reinterpret_cast<volatile TFDR[21]*>(0x400CC1D4); }
};
// IP TX FIFO Data x
//
union TFDR[22] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[22] &Instance() { return *reinterpret_cast<volatile TFDR[22]*>(0x400CC1D8); }
};
// IP TX FIFO Data x
//
union TFDR[23] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[23] &Instance() { return *reinterpret_cast<volatile TFDR[23]*>(0x400CC1DC); }
};
// IP TX FIFO Data x
//
union TFDR[24] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[24] &Instance() { return *reinterpret_cast<volatile TFDR[24]*>(0x400CC1E0); }
};
// IP TX FIFO Data x
//
union TFDR[25] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[25] &Instance() { return *reinterpret_cast<volatile TFDR[25]*>(0x400CC1E4); }
};
// IP TX FIFO Data x
//
union TFDR[26] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[26] &Instance() { return *reinterpret_cast<volatile TFDR[26]*>(0x400CC1E8); }
};
// IP TX FIFO Data x
//
union TFDR[27] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[27] &Instance() { return *reinterpret_cast<volatile TFDR[27]*>(0x400CC1EC); }
};
// IP TX FIFO Data x
//
union TFDR[28] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[28] &Instance() { return *reinterpret_cast<volatile TFDR[28]*>(0x400CC1F0); }
};
// IP TX FIFO Data x
//
union TFDR[29] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[29] &Instance() { return *reinterpret_cast<volatile TFDR[29]*>(0x400CC1F4); }
};
// IP TX FIFO Data x
//
union TFDR[30] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[30] &Instance() { return *reinterpret_cast<volatile TFDR[30]*>(0x400CC1F8); }
};
// IP TX FIFO Data x
//
union TFDR[31] {
  
  // Bit field definition.
  struct {
    /// write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFDR[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR[31] &Instance() { return *reinterpret_cast<volatile TFDR[31]*>(0x400CC1FC); }
};

// Lookup Table x
//
union LUT[0] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[0] &Instance() { return *reinterpret_cast<volatile LUT[0]*>(0x400CC200); }
};
// Lookup Table x
//
union LUT[1] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[1] &Instance() { return *reinterpret_cast<volatile LUT[1]*>(0x400CC204); }
};
// Lookup Table x
//
union LUT[2] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[2] &Instance() { return *reinterpret_cast<volatile LUT[2]*>(0x400CC208); }
};
// Lookup Table x
//
union LUT[3] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[3] &Instance() { return *reinterpret_cast<volatile LUT[3]*>(0x400CC20C); }
};
// Lookup Table x
//
union LUT[4] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[4] &Instance() { return *reinterpret_cast<volatile LUT[4]*>(0x400CC210); }
};
// Lookup Table x
//
union LUT[5] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[5] &Instance() { return *reinterpret_cast<volatile LUT[5]*>(0x400CC214); }
};
// Lookup Table x
//
union LUT[6] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[6] &Instance() { return *reinterpret_cast<volatile LUT[6]*>(0x400CC218); }
};
// Lookup Table x
//
union LUT[7] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[7] &Instance() { return *reinterpret_cast<volatile LUT[7]*>(0x400CC21C); }
};
// Lookup Table x
//
union LUT[8] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[8] &Instance() { return *reinterpret_cast<volatile LUT[8]*>(0x400CC220); }
};
// Lookup Table x
//
union LUT[9] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[9] &Instance() { return *reinterpret_cast<volatile LUT[9]*>(0x400CC224); }
};
// Lookup Table x
//
union LUT[10] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[10] &Instance() { return *reinterpret_cast<volatile LUT[10]*>(0x400CC228); }
};
// Lookup Table x
//
union LUT[11] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[11] &Instance() { return *reinterpret_cast<volatile LUT[11]*>(0x400CC22C); }
};
// Lookup Table x
//
union LUT[12] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[12] &Instance() { return *reinterpret_cast<volatile LUT[12]*>(0x400CC230); }
};
// Lookup Table x
//
union LUT[13] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[13] &Instance() { return *reinterpret_cast<volatile LUT[13]*>(0x400CC234); }
};
// Lookup Table x
//
union LUT[14] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[14] &Instance() { return *reinterpret_cast<volatile LUT[14]*>(0x400CC238); }
};
// Lookup Table x
//
union LUT[15] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[15] &Instance() { return *reinterpret_cast<volatile LUT[15]*>(0x400CC23C); }
};
// Lookup Table x
//
union LUT[16] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[16] &Instance() { return *reinterpret_cast<volatile LUT[16]*>(0x400CC240); }
};
// Lookup Table x
//
union LUT[17] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[17] &Instance() { return *reinterpret_cast<volatile LUT[17]*>(0x400CC244); }
};
// Lookup Table x
//
union LUT[18] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[18] &Instance() { return *reinterpret_cast<volatile LUT[18]*>(0x400CC248); }
};
// Lookup Table x
//
union LUT[19] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[19] &Instance() { return *reinterpret_cast<volatile LUT[19]*>(0x400CC24C); }
};
// Lookup Table x
//
union LUT[20] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[20] &Instance() { return *reinterpret_cast<volatile LUT[20]*>(0x400CC250); }
};
// Lookup Table x
//
union LUT[21] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[21] &Instance() { return *reinterpret_cast<volatile LUT[21]*>(0x400CC254); }
};
// Lookup Table x
//
union LUT[22] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[22] &Instance() { return *reinterpret_cast<volatile LUT[22]*>(0x400CC258); }
};
// Lookup Table x
//
union LUT[23] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[23] &Instance() { return *reinterpret_cast<volatile LUT[23]*>(0x400CC25C); }
};
// Lookup Table x
//
union LUT[24] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[24] &Instance() { return *reinterpret_cast<volatile LUT[24]*>(0x400CC260); }
};
// Lookup Table x
//
union LUT[25] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[25] &Instance() { return *reinterpret_cast<volatile LUT[25]*>(0x400CC264); }
};
// Lookup Table x
//
union LUT[26] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[26] &Instance() { return *reinterpret_cast<volatile LUT[26]*>(0x400CC268); }
};
// Lookup Table x
//
union LUT[27] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[27] &Instance() { return *reinterpret_cast<volatile LUT[27]*>(0x400CC26C); }
};
// Lookup Table x
//
union LUT[28] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[28] &Instance() { return *reinterpret_cast<volatile LUT[28]*>(0x400CC270); }
};
// Lookup Table x
//
union LUT[29] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[29] &Instance() { return *reinterpret_cast<volatile LUT[29]*>(0x400CC274); }
};
// Lookup Table x
//
union LUT[30] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[30] &Instance() { return *reinterpret_cast<volatile LUT[30]*>(0x400CC278); }
};
// Lookup Table x
//
union LUT[31] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[31] &Instance() { return *reinterpret_cast<volatile LUT[31]*>(0x400CC27C); }
};
// Lookup Table x
//
union LUT[32] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[32]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[32] &Instance() { return *reinterpret_cast<volatile LUT[32]*>(0x400CC280); }
};
// Lookup Table x
//
union LUT[33] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[33]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[33] &Instance() { return *reinterpret_cast<volatile LUT[33]*>(0x400CC284); }
};
// Lookup Table x
//
union LUT[34] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[34]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[34] &Instance() { return *reinterpret_cast<volatile LUT[34]*>(0x400CC288); }
};
// Lookup Table x
//
union LUT[35] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[35]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[35] &Instance() { return *reinterpret_cast<volatile LUT[35]*>(0x400CC28C); }
};
// Lookup Table x
//
union LUT[36] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[36]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[36] &Instance() { return *reinterpret_cast<volatile LUT[36]*>(0x400CC290); }
};
// Lookup Table x
//
union LUT[37] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[37]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[37] &Instance() { return *reinterpret_cast<volatile LUT[37]*>(0x400CC294); }
};
// Lookup Table x
//
union LUT[38] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[38]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[38] &Instance() { return *reinterpret_cast<volatile LUT[38]*>(0x400CC298); }
};
// Lookup Table x
//
union LUT[39] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[39]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[39] &Instance() { return *reinterpret_cast<volatile LUT[39]*>(0x400CC29C); }
};
// Lookup Table x
//
union LUT[40] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[40]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[40] &Instance() { return *reinterpret_cast<volatile LUT[40]*>(0x400CC2A0); }
};
// Lookup Table x
//
union LUT[41] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[41]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[41] &Instance() { return *reinterpret_cast<volatile LUT[41]*>(0x400CC2A4); }
};
// Lookup Table x
//
union LUT[42] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[42]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[42] &Instance() { return *reinterpret_cast<volatile LUT[42]*>(0x400CC2A8); }
};
// Lookup Table x
//
union LUT[43] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[43]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[43] &Instance() { return *reinterpret_cast<volatile LUT[43]*>(0x400CC2AC); }
};
// Lookup Table x
//
union LUT[44] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[44]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[44] &Instance() { return *reinterpret_cast<volatile LUT[44]*>(0x400CC2B0); }
};
// Lookup Table x
//
union LUT[45] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[45]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[45] &Instance() { return *reinterpret_cast<volatile LUT[45]*>(0x400CC2B4); }
};
// Lookup Table x
//
union LUT[46] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[46]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[46] &Instance() { return *reinterpret_cast<volatile LUT[46]*>(0x400CC2B8); }
};
// Lookup Table x
//
union LUT[47] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[47]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[47] &Instance() { return *reinterpret_cast<volatile LUT[47]*>(0x400CC2BC); }
};
// Lookup Table x
//
union LUT[48] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[48]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[48] &Instance() { return *reinterpret_cast<volatile LUT[48]*>(0x400CC2C0); }
};
// Lookup Table x
//
union LUT[49] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[49]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[49] &Instance() { return *reinterpret_cast<volatile LUT[49]*>(0x400CC2C4); }
};
// Lookup Table x
//
union LUT[50] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[50]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[50] &Instance() { return *reinterpret_cast<volatile LUT[50]*>(0x400CC2C8); }
};
// Lookup Table x
//
union LUT[51] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[51]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[51] &Instance() { return *reinterpret_cast<volatile LUT[51]*>(0x400CC2CC); }
};
// Lookup Table x
//
union LUT[52] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[52]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[52] &Instance() { return *reinterpret_cast<volatile LUT[52]*>(0x400CC2D0); }
};
// Lookup Table x
//
union LUT[53] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[53]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[53] &Instance() { return *reinterpret_cast<volatile LUT[53]*>(0x400CC2D4); }
};
// Lookup Table x
//
union LUT[54] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[54]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[54] &Instance() { return *reinterpret_cast<volatile LUT[54]*>(0x400CC2D8); }
};
// Lookup Table x
//
union LUT[55] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[55]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[55] &Instance() { return *reinterpret_cast<volatile LUT[55]*>(0x400CC2DC); }
};
// Lookup Table x
//
union LUT[56] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[56]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[56] &Instance() { return *reinterpret_cast<volatile LUT[56]*>(0x400CC2E0); }
};
// Lookup Table x
//
union LUT[57] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[57]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[57] &Instance() { return *reinterpret_cast<volatile LUT[57]*>(0x400CC2E4); }
};
// Lookup Table x
//
union LUT[58] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[58]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[58] &Instance() { return *reinterpret_cast<volatile LUT[58]*>(0x400CC2E8); }
};
// Lookup Table x
//
union LUT[59] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[59]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[59] &Instance() { return *reinterpret_cast<volatile LUT[59]*>(0x400CC2EC); }
};
// Lookup Table x
//
union LUT[60] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[60]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[60] &Instance() { return *reinterpret_cast<volatile LUT[60]*>(0x400CC2F0); }
};
// Lookup Table x
//
union LUT[61] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[61]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[61] &Instance() { return *reinterpret_cast<volatile LUT[61]*>(0x400CC2F4); }
};
// Lookup Table x
//
union LUT[62] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[62]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[62] &Instance() { return *reinterpret_cast<volatile LUT[62]*>(0x400CC2F8); }
};
// Lookup Table x
//
union LUT[63] {
  
  // Bit field definition.
  struct {
    /// read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    /// read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    /// read-write - OPCODE
    uint32_t OPCODE0 : 6;
    /// read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    /// read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    /// read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LUT[63]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT[63] &Instance() { return *reinterpret_cast<volatile LUT[63]*>(0x400CC2FC); }
};

// AHB Controller ID 0 Control
//
union HMSTR0CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR0CR() = delete;
  inline void Reset() volatile { this->value = 0x0040FFCF; }
  static inline volatile HMSTR0CR &Instance() { return *reinterpret_cast<volatile HMSTR0CR*>(0x400CC400); }
};

// AHB Controller ID 1 Control
//
union HMSTR1CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR1CR() = delete;
  inline void Reset() volatile { this->value = 0x0000FFCF; }
  static inline volatile HMSTR1CR &Instance() { return *reinterpret_cast<volatile HMSTR1CR*>(0x400CC404); }
};

// AHB Controller ID 2 Control
//
union HMSTR2CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR2CR() = delete;
  inline void Reset() volatile { this->value = 0x0004F00F; }
  static inline volatile HMSTR2CR &Instance() { return *reinterpret_cast<volatile HMSTR2CR*>(0x400CC408); }
};

// AHB Controller ID 3 Control
//
union HMSTR3CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR3CR() = delete;
  inline void Reset() volatile { this->value = 0x0022807F; }
  static inline volatile HMSTR3CR &Instance() { return *reinterpret_cast<volatile HMSTR3CR*>(0x400CC40C); }
};

// AHB Controller ID 4 Control
//
union HMSTR4CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR4CR() = delete;
  inline void Reset() volatile { this->value = 0x0032F87F; }
  static inline volatile HMSTR4CR &Instance() { return *reinterpret_cast<volatile HMSTR4CR*>(0x400CC410); }
};

// AHB Controller ID 5 Control
//
union HMSTR5CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR5CR() = delete;
  inline void Reset() volatile { this->value = 0x0011F87F; }
  static inline volatile HMSTR5CR &Instance() { return *reinterpret_cast<volatile HMSTR5CR*>(0x400CC414); }
};

// AHB Controller ID 6 Control
//
union HMSTR6CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR6CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HMSTR6CR &Instance() { return *reinterpret_cast<volatile HMSTR6CR*>(0x400CC418); }
};

// AHB Controller ID 7 Control
//
union HMSTR7CR {
  
  enum class eMASK : uint32_t {
    eDISABLE = 0, // Mask
    eENABLE = 1, // Unmask
  };
  
  // Bit field definition.
  struct {
    /// read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    /// read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HMSTR7CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HMSTR7CR &Instance() { return *reinterpret_cast<volatile HMSTR7CR*>(0x400CC41C); }
};

// HADDR REMAP Start Address
//
union HADDRSTART {
  
  enum class eREMAPEN : uint32_t {
    eval0 = 0, // HADDR REMAP Disabled
    eval1 = 1, // HADDR REMAP Enabled
  };
  
  enum class eKBINECC : uint32_t {
    eval0 = 0, // FlexSPI fetches keyblob at base address + offset
    eval1 = 1, // FlexSPI fetches keyblob at base address + offset * 2
  };
  
  // Bit field definition.
  struct {
    /// read-write - AHB Bus Address Remap Enable
    eREMAPEN REMAPEN : 1;
    /// read-write - OTFAD Keyblob in ECC
    eKBINECC KBINECC : 1;
    uint32_t _reserved_0 : 10;
    /// read-write - HADDR Start Address
    uint32_t ADDRSTART : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HADDRSTART() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HADDRSTART &Instance() { return *reinterpret_cast<volatile HADDRSTART*>(0x400CC420); }
};

// HADDR REMAP END ADDR
//
union HADDREND {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    /// read-write - End Address of HADDR Remap Range
    uint32_t ENDSTART : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HADDREND() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HADDREND &Instance() { return *reinterpret_cast<volatile HADDREND*>(0x400CC424); }
};

// HADDR Remap Offset
//
union HADDROFFSET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    /// read-write - HADDR Offset
    uint32_t ADDROFFSET : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HADDROFFSET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HADDROFFSET &Instance() { return *reinterpret_cast<volatile HADDROFFSET*>(0x400CC428); }
};


} // namespace nFLEXSPI1