#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DAC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::dac {


// Version Identifier Register
struct VERID_fields_ {

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
};  // struct VERID_fields_

struct VERID : ftl::mmio::Register<
    0x40064000u,
    std::uint32_t,
    0x01000000u,
    ftl::mmio::RO,
    VERID_fields_::FEATURE,
    VERID_fields_::MINOR,
    VERID_fields_::MAJOR> {
  using eFEATURE = VERID_fields_::eFEATURE;
  using FEATURE = VERID_fields_::FEATURE;
  using MINOR = VERID_fields_::MINOR;
  using MAJOR = VERID_fields_::MAJOR;
};


// Parameter Register
struct PARAM_fields_ {

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
};  // struct PARAM_fields_

struct PARAM : ftl::mmio::Register<
    0x40064004u,
    std::uint32_t,
    0x00000003u,
    ftl::mmio::RO,
    PARAM_fields_::FIFOSZ,
    ftl::mmio::Reserved<29, 3>> {
  using eFIFOSZ = PARAM_fields_::eFIFOSZ;
  using FIFOSZ = PARAM_fields_::FIFOSZ;
};


// DAC Data Register
struct DATA_fields_ {
  // FIFO DATA0
  using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct DATA_fields_

struct DATA : ftl::mmio::Register<
    0x40064008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    DATA_fields_::DATA0,
    ftl::mmio::Reserved<20, 12>> {
  using DATA0 = DATA_fields_::DATA0;
};


// DAC Status and Control Register
struct CR_fields_ {

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
};  // struct CR_fields_

struct CR : ftl::mmio::Register<
    0x4006400Cu,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    CR_fields_::FULLF,
    CR_fields_::NEMPTF,
    CR_fields_::WMF,
    CR_fields_::UDFF,
    CR_fields_::OVFF,
    ftl::mmio::Reserved<3, 5>,
    CR_fields_::FULLIE,
    CR_fields_::EMPTIE,
    CR_fields_::WTMIE,
    ftl::mmio::Reserved<1, 11>,
    CR_fields_::SWTRG,
    CR_fields_::TRGSEL,
    CR_fields_::DACRFS,
    CR_fields_::DACEN,
    CR_fields_::FIFOEN,
    CR_fields_::SWMD,
    CR_fields_::UVIE,
    ftl::mmio::Reserved<2, 19>,
    CR_fields_::FIFORST,
    CR_fields_::SWRST,
    CR_fields_::DMAEN,
    CR_fields_::WML> {
  using eFULLF = CR_fields_::eFULLF;
  using eNEMPTF = CR_fields_::eNEMPTF;
  using eWMF = CR_fields_::eWMF;
  using eUDFF = CR_fields_::eUDFF;
  using eOVFF = CR_fields_::eOVFF;
  using eFULLIE = CR_fields_::eFULLIE;
  using eEMPTIE = CR_fields_::eEMPTIE;
  using eWTMIE = CR_fields_::eWTMIE;
  using eSWTRG = CR_fields_::eSWTRG;
  using eTRGSEL = CR_fields_::eTRGSEL;
  using eDACRFS = CR_fields_::eDACRFS;
  using eDACEN = CR_fields_::eDACEN;
  using eFIFOEN = CR_fields_::eFIFOEN;
  using eSWMD = CR_fields_::eSWMD;
  using eUVIE = CR_fields_::eUVIE;
  using eFIFORST = CR_fields_::eFIFORST;
  using eDMAEN = CR_fields_::eDMAEN;
  using FULLF = CR_fields_::FULLF;
  using NEMPTF = CR_fields_::NEMPTF;
  using WMF = CR_fields_::WMF;
  using UDFF = CR_fields_::UDFF;
  using OVFF = CR_fields_::OVFF;
  using FULLIE = CR_fields_::FULLIE;
  using EMPTIE = CR_fields_::EMPTIE;
  using WTMIE = CR_fields_::WTMIE;
  using SWTRG = CR_fields_::SWTRG;
  using TRGSEL = CR_fields_::TRGSEL;
  using DACRFS = CR_fields_::DACRFS;
  using DACEN = CR_fields_::DACEN;
  using FIFOEN = CR_fields_::FIFOEN;
  using SWMD = CR_fields_::SWMD;
  using UVIE = CR_fields_::UVIE;
  using FIFORST = CR_fields_::FIFORST;
  using SWRST = CR_fields_::SWRST;
  using DMAEN = CR_fields_::DMAEN;
  using WML = CR_fields_::WML;
};


// DAC FIFO Pointer Register
struct PTR_fields_ {
  // DACWFP
  using DACWFP = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // DACRFP
  using DACRFP = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PTR_fields_

struct PTR : ftl::mmio::Register<
    0x40064010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    PTR_fields_::DACWFP,
    ftl::mmio::Reserved<8, 8>,
    PTR_fields_::DACRFP,
    ftl::mmio::Reserved<8, 24>> {
  using DACWFP = PTR_fields_::DACWFP;
  using DACRFP = PTR_fields_::DACRFP;
};


// DAC Status and Control Register 2
struct CR2_fields_ {

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
};  // struct CR2_fields_

struct CR2 : ftl::mmio::Register<
    0x40064014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CR2_fields_::BFEN,
    CR2_fields_::OEN,
    CR2_fields_::BFMS,
    CR2_fields_::BFHS,
    CR2_fields_::IREF2,
    CR2_fields_::IREF1,
    CR2_fields_::IREF,
    ftl::mmio::Reserved<25, 7>> {
  using eBFEN = CR2_fields_::eBFEN;
  using eOEN = CR2_fields_::eOEN;
  using eBFMS = CR2_fields_::eBFMS;
  using eBFHS = CR2_fields_::eBFHS;
  using eIREF2 = CR2_fields_::eIREF2;
  using eIREF1 = CR2_fields_::eIREF1;
  using eIREF = CR2_fields_::eIREF;
  using BFEN = CR2_fields_::BFEN;
  using OEN = CR2_fields_::OEN;
  using BFMS = CR2_fields_::BFMS;
  using BFHS = CR2_fields_::BFHS;
  using IREF2 = CR2_fields_::IREF2;
  using IREF1 = CR2_fields_::IREF1;
  using IREF = CR2_fields_::IREF;
};

}  // namespace regs::dac