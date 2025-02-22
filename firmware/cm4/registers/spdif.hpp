#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // SPDIF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSPDIF {


// SPDIF Configuration Register
//
union SCR {
  
  enum class eUSrc_Sel : uint32_t {
    enone = 0, // No embedded U channel
    espdif_rxblock = 1, // U channel from SPDIF receive block (CD mode)
    echip_transmit = 3, // U channel from on chip transmitter
  };
  
  enum class eTxSel : uint32_t {
    eoff_out0 = 0, // Off and output 0
    efeedthru = 1, // Feed-through SPDIFIN
    enormal_op = 5, // Tx Normal operation
  };
  
  enum class eValCtrl : uint32_t {
    ealways_set = 0, // Outgoing Validity always set
    ealways_clear = 1, // Outgoing Validity always clear
  };
  
  enum class eInputSrcSel : uint32_t {
    espdif_in = 0, // SPDIF_IN
    enone_sel = 1, // None
    enone_sel = 2, // None
    enone_sel = 3, // None
  };
  
  enum class eTxFIFO_Ctrl : uint32_t {
    esend_zero = 0, // Send out digital zero on SPDIF Tx
    enormal = 1, // Tx Normal operation
    ereset_one = 2, // Reset to 1 sample remaining
  };
  
  enum class eTxFIFOEmpty_Sel : uint32_t {
    eempty_int_0 = 0, // Empty interrupt if 0 sample in Tx left and right FIFOs
    eempty_int_4 = 1, // Empty interrupt if at most 4 sample in Tx left and right FIFOs
    eempty_int_8 = 2, // Empty interrupt if at most 8 sample in Tx left and right FIFOs
    eempty_int_12 = 3, // Empty interrupt if at most 12 sample in Tx left and right FIFOs
  };
  
  enum class eTxAutoSync : uint32_t {
    eoff = 0, // Tx FIFO auto sync off
    eon = 1, // Tx FIFO auto sync on
  };
  
  enum class eRxAutoSync : uint32_t {
    eoff = 0, // Rx FIFO auto sync off
    eon = 1, // RxFIFO auto sync on
  };
  
  enum class eRxFIFOFull_Sel : uint32_t {
    efull_int_1 = 0, // Full interrupt if at least 1 sample in Rx left and right FIFOs
    efull_int_4 = 1, // Full interrupt if at least 4 sample in Rx left and right FIFOs
    efull_int_8 = 2, // Full interrupt if at least 8 sample in Rx left and right FIFOs
    efull_int_16 = 3, // Full interrupt if at least 16 sample in Rx left and right FIFO
  };
  
  enum class eRxFIFO_Rst : uint32_t {
    enormal = 0, // Normal operation
    ereset_one = 1, // Reset register to 1 sample remaining
  };
  
  enum class eRxFIFO_Off_On : uint32_t {
    eon_0 = 0, // SPDIF Rx FIFO is on
    eoff_1 = 1, // SPDIF Rx FIFO is off. Does not accept data from interface
  };
  
  enum class eRxFIFO_Ctrl : uint32_t {
    enormal = 0, // Normal operation
    ealways_zero = 1, // Always read zero from Rx data register
  };
  
  // Bit field definition.
  struct {
    eUSrc_Sel USrc_Sel : 2;
    eTxSel TxSel : 3;
    eValCtrl ValCtrl : 1;
    eInputSrcSel InputSrcSel : 2;
    uint32_t DMA_TX_En : 1;
    uint32_t DMA_Rx_En : 1;
    eTxFIFO_Ctrl TxFIFO_Ctrl : 2;
    uint32_t soft_reset : 1;
    uint32_t LOW_POWER : 1;
    uint32_t _reserved_9 : 1;
    eTxFIFOEmpty_Sel TxFIFOEmpty_Sel : 2;
    eTxAutoSync TxAutoSync : 1;
    eRxAutoSync RxAutoSync : 1;
    eRxFIFOFull_Sel RxFIFOFull_Sel : 2;
    eRxFIFO_Rst RxFIFO_Rst : 1;
    eRxFIFO_Off_On RxFIFO_Off_On : 1;
    eRxFIFO_Ctrl RxFIFO_Ctrl : 1;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCR() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile SCR &Instance() { return *reinterpret_cast<volatile SCR*>(0x40400000); }
};

// CDText Control Register
//
union SRCD {
  
  enum class eUSyncMode : uint32_t {
    enon_cddata = 0, // Non-CD data
    ecduser_chsubcode = 1, // CD user channel subcode
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eUSyncMode USyncMode : 1;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRCD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRCD &Instance() { return *reinterpret_cast<volatile SRCD*>(0x40400004); }
};

// PhaseConfig Register
//
union SRPC {
  
  enum class eGainSel : uint32_t {
    egainsel_0b000 = 0, // 24*(2**10)
    egainsel_0b001 = 1, // 16*(2**10)
    egainsel_0b010 = 2, // 12*(2**10)
    egainsel_0b011 = 3, // 8*(2**10)
    egainsel_0b100 = 4, // 6*(2**10)
    egainsel_0b101 = 5, // 4*(2**10)
    egainsel_0b110 = 6, // 3*(2**10)
  };
  
  enum class eClkSrc_Sel : uint32_t {
    eclksrc_0b0000 = 0, // if (DPLL Locked) SPDIF_RxClk else REF_CLK_32K (XTALOSC)
    eclksrc_0b0001 = 1, // if (DPLL Locked) SPDIF_RxClk else tx_clk (SPDIF0_CLK_ROOT)
    eclksrc_0b0011 = 3, // if (DPLL Locked) SPDIF_RxClk else SPDIF_EXT_CLK
    eclksrc_0b0101 = 5, // REF_CLK_32K (XTALOSC)
    eclksrc_0b0110 = 6, // tx_clk (SPDIF0_CLK_ROOT)
    eclksrc_0b1000 = 8, // SPDIF_EXT_CLK
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    eGainSel GainSel : 3;
    uint32_t LOCK : 1;
    eClkSrc_Sel ClkSrc_Sel : 4;
    uint32_t _reserved_end : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRPC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRPC &Instance() { return *reinterpret_cast<volatile SRPC*>(0x40400008); }
};

// InterruptEn Register
//
union SIE {
  
  // Bit field definition.
  struct {
    uint32_t RxFIFOFul : 1;
    uint32_t TxEm : 1;
    uint32_t LockLoss : 1;
    uint32_t RxFIFOResyn : 1;
    uint32_t RxFIFOUnOv : 1;
    uint32_t UQErr : 1;
    uint32_t UQSync : 1;
    uint32_t QRxOv : 1;
    uint32_t QRxFul : 1;
    uint32_t URxOv : 1;
    uint32_t URxFul : 1;
    uint32_t _reserved_11 : 3;
    uint32_t BitErr : 1;
    uint32_t SymErr : 1;
    uint32_t ValNoGood : 1;
    uint32_t CNew : 1;
    uint32_t TxResyn : 1;
    uint32_t TxUnOv : 1;
    uint32_t Lock : 1;
    uint32_t _reserved_end : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SIE &Instance() { return *reinterpret_cast<volatile SIE*>(0x4040000C); }
};

// InterruptClear Register
//
union SIC {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    uint32_t LockLoss : 1;
    uint32_t RxFIFOResyn : 1;
    uint32_t RxFIFOUnOv : 1;
    uint32_t UQErr : 1;
    uint32_t UQSync : 1;
    uint32_t QRxOv : 1;
    uint32_t _reserved_6 : 1;
    uint32_t URxOv : 1;
    uint32_t _reserved_7 : 4;
    uint32_t BitErr : 1;
    uint32_t SymErr : 1;
    uint32_t ValNoGood : 1;
    uint32_t CNew : 1;
    uint32_t TxResyn : 1;
    uint32_t TxUnOv : 1;
    uint32_t Lock : 1;
    uint32_t _reserved_end : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SIC &Instance() { return *reinterpret_cast<volatile SIC*>(0x40400010); }
};

// InterruptStat Register
//
union SIS {
  
  // Bit field definition.
  struct {
    uint32_t RxFIFOFul : 1;
    uint32_t TxEm : 1;
    uint32_t LockLoss : 1;
    uint32_t RxFIFOResyn : 1;
    uint32_t RxFIFOUnOv : 1;
    uint32_t UQErr : 1;
    uint32_t UQSync : 1;
    uint32_t QRxOv : 1;
    uint32_t QRxFul : 1;
    uint32_t URxOv : 1;
    uint32_t URxFul : 1;
    uint32_t _reserved_11 : 3;
    uint32_t BitErr : 1;
    uint32_t SymErr : 1;
    uint32_t ValNoGood : 1;
    uint32_t CNew : 1;
    uint32_t TxResyn : 1;
    uint32_t TxUnOv : 1;
    uint32_t Lock : 1;
    uint32_t _reserved_end : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIS() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SIS &Instance() { return *reinterpret_cast<volatile SIS*>(0x40400010); }
};

// SPDIFRxLeft Register
//
union SRL {
  
  // Bit field definition.
  struct {
    uint32_t RxDataLeft : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRL &Instance() { return *reinterpret_cast<volatile SRL*>(0x40400014); }
};

// SPDIFRxRight Register
//
union SRR {
  
  // Bit field definition.
  struct {
    uint32_t RxDataRight : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRR &Instance() { return *reinterpret_cast<volatile SRR*>(0x40400018); }
};

// SPDIFRxCChannel_h Register
//
union SRCSH {
  
  // Bit field definition.
  struct {
    uint32_t RxCChannel_h : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRCSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRCSH &Instance() { return *reinterpret_cast<volatile SRCSH*>(0x4040001C); }
};

// SPDIFRxCChannel_l Register
//
union SRCSL {
  
  // Bit field definition.
  struct {
    uint32_t RxCChannel_l : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRCSL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRCSL &Instance() { return *reinterpret_cast<volatile SRCSL*>(0x40400020); }
};

// UchannelRx Register
//
union SRU {
  
  // Bit field definition.
  struct {
    uint32_t RxUChannel : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRU() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRU &Instance() { return *reinterpret_cast<volatile SRU*>(0x40400024); }
};

// QchannelRx Register
//
union SRQ {
  
  // Bit field definition.
  struct {
    uint32_t RxQChannel : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRQ &Instance() { return *reinterpret_cast<volatile SRQ*>(0x40400028); }
};

// SPDIFTxLeft Register
//
union STL {
  
  // Bit field definition.
  struct {
    uint32_t TxDataLeft : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STL &Instance() { return *reinterpret_cast<volatile STL*>(0x4040002C); }
};

// SPDIFTxRight Register
//
union STR {
  
  // Bit field definition.
  struct {
    uint32_t TxDataRight : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STR &Instance() { return *reinterpret_cast<volatile STR*>(0x40400030); }
};

// SPDIFTxCChannelCons_h Register
//
union STCSCH {
  
  // Bit field definition.
  struct {
    uint32_t TxCChannelCons_h : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STCSCH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STCSCH &Instance() { return *reinterpret_cast<volatile STCSCH*>(0x40400034); }
};

// SPDIFTxCChannelCons_l Register
//
union STCSCL {
  
  // Bit field definition.
  struct {
    uint32_t TxCChannelCons_l : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STCSCL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STCSCL &Instance() { return *reinterpret_cast<volatile STCSCL*>(0x40400038); }
};

// FreqMeas Register
//
union SRFM {
  
  // Bit field definition.
  struct {
    uint32_t FreqMeas : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRFM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRFM &Instance() { return *reinterpret_cast<volatile SRFM*>(0x40400044); }
};

// SPDIFTxClk Register
//
union STC {
  
  enum class eTxClk_DF : uint32_t {
    ediv1 = 0, // divider factor is 1
    ediv2 = 1, // divider factor is 2
    ediv128 = 127, // divider factor is 128
  };
  
  enum class etx_all_clk_en : uint32_t {
    edisable = 0, // disable transfer clock.
    eenable = 1, // enable transfer clock.
  };
  
  enum class eTxClk_Source : uint32_t {
    etxclk_src_0b000 = 0, // REF_CLK_32K input (XTALOSC 32 kHz clock)
    etxclk_src_0b001 = 1, // tx_clk input (from SPDIF0_CLK_ROOT. See clock control block for more information.)
    etxclk_src_0b011 = 3, // SPDIF_EXT_CLK, from pads
    etxclk_src_0b101 = 5, // ipg_clk input (frequency divided)
  };
  
  enum class eSYSCLK_DF : uint32_t {
    eno_clk = 0, // no clock signal
    ediv2 = 1, // divider factor is 2
    ediv512 = 511, // divider factor is 512
  };
  
  // Bit field definition.
  struct {
    eTxClk_DF TxClk_DF : 7;
    etx_all_clk_en tx_all_clk_en : 1;
    eTxClk_Source TxClk_Source : 3;
    eSYSCLK_DF SYSCLK_DF : 9;
    uint32_t _reserved_end : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STC() = delete;
  inline void Reset() volatile { this->value = 0x00020F00; }
  static inline volatile STC &Instance() { return *reinterpret_cast<volatile STC*>(0x40400050); }
};


} // namespace nSPDIF