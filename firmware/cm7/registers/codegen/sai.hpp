#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SAI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Sai {
  static_assert(
        Instance == 2u || Instance == 3u || Instance == 4u,
        "Sai: Instance must be one of 2, 3, 4");

  static constexpr std::uintptr_t kBase =
      Instance == 2u ? 0x40408000u :
      Instance == 3u ? 0x4040C000u :
      Instance == 4u ? 0x40C40000u :
      0u;

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
      kBase + 0x0u,
      std::uint32_t,
      0x03010000u,
      ftl::mmio::RO,
      typename VeridFields::FEATURE,
      typename VeridFields::MINOR,
      typename VeridFields::MAJOR> {
    using eFEATURE = typename VeridFields::eFEATURE;
    using FEATURE = typename VeridFields::FEATURE;
    using MINOR = typename VeridFields::MINOR;
    using MAJOR = typename VeridFields::MAJOR;
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
      kBase + 0x4u,
      std::uint32_t,
      0x00050501u,
      ftl::mmio::RO,
      typename ParamFields::DATALINE,
      ftl::mmio::Reserved<4, 4>,
      typename ParamFields::FIFO,
      ftl::mmio::Reserved<4, 12>,
      typename ParamFields::FRAME,
      ftl::mmio::Reserved<12, 20>> {
    using DATALINE = typename ParamFields::DATALINE;
    using FIFO = typename ParamFields::FIFO;
    using FRAME = typename ParamFields::FRAME;
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
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TcsrFields::FRDE,
      typename TcsrFields::FWDE,
      ftl::mmio::Reserved<6, 2>,
      typename TcsrFields::FRIE,
      typename TcsrFields::FWIE,
      typename TcsrFields::FEIE,
      typename TcsrFields::SEIE,
      typename TcsrFields::WSIE,
      ftl::mmio::Reserved<3, 13>,
      typename TcsrFields::FRF,
      typename TcsrFields::FWF,
      typename TcsrFields::FEF,
      typename TcsrFields::SEF,
      typename TcsrFields::WSF,
      ftl::mmio::Reserved<3, 21>,
      typename TcsrFields::SR,
      typename TcsrFields::FR,
      ftl::mmio::Reserved<2, 26>,
      typename TcsrFields::BCE,
      typename TcsrFields::DBGE,
      typename TcsrFields::STOPE,
      typename TcsrFields::TE> {
    using eFRDE = typename TcsrFields::eFRDE;
    using eFWDE = typename TcsrFields::eFWDE;
    using eFRIE = typename TcsrFields::eFRIE;
    using eFWIE = typename TcsrFields::eFWIE;
    using eFEIE = typename TcsrFields::eFEIE;
    using eSEIE = typename TcsrFields::eSEIE;
    using eWSIE = typename TcsrFields::eWSIE;
    using eFRF = typename TcsrFields::eFRF;
    using eFWF = typename TcsrFields::eFWF;
    using eFEF = typename TcsrFields::eFEF;
    using eSEF = typename TcsrFields::eSEF;
    using eWSF = typename TcsrFields::eWSF;
    using eSR = typename TcsrFields::eSR;
    using eFR = typename TcsrFields::eFR;
    using eBCE = typename TcsrFields::eBCE;
    using eDBGE = typename TcsrFields::eDBGE;
    using eSTOPE = typename TcsrFields::eSTOPE;
    using eTE = typename TcsrFields::eTE;
    using FRDE = typename TcsrFields::FRDE;
    using FWDE = typename TcsrFields::FWDE;
    using FRIE = typename TcsrFields::FRIE;
    using FWIE = typename TcsrFields::FWIE;
    using FEIE = typename TcsrFields::FEIE;
    using SEIE = typename TcsrFields::SEIE;
    using WSIE = typename TcsrFields::WSIE;
    using FRF = typename TcsrFields::FRF;
    using FWF = typename TcsrFields::FWF;
    using FEF = typename TcsrFields::FEF;
    using SEF = typename TcsrFields::SEF;
    using WSF = typename TcsrFields::WSF;
    using SR = typename TcsrFields::SR;
    using FR = typename TcsrFields::FR;
    using BCE = typename TcsrFields::BCE;
    using DBGE = typename TcsrFields::DBGE;
    using STOPE = typename TcsrFields::STOPE;
    using TE = typename TcsrFields::TE;
  };

  // Transmit Configuration 1
  struct Tcr1Fields {
    // Transmit FIFO Watermark
    using TFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tcr1Fields

  struct TCR1 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Tcr1Fields::TFW,
      ftl::mmio::Reserved<27, 5>> {
    using TFW = typename Tcr1Fields::TFW;
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
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Tcr2Fields::DIV,
      ftl::mmio::Reserved<15, 8>,
      typename Tcr2Fields::BYP,
      typename Tcr2Fields::BCD,
      typename Tcr2Fields::BCP,
      typename Tcr2Fields::MSEL,
      typename Tcr2Fields::BCI,
      typename Tcr2Fields::BCS,
      typename Tcr2Fields::SYNC,
      ftl::mmio::Reserved<1, 31>> {
    using eBYP = typename Tcr2Fields::eBYP;
    using eBCD = typename Tcr2Fields::eBCD;
    using eBCP = typename Tcr2Fields::eBCP;
    using eMSEL = typename Tcr2Fields::eMSEL;
    using eBCI = typename Tcr2Fields::eBCI;
    using eBCS = typename Tcr2Fields::eBCS;
    using eSYNC = typename Tcr2Fields::eSYNC;
    using DIV = typename Tcr2Fields::DIV;
    using BYP = typename Tcr2Fields::BYP;
    using BCD = typename Tcr2Fields::BCD;
    using BCP = typename Tcr2Fields::BCP;
    using MSEL = typename Tcr2Fields::MSEL;
    using BCI = typename Tcr2Fields::BCI;
    using BCS = typename Tcr2Fields::BCS;
    using SYNC = typename Tcr2Fields::SYNC;
  };

  // Transmit Configuration 3
  struct Tcr3Fields {
    // Word Flag Configuration
    using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Channel Enable
    using TCE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tcr3Fields

  struct TCR3 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Tcr3Fields::WDFL,
      ftl::mmio::Reserved<11, 5>,
      typename Tcr3Fields::TCE,
      ftl::mmio::Reserved<15, 17>> {
    using WDFL = typename Tcr3Fields::WDFL;
    using TCE = typename Tcr3Fields::TCE;
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
    // FIFO Continue on Error
    using FCONT = ftl::mmio::Field<1, 28, eFCONT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tcr4Fields

  struct TCR4 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Tcr4Fields::FSD,
      typename Tcr4Fields::FSP,
      typename Tcr4Fields::ONDEM,
      typename Tcr4Fields::FSE,
      typename Tcr4Fields::MF,
      typename Tcr4Fields::CHMOD,
      ftl::mmio::Reserved<2, 6>,
      typename Tcr4Fields::SYWD,
      ftl::mmio::Reserved<3, 13>,
      typename Tcr4Fields::FRSZ,
      ftl::mmio::Reserved<3, 21>,
      typename Tcr4Fields::FPACK,
      ftl::mmio::Reserved<2, 26>,
      typename Tcr4Fields::FCONT,
      ftl::mmio::Reserved<3, 29>> {
    using eFSD = typename Tcr4Fields::eFSD;
    using eFSP = typename Tcr4Fields::eFSP;
    using eONDEM = typename Tcr4Fields::eONDEM;
    using eFSE = typename Tcr4Fields::eFSE;
    using eMF = typename Tcr4Fields::eMF;
    using eCHMOD = typename Tcr4Fields::eCHMOD;
    using eFPACK = typename Tcr4Fields::eFPACK;
    using eFCONT = typename Tcr4Fields::eFCONT;
    using FSD = typename Tcr4Fields::FSD;
    using FSP = typename Tcr4Fields::FSP;
    using ONDEM = typename Tcr4Fields::ONDEM;
    using FSE = typename Tcr4Fields::FSE;
    using MF = typename Tcr4Fields::MF;
    using CHMOD = typename Tcr4Fields::CHMOD;
    using SYWD = typename Tcr4Fields::SYWD;
    using FRSZ = typename Tcr4Fields::FRSZ;
    using FPACK = typename Tcr4Fields::FPACK;
    using FCONT = typename Tcr4Fields::FCONT;
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
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      typename Tcr5Fields::FBT,
      ftl::mmio::Reserved<3, 13>,
      typename Tcr5Fields::W0W,
      ftl::mmio::Reserved<3, 21>,
      typename Tcr5Fields::WNW,
      ftl::mmio::Reserved<3, 29>> {
    using FBT = typename Tcr5Fields::FBT;
    using W0W = typename Tcr5Fields::W0W;
    using WNW = typename Tcr5Fields::WNW;
  };

  // Transmit Data
  struct Tdr0Fields {
    // Transmit Data Register
    using TDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tdr0Fields

  struct TDR0 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Tdr0Fields::TDR> {
    using TDR = typename Tdr0Fields::TDR;
  };

  // Transmit FIFO
  struct Tfr0Fields {
    // Read FIFO Pointer
    using RFP = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write FIFO Pointer
    using WFP = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Tfr0Fields

  struct TFR0 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Tfr0Fields::RFP,
      ftl::mmio::Reserved<10, 6>,
      typename Tfr0Fields::WFP,
      ftl::mmio::Reserved<10, 22>> {
    using RFP = typename Tfr0Fields::RFP;
    using WFP = typename Tfr0Fields::WFP;
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
      kBase + 0x60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TmrFields::TWM> {
    using eTWM = typename TmrFields::eTWM;
    using TWM = typename TmrFields::TWM;
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
      kBase + 0x88u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RcsrFields::FRDE,
      typename RcsrFields::FWDE,
      ftl::mmio::Reserved<6, 2>,
      typename RcsrFields::FRIE,
      typename RcsrFields::FWIE,
      typename RcsrFields::FEIE,
      typename RcsrFields::SEIE,
      typename RcsrFields::WSIE,
      ftl::mmio::Reserved<3, 13>,
      typename RcsrFields::FRF,
      typename RcsrFields::FWF,
      typename RcsrFields::FEF,
      typename RcsrFields::SEF,
      typename RcsrFields::WSF,
      ftl::mmio::Reserved<3, 21>,
      typename RcsrFields::SR,
      typename RcsrFields::FR,
      ftl::mmio::Reserved<2, 26>,
      typename RcsrFields::BCE,
      typename RcsrFields::DBGE,
      typename RcsrFields::STOPE,
      typename RcsrFields::RE> {
    using eFRDE = typename RcsrFields::eFRDE;
    using eFWDE = typename RcsrFields::eFWDE;
    using eFRIE = typename RcsrFields::eFRIE;
    using eFWIE = typename RcsrFields::eFWIE;
    using eFEIE = typename RcsrFields::eFEIE;
    using eSEIE = typename RcsrFields::eSEIE;
    using eWSIE = typename RcsrFields::eWSIE;
    using eFRF = typename RcsrFields::eFRF;
    using eFWF = typename RcsrFields::eFWF;
    using eFEF = typename RcsrFields::eFEF;
    using eSEF = typename RcsrFields::eSEF;
    using eWSF = typename RcsrFields::eWSF;
    using eSR = typename RcsrFields::eSR;
    using eFR = typename RcsrFields::eFR;
    using eBCE = typename RcsrFields::eBCE;
    using eDBGE = typename RcsrFields::eDBGE;
    using eSTOPE = typename RcsrFields::eSTOPE;
    using eRE = typename RcsrFields::eRE;
    using FRDE = typename RcsrFields::FRDE;
    using FWDE = typename RcsrFields::FWDE;
    using FRIE = typename RcsrFields::FRIE;
    using FWIE = typename RcsrFields::FWIE;
    using FEIE = typename RcsrFields::FEIE;
    using SEIE = typename RcsrFields::SEIE;
    using WSIE = typename RcsrFields::WSIE;
    using FRF = typename RcsrFields::FRF;
    using FWF = typename RcsrFields::FWF;
    using FEF = typename RcsrFields::FEF;
    using SEF = typename RcsrFields::SEF;
    using WSF = typename RcsrFields::WSF;
    using SR = typename RcsrFields::SR;
    using FR = typename RcsrFields::FR;
    using BCE = typename RcsrFields::BCE;
    using DBGE = typename RcsrFields::DBGE;
    using STOPE = typename RcsrFields::STOPE;
    using RE = typename RcsrFields::RE;
  };

  // Receive Configuration 1
  struct Rcr1Fields {
    // Receive FIFO Watermark
    using RFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rcr1Fields

  struct RCR1 : ftl::mmio::Register<
      kBase + 0x8Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Rcr1Fields::RFW,
      ftl::mmio::Reserved<27, 5>> {
    using RFW = typename Rcr1Fields::RFW;
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
      kBase + 0x90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Rcr2Fields::DIV,
      ftl::mmio::Reserved<15, 8>,
      typename Rcr2Fields::BYP,
      typename Rcr2Fields::BCD,
      typename Rcr2Fields::BCP,
      typename Rcr2Fields::MSEL,
      typename Rcr2Fields::BCI,
      typename Rcr2Fields::BCS,
      typename Rcr2Fields::SYNC,
      ftl::mmio::Reserved<1, 31>> {
    using eBYP = typename Rcr2Fields::eBYP;
    using eBCD = typename Rcr2Fields::eBCD;
    using eBCP = typename Rcr2Fields::eBCP;
    using eMSEL = typename Rcr2Fields::eMSEL;
    using eBCI = typename Rcr2Fields::eBCI;
    using eBCS = typename Rcr2Fields::eBCS;
    using eSYNC = typename Rcr2Fields::eSYNC;
    using DIV = typename Rcr2Fields::DIV;
    using BYP = typename Rcr2Fields::BYP;
    using BCD = typename Rcr2Fields::BCD;
    using BCP = typename Rcr2Fields::BCP;
    using MSEL = typename Rcr2Fields::MSEL;
    using BCI = typename Rcr2Fields::BCI;
    using BCS = typename Rcr2Fields::BCS;
    using SYNC = typename Rcr2Fields::SYNC;
  };

  // Receive Configuration 3
  struct Rcr3Fields {
    // Word Flag Configuration
    using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Channel Enable
    using RCE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rcr3Fields

  struct RCR3 : ftl::mmio::Register<
      kBase + 0x94u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Rcr3Fields::WDFL,
      ftl::mmio::Reserved<11, 5>,
      typename Rcr3Fields::RCE,
      ftl::mmio::Reserved<15, 17>> {
    using WDFL = typename Rcr3Fields::WDFL;
    using RCE = typename Rcr3Fields::RCE;
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
    // FIFO Continue on Error
    using FCONT = ftl::mmio::Field<1, 28, eFCONT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rcr4Fields

  struct RCR4 : ftl::mmio::Register<
      kBase + 0x98u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Rcr4Fields::FSD,
      typename Rcr4Fields::FSP,
      typename Rcr4Fields::ONDEM,
      typename Rcr4Fields::FSE,
      typename Rcr4Fields::MF,
      ftl::mmio::Reserved<3, 5>,
      typename Rcr4Fields::SYWD,
      ftl::mmio::Reserved<3, 13>,
      typename Rcr4Fields::FRSZ,
      ftl::mmio::Reserved<3, 21>,
      typename Rcr4Fields::FPACK,
      ftl::mmio::Reserved<2, 26>,
      typename Rcr4Fields::FCONT,
      ftl::mmio::Reserved<3, 29>> {
    using eFSD = typename Rcr4Fields::eFSD;
    using eFSP = typename Rcr4Fields::eFSP;
    using eONDEM = typename Rcr4Fields::eONDEM;
    using eFSE = typename Rcr4Fields::eFSE;
    using eMF = typename Rcr4Fields::eMF;
    using eFPACK = typename Rcr4Fields::eFPACK;
    using eFCONT = typename Rcr4Fields::eFCONT;
    using FSD = typename Rcr4Fields::FSD;
    using FSP = typename Rcr4Fields::FSP;
    using ONDEM = typename Rcr4Fields::ONDEM;
    using FSE = typename Rcr4Fields::FSE;
    using MF = typename Rcr4Fields::MF;
    using SYWD = typename Rcr4Fields::SYWD;
    using FRSZ = typename Rcr4Fields::FRSZ;
    using FPACK = typename Rcr4Fields::FPACK;
    using FCONT = typename Rcr4Fields::FCONT;
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
      kBase + 0x9Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      typename Rcr5Fields::FBT,
      ftl::mmio::Reserved<3, 13>,
      typename Rcr5Fields::W0W,
      ftl::mmio::Reserved<3, 21>,
      typename Rcr5Fields::WNW,
      ftl::mmio::Reserved<3, 29>> {
    using FBT = typename Rcr5Fields::FBT;
    using W0W = typename Rcr5Fields::W0W;
    using WNW = typename Rcr5Fields::WNW;
  };

  // Receive Data
  struct Rdr0Fields {
    // Receive Data Register
    using RDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rdr0Fields

  struct RDR0 : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Rdr0Fields::RDR> {
    using RDR = typename Rdr0Fields::RDR;
  };

  // Receive FIFO
  struct Rfr0Fields {
    // Read FIFO Pointer
    using RFP = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write FIFO Pointer
    using WFP = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rfr0Fields

  struct RFR0 : ftl::mmio::Register<
      kBase + 0xC0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Rfr0Fields::RFP,
      ftl::mmio::Reserved<10, 6>,
      typename Rfr0Fields::WFP,
      ftl::mmio::Reserved<10, 22>> {
    using RFP = typename Rfr0Fields::RFP;
    using WFP = typename Rfr0Fields::WFP;
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
      kBase + 0xE0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RmrFields::RWM> {
    using eRWM = typename RmrFields::eRWM;
    using RWM = typename RmrFields::RWM;
  };

};

}  // namespace regs