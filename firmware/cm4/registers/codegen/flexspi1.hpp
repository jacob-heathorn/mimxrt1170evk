#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// FlexSPI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nFLEXSPI1 {


// Module Control 0
union MCR0 {
  
  // Software Reset
  enum class eSWRESET : uint32_t {
    // No impact
    eval0 = 0,
    // Software reset
    eval1 = 1,
  };
  
  // Module Disable
  enum class eMDIS : uint32_t {
    // No impact
    eval0 = 0,
    // Module disable
    eval1 = 1,
  };
  
  // Sample Clock Source for Flash Reading
  enum class eRXCLKSRC : uint32_t {
    // Dummy Read strobe that FlexSPI generates, looped back internally
    eval0 = 0,
    // Dummy Read strobe that FlexSPI generates, looped back from DQS pad
    eval1 = 1,
    // Flash-memory-provided read strobe and input from DQS pad
    eval3 = 3,
  };
  
  // AHB Read Access to IP Receive FIFO Enable
  enum class eARDFEN : uint32_t {
    // AHB read access disabled. IP bus reads IP receive FIFO. AHB Bus read access to IP receive FIFO memory space produces bus error.
    eval0 = 0,
    // AHB read access enabled. AHB bus reads IP receive FIFO. IP Bus read access to IP receive FIFO memory space returns data zero and causes no bus error.
    eval1 = 1,
  };
  
  // AHB Write Access to IP Transmit FIFO Enable
  enum class eATDFEN : uint32_t {
    // AHB write access disabled. IP bus writes to IP transmit FIFO. AHB bus write access to IP transmit FIFO memory space produces bus error.
    eval0 = 0,
    // AHB write access enabled. AHB bus writes to IP transmit FIFO. IP Bus write access to IP transmit FIFO memory space is ignored and causes no bus error.
    eval1 = 1,
  };
  
  // Serial Root Clock Divider
  enum class eSERCLKDIV : uint32_t {
    // Divided by 1
    eval0 = 0,
    // Divided by 2
    eval1 = 1,
    // Divided by 3
    eval2 = 2,
    // Divided by 4
    eval3 = 3,
    // Divided by 5
    eval4 = 4,
    // Divided by 6
    eval5 = 5,
    // Divided by 7
    eval6 = 6,
    // Divided by 8
    eval7 = 7,
  };
  
  // Half Speed Serial Flash Memory Access Enable
  enum class eHSEN : uint32_t {
    // Disable
    eval0 = 0,
    // Enable
    eval1 = 1,
  };
  
  // Doze Mode Enable
  enum class eDOZEEN : uint32_t {
    // Disable
    eval0 = 0,
    // Enable
    eval1 = 1,
  };
  
  // Combination Mode Enable
  enum class eCOMBINATIONEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // SCLK Free-running Enable
  enum class eSCKFREERUNEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software Reset
    eSWRESET SWRESET : 1;
    // read-write - Module Disable
    eMDIS MDIS : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Sample Clock Source for Flash Reading
    eRXCLKSRC RXCLKSRC : 2;
    // read-write - AHB Read Access to IP Receive FIFO Enable
    eARDFEN ARDFEN : 1;
    // read-write - AHB Write Access to IP Transmit FIFO Enable
    eATDFEN ATDFEN : 1;
    // read-write - Serial Root Clock Divider
    eSERCLKDIV SERCLKDIV : 3;
    // read-write - Half Speed Serial Flash Memory Access Enable
    eHSEN HSEN : 1;
    // read-write - Doze Mode Enable
    eDOZEEN DOZEEN : 1;
    // read-write - Combination Mode Enable
    eCOMBINATIONEN COMBINATIONEN : 1;
    // read-write - SCLK Free-running Enable
    eSCKFREERUNEN SCKFREERUNEN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Timeout Wait Cycle for IP Command Grant
    uint32_t IPGRANTWAIT : 8;
    // read-write - Timeouts Wait Cycle for AHB command Grant
    uint32_t AHBGRANTWAIT : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0xFFFF80C2; }
  static inline volatile MCR0 &ref() { return *reinterpret_cast<volatile MCR0*>(0x400CC000); }
};

// Module Control 1
union MCR1 {
  
  // Bit field definition.
  struct {
    // read-write - AHB Bus Wait
    uint32_t AHBBUSWAIT : 16;
    // read-write - Command Sequence Wait
    uint32_t SEQWAIT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MCR1 &ref() { return *reinterpret_cast<volatile MCR1*>(0x400CC004); }
};

// Module Control 2
union MCR2 {
  
  // Clear AHB Buffer
  enum class eCLRAHBBUFOPT : uint32_t {
    // Not cleared automatically
    eval0 = 0,
    // Cleared automatically
    eval1 = 1,
  };
  
  // Same Device Enable
  enum class eSAMEDEVICEEN : uint32_t {
    // In Individual mode, FLSHA1CRx and FLSHA2CRx, FLSHB1CRx and FLSHB2CRx settings are applied to Flash A1, A2, B1, B2 separately. In Parallel mode, FLSHA1CRx register setting is applied to Flash A1 and B1, FLSHA2CRx register setting is applied to Flash A2 and B2. FLSHB1CRx and FLSHB2CRx register settings are ignored.
    eindividual_parallel = 0,
    // FLSHA1CR0, FLSHA1CR1, and FLSHA1CR2 register settings are applied to Flash A1, A2, B1, B2. FLSHA2CRx, FLSHB1CRx, and FLSHB2CRx settings are ignored.
    eENABLE = 1,
  };
  
  // SCLK Port B Differential Output
  enum class eSCKBDIFFOPT : uint32_t {
    // Use B_SCLK pad as port B SCLK clock output. Port B flash memory access is available.
    eval1 = 0,
    // Use B_SCLK pad as port A SCLK inverted clock output (Differential clock to A_SCLK). Port B flash memory access is not available.
    eval0 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Clear AHB Buffer
    eCLRAHBBUFOPT CLRAHBBUFOPT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Same Device Enable
    eSAMEDEVICEEN SAMEDEVICEEN : 1;
    uint32_t _reserved_2 : 3;
    // read-write - SCLK Port B Differential Output
    eSCKBDIFFOPT SCKBDIFFOPT : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Resume Wait Duration
    uint32_t RESUMEWAIT : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x200081F7; }
  static inline volatile MCR2 &ref() { return *reinterpret_cast<volatile MCR2*>(0x400CC008); }
};

// AHB Bus Control
union AHBCR {
  
  // AHB Parallel Mode Enable
  enum class eAPAREN : uint32_t {
    // Flash is accessed in Individual mode.
    eindividual = 0,
    // Flash is accessed in Parallel mode.
    eENABLE = 1,
  };
  
  // Clear AHB Receive Buffer
  enum class eCLRAHBRXBUF : uint32_t {
    // No impact.
    eval0 = 0,
    // Enable clear operation.
    eval1 = 1,
  };
  
  // Cacheable Read Access Enable
  enum class eCACHABLEEN : uint32_t {
    // Disabled. When an AHB bus cacheable read access occurs, FlexSPI does not check whether it hit the AHB transmit buffer.
    eval0 = 0,
    // Enabled. When an AHB bus cacheable read access occurs, FlexSPI first checks whether the access hit the AHB transmit buffer.
    eval1 = 1,
  };
  
  // Bufferable Write Access Enable
  enum class eBUFFERABLEEN : uint32_t {
    // Disabled. For all AHB write accesses (bufferable or nonbufferable), FlexSPI returns AHB Bus Ready after transmitting all data and finishing command.
    eval0 = 0,
    // Enabled. For AHB bufferable write access, FlexSPI returns AHB Bus Ready when the arbitrator grants the AHB command. FlexSPI does not wait for the AHB command to finish.
    eval1 = 1,
  };
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disable
    evalue0 = 0,
    // Enable
    evalue1 = 1,
  };
  
  // AHB Read Address Option
  enum class eREADADDROPT : uint32_t {
    // AHB read burst start address alignment is limited when flash memory is accessed in parallel mode or flash is word-addressable.
    eval0 = 0,
    // AHB read burst start address alignment is not limited. FlexSPI fetches more data than the AHB burst requires for address alignment.
    eval1 = 1,
  };
  
  // AHB Read Size Alignment
  enum class eREADSZALIGN : uint32_t {
    // Register settings such as PREFETCH_EN and OTFAD_EN determine AHB read size.
    eval0 = 0,
    // AHB read size to up size to 8 bytes aligned, no prefetching
    eval1 = 1,
  };
  
  // AHB Read ECC Enable
  enum class eECCEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // AHB Transaction Split Enable
  enum class eSPLITEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // AHB Split Limit Size
  enum class eSPLIT_LIMIT : uint32_t {
    // 8 bytes
    eval0 = 0,
    // 16 bytes
    eval1 = 1,
    // 32 bytes
    eval2 = 2,
    // 64 bytes
    eval3 = 3,
  };
  
  // OTFAD Key Blob ECC Enable
  enum class eKEYECCEN : uint32_t {
    // Disable
    eval0 = 0,
    // Enable
    eval1 = 1,
  };
  
  // AHB ECC Single-Bit Error Clear
  enum class eECCSINGLEERRCLR : uint32_t {
    // No function
    eval0 = 0,
    // Clear
    eval1 = 1,
  };
  
  // AHB ECC Multibit Error Clear
  enum class eECCMULTIERRCLR : uint32_t {
    // No function
    eval0 = 0,
    // Clear
    eval1 = 1,
  };
  
  // AHB Controller ID Remapping Enable
  enum class eHMSTRIDREMAP : uint32_t {
    // Disable
    eval0 = 0,
    // Enable
    eval1 = 1,
  };
  
  // ECC Read Data Swap Enable
  enum class eECCSWAPEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Parallel Mode Enable
    eAPAREN APAREN : 1;
    // read-write - Clear AHB Receive Buffer
    eCLRAHBRXBUF CLRAHBRXBUF : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Cacheable Read Access Enable
    eCACHABLEEN CACHABLEEN : 1;
    // read-write - Bufferable Write Access Enable
    eBUFFERABLEEN BUFFERABLEEN : 1;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
    // read-write - AHB Read Address Option
    eREADADDROPT READADDROPT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - AHB Read Size Alignment
    eREADSZALIGN READSZALIGN : 1;
    // read-write - AHB Read ECC Enable
    eECCEN ECCEN : 1;
    // read-write - AHB Transaction Split Enable
    eSPLITEN SPLITEN : 1;
    // read-write - AHB Split Limit Size
    eSPLIT_LIMIT SPLIT_LIMIT : 2;
    // read-write - OTFAD Key Blob ECC Enable
    eKEYECCEN KEYECCEN : 1;
    // read-write - AHB ECC Single-Bit Error Clear
    eECCSINGLEERRCLR ECCSINGLEERRCLR : 1;
    // read-write - AHB ECC Multibit Error Clear
    eECCMULTIERRCLR ECCMULTIERRCLR : 1;
    // read-write - AHB Controller ID Remapping Enable
    eHMSTRIDREMAP HMSTRIDREMAP : 1;
    // read-write - ECC Read Data Swap Enable
    eECCSWAPEN ECCSWAPEN : 1;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000018; }
  static inline volatile AHBCR &ref() { return *reinterpret_cast<volatile AHBCR*>(0x400CC00C); }
};

// Interrupt Enable
union INTEN {
  
  // IP-Triggered Command Sequences Execution Finished Interrupt Enable
  enum class eIPCMDDONEEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // IP-Triggered Command Sequences Grant Timeout Interrupt Enable
  enum class eIPCMDGEEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // AHB-Triggered Command Sequences Grant Timeout Interrupt Enable.
  enum class eAHBCMDGEEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // IP-Triggered Command Sequences Error Detected Interrupt Enable
  enum class eIPCMDERREN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // AHB-Triggered Command Sequences Error Detected Interrupt Enable
  enum class eAHBCMDERREN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // IP Receive FIFO Watermark Available Interrupt Enable
  enum class eIPRXWAEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // IP Transmit FIFO Watermark Empty Interrupt Enable
  enum class eIPTXWEEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // SCLK Stopped By Read Interrupt Enable
  enum class eSCKSTOPBYRDEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // SCLK Stopped By Write Interrupt Enable
  enum class eSCKSTOPBYWREN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // AHB Bus Error Interrupt Enable
  enum class eAHBBUSERROREN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // Sequence execution Timeout Interrupt Enable
  enum class eSEQTIMEOUTEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // OTFAD Key Blob Processing Done Interrupt Enable
  enum class eKEYDONEEN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // OTFAD Key Blob Processing Error Interrupt Enable
  enum class eKEYERROREN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // ECC Multibit Error Interrupt Enable
  enum class eECCMULTIERREN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // ECC Single-Bit Error Interrupt Enable
  enum class eECCSINGLEERREN : uint32_t {
    // Disable interrupt or no impact
    evalue0 = 0,
    // Enable interrupt
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - IP-Triggered Command Sequences Execution Finished Interrupt Enable
    eIPCMDDONEEN IPCMDDONEEN : 1;
    // read-write - IP-Triggered Command Sequences Grant Timeout Interrupt Enable
    eIPCMDGEEN IPCMDGEEN : 1;
    // read-write - AHB-Triggered Command Sequences Grant Timeout Interrupt Enable.
    eAHBCMDGEEN AHBCMDGEEN : 1;
    // read-write - IP-Triggered Command Sequences Error Detected Interrupt Enable
    eIPCMDERREN IPCMDERREN : 1;
    // read-write - AHB-Triggered Command Sequences Error Detected Interrupt Enable
    eAHBCMDERREN AHBCMDERREN : 1;
    // read-write - IP Receive FIFO Watermark Available Interrupt Enable
    eIPRXWAEN IPRXWAEN : 1;
    // read-write - IP Transmit FIFO Watermark Empty Interrupt Enable
    eIPTXWEEN IPTXWEEN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - SCLK Stopped By Read Interrupt Enable
    eSCKSTOPBYRDEN SCKSTOPBYRDEN : 1;
    // read-write - SCLK Stopped By Write Interrupt Enable
    eSCKSTOPBYWREN SCKSTOPBYWREN : 1;
    // read-write - AHB Bus Error Interrupt Enable
    eAHBBUSERROREN AHBBUSERROREN : 1;
    // read-write - Sequence execution Timeout Interrupt Enable
    eSEQTIMEOUTEN SEQTIMEOUTEN : 1;
    // read-write - OTFAD Key Blob Processing Done Interrupt Enable
    eKEYDONEEN KEYDONEEN : 1;
    // read-write - OTFAD Key Blob Processing Error Interrupt Enable
    eKEYERROREN KEYERROREN : 1;
    // read-write - ECC Multibit Error Interrupt Enable
    eECCMULTIERREN ECCMULTIERREN : 1;
    // read-write - ECC Single-Bit Error Interrupt Enable
    eECCSINGLEERREN ECCSINGLEERREN : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTEN &ref() { return *reinterpret_cast<volatile INTEN*>(0x400CC010); }
};

// Interrupt
union INTR {
  
  // IP-Triggered Command Sequences Execution Finished
  enum class eIPCMDDONE : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // IP-Triggered Command Sequences Grant Timeout
  enum class eIPCMDGE : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // AHB-Triggered Command Sequences Grant Timeout
  enum class eAHBCMDGE : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // IP-Triggered Command Sequences Error
  enum class eIPCMDERR : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // AHB-Triggered Command Sequences Error
  enum class eAHBCMDERR : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // IP Receive FIFO Watermark Available
  enum class eIPRXWA : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // IP Transmit FIFO Watermark Empty
  enum class eIPTXWE : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // SCLK Stopped Due To Full Receive FIFO
  enum class eSCKSTOPBYRD : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // SCLK Stopped Due To Empty Transmit FIFO
  enum class eSCKSTOPBYWR : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // AHB Bus Error
  enum class eAHBBUSERROR : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // Sequence Execution Timeout
  enum class eSEQTIMEOUT : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // OTFAD Key Blob Processing Error
  enum class eKEYERROR : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // ECC Multibit Error
  enum class eECCMULTIERR : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // ECC Single-Bit Error
  enum class eECCSINGLEERR : uint32_t {
    // Interrupt condition has not occurred
    eNO_INTERRUPT = 0,
    // Interrupt condition has occurred
    eINTERRUPT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - IP-Triggered Command Sequences Execution Finished
    eIPCMDDONE IPCMDDONE : 1;
    // read-write - IP-Triggered Command Sequences Grant Timeout
    eIPCMDGE IPCMDGE : 1;
    // read-write - AHB-Triggered Command Sequences Grant Timeout
    eAHBCMDGE AHBCMDGE : 1;
    // read-write - IP-Triggered Command Sequences Error
    eIPCMDERR IPCMDERR : 1;
    // read-write - AHB-Triggered Command Sequences Error
    eAHBCMDERR AHBCMDERR : 1;
    // read-write - IP Receive FIFO Watermark Available
    eIPRXWA IPRXWA : 1;
    // read-write - IP Transmit FIFO Watermark Empty
    eIPTXWE IPTXWE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - SCLK Stopped Due To Full Receive FIFO
    eSCKSTOPBYRD SCKSTOPBYRD : 1;
    // read-write - SCLK Stopped Due To Empty Transmit FIFO
    eSCKSTOPBYWR SCKSTOPBYWR : 1;
    // read-write - AHB Bus Error
    eAHBBUSERROR AHBBUSERROR : 1;
    // read-write - Sequence Execution Timeout
    eSEQTIMEOUT SEQTIMEOUT : 1;
    // read-write - OTFAD key blob processing done interrupt.
    uint32_t KEYDONE : 1;
    // read-only - OTFAD Key Blob Processing Error
    eKEYERROR KEYERROR : 1;
    // read-write - ECC Multibit Error
    eECCMULTIERR ECCMULTIERR : 1;
    // read-write - ECC Single-Bit Error
    eECCSINGLEERR ECCSINGLEERR : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTR &ref() { return *reinterpret_cast<volatile INTR*>(0x400CC014); }
};

// LUT Key
union LUTKEY {
  
  // Bit field definition.
  struct {
    // read-write - LUT Key
    uint32_t KEY : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x5AF05AF0; }
  static inline volatile LUTKEY &ref() { return *reinterpret_cast<volatile LUTKEY*>(0x400CC018); }
};

// LUT Control
union LUTCR {
  
  // Lock LUT
  enum class eLOCK : uint32_t {
    // LUT is unlocked (LUTCR[UNLOCK] must be 1)
    evalue0 = 0,
    // LUT is locked and cannot be written
    evalue1 = 1,
  };
  
  // Unlock LUT
  enum class eUNLOCK : uint32_t {
    // LUT is locked (LUTCR[LOCK] must be 1)
    evalue0 = 0,
    // LUT is unlocked and can be written
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Lock LUT
    eLOCK LOCK : 1;
    // read-write - Unlock LUT
    eUNLOCK UNLOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile LUTCR &ref() { return *reinterpret_cast<volatile LUTCR*>(0x400CC01C); }
};

// AHB Receive Buffer 0 Control 0
union AHBRXBUF0CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80000040; }
  static inline volatile AHBRXBUF0CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF0CR0*>(0x400CC020); }
};

// AHB Receive Buffer 1 Control 0
union AHBRXBUF1CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80010040; }
  static inline volatile AHBRXBUF1CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF1CR0*>(0x400CC024); }
};

// AHB Receive Buffer 2 Control 0
union AHBRXBUF2CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80020040; }
  static inline volatile AHBRXBUF2CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF2CR0*>(0x400CC028); }
};

// AHB Receive Buffer 3 Control 0
union AHBRXBUF3CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80030040; }
  static inline volatile AHBRXBUF3CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF3CR0*>(0x400CC02C); }
};

// AHB Receive Buffer 4 Control 0
union AHBRXBUF4CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80040040; }
  static inline volatile AHBRXBUF4CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF4CR0*>(0x400CC030); }
};

// AHB Receive Buffer 5 Control 0
union AHBRXBUF5CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80050040; }
  static inline volatile AHBRXBUF5CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF5CR0*>(0x400CC034); }
};

// AHB Receive Buffer 6 Control 0
union AHBRXBUF6CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80060040; }
  static inline volatile AHBRXBUF6CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF6CR0*>(0x400CC038); }
};

// AHB Receive Buffer 7 Control 0
union AHBRXBUF7CR0 {
  
  // AHB Read Prefetch Enable
  enum class ePREFETCHEN : uint32_t {
    // Disabled
    evalue0 = 0,
    // Enabled when is enabled.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Receive Buffer Size
    uint32_t BUFSZ : 10;
    uint32_t _reserved_0 : 6;
    // read-write - AHB Controller ID
    uint32_t MSTRID : 4;
    uint32_t _reserved_1 : 4;
    // read-write - AHB Controller Read Priority
    uint32_t PRIORITY : 3;
    uint32_t _reserved_2 : 4;
    // read-write - AHB Read Prefetch Enable
    ePREFETCHEN PREFETCHEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80070040; }
  static inline volatile AHBRXBUF7CR0 &ref() { return *reinterpret_cast<volatile AHBRXBUF7CR0*>(0x400CC03C); }
};

// Flash Control 0
union FLSHA1CR0 {
  
  // AHB Write Access Split Function Enable
  enum class eSPLITWREN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // AHB Read Access Split Function Enable
  enum class eSPLITRDEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    // read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    // read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHA1CR0 &ref() { return *reinterpret_cast<volatile FLSHA1CR0*>(0x400CC060); }
};

// Flash Control 0
union FLSHA2CR0 {
  
  // AHB Write Access Split Function Enable
  enum class eSPLITWREN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // AHB Read Access Split Function Enable
  enum class eSPLITRDEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    // read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    // read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHA2CR0 &ref() { return *reinterpret_cast<volatile FLSHA2CR0*>(0x400CC064); }
};

// Flash Control 0
union FLSHB1CR0 {
  
  // AHB Write Access Split Function Enable
  enum class eSPLITWREN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // AHB Read Access Split Function Enable
  enum class eSPLITRDEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    // read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    // read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHB1CR0 &ref() { return *reinterpret_cast<volatile FLSHB1CR0*>(0x400CC068); }
};

// Flash Control 0
union FLSHB2CR0 {
  
  // AHB Write Access Split Function Enable
  enum class eSPLITWREN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // AHB Read Access Split Function Enable
  enum class eSPLITRDEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Flash Size in KB
    uint32_t FLSHSZ : 23;
    uint32_t _reserved_0 : 7;
    // read-write - AHB Write Access Split Function Enable
    eSPLITWREN SPLITWREN : 1;
    // read-write - AHB Read Access Split Function Enable
    eSPLITRDEN SPLITRDEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile FLSHB2CR0 &ref() { return *reinterpret_cast<volatile FLSHB2CR0*>(0x400CC06C); }
};

// Flash Control 1
union FLSHCR1A1 {
  
  // Word-Addressable
  enum class eWA : uint32_t {
    // Byte-addressable
    evalue0 = 0,
    // Word-addressable
    evalue1 = 1,
  };
  
  // Chip Select Interval Unit
  enum class eCSINTERVALUNIT : uint32_t {
    // 1 serial clock cycle
    eval0 = 0,
    // 256 serial clock cycles
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    // read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    // read-write - Word-Addressable
    eWA WA : 1;
    // read-write - Column Address Size
    uint32_t CAS : 4;
    // read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    // read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1A1 &ref() { return *reinterpret_cast<volatile FLSHCR1A1*>(0x400CC070); }
};
// Flash Control 1
union FLSHCR1A2 {
  
  // Word-Addressable
  enum class eWA : uint32_t {
    // Byte-addressable
    evalue0 = 0,
    // Word-addressable
    evalue1 = 1,
  };
  
  // Chip Select Interval Unit
  enum class eCSINTERVALUNIT : uint32_t {
    // 1 serial clock cycle
    eval0 = 0,
    // 256 serial clock cycles
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    // read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    // read-write - Word-Addressable
    eWA WA : 1;
    // read-write - Column Address Size
    uint32_t CAS : 4;
    // read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    // read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1A2 &ref() { return *reinterpret_cast<volatile FLSHCR1A2*>(0x400CC074); }
};
// Flash Control 1
union FLSHCR1B1 {
  
  // Word-Addressable
  enum class eWA : uint32_t {
    // Byte-addressable
    evalue0 = 0,
    // Word-addressable
    evalue1 = 1,
  };
  
  // Chip Select Interval Unit
  enum class eCSINTERVALUNIT : uint32_t {
    // 1 serial clock cycle
    eval0 = 0,
    // 256 serial clock cycles
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    // read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    // read-write - Word-Addressable
    eWA WA : 1;
    // read-write - Column Address Size
    uint32_t CAS : 4;
    // read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    // read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1B1 &ref() { return *reinterpret_cast<volatile FLSHCR1B1*>(0x400CC078); }
};
// Flash Control 1
union FLSHCR1B2 {
  
  // Word-Addressable
  enum class eWA : uint32_t {
    // Byte-addressable
    evalue0 = 0,
    // Word-addressable
    evalue1 = 1,
  };
  
  // Chip Select Interval Unit
  enum class eCSINTERVALUNIT : uint32_t {
    // 1 serial clock cycle
    eval0 = 0,
    // 256 serial clock cycles
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Serial Flash CS Setup Time
    uint32_t TCSS : 5;
    // read-write - Serial Flash CS Hold Time
    uint32_t TCSH : 5;
    // read-write - Word-Addressable
    eWA WA : 1;
    // read-write - Column Address Size
    uint32_t CAS : 4;
    // read-write - Chip Select Interval Unit
    eCSINTERVALUNIT CSINTERVALUNIT : 1;
    // read-write - Chip Select Interval
    uint32_t CSINTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile FLSHCR1B2 &ref() { return *reinterpret_cast<volatile FLSHCR1B2*>(0x400CC07C); }
};

// Flash Control 2
union FLSHCR2A1 {
  
  // AWRWAIT Unit
  enum class eAWRWAITUNIT : uint32_t {
    // 2
    eval0 = 0,
    // 8
    eval1 = 1,
    // 32
    eval2 = 2,
    // 128
    eval3 = 3,
    // 512
    eval4 = 4,
    // 2048
    eval5 = 5,
    // 8192
    eval6 = 6,
    // 32768
    eval7 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    // read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    // read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    // read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    // read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    // read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    // read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2A1 &ref() { return *reinterpret_cast<volatile FLSHCR2A1*>(0x400CC080); }
};
// Flash Control 2
union FLSHCR2A2 {
  
  // AWRWAIT Unit
  enum class eAWRWAITUNIT : uint32_t {
    // 2
    eval0 = 0,
    // 8
    eval1 = 1,
    // 32
    eval2 = 2,
    // 128
    eval3 = 3,
    // 512
    eval4 = 4,
    // 2048
    eval5 = 5,
    // 8192
    eval6 = 6,
    // 32768
    eval7 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    // read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    // read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    // read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    // read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    // read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    // read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2A2 &ref() { return *reinterpret_cast<volatile FLSHCR2A2*>(0x400CC084); }
};
// Flash Control 2
union FLSHCR2B1 {
  
  // AWRWAIT Unit
  enum class eAWRWAITUNIT : uint32_t {
    // 2
    eval0 = 0,
    // 8
    eval1 = 1,
    // 32
    eval2 = 2,
    // 128
    eval3 = 3,
    // 512
    eval4 = 4,
    // 2048
    eval5 = 5,
    // 8192
    eval6 = 6,
    // 32768
    eval7 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    // read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    // read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    // read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    // read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    // read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    // read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2B1 &ref() { return *reinterpret_cast<volatile FLSHCR2B1*>(0x400CC088); }
};
// Flash Control 2
union FLSHCR2B2 {
  
  // AWRWAIT Unit
  enum class eAWRWAITUNIT : uint32_t {
    // 2
    eval0 = 0,
    // 8
    eval1 = 1,
    // 32
    eval2 = 2,
    // 128
    eval3 = 3,
    // 512
    eval4 = 4,
    // 2048
    eval5 = 5,
    // 8192
    eval6 = 6,
    // 32768
    eval7 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sequence Index for AHB Read-Triggered Command in LUT
    uint32_t ARDSEQID : 4;
    uint32_t _reserved_0 : 1;
    // read-write - Sequence Number for AHB Read-Triggered Command
    uint32_t ARDSEQNUM : 3;
    // read-write - Sequence Index for AHB Write-Triggered Command
    uint32_t AWRSEQID : 4;
    uint32_t _reserved_1 : 1;
    // read-write - Sequence Number for AHB Write-Triggered Command
    uint32_t AWRSEQNUM : 3;
    // read-write - AHB Write Wait
    uint32_t AWRWAIT : 12;
    // read-write - AWRWAIT Unit
    eAWRWAITUNIT AWRWAITUNIT : 3;
    // read-write - no description available
    uint32_t CLRINSTRPTR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLSHCR2B2 &ref() { return *reinterpret_cast<volatile FLSHCR2B2*>(0x400CC08C); }
};

// Flash Control 4
union FLSHCR4 {
  
  // Write Mask Option 1
  enum class eWMOPT1 : uint32_t {
    // When writing to an external device, DQS pin is used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst start address alignment is not limited.
    eDISABLE = 0,
    // When writing to an external device, DQS pin is not used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst start address alignment is limited.
    eENABLE = 1,
  };
  
  // Write Mask Option 2
  enum class eWMOPT2 : uint32_t {
    // When writing to an external device, DQS pin is used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst length is not limited.
    eval0 = 0,
    // When writing to an external device, DQS pin is not used as write mask. When flash memory is accessed in individual mode, AHB or IP write burst length is limited. The minimum write burst length should be 4.
    eval1 = 1,
  };
  
  // Write Mask Enable for Port A
  enum class eWMENA : uint32_t {
    // Disabled. When writing to external device, DQS(RWDS) pin is not driven.
    eval0 = 0,
    // Enabled. When writing to external device, FlexSPI drives DQS(RWDS) pin as write mask output.
    eval1 = 1,
  };
  
  // Write Mask Enable for Port B
  enum class eWMENB : uint32_t {
    // Disabled. When writing to external device, DQS(RWDS) pin is not driven.
    eval0 = 0,
    // Enabled. When writing to external device, FlexSPI drives DQS(RWDS) pin as write mask output.
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write Mask Option 1
    eWMOPT1 WMOPT1 : 1;
    // read-write - Write Mask Option 2
    eWMOPT2 WMOPT2 : 1;
    // read-write - Write Mask Enable for Port A
    eWMENA WMENA : 1;
    // read-write - Write Mask Enable for Port B
    eWMENB WMENB : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x000000C3; }
  static inline volatile FLSHCR4 &ref() { return *reinterpret_cast<volatile FLSHCR4*>(0x400CC094); }
};

// IP Control 0
union IPCR0 {
  
  // Bit field definition.
  struct {
    // read-write - Serial Flash Address
    uint32_t SFAR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR0 &ref() { return *reinterpret_cast<volatile IPCR0*>(0x400CC0A0); }
};

// IP Control 1
union IPCR1 {
  
  // Parallel Mode Enable for IP Commands
  enum class eIPAREN : uint32_t {
    // Disabled. Flash memory is accessed in Individual mode.
    eDISABLE = 0,
    // Enabled. Flash memory is accessed in Parallel mode.
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Flash Read/Program Data Size (in bytes) for IP command.
    uint32_t IDATSZ : 16;
    // read-write - Sequence Index in LUT for IP command.
    uint32_t ISEQID : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Sequence Number for IP command: ISEQNUM+1.
    uint32_t ISEQNUM : 3;
    uint32_t _reserved_1 : 4;
    // read-write - Parallel Mode Enable for IP Commands
    eIPAREN IPAREN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR1 &ref() { return *reinterpret_cast<volatile IPCR1*>(0x400CC0A4); }
};

// IP Command
union IPCMD {
  
  // Command Trigger
  enum class eTRG : uint32_t {
    // No action
    evalue0 = 0,
    // Start the IP command that the IPCR0 and IPCR1 registers define.
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Command Trigger
    eTRG TRG : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCMD &ref() { return *reinterpret_cast<volatile IPCMD*>(0x400CC0B0); }
};

// IP Receive FIFO Control
union IPRXFCR {
  
  // Clear IP Receive FIFO
  enum class eCLRIPRXF : uint32_t {
    // No function
    evalue0 = 0,
    // A clock cycle pulse clears all valid data entries in IP receive FIFO.
    evalue1 = 1,
  };
  
  // IP Receive FIFO Reading by DMA Enable
  enum class eRXDMAEN : uint32_t {
    // Disabled. The processor reads the FIFO.
    eval0 = 0,
    // Enabled. DMA reads the FIFO.
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clear IP Receive FIFO
    eCLRIPRXF CLRIPRXF : 1;
    // read-write - IP Receive FIFO Reading by DMA Enable
    eRXDMAEN RXDMAEN : 1;
    // read-write - IP Receive FIFO Watermark Level
    uint32_t RXWMRK : 5;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPRXFCR &ref() { return *reinterpret_cast<volatile IPRXFCR*>(0x400CC0B8); }
};

// IP Transmit FIFO Control
union IPTXFCR {
  
  // Clear IP Transmit FIFO
  enum class eCLRIPTXF : uint32_t {
    // No function
    evalue0 = 0,
    // A clock cycle pulse clears all valid data entries in the IP transmit FIFO.
    evalue1 = 1,
  };
  
  // Transmit FIFO DMA Enable
  enum class eTXDMAEN : uint32_t {
    // Processor
    eval0 = 0,
    // DMA
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clear IP Transmit FIFO
    eCLRIPTXF CLRIPTXF : 1;
    // read-write - Transmit FIFO DMA Enable
    eTXDMAEN TXDMAEN : 1;
    // read-write - Transmit Watermark Level
    uint32_t TXWMRK : 5;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPTXFCR &ref() { return *reinterpret_cast<volatile IPTXFCR*>(0x400CC0BC); }
};

// DLL Control 0
union DLLCRA {
  
  // DLL Calibration Enable
  enum class eDLLEN : uint32_t {
    // Disable
    evalue0 = 0,
    // Enable
    evalue1 = 1,
  };
  
  // DLL reset
  enum class eDLLRESET : uint32_t {
    // No function
    evalue0 = 0,
    // Force DLL reset.
    evalue1 = 1,
  };
  
  // Target Clock Delay Line Override Value Enable
  enum class eOVRDEN : uint32_t {
    // Disable
    evalue0 = 0,
    // Enable
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DLL Calibration Enable
    eDLLEN DLLEN : 1;
    // read-write - DLL reset
    eDLLRESET DLLRESET : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Target Delay Line
    uint32_t SLVDLYTARGET : 4;
    uint32_t _reserved_1 : 1;
    // read-write - Target Clock Delay Line Override Value Enable
    eOVRDEN OVRDEN : 1;
    // read-write - Target Clock Delay Line Override Value
    uint32_t OVRDVAL : 6;
    // read-write - Reference Clock Delay Line Phase Adjust Gap. REFPHASEGAP setting of 2h is recommended if DLLEN is set.
    uint32_t REFPHASEGAP : 2;
    uint32_t _reserved_2 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile DLLCRA &ref() { return *reinterpret_cast<volatile DLLCRA*>(0x400CC0C0); }
};
// DLL Control 0
union DLLCRB {
  
  // DLL Calibration Enable
  enum class eDLLEN : uint32_t {
    // Disable
    evalue0 = 0,
    // Enable
    evalue1 = 1,
  };
  
  // DLL reset
  enum class eDLLRESET : uint32_t {
    // No function
    evalue0 = 0,
    // Force DLL reset.
    evalue1 = 1,
  };
  
  // Target Clock Delay Line Override Value Enable
  enum class eOVRDEN : uint32_t {
    // Disable
    evalue0 = 0,
    // Enable
    evalue1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DLL Calibration Enable
    eDLLEN DLLEN : 1;
    // read-write - DLL reset
    eDLLRESET DLLRESET : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Target Delay Line
    uint32_t SLVDLYTARGET : 4;
    uint32_t _reserved_1 : 1;
    // read-write - Target Clock Delay Line Override Value Enable
    eOVRDEN OVRDEN : 1;
    // read-write - Target Clock Delay Line Override Value
    uint32_t OVRDVAL : 6;
    // read-write - Reference Clock Delay Line Phase Adjust Gap. REFPHASEGAP setting of 2h is recommended if DLLEN is set.
    uint32_t REFPHASEGAP : 2;
    uint32_t _reserved_2 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile DLLCRB &ref() { return *reinterpret_cast<volatile DLLCRB*>(0x400CC0C4); }
};

// Misc Control 4
union MISCCR4 {
  
  // Bit field definition.
  struct {
    // read-only - AHB Address
    uint32_t AHBADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR4 &ref() { return *reinterpret_cast<volatile MISCCR4*>(0x400CC0D0); }
};

// Miscellaneous Control 5
union MISCCR5 {
  
  // Bit field definition.
  struct {
    // read-only - ECC Single-Bit Error Correction Indicator
    uint32_t ECCSINGLEERRORCORR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR5 &ref() { return *reinterpret_cast<volatile MISCCR5*>(0x400CC0D4); }
};

// Miscellaneous Control 6
union MISCCR6 {
  
  // ECC Single-Bit Error Information Valid
  enum class eVALID : uint32_t {
    // Invalid
    eINVALID = 0,
    // Valid
    eVALID = 1,
  };
  
  // ECC Single-Bit Error Information Hit
  enum class eHIT : uint32_t {
    // Address not hit
    eNOT_HIT = 0,
    // Address hit
    eHIT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - ECC Single-Bit Error Information Valid
    eVALID VALID : 1;
    // read-only - ECC Single-Bit Error Information Hit
    eHIT HIT : 1;
    // read-only - ECC Single-Bit Error Address
    uint32_t ADDRESS : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR6 &ref() { return *reinterpret_cast<volatile MISCCR6*>(0x400CC0D8); }
};

// Miscellaneous Control 7
union MISCCR7 {
  
  // ECC Multibit Error Information Hit
  enum class eHIT : uint32_t {
    // Address not hit
    eNOT_HIT = 0,
    // Address hit
    eHIT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - ECC Multibit Error Information Valid
    uint32_t VALID : 1;
    // read-only - ECC Multibit Error Information Hit
    eHIT HIT : 1;
    // read-only - ECC multi error address
    uint32_t ADDRESS : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MISCCR7 &ref() { return *reinterpret_cast<volatile MISCCR7*>(0x400CC0DC); }
};

// Status 0
union STS0 {
  
  // SEQ_CTL State Machine Idle
  enum class eSEQIDLE : uint32_t {
    // Not idle
    evalue0 = 0,
    // Idle
    evalue1 = 1,
  };
  
  // ARB_CTL State Machine Idle
  enum class eARBIDLE : uint32_t {
    // Not idle
    evalue0 = 0,
    // Idle
    evalue1 = 1,
  };
  
  // ARB Command Source
  enum class eARBCMDSRC : uint32_t {
    // Trigger source is AHB read command.
    eval0 = 0,
    // Trigger source is AHB write command.
    eval1 = 1,
    // Trigger source is IP command (by writing 1 to IPCMD[TRG]).
    eval2 = 2,
    // Trigger source is a suspended command that has resumed.
    eval3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-only - SEQ_CTL State Machine Idle
    eSEQIDLE SEQIDLE : 1;
    // read-only - ARB_CTL State Machine Idle
    eARBIDLE ARBIDLE : 1;
    // read-only - ARB Command Source
    eARBCMDSRC ARBCMDSRC : 2;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile STS0 &ref() { return *reinterpret_cast<volatile STS0*>(0x400CC0E0); }
};

// Status 1
union STS1 {
  
  // AHB Command Error Code
  enum class eAHBCMDERRCODE : uint32_t {
    // No error
    eval0 = 0,
    // AHB Write command with JMP_ON_CS instruction used in the sequence
    eval2 = 2,
    // Unknown instruction opcode in the sequence
    eval3 = 3,
    // DUMMY_SDR or DUMMY_RWDS_SDR instruction used in DDR sequence
    eval4 = 4,
    // DUMMY_DDR or DUMMY_RWDS_DDR instruction used in SDR sequence
    eval5 = 5,
    // Sequence execution timeout
    eval6 = 14,
  };
  
  // IP Command Error Code
  enum class eIPCMDERRCODE : uint32_t {
    // No error
    eval0 = 0,
    // IP command with JMP_ON_CS instruction used in the sequence
    eval2 = 2,
    // Unknown instruction opcode in the sequence
    eval3 = 3,
    // DUMMY_SDR or DUMMY_RWDS_SDR instruction used in DDR sequence
    eval4 = 4,
    // DUMMY_DDR or DUMMY_RWDS_DDR instruction used in SDR sequence
    eval5 = 5,
    // Flash memory access start address exceeds entire flash address range (A1, A2, B1, and B2)
    eval6 = 6,
    // Sequence execution timeout
    eval7 = 14,
    // Flash boundary crossed
    eval8 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-only - AHB Command Error ID
    uint32_t AHBCMDERRID : 4;
    uint32_t _reserved_0 : 4;
    // read-only - AHB Command Error Code
    eAHBCMDERRCODE AHBCMDERRCODE : 4;
    uint32_t _reserved_1 : 4;
    // read-only - IP Command Error ID
    uint32_t IPCMDERRID : 4;
    uint32_t _reserved_2 : 4;
    // read-only - IP Command Error Code
    eIPCMDERRCODE IPCMDERRCODE : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS1 &ref() { return *reinterpret_cast<volatile STS1*>(0x400CC0E4); }
};

// Status 2
union STS2 {
  
  // Flash A Sample Target Delay Line Locked
  enum class eASLVLOCK : uint32_t {
    // Not locked
    eval0 = 0,
    // Locked
    eval1 = 1,
  };
  
  // Flash A Sample Clock Reference Delay Line Locked
  enum class eAREFLOCK : uint32_t {
    // Not locked
    eval0 = 0,
    // Locked
    eval1 = 1,
  };
  
  // Flash B Sample Target Reference Delay Line Locked
  enum class eBSLVLOCK : uint32_t {
    // Not locked
    eval0 = 0,
    // Locked
    eval1 = 1,
  };
  
  // Flash B Sample Clock Reference Delay Line Locked
  enum class eBREFLOCK : uint32_t {
    // Not locked
    eval0 = 0,
    // Locked
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Flash A Sample Target Delay Line Locked
    eASLVLOCK ASLVLOCK : 1;
    // read-only - Flash A Sample Clock Reference Delay Line Locked
    eAREFLOCK AREFLOCK : 1;
    // read-only - Flash A Sample Clock Target Delay Line Delay Cell Number
    uint32_t ASLVSEL : 6;
    // read-only - Flash A Sample Clock Reference Delay Line Delay Cell Number
    uint32_t AREFSEL : 6;
    uint32_t _reserved_0 : 2;
    // read-only - Flash B Sample Target Reference Delay Line Locked
    eBSLVLOCK BSLVLOCK : 1;
    // read-only - Flash B Sample Clock Reference Delay Line Locked
    eBREFLOCK BREFLOCK : 1;
    // read-only - Flash B Sample Clock Target Delay Line Delay Cell Number
    uint32_t BSLVSEL : 6;
    // read-only - Flash B Sample Clock Reference Delay Line Delay Cell Number
    uint32_t BREFSEL : 6;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x01000100; }
  static inline volatile STS2 &ref() { return *reinterpret_cast<volatile STS2*>(0x400CC0E8); }
};

// AHB Suspend Status
union AHBSPNDSTS {
  
  // Active AHB Read Prefetch Suspended
  enum class eACTIVE : uint32_t {
    // No suspended AHB read prefetch command.
    eval0 = 0,
    // An AHB read prefetch command sequence has been suspended.
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Active AHB Read Prefetch Suspended
    eACTIVE ACTIVE : 1;
    // read-only - AHB Receive Buffer ID for Suspended Command Sequence
    uint32_t BUFID : 3;
    uint32_t _reserved_0 : 12;
    // read-only - Data Left
    uint32_t DATLFT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AHBSPNDSTS &ref() { return *reinterpret_cast<volatile AHBSPNDSTS*>(0x400CC0EC); }
};

// IP Receive FIFO Status
union IPRXFSTS {
  
  // Bit field definition.
  struct {
    // read-only - Fill Level of IP Receive FIFO
    uint32_t FILL : 8;
    uint32_t _reserved_0 : 8;
    // read-only - Read Data Counter
    uint32_t RDCNTR : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPRXFSTS &ref() { return *reinterpret_cast<volatile IPRXFSTS*>(0x400CC0F0); }
};

// IP Transmit FIFO Status
union IPTXFSTS {
  
  // Bit field definition.
  struct {
    // read-only - Fill Level of IP Transmit FIFO
    uint32_t FILL : 8;
    uint32_t _reserved_0 : 8;
    // read-only - Write Data Counter
    uint32_t WRCNTR : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPTXFSTS &ref() { return *reinterpret_cast<volatile IPTXFSTS*>(0x400CC0F4); }
};

// IP Receive FIFO Data x
union RFDR_0 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_0 &ref() { return *reinterpret_cast<volatile RFDR_0*>(0x400CC100); }
};
// IP Receive FIFO Data x
union RFDR_1 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_1 &ref() { return *reinterpret_cast<volatile RFDR_1*>(0x400CC104); }
};
// IP Receive FIFO Data x
union RFDR_2 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_2 &ref() { return *reinterpret_cast<volatile RFDR_2*>(0x400CC108); }
};
// IP Receive FIFO Data x
union RFDR_3 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_3 &ref() { return *reinterpret_cast<volatile RFDR_3*>(0x400CC10C); }
};
// IP Receive FIFO Data x
union RFDR_4 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_4 &ref() { return *reinterpret_cast<volatile RFDR_4*>(0x400CC110); }
};
// IP Receive FIFO Data x
union RFDR_5 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_5 &ref() { return *reinterpret_cast<volatile RFDR_5*>(0x400CC114); }
};
// IP Receive FIFO Data x
union RFDR_6 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_6 &ref() { return *reinterpret_cast<volatile RFDR_6*>(0x400CC118); }
};
// IP Receive FIFO Data x
union RFDR_7 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_7 &ref() { return *reinterpret_cast<volatile RFDR_7*>(0x400CC11C); }
};
// IP Receive FIFO Data x
union RFDR_8 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_8 &ref() { return *reinterpret_cast<volatile RFDR_8*>(0x400CC120); }
};
// IP Receive FIFO Data x
union RFDR_9 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_9 &ref() { return *reinterpret_cast<volatile RFDR_9*>(0x400CC124); }
};
// IP Receive FIFO Data x
union RFDR_10 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_10 &ref() { return *reinterpret_cast<volatile RFDR_10*>(0x400CC128); }
};
// IP Receive FIFO Data x
union RFDR_11 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_11 &ref() { return *reinterpret_cast<volatile RFDR_11*>(0x400CC12C); }
};
// IP Receive FIFO Data x
union RFDR_12 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_12 &ref() { return *reinterpret_cast<volatile RFDR_12*>(0x400CC130); }
};
// IP Receive FIFO Data x
union RFDR_13 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_13 &ref() { return *reinterpret_cast<volatile RFDR_13*>(0x400CC134); }
};
// IP Receive FIFO Data x
union RFDR_14 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_14 &ref() { return *reinterpret_cast<volatile RFDR_14*>(0x400CC138); }
};
// IP Receive FIFO Data x
union RFDR_15 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_15 &ref() { return *reinterpret_cast<volatile RFDR_15*>(0x400CC13C); }
};
// IP Receive FIFO Data x
union RFDR_16 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_16 &ref() { return *reinterpret_cast<volatile RFDR_16*>(0x400CC140); }
};
// IP Receive FIFO Data x
union RFDR_17 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_17 &ref() { return *reinterpret_cast<volatile RFDR_17*>(0x400CC144); }
};
// IP Receive FIFO Data x
union RFDR_18 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_18 &ref() { return *reinterpret_cast<volatile RFDR_18*>(0x400CC148); }
};
// IP Receive FIFO Data x
union RFDR_19 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_19 &ref() { return *reinterpret_cast<volatile RFDR_19*>(0x400CC14C); }
};
// IP Receive FIFO Data x
union RFDR_20 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_20 &ref() { return *reinterpret_cast<volatile RFDR_20*>(0x400CC150); }
};
// IP Receive FIFO Data x
union RFDR_21 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_21 &ref() { return *reinterpret_cast<volatile RFDR_21*>(0x400CC154); }
};
// IP Receive FIFO Data x
union RFDR_22 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_22 &ref() { return *reinterpret_cast<volatile RFDR_22*>(0x400CC158); }
};
// IP Receive FIFO Data x
union RFDR_23 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_23 &ref() { return *reinterpret_cast<volatile RFDR_23*>(0x400CC15C); }
};
// IP Receive FIFO Data x
union RFDR_24 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_24 &ref() { return *reinterpret_cast<volatile RFDR_24*>(0x400CC160); }
};
// IP Receive FIFO Data x
union RFDR_25 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_25 &ref() { return *reinterpret_cast<volatile RFDR_25*>(0x400CC164); }
};
// IP Receive FIFO Data x
union RFDR_26 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_26 &ref() { return *reinterpret_cast<volatile RFDR_26*>(0x400CC168); }
};
// IP Receive FIFO Data x
union RFDR_27 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_27 &ref() { return *reinterpret_cast<volatile RFDR_27*>(0x400CC16C); }
};
// IP Receive FIFO Data x
union RFDR_28 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_28 &ref() { return *reinterpret_cast<volatile RFDR_28*>(0x400CC170); }
};
// IP Receive FIFO Data x
union RFDR_29 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_29 &ref() { return *reinterpret_cast<volatile RFDR_29*>(0x400CC174); }
};
// IP Receive FIFO Data x
union RFDR_30 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_30 &ref() { return *reinterpret_cast<volatile RFDR_30*>(0x400CC178); }
};
// IP Receive FIFO Data x
union RFDR_31 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data
    uint32_t RXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFDR_31 &ref() { return *reinterpret_cast<volatile RFDR_31*>(0x400CC17C); }
};

// IP TX FIFO Data x
union TFDR_0 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_0 &ref() { return *reinterpret_cast<volatile TFDR_0*>(0x400CC180); }
};
// IP TX FIFO Data x
union TFDR_1 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_1 &ref() { return *reinterpret_cast<volatile TFDR_1*>(0x400CC184); }
};
// IP TX FIFO Data x
union TFDR_2 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_2 &ref() { return *reinterpret_cast<volatile TFDR_2*>(0x400CC188); }
};
// IP TX FIFO Data x
union TFDR_3 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_3 &ref() { return *reinterpret_cast<volatile TFDR_3*>(0x400CC18C); }
};
// IP TX FIFO Data x
union TFDR_4 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_4 &ref() { return *reinterpret_cast<volatile TFDR_4*>(0x400CC190); }
};
// IP TX FIFO Data x
union TFDR_5 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_5 &ref() { return *reinterpret_cast<volatile TFDR_5*>(0x400CC194); }
};
// IP TX FIFO Data x
union TFDR_6 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_6 &ref() { return *reinterpret_cast<volatile TFDR_6*>(0x400CC198); }
};
// IP TX FIFO Data x
union TFDR_7 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_7 &ref() { return *reinterpret_cast<volatile TFDR_7*>(0x400CC19C); }
};
// IP TX FIFO Data x
union TFDR_8 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_8 &ref() { return *reinterpret_cast<volatile TFDR_8*>(0x400CC1A0); }
};
// IP TX FIFO Data x
union TFDR_9 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_9 &ref() { return *reinterpret_cast<volatile TFDR_9*>(0x400CC1A4); }
};
// IP TX FIFO Data x
union TFDR_10 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_10 &ref() { return *reinterpret_cast<volatile TFDR_10*>(0x400CC1A8); }
};
// IP TX FIFO Data x
union TFDR_11 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_11 &ref() { return *reinterpret_cast<volatile TFDR_11*>(0x400CC1AC); }
};
// IP TX FIFO Data x
union TFDR_12 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_12 &ref() { return *reinterpret_cast<volatile TFDR_12*>(0x400CC1B0); }
};
// IP TX FIFO Data x
union TFDR_13 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_13 &ref() { return *reinterpret_cast<volatile TFDR_13*>(0x400CC1B4); }
};
// IP TX FIFO Data x
union TFDR_14 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_14 &ref() { return *reinterpret_cast<volatile TFDR_14*>(0x400CC1B8); }
};
// IP TX FIFO Data x
union TFDR_15 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_15 &ref() { return *reinterpret_cast<volatile TFDR_15*>(0x400CC1BC); }
};
// IP TX FIFO Data x
union TFDR_16 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_16 &ref() { return *reinterpret_cast<volatile TFDR_16*>(0x400CC1C0); }
};
// IP TX FIFO Data x
union TFDR_17 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_17 &ref() { return *reinterpret_cast<volatile TFDR_17*>(0x400CC1C4); }
};
// IP TX FIFO Data x
union TFDR_18 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_18 &ref() { return *reinterpret_cast<volatile TFDR_18*>(0x400CC1C8); }
};
// IP TX FIFO Data x
union TFDR_19 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_19 &ref() { return *reinterpret_cast<volatile TFDR_19*>(0x400CC1CC); }
};
// IP TX FIFO Data x
union TFDR_20 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_20 &ref() { return *reinterpret_cast<volatile TFDR_20*>(0x400CC1D0); }
};
// IP TX FIFO Data x
union TFDR_21 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_21 &ref() { return *reinterpret_cast<volatile TFDR_21*>(0x400CC1D4); }
};
// IP TX FIFO Data x
union TFDR_22 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_22 &ref() { return *reinterpret_cast<volatile TFDR_22*>(0x400CC1D8); }
};
// IP TX FIFO Data x
union TFDR_23 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_23 &ref() { return *reinterpret_cast<volatile TFDR_23*>(0x400CC1DC); }
};
// IP TX FIFO Data x
union TFDR_24 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_24 &ref() { return *reinterpret_cast<volatile TFDR_24*>(0x400CC1E0); }
};
// IP TX FIFO Data x
union TFDR_25 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_25 &ref() { return *reinterpret_cast<volatile TFDR_25*>(0x400CC1E4); }
};
// IP TX FIFO Data x
union TFDR_26 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_26 &ref() { return *reinterpret_cast<volatile TFDR_26*>(0x400CC1E8); }
};
// IP TX FIFO Data x
union TFDR_27 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_27 &ref() { return *reinterpret_cast<volatile TFDR_27*>(0x400CC1EC); }
};
// IP TX FIFO Data x
union TFDR_28 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_28 &ref() { return *reinterpret_cast<volatile TFDR_28*>(0x400CC1F0); }
};
// IP TX FIFO Data x
union TFDR_29 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_29 &ref() { return *reinterpret_cast<volatile TFDR_29*>(0x400CC1F4); }
};
// IP TX FIFO Data x
union TFDR_30 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_30 &ref() { return *reinterpret_cast<volatile TFDR_30*>(0x400CC1F8); }
};
// IP TX FIFO Data x
union TFDR_31 {
  
  // Bit field definition.
  struct {
    // write-only - Transmit Data
    uint32_t TXDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFDR_31 &ref() { return *reinterpret_cast<volatile TFDR_31*>(0x400CC1FC); }
};

// Lookup Table x
union LUT_0 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_0 &ref() { return *reinterpret_cast<volatile LUT_0*>(0x400CC200); }
};
// Lookup Table x
union LUT_1 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_1 &ref() { return *reinterpret_cast<volatile LUT_1*>(0x400CC204); }
};
// Lookup Table x
union LUT_2 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_2 &ref() { return *reinterpret_cast<volatile LUT_2*>(0x400CC208); }
};
// Lookup Table x
union LUT_3 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_3 &ref() { return *reinterpret_cast<volatile LUT_3*>(0x400CC20C); }
};
// Lookup Table x
union LUT_4 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_4 &ref() { return *reinterpret_cast<volatile LUT_4*>(0x400CC210); }
};
// Lookup Table x
union LUT_5 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_5 &ref() { return *reinterpret_cast<volatile LUT_5*>(0x400CC214); }
};
// Lookup Table x
union LUT_6 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_6 &ref() { return *reinterpret_cast<volatile LUT_6*>(0x400CC218); }
};
// Lookup Table x
union LUT_7 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_7 &ref() { return *reinterpret_cast<volatile LUT_7*>(0x400CC21C); }
};
// Lookup Table x
union LUT_8 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_8 &ref() { return *reinterpret_cast<volatile LUT_8*>(0x400CC220); }
};
// Lookup Table x
union LUT_9 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_9 &ref() { return *reinterpret_cast<volatile LUT_9*>(0x400CC224); }
};
// Lookup Table x
union LUT_10 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_10 &ref() { return *reinterpret_cast<volatile LUT_10*>(0x400CC228); }
};
// Lookup Table x
union LUT_11 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_11 &ref() { return *reinterpret_cast<volatile LUT_11*>(0x400CC22C); }
};
// Lookup Table x
union LUT_12 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_12 &ref() { return *reinterpret_cast<volatile LUT_12*>(0x400CC230); }
};
// Lookup Table x
union LUT_13 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_13 &ref() { return *reinterpret_cast<volatile LUT_13*>(0x400CC234); }
};
// Lookup Table x
union LUT_14 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_14 &ref() { return *reinterpret_cast<volatile LUT_14*>(0x400CC238); }
};
// Lookup Table x
union LUT_15 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_15 &ref() { return *reinterpret_cast<volatile LUT_15*>(0x400CC23C); }
};
// Lookup Table x
union LUT_16 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_16 &ref() { return *reinterpret_cast<volatile LUT_16*>(0x400CC240); }
};
// Lookup Table x
union LUT_17 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_17 &ref() { return *reinterpret_cast<volatile LUT_17*>(0x400CC244); }
};
// Lookup Table x
union LUT_18 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_18 &ref() { return *reinterpret_cast<volatile LUT_18*>(0x400CC248); }
};
// Lookup Table x
union LUT_19 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_19 &ref() { return *reinterpret_cast<volatile LUT_19*>(0x400CC24C); }
};
// Lookup Table x
union LUT_20 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_20 &ref() { return *reinterpret_cast<volatile LUT_20*>(0x400CC250); }
};
// Lookup Table x
union LUT_21 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_21 &ref() { return *reinterpret_cast<volatile LUT_21*>(0x400CC254); }
};
// Lookup Table x
union LUT_22 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_22 &ref() { return *reinterpret_cast<volatile LUT_22*>(0x400CC258); }
};
// Lookup Table x
union LUT_23 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_23 &ref() { return *reinterpret_cast<volatile LUT_23*>(0x400CC25C); }
};
// Lookup Table x
union LUT_24 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_24 &ref() { return *reinterpret_cast<volatile LUT_24*>(0x400CC260); }
};
// Lookup Table x
union LUT_25 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_25 &ref() { return *reinterpret_cast<volatile LUT_25*>(0x400CC264); }
};
// Lookup Table x
union LUT_26 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_26 &ref() { return *reinterpret_cast<volatile LUT_26*>(0x400CC268); }
};
// Lookup Table x
union LUT_27 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_27 &ref() { return *reinterpret_cast<volatile LUT_27*>(0x400CC26C); }
};
// Lookup Table x
union LUT_28 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_28 &ref() { return *reinterpret_cast<volatile LUT_28*>(0x400CC270); }
};
// Lookup Table x
union LUT_29 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_29 &ref() { return *reinterpret_cast<volatile LUT_29*>(0x400CC274); }
};
// Lookup Table x
union LUT_30 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_30 &ref() { return *reinterpret_cast<volatile LUT_30*>(0x400CC278); }
};
// Lookup Table x
union LUT_31 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_31 &ref() { return *reinterpret_cast<volatile LUT_31*>(0x400CC27C); }
};
// Lookup Table x
union LUT_32 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_32 &ref() { return *reinterpret_cast<volatile LUT_32*>(0x400CC280); }
};
// Lookup Table x
union LUT_33 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_33 &ref() { return *reinterpret_cast<volatile LUT_33*>(0x400CC284); }
};
// Lookup Table x
union LUT_34 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_34 &ref() { return *reinterpret_cast<volatile LUT_34*>(0x400CC288); }
};
// Lookup Table x
union LUT_35 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_35 &ref() { return *reinterpret_cast<volatile LUT_35*>(0x400CC28C); }
};
// Lookup Table x
union LUT_36 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_36 &ref() { return *reinterpret_cast<volatile LUT_36*>(0x400CC290); }
};
// Lookup Table x
union LUT_37 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_37 &ref() { return *reinterpret_cast<volatile LUT_37*>(0x400CC294); }
};
// Lookup Table x
union LUT_38 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_38 &ref() { return *reinterpret_cast<volatile LUT_38*>(0x400CC298); }
};
// Lookup Table x
union LUT_39 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_39 &ref() { return *reinterpret_cast<volatile LUT_39*>(0x400CC29C); }
};
// Lookup Table x
union LUT_40 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_40 &ref() { return *reinterpret_cast<volatile LUT_40*>(0x400CC2A0); }
};
// Lookup Table x
union LUT_41 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_41 &ref() { return *reinterpret_cast<volatile LUT_41*>(0x400CC2A4); }
};
// Lookup Table x
union LUT_42 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_42 &ref() { return *reinterpret_cast<volatile LUT_42*>(0x400CC2A8); }
};
// Lookup Table x
union LUT_43 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_43 &ref() { return *reinterpret_cast<volatile LUT_43*>(0x400CC2AC); }
};
// Lookup Table x
union LUT_44 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_44 &ref() { return *reinterpret_cast<volatile LUT_44*>(0x400CC2B0); }
};
// Lookup Table x
union LUT_45 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_45 &ref() { return *reinterpret_cast<volatile LUT_45*>(0x400CC2B4); }
};
// Lookup Table x
union LUT_46 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_46 &ref() { return *reinterpret_cast<volatile LUT_46*>(0x400CC2B8); }
};
// Lookup Table x
union LUT_47 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_47 &ref() { return *reinterpret_cast<volatile LUT_47*>(0x400CC2BC); }
};
// Lookup Table x
union LUT_48 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_48 &ref() { return *reinterpret_cast<volatile LUT_48*>(0x400CC2C0); }
};
// Lookup Table x
union LUT_49 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_49 &ref() { return *reinterpret_cast<volatile LUT_49*>(0x400CC2C4); }
};
// Lookup Table x
union LUT_50 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_50 &ref() { return *reinterpret_cast<volatile LUT_50*>(0x400CC2C8); }
};
// Lookup Table x
union LUT_51 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_51 &ref() { return *reinterpret_cast<volatile LUT_51*>(0x400CC2CC); }
};
// Lookup Table x
union LUT_52 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_52 &ref() { return *reinterpret_cast<volatile LUT_52*>(0x400CC2D0); }
};
// Lookup Table x
union LUT_53 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_53 &ref() { return *reinterpret_cast<volatile LUT_53*>(0x400CC2D4); }
};
// Lookup Table x
union LUT_54 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_54 &ref() { return *reinterpret_cast<volatile LUT_54*>(0x400CC2D8); }
};
// Lookup Table x
union LUT_55 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_55 &ref() { return *reinterpret_cast<volatile LUT_55*>(0x400CC2DC); }
};
// Lookup Table x
union LUT_56 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_56 &ref() { return *reinterpret_cast<volatile LUT_56*>(0x400CC2E0); }
};
// Lookup Table x
union LUT_57 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_57 &ref() { return *reinterpret_cast<volatile LUT_57*>(0x400CC2E4); }
};
// Lookup Table x
union LUT_58 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_58 &ref() { return *reinterpret_cast<volatile LUT_58*>(0x400CC2E8); }
};
// Lookup Table x
union LUT_59 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_59 &ref() { return *reinterpret_cast<volatile LUT_59*>(0x400CC2EC); }
};
// Lookup Table x
union LUT_60 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_60 &ref() { return *reinterpret_cast<volatile LUT_60*>(0x400CC2F0); }
};
// Lookup Table x
union LUT_61 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_61 &ref() { return *reinterpret_cast<volatile LUT_61*>(0x400CC2F4); }
};
// Lookup Table x
union LUT_62 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_62 &ref() { return *reinterpret_cast<volatile LUT_62*>(0x400CC2F8); }
};
// Lookup Table x
union LUT_63 {
  
  // Bit field definition.
  struct {
    // read-write - OPERAND0
    uint32_t OPERAND0 : 8;
    // read-write - NUM_PADS0
    uint32_t NUM_PADS0 : 2;
    // read-write - OPCODE
    uint32_t OPCODE0 : 6;
    // read-write - OPERAND1
    uint32_t OPERAND1 : 8;
    // read-write - NUM_PADS1
    uint32_t NUM_PADS1 : 2;
    // read-write - OPCODE1
    uint32_t OPCODE1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LUT_63 &ref() { return *reinterpret_cast<volatile LUT_63*>(0x400CC2FC); }
};

// AHB Controller ID 0 Control
union HMSTR0CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0040FFCF; }
  static inline volatile HMSTR0CR &ref() { return *reinterpret_cast<volatile HMSTR0CR*>(0x400CC400); }
};

// AHB Controller ID 1 Control
union HMSTR1CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000FFCF; }
  static inline volatile HMSTR1CR &ref() { return *reinterpret_cast<volatile HMSTR1CR*>(0x400CC404); }
};

// AHB Controller ID 2 Control
union HMSTR2CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0004F00F; }
  static inline volatile HMSTR2CR &ref() { return *reinterpret_cast<volatile HMSTR2CR*>(0x400CC408); }
};

// AHB Controller ID 3 Control
union HMSTR3CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0022807F; }
  static inline volatile HMSTR3CR &ref() { return *reinterpret_cast<volatile HMSTR3CR*>(0x400CC40C); }
};

// AHB Controller ID 4 Control
union HMSTR4CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0032F87F; }
  static inline volatile HMSTR4CR &ref() { return *reinterpret_cast<volatile HMSTR4CR*>(0x400CC410); }
};

// AHB Controller ID 5 Control
union HMSTR5CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0011F87F; }
  static inline volatile HMSTR5CR &ref() { return *reinterpret_cast<volatile HMSTR5CR*>(0x400CC414); }
};

// AHB Controller ID 6 Control
union HMSTR6CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HMSTR6CR &ref() { return *reinterpret_cast<volatile HMSTR6CR*>(0x400CC418); }
};

// AHB Controller ID 7 Control
union HMSTR7CR {
  
  // Mask bits for AHB Controller ID.
  enum class eMASK : uint32_t {
    // Mask
    eDISABLE = 0,
    // Unmask
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Mask bits for AHB Controller ID.
    eMASK MASK : 16;
    // read-write - Controller ID
    uint32_t MSTRID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HMSTR7CR &ref() { return *reinterpret_cast<volatile HMSTR7CR*>(0x400CC41C); }
};

// HADDR REMAP Start Address
union HADDRSTART {
  
  // AHB Bus Address Remap Enable
  enum class eREMAPEN : uint32_t {
    // HADDR REMAP Disabled
    eval0 = 0,
    // HADDR REMAP Enabled
    eval1 = 1,
  };
  
  // OTFAD Keyblob in ECC
  enum class eKBINECC : uint32_t {
    // FlexSPI fetches keyblob at base address + offset
    eval0 = 0,
    // FlexSPI fetches keyblob at base address + offset * 2
    eval1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHB Bus Address Remap Enable
    eREMAPEN REMAPEN : 1;
    // read-write - OTFAD Keyblob in ECC
    eKBINECC KBINECC : 1;
    uint32_t _reserved_0 : 10;
    // read-write - HADDR Start Address
    uint32_t ADDRSTART : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HADDRSTART &ref() { return *reinterpret_cast<volatile HADDRSTART*>(0x400CC420); }
};

// HADDR REMAP END ADDR
union HADDREND {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-write - End Address of HADDR Remap Range
    uint32_t ENDSTART : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HADDREND &ref() { return *reinterpret_cast<volatile HADDREND*>(0x400CC424); }
};

// HADDR Remap Offset
union HADDROFFSET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-write - HADDR Offset
    uint32_t ADDROFFSET : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HADDROFFSET &ref() { return *reinterpret_cast<volatile HADDROFFSET*>(0x400CC428); }
};


} // namespace nFLEXSPI1