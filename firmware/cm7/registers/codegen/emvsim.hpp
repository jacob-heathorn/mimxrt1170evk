#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// EMVSIM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Emvsim {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Emvsim: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40154000u :
      Instance == 2u ? 0x40158000u :
      0u;

  // Version ID Register
  struct VerIdFields {
    // Version ID of the module
    using VER = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VerIdFields

  struct VER_ID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename VerIdFields::VER> {
    using VER = typename VerIdFields::VER;
  };

  // Parameter Register
  struct ParamFields {
    // Receive FIFO Depth
    using RX_FIFO_DEPTH = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Transmit FIFO Depth
    using TX_FIFO_DEPTH = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ParamFields

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00001010u,
      ftl::mmio::RO,
      typename ParamFields::RX_FIFO_DEPTH,
      typename ParamFields::TX_FIFO_DEPTH,
      ftl::mmio::Reserved<16, 16>> {
    using RX_FIFO_DEPTH = typename ParamFields::RX_FIFO_DEPTH;
    using TX_FIFO_DEPTH = typename ParamFields::TX_FIFO_DEPTH;
  };

  // Clock Configuration Register
  struct ClkcfgFields {
    enum class eGPCNT1_CLK_SEL : std::uint32_t {
      // Disabled / Reset
      edisabled = 0,
      // Card Clock
      ecardclk = 1,
      // Receive Clock
      erxclk = 2,
      // ETU Clock (transmit clock)
      etxclk = 3,
    };

    enum class eGPCNT0_CLK_SEL : std::uint32_t {
      // Disabled / Reset
      edisabled = 0,
      // Card Clock
      ecardclk = 1,
      // Receive Clock
      erxclk = 2,
      // ETU Clock (transmit clock)
      etxclk = 3,
    };

    // Clock Prescaler Value
    using CLK_PRSC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // General Purpose Counter 1 Clock Select
    using GPCNT1_CLK_SEL = ftl::mmio::Field<2, 8, eGPCNT1_CLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // General Purpose Counter 0 Clock Select
    using GPCNT0_CLK_SEL = ftl::mmio::Field<2, 10, eGPCNT0_CLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ClkcfgFields

  struct CLKCFG : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ClkcfgFields::CLK_PRSC,
      typename ClkcfgFields::GPCNT1_CLK_SEL,
      typename ClkcfgFields::GPCNT0_CLK_SEL,
      ftl::mmio::Reserved<20, 12>> {
    using eGPCNT1_CLK_SEL = typename ClkcfgFields::eGPCNT1_CLK_SEL;
    using eGPCNT0_CLK_SEL = typename ClkcfgFields::eGPCNT0_CLK_SEL;
    using CLK_PRSC = typename ClkcfgFields::CLK_PRSC;
    using GPCNT1_CLK_SEL = typename ClkcfgFields::GPCNT1_CLK_SEL;
    using GPCNT0_CLK_SEL = typename ClkcfgFields::GPCNT0_CLK_SEL;
  };

  // Baud Rate Divisor Register
  struct DivisorFields {
    enum class eDIVISOR_VALUE : std::uint32_t {
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

    // Divisor (F/D) Value
    using DIVISOR_VALUE = ftl::mmio::Field<9, 0, eDIVISOR_VALUE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DivisorFields

  struct DIVISOR : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000174u,
      ftl::mmio::RW,
      typename DivisorFields::DIVISOR_VALUE,
      ftl::mmio::Reserved<23, 9>> {
    using eDIVISOR_VALUE = typename DivisorFields::eDIVISOR_VALUE;
    using DIVISOR_VALUE = typename DivisorFields::DIVISOR_VALUE;
  };

  // Control Register
  struct CtrlFields {
    enum class eIC : std::uint32_t {
      // Direction convention transfers enabled
      edir_convention = 0,
      // Inverse convention transfers enabled
      einv_convention = 1,
    };

    enum class eICM : std::uint32_t {
      // Initial Character Mode disabled
      edisabled = 0,
      // Initial Character Mode enabled
      eenabled = 1,
    };

    enum class eANACK : std::uint32_t {
      // NACK generation on errors disabled
      edisabled = 0,
      // NACK generation on errors enabled
      eenabled = 1,
    };

    enum class eONACK : std::uint32_t {
      // NACK generation on overrun is disabled
      edisabled = 0,
      // NACK generation on overrun is enabled
      eenabled = 1,
    };

    enum class eFLSH_RX : std::uint32_t {
      // EMVSIM Receiver normal operation
      enormalop = 0,
      // EMVSIM Receiver held in Reset
      eresethold = 1,
    };

    enum class eFLSH_TX : std::uint32_t {
      // EMVSIM Transmitter normal operation
      enormalop = 0,
      // EMVSIM Transmitter held in Reset
      eresethold = 1,
    };

    enum class eSW_RST : std::uint32_t {
      // EMVSIM Normal operation
      enormalop = 0,
      // EMVSIM held in Reset
      eresethold = 1,
    };

    enum class eKILL_CLOCKS : std::uint32_t {
      // EMVSIM input clock enabled
      einclk_enabled = 0,
      // EMVSIM input clock is disabled
      einclk_disabled = 1,
    };

    enum class eDOZE_EN : std::uint32_t {
      // DOZE instruction gates all internal EMVSIM clocks as well as the Smart Card clock when the transmit FIFO is empty
      edoze_gate = 0,
      // DOZE instruction has no effect on EMVSIM module
      edoze_nogate = 1,
    };

    enum class eSTOP_EN : std::uint32_t {
      // STOP instruction shuts down all EMVSIM clocks
      estop_all_clks = 0,
      // STOP instruction shuts down all clocks except for the Smart Card Clock (SCK) (clock provided to Smart Card)
      eonly_sck_on = 1,
    };

    enum class eRCV_EN : std::uint32_t {
      // EMVSIM Receiver disabled
      edisabled = 0,
      // EMVSIM Receiver enabled
      eenabled = 1,
    };

    enum class eXMT_EN : std::uint32_t {
      // EMVSIM Transmitter disabled
      edisabled = 0,
      // EMVSIM Transmitter enabled
      eenabled = 1,
    };

    enum class eRCVR_11 : std::uint32_t {
      // Receiver configured for 12 ETU operation mode
      ercvr_12 = 0,
      // Receiver configured for 11 ETU operation mode
      ercvr_11 = 1,
    };

    enum class eRX_DMA_EN : std::uint32_t {
      // No DMA Read Request asserted for Receiver
      eno_dmaread_req = 0,
      // DMA Read Request asserted for Receiver
      edmaread_req = 1,
    };

    enum class eTX_DMA_EN : std::uint32_t {
      // No DMA Write Request asserted for Transmitter
      eno_dmawrite_req = 0,
      // DMA Write Request asserted for Transmitter
      edmawrite_req = 1,
    };

    enum class eINV_CRC_VAL : std::uint32_t {
      // Bits in CRC Output value are not inverted.
      eno_invert = 0,
      // Bits in CRC Output value are inverted.
      einvert = 1,
    };

    enum class eCRC_OUT_FLIP : std::uint32_t {
      // Bits within the CRC output bytes are not reversed i.e. 15:0 remains 15:0
      enot_reversed = 0,
      // Bits within the CRC output bytes are reversed i.e. 15:0 becomes {8:15,0:7}
      ereversed = 1,
    };

    enum class eCRC_IN_FLIP : std::uint32_t {
      // Bits in the input byte are not reversed (i.e. 7:0 remain 7:0) before the CRC calculation
      enot_reversed = 0,
      // Bits in the input byte are reversed (i.e. 7:0 becomes 0:7) before CRC calculation
      ereversed = 1,
    };

    enum class eCWT_EN : std::uint32_t {
      // Character Wait time Counter is disabled
      edisabled = 0,
      // Character Wait time counter is enabled
      eenabled = 1,
    };

    enum class eLRC_EN : std::uint32_t {
      // 8-bit Linear Redundancy Checking disabled
      edisabled = 0,
      // 8-bit Linear Redundancy Checking enabled
      eenabled = 1,
    };

    enum class eCRC_EN : std::uint32_t {
      // 16-bit Cyclic Redundancy Checking disabled
      edisabled = 0,
      // 16-bit Cyclic Redundancy Checking enabled
      eenabled = 1,
    };

    enum class eXMT_CRC_LRC : std::uint32_t {
      // No CRC or LRC value is transmitted
      eno_crc_lrc_tx = 0,
      // Transmit LRC or CRC info when FIFO empties (whichever is enabled)
      ecrc_lrc_tx = 1,
    };

    enum class eBWT_EN : std::uint32_t {
      // Disable BWT, BGT Counters
      edisabled = 0,
      // Enable BWT, BGT Counters
      eenabled = 1,
    };

    // Inverse Convention
    using IC = ftl::mmio::Field<1, 0, eIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initial Character Mode
    using ICM = ftl::mmio::Field<1, 1, eICM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto NACK Enable
    using ANACK = ftl::mmio::Field<1, 2, eANACK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Overrun NACK Enable
    using ONACK = ftl::mmio::Field<1, 3, eONACK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Flush Receiver Bit
    using FLSH_RX = ftl::mmio::Field<1, 8, eFLSH_RX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Flush Transmitter Bit
    using FLSH_TX = ftl::mmio::Field<1, 9, eFLSH_TX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset Bit
    using SW_RST = ftl::mmio::Field<1, 10, eSW_RST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Kill all internal clocks
    using KILL_CLOCKS = ftl::mmio::Field<1, 11, eKILL_CLOCKS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Doze Enable
    using DOZE_EN = ftl::mmio::Field<1, 12, eDOZE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // STOP Enable
    using STOP_EN = ftl::mmio::Field<1, 13, eSTOP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receiver Enable
    using RCV_EN = ftl::mmio::Field<1, 16, eRCV_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmitter Enable
    using XMT_EN = ftl::mmio::Field<1, 17, eXMT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receiver 11 ETU Mode Enable
    using RCVR_11 = ftl::mmio::Field<1, 18, eRCVR_11, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive DMA Enable
    using RX_DMA_EN = ftl::mmio::Field<1, 19, eRX_DMA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit DMA Enable
    using TX_DMA_EN = ftl::mmio::Field<1, 20, eTX_DMA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invert bits in the CRC Output Value
    using INV_CRC_VAL = ftl::mmio::Field<1, 24, eINV_CRC_VAL, ftl::mmio::RW, ftl::mmio::Normal>;
    // CRC Output Value Bit Reversal or Flip
    using CRC_OUT_FLIP = ftl::mmio::Field<1, 25, eCRC_OUT_FLIP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CRC Input Byte's Bit Reversal or Flip Control
    using CRC_IN_FLIP = ftl::mmio::Field<1, 26, eCRC_IN_FLIP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Character Wait Time Counter Enable
    using CWT_EN = ftl::mmio::Field<1, 27, eCWT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // LRC Enable
    using LRC_EN = ftl::mmio::Field<1, 28, eLRC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CRC Enable
    using CRC_EN = ftl::mmio::Field<1, 29, eCRC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit CRC or LRC Enable
    using XMT_CRC_LRC = ftl::mmio::Field<1, 30, eXMT_CRC_LRC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Block Wait Time Counter Enable
    using BWT_EN = ftl::mmio::Field<1, 31, eBWT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x01000006u,
      ftl::mmio::RW,
      typename CtrlFields::IC,
      typename CtrlFields::ICM,
      typename CtrlFields::ANACK,
      typename CtrlFields::ONACK,
      ftl::mmio::Reserved<4, 4>,
      typename CtrlFields::FLSH_RX,
      typename CtrlFields::FLSH_TX,
      typename CtrlFields::SW_RST,
      typename CtrlFields::KILL_CLOCKS,
      typename CtrlFields::DOZE_EN,
      typename CtrlFields::STOP_EN,
      ftl::mmio::Reserved<2, 14>,
      typename CtrlFields::RCV_EN,
      typename CtrlFields::XMT_EN,
      typename CtrlFields::RCVR_11,
      typename CtrlFields::RX_DMA_EN,
      typename CtrlFields::TX_DMA_EN,
      ftl::mmio::Reserved<3, 21>,
      typename CtrlFields::INV_CRC_VAL,
      typename CtrlFields::CRC_OUT_FLIP,
      typename CtrlFields::CRC_IN_FLIP,
      typename CtrlFields::CWT_EN,
      typename CtrlFields::LRC_EN,
      typename CtrlFields::CRC_EN,
      typename CtrlFields::XMT_CRC_LRC,
      typename CtrlFields::BWT_EN> {
    using eIC = typename CtrlFields::eIC;
    using eICM = typename CtrlFields::eICM;
    using eANACK = typename CtrlFields::eANACK;
    using eONACK = typename CtrlFields::eONACK;
    using eFLSH_RX = typename CtrlFields::eFLSH_RX;
    using eFLSH_TX = typename CtrlFields::eFLSH_TX;
    using eSW_RST = typename CtrlFields::eSW_RST;
    using eKILL_CLOCKS = typename CtrlFields::eKILL_CLOCKS;
    using eDOZE_EN = typename CtrlFields::eDOZE_EN;
    using eSTOP_EN = typename CtrlFields::eSTOP_EN;
    using eRCV_EN = typename CtrlFields::eRCV_EN;
    using eXMT_EN = typename CtrlFields::eXMT_EN;
    using eRCVR_11 = typename CtrlFields::eRCVR_11;
    using eRX_DMA_EN = typename CtrlFields::eRX_DMA_EN;
    using eTX_DMA_EN = typename CtrlFields::eTX_DMA_EN;
    using eINV_CRC_VAL = typename CtrlFields::eINV_CRC_VAL;
    using eCRC_OUT_FLIP = typename CtrlFields::eCRC_OUT_FLIP;
    using eCRC_IN_FLIP = typename CtrlFields::eCRC_IN_FLIP;
    using eCWT_EN = typename CtrlFields::eCWT_EN;
    using eLRC_EN = typename CtrlFields::eLRC_EN;
    using eCRC_EN = typename CtrlFields::eCRC_EN;
    using eXMT_CRC_LRC = typename CtrlFields::eXMT_CRC_LRC;
    using eBWT_EN = typename CtrlFields::eBWT_EN;
    using IC = typename CtrlFields::IC;
    using ICM = typename CtrlFields::ICM;
    using ANACK = typename CtrlFields::ANACK;
    using ONACK = typename CtrlFields::ONACK;
    using FLSH_RX = typename CtrlFields::FLSH_RX;
    using FLSH_TX = typename CtrlFields::FLSH_TX;
    using SW_RST = typename CtrlFields::SW_RST;
    using KILL_CLOCKS = typename CtrlFields::KILL_CLOCKS;
    using DOZE_EN = typename CtrlFields::DOZE_EN;
    using STOP_EN = typename CtrlFields::STOP_EN;
    using RCV_EN = typename CtrlFields::RCV_EN;
    using XMT_EN = typename CtrlFields::XMT_EN;
    using RCVR_11 = typename CtrlFields::RCVR_11;
    using RX_DMA_EN = typename CtrlFields::RX_DMA_EN;
    using TX_DMA_EN = typename CtrlFields::TX_DMA_EN;
    using INV_CRC_VAL = typename CtrlFields::INV_CRC_VAL;
    using CRC_OUT_FLIP = typename CtrlFields::CRC_OUT_FLIP;
    using CRC_IN_FLIP = typename CtrlFields::CRC_IN_FLIP;
    using CWT_EN = typename CtrlFields::CWT_EN;
    using LRC_EN = typename CtrlFields::LRC_EN;
    using CRC_EN = typename CtrlFields::CRC_EN;
    using XMT_CRC_LRC = typename CtrlFields::XMT_CRC_LRC;
    using BWT_EN = typename CtrlFields::BWT_EN;
  };

  // Interrupt Mask Register
  struct IntMaskFields {
    enum class eRDT_IM : std::uint32_t {
      // RDTF interrupt enabled
      eint_enabled = 0,
      // RDTF interrupt masked
      eint_masked = 1,
    };

    enum class eTC_IM : std::uint32_t {
      // TCF interrupt enabled
      eint_enabled = 0,
      // TCF interrupt masked
      eint_masked = 1,
    };

    enum class eRFO_IM : std::uint32_t {
      // RFO interrupt enabled
      eint_enabled = 0,
      // RFO interrupt masked
      eint_masked = 1,
    };

    enum class eETC_IM : std::uint32_t {
      // ETC interrupt enabled
      eint_enabled = 0,
      // ETC interrupt masked
      eint_masked = 1,
    };

    enum class eTFE_IM : std::uint32_t {
      // TFE interrupt enabled
      eint_enabled = 0,
      // TFE interrupt masked
      eint_masked = 1,
    };

    enum class eTNACK_IM : std::uint32_t {
      // TNTE interrupt enabled
      eint_enabled = 0,
      // TNTE interrupt masked
      eint_masked = 1,
    };

    enum class eTFF_IM : std::uint32_t {
      // TFF interrupt enabled
      eint_enabled = 0,
      // TFF interrupt masked
      eint_masked = 1,
    };

    enum class eTDT_IM : std::uint32_t {
      // TDTF interrupt enabled
      eint_enabled = 0,
      // TDTF interrupt masked
      eint_masked = 1,
    };

    enum class eGPCNT0_IM : std::uint32_t {
      // GPCNT0_TO interrupt enabled
      eint_enabled = 0,
      // GPCNT0_TO interrupt masked
      eint_masked = 1,
    };

    enum class eCWT_ERR_IM : std::uint32_t {
      // CWT_ERR interrupt enabled
      eint_enabled = 0,
      // CWT_ERR interrupt masked
      eint_disabled = 1,
    };

    enum class eRNACK_IM : std::uint32_t {
      // RTE interrupt enabled
      eint_enabled = 0,
      // RTE interrupt masked
      eint_masked = 1,
    };

    enum class eBWT_ERR_IM : std::uint32_t {
      // BWT_ERR interrupt enabled
      eint_enabled = 0,
      // BWT_ERR interrupt masked
      eint_masked = 1,
    };

    enum class eBGT_ERR_IM : std::uint32_t {
      // BGT_ERR interrupt enabled
      eint_enabled = 0,
      // BGT_ERR interrupt masked
      eint_masked = 1,
    };

    enum class eGPCNT1_IM : std::uint32_t {
      // GPCNT1_TO interrupt enabled
      eint_enabled = 0,
      // GPCNT1_TO interrupt masked
      eint_masked = 1,
    };

    enum class eRX_DATA_IM : std::uint32_t {
      // RX_DATA interrupt enabled
      eint_enabled = 0,
      // RX_DATA interrupt masked
      eint_masked = 1,
    };

    enum class ePEF_IM : std::uint32_t {
      // PEF interrupt enabled
      eint_enabled = 0,
      // PEF interrupt masked
      eint_masked = 1,
    };

    // Receive Data Threshold Interrupt Mask
    using RDT_IM = ftl::mmio::Field<1, 0, eRDT_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Complete Interrupt Mask
    using TC_IM = ftl::mmio::Field<1, 1, eTC_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive FIFO Overflow Interrupt Mask
    using RFO_IM = ftl::mmio::Field<1, 2, eRFO_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Early Transmit Complete Interrupt Mask
    using ETC_IM = ftl::mmio::Field<1, 3, eETC_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit FIFO Empty Interrupt Mask
    using TFE_IM = ftl::mmio::Field<1, 4, eTFE_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit NACK Threshold Interrupt Mask
    using TNACK_IM = ftl::mmio::Field<1, 5, eTNACK_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit FIFO Full Interrupt Mask
    using TFF_IM = ftl::mmio::Field<1, 6, eTFF_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Data Threshold Interrupt Mask
    using TDT_IM = ftl::mmio::Field<1, 7, eTDT_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // General Purpose Timer 0 Timeout Interrupt Mask
    using GPCNT0_IM = ftl::mmio::Field<1, 8, eGPCNT0_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Character Wait Time Error Interrupt Mask
    using CWT_ERR_IM = ftl::mmio::Field<1, 9, eCWT_ERR_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receiver NACK Threshold Interrupt Mask
    using RNACK_IM = ftl::mmio::Field<1, 10, eRNACK_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Block Wait Time Error Interrupt Mask
    using BWT_ERR_IM = ftl::mmio::Field<1, 11, eBWT_ERR_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Block Guard Time Error Interrupt
    using BGT_ERR_IM = ftl::mmio::Field<1, 12, eBGT_ERR_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // General Purpose Counter 1 Timeout Interrupt Mask
    using GPCNT1_IM = ftl::mmio::Field<1, 13, eGPCNT1_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Data Interrupt Mask
    using RX_DATA_IM = ftl::mmio::Field<1, 14, eRX_DATA_IM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Parity Error Interrupt Mask
    using PEF_IM = ftl::mmio::Field<1, 15, ePEF_IM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IntMaskFields

  struct INT_MASK : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename IntMaskFields::RDT_IM,
      typename IntMaskFields::TC_IM,
      typename IntMaskFields::RFO_IM,
      typename IntMaskFields::ETC_IM,
      typename IntMaskFields::TFE_IM,
      typename IntMaskFields::TNACK_IM,
      typename IntMaskFields::TFF_IM,
      typename IntMaskFields::TDT_IM,
      typename IntMaskFields::GPCNT0_IM,
      typename IntMaskFields::CWT_ERR_IM,
      typename IntMaskFields::RNACK_IM,
      typename IntMaskFields::BWT_ERR_IM,
      typename IntMaskFields::BGT_ERR_IM,
      typename IntMaskFields::GPCNT1_IM,
      typename IntMaskFields::RX_DATA_IM,
      typename IntMaskFields::PEF_IM,
      ftl::mmio::Reserved<16, 16>> {
    using eRDT_IM = typename IntMaskFields::eRDT_IM;
    using eTC_IM = typename IntMaskFields::eTC_IM;
    using eRFO_IM = typename IntMaskFields::eRFO_IM;
    using eETC_IM = typename IntMaskFields::eETC_IM;
    using eTFE_IM = typename IntMaskFields::eTFE_IM;
    using eTNACK_IM = typename IntMaskFields::eTNACK_IM;
    using eTFF_IM = typename IntMaskFields::eTFF_IM;
    using eTDT_IM = typename IntMaskFields::eTDT_IM;
    using eGPCNT0_IM = typename IntMaskFields::eGPCNT0_IM;
    using eCWT_ERR_IM = typename IntMaskFields::eCWT_ERR_IM;
    using eRNACK_IM = typename IntMaskFields::eRNACK_IM;
    using eBWT_ERR_IM = typename IntMaskFields::eBWT_ERR_IM;
    using eBGT_ERR_IM = typename IntMaskFields::eBGT_ERR_IM;
    using eGPCNT1_IM = typename IntMaskFields::eGPCNT1_IM;
    using eRX_DATA_IM = typename IntMaskFields::eRX_DATA_IM;
    using ePEF_IM = typename IntMaskFields::ePEF_IM;
    using RDT_IM = typename IntMaskFields::RDT_IM;
    using TC_IM = typename IntMaskFields::TC_IM;
    using RFO_IM = typename IntMaskFields::RFO_IM;
    using ETC_IM = typename IntMaskFields::ETC_IM;
    using TFE_IM = typename IntMaskFields::TFE_IM;
    using TNACK_IM = typename IntMaskFields::TNACK_IM;
    using TFF_IM = typename IntMaskFields::TFF_IM;
    using TDT_IM = typename IntMaskFields::TDT_IM;
    using GPCNT0_IM = typename IntMaskFields::GPCNT0_IM;
    using CWT_ERR_IM = typename IntMaskFields::CWT_ERR_IM;
    using RNACK_IM = typename IntMaskFields::RNACK_IM;
    using BWT_ERR_IM = typename IntMaskFields::BWT_ERR_IM;
    using BGT_ERR_IM = typename IntMaskFields::BGT_ERR_IM;
    using GPCNT1_IM = typename IntMaskFields::GPCNT1_IM;
    using RX_DATA_IM = typename IntMaskFields::RX_DATA_IM;
    using PEF_IM = typename IntMaskFields::PEF_IM;
  };

  // Receiver Threshold Register
  struct RxThdFields {
    // Receiver Data Threshold Value
    using RDT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receiver NACK Threshold Value
    using RNCK_THD = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RxThdFields

  struct RX_THD : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      typename RxThdFields::RDT,
      ftl::mmio::Reserved<4, 4>,
      typename RxThdFields::RNCK_THD,
      ftl::mmio::Reserved<20, 12>> {
    using RDT = typename RxThdFields::RDT;
    using RNCK_THD = typename RxThdFields::RNCK_THD;
  };

  // Transmitter Threshold Register
  struct TxThdFields {
    // Transmitter Data Threshold Value
    using TDT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmitter NACK Threshold Value
    using TNCK_THD = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TxThdFields

  struct TX_THD : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      typename TxThdFields::TDT,
      ftl::mmio::Reserved<4, 4>,
      typename TxThdFields::TNCK_THD,
      ftl::mmio::Reserved<20, 12>> {
    using TDT = typename TxThdFields::TDT;
    using TNCK_THD = typename TxThdFields::TNCK_THD;
  };

  // Receive Status Register
  struct RxStatusFields {
    enum class eRFO : std::uint32_t {
      // No overrun error has occurred
      eno_overrun = 0,
      // A byte was received when the received FIFO was already full
      eoverflow = 1,
    };

    enum class eRX_DATA : std::uint32_t {
      // No new byte is received
      eno_byte_rx = 0,
      // New byte is received ans stored in Receive FIFO
      ebyte_rx = 1,
    };

    enum class eRDTF : std::uint32_t {
      // Number of unread bytes in receive FIFO less than the value set by RDT
      elessthan_rxthresh = 0,
      // Number of unread bytes in receive FIFO greater or than equal to value set by RDT.
      egreater_eq_rxthresh = 1,
    };

    enum class eLRC_OK : std::uint32_t {
      // Current LRC value does not match remainder.
      elrc_notok = 0,
      // Current calculated LRC value matches the expected result (i.e. zero).
      elrc_ok = 1,
    };

    enum class eCRC_OK : std::uint32_t {
      // Current CRC value does not match remainder.
      ecrc_notok = 0,
      // Current calculated CRC value matches the expected result.
      ecrc_ok = 1,
    };

    enum class eCWT_ERR : std::uint32_t {
      // No CWT violation has occurred
      eno_cwt_err = 0,
      // Time between two consecutive characters has exceeded the value in CWT_VAL.
      ecwt_err = 1,
    };

    enum class eRTE : std::uint32_t {
      // Number of NACKs generated by the receiver is less than the value programmed in RNCK_THD
      elessthan_nackthresh = 0,
      // Number of NACKs generated by the receiver is equal to the value programmed in RNCK_THD
      egreater_eq_nackthresh = 1,
    };

    enum class eBWT_ERR : std::uint32_t {
      // Block wait time not exceeded
      ebwt_err_no = 0,
      // Block wait time was exceeded
      ebwt_err_yes = 1,
    };

    enum class eBGT_ERR : std::uint32_t {
      // Block guard time was sufficient
      ebgt_err_sufficient = 0,
      // Block guard time was too small
      ebgt_err_toosmall = 1,
    };

    enum class ePEF : std::uint32_t {
      // No parity error detected
      eno_parity_detect = 0,
      // Parity error detected
      eparity_detect = 1,
    };

    enum class eFEF : std::uint32_t {
      // No frame error detected
      eno_fef_detect = 0,
      // Frame error detected
      efef_detect = 1,
    };

    enum class eRX_CNT : std::uint32_t {
      // FIFO is emtpy
      efifo_empty = 0,
    };

    // Receive FIFO Overflow Flag
    using RFO = ftl::mmio::Field<1, 0, eRFO, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Receive Data Interrupt Flag
    using RX_DATA = ftl::mmio::Field<1, 4, eRX_DATA, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Receive Data Threshold Interrupt Flag
    using RDTF = ftl::mmio::Field<1, 5, eRDTF, ftl::mmio::RO, ftl::mmio::Normal>;
    // LRC Check OK Flag
    using LRC_OK = ftl::mmio::Field<1, 6, eLRC_OK, ftl::mmio::RO, ftl::mmio::Normal>;
    // CRC Check OK Flag
    using CRC_OK = ftl::mmio::Field<1, 7, eCRC_OK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Character Wait Time Error Flag
    using CWT_ERR = ftl::mmio::Field<1, 8, eCWT_ERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Received NACK Threshold Error Flag
    using RTE = ftl::mmio::Field<1, 9, eRTE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Block Wait Time Error Flag
    using BWT_ERR = ftl::mmio::Field<1, 10, eBWT_ERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Block Guard Time Error Flag
    using BGT_ERR = ftl::mmio::Field<1, 11, eBGT_ERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Parity Error Flag
    using PEF = ftl::mmio::Field<1, 12, ePEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Frame Error Flag
    using FEF = ftl::mmio::Field<1, 13, eFEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Receive FIFO Write Pointer Value
    using RX_WPTR = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Receive FIFO Byte Count
    using RX_CNT = ftl::mmio::Field<4, 24, eRX_CNT, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RxStatusFields

  struct RX_STATUS : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RxStatusFields::RFO,
      ftl::mmio::Reserved<3, 1>,
      typename RxStatusFields::RX_DATA,
      typename RxStatusFields::RDTF,
      typename RxStatusFields::LRC_OK,
      typename RxStatusFields::CRC_OK,
      typename RxStatusFields::CWT_ERR,
      typename RxStatusFields::RTE,
      typename RxStatusFields::BWT_ERR,
      typename RxStatusFields::BGT_ERR,
      typename RxStatusFields::PEF,
      typename RxStatusFields::FEF,
      ftl::mmio::Reserved<2, 14>,
      typename RxStatusFields::RX_WPTR,
      ftl::mmio::Reserved<4, 20>,
      typename RxStatusFields::RX_CNT,
      ftl::mmio::Reserved<4, 28>> {
    using eRFO = typename RxStatusFields::eRFO;
    using eRX_DATA = typename RxStatusFields::eRX_DATA;
    using eRDTF = typename RxStatusFields::eRDTF;
    using eLRC_OK = typename RxStatusFields::eLRC_OK;
    using eCRC_OK = typename RxStatusFields::eCRC_OK;
    using eCWT_ERR = typename RxStatusFields::eCWT_ERR;
    using eRTE = typename RxStatusFields::eRTE;
    using eBWT_ERR = typename RxStatusFields::eBWT_ERR;
    using eBGT_ERR = typename RxStatusFields::eBGT_ERR;
    using ePEF = typename RxStatusFields::ePEF;
    using eFEF = typename RxStatusFields::eFEF;
    using eRX_CNT = typename RxStatusFields::eRX_CNT;
    using RFO = typename RxStatusFields::RFO;
    using RX_DATA = typename RxStatusFields::RX_DATA;
    using RDTF = typename RxStatusFields::RDTF;
    using LRC_OK = typename RxStatusFields::LRC_OK;
    using CRC_OK = typename RxStatusFields::CRC_OK;
    using CWT_ERR = typename RxStatusFields::CWT_ERR;
    using RTE = typename RxStatusFields::RTE;
    using BWT_ERR = typename RxStatusFields::BWT_ERR;
    using BGT_ERR = typename RxStatusFields::BGT_ERR;
    using PEF = typename RxStatusFields::PEF;
    using FEF = typename RxStatusFields::FEF;
    using RX_WPTR = typename RxStatusFields::RX_WPTR;
    using RX_CNT = typename RxStatusFields::RX_CNT;
  };

  // Transmitter Status Register
  struct TxStatusFields {
    enum class eTNTE : std::uint32_t {
      // Transmit NACK threshold has not been reached
      elessthan_nackthresh = 0,
      // Transmit NACK threshold reached; transmitter frozen
      egreater_eq_nackthresh = 1,
    };

    enum class eTFE : std::uint32_t {
      // Transmit FIFO is not empty
      efifo_empty = 0,
      // Transmit FIFO is empty
      efifo_notempty = 1,
    };

    enum class eETCF : std::uint32_t {
      // Transmit pending or in progress
      eetx_pending = 0,
      // Transmit complete
      eetx_complete = 1,
    };

    enum class eTCF : std::uint32_t {
      // Transmit pending or in progress
      etx_pending = 0,
      // Transmit complete
      etx_complete = 1,
    };

    enum class eTFF : std::uint32_t {
      // Transmit FIFO Full condition has not occurred
      etx_fifo_notfull = 0,
      // A Transmit FIFO Full condition has occurred
      etx_fifo_full = 1,
    };

    enum class eTDTF : std::uint32_t {
      // Number of bytes in FIFO is greater than TDT, or bit has been cleared
      elessthan_txthresh = 0,
      // Number of bytes in FIFO is less than or equal to TDT
      egreater_eq_txthresh = 1,
    };

    enum class eGPCNT0_TO : std::uint32_t {
      // GPCNT0 time not reached, or bit has been cleared.
      egpcnt0_to_notreached = 0,
      // General Purpose counter has reached the GPCNT0 value
      egpcnt0_to_reached = 1,
    };

    enum class eGPCNT1_TO : std::uint32_t {
      // GPCNT1 time not reached, or bit has been cleared.
      egpcnt1_to_notreached = 0,
      // General Purpose counter has reached the GPCNT1 value
      egpcnt1_to_reached = 1,
    };

    enum class eTX_CNT : std::uint32_t {
      // FIFO is emtpy
      efifo_empty = 0,
    };

    // Transmit NACK Threshold Error Flag
    using TNTE = ftl::mmio::Field<1, 0, eTNTE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transmit FIFO Empty Flag
    using TFE = ftl::mmio::Field<1, 3, eTFE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Early Transmit Complete Flag
    using ETCF = ftl::mmio::Field<1, 4, eETCF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transmit Complete Flag
    using TCF = ftl::mmio::Field<1, 5, eTCF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transmit FIFO Full Flag
    using TFF = ftl::mmio::Field<1, 6, eTFF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transmit Data Threshold Flag
    using TDTF = ftl::mmio::Field<1, 7, eTDTF, ftl::mmio::RO, ftl::mmio::Normal>;
    // General Purpose Counter 0 Timeout Flag
    using GPCNT0_TO = ftl::mmio::Field<1, 8, eGPCNT0_TO, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // General Purpose Counter 1 Timeout Flag
    using GPCNT1_TO = ftl::mmio::Field<1, 9, eGPCNT1_TO, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transmit FIFO Read Pointer
    using TX_RPTR = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Transmit FIFO Byte Count
    using TX_CNT = ftl::mmio::Field<4, 24, eTX_CNT, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct TxStatusFields

  struct TX_STATUS : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x000000B8u,
      ftl::mmio::RW,
      typename TxStatusFields::TNTE,
      ftl::mmio::Reserved<2, 1>,
      typename TxStatusFields::TFE,
      typename TxStatusFields::ETCF,
      typename TxStatusFields::TCF,
      typename TxStatusFields::TFF,
      typename TxStatusFields::TDTF,
      typename TxStatusFields::GPCNT0_TO,
      typename TxStatusFields::GPCNT1_TO,
      ftl::mmio::Reserved<6, 10>,
      typename TxStatusFields::TX_RPTR,
      ftl::mmio::Reserved<4, 20>,
      typename TxStatusFields::TX_CNT,
      ftl::mmio::Reserved<4, 28>> {
    using eTNTE = typename TxStatusFields::eTNTE;
    using eTFE = typename TxStatusFields::eTFE;
    using eETCF = typename TxStatusFields::eETCF;
    using eTCF = typename TxStatusFields::eTCF;
    using eTFF = typename TxStatusFields::eTFF;
    using eTDTF = typename TxStatusFields::eTDTF;
    using eGPCNT0_TO = typename TxStatusFields::eGPCNT0_TO;
    using eGPCNT1_TO = typename TxStatusFields::eGPCNT1_TO;
    using eTX_CNT = typename TxStatusFields::eTX_CNT;
    using TNTE = typename TxStatusFields::TNTE;
    using TFE = typename TxStatusFields::TFE;
    using ETCF = typename TxStatusFields::ETCF;
    using TCF = typename TxStatusFields::TCF;
    using TFF = typename TxStatusFields::TFF;
    using TDTF = typename TxStatusFields::TDTF;
    using GPCNT0_TO = typename TxStatusFields::GPCNT0_TO;
    using GPCNT1_TO = typename TxStatusFields::GPCNT1_TO;
    using TX_RPTR = typename TxStatusFields::TX_RPTR;
    using TX_CNT = typename TxStatusFields::TX_CNT;
  };

  // Port Control and Status Register
  struct PcsrFields {
    enum class eSAPD : std::uint32_t {
      // Auto power down disabled
      edisabled = 0,
      // Auto power down enabled
      eenabled = 1,
    };

    enum class eSVCC_EN : std::uint32_t {
      // Smart Card Voltage disabled
      edisabled = 0,
      // Smart Card Voltage enabled
      eenabled = 1,
    };

    enum class eVCCENP : std::uint32_t {
      // SVCC_EN is active high. Polarity of SVCC_EN is unchanged.
      eactive_high = 0,
      // SVCC_EN is active low. Polarity of SVCC_EN is inverted.
      eactive_low = 1,
    };

    enum class eSRST : std::uint32_t {
      // Smart Card Reset is asserted
      easserted = 0,
      // Smart Card Reset is de-asserted
      ede_asserted = 1,
    };

    enum class eSCEN : std::uint32_t {
      // Smart Card Clock Disabled
      edisabled = 0,
      // Smart Card Clock Enabled
      eenabled = 1,
    };

    enum class eSCSP : std::uint32_t {
      // Clock is logic 0 when stopped by SCEN
      escsp_logic0 = 0,
      // Clock is logic 1 when stopped by SCEN
      escsp_logic1 = 1,
    };

    enum class eSPD : std::uint32_t {
      // No effect
      eno_effect = 0,
      // Start Auto Powerdown or Power Down is in progress
      epowerdown = 1,
    };

    enum class eSPDIM : std::uint32_t {
      // SIM presence detect interrupt is enabled
      eint_enabled = 0,
      // SIM presence detect interrupt is masked
      eint_masked = 1,
    };

    enum class eSPDIF : std::uint32_t {
      // No insertion or removal of Smart Card detected on Port
      eno_insert_remove_detect = 0,
      // Insertion or removal of Smart Card detected on Port
      einsert_remove_detect = 1,
    };

    enum class eSPDP : std::uint32_t {
      // SIM Presence Detect pin is logic low
      elogic_low = 0,
      // SIM Presence Detectpin is logic high
      elogic_high = 1,
    };

    enum class eSPDES : std::uint32_t {
      // Falling edge on the pin
      efalling_edge = 0,
      // Rising edge on the pin
      erising_edge = 1,
    };

    // Auto Power Down Enable
    using SAPD = ftl::mmio::Field<1, 0, eSAPD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Vcc Enable for Smart Card
    using SVCC_EN = ftl::mmio::Field<1, 1, eSVCC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // VCC Enable Polarity Control
    using VCCENP = ftl::mmio::Field<1, 2, eVCCENP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset to Smart Card
    using SRST = ftl::mmio::Field<1, 3, eSRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock Enable for Smart Card
    using SCEN = ftl::mmio::Field<1, 4, eSCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Smart Card Clock Stop Polarity
    using SCSP = ftl::mmio::Field<1, 5, eSCSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto Power Down Control
    using SPD = ftl::mmio::Field<1, 7, eSPD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Smart Card Presence Detect Interrupt Mask
    using SPDIM = ftl::mmio::Field<1, 24, eSPDIM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Smart Card Presence Detect Interrupt Flag
    using SPDIF = ftl::mmio::Field<1, 25, eSPDIF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Smart Card Presence Detect Pin Status
    using SPDP = ftl::mmio::Field<1, 26, eSPDP, ftl::mmio::RO, ftl::mmio::Normal>;
    // SIM Presence Detect Edge Select
    using SPDES = ftl::mmio::Field<1, 27, eSPDES, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcsrFields

  struct PCSR : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x01000000u,
      ftl::mmio::RW,
      typename PcsrFields::SAPD,
      typename PcsrFields::SVCC_EN,
      typename PcsrFields::VCCENP,
      typename PcsrFields::SRST,
      typename PcsrFields::SCEN,
      typename PcsrFields::SCSP,
      ftl::mmio::Reserved<1, 6>,
      typename PcsrFields::SPD,
      ftl::mmio::Reserved<16, 8>,
      typename PcsrFields::SPDIM,
      typename PcsrFields::SPDIF,
      typename PcsrFields::SPDP,
      typename PcsrFields::SPDES,
      ftl::mmio::Reserved<4, 28>> {
    using eSAPD = typename PcsrFields::eSAPD;
    using eSVCC_EN = typename PcsrFields::eSVCC_EN;
    using eVCCENP = typename PcsrFields::eVCCENP;
    using eSRST = typename PcsrFields::eSRST;
    using eSCEN = typename PcsrFields::eSCEN;
    using eSCSP = typename PcsrFields::eSCSP;
    using eSPD = typename PcsrFields::eSPD;
    using eSPDIM = typename PcsrFields::eSPDIM;
    using eSPDIF = typename PcsrFields::eSPDIF;
    using eSPDP = typename PcsrFields::eSPDP;
    using eSPDES = typename PcsrFields::eSPDES;
    using SAPD = typename PcsrFields::SAPD;
    using SVCC_EN = typename PcsrFields::SVCC_EN;
    using VCCENP = typename PcsrFields::VCCENP;
    using SRST = typename PcsrFields::SRST;
    using SCEN = typename PcsrFields::SCEN;
    using SCSP = typename PcsrFields::SCSP;
    using SPD = typename PcsrFields::SPD;
    using SPDIM = typename PcsrFields::SPDIM;
    using SPDIF = typename PcsrFields::SPDIF;
    using SPDP = typename PcsrFields::SPDP;
    using SPDES = typename PcsrFields::SPDES;
  };

  // Receive Data Read Buffer
  struct RxBufFields {
    // Receive Data Byte Read
    using RX_BYTE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RxBufFields

  struct RX_BUF : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RxBufFields::RX_BYTE,
      ftl::mmio::Reserved<24, 8>> {
    using RX_BYTE = typename RxBufFields::RX_BYTE;
  };

  // Transmit Data Buffer
  struct TxBufFields {
    // Transmit Data Byte
    using TX_BYTE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TxBufFields

  struct TX_BUF : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TxBufFields::TX_BYTE,
      ftl::mmio::Reserved<24, 8>> {
    using TX_BYTE = typename TxBufFields::TX_BYTE;
  };

  // Transmitter Guard ETU Value Register
  struct TxGetuFields {
    // Transmitter Guard Time Value in ETU
    using GETU = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TxGetuFields

  struct TX_GETU : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TxGetuFields::GETU,
      ftl::mmio::Reserved<24, 8>> {
    using GETU = typename TxGetuFields::GETU;
  };

  // Character Wait Time Value Register
  struct CwtValFields {
    // Character Wait Time Value
    using CWT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CwtValFields

  struct CWT_VAL : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CwtValFields::CWT,
      ftl::mmio::Reserved<16, 16>> {
    using CWT = typename CwtValFields::CWT;
  };

  // Block Wait Time Value Register
  struct BwtValFields {
    // Block Wait Time Value
    using BWT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct BwtValFields

  struct BWT_VAL : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0xFFFFFFFFu,
      ftl::mmio::RW,
      typename BwtValFields::BWT> {
    using BWT = typename BwtValFields::BWT;
  };

  // Block Guard Time Value Register
  struct BgtValFields {
    // Block Guard Time Value
    using BGT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct BgtValFields

  struct BGT_VAL : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename BgtValFields::BGT,
      ftl::mmio::Reserved<16, 16>> {
    using BGT = typename BgtValFields::BGT;
  };

  // General Purpose Counter 0 Timeout Value Register
  struct Gpcnt0ValFields {
    // General Purpose Counter 0 Timeout Value
    using GPCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpcnt0ValFields

  struct GPCNT0_VAL : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename Gpcnt0ValFields::GPCNT0,
      ftl::mmio::Reserved<16, 16>> {
    using GPCNT0 = typename Gpcnt0ValFields::GPCNT0;
  };

  // General Purpose Counter 1 Timeout Value
  struct Gpcnt1ValFields {
    // General Purpose Counter 1 Timeout Value
    using GPCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpcnt1ValFields

  struct GPCNT1_VAL : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename Gpcnt1ValFields::GPCNT1,
      ftl::mmio::Reserved<16, 16>> {
    using GPCNT1 = typename Gpcnt1ValFields::GPCNT1;
  };

};

}  // namespace regs