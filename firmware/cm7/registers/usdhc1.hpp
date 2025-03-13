#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// uSDHC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nUSDHC1 {


// DMA System Address
union DS_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - System address
    uint32_t DS_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DS_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DS_ADDR &ref() { return *reinterpret_cast<volatile DS_ADDR*>(0x40418000); }
};

// Block Attributes
union BLK_ATT {
  
  // Transfer block size
  enum class eBLKSIZE : uint32_t {
    // No data transfer
    eBLKSIZE_0 = 0,
    // 1 byte
    eBLKSIZE_1 = 1,
    // 2 bytes
    eBLKSIZE_2 = 2,
    // 3 bytes
    eBLKSIZE_3 = 3,
    // 4 bytes
    eBLKSIZE_4 = 4,
    // 511 bytes
    eBLKSIZE_511 = 511,
    // 512 bytes
    eBLKSIZE_512 = 512,
    // 2048 bytes
    eBLKSIZE_2048 = 2048,
    // 4096 bytes
    eBLKSIZE_4096 = 4096,
  };
  
  // Blocks count for current transfer
  enum class eBLKCNT : uint32_t {
    // Stop count
    eBLKCNT_0 = 0,
    // 1 block
    eBLKCNT_1 = 1,
    // 2 blocks
    eBLKCNT_2 = 2,
    // 65535 blocks
    eBLKCNT_65535 = 65535,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transfer block size
    eBLKSIZE BLKSIZE : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Blocks count for current transfer
    eBLKCNT BLKCNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BLK_ATT() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile BLK_ATT &ref() { return *reinterpret_cast<volatile BLK_ATT*>(0x40418004); }
};

// Command Argument
union CMD_ARG {
  
  // Bit field definition.
  struct {
    // read-write - Command argument
    uint32_t CMDARG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_ARG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_ARG &ref() { return *reinterpret_cast<volatile CMD_ARG*>(0x40418008); }
};

// Command Transfer Type
union CMD_XFR_TYP {
  
  // Response type select
  enum class eRSPTYP : uint32_t {
    // No response
    eRSPTYP_0 = 0,
    // Response length 136
    eRSPTYP_1 = 1,
    // Response length 48
    eRSPTYP_2 = 2,
    // Response length 48, check busy after response
    eRSPTYP_3 = 3,
  };
  
  // Command CRC check enable
  enum class eCCCEN : uint32_t {
    // Disables command CRC check
    eCCCEN_0 = 0,
    // Enables command CRC check
    eCCCEN_1 = 1,
  };
  
  // Command index check enable
  enum class eCICEN : uint32_t {
    // Disable command index check
    eCICEN_0 = 0,
    // Enables command index check
    eCICEN_1 = 1,
  };
  
  // Data present select
  enum class eDPSEL : uint32_t {
    // No data present
    eDPSEL_0 = 0,
    // Data present
    eDPSEL_1 = 1,
  };
  
  // Command type
  enum class eCMDTYP : uint32_t {
    // Normal other commands
    eCMDTYP_0 = 0,
    // Suspend CMD52 for writing bus suspend in CCCR
    eCMDTYP_1 = 1,
    // Resume CMD52 for writing function select in CCCR
    eCMDTYP_2 = 2,
    // Abort CMD12, CMD52 for writing I/O Abort in CCCR
    eCMDTYP_3 = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-write - Response type select
    eRSPTYP RSPTYP : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Command CRC check enable
    eCCCEN CCCEN : 1;
    // read-write - Command index check enable
    eCICEN CICEN : 1;
    // read-write - Data present select
    eDPSEL DPSEL : 1;
    // read-write - Command type
    eCMDTYP CMDTYP : 2;
    // read-write - Command index
    uint32_t CMDINX : 6;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_XFR_TYP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_XFR_TYP &ref() { return *reinterpret_cast<volatile CMD_XFR_TYP*>(0x4041800C); }
};

// Command Response0
union CMD_RSP0 {
  
  // Bit field definition.
  struct {
    // read-only - Command response 0
    uint32_t CMDRSP0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP0 &ref() { return *reinterpret_cast<volatile CMD_RSP0*>(0x40418010); }
};

// Command Response1
union CMD_RSP1 {
  
  // Bit field definition.
  struct {
    // read-only - Command response 1
    uint32_t CMDRSP1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP1 &ref() { return *reinterpret_cast<volatile CMD_RSP1*>(0x40418014); }
};

// Command Response2
union CMD_RSP2 {
  
  // Bit field definition.
  struct {
    // read-only - Command response 2
    uint32_t CMDRSP2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP2 &ref() { return *reinterpret_cast<volatile CMD_RSP2*>(0x40418018); }
};

// Command Response3
union CMD_RSP3 {
  
  // Bit field definition.
  struct {
    // read-only - Command response 3
    uint32_t CMDRSP3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMD_RSP3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMD_RSP3 &ref() { return *reinterpret_cast<volatile CMD_RSP3*>(0x4041801C); }
};

// Data Buffer Access Port
union DATA_BUFF_ACC_PORT {
  
  // Bit field definition.
  struct {
    // read-write - Data content
    uint32_t DATCONT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATA_BUFF_ACC_PORT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATA_BUFF_ACC_PORT &ref() { return *reinterpret_cast<volatile DATA_BUFF_ACC_PORT*>(0x40418020); }
};

// Present State
union PRES_STATE {
  
  // Command inhibit (CMD)
  enum class eCIHB : uint32_t {
    // Can issue command using only CMD line
    eCIHB_0 = 0,
    // Cannot issue command
    eCIHB_1 = 1,
  };
  
  // Command Inhibit Data (DATA)
  enum class eCDIHB : uint32_t {
    // Can issue command that uses the DATA line
    eCDIHB_0 = 0,
    // Cannot issue command that uses the DATA line
    eCDIHB_1 = 1,
  };
  
  // Data line active
  enum class eDLA : uint32_t {
    // DATA line inactive
    eDLA_0 = 0,
    // DATA line active
    eDLA_1 = 1,
  };
  
  // SD clock stable
  enum class eSDSTB : uint32_t {
    // Clock is changing frequency and not stable.
    eSDSTB_0 = 0,
    // Clock is stable.
    eSDSTB_1 = 1,
  };
  
  // Peripheral clock gated off internally
  enum class eIPGOFF : uint32_t {
    // Peripheral clock is active.
    eIPGOFF_0 = 0,
    // Peripheral clock is gated off.
    eIPGOFF_1 = 1,
  };
  
  // HCLK gated off internally
  enum class eHCKOFF : uint32_t {
    // HCLK is active.
    eHCKOFF_0 = 0,
    // HCLK is gated off.
    eHCKOFF_1 = 1,
  };
  
  // IPG_PERCLK gated off internally
  enum class ePEROFF : uint32_t {
    // IPG_PERCLK is active.
    ePEROFF_0 = 0,
    // IPG_PERCLK is gated off.
    ePEROFF_1 = 1,
  };
  
  // SD clock gated off internally
  enum class eSDOFF : uint32_t {
    // SD clock is active.
    eSDOFF_0 = 0,
    // SD clock is gated off.
    eSDOFF_1 = 1,
  };
  
  // Write transfer active
  enum class eWTA : uint32_t {
    // No valid data
    eWTA_0 = 0,
    // Transferring data
    eWTA_1 = 1,
  };
  
  // Read transfer active
  enum class eRTA : uint32_t {
    // No valid data
    eRTA_0 = 0,
    // Transferring data
    eRTA_1 = 1,
  };
  
  // Buffer write enable
  enum class eBWEN : uint32_t {
    // Write disable
    eBWEN_0 = 0,
    // Write enable
    eBWEN_1 = 1,
  };
  
  // Buffer read enable
  enum class eBREN : uint32_t {
    // Read disable
    eBREN_0 = 0,
    // Read enable
    eBREN_1 = 1,
  };
  
  // Re-Tuning Request (only for SD3.0 SDR104 mode,and EMMC HS200 mode)
  enum class eRTR : uint32_t {
    // Fixed or well tuned sampling clock
    eRTR_0 = 0,
    // Sampling clock needs re-tuning
    eRTR_1 = 1,
  };
  
  // Tap select change done
  enum class eTSCD : uint32_t {
    // Delay cell select change is not finished.
    eTSCD_0 = 0,
    // Delay cell select change is finished.
    eTSCD_1 = 1,
  };
  
  // Card inserted
  enum class eCINST : uint32_t {
    // Power on reset or no card
    eCINST_0 = 0,
    // Card inserted
    eCINST_1 = 1,
  };
  
  // Card detect pin level
  enum class eCDPL : uint32_t {
    // No card present (CD_B = 1)
    eCDPL_0 = 0,
    // Card present (CD_B = 0)
    eCDPL_1 = 1,
  };
  
  // Write protect switch pin level
  enum class eWPSPL : uint32_t {
    // Write protected (WP = 1)
    eWPSPL_0 = 0,
    // Write enabled (WP = 0)
    eWPSPL_1 = 1,
  };
  
  // DATA[7:0] line signal level
  enum class eDLSL : uint32_t {
    // Data 0 line signal level
    eDATA0 = 0,
    // Data 1 line signal level
    eDATA1 = 1,
    // Data 2 line signal level
    eDATA2 = 2,
    // Data 3 line signal level
    eDATA3 = 3,
    // Data 4 line signal level
    eDATA4 = 4,
    // Data 5 line signal level
    eDATA5 = 5,
    // Data 6 line signal level
    eDATA6 = 6,
    // Data 7 line signal level
    eDATA7 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-only - Command inhibit (CMD)
    eCIHB CIHB : 1;
    // read-only - Command Inhibit Data (DATA)
    eCDIHB CDIHB : 1;
    // read-only - Data line active
    eDLA DLA : 1;
    // read-only - SD clock stable
    eSDSTB SDSTB : 1;
    // read-only - Peripheral clock gated off internally
    eIPGOFF IPGOFF : 1;
    // read-only - HCLK gated off internally
    eHCKOFF HCKOFF : 1;
    // read-only - IPG_PERCLK gated off internally
    ePEROFF PEROFF : 1;
    // read-only - SD clock gated off internally
    eSDOFF SDOFF : 1;
    // read-only - Write transfer active
    eWTA WTA : 1;
    // read-only - Read transfer active
    eRTA RTA : 1;
    // read-only - Buffer write enable
    eBWEN BWEN : 1;
    // read-only - Buffer read enable
    eBREN BREN : 1;
    // read-only - Re-Tuning Request (only for SD3.0 SDR104 mode,and EMMC HS200 mode)
    eRTR RTR : 1;
    uint32_t _reserved_0 : 2;
    // read-only - Tap select change done
    eTSCD TSCD : 1;
    // read-only - Card inserted
    eCINST CINST : 1;
    uint32_t _reserved_1 : 1;
    // read-only - Card detect pin level
    eCDPL CDPL : 1;
    // read-only - Write protect switch pin level
    eWPSPL WPSPL : 1;
    uint32_t _reserved_2 : 3;
    // read-only - CMD line signal level
    uint32_t CLSL : 1;
    // read-only - DATA[7:0] line signal level
    eDLSL DLSL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PRES_STATE() = delete;
  inline void Reset() volatile { this->value = 0x00008080; }
  static inline volatile PRES_STATE &ref() { return *reinterpret_cast<volatile PRES_STATE*>(0x40418024); }
};

// Protocol Control
union PROT_CTRL {
  
  // Data transfer width
  enum class eDTW : uint32_t {
    // 1-bit mode
    eDTW_0 = 0,
    // 4-bit mode
    eDTW_1 = 1,
    // 8-bit mode
    eDTW_2 = 2,
  };
  
  // DATA3 as card detection pin
  enum class eD3CD : uint32_t {
    // DATA3 does not monitor card insertion
    eD3CD_0 = 0,
    // DATA3 as card detection pin
    eD3CD_1 = 1,
  };
  
  // Endian mode
  enum class eEMODE : uint32_t {
    // Big endian mode
    eEMODE_0 = 0,
    // Half word big endian mode
    eEMODE_1 = 1,
    // Little endian mode
    eEMODE_2 = 2,
  };
  
  // Card detect test level
  enum class eCDTL : uint32_t {
    // Card detect test level is 0, no card inserted
    eCDTL_0 = 0,
    // Card detect test level is 1, card inserted
    eCDTL_1 = 1,
  };
  
  // Card detect signal selection
  enum class eCDSS : uint32_t {
    // Card detection level is selected (for normal purpose).
    eCDSS_0 = 0,
    // Card detection test level is selected (for test purpose).
    eCDSS_1 = 1,
  };
  
  // DMA select
  enum class eDMASEL : uint32_t {
    // No DMA or simple DMA is selected.
    eDMASEL_0 = 0,
    // ADMA1 is selected.
    eDMASEL_1 = 1,
    // ADMA2 is selected.
    eDMASEL_2 = 2,
  };
  
  // Stop at block gap request
  enum class eSABGREQ : uint32_t {
    // Transfer
    eSABGREQ_0 = 0,
    // Stop
    eSABGREQ_1 = 1,
  };
  
  // Continue request
  enum class eCREQ : uint32_t {
    // No effect
    eCREQ_0 = 0,
    // Restart
    eCREQ_1 = 1,
  };
  
  // Read wait control
  enum class eRWCTL : uint32_t {
    // Disables read wait control and stop SD clock at block gap when SABGREQ field is set
    eRWCTL_0 = 0,
    // Enables read wait control and assert read wait without stopping SD clock at block gap when SABGREQ field is set
    eRWCTL_1 = 1,
  };
  
  // Interrupt at block gap
  enum class eIABG : uint32_t {
    // Disables interrupt at block gap
    eIABG_0 = 0,
    // Enables interrupt at block gap
    eIABG_1 = 1,
  };
  
  // Wakeup event enable on card interrupt
  enum class eWECINT : uint32_t {
    // Disables wakeup event enable on card interrupt
    eWECINT_0 = 0,
    // Enables wakeup event enable on card interrupt
    eWECINT_1 = 1,
  };
  
  // Wakeup event enable on SD card insertion
  enum class eWECINS : uint32_t {
    // Disable wakeup event enable on SD card insertion
    eWECINS_0 = 0,
    // Enable wakeup event enable on SD card insertion
    eWECINS_1 = 1,
  };
  
  // Wakeup event enable on SD card removal
  enum class eWECRM : uint32_t {
    // Disables wakeup event enable on SD card removal
    eWECRM_0 = 0,
    // Enables wakeup event enable on SD card removal
    eWECRM_1 = 1,
  };
  
  // Non-exact block read
  enum class eNON_EXACT_BLK_RD : uint32_t {
    // The block read is exact block read. Host driver does not need to issue abort command to terminate this multi-block read.
    eNON_EXACT_BLK_RD_0 = 0,
    // The block read is non-exact block read. Host driver needs to issue abort command to terminate this multi-block read.
    eNON_EXACT_BLK_RD_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Data transfer width
    eDTW DTW : 2;
    // read-write - DATA3 as card detection pin
    eD3CD D3CD : 1;
    // read-write - Endian mode
    eEMODE EMODE : 2;
    // read-write - Card detect test level
    eCDTL CDTL : 1;
    // read-write - Card detect signal selection
    eCDSS CDSS : 1;
    // read-write - DMA select
    eDMASEL DMASEL : 2;
    uint32_t _reserved_1 : 6;
    // read-write - Stop at block gap request
    eSABGREQ SABGREQ : 1;
    // read-write - Continue request
    eCREQ CREQ : 1;
    // read-write - Read wait control
    eRWCTL RWCTL : 1;
    // read-write - Interrupt at block gap
    eIABG IABG : 1;
    // read-write - Read performed number 8 clock
    uint32_t RD_DONE_NO_8CLK : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Wakeup event enable on card interrupt
    eWECINT WECINT : 1;
    // read-write - Wakeup event enable on SD card insertion
    eWECINS WECINS : 1;
    // read-write - Wakeup event enable on SD card removal
    eWECRM WECRM : 1;
    uint32_t _reserved_3 : 3;
    // read-write - Non-exact block read
    eNON_EXACT_BLK_RD NON_EXACT_BLK_RD : 1;
    uint32_t _reserved_4 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PROT_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x08800020; }
  static inline volatile PROT_CTRL &ref() { return *reinterpret_cast<volatile PROT_CTRL*>(0x40418028); }
};

// System Control
union SYS_CTRL {
  
  // Divisor
  enum class eDVS : uint32_t {
    // Divide-by-1
    eDVS_0 = 0,
    // Divide-by-2
    eDVS_1 = 1,
    // Divide-by-15
    eDVS_14 = 14,
    // Divide-by-16
    eDVS_15 = 15,
  };
  
  // Data timeout counter value
  enum class eDTOCV : uint32_t {
    // SDCLK x 2 14
    eDTOCV_0 = 0,
    // SDCLK x 2 15
    eDTOCV_1 = 1,
    // SDCLK x 2 16
    eDTOCV_2 = 2,
    // SDCLK x 2 17
    eDTOCV_3 = 3,
    // SDCLK x 2 18
    eDTOCV_4 = 4,
    // SDCLK x 2 19
    eDTOCV_5 = 5,
    // SDCLK x 2 20
    eDTOCV_6 = 6,
    // SDCLK x 2 21
    eDTOCV_7 = 7,
    // SDCLK x 2 22
    eDTOCV_8 = 8,
    // SDCLK x 2 23
    eDTOCV_9 = 9,
    // SDCLK x 2 24
    eDTOCV_10 = 10,
    // SDCLK x 2 25
    eDTOCV_11 = 11,
    // SDCLK x 2 26
    eDTOCV_12 = 12,
    // SDCLK x 2 27
    eDTOCV_13 = 13,
    // SDCLK x 2 28
    eDTOCV_14 = 14,
    // SDCLK x 2 29
    eDTOCV_15 = 15,
  };
  
  // Software reset for all
  enum class eRSTA : uint32_t {
    // No reset
    eRSTA_0 = 0,
    // Reset
    eRSTA_1 = 1,
  };
  
  // Software reset for CMD line
  enum class eRSTC : uint32_t {
    // No reset
    eRSTC_0 = 0,
    // Reset
    eRSTC_1 = 1,
  };
  
  // Software reset for data line
  enum class eRSTD : uint32_t {
    // No reset
    eRSTD_0 = 0,
    // Reset
    eRSTD_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Divisor
    eDVS DVS : 4;
    // read-write - SDCLK frequency select
    uint32_t SDCLKFS : 8;
    // read-write - Data timeout counter value
    eDTOCV DTOCV : 4;
    uint32_t _reserved_1 : 3;
    // read-write - Hardware reset
    uint32_t IPP_RST_N : 1;
    // read-write - Software reset for all
    eRSTA RSTA : 1;
    // read-write - Software reset for CMD line
    eRSTC RSTC : 1;
    // read-write - Software reset for data line
    eRSTD RSTD : 1;
    // read-write - Initialization active
    uint32_t INITA : 1;
    // read-write - Reset tuning
    uint32_t RSTT : 1;
    uint32_t _reserved_2 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x0080800F; }
  static inline volatile SYS_CTRL &ref() { return *reinterpret_cast<volatile SYS_CTRL*>(0x4041802C); }
};

// Interrupt Status
union INT_STATUS {
  
  // Command complete
  enum class eCC : uint32_t {
    // Command not complete
    eCC_0 = 0,
    // Command complete
    eCC_1 = 1,
  };
  
  // Transfer complete
  enum class eTC : uint32_t {
    // Transfer does not complete
    eTC_0 = 0,
    // Transfer complete
    eTC_1 = 1,
  };
  
  // Block gap event
  enum class eBGE : uint32_t {
    // No block gap event
    eBGE_0 = 0,
    // Transaction stopped at block gap
    eBGE_1 = 1,
  };
  
  // DMA interrupt
  enum class eDINT : uint32_t {
    // No DMA interrupt
    eDINT_0 = 0,
    // DMA interrupt is generated.
    eDINT_1 = 1,
  };
  
  // Buffer write ready
  enum class eBWR : uint32_t {
    // Not ready to write buffer
    eBWR_0 = 0,
    // Ready to write buffer
    eBWR_1 = 1,
  };
  
  // Buffer read ready
  enum class eBRR : uint32_t {
    // Not ready to read buffer
    eBRR_0 = 0,
    // Ready to read buffer
    eBRR_1 = 1,
  };
  
  // Card insertion
  enum class eCINS : uint32_t {
    // Card state unstable or removed
    eCINS_0 = 0,
    // Card inserted
    eCINS_1 = 1,
  };
  
  // Card removal
  enum class eCRM : uint32_t {
    // Card state unstable or inserted
    eCRM_0 = 0,
    // Card removed
    eCRM_1 = 1,
  };
  
  // Card interrupt
  enum class eCINT : uint32_t {
    // No card interrupt
    eCINT_0 = 0,
    // Generate card interrupt
    eCINT_1 = 1,
  };
  
  // Re-tuning event: (only for SD3.0 SDR104 mode and EMMC HS200 mode)
  enum class eRTE : uint32_t {
    // Re-tuning is not required.
    eRTE_0 = 0,
    // Re-tuning should be performed.
    eRTE_1 = 1,
  };
  
  // Command timeout error
  enum class eCTOE : uint32_t {
    // No error
    eCTOE_0 = 0,
    // Time out
    eCTOE_1 = 1,
  };
  
  // Command CRC error
  enum class eCCE : uint32_t {
    // No error
    eCCE_0 = 0,
    // CRC error generated
    eCCE_1 = 1,
  };
  
  // Command end bit error
  enum class eCEBE : uint32_t {
    // No error
    eCEBE_0 = 0,
    // End bit error generated
    eCEBE_1 = 1,
  };
  
  // Command index error
  enum class eCIE : uint32_t {
    // No error
    eCIE_0 = 0,
    // Error
    eCIE_1 = 1,
  };
  
  // Data timeout error
  enum class eDTOE : uint32_t {
    // No error
    eDTOE_0 = 0,
    // Time out
    eDTOE_1 = 1,
  };
  
  // Data CRC error
  enum class eDCE : uint32_t {
    // No error
    eDCE_0 = 0,
    // Error
    eDCE_1 = 1,
  };
  
  // Data end bit error
  enum class eDEBE : uint32_t {
    // No error
    eDEBE_0 = 0,
    // Error
    eDEBE_1 = 1,
  };
  
  // Auto CMD12 error
  enum class eAC12E : uint32_t {
    // No error
    eAC12E_0 = 0,
    // Error
    eAC12E_1 = 1,
  };
  
  // DMA error
  enum class eDMAE : uint32_t {
    // No error
    eDMAE_0 = 0,
    // Error
    eDMAE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Command complete
    eCC CC : 1;
    // read-write - Transfer complete
    eTC TC : 1;
    // read-write - Block gap event
    eBGE BGE : 1;
    // read-write - DMA interrupt
    eDINT DINT : 1;
    // read-write - Buffer write ready
    eBWR BWR : 1;
    // read-write - Buffer read ready
    eBRR BRR : 1;
    // read-write - Card insertion
    eCINS CINS : 1;
    // read-write - Card removal
    eCRM CRM : 1;
    // read-write - Card interrupt
    eCINT CINT : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Re-tuning event: (only for SD3.0 SDR104 mode and EMMC HS200 mode)
    eRTE RTE : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Tuning pass:(only for SD3.0 SDR104 mode and EMMC HS200 mode)
    uint32_t TP : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Command timeout error
    eCTOE CTOE : 1;
    // read-write - Command CRC error
    eCCE CCE : 1;
    // read-write - Command end bit error
    eCEBE CEBE : 1;
    // read-write - Command index error
    eCIE CIE : 1;
    // read-write - Data timeout error
    eDTOE DTOE : 1;
    // read-write - Data CRC error
    eDCE DCE : 1;
    // read-write - Data end bit error
    eDEBE DEBE : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Auto CMD12 error
    eAC12E AC12E : 1;
    uint32_t _reserved_4 : 1;
    // read-write - Tuning error: (only for SD3.0 SDR104 mode and EMMC HS200 mode)
    uint32_t TNE : 1;
    uint32_t _reserved_5 : 1;
    // read-write - DMA error
    eDMAE DMAE : 1;
    uint32_t _reserved_6 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS &ref() { return *reinterpret_cast<volatile INT_STATUS*>(0x40418030); }
};

// Interrupt Status Enable
union INT_STATUS_EN {
  
  // Command complete status enable
  enum class eCCSEN : uint32_t {
    // Masked
    eCCSEN_0 = 0,
    // Enabled
    eCCSEN_1 = 1,
  };
  
  // Transfer complete status enable
  enum class eTCSEN : uint32_t {
    // Masked
    eTCSEN_0 = 0,
    // Enabled
    eTCSEN_1 = 1,
  };
  
  // Block gap event status enable
  enum class eBGESEN : uint32_t {
    // Masked
    eBGESEN_0 = 0,
    // Enabled
    eBGESEN_1 = 1,
  };
  
  // DMA interrupt status enable
  enum class eDINTSEN : uint32_t {
    // Masked
    eDINTSEN_0 = 0,
    // Enabled
    eDINTSEN_1 = 1,
  };
  
  // Buffer write ready status enable
  enum class eBWRSEN : uint32_t {
    // Masked
    eBWRSEN_0 = 0,
    // Enabled
    eBWRSEN_1 = 1,
  };
  
  // Buffer read ready status enable
  enum class eBRRSEN : uint32_t {
    // Masked
    eBRRSEN_0 = 0,
    // Enabled
    eBRRSEN_1 = 1,
  };
  
  // Card insertion status enable
  enum class eCINSSEN : uint32_t {
    // Masked
    eCINSSEN_0 = 0,
    // Enabled
    eCINSSEN_1 = 1,
  };
  
  // Card removal status enable
  enum class eCRMSEN : uint32_t {
    // Masked
    eCRMSEN_0 = 0,
    // Enabled
    eCRMSEN_1 = 1,
  };
  
  // Card interrupt status enable
  enum class eCINTSEN : uint32_t {
    // Masked
    eCINTSEN_0 = 0,
    // Enabled
    eCINTSEN_1 = 1,
  };
  
  // Re-tuning event status enable
  enum class eRTESEN : uint32_t {
    // Masked
    eRTESEN_0 = 0,
    // Enabled
    eRTESEN_1 = 1,
  };
  
  // Tuning pass status enable
  enum class eTPSEN : uint32_t {
    // Masked
    eTPSEN_0 = 0,
    // Enabled
    eTPSEN_1 = 1,
  };
  
  // Command timeout error status enable
  enum class eCTOESEN : uint32_t {
    // Masked
    eCTOESEN_0 = 0,
    // Enabled
    eCTOESEN_1 = 1,
  };
  
  // Command CRC error status enable
  enum class eCCESEN : uint32_t {
    // Masked
    eCCESEN_0 = 0,
    // Enabled
    eCCESEN_1 = 1,
  };
  
  // Command end bit error status enable
  enum class eCEBESEN : uint32_t {
    // Masked
    eCEBESEN_0 = 0,
    // Enabled
    eCEBESEN_1 = 1,
  };
  
  // Command index error status enable
  enum class eCIESEN : uint32_t {
    // Masked
    eCIESEN_0 = 0,
    // Enabled
    eCIESEN_1 = 1,
  };
  
  // Data timeout error status enable
  enum class eDTOESEN : uint32_t {
    // Masked
    eDTOESEN_0 = 0,
    // Enabled
    eDTOESEN_1 = 1,
  };
  
  // Data CRC error status enable
  enum class eDCESEN : uint32_t {
    // Masked
    eDCESEN_0 = 0,
    // Enabled
    eDCESEN_1 = 1,
  };
  
  // Data end bit error status enable
  enum class eDEBESEN : uint32_t {
    // Masked
    eDEBESEN_0 = 0,
    // Enabled
    eDEBESEN_1 = 1,
  };
  
  // Auto CMD12 error status enable
  enum class eAC12ESEN : uint32_t {
    // Masked
    eAC12ESEN_0 = 0,
    // Enabled
    eAC12ESEN_1 = 1,
  };
  
  // Tuning error status enable
  enum class eTNESEN : uint32_t {
    // Masked
    eTNESEN_0 = 0,
    // Enabled
    eTNESEN_1 = 1,
  };
  
  // DMA error status enable
  enum class eDMAESEN : uint32_t {
    // Masked
    eDMAESEN_0 = 0,
    // Enabled
    eDMAESEN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Command complete status enable
    eCCSEN CCSEN : 1;
    // read-write - Transfer complete status enable
    eTCSEN TCSEN : 1;
    // read-write - Block gap event status enable
    eBGESEN BGESEN : 1;
    // read-write - DMA interrupt status enable
    eDINTSEN DINTSEN : 1;
    // read-write - Buffer write ready status enable
    eBWRSEN BWRSEN : 1;
    // read-write - Buffer read ready status enable
    eBRRSEN BRRSEN : 1;
    // read-write - Card insertion status enable
    eCINSSEN CINSSEN : 1;
    // read-write - Card removal status enable
    eCRMSEN CRMSEN : 1;
    // read-write - Card interrupt status enable
    eCINTSEN CINTSEN : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Re-tuning event status enable
    eRTESEN RTESEN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Tuning pass status enable
    eTPSEN TPSEN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Command timeout error status enable
    eCTOESEN CTOESEN : 1;
    // read-write - Command CRC error status enable
    eCCESEN CCESEN : 1;
    // read-write - Command end bit error status enable
    eCEBESEN CEBESEN : 1;
    // read-write - Command index error status enable
    eCIESEN CIESEN : 1;
    // read-write - Data timeout error status enable
    eDTOESEN DTOESEN : 1;
    // read-write - Data CRC error status enable
    eDCESEN DCESEN : 1;
    // read-write - Data end bit error status enable
    eDEBESEN DEBESEN : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Auto CMD12 error status enable
    eAC12ESEN AC12ESEN : 1;
    uint32_t _reserved_4 : 1;
    // read-write - Tuning error status enable
    eTNESEN TNESEN : 1;
    uint32_t _reserved_5 : 1;
    // read-write - DMA error status enable
    eDMAESEN DMAESEN : 1;
    uint32_t _reserved_6 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS_EN &ref() { return *reinterpret_cast<volatile INT_STATUS_EN*>(0x40418034); }
};

// Interrupt Signal Enable
union INT_SIGNAL_EN {
  
  // Command complete interrupt enable
  enum class eCCIEN : uint32_t {
    // Masked
    eCCIEN_0 = 0,
    // Enabled
    eCCIEN_1 = 1,
  };
  
  // Transfer complete interrupt enable
  enum class eTCIEN : uint32_t {
    // Masked
    eTCIEN_0 = 0,
    // Enabled
    eTCIEN_1 = 1,
  };
  
  // Block gap event interrupt enable
  enum class eBGEIEN : uint32_t {
    // Masked
    eBGEIEN_0 = 0,
    // Enabled
    eBGEIEN_1 = 1,
  };
  
  // DMA interrupt enable
  enum class eDINTIEN : uint32_t {
    // Masked
    eDINTIEN_0 = 0,
    // Enabled
    eDINTIEN_1 = 1,
  };
  
  // Buffer write ready interrupt enable
  enum class eBWRIEN : uint32_t {
    // Masked
    eBWRIEN_0 = 0,
    // Enabled
    eBWRIEN_1 = 1,
  };
  
  // Buffer read ready interrupt enable
  enum class eBRRIEN : uint32_t {
    // Masked
    eBRRIEN_0 = 0,
    // Enabled
    eBRRIEN_1 = 1,
  };
  
  // Card insertion interrupt enable
  enum class eCINSIEN : uint32_t {
    // Masked
    eCINSIEN_0 = 0,
    // Enabled
    eCINSIEN_1 = 1,
  };
  
  // Card removal interrupt enable
  enum class eCRMIEN : uint32_t {
    // Masked
    eCRMIEN_0 = 0,
    // Enabled
    eCRMIEN_1 = 1,
  };
  
  // Card interrupt enable
  enum class eCINTIEN : uint32_t {
    // Masked
    eCINTIEN_0 = 0,
    // Enabled
    eCINTIEN_1 = 1,
  };
  
  // Re-tuning event interrupt enable
  enum class eRTEIEN : uint32_t {
    // Masked
    eRTEIEN_0 = 0,
    // Enabled
    eRTEIEN_1 = 1,
  };
  
  // Tuning Pass interrupt enable
  enum class eTPIEN : uint32_t {
    // Masked
    eTPIEN_0 = 0,
    // Enabled
    eTPIEN_1 = 1,
  };
  
  // Command timeout error interrupt enable
  enum class eCTOEIEN : uint32_t {
    // Masked
    eCTOEIEN_0 = 0,
    // Enabled
    eCTOEIEN_1 = 1,
  };
  
  // Command CRC error interrupt enable
  enum class eCCEIEN : uint32_t {
    // Masked
    eCCEIEN_0 = 0,
    // Enabled
    eCCEIEN_1 = 1,
  };
  
  // Command end bit error interrupt enable
  enum class eCEBEIEN : uint32_t {
    // Masked
    eCEBEIEN_0 = 0,
    // Enabled
    eCEBEIEN_1 = 1,
  };
  
  // Command index error interrupt enable
  enum class eCIEIEN : uint32_t {
    // Masked
    eCIEIEN_0 = 0,
    // Enabled
    eCIEIEN_1 = 1,
  };
  
  // Data timeout error interrupt enable
  enum class eDTOEIEN : uint32_t {
    // Masked
    eDTOEIEN_0 = 0,
    // Enabled
    eDTOEIEN_1 = 1,
  };
  
  // Data CRC error interrupt enable
  enum class eDCEIEN : uint32_t {
    // Masked
    eDCEIEN_0 = 0,
    // Enabled
    eDCEIEN_1 = 1,
  };
  
  // Data end bit error interrupt enable
  enum class eDEBEIEN : uint32_t {
    // Masked
    eDEBEIEN_0 = 0,
    // Enabled
    eDEBEIEN_1 = 1,
  };
  
  // Auto CMD12 error interrupt enable
  enum class eAC12EIEN : uint32_t {
    // Masked
    eAC12EIEN_0 = 0,
    // Enabled
    eAC12EIEN_1 = 1,
  };
  
  // Tuning error interrupt enable
  enum class eTNEIEN : uint32_t {
    // Masked
    eTNEIEN_0 = 0,
    // Enabled
    eTNEIEN_1 = 1,
  };
  
  // DMA error interrupt enable
  enum class eDMAEIEN : uint32_t {
    // Masked
    eDMAEIEN_0 = 0,
    // Enable
    eDMAEIEN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Command complete interrupt enable
    eCCIEN CCIEN : 1;
    // read-write - Transfer complete interrupt enable
    eTCIEN TCIEN : 1;
    // read-write - Block gap event interrupt enable
    eBGEIEN BGEIEN : 1;
    // read-write - DMA interrupt enable
    eDINTIEN DINTIEN : 1;
    // read-write - Buffer write ready interrupt enable
    eBWRIEN BWRIEN : 1;
    // read-write - Buffer read ready interrupt enable
    eBRRIEN BRRIEN : 1;
    // read-write - Card insertion interrupt enable
    eCINSIEN CINSIEN : 1;
    // read-write - Card removal interrupt enable
    eCRMIEN CRMIEN : 1;
    // read-write - Card interrupt enable
    eCINTIEN CINTIEN : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Re-tuning event interrupt enable
    eRTEIEN RTEIEN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Tuning Pass interrupt enable
    eTPIEN TPIEN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Command timeout error interrupt enable
    eCTOEIEN CTOEIEN : 1;
    // read-write - Command CRC error interrupt enable
    eCCEIEN CCEIEN : 1;
    // read-write - Command end bit error interrupt enable
    eCEBEIEN CEBEIEN : 1;
    // read-write - Command index error interrupt enable
    eCIEIEN CIEIEN : 1;
    // read-write - Data timeout error interrupt enable
    eDTOEIEN DTOEIEN : 1;
    // read-write - Data CRC error interrupt enable
    eDCEIEN DCEIEN : 1;
    // read-write - Data end bit error interrupt enable
    eDEBEIEN DEBEIEN : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Auto CMD12 error interrupt enable
    eAC12EIEN AC12EIEN : 1;
    uint32_t _reserved_4 : 1;
    // read-write - Tuning error interrupt enable
    eTNEIEN TNEIEN : 1;
    uint32_t _reserved_5 : 1;
    // read-write - DMA error interrupt enable
    eDMAEIEN DMAEIEN : 1;
    uint32_t _reserved_6 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_SIGNAL_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_SIGNAL_EN &ref() { return *reinterpret_cast<volatile INT_SIGNAL_EN*>(0x40418038); }
};

// Auto CMD12 Error Status
union AUTOCMD12_ERR_STATUS {
  
  // Auto CMD12 not executed
  enum class eAC12NE : uint32_t {
    // Executed
    eAC12NE_0 = 0,
    // Not executed
    eAC12NE_1 = 1,
  };
  
  // Auto CMD12 / 23 timeout error
  enum class eAC12TOE : uint32_t {
    // No error
    eAC12TOE_0 = 0,
    // Time out
    eAC12TOE_1 = 1,
  };
  
  // Auto CMD12 / 23 end bit error
  enum class eAC12EBE : uint32_t {
    // No error
    eAC12EBE_0 = 0,
    // End bit error generated
    eAC12EBE_1 = 1,
  };
  
  // Auto CMD12 / 23 CRC error
  enum class eAC12CE : uint32_t {
    // No CRC error
    eAC12CE_0 = 0,
    // CRC error met in Auto CMD12/23 response
    eAC12CE_1 = 1,
  };
  
  // Auto CMD12 / 23 index error
  enum class eAC12IE : uint32_t {
    // No error
    eAC12IE_0 = 0,
    // Error, the CMD index in response is not CMD12/23
    eAC12IE_1 = 1,
  };
  
  // Command not issued by Auto CMD12 error
  enum class eCNIBAC12E : uint32_t {
    // No error
    eCNIBAC12E_0 = 0,
    // Not issued
    eCNIBAC12E_1 = 1,
  };
  
  // Execute tuning
  enum class eEXECUTE_TUNING : uint32_t {
    // Tuning procedure is aborted
    eEXECUTE_TUNING_0 = 0,
    // Start tuning procedure
    eEXECUTE_TUNING_1 = 1,
  };
  
  // Sample clock select
  enum class eSMP_CLK_SEL : uint32_t {
    // Fixed clock is used to sample data
    eSMP_CLK_SEL_0 = 0,
    // Tuned clock is used to sample data
    eSMP_CLK_SEL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Auto CMD12 not executed
    eAC12NE AC12NE : 1;
    // read-only - Auto CMD12 / 23 timeout error
    eAC12TOE AC12TOE : 1;
    // read-only - Auto CMD12 / 23 end bit error
    eAC12EBE AC12EBE : 1;
    // read-only - Auto CMD12 / 23 CRC error
    eAC12CE AC12CE : 1;
    // read-only - Auto CMD12 / 23 index error
    eAC12IE AC12IE : 1;
    uint32_t _reserved_0 : 2;
    // read-only - Command not issued by Auto CMD12 error
    eCNIBAC12E CNIBAC12E : 1;
    uint32_t _reserved_1 : 14;
    // read-write - Execute tuning
    eEXECUTE_TUNING EXECUTE_TUNING : 1;
    // read-write - Sample clock select
    eSMP_CLK_SEL SMP_CLK_SEL : 1;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTOCMD12_ERR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTOCMD12_ERR_STATUS &ref() { return *reinterpret_cast<volatile AUTOCMD12_ERR_STATUS*>(0x4041803C); }
};

// Host Controller Capabilities
union HOST_CTRL_CAP {
  
  // Use Tuning for SDR50
  enum class eUSE_TUNING_SDR50 : uint32_t {
    // SDR50 does not support tuning
    eUSE_TUNING_SDR50_0 = 0,
    // SDR50 supports tuning
    eUSE_TUNING_SDR50_1 = 1,
  };
  
  // Max block length
  enum class eMBL : uint32_t {
    // 512 bytes
    eMBL_0 = 0,
    // 1024 bytes
    eMBL_1 = 1,
    // 2048 bytes
    eMBL_2 = 2,
    // 4096 bytes
    eMBL_3 = 3,
  };
  
  // ADMA support
  enum class eADMAS : uint32_t {
    // Advanced DMA not supported
    eADMAS_0 = 0,
    // Advanced DMA supported
    eADMAS_1 = 1,
  };
  
  // High speed support
  enum class eHSS : uint32_t {
    // High speed not supported
    eHSS_0 = 0,
    // High speed supported
    eHSS_1 = 1,
  };
  
  // DMA support
  enum class eDMAS : uint32_t {
    // DMA not supported
    eDMAS_0 = 0,
    // DMA supported
    eDMAS_1 = 1,
  };
  
  // Suspend / resume support
  enum class eSRS : uint32_t {
    // Not supported
    eSRS_0 = 0,
    // Supported
    eSRS_1 = 1,
  };
  
  // Voltage support 3.3 V
  enum class eVS33 : uint32_t {
    // 3.3 V not supported
    eVS33_0 = 0,
    // 3.3 V supported
    eVS33_1 = 1,
  };
  
  // Voltage support 3.0 V
  enum class eVS30 : uint32_t {
    // 3.0 V not supported
    eVS30_0 = 0,
    // 3.0 V supported
    eVS30_1 = 1,
  };
  
  // Voltage support 1.8 V
  enum class eVS18 : uint32_t {
    // 1.8 V not supported
    eVS18_0 = 0,
    // 1.8 V supported
    eVS18_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - SDR50 support
    uint32_t SDR50_SUPPORT : 1;
    // read-only - SDR104 support
    uint32_t SDR104_SUPPORT : 1;
    // read-only - DDR50 support
    uint32_t DDR50_SUPPORT : 1;
    uint32_t _reserved_0 : 10;
    // read-write - Use Tuning for SDR50
    eUSE_TUNING_SDR50 USE_TUNING_SDR50 : 1;
    uint32_t _reserved_1 : 2;
    // read-only - Max block length
    eMBL MBL : 3;
    uint32_t _reserved_2 : 1;
    // read-only - ADMA support
    eADMAS ADMAS : 1;
    // read-only - High speed support
    eHSS HSS : 1;
    // read-only - DMA support
    eDMAS DMAS : 1;
    // read-only - Suspend / resume support
    eSRS SRS : 1;
    // read-only - Voltage support 3.3 V
    eVS33 VS33 : 1;
    // read-only - Voltage support 3.0 V
    eVS30 VS30 : 1;
    // read-only - Voltage support 1.8 V
    eVS18 VS18 : 1;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HOST_CTRL_CAP() = delete;
  inline void Reset() volatile { this->value = 0x07F3B407; }
  static inline volatile HOST_CTRL_CAP &ref() { return *reinterpret_cast<volatile HOST_CTRL_CAP*>(0x40418040); }
};

// Watermark Level
union WTMK_LVL {
  
  // Bit field definition.
  struct {
    // read-write - Read watermark level
    uint32_t RD_WML : 8;
    uint32_t _reserved_0 : 8;
    // read-write - Write watermark level
    uint32_t WR_WML : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WTMK_LVL() = delete;
  inline void Reset() volatile { this->value = 0x08100810; }
  static inline volatile WTMK_LVL &ref() { return *reinterpret_cast<volatile WTMK_LVL*>(0x40418044); }
};

// Mixer Control
union MIX_CTRL {
  
  // DMA enable
  enum class eDMAEN : uint32_t {
    // Disable
    eDMAEN_0 = 0,
    // Enable
    eDMAEN_1 = 1,
  };
  
  // Block count enable
  enum class eBCEN : uint32_t {
    // Disable
    eBCEN_0 = 0,
    // Enable
    eBCEN_1 = 1,
  };
  
  // Auto CMD12 enable
  enum class eAC12EN : uint32_t {
    // Disable
    eAC12EN_0 = 0,
    // Enable
    eAC12EN_1 = 1,
  };
  
  // Data transfer direction select
  enum class eDTDSEL : uint32_t {
    // Write (Host to card)
    eDTDSEL_0 = 0,
    // Read (Card to host)
    eDTDSEL_1 = 1,
  };
  
  // Multi / Single block select
  enum class eMSBSEL : uint32_t {
    // Single block
    eMSBSEL_0 = 0,
    // Multiple blocks
    eMSBSEL_1 = 1,
  };
  
  // Execute tuning: (Only used for SD3.0, SDR104 mode and EMMC HS200 mode)
  enum class eEXE_TUNE : uint32_t {
    // Not tuned or tuning completed
    eEXE_TUNE_0 = 0,
    // Execute tuning
    eEXE_TUNE_1 = 1,
  };
  
  // Clock selection
  enum class eSMP_CLK_SEL : uint32_t {
    // Fixed clock is used to sample data / cmd
    eSMP_CLK_SEL_0 = 0,
    // Tuned clock is used to sample data / cmd
    eSMP_CLK_SEL_1 = 1,
  };
  
  // Auto tuning enable (Only used for SD3.0, SDR104 mode and and EMMC HS200 mode)
  enum class eAUTO_TUNE_EN : uint32_t {
    // Disable auto tuning
    eAUTO_TUNE_EN_0 = 0,
    // Enable auto tuning
    eAUTO_TUNE_EN_1 = 1,
  };
  
  // Feedback clock source selection (Only used for SD3.0, SDR104 mode and EMMC HS200 mode)
  enum class eFBCLK_SEL : uint32_t {
    // Feedback clock comes from the loopback CLK
    eFBCLK_SEL_0 = 0,
    // Feedback clock comes from the ipp_card_clk_out
    eFBCLK_SEL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA enable
    eDMAEN DMAEN : 1;
    // read-write - Block count enable
    eBCEN BCEN : 1;
    // read-write - Auto CMD12 enable
    eAC12EN AC12EN : 1;
    // read-write - Dual data rate mode selection
    uint32_t DDR_EN : 1;
    // read-write - Data transfer direction select
    eDTDSEL DTDSEL : 1;
    // read-write - Multi / Single block select
    eMSBSEL MSBSEL : 1;
    // read-write - Nibble position indication
    uint32_t NIBBLE_POS : 1;
    // read-write - Auto CMD23 enable
    uint32_t AC23EN : 1;
    uint32_t _reserved_0 : 14;
    // read-write - Execute tuning: (Only used for SD3.0, SDR104 mode and EMMC HS200 mode)
    eEXE_TUNE EXE_TUNE : 1;
    // read-write - Clock selection
    eSMP_CLK_SEL SMP_CLK_SEL : 1;
    // read-write - Auto tuning enable (Only used for SD3.0, SDR104 mode and and EMMC HS200 mode)
    eAUTO_TUNE_EN AUTO_TUNE_EN : 1;
    // read-write - Feedback clock source selection (Only used for SD3.0, SDR104 mode and EMMC HS200 mode)
    eFBCLK_SEL FBCLK_SEL : 1;
    // read-write - Enable HS400 mode
    uint32_t HS400_MODE : 1;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIX_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile MIX_CTRL &ref() { return *reinterpret_cast<volatile MIX_CTRL*>(0x40418048); }
};

// Force Event
union FORCE_EVENT {
  
  // Bit field definition.
  struct {
    // read-write - Force event auto command 12 not executed
    uint32_t FEVTAC12NE : 1;
    // read-write - Force event auto command 12 time out error
    uint32_t FEVTAC12TOE : 1;
    // read-write - Force event auto command 12 CRC error
    uint32_t FEVTAC12CE : 1;
    // read-write - Force event Auto Command 12 end bit error
    uint32_t FEVTAC12EBE : 1;
    // read-write - Force event Auto Command 12 index error
    uint32_t FEVTAC12IE : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Force event command not executed by Auto Command 12 error
    uint32_t FEVTCNIBAC12E : 1;
    uint32_t _reserved_1 : 8;
    // read-write - Force event command time out error
    uint32_t FEVTCTOE : 1;
    // read-write - Force event command CRC error
    uint32_t FEVTCCE : 1;
    // read-write - Force event command end bit error
    uint32_t FEVTCEBE : 1;
    // read-write - Force event command index error
    uint32_t FEVTCIE : 1;
    // read-write - Force event data time out error
    uint32_t FEVTDTOE : 1;
    // read-write - Force event data CRC error
    uint32_t FEVTDCE : 1;
    // read-write - Force event data end bit error
    uint32_t FEVTDEBE : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Force event Auto Command 12 error
    uint32_t FEVTAC12E : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Force tuning error
    uint32_t FEVTTNE : 1;
    uint32_t _reserved_4 : 1;
    // read-write - Force event DMA error
    uint32_t FEVTDMAE : 1;
    uint32_t _reserved_5 : 2;
    // read-write - Force event card interrupt
    uint32_t FEVTCINT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FORCE_EVENT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FORCE_EVENT &ref() { return *reinterpret_cast<volatile FORCE_EVENT*>(0x40418050); }
};

// ADMA Error Status
union ADMA_ERR_STATUS {
  
  // ADMA length mismatch error
  enum class eADMALME : uint32_t {
    // No error
    eADMALME_0 = 0,
    // Error
    eADMALME_1 = 1,
  };
  
  // ADMA descriptor error
  enum class eADMADCE : uint32_t {
    // No error
    eADMADCE_0 = 0,
    // Error
    eADMADCE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - ADMA error state (when ADMA error is occurred)
    uint32_t ADMAES : 2;
    // read-only - ADMA length mismatch error
    eADMALME ADMALME : 1;
    // read-only - ADMA descriptor error
    eADMADCE ADMADCE : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADMA_ERR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADMA_ERR_STATUS &ref() { return *reinterpret_cast<volatile ADMA_ERR_STATUS*>(0x40418054); }
};

// ADMA System Address
union ADMA_SYS_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - ADMA system address
    uint32_t ADS_ADDR : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADMA_SYS_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADMA_SYS_ADDR &ref() { return *reinterpret_cast<volatile ADMA_SYS_ADDR*>(0x40418058); }
};

// DLL (Delay Line) Control
union DLL_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - DLL and delay chain
    uint32_t DLL_CTRL_ENABLE : 1;
    // read-write - DLL reset
    uint32_t DLL_CTRL_RESET : 1;
    // read-write - DLL slave delay line
    uint32_t DLL_CTRL_SLV_FORCE_UPD : 1;
    // read-write - DLL slave delay target0
    uint32_t DLL_CTRL_SLV_DLY_TARGET0 : 4;
    // read-write - DLL gate update
    uint32_t DLL_CTRL_GATE_UPDATE : 1;
    // read-write - DLL slave override
    uint32_t DLL_CTRL_SLV_OVERRIDE : 1;
    // read-write - DLL slave override val
    uint32_t DLL_CTRL_SLV_OVERRIDE_VAL : 7;
    // read-write - DLL slave delay target1
    uint32_t DLL_CTRL_SLV_DLY_TARGET1 : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Slave delay line update interval
    uint32_t DLL_CTRL_SLV_UPDATE_INT : 8;
    // read-write - DLL control loop update interval
    uint32_t DLL_CTRL_REF_UPDATE_INT : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DLL_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DLL_CTRL &ref() { return *reinterpret_cast<volatile DLL_CTRL*>(0x40418060); }
};

// DLL Status
union DLL_STATUS {
  
  // Bit field definition.
  struct {
    // read-only - Slave delay-line lock status
    uint32_t DLL_STS_SLV_LOCK : 1;
    // read-only - Reference DLL lock status
    uint32_t DLL_STS_REF_LOCK : 1;
    // read-only - Slave delay line select status
    uint32_t DLL_STS_SLV_SEL : 7;
    // read-only - Reference delay line select taps
    uint32_t DLL_STS_REF_SEL : 7;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DLL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000200; }
  static inline volatile DLL_STATUS &ref() { return *reinterpret_cast<volatile DLL_STATUS*>(0x40418064); }
};

// CLK Tuning Control and Status
union CLK_TUNE_CTRL_STATUS {
  
  // Bit field definition.
  struct {
    // read-write - Delay cells on the feedback clock between CLK_OUT and CLK_POST
    uint32_t DLY_CELL_SET_POST : 4;
    // read-write - Delay cells on the feedback clock between CLK_PRE and CLK_OUT
    uint32_t DLY_CELL_SET_OUT : 4;
    // read-write - delay cells on the feedback clock between the feedback clock and CLK_PRE
    uint32_t DLY_CELL_SET_PRE : 7;
    // read-only - NXT error
    uint32_t NXT_ERR : 1;
    // read-only - Delay cells added on the feedback clock between CLK_OUT and CLK_POST
    uint32_t TAP_SEL_POST : 4;
    // read-only - Delay cells added on the feedback clock between CLK_PRE and CLK_OUT
    uint32_t TAP_SEL_OUT : 4;
    // read-only - TAP_SEL_PRE
    uint32_t TAP_SEL_PRE : 7;
    // read-only - PRE error
    uint32_t PRE_ERR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLK_TUNE_CTRL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLK_TUNE_CTRL_STATUS &ref() { return *reinterpret_cast<volatile CLK_TUNE_CTRL_STATUS*>(0x40418068); }
};

// Strobe DLL control
union STROBE_DLL_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Strobe DLL control enable
    uint32_t STROBE_DLL_CTRL_ENABLE : 1;
    // read-write - Strobe DLL control reset
    uint32_t STROBE_DLL_CTRL_RESET : 1;
    // read-write - Strobe DLL control slave force updated
    uint32_t STROBE_DLL_CTRL_SLV_FORCE_UPD : 1;
    // read-write - Strobe DLL Control Slave Delay Target
    uint32_t STROBE_DLL_CTRL_SLV_DLY_TARGET : 4;
    // read-write - Strobe DLL control gate update
    uint32_t STROBE_DLL_CTRL_GATE_UPDATE : 1;
    // read-write - Strobe DLL control slave override
    uint32_t STROBE_DLL_CTRL_SLV_OVERRIDE : 1;
    // read-write - Strobe DLL control slave Override value
    uint32_t STROBE_DLL_CTRL_SLV_OVERRIDE_VAL : 7;
    uint32_t _reserved_0 : 4;
    // read-write - Strobe DLL control slave update interval
    uint32_t STROBE_DLL_CTRL_SLV_UPDATE_INT : 8;
    // read-write - Strobe DLL control reference update interval
    uint32_t STROBE_DLL_CTRL_REF_UPDATE_INT : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STROBE_DLL_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STROBE_DLL_CTRL &ref() { return *reinterpret_cast<volatile STROBE_DLL_CTRL*>(0x40418070); }
};

// Strobe DLL status
union STROBE_DLL_STATUS {
  
  // Bit field definition.
  struct {
    // read-only - Strobe DLL status slave lock
    uint32_t STROBE_DLL_STS_SLV_LOCK : 1;
    // read-only - Strobe DLL status reference lock
    uint32_t STROBE_DLL_STS_REF_LOCK : 1;
    // read-only - Strobe DLL status slave select
    uint32_t STROBE_DLL_STS_SLV_SEL : 7;
    // read-only - Strobe DLL status reference select
    uint32_t STROBE_DLL_STS_REF_SEL : 7;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STROBE_DLL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000200; }
  static inline volatile STROBE_DLL_STATUS &ref() { return *reinterpret_cast<volatile STROBE_DLL_STATUS*>(0x40418074); }
};

// Vendor Specific Register
union VEND_SPEC {
  
  // Voltage selection
  enum class eVSELECT : uint32_t {
    // Change the voltage to high voltage range, around 3.0 V
    eVSELECT_0 = 0,
    // Change the voltage to low voltage range, around 1.8 V
    eVSELECT_1 = 1,
  };
  
  // Conflict check enable
  enum class eCONFLICT_CHK_EN : uint32_t {
    // Conflict check disable
    eCONFLICT_CHK_EN_0 = 0,
    // Conflict check enable
    eCONFLICT_CHK_EN_1 = 1,
  };
  
  // Check busy enable
  enum class eAC12_WR_CHKBUSY_EN : uint32_t {
    // Do not check busy after auto CMD12 for write data packet
    eAC12_WR_CHKBUSY_EN_0 = 0,
    // Check busy after auto CMD12 for write data packet
    eAC12_WR_CHKBUSY_EN_1 = 1,
  };
  
  // Force CLK
  enum class eFRC_SDCLK_ON : uint32_t {
    // CLK active or inactive is fully controlled by the hardware.
    eFRC_SDCLK_ON_0 = 0,
    // Force CLK active
    eFRC_SDCLK_ON_1 = 1,
  };
  
  // CRC Check Disable
  enum class eCRC_CHK_DIS : uint32_t {
    // Check CRC16 for every read data packet and check CRC fields for every write data packet
    eCRC_CHK_DIS_0 = 0,
    // Ignore CRC16 check for every read data packet and ignore CRC fields check for every write data packet
    eCRC_CHK_DIS_1 = 1,
  };
  
  // Byte access
  enum class eCMD_BYTE_EN : uint32_t {
    // Disable
    eCMD_BYTE_EN_0 = 0,
    // Enable
    eCMD_BYTE_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Voltage selection
    eVSELECT VSELECT : 1;
    // read-write - Conflict check enable
    eCONFLICT_CHK_EN CONFLICT_CHK_EN : 1;
    // read-write - Check busy enable
    eAC12_WR_CHKBUSY_EN AC12_WR_CHKBUSY_EN : 1;
    uint32_t _reserved_1 : 4;
    // read-write - Force CLK
    eFRC_SDCLK_ON FRC_SDCLK_ON : 1;
    uint32_t _reserved_2 : 6;
    // read-write - CRC Check Disable
    eCRC_CHK_DIS CRC_CHK_DIS : 1;
    uint32_t _reserved_3 : 15;
    // read-write - Byte access
    eCMD_BYTE_EN CMD_BYTE_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VEND_SPEC() = delete;
  inline void Reset() volatile { this->value = 0x30007809; }
  static inline volatile VEND_SPEC &ref() { return *reinterpret_cast<volatile VEND_SPEC*>(0x404180C0); }
};

// MMC Boot
union MMC_BOOT {
  
  // Boot ACK time out
  enum class eDTOCV_ACK : uint32_t {
    // SDCLK x 2^14
    eDTOCV_ACK_0 = 0,
    // SDCLK x 2^15
    eDTOCV_ACK_1 = 1,
    // SDCLK x 2^16
    eDTOCV_ACK_2 = 2,
    // SDCLK x 2^17
    eDTOCV_ACK_3 = 3,
    // SDCLK x 2^18
    eDTOCV_ACK_4 = 4,
    // SDCLK x 2^19
    eDTOCV_ACK_5 = 5,
    // SDCLK x 2^20
    eDTOCV_ACK_6 = 6,
    // SDCLK x 2^21
    eDTOCV_ACK_7 = 7,
    // SDCLK x 2^28
    eDTOCV_ACK_14 = 14,
    // SDCLK x 2^29
    eDTOCV_ACK_15 = 15,
  };
  
  // BOOT ACK
  enum class eBOOT_ACK : uint32_t {
    // No ack
    eBOOT_ACK_0 = 0,
    // Ack
    eBOOT_ACK_1 = 1,
  };
  
  // Boot mode
  enum class eBOOT_MODE : uint32_t {
    // Normal boot
    eBOOT_MODE_0 = 0,
    // Alternative boot
    eBOOT_MODE_1 = 1,
  };
  
  // Boot enable
  enum class eBOOT_EN : uint32_t {
    // Fast boot disable
    eBOOT_EN_0 = 0,
    // Fast boot enable
    eBOOT_EN_1 = 1,
  };
  
  // Time out
  enum class eDISABLE_TIME_OUT : uint32_t {
    // Enable time out
    eDISABLE_TIME_OUT_0 = 0,
    // Disable time out
    eDISABLE_TIME_OUT_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Boot ACK time out
    eDTOCV_ACK DTOCV_ACK : 4;
    // read-write - BOOT ACK
    eBOOT_ACK BOOT_ACK : 1;
    // read-write - Boot mode
    eBOOT_MODE BOOT_MODE : 1;
    // read-write - Boot enable
    eBOOT_EN BOOT_EN : 1;
    // read-write - Auto stop at block gap
    uint32_t AUTO_SABG_EN : 1;
    // read-write - Time out
    eDISABLE_TIME_OUT DISABLE_TIME_OUT : 1;
    uint32_t _reserved_0 : 7;
    // read-write - Stop At Block Gap value of automatic mode
    uint32_t BOOT_BLK_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MMC_BOOT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MMC_BOOT &ref() { return *reinterpret_cast<volatile MMC_BOOT*>(0x404180C4); }
};

// Vendor Specific 2 Register
union VEND_SPEC2 {
  
  // Card interrupt detection test
  enum class eCARD_INT_D3_TEST : uint32_t {
    // Check the card interrupt only when DATA3 is high.
    eCARD_INT_D3_TEST_0 = 0,
    // Check the card interrupt by ignoring the status of DATA3.
    eCARD_INT_D3_TEST_1 = 1,
  };
  
  // Tuning command enable
  enum class eTUNING_CMD_EN : uint32_t {
    // Auto tuning circuit does not check the CMD line.
    eTUNING_CMD_EN_0 = 0,
    // Auto tuning circuit checks the CMD line.
    eTUNING_CMD_EN_1 = 1,
  };
  
  // Argument2 register enable for ACMD23
  enum class eACMD23_ARGU2_EN : uint32_t {
    // Disable
    eACMD23_ARGU2_EN_0 = 0,
    // Argument2 register enable for ACMD23 sharing with SDMA system address register. Default is enabled.
    eACMD23_ARGU2_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - Card interrupt detection test
    eCARD_INT_D3_TEST CARD_INT_D3_TEST : 1;
    // read-write - Tuning 8bit enable
    uint32_t TUNING_8bit_EN : 1;
    // read-write - Tuning 1bit enable
    uint32_t TUNING_1bit_EN : 1;
    // read-write - Tuning command enable
    eTUNING_CMD_EN TUNING_CMD_EN : 1;
    uint32_t _reserved_1 : 3;
    // read-write - HS400 write clock stop enable
    uint32_t HS400_WR_CLK_STOP_EN : 1;
    // read-write - HS400 read clock stop enable
    uint32_t HS400_RD_CLK_STOP_EN : 1;
    // read-write - Argument2 register enable for ACMD23
    eACMD23_ARGU2_EN ACMD23_ARGU2_EN : 1;
    uint32_t _reserved_2 : 19;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VEND_SPEC2() = delete;
  inline void Reset() volatile { this->value = 0x00019006; }
  static inline volatile VEND_SPEC2 &ref() { return *reinterpret_cast<volatile VEND_SPEC2*>(0x404180C8); }
};

// Tuning Control
union TUNING_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Tuning start
    uint32_t TUNING_START_TAP : 7;
    // read-write - Disable command check for standard tuning
    uint32_t DIS_CMD_CHK_FOR_STD_TUNING : 1;
    // read-write - Tuning counter
    uint32_t TUNING_COUNTER : 8;
    // read-write - TUNING_STEP
    uint32_t TUNING_STEP : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Data window
    uint32_t TUNING_WINDOW : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Standard tuning circuit and procedure enable
    uint32_t STD_TUNING_EN : 1;
    uint32_t _reserved_2 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TUNING_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00212800; }
  static inline volatile TUNING_CTRL &ref() { return *reinterpret_cast<volatile TUNING_CTRL*>(0x404180CC); }
};


} // namespace nUSDHC1