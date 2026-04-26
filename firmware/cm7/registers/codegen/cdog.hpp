#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::cdog {

// Control
struct CONTROL_fields_ {
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
};  // struct CONTROL_fields_

struct CONTROL : ftl::mmio::Register<
    0x41900000u,
    std::uint32_t,
    0x50092492u,
    ftl::mmio::RW,
    CONTROL_fields_::LOCK_CTRL,
    CONTROL_fields_::TIMEOUT_CTRL,
    CONTROL_fields_::MISCOMPARE_CTRL,
    CONTROL_fields_::SEQUENCE_CTRL,
    CONTROL_fields_::CONTROL_CTRL,
    CONTROL_fields_::STATE_CTRL,
    CONTROL_fields_::ADDRESS_CTRL,
    ftl::mmio::Reserved<8, 20>,
    CONTROL_fields_::IRQ_PAUSE,
    CONTROL_fields_::DEBUG_HALT_CTRL> {
  using eLOCK_CTRL = CONTROL_fields_::eLOCK_CTRL;
  using eTIMEOUT_CTRL = CONTROL_fields_::eTIMEOUT_CTRL;
  using eMISCOMPARE_CTRL = CONTROL_fields_::eMISCOMPARE_CTRL;
  using eSEQUENCE_CTRL = CONTROL_fields_::eSEQUENCE_CTRL;
  using eCONTROL_CTRL = CONTROL_fields_::eCONTROL_CTRL;
  using eSTATE_CTRL = CONTROL_fields_::eSTATE_CTRL;
  using eADDRESS_CTRL = CONTROL_fields_::eADDRESS_CTRL;
  using eIRQ_PAUSE = CONTROL_fields_::eIRQ_PAUSE;
  using eDEBUG_HALT_CTRL = CONTROL_fields_::eDEBUG_HALT_CTRL;
  using LOCK_CTRL = CONTROL_fields_::LOCK_CTRL;
  using TIMEOUT_CTRL = CONTROL_fields_::TIMEOUT_CTRL;
  using MISCOMPARE_CTRL = CONTROL_fields_::MISCOMPARE_CTRL;
  using SEQUENCE_CTRL = CONTROL_fields_::SEQUENCE_CTRL;
  using CONTROL_CTRL = CONTROL_fields_::CONTROL_CTRL;
  using STATE_CTRL = CONTROL_fields_::STATE_CTRL;
  using ADDRESS_CTRL = CONTROL_fields_::ADDRESS_CTRL;
  using IRQ_PAUSE = CONTROL_fields_::IRQ_PAUSE;
  using DEBUG_HALT_CTRL = CONTROL_fields_::DEBUG_HALT_CTRL;
};

// Instruction Timer reload
struct RELOAD_fields_ {
  // Instruction Timer reload value
  using RLOAD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RELOAD_fields_

struct RELOAD : ftl::mmio::Register<
    0x41900004u,
    std::uint32_t,
    0xFFFFFFFFu,
    ftl::mmio::RW,
    RELOAD_fields_::RLOAD> {
  using RLOAD = RELOAD_fields_::RLOAD;
};

// Instruction Timer
struct INSTRUCTION_TIMER_fields_ {
  // Current value of the Instruction Timer
  using INSTIM = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct INSTRUCTION_TIMER_fields_

struct INSTRUCTION_TIMER : ftl::mmio::Register<
    0x41900008u,
    std::uint32_t,
    0xFFFFFFFFu,
    ftl::mmio::RW,
    INSTRUCTION_TIMER_fields_::INSTIM> {
  using INSTIM = INSTRUCTION_TIMER_fields_::INSTIM;
};

// Secure Counter
struct SECURE_COUNTER_fields_ {
  // Secure Counter
  using SECCNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct SECURE_COUNTER_fields_

struct SECURE_COUNTER : ftl::mmio::Register<
    0x4190000Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    SECURE_COUNTER_fields_::SECCNT> {
  using SECCNT = SECURE_COUNTER_fields_::SECCNT;
};

// Status 1
struct STATUS_fields_ {
  // Number of TIMEOUT faults since the last POR
  using NUMTOF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of MISCOMPARE faults since the last POR
  using NUMMISCOMPF = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of SEQUENCE faults since the last POR
  using NUMILSEQF = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Current State
  using CURST = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STATUS_fields_

struct STATUS : ftl::mmio::Register<
    0x41900010u,
    std::uint32_t,
    0x50000000u,
    ftl::mmio::RO,
    STATUS_fields_::NUMTOF,
    STATUS_fields_::NUMMISCOMPF,
    STATUS_fields_::NUMILSEQF,
    ftl::mmio::Reserved<4, 24>,
    STATUS_fields_::CURST> {
  using NUMTOF = STATUS_fields_::NUMTOF;
  using NUMMISCOMPF = STATUS_fields_::NUMMISCOMPF;
  using NUMILSEQF = STATUS_fields_::NUMILSEQF;
  using CURST = STATUS_fields_::CURST;
};

// Status 2
struct STATUS2_fields_ {
  // Number of CONTROL faults since the last POR
  using NUMCNTF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of STATE faults since the last POR
  using NUMILLSTF = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of ADDRESS faults since the last POR
  using NUMILLA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STATUS2_fields_

struct STATUS2 : ftl::mmio::Register<
    0x41900014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STATUS2_fields_::NUMCNTF,
    STATUS2_fields_::NUMILLSTF,
    STATUS2_fields_::NUMILLA,
    ftl::mmio::Reserved<8, 24>> {
  using NUMCNTF = STATUS2_fields_::NUMCNTF;
  using NUMILLSTF = STATUS2_fields_::NUMILLSTF;
  using NUMILLA = STATUS2_fields_::NUMILLA;
};

// Flags
struct FLAGS_fields_ {
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
};  // struct FLAGS_fields_

struct FLAGS : ftl::mmio::Register<
    0x41900018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLAGS_fields_::TO_FLAG,
    FLAGS_fields_::MISCOM_FLAG,
    FLAGS_fields_::SEQ_FLAG,
    FLAGS_fields_::CNT_FLAG,
    FLAGS_fields_::STATE_FLAG,
    FLAGS_fields_::ADDR_FLAG,
    ftl::mmio::Reserved<10, 6>,
    FLAGS_fields_::POR_FLAG,
    ftl::mmio::Reserved<15, 17>> {
  using eTO_FLAG = FLAGS_fields_::eTO_FLAG;
  using eMISCOM_FLAG = FLAGS_fields_::eMISCOM_FLAG;
  using eSEQ_FLAG = FLAGS_fields_::eSEQ_FLAG;
  using eCNT_FLAG = FLAGS_fields_::eCNT_FLAG;
  using eSTATE_FLAG = FLAGS_fields_::eSTATE_FLAG;
  using eADDR_FLAG = FLAGS_fields_::eADDR_FLAG;
  using ePOR_FLAG = FLAGS_fields_::ePOR_FLAG;
  using TO_FLAG = FLAGS_fields_::TO_FLAG;
  using MISCOM_FLAG = FLAGS_fields_::MISCOM_FLAG;
  using SEQ_FLAG = FLAGS_fields_::SEQ_FLAG;
  using CNT_FLAG = FLAGS_fields_::CNT_FLAG;
  using STATE_FLAG = FLAGS_fields_::STATE_FLAG;
  using ADDR_FLAG = FLAGS_fields_::ADDR_FLAG;
  using POR_FLAG = FLAGS_fields_::POR_FLAG;
};

// Persistent Data Storage
struct PERSISTENT_fields_ {
  // Persistent Storage
  using PERSIS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PERSISTENT_fields_

struct PERSISTENT : ftl::mmio::Register<
    0x4190001Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PERSISTENT_fields_::PERSIS> {
  using PERSIS = PERSISTENT_fields_::PERSIS;
};

// START Command
struct START_fields_ {
  // Start command
  using STRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct START_fields_

struct START : ftl::mmio::Register<
    0x41900020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    START_fields_::STRT> {
  using STRT = START_fields_::STRT;
};

// STOP Command
struct STOP_fields_ {
  // Stop command
  using STP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct STOP_fields_

struct STOP : ftl::mmio::Register<
    0x41900024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    STOP_fields_::STP> {
  using STP = STOP_fields_::STP;
};

// RESTART Command
struct RESTART_fields_ {
  // Restart command
  using RSTRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct RESTART_fields_

struct RESTART : ftl::mmio::Register<
    0x41900028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    RESTART_fields_::RSTRT> {
  using RSTRT = RESTART_fields_::RSTRT;
};

// ADD Command
struct ADD_fields_ {
  // ADD Write Value
  using AD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct ADD_fields_

struct ADD : ftl::mmio::Register<
    0x4190002Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    ADD_fields_::AD> {
  using AD = ADD_fields_::AD;
};

// ADD1 Command
struct ADD1_fields_ {
  // ADD 1
  using AD1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct ADD1_fields_

struct ADD1 : ftl::mmio::Register<
    0x41900030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    ADD1_fields_::AD1> {
  using AD1 = ADD1_fields_::AD1;
};

// ADD16 Command
struct ADD16_fields_ {
  // ADD 16
  using AD16 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct ADD16_fields_

struct ADD16 : ftl::mmio::Register<
    0x41900034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    ADD16_fields_::AD16> {
  using AD16 = ADD16_fields_::AD16;
};

// ADD256 Command
struct ADD256_fields_ {
  // ADD 256
  using AD256 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct ADD256_fields_

struct ADD256 : ftl::mmio::Register<
    0x41900038u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    ADD256_fields_::AD256> {
  using AD256 = ADD256_fields_::AD256;
};

// SUB Command
struct SUB_fields_ {
  // Subtract Write Value
  using S0B = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct SUB_fields_

struct SUB : ftl::mmio::Register<
    0x4190003Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    SUB_fields_::S0B> {
  using S0B = SUB_fields_::S0B;
};

// SUB1 Command
struct SUB1_fields_ {
  // Subtract 1
  using S1B = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct SUB1_fields_

struct SUB1 : ftl::mmio::Register<
    0x41900040u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    SUB1_fields_::S1B> {
  using S1B = SUB1_fields_::S1B;
};

// SUB16 Command
struct SUB16_fields_ {
  // Subtract 16
  using SB16 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct SUB16_fields_

struct SUB16 : ftl::mmio::Register<
    0x41900044u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    SUB16_fields_::SB16> {
  using SB16 = SUB16_fields_::SB16;
};

// SUB256 Command
struct SUB256_fields_ {
  // Subtract 256
  using SB256 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct SUB256_fields_

struct SUB256 : ftl::mmio::Register<
    0x41900048u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    SUB256_fields_::SB256> {
  using SB256 = SUB256_fields_::SB256;
};

}  // namespace regs::cdog