#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PDM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Pdm {
  // PDM Control register 1
  struct Ctrl1Fields {
    enum class eERREN : std::uint32_t {
      // Error Interrupts disabled
      edisabled = 0,
      // Error Interrupts enabled
      eenabled = 1,
    };

    enum class eDISEL : std::uint32_t {
      // DMA and interrupt requests disabled
      eall_disabled = 0,
      // DMA requests enabled
      edmareq_enabled = 1,
      // Interrupt requests enabled
      eintreq_enabled = 2,
    };

    enum class eDBGE : std::uint32_t {
      // Disabled after completing the current frame
      edisabled = 0,
      // Enabled
      eenabled = 1,
    };

    enum class eSRES : std::uint32_t {
      // No action
      eno_action = 0,
      // Software reset
      esw_reset = 1,
    };

    enum class eDBG : std::uint32_t {
      // Normal Mode
      enormal = 0,
      // Debug Mode
      edebug = 1,
    };

    enum class ePDMIEN : std::uint32_t {
      // PDM stopped
      estopped = 0,
      // PDM operation started
      estarted = 1,
    };

    enum class eMDIS : std::uint32_t {
      // Normal Mode
      enormal = 0,
      // Disable/Low Leakage Mode
      elow_leakage = 1,
    };

    // Channel 0 Enable
    using CH0EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 1 Enable
    using CH1EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 2 Enable
    using CH2EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 3 Enable
    using CH3EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 4 Enable
    using CH4EN = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 5 Enable
    using CH5EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 6 Enable
    using CH6EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 7 Enable
    using CH7EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Error Interruption Enable
    using ERREN = ftl::mmio::Field<1, 23, eERREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Interrupt Selection
    using DISEL = ftl::mmio::Field<2, 24, eDISEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Module Enable in Debug
    using DBGE = ftl::mmio::Field<1, 26, eDBGE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software-reset bit
    using SRES = ftl::mmio::Field<1, 27, eSRES, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Mode
    using DBG = ftl::mmio::Field<1, 28, eDBG, ftl::mmio::RW, ftl::mmio::Normal>;
    // PDM Enable
    using PDMIEN = ftl::mmio::Field<1, 29, ePDMIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DOZE enable
    using DOZEN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Module Disable
    using MDIS = ftl::mmio::Field<1, 31, eMDIS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl1Fields

  struct CTRL_1 : ftl::mmio::Register<
      0x40C20000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl1Fields::CH0EN,
      Ctrl1Fields::CH1EN,
      Ctrl1Fields::CH2EN,
      Ctrl1Fields::CH3EN,
      Ctrl1Fields::CH4EN,
      Ctrl1Fields::CH5EN,
      Ctrl1Fields::CH6EN,
      Ctrl1Fields::CH7EN,
      ftl::mmio::Reserved<15, 8>,
      Ctrl1Fields::ERREN,
      Ctrl1Fields::DISEL,
      Ctrl1Fields::DBGE,
      Ctrl1Fields::SRES,
      Ctrl1Fields::DBG,
      Ctrl1Fields::PDMIEN,
      Ctrl1Fields::DOZEN,
      Ctrl1Fields::MDIS> {
    using eERREN = Ctrl1Fields::eERREN;
    using eDISEL = Ctrl1Fields::eDISEL;
    using eDBGE = Ctrl1Fields::eDBGE;
    using eSRES = Ctrl1Fields::eSRES;
    using eDBG = Ctrl1Fields::eDBG;
    using ePDMIEN = Ctrl1Fields::ePDMIEN;
    using eMDIS = Ctrl1Fields::eMDIS;
    using CH0EN = Ctrl1Fields::CH0EN;
    using CH1EN = Ctrl1Fields::CH1EN;
    using CH2EN = Ctrl1Fields::CH2EN;
    using CH3EN = Ctrl1Fields::CH3EN;
    using CH4EN = Ctrl1Fields::CH4EN;
    using CH5EN = Ctrl1Fields::CH5EN;
    using CH6EN = Ctrl1Fields::CH6EN;
    using CH7EN = Ctrl1Fields::CH7EN;
    using ERREN = Ctrl1Fields::ERREN;
    using DISEL = Ctrl1Fields::DISEL;
    using DBGE = Ctrl1Fields::DBGE;
    using SRES = Ctrl1Fields::SRES;
    using DBG = Ctrl1Fields::DBG;
    using PDMIEN = Ctrl1Fields::PDMIEN;
    using DOZEN = Ctrl1Fields::DOZEN;
    using MDIS = Ctrl1Fields::MDIS;
  };

  // PDM Control register 2
  struct Ctrl2Fields {
    enum class eQSEL : std::uint32_t {
      // Medium quality mode
      emq_mode = 0,
      // High quality mode
      ehq_mode = 1,
      // Very low quality 2 mode
      evlq2_mode = 4,
      // Very low quality 1 mode
      evlq1_mode = 5,
      // Very low quality 0 mode
      evlq0_mode = 6,
      // Low quality mode
      elq_mode = 7,
    };

    // Clock Divider
    using CLKDIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CIC Decimation Rate
    using CICOSR = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Quality Mode
    using QSEL = ftl::mmio::Field<3, 25, eQSEL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl2Fields

  struct CTRL_2 : ftl::mmio::Register<
      0x40C20004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl2Fields::CLKDIV,
      ftl::mmio::Reserved<8, 8>,
      Ctrl2Fields::CICOSR,
      ftl::mmio::Reserved<5, 20>,
      Ctrl2Fields::QSEL,
      ftl::mmio::Reserved<4, 28>> {
    using eQSEL = Ctrl2Fields::eQSEL;
    using CLKDIV = Ctrl2Fields::CLKDIV;
    using CICOSR = Ctrl2Fields::CICOSR;
    using QSEL = Ctrl2Fields::QSEL;
  };

  // PDM Status register
  struct StatFields {
    enum class eCH0F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eCH1F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eCH2F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eCH3F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eCH4F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eCH5F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eCH6F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eCH7F : std::uint32_t {
      // Channel's FIFO did not reach the number of elements configured in watermark bit-field
      ewm_notreached = 0,
      // Channel's FIFO reached the number of elements configured in watermark bit-field
      ewm_reached = 1,
    };

    enum class eLOWFREQF : std::uint32_t {
      // CLKDIV value is OK
      eclkdiv_ok = 0,
      // CLKDIV value is too low
      eclkdiv_low = 1,
    };

    enum class eFIR_RDY : std::uint32_t {
      // Filter data is not reliable
      enot_reliable = 0,
      // Filter data is reliable
      ereliable = 1,
    };

    enum class eBSY_FIL : std::uint32_t {
      // PDM is stopped
      estopped = 0,
      // PDM is running
      erunning = 1,
    };

    // Channel 0 Output Data Flag
    using CH0F = ftl::mmio::Field<1, 0, eCH0F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 1 Output Data Flag
    using CH1F = ftl::mmio::Field<1, 1, eCH1F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 2 Output Data Flag
    using CH2F = ftl::mmio::Field<1, 2, eCH2F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 3 Output Data Flag
    using CH3F = ftl::mmio::Field<1, 3, eCH3F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 4 Output Data Flag
    using CH4F = ftl::mmio::Field<1, 4, eCH4F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 5 Output Data Flag
    using CH5F = ftl::mmio::Field<1, 5, eCH5F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 6 Output Data Flag
    using CH6F = ftl::mmio::Field<1, 6, eCH6F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 7 Output Data Flag
    using CH7F = ftl::mmio::Field<1, 7, eCH7F, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Low Frequency Flag
    using LOWFREQF = ftl::mmio::Field<1, 29, eLOWFREQF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Filter Data Ready
    using FIR_RDY = ftl::mmio::Field<1, 30, eFIR_RDY, ftl::mmio::RO, ftl::mmio::Normal>;
    // Busy Flag
    using BSY_FIL = ftl::mmio::Field<1, 31, eBSY_FIL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct StatFields

  struct STAT : ftl::mmio::Register<
      0x40C20008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatFields::CH0F,
      StatFields::CH1F,
      StatFields::CH2F,
      StatFields::CH3F,
      StatFields::CH4F,
      StatFields::CH5F,
      StatFields::CH6F,
      StatFields::CH7F,
      ftl::mmio::Reserved<21, 8>,
      StatFields::LOWFREQF,
      StatFields::FIR_RDY,
      StatFields::BSY_FIL> {
    using eCH0F = StatFields::eCH0F;
    using eCH1F = StatFields::eCH1F;
    using eCH2F = StatFields::eCH2F;
    using eCH3F = StatFields::eCH3F;
    using eCH4F = StatFields::eCH4F;
    using eCH5F = StatFields::eCH5F;
    using eCH6F = StatFields::eCH6F;
    using eCH7F = StatFields::eCH7F;
    using eLOWFREQF = StatFields::eLOWFREQF;
    using eFIR_RDY = StatFields::eFIR_RDY;
    using eBSY_FIL = StatFields::eBSY_FIL;
    using CH0F = StatFields::CH0F;
    using CH1F = StatFields::CH1F;
    using CH2F = StatFields::CH2F;
    using CH3F = StatFields::CH3F;
    using CH4F = StatFields::CH4F;
    using CH5F = StatFields::CH5F;
    using CH6F = StatFields::CH6F;
    using CH7F = StatFields::CH7F;
    using LOWFREQF = StatFields::LOWFREQF;
    using FIR_RDY = StatFields::FIR_RDY;
    using BSY_FIL = StatFields::BSY_FIL;
  };

  // PDM FIFO Control register
  struct FifoCtrlFields {
    // FIFO Watermark Control
    using FIFOWMK = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FifoCtrlFields

  struct FIFO_CTRL : ftl::mmio::Register<
      0x40C20010u,
      std::uint32_t,
      0x00000007u,
      ftl::mmio::RW,
      FifoCtrlFields::FIFOWMK,
      ftl::mmio::Reserved<29, 3>> {
    using FIFOWMK = FifoCtrlFields::FIFOWMK;
  };

  // PDM FIFO Status register
  struct FifoStatFields {
    enum class eFIFOOVF0 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOOVF1 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOOVF2 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOOVF3 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOOVF4 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOOVF5 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOOVF6 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOOVF7 : std::uint32_t {
      // No exception by FIFO overflow
      eno_exception = 0,
      // Exception by FIFO overflow
      eexception = 1,
    };

    enum class eFIFOUND0 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    enum class eFIFOUND1 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    enum class eFIFOUND2 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    enum class eFIFOUND3 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    enum class eFIFOUND4 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    enum class eFIFOUND5 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    enum class eFIFOUND6 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    enum class eFIFOUND7 : std::uint32_t {
      // No exception by FIFO Underflow
      eno_exception = 0,
      // Exception by FIFO underflow
      eexception = 1,
    };

    // FIFO Overflow Exception flag for Channel 0
    using FIFOOVF0 = ftl::mmio::Field<1, 0, eFIFOOVF0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Overflow Exception flag for Channel 1
    using FIFOOVF1 = ftl::mmio::Field<1, 1, eFIFOOVF1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Overflow Exception flag for Channel 2
    using FIFOOVF2 = ftl::mmio::Field<1, 2, eFIFOOVF2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Overflow Exception flag for Channel 3
    using FIFOOVF3 = ftl::mmio::Field<1, 3, eFIFOOVF3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Overflow Exception flag for Channel 4
    using FIFOOVF4 = ftl::mmio::Field<1, 4, eFIFOOVF4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Overflow Exception flag for Channel 5
    using FIFOOVF5 = ftl::mmio::Field<1, 5, eFIFOOVF5, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Overflow Exception flag for Channel 6
    using FIFOOVF6 = ftl::mmio::Field<1, 6, eFIFOOVF6, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Overflow Exception flag for Channel 7
    using FIFOOVF7 = ftl::mmio::Field<1, 7, eFIFOOVF7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 0
    using FIFOUND0 = ftl::mmio::Field<1, 8, eFIFOUND0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 1
    using FIFOUND1 = ftl::mmio::Field<1, 9, eFIFOUND1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 2
    using FIFOUND2 = ftl::mmio::Field<1, 10, eFIFOUND2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 3
    using FIFOUND3 = ftl::mmio::Field<1, 11, eFIFOUND3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 4
    using FIFOUND4 = ftl::mmio::Field<1, 12, eFIFOUND4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 5
    using FIFOUND5 = ftl::mmio::Field<1, 13, eFIFOUND5, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 6
    using FIFOUND6 = ftl::mmio::Field<1, 14, eFIFOUND6, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FIFO Underflow Exception flag for Channel 7
    using FIFOUND7 = ftl::mmio::Field<1, 15, eFIFOUND7, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct FifoStatFields

  struct FIFO_STAT : ftl::mmio::Register<
      0x40C20014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      FifoStatFields::FIFOOVF0,
      FifoStatFields::FIFOOVF1,
      FifoStatFields::FIFOOVF2,
      FifoStatFields::FIFOOVF3,
      FifoStatFields::FIFOOVF4,
      FifoStatFields::FIFOOVF5,
      FifoStatFields::FIFOOVF6,
      FifoStatFields::FIFOOVF7,
      FifoStatFields::FIFOUND0,
      FifoStatFields::FIFOUND1,
      FifoStatFields::FIFOUND2,
      FifoStatFields::FIFOUND3,
      FifoStatFields::FIFOUND4,
      FifoStatFields::FIFOUND5,
      FifoStatFields::FIFOUND6,
      FifoStatFields::FIFOUND7,
      ftl::mmio::Reserved<16, 16>> {
    using eFIFOOVF0 = FifoStatFields::eFIFOOVF0;
    using eFIFOOVF1 = FifoStatFields::eFIFOOVF1;
    using eFIFOOVF2 = FifoStatFields::eFIFOOVF2;
    using eFIFOOVF3 = FifoStatFields::eFIFOOVF3;
    using eFIFOOVF4 = FifoStatFields::eFIFOOVF4;
    using eFIFOOVF5 = FifoStatFields::eFIFOOVF5;
    using eFIFOOVF6 = FifoStatFields::eFIFOOVF6;
    using eFIFOOVF7 = FifoStatFields::eFIFOOVF7;
    using eFIFOUND0 = FifoStatFields::eFIFOUND0;
    using eFIFOUND1 = FifoStatFields::eFIFOUND1;
    using eFIFOUND2 = FifoStatFields::eFIFOUND2;
    using eFIFOUND3 = FifoStatFields::eFIFOUND3;
    using eFIFOUND4 = FifoStatFields::eFIFOUND4;
    using eFIFOUND5 = FifoStatFields::eFIFOUND5;
    using eFIFOUND6 = FifoStatFields::eFIFOUND6;
    using eFIFOUND7 = FifoStatFields::eFIFOUND7;
    using FIFOOVF0 = FifoStatFields::FIFOOVF0;
    using FIFOOVF1 = FifoStatFields::FIFOOVF1;
    using FIFOOVF2 = FifoStatFields::FIFOOVF2;
    using FIFOOVF3 = FifoStatFields::FIFOOVF3;
    using FIFOOVF4 = FifoStatFields::FIFOOVF4;
    using FIFOOVF5 = FifoStatFields::FIFOOVF5;
    using FIFOOVF6 = FifoStatFields::FIFOOVF6;
    using FIFOOVF7 = FifoStatFields::FIFOOVF7;
    using FIFOUND0 = FifoStatFields::FIFOUND0;
    using FIFOUND1 = FifoStatFields::FIFOUND1;
    using FIFOUND2 = FifoStatFields::FIFOUND2;
    using FIFOUND3 = FifoStatFields::FIFOUND3;
    using FIFOUND4 = FifoStatFields::FIFOUND4;
    using FIFOUND5 = FifoStatFields::FIFOUND5;
    using FIFOUND6 = FifoStatFields::FIFOUND6;
    using FIFOUND7 = FifoStatFields::FIFOUND7;
  };

  // PDM Output Result Register
  struct DatachFields {
    // Channel n Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct DatachFields

  template<std::uint32_t Index>
  struct DATACH : ftl::mmio::Register<
      0x40C20024u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      DatachFields::DATA> {
    static_assert(Index < 8u, "DATACH: Index out of range");
    using DATA = DatachFields::DATA;
  };

  // PDM DC Remover Control register
  struct DcCtrlFields {
    enum class eDCCONFIG0 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    enum class eDCCONFIG1 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    enum class eDCCONFIG2 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    enum class eDCCONFIG3 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    enum class eDCCONFIG4 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    enum class eDCCONFIG5 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    enum class eDCCONFIG6 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    enum class eDCCONFIG7 : std::uint32_t {
      // DC Remover cut-off at 21Hz
      edc_rem_21Hz = 0,
      // DC Remover cut-off at 83Hz
      edc_rem_83Hz = 1,
      // DC Remover cut-off at 152Hz
      edc_rem_152Hz = 2,
      // DC Remover is bypassed
      edc_rem_bypass = 3,
    };

    // Channel 0 DC Remover Configuration
    using DCCONFIG0 = ftl::mmio::Field<2, 0, eDCCONFIG0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 1 DC Remover Configuration
    using DCCONFIG1 = ftl::mmio::Field<2, 2, eDCCONFIG1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 2 DC Remover Configuration
    using DCCONFIG2 = ftl::mmio::Field<2, 4, eDCCONFIG2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 3 DC Remover Configuration
    using DCCONFIG3 = ftl::mmio::Field<2, 6, eDCCONFIG3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 4 DC Remover Configuration
    using DCCONFIG4 = ftl::mmio::Field<2, 8, eDCCONFIG4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 5 DC Remover Configuration
    using DCCONFIG5 = ftl::mmio::Field<2, 10, eDCCONFIG5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 6 DC Remover Configuration
    using DCCONFIG6 = ftl::mmio::Field<2, 12, eDCCONFIG6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 7 DC Remover Configuration
    using DCCONFIG7 = ftl::mmio::Field<2, 14, eDCCONFIG7, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DcCtrlFields

  struct DC_CTRL : ftl::mmio::Register<
      0x40C20064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DcCtrlFields::DCCONFIG0,
      DcCtrlFields::DCCONFIG1,
      DcCtrlFields::DCCONFIG2,
      DcCtrlFields::DCCONFIG3,
      DcCtrlFields::DCCONFIG4,
      DcCtrlFields::DCCONFIG5,
      DcCtrlFields::DCCONFIG6,
      DcCtrlFields::DCCONFIG7,
      ftl::mmio::Reserved<16, 16>> {
    using eDCCONFIG0 = DcCtrlFields::eDCCONFIG0;
    using eDCCONFIG1 = DcCtrlFields::eDCCONFIG1;
    using eDCCONFIG2 = DcCtrlFields::eDCCONFIG2;
    using eDCCONFIG3 = DcCtrlFields::eDCCONFIG3;
    using eDCCONFIG4 = DcCtrlFields::eDCCONFIG4;
    using eDCCONFIG5 = DcCtrlFields::eDCCONFIG5;
    using eDCCONFIG6 = DcCtrlFields::eDCCONFIG6;
    using eDCCONFIG7 = DcCtrlFields::eDCCONFIG7;
    using DCCONFIG0 = DcCtrlFields::DCCONFIG0;
    using DCCONFIG1 = DcCtrlFields::DCCONFIG1;
    using DCCONFIG2 = DcCtrlFields::DCCONFIG2;
    using DCCONFIG3 = DcCtrlFields::DCCONFIG3;
    using DCCONFIG4 = DcCtrlFields::DCCONFIG4;
    using DCCONFIG5 = DcCtrlFields::DCCONFIG5;
    using DCCONFIG6 = DcCtrlFields::DCCONFIG6;
    using DCCONFIG7 = DcCtrlFields::DCCONFIG7;
  };

  // PDM Range Control register
  struct RangeCtrlFields {
    // Channel 0 Range Adjustment
    using RANGEADJ0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 1 Range Adjustment
    using RANGEADJ1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 2 Range Adjustment
    using RANGEADJ2 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 3 Range Adjustment
    using RANGEADJ3 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 4 Range Adjustment
    using RANGEADJ4 = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 5 Range Adjustment
    using RANGEADJ5 = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 6 Range Adjustment
    using RANGEADJ6 = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 7 Range Adjustment
    using RANGEADJ7 = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RangeCtrlFields

  struct RANGE_CTRL : ftl::mmio::Register<
      0x40C20074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RangeCtrlFields::RANGEADJ0,
      RangeCtrlFields::RANGEADJ1,
      RangeCtrlFields::RANGEADJ2,
      RangeCtrlFields::RANGEADJ3,
      RangeCtrlFields::RANGEADJ4,
      RangeCtrlFields::RANGEADJ5,
      RangeCtrlFields::RANGEADJ6,
      RangeCtrlFields::RANGEADJ7> {
    using RANGEADJ0 = RangeCtrlFields::RANGEADJ0;
    using RANGEADJ1 = RangeCtrlFields::RANGEADJ1;
    using RANGEADJ2 = RangeCtrlFields::RANGEADJ2;
    using RANGEADJ3 = RangeCtrlFields::RANGEADJ3;
    using RANGEADJ4 = RangeCtrlFields::RANGEADJ4;
    using RANGEADJ5 = RangeCtrlFields::RANGEADJ5;
    using RANGEADJ6 = RangeCtrlFields::RANGEADJ6;
    using RANGEADJ7 = RangeCtrlFields::RANGEADJ7;
  };

  // PDM Range Status register
  struct RangeStatFields {
    enum class eRANGEOVF0 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEOVF1 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEOVF2 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEOVF3 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEOVF4 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEOVF5 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEOVF6 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEOVF7 : std::uint32_t {
      // No exception by range overflow
      eno_exception = 0,
      // Exception by range overflow
      eexception = 1,
    };

    enum class eRANGEUNF0 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    enum class eRANGEUNF1 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    enum class eRANGEUNF2 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    enum class eRANGEUNF3 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    enum class eRANGEUNF4 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    enum class eRANGEUNF5 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    enum class eRANGEUNF6 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    enum class eRANGEUNF7 : std::uint32_t {
      // No exception by range underflow
      eno_exception = 0,
      // Exception by range underflow
      eexception = 1,
    };

    // Channel 0 Range Overflow Error Flag
    using RANGEOVF0 = ftl::mmio::Field<1, 0, eRANGEOVF0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 1 Range Overflow Error Flag
    using RANGEOVF1 = ftl::mmio::Field<1, 1, eRANGEOVF1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 2 Range Overflow Error Flag
    using RANGEOVF2 = ftl::mmio::Field<1, 2, eRANGEOVF2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 3 Range Overflow Error Flag
    using RANGEOVF3 = ftl::mmio::Field<1, 3, eRANGEOVF3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 4 Range Overflow Error Flag
    using RANGEOVF4 = ftl::mmio::Field<1, 4, eRANGEOVF4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 5 Range Overflow Error Flag
    using RANGEOVF5 = ftl::mmio::Field<1, 5, eRANGEOVF5, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 6 Range Overflow Error Flag
    using RANGEOVF6 = ftl::mmio::Field<1, 6, eRANGEOVF6, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 7 Range Overflow Error Flag
    using RANGEOVF7 = ftl::mmio::Field<1, 7, eRANGEOVF7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 0 Range Underflow Error Flag
    using RANGEUNF0 = ftl::mmio::Field<1, 16, eRANGEUNF0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 1 Range Underflow Error Flag
    using RANGEUNF1 = ftl::mmio::Field<1, 17, eRANGEUNF1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 2 Range Underflow Error Flag
    using RANGEUNF2 = ftl::mmio::Field<1, 18, eRANGEUNF2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 3 Range Underflow Error Flag
    using RANGEUNF3 = ftl::mmio::Field<1, 19, eRANGEUNF3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 4 Range Underflow Error Flag
    using RANGEUNF4 = ftl::mmio::Field<1, 20, eRANGEUNF4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 5 Range Underflow Error Flag
    using RANGEUNF5 = ftl::mmio::Field<1, 21, eRANGEUNF5, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 6 Range Underflow Error Flag
    using RANGEUNF6 = ftl::mmio::Field<1, 22, eRANGEUNF6, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Channel 7 Range Underflow Error Flag
    using RANGEUNF7 = ftl::mmio::Field<1, 23, eRANGEUNF7, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct RangeStatFields

  struct RANGE_STAT : ftl::mmio::Register<
      0x40C2007Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RangeStatFields::RANGEOVF0,
      RangeStatFields::RANGEOVF1,
      RangeStatFields::RANGEOVF2,
      RangeStatFields::RANGEOVF3,
      RangeStatFields::RANGEOVF4,
      RangeStatFields::RANGEOVF5,
      RangeStatFields::RANGEOVF6,
      RangeStatFields::RANGEOVF7,
      ftl::mmio::Reserved<8, 8>,
      RangeStatFields::RANGEUNF0,
      RangeStatFields::RANGEUNF1,
      RangeStatFields::RANGEUNF2,
      RangeStatFields::RANGEUNF3,
      RangeStatFields::RANGEUNF4,
      RangeStatFields::RANGEUNF5,
      RangeStatFields::RANGEUNF6,
      RangeStatFields::RANGEUNF7,
      ftl::mmio::Reserved<8, 24>> {
    using eRANGEOVF0 = RangeStatFields::eRANGEOVF0;
    using eRANGEOVF1 = RangeStatFields::eRANGEOVF1;
    using eRANGEOVF2 = RangeStatFields::eRANGEOVF2;
    using eRANGEOVF3 = RangeStatFields::eRANGEOVF3;
    using eRANGEOVF4 = RangeStatFields::eRANGEOVF4;
    using eRANGEOVF5 = RangeStatFields::eRANGEOVF5;
    using eRANGEOVF6 = RangeStatFields::eRANGEOVF6;
    using eRANGEOVF7 = RangeStatFields::eRANGEOVF7;
    using eRANGEUNF0 = RangeStatFields::eRANGEUNF0;
    using eRANGEUNF1 = RangeStatFields::eRANGEUNF1;
    using eRANGEUNF2 = RangeStatFields::eRANGEUNF2;
    using eRANGEUNF3 = RangeStatFields::eRANGEUNF3;
    using eRANGEUNF4 = RangeStatFields::eRANGEUNF4;
    using eRANGEUNF5 = RangeStatFields::eRANGEUNF5;
    using eRANGEUNF6 = RangeStatFields::eRANGEUNF6;
    using eRANGEUNF7 = RangeStatFields::eRANGEUNF7;
    using RANGEOVF0 = RangeStatFields::RANGEOVF0;
    using RANGEOVF1 = RangeStatFields::RANGEOVF1;
    using RANGEOVF2 = RangeStatFields::RANGEOVF2;
    using RANGEOVF3 = RangeStatFields::RANGEOVF3;
    using RANGEOVF4 = RangeStatFields::RANGEOVF4;
    using RANGEOVF5 = RangeStatFields::RANGEOVF5;
    using RANGEOVF6 = RangeStatFields::RANGEOVF6;
    using RANGEOVF7 = RangeStatFields::RANGEOVF7;
    using RANGEUNF0 = RangeStatFields::RANGEUNF0;
    using RANGEUNF1 = RangeStatFields::RANGEUNF1;
    using RANGEUNF2 = RangeStatFields::RANGEUNF2;
    using RANGEUNF3 = RangeStatFields::RANGEUNF3;
    using RANGEUNF4 = RangeStatFields::RANGEUNF4;
    using RANGEUNF5 = RangeStatFields::RANGEUNF5;
    using RANGEUNF6 = RangeStatFields::RANGEUNF6;
    using RANGEUNF7 = RangeStatFields::RANGEUNF7;
  };

  // Voice Activity Detector 0 Control register
  struct Vad0Ctrl1Fields {
    enum class eVADEN : std::uint32_t {
      // The HWVAD is disabled
      edisabled = 0,
      // The HWVAD is enabled
      eenabled = 1,
    };

    enum class eVADIE : std::uint32_t {
      // HWVAD Interrupts disabled
      edisabled = 0,
      // HWVAD Interrupts enabled
      eenabled = 1,
    };

    enum class eVADERIE : std::uint32_t {
      // HWVAD Error Interrupts disabled
      edisabled = 0,
      // HWVAD Error Interrupts enabled
      eenabled = 1,
    };

    enum class eVADST10 : std::uint32_t {
      // Normal operation.
      enormal_op = 0,
      // Filters are initialized.
      efilt_init = 1,
    };

    // Voice Activity Detector Enable
    using VADEN = ftl::mmio::Field<1, 0, eVADEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Reset
    using VADRST = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Interruption Enable
    using VADIE = ftl::mmio::Field<1, 2, eVADIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Error Interruption Enable
    using VADERIE = ftl::mmio::Field<1, 3, eVADERIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Internal Filters Initialization
    using VADST10 = ftl::mmio::Field<1, 4, eVADST10, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Initialization Time
    using VADINITT = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector CIC Oversampling Rate
    using VADCICOSR = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Channel Selector
    using VADCHSEL = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Vad0Ctrl1Fields

  struct VAD0_CTRL_1 : ftl::mmio::Register<
      0x40C20090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Vad0Ctrl1Fields::VADEN,
      Vad0Ctrl1Fields::VADRST,
      Vad0Ctrl1Fields::VADIE,
      Vad0Ctrl1Fields::VADERIE,
      Vad0Ctrl1Fields::VADST10,
      ftl::mmio::Reserved<3, 5>,
      Vad0Ctrl1Fields::VADINITT,
      ftl::mmio::Reserved<3, 13>,
      Vad0Ctrl1Fields::VADCICOSR,
      ftl::mmio::Reserved<4, 20>,
      Vad0Ctrl1Fields::VADCHSEL,
      ftl::mmio::Reserved<5, 27>> {
    using eVADEN = Vad0Ctrl1Fields::eVADEN;
    using eVADIE = Vad0Ctrl1Fields::eVADIE;
    using eVADERIE = Vad0Ctrl1Fields::eVADERIE;
    using eVADST10 = Vad0Ctrl1Fields::eVADST10;
    using VADEN = Vad0Ctrl1Fields::VADEN;
    using VADRST = Vad0Ctrl1Fields::VADRST;
    using VADIE = Vad0Ctrl1Fields::VADIE;
    using VADERIE = Vad0Ctrl1Fields::VADERIE;
    using VADST10 = Vad0Ctrl1Fields::VADST10;
    using VADINITT = Vad0Ctrl1Fields::VADINITT;
    using VADCICOSR = Vad0Ctrl1Fields::VADCICOSR;
    using VADCHSEL = Vad0Ctrl1Fields::VADCHSEL;
  };

  // Voice Activity Detector 0 Control register
  struct Vad0Ctrl2Fields {
    enum class eVADHPF : std::uint32_t {
      // Filter bypassed.
      efilt_bypass = 0,
      // Cut-off frequency at 1750Hz.
      ecutoff_1750Hz = 1,
      // Cut-off frequency at 215Hz.
      ecutoff_215Hz = 2,
      // Cut-off frequency at 102Hz.
      ecutoff_102Hz = 3,
    };

    enum class eVADFOUTDIS : std::uint32_t {
      // Output is enabled.
      eout_enabled = 0,
      // Output is disabled.
      eout_disabled = 1,
    };

    enum class eVADPREFEN : std::uint32_t {
      // Pre-filter is bypassed.
      ebypassed = 0,
      // Pre-filter is enabled.
      eenabled = 1,
    };

    enum class eVADFRENDIS : std::uint32_t {
      // Frame energy calculus enabled.
      eenabled = 0,
      // Frame energy calculus disabled.
      edisabled = 1,
    };

    // Voice Activity Detector High-Pass Filter
    using VADHPF = ftl::mmio::Field<2, 0, eVADHPF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Input Gain
    using VADINPGAIN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Frame Time
    using VADFRAMET = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Force Output Disable
    using VADFOUTDIS = ftl::mmio::Field<1, 28, eVADFOUTDIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Pre Filter Enable
    using VADPREFEN = ftl::mmio::Field<1, 30, eVADPREFEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Frame Energy Disable
    using VADFRENDIS = ftl::mmio::Field<1, 31, eVADFRENDIS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Vad0Ctrl2Fields

  struct VAD0_CTRL_2 : ftl::mmio::Register<
      0x40C20094u,
      std::uint32_t,
      0x000A0000u,
      ftl::mmio::RW,
      Vad0Ctrl2Fields::VADHPF,
      ftl::mmio::Reserved<6, 2>,
      Vad0Ctrl2Fields::VADINPGAIN,
      ftl::mmio::Reserved<4, 12>,
      Vad0Ctrl2Fields::VADFRAMET,
      ftl::mmio::Reserved<6, 22>,
      Vad0Ctrl2Fields::VADFOUTDIS,
      ftl::mmio::Reserved<1, 29>,
      Vad0Ctrl2Fields::VADPREFEN,
      Vad0Ctrl2Fields::VADFRENDIS> {
    using eVADHPF = Vad0Ctrl2Fields::eVADHPF;
    using eVADFOUTDIS = Vad0Ctrl2Fields::eVADFOUTDIS;
    using eVADPREFEN = Vad0Ctrl2Fields::eVADPREFEN;
    using eVADFRENDIS = Vad0Ctrl2Fields::eVADFRENDIS;
    using VADHPF = Vad0Ctrl2Fields::VADHPF;
    using VADINPGAIN = Vad0Ctrl2Fields::VADINPGAIN;
    using VADFRAMET = Vad0Ctrl2Fields::VADFRAMET;
    using VADFOUTDIS = Vad0Ctrl2Fields::VADFOUTDIS;
    using VADPREFEN = Vad0Ctrl2Fields::VADPREFEN;
    using VADFRENDIS = Vad0Ctrl2Fields::VADFRENDIS;
  };

  // Voice Activity Detector 0 Status register
  struct Vad0StatFields {
    enum class eVADIF : std::uint32_t {
      // Voice activity not detected
      eno_detect = 0,
      // Voice activity detected
      edetect = 1,
    };

    enum class eVADEF : std::uint32_t {
      // Voice activity not detected
      eno_detect = 0,
      // Voice activity detected
      edetect = 1,
    };

    enum class eVADINSATF : std::uint32_t {
      // No exception
      eno_exception = 0,
      // Exception
      eexception = 1,
    };

    enum class eVADINITF : std::uint32_t {
      // HWVAD is not being initialized.
      enot_init = 0,
      // HWVAD is being initialized.
      einit = 1,
    };

    // Voice Activity Detector Interrupt Flag
    using VADIF = ftl::mmio::Field<1, 0, eVADIF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Voice Activity Detector Event Flag
    using VADEF = ftl::mmio::Field<1, 15, eVADEF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Voice Activity Detector Input Saturation Flag
    using VADINSATF = ftl::mmio::Field<1, 16, eVADINSATF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Voice Activity Detector Initialization Flag
    using VADINITF = ftl::mmio::Field<1, 31, eVADINITF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Vad0StatFields

  struct VAD0_STAT : ftl::mmio::Register<
      0x40C20098u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      Vad0StatFields::VADIF,
      ftl::mmio::Reserved<14, 1>,
      Vad0StatFields::VADEF,
      Vad0StatFields::VADINSATF,
      ftl::mmio::Reserved<14, 17>,
      Vad0StatFields::VADINITF> {
    using eVADIF = Vad0StatFields::eVADIF;
    using eVADEF = Vad0StatFields::eVADEF;
    using eVADINSATF = Vad0StatFields::eVADINSATF;
    using eVADINITF = Vad0StatFields::eVADINITF;
    using VADIF = Vad0StatFields::VADIF;
    using VADEF = Vad0StatFields::VADEF;
    using VADINSATF = Vad0StatFields::VADINSATF;
    using VADINITF = Vad0StatFields::VADINITF;
  };

  // Voice Activity Detector 0 Signal Configuration
  struct Vad0SconfigFields {
    enum class eVADSMAXEN : std::uint32_t {
      // Maximum block is bypassed.
      ebypassed = 0,
      // Maximum block is enabled.
      eenabled = 1,
    };

    enum class eVADSFILEN : std::uint32_t {
      // Signal filter is disabled.
      edisabled = 0,
      // Signal filter is enabled.
      eenabled = 1,
    };

    // Voice Activity Detector Signal Gain
    using VADSGAIN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Signal Maximum Enable
    using VADSMAXEN = ftl::mmio::Field<1, 30, eVADSMAXEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Signal Filter Enable
    using VADSFILEN = ftl::mmio::Field<1, 31, eVADSFILEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Vad0SconfigFields

  struct VAD0_SCONFIG : ftl::mmio::Register<
      0x40C2009Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Vad0SconfigFields::VADSGAIN,
      ftl::mmio::Reserved<26, 4>,
      Vad0SconfigFields::VADSMAXEN,
      Vad0SconfigFields::VADSFILEN> {
    using eVADSMAXEN = Vad0SconfigFields::eVADSMAXEN;
    using eVADSFILEN = Vad0SconfigFields::eVADSFILEN;
    using VADSGAIN = Vad0SconfigFields::VADSGAIN;
    using VADSMAXEN = Vad0SconfigFields::VADSMAXEN;
    using VADSFILEN = Vad0SconfigFields::VADSFILEN;
  };

  // Voice Activity Detector 0 Noise Configuration
  struct Vad0NconfigFields {
    enum class eVADNOREN : std::uint32_t {
      // Noise input is not decimated.
      enot_decimated = 0,
      // Noise input is decimated.
      edecimated = 1,
    };

    enum class eVADNDECEN : std::uint32_t {
      // Noise input is not decimated.
      enot_decimated = 0,
      // Noise input is decimated.
      edecimated = 1,
    };

    enum class eVADNMINEN : std::uint32_t {
      // Minimum block is bypassed.
      ebypassed = 0,
      // Minimum block is enabled.
      eenabled = 1,
    };

    enum class eVADNFILAUTO : std::uint32_t {
      // Noise filter is always enabled.
      enf_always_en = 0,
      // Noise filter is enabled/disabled based on voice activity information.
      enf_cond_en = 1,
    };

    // Voice Activity Detector Noise Gain
    using VADNGAIN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Noise Filter Adjustment
    using VADNFILADJ = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Noise OR Enable
    using VADNOREN = ftl::mmio::Field<1, 28, eVADNOREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Noise Decimation Enable
    using VADNDECEN = ftl::mmio::Field<1, 29, eVADNDECEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Noise Minimum Enable
    using VADNMINEN = ftl::mmio::Field<1, 30, eVADNMINEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voice Activity Detector Noise Filter Auto
    using VADNFILAUTO = ftl::mmio::Field<1, 31, eVADNFILAUTO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Vad0NconfigFields

  struct VAD0_NCONFIG : ftl::mmio::Register<
      0x40C200A0u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      Vad0NconfigFields::VADNGAIN,
      ftl::mmio::Reserved<4, 4>,
      Vad0NconfigFields::VADNFILADJ,
      ftl::mmio::Reserved<15, 13>,
      Vad0NconfigFields::VADNOREN,
      Vad0NconfigFields::VADNDECEN,
      Vad0NconfigFields::VADNMINEN,
      Vad0NconfigFields::VADNFILAUTO> {
    using eVADNOREN = Vad0NconfigFields::eVADNOREN;
    using eVADNDECEN = Vad0NconfigFields::eVADNDECEN;
    using eVADNMINEN = Vad0NconfigFields::eVADNMINEN;
    using eVADNFILAUTO = Vad0NconfigFields::eVADNFILAUTO;
    using VADNGAIN = Vad0NconfigFields::VADNGAIN;
    using VADNFILADJ = Vad0NconfigFields::VADNFILADJ;
    using VADNOREN = Vad0NconfigFields::VADNOREN;
    using VADNDECEN = Vad0NconfigFields::VADNDECEN;
    using VADNMINEN = Vad0NconfigFields::VADNMINEN;
    using VADNFILAUTO = Vad0NconfigFields::VADNFILAUTO;
  };

  // Voice Activity Detector 0 Noise Data
  struct Vad0NdataFields {
    // Voice Activity Detector Noise Data
    using VADNDATA = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Vad0NdataFields

  struct VAD0_NDATA : ftl::mmio::Register<
      0x40C200A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Vad0NdataFields::VADNDATA,
      ftl::mmio::Reserved<16, 16>> {
    using VADNDATA = Vad0NdataFields::VADNDATA;
  };

  // Voice Activity Detector 0 Zero-Crossing Detector
  struct Vad0ZcdFields {
    enum class eVADZCDEN : std::uint32_t {
      // The ZCD is disabled
      edisabled = 0,
      // The ZCD is enabled
      eenabled = 1,
    };

    enum class eVADZCDAUTO : std::uint32_t {
      // The ZCD threshold is not estimated automatically
      enot_estimated = 0,
      // The ZCD threshold is estimated automatically
      eestimated = 1,
    };

    enum class eVADZCDAND : std::uint32_t {
      // The ZCD result is OR'ed with the energy-based detection.
      eored = 0,
      // The ZCD result is AND'ed with the energy-based detection.
      eanded = 1,
    };

    // Zero-Crossing Detector Enable
    using VADZCDEN = ftl::mmio::Field<1, 0, eVADZCDEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Zero-Crossing Detector Automatic Threshold
    using VADZCDAUTO = ftl::mmio::Field<1, 2, eVADZCDAUTO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Zero-Crossing Detector AND Behavior
    using VADZCDAND = ftl::mmio::Field<1, 4, eVADZCDAND, ftl::mmio::RW, ftl::mmio::Normal>;
    // Zero-Crossing Detector Adjustment
    using VADZCDADJ = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Zero-Crossing Detector Threshold
    using VADZCDTH = ftl::mmio::Field<10, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Vad0ZcdFields

  struct VAD0_ZCD : ftl::mmio::Register<
      0x40C200A8u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      Vad0ZcdFields::VADZCDEN,
      ftl::mmio::Reserved<1, 1>,
      Vad0ZcdFields::VADZCDAUTO,
      ftl::mmio::Reserved<1, 3>,
      Vad0ZcdFields::VADZCDAND,
      ftl::mmio::Reserved<3, 5>,
      Vad0ZcdFields::VADZCDADJ,
      ftl::mmio::Reserved<4, 12>,
      Vad0ZcdFields::VADZCDTH,
      ftl::mmio::Reserved<6, 26>> {
    using eVADZCDEN = Vad0ZcdFields::eVADZCDEN;
    using eVADZCDAUTO = Vad0ZcdFields::eVADZCDAUTO;
    using eVADZCDAND = Vad0ZcdFields::eVADZCDAND;
    using VADZCDEN = Vad0ZcdFields::VADZCDEN;
    using VADZCDAUTO = Vad0ZcdFields::VADZCDAUTO;
    using VADZCDAND = Vad0ZcdFields::VADZCDAND;
    using VADZCDADJ = Vad0ZcdFields::VADZCDADJ;
    using VADZCDTH = Vad0ZcdFields::VADZCDTH;
  };

};

}  // namespace regs