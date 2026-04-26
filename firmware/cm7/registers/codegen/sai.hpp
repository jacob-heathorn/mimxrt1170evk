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
      kBase + 0x0u,
      std::uint32_t,
      0x03010000u,
      ftl::mmio::RO,
      typename VERID_fields_::FEATURE,
      typename VERID_fields_::MINOR,
      typename VERID_fields_::MAJOR> {
    using eFEATURE = typename VERID_fields_::eFEATURE;
    using FEATURE = typename VERID_fields_::FEATURE;
    using MINOR = typename VERID_fields_::MINOR;
    using MAJOR = typename VERID_fields_::MAJOR;
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
      kBase + 0x4u,
      std::uint32_t,
      0x00050501u,
      ftl::mmio::RO,
      typename PARAM_fields_::DATALINE,
      ftl::mmio::Reserved<4, 4>,
      typename PARAM_fields_::FIFO,
      ftl::mmio::Reserved<4, 12>,
      typename PARAM_fields_::FRAME,
      ftl::mmio::Reserved<12, 20>> {
    using DATALINE = typename PARAM_fields_::DATALINE;
    using FIFO = typename PARAM_fields_::FIFO;
    using FRAME = typename PARAM_fields_::FRAME;
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
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TCSR_fields_::FRDE,
      typename TCSR_fields_::FWDE,
      ftl::mmio::Reserved<6, 2>,
      typename TCSR_fields_::FRIE,
      typename TCSR_fields_::FWIE,
      typename TCSR_fields_::FEIE,
      typename TCSR_fields_::SEIE,
      typename TCSR_fields_::WSIE,
      ftl::mmio::Reserved<3, 13>,
      typename TCSR_fields_::FRF,
      typename TCSR_fields_::FWF,
      typename TCSR_fields_::FEF,
      typename TCSR_fields_::SEF,
      typename TCSR_fields_::WSF,
      ftl::mmio::Reserved<3, 21>,
      typename TCSR_fields_::SR,
      typename TCSR_fields_::FR,
      ftl::mmio::Reserved<2, 26>,
      typename TCSR_fields_::BCE,
      typename TCSR_fields_::DBGE,
      typename TCSR_fields_::STOPE,
      typename TCSR_fields_::TE> {
    using eFRDE = typename TCSR_fields_::eFRDE;
    using eFWDE = typename TCSR_fields_::eFWDE;
    using eFRIE = typename TCSR_fields_::eFRIE;
    using eFWIE = typename TCSR_fields_::eFWIE;
    using eFEIE = typename TCSR_fields_::eFEIE;
    using eSEIE = typename TCSR_fields_::eSEIE;
    using eWSIE = typename TCSR_fields_::eWSIE;
    using eFRF = typename TCSR_fields_::eFRF;
    using eFWF = typename TCSR_fields_::eFWF;
    using eFEF = typename TCSR_fields_::eFEF;
    using eSEF = typename TCSR_fields_::eSEF;
    using eWSF = typename TCSR_fields_::eWSF;
    using eSR = typename TCSR_fields_::eSR;
    using eFR = typename TCSR_fields_::eFR;
    using eBCE = typename TCSR_fields_::eBCE;
    using eDBGE = typename TCSR_fields_::eDBGE;
    using eSTOPE = typename TCSR_fields_::eSTOPE;
    using eTE = typename TCSR_fields_::eTE;
    using FRDE = typename TCSR_fields_::FRDE;
    using FWDE = typename TCSR_fields_::FWDE;
    using FRIE = typename TCSR_fields_::FRIE;
    using FWIE = typename TCSR_fields_::FWIE;
    using FEIE = typename TCSR_fields_::FEIE;
    using SEIE = typename TCSR_fields_::SEIE;
    using WSIE = typename TCSR_fields_::WSIE;
    using FRF = typename TCSR_fields_::FRF;
    using FWF = typename TCSR_fields_::FWF;
    using FEF = typename TCSR_fields_::FEF;
    using SEF = typename TCSR_fields_::SEF;
    using WSF = typename TCSR_fields_::WSF;
    using SR = typename TCSR_fields_::SR;
    using FR = typename TCSR_fields_::FR;
    using BCE = typename TCSR_fields_::BCE;
    using DBGE = typename TCSR_fields_::DBGE;
    using STOPE = typename TCSR_fields_::STOPE;
    using TE = typename TCSR_fields_::TE;
  };

  // Transmit Configuration 1
  struct TCR1_fields_ {
    // Transmit FIFO Watermark
    using TFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TCR1_fields_

  struct TCR1 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TCR1_fields_::TFW,
      ftl::mmio::Reserved<27, 5>> {
    using TFW = typename TCR1_fields_::TFW;
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
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TCR2_fields_::DIV,
      ftl::mmio::Reserved<15, 8>,
      typename TCR2_fields_::BYP,
      typename TCR2_fields_::BCD,
      typename TCR2_fields_::BCP,
      typename TCR2_fields_::MSEL,
      typename TCR2_fields_::BCI,
      typename TCR2_fields_::BCS,
      typename TCR2_fields_::SYNC,
      ftl::mmio::Reserved<1, 31>> {
    using eBYP = typename TCR2_fields_::eBYP;
    using eBCD = typename TCR2_fields_::eBCD;
    using eBCP = typename TCR2_fields_::eBCP;
    using eMSEL = typename TCR2_fields_::eMSEL;
    using eBCI = typename TCR2_fields_::eBCI;
    using eBCS = typename TCR2_fields_::eBCS;
    using eSYNC = typename TCR2_fields_::eSYNC;
    using DIV = typename TCR2_fields_::DIV;
    using BYP = typename TCR2_fields_::BYP;
    using BCD = typename TCR2_fields_::BCD;
    using BCP = typename TCR2_fields_::BCP;
    using MSEL = typename TCR2_fields_::MSEL;
    using BCI = typename TCR2_fields_::BCI;
    using BCS = typename TCR2_fields_::BCS;
    using SYNC = typename TCR2_fields_::SYNC;
  };

  // Transmit Configuration 3
  struct TCR3_fields_ {
    // Word Flag Configuration
    using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transmit Channel Enable
    using TCE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TCR3_fields_

  struct TCR3 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TCR3_fields_::WDFL,
      ftl::mmio::Reserved<11, 5>,
      typename TCR3_fields_::TCE,
      ftl::mmio::Reserved<15, 17>> {
    using WDFL = typename TCR3_fields_::WDFL;
    using TCE = typename TCR3_fields_::TCE;
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
  };  // struct TCR4_fields_

  struct TCR4 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TCR4_fields_::FSD,
      typename TCR4_fields_::FSP,
      typename TCR4_fields_::ONDEM,
      typename TCR4_fields_::FSE,
      typename TCR4_fields_::MF,
      typename TCR4_fields_::CHMOD,
      ftl::mmio::Reserved<2, 6>,
      typename TCR4_fields_::SYWD,
      ftl::mmio::Reserved<3, 13>,
      typename TCR4_fields_::FRSZ,
      ftl::mmio::Reserved<3, 21>,
      typename TCR4_fields_::FPACK,
      ftl::mmio::Reserved<2, 26>,
      typename TCR4_fields_::FCONT,
      ftl::mmio::Reserved<3, 29>> {
    using eFSD = typename TCR4_fields_::eFSD;
    using eFSP = typename TCR4_fields_::eFSP;
    using eONDEM = typename TCR4_fields_::eONDEM;
    using eFSE = typename TCR4_fields_::eFSE;
    using eMF = typename TCR4_fields_::eMF;
    using eCHMOD = typename TCR4_fields_::eCHMOD;
    using eFPACK = typename TCR4_fields_::eFPACK;
    using eFCONT = typename TCR4_fields_::eFCONT;
    using FSD = typename TCR4_fields_::FSD;
    using FSP = typename TCR4_fields_::FSP;
    using ONDEM = typename TCR4_fields_::ONDEM;
    using FSE = typename TCR4_fields_::FSE;
    using MF = typename TCR4_fields_::MF;
    using CHMOD = typename TCR4_fields_::CHMOD;
    using SYWD = typename TCR4_fields_::SYWD;
    using FRSZ = typename TCR4_fields_::FRSZ;
    using FPACK = typename TCR4_fields_::FPACK;
    using FCONT = typename TCR4_fields_::FCONT;
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
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      typename TCR5_fields_::FBT,
      ftl::mmio::Reserved<3, 13>,
      typename TCR5_fields_::W0W,
      ftl::mmio::Reserved<3, 21>,
      typename TCR5_fields_::WNW,
      ftl::mmio::Reserved<3, 29>> {
    using FBT = typename TCR5_fields_::FBT;
    using W0W = typename TCR5_fields_::W0W;
    using WNW = typename TCR5_fields_::WNW;
  };

  // Transmit Data
  struct TDR0_fields_ {
    // Transmit Data Register
    using TDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TDR0_fields_

  struct TDR0 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TDR0_fields_::TDR> {
    using TDR = typename TDR0_fields_::TDR;
  };

  // Transmit FIFO
  struct TFR0_fields_ {
    // Read FIFO Pointer
    using RFP = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write FIFO Pointer
    using WFP = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct TFR0_fields_

  struct TFR0 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename TFR0_fields_::RFP,
      ftl::mmio::Reserved<10, 6>,
      typename TFR0_fields_::WFP,
      ftl::mmio::Reserved<10, 22>> {
    using RFP = typename TFR0_fields_::RFP;
    using WFP = typename TFR0_fields_::WFP;
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
      kBase + 0x60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TMR_fields_::TWM> {
    using eTWM = typename TMR_fields_::eTWM;
    using TWM = typename TMR_fields_::TWM;
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
      kBase + 0x88u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RCSR_fields_::FRDE,
      typename RCSR_fields_::FWDE,
      ftl::mmio::Reserved<6, 2>,
      typename RCSR_fields_::FRIE,
      typename RCSR_fields_::FWIE,
      typename RCSR_fields_::FEIE,
      typename RCSR_fields_::SEIE,
      typename RCSR_fields_::WSIE,
      ftl::mmio::Reserved<3, 13>,
      typename RCSR_fields_::FRF,
      typename RCSR_fields_::FWF,
      typename RCSR_fields_::FEF,
      typename RCSR_fields_::SEF,
      typename RCSR_fields_::WSF,
      ftl::mmio::Reserved<3, 21>,
      typename RCSR_fields_::SR,
      typename RCSR_fields_::FR,
      ftl::mmio::Reserved<2, 26>,
      typename RCSR_fields_::BCE,
      typename RCSR_fields_::DBGE,
      typename RCSR_fields_::STOPE,
      typename RCSR_fields_::RE> {
    using eFRDE = typename RCSR_fields_::eFRDE;
    using eFWDE = typename RCSR_fields_::eFWDE;
    using eFRIE = typename RCSR_fields_::eFRIE;
    using eFWIE = typename RCSR_fields_::eFWIE;
    using eFEIE = typename RCSR_fields_::eFEIE;
    using eSEIE = typename RCSR_fields_::eSEIE;
    using eWSIE = typename RCSR_fields_::eWSIE;
    using eFRF = typename RCSR_fields_::eFRF;
    using eFWF = typename RCSR_fields_::eFWF;
    using eFEF = typename RCSR_fields_::eFEF;
    using eSEF = typename RCSR_fields_::eSEF;
    using eWSF = typename RCSR_fields_::eWSF;
    using eSR = typename RCSR_fields_::eSR;
    using eFR = typename RCSR_fields_::eFR;
    using eBCE = typename RCSR_fields_::eBCE;
    using eDBGE = typename RCSR_fields_::eDBGE;
    using eSTOPE = typename RCSR_fields_::eSTOPE;
    using eRE = typename RCSR_fields_::eRE;
    using FRDE = typename RCSR_fields_::FRDE;
    using FWDE = typename RCSR_fields_::FWDE;
    using FRIE = typename RCSR_fields_::FRIE;
    using FWIE = typename RCSR_fields_::FWIE;
    using FEIE = typename RCSR_fields_::FEIE;
    using SEIE = typename RCSR_fields_::SEIE;
    using WSIE = typename RCSR_fields_::WSIE;
    using FRF = typename RCSR_fields_::FRF;
    using FWF = typename RCSR_fields_::FWF;
    using FEF = typename RCSR_fields_::FEF;
    using SEF = typename RCSR_fields_::SEF;
    using WSF = typename RCSR_fields_::WSF;
    using SR = typename RCSR_fields_::SR;
    using FR = typename RCSR_fields_::FR;
    using BCE = typename RCSR_fields_::BCE;
    using DBGE = typename RCSR_fields_::DBGE;
    using STOPE = typename RCSR_fields_::STOPE;
    using RE = typename RCSR_fields_::RE;
  };

  // Receive Configuration 1
  struct RCR1_fields_ {
    // Receive FIFO Watermark
    using RFW = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RCR1_fields_

  struct RCR1 : ftl::mmio::Register<
      kBase + 0x8Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RCR1_fields_::RFW,
      ftl::mmio::Reserved<27, 5>> {
    using RFW = typename RCR1_fields_::RFW;
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
      kBase + 0x90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RCR2_fields_::DIV,
      ftl::mmio::Reserved<15, 8>,
      typename RCR2_fields_::BYP,
      typename RCR2_fields_::BCD,
      typename RCR2_fields_::BCP,
      typename RCR2_fields_::MSEL,
      typename RCR2_fields_::BCI,
      typename RCR2_fields_::BCS,
      typename RCR2_fields_::SYNC,
      ftl::mmio::Reserved<1, 31>> {
    using eBYP = typename RCR2_fields_::eBYP;
    using eBCD = typename RCR2_fields_::eBCD;
    using eBCP = typename RCR2_fields_::eBCP;
    using eMSEL = typename RCR2_fields_::eMSEL;
    using eBCI = typename RCR2_fields_::eBCI;
    using eBCS = typename RCR2_fields_::eBCS;
    using eSYNC = typename RCR2_fields_::eSYNC;
    using DIV = typename RCR2_fields_::DIV;
    using BYP = typename RCR2_fields_::BYP;
    using BCD = typename RCR2_fields_::BCD;
    using BCP = typename RCR2_fields_::BCP;
    using MSEL = typename RCR2_fields_::MSEL;
    using BCI = typename RCR2_fields_::BCI;
    using BCS = typename RCR2_fields_::BCS;
    using SYNC = typename RCR2_fields_::SYNC;
  };

  // Receive Configuration 3
  struct RCR3_fields_ {
    // Word Flag Configuration
    using WDFL = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Receive Channel Enable
    using RCE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RCR3_fields_

  struct RCR3 : ftl::mmio::Register<
      kBase + 0x94u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RCR3_fields_::WDFL,
      ftl::mmio::Reserved<11, 5>,
      typename RCR3_fields_::RCE,
      ftl::mmio::Reserved<15, 17>> {
    using WDFL = typename RCR3_fields_::WDFL;
    using RCE = typename RCR3_fields_::RCE;
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
  };  // struct RCR4_fields_

  struct RCR4 : ftl::mmio::Register<
      kBase + 0x98u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RCR4_fields_::FSD,
      typename RCR4_fields_::FSP,
      typename RCR4_fields_::ONDEM,
      typename RCR4_fields_::FSE,
      typename RCR4_fields_::MF,
      ftl::mmio::Reserved<3, 5>,
      typename RCR4_fields_::SYWD,
      ftl::mmio::Reserved<3, 13>,
      typename RCR4_fields_::FRSZ,
      ftl::mmio::Reserved<3, 21>,
      typename RCR4_fields_::FPACK,
      ftl::mmio::Reserved<2, 26>,
      typename RCR4_fields_::FCONT,
      ftl::mmio::Reserved<3, 29>> {
    using eFSD = typename RCR4_fields_::eFSD;
    using eFSP = typename RCR4_fields_::eFSP;
    using eONDEM = typename RCR4_fields_::eONDEM;
    using eFSE = typename RCR4_fields_::eFSE;
    using eMF = typename RCR4_fields_::eMF;
    using eFPACK = typename RCR4_fields_::eFPACK;
    using eFCONT = typename RCR4_fields_::eFCONT;
    using FSD = typename RCR4_fields_::FSD;
    using FSP = typename RCR4_fields_::FSP;
    using ONDEM = typename RCR4_fields_::ONDEM;
    using FSE = typename RCR4_fields_::FSE;
    using MF = typename RCR4_fields_::MF;
    using SYWD = typename RCR4_fields_::SYWD;
    using FRSZ = typename RCR4_fields_::FRSZ;
    using FPACK = typename RCR4_fields_::FPACK;
    using FCONT = typename RCR4_fields_::FCONT;
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
      kBase + 0x9Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      typename RCR5_fields_::FBT,
      ftl::mmio::Reserved<3, 13>,
      typename RCR5_fields_::W0W,
      ftl::mmio::Reserved<3, 21>,
      typename RCR5_fields_::WNW,
      ftl::mmio::Reserved<3, 29>> {
    using FBT = typename RCR5_fields_::FBT;
    using W0W = typename RCR5_fields_::W0W;
    using WNW = typename RCR5_fields_::WNW;
  };

  // Receive Data
  struct RDR0_fields_ {
    // Receive Data Register
    using RDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RDR0_fields_

  struct RDR0 : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RDR0_fields_::RDR> {
    using RDR = typename RDR0_fields_::RDR;
  };

  // Receive FIFO
  struct RFR0_fields_ {
    // Read FIFO Pointer
    using RFP = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write FIFO Pointer
    using WFP = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RFR0_fields_

  struct RFR0 : ftl::mmio::Register<
      kBase + 0xC0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RFR0_fields_::RFP,
      ftl::mmio::Reserved<10, 6>,
      typename RFR0_fields_::WFP,
      ftl::mmio::Reserved<10, 22>> {
    using RFP = typename RFR0_fields_::RFP;
    using WFP = typename RFR0_fields_::WFP;
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
      kBase + 0xE0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RMR_fields_::RWM> {
    using eRWM = typename RMR_fields_::eRWM;
    using RWM = typename RMR_fields_::RWM;
  };

};

}  // namespace regs