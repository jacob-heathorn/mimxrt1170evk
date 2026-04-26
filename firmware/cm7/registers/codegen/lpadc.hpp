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
  struct VERID_fields_ {
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
  };  // struct VERID_fields_

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x0100001Au,
      ftl::mmio::RO,
      typename VERID_fields_::RES,
      typename VERID_fields_::DIFFEN,
      ftl::mmio::Reserved<1, 2>,
      typename VERID_fields_::MVI,
      typename VERID_fields_::CSW,
      ftl::mmio::Reserved<1, 7>,
      typename VERID_fields_::VR1RNGI,
      typename VERID_fields_::IADCKI,
      typename VERID_fields_::CALOFSI,
      ftl::mmio::Reserved<5, 11>,
      typename VERID_fields_::MINOR,
      typename VERID_fields_::MAJOR> {
    using eRES = typename VERID_fields_::eRES;
    using eDIFFEN = typename VERID_fields_::eDIFFEN;
    using eMVI = typename VERID_fields_::eMVI;
    using eCSW = typename VERID_fields_::eCSW;
    using eVR1RNGI = typename VERID_fields_::eVR1RNGI;
    using eIADCKI = typename VERID_fields_::eIADCKI;
    using eCALOFSI = typename VERID_fields_::eCALOFSI;
    using RES = typename VERID_fields_::RES;
    using DIFFEN = typename VERID_fields_::DIFFEN;
    using MVI = typename VERID_fields_::MVI;
    using CSW = typename VERID_fields_::CSW;
    using VR1RNGI = typename VERID_fields_::VR1RNGI;
    using IADCKI = typename VERID_fields_::IADCKI;
    using CALOFSI = typename VERID_fields_::CALOFSI;
    using MINOR = typename VERID_fields_::MINOR;
    using MAJOR = typename VERID_fields_::MAJOR;
  };

  // Parameter Register
  struct PARAM_fields_ {
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
  };  // struct PARAM_fields_

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x0F041008u,
      ftl::mmio::RO,
      typename PARAM_fields_::TRIG_NUM,
      typename PARAM_fields_::FIFOSIZE,
      typename PARAM_fields_::CV_NUM,
      typename PARAM_fields_::CMD_NUM> {
    using eTRIG_NUM = typename PARAM_fields_::eTRIG_NUM;
    using eFIFOSIZE = typename PARAM_fields_::eFIFOSIZE;
    using eCV_NUM = typename PARAM_fields_::eCV_NUM;
    using eCMD_NUM = typename PARAM_fields_::eCMD_NUM;
    using TRIG_NUM = typename PARAM_fields_::TRIG_NUM;
    using FIFOSIZE = typename PARAM_fields_::FIFOSIZE;
    using CV_NUM = typename PARAM_fields_::CV_NUM;
    using CMD_NUM = typename PARAM_fields_::CMD_NUM;
  };

  // LPADC Control Register
  struct CTRL_fields_ {
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
  };  // struct CTRL_fields_

  struct CTRL : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CTRL_fields_::ADCEN,
      typename CTRL_fields_::RST,
      typename CTRL_fields_::DOZEN,
      typename CTRL_fields_::TRIG_SRC,
      ftl::mmio::Reserved<3, 5>,
      typename CTRL_fields_::RSTFIFO,
      ftl::mmio::Reserved<23, 9>> {
    using eADCEN = typename CTRL_fields_::eADCEN;
    using eRST = typename CTRL_fields_::eRST;
    using eDOZEN = typename CTRL_fields_::eDOZEN;
    using eTRIG_SRC = typename CTRL_fields_::eTRIG_SRC;
    using eRSTFIFO = typename CTRL_fields_::eRSTFIFO;
    using ADCEN = typename CTRL_fields_::ADCEN;
    using RST = typename CTRL_fields_::RST;
    using DOZEN = typename CTRL_fields_::DOZEN;
    using TRIG_SRC = typename CTRL_fields_::TRIG_SRC;
    using RSTFIFO = typename CTRL_fields_::RSTFIFO;
  };

  // LPADC Status Register
  struct STAT_fields_ {
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
  };  // struct STAT_fields_

  struct STAT : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename STAT_fields_::RDY,
      typename STAT_fields_::FOF,
      ftl::mmio::Reserved<6, 2>,
      typename STAT_fields_::ADC_ACTIVE,
      ftl::mmio::Reserved<7, 9>,
      typename STAT_fields_::TRGACT,
      ftl::mmio::Reserved<5, 19>,
      typename STAT_fields_::CMDACT,
      ftl::mmio::Reserved<4, 28>> {
    using eRDY = typename STAT_fields_::eRDY;
    using eFOF = typename STAT_fields_::eFOF;
    using eADC_ACTIVE = typename STAT_fields_::eADC_ACTIVE;
    using eTRGACT = typename STAT_fields_::eTRGACT;
    using eCMDACT = typename STAT_fields_::eCMDACT;
    using RDY = typename STAT_fields_::RDY;
    using FOF = typename STAT_fields_::FOF;
    using ADC_ACTIVE = typename STAT_fields_::ADC_ACTIVE;
    using TRGACT = typename STAT_fields_::TRGACT;
    using CMDACT = typename STAT_fields_::CMDACT;
  };

  // Interrupt Enable Register
  struct IE_fields_ {
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
  };  // struct IE_fields_

  struct IE : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IE_fields_::FWMIE,
      typename IE_fields_::FOFIE,
      ftl::mmio::Reserved<30, 2>> {
    using eFWMIE = typename IE_fields_::eFWMIE;
    using eFOFIE = typename IE_fields_::eFOFIE;
    using FWMIE = typename IE_fields_::FWMIE;
    using FOFIE = typename IE_fields_::FOFIE;
  };

  // DMA Enable Register
  struct DE_fields_ {
    enum class eFWMDE : std::uint32_t {
      // DMA request disabled.
      eFWMDE_0 = 0,
      // DMA request enabled.
      eFWMDE_1 = 1,
    };

    // FIFO Watermark DMA Enable
    using FWMDE = ftl::mmio::Field<1, 0, eFWMDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DE_fields_

  struct DE : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DE_fields_::FWMDE,
      ftl::mmio::Reserved<31, 1>> {
    using eFWMDE = typename DE_fields_::eFWMDE;
    using FWMDE = typename DE_fields_::FWMDE;
  };

  // LPADC Configuration Register
  struct CFG_fields_ {
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
  };  // struct CFG_fields_

  struct CFG : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00800000u,
      ftl::mmio::RW,
      typename CFG_fields_::TPRICTRL,
      ftl::mmio::Reserved<3, 1>,
      typename CFG_fields_::PWRSEL,
      typename CFG_fields_::REFSEL,
      ftl::mmio::Reserved<8, 8>,
      typename CFG_fields_::PUDLY,
      ftl::mmio::Reserved<4, 24>,
      typename CFG_fields_::PWREN,
      ftl::mmio::Reserved<3, 29>> {
    using eTPRICTRL = typename CFG_fields_::eTPRICTRL;
    using ePWRSEL = typename CFG_fields_::ePWRSEL;
    using eREFSEL = typename CFG_fields_::eREFSEL;
    using ePWREN = typename CFG_fields_::ePWREN;
    using TPRICTRL = typename CFG_fields_::TPRICTRL;
    using PWRSEL = typename CFG_fields_::PWRSEL;
    using REFSEL = typename CFG_fields_::REFSEL;
    using PUDLY = typename CFG_fields_::PUDLY;
    using PWREN = typename CFG_fields_::PWREN;
  };

  // LPADC Pause Register
  struct PAUSE_fields_ {
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
  };  // struct PAUSE_fields_

  struct PAUSE : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename PAUSE_fields_::PAUSEDLY,
      ftl::mmio::Reserved<22, 9>,
      typename PAUSE_fields_::PAUSEEN> {
    using ePAUSEEN = typename PAUSE_fields_::ePAUSEEN;
    using PAUSEDLY = typename PAUSE_fields_::PAUSEDLY;
    using PAUSEEN = typename PAUSE_fields_::PAUSEEN;
  };

  // LPADC FIFO Control Register
  struct FCTRL_fields_ {
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
  };  // struct FCTRL_fields_

  struct FCTRL : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename FCTRL_fields_::FCOUNT,
      ftl::mmio::Reserved<11, 5>,
      typename FCTRL_fields_::FWMARK,
      ftl::mmio::Reserved<12, 20>> {
    using eFCOUNT = typename FCTRL_fields_::eFCOUNT;
    using eFWMARK = typename FCTRL_fields_::eFWMARK;
    using FCOUNT = typename FCTRL_fields_::FCOUNT;
    using FWMARK = typename FCTRL_fields_::FWMARK;
  };

  // Software Trigger Register
  struct SWTRIG_fields_ {
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
  };  // struct SWTRIG_fields_

  struct SWTRIG : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SWTRIG_fields_::SWT0,
      typename SWTRIG_fields_::SWT1,
      typename SWTRIG_fields_::SWT2,
      typename SWTRIG_fields_::SWT3,
      typename SWTRIG_fields_::SWT4,
      typename SWTRIG_fields_::SWT5,
      typename SWTRIG_fields_::SWT6,
      typename SWTRIG_fields_::SWT7,
      ftl::mmio::Reserved<24, 8>> {
    using eSWT0 = typename SWTRIG_fields_::eSWT0;
    using eSWT1 = typename SWTRIG_fields_::eSWT1;
    using eSWT2 = typename SWTRIG_fields_::eSWT2;
    using eSWT3 = typename SWTRIG_fields_::eSWT3;
    using eSWT4 = typename SWTRIG_fields_::eSWT4;
    using eSWT5 = typename SWTRIG_fields_::eSWT5;
    using eSWT6 = typename SWTRIG_fields_::eSWT6;
    using eSWT7 = typename SWTRIG_fields_::eSWT7;
    using SWT0 = typename SWTRIG_fields_::SWT0;
    using SWT1 = typename SWTRIG_fields_::SWT1;
    using SWT2 = typename SWTRIG_fields_::SWT2;
    using SWT3 = typename SWTRIG_fields_::SWT3;
    using SWT4 = typename SWTRIG_fields_::SWT4;
    using SWT5 = typename SWTRIG_fields_::SWT5;
    using SWT6 = typename SWTRIG_fields_::SWT6;
    using SWT7 = typename SWTRIG_fields_::SWT7;
  };

  // Trigger Control Register
  struct TCTRL_fields_ {
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
  };  // struct TCTRL_fields_

  template<std::uint32_t Index>
  struct TCTRL : ftl::mmio::Register<
      kBase + 0xC0u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TCTRL_fields_::HTEN,
      typename TCTRL_fields_::CMD_SEL,
      ftl::mmio::Reserved<6, 2>,
      typename TCTRL_fields_::TPRI,
      ftl::mmio::Reserved<5, 11>,
      typename TCTRL_fields_::TDLY,
      ftl::mmio::Reserved<4, 20>,
      typename TCTRL_fields_::TCMD,
      ftl::mmio::Reserved<4, 28>> {
    static_assert(Index < 8u, "TCTRL: Index out of range");
    using eHTEN = typename TCTRL_fields_::eHTEN;
    using eCMD_SEL = typename TCTRL_fields_::eCMD_SEL;
    using eTPRI = typename TCTRL_fields_::eTPRI;
    using eTCMD = typename TCTRL_fields_::eTCMD;
    using HTEN = typename TCTRL_fields_::HTEN;
    using CMD_SEL = typename TCTRL_fields_::CMD_SEL;
    using TPRI = typename TCTRL_fields_::TPRI;
    using TDLY = typename TCTRL_fields_::TDLY;
    using TCMD = typename TCTRL_fields_::TCMD;
  };

  // LPADC Command Low Buffer Register
  struct CMDL1_fields_ {
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
  };  // struct CMDL1_fields_

  struct CMDL1 : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL1_fields_::ADCH,
      typename CMDL1_fields_::ABSEL,
      typename CMDL1_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL1_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL1_fields_::eADCH;
    using eABSEL = typename CMDL1_fields_::eABSEL;
    using eDIFF = typename CMDL1_fields_::eDIFF;
    using eCSCALE = typename CMDL1_fields_::eCSCALE;
    using ADCH = typename CMDL1_fields_::ADCH;
    using ABSEL = typename CMDL1_fields_::ABSEL;
    using DIFF = typename CMDL1_fields_::DIFF;
    using CSCALE = typename CMDL1_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH1_fields_ {
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
  };  // struct CMDH1_fields_

  struct CMDH1 : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CMDH1_fields_::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename CMDH1_fields_::LWI,
      typename CMDH1_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH1_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH1_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH1_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename CMDH1_fields_::eCMPEN;
    using eLWI = typename CMDH1_fields_::eLWI;
    using eSTS = typename CMDH1_fields_::eSTS;
    using eAVGS = typename CMDH1_fields_::eAVGS;
    using eLOOP = typename CMDH1_fields_::eLOOP;
    using eNEXT = typename CMDH1_fields_::eNEXT;
    using CMPEN = typename CMDH1_fields_::CMPEN;
    using LWI = typename CMDH1_fields_::LWI;
    using STS = typename CMDH1_fields_::STS;
    using AVGS = typename CMDH1_fields_::AVGS;
    using LOOP = typename CMDH1_fields_::LOOP;
    using NEXT = typename CMDH1_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL2_fields_ {
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
  };  // struct CMDL2_fields_

  struct CMDL2 : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL2_fields_::ADCH,
      typename CMDL2_fields_::ABSEL,
      typename CMDL2_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL2_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL2_fields_::eADCH;
    using eABSEL = typename CMDL2_fields_::eABSEL;
    using eDIFF = typename CMDL2_fields_::eDIFF;
    using eCSCALE = typename CMDL2_fields_::eCSCALE;
    using ADCH = typename CMDL2_fields_::ADCH;
    using ABSEL = typename CMDL2_fields_::ABSEL;
    using DIFF = typename CMDL2_fields_::DIFF;
    using CSCALE = typename CMDL2_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH2_fields_ {
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
  };  // struct CMDH2_fields_

  struct CMDH2 : ftl::mmio::Register<
      kBase + 0x10Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CMDH2_fields_::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename CMDH2_fields_::LWI,
      typename CMDH2_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH2_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH2_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH2_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename CMDH2_fields_::eCMPEN;
    using eLWI = typename CMDH2_fields_::eLWI;
    using eSTS = typename CMDH2_fields_::eSTS;
    using eAVGS = typename CMDH2_fields_::eAVGS;
    using eLOOP = typename CMDH2_fields_::eLOOP;
    using eNEXT = typename CMDH2_fields_::eNEXT;
    using CMPEN = typename CMDH2_fields_::CMPEN;
    using LWI = typename CMDH2_fields_::LWI;
    using STS = typename CMDH2_fields_::STS;
    using AVGS = typename CMDH2_fields_::AVGS;
    using LOOP = typename CMDH2_fields_::LOOP;
    using NEXT = typename CMDH2_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL3_fields_ {
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
  };  // struct CMDL3_fields_

  struct CMDL3 : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL3_fields_::ADCH,
      typename CMDL3_fields_::ABSEL,
      typename CMDL3_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL3_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL3_fields_::eADCH;
    using eABSEL = typename CMDL3_fields_::eABSEL;
    using eDIFF = typename CMDL3_fields_::eDIFF;
    using eCSCALE = typename CMDL3_fields_::eCSCALE;
    using ADCH = typename CMDL3_fields_::ADCH;
    using ABSEL = typename CMDL3_fields_::ABSEL;
    using DIFF = typename CMDL3_fields_::DIFF;
    using CSCALE = typename CMDL3_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH3_fields_ {
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
  };  // struct CMDH3_fields_

  struct CMDH3 : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CMDH3_fields_::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename CMDH3_fields_::LWI,
      typename CMDH3_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH3_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH3_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH3_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename CMDH3_fields_::eCMPEN;
    using eLWI = typename CMDH3_fields_::eLWI;
    using eSTS = typename CMDH3_fields_::eSTS;
    using eAVGS = typename CMDH3_fields_::eAVGS;
    using eLOOP = typename CMDH3_fields_::eLOOP;
    using eNEXT = typename CMDH3_fields_::eNEXT;
    using CMPEN = typename CMDH3_fields_::CMPEN;
    using LWI = typename CMDH3_fields_::LWI;
    using STS = typename CMDH3_fields_::STS;
    using AVGS = typename CMDH3_fields_::AVGS;
    using LOOP = typename CMDH3_fields_::LOOP;
    using NEXT = typename CMDH3_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL4_fields_ {
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
  };  // struct CMDL4_fields_

  struct CMDL4 : ftl::mmio::Register<
      kBase + 0x118u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL4_fields_::ADCH,
      typename CMDL4_fields_::ABSEL,
      typename CMDL4_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL4_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL4_fields_::eADCH;
    using eABSEL = typename CMDL4_fields_::eABSEL;
    using eDIFF = typename CMDL4_fields_::eDIFF;
    using eCSCALE = typename CMDL4_fields_::eCSCALE;
    using ADCH = typename CMDL4_fields_::ADCH;
    using ABSEL = typename CMDL4_fields_::ABSEL;
    using DIFF = typename CMDL4_fields_::DIFF;
    using CSCALE = typename CMDL4_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH4_fields_ {
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
  };  // struct CMDH4_fields_

  struct CMDH4 : ftl::mmio::Register<
      kBase + 0x11Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CMDH4_fields_::CMPEN,
      ftl::mmio::Reserved<5, 2>,
      typename CMDH4_fields_::LWI,
      typename CMDH4_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH4_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH4_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH4_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eCMPEN = typename CMDH4_fields_::eCMPEN;
    using eLWI = typename CMDH4_fields_::eLWI;
    using eSTS = typename CMDH4_fields_::eSTS;
    using eAVGS = typename CMDH4_fields_::eAVGS;
    using eLOOP = typename CMDH4_fields_::eLOOP;
    using eNEXT = typename CMDH4_fields_::eNEXT;
    using CMPEN = typename CMDH4_fields_::CMPEN;
    using LWI = typename CMDH4_fields_::LWI;
    using STS = typename CMDH4_fields_::STS;
    using AVGS = typename CMDH4_fields_::AVGS;
    using LOOP = typename CMDH4_fields_::LOOP;
    using NEXT = typename CMDH4_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL5_fields_ {
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
  };  // struct CMDL5_fields_

  struct CMDL5 : ftl::mmio::Register<
      kBase + 0x120u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL5_fields_::ADCH,
      typename CMDL5_fields_::ABSEL,
      typename CMDL5_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL5_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL5_fields_::eADCH;
    using eABSEL = typename CMDL5_fields_::eABSEL;
    using eDIFF = typename CMDL5_fields_::eDIFF;
    using eCSCALE = typename CMDL5_fields_::eCSCALE;
    using ADCH = typename CMDL5_fields_::ADCH;
    using ABSEL = typename CMDL5_fields_::ABSEL;
    using DIFF = typename CMDL5_fields_::DIFF;
    using CSCALE = typename CMDL5_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH5_fields_ {
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
  };  // struct CMDH5_fields_

  struct CMDH5 : ftl::mmio::Register<
      kBase + 0x124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH5_fields_::LWI,
      typename CMDH5_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH5_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH5_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH5_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH5_fields_::eLWI;
    using eSTS = typename CMDH5_fields_::eSTS;
    using eAVGS = typename CMDH5_fields_::eAVGS;
    using eLOOP = typename CMDH5_fields_::eLOOP;
    using eNEXT = typename CMDH5_fields_::eNEXT;
    using LWI = typename CMDH5_fields_::LWI;
    using STS = typename CMDH5_fields_::STS;
    using AVGS = typename CMDH5_fields_::AVGS;
    using LOOP = typename CMDH5_fields_::LOOP;
    using NEXT = typename CMDH5_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL6_fields_ {
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
  };  // struct CMDL6_fields_

  struct CMDL6 : ftl::mmio::Register<
      kBase + 0x128u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL6_fields_::ADCH,
      typename CMDL6_fields_::ABSEL,
      typename CMDL6_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL6_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL6_fields_::eADCH;
    using eABSEL = typename CMDL6_fields_::eABSEL;
    using eDIFF = typename CMDL6_fields_::eDIFF;
    using eCSCALE = typename CMDL6_fields_::eCSCALE;
    using ADCH = typename CMDL6_fields_::ADCH;
    using ABSEL = typename CMDL6_fields_::ABSEL;
    using DIFF = typename CMDL6_fields_::DIFF;
    using CSCALE = typename CMDL6_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH6_fields_ {
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
  };  // struct CMDH6_fields_

  struct CMDH6 : ftl::mmio::Register<
      kBase + 0x12Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH6_fields_::LWI,
      typename CMDH6_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH6_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH6_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH6_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH6_fields_::eLWI;
    using eSTS = typename CMDH6_fields_::eSTS;
    using eAVGS = typename CMDH6_fields_::eAVGS;
    using eLOOP = typename CMDH6_fields_::eLOOP;
    using eNEXT = typename CMDH6_fields_::eNEXT;
    using LWI = typename CMDH6_fields_::LWI;
    using STS = typename CMDH6_fields_::STS;
    using AVGS = typename CMDH6_fields_::AVGS;
    using LOOP = typename CMDH6_fields_::LOOP;
    using NEXT = typename CMDH6_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL7_fields_ {
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
  };  // struct CMDL7_fields_

  struct CMDL7 : ftl::mmio::Register<
      kBase + 0x130u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL7_fields_::ADCH,
      typename CMDL7_fields_::ABSEL,
      typename CMDL7_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL7_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL7_fields_::eADCH;
    using eABSEL = typename CMDL7_fields_::eABSEL;
    using eDIFF = typename CMDL7_fields_::eDIFF;
    using eCSCALE = typename CMDL7_fields_::eCSCALE;
    using ADCH = typename CMDL7_fields_::ADCH;
    using ABSEL = typename CMDL7_fields_::ABSEL;
    using DIFF = typename CMDL7_fields_::DIFF;
    using CSCALE = typename CMDL7_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH7_fields_ {
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
  };  // struct CMDH7_fields_

  struct CMDH7 : ftl::mmio::Register<
      kBase + 0x134u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH7_fields_::LWI,
      typename CMDH7_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH7_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH7_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH7_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH7_fields_::eLWI;
    using eSTS = typename CMDH7_fields_::eSTS;
    using eAVGS = typename CMDH7_fields_::eAVGS;
    using eLOOP = typename CMDH7_fields_::eLOOP;
    using eNEXT = typename CMDH7_fields_::eNEXT;
    using LWI = typename CMDH7_fields_::LWI;
    using STS = typename CMDH7_fields_::STS;
    using AVGS = typename CMDH7_fields_::AVGS;
    using LOOP = typename CMDH7_fields_::LOOP;
    using NEXT = typename CMDH7_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL8_fields_ {
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
  };  // struct CMDL8_fields_

  struct CMDL8 : ftl::mmio::Register<
      kBase + 0x138u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL8_fields_::ADCH,
      typename CMDL8_fields_::ABSEL,
      typename CMDL8_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL8_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL8_fields_::eADCH;
    using eABSEL = typename CMDL8_fields_::eABSEL;
    using eDIFF = typename CMDL8_fields_::eDIFF;
    using eCSCALE = typename CMDL8_fields_::eCSCALE;
    using ADCH = typename CMDL8_fields_::ADCH;
    using ABSEL = typename CMDL8_fields_::ABSEL;
    using DIFF = typename CMDL8_fields_::DIFF;
    using CSCALE = typename CMDL8_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH8_fields_ {
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
  };  // struct CMDH8_fields_

  struct CMDH8 : ftl::mmio::Register<
      kBase + 0x13Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH8_fields_::LWI,
      typename CMDH8_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH8_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH8_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH8_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH8_fields_::eLWI;
    using eSTS = typename CMDH8_fields_::eSTS;
    using eAVGS = typename CMDH8_fields_::eAVGS;
    using eLOOP = typename CMDH8_fields_::eLOOP;
    using eNEXT = typename CMDH8_fields_::eNEXT;
    using LWI = typename CMDH8_fields_::LWI;
    using STS = typename CMDH8_fields_::STS;
    using AVGS = typename CMDH8_fields_::AVGS;
    using LOOP = typename CMDH8_fields_::LOOP;
    using NEXT = typename CMDH8_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL9_fields_ {
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
  };  // struct CMDL9_fields_

  struct CMDL9 : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL9_fields_::ADCH,
      typename CMDL9_fields_::ABSEL,
      typename CMDL9_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL9_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL9_fields_::eADCH;
    using eABSEL = typename CMDL9_fields_::eABSEL;
    using eDIFF = typename CMDL9_fields_::eDIFF;
    using eCSCALE = typename CMDL9_fields_::eCSCALE;
    using ADCH = typename CMDL9_fields_::ADCH;
    using ABSEL = typename CMDL9_fields_::ABSEL;
    using DIFF = typename CMDL9_fields_::DIFF;
    using CSCALE = typename CMDL9_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH9_fields_ {
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
  };  // struct CMDH9_fields_

  struct CMDH9 : ftl::mmio::Register<
      kBase + 0x144u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH9_fields_::LWI,
      typename CMDH9_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH9_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH9_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH9_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH9_fields_::eLWI;
    using eSTS = typename CMDH9_fields_::eSTS;
    using eAVGS = typename CMDH9_fields_::eAVGS;
    using eLOOP = typename CMDH9_fields_::eLOOP;
    using eNEXT = typename CMDH9_fields_::eNEXT;
    using LWI = typename CMDH9_fields_::LWI;
    using STS = typename CMDH9_fields_::STS;
    using AVGS = typename CMDH9_fields_::AVGS;
    using LOOP = typename CMDH9_fields_::LOOP;
    using NEXT = typename CMDH9_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL10_fields_ {
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
  };  // struct CMDL10_fields_

  struct CMDL10 : ftl::mmio::Register<
      kBase + 0x148u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL10_fields_::ADCH,
      typename CMDL10_fields_::ABSEL,
      typename CMDL10_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL10_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL10_fields_::eADCH;
    using eABSEL = typename CMDL10_fields_::eABSEL;
    using eDIFF = typename CMDL10_fields_::eDIFF;
    using eCSCALE = typename CMDL10_fields_::eCSCALE;
    using ADCH = typename CMDL10_fields_::ADCH;
    using ABSEL = typename CMDL10_fields_::ABSEL;
    using DIFF = typename CMDL10_fields_::DIFF;
    using CSCALE = typename CMDL10_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH10_fields_ {
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
  };  // struct CMDH10_fields_

  struct CMDH10 : ftl::mmio::Register<
      kBase + 0x14Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH10_fields_::LWI,
      typename CMDH10_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH10_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH10_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH10_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH10_fields_::eLWI;
    using eSTS = typename CMDH10_fields_::eSTS;
    using eAVGS = typename CMDH10_fields_::eAVGS;
    using eLOOP = typename CMDH10_fields_::eLOOP;
    using eNEXT = typename CMDH10_fields_::eNEXT;
    using LWI = typename CMDH10_fields_::LWI;
    using STS = typename CMDH10_fields_::STS;
    using AVGS = typename CMDH10_fields_::AVGS;
    using LOOP = typename CMDH10_fields_::LOOP;
    using NEXT = typename CMDH10_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL11_fields_ {
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
  };  // struct CMDL11_fields_

  struct CMDL11 : ftl::mmio::Register<
      kBase + 0x150u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL11_fields_::ADCH,
      typename CMDL11_fields_::ABSEL,
      typename CMDL11_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL11_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL11_fields_::eADCH;
    using eABSEL = typename CMDL11_fields_::eABSEL;
    using eDIFF = typename CMDL11_fields_::eDIFF;
    using eCSCALE = typename CMDL11_fields_::eCSCALE;
    using ADCH = typename CMDL11_fields_::ADCH;
    using ABSEL = typename CMDL11_fields_::ABSEL;
    using DIFF = typename CMDL11_fields_::DIFF;
    using CSCALE = typename CMDL11_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH11_fields_ {
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
  };  // struct CMDH11_fields_

  struct CMDH11 : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH11_fields_::LWI,
      typename CMDH11_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH11_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH11_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH11_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH11_fields_::eLWI;
    using eSTS = typename CMDH11_fields_::eSTS;
    using eAVGS = typename CMDH11_fields_::eAVGS;
    using eLOOP = typename CMDH11_fields_::eLOOP;
    using eNEXT = typename CMDH11_fields_::eNEXT;
    using LWI = typename CMDH11_fields_::LWI;
    using STS = typename CMDH11_fields_::STS;
    using AVGS = typename CMDH11_fields_::AVGS;
    using LOOP = typename CMDH11_fields_::LOOP;
    using NEXT = typename CMDH11_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL12_fields_ {
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
  };  // struct CMDL12_fields_

  struct CMDL12 : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL12_fields_::ADCH,
      typename CMDL12_fields_::ABSEL,
      typename CMDL12_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL12_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL12_fields_::eADCH;
    using eABSEL = typename CMDL12_fields_::eABSEL;
    using eDIFF = typename CMDL12_fields_::eDIFF;
    using eCSCALE = typename CMDL12_fields_::eCSCALE;
    using ADCH = typename CMDL12_fields_::ADCH;
    using ABSEL = typename CMDL12_fields_::ABSEL;
    using DIFF = typename CMDL12_fields_::DIFF;
    using CSCALE = typename CMDL12_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH12_fields_ {
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
  };  // struct CMDH12_fields_

  struct CMDH12 : ftl::mmio::Register<
      kBase + 0x15Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH12_fields_::LWI,
      typename CMDH12_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH12_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH12_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH12_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH12_fields_::eLWI;
    using eSTS = typename CMDH12_fields_::eSTS;
    using eAVGS = typename CMDH12_fields_::eAVGS;
    using eLOOP = typename CMDH12_fields_::eLOOP;
    using eNEXT = typename CMDH12_fields_::eNEXT;
    using LWI = typename CMDH12_fields_::LWI;
    using STS = typename CMDH12_fields_::STS;
    using AVGS = typename CMDH12_fields_::AVGS;
    using LOOP = typename CMDH12_fields_::LOOP;
    using NEXT = typename CMDH12_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL13_fields_ {
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
  };  // struct CMDL13_fields_

  struct CMDL13 : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL13_fields_::ADCH,
      typename CMDL13_fields_::ABSEL,
      typename CMDL13_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL13_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL13_fields_::eADCH;
    using eABSEL = typename CMDL13_fields_::eABSEL;
    using eDIFF = typename CMDL13_fields_::eDIFF;
    using eCSCALE = typename CMDL13_fields_::eCSCALE;
    using ADCH = typename CMDL13_fields_::ADCH;
    using ABSEL = typename CMDL13_fields_::ABSEL;
    using DIFF = typename CMDL13_fields_::DIFF;
    using CSCALE = typename CMDL13_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH13_fields_ {
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
  };  // struct CMDH13_fields_

  struct CMDH13 : ftl::mmio::Register<
      kBase + 0x164u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH13_fields_::LWI,
      typename CMDH13_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH13_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH13_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH13_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH13_fields_::eLWI;
    using eSTS = typename CMDH13_fields_::eSTS;
    using eAVGS = typename CMDH13_fields_::eAVGS;
    using eLOOP = typename CMDH13_fields_::eLOOP;
    using eNEXT = typename CMDH13_fields_::eNEXT;
    using LWI = typename CMDH13_fields_::LWI;
    using STS = typename CMDH13_fields_::STS;
    using AVGS = typename CMDH13_fields_::AVGS;
    using LOOP = typename CMDH13_fields_::LOOP;
    using NEXT = typename CMDH13_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL14_fields_ {
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
  };  // struct CMDL14_fields_

  struct CMDL14 : ftl::mmio::Register<
      kBase + 0x168u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL14_fields_::ADCH,
      typename CMDL14_fields_::ABSEL,
      typename CMDL14_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL14_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL14_fields_::eADCH;
    using eABSEL = typename CMDL14_fields_::eABSEL;
    using eDIFF = typename CMDL14_fields_::eDIFF;
    using eCSCALE = typename CMDL14_fields_::eCSCALE;
    using ADCH = typename CMDL14_fields_::ADCH;
    using ABSEL = typename CMDL14_fields_::ABSEL;
    using DIFF = typename CMDL14_fields_::DIFF;
    using CSCALE = typename CMDL14_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH14_fields_ {
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
  };  // struct CMDH14_fields_

  struct CMDH14 : ftl::mmio::Register<
      kBase + 0x16Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH14_fields_::LWI,
      typename CMDH14_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH14_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH14_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH14_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH14_fields_::eLWI;
    using eSTS = typename CMDH14_fields_::eSTS;
    using eAVGS = typename CMDH14_fields_::eAVGS;
    using eLOOP = typename CMDH14_fields_::eLOOP;
    using eNEXT = typename CMDH14_fields_::eNEXT;
    using LWI = typename CMDH14_fields_::LWI;
    using STS = typename CMDH14_fields_::STS;
    using AVGS = typename CMDH14_fields_::AVGS;
    using LOOP = typename CMDH14_fields_::LOOP;
    using NEXT = typename CMDH14_fields_::NEXT;
  };

  // LPADC Command Low Buffer Register
  struct CMDL15_fields_ {
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
  };  // struct CMDL15_fields_

  struct CMDL15 : ftl::mmio::Register<
      kBase + 0x170u,
      std::uint32_t,
      0x00002000u,
      ftl::mmio::RW,
      typename CMDL15_fields_::ADCH,
      typename CMDL15_fields_::ABSEL,
      typename CMDL15_fields_::DIFF,
      ftl::mmio::Reserved<6, 7>,
      typename CMDL15_fields_::CSCALE,
      ftl::mmio::Reserved<18, 14>> {
    using eADCH = typename CMDL15_fields_::eADCH;
    using eABSEL = typename CMDL15_fields_::eABSEL;
    using eDIFF = typename CMDL15_fields_::eDIFF;
    using eCSCALE = typename CMDL15_fields_::eCSCALE;
    using ADCH = typename CMDL15_fields_::ADCH;
    using ABSEL = typename CMDL15_fields_::ABSEL;
    using DIFF = typename CMDL15_fields_::DIFF;
    using CSCALE = typename CMDL15_fields_::CSCALE;
  };

  // LPADC Command High Buffer Register
  struct CMDH15_fields_ {
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
  };  // struct CMDH15_fields_

  struct CMDH15 : ftl::mmio::Register<
      kBase + 0x174u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CMDH15_fields_::LWI,
      typename CMDH15_fields_::STS,
      ftl::mmio::Reserved<1, 11>,
      typename CMDH15_fields_::AVGS,
      ftl::mmio::Reserved<1, 15>,
      typename CMDH15_fields_::LOOP,
      ftl::mmio::Reserved<4, 20>,
      typename CMDH15_fields_::NEXT,
      ftl::mmio::Reserved<4, 28>> {
    using eLWI = typename CMDH15_fields_::eLWI;
    using eSTS = typename CMDH15_fields_::eSTS;
    using eAVGS = typename CMDH15_fields_::eAVGS;
    using eLOOP = typename CMDH15_fields_::eLOOP;
    using eNEXT = typename CMDH15_fields_::eNEXT;
    using LWI = typename CMDH15_fields_::LWI;
    using STS = typename CMDH15_fields_::STS;
    using AVGS = typename CMDH15_fields_::AVGS;
    using LOOP = typename CMDH15_fields_::LOOP;
    using NEXT = typename CMDH15_fields_::NEXT;
  };

  // Compare Value Register
  struct CV_fields_ {
    // Compare Value Low
    using CVL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Value High.
    using CVH = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CV_fields_

  template<std::uint32_t Index>
  struct CV : ftl::mmio::Register<
      kBase + 0x200u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CV_fields_::CVL,
      typename CV_fields_::CVH> {
    static_assert(Index < 4u, "CV: Index out of range");
    using CVL = typename CV_fields_::CVL;
    using CVH = typename CV_fields_::CVH;
  };

  // LPADC Data Result FIFO Register
  struct RESFIFO_fields_ {
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
  };  // struct RESFIFO_fields_

  struct RESFIFO : ftl::mmio::Register<
      kBase + 0x300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename RESFIFO_fields_::D,
      typename RESFIFO_fields_::TSRC,
      ftl::mmio::Reserved<1, 19>,
      typename RESFIFO_fields_::LOOPCNT,
      typename RESFIFO_fields_::CMDSRC,
      ftl::mmio::Reserved<3, 28>,
      typename RESFIFO_fields_::VALID> {
    using eTSRC = typename RESFIFO_fields_::eTSRC;
    using eLOOPCNT = typename RESFIFO_fields_::eLOOPCNT;
    using eCMDSRC = typename RESFIFO_fields_::eCMDSRC;
    using eVALID = typename RESFIFO_fields_::eVALID;
    using D = typename RESFIFO_fields_::D;
    using TSRC = typename RESFIFO_fields_::TSRC;
    using LOOPCNT = typename RESFIFO_fields_::LOOPCNT;
    using CMDSRC = typename RESFIFO_fields_::CMDSRC;
    using VALID = typename RESFIFO_fields_::VALID;
  };

};

}  // namespace regs