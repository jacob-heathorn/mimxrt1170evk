#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// USBDCD
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Usbhsdcd {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Usbhsdcd: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40434800u :
      Instance == 2u ? 0x40438800u :
      0u;

  // Control register
  struct ControlFields {
    enum class eIACK : std::uint32_t {
      // Do not clear the interrupt.
      eINT_NOCLEAR = 0,
      // Clear the IF bit (interrupt flag).
      eINT_CLEAR = 1,
    };

    enum class eIF : std::uint32_t {
      // No interrupt is pending.
      eINT_PEND = 0,
      // An interrupt is pending.
      eINT_NOPEND = 1,
    };

    enum class eIE : std::uint32_t {
      // Disable interrupts to the system.
      eDIS_INT = 0,
      // Enable interrupts to the system.
      eEN_INT = 1,
    };

    enum class eBC12 : std::uint32_t {
      // Compatible with BC1.1 (default)
      eBC11 = 0,
      // Compatible with BC1.2
      eBC12 = 1,
    };

    enum class eSTART : std::uint32_t {
      // Do not start the sequence. Writes of this value have no effect.
      eNO_START = 0,
      // Initiate the charger detection sequence. If the sequence is already running, writes of this value have no effect.
      eSTART = 1,
    };

    enum class eSR : std::uint32_t {
      // Do not perform a software reset.
      eNO_RESET = 0,
      // Perform a software reset.
      eSW_RESET = 1,
    };

    // Interrupt Acknowledge
    using IACK = ftl::mmio::Field<1, 0, eIACK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt Flag
    using IF = ftl::mmio::Field<1, 8, eIF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Interrupt Enable
    using IE = ftl::mmio::Field<1, 16, eIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // BC12
    using BC12 = ftl::mmio::Field<1, 17, eBC12, ftl::mmio::RW, ftl::mmio::Normal>;
    // Start Change Detection Sequence
    using START = ftl::mmio::Field<1, 24, eSTART, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset
    using SR = ftl::mmio::Field<1, 25, eSR, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ControlFields

  struct CONTROL : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename ControlFields::IACK,
      ftl::mmio::Reserved<7, 1>,
      typename ControlFields::IF,
      ftl::mmio::Reserved<7, 9>,
      typename ControlFields::IE,
      typename ControlFields::BC12,
      ftl::mmio::Reserved<6, 18>,
      typename ControlFields::START,
      typename ControlFields::SR,
      ftl::mmio::Reserved<6, 26>> {
    using eIACK = typename ControlFields::eIACK;
    using eIF = typename ControlFields::eIF;
    using eIE = typename ControlFields::eIE;
    using eBC12 = typename ControlFields::eBC12;
    using eSTART = typename ControlFields::eSTART;
    using eSR = typename ControlFields::eSR;
    using IACK = typename ControlFields::IACK;
    using IF = typename ControlFields::IF;
    using IE = typename ControlFields::IE;
    using BC12 = typename ControlFields::BC12;
    using START = typename ControlFields::START;
    using SR = typename ControlFields::SR;
  };

  // Clock register
  struct ClockFields {
    enum class eCLOCK_UNIT : std::uint32_t {
      // kHz Speed (between 1 kHz and 1023 kHz)
      eKHZ_CLK = 0,
      // MHz Speed (between 1 MHz and 1023 MHz)
      eMHZ_CLK = 1,
    };

    // Unit of Measurement Encoding for Clock Speed
    using CLOCK_UNIT = ftl::mmio::Field<1, 0, eCLOCK_UNIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Numerical Value of Clock Speed in Binary
    using CLOCK_SPEED = ftl::mmio::Field<10, 2, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ClockFields

  struct CLOCK : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x000000C1u,
      ftl::mmio::RW,
      typename ClockFields::CLOCK_UNIT,
      ftl::mmio::Reserved<1, 1>,
      typename ClockFields::CLOCK_SPEED,
      ftl::mmio::Reserved<20, 12>> {
    using eCLOCK_UNIT = typename ClockFields::eCLOCK_UNIT;
    using CLOCK_UNIT = typename ClockFields::CLOCK_UNIT;
    using CLOCK_SPEED = typename ClockFields::CLOCK_SPEED;
  };

  // Status register
  struct StatusFields {
    enum class eSEQ_RES : std::uint32_t {
      // No results to report.
      eNO_RESULT = 0,
      // Attached to an SDP. Must comply with USB 2.0 by drawing only 2.5 mA (max) until connected.
      eCONN_SDP = 1,
      // Attached to a charging port. The exact meaning depends on bit 18 (value 0: Attached to either a CDP or a DCP. The charger type detection has not completed. value 1: Attached to a CDP. The charger type detection has completed.)
      eCONN_CP = 2,
      // Attached to a DCP.
      eCONN_DCP = 3,
    };

    enum class eSEQ_STAT : std::uint32_t {
      // The module is either not enabled, or the module is enabled but the data pins have not yet been detected.
      eNO_DATA_PIN_CONN = 0,
      // Data pin contact detection is complete.
      eDATA_PIN_CONN = 1,
      // Charging port detection is complete.
      eCP_DET_DONE = 2,
      // Charger type detection is complete.
      eCT_DET_DONE = 3,
    };

    enum class eERR : std::uint32_t {
      // No sequence errors.
      eNO_SEQ_ERR = 0,
      // Error in the detection sequence. See the SEQ_STAT field to determine the phase in which the error occurred.
      eSEQ_ERR = 1,
    };

    enum class eTO : std::uint32_t {
      // The detection sequence has not been running for over 1s.
      eNO_TIMEOUT = 0,
      // It has been over 1 s since the data pin contact was detected and debounced.
      eTIMEOUT = 1,
    };

    enum class eACTIVE : std::uint32_t {
      // The sequence is not running.
      eSEQ_NOT_RUNNING = 0,
      // The sequence is running.
      eSEQ_RUNNING = 1,
    };

    // Charger Detection Sequence Results
    using SEQ_RES = ftl::mmio::Field<2, 16, eSEQ_RES, ftl::mmio::RO, ftl::mmio::Normal>;
    // Charger Detection Sequence Status
    using SEQ_STAT = ftl::mmio::Field<2, 18, eSEQ_STAT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Error Flag
    using ERR = ftl::mmio::Field<1, 20, eERR, ftl::mmio::RO, ftl::mmio::Normal>;
    // Timeout Flag
    using TO = ftl::mmio::Field<1, 21, eTO, ftl::mmio::RO, ftl::mmio::Normal>;
    // Active Status Indicator
    using ACTIVE = ftl::mmio::Field<1, 22, eACTIVE, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct StatusFields

  struct STATUS : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<16, 0>,
      typename StatusFields::SEQ_RES,
      typename StatusFields::SEQ_STAT,
      typename StatusFields::ERR,
      typename StatusFields::TO,
      typename StatusFields::ACTIVE,
      ftl::mmio::Reserved<9, 23>> {
    using eSEQ_RES = typename StatusFields::eSEQ_RES;
    using eSEQ_STAT = typename StatusFields::eSEQ_STAT;
    using eERR = typename StatusFields::eERR;
    using eTO = typename StatusFields::eTO;
    using eACTIVE = typename StatusFields::eACTIVE;
    using SEQ_RES = typename StatusFields::SEQ_RES;
    using SEQ_STAT = typename StatusFields::SEQ_STAT;
    using ERR = typename StatusFields::ERR;
    using TO = typename StatusFields::TO;
    using ACTIVE = typename StatusFields::ACTIVE;
  };

  // Signal Override Register
  struct SignalOverrideFields {
    enum class ePS : std::uint32_t {
      // No overrides. Bit field must remain at this value during normal USB data communication to prevent unexpected conditions on USB_DP and USB_DM pins. (Default)
      eNO_OVERRIDE = 0,
      // Enables VDP_SRC voltage source for the USB_DP pin and IDM_SINK current source for the USB_DM pin.
      ePRI_DET_OVERRIDE = 2,
    };

    // Phase Selection
    using PS = ftl::mmio::Field<2, 0, ePS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SignalOverrideFields

  struct SIGNAL_OVERRIDE : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SignalOverrideFields::PS,
      ftl::mmio::Reserved<30, 2>> {
    using ePS = typename SignalOverrideFields::ePS;
    using PS = typename SignalOverrideFields::PS;
  };

  // TIMER0 register
  struct Timer0Fields {
    enum class eTSEQ_INIT : std::uint32_t {
      // 0ms - 1023ms
      eMS_0 = 0,
      // 0ms - 1023ms
      eMS_1 = 1,
      // 0ms - 1023ms
      eMS_2 = 2,
      // 0ms - 1023ms
      eMS_3 = 3,
      // 0ms - 1023ms
      eMS_4 = 4,
      // 0ms - 1023ms
      eMS_5 = 5,
      // 0ms - 1023ms
      eMS_6 = 6,
      // 0ms - 1023ms
      eMS_7 = 7,
      // 0ms - 1023ms
      eMS_8 = 8,
      // 0ms - 1023ms
      eMS_9 = 9,
    };

    // Unit Connection Timer Elapse (in ms)
    using TUNITCON = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Sequence Initiation Time
    using TSEQ_INIT = ftl::mmio::Field<10, 16, eTSEQ_INIT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Timer0Fields

  struct TIMER0 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00100000u,
      ftl::mmio::RW,
      typename Timer0Fields::TUNITCON,
      ftl::mmio::Reserved<4, 12>,
      typename Timer0Fields::TSEQ_INIT,
      ftl::mmio::Reserved<6, 26>> {
    using eTSEQ_INIT = typename Timer0Fields::eTSEQ_INIT;
    using TUNITCON = typename Timer0Fields::TUNITCON;
    using TSEQ_INIT = typename Timer0Fields::TSEQ_INIT;
  };

  // TIMER1 register
  struct Timer1Fields {
    enum class eTVDPSRC_ON : std::uint32_t {
      // 1ms - 1023ms
      eMS_1 = 1,
      // 1ms - 1023ms
      eMS_2 = 2,
      // 1ms - 1023ms
      eMS_3 = 3,
      // 1ms - 1023ms
      eMS_4 = 4,
      // 1ms - 1023ms
      eMS_5 = 5,
      // 1ms - 1023ms
      eMS_6 = 6,
      // 1ms - 1023ms
      eMS_7 = 7,
      // 1ms - 1023ms
      eMS_8 = 8,
      // 1ms - 1023ms
      eMS_9 = 9,
      // 1ms - 1023ms
      eMS_10 = 10,
    };

    enum class eTDCD_DBNC : std::uint32_t {
      // 1ms - 1023ms
      eMS_1 = 1,
      // 1ms - 1023ms
      eMS_2 = 2,
      // 1ms - 1023ms
      eMS_3 = 3,
      // 1ms - 1023ms
      eMS_4 = 4,
      // 1ms - 1023ms
      eMS_5 = 5,
      // 1ms - 1023ms
      eMS_6 = 6,
      // 1ms - 1023ms
      eMS_7 = 7,
      // 1ms - 1023ms
      eMS_8 = 8,
      // 1ms - 1023ms
      eMS_9 = 9,
      // 1ms - 1023ms
      eMS_10 = 10,
    };

    // Time Period Comparator Enabled
    using TVDPSRC_ON = ftl::mmio::Field<10, 0, eTVDPSRC_ON, ftl::mmio::RW, ftl::mmio::Normal>;
    // Time Period to Debounce D+ Signal
    using TDCD_DBNC = ftl::mmio::Field<10, 16, eTDCD_DBNC, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Timer1Fields

  struct TIMER1 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x000A0028u,
      ftl::mmio::RW,
      typename Timer1Fields::TVDPSRC_ON,
      ftl::mmio::Reserved<6, 10>,
      typename Timer1Fields::TDCD_DBNC,
      ftl::mmio::Reserved<6, 26>> {
    using eTVDPSRC_ON = typename Timer1Fields::eTVDPSRC_ON;
    using eTDCD_DBNC = typename Timer1Fields::eTDCD_DBNC;
    using TVDPSRC_ON = typename Timer1Fields::TVDPSRC_ON;
    using TDCD_DBNC = typename Timer1Fields::TDCD_DBNC;
  };

  // TIMER2_BC11 register
  struct Timer2Bc11Fields {
    enum class eCHECK_DM : std::uint32_t {
      // 1ms - 15ms
      eMS_1 = 1,
      // 1ms - 15ms
      eMS_2 = 2,
      // 1ms - 15ms
      eMS_3 = 3,
      // 1ms - 15ms
      eMS_4 = 4,
      // 1ms - 15ms
      eMS_5 = 5,
      // 1ms - 15ms
      eMS_6 = 6,
      // 1ms - 15ms
      eMS_7 = 7,
      // 1ms - 15ms
      eMS_8 = 8,
      // 1ms - 15ms
      eMS_9 = 9,
      // 1ms - 15ms
      eMS_10 = 10,
    };

    enum class eTVDPSRC_CON : std::uint32_t {
      // 1ms - 1023ms
      eMS_1 = 1,
      // 1ms - 1023ms
      eMS_2 = 2,
      // 1ms - 1023ms
      eMS_3 = 3,
      // 1ms - 1023ms
      eMS_4 = 4,
      // 1ms - 1023ms
      eMS_5 = 5,
      // 1ms - 1023ms
      eMS_6 = 6,
      // 1ms - 1023ms
      eMS_7 = 7,
      // 1ms - 1023ms
      eMS_8 = 8,
      // 1ms - 1023ms
      eMS_9 = 9,
      // 1ms - 1023ms
      eMS_10 = 10,
    };

    // Time Before Check of D- Line
    using CHECK_DM = ftl::mmio::Field<4, 0, eCHECK_DM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Time Period Before Enabling D+ Pullup
    using TVDPSRC_CON = ftl::mmio::Field<10, 16, eTVDPSRC_CON, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Timer2Bc11Fields

  struct TIMER2_BC11 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00280001u,
      ftl::mmio::RW,
      typename Timer2Bc11Fields::CHECK_DM,
      ftl::mmio::Reserved<12, 4>,
      typename Timer2Bc11Fields::TVDPSRC_CON,
      ftl::mmio::Reserved<6, 26>> {
    using eCHECK_DM = typename Timer2Bc11Fields::eCHECK_DM;
    using eTVDPSRC_CON = typename Timer2Bc11Fields::eTVDPSRC_CON;
    using CHECK_DM = typename Timer2Bc11Fields::CHECK_DM;
    using TVDPSRC_CON = typename Timer2Bc11Fields::TVDPSRC_CON;
  };

  // TIMER2_BC12 register
  struct Timer2Bc12Fields {
    enum class eTVDMSRC_ON : std::uint32_t {
      // 0ms - 40ms
      eMS_0 = 0,
      // 0ms - 40ms
      eMS_1 = 1,
      // 0ms - 40ms
      eMS_2 = 2,
      // 0ms - 40ms
      eMS_3 = 3,
      // 0ms - 40ms
      eMS_4 = 4,
      // 0ms - 40ms
      eMS_5 = 5,
      // 0ms - 40ms
      eMS_6 = 6,
      // 0ms - 40ms
      eMS_7 = 7,
      // 0ms - 40ms
      eMS_8 = 8,
      // 0ms - 40ms
      eMS_9 = 9,
    };

    enum class eTWAIT_AFTER_PRD : std::uint32_t {
      // 1ms - 1023ms
      eMS_1 = 1,
      // 1ms - 1023ms
      eMS_2 = 2,
      // 1ms - 1023ms
      eMS_3 = 3,
      // 1ms - 1023ms
      eMS_4 = 4,
      // 1ms - 1023ms
      eMS_5 = 5,
      // 1ms - 1023ms
      eMS_6 = 6,
      // 1ms - 1023ms
      eMS_7 = 7,
      // 1ms - 1023ms
      eMS_8 = 8,
      // 1ms - 1023ms
      eMS_9 = 9,
      // 1ms - 1023ms
      eMS_10 = 10,
    };

    // TVDMSRC_ON
    using TVDMSRC_ON = ftl::mmio::Field<10, 0, eTVDMSRC_ON, ftl::mmio::RW, ftl::mmio::Normal>;
    // TWAIT_AFTER_PRD
    using TWAIT_AFTER_PRD = ftl::mmio::Field<10, 16, eTWAIT_AFTER_PRD, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Timer2Bc12Fields

  struct TIMER2_BC12 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00010028u,
      ftl::mmio::RW,
      typename Timer2Bc12Fields::TVDMSRC_ON,
      ftl::mmio::Reserved<6, 10>,
      typename Timer2Bc12Fields::TWAIT_AFTER_PRD,
      ftl::mmio::Reserved<6, 26>> {
    using eTVDMSRC_ON = typename Timer2Bc12Fields::eTVDMSRC_ON;
    using eTWAIT_AFTER_PRD = typename Timer2Bc12Fields::eTWAIT_AFTER_PRD;
    using TVDMSRC_ON = typename Timer2Bc12Fields::TVDMSRC_ON;
    using TWAIT_AFTER_PRD = typename Timer2Bc12Fields::TWAIT_AFTER_PRD;
  };

};

}  // namespace regs