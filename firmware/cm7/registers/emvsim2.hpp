#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// EMVSIM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nEMVSIM2 {


// Version ID Register
//
union VER_ID {
  
  // Bit field definition.
  struct {
    uint32_t VER : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VER_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VER_ID &Instance() { return *reinterpret_cast<volatile VER_ID*>(0x40158000); }
};

// Parameter Register
//
union PARAM {
  
  // Bit field definition.
  struct {
    uint32_t RX_FIFO_DEPTH : 8;
    uint32_t TX_FIFO_DEPTH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00001010; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x40158004); }
};

// Clock Configuration Register
//
union CLKCFG {
  
  enum class eGPCNT1_CLK_SEL : uint32_t {
    edisabled = 0, // Disabled / Reset
    ecardclk = 1, // Card Clock
    erxclk = 2, // Receive Clock
    etxclk = 3, // ETU Clock (transmit clock)
  };
  
  enum class eGPCNT0_CLK_SEL : uint32_t {
    edisabled = 0, // Disabled / Reset
    ecardclk = 1, // Card Clock
    erxclk = 2, // Receive Clock
    etxclk = 3, // ETU Clock (transmit clock)
  };
  
  // Bit field definition.
  struct {
    uint32_t CLK_PRSC : 8;
    eGPCNT1_CLK_SEL GPCNT1_CLK_SEL : 2;
    eGPCNT0_CLK_SEL GPCNT0_CLK_SEL : 2;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLKCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLKCFG &Instance() { return *reinterpret_cast<volatile CLKCFG*>(0x40158008); }
};

// Baud Rate Divisor Register
//
union DIVISOR {
  
  enum class eDIVISOR_VALUE : uint32_t {
    einvalid = 0, // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid = 1, // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid = 2, // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid = 3, // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid = 4, // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    evalid = 5, // Divisor value F/D
    evalid = 6, // Divisor value F/D
    evalid = 7, // Divisor value F/D
    evalid = 8, // Divisor value F/D
    evalid = 9, // Divisor value F/D
  };
  
  // Bit field definition.
  struct {
    eDIVISOR_VALUE DIVISOR_VALUE : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DIVISOR() = delete;
  inline void Reset() volatile { this->value = 0x00000174; }
  static inline volatile DIVISOR &Instance() { return *reinterpret_cast<volatile DIVISOR*>(0x4015800C); }
};

// Control Register
//
union CTRL {
  
  enum class eIC : uint32_t {
    edir_convention = 0, // Direction convention transfers enabled
    einv_convention = 1, // Inverse convention transfers enabled
  };
  
  enum class eICM : uint32_t {
    edisabled = 0, // Initial Character Mode disabled
    eenabled = 1, // Initial Character Mode enabled
  };
  
  enum class eANACK : uint32_t {
    edisabled = 0, // NACK generation on errors disabled
    eenabled = 1, // NACK generation on errors enabled
  };
  
  enum class eONACK : uint32_t {
    edisabled = 0, // NACK generation on overrun is disabled
    eenabled = 1, // NACK generation on overrun is enabled
  };
  
  enum class eFLSH_RX : uint32_t {
    enormalop = 0, // EMVSIM Receiver normal operation
    eresethold = 1, // EMVSIM Receiver held in Reset
  };
  
  enum class eFLSH_TX : uint32_t {
    enormalop = 0, // EMVSIM Transmitter normal operation
    eresethold = 1, // EMVSIM Transmitter held in Reset
  };
  
  enum class eSW_RST : uint32_t {
    enormalop = 0, // EMVSIM Normal operation
    eresethold = 1, // EMVSIM held in Reset
  };
  
  enum class eKILL_CLOCKS : uint32_t {
    einclk_enabled = 0, // EMVSIM input clock enabled
    einclk_disabled = 1, // EMVSIM input clock is disabled
  };
  
  enum class eDOZE_EN : uint32_t {
    edoze_gate = 0, // DOZE instruction gates all internal EMVSIM clocks as well as the Smart Card clock when the transmit FIFO is empty
    edoze_nogate = 1, // DOZE instruction has no effect on EMVSIM module
  };
  
  enum class eSTOP_EN : uint32_t {
    estop_all_clks = 0, // STOP instruction shuts down all EMVSIM clocks
    eonly_sck_on = 1, // STOP instruction shuts down all clocks except for the Smart Card Clock (SCK) (clock provided to Smart Card)
  };
  
  enum class eRCV_EN : uint32_t {
    edisabled = 0, // EMVSIM Receiver disabled
    eenabled = 1, // EMVSIM Receiver enabled
  };
  
  enum class eXMT_EN : uint32_t {
    edisabled = 0, // EMVSIM Transmitter disabled
    eenabled = 1, // EMVSIM Transmitter enabled
  };
  
  enum class eRCVR_11 : uint32_t {
    ercvr_12 = 0, // Receiver configured for 12 ETU operation mode
    ercvr_11 = 1, // Receiver configured for 11 ETU operation mode
  };
  
  enum class eRX_DMA_EN : uint32_t {
    eno_dmaread_req = 0, // No DMA Read Request asserted for Receiver
    edmaread_req = 1, // DMA Read Request asserted for Receiver
  };
  
  enum class eTX_DMA_EN : uint32_t {
    eno_dmawrite_req = 0, // No DMA Write Request asserted for Transmitter
    edmawrite_req = 1, // DMA Write Request asserted for Transmitter
  };
  
  enum class eINV_CRC_VAL : uint32_t {
    eno_invert = 0, // Bits in CRC Output value are not inverted.
    einvert = 1, // Bits in CRC Output value are inverted.
  };
  
  enum class eCRC_OUT_FLIP : uint32_t {
    enot_reversed = 0, // Bits within the CRC output bytes are not reversed i.e. 15:0 remains 15:0
    ereversed = 1, // Bits within the CRC output bytes are reversed i.e. 15:0 becomes {8:15,0:7}
  };
  
  enum class eCRC_IN_FLIP : uint32_t {
    enot_reversed = 0, // Bits in the input byte are not reversed (i.e. 7:0 remain 7:0) before the CRC calculation
    ereversed = 1, // Bits in the input byte are reversed (i.e. 7:0 becomes 0:7) before CRC calculation
  };
  
  enum class eCWT_EN : uint32_t {
    edisabled = 0, // Character Wait time Counter is disabled
    eenabled = 1, // Character Wait time counter is enabled
  };
  
  enum class eLRC_EN : uint32_t {
    edisabled = 0, // 8-bit Linear Redundancy Checking disabled
    eenabled = 1, // 8-bit Linear Redundancy Checking enabled
  };
  
  enum class eCRC_EN : uint32_t {
    edisabled = 0, // 16-bit Cyclic Redundancy Checking disabled
    eenabled = 1, // 16-bit Cyclic Redundancy Checking enabled
  };
  
  enum class eXMT_CRC_LRC : uint32_t {
    eno_crc_lrc_tx = 0, // No CRC or LRC value is transmitted
    ecrc_lrc_tx = 1, // Transmit LRC or CRC info when FIFO empties (whichever is enabled)
  };
  
  enum class eBWT_EN : uint32_t {
    edisabled = 0, // Disable BWT, BGT Counters
    eenabled = 1, // Enable BWT, BGT Counters
  };
  
  // Bit field definition.
  struct {
    eIC IC : 1;
    eICM ICM : 1;
    eANACK ANACK : 1;
    eONACK ONACK : 1;
    uint32_t _reserved_0 : 4;
    eFLSH_RX FLSH_RX : 1;
    eFLSH_TX FLSH_TX : 1;
    eSW_RST SW_RST : 1;
    eKILL_CLOCKS KILL_CLOCKS : 1;
    eDOZE_EN DOZE_EN : 1;
    eSTOP_EN STOP_EN : 1;
    uint32_t _reserved_1 : 2;
    eRCV_EN RCV_EN : 1;
    eXMT_EN XMT_EN : 1;
    eRCVR_11 RCVR_11 : 1;
    eRX_DMA_EN RX_DMA_EN : 1;
    eTX_DMA_EN TX_DMA_EN : 1;
    uint32_t _reserved_2 : 3;
    eINV_CRC_VAL INV_CRC_VAL : 1;
    eCRC_OUT_FLIP CRC_OUT_FLIP : 1;
    eCRC_IN_FLIP CRC_IN_FLIP : 1;
    eCWT_EN CWT_EN : 1;
    eLRC_EN LRC_EN : 1;
    eCRC_EN CRC_EN : 1;
    eXMT_CRC_LRC XMT_CRC_LRC : 1;
    eBWT_EN BWT_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x01000006; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40158010); }
};

// Interrupt Mask Register
//
union INT_MASK {
  
  enum class eRDT_IM : uint32_t {
    eint_enabled = 0, // RDTF interrupt enabled
    eint_masked = 1, // RDTF interrupt masked
  };
  
  enum class eTC_IM : uint32_t {
    eint_enabled = 0, // TCF interrupt enabled
    eint_masked = 1, // TCF interrupt masked
  };
  
  enum class eRFO_IM : uint32_t {
    eint_enabled = 0, // RFO interrupt enabled
    eint_masked = 1, // RFO interrupt masked
  };
  
  enum class eETC_IM : uint32_t {
    eint_enabled = 0, // ETC interrupt enabled
    eint_masked = 1, // ETC interrupt masked
  };
  
  enum class eTFE_IM : uint32_t {
    eint_enabled = 0, // TFE interrupt enabled
    eint_masked = 1, // TFE interrupt masked
  };
  
  enum class eTNACK_IM : uint32_t {
    eint_enabled = 0, // TNTE interrupt enabled
    eint_masked = 1, // TNTE interrupt masked
  };
  
  enum class eTFF_IM : uint32_t {
    eint_enabled = 0, // TFF interrupt enabled
    eint_masked = 1, // TFF interrupt masked
  };
  
  enum class eTDT_IM : uint32_t {
    eint_enabled = 0, // TDTF interrupt enabled
    eint_masked = 1, // TDTF interrupt masked
  };
  
  enum class eGPCNT0_IM : uint32_t {
    eint_enabled = 0, // GPCNT0_TO interrupt enabled
    eint_masked = 1, // GPCNT0_TO interrupt masked
  };
  
  enum class eCWT_ERR_IM : uint32_t {
    eint_enabled = 0, // CWT_ERR interrupt enabled
    eint_disabled = 1, // CWT_ERR interrupt masked
  };
  
  enum class eRNACK_IM : uint32_t {
    eint_enabled = 0, // RTE interrupt enabled
    eint_masked = 1, // RTE interrupt masked
  };
  
  enum class eBWT_ERR_IM : uint32_t {
    eint_enabled = 0, // BWT_ERR interrupt enabled
    eint_masked = 1, // BWT_ERR interrupt masked
  };
  
  enum class eBGT_ERR_IM : uint32_t {
    eint_enabled = 0, // BGT_ERR interrupt enabled
    eint_masked = 1, // BGT_ERR interrupt masked
  };
  
  enum class eGPCNT1_IM : uint32_t {
    eint_enabled = 0, // GPCNT1_TO interrupt enabled
    eint_masked = 1, // GPCNT1_TO interrupt masked
  };
  
  enum class eRX_DATA_IM : uint32_t {
    eint_enabled = 0, // RX_DATA interrupt enabled
    eint_masked = 1, // RX_DATA interrupt masked
  };
  
  enum class ePEF_IM : uint32_t {
    eint_enabled = 0, // PEF interrupt enabled
    eint_masked = 1, // PEF interrupt masked
  };
  
  // Bit field definition.
  struct {
    eRDT_IM RDT_IM : 1;
    eTC_IM TC_IM : 1;
    eRFO_IM RFO_IM : 1;
    eETC_IM ETC_IM : 1;
    eTFE_IM TFE_IM : 1;
    eTNACK_IM TNACK_IM : 1;
    eTFF_IM TFF_IM : 1;
    eTDT_IM TDT_IM : 1;
    eGPCNT0_IM GPCNT0_IM : 1;
    eCWT_ERR_IM CWT_ERR_IM : 1;
    eRNACK_IM RNACK_IM : 1;
    eBWT_ERR_IM BWT_ERR_IM : 1;
    eBGT_ERR_IM BGT_ERR_IM : 1;
    eGPCNT1_IM GPCNT1_IM : 1;
    eRX_DATA_IM RX_DATA_IM : 1;
    ePEF_IM PEF_IM : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_MASK() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile INT_MASK &Instance() { return *reinterpret_cast<volatile INT_MASK*>(0x40158014); }
};

// Receiver Threshold Register
//
union RX_THD {
  
  // Bit field definition.
  struct {
    uint32_t RDT : 4;
    uint32_t _reserved_0 : 4;
    uint32_t RNCK_THD : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_THD() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile RX_THD &Instance() { return *reinterpret_cast<volatile RX_THD*>(0x40158018); }
};

// Transmitter Threshold Register
//
union TX_THD {
  
  // Bit field definition.
  struct {
    uint32_t TDT : 4;
    uint32_t _reserved_0 : 4;
    uint32_t TNCK_THD : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_THD() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile TX_THD &Instance() { return *reinterpret_cast<volatile TX_THD*>(0x4015801C); }
};

// Receive Status Register
//
union RX_STATUS {
  
  enum class eRFO : uint32_t {
    eno_overrun = 0, // No overrun error has occurred
    eoverflow = 1, // A byte was received when the received FIFO was already full
  };
  
  enum class eRX_DATA : uint32_t {
    eno_byte_rx = 0, // No new byte is received
    ebyte_rx = 1, // New byte is received ans stored in Receive FIFO
  };
  
  enum class eRDTF : uint32_t {
    elessthan_rxthresh = 0, // Number of unread bytes in receive FIFO less than the value set by RDT
    egreater_eq_rxthresh = 1, // Number of unread bytes in receive FIFO greater or than equal to value set by RDT.
  };
  
  enum class eLRC_OK : uint32_t {
    elrc_notok = 0, // Current LRC value does not match remainder.
    elrc_ok = 1, // Current calculated LRC value matches the expected result (i.e. zero).
  };
  
  enum class eCRC_OK : uint32_t {
    ecrc_notok = 0, // Current CRC value does not match remainder.
    ecrc_ok = 1, // Current calculated CRC value matches the expected result.
  };
  
  enum class eCWT_ERR : uint32_t {
    eno_cwt_err = 0, // No CWT violation has occurred
    ecwt_err = 1, // Time between two consecutive characters has exceeded the value in CWT_VAL.
  };
  
  enum class eRTE : uint32_t {
    elessthan_nackthresh = 0, // Number of NACKs generated by the receiver is less than the value programmed in RNCK_THD
    egreater_eq_nackthresh = 1, // Number of NACKs generated by the receiver is equal to the value programmed in RNCK_THD
  };
  
  enum class eBWT_ERR : uint32_t {
    ebwt_err_no = 0, // Block wait time not exceeded
    ebwt_err_yes = 1, // Block wait time was exceeded
  };
  
  enum class eBGT_ERR : uint32_t {
    ebgt_err_sufficient = 0, // Block guard time was sufficient
    ebgt_err_toosmall = 1, // Block guard time was too small
  };
  
  enum class ePEF : uint32_t {
    eno_parity_detect = 0, // No parity error detected
    eparity_detect = 1, // Parity error detected
  };
  
  enum class eFEF : uint32_t {
    eno_fef_detect = 0, // No frame error detected
    efef_detect = 1, // Frame error detected
  };
  
  enum class eRX_CNT : uint32_t {
    efifo_empty = 0, // FIFO is emtpy
  };
  
  // Bit field definition.
  struct {
    eRFO RFO : 1;
    uint32_t _reserved_0 : 3;
    eRX_DATA RX_DATA : 1;
    eRDTF RDTF : 1;
    eLRC_OK LRC_OK : 1;
    eCRC_OK CRC_OK : 1;
    eCWT_ERR CWT_ERR : 1;
    eRTE RTE : 1;
    eBWT_ERR BWT_ERR : 1;
    eBGT_ERR BGT_ERR : 1;
    ePEF PEF : 1;
    eFEF FEF : 1;
    uint32_t _reserved_1 : 2;
    uint32_t RX_WPTR : 4;
    uint32_t _reserved_2 : 4;
    eRX_CNT RX_CNT : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_STATUS &Instance() { return *reinterpret_cast<volatile RX_STATUS*>(0x40158020); }
};

// Transmitter Status Register
//
union TX_STATUS {
  
  enum class eTNTE : uint32_t {
    elessthan_nackthresh = 0, // Transmit NACK threshold has not been reached
    egreater_eq_nackthresh = 1, // Transmit NACK threshold reached; transmitter frozen
  };
  
  enum class eTFE : uint32_t {
    efifo_empty = 0, // Transmit FIFO is not empty
    efifo_notempty = 1, // Transmit FIFO is empty
  };
  
  enum class eETCF : uint32_t {
    eetx_pending = 0, // Transmit pending or in progress
    eetx_complete = 1, // Transmit complete
  };
  
  enum class eTCF : uint32_t {
    etx_pending = 0, // Transmit pending or in progress
    etx_complete = 1, // Transmit complete
  };
  
  enum class eTFF : uint32_t {
    etx_fifo_notfull = 0, // Transmit FIFO Full condition has not occurred
    etx_fifo_full = 1, // A Transmit FIFO Full condition has occurred
  };
  
  enum class eTDTF : uint32_t {
    elessthan_txthresh = 0, // Number of bytes in FIFO is greater than TDT, or bit has been cleared
    egreater_eq_txthresh = 1, // Number of bytes in FIFO is less than or equal to TDT
  };
  
  enum class eGPCNT0_TO : uint32_t {
    egpcnt0_to_notreached = 0, // GPCNT0 time not reached, or bit has been cleared.
    egpcnt0_to_reached = 1, // General Purpose counter has reached the GPCNT0 value
  };
  
  enum class eGPCNT1_TO : uint32_t {
    egpcnt1_to_notreached = 0, // GPCNT1 time not reached, or bit has been cleared.
    egpcnt1_to_reached = 1, // General Purpose counter has reached the GPCNT1 value
  };
  
  enum class eTX_CNT : uint32_t {
    efifo_empty = 0, // FIFO is emtpy
  };
  
  // Bit field definition.
  struct {
    eTNTE TNTE : 1;
    uint32_t _reserved_0 : 2;
    eTFE TFE : 1;
    eETCF ETCF : 1;
    eTCF TCF : 1;
    eTFF TFF : 1;
    eTDTF TDTF : 1;
    eGPCNT0_TO GPCNT0_TO : 1;
    eGPCNT1_TO GPCNT1_TO : 1;
    uint32_t _reserved_1 : 6;
    uint32_t TX_RPTR : 4;
    uint32_t _reserved_2 : 4;
    eTX_CNT TX_CNT : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x000000B8; }
  static inline volatile TX_STATUS &Instance() { return *reinterpret_cast<volatile TX_STATUS*>(0x40158024); }
};

// Port Control and Status Register
//
union PCSR {
  
  enum class eSAPD : uint32_t {
    edisabled = 0, // Auto power down disabled
    eenabled = 1, // Auto power down enabled
  };
  
  enum class eSVCC_EN : uint32_t {
    edisabled = 0, // Smart Card Voltage disabled
    eenabled = 1, // Smart Card Voltage enabled
  };
  
  enum class eVCCENP : uint32_t {
    eactive_high = 0, // SVCC_EN is active high. Polarity of SVCC_EN is unchanged.
    eactive_low = 1, // SVCC_EN is active low. Polarity of SVCC_EN is inverted.
  };
  
  enum class eSRST : uint32_t {
    easserted = 0, // Smart Card Reset is asserted
    ede_asserted = 1, // Smart Card Reset is de-asserted
  };
  
  enum class eSCEN : uint32_t {
    edisabled = 0, // Smart Card Clock Disabled
    eenabled = 1, // Smart Card Clock Enabled
  };
  
  enum class eSCSP : uint32_t {
    escsp_logic0 = 0, // Clock is logic 0 when stopped by SCEN
    escsp_logic1 = 1, // Clock is logic 1 when stopped by SCEN
  };
  
  enum class eSPD : uint32_t {
    eno_effect = 0, // No effect
    epowerdown = 1, // Start Auto Powerdown or Power Down is in progress
  };
  
  enum class eSPDIM : uint32_t {
    eint_enabled = 0, // SIM presence detect interrupt is enabled
    eint_masked = 1, // SIM presence detect interrupt is masked
  };
  
  enum class eSPDIF : uint32_t {
    eno_insert_remove_detect = 0, // No insertion or removal of Smart Card detected on Port
    einsert_remove_detect = 1, // Insertion or removal of Smart Card detected on Port
  };
  
  enum class eSPDP : uint32_t {
    elogic_low = 0, // SIM Presence Detect pin is logic low
    elogic_high = 1, // SIM Presence Detectpin is logic high
  };
  
  enum class eSPDES : uint32_t {
    efalling_edge = 0, // Falling edge on the pin
    erising_edge = 1, // Rising edge on the pin
  };
  
  // Bit field definition.
  struct {
    eSAPD SAPD : 1;
    eSVCC_EN SVCC_EN : 1;
    eVCCENP VCCENP : 1;
    eSRST SRST : 1;
    eSCEN SCEN : 1;
    eSCSP SCSP : 1;
    uint32_t _reserved_0 : 1;
    eSPD SPD : 1;
    uint32_t _reserved_1 : 16;
    eSPDIM SPDIM : 1;
    eSPDIF SPDIF : 1;
    eSPDP SPDP : 1;
    eSPDES SPDES : 1;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCSR() = delete;
  inline void Reset() volatile { this->value = 0x01000000; }
  static inline volatile PCSR &Instance() { return *reinterpret_cast<volatile PCSR*>(0x40158028); }
};

// Receive Data Read Buffer
//
union RX_BUF {
  
  // Bit field definition.
  struct {
    uint32_t RX_BYTE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_BUF &Instance() { return *reinterpret_cast<volatile RX_BUF*>(0x4015802C); }
};

// Transmit Data Buffer
//
union TX_BUF {
  
  // Bit field definition.
  struct {
    uint32_t TX_BYTE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TX_BUF &Instance() { return *reinterpret_cast<volatile TX_BUF*>(0x40158030); }
};

// Transmitter Guard ETU Value Register
//
union TX_GETU {
  
  // Bit field definition.
  struct {
    uint32_t GETU : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_GETU() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TX_GETU &Instance() { return *reinterpret_cast<volatile TX_GETU*>(0x40158034); }
};

// Character Wait Time Value Register
//
union CWT_VAL {
  
  // Bit field definition.
  struct {
    uint32_t CWT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CWT_VAL() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CWT_VAL &Instance() { return *reinterpret_cast<volatile CWT_VAL*>(0x40158038); }
};

// Block Wait Time Value Register
//
union BWT_VAL {
  
  // Bit field definition.
  struct {
    uint32_t BWT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BWT_VAL() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile BWT_VAL &Instance() { return *reinterpret_cast<volatile BWT_VAL*>(0x4015803C); }
};

// Block Guard Time Value Register
//
union BGT_VAL {
  
  // Bit field definition.
  struct {
    uint32_t BGT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BGT_VAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BGT_VAL &Instance() { return *reinterpret_cast<volatile BGT_VAL*>(0x40158040); }
};

// General Purpose Counter 0 Timeout Value Register
//
union GPCNT0_VAL {
  
  // Bit field definition.
  struct {
    uint32_t GPCNT0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPCNT0_VAL() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile GPCNT0_VAL &Instance() { return *reinterpret_cast<volatile GPCNT0_VAL*>(0x40158044); }
};

// General Purpose Counter 1 Timeout Value
//
union GPCNT1_VAL {
  
  // Bit field definition.
  struct {
    uint32_t GPCNT1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPCNT1_VAL() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile GPCNT1_VAL &Instance() { return *reinterpret_cast<volatile GPCNT1_VAL*>(0x40158048); }
};


} // namespace nEMVSIM2