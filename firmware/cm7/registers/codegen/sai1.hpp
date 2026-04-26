#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SAI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::sai1 {

// Version ID
struct VERID_fields_ {
  enum class eFEATURE : std::uint32_t {
    // Standard feature set.
    eSTD = 0,
  };

  // Feature Specification Number
  using FEATURE = ftl::mmio::Field<16, 0, eFEATURE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Minor Version Number
  using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Major Version Number
  using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct VERID_fields_

struct VERID : ftl::mmio::Register<
    0x40404000u,
    std::uint32_t,
    0x03010000u,
    ftl::mmio::RO,
    VERID_fields_::FEATURE,
    VERID_fields_::MINOR,
    VERID_fields_::MAJOR> {
  using eFEATURE = VERID_fields_::eFEATURE;
  using FEATURE = VERID_fields_::FEATURE;
  using MINOR = VERID_fields_::MINOR;
  using MAJOR = VERID_fields_::MAJOR;
};

// Parameter
struct PARAM_fields_ {
  // Number of Datalines
  using DATALINE = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // FIFO Size
  using FIFO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Frame Size
  using FRAME = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PARAM_fields_

struct PARAM : ftl::mmio::Register<
    0x40404004u,
    std::uint32_t,
    0x00050504u,
    ftl::mmio::RO,
    PARAM_fields_::DATALINE,
    ftl::mmio::Reserved<4, 4>,
    PARAM_fields_::FIFO,
    ftl::mmio::Reserved<4, 12>,
    PARAM_fields_::FRAME,
    ftl::mmio::Reserved<12, 20>> {
  using DATALINE = PARAM_fields_::DATALINE;
  using FIFO = PARAM_fields_::FIFO;
  using FRAME = PARAM_fields_::FRAME;
};

// Transmit Control
struct TCSR_fields_ {
  enum class eFRDE : std::uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };

  enum class eFWDE : std::uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };

  enum class eFRIE : std::uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };

  enum class eFWIE : std::uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };

  enum class eFEIE : std::uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };

  enum class eSEIE : std::uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };

  enum class eWSIE : std::uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };

  enum class eFRF : std::uint32_t {
    // Transmit FIFO watermark has not been reached.
    eNO_FLAG = 0,
    // Transmit FIFO watermark has been reached.
    eFLAG = 1,
  };

  enum class eFWF : std::uint32_t {
    // No enabled transmit FIFO is empty.
    eDISABLE = 0,
    // Enabled transmit FIFO is empty.
    eENABLE = 1,
  };

  enum class eFEF : std::uint32_t {
    // Transmit underrun not detected.
    eNO_FLAG = 0,
    // Transmit underrun detected.
    eFLAG = 1,
  };

  enum class eSEF : std::uint32_t {
    // Sync error not detected.
    eNO_FLAG = 0,
    // Frame sync error detected.
    eFLAG = 1,
  };

  enum class eWSF : std::uint32_t {
    // Start of word not detected.
    eNO_FLAG = 0,
    // Start of word detected.
    eFLAG = 1,
  };

  enum class eSR : std::uint32_t {
    // No effect.
    eDISABLE = 0,
    // Software reset.
    eENABLE = 1,
  };

  enum class eFR : std::uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // FIFO reset.
    eRESET = 1,
  };

  enum class eBCE : std::uint32_t {
    // Transmit bit clock is disabled.
    eDISABLE = 0,
    // Transmit bit clock is enabled.
    eENABLE = 1,
  };

  enum class eDBGE : std::uint32_t {
    // Transmitter is disabled in Debug mode, after completing the current frame.
    eDISABLE = 0,
    // Transmitter is enabled in Debug mode.
    eENABLE = 1,
  };

  enum class eSTOPE : std::uint32_t {
    // Transmitter disabled in Stop mode.
    eDISABLE = 0,
    // Transmitter enabled in Stop mode.
    eENABLE = 1,
  };

  enum class eTE : std::uint32_t {
    // Transmitter is disabled.
    eDISABLE = 0,
    // Transmitter is enabled, or transmitter has been disabled and has not yet reached end of frame.
    eENABLE = 1,
  };

  // FIFO Request DMA Enable
  using FRDE = ftl::mmio::Field<1, 0, eFRDE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Warning DMA Enable
  using FWDE = ftl::mmio::Field<1, 1, eFWDE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Request Interrupt Enable
  using FRIE = ftl::mmio::Field<1, 8, eFRIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Warning Interrupt Enable
  using FWIE = ftl::mmio::Field<1, 9, eFWIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Error Interrupt Enable
  using FEIE = ftl::mmio::Field<1, 10, eFEIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Sync Error Interrupt Enable
  using SEIE = ftl::mmio::Field<1, 11, eSEIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Word Start Interrupt Enable
  using WSIE = ftl::mmio::Field<1, 12, eWSIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Request Flag
  using FRF = ftl::mmio::Field<1, 16, eFRF, ftl::mmio::RO, ftl::mmio::Normal>;
  // FIFO Warning Flag
  using FWF = ftl::mmio::Field<1, 17, eFWF, ftl::mmio::RO, ftl::mmio::Normal>;
  // FIFO Error Flag
  using FEF = ftl::mmio::Field<1, 18, eFEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Sync Error Flag
  using SEF = ftl::mmio::Field<1, 19, eSEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Word Start Flag
  using WSF = ftl::mmio::Field<1, 20, eWSF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Software Reset
  using SR = ftl::mmio::Field<1, 24, eSR, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Reset
  using FR = ftl::mmio::Field<1, 25, eFR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Enable
  using BCE = ftl::mmio::Field<1, 28, eBCE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Debug Enable
  using DBGE = ftl::mmio::Field<1, 29, eDBGE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Stop Enable
  using STOPE = ftl::mmio::Field<1, 30, eSTOPE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmitter Enable
  using TE = ftl::mmio::Field<1, 31, eTE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCSR_fields_

struct TCSR : ftl::mmio::Register<
    0x40404008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCSR_fields_::FRDE,
    TCSR_fields_::FWDE,
    ftl::mmio::Reserved<6, 2>,
    TCSR_fields_::FRIE,
    TCSR_fields_::FWIE,
    TCSR_fields_::FEIE,
    TCSR_fields_::SEIE,
    TCSR_fields_::WSIE,
    ftl::mmio::Reserved<3, 13>,
    TCSR_fields_::FRF,
    TCSR_fields_::FWF,
    TCSR_fields_::FEF,
    TCSR_fields_::SEF,
    TCSR_fields_::WSF,
    ftl::mmio::Reserved<3, 21>,
    TCSR_fields_::SR,
    TCSR_fields_::FR,
    ftl::mmio::Reserved<2, 26>,
    TCSR_fields_::BCE,
    TCSR_fields_::DBGE,
    TCSR_fields_::STOPE,
    TCSR_fields_::TE> {
  using eFRDE = TCSR_fields_::eFRDE;
  using eFWDE = TCSR_fields_::eFWDE;
  using eFRIE = TCSR_fields_::eFRIE;
  using eFWIE = TCSR_fields_::eFWIE;
  using eFEIE = TCSR_fields_::eFEIE;
  using eSEIE = TCSR_fields_::eSEIE;
  using eWSIE = TCSR_fields_::eWSIE;
  using eFRF = TCSR_fields_::eFRF;
  using eFWF = TCSR_fields_::eFWF;
  using eFEF = TCSR_fields_::eFEF;
  using eSEF = TCSR_fields_::eSEF;
  using eWSF = TCSR_fields_::eWSF;
  using eSR = TCSR_fields_::eSR;
  using eFR = TCSR_fields_::eFR;
  using eBCE = TCSR_fields_::eBCE;
  using eDBGE = TCSR_fields_::eDBGE;
  using eSTOPE = TCSR_fields_::eSTOPE;
  using eTE = TCSR_fields_::eTE;
  using FRDE = TCSR_fields_::FRDE;
  using FWDE = TCSR_fields_::FWDE;
  using FRIE = TCSR_fields_::FRIE;
  using FWIE = TCSR_fields_::FWIE;
  using FEIE = TCSR_fields_::FEIE;
  using SEIE = TCSR_fields_::SEIE;
  using WSIE = TCSR_fields_::WSIE;
  using FRF = TCSR_fields_::FRF;
  using FWF = TCSR_fields_::FWF;
  using FEF = TCSR_fields_::FEF;
  using SEF = TCSR_fields_::SEF;
  using WSF = TCSR_fields_::WSF;
  using SR = TCSR_fields_::SR;
  using FR = TCSR_fields_::FR;
  using BCE = TCSR_fields_::BCE;
  using DBGE = TCSR_fields_::DBGE;
  using STOPE = TCSR_fields_::STOPE;
  using TE = TCSR_fields_::TE;
};

// Transmit Configuration 1
struct TCR1_fields_ {
  // Transmit FIFO Watermark
  using TFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCR1_fields_

struct TCR1 : ftl::mmio::Register<
    0x4040400Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCR1_fields_::TFW,
    ftl::mmio::Reserved<27, 5>> {
  using TFW = TCR1_fields_::TFW;
};

// Transmit Configuration 2
struct TCR2_fields_ {
  enum class eBYP : std::uint32_t {
    // Internal bit clock is generated from bit clock divider.
    eDISABLE = 0,
    // Internal bit clock is divide by one of the audio master clock.
    eENABLE = 1,
  };

  enum class eBCD : std::uint32_t {
    // Bit clock is generated externally in Slave mode.
    eEXT_IN_SLAVE = 0,
    // Bit clock is generated internally in Master mode.
    eINT_IN_MASTER = 1,
  };

  enum class eBCP : std::uint32_t {
    // Bit clock is active high with drive outputs on rising edge and sample inputs on falling edge.
    eACTIVE_HIGH = 0,
    // Bit clock is active low with drive outputs on falling edge and sample inputs on rising edge.
    eACTIVE_LOW = 1,
  };

  enum class eMSEL : std::uint32_t {
    // Bus Clock selected.
    eBUS_CLOCK = 0,
    // Master Clock (MCLK) 1 option selected.
    eMCLK1 = 1,
    // Master Clock (MCLK) 2 option selected.
    eMCLK2 = 2,
    // Master Clock (MCLK) 3 option selected.
    eMCLK3 = 3,
  };

  enum class eBCI : std::uint32_t {
    // No effect.
    eDISABLE = 0,
    // Internal logic is clocked as if bit clock was externally generated.
    eENABLE = 1,
  };

  enum class eBCS : std::uint32_t {
    // Use the normal bit clock source.
    eDISABLE = 0,
    // Swap the bit clock source.
    eENABLE = 1,
  };

  enum class eSYNC : std::uint32_t {
    // Asynchronous mode.
    eASYNC = 0,
    // Synchronous with receiver.
    eSYNC_W_RX = 1,
  };

  // Bit Clock Divide
  using DIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Bypass
  using BYP = ftl::mmio::Field<1, 23, eBYP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Direction
  using BCD = ftl::mmio::Field<1, 24, eBCD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Polarity
  using BCP = ftl::mmio::Field<1, 25, eBCP, ftl::mmio::RW, ftl::mmio::Normal>;
  // MCLK Select
  using MSEL = ftl::mmio::Field<2, 26, eMSEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Input
  using BCI = ftl::mmio::Field<1, 28, eBCI, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Swap
  using BCS = ftl::mmio::Field<1, 29, eBCS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Synchronous Mode
  using SYNC = ftl::mmio::Field<1, 30, eSYNC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCR2_fields_

struct TCR2 : ftl::mmio::Register<
    0x40404010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCR2_fields_::DIV,
    ftl::mmio::Reserved<15, 8>,
    TCR2_fields_::BYP,
    TCR2_fields_::BCD,
    TCR2_fields_::BCP,
    TCR2_fields_::MSEL,
    TCR2_fields_::BCI,
    TCR2_fields_::BCS,
    TCR2_fields_::SYNC,
    ftl::mmio::Reserved<1, 31>> {
  using eBYP = TCR2_fields_::eBYP;
  using eBCD = TCR2_fields_::eBCD;
  using eBCP = TCR2_fields_::eBCP;
  using eMSEL = TCR2_fields_::eMSEL;
  using eBCI = TCR2_fields_::eBCI;
  using eBCS = TCR2_fields_::eBCS;
  using eSYNC = TCR2_fields_::eSYNC;
  using DIV = TCR2_fields_::DIV;
  using BYP = TCR2_fields_::BYP;
  using BCD = TCR2_fields_::BCD;
  using BCP = TCR2_fields_::BCP;
  using MSEL = TCR2_fields_::MSEL;
  using BCI = TCR2_fields_::BCI;
  using BCS = TCR2_fields_::BCS;
  using SYNC = TCR2_fields_::SYNC;
};

// Transmit Configuration 3
struct TCR3_fields_ {
  // Word Flag Configuration
  using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit Channel Enable
  using TCE = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Channel FIFO Reset
  using CFR = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCR3_fields_

struct TCR3 : ftl::mmio::Register<
    0x40404014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCR3_fields_::WDFL,
    ftl::mmio::Reserved<11, 5>,
    TCR3_fields_::TCE,
    ftl::mmio::Reserved<4, 20>,
    TCR3_fields_::CFR,
    ftl::mmio::Reserved<4, 28>> {
  using WDFL = TCR3_fields_::WDFL;
  using TCE = TCR3_fields_::TCE;
  using CFR = TCR3_fields_::CFR;
};

// Transmit Configuration 4
struct TCR4_fields_ {
  enum class eFSD : std::uint32_t {
    // Frame sync is generated externally in Slave mode.
    eEXT_IN_SLAVE_MODE = 0,
    // Frame sync is generated internally in Master mode.
    eINT_IN_MASTER_MODE = 1,
  };

  enum class eFSP : std::uint32_t {
    // Frame sync is active high.
    eACTIVE_HIGH = 0,
    // Frame sync is active low.
    eACTIVE_LOW = 1,
  };

  enum class eONDEM : std::uint32_t {
    // Internal frame sync is generated continuously.
    eCONTINUOUS_FRAME_SYNC = 0,
    // Internal frame sync is generated when the FIFO warning flag is clear.
    eON_DEMAND_FRAME_SYNC = 1,
  };

  enum class eFSE : std::uint32_t {
    // Frame sync asserts with the first bit of the frame.
    eDISABLE = 0,
    // Frame sync asserts one bit before the first bit of the frame.
    eENABLE = 1,
  };

  enum class eMF : std::uint32_t {
    // LSB is transmitted first.
    eDISABLE = 0,
    // MSB is transmitted first.
    eENABLE = 1,
  };

  enum class eCHMOD : std::uint32_t {
    // TDM mode, transmit data pins are tri-stated when slots are masked or channels are disabled.
    eTDM_MODE = 0,
    // Output mode, transmit data pins are never tri-stated and will output zero when slots are masked or channels are disabled.
    eOUTPUT_MODE = 1,
  };

  enum class eFPACK : std::uint32_t {
    // FIFO packing is disabled.
    eDISABLED = 0,
    // 8-bit FIFO packing is enabled.
    eEIGHT_BIT_FIFO_PACKING = 2,
    // 16-bit FIFO packing is enabled.
    eSIXTEEN_BIT_FIFO_PACKING = 3,
  };

  enum class eFCOMB : std::uint32_t {
    // FIFO combine mode disabled.
    eDISABLED = 0,
    // FIFO combine mode enabled on FIFO reads (from transmit shift registers).
    eENABLED_ON_FIFO_READS = 1,
    // FIFO combine mode enabled on FIFO writes (by software).
    eENABLED_ON_FIFO_WRITES = 2,
    // FIFO combine mode enabled on FIFO reads (from transmit shift registers) and writes (by software).
    eENABLED_ON_FIFO_READS_WRITES = 3,
  };

  enum class eFCONT : std::uint32_t {
    // On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
    eDISABLE = 0,
    // On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
    eENABLE = 1,
  };

  // Frame Sync Direction
  using FSD = ftl::mmio::Field<1, 0, eFSD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Frame Sync Polarity
  using FSP = ftl::mmio::Field<1, 1, eFSP, ftl::mmio::RW, ftl::mmio::Normal>;
  // On Demand Mode
  using ONDEM = ftl::mmio::Field<1, 2, eONDEM, ftl::mmio::RW, ftl::mmio::Normal>;
  // Frame Sync Early
  using FSE = ftl::mmio::Field<1, 3, eFSE, ftl::mmio::RW, ftl::mmio::Normal>;
  // MSB First
  using MF = ftl::mmio::Field<1, 4, eMF, ftl::mmio::RW, ftl::mmio::Normal>;
  // Channel Mode
  using CHMOD = ftl::mmio::Field<1, 5, eCHMOD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Sync Width
  using SYWD = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Frame size
  using FRSZ = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Packing Mode
  using FPACK = ftl::mmio::Field<2, 24, eFPACK, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Combine Mode
  using FCOMB = ftl::mmio::Field<2, 26, eFCOMB, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Continue on Error
  using FCONT = ftl::mmio::Field<1, 28, eFCONT, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCR4_fields_

struct TCR4 : ftl::mmio::Register<
    0x40404018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCR4_fields_::FSD,
    TCR4_fields_::FSP,
    TCR4_fields_::ONDEM,
    TCR4_fields_::FSE,
    TCR4_fields_::MF,
    TCR4_fields_::CHMOD,
    ftl::mmio::Reserved<2, 6>,
    TCR4_fields_::SYWD,
    ftl::mmio::Reserved<3, 13>,
    TCR4_fields_::FRSZ,
    ftl::mmio::Reserved<3, 21>,
    TCR4_fields_::FPACK,
    TCR4_fields_::FCOMB,
    TCR4_fields_::FCONT,
    ftl::mmio::Reserved<3, 29>> {
  using eFSD = TCR4_fields_::eFSD;
  using eFSP = TCR4_fields_::eFSP;
  using eONDEM = TCR4_fields_::eONDEM;
  using eFSE = TCR4_fields_::eFSE;
  using eMF = TCR4_fields_::eMF;
  using eCHMOD = TCR4_fields_::eCHMOD;
  using eFPACK = TCR4_fields_::eFPACK;
  using eFCOMB = TCR4_fields_::eFCOMB;
  using eFCONT = TCR4_fields_::eFCONT;
  using FSD = TCR4_fields_::FSD;
  using FSP = TCR4_fields_::FSP;
  using ONDEM = TCR4_fields_::ONDEM;
  using FSE = TCR4_fields_::FSE;
  using MF = TCR4_fields_::MF;
  using CHMOD = TCR4_fields_::CHMOD;
  using SYWD = TCR4_fields_::SYWD;
  using FRSZ = TCR4_fields_::FRSZ;
  using FPACK = TCR4_fields_::FPACK;
  using FCOMB = TCR4_fields_::FCOMB;
  using FCONT = TCR4_fields_::FCONT;
};

// Transmit Configuration 5
struct TCR5_fields_ {
  // First Bit Shifted
  using FBT = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Word 0 Width
  using W0W = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Word N Width
  using WNW = ftl::mmio::Field<5, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCR5_fields_

struct TCR5 : ftl::mmio::Register<
    0x4040401Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<8, 0>,
    TCR5_fields_::FBT,
    ftl::mmio::Reserved<3, 13>,
    TCR5_fields_::W0W,
    ftl::mmio::Reserved<3, 21>,
    TCR5_fields_::WNW,
    ftl::mmio::Reserved<3, 29>> {
  using FBT = TCR5_fields_::FBT;
  using W0W = TCR5_fields_::W0W;
  using WNW = TCR5_fields_::WNW;
};

// Transmit Data
struct TDR_fields_ {
  // Transmit Data Register
  using TDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TDR_fields_

template<std::uint32_t Index>
struct TDR : ftl::mmio::Register<
    0x40404020u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TDR_fields_::TDR> {
  static_assert(Index < 4u, "TDR: Index out of range");
  using value_ = TDR_fields_::TDR;
};

// Transmit FIFO
struct TFR_fields_ {
  enum class eWCP : std::uint32_t {
    // No effect.
    eDISABLE = 0,
    // FIFO combine is enabled for FIFO writes and this FIFO will be written on the next FIFO write.
    eENABLE = 1,
  };

  // Read FIFO Pointer
  using RFP = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Write FIFO Pointer
  using WFP = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Write Channel Pointer
  using WCP = ftl::mmio::Field<1, 31, eWCP, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct TFR_fields_

template<std::uint32_t Index>
struct TFR : ftl::mmio::Register<
    0x40404040u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    TFR_fields_::RFP,
    ftl::mmio::Reserved<10, 6>,
    TFR_fields_::WFP,
    ftl::mmio::Reserved<9, 22>,
    TFR_fields_::WCP> {
  static_assert(Index < 4u, "TFR: Index out of range");
  using eWCP = TFR_fields_::eWCP;
  using RFP = TFR_fields_::RFP;
  using WFP = TFR_fields_::WFP;
  using WCP = TFR_fields_::WCP;
};

// Transmit Mask
struct TMR_fields_ {
  enum class eTWM : std::uint32_t {
    // Word N is enabled.
    eWORD_N_ENABLED = 0,
    // Word N is masked. The transmit data pins are tri-stated or drive zero when masked.
    eWORD_N_MASKED = 1,
  };

  // Transmit Word Mask
  using TWM = ftl::mmio::Field<32, 0, eTWM, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TMR_fields_

struct TMR : ftl::mmio::Register<
    0x40404060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TMR_fields_::TWM> {
  using eTWM = TMR_fields_::eTWM;
  using TWM = TMR_fields_::TWM;
};

// Receive Control
struct RCSR_fields_ {
  enum class eFRDE : std::uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };

  enum class eFWDE : std::uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };

  enum class eFRIE : std::uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };

  enum class eFWIE : std::uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };

  enum class eFEIE : std::uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };

  enum class eSEIE : std::uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };

  enum class eWSIE : std::uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };

  enum class eFRF : std::uint32_t {
    // Receive FIFO watermark not reached.
    eBELOW_WATERMARK = 0,
    // Receive FIFO watermark has been reached.
    eWATERMARK_REACHED = 1,
  };

  enum class eFWF : std::uint32_t {
    // No enabled receive FIFO is full.
    eNOT_FULL = 0,
    // Enabled receive FIFO is full.
    eFULL = 1,
  };

  enum class eFEF : std::uint32_t {
    // Receive overflow not detected.
    eNO_FLAG = 0,
    // Receive overflow detected.
    eFLAG = 1,
  };

  enum class eSEF : std::uint32_t {
    // Sync error not detected.
    eNO_FLAG = 0,
    // Frame sync error detected.
    eFLAG = 1,
  };

  enum class eWSF : std::uint32_t {
    // Start of word not detected.
    eNO_FLAG = 0,
    // Start of word detected.
    eFLAG = 1,
  };

  enum class eSR : std::uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // Software reset.
    eSW_RESET = 1,
  };

  enum class eFR : std::uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // FIFO reset.
    eFIFO_RESET = 1,
  };

  enum class eBCE : std::uint32_t {
    // Receive bit clock is disabled.
    eDISABLE = 0,
    // Receive bit clock is enabled.
    eENABLE = 1,
  };

  enum class eDBGE : std::uint32_t {
    // Receiver is disabled in Debug mode, after completing the current frame.
    eDISABLE = 0,
    // Receiver is enabled in Debug mode.
    eENABLE = 1,
  };

  enum class eSTOPE : std::uint32_t {
    // Receiver disabled in Stop mode.
    eDISABLE = 0,
    // Receiver enabled in Stop mode.
    eENABLE = 1,
  };

  enum class eRE : std::uint32_t {
    // Receiver is disabled.
    eDISABLE = 0,
    // Receiver is enabled, or receiver has been disabled and has not yet reached end of frame.
    eENABLE = 1,
  };

  // FIFO Request DMA Enable
  using FRDE = ftl::mmio::Field<1, 0, eFRDE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Warning DMA Enable
  using FWDE = ftl::mmio::Field<1, 1, eFWDE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Request Interrupt Enable
  using FRIE = ftl::mmio::Field<1, 8, eFRIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Warning Interrupt Enable
  using FWIE = ftl::mmio::Field<1, 9, eFWIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Error Interrupt Enable
  using FEIE = ftl::mmio::Field<1, 10, eFEIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Sync Error Interrupt Enable
  using SEIE = ftl::mmio::Field<1, 11, eSEIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Word Start Interrupt Enable
  using WSIE = ftl::mmio::Field<1, 12, eWSIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Request Flag
  using FRF = ftl::mmio::Field<1, 16, eFRF, ftl::mmio::RO, ftl::mmio::Normal>;
  // FIFO Warning Flag
  using FWF = ftl::mmio::Field<1, 17, eFWF, ftl::mmio::RO, ftl::mmio::Normal>;
  // FIFO Error Flag
  using FEF = ftl::mmio::Field<1, 18, eFEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Sync Error Flag
  using SEF = ftl::mmio::Field<1, 19, eSEF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Word Start Flag
  using WSF = ftl::mmio::Field<1, 20, eWSF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Software Reset
  using SR = ftl::mmio::Field<1, 24, eSR, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Reset
  using FR = ftl::mmio::Field<1, 25, eFR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Enable
  using BCE = ftl::mmio::Field<1, 28, eBCE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Debug Enable
  using DBGE = ftl::mmio::Field<1, 29, eDBGE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Stop Enable
  using STOPE = ftl::mmio::Field<1, 30, eSTOPE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receiver Enable
  using RE = ftl::mmio::Field<1, 31, eRE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RCSR_fields_

struct RCSR : ftl::mmio::Register<
    0x40404088u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RCSR_fields_::FRDE,
    RCSR_fields_::FWDE,
    ftl::mmio::Reserved<6, 2>,
    RCSR_fields_::FRIE,
    RCSR_fields_::FWIE,
    RCSR_fields_::FEIE,
    RCSR_fields_::SEIE,
    RCSR_fields_::WSIE,
    ftl::mmio::Reserved<3, 13>,
    RCSR_fields_::FRF,
    RCSR_fields_::FWF,
    RCSR_fields_::FEF,
    RCSR_fields_::SEF,
    RCSR_fields_::WSF,
    ftl::mmio::Reserved<3, 21>,
    RCSR_fields_::SR,
    RCSR_fields_::FR,
    ftl::mmio::Reserved<2, 26>,
    RCSR_fields_::BCE,
    RCSR_fields_::DBGE,
    RCSR_fields_::STOPE,
    RCSR_fields_::RE> {
  using eFRDE = RCSR_fields_::eFRDE;
  using eFWDE = RCSR_fields_::eFWDE;
  using eFRIE = RCSR_fields_::eFRIE;
  using eFWIE = RCSR_fields_::eFWIE;
  using eFEIE = RCSR_fields_::eFEIE;
  using eSEIE = RCSR_fields_::eSEIE;
  using eWSIE = RCSR_fields_::eWSIE;
  using eFRF = RCSR_fields_::eFRF;
  using eFWF = RCSR_fields_::eFWF;
  using eFEF = RCSR_fields_::eFEF;
  using eSEF = RCSR_fields_::eSEF;
  using eWSF = RCSR_fields_::eWSF;
  using eSR = RCSR_fields_::eSR;
  using eFR = RCSR_fields_::eFR;
  using eBCE = RCSR_fields_::eBCE;
  using eDBGE = RCSR_fields_::eDBGE;
  using eSTOPE = RCSR_fields_::eSTOPE;
  using eRE = RCSR_fields_::eRE;
  using FRDE = RCSR_fields_::FRDE;
  using FWDE = RCSR_fields_::FWDE;
  using FRIE = RCSR_fields_::FRIE;
  using FWIE = RCSR_fields_::FWIE;
  using FEIE = RCSR_fields_::FEIE;
  using SEIE = RCSR_fields_::SEIE;
  using WSIE = RCSR_fields_::WSIE;
  using FRF = RCSR_fields_::FRF;
  using FWF = RCSR_fields_::FWF;
  using FEF = RCSR_fields_::FEF;
  using SEF = RCSR_fields_::SEF;
  using WSF = RCSR_fields_::WSF;
  using SR = RCSR_fields_::SR;
  using FR = RCSR_fields_::FR;
  using BCE = RCSR_fields_::BCE;
  using DBGE = RCSR_fields_::DBGE;
  using STOPE = RCSR_fields_::STOPE;
  using RE = RCSR_fields_::RE;
};

// Receive Configuration 1
struct RCR1_fields_ {
  // Receive FIFO Watermark
  using RFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RCR1_fields_

struct RCR1 : ftl::mmio::Register<
    0x4040408Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RCR1_fields_::RFW,
    ftl::mmio::Reserved<27, 5>> {
  using RFW = RCR1_fields_::RFW;
};

// Receive Configuration 2
struct RCR2_fields_ {
  enum class eBYP : std::uint32_t {
    // Internal bit clock is generated from bit clock divider.
    eDISABLE = 0,
    // Internal bit clock is divide by one of the audio master clock.
    eENABLE = 1,
  };

  enum class eBCD : std::uint32_t {
    // Bit clock is generated externally in Slave mode.
    eEXT_SLAVE_MODE = 0,
    // Bit clock is generated internally in Master mode.
    eINT_MASTER_MODE = 1,
  };

  enum class eBCP : std::uint32_t {
    // Bit Clock is active high with drive outputs on rising edge and sample inputs on falling edge.
    eACTIVE_HIGH = 0,
    // Bit Clock is active low with drive outputs on falling edge and sample inputs on rising edge.
    eACTIVE_LOW = 1,
  };

  enum class eMSEL : std::uint32_t {
    // Bus Clock selected.
    eBUS_CLOCK = 0,
    // Master Clock (MCLK) 1 option selected.
    eMCLK1 = 1,
    // Master Clock (MCLK) 2 option selected.
    eMCLK2 = 2,
    // Master Clock (MCLK) 3 option selected.
    eMCLK3 = 3,
  };

  enum class eBCI : std::uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // Internal logic is clocked as if bit clock was externally generated.
    eCLOCKED_AS_IF_EXT_GENERATED = 1,
  };

  enum class eBCS : std::uint32_t {
    // Use the normal bit clock source.
    eNORMAL = 0,
    // Swap the bit clock source.
    eSWAP_BIT_CLK_SOURCE = 1,
  };

  enum class eSYNC : std::uint32_t {
    // Asynchronous mode.
    eAsync = 0,
    // Synchronous with transmitter.
    eSYNC_W_TX = 1,
  };

  // Bit Clock Divide
  using DIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Bypass
  using BYP = ftl::mmio::Field<1, 23, eBYP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Direction
  using BCD = ftl::mmio::Field<1, 24, eBCD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Polarity
  using BCP = ftl::mmio::Field<1, 25, eBCP, ftl::mmio::RW, ftl::mmio::Normal>;
  // MCLK Select
  using MSEL = ftl::mmio::Field<2, 26, eMSEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Input
  using BCI = ftl::mmio::Field<1, 28, eBCI, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bit Clock Swap
  using BCS = ftl::mmio::Field<1, 29, eBCS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Synchronous Mode
  using SYNC = ftl::mmio::Field<1, 30, eSYNC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RCR2_fields_

struct RCR2 : ftl::mmio::Register<
    0x40404090u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RCR2_fields_::DIV,
    ftl::mmio::Reserved<15, 8>,
    RCR2_fields_::BYP,
    RCR2_fields_::BCD,
    RCR2_fields_::BCP,
    RCR2_fields_::MSEL,
    RCR2_fields_::BCI,
    RCR2_fields_::BCS,
    RCR2_fields_::SYNC,
    ftl::mmio::Reserved<1, 31>> {
  using eBYP = RCR2_fields_::eBYP;
  using eBCD = RCR2_fields_::eBCD;
  using eBCP = RCR2_fields_::eBCP;
  using eMSEL = RCR2_fields_::eMSEL;
  using eBCI = RCR2_fields_::eBCI;
  using eBCS = RCR2_fields_::eBCS;
  using eSYNC = RCR2_fields_::eSYNC;
  using DIV = RCR2_fields_::DIV;
  using BYP = RCR2_fields_::BYP;
  using BCD = RCR2_fields_::BCD;
  using BCP = RCR2_fields_::BCP;
  using MSEL = RCR2_fields_::MSEL;
  using BCI = RCR2_fields_::BCI;
  using BCS = RCR2_fields_::BCS;
  using SYNC = RCR2_fields_::SYNC;
};

// Receive Configuration 3
struct RCR3_fields_ {
  // Word Flag Configuration
  using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive Channel Enable
  using RCE = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Channel FIFO Reset
  using CFR = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RCR3_fields_

struct RCR3 : ftl::mmio::Register<
    0x40404094u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RCR3_fields_::WDFL,
    ftl::mmio::Reserved<11, 5>,
    RCR3_fields_::RCE,
    ftl::mmio::Reserved<4, 20>,
    RCR3_fields_::CFR,
    ftl::mmio::Reserved<4, 28>> {
  using WDFL = RCR3_fields_::WDFL;
  using RCE = RCR3_fields_::RCE;
  using CFR = RCR3_fields_::CFR;
};

// Receive Configuration 4
struct RCR4_fields_ {
  enum class eFSD : std::uint32_t {
    // Frame Sync is generated externally in Slave mode.
    eEXT_SLAVE_MODE = 0,
    // Frame Sync is generated internally in Master mode.
    eINT_MASTER_MODE = 1,
  };

  enum class eFSP : std::uint32_t {
    // Frame sync is active high.
    eACTIVE_HIGH = 0,
    // Frame sync is active low.
    eACTIVE_LOW = 1,
  };

  enum class eONDEM : std::uint32_t {
    // Internal frame sync is generated continuously.
    eDISABLE = 0,
    // Internal frame sync is generated when the FIFO warning flag is clear.
    eENABLE = 1,
  };

  enum class eFSE : std::uint32_t {
    // Frame sync asserts with the first bit of the frame.
    eDISABLE = 0,
    // Frame sync asserts one bit before the first bit of the frame.
    eENABLE = 1,
  };

  enum class eMF : std::uint32_t {
    // LSB is received first.
    eDISABLE = 0,
    // MSB is received first.
    eENABLE = 1,
  };

  enum class eFPACK : std::uint32_t {
    // FIFO packing is disabled
    eDISABLED = 0,
    // 8-bit FIFO packing is enabled
    eEIGHT_BIT_PACKING = 2,
    // 16-bit FIFO packing is enabled
    eSIXTEEN_BIT_PACKING = 3,
  };

  enum class eFCOMB : std::uint32_t {
    // FIFO combine mode disabled.
    eDISABLED = 0,
    // FIFO combine mode enabled on FIFO writes (from receive shift registers).
    eENA_ON_FIFO_WRITES = 1,
    // FIFO combine mode enabled on FIFO reads (by software).
    eENA_ON_FIFO_READS = 2,
    // FIFO combine mode enabled on FIFO writes (from receive shift registers) and reads (by software).
    eENA_ON_FIFO_WRITES_READS = 3,
  };

  enum class eFCONT : std::uint32_t {
    // On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
    eDISABLE = 0,
    // On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
    eENABLE = 1,
  };

  // Frame Sync Direction
  using FSD = ftl::mmio::Field<1, 0, eFSD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Frame Sync Polarity
  using FSP = ftl::mmio::Field<1, 1, eFSP, ftl::mmio::RW, ftl::mmio::Normal>;
  // On Demand Mode
  using ONDEM = ftl::mmio::Field<1, 2, eONDEM, ftl::mmio::RW, ftl::mmio::Normal>;
  // Frame Sync Early
  using FSE = ftl::mmio::Field<1, 3, eFSE, ftl::mmio::RW, ftl::mmio::Normal>;
  // MSB First
  using MF = ftl::mmio::Field<1, 4, eMF, ftl::mmio::RW, ftl::mmio::Normal>;
  // Sync Width
  using SYWD = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Frame Size
  using FRSZ = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Packing Mode
  using FPACK = ftl::mmio::Field<2, 24, eFPACK, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Combine Mode
  using FCOMB = ftl::mmio::Field<2, 26, eFCOMB, ftl::mmio::RW, ftl::mmio::Normal>;
  // FIFO Continue on Error
  using FCONT = ftl::mmio::Field<1, 28, eFCONT, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RCR4_fields_

struct RCR4 : ftl::mmio::Register<
    0x40404098u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RCR4_fields_::FSD,
    RCR4_fields_::FSP,
    RCR4_fields_::ONDEM,
    RCR4_fields_::FSE,
    RCR4_fields_::MF,
    ftl::mmio::Reserved<3, 5>,
    RCR4_fields_::SYWD,
    ftl::mmio::Reserved<3, 13>,
    RCR4_fields_::FRSZ,
    ftl::mmio::Reserved<3, 21>,
    RCR4_fields_::FPACK,
    RCR4_fields_::FCOMB,
    RCR4_fields_::FCONT,
    ftl::mmio::Reserved<3, 29>> {
  using eFSD = RCR4_fields_::eFSD;
  using eFSP = RCR4_fields_::eFSP;
  using eONDEM = RCR4_fields_::eONDEM;
  using eFSE = RCR4_fields_::eFSE;
  using eMF = RCR4_fields_::eMF;
  using eFPACK = RCR4_fields_::eFPACK;
  using eFCOMB = RCR4_fields_::eFCOMB;
  using eFCONT = RCR4_fields_::eFCONT;
  using FSD = RCR4_fields_::FSD;
  using FSP = RCR4_fields_::FSP;
  using ONDEM = RCR4_fields_::ONDEM;
  using FSE = RCR4_fields_::FSE;
  using MF = RCR4_fields_::MF;
  using SYWD = RCR4_fields_::SYWD;
  using FRSZ = RCR4_fields_::FRSZ;
  using FPACK = RCR4_fields_::FPACK;
  using FCOMB = RCR4_fields_::FCOMB;
  using FCONT = RCR4_fields_::FCONT;
};

// Receive Configuration 5
struct RCR5_fields_ {
  // First Bit Shifted
  using FBT = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Word 0 Width
  using W0W = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Word N Width
  using WNW = ftl::mmio::Field<5, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RCR5_fields_

struct RCR5 : ftl::mmio::Register<
    0x4040409Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<8, 0>,
    RCR5_fields_::FBT,
    ftl::mmio::Reserved<3, 13>,
    RCR5_fields_::W0W,
    ftl::mmio::Reserved<3, 21>,
    RCR5_fields_::WNW,
    ftl::mmio::Reserved<3, 29>> {
  using FBT = RCR5_fields_::FBT;
  using W0W = RCR5_fields_::W0W;
  using WNW = RCR5_fields_::WNW;
};

// Receive Data
struct RDR_fields_ {
  // Receive Data Register
  using RDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RDR_fields_

template<std::uint32_t Index>
struct RDR : ftl::mmio::Register<
    0x404040A0u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RDR_fields_::RDR> {
  static_assert(Index < 4u, "RDR: Index out of range");
  using value_ = RDR_fields_::RDR;
};

// Receive FIFO
struct RFR_fields_ {
  enum class eRCP : std::uint32_t {
    // No effect.
    eDISABLE = 0,
    // FIFO combine is enabled for FIFO reads and this FIFO will be read on the next FIFO read.
    eENABLE = 1,
  };

  // Read FIFO Pointer
  using RFP = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Receive Channel Pointer
  using RCP = ftl::mmio::Field<1, 15, eRCP, ftl::mmio::RO, ftl::mmio::Normal>;
  // Write FIFO Pointer
  using WFP = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RFR_fields_

template<std::uint32_t Index>
struct RFR : ftl::mmio::Register<
    0x404040C0u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RFR_fields_::RFP,
    ftl::mmio::Reserved<9, 6>,
    RFR_fields_::RCP,
    RFR_fields_::WFP,
    ftl::mmio::Reserved<10, 22>> {
  static_assert(Index < 4u, "RFR: Index out of range");
  using eRCP = RFR_fields_::eRCP;
  using RFP = RFR_fields_::RFP;
  using RCP = RFR_fields_::RCP;
  using WFP = RFR_fields_::WFP;
};

// Receive Mask
struct RMR_fields_ {
  enum class eRWM : std::uint32_t {
    // Word N is enabled.
    eWORD_N_ENABLED = 0,
    // Word N is masked.
    eWORD_N_MASKED = 1,
  };

  // Receive Word Mask
  using RWM = ftl::mmio::Field<32, 0, eRWM, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RMR_fields_

struct RMR : ftl::mmio::Register<
    0x404040E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RMR_fields_::RWM> {
  using eRWM = RMR_fields_::eRWM;
  using RWM = RMR_fields_::RWM;
};

}  // namespace regs::sai1