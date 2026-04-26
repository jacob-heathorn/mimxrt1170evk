#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cdog {
  // Control
  struct ControlFields {
    enum class eLOCK_CTRL : std::uint32_t {
      // Locked
      eLOCKED = 1,
      // Unlocked
      eUNLOCKED = 2,
    };

    enum class eTIMEOUT_CTRL : std::uint32_t {
      // Enable reset
      eENABLE_RESET = 1,
      // Enable interrupt
      eENABLE_INTERRUPT = 2,
      // Disable both reset and interrupt
      eDISABLE_BOTH = 4,
    };

    enum class eMISCOMPARE_CTRL : std::uint32_t {
      // Enable reset
      eENABLE_RESET = 1,
      // Enable interrupt
      eENABLE_INTERRUPT = 2,
      // Disable both reset and interrupt
      eDISABLE_BOTH = 4,
    };

    enum class eSEQUENCE_CTRL : std::uint32_t {
      // Enable reset
      eENABLE_RESET = 1,
      // Enable interrupt
      eENABLE_INTERRUPT = 2,
      // Disable both reset and interrupt
      eDISABLE_BOTH = 4,
    };

    enum class eCONTROL_CTRL : std::uint32_t {
      // Enable reset
      eENABLE_RESET = 1,
      // Disable reset
      eDISABLE_BOTH = 4,
    };

    enum class eSTATE_CTRL : std::uint32_t {
      // Enable reset
      eENABLE_RESET = 1,
      // Enable interrupt
      eENABLE_INTERRUPT = 2,
      // Disable both reset and interrupt
      eDISABLE_BOTH = 4,
    };

    enum class eADDRESS_CTRL : std::uint32_t {
      // Enable reset
      eENABLE_RESET = 1,
      // Enable interrupt
      eENABLE_INTERRUPT = 2,
      // Disable both reset and interrupt
      eDISABLE_BOTH = 4,
    };

    enum class eIRQ_PAUSE : std::uint32_t {
      // Keep the timer running
      eRUN_TIMER = 1,
      // Stop the timer
      ePAUSE_TIMER = 2,
    };

    enum class eDEBUG_HALT_CTRL : std::uint32_t {
      // Keep the timer running
      eRUN_TIMER = 1,
      // Stop the timer
      ePAUSE_TIMER = 2,
    };

    // Lock control
    using LOCK_CTRL = ftl::mmio::Field<2, 0, eLOCK_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // TIMEOUT fault control
    using TIMEOUT_CTRL = ftl::mmio::Field<3, 2, eTIMEOUT_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // MISCOMPARE fault control
    using MISCOMPARE_CTRL = ftl::mmio::Field<3, 5, eMISCOMPARE_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEQUENCE fault control
    using SEQUENCE_CTRL = ftl::mmio::Field<3, 8, eSEQUENCE_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // CONTROL fault control
    using CONTROL_CTRL = ftl::mmio::Field<3, 11, eCONTROL_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // STATE fault control
    using STATE_CTRL = ftl::mmio::Field<3, 14, eSTATE_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADDRESS fault control
    using ADDRESS_CTRL = ftl::mmio::Field<3, 17, eADDRESS_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ pause control
    using IRQ_PAUSE = ftl::mmio::Field<2, 28, eIRQ_PAUSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // DEBUG_HALT control
    using DEBUG_HALT_CTRL = ftl::mmio::Field<2, 30, eDEBUG_HALT_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ControlFields

  struct CONTROL : ftl::mmio::Register<
      0x41900000u,
      std::uint32_t,
      0x50092492u,
      ftl::mmio::RW,
      ControlFields::LOCK_CTRL,
      ControlFields::TIMEOUT_CTRL,
      ControlFields::MISCOMPARE_CTRL,
      ControlFields::SEQUENCE_CTRL,
      ControlFields::CONTROL_CTRL,
      ControlFields::STATE_CTRL,
      ControlFields::ADDRESS_CTRL,
      ftl::mmio::Reserved<8, 20>,
      ControlFields::IRQ_PAUSE,
      ControlFields::DEBUG_HALT_CTRL> {
    using eLOCK_CTRL = ControlFields::eLOCK_CTRL;
    using eTIMEOUT_CTRL = ControlFields::eTIMEOUT_CTRL;
    using eMISCOMPARE_CTRL = ControlFields::eMISCOMPARE_CTRL;
    using eSEQUENCE_CTRL = ControlFields::eSEQUENCE_CTRL;
    using eCONTROL_CTRL = ControlFields::eCONTROL_CTRL;
    using eSTATE_CTRL = ControlFields::eSTATE_CTRL;
    using eADDRESS_CTRL = ControlFields::eADDRESS_CTRL;
    using eIRQ_PAUSE = ControlFields::eIRQ_PAUSE;
    using eDEBUG_HALT_CTRL = ControlFields::eDEBUG_HALT_CTRL;
    using LOCK_CTRL = ControlFields::LOCK_CTRL;
    using TIMEOUT_CTRL = ControlFields::TIMEOUT_CTRL;
    using MISCOMPARE_CTRL = ControlFields::MISCOMPARE_CTRL;
    using SEQUENCE_CTRL = ControlFields::SEQUENCE_CTRL;
    using CONTROL_CTRL = ControlFields::CONTROL_CTRL;
    using STATE_CTRL = ControlFields::STATE_CTRL;
    using ADDRESS_CTRL = ControlFields::ADDRESS_CTRL;
    using IRQ_PAUSE = ControlFields::IRQ_PAUSE;
    using DEBUG_HALT_CTRL = ControlFields::DEBUG_HALT_CTRL;
  };

  // Instruction Timer reload
  struct ReloadFields {
    // Instruction Timer reload value
    using RLOAD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ReloadFields

  struct RELOAD : ftl::mmio::Register<
      0x41900004u,
      std::uint32_t,
      0xFFFFFFFFu,
      ftl::mmio::RW,
      ReloadFields::RLOAD> {
    using RLOAD = ReloadFields::RLOAD;
  };

  // Instruction Timer
  struct InstructionTimerFields {
    // Current value of the Instruction Timer
    using INSTIM = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct InstructionTimerFields

  struct INSTRUCTION_TIMER : ftl::mmio::Register<
      0x41900008u,
      std::uint32_t,
      0xFFFFFFFFu,
      ftl::mmio::RW,
      InstructionTimerFields::INSTIM> {
    using INSTIM = InstructionTimerFields::INSTIM;
  };

  // Secure Counter
  struct SecureCounterFields {
    // Secure Counter
    using SECCNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SecureCounterFields

  struct SECURE_COUNTER : ftl::mmio::Register<
      0x4190000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SecureCounterFields::SECCNT> {
    using SECCNT = SecureCounterFields::SECCNT;
  };

  // Status 1
  struct StatusFields {
    // Number of TIMEOUT faults since the last POR
    using NUMTOF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of MISCOMPARE faults since the last POR
    using NUMMISCOMPF = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of SEQUENCE faults since the last POR
    using NUMILSEQF = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Current State
    using CURST = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct StatusFields

  struct STATUS : ftl::mmio::Register<
      0x41900010u,
      std::uint32_t,
      0x50000000u,
      ftl::mmio::RO,
      StatusFields::NUMTOF,
      StatusFields::NUMMISCOMPF,
      StatusFields::NUMILSEQF,
      ftl::mmio::Reserved<4, 24>,
      StatusFields::CURST> {
    using NUMTOF = StatusFields::NUMTOF;
    using NUMMISCOMPF = StatusFields::NUMMISCOMPF;
    using NUMILSEQF = StatusFields::NUMILSEQF;
    using CURST = StatusFields::CURST;
  };

  // Status 2
  struct Status2Fields {
    // Number of CONTROL faults since the last POR
    using NUMCNTF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of STATE faults since the last POR
    using NUMILLSTF = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of ADDRESS faults since the last POR
    using NUMILLA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Status2Fields

  struct STATUS2 : ftl::mmio::Register<
      0x41900014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Status2Fields::NUMCNTF,
      Status2Fields::NUMILLSTF,
      Status2Fields::NUMILLA,
      ftl::mmio::Reserved<8, 24>> {
    using NUMCNTF = Status2Fields::NUMCNTF;
    using NUMILLSTF = Status2Fields::NUMILLSTF;
    using NUMILLA = Status2Fields::NUMILLA;
  };

  // Flags
  struct FlagsFields {
    enum class eTO_FLAG : std::uint32_t {
      // A TIMEOUT fault has not occurred
      eNO_FLAG = 0,
      // A TIMEOUT fault has occurred
      eFLAG = 1,
    };

    enum class eMISCOM_FLAG : std::uint32_t {
      // A MISCOMPARE fault has not occurred
      eNO_FLAG = 0,
      // A MISCOMPARE fault has occurred
      eFLAG = 1,
    };

    enum class eSEQ_FLAG : std::uint32_t {
      // A SEQUENCE fault has not occurred
      eNO_FLAG = 0,
      // A SEQUENCE fault has occurred
      eFLAG = 1,
    };

    enum class eCNT_FLAG : std::uint32_t {
      // A CONTROL fault has not occurred
      eNO_FLAG = 0,
      // A CONTROL fault has occurred
      eFLAG = 1,
    };

    enum class eSTATE_FLAG : std::uint32_t {
      // A STATE fault has not occurred
      eNO_FLAG = 0,
      // A STATE fault has occurred
      eFLAG = 1,
    };

    enum class eADDR_FLAG : std::uint32_t {
      // An ADDRESS fault has not occurred
      eNO_FLAG = 0,
      // An ADDRESS fault has occurred
      eFLAG = 1,
    };

    enum class ePOR_FLAG : std::uint32_t {
      // A Power-on reset event has not occurred
      eNO_FLAG = 0,
      // A Power-on reset event has occurred
      eFLAG = 1,
    };

    // TIMEOUT fault flag
    using TO_FLAG = ftl::mmio::Field<1, 0, eTO_FLAG, ftl::mmio::RW, ftl::mmio::Normal>;
    // MISCOMPARE fault flag
    using MISCOM_FLAG = ftl::mmio::Field<1, 1, eMISCOM_FLAG, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEQUENCE fault flag
    using SEQ_FLAG = ftl::mmio::Field<1, 2, eSEQ_FLAG, ftl::mmio::RW, ftl::mmio::Normal>;
    // CONTROL fault flag
    using CNT_FLAG = ftl::mmio::Field<1, 3, eCNT_FLAG, ftl::mmio::RW, ftl::mmio::Normal>;
    // STATE fault flag
    using STATE_FLAG = ftl::mmio::Field<1, 4, eSTATE_FLAG, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADDRESS fault flag
    using ADDR_FLAG = ftl::mmio::Field<1, 5, eADDR_FLAG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power-on reset flag
    using POR_FLAG = ftl::mmio::Field<1, 16, ePOR_FLAG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FlagsFields

  struct FLAGS : ftl::mmio::Register<
      0x41900018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      FlagsFields::TO_FLAG,
      FlagsFields::MISCOM_FLAG,
      FlagsFields::SEQ_FLAG,
      FlagsFields::CNT_FLAG,
      FlagsFields::STATE_FLAG,
      FlagsFields::ADDR_FLAG,
      ftl::mmio::Reserved<10, 6>,
      FlagsFields::POR_FLAG,
      ftl::mmio::Reserved<15, 17>> {
    using eTO_FLAG = FlagsFields::eTO_FLAG;
    using eMISCOM_FLAG = FlagsFields::eMISCOM_FLAG;
    using eSEQ_FLAG = FlagsFields::eSEQ_FLAG;
    using eCNT_FLAG = FlagsFields::eCNT_FLAG;
    using eSTATE_FLAG = FlagsFields::eSTATE_FLAG;
    using eADDR_FLAG = FlagsFields::eADDR_FLAG;
    using ePOR_FLAG = FlagsFields::ePOR_FLAG;
    using TO_FLAG = FlagsFields::TO_FLAG;
    using MISCOM_FLAG = FlagsFields::MISCOM_FLAG;
    using SEQ_FLAG = FlagsFields::SEQ_FLAG;
    using CNT_FLAG = FlagsFields::CNT_FLAG;
    using STATE_FLAG = FlagsFields::STATE_FLAG;
    using ADDR_FLAG = FlagsFields::ADDR_FLAG;
    using POR_FLAG = FlagsFields::POR_FLAG;
  };

  // Persistent Data Storage
  struct PersistentFields {
    // Persistent Storage
    using PERSIS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PersistentFields

  struct PERSISTENT : ftl::mmio::Register<
      0x4190001Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PersistentFields::PERSIS> {
    using PERSIS = PersistentFields::PERSIS;
  };

  // START Command
  struct StartFields {
    // Start command
    using STRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct StartFields

  struct START : ftl::mmio::Register<
      0x41900020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      StartFields::STRT> {
    using STRT = StartFields::STRT;
  };

  // STOP Command
  struct StopFields {
    // Stop command
    using STP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct StopFields

  struct STOP : ftl::mmio::Register<
      0x41900024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      StopFields::STP> {
    using STP = StopFields::STP;
  };

  // RESTART Command
  struct RestartFields {
    // Restart command
    using RSTRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct RestartFields

  struct RESTART : ftl::mmio::Register<
      0x41900028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      RestartFields::RSTRT> {
    using RSTRT = RestartFields::RSTRT;
  };

  // ADD Command
  struct AddFields {
    // ADD Write Value
    using AD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct AddFields

  struct ADD : ftl::mmio::Register<
      0x4190002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      AddFields::AD> {
    using AD = AddFields::AD;
  };

  // ADD1 Command
  struct Add1Fields {
    // ADD 1
    using AD1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Add1Fields

  struct ADD1 : ftl::mmio::Register<
      0x41900030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Add1Fields::AD1> {
    using AD1 = Add1Fields::AD1;
  };

  // ADD16 Command
  struct Add16Fields {
    // ADD 16
    using AD16 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Add16Fields

  struct ADD16 : ftl::mmio::Register<
      0x41900034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Add16Fields::AD16> {
    using AD16 = Add16Fields::AD16;
  };

  // ADD256 Command
  struct Add256Fields {
    // ADD 256
    using AD256 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Add256Fields

  struct ADD256 : ftl::mmio::Register<
      0x41900038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Add256Fields::AD256> {
    using AD256 = Add256Fields::AD256;
  };

  // SUB Command
  struct SubFields {
    // Subtract Write Value
    using S0B = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SubFields

  struct SUB : ftl::mmio::Register<
      0x4190003Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SubFields::S0B> {
    using S0B = SubFields::S0B;
  };

  // SUB1 Command
  struct Sub1Fields {
    // Subtract 1
    using S1B = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Sub1Fields

  struct SUB1 : ftl::mmio::Register<
      0x41900040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Sub1Fields::S1B> {
    using S1B = Sub1Fields::S1B;
  };

  // SUB16 Command
  struct Sub16Fields {
    // Subtract 16
    using SB16 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Sub16Fields

  struct SUB16 : ftl::mmio::Register<
      0x41900044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Sub16Fields::SB16> {
    using SB16 = Sub16Fields::SB16;
  };

  // SUB256 Command
  struct Sub256Fields {
    // Subtract 256
    using SB256 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Sub256Fields

  struct SUB256 : ftl::mmio::Register<
      0x41900048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Sub256Fields::SB256> {
    using SB256 = Sub256Fields::SB256;
  };

};

}  // namespace regs