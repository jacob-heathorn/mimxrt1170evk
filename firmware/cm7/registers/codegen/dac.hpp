#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DAC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Dac {
  // Version Identifier Register
  struct VeridFields {
    enum class eFEATURE : std::uint32_t {
      // Standard feature set
      eFEATURE_0 = 0,
      // C40 feature set
      eFEATURE_1 = 1,
      // 5V DAC feature set
      eFEATURE_2 = 2,
      // ADC BIST feature set
      eFEATURE_4 = 4,
    };

    // Feature Identification Number
    using FEATURE = ftl::mmio::Field<16, 0, eFEATURE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Minor version number
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major version number
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VeridFields

  struct VERID : ftl::mmio::Register<
      0x40064000u,
      std::uint32_t,
      0x01000000u,
      ftl::mmio::RO,
      VeridFields::FEATURE,
      VeridFields::MINOR,
      VeridFields::MAJOR> {
    using eFEATURE = VeridFields::eFEATURE;
    using FEATURE = VeridFields::FEATURE;
    using MINOR = VeridFields::MINOR;
    using MAJOR = VeridFields::MAJOR;
  };

  // Parameter Register
  struct ParamFields {
    enum class eFIFOSZ : std::uint32_t {
      // FIFO depth is 2
      eFIFOSZ_0 = 0,
      // FIFO depth is 4
      eFIFOSZ_1 = 1,
      // FIFO depth is 8
      eFIFOSZ_2 = 2,
      // FIFO depth is 16
      eFIFOSZ_3 = 3,
      // FIFO depth is 32
      eFIFOSZ_4 = 4,
      // FIFO depth is 64
      eFIFOSZ_5 = 5,
      // FIFO depth is 128
      eFIFOSZ_6 = 6,
      // FIFO depth is 256
      eFIFOSZ_7 = 7,
    };

    // FIFO size
    using FIFOSZ = ftl::mmio::Field<3, 0, eFIFOSZ, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ParamFields

  struct PARAM : ftl::mmio::Register<
      0x40064004u,
      std::uint32_t,
      0x00000003u,
      ftl::mmio::RO,
      ParamFields::FIFOSZ,
      ftl::mmio::Reserved<29, 3>> {
    using eFIFOSZ = ParamFields::eFIFOSZ;
    using FIFOSZ = ParamFields::FIFOSZ;
  };

  // DAC Data Register
  struct DataFields {
    // FIFO DATA0
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct DataFields

  struct DATA : ftl::mmio::Register<
      0x40064008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      DataFields::DATA0,
      ftl::mmio::Reserved<20, 12>> {
    using DATA0 = DataFields::DATA0;
  };

  // DAC Status and Control Register
  struct CrFields {
    enum class eFULLF : std::uint32_t {
      // FIFO is not full.
      eFULLF_0 = 0,
      // FIFO is full.
      eFULLF_1 = 1,
    };

    enum class eNEMPTF : std::uint32_t {
      // More than one data is available in the FIFO.
      eNEMPTF_0 = 0,
      // One data is available in the FIFO.
      eNEMPTF_1 = 1,
    };

    enum class eWMF : std::uint32_t {
      // The DAC buffer read pointer has not reached the watermark level.
      eWMF_0 = 0,
      // The DAC buffer read pointer has reached the watermark level.
      eWMF_1 = 1,
    };

    enum class eUDFF : std::uint32_t {
      // No underflow has occurred since the last time the flag was cleared.
      eUDFF_0 = 0,
      // At least one trigger underflow has occurred since the last time the flag was cleared.
      eUDFF_1 = 1,
    };

    enum class eOVFF : std::uint32_t {
      // No overflow has occurred since the last time the flag was cleared.
      eOVFF_0 = 0,
      // At least one FIFO overflow has occurred since the last time the flag was cleared.
      eOVFF_1 = 1,
    };

    enum class eFULLIE : std::uint32_t {
      // FIFO Full interrupt is disabled.
      eFULLIE_0 = 0,
      // FIFO Full interrupt is enabled.
      eFULLIE_1 = 1,
    };

    enum class eEMPTIE : std::uint32_t {
      // FIFO Nearly Empty interrupt is disabled.
      eEMPTIE_0 = 0,
      // FIFO Nearly Empty interrupt is enabled.
      eEMPTIE_1 = 1,
    };

    enum class eWTMIE : std::uint32_t {
      // Watermark interrupt is disabled.
      eWTMIE_0 = 0,
      // Watermark interrupt is enabled.
      eWTMIE_1 = 1,
    };

    enum class eSWTRG : std::uint32_t {
      // The DAC soft trigger is not valid.
      eSWTRG_0 = 0,
      // The DAC soft trigger is valid.
      eSWTRG_1 = 1,
    };

    enum class eTRGSEL : std::uint32_t {
      // The DAC hardware trigger is selected.
      eTRGSEL_0 = 0,
      // The DAC software trigger is selected.
      eTRGSEL_1 = 1,
    };

    enum class eDACRFS : std::uint32_t {
      // The DAC selects DACREF_1 as the reference voltage.
      eDACRFS_0 = 0,
      // The DAC selects DACREF_2 as the reference voltage.
      eDACRFS_1 = 1,
    };

    enum class eDACEN : std::uint32_t {
      // The DAC system is disabled.
      eDACEN_0 = 0,
      // The DAC system is enabled.
      eDACEN_1 = 1,
    };

    enum class eFIFOEN : std::uint32_t {
      // FIFO is disabled and only one level buffer is enabled. Any data written from this buffer goes to conversion.
      eFIFOEN_0 = 0,
      // FIFO is enabled. Data will first read from FIFO to buffer then go to conversion.
      eFIFOEN_1 = 1,
    };

    enum class eSWMD : std::uint32_t {
      // Normal mode
      eSWMD_0 = 0,
      // Swing back mode
      eSWMD_1 = 1,
    };

    enum class eUVIE : std::uint32_t {
      // Underflow and overflow interrupt is disabled.
      eUVIE_0 = 0,
      // Underflow and overflow interrupt is enabled.
      eUVIE_1 = 1,
    };

    enum class eFIFORST : std::uint32_t {
      // No effect
      eFIFORST_0 = 0,
      // FIFO reset
      eFIFORST_1 = 1,
    };

    enum class eDMAEN : std::uint32_t {
      // DMA is disabled.
      eDMAEN_0 = 0,
      // DMA is enabled. When DMA is enabled, the DMA request will be generated by original interrupts. The interrupts will not be presented on this module at the same time.
      eDMAEN_1 = 1,
    };

    // Full Flag
    using FULLF = ftl::mmio::Field<1, 0, eFULLF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Nearly Empty Flag
    using NEMPTF = ftl::mmio::Field<1, 1, eNEMPTF, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Watermark Status Flag
    using WMF = ftl::mmio::Field<1, 2, eWMF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Underflow Flag
    using UDFF = ftl::mmio::Field<1, 3, eUDFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Overflow Flag
    using OVFF = ftl::mmio::Field<1, 4, eOVFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Full Interrupt Enable
    using FULLIE = ftl::mmio::Field<1, 8, eFULLIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Nearly Empty Interrupt Enable
    using EMPTIE = ftl::mmio::Field<1, 9, eEMPTIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watermark Interrupt Enable
    using WTMIE = ftl::mmio::Field<1, 10, eWTMIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // DAC Software Trigger
    using SWTRG = ftl::mmio::Field<1, 12, eSWTRG, ftl::mmio::RW, ftl::mmio::Normal>;
    // DAC Trigger Select
    using TRGSEL = ftl::mmio::Field<1, 13, eTRGSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // DAC Reference Select
    using DACRFS = ftl::mmio::Field<1, 14, eDACRFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // DAC Enable
    using DACEN = ftl::mmio::Field<1, 15, eDACEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Enable
    using FIFOEN = ftl::mmio::Field<1, 16, eFIFOEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DAC FIFO Mode Select
    using SWMD = ftl::mmio::Field<1, 17, eSWMD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Underflow and overflow interrupt enable
    using UVIE = ftl::mmio::Field<1, 18, eUVIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Reset
    using FIFORST = ftl::mmio::Field<1, 21, eFIFORST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software reset
    using SWRST = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Enable Select
    using DMAEN = ftl::mmio::Field<1, 23, eDMAEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watermark Level Select
    using WML = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CrFields

  struct CR : ftl::mmio::Register<
      0x4006400Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      CrFields::FULLF,
      CrFields::NEMPTF,
      CrFields::WMF,
      CrFields::UDFF,
      CrFields::OVFF,
      ftl::mmio::Reserved<3, 5>,
      CrFields::FULLIE,
      CrFields::EMPTIE,
      CrFields::WTMIE,
      ftl::mmio::Reserved<1, 11>,
      CrFields::SWTRG,
      CrFields::TRGSEL,
      CrFields::DACRFS,
      CrFields::DACEN,
      CrFields::FIFOEN,
      CrFields::SWMD,
      CrFields::UVIE,
      ftl::mmio::Reserved<2, 19>,
      CrFields::FIFORST,
      CrFields::SWRST,
      CrFields::DMAEN,
      CrFields::WML> {
    using eFULLF = CrFields::eFULLF;
    using eNEMPTF = CrFields::eNEMPTF;
    using eWMF = CrFields::eWMF;
    using eUDFF = CrFields::eUDFF;
    using eOVFF = CrFields::eOVFF;
    using eFULLIE = CrFields::eFULLIE;
    using eEMPTIE = CrFields::eEMPTIE;
    using eWTMIE = CrFields::eWTMIE;
    using eSWTRG = CrFields::eSWTRG;
    using eTRGSEL = CrFields::eTRGSEL;
    using eDACRFS = CrFields::eDACRFS;
    using eDACEN = CrFields::eDACEN;
    using eFIFOEN = CrFields::eFIFOEN;
    using eSWMD = CrFields::eSWMD;
    using eUVIE = CrFields::eUVIE;
    using eFIFORST = CrFields::eFIFORST;
    using eDMAEN = CrFields::eDMAEN;
    using FULLF = CrFields::FULLF;
    using NEMPTF = CrFields::NEMPTF;
    using WMF = CrFields::WMF;
    using UDFF = CrFields::UDFF;
    using OVFF = CrFields::OVFF;
    using FULLIE = CrFields::FULLIE;
    using EMPTIE = CrFields::EMPTIE;
    using WTMIE = CrFields::WTMIE;
    using SWTRG = CrFields::SWTRG;
    using TRGSEL = CrFields::TRGSEL;
    using DACRFS = CrFields::DACRFS;
    using DACEN = CrFields::DACEN;
    using FIFOEN = CrFields::FIFOEN;
    using SWMD = CrFields::SWMD;
    using UVIE = CrFields::UVIE;
    using FIFORST = CrFields::FIFORST;
    using SWRST = CrFields::SWRST;
    using DMAEN = CrFields::DMAEN;
    using WML = CrFields::WML;
  };

  // DAC FIFO Pointer Register
  struct PtrFields {
    // DACWFP
    using DACWFP = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // DACRFP
    using DACRFP = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PtrFields

  struct PTR : ftl::mmio::Register<
      0x40064010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PtrFields::DACWFP,
      ftl::mmio::Reserved<8, 8>,
      PtrFields::DACRFP,
      ftl::mmio::Reserved<8, 24>> {
    using DACWFP = PtrFields::DACWFP;
    using DACRFP = PtrFields::DACRFP;
  };

  // DAC Status and Control Register 2
  struct Cr2Fields {
    enum class eBFEN : std::uint32_t {
      // Opamp is not used as buffer
      eBFEN_0 = 0,
      // Opamp is used as buffer
      eBFEN_1 = 1,
    };

    enum class eOEN : std::uint32_t {
      // Output buffer is not bypassed
      eOEN_0 = 0,
      // Output buffer is bypassed
      eOEN_1 = 1,
    };

    enum class eBFMS : std::uint32_t {
      // Buffer middle speed not selected
      eBFMS_0 = 0,
      // Buffer middle speed selected
      eBFMS_1 = 1,
    };

    enum class eBFHS : std::uint32_t {
      // Buffer high speed not selected
      eBFHS_0 = 0,
      // Buffer high speed selected
      eBFHS_1 = 1,
    };

    enum class eIREF2 : std::uint32_t {
      // Internal PTAT Current Reference not selected
      eIREF2_0 = 0,
      // Internal PTAT Current Reference selected
      eIREF2_1 = 1,
    };

    enum class eIREF1 : std::uint32_t {
      // Internal ZTC Current Reference not selected
      eIREF1_0 = 0,
      // Internal ZTC Current Reference selected
      eIREF1_1 = 1,
    };

    enum class eIREF : std::uint32_t {
      // Internal Current Reference not selected
      eIREF_0 = 0,
      // Internal Current Reference selected
      eIREF_1 = 1,
    };

    // Buffer Enable
    using BFEN = ftl::mmio::Field<1, 0, eBFEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Optional Enable
    using OEN = ftl::mmio::Field<1, 1, eOEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Buffer Middle Speed Select
    using BFMS = ftl::mmio::Field<1, 2, eBFMS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Buffer High Speed Select
    using BFHS = ftl::mmio::Field<1, 3, eBFHS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Internal PTAT (Proportional To Absolute Temperature) Current Reference Select
    using IREF2 = ftl::mmio::Field<1, 4, eIREF2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Internal ZTC (Zero Temperature Coefficient) Current Reference Select
    using IREF1 = ftl::mmio::Field<1, 5, eIREF1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Internal Current Reference Select
    using IREF = ftl::mmio::Field<1, 6, eIREF, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cr2Fields

  struct CR2 : ftl::mmio::Register<
      0x40064014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Cr2Fields::BFEN,
      Cr2Fields::OEN,
      Cr2Fields::BFMS,
      Cr2Fields::BFHS,
      Cr2Fields::IREF2,
      Cr2Fields::IREF1,
      Cr2Fields::IREF,
      ftl::mmio::Reserved<25, 7>> {
    using eBFEN = Cr2Fields::eBFEN;
    using eOEN = Cr2Fields::eOEN;
    using eBFMS = Cr2Fields::eBFMS;
    using eBFHS = Cr2Fields::eBFHS;
    using eIREF2 = Cr2Fields::eIREF2;
    using eIREF1 = Cr2Fields::eIREF1;
    using eIREF = Cr2Fields::eIREF;
    using BFEN = Cr2Fields::BFEN;
    using OEN = Cr2Fields::OEN;
    using BFMS = Cr2Fields::BFMS;
    using BFHS = Cr2Fields::BFHS;
    using IREF2 = Cr2Fields::IREF2;
    using IREF1 = Cr2Fields::IREF1;
    using IREF = Cr2Fields::IREF;
  };

};

}  // namespace regs