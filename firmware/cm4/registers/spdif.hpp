#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SPDIF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nSPDIF {


// SPDIF Configuration Register
union SCR {
  
  // USrc_Sel
  enum class eUSrc_Sel : uint32_t {
    // No embedded U channel
    enone = 0,
    // U channel from SPDIF receive block (CD mode)
    espdif_rxblock = 1,
    // U channel from on chip transmitter
    echip_transmit = 3,
  };
  
  // TxSel
  enum class eTxSel : uint32_t {
    // Off and output 0
    eoff_out0 = 0,
    // Feed-through SPDIFIN
    efeedthru = 1,
    // Tx Normal operation
    enormal_op = 5,
  };
  
  // ValCtrl
  enum class eValCtrl : uint32_t {
    // Outgoing Validity always set
    ealways_set = 0,
    // Outgoing Validity always clear
    ealways_clear = 1,
  };
  
  // InputSrcSel
  enum class eInputSrcSel : uint32_t {
    // SPDIF_IN
    espdif_in = 0,
    // None
    enone_sel_1 = 1,
    // None
    enone_sel_2 = 2,
    // None
    enone_sel_3 = 3,
  };
  
  // TxFIFO_Ctrl
  enum class eTxFIFO_Ctrl : uint32_t {
    // Send out digital zero on SPDIF Tx
    esend_zero = 0,
    // Tx Normal operation
    enormal = 1,
    // Reset to 1 sample remaining
    ereset_one = 2,
  };
  
  // TxFIFOEmpty_Sel
  enum class eTxFIFOEmpty_Sel : uint32_t {
    // Empty interrupt if 0 sample in Tx left and right FIFOs
    eempty_int_0 = 0,
    // Empty interrupt if at most 4 sample in Tx left and right FIFOs
    eempty_int_4 = 1,
    // Empty interrupt if at most 8 sample in Tx left and right FIFOs
    eempty_int_8 = 2,
    // Empty interrupt if at most 12 sample in Tx left and right FIFOs
    eempty_int_12 = 3,
  };
  
  // TxAutoSync
  enum class eTxAutoSync : uint32_t {
    // Tx FIFO auto sync off
    eoff = 0,
    // Tx FIFO auto sync on
    eon = 1,
  };
  
  // RxAutoSync
  enum class eRxAutoSync : uint32_t {
    // Rx FIFO auto sync off
    eoff = 0,
    // RxFIFO auto sync on
    eon = 1,
  };
  
  // RxFIFOFull_Sel
  enum class eRxFIFOFull_Sel : uint32_t {
    // Full interrupt if at least 1 sample in Rx left and right FIFOs
    efull_int_1 = 0,
    // Full interrupt if at least 4 sample in Rx left and right FIFOs
    efull_int_4 = 1,
    // Full interrupt if at least 8 sample in Rx left and right FIFOs
    efull_int_8 = 2,
    // Full interrupt if at least 16 sample in Rx left and right FIFO
    efull_int_16 = 3,
  };
  
  // RxFIFO_Rst
  enum class eRxFIFO_Rst : uint32_t {
    // Normal operation
    enormal = 0,
    // Reset register to 1 sample remaining
    ereset_one = 1,
  };
  
  // RxFIFO_Off_On
  enum class eRxFIFO_Off_On : uint32_t {
    // SPDIF Rx FIFO is on
    eon_0 = 0,
    // SPDIF Rx FIFO is off. Does not accept data from interface
    eoff_1 = 1,
  };
  
  // RxFIFO_Ctrl
  enum class eRxFIFO_Ctrl : uint32_t {
    // Normal operation
    enormal = 0,
    // Always read zero from Rx data register
    ealways_zero = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - USrc_Sel
    eUSrc_Sel USrc_Sel : 2;
    // read-write - TxSel
    eTxSel TxSel : 3;
    // read-write - ValCtrl
    eValCtrl ValCtrl : 1;
    // read-write - InputSrcSel
    eInputSrcSel InputSrcSel : 2;
    // read-write - DMA_TX_En
    uint32_t DMA_TX_En : 1;
    // read-write - DMA_Rx_En
    uint32_t DMA_Rx_En : 1;
    // read-write - TxFIFO_Ctrl
    eTxFIFO_Ctrl TxFIFO_Ctrl : 2;
    // read-write - soft_reset
    uint32_t soft_reset : 1;
    // read-write - LOW_POWER
    uint32_t LOW_POWER : 1;
    uint32_t _reserved_0 : 1;
    // read-write - TxFIFOEmpty_Sel
    eTxFIFOEmpty_Sel TxFIFOEmpty_Sel : 2;
    // read-write - TxAutoSync
    eTxAutoSync TxAutoSync : 1;
    // read-write - RxAutoSync
    eRxAutoSync RxAutoSync : 1;
    // read-write - RxFIFOFull_Sel
    eRxFIFOFull_Sel RxFIFOFull_Sel : 2;
    // read-write - RxFIFO_Rst
    eRxFIFO_Rst RxFIFO_Rst : 1;
    // read-write - RxFIFO_Off_On
    eRxFIFO_Off_On RxFIFO_Off_On : 1;
    // read-write - RxFIFO_Ctrl
    eRxFIFO_Ctrl RxFIFO_Ctrl : 1;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCR() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile SCR &Instance() { return *reinterpret_cast<volatile SCR*>(0x40400000); }
};

// CDText Control Register
union SRCD {
  
  // USyncMode
  enum class eUSyncMode : uint32_t {
    // Non-CD data
    enon_cddata = 0,
    // CD user channel subcode
    ecduser_chsubcode = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - USyncMode
    eUSyncMode USyncMode : 1;
    uint32_t _reserved_1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRCD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRCD &Instance() { return *reinterpret_cast<volatile SRCD*>(0x40400004); }
};

// PhaseConfig Register
union SRPC {
  
  // GainSel
  enum class eGainSel : uint32_t {
    // 24*(2**10)
    egainsel_0b000 = 0,
    // 16*(2**10)
    egainsel_0b001 = 1,
    // 12*(2**10)
    egainsel_0b010 = 2,
    // 8*(2**10)
    egainsel_0b011 = 3,
    // 6*(2**10)
    egainsel_0b100 = 4,
    // 4*(2**10)
    egainsel_0b101 = 5,
    // 3*(2**10)
    egainsel_0b110 = 6,
  };
  
  // ClkSrc_Sel
  enum class eClkSrc_Sel : uint32_t {
    // if (DPLL Locked) SPDIF_RxClk else REF_CLK_32K (XTALOSC)
    eclksrc_0b0000 = 0,
    // if (DPLL Locked) SPDIF_RxClk else tx_clk (SPDIF0_CLK_ROOT)
    eclksrc_0b0001 = 1,
    // if (DPLL Locked) SPDIF_RxClk else SPDIF_EXT_CLK
    eclksrc_0b0011 = 3,
    // REF_CLK_32K (XTALOSC)
    eclksrc_0b0101 = 5,
    // tx_clk (SPDIF0_CLK_ROOT)
    eclksrc_0b0110 = 6,
    // SPDIF_EXT_CLK
    eclksrc_0b1000 = 8,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - GainSel
    eGainSel GainSel : 3;
    // read-only - LOCK
    uint32_t LOCK : 1;
    // read-write - ClkSrc_Sel
    eClkSrc_Sel ClkSrc_Sel : 4;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRPC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRPC &Instance() { return *reinterpret_cast<volatile SRPC*>(0x40400008); }
};

// InterruptEn Register
union SIE {
  
  // Bit field definition.
  struct {
    // read-write - RxFIFOFul
    uint32_t RxFIFOFul : 1;
    // read-write - TxEm
    uint32_t TxEm : 1;
    // read-write - LockLoss
    uint32_t LockLoss : 1;
    // read-write - RxFIFOResyn
    uint32_t RxFIFOResyn : 1;
    // read-write - RxFIFOUnOv
    uint32_t RxFIFOUnOv : 1;
    // read-write - UQErr
    uint32_t UQErr : 1;
    // read-write - UQSync
    uint32_t UQSync : 1;
    // read-write - QRxOv
    uint32_t QRxOv : 1;
    // read-write - QRxFul
    uint32_t QRxFul : 1;
    // read-write - URxOv
    uint32_t URxOv : 1;
    // read-write - URxFul
    uint32_t URxFul : 1;
    uint32_t _reserved_0 : 3;
    // read-write - BitErr
    uint32_t BitErr : 1;
    // read-write - SymErr
    uint32_t SymErr : 1;
    // read-write - ValNoGood
    uint32_t ValNoGood : 1;
    // read-write - CNew
    uint32_t CNew : 1;
    // read-write - TxResyn
    uint32_t TxResyn : 1;
    // read-write - TxUnOv
    uint32_t TxUnOv : 1;
    // read-write - Lock
    uint32_t Lock : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SIE &Instance() { return *reinterpret_cast<volatile SIE*>(0x4040000C); }
};

// InterruptClear Register
union SIC {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // write-only - LockLoss
    uint32_t LockLoss : 1;
    // write-only - RxFIFOResyn
    uint32_t RxFIFOResyn : 1;
    // write-only - RxFIFOUnOv
    uint32_t RxFIFOUnOv : 1;
    // write-only - UQErr
    uint32_t UQErr : 1;
    // write-only - UQSync
    uint32_t UQSync : 1;
    // write-only - QRxOv
    uint32_t QRxOv : 1;
    uint32_t _reserved_1 : 1;
    // write-only - URxOv
    uint32_t URxOv : 1;
    uint32_t _reserved_2 : 4;
    // write-only - BitErr
    uint32_t BitErr : 1;
    // write-only - SymErr
    uint32_t SymErr : 1;
    // write-only - ValNoGood
    uint32_t ValNoGood : 1;
    // write-only - CNew
    uint32_t CNew : 1;
    // write-only - TxResyn
    uint32_t TxResyn : 1;
    // write-only - TxUnOv
    uint32_t TxUnOv : 1;
    // write-only - Lock
    uint32_t Lock : 1;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SIC &Instance() { return *reinterpret_cast<volatile SIC*>(0x40400010); }
};

// InterruptStat Register
union SIS {
  
  // Bit field definition.
  struct {
    // read-only - RxFIFOFul
    uint32_t RxFIFOFul : 1;
    // read-only - TxEm
    uint32_t TxEm : 1;
    // read-only - LockLoss
    uint32_t LockLoss : 1;
    // read-only - RxFIFOResyn
    uint32_t RxFIFOResyn : 1;
    // read-only - RxFIFOUnOv
    uint32_t RxFIFOUnOv : 1;
    // read-only - UQErr
    uint32_t UQErr : 1;
    // read-only - UQSync
    uint32_t UQSync : 1;
    // read-only - QRxOv
    uint32_t QRxOv : 1;
    // read-only - QRxFul
    uint32_t QRxFul : 1;
    // read-only - URxOv
    uint32_t URxOv : 1;
    // read-only - URxFul
    uint32_t URxFul : 1;
    uint32_t _reserved_0 : 3;
    // read-only - BitErr
    uint32_t BitErr : 1;
    // read-only - SymErr
    uint32_t SymErr : 1;
    // read-only - ValNoGood
    uint32_t ValNoGood : 1;
    // read-only - CNew
    uint32_t CNew : 1;
    // read-only - TxResyn
    uint32_t TxResyn : 1;
    // read-only - TxUnOv
    uint32_t TxUnOv : 1;
    // read-only - Lock
    uint32_t Lock : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIS() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SIS &Instance() { return *reinterpret_cast<volatile SIS*>(0x40400010); }
};

// SPDIFRxLeft Register
union SRL {
  
  // Bit field definition.
  struct {
    // read-only - RxDataLeft
    uint32_t RxDataLeft : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRL &Instance() { return *reinterpret_cast<volatile SRL*>(0x40400014); }
};

// SPDIFRxRight Register
union SRR {
  
  // Bit field definition.
  struct {
    // read-only - RxDataRight
    uint32_t RxDataRight : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRR &Instance() { return *reinterpret_cast<volatile SRR*>(0x40400018); }
};

// SPDIFRxCChannel_h Register
union SRCSH {
  
  // Bit field definition.
  struct {
    // read-only - RxCChannel_h
    uint32_t RxCChannel_h : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRCSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRCSH &Instance() { return *reinterpret_cast<volatile SRCSH*>(0x4040001C); }
};

// SPDIFRxCChannel_l Register
union SRCSL {
  
  // Bit field definition.
  struct {
    // read-only - RxCChannel_l
    uint32_t RxCChannel_l : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRCSL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRCSL &Instance() { return *reinterpret_cast<volatile SRCSL*>(0x40400020); }
};

// UchannelRx Register
union SRU {
  
  // Bit field definition.
  struct {
    // read-only - RxUChannel
    uint32_t RxUChannel : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRU() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRU &Instance() { return *reinterpret_cast<volatile SRU*>(0x40400024); }
};

// QchannelRx Register
union SRQ {
  
  // Bit field definition.
  struct {
    // read-only - RxQChannel
    uint32_t RxQChannel : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRQ &Instance() { return *reinterpret_cast<volatile SRQ*>(0x40400028); }
};

// SPDIFTxLeft Register
union STL {
  
  // Bit field definition.
  struct {
    // write-only - TxDataLeft
    uint32_t TxDataLeft : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STL &Instance() { return *reinterpret_cast<volatile STL*>(0x4040002C); }
};

// SPDIFTxRight Register
union STR {
  
  // Bit field definition.
  struct {
    // write-only - TxDataRight
    uint32_t TxDataRight : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STR &Instance() { return *reinterpret_cast<volatile STR*>(0x40400030); }
};

// SPDIFTxCChannelCons_h Register
union STCSCH {
  
  // Bit field definition.
  struct {
    // read-write - TxCChannelCons_h
    uint32_t TxCChannelCons_h : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STCSCH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STCSCH &Instance() { return *reinterpret_cast<volatile STCSCH*>(0x40400034); }
};

// SPDIFTxCChannelCons_l Register
union STCSCL {
  
  // Bit field definition.
  struct {
    // read-write - TxCChannelCons_l
    uint32_t TxCChannelCons_l : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STCSCL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STCSCL &Instance() { return *reinterpret_cast<volatile STCSCL*>(0x40400038); }
};

// FreqMeas Register
union SRFM {
  
  // Bit field definition.
  struct {
    // read-only - FreqMeas
    uint32_t FreqMeas : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRFM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRFM &Instance() { return *reinterpret_cast<volatile SRFM*>(0x40400044); }
};

// SPDIFTxClk Register
union STC {
  
  // TxClk_DF
  enum class eTxClk_DF : uint32_t {
    // divider factor is 1
    ediv1 = 0,
    // divider factor is 2
    ediv2 = 1,
    // divider factor is 128
    ediv128 = 127,
  };
  
  // tx_all_clk_en
  enum class etx_all_clk_en : uint32_t {
    // disable transfer clock.
    edisable = 0,
    // enable transfer clock.
    eenable = 1,
  };
  
  // TxClk_Source
  enum class eTxClk_Source : uint32_t {
    // REF_CLK_32K input (XTALOSC 32 kHz clock)
    etxclk_src_0b000 = 0,
    // tx_clk input (from SPDIF0_CLK_ROOT. See clock control block for more information.)
    etxclk_src_0b001 = 1,
    // SPDIF_EXT_CLK, from pads
    etxclk_src_0b011 = 3,
    // ipg_clk input (frequency divided)
    etxclk_src_0b101 = 5,
  };
  
  // SYSCLK_DF
  enum class eSYSCLK_DF : uint32_t {
    // no clock signal
    eno_clk = 0,
    // divider factor is 2
    ediv2 = 1,
    // divider factor is 512
    ediv512 = 511,
  };
  
  // Bit field definition.
  struct {
    // read-write - TxClk_DF
    eTxClk_DF TxClk_DF : 7;
    // read-write - tx_all_clk_en
    etx_all_clk_en tx_all_clk_en : 1;
    // read-write - TxClk_Source
    eTxClk_Source TxClk_Source : 3;
    // read-write - SYSCLK_DF
    eSYSCLK_DF SYSCLK_DF : 9;
    uint32_t _reserved_0 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STC() = delete;
  inline void Reset() volatile { this->value = 0x00020F00; }
  static inline volatile STC &Instance() { return *reinterpret_cast<volatile STC*>(0x40400050); }
};


} // namespace nSPDIF