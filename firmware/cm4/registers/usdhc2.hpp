#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // uSDHC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nUSDHC2 {


// DMA System Address
//
union DS_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t DS_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DS_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DS_ADDR &Instance() { return *reinterpret_cast<volatile DS_ADDR*>(0x4041C000); }
};

// Block Attributes
//
union BLK_ATT {
  
  enum class eBLKSIZE : uint32_t {
    eBLKSIZE_0 = 0, // No data transfer
    eBLKSIZE_1 = 1, // 1 byte
    eBLKSIZE_2 = 2, // 2 bytes
    eBLKSIZE_3 = 3, // 3 bytes
    eBLKSIZE_4 = 4, // 4 bytes
    eBLKSIZE_511 = 511, // 511 bytes
    eBLKSIZE_512 = 512, // 512 bytes
    eBLKSIZE_2048 = 2048, // 2048 bytes
    eBLKSIZE_4096 = 4096, // 4096 bytes
  };
  
  enum class eBLKCNT : uint32_t {
    eBLKCNT_0 = 0, // Stop count
    eBLKCNT_1 = 1, // 1 block
    eBLKCNT_2 = 2, // 2 blocks
    eBLKCNT_65535 = 65535, // 65535 blocks
  };
  
  // Bit field definition.
  struct {
    eBLKSIZE BLKSIZE : 13;
    uint32_t _reserved_1 : 3;
    eBLKCNT BLKCNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BLK_ATT() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile BLK_ATT &Instance() { return *reinterpret_cast<volatile BLK_ATT*>(0x4041C004); }
};

// Command Argument
//
union CMD_ARG {
  
  // Bit field definition.
  struct {
    uint32_t CMDARG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_ARG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_ARG &Instance() { return *reinterpret_cast<volatile CMD_ARG*>(0x4041C008); }
};

// Command Transfer Type
//
union CMD_XFR_TYP {
  
  enum class eRSPTYP : uint32_t {
    eRSPTYP_0 = 0, // No response
    eRSPTYP_1 = 1, // Response length 136
    eRSPTYP_2 = 2, // Response length 48
    eRSPTYP_3 = 3, // Response length 48, check busy after response
  };
  
  enum class eCCCEN : uint32_t {
    eCCCEN_0 = 0, // Disables command CRC check
    eCCCEN_1 = 1, // Enables command CRC check
  };
  
  enum class eCICEN : uint32_t {
    eCICEN_0 = 0, // Disable command index check
    eCICEN_1 = 1, // Enables command index check
  };
  
  enum class eDPSEL : uint32_t {
    eDPSEL_0 = 0, // No data present
    eDPSEL_1 = 1, // Data present
  };
  
  enum class eCMDTYP : uint32_t {
    eCMDTYP_0 = 0, // Normal other commands
    eCMDTYP_1 = 1, // Suspend CMD52 for writing bus suspend in CCCR
    eCMDTYP_2 = 2, // Resume CMD52 for writing function select in CCCR
    eCMDTYP_3 = 3, // Abort CMD12, CMD52 for writing I/O Abort in CCCR
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    eRSPTYP RSPTYP : 2;
    uint32_t _reserved_1 : 1;
    eCCCEN CCCEN : 1;
    eCICEN CICEN : 1;
    eDPSEL DPSEL : 1;
    eCMDTYP CMDTYP : 2;
    uint32_t CMDINX : 6;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_XFR_TYP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_XFR_TYP &Instance() { return *reinterpret_cast<volatile CMD_XFR_TYP*>(0x4041C00C); }
};

// Command Response0
//
union CMD_RSP0 {
  
  // Bit field definition.
  struct {
    uint32_t CMDRSP0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP0 &Instance() { return *reinterpret_cast<volatile CMD_RSP0*>(0x4041C010); }
};

// Command Response1
//
union CMD_RSP1 {
  
  // Bit field definition.
  struct {
    uint32_t CMDRSP1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP1 &Instance() { return *reinterpret_cast<volatile CMD_RSP1*>(0x4041C014); }
};

// Command Response2
//
union CMD_RSP2 {
  
  // Bit field definition.
  struct {
    uint32_t CMDRSP2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP2 &Instance() { return *reinterpret_cast<volatile CMD_RSP2*>(0x4041C018); }
};

// Command Response3
//
union CMD_RSP3 {
  
  // Bit field definition.
  struct {
    uint32_t CMDRSP3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP3 &Instance() { return *reinterpret_cast<volatile CMD_RSP3*>(0x4041C01C); }
};

// Data Buffer Access Port
//
union DATA_BUFF_ACC_PORT {
  
  // Bit field definition.
  struct {
    uint32_t DATCONT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATA_BUFF_ACC_PORT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATA_BUFF_ACC_PORT &Instance() { return *reinterpret_cast<volatile DATA_BUFF_ACC_PORT*>(0x4041C020); }
};

// Present State
//
union PRES_STATE {
  
  enum class eCIHB : uint32_t {
    eCIHB_0 = 0, // Can issue command using only CMD line
    eCIHB_1 = 1, // Cannot issue command
  };
  
  enum class eCDIHB : uint32_t {
    eCDIHB_0 = 0, // Can issue command that uses the DATA line
    eCDIHB_1 = 1, // Cannot issue command that uses the DATA line
  };
  
  enum class eDLA : uint32_t {
    eDLA_0 = 0, // DATA line inactive
    eDLA_1 = 1, // DATA line active
  };
  
  enum class eSDSTB : uint32_t {
    eSDSTB_0 = 0, // Clock is changing frequency and not stable.
    eSDSTB_1 = 1, // Clock is stable.
  };
  
  enum class eIPGOFF : uint32_t {
    eIPGOFF_0 = 0, // Peripheral clock is active.
    eIPGOFF_1 = 1, // Peripheral clock is gated off.
  };
  
  enum class eHCKOFF : uint32_t {
    eHCKOFF_0 = 0, // HCLK is active.
    eHCKOFF_1 = 1, // HCLK is gated off.
  };
  
  enum class ePEROFF : uint32_t {
    ePEROFF_0 = 0, // IPG_PERCLK is active.
    ePEROFF_1 = 1, // IPG_PERCLK is gated off.
  };
  
  enum class eSDOFF : uint32_t {
    eSDOFF_0 = 0, // SD clock is active.
    eSDOFF_1 = 1, // SD clock is gated off.
  };
  
  enum class eWTA : uint32_t {
    eWTA_0 = 0, // No valid data
    eWTA_1 = 1, // Transferring data
  };
  
  enum class eRTA : uint32_t {
    eRTA_0 = 0, // No valid data
    eRTA_1 = 1, // Transferring data
  };
  
  enum class eBWEN : uint32_t {
    eBWEN_0 = 0, // Write disable
    eBWEN_1 = 1, // Write enable
  };
  
  enum class eBREN : uint32_t {
    eBREN_0 = 0, // Read disable
    eBREN_1 = 1, // Read enable
  };
  
  enum class eRTR : uint32_t {
    eRTR_0 = 0, // Fixed or well tuned sampling clock
    eRTR_1 = 1, // Sampling clock needs re-tuning
  };
  
  enum class eTSCD : uint32_t {
    eTSCD_0 = 0, // Delay cell select change is not finished.
    eTSCD_1 = 1, // Delay cell select change is finished.
  };
  
  enum class eCINST : uint32_t {
    eCINST_0 = 0, // Power on reset or no card
    eCINST_1 = 1, // Card inserted
  };
  
  enum class eCDPL : uint32_t {
    eCDPL_0 = 0, // No card present (CD_B = 1)
    eCDPL_1 = 1, // Card present (CD_B = 0)
  };
  
  enum class eWPSPL : uint32_t {
    eWPSPL_0 = 0, // Write protected (WP = 1)
    eWPSPL_1 = 1, // Write enabled (WP = 0)
  };
  
  enum class eDLSL : uint32_t {
    eDATA0 = 0, // Data 0 line signal level
    eDATA1 = 1, // Data 1 line signal level
    eDATA2 = 2, // Data 2 line signal level
    eDATA3 = 3, // Data 3 line signal level
    eDATA4 = 4, // Data 4 line signal level
    eDATA5 = 5, // Data 5 line signal level
    eDATA6 = 6, // Data 6 line signal level
    eDATA7 = 7, // Data 7 line signal level
  };
  
  // Bit field definition.
  struct {
    eCIHB CIHB : 1;
    eCDIHB CDIHB : 1;
    eDLA DLA : 1;
    eSDSTB SDSTB : 1;
    eIPGOFF IPGOFF : 1;
    eHCKOFF HCKOFF : 1;
    ePEROFF PEROFF : 1;
    eSDOFF SDOFF : 1;
    eWTA WTA : 1;
    eRTA RTA : 1;
    eBWEN BWEN : 1;
    eBREN BREN : 1;
    eRTR RTR : 1;
    uint32_t _reserved_13 : 2;
    eTSCD TSCD : 1;
    eCINST CINST : 1;
    uint32_t _reserved_15 : 1;
    eCDPL CDPL : 1;
    eWPSPL WPSPL : 1;
    uint32_t _reserved_17 : 3;
    uint32_t CLSL : 1;
    eDLSL DLSL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PRES_STATE() = delete;
  inline void Reset() volatile { this->value = 0x00008080; }
  static inline volatile PRES_STATE &Instance() { return *reinterpret_cast<volatile PRES_STATE*>(0x4041C024); }
};

// Protocol Control
//
union PROT_CTRL {
  
  enum class eDTW : uint32_t {
    eDTW_0 = 0, // 1-bit mode
    eDTW_1 = 1, // 4-bit mode
    eDTW_2 = 2, // 8-bit mode
  };
  
  enum class eD3CD : uint32_t {
    eD3CD_0 = 0, // DATA3 does not monitor card insertion
    eD3CD_1 = 1, // DATA3 as card detection pin
  };
  
  enum class eEMODE : uint32_t {
    eEMODE_0 = 0, // Big endian mode
    eEMODE_1 = 1, // Half word big endian mode
    eEMODE_2 = 2, // Little endian mode
  };
  
  enum class eCDTL : uint32_t {
    eCDTL_0 = 0, // Card detect test level is 0, no card inserted
    eCDTL_1 = 1, // Card detect test level is 1, card inserted
  };
  
  enum class eCDSS : uint32_t {
    eCDSS_0 = 0, // Card detection level is selected (for normal purpose).
    eCDSS_1 = 1, // Card detection test level is selected (for test purpose).
  };
  
  enum class eDMASEL : uint32_t {
    eDMASEL_0 = 0, // No DMA or simple DMA is selected.
    eDMASEL_1 = 1, // ADMA1 is selected.
    eDMASEL_2 = 2, // ADMA2 is selected.
  };
  
  enum class eSABGREQ : uint32_t {
    eSABGREQ_0 = 0, // Transfer
    eSABGREQ_1 = 1, // Stop
  };
  
  enum class eCREQ : uint32_t {
    eCREQ_0 = 0, // No effect
    eCREQ_1 = 1, // Restart
  };
  
  enum class eRWCTL : uint32_t {
    eRWCTL_0 = 0, // Disables read wait control and stop SD clock at block gap when SABGREQ field is set
    eRWCTL_1 = 1, // Enables read wait control and assert read wait without stopping SD clock at block gap when SABGREQ field is set
  };
  
  enum class eIABG : uint32_t {
    eIABG_0 = 0, // Disables interrupt at block gap
    eIABG_1 = 1, // Enables interrupt at block gap
  };
  
  enum class eWECINT : uint32_t {
    eWECINT_0 = 0, // Disables wakeup event enable on card interrupt
    eWECINT_1 = 1, // Enables wakeup event enable on card interrupt
  };
  
  enum class eWECINS : uint32_t {
    eWECINS_0 = 0, // Disable wakeup event enable on SD card insertion
    eWECINS_1 = 1, // Enable wakeup event enable on SD card insertion
  };
  
  enum class eWECRM : uint32_t {
    eWECRM_0 = 0, // Disables wakeup event enable on SD card removal
    eWECRM_1 = 1, // Enables wakeup event enable on SD card removal
  };
  
  enum class eNON_EXACT_BLK_RD : uint32_t {
    eNON_EXACT_BLK_RD_0 = 0, // The block read is exact block read. Host driver does not need to issue abort command to terminate this multi-block read.
    eNON_EXACT_BLK_RD_1 = 1, // The block read is non-exact block read. Host driver needs to issue abort command to terminate this multi-block read.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eDTW DTW : 2;
    eD3CD D3CD : 1;
    eEMODE EMODE : 2;
    eCDTL CDTL : 1;
    eCDSS CDSS : 1;
    eDMASEL DMASEL : 2;
    uint32_t _reserved_6 : 6;
    eSABGREQ SABGREQ : 1;
    eCREQ CREQ : 1;
    eRWCTL RWCTL : 1;
    eIABG IABG : 1;
    uint32_t RD_DONE_NO_8CLK : 1;
    uint32_t _reserved_11 : 3;
    eWECINT WECINT : 1;
    eWECINS WECINS : 1;
    eWECRM WECRM : 1;
    uint32_t _reserved_14 : 3;
    eNON_EXACT_BLK_RD NON_EXACT_BLK_RD : 1;
    uint32_t _reserved_end : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PROT_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x08800020; }
  static inline volatile PROT_CTRL &Instance() { return *reinterpret_cast<volatile PROT_CTRL*>(0x4041C028); }
};

// System Control
//
union SYS_CTRL {
  
  enum class eDVS : uint32_t {
    eDVS_0 = 0, // Divide-by-1
    eDVS_1 = 1, // Divide-by-2
    eDVS_14 = 14, // Divide-by-15
    eDVS_15 = 15, // Divide-by-16
  };
  
  enum class eDTOCV : uint32_t {
    eDTOCV_0 = 0, // SDCLK x 2 14
    eDTOCV_1 = 1, // SDCLK x 2 15
    eDTOCV_2 = 2, // SDCLK x 2 16
    eDTOCV_3 = 3, // SDCLK x 2 17
    eDTOCV_4 = 4, // SDCLK x 2 18
    eDTOCV_5 = 5, // SDCLK x 2 19
    eDTOCV_6 = 6, // SDCLK x 2 20
    eDTOCV_7 = 7, // SDCLK x 2 21
    eDTOCV_8 = 8, // SDCLK x 2 22
    eDTOCV_9 = 9, // SDCLK x 2 23
    eDTOCV_10 = 10, // SDCLK x 2 24
    eDTOCV_11 = 11, // SDCLK x 2 25
    eDTOCV_12 = 12, // SDCLK x 2 26
    eDTOCV_13 = 13, // SDCLK x 2 27
    eDTOCV_14 = 14, // SDCLK x 2 28
    eDTOCV_15 = 15, // SDCLK x 2 29
  };
  
  enum class eRSTA : uint32_t {
    eRSTA_0 = 0, // No reset
    eRSTA_1 = 1, // Reset
  };
  
  enum class eRSTC : uint32_t {
    eRSTC_0 = 0, // No reset
    eRSTC_1 = 1, // Reset
  };
  
  enum class eRSTD : uint32_t {
    eRSTD_0 = 0, // No reset
    eRSTD_1 = 1, // Reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eDVS DVS : 4;
    uint32_t SDCLKFS : 8;
    eDTOCV DTOCV : 4;
    uint32_t _reserved_3 : 3;
    uint32_t IPP_RST_N : 1;
    eRSTA RSTA : 1;
    eRSTC RSTC : 1;
    eRSTD RSTD : 1;
    uint32_t INITA : 1;
    uint32_t RSTT : 1;
    uint32_t _reserved_end : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x0080800F; }
  static inline volatile SYS_CTRL &Instance() { return *reinterpret_cast<volatile SYS_CTRL*>(0x4041C02C); }
};

// Interrupt Status
//
union INT_STATUS {
  
  enum class eCC : uint32_t {
    eCC_0 = 0, // Command not complete
    eCC_1 = 1, // Command complete
  };
  
  enum class eTC : uint32_t {
    eTC_0 = 0, // Transfer does not complete
    eTC_1 = 1, // Transfer complete
  };
  
  enum class eBGE : uint32_t {
    eBGE_0 = 0, // No block gap event
    eBGE_1 = 1, // Transaction stopped at block gap
  };
  
  enum class eDINT : uint32_t {
    eDINT_0 = 0, // No DMA interrupt
    eDINT_1 = 1, // DMA interrupt is generated.
  };
  
  enum class eBWR : uint32_t {
    eBWR_0 = 0, // Not ready to write buffer
    eBWR_1 = 1, // Ready to write buffer
  };
  
  enum class eBRR : uint32_t {
    eBRR_0 = 0, // Not ready to read buffer
    eBRR_1 = 1, // Ready to read buffer
  };
  
  enum class eCINS : uint32_t {
    eCINS_0 = 0, // Card state unstable or removed
    eCINS_1 = 1, // Card inserted
  };
  
  enum class eCRM : uint32_t {
    eCRM_0 = 0, // Card state unstable or inserted
    eCRM_1 = 1, // Card removed
  };
  
  enum class eCINT : uint32_t {
    eCINT_0 = 0, // No card interrupt
    eCINT_1 = 1, // Generate card interrupt
  };
  
  enum class eRTE : uint32_t {
    eRTE_0 = 0, // Re-tuning is not required.
    eRTE_1 = 1, // Re-tuning should be performed.
  };
  
  enum class eCTOE : uint32_t {
    eCTOE_0 = 0, // No error
    eCTOE_1 = 1, // Time out
  };
  
  enum class eCCE : uint32_t {
    eCCE_0 = 0, // No error
    eCCE_1 = 1, // CRC error generated
  };
  
  enum class eCEBE : uint32_t {
    eCEBE_0 = 0, // No error
    eCEBE_1 = 1, // End bit error generated
  };
  
  enum class eCIE : uint32_t {
    eCIE_0 = 0, // No error
    eCIE_1 = 1, // Error
  };
  
  enum class eDTOE : uint32_t {
    eDTOE_0 = 0, // No error
    eDTOE_1 = 1, // Time out
  };
  
  enum class eDCE : uint32_t {
    eDCE_0 = 0, // No error
    eDCE_1 = 1, // Error
  };
  
  enum class eDEBE : uint32_t {
    eDEBE_0 = 0, // No error
    eDEBE_1 = 1, // Error
  };
  
  enum class eAC12E : uint32_t {
    eAC12E_0 = 0, // No error
    eAC12E_1 = 1, // Error
  };
  
  enum class eDMAE : uint32_t {
    eDMAE_0 = 0, // No error
    eDMAE_1 = 1, // Error
  };
  
  // Bit field definition.
  struct {
    eCC CC : 1;
    eTC TC : 1;
    eBGE BGE : 1;
    eDINT DINT : 1;
    eBWR BWR : 1;
    eBRR BRR : 1;
    eCINS CINS : 1;
    eCRM CRM : 1;
    eCINT CINT : 1;
    uint32_t _reserved_9 : 3;
    eRTE RTE : 1;
    uint32_t _reserved_10 : 1;
    uint32_t TP : 1;
    uint32_t _reserved_11 : 1;
    eCTOE CTOE : 1;
    eCCE CCE : 1;
    eCEBE CEBE : 1;
    eCIE CIE : 1;
    eDTOE DTOE : 1;
    eDCE DCE : 1;
    eDEBE DEBE : 1;
    uint32_t _reserved_18 : 1;
    eAC12E AC12E : 1;
    uint32_t _reserved_19 : 1;
    uint32_t TNE : 1;
    uint32_t _reserved_20 : 1;
    eDMAE DMAE : 1;
    uint32_t _reserved_end : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS &Instance() { return *reinterpret_cast<volatile INT_STATUS*>(0x4041C030); }
};

// Interrupt Status Enable
//
union INT_STATUS_EN {
  
  enum class eCCSEN : uint32_t {
    eCCSEN_0 = 0, // Masked
    eCCSEN_1 = 1, // Enabled
  };
  
  enum class eTCSEN : uint32_t {
    eTCSEN_0 = 0, // Masked
    eTCSEN_1 = 1, // Enabled
  };
  
  enum class eBGESEN : uint32_t {
    eBGESEN_0 = 0, // Masked
    eBGESEN_1 = 1, // Enabled
  };
  
  enum class eDINTSEN : uint32_t {
    eDINTSEN_0 = 0, // Masked
    eDINTSEN_1 = 1, // Enabled
  };
  
  enum class eBWRSEN : uint32_t {
    eBWRSEN_0 = 0, // Masked
    eBWRSEN_1 = 1, // Enabled
  };
  
  enum class eBRRSEN : uint32_t {
    eBRRSEN_0 = 0, // Masked
    eBRRSEN_1 = 1, // Enabled
  };
  
  enum class eCINSSEN : uint32_t {
    eCINSSEN_0 = 0, // Masked
    eCINSSEN_1 = 1, // Enabled
  };
  
  enum class eCRMSEN : uint32_t {
    eCRMSEN_0 = 0, // Masked
    eCRMSEN_1 = 1, // Enabled
  };
  
  enum class eCINTSEN : uint32_t {
    eCINTSEN_0 = 0, // Masked
    eCINTSEN_1 = 1, // Enabled
  };
  
  enum class eRTESEN : uint32_t {
    eRTESEN_0 = 0, // Masked
    eRTESEN_1 = 1, // Enabled
  };
  
  enum class eTPSEN : uint32_t {
    eTPSEN_0 = 0, // Masked
    eTPSEN_1 = 1, // Enabled
  };
  
  enum class eCTOESEN : uint32_t {
    eCTOESEN_0 = 0, // Masked
    eCTOESEN_1 = 1, // Enabled
  };
  
  enum class eCCESEN : uint32_t {
    eCCESEN_0 = 0, // Masked
    eCCESEN_1 = 1, // Enabled
  };
  
  enum class eCEBESEN : uint32_t {
    eCEBESEN_0 = 0, // Masked
    eCEBESEN_1 = 1, // Enabled
  };
  
  enum class eCIESEN : uint32_t {
    eCIESEN_0 = 0, // Masked
    eCIESEN_1 = 1, // Enabled
  };
  
  enum class eDTOESEN : uint32_t {
    eDTOESEN_0 = 0, // Masked
    eDTOESEN_1 = 1, // Enabled
  };
  
  enum class eDCESEN : uint32_t {
    eDCESEN_0 = 0, // Masked
    eDCESEN_1 = 1, // Enabled
  };
  
  enum class eDEBESEN : uint32_t {
    eDEBESEN_0 = 0, // Masked
    eDEBESEN_1 = 1, // Enabled
  };
  
  enum class eAC12ESEN : uint32_t {
    eAC12ESEN_0 = 0, // Masked
    eAC12ESEN_1 = 1, // Enabled
  };
  
  enum class eTNESEN : uint32_t {
    eTNESEN_0 = 0, // Masked
    eTNESEN_1 = 1, // Enabled
  };
  
  enum class eDMAESEN : uint32_t {
    eDMAESEN_0 = 0, // Masked
    eDMAESEN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eCCSEN CCSEN : 1;
    eTCSEN TCSEN : 1;
    eBGESEN BGESEN : 1;
    eDINTSEN DINTSEN : 1;
    eBWRSEN BWRSEN : 1;
    eBRRSEN BRRSEN : 1;
    eCINSSEN CINSSEN : 1;
    eCRMSEN CRMSEN : 1;
    eCINTSEN CINTSEN : 1;
    uint32_t _reserved_9 : 3;
    eRTESEN RTESEN : 1;
    uint32_t _reserved_10 : 1;
    eTPSEN TPSEN : 1;
    uint32_t _reserved_11 : 1;
    eCTOESEN CTOESEN : 1;
    eCCESEN CCESEN : 1;
    eCEBESEN CEBESEN : 1;
    eCIESEN CIESEN : 1;
    eDTOESEN DTOESEN : 1;
    eDCESEN DCESEN : 1;
    eDEBESEN DEBESEN : 1;
    uint32_t _reserved_18 : 1;
    eAC12ESEN AC12ESEN : 1;
    uint32_t _reserved_19 : 1;
    eTNESEN TNESEN : 1;
    uint32_t _reserved_20 : 1;
    eDMAESEN DMAESEN : 1;
    uint32_t _reserved_end : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS_EN &Instance() { return *reinterpret_cast<volatile INT_STATUS_EN*>(0x4041C034); }
};

// Interrupt Signal Enable
//
union INT_SIGNAL_EN {
  
  enum class eCCIEN : uint32_t {
    eCCIEN_0 = 0, // Masked
    eCCIEN_1 = 1, // Enabled
  };
  
  enum class eTCIEN : uint32_t {
    eTCIEN_0 = 0, // Masked
    eTCIEN_1 = 1, // Enabled
  };
  
  enum class eBGEIEN : uint32_t {
    eBGEIEN_0 = 0, // Masked
    eBGEIEN_1 = 1, // Enabled
  };
  
  enum class eDINTIEN : uint32_t {
    eDINTIEN_0 = 0, // Masked
    eDINTIEN_1 = 1, // Enabled
  };
  
  enum class eBWRIEN : uint32_t {
    eBWRIEN_0 = 0, // Masked
    eBWRIEN_1 = 1, // Enabled
  };
  
  enum class eBRRIEN : uint32_t {
    eBRRIEN_0 = 0, // Masked
    eBRRIEN_1 = 1, // Enabled
  };
  
  enum class eCINSIEN : uint32_t {
    eCINSIEN_0 = 0, // Masked
    eCINSIEN_1 = 1, // Enabled
  };
  
  enum class eCRMIEN : uint32_t {
    eCRMIEN_0 = 0, // Masked
    eCRMIEN_1 = 1, // Enabled
  };
  
  enum class eCINTIEN : uint32_t {
    eCINTIEN_0 = 0, // Masked
    eCINTIEN_1 = 1, // Enabled
  };
  
  enum class eRTEIEN : uint32_t {
    eRTEIEN_0 = 0, // Masked
    eRTEIEN_1 = 1, // Enabled
  };
  
  enum class eTPIEN : uint32_t {
    eTPIEN_0 = 0, // Masked
    eTPIEN_1 = 1, // Enabled
  };
  
  enum class eCTOEIEN : uint32_t {
    eCTOEIEN_0 = 0, // Masked
    eCTOEIEN_1 = 1, // Enabled
  };
  
  enum class eCCEIEN : uint32_t {
    eCCEIEN_0 = 0, // Masked
    eCCEIEN_1 = 1, // Enabled
  };
  
  enum class eCEBEIEN : uint32_t {
    eCEBEIEN_0 = 0, // Masked
    eCEBEIEN_1 = 1, // Enabled
  };
  
  enum class eCIEIEN : uint32_t {
    eCIEIEN_0 = 0, // Masked
    eCIEIEN_1 = 1, // Enabled
  };
  
  enum class eDTOEIEN : uint32_t {
    eDTOEIEN_0 = 0, // Masked
    eDTOEIEN_1 = 1, // Enabled
  };
  
  enum class eDCEIEN : uint32_t {
    eDCEIEN_0 = 0, // Masked
    eDCEIEN_1 = 1, // Enabled
  };
  
  enum class eDEBEIEN : uint32_t {
    eDEBEIEN_0 = 0, // Masked
    eDEBEIEN_1 = 1, // Enabled
  };
  
  enum class eAC12EIEN : uint32_t {
    eAC12EIEN_0 = 0, // Masked
    eAC12EIEN_1 = 1, // Enabled
  };
  
  enum class eTNEIEN : uint32_t {
    eTNEIEN_0 = 0, // Masked
    eTNEIEN_1 = 1, // Enabled
  };
  
  enum class eDMAEIEN : uint32_t {
    eDMAEIEN_0 = 0, // Masked
    eDMAEIEN_1 = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    eCCIEN CCIEN : 1;
    eTCIEN TCIEN : 1;
    eBGEIEN BGEIEN : 1;
    eDINTIEN DINTIEN : 1;
    eBWRIEN BWRIEN : 1;
    eBRRIEN BRRIEN : 1;
    eCINSIEN CINSIEN : 1;
    eCRMIEN CRMIEN : 1;
    eCINTIEN CINTIEN : 1;
    uint32_t _reserved_9 : 3;
    eRTEIEN RTEIEN : 1;
    uint32_t _reserved_10 : 1;
    eTPIEN TPIEN : 1;
    uint32_t _reserved_11 : 1;
    eCTOEIEN CTOEIEN : 1;
    eCCEIEN CCEIEN : 1;
    eCEBEIEN CEBEIEN : 1;
    eCIEIEN CIEIEN : 1;
    eDTOEIEN DTOEIEN : 1;
    eDCEIEN DCEIEN : 1;
    eDEBEIEN DEBEIEN : 1;
    uint32_t _reserved_18 : 1;
    eAC12EIEN AC12EIEN : 1;
    uint32_t _reserved_19 : 1;
    eTNEIEN TNEIEN : 1;
    uint32_t _reserved_20 : 1;
    eDMAEIEN DMAEIEN : 1;
    uint32_t _reserved_end : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_SIGNAL_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_SIGNAL_EN &Instance() { return *reinterpret_cast<volatile INT_SIGNAL_EN*>(0x4041C038); }
};

// Auto CMD12 Error Status
//
union AUTOCMD12_ERR_STATUS {
  
  enum class eAC12NE : uint32_t {
    eAC12NE_0 = 0, // Executed
    eAC12NE_1 = 1, // Not executed
  };
  
  enum class eAC12TOE : uint32_t {
    eAC12TOE_0 = 0, // No error
    eAC12TOE_1 = 1, // Time out
  };
  
  enum class eAC12EBE : uint32_t {
    eAC12EBE_0 = 0, // No error
    eAC12EBE_1 = 1, // End bit error generated
  };
  
  enum class eAC12CE : uint32_t {
    eAC12CE_0 = 0, // No CRC error
    eAC12CE_1 = 1, // CRC error met in Auto CMD12/23 response
  };
  
  enum class eAC12IE : uint32_t {
    eAC12IE_0 = 0, // No error
    eAC12IE_1 = 1, // Error, the CMD index in response is not CMD12/23
  };
  
  enum class eCNIBAC12E : uint32_t {
    eCNIBAC12E_0 = 0, // No error
    eCNIBAC12E_1 = 1, // Not issued
  };
  
  enum class eEXECUTE_TUNING : uint32_t {
    eEXECUTE_TUNING_0 = 0, // Tuning procedure is aborted
    eEXECUTE_TUNING_1 = 1, // Start tuning procedure
  };
  
  enum class eSMP_CLK_SEL : uint32_t {
    eSMP_CLK_SEL_0 = 0, // Fixed clock is used to sample data
    eSMP_CLK_SEL_1 = 1, // Tuned clock is used to sample data
  };
  
  // Bit field definition.
  struct {
    eAC12NE AC12NE : 1;
    eAC12TOE AC12TOE : 1;
    eAC12EBE AC12EBE : 1;
    eAC12CE AC12CE : 1;
    eAC12IE AC12IE : 1;
    uint32_t _reserved_5 : 2;
    eCNIBAC12E CNIBAC12E : 1;
    uint32_t _reserved_6 : 14;
    eEXECUTE_TUNING EXECUTE_TUNING : 1;
    eSMP_CLK_SEL SMP_CLK_SEL : 1;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTOCMD12_ERR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTOCMD12_ERR_STATUS &Instance() { return *reinterpret_cast<volatile AUTOCMD12_ERR_STATUS*>(0x4041C03C); }
};

// Host Controller Capabilities
//
union HOST_CTRL_CAP {
  
  enum class eUSE_TUNING_SDR50 : uint32_t {
    eUSE_TUNING_SDR50_0 = 0, // SDR50 does not support tuning
    eUSE_TUNING_SDR50_1 = 1, // SDR50 supports tuning
  };
  
  enum class eMBL : uint32_t {
    eMBL_0 = 0, // 512 bytes
    eMBL_1 = 1, // 1024 bytes
    eMBL_2 = 2, // 2048 bytes
    eMBL_3 = 3, // 4096 bytes
  };
  
  enum class eADMAS : uint32_t {
    eADMAS_0 = 0, // Advanced DMA not supported
    eADMAS_1 = 1, // Advanced DMA supported
  };
  
  enum class eHSS : uint32_t {
    eHSS_0 = 0, // High speed not supported
    eHSS_1 = 1, // High speed supported
  };
  
  enum class eDMAS : uint32_t {
    eDMAS_0 = 0, // DMA not supported
    eDMAS_1 = 1, // DMA supported
  };
  
  enum class eSRS : uint32_t {
    eSRS_0 = 0, // Not supported
    eSRS_1 = 1, // Supported
  };
  
  enum class eVS33 : uint32_t {
    eVS33_0 = 0, // 3.3 V not supported
    eVS33_1 = 1, // 3.3 V supported
  };
  
  enum class eVS30 : uint32_t {
    eVS30_0 = 0, // 3.0 V not supported
    eVS30_1 = 1, // 3.0 V supported
  };
  
  enum class eVS18 : uint32_t {
    eVS18_0 = 0, // 1.8 V not supported
    eVS18_1 = 1, // 1.8 V supported
  };
  
  // Bit field definition.
  struct {
    uint32_t SDR50_SUPPORT : 1;
    uint32_t SDR104_SUPPORT : 1;
    uint32_t DDR50_SUPPORT : 1;
    uint32_t _reserved_3 : 10;
    eUSE_TUNING_SDR50 USE_TUNING_SDR50 : 1;
    uint32_t _reserved_4 : 2;
    eMBL MBL : 3;
    uint32_t _reserved_5 : 1;
    eADMAS ADMAS : 1;
    eHSS HSS : 1;
    eDMAS DMAS : 1;
    eSRS SRS : 1;
    eVS33 VS33 : 1;
    eVS30 VS30 : 1;
    eVS18 VS18 : 1;
    uint32_t _reserved_end : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HOST_CTRL_CAP() = delete;
  inline void Reset() volatile { this->value = 0x07F3B407; }
  static inline volatile HOST_CTRL_CAP &Instance() { return *reinterpret_cast<volatile HOST_CTRL_CAP*>(0x4041C040); }
};

// Watermark Level
//
union WTMK_LVL {
  
  // Bit field definition.
  struct {
    uint32_t RD_WML : 8;
    uint32_t _reserved_1 : 8;
    uint32_t WR_WML : 8;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WTMK_LVL() = delete;
  inline void Reset() volatile { this->value = 0x08100810; }
  static inline volatile WTMK_LVL &Instance() { return *reinterpret_cast<volatile WTMK_LVL*>(0x4041C044); }
};

// Mixer Control
//
union MIX_CTRL {
  
  enum class eDMAEN : uint32_t {
    eDMAEN_0 = 0, // Disable
    eDMAEN_1 = 1, // Enable
  };
  
  enum class eBCEN : uint32_t {
    eBCEN_0 = 0, // Disable
    eBCEN_1 = 1, // Enable
  };
  
  enum class eAC12EN : uint32_t {
    eAC12EN_0 = 0, // Disable
    eAC12EN_1 = 1, // Enable
  };
  
  enum class eDTDSEL : uint32_t {
    eDTDSEL_0 = 0, // Write (Host to card)
    eDTDSEL_1 = 1, // Read (Card to host)
  };
  
  enum class eMSBSEL : uint32_t {
    eMSBSEL_0 = 0, // Single block
    eMSBSEL_1 = 1, // Multiple blocks
  };
  
  enum class eEXE_TUNE : uint32_t {
    eEXE_TUNE_0 = 0, // Not tuned or tuning completed
    eEXE_TUNE_1 = 1, // Execute tuning
  };
  
  enum class eSMP_CLK_SEL : uint32_t {
    eSMP_CLK_SEL_0 = 0, // Fixed clock is used to sample data / cmd
    eSMP_CLK_SEL_1 = 1, // Tuned clock is used to sample data / cmd
  };
  
  enum class eAUTO_TUNE_EN : uint32_t {
    eAUTO_TUNE_EN_0 = 0, // Disable auto tuning
    eAUTO_TUNE_EN_1 = 1, // Enable auto tuning
  };
  
  enum class eFBCLK_SEL : uint32_t {
    eFBCLK_SEL_0 = 0, // Feedback clock comes from the loopback CLK
    eFBCLK_SEL_1 = 1, // Feedback clock comes from the ipp_card_clk_out
  };
  
  // Bit field definition.
  struct {
    eDMAEN DMAEN : 1;
    eBCEN BCEN : 1;
    eAC12EN AC12EN : 1;
    uint32_t DDR_EN : 1;
    eDTDSEL DTDSEL : 1;
    eMSBSEL MSBSEL : 1;
    uint32_t NIBBLE_POS : 1;
    uint32_t AC23EN : 1;
    uint32_t _reserved_8 : 14;
    eEXE_TUNE EXE_TUNE : 1;
    eSMP_CLK_SEL SMP_CLK_SEL : 1;
    eAUTO_TUNE_EN AUTO_TUNE_EN : 1;
    eFBCLK_SEL FBCLK_SEL : 1;
    uint32_t HS400_MODE : 1;
    uint32_t _reserved_end : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIX_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile MIX_CTRL &Instance() { return *reinterpret_cast<volatile MIX_CTRL*>(0x4041C048); }
};

// Force Event
//
union FORCE_EVENT {
  
  // Bit field definition.
  struct {
    uint32_t FEVTAC12NE : 1;
    uint32_t FEVTAC12TOE : 1;
    uint32_t FEVTAC12CE : 1;
    uint32_t FEVTAC12EBE : 1;
    uint32_t FEVTAC12IE : 1;
    uint32_t _reserved_5 : 2;
    uint32_t FEVTCNIBAC12E : 1;
    uint32_t _reserved_6 : 8;
    uint32_t FEVTCTOE : 1;
    uint32_t FEVTCCE : 1;
    uint32_t FEVTCEBE : 1;
    uint32_t FEVTCIE : 1;
    uint32_t FEVTDTOE : 1;
    uint32_t FEVTDCE : 1;
    uint32_t FEVTDEBE : 1;
    uint32_t _reserved_13 : 1;
    uint32_t FEVTAC12E : 1;
    uint32_t _reserved_14 : 1;
    uint32_t FEVTTNE : 1;
    uint32_t _reserved_15 : 1;
    uint32_t FEVTDMAE : 1;
    uint32_t _reserved_16 : 2;
    uint32_t FEVTCINT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FORCE_EVENT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FORCE_EVENT &Instance() { return *reinterpret_cast<volatile FORCE_EVENT*>(0x4041C050); }
};

// ADMA Error Status
//
union ADMA_ERR_STATUS {
  
  enum class eADMALME : uint32_t {
    eADMALME_0 = 0, // No error
    eADMALME_1 = 1, // Error
  };
  
  enum class eADMADCE : uint32_t {
    eADMADCE_0 = 0, // No error
    eADMADCE_1 = 1, // Error
  };
  
  // Bit field definition.
  struct {
    uint32_t ADMAES : 2;
    eADMALME ADMALME : 1;
    eADMADCE ADMADCE : 1;
    uint32_t _reserved_end : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADMA_ERR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADMA_ERR_STATUS &Instance() { return *reinterpret_cast<volatile ADMA_ERR_STATUS*>(0x4041C054); }
};

// ADMA System Address
//
union ADMA_SYS_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    uint32_t ADS_ADDR : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADMA_SYS_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADMA_SYS_ADDR &Instance() { return *reinterpret_cast<volatile ADMA_SYS_ADDR*>(0x4041C058); }
};

// DLL (Delay Line) Control
//
union DLL_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t DLL_CTRL_ENABLE : 1;
    uint32_t DLL_CTRL_RESET : 1;
    uint32_t DLL_CTRL_SLV_FORCE_UPD : 1;
    uint32_t DLL_CTRL_SLV_DLY_TARGET0 : 4;
    uint32_t DLL_CTRL_GATE_UPDATE : 1;
    uint32_t DLL_CTRL_SLV_OVERRIDE : 1;
    uint32_t DLL_CTRL_SLV_OVERRIDE_VAL : 7;
    uint32_t DLL_CTRL_SLV_DLY_TARGET1 : 3;
    uint32_t _reserved_8 : 1;
    uint32_t DLL_CTRL_SLV_UPDATE_INT : 8;
    uint32_t DLL_CTRL_REF_UPDATE_INT : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DLL_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DLL_CTRL &Instance() { return *reinterpret_cast<volatile DLL_CTRL*>(0x4041C060); }
};

// DLL Status
//
union DLL_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t DLL_STS_SLV_LOCK : 1;
    uint32_t DLL_STS_REF_LOCK : 1;
    uint32_t DLL_STS_SLV_SEL : 7;
    uint32_t DLL_STS_REF_SEL : 7;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DLL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000200; }
  static inline volatile DLL_STATUS &Instance() { return *reinterpret_cast<volatile DLL_STATUS*>(0x4041C064); }
};

// CLK Tuning Control and Status
//
union CLK_TUNE_CTRL_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t DLY_CELL_SET_POST : 4;
    uint32_t DLY_CELL_SET_OUT : 4;
    uint32_t DLY_CELL_SET_PRE : 7;
    uint32_t NXT_ERR : 1;
    uint32_t TAP_SEL_POST : 4;
    uint32_t TAP_SEL_OUT : 4;
    uint32_t TAP_SEL_PRE : 7;
    uint32_t PRE_ERR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLK_TUNE_CTRL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLK_TUNE_CTRL_STATUS &Instance() { return *reinterpret_cast<volatile CLK_TUNE_CTRL_STATUS*>(0x4041C068); }
};

// Strobe DLL control
//
union STROBE_DLL_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t STROBE_DLL_CTRL_ENABLE : 1;
    uint32_t STROBE_DLL_CTRL_RESET : 1;
    uint32_t STROBE_DLL_CTRL_SLV_FORCE_UPD : 1;
    uint32_t STROBE_DLL_CTRL_SLV_DLY_TARGET : 4;
    uint32_t STROBE_DLL_CTRL_GATE_UPDATE : 1;
    uint32_t STROBE_DLL_CTRL_SLV_OVERRIDE : 1;
    uint32_t STROBE_DLL_CTRL_SLV_OVERRIDE_VAL : 7;
    uint32_t _reserved_7 : 4;
    uint32_t STROBE_DLL_CTRL_SLV_UPDATE_INT : 8;
    uint32_t STROBE_DLL_CTRL_REF_UPDATE_INT : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STROBE_DLL_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STROBE_DLL_CTRL &Instance() { return *reinterpret_cast<volatile STROBE_DLL_CTRL*>(0x4041C070); }
};

// Strobe DLL status
//
union STROBE_DLL_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t STROBE_DLL_STS_SLV_LOCK : 1;
    uint32_t STROBE_DLL_STS_REF_LOCK : 1;
    uint32_t STROBE_DLL_STS_SLV_SEL : 7;
    uint32_t STROBE_DLL_STS_REF_SEL : 7;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STROBE_DLL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000200; }
  static inline volatile STROBE_DLL_STATUS &Instance() { return *reinterpret_cast<volatile STROBE_DLL_STATUS*>(0x4041C074); }
};

// Vendor Specific Register
//
union VEND_SPEC {
  
  enum class eVSELECT : uint32_t {
    eVSELECT_0 = 0, // Change the voltage to high voltage range, around 3.0 V
    eVSELECT_1 = 1, // Change the voltage to low voltage range, around 1.8 V
  };
  
  enum class eCONFLICT_CHK_EN : uint32_t {
    eCONFLICT_CHK_EN_0 = 0, // Conflict check disable
    eCONFLICT_CHK_EN_1 = 1, // Conflict check enable
  };
  
  enum class eAC12_WR_CHKBUSY_EN : uint32_t {
    eAC12_WR_CHKBUSY_EN_0 = 0, // Do not check busy after auto CMD12 for write data packet
    eAC12_WR_CHKBUSY_EN_1 = 1, // Check busy after auto CMD12 for write data packet
  };
  
  enum class eFRC_SDCLK_ON : uint32_t {
    eFRC_SDCLK_ON_0 = 0, // CLK active or inactive is fully controlled by the hardware.
    eFRC_SDCLK_ON_1 = 1, // Force CLK active
  };
  
  enum class eCRC_CHK_DIS : uint32_t {
    eCRC_CHK_DIS_0 = 0, // Check CRC16 for every read data packet and check CRC fields for every write data packet
    eCRC_CHK_DIS_1 = 1, // Ignore CRC16 check for every read data packet and ignore CRC fields check for every write data packet
  };
  
  enum class eCMD_BYTE_EN : uint32_t {
    eCMD_BYTE_EN_0 = 0, // Disable
    eCMD_BYTE_EN_1 = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eVSELECT VSELECT : 1;
    eCONFLICT_CHK_EN CONFLICT_CHK_EN : 1;
    eAC12_WR_CHKBUSY_EN AC12_WR_CHKBUSY_EN : 1;
    uint32_t _reserved_3 : 4;
    eFRC_SDCLK_ON FRC_SDCLK_ON : 1;
    uint32_t _reserved_4 : 6;
    eCRC_CHK_DIS CRC_CHK_DIS : 1;
    uint32_t _reserved_5 : 15;
    eCMD_BYTE_EN CMD_BYTE_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VEND_SPEC() = delete;
  inline void Reset() volatile { this->value = 0x30007809; }
  static inline volatile VEND_SPEC &Instance() { return *reinterpret_cast<volatile VEND_SPEC*>(0x4041C0C0); }
};

// MMC Boot
//
union MMC_BOOT {
  
  enum class eDTOCV_ACK : uint32_t {
    eDTOCV_ACK_0 = 0, // SDCLK x 2^14
    eDTOCV_ACK_1 = 1, // SDCLK x 2^15
    eDTOCV_ACK_2 = 2, // SDCLK x 2^16
    eDTOCV_ACK_3 = 3, // SDCLK x 2^17
    eDTOCV_ACK_4 = 4, // SDCLK x 2^18
    eDTOCV_ACK_5 = 5, // SDCLK x 2^19
    eDTOCV_ACK_6 = 6, // SDCLK x 2^20
    eDTOCV_ACK_7 = 7, // SDCLK x 2^21
    eDTOCV_ACK_14 = 14, // SDCLK x 2^28
    eDTOCV_ACK_15 = 15, // SDCLK x 2^29
  };
  
  enum class eBOOT_ACK : uint32_t {
    eBOOT_ACK_0 = 0, // No ack
    eBOOT_ACK_1 = 1, // Ack
  };
  
  enum class eBOOT_MODE : uint32_t {
    eBOOT_MODE_0 = 0, // Normal boot
    eBOOT_MODE_1 = 1, // Alternative boot
  };
  
  enum class eBOOT_EN : uint32_t {
    eBOOT_EN_0 = 0, // Fast boot disable
    eBOOT_EN_1 = 1, // Fast boot enable
  };
  
  enum class eDISABLE_TIME_OUT : uint32_t {
    eDISABLE_TIME_OUT_0 = 0, // Enable time out
    eDISABLE_TIME_OUT_1 = 1, // Disable time out
  };
  
  // Bit field definition.
  struct {
    eDTOCV_ACK DTOCV_ACK : 4;
    eBOOT_ACK BOOT_ACK : 1;
    eBOOT_MODE BOOT_MODE : 1;
    eBOOT_EN BOOT_EN : 1;
    uint32_t AUTO_SABG_EN : 1;
    eDISABLE_TIME_OUT DISABLE_TIME_OUT : 1;
    uint32_t _reserved_6 : 7;
    uint32_t BOOT_BLK_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MMC_BOOT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MMC_BOOT &Instance() { return *reinterpret_cast<volatile MMC_BOOT*>(0x4041C0C4); }
};

// Vendor Specific 2 Register
//
union VEND_SPEC2 {
  
  enum class eCARD_INT_D3_TEST : uint32_t {
    eCARD_INT_D3_TEST_0 = 0, // Check the card interrupt only when DATA3 is high.
    eCARD_INT_D3_TEST_1 = 1, // Check the card interrupt by ignoring the status of DATA3.
  };
  
  enum class eTUNING_CMD_EN : uint32_t {
    eTUNING_CMD_EN_0 = 0, // Auto tuning circuit does not check the CMD line.
    eTUNING_CMD_EN_1 = 1, // Auto tuning circuit checks the CMD line.
  };
  
  enum class eACMD23_ARGU2_EN : uint32_t {
    eACMD23_ARGU2_EN_0 = 0, // Disable
    eACMD23_ARGU2_EN_1 = 1, // Argument2 register enable for ACMD23 sharing with SDMA system address register. Default is enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    eCARD_INT_D3_TEST CARD_INT_D3_TEST : 1;
    uint32_t TUNING_8bit_EN : 1;
    uint32_t TUNING_1bit_EN : 1;
    eTUNING_CMD_EN TUNING_CMD_EN : 1;
    uint32_t _reserved_4 : 3;
    uint32_t HS400_WR_CLK_STOP_EN : 1;
    uint32_t HS400_RD_CLK_STOP_EN : 1;
    eACMD23_ARGU2_EN ACMD23_ARGU2_EN : 1;
    uint32_t _reserved_end : 19;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VEND_SPEC2() = delete;
  inline void Reset() volatile { this->value = 0x00019006; }
  static inline volatile VEND_SPEC2 &Instance() { return *reinterpret_cast<volatile VEND_SPEC2*>(0x4041C0C8); }
};

// Tuning Control
//
union TUNING_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t TUNING_START_TAP : 7;
    uint32_t DIS_CMD_CHK_FOR_STD_TUNING : 1;
    uint32_t TUNING_COUNTER : 8;
    uint32_t TUNING_STEP : 3;
    uint32_t _reserved_4 : 1;
    uint32_t TUNING_WINDOW : 3;
    uint32_t _reserved_5 : 1;
    uint32_t STD_TUNING_EN : 1;
    uint32_t _reserved_end : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TUNING_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00212800; }
  static inline volatile TUNING_CTRL &Instance() { return *reinterpret_cast<volatile TUNING_CTRL*>(0x4041C0CC); }
};


} // namespace nUSDHC2