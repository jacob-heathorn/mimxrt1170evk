#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LPADC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Lpadc {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Lpadc: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40050000u :
      Instance == 2u ? 0x40054000u :
      0u;

  // Version ID Register
  struct VeridFields {
    enum class eRES : std::uint32_t {
      // Up to 13-bit differential/12-bit single ended resolution supported.
      eRES_0 = 0,
      // Up to 16-bit differential/15-bit single ended resolution supported.
      eRES_1 = 1,
    };

    enum class eDIFFEN : std::uint32_t {
      // Differential operation not supported.
      eDIFFEN_0 = 0,
      // Differential operation supported. CMDLa[DIFF] and CMDLa[ABSEL] control fields implemented.
      eDIFFEN_1 = 1,
    };

    enum class eMVI : std::uint32_t {
      // Single voltage reference input supported.
      eMVI_0 = 0,
      // Multiple voltage reference inputs supported.
      eMVI_1 = 1,
    };

    enum class eCSW : std::uint32_t {
      // Channel scaling not supported.
      eCSW_0 = 0,
      // Channel scaling supported. 1-bit CSCALE control field.
      eCSW_1 = 1,
      // Channel scaling supported. 6-bit CSCALE control field.
      eCSW_6 = 6,
    };

    enum class eVR1RNGI : std::uint32_t {
      // Range control not required. CFG[VREF1RNG] is not implemented.
      eVR1RNGI_0 = 0,
      // Range control required. CFG[VREF1RNG] is implemented.
      eVR1RNGI_1 = 1,
    };

    enum class eIADCKI : std::uint32_t {
      // Internal clock source not implemented.
      eIADCKI_0 = 0,
      // Internal clock source (and CFG[ADCKEN]) implemented.
      eIADCKI_1 = 1,
    };

    enum class eCALOFSI : std::uint32_t {
      // Offset calibration and offset trimming not implemented.
      eCALOFSI_0 = 0,
      // Offset calibration and offset trimming implemented.
      eCALOFSI_1 = 1,
    };

    // Resolution
    using RES = ftl::mmio::Field<1, 0, eRES, ftl::mmio::RO, ftl::mmio::Normal>;
    // Differential Supported
    using DIFFEN = ftl::mmio::Field<1, 1, eDIFFEN, ftl::mmio::RO, ftl::mmio::Normal>;
    // Multi Vref Implemented
    using MVI = ftl::mmio::Field<1, 3, eMVI, ftl::mmio::RO, ftl::mmio::Normal>;
    // Channel Scale Width
    using CSW = ftl::mmio::Field<3, 4, eCSW, ftl::mmio::RO, ftl::mmio::Normal>;
    // Voltage Reference 1 Range Control Bit Implemented
    using VR1RNGI = ftl::mmio::Field<1, 8, eVR1RNGI, ftl::mmio::RO, ftl::mmio::Normal>;
    // Internal LPADC Clock implemented
    using IADCKI = ftl::mmio::Field<1, 9, eIADCKI, ftl::mmio::RO, ftl::mmio::Normal>;
    // Calibration Offset Function Implemented
    using CALOFSI = ftl::mmio::Field<1, 10, eCALOFSI, ftl::mmio::RO, ftl::mmio::Normal>;
    // Minor Version Number
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major Version Number
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VeridFields

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x0100001Au,
      ftl::mmio::RO,
      typename VeridFields::RES,
      typename VeridFields::DIFFEN,
      ftl::mmio::Reserved<1, 2>,
      typename VeridFields::MVI,
      typename VeridFields::CSW,
      ftl::mmio::Reserved<1, 7>,
      typename VeridFields::VR1RNGI,
      typename VeridFields::IADCKI,
      typename VeridFields::CALOFSI,
      ftl::mmio::Reserved<5, 11>,
      typename VeridFields::MINOR,
      typename VeridFields::MAJOR> {
    using eRES = typename VeridFields::eRES;
    using eDIFFEN = typename VeridFields::eDIFFEN;
    using eMVI = typename VeridFields::eMVI;
    using eCSW = typename VeridFields::eCSW;
    using eVR1RNGI = typename VeridFields::eVR1RNGI;
    using eIADCKI = typename VeridFields::eIADCKI;
    using eCALOFSI = typename VeridFields::eCALOFSI;
    using RES = typename VeridFields::RES;
    using DIFFEN = typename VeridFields::DIFFEN;
    using MVI = typename VeridFields::MVI;
    using CSW = typename VeridFields::CSW;
    using VR1RNGI = typename VeridFields::VR1RNGI;
    using IADCKI = typename VeridFields::IADCKI;
    using CALOFSI = typename VeridFields::CALOFSI;
    using MINOR = typename VeridFields::MINOR;
    using MAJOR = typename VeridFields::MAJOR;
  };

  // Parameter Register
  struct ParamFields {
    enum class eTRIG_NUM : std::uint32_t {
      // 8 hardware triggers implemented
      eTRIG_NUM_8 = 8,
    };

    enum class eFIFOSIZE : std::uint32_t {
      // Result FIFO depth = 16 datawords.
      eFIFOSIZE_16 = 16,
    };

    enum class eCV_NUM : std::uint32_t {
      // 4 compare value registers implemented
      eCV_NUM_4 = 4,
    };

    enum class eCMD_NUM : std::uint32_t {
      // 15 command buffers implemented
      eCMD_NUM_15 = 15,
    };

    // Trigger Number
    using TRIG_NUM = ftl::mmio::Field<8, 0, eTRIG_NUM, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result FIFO Depth
    using FIFOSIZE = ftl::mmio::Field<8, 8, eFIFOSIZE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Compare Value Number
    using CV_NUM = ftl::mmio::Field<8, 16, eCV_NUM, ftl::mmio::RO, ftl::mmio::Normal>;
    // Command Buffer Number
    using CMD_NUM = ftl::mmio::Field<8, 24, eCMD_NUM, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ParamFields

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x0F041008u,
      ftl::mmio::RO,
      typename ParamFields::TRIG_NUM,
      typename ParamFields::FIFOSIZE,
      typename ParamFields::CV_NUM,
      typename ParamFields::CMD_NUM> {
    using eTRIG_NUM = typename ParamFields::eTRIG_NUM;
    using eFIFOSIZE = typename ParamFields::eFIFOSIZE;
    using eCV_NUM = typename ParamFields::eCV_NUM;
    using eCMD_NUM = typename ParamFields::eCMD_NUM;
    using TRIG_NUM = typename ParamFields::TRIG_NUM;
    using FIFOSIZE = typename ParamFields::FIFOSIZE;
    using CV_NUM = typename ParamFields::CV_NUM;
    using CMD_NUM = typename ParamFields::CMD_NUM;
  };

  // LPADC Control Register
  struct CtrlFields {
    enum class eADCEN : std::uint32_t {
      // LPADC is disabled.
      eADCEN_0 = 0,
      // LPADC is enabled.
      eADCEN_1 = 1,
    };

    enum class eRST : std::uint32_t {
      // LPADC logic is not reset.
      eRST_0 = 0,
      // LPADC logic is reset.
      eRST_1 = 1,
    };

    enum class eDOZEN : std::uint32_t {
      // LPADC is enabled in Doze mode.
      eDOZEN_0 = 0,
      // LPADC is disabled in Doze mode.
      eDOZEN_1 = 1,
    };

    enum class eTRIG_SRC : std::uint32_t {
      // ADC_ETC hw trigger , and HW trigger are enabled
      eTRIG_SRC_0 = 0,
      // ADC_ETC hw trigger is enabled
      eTRIG_SRC_1 = 1,
      // HW trigger is enabled
      eTRIG_SRC_2 = 2,
    };

    enum class eRSTFIFO : std::uint32_t {
      // No effect.
      eRSTFIFO_0 = 0,
      // FIFO is reset.
      eRSTFIFO_1 = 1,
    };

    // LPADC Enable
    using ADCEN = ftl::mmio::Field<1, 0, eADCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset
    using RST = ftl::mmio::Field<1, 1, eRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Doze Enable
    using DOZEN = ftl::mmio::Field<1, 2, eDOZEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware trigger source selection
    using TRIG_SRC = ftl::mmio::Field<2, 3, eTRIG_SRC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset FIFO
    using RSTFIFO = ftl::mmio::Field<1, 8, eRSTFIFO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CtrlFields::ADCEN,
      typename CtrlFields::RST,
      typename CtrlFields::DOZEN,
      typename CtrlFields::TRIG_SRC,
      ftl::mmio::Reserved<3, 5>,
      typename CtrlFields::RSTFIFO,
      ftl::mmio::Reserved<23, 9>> {
    using eADCEN = typename CtrlFields::eADCEN;
    using eRST = typename CtrlFields::eRST;
    using eDOZEN = typename CtrlFields::eDOZEN;
    using eTRIG_SRC = typename CtrlFields::eTRIG_SRC;
    using eRSTFIFO = typename CtrlFields::eRSTFIFO;
    using ADCEN = typename CtrlFields::ADCEN;
    using RST = typename CtrlFields::RST;
    using DOZEN = typename CtrlFields::DOZEN;
    using TRIG_SRC = typename CtrlFields::TRIG_SRC;
    using RSTFIFO = typename CtrlFields::RSTFIFO;
  };

  // LPADC Status Register
  struct StatFields {
    enum class eRDY : std::uint32_t {
      // Result FIFO data level not above watermark level.
      eRDY_0 = 0,
      // Result FIFO holding data above watermark level.
      eRDY_1 = 1,
    };

    enum class eFOF : std::uint32_t {
      // No result FIFO overflow has occurred since the last time the flag was cleared.
      eFOF_0 = 0,
      // At least one result FIFO overflow has occurred since the last time the flag was cleared.
      eFOF_1 = 1,
    };

    enum class eADC_ACTIVE : std::uint32_t {
      // The LPADC is IDLE. There are no pending triggers to service and no active commands are being processed.
      eADC_ACTIVE_0 = 0,
      // The LPADC is processing a conversion, running through the power up delay, or servicing a trigger.
      eADC_ACTIVE_1 = 1,
    };

    enum class eTRGACT : std::uint32_t {
      // Command (sequence) associated with Trigger 0 currently being executed.
      eTRGACT_0 = 0,
      // Command (sequence) associated with Trigger 1 currently being executed.
      eTRGACT_1 = 1,
      // Command (sequence) associated with Trigger 2 currently being executed.
      eTRGACT_2 = 2,
      // Command (sequence) from the associated Trigger number is currently being executed.
      eTRGACT_3 = 3,
      // Command (sequence) from the associated Trigger number is currently being executed.
      eTRGACT_4 = 4,
      // Command (sequence) from the associated Trigger number is currently being executed.
      eTRGACT_5 = 5,
      // Command (sequence) from the associated Trigger number is currently being executed.
      eTRGACT_6 = 6,
      // Command (sequence) from the associated Trigger number is currently being executed.
      eTRGACT_7 = 7,
    };

    enum class eCMDACT : std::uint32_t {
      // No command is currently in progress.
      eCMDACT_0 = 0,
      // Command 1 currently being executed.
      eCMDACT_1 = 1,
      // Command 2 currently being executed.
      eCMDACT_2 = 2,
      // Associated command number is currently being executed.
      eCMDACT_3 = 3,
      // Associated command number is currently being executed.
      eCMDACT_4 = 4,
      // Associated command number is currently being executed.
      eCMDACT_5 = 5,
      // Associated command number is currently being executed.
      eCMDACT_6 = 6,
      // Associated command number is currently being executed.
      eCMDACT_7 = 7,
      // Associated command number is currently being executed.
      eCMDACT_8 = 8,
      // Associated command number is currently being executed.
      eCMDACT_9 = 9,
    };

    // Result FIFO Ready Flag
    using RDY = ftl::mmio::Field<1, 0, eRDY, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result FIFO Overflow Flag
    using FOF = ftl::mmio::Field<1, 1, eFOF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ADC Active
    using ADC_ACTIVE = ftl::mmio::Field<1, 8, eADC_ACTIVE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Trigger Active
    using TRGACT = ftl::mmio::Field<3, 16, eTRGACT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Command Active
    using CMDACT = ftl::mmio::Field<4, 24, eCMDACT, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct StatFields

  struct STAT : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename StatFields::RDY,
      typename StatFields::FOF,
      ftl::mmio::Reserved<6, 2>,
      typename StatFields::ADC_ACTIVE,
      ftl::mmio::Reserved<7, 9>,
      typename StatFields::TRGACT,
      ftl::mmio::Reserved<5, 19>,
      typename StatFields::CMDACT,
      ftl::mmio::Reserved<4, 28>> {
    using eRDY = typename StatFields::eRDY;
    using eFOF = typename StatFields::eFOF;
    using eADC_ACTIVE = typename StatFields::eADC_ACTIVE;
    using eTRGACT = typename StatFields::eTRGACT;
    using eCMDACT = typename StatFields::eCMDACT;
    using RDY = typename StatFields::RDY;
    using FOF = typename StatFields::FOF;
    using ADC_ACTIVE = typename StatFields::ADC_ACTIVE;
    using TRGACT = typename StatFields::TRGACT;
    using CMDACT = typename StatFields::CMDACT;
  };

  // Interrupt Enable Register
  struct IeFields {
    enum class eFWMIE : std::uint32_t {
      // FIFO watermark interrupts are not enabled.
      eFWMIE_0 = 0,
      // FIFO watermark interrupts are enabled.
      eFWMIE_1 = 1,
    };

    enum class eFOFIE : std::uint32_t {
      // FIFO overflow interrupts are not enabled.
      eFOFIE_0 = 0,
      // FIFO overflow interrupts are enabled.
      eFOFIE_1 = 1,
    };

    // FIFO Watermark Interrupt Enable
    using FWMIE = ftl::mmio::Field<1, 0, eFWMIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Result FIFO Overflow Interrupt Enable
    using FOFIE = ftl::mmio::Field<1, 1, eFOFIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IeFields

  struct IE : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IeFields::FWMIE,
      typename IeFields::FOFIE,
      ftl::mmio::Reserved<30, 2>> {
    using eFWMIE = typename IeFields::eFWMIE;
    using eFOFIE = typename IeFields::eFOFIE;
    using FWMIE = typename IeFields::FWMIE;
    using FOFIE = typename IeFields::FOFIE;
  };

  // DMA Enable Register
  struct DeFields {
    enum class eFWMDE : std::uint32_t {
      // DMA request disabled.
      eFWMDE_0 = 0,
      // DMA request enabled.
      eFWMDE_1 = 1,
    };

    // FIFO Watermark DMA Enable
    using FWMDE = ftl::mmio::Field<1, 0, eFWMDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DeFields

  struct DE : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DeFields::FWMDE,
      ftl::mmio::Reserved<31, 1>> {
    using eFWMDE = typename DeFields::eFWMDE;
    using FWMDE = typename DeFields::FWMDE;
  };

  // LPADC Configuration Register
  struct CfgFields {
    enum class eTPRICTRL : std::uint32_t {
      // If a higher priority trigger is detected during command processing, the current conversion is aborted and the new command specified by the trigger is started.
      eTPRICTRL_0 = 0,
      // If a higher priority trigger is received during command processing, the current conversion is completed (including averaging iterations if enabled) and stored to the RESFIFO before the higher priority trigger/command is initiated. Note that compare until true commands can be interrupted prior to resulting in a true conversion.
      eTPRICTRL_1 = 1,
    };

    enum class ePWRSEL : std::uint32_t {
      // Level 1 (Lowest power setting)
      ePWRSEL_0 = 0,
      // Level 2
      ePWRSEL_1 = 1,
      // Level 3
      ePWRSEL_2 = 2,
      // Level 4 (Highest power setting)
      ePWRSEL_3 = 3,
    };

    enum class eREFSEL : std::uint32_t {
      // (Default) Option 1 setting.
      eREFSEL_0 = 0,
      // Option 2 setting.
      eREFSEL_1 = 1,
      // Option 3 setting.
      eREFSEL_2 = 2,
    };

    enum class ePWREN : std::uint32_t {
      // LPADC analog circuits are only enabled while conversions are active. Performance is affected due to analog startup delays.
      ePWREN_0 = 0,
      // LPADC analog circuits are pre-enabled and ready to execute conversions without startup delays (at the cost of higher DC current consumption). When PWREN is set, the power up delay is enforced such that any detected trigger does not begin ADC operation until the power up delay time has passed.
      ePWREN_1 = 1,
    };

    // LPADC trigger priority control
    using TPRICTRL = ftl::mmio::Field<1, 0, eTPRICTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power Configuration Select
    using PWRSEL = ftl::mmio::Field<2, 4, ePWRSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Voltage Reference Selection
    using REFSEL = ftl::mmio::Field<2, 6, eREFSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power Up Delay
    using PUDLY = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPADC Analog Pre-Enable
    using PWREN = ftl::mmio::Field<1, 28, ePWREN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgFields

  struct CFG : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00800000u,
      ftl::mmio::RW,
      typename CfgFields::TPRICTRL,
      ftl::mmio::Reserved<3, 1>,
      typename CfgFields::PWRSEL,
      typename CfgFields::REFSEL,
      ftl::mmio::Reserved<8, 8>,
      typename CfgFields::PUDLY,
      ftl::mmio::Reserved<4, 24>,
      typename CfgFields::PWREN,
      ftl::mmio::Reserved<3, 29>> {
    using eTPRICTRL = typename CfgFields::eTPRICTRL;
    using ePWRSEL = typename CfgFields::ePWRSEL;
    using eREFSEL = typename CfgFields::eREFSEL;
    using ePWREN = typename CfgFields::ePWREN;
    using TPRICTRL = typename CfgFields::TPRICTRL;
    using PWRSEL = typename CfgFields::PWRSEL;
    using REFSEL = typename CfgFields::REFSEL;
    using PUDLY = typename CfgFields::PUDLY;
    using PWREN = typename CfgFields::PWREN;
  };

  // LPADC Pause Register
  struct PauseFields {
    enum class ePAUSEEN : std::uint32_t {
      // Pause operation disabled
      ePAUSEEN_0 = 0,
      // Pause operation enabled
      ePAUSEEN_1 = 1,
    };

    // Pause Delay
    using PAUSEDLY = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PAUSE Option Enable
    using PAUSEEN = ftl::mmio::Field<1, 31, ePAUSEEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PauseFields

  struct PAUSE : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename PauseFields::PAUSEDLY,
      ftl::mmio::Reserved<22, 9>,
      typename PauseFields::PAUSEEN> {
    using ePAUSEEN = typename PauseFields::ePAUSEEN;
    using PAUSEDLY = typename PauseFields::PAUSEDLY;
    using PAUSEEN = typename PauseFields::PAUSEEN;
  };

  // LPADC FIFO Control Register
  struct FctrlFields {
    enum class eFCOUNT : std::uint32_t {
      // No data stored in FIFO
      eFCOUNT_0 = 0,
      // 1 dataword stored in FIFO
      eFCOUNT_1 = 1,
      // 2 datawords stored in FIFO
      eFCOUNT_2 = 2,
      // 4 datawords stored in FIFO
      eFCOUNT_4 = 4,
      // 8 datawords stored in FIFO
      eFCOUNT_8 = 8,
      // 16 datawords stored in FIFO
      eFCOUNT_16 = 16,
    };

    enum class eFWMARK : std::uint32_t {
      // Generates STAT[RDY] flag after 1st successful conversion - single conversion
      eFWMARK_0 = 0,
      // Generates STAT[RDY] flag after 2nd successful conversion
      eFWMARK_1 = 1,
      // Generates STAT[RDY] flag after 3rd successful conversion
      eFWMARK_2 = 2,
      // Generates STAT[RDY] flag after 4th successful conversion
      eFWMARK_3 = 3,
      // Generates STAT[RDY] flag after 5th successful conversion
      eFWMARK_4 = 4,
      // Generates STAT[RDY] flag after 6th successful conversion
      eFWMARK_5 = 5,
      // Generates STAT[RDY] flag after 7th successful conversion
      eFWMARK_6 = 6,
      // Generates STAT[RDY] flag after 8th successful conversion
      eFWMARK_7 = 7,
      // Generates STAT[RDY] flag after 9th successful conversion
      eFWMARK_8 = 8,
      // Generates STAT[RDY] flag after 10th successful conversion
      eFWMARK_9 = 9,
      // Generates STAT[RDY] flag after 11th successful conversion
      eFWMARK_10 = 10,
      // Generates STAT[RDY] flag after 12th successful conversion
      eFWMARK_11 = 11,
      // Generates STAT[RDY] flag after 13th successful conversion
      eFWMARK_12 = 12,
      // Generates STAT[RDY] flag after 14th successful conversion
      eFWMARK_13 = 13,
      // Generates STAT[RDY] flag after 15th successful conversion
      eFWMARK_14 = 14,
      // Generates STAT[RDY] flag after 16th successful conversion
      eFWMARK_15 = 15,
    };

    // Result FIFO counter
    using FCOUNT = ftl::mmio::Field<5, 0, eFCOUNT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Watermark level selection
    using FWMARK = ftl::mmio::Field<4, 16, eFWMARK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FctrlFields

  struct FCTRL : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename FctrlFields::FCOUNT,
      ftl::mmio::Reserved<11, 5>,
      typename FctrlFields::FWMARK,
      ftl::mmio::Reserved<12, 20>> {
    using eFCOUNT = typename FctrlFields::eFCOUNT;
    using eFWMARK = typename FctrlFields::eFWMARK;
    using FCOUNT = typename FctrlFields::FCOUNT;
    using FWMARK = typename FctrlFields::FWMARK;
  };

  // Software Trigger Register
  struct SwtrigFields {
    enum class eSWT0 : std::uint32_t {
      // No trigger 0 event generated.
      eSWT0_0 = 0,
      // Trigger 0 event generated.
      eSWT0_1 = 1,
    };

    enum class eSWT1 : std::uint32_t {
      // No trigger 1 event generated.
      eSWT1_0 = 0,
      // Trigger 1 event generated.
      eSWT1_1 = 1,
    };

    enum class eSWT2 : std::uint32_t {
      // No trigger 2 event generated.
      eSWT2_0 = 0,
      // Trigger 2 event generated.
      eSWT2_1 = 1,
    };

    enum class eSWT3 : std::uint32_t {
      // No trigger 3 event generated.
      eSWT3_0 = 0,
      // Trigger 3 event generated.
      eSWT3_1 = 1,
    };

    enum class eSWT4 : std::uint32_t {
      // No trigger 4 event generated.
      eSWT4_0 = 0,
      // Trigger 4 event generated.
      eSWT4_1 = 1,
    };

    enum class eSWT5 : std::uint32_t {
      // No trigger 5 event generated.
      eSWT5_0 = 0,
      // Trigger 5 event generated.
      eSWT5_1 = 1,
    };

    enum class eSWT6 : std::uint32_t {
      // No trigger 6 event generated.
      eSWT6_0 = 0,
      // Trigger 6 event generated.
      eSWT6_1 = 1,
    };

    enum class eSWT7 : std::uint32_t {
      // No trigger 7 event generated.
      eSWT7_0 = 0,
      // Trigger 7 event generated.
      eSWT7_1 = 1,
    };

    // Software trigger 0 event
    using SWT0 = ftl::mmio::Field<1, 0, eSWT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger 1 event
    using SWT1 = ftl::mmio::Field<1, 1, eSWT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger 2 event
    using SWT2 = ftl::mmio::Field<1, 2, eSWT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger 3 event
    using SWT3 = ftl::mmio::Field<1, 3, eSWT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger 4 event
    using SWT4 = ftl::mmio::Field<1, 4, eSWT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger 5 event
    using SWT5 = ftl::mmio::Field<1, 5, eSWT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger 6 event
    using SWT6 = ftl::mmio::Field<1, 6, eSWT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger 7 event
    using SWT7 = ftl::mmio::Field<1, 7, eSWT7, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwtrigFields

  struct SWTRIG : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SwtrigFields::SWT0,
      typename SwtrigFields::SWT1,
      typename SwtrigFields::SWT2,
      typename SwtrigFields::SWT3,
      typename SwtrigFields::SWT4,
      typename SwtrigFields::SWT5,
      typename SwtrigFields::SWT6,
      typename SwtrigFields::SWT7,
      ftl::mmio::Reserved<24, 8>> {
    using eSWT0 = typename SwtrigFields::eSWT0;
    using eSWT1 = typename SwtrigFields::eSWT1;
    using eSWT2 = typename SwtrigFields::eSWT2;
    using eSWT3 = typename SwtrigFields::eSWT3;
    using eSWT4 = typename SwtrigFields::eSWT4;
    using eSWT5 = typename SwtrigFields::eSWT5;
    using eSWT6 = typename SwtrigFields::eSWT6;
    using eSWT7 = typename SwtrigFields::eSWT7;
    using SWT0 = typename SwtrigFields::SWT0;
    using SWT1 = typename SwtrigFields::SWT1;
    using SWT2 = typename SwtrigFields::SWT2;
    using SWT3 = typename SwtrigFields::SWT3;
    using SWT4 = typename SwtrigFields::SWT4;
    using SWT5 = typename SwtrigFields::SWT5;
    using SWT6 = typename SwtrigFields::SWT6;
    using SWT7 = typename SwtrigFields::SWT7;
  };

  // Trigger Control Register
  struct TctrlFields {
    enum class eHTEN : std::uint32_t {
      // Hardware trigger source disabled
      eHTEN_0 = 0,
      // Hardware trigger source enabled
      eHTEN_1 = 1,
    };

    enum class eCMD_SEL : std::uint32_t {
      // TCTRLa[TCMD] will determine the command
      eCMD_SEL_0 = 0,
      // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
      eCMD_SEL_1 = 1,
    };

    enum class eTPRI : std::uint32_t {
      // Set to highest priority, Level 1
      eTPRI_0 = 0,
      // Set to corresponding priority level
      eTPRI_1 = 1,
      // Set to corresponding priority level
      eTPRI_2 = 2,
      // Set to corresponding priority level
      eTPRI_3 = 3,
      // Set to corresponding priority level
      eTPRI_4 = 4,
      // Set to corresponding priority level
      eTPRI_5 = 5,
      // Set to corresponding priority level
      eTPRI_6 = 6,
      // Set to lowest priority, Level 8
      eTPRI_7 = 7,
    };

    enum class eTCMD : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eTCMD_0 = 0,
      // CMD1 is executed
      eTCMD_1 = 1,
      // Corresponding CMD is executed
      eTCMD_2 = 2,
      // Corresponding CMD is executed
      eTCMD_3 = 3,
      // Corresponding CMD is executed
      eTCMD_4 = 4,
      // Corresponding CMD is executed
      eTCMD_5 = 5,
      // Corresponding CMD is executed
      eTCMD_6 = 6,
      // Corresponding CMD is executed
      eTCMD_7 = 7,
      // Corresponding CMD is executed
      eTCMD_8 = 8,
      // Corresponding CMD is executed
      eTCMD_9 = 9,
      // CMD15 is executed
      eTCMD_15 = 15,
    };

    // Trigger enable
    using HTEN = ftl::mmio::Field<1, 0, eHTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // The command number is selected by software TCMD or hardware tcmd signal
    using CMD_SEL = ftl::mmio::Field<1, 1, eCMD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger priority setting
    using TPRI = ftl::mmio::Field<3, 8, eTPRI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger delay select
    using TDLY = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger command select
    using TCMD = ftl::mmio::Field<4, 24, eTCMD, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TctrlFields

  template<std::uint32_t Index>
  struct TCTRL : ftl::mmio::Register<
      kBase + 0xC0u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TctrlFields::HTEN,
      typename TctrlFields::CMD_SEL,
      ftl::mmio::Reserved<6, 2>,
      typename TctrlFields::TPRI,
      ftl::mmio::Reserved<5, 11>,
      typename TctrlFields::TDLY,
      ftl::mmio::Reserved<4, 20>,
      typename TctrlFields::TCMD,
      ftl::mmio::Reserved<4, 28>> {
    static_assert(Index < 8u, "TCTRL: Index out of range");
    using eHTEN = typename TctrlFields::eHTEN;
    using eCMD_SEL = typename TctrlFields::eCMD_SEL;
    using eTPRI = typename TctrlFields::eTPRI;
    using eTCMD = typename TctrlFields::eTCMD;
    using HTEN = typename TctrlFields::HTEN;
    using CMD_SEL = typename TctrlFields::CMD_SEL;
    using TPRI = typename TctrlFields::TPRI;
    using TDLY = typename TctrlFields::TDLY;
    using TCMD = typename TctrlFields::TCMD;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl1Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl1Fields

  struct CMDL1 : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl1Fields::ADCH,
      typename Cmdl1Fields::ABSEL,
      typename Cmdl1Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl1Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl1Fields::eADCH;
    using eABSEL = typename Cmdl1Fields::eABSEL;
    using eDIFF = typename Cmdl1Fields::eDIFF;
    using eCSCALE = typename Cmdl1Fields::eCSCALE;
    using ADCH = typename Cmdl1Fields::ADCH;
    using ABSEL = typename Cmdl1Fields::ABSEL;
    using DIFF = typename Cmdl1Fields::DIFF;
    using CSCALE = typename Cmdl1Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh1Fields {
    enum class eCMPEN : std::uint32_t {
      // Compare disabled.
      eCMPEN_0 = 0,
      // Compare enabled. Store on true.
      eCMPEN_2 = 2,
      // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
      eCMPEN_3 = 3,
    };

    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Compare Function Enable
    using CMPEN = ftl::mmio::Field<2, 0, eCMPEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh1Fields

  struct CMDH1 : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Cmdh1Fields::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename Cmdh1Fields::LWI,
      typename Cmdh1Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh1Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh1Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh1Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename Cmdh1Fields::eCMPEN;
    using eLWI = typename Cmdh1Fields::eLWI;
    using eSTS = typename Cmdh1Fields::eSTS;
    using eAVGS = typename Cmdh1Fields::eAVGS;
    using eLOOP = typename Cmdh1Fields::eLOOP;
    using eNEXT = typename Cmdh1Fields::eNEXT;
    using CMPEN = typename Cmdh1Fields::CMPEN;
    using LWI = typename Cmdh1Fields::LWI;
    using STS = typename Cmdh1Fields::STS;
    using AVGS = typename Cmdh1Fields::AVGS;
    using LOOP = typename Cmdh1Fields::LOOP;
    using NEXT = typename Cmdh1Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl2Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl2Fields

  struct CMDL2 : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl2Fields::ADCH,
      typename Cmdl2Fields::ABSEL,
      typename Cmdl2Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl2Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl2Fields::eADCH;
    using eABSEL = typename Cmdl2Fields::eABSEL;
    using eDIFF = typename Cmdl2Fields::eDIFF;
    using eCSCALE = typename Cmdl2Fields::eCSCALE;
    using ADCH = typename Cmdl2Fields::ADCH;
    using ABSEL = typename Cmdl2Fields::ABSEL;
    using DIFF = typename Cmdl2Fields::DIFF;
    using CSCALE = typename Cmdl2Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh2Fields {
    enum class eCMPEN : std::uint32_t {
      // Compare disabled.
      eCMPEN_0 = 0,
      // Compare enabled. Store on true.
      eCMPEN_2 = 2,
      // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
      eCMPEN_3 = 3,
    };

    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Compare Function Enable
    using CMPEN = ftl::mmio::Field<2, 0, eCMPEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh2Fields

  struct CMDH2 : ftl::mmio::Register<
      kBase + 0x10Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Cmdh2Fields::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename Cmdh2Fields::LWI,
      typename Cmdh2Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh2Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh2Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh2Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename Cmdh2Fields::eCMPEN;
    using eLWI = typename Cmdh2Fields::eLWI;
    using eSTS = typename Cmdh2Fields::eSTS;
    using eAVGS = typename Cmdh2Fields::eAVGS;
    using eLOOP = typename Cmdh2Fields::eLOOP;
    using eNEXT = typename Cmdh2Fields::eNEXT;
    using CMPEN = typename Cmdh2Fields::CMPEN;
    using LWI = typename Cmdh2Fields::LWI;
    using STS = typename Cmdh2Fields::STS;
    using AVGS = typename Cmdh2Fields::AVGS;
    using LOOP = typename Cmdh2Fields::LOOP;
    using NEXT = typename Cmdh2Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl3Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl3Fields

  struct CMDL3 : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl3Fields::ADCH,
      typename Cmdl3Fields::ABSEL,
      typename Cmdl3Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl3Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl3Fields::eADCH;
    using eABSEL = typename Cmdl3Fields::eABSEL;
    using eDIFF = typename Cmdl3Fields::eDIFF;
    using eCSCALE = typename Cmdl3Fields::eCSCALE;
    using ADCH = typename Cmdl3Fields::ADCH;
    using ABSEL = typename Cmdl3Fields::ABSEL;
    using DIFF = typename Cmdl3Fields::DIFF;
    using CSCALE = typename Cmdl3Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh3Fields {
    enum class eCMPEN : std::uint32_t {
      // Compare disabled.
      eCMPEN_0 = 0,
      // Compare enabled. Store on true.
      eCMPEN_2 = 2,
      // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
      eCMPEN_3 = 3,
    };

    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Compare Function Enable
    using CMPEN = ftl::mmio::Field<2, 0, eCMPEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh3Fields

  struct CMDH3 : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Cmdh3Fields::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename Cmdh3Fields::LWI,
      typename Cmdh3Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh3Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh3Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh3Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename Cmdh3Fields::eCMPEN;
    using eLWI = typename Cmdh3Fields::eLWI;
    using eSTS = typename Cmdh3Fields::eSTS;
    using eAVGS = typename Cmdh3Fields::eAVGS;
    using eLOOP = typename Cmdh3Fields::eLOOP;
    using eNEXT = typename Cmdh3Fields::eNEXT;
    using CMPEN = typename Cmdh3Fields::CMPEN;
    using LWI = typename Cmdh3Fields::LWI;
    using STS = typename Cmdh3Fields::STS;
    using AVGS = typename Cmdh3Fields::AVGS;
    using LOOP = typename Cmdh3Fields::LOOP;
    using NEXT = typename Cmdh3Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl4Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl4Fields

  struct CMDL4 : ftl::mmio::Register<
      kBase + 0x118u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl4Fields::ADCH,
      typename Cmdl4Fields::ABSEL,
      typename Cmdl4Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl4Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl4Fields::eADCH;
    using eABSEL = typename Cmdl4Fields::eABSEL;
    using eDIFF = typename Cmdl4Fields::eDIFF;
    using eCSCALE = typename Cmdl4Fields::eCSCALE;
    using ADCH = typename Cmdl4Fields::ADCH;
    using ABSEL = typename Cmdl4Fields::ABSEL;
    using DIFF = typename Cmdl4Fields::DIFF;
    using CSCALE = typename Cmdl4Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh4Fields {
    enum class eCMPEN : std::uint32_t {
      // Compare disabled.
      eCMPEN_0 = 0,
      // Compare enabled. Store on true.
      eCMPEN_2 = 2,
      // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
      eCMPEN_3 = 3,
    };

    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Compare Function Enable
    using CMPEN = ftl::mmio::Field<2, 0, eCMPEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh4Fields

  struct CMDH4 : ftl::mmio::Register<
      kBase + 0x11Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Cmdh4Fields::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename Cmdh4Fields::LWI,
      typename Cmdh4Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh4Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh4Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh4Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename Cmdh4Fields::eCMPEN;
    using eLWI = typename Cmdh4Fields::eLWI;
    using eSTS = typename Cmdh4Fields::eSTS;
    using eAVGS = typename Cmdh4Fields::eAVGS;
    using eLOOP = typename Cmdh4Fields::eLOOP;
    using eNEXT = typename Cmdh4Fields::eNEXT;
    using CMPEN = typename Cmdh4Fields::CMPEN;
    using LWI = typename Cmdh4Fields::LWI;
    using STS = typename Cmdh4Fields::STS;
    using AVGS = typename Cmdh4Fields::AVGS;
    using LOOP = typename Cmdh4Fields::LOOP;
    using NEXT = typename Cmdh4Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl5Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl5Fields

  struct CMDL5 : ftl::mmio::Register<
      kBase + 0x120u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl5Fields::ADCH,
      typename Cmdl5Fields::ABSEL,
      typename Cmdl5Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl5Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl5Fields::eADCH;
    using eABSEL = typename Cmdl5Fields::eABSEL;
    using eDIFF = typename Cmdl5Fields::eDIFF;
    using eCSCALE = typename Cmdl5Fields::eCSCALE;
    using ADCH = typename Cmdl5Fields::ADCH;
    using ABSEL = typename Cmdl5Fields::ABSEL;
    using DIFF = typename Cmdl5Fields::DIFF;
    using CSCALE = typename Cmdl5Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh5Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh5Fields

  struct CMDH5 : ftl::mmio::Register<
      kBase + 0x124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh5Fields::LWI,
      typename Cmdh5Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh5Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh5Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh5Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh5Fields::eLWI;
    using eSTS = typename Cmdh5Fields::eSTS;
    using eAVGS = typename Cmdh5Fields::eAVGS;
    using eLOOP = typename Cmdh5Fields::eLOOP;
    using eNEXT = typename Cmdh5Fields::eNEXT;
    using LWI = typename Cmdh5Fields::LWI;
    using STS = typename Cmdh5Fields::STS;
    using AVGS = typename Cmdh5Fields::AVGS;
    using LOOP = typename Cmdh5Fields::LOOP;
    using NEXT = typename Cmdh5Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl6Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl6Fields

  struct CMDL6 : ftl::mmio::Register<
      kBase + 0x128u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl6Fields::ADCH,
      typename Cmdl6Fields::ABSEL,
      typename Cmdl6Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl6Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl6Fields::eADCH;
    using eABSEL = typename Cmdl6Fields::eABSEL;
    using eDIFF = typename Cmdl6Fields::eDIFF;
    using eCSCALE = typename Cmdl6Fields::eCSCALE;
    using ADCH = typename Cmdl6Fields::ADCH;
    using ABSEL = typename Cmdl6Fields::ABSEL;
    using DIFF = typename Cmdl6Fields::DIFF;
    using CSCALE = typename Cmdl6Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh6Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh6Fields

  struct CMDH6 : ftl::mmio::Register<
      kBase + 0x12Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh6Fields::LWI,
      typename Cmdh6Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh6Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh6Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh6Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh6Fields::eLWI;
    using eSTS = typename Cmdh6Fields::eSTS;
    using eAVGS = typename Cmdh6Fields::eAVGS;
    using eLOOP = typename Cmdh6Fields::eLOOP;
    using eNEXT = typename Cmdh6Fields::eNEXT;
    using LWI = typename Cmdh6Fields::LWI;
    using STS = typename Cmdh6Fields::STS;
    using AVGS = typename Cmdh6Fields::AVGS;
    using LOOP = typename Cmdh6Fields::LOOP;
    using NEXT = typename Cmdh6Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl7Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl7Fields

  struct CMDL7 : ftl::mmio::Register<
      kBase + 0x130u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl7Fields::ADCH,
      typename Cmdl7Fields::ABSEL,
      typename Cmdl7Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl7Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl7Fields::eADCH;
    using eABSEL = typename Cmdl7Fields::eABSEL;
    using eDIFF = typename Cmdl7Fields::eDIFF;
    using eCSCALE = typename Cmdl7Fields::eCSCALE;
    using ADCH = typename Cmdl7Fields::ADCH;
    using ABSEL = typename Cmdl7Fields::ABSEL;
    using DIFF = typename Cmdl7Fields::DIFF;
    using CSCALE = typename Cmdl7Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh7Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh7Fields

  struct CMDH7 : ftl::mmio::Register<
      kBase + 0x134u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh7Fields::LWI,
      typename Cmdh7Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh7Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh7Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh7Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh7Fields::eLWI;
    using eSTS = typename Cmdh7Fields::eSTS;
    using eAVGS = typename Cmdh7Fields::eAVGS;
    using eLOOP = typename Cmdh7Fields::eLOOP;
    using eNEXT = typename Cmdh7Fields::eNEXT;
    using LWI = typename Cmdh7Fields::LWI;
    using STS = typename Cmdh7Fields::STS;
    using AVGS = typename Cmdh7Fields::AVGS;
    using LOOP = typename Cmdh7Fields::LOOP;
    using NEXT = typename Cmdh7Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl8Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl8Fields

  struct CMDL8 : ftl::mmio::Register<
      kBase + 0x138u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl8Fields::ADCH,
      typename Cmdl8Fields::ABSEL,
      typename Cmdl8Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl8Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl8Fields::eADCH;
    using eABSEL = typename Cmdl8Fields::eABSEL;
    using eDIFF = typename Cmdl8Fields::eDIFF;
    using eCSCALE = typename Cmdl8Fields::eCSCALE;
    using ADCH = typename Cmdl8Fields::ADCH;
    using ABSEL = typename Cmdl8Fields::ABSEL;
    using DIFF = typename Cmdl8Fields::DIFF;
    using CSCALE = typename Cmdl8Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh8Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh8Fields

  struct CMDH8 : ftl::mmio::Register<
      kBase + 0x13Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh8Fields::LWI,
      typename Cmdh8Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh8Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh8Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh8Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh8Fields::eLWI;
    using eSTS = typename Cmdh8Fields::eSTS;
    using eAVGS = typename Cmdh8Fields::eAVGS;
    using eLOOP = typename Cmdh8Fields::eLOOP;
    using eNEXT = typename Cmdh8Fields::eNEXT;
    using LWI = typename Cmdh8Fields::LWI;
    using STS = typename Cmdh8Fields::STS;
    using AVGS = typename Cmdh8Fields::AVGS;
    using LOOP = typename Cmdh8Fields::LOOP;
    using NEXT = typename Cmdh8Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl9Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl9Fields

  struct CMDL9 : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl9Fields::ADCH,
      typename Cmdl9Fields::ABSEL,
      typename Cmdl9Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl9Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl9Fields::eADCH;
    using eABSEL = typename Cmdl9Fields::eABSEL;
    using eDIFF = typename Cmdl9Fields::eDIFF;
    using eCSCALE = typename Cmdl9Fields::eCSCALE;
    using ADCH = typename Cmdl9Fields::ADCH;
    using ABSEL = typename Cmdl9Fields::ABSEL;
    using DIFF = typename Cmdl9Fields::DIFF;
    using CSCALE = typename Cmdl9Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh9Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh9Fields

  struct CMDH9 : ftl::mmio::Register<
      kBase + 0x144u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh9Fields::LWI,
      typename Cmdh9Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh9Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh9Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh9Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh9Fields::eLWI;
    using eSTS = typename Cmdh9Fields::eSTS;
    using eAVGS = typename Cmdh9Fields::eAVGS;
    using eLOOP = typename Cmdh9Fields::eLOOP;
    using eNEXT = typename Cmdh9Fields::eNEXT;
    using LWI = typename Cmdh9Fields::LWI;
    using STS = typename Cmdh9Fields::STS;
    using AVGS = typename Cmdh9Fields::AVGS;
    using LOOP = typename Cmdh9Fields::LOOP;
    using NEXT = typename Cmdh9Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl10Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl10Fields

  struct CMDL10 : ftl::mmio::Register<
      kBase + 0x148u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl10Fields::ADCH,
      typename Cmdl10Fields::ABSEL,
      typename Cmdl10Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl10Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl10Fields::eADCH;
    using eABSEL = typename Cmdl10Fields::eABSEL;
    using eDIFF = typename Cmdl10Fields::eDIFF;
    using eCSCALE = typename Cmdl10Fields::eCSCALE;
    using ADCH = typename Cmdl10Fields::ADCH;
    using ABSEL = typename Cmdl10Fields::ABSEL;
    using DIFF = typename Cmdl10Fields::DIFF;
    using CSCALE = typename Cmdl10Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh10Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh10Fields

  struct CMDH10 : ftl::mmio::Register<
      kBase + 0x14Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh10Fields::LWI,
      typename Cmdh10Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh10Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh10Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh10Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh10Fields::eLWI;
    using eSTS = typename Cmdh10Fields::eSTS;
    using eAVGS = typename Cmdh10Fields::eAVGS;
    using eLOOP = typename Cmdh10Fields::eLOOP;
    using eNEXT = typename Cmdh10Fields::eNEXT;
    using LWI = typename Cmdh10Fields::LWI;
    using STS = typename Cmdh10Fields::STS;
    using AVGS = typename Cmdh10Fields::AVGS;
    using LOOP = typename Cmdh10Fields::LOOP;
    using NEXT = typename Cmdh10Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl11Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl11Fields

  struct CMDL11 : ftl::mmio::Register<
      kBase + 0x150u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl11Fields::ADCH,
      typename Cmdl11Fields::ABSEL,
      typename Cmdl11Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl11Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl11Fields::eADCH;
    using eABSEL = typename Cmdl11Fields::eABSEL;
    using eDIFF = typename Cmdl11Fields::eDIFF;
    using eCSCALE = typename Cmdl11Fields::eCSCALE;
    using ADCH = typename Cmdl11Fields::ADCH;
    using ABSEL = typename Cmdl11Fields::ABSEL;
    using DIFF = typename Cmdl11Fields::DIFF;
    using CSCALE = typename Cmdl11Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh11Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh11Fields

  struct CMDH11 : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh11Fields::LWI,
      typename Cmdh11Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh11Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh11Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh11Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh11Fields::eLWI;
    using eSTS = typename Cmdh11Fields::eSTS;
    using eAVGS = typename Cmdh11Fields::eAVGS;
    using eLOOP = typename Cmdh11Fields::eLOOP;
    using eNEXT = typename Cmdh11Fields::eNEXT;
    using LWI = typename Cmdh11Fields::LWI;
    using STS = typename Cmdh11Fields::STS;
    using AVGS = typename Cmdh11Fields::AVGS;
    using LOOP = typename Cmdh11Fields::LOOP;
    using NEXT = typename Cmdh11Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl12Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl12Fields

  struct CMDL12 : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl12Fields::ADCH,
      typename Cmdl12Fields::ABSEL,
      typename Cmdl12Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl12Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl12Fields::eADCH;
    using eABSEL = typename Cmdl12Fields::eABSEL;
    using eDIFF = typename Cmdl12Fields::eDIFF;
    using eCSCALE = typename Cmdl12Fields::eCSCALE;
    using ADCH = typename Cmdl12Fields::ADCH;
    using ABSEL = typename Cmdl12Fields::ABSEL;
    using DIFF = typename Cmdl12Fields::DIFF;
    using CSCALE = typename Cmdl12Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh12Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh12Fields

  struct CMDH12 : ftl::mmio::Register<
      kBase + 0x15Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh12Fields::LWI,
      typename Cmdh12Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh12Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh12Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh12Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh12Fields::eLWI;
    using eSTS = typename Cmdh12Fields::eSTS;
    using eAVGS = typename Cmdh12Fields::eAVGS;
    using eLOOP = typename Cmdh12Fields::eLOOP;
    using eNEXT = typename Cmdh12Fields::eNEXT;
    using LWI = typename Cmdh12Fields::LWI;
    using STS = typename Cmdh12Fields::STS;
    using AVGS = typename Cmdh12Fields::AVGS;
    using LOOP = typename Cmdh12Fields::LOOP;
    using NEXT = typename Cmdh12Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl13Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl13Fields

  struct CMDL13 : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl13Fields::ADCH,
      typename Cmdl13Fields::ABSEL,
      typename Cmdl13Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl13Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl13Fields::eADCH;
    using eABSEL = typename Cmdl13Fields::eABSEL;
    using eDIFF = typename Cmdl13Fields::eDIFF;
    using eCSCALE = typename Cmdl13Fields::eCSCALE;
    using ADCH = typename Cmdl13Fields::ADCH;
    using ABSEL = typename Cmdl13Fields::ABSEL;
    using DIFF = typename Cmdl13Fields::DIFF;
    using CSCALE = typename Cmdl13Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh13Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh13Fields

  struct CMDH13 : ftl::mmio::Register<
      kBase + 0x164u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh13Fields::LWI,
      typename Cmdh13Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh13Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh13Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh13Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh13Fields::eLWI;
    using eSTS = typename Cmdh13Fields::eSTS;
    using eAVGS = typename Cmdh13Fields::eAVGS;
    using eLOOP = typename Cmdh13Fields::eLOOP;
    using eNEXT = typename Cmdh13Fields::eNEXT;
    using LWI = typename Cmdh13Fields::LWI;
    using STS = typename Cmdh13Fields::STS;
    using AVGS = typename Cmdh13Fields::AVGS;
    using LOOP = typename Cmdh13Fields::LOOP;
    using NEXT = typename Cmdh13Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl14Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl14Fields

  struct CMDL14 : ftl::mmio::Register<
      kBase + 0x168u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl14Fields::ADCH,
      typename Cmdl14Fields::ABSEL,
      typename Cmdl14Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl14Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl14Fields::eADCH;
    using eABSEL = typename Cmdl14Fields::eABSEL;
    using eDIFF = typename Cmdl14Fields::eDIFF;
    using eCSCALE = typename Cmdl14Fields::eCSCALE;
    using ADCH = typename Cmdl14Fields::ADCH;
    using ABSEL = typename Cmdl14Fields::ABSEL;
    using DIFF = typename Cmdl14Fields::DIFF;
    using CSCALE = typename Cmdl14Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh14Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh14Fields

  struct CMDH14 : ftl::mmio::Register<
      kBase + 0x16Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh14Fields::LWI,
      typename Cmdh14Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh14Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh14Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh14Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh14Fields::eLWI;
    using eSTS = typename Cmdh14Fields::eSTS;
    using eAVGS = typename Cmdh14Fields::eAVGS;
    using eLOOP = typename Cmdh14Fields::eLOOP;
    using eNEXT = typename Cmdh14Fields::eNEXT;
    using LWI = typename Cmdh14Fields::LWI;
    using STS = typename Cmdh14Fields::STS;
    using AVGS = typename Cmdh14Fields::AVGS;
    using LOOP = typename Cmdh14Fields::LOOP;
    using NEXT = typename Cmdh14Fields::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct Cmdl15Fields {
    enum class eADCH : std::uint32_t {
      // Select CH0A or CH0B or CH0A/CH0B pair.
      eADCH_0 = 0,
      // Select CH1A or CH1B or CH1A/CH1B pair.
      eADCH_1 = 1,
      // Select CH2A or CH2B or CH2A/CH2B pair.
      eADCH_2 = 2,
      // Select CH3A or CH3B or CH3A/CH3B pair.
      eADCH_3 = 3,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_4 = 4,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_5 = 5,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_6 = 6,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_7 = 7,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_8 = 8,
      // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
      eADCH_9 = 9,
      // Select CH30A or CH30B or CH30A/CH30B pair.
      eADCH_30 = 30,
      // Select CH31A or CH31B or CH31A/CH31B pair.
      eADCH_31 = 31,
    };

    enum class eABSEL : std::uint32_t {
      // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
      eABSEL_0 = 0,
      // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
      eABSEL_1 = 1,
    };

    enum class eDIFF : std::uint32_t {
      // Single-ended mode.
      eDIFF_0 = 0,
      // Differential mode.
      eDIFF_1 = 1,
    };

    enum class eCSCALE : std::uint32_t {
      // Scale selected analog channel (Factor of 30/64)
      eCSCALE_0 = 0,
      // (Default) Full scale (Factor of 1)
      eCSCALE_1 = 1,
    };

    // Input channel select
    using ADCH = ftl::mmio::Field<5, 0, eADCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // A-side vs. B-side Select
    using ABSEL = ftl::mmio::Field<1, 5, eABSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Differential Mode Enable
    using DIFF = ftl::mmio::Field<1, 6, eDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Scale
    using CSCALE = ftl::mmio::Field<1, 13, eCSCALE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdl15Fields

  struct CMDL15 : ftl::mmio::Register<
      kBase + 0x170u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename Cmdl15Fields::ADCH,
      typename Cmdl15Fields::ABSEL,
      typename Cmdl15Fields::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename Cmdl15Fields::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename Cmdl15Fields::eADCH;
    using eABSEL = typename Cmdl15Fields::eABSEL;
    using eDIFF = typename Cmdl15Fields::eDIFF;
    using eCSCALE = typename Cmdl15Fields::eCSCALE;
    using ADCH = typename Cmdl15Fields::ADCH;
    using ABSEL = typename Cmdl15Fields::ABSEL;
    using DIFF = typename Cmdl15Fields::DIFF;
    using CSCALE = typename Cmdl15Fields::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct Cmdh15Fields {
    enum class eLWI : std::uint32_t {
      // Auto channel increment disabled
      eLWI_0 = 0,
      // Auto channel increment enabled
      eLWI_1 = 1,
    };

    enum class eSTS : std::uint32_t {
      // Minimum sample time of 3.5 ADCK cycles.
      eSTS_0 = 0,
      // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
      eSTS_1 = 1,
      // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
      eSTS_2 = 2,
      // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
      eSTS_3 = 3,
      // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
      eSTS_4 = 4,
      // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
      eSTS_5 = 5,
      // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
      eSTS_6 = 6,
      // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
      eSTS_7 = 7,
    };

    enum class eAVGS : std::uint32_t {
      // Single conversion.
      eAVGS_0 = 0,
      // 2 conversions averaged.
      eAVGS_1 = 1,
      // 4 conversions averaged.
      eAVGS_2 = 2,
      // 8 conversions averaged.
      eAVGS_3 = 3,
      // 16 conversions averaged.
      eAVGS_4 = 4,
      // 32 conversions averaged.
      eAVGS_5 = 5,
      // 64 conversions averaged.
      eAVGS_6 = 6,
      // 128 conversions averaged.
      eAVGS_7 = 7,
    };

    enum class eLOOP : std::uint32_t {
      // Looping not enabled. Command executes 1 time.
      eLOOP_0 = 0,
      // Loop 1 time. Command executes 2 times.
      eLOOP_1 = 1,
      // Loop 2 times. Command executes 3 times.
      eLOOP_2 = 2,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_3 = 3,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_4 = 4,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_5 = 5,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_6 = 6,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_7 = 7,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_8 = 8,
      // Loop corresponding number of times. Command executes LOOP+1 times.
      eLOOP_9 = 9,
      // Loop 15 times. Command executes 16 times.
      eLOOP_15 = 15,
    };

    enum class eNEXT : std::uint32_t {
      // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
      eNEXT_0 = 0,
      // Select CMD1 command buffer register as next command.
      eNEXT_1 = 1,
      // Select corresponding CMD command buffer register as next command
      eNEXT_2 = 2,
      // Select corresponding CMD command buffer register as next command
      eNEXT_3 = 3,
      // Select corresponding CMD command buffer register as next command
      eNEXT_4 = 4,
      // Select corresponding CMD command buffer register as next command
      eNEXT_5 = 5,
      // Select corresponding CMD command buffer register as next command
      eNEXT_6 = 6,
      // Select corresponding CMD command buffer register as next command
      eNEXT_7 = 7,
      // Select corresponding CMD command buffer register as next command
      eNEXT_8 = 8,
      // Select corresponding CMD command buffer register as next command
      eNEXT_9 = 9,
      // Select CMD15 command buffer register as next command.
      eNEXT_15 = 15,
    };

    // Loop with Increment
    using LWI = ftl::mmio::Field<1, 7, eLWI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Time Select
    using STS = ftl::mmio::Field<3, 8, eSTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware Average Select
    using AVGS = ftl::mmio::Field<3, 12, eAVGS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Loop Count Select
    using LOOP = ftl::mmio::Field<4, 16, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Next Command Select
    using NEXT = ftl::mmio::Field<4, 24, eNEXT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmdh15Fields

  struct CMDH15 : ftl::mmio::Register<
      kBase + 0x174u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Cmdh15Fields::LWI,
      typename Cmdh15Fields::STS,
      ftl::mmio::Reserved<1, 11>,
      typename Cmdh15Fields::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename Cmdh15Fields::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename Cmdh15Fields::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename Cmdh15Fields::eLWI;
    using eSTS = typename Cmdh15Fields::eSTS;
    using eAVGS = typename Cmdh15Fields::eAVGS;
    using eLOOP = typename Cmdh15Fields::eLOOP;
    using eNEXT = typename Cmdh15Fields::eNEXT;
    using LWI = typename Cmdh15Fields::LWI;
    using STS = typename Cmdh15Fields::STS;
    using AVGS = typename Cmdh15Fields::AVGS;
    using LOOP = typename Cmdh15Fields::LOOP;
    using NEXT = typename Cmdh15Fields::NEXT;
  };

  // Compare Value Register
  struct CvFields {
    // Compare Value Low
    using CVL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Value High.
    using CVH = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CvFields

  template<std::uint32_t Index>
  struct CV : ftl::mmio::Register<
      kBase + 0x200u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CvFields::CVL,
      typename CvFields::CVH> {
    static_assert(Index < 4u, "CV: Index out of range");
    using CVL = typename CvFields::CVL;
    using CVH = typename CvFields::CVH;
  };

  // LPADC Data Result FIFO Register
  struct ResfifoFields {
    enum class eTSRC : std::uint32_t {
      // Trigger source 0 initiated this conversion.
      eTSRC_0 = 0,
      // Trigger source 1 initiated this conversion.
      eTSRC_1 = 1,
      // Corresponding trigger source initiated this conversion.
      eTSRC_2 = 2,
      // Corresponding trigger source initiated this conversion.
      eTSRC_3 = 3,
      // Corresponding trigger source initiated this conversion.
      eTSRC_4 = 4,
      // Corresponding trigger source initiated this conversion.
      eTSRC_5 = 5,
      // Corresponding trigger source initiated this conversion.
      eTSRC_6 = 6,
      // Trigger source 7 initiated this conversion.
      eTSRC_7 = 7,
    };

    enum class eLOOPCNT : std::uint32_t {
      // Result is from initial conversion in command.
      eLOOPCNT_0 = 0,
      // Result is from second conversion in command.
      eLOOPCNT_1 = 1,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_2 = 2,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_3 = 3,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_4 = 4,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_5 = 5,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_6 = 6,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_7 = 7,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_8 = 8,
      // Result is from LOOPCNT+1 conversion in command.
      eLOOPCNT_9 = 9,
      // Result is from 16th conversion in command.
      eLOOPCNT_15 = 15,
    };

    enum class eCMDSRC : std::uint32_t {
      // Not a valid value CMDSRC value for a dataword in RESFIFO. 0x0 is only found in initial FIFO state prior to an ADC conversion result dataword being stored to a RESFIFO buffer.
      eCMDSRC_0 = 0,
      // CMD1 buffer used as control settings for this conversion.
      eCMDSRC_1 = 1,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_2 = 2,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_3 = 3,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_4 = 4,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_5 = 5,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_6 = 6,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_7 = 7,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_8 = 8,
      // Corresponding command buffer used as control settings for this conversion.
      eCMDSRC_9 = 9,
      // CMD15 buffer used as control settings for this conversion.
      eCMDSRC_15 = 15,
    };

    enum class eVALID : std::uint32_t {
      // FIFO is empty. Discard any read from RESFIFO.
      eVALID_0 = 0,
      // FIFO record read from RESFIFO is valid.
      eVALID_1 = 1,
    };

    // Data result
    using D = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Trigger Source
    using TSRC = ftl::mmio::Field<3, 16, eTSRC, ftl::mmio::RO, ftl::mmio::Normal>;
    // Loop count value
    using LOOPCNT = ftl::mmio::Field<4, 20, eLOOPCNT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Command Buffer Source
    using CMDSRC = ftl::mmio::Field<4, 24, eCMDSRC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FIFO entry is valid
    using VALID = ftl::mmio::Field<1, 31, eVALID, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ResfifoFields

  struct RESFIFO : ftl::mmio::Register<
      kBase + 0x300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename ResfifoFields::D,
      typename ResfifoFields::TSRC,
      ftl::mmio::Reserved<1, 19>,
      typename ResfifoFields::LOOPCNT,
      typename ResfifoFields::CMDSRC,
      ftl::mmio::Reserved<3, 28>,
      typename ResfifoFields::VALID> {
    using eTSRC = typename ResfifoFields::eTSRC;
    using eLOOPCNT = typename ResfifoFields::eLOOPCNT;
    using eCMDSRC = typename ResfifoFields::eCMDSRC;
    using eVALID = typename ResfifoFields::eVALID;
    using D = typename ResfifoFields::D;
    using TSRC = typename ResfifoFields::TSRC;
    using LOOPCNT = typename ResfifoFields::LOOPCNT;
    using CMDSRC = typename ResfifoFields::CMDSRC;
    using VALID = typename ResfifoFields::VALID;
  };

};

}  // namespace regs