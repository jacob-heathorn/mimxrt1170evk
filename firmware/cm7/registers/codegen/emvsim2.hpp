#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// EMVSIM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nEMVSIM2 {


// Version ID Register
union VER_ID {
  
  // Bit field definition.
  struct {
    // read-only - Version ID of the module
    uint32_t VER : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VER_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VER_ID &ref() { return *reinterpret_cast<volatile VER_ID*>(0x40158000); }
};

// Parameter Register
union PARAM {
  
  // Bit field definition.
  struct {
    // read-only - Receive FIFO Depth
    uint32_t RX_FIFO_DEPTH : 8;
    // read-only - Transmit FIFO Depth
    uint32_t TX_FIFO_DEPTH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00001010; }
  static inline volatile PARAM &ref() { return *reinterpret_cast<volatile PARAM*>(0x40158004); }
};

// Clock Configuration Register
union CLKCFG {
  
  // General Purpose Counter 1 Clock Select
  enum class eGPCNT1_CLK_SEL : uint32_t {
    // Disabled / Reset
    edisabled = 0,
    // Card Clock
    ecardclk = 1,
    // Receive Clock
    erxclk = 2,
    // ETU Clock (transmit clock)
    etxclk = 3,
  };
  
  // General Purpose Counter 0 Clock Select
  enum class eGPCNT0_CLK_SEL : uint32_t {
    // Disabled / Reset
    edisabled = 0,
    // Card Clock
    ecardclk = 1,
    // Receive Clock
    erxclk = 2,
    // ETU Clock (transmit clock)
    etxclk = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clock Prescaler Value
    uint32_t CLK_PRSC : 8;
    // read-write - General Purpose Counter 1 Clock Select
    eGPCNT1_CLK_SEL GPCNT1_CLK_SEL : 2;
    // read-write - General Purpose Counter 0 Clock Select
    eGPCNT0_CLK_SEL GPCNT0_CLK_SEL : 2;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLKCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLKCFG &ref() { return *reinterpret_cast<volatile CLKCFG*>(0x40158008); }
};

// Baud Rate Divisor Register
union DIVISOR {
  
  // Divisor (F/D) Value
  enum class eDIVISOR_VALUE : uint32_t {
    // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid_0 = 0,
    // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid_1 = 1,
    // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid_2 = 2,
    // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid_3 = 3,
    // Invalid. As per ISO 7816 specification, minimum value of F/D is 5
    einvalid_4 = 4,
    // Divisor value F/D
    evalid_5 = 5,
    // Divisor value F/D
    evalid_6 = 6,
    // Divisor value F/D
    evalid_7 = 7,
    // Divisor value F/D
    evalid_8 = 8,
    // Divisor value F/D
    evalid_9 = 9,
  };
  
  // Bit field definition.
  struct {
    // read-write - Divisor (F/D) Value
    eDIVISOR_VALUE DIVISOR_VALUE : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DIVISOR() = delete;
  inline void Reset() volatile { this->value = 0x00000174; }
  static inline volatile DIVISOR &ref() { return *reinterpret_cast<volatile DIVISOR*>(0x4015800C); }
};

// Control Register
union CTRL {
  
  // Inverse Convention
  enum class eIC : uint32_t {
    // Direction convention transfers enabled
    edir_convention = 0,
    // Inverse convention transfers enabled
    einv_convention = 1,
  };
  
  // Initial Character Mode
  enum class eICM : uint32_t {
    // Initial Character Mode disabled
    edisabled = 0,
    // Initial Character Mode enabled
    eenabled = 1,
  };
  
  // Auto NACK Enable
  enum class eANACK : uint32_t {
    // NACK generation on errors disabled
    edisabled = 0,
    // NACK generation on errors enabled
    eenabled = 1,
  };
  
  // Overrun NACK Enable
  enum class eONACK : uint32_t {
    // NACK generation on overrun is disabled
    edisabled = 0,
    // NACK generation on overrun is enabled
    eenabled = 1,
  };
  
  // Flush Receiver Bit
  enum class eFLSH_RX : uint32_t {
    // EMVSIM Receiver normal operation
    enormalop = 0,
    // EMVSIM Receiver held in Reset
    eresethold = 1,
  };
  
  // Flush Transmitter Bit
  enum class eFLSH_TX : uint32_t {
    // EMVSIM Transmitter normal operation
    enormalop = 0,
    // EMVSIM Transmitter held in Reset
    eresethold = 1,
  };
  
  // Software Reset Bit
  enum class eSW_RST : uint32_t {
    // EMVSIM Normal operation
    enormalop = 0,
    // EMVSIM held in Reset
    eresethold = 1,
  };
  
  // Kill all internal clocks
  enum class eKILL_CLOCKS : uint32_t {
    // EMVSIM input clock enabled
    einclk_enabled = 0,
    // EMVSIM input clock is disabled
    einclk_disabled = 1,
  };
  
  // Doze Enable
  enum class eDOZE_EN : uint32_t {
    // DOZE instruction gates all internal EMVSIM clocks as well as the Smart Card clock when the transmit FIFO is empty
    edoze_gate = 0,
    // DOZE instruction has no effect on EMVSIM module
    edoze_nogate = 1,
  };
  
  // STOP Enable
  enum class eSTOP_EN : uint32_t {
    // STOP instruction shuts down all EMVSIM clocks
    estop_all_clks = 0,
    // STOP instruction shuts down all clocks except for the Smart Card Clock (SCK) (clock provided to Smart Card)
    eonly_sck_on = 1,
  };
  
  // Receiver Enable
  enum class eRCV_EN : uint32_t {
    // EMVSIM Receiver disabled
    edisabled = 0,
    // EMVSIM Receiver enabled
    eenabled = 1,
  };
  
  // Transmitter Enable
  enum class eXMT_EN : uint32_t {
    // EMVSIM Transmitter disabled
    edisabled = 0,
    // EMVSIM Transmitter enabled
    eenabled = 1,
  };
  
  // Receiver 11 ETU Mode Enable
  enum class eRCVR_11 : uint32_t {
    // Receiver configured for 12 ETU operation mode
    ercvr_12 = 0,
    // Receiver configured for 11 ETU operation mode
    ercvr_11 = 1,
  };
  
  // Receive DMA Enable
  enum class eRX_DMA_EN : uint32_t {
    // No DMA Read Request asserted for Receiver
    eno_dmaread_req = 0,
    // DMA Read Request asserted for Receiver
    edmaread_req = 1,
  };
  
  // Transmit DMA Enable
  enum class eTX_DMA_EN : uint32_t {
    // No DMA Write Request asserted for Transmitter
    eno_dmawrite_req = 0,
    // DMA Write Request asserted for Transmitter
    edmawrite_req = 1,
  };
  
  // Invert bits in the CRC Output Value
  enum class eINV_CRC_VAL : uint32_t {
    // Bits in CRC Output value are not inverted.
    eno_invert = 0,
    // Bits in CRC Output value are inverted.
    einvert = 1,
  };
  
  // CRC Output Value Bit Reversal or Flip
  enum class eCRC_OUT_FLIP : uint32_t {
    // Bits within the CRC output bytes are not reversed i.e. 15:0 remains 15:0
    enot_reversed = 0,
    // Bits within the CRC output bytes are reversed i.e. 15:0 becomes {8:15,0:7}
    ereversed = 1,
  };
  
  // CRC Input Byte's Bit Reversal or Flip Control
  enum class eCRC_IN_FLIP : uint32_t {
    // Bits in the input byte are not reversed (i.e. 7:0 remain 7:0) before the CRC calculation
    enot_reversed = 0,
    // Bits in the input byte are reversed (i.e. 7:0 becomes 0:7) before CRC calculation
    ereversed = 1,
  };
  
  // Character Wait Time Counter Enable
  enum class eCWT_EN : uint32_t {
    // Character Wait time Counter is disabled
    edisabled = 0,
    // Character Wait time counter is enabled
    eenabled = 1,
  };
  
  // LRC Enable
  enum class eLRC_EN : uint32_t {
    // 8-bit Linear Redundancy Checking disabled
    edisabled = 0,
    // 8-bit Linear Redundancy Checking enabled
    eenabled = 1,
  };
  
  // CRC Enable
  enum class eCRC_EN : uint32_t {
    // 16-bit Cyclic Redundancy Checking disabled
    edisabled = 0,
    // 16-bit Cyclic Redundancy Checking enabled
    eenabled = 1,
  };
  
  // Transmit CRC or LRC Enable
  enum class eXMT_CRC_LRC : uint32_t {
    // No CRC or LRC value is transmitted
    eno_crc_lrc_tx = 0,
    // Transmit LRC or CRC info when FIFO empties (whichever is enabled)
    ecrc_lrc_tx = 1,
  };
  
  // Block Wait Time Counter Enable
  enum class eBWT_EN : uint32_t {
    // Disable BWT, BGT Counters
    edisabled = 0,
    // Enable BWT, BGT Counters
    eenabled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Inverse Convention
    eIC IC : 1;
    // read-write - Initial Character Mode
    eICM ICM : 1;
    // read-write - Auto NACK Enable
    eANACK ANACK : 1;
    // read-write - Overrun NACK Enable
    eONACK ONACK : 1;
    uint32_t _reserved_0 : 4;
    // read-write - Flush Receiver Bit
    eFLSH_RX FLSH_RX : 1;
    // read-write - Flush Transmitter Bit
    eFLSH_TX FLSH_TX : 1;
    // read-write - Software Reset Bit
    eSW_RST SW_RST : 1;
    // read-write - Kill all internal clocks
    eKILL_CLOCKS KILL_CLOCKS : 1;
    // read-write - Doze Enable
    eDOZE_EN DOZE_EN : 1;
    // read-write - STOP Enable
    eSTOP_EN STOP_EN : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Receiver Enable
    eRCV_EN RCV_EN : 1;
    // read-write - Transmitter Enable
    eXMT_EN XMT_EN : 1;
    // read-write - Receiver 11 ETU Mode Enable
    eRCVR_11 RCVR_11 : 1;
    // read-write - Receive DMA Enable
    eRX_DMA_EN RX_DMA_EN : 1;
    // read-write - Transmit DMA Enable
    eTX_DMA_EN TX_DMA_EN : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Invert bits in the CRC Output Value
    eINV_CRC_VAL INV_CRC_VAL : 1;
    // read-write - CRC Output Value Bit Reversal or Flip
    eCRC_OUT_FLIP CRC_OUT_FLIP : 1;
    // read-write - CRC Input Byte's Bit Reversal or Flip Control
    eCRC_IN_FLIP CRC_IN_FLIP : 1;
    // read-write - Character Wait Time Counter Enable
    eCWT_EN CWT_EN : 1;
    // read-write - LRC Enable
    eLRC_EN LRC_EN : 1;
    // read-write - CRC Enable
    eCRC_EN CRC_EN : 1;
    // read-write - Transmit CRC or LRC Enable
    eXMT_CRC_LRC XMT_CRC_LRC : 1;
    // read-write - Block Wait Time Counter Enable
    eBWT_EN BWT_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x01000006; }
  static inline volatile CTRL &ref() { return *reinterpret_cast<volatile CTRL*>(0x40158010); }
};

// Interrupt Mask Register
union INT_MASK {
  
  // Receive Data Threshold Interrupt Mask
  enum class eRDT_IM : uint32_t {
    // RDTF interrupt enabled
    eint_enabled = 0,
    // RDTF interrupt masked
    eint_masked = 1,
  };
  
  // Transmit Complete Interrupt Mask
  enum class eTC_IM : uint32_t {
    // TCF interrupt enabled
    eint_enabled = 0,
    // TCF interrupt masked
    eint_masked = 1,
  };
  
  // Receive FIFO Overflow Interrupt Mask
  enum class eRFO_IM : uint32_t {
    // RFO interrupt enabled
    eint_enabled = 0,
    // RFO interrupt masked
    eint_masked = 1,
  };
  
  // Early Transmit Complete Interrupt Mask
  enum class eETC_IM : uint32_t {
    // ETC interrupt enabled
    eint_enabled = 0,
    // ETC interrupt masked
    eint_masked = 1,
  };
  
  // Transmit FIFO Empty Interrupt Mask
  enum class eTFE_IM : uint32_t {
    // TFE interrupt enabled
    eint_enabled = 0,
    // TFE interrupt masked
    eint_masked = 1,
  };
  
  // Transmit NACK Threshold Interrupt Mask
  enum class eTNACK_IM : uint32_t {
    // TNTE interrupt enabled
    eint_enabled = 0,
    // TNTE interrupt masked
    eint_masked = 1,
  };
  
  // Transmit FIFO Full Interrupt Mask
  enum class eTFF_IM : uint32_t {
    // TFF interrupt enabled
    eint_enabled = 0,
    // TFF interrupt masked
    eint_masked = 1,
  };
  
  // Transmit Data Threshold Interrupt Mask
  enum class eTDT_IM : uint32_t {
    // TDTF interrupt enabled
    eint_enabled = 0,
    // TDTF interrupt masked
    eint_masked = 1,
  };
  
  // General Purpose Timer 0 Timeout Interrupt Mask
  enum class eGPCNT0_IM : uint32_t {
    // GPCNT0_TO interrupt enabled
    eint_enabled = 0,
    // GPCNT0_TO interrupt masked
    eint_masked = 1,
  };
  
  // Character Wait Time Error Interrupt Mask
  enum class eCWT_ERR_IM : uint32_t {
    // CWT_ERR interrupt enabled
    eint_enabled = 0,
    // CWT_ERR interrupt masked
    eint_disabled = 1,
  };
  
  // Receiver NACK Threshold Interrupt Mask
  enum class eRNACK_IM : uint32_t {
    // RTE interrupt enabled
    eint_enabled = 0,
    // RTE interrupt masked
    eint_masked = 1,
  };
  
  // Block Wait Time Error Interrupt Mask
  enum class eBWT_ERR_IM : uint32_t {
    // BWT_ERR interrupt enabled
    eint_enabled = 0,
    // BWT_ERR interrupt masked
    eint_masked = 1,
  };
  
  // Block Guard Time Error Interrupt
  enum class eBGT_ERR_IM : uint32_t {
    // BGT_ERR interrupt enabled
    eint_enabled = 0,
    // BGT_ERR interrupt masked
    eint_masked = 1,
  };
  
  // General Purpose Counter 1 Timeout Interrupt Mask
  enum class eGPCNT1_IM : uint32_t {
    // GPCNT1_TO interrupt enabled
    eint_enabled = 0,
    // GPCNT1_TO interrupt masked
    eint_masked = 1,
  };
  
  // Receive Data Interrupt Mask
  enum class eRX_DATA_IM : uint32_t {
    // RX_DATA interrupt enabled
    eint_enabled = 0,
    // RX_DATA interrupt masked
    eint_masked = 1,
  };
  
  // Parity Error Interrupt Mask
  enum class ePEF_IM : uint32_t {
    // PEF interrupt enabled
    eint_enabled = 0,
    // PEF interrupt masked
    eint_masked = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Receive Data Threshold Interrupt Mask
    eRDT_IM RDT_IM : 1;
    // read-write - Transmit Complete Interrupt Mask
    eTC_IM TC_IM : 1;
    // read-write - Receive FIFO Overflow Interrupt Mask
    eRFO_IM RFO_IM : 1;
    // read-write - Early Transmit Complete Interrupt Mask
    eETC_IM ETC_IM : 1;
    // read-write - Transmit FIFO Empty Interrupt Mask
    eTFE_IM TFE_IM : 1;
    // read-write - Transmit NACK Threshold Interrupt Mask
    eTNACK_IM TNACK_IM : 1;
    // read-write - Transmit FIFO Full Interrupt Mask
    eTFF_IM TFF_IM : 1;
    // read-write - Transmit Data Threshold Interrupt Mask
    eTDT_IM TDT_IM : 1;
    // read-write - General Purpose Timer 0 Timeout Interrupt Mask
    eGPCNT0_IM GPCNT0_IM : 1;
    // read-write - Character Wait Time Error Interrupt Mask
    eCWT_ERR_IM CWT_ERR_IM : 1;
    // read-write - Receiver NACK Threshold Interrupt Mask
    eRNACK_IM RNACK_IM : 1;
    // read-write - Block Wait Time Error Interrupt Mask
    eBWT_ERR_IM BWT_ERR_IM : 1;
    // read-write - Block Guard Time Error Interrupt
    eBGT_ERR_IM BGT_ERR_IM : 1;
    // read-write - General Purpose Counter 1 Timeout Interrupt Mask
    eGPCNT1_IM GPCNT1_IM : 1;
    // read-write - Receive Data Interrupt Mask
    eRX_DATA_IM RX_DATA_IM : 1;
    // read-write - Parity Error Interrupt Mask
    ePEF_IM PEF_IM : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_MASK() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile INT_MASK &ref() { return *reinterpret_cast<volatile INT_MASK*>(0x40158014); }
};

// Receiver Threshold Register
union RX_THD {
  
  // Bit field definition.
  struct {
    // read-write - Receiver Data Threshold Value
    uint32_t RDT : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Receiver NACK Threshold Value
    uint32_t RNCK_THD : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_THD() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile RX_THD &ref() { return *reinterpret_cast<volatile RX_THD*>(0x40158018); }
};

// Transmitter Threshold Register
union TX_THD {
  
  // Bit field definition.
  struct {
    // read-write - Transmitter Data Threshold Value
    uint32_t TDT : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Transmitter NACK Threshold Value
    uint32_t TNCK_THD : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_THD() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile TX_THD &ref() { return *reinterpret_cast<volatile TX_THD*>(0x4015801C); }
};

// Receive Status Register
union RX_STATUS {
  
  // Receive FIFO Overflow Flag
  enum class eRFO : uint32_t {
    // No overrun error has occurred
    eno_overrun = 0,
    // A byte was received when the received FIFO was already full
    eoverflow = 1,
  };
  
  // Receive Data Interrupt Flag
  enum class eRX_DATA : uint32_t {
    // No new byte is received
    eno_byte_rx = 0,
    // New byte is received ans stored in Receive FIFO
    ebyte_rx = 1,
  };
  
  // Receive Data Threshold Interrupt Flag
  enum class eRDTF : uint32_t {
    // Number of unread bytes in receive FIFO less than the value set by RDT
    elessthan_rxthresh = 0,
    // Number of unread bytes in receive FIFO greater or than equal to value set by RDT.
    egreater_eq_rxthresh = 1,
  };
  
  // LRC Check OK Flag
  enum class eLRC_OK : uint32_t {
    // Current LRC value does not match remainder.
    elrc_notok = 0,
    // Current calculated LRC value matches the expected result (i.e. zero).
    elrc_ok = 1,
  };
  
  // CRC Check OK Flag
  enum class eCRC_OK : uint32_t {
    // Current CRC value does not match remainder.
    ecrc_notok = 0,
    // Current calculated CRC value matches the expected result.
    ecrc_ok = 1,
  };
  
  // Character Wait Time Error Flag
  enum class eCWT_ERR : uint32_t {
    // No CWT violation has occurred
    eno_cwt_err = 0,
    // Time between two consecutive characters has exceeded the value in CWT_VAL.
    ecwt_err = 1,
  };
  
  // Received NACK Threshold Error Flag
  enum class eRTE : uint32_t {
    // Number of NACKs generated by the receiver is less than the value programmed in RNCK_THD
    elessthan_nackthresh = 0,
    // Number of NACKs generated by the receiver is equal to the value programmed in RNCK_THD
    egreater_eq_nackthresh = 1,
  };
  
  // Block Wait Time Error Flag
  enum class eBWT_ERR : uint32_t {
    // Block wait time not exceeded
    ebwt_err_no = 0,
    // Block wait time was exceeded
    ebwt_err_yes = 1,
  };
  
  // Block Guard Time Error Flag
  enum class eBGT_ERR : uint32_t {
    // Block guard time was sufficient
    ebgt_err_sufficient = 0,
    // Block guard time was too small
    ebgt_err_toosmall = 1,
  };
  
  // Parity Error Flag
  enum class ePEF : uint32_t {
    // No parity error detected
    eno_parity_detect = 0,
    // Parity error detected
    eparity_detect = 1,
  };
  
  // Frame Error Flag
  enum class eFEF : uint32_t {
    // No frame error detected
    eno_fef_detect = 0,
    // Frame error detected
    efef_detect = 1,
  };
  
  // Receive FIFO Byte Count
  enum class eRX_CNT : uint32_t {
    // FIFO is emtpy
    efifo_empty = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Receive FIFO Overflow Flag
    eRFO RFO : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Receive Data Interrupt Flag
    eRX_DATA RX_DATA : 1;
    // read-only - Receive Data Threshold Interrupt Flag
    eRDTF RDTF : 1;
    // read-only - LRC Check OK Flag
    eLRC_OK LRC_OK : 1;
    // read-only - CRC Check OK Flag
    eCRC_OK CRC_OK : 1;
    // read-write - Character Wait Time Error Flag
    eCWT_ERR CWT_ERR : 1;
    // read-write - Received NACK Threshold Error Flag
    eRTE RTE : 1;
    // read-write - Block Wait Time Error Flag
    eBWT_ERR BWT_ERR : 1;
    // read-write - Block Guard Time Error Flag
    eBGT_ERR BGT_ERR : 1;
    // read-write - Parity Error Flag
    ePEF PEF : 1;
    // read-write - Frame Error Flag
    eFEF FEF : 1;
    uint32_t _reserved_1 : 2;
    // read-only - Receive FIFO Write Pointer Value
    uint32_t RX_WPTR : 4;
    uint32_t _reserved_2 : 4;
    // read-only - Receive FIFO Byte Count
    eRX_CNT RX_CNT : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_STATUS &ref() { return *reinterpret_cast<volatile RX_STATUS*>(0x40158020); }
};

// Transmitter Status Register
union TX_STATUS {
  
  // Transmit NACK Threshold Error Flag
  enum class eTNTE : uint32_t {
    // Transmit NACK threshold has not been reached
    elessthan_nackthresh = 0,
    // Transmit NACK threshold reached; transmitter frozen
    egreater_eq_nackthresh = 1,
  };
  
  // Transmit FIFO Empty Flag
  enum class eTFE : uint32_t {
    // Transmit FIFO is not empty
    efifo_empty = 0,
    // Transmit FIFO is empty
    efifo_notempty = 1,
  };
  
  // Early Transmit Complete Flag
  enum class eETCF : uint32_t {
    // Transmit pending or in progress
    eetx_pending = 0,
    // Transmit complete
    eetx_complete = 1,
  };
  
  // Transmit Complete Flag
  enum class eTCF : uint32_t {
    // Transmit pending or in progress
    etx_pending = 0,
    // Transmit complete
    etx_complete = 1,
  };
  
  // Transmit FIFO Full Flag
  enum class eTFF : uint32_t {
    // Transmit FIFO Full condition has not occurred
    etx_fifo_notfull = 0,
    // A Transmit FIFO Full condition has occurred
    etx_fifo_full = 1,
  };
  
  // Transmit Data Threshold Flag
  enum class eTDTF : uint32_t {
    // Number of bytes in FIFO is greater than TDT, or bit has been cleared
    elessthan_txthresh = 0,
    // Number of bytes in FIFO is less than or equal to TDT
    egreater_eq_txthresh = 1,
  };
  
  // General Purpose Counter 0 Timeout Flag
  enum class eGPCNT0_TO : uint32_t {
    // GPCNT0 time not reached, or bit has been cleared.
    egpcnt0_to_notreached = 0,
    // General Purpose counter has reached the GPCNT0 value
    egpcnt0_to_reached = 1,
  };
  
  // General Purpose Counter 1 Timeout Flag
  enum class eGPCNT1_TO : uint32_t {
    // GPCNT1 time not reached, or bit has been cleared.
    egpcnt1_to_notreached = 0,
    // General Purpose counter has reached the GPCNT1 value
    egpcnt1_to_reached = 1,
  };
  
  // Transmit FIFO Byte Count
  enum class eTX_CNT : uint32_t {
    // FIFO is emtpy
    efifo_empty = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit NACK Threshold Error Flag
    eTNTE TNTE : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Transmit FIFO Empty Flag
    eTFE TFE : 1;
    // read-write - Early Transmit Complete Flag
    eETCF ETCF : 1;
    // read-write - Transmit Complete Flag
    eTCF TCF : 1;
    // read-write - Transmit FIFO Full Flag
    eTFF TFF : 1;
    // read-only - Transmit Data Threshold Flag
    eTDTF TDTF : 1;
    // read-write - General Purpose Counter 0 Timeout Flag
    eGPCNT0_TO GPCNT0_TO : 1;
    // read-write - General Purpose Counter 1 Timeout Flag
    eGPCNT1_TO GPCNT1_TO : 1;
    uint32_t _reserved_1 : 6;
    // read-only - Transmit FIFO Read Pointer
    uint32_t TX_RPTR : 4;
    uint32_t _reserved_2 : 4;
    // read-only - Transmit FIFO Byte Count
    eTX_CNT TX_CNT : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x000000B8; }
  static inline volatile TX_STATUS &ref() { return *reinterpret_cast<volatile TX_STATUS*>(0x40158024); }
};

// Port Control and Status Register
union PCSR {
  
  // Auto Power Down Enable
  enum class eSAPD : uint32_t {
    // Auto power down disabled
    edisabled = 0,
    // Auto power down enabled
    eenabled = 1,
  };
  
  // Vcc Enable for Smart Card
  enum class eSVCC_EN : uint32_t {
    // Smart Card Voltage disabled
    edisabled = 0,
    // Smart Card Voltage enabled
    eenabled = 1,
  };
  
  // VCC Enable Polarity Control
  enum class eVCCENP : uint32_t {
    // SVCC_EN is active high. Polarity of SVCC_EN is unchanged.
    eactive_high = 0,
    // SVCC_EN is active low. Polarity of SVCC_EN is inverted.
    eactive_low = 1,
  };
  
  // Reset to Smart Card
  enum class eSRST : uint32_t {
    // Smart Card Reset is asserted
    easserted = 0,
    // Smart Card Reset is de-asserted
    ede_asserted = 1,
  };
  
  // Clock Enable for Smart Card
  enum class eSCEN : uint32_t {
    // Smart Card Clock Disabled
    edisabled = 0,
    // Smart Card Clock Enabled
    eenabled = 1,
  };
  
  // Smart Card Clock Stop Polarity
  enum class eSCSP : uint32_t {
    // Clock is logic 0 when stopped by SCEN
    escsp_logic0 = 0,
    // Clock is logic 1 when stopped by SCEN
    escsp_logic1 = 1,
  };
  
  // Auto Power Down Control
  enum class eSPD : uint32_t {
    // No effect
    eno_effect = 0,
    // Start Auto Powerdown or Power Down is in progress
    epowerdown = 1,
  };
  
  // Smart Card Presence Detect Interrupt Mask
  enum class eSPDIM : uint32_t {
    // SIM presence detect interrupt is enabled
    eint_enabled = 0,
    // SIM presence detect interrupt is masked
    eint_masked = 1,
  };
  
  // Smart Card Presence Detect Interrupt Flag
  enum class eSPDIF : uint32_t {
    // No insertion or removal of Smart Card detected on Port
    eno_insert_remove_detect = 0,
    // Insertion or removal of Smart Card detected on Port
    einsert_remove_detect = 1,
  };
  
  // Smart Card Presence Detect Pin Status
  enum class eSPDP : uint32_t {
    // SIM Presence Detect pin is logic low
    elogic_low = 0,
    // SIM Presence Detectpin is logic high
    elogic_high = 1,
  };
  
  // SIM Presence Detect Edge Select
  enum class eSPDES : uint32_t {
    // Falling edge on the pin
    efalling_edge = 0,
    // Rising edge on the pin
    erising_edge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Auto Power Down Enable
    eSAPD SAPD : 1;
    // read-write - Vcc Enable for Smart Card
    eSVCC_EN SVCC_EN : 1;
    // read-write - VCC Enable Polarity Control
    eVCCENP VCCENP : 1;
    // read-write - Reset to Smart Card
    eSRST SRST : 1;
    // read-write - Clock Enable for Smart Card
    eSCEN SCEN : 1;
    // read-write - Smart Card Clock Stop Polarity
    eSCSP SCSP : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Auto Power Down Control
    eSPD SPD : 1;
    uint32_t _reserved_1 : 16;
    // read-write - Smart Card Presence Detect Interrupt Mask
    eSPDIM SPDIM : 1;
    // read-write - Smart Card Presence Detect Interrupt Flag
    eSPDIF SPDIF : 1;
    // read-only - Smart Card Presence Detect Pin Status
    eSPDP SPDP : 1;
    // read-write - SIM Presence Detect Edge Select
    eSPDES SPDES : 1;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCSR() = delete;
  inline void Reset() volatile { this->value = 0x01000000; }
  static inline volatile PCSR &ref() { return *reinterpret_cast<volatile PCSR*>(0x40158028); }
};

// Receive Data Read Buffer
union RX_BUF {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data Byte Read
    uint32_t RX_BYTE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_BUF &ref() { return *reinterpret_cast<volatile RX_BUF*>(0x4015802C); }
};

// Transmit Data Buffer
union TX_BUF {
  
  // Bit field definition.
  struct {
    // read-write - Transmit Data Byte
    uint32_t TX_BYTE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TX_BUF &ref() { return *reinterpret_cast<volatile TX_BUF*>(0x40158030); }
};

// Transmitter Guard ETU Value Register
union TX_GETU {
  
  // Bit field definition.
  struct {
    // read-write - Transmitter Guard Time Value in ETU
    uint32_t GETU : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_GETU() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TX_GETU &ref() { return *reinterpret_cast<volatile TX_GETU*>(0x40158034); }
};

// Character Wait Time Value Register
union CWT_VAL {
  
  // Bit field definition.
  struct {
    // read-write - Character Wait Time Value
    uint32_t CWT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CWT_VAL() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CWT_VAL &ref() { return *reinterpret_cast<volatile CWT_VAL*>(0x40158038); }
};

// Block Wait Time Value Register
union BWT_VAL {
  
  // Bit field definition.
  struct {
    // read-write - Block Wait Time Value
    uint32_t BWT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BWT_VAL() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile BWT_VAL &ref() { return *reinterpret_cast<volatile BWT_VAL*>(0x4015803C); }
};

// Block Guard Time Value Register
union BGT_VAL {
  
  // Bit field definition.
  struct {
    // read-write - Block Guard Time Value
    uint32_t BGT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BGT_VAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BGT_VAL &ref() { return *reinterpret_cast<volatile BGT_VAL*>(0x40158040); }
};

// General Purpose Counter 0 Timeout Value Register
union GPCNT0_VAL {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Counter 0 Timeout Value
    uint32_t GPCNT0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPCNT0_VAL() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile GPCNT0_VAL &ref() { return *reinterpret_cast<volatile GPCNT0_VAL*>(0x40158044); }
};

// General Purpose Counter 1 Timeout Value
union GPCNT1_VAL {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Counter 1 Timeout Value
    uint32_t GPCNT1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPCNT1_VAL() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile GPCNT1_VAL &ref() { return *reinterpret_cast<volatile GPCNT1_VAL*>(0x40158048); }
};


} // namespace nEMVSIM2