#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SAI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Sai1 {
  // Version ID
  struct VeridFields {
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
  };  // struct VeridFields

  struct VERID : ftl::mmio::Register<
      0x40404000u,
      std::uint32_t,
      0x03010000u,
      ftl::mmio::RO,
      VeridFields::FEATURE,
      VeridFields::MINOR,
      VeridFields::MAJOR> {
    using eFEATURE = VeridFields::eFEATURE;
    using FEATURE = VeridFields::FEATURE;
    using MINOR = VeridFields::MINOR;
    using MAJOR = VeridFields::MAJOR;
  };

  // Parameter
  struct ParamFields {
    // Number of Datalines
    using DATALINE = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // FIFO Size
    using FIFO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Frame Size
    using FRAME = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ParamFields

  struct PARAM : ftl::mmio::Register<
      0x40404004u,
      std::uint32_t,
      0x00050504u,
      ftl::mmio::RO,
      ParamFields::DATALINE,
      ftl::mmio::Reserved<4, 4>,
      ParamFields::FIFO,
      ftl::mmio::Reserved<4, 12>,
      ParamFields::FRAME,
      ftl::mmio::Reserved<12, 20>> {
    using DATALINE = ParamFields::DATALINE;
    using FIFO = ParamFields::FIFO;
    using FRAME = ParamFields::FRAME;
  };

  // Transmit Control
  struct TcsrFields {
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
  };  // struct TcsrFields

  struct TCSR : ftl::mmio::Register<
      0x40404008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcsrFields::FRDE,
      TcsrFields::FWDE,
      ftl::mmio::Reserved<6, 2>,
      TcsrFields::FRIE,
      TcsrFields::FWIE,
      TcsrFields::FEIE,
      TcsrFields::SEIE,
      TcsrFields::WSIE,
      ftl::mmio::Reserved<3, 13>,
      TcsrFields::FRF,
      TcsrFields::FWF,
      TcsrFields::FEF,
      TcsrFields::SEF,
      TcsrFields::WSF,
      ftl::mmio::Reserved<3, 21>,
      TcsrFields::SR,
      TcsrFields::FR,
      ftl::mmio::Reserved<2, 26>,
      TcsrFields::BCE,
      TcsrFields::DBGE,
      TcsrFields::STOPE,
      TcsrFields::TE> {
    using eFRDE = TcsrFields::eFRDE;
    using eFWDE = TcsrFields::eFWDE;
    using eFRIE = TcsrFields::eFRIE;
    using eFWIE = TcsrFields::eFWIE;
    using eFEIE = TcsrFields::eFEIE;
    using eSEIE = TcsrFields::eSEIE;
    using eWSIE = TcsrFields::eWSIE;
    using eFRF = TcsrFields::eFRF;
    using eFWF = TcsrFields::eFWF;
    using eFEF = TcsrFields::eFEF;
    using eSEF = TcsrFields::eSEF;
    using eWSF = TcsrFields::eWSF;
    using eSR = TcsrFields::eSR;
    using eFR = TcsrFields::eFR;
    using eBCE = TcsrFields::eBCE;
    using eDBGE = TcsrFields::eDBGE;
    using eSTOPE = TcsrFields::eSTOPE;
    using eTE = TcsrFields::eTE;
    using FRDE = TcsrFields::FRDE;
    using FWDE = TcsrFields::FWDE;
    using FRIE = TcsrFields::FRIE;
    using FWIE = TcsrFields::FWIE;
    using FEIE = TcsrFields::FEIE;
    using SEIE = TcsrFields::SEIE;
    using WSIE = TcsrFields::WSIE;
    using FRF = TcsrFields::FRF;
    using FWF = TcsrFields::FWF;
    using FEF = TcsrFields::FEF;
    using SEF = TcsrFields::SEF;
    using WSF = TcsrFields::WSF;
    using SR = TcsrFields::SR;
    using FR = TcsrFields::FR;
    using BCE = TcsrFields::BCE;
    using DBGE = TcsrFields::DBGE;
    using STOPE = TcsrFields::STOPE;
    using TE = TcsrFields::TE;
  };

  // Transmit Configuration 1
  struct Tcr1Fields {
    // Transmit FIFO Watermark
    using TFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tcr1Fields

  struct TCR1 : ftl::mmio::Register<
      0x4040400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcr1Fields::TFW,
      ftl::mmio::Reserved<27, 5>> {
    using TFW = Tcr1Fields::TFW;
  };

  // Transmit Configuration 2
  struct Tcr2Fields {
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
  };  // struct Tcr2Fields

  struct TCR2 : ftl::mmio::Register<
      0x40404010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcr2Fields::DIV,
      ftl::mmio::Reserved<15, 8>,
      Tcr2Fields::BYP,
      Tcr2Fields::BCD,
      Tcr2Fields::BCP,
      Tcr2Fields::MSEL,
      Tcr2Fields::BCI,
      Tcr2Fields::BCS,
      Tcr2Fields::SYNC,
      ftl::mmio::Reserved<1, 31>> {
    using eBYP = Tcr2Fields::eBYP;
    using eBCD = Tcr2Fields::eBCD;
    using eBCP = Tcr2Fields::eBCP;
    using eMSEL = Tcr2Fields::eMSEL;
    using eBCI = Tcr2Fields::eBCI;
    using eBCS = Tcr2Fields::eBCS;
    using eSYNC = Tcr2Fields::eSYNC;
    using DIV = Tcr2Fields::DIV;
    using BYP = Tcr2Fields::BYP;
    using BCD = Tcr2Fields::BCD;
    using BCP = Tcr2Fields::BCP;
    using MSEL = Tcr2Fields::MSEL;
    using BCI = Tcr2Fields::BCI;
    using BCS = Tcr2Fields::BCS;
    using SYNC = Tcr2Fields::SYNC;
  };

  // Transmit Configuration 3
  struct Tcr3Fields {
    // Word Flag Configuration
    using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Channel Enable
    using TCE = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel FIFO Reset
    using CFR = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tcr3Fields

  struct TCR3 : ftl::mmio::Register<
      0x40404014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcr3Fields::WDFL,
      ftl::mmio::Reserved<11, 5>,
      Tcr3Fields::TCE,
      ftl::mmio::Reserved<4, 20>,
      Tcr3Fields::CFR,
      ftl::mmio::Reserved<4, 28>> {
    using WDFL = Tcr3Fields::WDFL;
    using TCE = Tcr3Fields::TCE;
    using CFR = Tcr3Fields::CFR;
  };

  // Transmit Configuration 4
  struct Tcr4Fields {
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
  };  // struct Tcr4Fields

  struct TCR4 : ftl::mmio::Register<
      0x40404018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcr4Fields::FSD,
      Tcr4Fields::FSP,
      Tcr4Fields::ONDEM,
      Tcr4Fields::FSE,
      Tcr4Fields::MF,
      Tcr4Fields::CHMOD,
      ftl::mmio::Reserved<2, 6>,
      Tcr4Fields::SYWD,
      ftl::mmio::Reserved<3, 13>,
      Tcr4Fields::FRSZ,
      ftl::mmio::Reserved<3, 21>,
      Tcr4Fields::FPACK,
      Tcr4Fields::FCOMB,
      Tcr4Fields::FCONT,
      ftl::mmio::Reserved<3, 29>> {
    using eFSD = Tcr4Fields::eFSD;
    using eFSP = Tcr4Fields::eFSP;
    using eONDEM = Tcr4Fields::eONDEM;
    using eFSE = Tcr4Fields::eFSE;
    using eMF = Tcr4Fields::eMF;
    using eCHMOD = Tcr4Fields::eCHMOD;
    using eFPACK = Tcr4Fields::eFPACK;
    using eFCOMB = Tcr4Fields::eFCOMB;
    using eFCONT = Tcr4Fields::eFCONT;
    using FSD = Tcr4Fields::FSD;
    using FSP = Tcr4Fields::FSP;
    using ONDEM = Tcr4Fields::ONDEM;
    using FSE = Tcr4Fields::FSE;
    using MF = Tcr4Fields::MF;
    using CHMOD = Tcr4Fields::CHMOD;
    using SYWD = Tcr4Fields::SYWD;
    using FRSZ = Tcr4Fields::FRSZ;
    using FPACK = Tcr4Fields::FPACK;
    using FCOMB = Tcr4Fields::FCOMB;
    using FCONT = Tcr4Fields::FCONT;
  };

  // Transmit Configuration 5
  struct Tcr5Fields {
    // First Bit Shifted
    using FBT = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Word 0 Width
    using W0W = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Word N Width
    using WNW = ftl::mmio::Field<5, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tcr5Fields

  struct TCR5 : ftl::mmio::Register<
      0x4040401Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      Tcr5Fields::FBT,
      ftl::mmio::Reserved<3, 13>,
      Tcr5Fields::W0W,
      ftl::mmio::Reserved<3, 21>,
      Tcr5Fields::WNW,
      ftl::mmio::Reserved<3, 29>> {
    using FBT = Tcr5Fields::FBT;
    using W0W = Tcr5Fields::W0W;
    using WNW = Tcr5Fields::WNW;
  };

  // Transmit Data
  struct TdrFields {
    // Transmit Data Register
    using TDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TdrFields

  template<std::uint32_t Index>
  struct TDR : ftl::mmio::Register<
      0x40404020u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TdrFields::TDR> {
    static_assert(Index < 4u, "TDR: Index out of range");
    using VALUE = TdrFields::TDR;
  };

  // Transmit FIFO
  struct TfrFields {
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
  };  // struct TfrFields

  template<std::uint32_t Index>
  struct TFR : ftl::mmio::Register<
      0x40404040u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      TfrFields::RFP,
      ftl::mmio::Reserved<10, 6>,
      TfrFields::WFP,
      ftl::mmio::Reserved<9, 22>,
      TfrFields::WCP> {
    static_assert(Index < 4u, "TFR: Index out of range");
    using eWCP = TfrFields::eWCP;
    using RFP = TfrFields::RFP;
    using WFP = TfrFields::WFP;
    using WCP = TfrFields::WCP;
  };

  // Transmit Mask
  struct TmrFields {
    enum class eTWM : std::uint32_t {
      // Word N is enabled.
      eWORD_N_ENABLED = 0,
      // Word N is masked. The transmit data pins are tri-stated or drive zero when masked.
      eWORD_N_MASKED = 1,
    };

    // Transmit Word Mask
    using TWM = ftl::mmio::Field<32, 0, eTWM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TmrFields

  struct TMR : ftl::mmio::Register<
      0x40404060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TmrFields::TWM> {
    using eTWM = TmrFields::eTWM;
    using TWM = TmrFields::TWM;
  };

  // Receive Control
  struct RcsrFields {
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
  };  // struct RcsrFields

  struct RCSR : ftl::mmio::Register<
      0x40404088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RcsrFields::FRDE,
      RcsrFields::FWDE,
      ftl::mmio::Reserved<6, 2>,
      RcsrFields::FRIE,
      RcsrFields::FWIE,
      RcsrFields::FEIE,
      RcsrFields::SEIE,
      RcsrFields::WSIE,
      ftl::mmio::Reserved<3, 13>,
      RcsrFields::FRF,
      RcsrFields::FWF,
      RcsrFields::FEF,
      RcsrFields::SEF,
      RcsrFields::WSF,
      ftl::mmio::Reserved<3, 21>,
      RcsrFields::SR,
      RcsrFields::FR,
      ftl::mmio::Reserved<2, 26>,
      RcsrFields::BCE,
      RcsrFields::DBGE,
      RcsrFields::STOPE,
      RcsrFields::RE> {
    using eFRDE = RcsrFields::eFRDE;
    using eFWDE = RcsrFields::eFWDE;
    using eFRIE = RcsrFields::eFRIE;
    using eFWIE = RcsrFields::eFWIE;
    using eFEIE = RcsrFields::eFEIE;
    using eSEIE = RcsrFields::eSEIE;
    using eWSIE = RcsrFields::eWSIE;
    using eFRF = RcsrFields::eFRF;
    using eFWF = RcsrFields::eFWF;
    using eFEF = RcsrFields::eFEF;
    using eSEF = RcsrFields::eSEF;
    using eWSF = RcsrFields::eWSF;
    using eSR = RcsrFields::eSR;
    using eFR = RcsrFields::eFR;
    using eBCE = RcsrFields::eBCE;
    using eDBGE = RcsrFields::eDBGE;
    using eSTOPE = RcsrFields::eSTOPE;
    using eRE = RcsrFields::eRE;
    using FRDE = RcsrFields::FRDE;
    using FWDE = RcsrFields::FWDE;
    using FRIE = RcsrFields::FRIE;
    using FWIE = RcsrFields::FWIE;
    using FEIE = RcsrFields::FEIE;
    using SEIE = RcsrFields::SEIE;
    using WSIE = RcsrFields::WSIE;
    using FRF = RcsrFields::FRF;
    using FWF = RcsrFields::FWF;
    using FEF = RcsrFields::FEF;
    using SEF = RcsrFields::SEF;
    using WSF = RcsrFields::WSF;
    using SR = RcsrFields::SR;
    using FR = RcsrFields::FR;
    using BCE = RcsrFields::BCE;
    using DBGE = RcsrFields::DBGE;
    using STOPE = RcsrFields::STOPE;
    using RE = RcsrFields::RE;
  };

  // Receive Configuration 1
  struct Rcr1Fields {
    // Receive FIFO Watermark
    using RFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rcr1Fields

  struct RCR1 : ftl::mmio::Register<
      0x4040408Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Rcr1Fields::RFW,
      ftl::mmio::Reserved<27, 5>> {
    using RFW = Rcr1Fields::RFW;
  };

  // Receive Configuration 2
  struct Rcr2Fields {
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
  };  // struct Rcr2Fields

  struct RCR2 : ftl::mmio::Register<
      0x40404090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Rcr2Fields::DIV,
      ftl::mmio::Reserved<15, 8>,
      Rcr2Fields::BYP,
      Rcr2Fields::BCD,
      Rcr2Fields::BCP,
      Rcr2Fields::MSEL,
      Rcr2Fields::BCI,
      Rcr2Fields::BCS,
      Rcr2Fields::SYNC,
      ftl::mmio::Reserved<1, 31>> {
    using eBYP = Rcr2Fields::eBYP;
    using eBCD = Rcr2Fields::eBCD;
    using eBCP = Rcr2Fields::eBCP;
    using eMSEL = Rcr2Fields::eMSEL;
    using eBCI = Rcr2Fields::eBCI;
    using eBCS = Rcr2Fields::eBCS;
    using eSYNC = Rcr2Fields::eSYNC;
    using DIV = Rcr2Fields::DIV;
    using BYP = Rcr2Fields::BYP;
    using BCD = Rcr2Fields::BCD;
    using BCP = Rcr2Fields::BCP;
    using MSEL = Rcr2Fields::MSEL;
    using BCI = Rcr2Fields::BCI;
    using BCS = Rcr2Fields::BCS;
    using SYNC = Rcr2Fields::SYNC;
  };

  // Receive Configuration 3
  struct Rcr3Fields {
    // Word Flag Configuration
    using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Channel Enable
    using RCE = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel FIFO Reset
    using CFR = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rcr3Fields

  struct RCR3 : ftl::mmio::Register<
      0x40404094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Rcr3Fields::WDFL,
      ftl::mmio::Reserved<11, 5>,
      Rcr3Fields::RCE,
      ftl::mmio::Reserved<4, 20>,
      Rcr3Fields::CFR,
      ftl::mmio::Reserved<4, 28>> {
    using WDFL = Rcr3Fields::WDFL;
    using RCE = Rcr3Fields::RCE;
    using CFR = Rcr3Fields::CFR;
  };

  // Receive Configuration 4
  struct Rcr4Fields {
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
  };  // struct Rcr4Fields

  struct RCR4 : ftl::mmio::Register<
      0x40404098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Rcr4Fields::FSD,
      Rcr4Fields::FSP,
      Rcr4Fields::ONDEM,
      Rcr4Fields::FSE,
      Rcr4Fields::MF,
      ftl::mmio::Reserved<3, 5>,
      Rcr4Fields::SYWD,
      ftl::mmio::Reserved<3, 13>,
      Rcr4Fields::FRSZ,
      ftl::mmio::Reserved<3, 21>,
      Rcr4Fields::FPACK,
      Rcr4Fields::FCOMB,
      Rcr4Fields::FCONT,
      ftl::mmio::Reserved<3, 29>> {
    using eFSD = Rcr4Fields::eFSD;
    using eFSP = Rcr4Fields::eFSP;
    using eONDEM = Rcr4Fields::eONDEM;
    using eFSE = Rcr4Fields::eFSE;
    using eMF = Rcr4Fields::eMF;
    using eFPACK = Rcr4Fields::eFPACK;
    using eFCOMB = Rcr4Fields::eFCOMB;
    using eFCONT = Rcr4Fields::eFCONT;
    using FSD = Rcr4Fields::FSD;
    using FSP = Rcr4Fields::FSP;
    using ONDEM = Rcr4Fields::ONDEM;
    using FSE = Rcr4Fields::FSE;
    using MF = Rcr4Fields::MF;
    using SYWD = Rcr4Fields::SYWD;
    using FRSZ = Rcr4Fields::FRSZ;
    using FPACK = Rcr4Fields::FPACK;
    using FCOMB = Rcr4Fields::FCOMB;
    using FCONT = Rcr4Fields::FCONT;
  };

  // Receive Configuration 5
  struct Rcr5Fields {
    // First Bit Shifted
    using FBT = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Word 0 Width
    using W0W = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Word N Width
    using WNW = ftl::mmio::Field<5, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rcr5Fields

  struct RCR5 : ftl::mmio::Register<
      0x4040409Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      Rcr5Fields::FBT,
      ftl::mmio::Reserved<3, 13>,
      Rcr5Fields::W0W,
      ftl::mmio::Reserved<3, 21>,
      Rcr5Fields::WNW,
      ftl::mmio::Reserved<3, 29>> {
    using FBT = Rcr5Fields::FBT;
    using W0W = Rcr5Fields::W0W;
    using WNW = Rcr5Fields::WNW;
  };

  // Receive Data
  struct RdrFields {
    // Receive Data Register
    using RDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RdrFields

  template<std::uint32_t Index>
  struct RDR : ftl::mmio::Register<
      0x404040A0u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RdrFields::RDR> {
    static_assert(Index < 4u, "RDR: Index out of range");
    using VALUE = RdrFields::RDR;
  };

  // Receive FIFO
  struct RfrFields {
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
  };  // struct RfrFields

  template<std::uint32_t Index>
  struct RFR : ftl::mmio::Register<
      0x404040C0u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RfrFields::RFP,
      ftl::mmio::Reserved<9, 6>,
      RfrFields::RCP,
      RfrFields::WFP,
      ftl::mmio::Reserved<10, 22>> {
    static_assert(Index < 4u, "RFR: Index out of range");
    using eRCP = RfrFields::eRCP;
    using RFP = RfrFields::RFP;
    using RCP = RfrFields::RCP;
    using WFP = RfrFields::WFP;
  };

  // Receive Mask
  struct RmrFields {
    enum class eRWM : std::uint32_t {
      // Word N is enabled.
      eWORD_N_ENABLED = 0,
      // Word N is masked.
      eWORD_N_MASKED = 1,
    };

    // Receive Word Mask
    using RWM = ftl::mmio::Field<32, 0, eRWM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RmrFields

  struct RMR : ftl::mmio::Register<
      0x404040E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RmrFields::RWM> {
    using eRWM = RmrFields::eRWM;
    using RWM = RmrFields::RWM;
  };

};

}  // namespace regs