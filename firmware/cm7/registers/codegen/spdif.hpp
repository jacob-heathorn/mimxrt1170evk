#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SPDIF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Spdif {
  // SPDIF Configuration Register
  struct SCR_fields_ {
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
  };  // struct SCR_fields_

  struct SCR : ftl::mmio::Register<
      0x40400000u,
      std::uint32_t,
      0x00000400u,
      ftl::mmio::RW,
      SCR_fields_::USrc_Sel,
      SCR_fields_::TxSel,
      SCR_fields_::ValCtrl,
      SCR_fields_::InputSrcSel,
      SCR_fields_::DMA_TX_En,
      SCR_fields_::DMA_Rx_En,
      SCR_fields_::TxFIFO_Ctrl,
      SCR_fields_::soft_reset,
      SCR_fields_::LOW_POWER,
      ftl::mmio::Reserved<1, 14>,
      SCR_fields_::TxFIFOEmpty_Sel,
      SCR_fields_::TxAutoSync,
      SCR_fields_::RxAutoSync,
      SCR_fields_::RxFIFOFull_Sel,
      SCR_fields_::RxFIFO_Rst,
      SCR_fields_::RxFIFO_Off_On,
      SCR_fields_::RxFIFO_Ctrl,
      ftl::mmio::Reserved<8, 24>> {
    using eUSrc_Sel = SCR_fields_::eUSrc_Sel;
    using eTxSel = SCR_fields_::eTxSel;
    using eValCtrl = SCR_fields_::eValCtrl;
    using eInputSrcSel = SCR_fields_::eInputSrcSel;
    using eTxFIFO_Ctrl = SCR_fields_::eTxFIFO_Ctrl;
    using eTxFIFOEmpty_Sel = SCR_fields_::eTxFIFOEmpty_Sel;
    using eTxAutoSync = SCR_fields_::eTxAutoSync;
    using eRxAutoSync = SCR_fields_::eRxAutoSync;
    using eRxFIFOFull_Sel = SCR_fields_::eRxFIFOFull_Sel;
    using eRxFIFO_Rst = SCR_fields_::eRxFIFO_Rst;
    using eRxFIFO_Off_On = SCR_fields_::eRxFIFO_Off_On;
    using eRxFIFO_Ctrl = SCR_fields_::eRxFIFO_Ctrl;
    using USrc_Sel = SCR_fields_::USrc_Sel;
    using TxSel = SCR_fields_::TxSel;
    using ValCtrl = SCR_fields_::ValCtrl;
    using InputSrcSel = SCR_fields_::InputSrcSel;
    using DMA_TX_En = SCR_fields_::DMA_TX_En;
    using DMA_Rx_En = SCR_fields_::DMA_Rx_En;
    using TxFIFO_Ctrl = SCR_fields_::TxFIFO_Ctrl;
    using soft_reset = SCR_fields_::soft_reset;
    using LOW_POWER = SCR_fields_::LOW_POWER;
    using TxFIFOEmpty_Sel = SCR_fields_::TxFIFOEmpty_Sel;
    using TxAutoSync = SCR_fields_::TxAutoSync;
    using RxAutoSync = SCR_fields_::RxAutoSync;
    using RxFIFOFull_Sel = SCR_fields_::RxFIFOFull_Sel;
    using RxFIFO_Rst = SCR_fields_::RxFIFO_Rst;
    using RxFIFO_Off_On = SCR_fields_::RxFIFO_Off_On;
    using RxFIFO_Ctrl = SCR_fields_::RxFIFO_Ctrl;
  };

  // CDText Control Register
  struct SRCD_fields_ {
    enum class eUSyncMode : std::uint32_t {
      // Non-CD data
      enon_cddata = 0,
      // CD user channel subcode
      ecduser_chsubcode = 1,
    };

    // USyncMode
    using USyncMode = ftl::mmio::Field<1, 1, eUSyncMode, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SRCD_fields_

  struct SRCD : ftl::mmio::Register<
      0x40400004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SRCD_fields_::USyncMode,
      ftl::mmio::Reserved<30, 2>> {
    using eUSyncMode = SRCD_fields_::eUSyncMode;
    using USyncMode = SRCD_fields_::USyncMode;
  };

  // PhaseConfig Register
  struct SRPC_fields_ {
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
  };  // struct SRPC_fields_

  struct SRPC : ftl::mmio::Register<
      0x40400008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      SRPC_fields_::GainSel,
      SRPC_fields_::LOCK,
      SRPC_fields_::ClkSrc_Sel,
      ftl::mmio::Reserved<21, 11>> {
    using eGainSel = SRPC_fields_::eGainSel;
    using eClkSrc_Sel = SRPC_fields_::eClkSrc_Sel;
    using GainSel = SRPC_fields_::GainSel;
    using LOCK = SRPC_fields_::LOCK;
    using ClkSrc_Sel = SRPC_fields_::ClkSrc_Sel;
  };

  // InterruptEn Register
  struct SIE_fields_ {
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
  };  // struct SIE_fields_

  struct SIE : ftl::mmio::Register<
      0x4040000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SIE_fields_::RxFIFOFul,
      SIE_fields_::TxEm,
      SIE_fields_::LockLoss,
      SIE_fields_::RxFIFOResyn,
      SIE_fields_::RxFIFOUnOv,
      SIE_fields_::UQErr,
      SIE_fields_::UQSync,
      SIE_fields_::QRxOv,
      SIE_fields_::QRxFul,
      SIE_fields_::URxOv,
      SIE_fields_::URxFul,
      ftl::mmio::Reserved<3, 11>,
      SIE_fields_::BitErr,
      SIE_fields_::SymErr,
      SIE_fields_::ValNoGood,
      SIE_fields_::CNew,
      SIE_fields_::TxResyn,
      SIE_fields_::TxUnOv,
      SIE_fields_::Lock,
      ftl::mmio::Reserved<11, 21>> {
    using RxFIFOFul = SIE_fields_::RxFIFOFul;
    using TxEm = SIE_fields_::TxEm;
    using LockLoss = SIE_fields_::LockLoss;
    using RxFIFOResyn = SIE_fields_::RxFIFOResyn;
    using RxFIFOUnOv = SIE_fields_::RxFIFOUnOv;
    using UQErr = SIE_fields_::UQErr;
    using UQSync = SIE_fields_::UQSync;
    using QRxOv = SIE_fields_::QRxOv;
    using QRxFul = SIE_fields_::QRxFul;
    using URxOv = SIE_fields_::URxOv;
    using URxFul = SIE_fields_::URxFul;
    using BitErr = SIE_fields_::BitErr;
    using SymErr = SIE_fields_::SymErr;
    using ValNoGood = SIE_fields_::ValNoGood;
    using CNew = SIE_fields_::CNew;
    using TxResyn = SIE_fields_::TxResyn;
    using TxUnOv = SIE_fields_::TxUnOv;
    using Lock = SIE_fields_::Lock;
  };

  // InterruptClear Register
  struct SIC_fields_ {
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
  };  // struct SIC_fields_

  struct SIC : ftl::mmio::Register<
      0x40400010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ftl::mmio::Reserved<2, 0>,
      SIC_fields_::LockLoss,
      SIC_fields_::RxFIFOResyn,
      SIC_fields_::RxFIFOUnOv,
      SIC_fields_::UQErr,
      SIC_fields_::UQSync,
      SIC_fields_::QRxOv,
      ftl::mmio::Reserved<1, 8>,
      SIC_fields_::URxOv,
      ftl::mmio::Reserved<4, 10>,
      SIC_fields_::BitErr,
      SIC_fields_::SymErr,
      SIC_fields_::ValNoGood,
      SIC_fields_::CNew,
      SIC_fields_::TxResyn,
      SIC_fields_::TxUnOv,
      SIC_fields_::Lock,
      ftl::mmio::Reserved<11, 21>> {
    using LockLoss = SIC_fields_::LockLoss;
    using RxFIFOResyn = SIC_fields_::RxFIFOResyn;
    using RxFIFOUnOv = SIC_fields_::RxFIFOUnOv;
    using UQErr = SIC_fields_::UQErr;
    using UQSync = SIC_fields_::UQSync;
    using QRxOv = SIC_fields_::QRxOv;
    using URxOv = SIC_fields_::URxOv;
    using BitErr = SIC_fields_::BitErr;
    using SymErr = SIC_fields_::SymErr;
    using ValNoGood = SIC_fields_::ValNoGood;
    using CNew = SIC_fields_::CNew;
    using TxResyn = SIC_fields_::TxResyn;
    using TxUnOv = SIC_fields_::TxUnOv;
    using Lock = SIC_fields_::Lock;
  };

  // InterruptStat Register
  struct SIS_fields_ {
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
  };  // struct SIS_fields_

  struct SIS : ftl::mmio::Register<
      0x40400010u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RO,
      SIS_fields_::RxFIFOFul,
      SIS_fields_::TxEm,
      SIS_fields_::LockLoss,
      SIS_fields_::RxFIFOResyn,
      SIS_fields_::RxFIFOUnOv,
      SIS_fields_::UQErr,
      SIS_fields_::UQSync,
      SIS_fields_::QRxOv,
      SIS_fields_::QRxFul,
      SIS_fields_::URxOv,
      SIS_fields_::URxFul,
      ftl::mmio::Reserved<3, 11>,
      SIS_fields_::BitErr,
      SIS_fields_::SymErr,
      SIS_fields_::ValNoGood,
      SIS_fields_::CNew,
      SIS_fields_::TxResyn,
      SIS_fields_::TxUnOv,
      SIS_fields_::Lock,
      ftl::mmio::Reserved<11, 21>> {
    using RxFIFOFul = SIS_fields_::RxFIFOFul;
    using TxEm = SIS_fields_::TxEm;
    using LockLoss = SIS_fields_::LockLoss;
    using RxFIFOResyn = SIS_fields_::RxFIFOResyn;
    using RxFIFOUnOv = SIS_fields_::RxFIFOUnOv;
    using UQErr = SIS_fields_::UQErr;
    using UQSync = SIS_fields_::UQSync;
    using QRxOv = SIS_fields_::QRxOv;
    using QRxFul = SIS_fields_::QRxFul;
    using URxOv = SIS_fields_::URxOv;
    using URxFul = SIS_fields_::URxFul;
    using BitErr = SIS_fields_::BitErr;
    using SymErr = SIS_fields_::SymErr;
    using ValNoGood = SIS_fields_::ValNoGood;
    using CNew = SIS_fields_::CNew;
    using TxResyn = SIS_fields_::TxResyn;
    using TxUnOv = SIS_fields_::TxUnOv;
    using Lock = SIS_fields_::Lock;
  };

  // SPDIFRxLeft Register
  struct SRL_fields_ {
    // RxDataLeft
    using RxDataLeft = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SRL_fields_

  struct SRL : ftl::mmio::Register<
      0x40400014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SRL_fields_::RxDataLeft,
      ftl::mmio::Reserved<8, 24>> {
    using RxDataLeft = SRL_fields_::RxDataLeft;
  };

  // SPDIFRxRight Register
  struct SRR_fields_ {
    // RxDataRight
    using RxDataRight = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SRR_fields_

  struct SRR : ftl::mmio::Register<
      0x40400018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SRR_fields_::RxDataRight,
      ftl::mmio::Reserved<8, 24>> {
    using RxDataRight = SRR_fields_::RxDataRight;
  };

  // SPDIFRxCChannel_h Register
  struct SRCSH_fields_ {
    // RxCChannel_h
    using RxCChannel_h = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SRCSH_fields_

  struct SRCSH : ftl::mmio::Register<
      0x4040001Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SRCSH_fields_::RxCChannel_h,
      ftl::mmio::Reserved<8, 24>> {
    using RxCChannel_h = SRCSH_fields_::RxCChannel_h;
  };

  // SPDIFRxCChannel_l Register
  struct SRCSL_fields_ {
    // RxCChannel_l
    using RxCChannel_l = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SRCSL_fields_

  struct SRCSL : ftl::mmio::Register<
      0x40400020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SRCSL_fields_::RxCChannel_l,
      ftl::mmio::Reserved<8, 24>> {
    using RxCChannel_l = SRCSL_fields_::RxCChannel_l;
  };

  // UchannelRx Register
  struct SRU_fields_ {
    // RxUChannel
    using RxUChannel = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SRU_fields_

  struct SRU : ftl::mmio::Register<
      0x40400024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SRU_fields_::RxUChannel,
      ftl::mmio::Reserved<8, 24>> {
    using RxUChannel = SRU_fields_::RxUChannel;
  };

  // QchannelRx Register
  struct SRQ_fields_ {
    // RxQChannel
    using RxQChannel = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SRQ_fields_

  struct SRQ : ftl::mmio::Register<
      0x40400028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SRQ_fields_::RxQChannel,
      ftl::mmio::Reserved<8, 24>> {
    using RxQChannel = SRQ_fields_::RxQChannel;
  };

  // SPDIFTxLeft Register
  struct STL_fields_ {
    // TxDataLeft
    using TxDataLeft = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct STL_fields_

  struct STL : ftl::mmio::Register<
      0x4040002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      STL_fields_::TxDataLeft,
      ftl::mmio::Reserved<8, 24>> {
    using TxDataLeft = STL_fields_::TxDataLeft;
  };

  // SPDIFTxRight Register
  struct STR_fields_ {
    // TxDataRight
    using TxDataRight = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct STR_fields_

  struct STR : ftl::mmio::Register<
      0x40400030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      STR_fields_::TxDataRight,
      ftl::mmio::Reserved<8, 24>> {
    using TxDataRight = STR_fields_::TxDataRight;
  };

  // SPDIFTxCChannelCons_h Register
  struct STCSCH_fields_ {
    // TxCChannelCons_h
    using TxCChannelCons_h = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct STCSCH_fields_

  struct STCSCH : ftl::mmio::Register<
      0x40400034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STCSCH_fields_::TxCChannelCons_h,
      ftl::mmio::Reserved<8, 24>> {
    using TxCChannelCons_h = STCSCH_fields_::TxCChannelCons_h;
  };

  // SPDIFTxCChannelCons_l Register
  struct STCSCL_fields_ {
    // TxCChannelCons_l
    using TxCChannelCons_l = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct STCSCL_fields_

  struct STCSCL : ftl::mmio::Register<
      0x40400038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STCSCL_fields_::TxCChannelCons_l,
      ftl::mmio::Reserved<8, 24>> {
    using TxCChannelCons_l = STCSCL_fields_::TxCChannelCons_l;
  };

  // FreqMeas Register
  struct SRFM_fields_ {
    // FreqMeas
    using FreqMeas = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SRFM_fields_

  struct SRFM : ftl::mmio::Register<
      0x40400044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SRFM_fields_::FreqMeas,
      ftl::mmio::Reserved<8, 24>> {
    using FreqMeas = SRFM_fields_::FreqMeas;
  };

  // SPDIFTxClk Register
  struct STC_fields_ {
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
  };  // struct STC_fields_

  struct STC : ftl::mmio::Register<
      0x40400050u,
      std::uint32_t,
      0x00020F00u,
      ftl::mmio::RW,
      STC_fields_::TxClk_DF,
      STC_fields_::tx_all_clk_en,
      STC_fields_::TxClk_Source,
      STC_fields_::SYSCLK_DF,
      ftl::mmio::Reserved<12, 20>> {
    using eTxClk_DF = STC_fields_::eTxClk_DF;
    using etx_all_clk_en = STC_fields_::etx_all_clk_en;
    using eTxClk_Source = STC_fields_::eTxClk_Source;
    using eSYSCLK_DF = STC_fields_::eSYSCLK_DF;
    using TxClk_DF = STC_fields_::TxClk_DF;
    using tx_all_clk_en = STC_fields_::tx_all_clk_en;
    using TxClk_Source = STC_fields_::TxClk_Source;
    using SYSCLK_DF = STC_fields_::SYSCLK_DF;
  };

};

}  // namespace regs