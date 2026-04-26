#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SPDIF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Spdif {
  // SPDIF Configuration Register
  struct ScrFields {
    enum class eUSrc_Sel : std::uint32_t {
      // No embedded U channel
      enone = 0,
      // U channel from SPDIF receive block (CD mode)
      espdif_rxblock = 1,
      // U channel from on chip transmitter
      echip_transmit = 3,
    };

    enum class eTxSel : std::uint32_t {
      // Off and output 0
      eoff_out0 = 0,
      // Feed-through SPDIFIN
      efeedthru = 1,
      // Tx Normal operation
      enormal_op = 5,
    };

    enum class eValCtrl : std::uint32_t {
      // Outgoing Validity always set
      ealways_set = 0,
      // Outgoing Validity always clear
      ealways_clear = 1,
    };

    enum class eInputSrcSel : std::uint32_t {
      // SPDIF_IN
      espdif_in = 0,
      // None
      enone_sel_1 = 1,
      // None
      enone_sel_2 = 2,
      // None
      enone_sel_3 = 3,
    };

    enum class eTxFIFO_Ctrl : std::uint32_t {
      // Send out digital zero on SPDIF Tx
      esend_zero = 0,
      // Tx Normal operation
      enormal = 1,
      // Reset to 1 sample remaining
      ereset_one = 2,
    };

    enum class eTxFIFOEmpty_Sel : std::uint32_t {
      // Empty interrupt if 0 sample in Tx left and right FIFOs
      eempty_int_0 = 0,
      // Empty interrupt if at most 4 sample in Tx left and right FIFOs
      eempty_int_4 = 1,
      // Empty interrupt if at most 8 sample in Tx left and right FIFOs
      eempty_int_8 = 2,
      // Empty interrupt if at most 12 sample in Tx left and right FIFOs
      eempty_int_12 = 3,
    };

    enum class eTxAutoSync : std::uint32_t {
      // Tx FIFO auto sync off
      eoff = 0,
      // Tx FIFO auto sync on
      eon = 1,
    };

    enum class eRxAutoSync : std::uint32_t {
      // Rx FIFO auto sync off
      eoff = 0,
      // RxFIFO auto sync on
      eon = 1,
    };

    enum class eRxFIFOFull_Sel : std::uint32_t {
      // Full interrupt if at least 1 sample in Rx left and right FIFOs
      efull_int_1 = 0,
      // Full interrupt if at least 4 sample in Rx left and right FIFOs
      efull_int_4 = 1,
      // Full interrupt if at least 8 sample in Rx left and right FIFOs
      efull_int_8 = 2,
      // Full interrupt if at least 16 sample in Rx left and right FIFO
      efull_int_16 = 3,
    };

    enum class eRxFIFO_Rst : std::uint32_t {
      // Normal operation
      enormal = 0,
      // Reset register to 1 sample remaining
      ereset_one = 1,
    };

    enum class eRxFIFO_Off_On : std::uint32_t {
      // SPDIF Rx FIFO is on
      eon_0 = 0,
      // SPDIF Rx FIFO is off. Does not accept data from interface
      eoff_1 = 1,
    };

    enum class eRxFIFO_Ctrl : std::uint32_t {
      // Normal operation
      enormal = 0,
      // Always read zero from Rx data register
      ealways_zero = 1,
    };

    // USrc_Sel
    using USrc_Sel = ftl::mmio::Field<2, 0, eUSrc_Sel, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxSel
    using TxSel = ftl::mmio::Field<3, 2, eTxSel, ftl::mmio::RW, ftl::mmio::Normal>;
    // ValCtrl
    using ValCtrl = ftl::mmio::Field<1, 5, eValCtrl, ftl::mmio::RW, ftl::mmio::Normal>;
    // InputSrcSel
    using InputSrcSel = ftl::mmio::Field<2, 6, eInputSrcSel, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA_TX_En
    using DMA_TX_En = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA_Rx_En
    using DMA_Rx_En = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxFIFO_Ctrl
    using TxFIFO_Ctrl = ftl::mmio::Field<2, 10, eTxFIFO_Ctrl, ftl::mmio::RW, ftl::mmio::Normal>;
    // soft_reset
    using soft_reset = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LOW_POWER
    using LOW_POWER = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxFIFOEmpty_Sel
    using TxFIFOEmpty_Sel = ftl::mmio::Field<2, 15, eTxFIFOEmpty_Sel, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxAutoSync
    using TxAutoSync = ftl::mmio::Field<1, 17, eTxAutoSync, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxAutoSync
    using RxAutoSync = ftl::mmio::Field<1, 18, eRxAutoSync, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFOFull_Sel
    using RxFIFOFull_Sel = ftl::mmio::Field<2, 19, eRxFIFOFull_Sel, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFO_Rst
    using RxFIFO_Rst = ftl::mmio::Field<1, 21, eRxFIFO_Rst, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFO_Off_On
    using RxFIFO_Off_On = ftl::mmio::Field<1, 22, eRxFIFO_Off_On, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFO_Ctrl
    using RxFIFO_Ctrl = ftl::mmio::Field<1, 23, eRxFIFO_Ctrl, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScrFields

  struct SCR : ftl::mmio::Register<
      0x40400000u,
      std::uint32_t,
      0x00000400u,
      ftl::mmio::RW,
      ScrFields::USrc_Sel,
      ScrFields::TxSel,
      ScrFields::ValCtrl,
      ScrFields::InputSrcSel,
      ScrFields::DMA_TX_En,
      ScrFields::DMA_Rx_En,
      ScrFields::TxFIFO_Ctrl,
      ScrFields::soft_reset,
      ScrFields::LOW_POWER,
      ftl::mmio::Reserved<1, 14>,
      ScrFields::TxFIFOEmpty_Sel,
      ScrFields::TxAutoSync,
      ScrFields::RxAutoSync,
      ScrFields::RxFIFOFull_Sel,
      ScrFields::RxFIFO_Rst,
      ScrFields::RxFIFO_Off_On,
      ScrFields::RxFIFO_Ctrl,
      ftl::mmio::Reserved<8, 24>> {
    using eUSrc_Sel = ScrFields::eUSrc_Sel;
    using eTxSel = ScrFields::eTxSel;
    using eValCtrl = ScrFields::eValCtrl;
    using eInputSrcSel = ScrFields::eInputSrcSel;
    using eTxFIFO_Ctrl = ScrFields::eTxFIFO_Ctrl;
    using eTxFIFOEmpty_Sel = ScrFields::eTxFIFOEmpty_Sel;
    using eTxAutoSync = ScrFields::eTxAutoSync;
    using eRxAutoSync = ScrFields::eRxAutoSync;
    using eRxFIFOFull_Sel = ScrFields::eRxFIFOFull_Sel;
    using eRxFIFO_Rst = ScrFields::eRxFIFO_Rst;
    using eRxFIFO_Off_On = ScrFields::eRxFIFO_Off_On;
    using eRxFIFO_Ctrl = ScrFields::eRxFIFO_Ctrl;
    using USrc_Sel = ScrFields::USrc_Sel;
    using TxSel = ScrFields::TxSel;
    using ValCtrl = ScrFields::ValCtrl;
    using InputSrcSel = ScrFields::InputSrcSel;
    using DMA_TX_En = ScrFields::DMA_TX_En;
    using DMA_Rx_En = ScrFields::DMA_Rx_En;
    using TxFIFO_Ctrl = ScrFields::TxFIFO_Ctrl;
    using soft_reset = ScrFields::soft_reset;
    using LOW_POWER = ScrFields::LOW_POWER;
    using TxFIFOEmpty_Sel = ScrFields::TxFIFOEmpty_Sel;
    using TxAutoSync = ScrFields::TxAutoSync;
    using RxAutoSync = ScrFields::RxAutoSync;
    using RxFIFOFull_Sel = ScrFields::RxFIFOFull_Sel;
    using RxFIFO_Rst = ScrFields::RxFIFO_Rst;
    using RxFIFO_Off_On = ScrFields::RxFIFO_Off_On;
    using RxFIFO_Ctrl = ScrFields::RxFIFO_Ctrl;
  };

  // CDText Control Register
  struct SrcdFields {
    enum class eUSyncMode : std::uint32_t {
      // Non-CD data
      enon_cddata = 0,
      // CD user channel subcode
      ecduser_chsubcode = 1,
    };

    // USyncMode
    using USyncMode = ftl::mmio::Field<1, 1, eUSyncMode, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SrcdFields

  struct SRCD : ftl::mmio::Register<
      0x40400004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SrcdFields::USyncMode,
      ftl::mmio::Reserved<30, 2>> {
    using eUSyncMode = SrcdFields::eUSyncMode;
    using USyncMode = SrcdFields::USyncMode;
  };

  // PhaseConfig Register
  struct SrpcFields {
    enum class eGainSel : std::uint32_t {
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

    enum class eClkSrc_Sel : std::uint32_t {
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

    // GainSel
    using GainSel = ftl::mmio::Field<3, 3, eGainSel, ftl::mmio::RW, ftl::mmio::Normal>;
    // LOCK
    using LOCK = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // ClkSrc_Sel
    using ClkSrc_Sel = ftl::mmio::Field<4, 7, eClkSrc_Sel, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SrpcFields

  struct SRPC : ftl::mmio::Register<
      0x40400008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      SrpcFields::GainSel,
      SrpcFields::LOCK,
      SrpcFields::ClkSrc_Sel,
      ftl::mmio::Reserved<21, 11>> {
    using eGainSel = SrpcFields::eGainSel;
    using eClkSrc_Sel = SrpcFields::eClkSrc_Sel;
    using GainSel = SrpcFields::GainSel;
    using LOCK = SrpcFields::LOCK;
    using ClkSrc_Sel = SrpcFields::ClkSrc_Sel;
  };

  // InterruptEn Register
  struct SieFields {
    // RxFIFOFul
    using RxFIFOFul = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxEm
    using TxEm = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LockLoss
    using LockLoss = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFOResyn
    using RxFIFOResyn = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFOUnOv
    using RxFIFOUnOv = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // UQErr
    using UQErr = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // UQSync
    using UQSync = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QRxOv
    using QRxOv = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QRxFul
    using QRxFul = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // URxOv
    using URxOv = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // URxFul
    using URxFul = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // BitErr
    using BitErr = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SymErr
    using SymErr = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ValNoGood
    using ValNoGood = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CNew
    using CNew = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxResyn
    using TxResyn = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxUnOv
    using TxUnOv = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock
    using Lock = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SieFields

  struct SIE : ftl::mmio::Register<
      0x4040000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SieFields::RxFIFOFul,
      SieFields::TxEm,
      SieFields::LockLoss,
      SieFields::RxFIFOResyn,
      SieFields::RxFIFOUnOv,
      SieFields::UQErr,
      SieFields::UQSync,
      SieFields::QRxOv,
      SieFields::QRxFul,
      SieFields::URxOv,
      SieFields::URxFul,
      ftl::mmio::Reserved<3, 11>,
      SieFields::BitErr,
      SieFields::SymErr,
      SieFields::ValNoGood,
      SieFields::CNew,
      SieFields::TxResyn,
      SieFields::TxUnOv,
      SieFields::Lock,
      ftl::mmio::Reserved<11, 21>> {
    using RxFIFOFul = SieFields::RxFIFOFul;
    using TxEm = SieFields::TxEm;
    using LockLoss = SieFields::LockLoss;
    using RxFIFOResyn = SieFields::RxFIFOResyn;
    using RxFIFOUnOv = SieFields::RxFIFOUnOv;
    using UQErr = SieFields::UQErr;
    using UQSync = SieFields::UQSync;
    using QRxOv = SieFields::QRxOv;
    using QRxFul = SieFields::QRxFul;
    using URxOv = SieFields::URxOv;
    using URxFul = SieFields::URxFul;
    using BitErr = SieFields::BitErr;
    using SymErr = SieFields::SymErr;
    using ValNoGood = SieFields::ValNoGood;
    using CNew = SieFields::CNew;
    using TxResyn = SieFields::TxResyn;
    using TxUnOv = SieFields::TxUnOv;
    using Lock = SieFields::Lock;
  };

  // InterruptClear Register
  struct SicFields {
    // LockLoss
    using LockLoss = ftl::mmio::Field<1, 2, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // RxFIFOResyn
    using RxFIFOResyn = ftl::mmio::Field<1, 3, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // RxFIFOUnOv
    using RxFIFOUnOv = ftl::mmio::Field<1, 4, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // UQErr
    using UQErr = ftl::mmio::Field<1, 5, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // UQSync
    using UQSync = ftl::mmio::Field<1, 6, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // QRxOv
    using QRxOv = ftl::mmio::Field<1, 7, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // URxOv
    using URxOv = ftl::mmio::Field<1, 9, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // BitErr
    using BitErr = ftl::mmio::Field<1, 14, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // SymErr
    using SymErr = ftl::mmio::Field<1, 15, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // ValNoGood
    using ValNoGood = ftl::mmio::Field<1, 16, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // CNew
    using CNew = ftl::mmio::Field<1, 17, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // TxResyn
    using TxResyn = ftl::mmio::Field<1, 18, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // TxUnOv
    using TxUnOv = ftl::mmio::Field<1, 19, bool, ftl::mmio::WO, ftl::mmio::Normal>;
    // Lock
    using Lock = ftl::mmio::Field<1, 20, bool, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SicFields

  struct SIC : ftl::mmio::Register<
      0x40400010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ftl::mmio::Reserved<2, 0>,
      SicFields::LockLoss,
      SicFields::RxFIFOResyn,
      SicFields::RxFIFOUnOv,
      SicFields::UQErr,
      SicFields::UQSync,
      SicFields::QRxOv,
      ftl::mmio::Reserved<1, 8>,
      SicFields::URxOv,
      ftl::mmio::Reserved<4, 10>,
      SicFields::BitErr,
      SicFields::SymErr,
      SicFields::ValNoGood,
      SicFields::CNew,
      SicFields::TxResyn,
      SicFields::TxUnOv,
      SicFields::Lock,
      ftl::mmio::Reserved<11, 21>> {
    using LockLoss = SicFields::LockLoss;
    using RxFIFOResyn = SicFields::RxFIFOResyn;
    using RxFIFOUnOv = SicFields::RxFIFOUnOv;
    using UQErr = SicFields::UQErr;
    using UQSync = SicFields::UQSync;
    using QRxOv = SicFields::QRxOv;
    using URxOv = SicFields::URxOv;
    using BitErr = SicFields::BitErr;
    using SymErr = SicFields::SymErr;
    using ValNoGood = SicFields::ValNoGood;
    using CNew = SicFields::CNew;
    using TxResyn = SicFields::TxResyn;
    using TxUnOv = SicFields::TxUnOv;
    using Lock = SicFields::Lock;
  };

  // InterruptStat Register
  struct SisFields {
    // RxFIFOFul
    using RxFIFOFul = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // TxEm
    using TxEm = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // LockLoss
    using LockLoss = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // RxFIFOResyn
    using RxFIFOResyn = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // RxFIFOUnOv
    using RxFIFOUnOv = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // UQErr
    using UQErr = ftl::mmio::Field<1, 5, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // UQSync
    using UQSync = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // QRxOv
    using QRxOv = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // QRxFul
    using QRxFul = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // URxOv
    using URxOv = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // URxFul
    using URxFul = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // BitErr
    using BitErr = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // SymErr
    using SymErr = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // ValNoGood
    using ValNoGood = ftl::mmio::Field<1, 16, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // CNew
    using CNew = ftl::mmio::Field<1, 17, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // TxResyn
    using TxResyn = ftl::mmio::Field<1, 18, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // TxUnOv
    using TxUnOv = ftl::mmio::Field<1, 19, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Lock
    using Lock = ftl::mmio::Field<1, 20, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SisFields

  struct SIS : ftl::mmio::Register<
      0x40400010u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RO,
      SisFields::RxFIFOFul,
      SisFields::TxEm,
      SisFields::LockLoss,
      SisFields::RxFIFOResyn,
      SisFields::RxFIFOUnOv,
      SisFields::UQErr,
      SisFields::UQSync,
      SisFields::QRxOv,
      SisFields::QRxFul,
      SisFields::URxOv,
      SisFields::URxFul,
      ftl::mmio::Reserved<3, 11>,
      SisFields::BitErr,
      SisFields::SymErr,
      SisFields::ValNoGood,
      SisFields::CNew,
      SisFields::TxResyn,
      SisFields::TxUnOv,
      SisFields::Lock,
      ftl::mmio::Reserved<11, 21>> {
    using RxFIFOFul = SisFields::RxFIFOFul;
    using TxEm = SisFields::TxEm;
    using LockLoss = SisFields::LockLoss;
    using RxFIFOResyn = SisFields::RxFIFOResyn;
    using RxFIFOUnOv = SisFields::RxFIFOUnOv;
    using UQErr = SisFields::UQErr;
    using UQSync = SisFields::UQSync;
    using QRxOv = SisFields::QRxOv;
    using QRxFul = SisFields::QRxFul;
    using URxOv = SisFields::URxOv;
    using URxFul = SisFields::URxFul;
    using BitErr = SisFields::BitErr;
    using SymErr = SisFields::SymErr;
    using ValNoGood = SisFields::ValNoGood;
    using CNew = SisFields::CNew;
    using TxResyn = SisFields::TxResyn;
    using TxUnOv = SisFields::TxUnOv;
    using Lock = SisFields::Lock;
  };

  // SPDIFRxLeft Register
  struct SrlFields {
    // RxDataLeft
    using RxDataLeft = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrlFields

  struct SRL : ftl::mmio::Register<
      0x40400014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SrlFields::RxDataLeft,
      ftl::mmio::Reserved<8, 24>> {
    using RxDataLeft = SrlFields::RxDataLeft;
  };

  // SPDIFRxRight Register
  struct SrrFields {
    // RxDataRight
    using RxDataRight = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrrFields

  struct SRR : ftl::mmio::Register<
      0x40400018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SrrFields::RxDataRight,
      ftl::mmio::Reserved<8, 24>> {
    using RxDataRight = SrrFields::RxDataRight;
  };

  // SPDIFRxCChannel_h Register
  struct SrcshFields {
    // RxCChannel_h
    using RxCChannel_h = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrcshFields

  struct SRCSH : ftl::mmio::Register<
      0x4040001Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SrcshFields::RxCChannel_h,
      ftl::mmio::Reserved<8, 24>> {
    using RxCChannel_h = SrcshFields::RxCChannel_h;
  };

  // SPDIFRxCChannel_l Register
  struct SrcslFields {
    // RxCChannel_l
    using RxCChannel_l = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrcslFields

  struct SRCSL : ftl::mmio::Register<
      0x40400020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SrcslFields::RxCChannel_l,
      ftl::mmio::Reserved<8, 24>> {
    using RxCChannel_l = SrcslFields::RxCChannel_l;
  };

  // UchannelRx Register
  struct SruFields {
    // RxUChannel
    using RxUChannel = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SruFields

  struct SRU : ftl::mmio::Register<
      0x40400024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SruFields::RxUChannel,
      ftl::mmio::Reserved<8, 24>> {
    using RxUChannel = SruFields::RxUChannel;
  };

  // QchannelRx Register
  struct SrqFields {
    // RxQChannel
    using RxQChannel = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrqFields

  struct SRQ : ftl::mmio::Register<
      0x40400028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SrqFields::RxQChannel,
      ftl::mmio::Reserved<8, 24>> {
    using RxQChannel = SrqFields::RxQChannel;
  };

  // SPDIFTxLeft Register
  struct StlFields {
    // TxDataLeft
    using TxDataLeft = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct StlFields

  struct STL : ftl::mmio::Register<
      0x4040002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      StlFields::TxDataLeft,
      ftl::mmio::Reserved<8, 24>> {
    using TxDataLeft = StlFields::TxDataLeft;
  };

  // SPDIFTxRight Register
  struct StrFields {
    // TxDataRight
    using TxDataRight = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct StrFields

  struct STR : ftl::mmio::Register<
      0x40400030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      StrFields::TxDataRight,
      ftl::mmio::Reserved<8, 24>> {
    using TxDataRight = StrFields::TxDataRight;
  };

  // SPDIFTxCChannelCons_h Register
  struct StcschFields {
    // TxCChannelCons_h
    using TxCChannelCons_h = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StcschFields

  struct STCSCH : ftl::mmio::Register<
      0x40400034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StcschFields::TxCChannelCons_h,
      ftl::mmio::Reserved<8, 24>> {
    using TxCChannelCons_h = StcschFields::TxCChannelCons_h;
  };

  // SPDIFTxCChannelCons_l Register
  struct StcsclFields {
    // TxCChannelCons_l
    using TxCChannelCons_l = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StcsclFields

  struct STCSCL : ftl::mmio::Register<
      0x40400038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StcsclFields::TxCChannelCons_l,
      ftl::mmio::Reserved<8, 24>> {
    using TxCChannelCons_l = StcsclFields::TxCChannelCons_l;
  };

  // FreqMeas Register
  struct SrfmFields {
    // FreqMeas
    using FreqMeas = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrfmFields

  struct SRFM : ftl::mmio::Register<
      0x40400044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SrfmFields::FreqMeas,
      ftl::mmio::Reserved<8, 24>> {
    using FreqMeas = SrfmFields::FreqMeas;
  };

  // SPDIFTxClk Register
  struct StcFields {
    enum class eTxClk_DF : std::uint32_t {
      // divider factor is 1
      ediv1 = 0,
      // divider factor is 2
      ediv2 = 1,
      // divider factor is 128
      ediv128 = 127,
    };

    enum class etx_all_clk_en : std::uint32_t {
      // disable transfer clock.
      edisable = 0,
      // enable transfer clock.
      eenable = 1,
    };

    enum class eTxClk_Source : std::uint32_t {
      // REF_CLK_32K input (XTALOSC 32 kHz clock)
      etxclk_src_0b000 = 0,
      // tx_clk input (from SPDIF0_CLK_ROOT. See clock control block for more information.)
      etxclk_src_0b001 = 1,
      // SPDIF_EXT_CLK, from pads
      etxclk_src_0b011 = 3,
      // ipg_clk input (frequency divided)
      etxclk_src_0b101 = 5,
    };

    enum class eSYSCLK_DF : std::uint32_t {
      // no clock signal
      eno_clk = 0,
      // divider factor is 2
      ediv2 = 1,
      // divider factor is 512
      ediv512 = 511,
    };

    // TxClk_DF
    using TxClk_DF = ftl::mmio::Field<7, 0, eTxClk_DF, ftl::mmio::RW, ftl::mmio::Normal>;
    // tx_all_clk_en
    using tx_all_clk_en = ftl::mmio::Field<1, 7, etx_all_clk_en, ftl::mmio::RW, ftl::mmio::Normal>;
    // TxClk_Source
    using TxClk_Source = ftl::mmio::Field<3, 8, eTxClk_Source, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYSCLK_DF
    using SYSCLK_DF = ftl::mmio::Field<9, 11, eSYSCLK_DF, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StcFields

  struct STC : ftl::mmio::Register<
      0x40400050u,
      std::uint32_t,
      0x00020F00u,
      ftl::mmio::RW,
      StcFields::TxClk_DF,
      StcFields::tx_all_clk_en,
      StcFields::TxClk_Source,
      StcFields::SYSCLK_DF,
      ftl::mmio::Reserved<12, 20>> {
    using eTxClk_DF = StcFields::eTxClk_DF;
    using etx_all_clk_en = StcFields::etx_all_clk_en;
    using eTxClk_Source = StcFields::eTxClk_Source;
    using eSYSCLK_DF = StcFields::eSYSCLK_DF;
    using TxClk_DF = StcFields::TxClk_DF;
    using tx_all_clk_en = StcFields::tx_all_clk_en;
    using TxClk_Source = StcFields::TxClk_Source;
    using SYSCLK_DF = StcFields::SYSCLK_DF;
  };

};

}  // namespace regs