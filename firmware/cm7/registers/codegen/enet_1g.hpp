#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// ENET
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::enet_1g {

// Interrupt Event Register
struct EIR_fields_ {
  // Receive buffer interrupt, class 1
  using RXB1 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receive frame interrupt, class 1
  using RXF1 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit buffer interrupt, class 1
  using TXB1 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit frame interrupt, class 1
  using TXF1 = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receive buffer interrupt, class 2
  using RXB2 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receive frame interrupt, class 2
  using RXF2 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit buffer interrupt, class 2
  using TXB2 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit frame interrupt, class 2
  using TXF2 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RX DMA Ring 0 flush indication
  using RXFLUSH_0 = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RX DMA Ring 1 flush indication
  using RXFLUSH_1 = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RX DMA Ring 2 flush indication
  using RXFLUSH_2 = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Timestamp Timer
  using TS_TIMER = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit Timestamp Available
  using TS_AVAIL = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Node Wakeup Request Indication
  using WAKEUP = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Payload Receive Error
  using PLR = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit FIFO Underrun
  using UN = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Collision Retry Limit
  using RL = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Late Collision
  using LC = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Ethernet Bus Error
  using EBERR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // MII Interrupt.
  using MII = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receive Buffer Interrupt
  using RXB = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Receive Frame Interrupt
  using RXF = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit Buffer Interrupt
  using TXB = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Transmit Frame Interrupt
  using TXF = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Graceful Stop Complete
  using GRA = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Babbling Transmit Error
  using BABT = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Babbling Receive Error
  using BABR = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct EIR_fields_

struct EIR : ftl::mmio::Register<
    0x40420004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EIR_fields_::RXB1,
    EIR_fields_::RXF1,
    EIR_fields_::TXB1,
    EIR_fields_::TXF1,
    EIR_fields_::RXB2,
    EIR_fields_::RXF2,
    EIR_fields_::TXB2,
    EIR_fields_::TXF2,
    ftl::mmio::Reserved<4, 8>,
    EIR_fields_::RXFLUSH_0,
    EIR_fields_::RXFLUSH_1,
    EIR_fields_::RXFLUSH_2,
    EIR_fields_::TS_TIMER,
    EIR_fields_::TS_AVAIL,
    EIR_fields_::WAKEUP,
    EIR_fields_::PLR,
    EIR_fields_::UN,
    EIR_fields_::RL,
    EIR_fields_::LC,
    EIR_fields_::EBERR,
    EIR_fields_::MII,
    EIR_fields_::RXB,
    EIR_fields_::RXF,
    EIR_fields_::TXB,
    EIR_fields_::TXF,
    EIR_fields_::GRA,
    EIR_fields_::BABT,
    EIR_fields_::BABR,
    ftl::mmio::Reserved<1, 31>> {
  using RXB1 = EIR_fields_::RXB1;
  using RXF1 = EIR_fields_::RXF1;
  using TXB1 = EIR_fields_::TXB1;
  using TXF1 = EIR_fields_::TXF1;
  using RXB2 = EIR_fields_::RXB2;
  using RXF2 = EIR_fields_::RXF2;
  using TXB2 = EIR_fields_::TXB2;
  using TXF2 = EIR_fields_::TXF2;
  using RXFLUSH_0 = EIR_fields_::RXFLUSH_0;
  using RXFLUSH_1 = EIR_fields_::RXFLUSH_1;
  using RXFLUSH_2 = EIR_fields_::RXFLUSH_2;
  using TS_TIMER = EIR_fields_::TS_TIMER;
  using TS_AVAIL = EIR_fields_::TS_AVAIL;
  using WAKEUP = EIR_fields_::WAKEUP;
  using PLR = EIR_fields_::PLR;
  using UN = EIR_fields_::UN;
  using RL = EIR_fields_::RL;
  using LC = EIR_fields_::LC;
  using EBERR = EIR_fields_::EBERR;
  using MII = EIR_fields_::MII;
  using RXB = EIR_fields_::RXB;
  using RXF = EIR_fields_::RXF;
  using TXB = EIR_fields_::TXB;
  using TXF = EIR_fields_::TXF;
  using GRA = EIR_fields_::GRA;
  using BABT = EIR_fields_::BABT;
  using BABR = EIR_fields_::BABR;
};

// Interrupt Mask Register
struct EIMR_fields_ {
  enum class eRXB1 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXF1 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eTXB1 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eTXF1 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXB2 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXF2 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eTXB2 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eTXF2 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXFLUSH_0 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXFLUSH_1 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXFLUSH_2 : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eTS_TIMER : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eTS_AVAIL : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eWAKEUP : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class ePLR : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eUN : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRL : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eLC : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eEBERR : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eMII : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXB : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eRXF : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eTXB : std::uint32_t {
    // The corresponding interrupt source is masked.
    eMASKED = 0,
    // The corresponding interrupt source is not masked.
    eUNMASKED = 1,
  };

  enum class eTXF : std::uint32_t {
    // The corresponding interrupt source is masked.
    eMASKED = 0,
    // The corresponding interrupt source is not masked.
    eUNMASKED = 1,
  };

  enum class eGRA : std::uint32_t {
    // The corresponding interrupt source is masked.
    eMASKED = 0,
    // The corresponding interrupt source is not masked.
    eUMASKED = 1,
  };

  enum class eBABT : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  enum class eBABR : std::uint32_t {
    // The corresponding interrupt source is masked.
    eZERO = 0,
    // The corresponding interrupt source is not masked.
    eONE = 1,
  };

  // Receive buffer interrupt, class 1
  using RXB1 = ftl::mmio::Field<1, 0, eRXB1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive frame interrupt, class 1
  using RXF1 = ftl::mmio::Field<1, 1, eRXF1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit buffer interrupt, class 1
  using TXB1 = ftl::mmio::Field<1, 2, eTXB1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit frame interrupt, class 1
  using TXF1 = ftl::mmio::Field<1, 3, eTXF1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive buffer interrupt, class 2
  using RXB2 = ftl::mmio::Field<1, 4, eRXB2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive frame interrupt, class 2
  using RXF2 = ftl::mmio::Field<1, 5, eRXF2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit buffer interrupt, class 2
  using TXB2 = ftl::mmio::Field<1, 6, eTXB2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit frame interrupt, class 2
  using TXF2 = ftl::mmio::Field<1, 7, eTXF2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Corresponds to interrupt source EIR[RXFLUSH_0] and determines whether an interrupt condition can generate an interrupt
  using RXFLUSH_0 = ftl::mmio::Field<1, 12, eRXFLUSH_0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Corresponds to interrupt source EIR[RXFLUSH_1] and determines whether an interrupt condition can generate an interrupt
  using RXFLUSH_1 = ftl::mmio::Field<1, 13, eRXFLUSH_1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Corresponds to interrupt source EIR[RXFLUSH_2] and determines whether an interrupt condition can generate an interrupt
  using RXFLUSH_2 = ftl::mmio::Field<1, 14, eRXFLUSH_2, ftl::mmio::RW, ftl::mmio::Normal>;
  // TS_TIMER Interrupt Mask
  using TS_TIMER = ftl::mmio::Field<1, 15, eTS_TIMER, ftl::mmio::RW, ftl::mmio::Normal>;
  // TS_AVAIL Interrupt Mask
  using TS_AVAIL = ftl::mmio::Field<1, 16, eTS_AVAIL, ftl::mmio::RW, ftl::mmio::Normal>;
  // WAKEUP Interrupt Mask
  using WAKEUP = ftl::mmio::Field<1, 17, eWAKEUP, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLR Interrupt Mask
  using PLR = ftl::mmio::Field<1, 18, ePLR, ftl::mmio::RW, ftl::mmio::Normal>;
  // UN Interrupt Mask
  using UN = ftl::mmio::Field<1, 19, eUN, ftl::mmio::RW, ftl::mmio::Normal>;
  // RL Interrupt Mask
  using RL = ftl::mmio::Field<1, 20, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LC Interrupt Mask
  using LC = ftl::mmio::Field<1, 21, eLC, ftl::mmio::RW, ftl::mmio::Normal>;
  // EBERR Interrupt Mask
  using EBERR = ftl::mmio::Field<1, 22, eEBERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // MII Interrupt Mask
  using MII = ftl::mmio::Field<1, 23, eMII, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXB Interrupt Mask
  using RXB = ftl::mmio::Field<1, 24, eRXB, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXF Interrupt Mask
  using RXF = ftl::mmio::Field<1, 25, eRXF, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXB Interrupt Mask
  using TXB = ftl::mmio::Field<1, 26, eTXB, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXF Interrupt Mask
  using TXF = ftl::mmio::Field<1, 27, eTXF, ftl::mmio::RW, ftl::mmio::Normal>;
  // GRA Interrupt Mask
  using GRA = ftl::mmio::Field<1, 28, eGRA, ftl::mmio::RW, ftl::mmio::Normal>;
  // BABT Interrupt Mask
  using BABT = ftl::mmio::Field<1, 29, eBABT, ftl::mmio::RW, ftl::mmio::Normal>;
  // BABR Interrupt Mask
  using BABR = ftl::mmio::Field<1, 30, eBABR, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct EIMR_fields_

struct EIMR : ftl::mmio::Register<
    0x40420008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EIMR_fields_::RXB1,
    EIMR_fields_::RXF1,
    EIMR_fields_::TXB1,
    EIMR_fields_::TXF1,
    EIMR_fields_::RXB2,
    EIMR_fields_::RXF2,
    EIMR_fields_::TXB2,
    EIMR_fields_::TXF2,
    ftl::mmio::Reserved<4, 8>,
    EIMR_fields_::RXFLUSH_0,
    EIMR_fields_::RXFLUSH_1,
    EIMR_fields_::RXFLUSH_2,
    EIMR_fields_::TS_TIMER,
    EIMR_fields_::TS_AVAIL,
    EIMR_fields_::WAKEUP,
    EIMR_fields_::PLR,
    EIMR_fields_::UN,
    EIMR_fields_::RL,
    EIMR_fields_::LC,
    EIMR_fields_::EBERR,
    EIMR_fields_::MII,
    EIMR_fields_::RXB,
    EIMR_fields_::RXF,
    EIMR_fields_::TXB,
    EIMR_fields_::TXF,
    EIMR_fields_::GRA,
    EIMR_fields_::BABT,
    EIMR_fields_::BABR,
    ftl::mmio::Reserved<1, 31>> {
  using eRXB1 = EIMR_fields_::eRXB1;
  using eRXF1 = EIMR_fields_::eRXF1;
  using eTXB1 = EIMR_fields_::eTXB1;
  using eTXF1 = EIMR_fields_::eTXF1;
  using eRXB2 = EIMR_fields_::eRXB2;
  using eRXF2 = EIMR_fields_::eRXF2;
  using eTXB2 = EIMR_fields_::eTXB2;
  using eTXF2 = EIMR_fields_::eTXF2;
  using eRXFLUSH_0 = EIMR_fields_::eRXFLUSH_0;
  using eRXFLUSH_1 = EIMR_fields_::eRXFLUSH_1;
  using eRXFLUSH_2 = EIMR_fields_::eRXFLUSH_2;
  using eTS_TIMER = EIMR_fields_::eTS_TIMER;
  using eTS_AVAIL = EIMR_fields_::eTS_AVAIL;
  using eWAKEUP = EIMR_fields_::eWAKEUP;
  using ePLR = EIMR_fields_::ePLR;
  using eUN = EIMR_fields_::eUN;
  using eRL = EIMR_fields_::eRL;
  using eLC = EIMR_fields_::eLC;
  using eEBERR = EIMR_fields_::eEBERR;
  using eMII = EIMR_fields_::eMII;
  using eRXB = EIMR_fields_::eRXB;
  using eRXF = EIMR_fields_::eRXF;
  using eTXB = EIMR_fields_::eTXB;
  using eTXF = EIMR_fields_::eTXF;
  using eGRA = EIMR_fields_::eGRA;
  using eBABT = EIMR_fields_::eBABT;
  using eBABR = EIMR_fields_::eBABR;
  using RXB1 = EIMR_fields_::RXB1;
  using RXF1 = EIMR_fields_::RXF1;
  using TXB1 = EIMR_fields_::TXB1;
  using TXF1 = EIMR_fields_::TXF1;
  using RXB2 = EIMR_fields_::RXB2;
  using RXF2 = EIMR_fields_::RXF2;
  using TXB2 = EIMR_fields_::TXB2;
  using TXF2 = EIMR_fields_::TXF2;
  using RXFLUSH_0 = EIMR_fields_::RXFLUSH_0;
  using RXFLUSH_1 = EIMR_fields_::RXFLUSH_1;
  using RXFLUSH_2 = EIMR_fields_::RXFLUSH_2;
  using TS_TIMER = EIMR_fields_::TS_TIMER;
  using TS_AVAIL = EIMR_fields_::TS_AVAIL;
  using WAKEUP = EIMR_fields_::WAKEUP;
  using PLR = EIMR_fields_::PLR;
  using UN = EIMR_fields_::UN;
  using RL = EIMR_fields_::RL;
  using LC = EIMR_fields_::LC;
  using EBERR = EIMR_fields_::EBERR;
  using MII = EIMR_fields_::MII;
  using RXB = EIMR_fields_::RXB;
  using RXF = EIMR_fields_::RXF;
  using TXB = EIMR_fields_::TXB;
  using TXF = EIMR_fields_::TXF;
  using GRA = EIMR_fields_::GRA;
  using BABT = EIMR_fields_::BABT;
  using BABR = EIMR_fields_::BABR;
};

// Receive Descriptor Active Register - Ring 0
struct RDAR_fields_ {
  // Receive Descriptor Active
  using RDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDAR_fields_

struct RDAR : ftl::mmio::Register<
    0x40420010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    RDAR_fields_::RDAR,
    ftl::mmio::Reserved<7, 25>> {
  using value_ = RDAR_fields_::RDAR;
};

// Transmit Descriptor Active Register - Ring 0
struct TDAR_fields_ {
  // Transmit Descriptor Active
  using TDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TDAR_fields_

struct TDAR : ftl::mmio::Register<
    0x40420014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    TDAR_fields_::TDAR,
    ftl::mmio::Reserved<7, 25>> {
  using value_ = TDAR_fields_::TDAR;
};

// Ethernet Control Register
struct ECR_fields_ {
  enum class eETHEREN : std::uint32_t {
    // Reception immediately stops and transmission stops after a bad CRC is appended to any currently transmitted frame.
    eZERO = 0,
    // MAC is enabled, and reception and transmission are possible.
    eONE = 1,
  };

  enum class eMAGICEN : std::uint32_t {
    // Magic detection logic disabled.
    eZERO = 0,
    // The MAC core detects magic packets and asserts EIR[WAKEUP] when a frame is detected.
    eONE = 1,
  };

  enum class eSLEEP : std::uint32_t {
    // Normal operating mode.
    eZERO = 0,
    // Sleep mode.
    eONE = 1,
  };

  enum class eEN1588 : std::uint32_t {
    // Legacy FEC buffer descriptors and functions enabled.
    eZERO = 0,
    // Enhanced frame time-stamping functions enabled. Has no effect within the MAC besides controlling the DMA control bit ena_1588.
    eONE = 1,
  };

  enum class eSPEED : std::uint32_t {
    // 10/100-Mbit/s mode
    eZERO = 0,
    // 1000-Mbit/s mode
    eONE = 1,
  };

  enum class eDBGEN : std::uint32_t {
    // MAC continues operation in debug mode.
    eZERO = 0,
    // MAC enters hardware freeze mode when the processor is in debug mode.
    eONE = 1,
  };

  enum class eDBSWP : std::uint32_t {
    // The buffer descriptor bytes are not swapped to support big-endian devices.
    eZERO = 0,
    // The buffer descriptor bytes are swapped to support little-endian devices.
    eONE = 1,
  };

  enum class eSVLANEN : std::uint32_t {
    // Only the EtherType 0x8100 will be considered for VLAN detection.
    eZERO = 0,
    // The EtherType 0x88a8 will be considered in addition to 0x8100 (C-VLAN) to identify a VLAN frame in receive. When a VLAN frame is identified, the two bytes following the VLAN type are extracted and used by the classification match comparators, RCMRn.
    eONE = 1,
  };

  enum class eVLANUSE2ND : std::uint32_t {
    // Always extract data from the first VLAN tag if it exists.
    eZERO = 0,
    // When a double-tagged frame is detected, the data of the second tag is extracted for further processing. A double-tagged frame is defined as: The first tag can be a C-VLAN or a S-VLAN (if SVLAN_ENA = 1) The second tag must be a C-VLAN
    eONE = 1,
  };

  enum class eSVLANDBL : std::uint32_t {
    // Disable S-VLAN double tag
    eZERO = 0,
    // Enable S-VLAN double tag
    eONE = 1,
  };

  enum class eTXC_DLY : std::uint32_t {
    // RGMII_TXC is not delayed.
    eZERO = 0,
    // Generate delayed version of RGMII_TXC.
    eONE = 1,
  };

  // Ethernet MAC Reset
  using RESET = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Ethernet Enable
  using ETHEREN = ftl::mmio::Field<1, 1, eETHEREN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Magic Packet Detection Enable
  using MAGICEN = ftl::mmio::Field<1, 2, eMAGICEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Sleep Mode Enable
  using SLEEP = ftl::mmio::Field<1, 3, eSLEEP, ftl::mmio::RW, ftl::mmio::Normal>;
  // EN1588 Enable
  using EN1588 = ftl::mmio::Field<1, 4, eEN1588, ftl::mmio::RW, ftl::mmio::Normal>;
  // Selects between 10/100-Mbit/s and 1000-Mbit/s modes of operation.
  using SPEED = ftl::mmio::Field<1, 5, eSPEED, ftl::mmio::RW, ftl::mmio::Normal>;
  // Debug Enable
  using DBGEN = ftl::mmio::Field<1, 6, eDBGEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Descriptor Byte Swapping Enable
  using DBSWP = ftl::mmio::Field<1, 8, eDBSWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // S-VLAN enable
  using SVLANEN = ftl::mmio::Field<1, 9, eSVLANEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // VLAN use second tag
  using VLANUSE2ND = ftl::mmio::Field<1, 10, eVLANUSE2ND, ftl::mmio::RW, ftl::mmio::Normal>;
  // S-VLAN double tag
  using SVLANDBL = ftl::mmio::Field<1, 11, eSVLANDBL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit clock delay
  using TXC_DLY = ftl::mmio::Field<1, 16, eTXC_DLY, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ECR_fields_

struct ECR : ftl::mmio::Register<
    0x40420024u,
    std::uint32_t,
    0x70000000u,
    ftl::mmio::RW,
    ECR_fields_::RESET,
    ECR_fields_::ETHEREN,
    ECR_fields_::MAGICEN,
    ECR_fields_::SLEEP,
    ECR_fields_::EN1588,
    ECR_fields_::SPEED,
    ECR_fields_::DBGEN,
    ftl::mmio::Reserved<1, 7>,
    ECR_fields_::DBSWP,
    ECR_fields_::SVLANEN,
    ECR_fields_::VLANUSE2ND,
    ECR_fields_::SVLANDBL,
    ftl::mmio::Reserved<4, 12>,
    ECR_fields_::TXC_DLY,
    ftl::mmio::Reserved<15, 17>> {
  using eETHEREN = ECR_fields_::eETHEREN;
  using eMAGICEN = ECR_fields_::eMAGICEN;
  using eSLEEP = ECR_fields_::eSLEEP;
  using eEN1588 = ECR_fields_::eEN1588;
  using eSPEED = ECR_fields_::eSPEED;
  using eDBGEN = ECR_fields_::eDBGEN;
  using eDBSWP = ECR_fields_::eDBSWP;
  using eSVLANEN = ECR_fields_::eSVLANEN;
  using eVLANUSE2ND = ECR_fields_::eVLANUSE2ND;
  using eSVLANDBL = ECR_fields_::eSVLANDBL;
  using eTXC_DLY = ECR_fields_::eTXC_DLY;
  using RESET = ECR_fields_::RESET;
  using ETHEREN = ECR_fields_::ETHEREN;
  using MAGICEN = ECR_fields_::MAGICEN;
  using SLEEP = ECR_fields_::SLEEP;
  using EN1588 = ECR_fields_::EN1588;
  using SPEED = ECR_fields_::SPEED;
  using DBGEN = ECR_fields_::DBGEN;
  using DBSWP = ECR_fields_::DBSWP;
  using SVLANEN = ECR_fields_::SVLANEN;
  using VLANUSE2ND = ECR_fields_::VLANUSE2ND;
  using SVLANDBL = ECR_fields_::SVLANDBL;
  using TXC_DLY = ECR_fields_::TXC_DLY;
};

// MII Management Frame Register
struct MMFR_fields_ {
  // Management Frame Data
  using DATA = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Turn Around
  using TA = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Register Address
  using RA = ftl::mmio::Field<5, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // PHY Address
  using PA = ftl::mmio::Field<5, 23, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Operation Code
  using OP = ftl::mmio::Field<2, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Start Of Frame Delimiter
  using ST = ftl::mmio::Field<2, 30, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MMFR_fields_

struct MMFR : ftl::mmio::Register<
    0x40420040u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MMFR_fields_::DATA,
    MMFR_fields_::TA,
    MMFR_fields_::RA,
    MMFR_fields_::PA,
    MMFR_fields_::OP,
    MMFR_fields_::ST> {
  using DATA = MMFR_fields_::DATA;
  using TA = MMFR_fields_::TA;
  using RA = MMFR_fields_::RA;
  using PA = MMFR_fields_::PA;
  using OP = MMFR_fields_::OP;
  using ST = MMFR_fields_::ST;
};

// MII Speed Control Register
struct MSCR_fields_ {
  enum class eDIS_PRE : std::uint32_t {
    // Preamble enabled.
    eZERO = 0,
    // Preamble (32 ones) is not prepended to the MII management frame.
    eONE = 1,
  };

  enum class eHOLDTIME : std::uint32_t {
    // 1 internal module clock cycle
    eVAL_1 = 0,
    // 2 internal module clock cycles
    eVAL2 = 1,
    // 3 internal module clock cycles
    eVAL3 = 2,
    // 8 internal module clock cycles
    eVAL8 = 7,
  };

  // MII Speed
  using MII_SPEED = ftl::mmio::Field<6, 1, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Disable Preamble
  using DIS_PRE = ftl::mmio::Field<1, 7, eDIS_PRE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Hold time On MDIO Output
  using HOLDTIME = ftl::mmio::Field<3, 8, eHOLDTIME, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MSCR_fields_

struct MSCR : ftl::mmio::Register<
    0x40420044u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    MSCR_fields_::MII_SPEED,
    MSCR_fields_::DIS_PRE,
    MSCR_fields_::HOLDTIME,
    ftl::mmio::Reserved<21, 11>> {
  using eDIS_PRE = MSCR_fields_::eDIS_PRE;
  using eHOLDTIME = MSCR_fields_::eHOLDTIME;
  using MII_SPEED = MSCR_fields_::MII_SPEED;
  using DIS_PRE = MSCR_fields_::DIS_PRE;
  using HOLDTIME = MSCR_fields_::HOLDTIME;
};

// MIB Control Register
struct MIBC_fields_ {
  enum class eMIB_CLEAR : std::uint32_t {
    // See note above.
    eZERO = 0,
    // All statistics counters are reset to 0.
    eONE = 1,
  };

  enum class eMIB_IDLE : std::uint32_t {
    // The MIB block is updating MIB counters.
    eZERO = 0,
    // The MIB block is not currently updating any MIB counters.
    eONE = 1,
  };

  enum class eMIB_DIS : std::uint32_t {
    // MIB logic is enabled.
    eZERO = 0,
    // MIB logic is disabled. The MIB logic halts and does not update any MIB counters.
    eONE = 1,
  };

  // MIB Clear
  using MIB_CLEAR = ftl::mmio::Field<1, 29, eMIB_CLEAR, ftl::mmio::RW, ftl::mmio::Normal>;
  // MIB Idle
  using MIB_IDLE = ftl::mmio::Field<1, 30, eMIB_IDLE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Disable MIB Logic
  using MIB_DIS = ftl::mmio::Field<1, 31, eMIB_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MIBC_fields_

struct MIBC : ftl::mmio::Register<
    0x40420064u,
    std::uint32_t,
    0xC0000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<29, 0>,
    MIBC_fields_::MIB_CLEAR,
    MIBC_fields_::MIB_IDLE,
    MIBC_fields_::MIB_DIS> {
  using eMIB_CLEAR = MIBC_fields_::eMIB_CLEAR;
  using eMIB_IDLE = MIBC_fields_::eMIB_IDLE;
  using eMIB_DIS = MIBC_fields_::eMIB_DIS;
  using MIB_CLEAR = MIBC_fields_::MIB_CLEAR;
  using MIB_IDLE = MIBC_fields_::MIB_IDLE;
  using MIB_DIS = MIBC_fields_::MIB_DIS;
};

// Receive Control Register
struct RCR_fields_ {
  enum class eLOOP : std::uint32_t {
    // Loopback disabled.
    eZERO = 0,
    // Transmitted frames are looped back internal to the device and transmit MII output signals are not asserted. DRT must be cleared.
    eONE = 1,
  };

  enum class eDRT : std::uint32_t {
    // Receive path operates independently of transmit (i.e., full-duplex mode). Can also be used to monitor transmit activity in half-duplex mode.
    eZERO = 0,
    // Disable reception of frames while transmitting. (Normally used for half-duplex mode.)
    eONE = 1,
  };

  enum class eMII_MODE : std::uint32_t {
    // MII or RMII mode, as indicated by the RMII_MODE field.
    eONE = 1,
  };

  enum class ePROM : std::uint32_t {
    // Disabled.
    eZERO = 0,
    // Enabled.
    eONE = 1,
  };

  enum class eBC_REJ : std::uint32_t {
    // Will not reject frames as described above
    eZERO = 0,
    // Will reject frames as described above
    eONE = 1,
  };

  enum class eFCE : std::uint32_t {
    // Disable flow control
    eZERO = 0,
    // Enable flow control
    eONE = 1,
  };

  enum class eRGMII_EN : std::uint32_t {
    // MAC configured for non-RGMII operation
    eZERO = 0,
    // MAC configured for RGMII operation. If ECR[SPEED] is set, the MAC is in RGMII 1000-Mbit/s mode. If ECR[SPEED] is cleared, the MAC is in RGMII 10/100-Mbit/s mode.
    eONE = 1,
  };

  enum class eRMII_MODE : std::uint32_t {
    // MAC configured for MII mode.
    eZERO = 0,
    // MAC configured for RMII operation.
    eONE = 1,
  };

  enum class eRMII_10T : std::uint32_t {
    // 100-Mbit/s or 1-Gbit/s operation.
    eZERO = 0,
    // 10-Mbit/s operation.
    eONE = 1,
  };

  enum class ePADEN : std::uint32_t {
    // No padding is removed on receive by the MAC.
    eZERO = 0,
    // Padding is removed from received frames.
    eONE = 1,
  };

  enum class ePAUFWD : std::uint32_t {
    // Pause frames are terminated and discarded in the MAC.
    eZERO = 0,
    // Pause frames are forwarded to the user application.
    eONE = 1,
  };

  enum class eCRCFWD : std::uint32_t {
    // The CRC field of received frames is transmitted to the user application.
    eZERO = 0,
    // The CRC field is stripped from the frame.
    eONE = 1,
  };

  enum class eCFEN : std::uint32_t {
    // MAC control frames with any opcode other than 0x0001 (pause frame) are accepted and forwarded to the client interface.
    eZERO = 0,
    // MAC control frames with any opcode other than 0x0001 (pause frame) are silently discarded.
    eONE = 1,
  };

  enum class eNLC : std::uint32_t {
    // The payload length check is disabled.
    eZERO = 0,
    // The core checks the frame's payload length with the frame length/type field. Errors are indicated in the EIR[PLR] field.
    eONE = 1,
  };

  enum class eGRS : std::uint32_t {
    // Receive not stopped
    eZERO = 0,
    // Receive stopped
    eONE = 1,
  };

  // Internal Loopback
  using LOOP = ftl::mmio::Field<1, 0, eLOOP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Disable Receive On Transmit
  using DRT = ftl::mmio::Field<1, 1, eDRT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Media Independent Interface Mode
  using MII_MODE = ftl::mmio::Field<1, 2, eMII_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Promiscuous Mode
  using PROM = ftl::mmio::Field<1, 3, ePROM, ftl::mmio::RW, ftl::mmio::Normal>;
  // Broadcast Frame Reject
  using BC_REJ = ftl::mmio::Field<1, 4, eBC_REJ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Flow Control Enable
  using FCE = ftl::mmio::Field<1, 5, eFCE, ftl::mmio::RW, ftl::mmio::Normal>;
  // RGMII Mode Enable
  using RGMII_EN = ftl::mmio::Field<1, 6, eRGMII_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // RMII Mode Enable
  using RMII_MODE = ftl::mmio::Field<1, 8, eRMII_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables 10-Mbit/s mode of the RMII or RGMII .
  using RMII_10T = ftl::mmio::Field<1, 9, eRMII_10T, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Frame Padding Remove On Receive
  using PADEN = ftl::mmio::Field<1, 12, ePADEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Terminate/Forward Pause Frames
  using PAUFWD = ftl::mmio::Field<1, 13, ePAUFWD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Terminate/Forward Received CRC
  using CRCFWD = ftl::mmio::Field<1, 14, eCRCFWD, ftl::mmio::RW, ftl::mmio::Normal>;
  // MAC Control Frame Enable
  using CFEN = ftl::mmio::Field<1, 15, eCFEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Maximum Frame Length
  using MAX_FL = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Payload Length Check Disable
  using NLC = ftl::mmio::Field<1, 30, eNLC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Graceful Receive Stopped
  using GRS = ftl::mmio::Field<1, 31, eGRS, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RCR_fields_

struct RCR : ftl::mmio::Register<
    0x40420084u,
    std::uint32_t,
    0x05EE0001u,
    ftl::mmio::RW,
    RCR_fields_::LOOP,
    RCR_fields_::DRT,
    RCR_fields_::MII_MODE,
    RCR_fields_::PROM,
    RCR_fields_::BC_REJ,
    RCR_fields_::FCE,
    RCR_fields_::RGMII_EN,
    ftl::mmio::Reserved<1, 7>,
    RCR_fields_::RMII_MODE,
    RCR_fields_::RMII_10T,
    ftl::mmio::Reserved<2, 10>,
    RCR_fields_::PADEN,
    RCR_fields_::PAUFWD,
    RCR_fields_::CRCFWD,
    RCR_fields_::CFEN,
    RCR_fields_::MAX_FL,
    RCR_fields_::NLC,
    RCR_fields_::GRS> {
  using eLOOP = RCR_fields_::eLOOP;
  using eDRT = RCR_fields_::eDRT;
  using eMII_MODE = RCR_fields_::eMII_MODE;
  using ePROM = RCR_fields_::ePROM;
  using eBC_REJ = RCR_fields_::eBC_REJ;
  using eFCE = RCR_fields_::eFCE;
  using eRGMII_EN = RCR_fields_::eRGMII_EN;
  using eRMII_MODE = RCR_fields_::eRMII_MODE;
  using eRMII_10T = RCR_fields_::eRMII_10T;
  using ePADEN = RCR_fields_::ePADEN;
  using ePAUFWD = RCR_fields_::ePAUFWD;
  using eCRCFWD = RCR_fields_::eCRCFWD;
  using eCFEN = RCR_fields_::eCFEN;
  using eNLC = RCR_fields_::eNLC;
  using eGRS = RCR_fields_::eGRS;
  using LOOP = RCR_fields_::LOOP;
  using DRT = RCR_fields_::DRT;
  using MII_MODE = RCR_fields_::MII_MODE;
  using PROM = RCR_fields_::PROM;
  using BC_REJ = RCR_fields_::BC_REJ;
  using FCE = RCR_fields_::FCE;
  using RGMII_EN = RCR_fields_::RGMII_EN;
  using RMII_MODE = RCR_fields_::RMII_MODE;
  using RMII_10T = RCR_fields_::RMII_10T;
  using PADEN = RCR_fields_::PADEN;
  using PAUFWD = RCR_fields_::PAUFWD;
  using CRCFWD = RCR_fields_::CRCFWD;
  using CFEN = RCR_fields_::CFEN;
  using MAX_FL = RCR_fields_::MAX_FL;
  using NLC = RCR_fields_::NLC;
  using GRS = RCR_fields_::GRS;
};

// Transmit Control Register
struct TCR_fields_ {
  enum class eGTS : std::uint32_t {
    // Disable graceful transmit stop
    eZERO = 0,
    // Enable graceful transmit stop
    eONE = 1,
  };

  enum class eFDEN : std::uint32_t {
    // Disable full-duplex
    eZERO = 0,
    // Enable full-duplex
    eONE = 1,
  };

  enum class eTFC_PAUSE : std::uint32_t {
    // No PAUSE frame transmitted.
    eZERO = 0,
    // The MAC stops transmission of data frames after the current transmission is complete.
    eONE = 1,
  };

  enum class eADDSEL : std::uint32_t {
    // Node MAC address programmed on PADDR1/2 registers.
    eVAL_MAC = 0,
  };

  enum class eADDINS : std::uint32_t {
    // The source MAC address is not modified by the MAC.
    eZERO = 0,
    // The MAC overwrites the source MAC address with the programmed MAC address according to ADDSEL.
    eONE = 1,
  };

  enum class eCRCFWD : std::uint32_t {
    // TxBD[TC] controls whether the frame has a CRC from the application.
    eZERO = 0,
    // The transmitter does not append any CRC to transmitted frames, as it is expecting a frame with CRC from the application.
    eONE = 1,
  };

  // Graceful Transmit Stop
  using GTS = ftl::mmio::Field<1, 0, eGTS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Full-Duplex Enable
  using FDEN = ftl::mmio::Field<1, 2, eFDEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Transmit Frame Control Pause
  using TFC_PAUSE = ftl::mmio::Field<1, 3, eTFC_PAUSE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Receive Frame Control Pause
  using RFC_PAUSE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Source MAC Address Select On Transmit
  using ADDSEL = ftl::mmio::Field<3, 5, eADDSEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Set MAC Address On Transmit
  using ADDINS = ftl::mmio::Field<1, 8, eADDINS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Forward Frame From Application With CRC
  using CRCFWD = ftl::mmio::Field<1, 9, eCRCFWD, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCR_fields_

struct TCR : ftl::mmio::Register<
    0x404200C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCR_fields_::GTS,
    ftl::mmio::Reserved<1, 1>,
    TCR_fields_::FDEN,
    TCR_fields_::TFC_PAUSE,
    TCR_fields_::RFC_PAUSE,
    TCR_fields_::ADDSEL,
    TCR_fields_::ADDINS,
    TCR_fields_::CRCFWD,
    ftl::mmio::Reserved<22, 10>> {
  using eGTS = TCR_fields_::eGTS;
  using eFDEN = TCR_fields_::eFDEN;
  using eTFC_PAUSE = TCR_fields_::eTFC_PAUSE;
  using eADDSEL = TCR_fields_::eADDSEL;
  using eADDINS = TCR_fields_::eADDINS;
  using eCRCFWD = TCR_fields_::eCRCFWD;
  using GTS = TCR_fields_::GTS;
  using FDEN = TCR_fields_::FDEN;
  using TFC_PAUSE = TCR_fields_::TFC_PAUSE;
  using RFC_PAUSE = TCR_fields_::RFC_PAUSE;
  using ADDSEL = TCR_fields_::ADDSEL;
  using ADDINS = TCR_fields_::ADDINS;
  using CRCFWD = TCR_fields_::CRCFWD;
};

// Physical Address Lower Register
struct PALR_fields_ {
  // Pause Address
  using PADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PALR_fields_

struct PALR : ftl::mmio::Register<
    0x404200E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PALR_fields_::PADDR1> {
  using PADDR1 = PALR_fields_::PADDR1;
};

// Physical Address Upper Register
struct PAUR_fields_ {
  // Type Field In PAUSE Frames
  using TYPE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used for exact match, and the source address field in PAUSE frames
  using PADDR2 = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PAUR_fields_

struct PAUR : ftl::mmio::Register<
    0x404200E8u,
    std::uint32_t,
    0x00008808u,
    ftl::mmio::RW,
    PAUR_fields_::TYPE,
    PAUR_fields_::PADDR2> {
  using TYPE = PAUR_fields_::TYPE;
  using PADDR2 = PAUR_fields_::PADDR2;
};

// Opcode/Pause Duration Register
struct OPD_fields_ {
  // Pause Duration
  using PAUSE_DUR = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Opcode Field In PAUSE Frames
  using OPCODE = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct OPD_fields_

struct OPD : ftl::mmio::Register<
    0x404200ECu,
    std::uint32_t,
    0x00010000u,
    ftl::mmio::RW,
    OPD_fields_::PAUSE_DUR,
    OPD_fields_::OPCODE> {
  using PAUSE_DUR = OPD_fields_::PAUSE_DUR;
  using OPCODE = OPD_fields_::OPCODE;
};

// Transmit Interrupt Coalescing Register
struct TXIC_fields_ {
  enum class eICCS : std::uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };

  enum class eICEN : std::uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };

  // Interrupt coalescing timer threshold
  using ICTT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt coalescing frame count threshold
  using ICFT = ftl::mmio::Field<8, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Coalescing Timer Clock Source Select
  using ICCS = ftl::mmio::Field<1, 30, eICCS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Coalescing Enable
  using ICEN = ftl::mmio::Field<1, 31, eICEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TXIC_fields_

template<std::uint32_t Index>
struct TXIC : ftl::mmio::Register<
    0x404200F0u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TXIC_fields_::ICTT,
    ftl::mmio::Reserved<4, 16>,
    TXIC_fields_::ICFT,
    ftl::mmio::Reserved<2, 28>,
    TXIC_fields_::ICCS,
    TXIC_fields_::ICEN> {
  static_assert(Index < 3u, "TXIC: Index out of range");
  using eICCS = TXIC_fields_::eICCS;
  using eICEN = TXIC_fields_::eICEN;
  using ICTT = TXIC_fields_::ICTT;
  using ICFT = TXIC_fields_::ICFT;
  using ICCS = TXIC_fields_::ICCS;
  using ICEN = TXIC_fields_::ICEN;
};

// Receive Interrupt Coalescing Register
struct RXIC_fields_ {
  enum class eICCS : std::uint32_t {
    // Use MII/GMII TX clocks.
    eZERO = 0,
    // Use ENET system clock.
    eONE = 1,
  };

  enum class eICEN : std::uint32_t {
    // Disable Interrupt coalescing.
    eZERO = 0,
    // Enable Interrupt coalescing.
    eONE = 1,
  };

  // Interrupt coalescing timer threshold
  using ICTT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt coalescing frame count threshold
  using ICFT = ftl::mmio::Field<8, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Coalescing Timer Clock Source Select
  using ICCS = ftl::mmio::Field<1, 30, eICCS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Coalescing Enable
  using ICEN = ftl::mmio::Field<1, 31, eICEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RXIC_fields_

template<std::uint32_t Index>
struct RXIC : ftl::mmio::Register<
    0x40420100u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RXIC_fields_::ICTT,
    ftl::mmio::Reserved<4, 16>,
    RXIC_fields_::ICFT,
    ftl::mmio::Reserved<2, 28>,
    RXIC_fields_::ICCS,
    RXIC_fields_::ICEN> {
  static_assert(Index < 3u, "RXIC: Index out of range");
  using eICCS = RXIC_fields_::eICCS;
  using eICEN = RXIC_fields_::eICEN;
  using ICTT = RXIC_fields_::ICTT;
  using ICFT = RXIC_fields_::ICFT;
  using ICCS = RXIC_fields_::ICCS;
  using ICEN = RXIC_fields_::ICEN;
};

// Descriptor Individual Upper Address Register
struct IAUR_fields_ {
  // Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
  using IADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct IAUR_fields_

struct IAUR : ftl::mmio::Register<
    0x40420118u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IAUR_fields_::IADDR1> {
  using IADDR1 = IAUR_fields_::IADDR1;
};

// Descriptor Individual Lower Address Register
struct IALR_fields_ {
  // Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
  using IADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct IALR_fields_

struct IALR : ftl::mmio::Register<
    0x4042011Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IALR_fields_::IADDR2> {
  using IADDR2 = IALR_fields_::IADDR2;
};

// Descriptor Group Upper Address Register
struct GAUR_fields_ {
  // Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
  using GADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GAUR_fields_

struct GAUR : ftl::mmio::Register<
    0x40420120u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GAUR_fields_::GADDR1> {
  using GADDR1 = GAUR_fields_::GADDR1;
};

// Descriptor Group Lower Address Register
struct GALR_fields_ {
  // Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
  using GADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GALR_fields_

struct GALR : ftl::mmio::Register<
    0x40420124u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GALR_fields_::GADDR2> {
  using GADDR2 = GALR_fields_::GADDR2;
};

// Transmit FIFO Watermark Register
struct TFWR_fields_ {
  enum class eTFWR : std::uint32_t {
    // 64 bytes written.
    eVAL64_0 = 0,
    // 64 bytes written.
    eVAL64_1 = 1,
    // 128 bytes written.
    eVAL128 = 2,
    // 192 bytes written.
    eVAL192 = 3,
    // 4032 bytes written.
    eVAL4032 = 63,
  };

  enum class eSTRFWD : std::uint32_t {
    // Reset. The transmission start threshold is programmed in TFWR[TFWR].
    eZERO = 0,
    // Enabled.
    eONE = 1,
  };

  // Transmit FIFO Write
  using TFWR = ftl::mmio::Field<6, 0, eTFWR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Store And Forward Enable
  using STRFWD = ftl::mmio::Field<1, 8, eSTRFWD, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TFWR_fields_

struct TFWR : ftl::mmio::Register<
    0x40420144u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TFWR_fields_::TFWR,
    ftl::mmio::Reserved<2, 6>,
    TFWR_fields_::STRFWD,
    ftl::mmio::Reserved<23, 9>> {
  using eTFWR = TFWR_fields_::eTFWR;
  using eSTRFWD = TFWR_fields_::eSTRFWD;
  using value_ = TFWR_fields_::TFWR;
  using STRFWD = TFWR_fields_::STRFWD;
};

// Receive Descriptor Ring 1 Start Register
struct RDSR1_fields_ {
  // Pointer to the beginning of the receive buffer descriptor queue 1.
  using R_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDSR1_fields_

struct RDSR1 : ftl::mmio::Register<
    0x40420160u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    RDSR1_fields_::R_DES_START> {
  using R_DES_START = RDSR1_fields_::R_DES_START;
};

// Transmit Buffer Descriptor Ring 1 Start Register
struct TDSR1_fields_ {
  // Pointer to the beginning of transmit buffer descriptor queue 1.
  using X_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TDSR1_fields_

struct TDSR1 : ftl::mmio::Register<
    0x40420164u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    TDSR1_fields_::X_DES_START> {
  using X_DES_START = TDSR1_fields_::X_DES_START;
};

// Maximum Receive Buffer Size Register - Ring 1
struct MRBR1_fields_ {
  // Receive buffer size (in bytes)
  using R_BUF_SIZE = ftl::mmio::Field<7, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MRBR1_fields_

struct MRBR1 : ftl::mmio::Register<
    0x40420168u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    MRBR1_fields_::R_BUF_SIZE,
    ftl::mmio::Reserved<21, 11>> {
  using R_BUF_SIZE = MRBR1_fields_::R_BUF_SIZE;
};

// Receive Descriptor Ring 2 Start Register
struct RDSR2_fields_ {
  // Pointer to the beginning of receive buffer descriptor queue 2.
  using R_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDSR2_fields_

struct RDSR2 : ftl::mmio::Register<
    0x4042016Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    RDSR2_fields_::R_DES_START> {
  using R_DES_START = RDSR2_fields_::R_DES_START;
};

// Transmit Buffer Descriptor Ring 2 Start Register
struct TDSR2_fields_ {
  // Pointer to the beginning of transmit buffer descriptor queue 2.
  using X_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TDSR2_fields_

struct TDSR2 : ftl::mmio::Register<
    0x40420170u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    TDSR2_fields_::X_DES_START> {
  using X_DES_START = TDSR2_fields_::X_DES_START;
};

// Maximum Receive Buffer Size Register - Ring 2
struct MRBR2_fields_ {
  // Receive buffer size (in bytes)
  using R_BUF_SIZE = ftl::mmio::Field<7, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MRBR2_fields_

struct MRBR2 : ftl::mmio::Register<
    0x40420174u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    MRBR2_fields_::R_BUF_SIZE,
    ftl::mmio::Reserved<21, 11>> {
  using R_BUF_SIZE = MRBR2_fields_::R_BUF_SIZE;
};

// Receive Descriptor Ring 0 Start Register
struct RDSR_fields_ {
  // Pointer to the beginning of the receive buffer descriptor queue. 0
  using R_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDSR_fields_

struct RDSR : ftl::mmio::Register<
    0x40420180u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    RDSR_fields_::R_DES_START> {
  using R_DES_START = RDSR_fields_::R_DES_START;
};

// Transmit Buffer Descriptor Ring 0 Start Register
struct TDSR_fields_ {
  // Pointer to the beginning of the transmit buffer descriptor queue.
  using X_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TDSR_fields_

struct TDSR : ftl::mmio::Register<
    0x40420184u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    TDSR_fields_::X_DES_START> {
  using X_DES_START = TDSR_fields_::X_DES_START;
};

// Maximum Receive Buffer Size Register - Ring 0
struct MRBR_fields_ {
  // Receive buffer size in bytes
  using R_BUF_SIZE = ftl::mmio::Field<7, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MRBR_fields_

struct MRBR : ftl::mmio::Register<
    0x40420188u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    MRBR_fields_::R_BUF_SIZE,
    ftl::mmio::Reserved<21, 11>> {
  using R_BUF_SIZE = MRBR_fields_::R_BUF_SIZE;
};

// Receive FIFO Section Full Threshold
struct RSFL_fields_ {
  // Value Of Receive FIFO Section Full Threshold
  using RX_SECTION_FULL = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RSFL_fields_

struct RSFL : ftl::mmio::Register<
    0x40420190u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RSFL_fields_::RX_SECTION_FULL,
    ftl::mmio::Reserved<22, 10>> {
  using RX_SECTION_FULL = RSFL_fields_::RX_SECTION_FULL;
};

// Receive FIFO Section Empty Threshold
struct RSEM_fields_ {
  // Value Of The Receive FIFO Section Empty Threshold
  using RX_SECTION_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RX Status FIFO Section Empty Threshold
  using STAT_SECTION_EMPTY = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RSEM_fields_

struct RSEM : ftl::mmio::Register<
    0x40420194u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RSEM_fields_::RX_SECTION_EMPTY,
    ftl::mmio::Reserved<6, 10>,
    RSEM_fields_::STAT_SECTION_EMPTY,
    ftl::mmio::Reserved<11, 21>> {
  using RX_SECTION_EMPTY = RSEM_fields_::RX_SECTION_EMPTY;
  using STAT_SECTION_EMPTY = RSEM_fields_::STAT_SECTION_EMPTY;
};

// Receive FIFO Almost Empty Threshold
struct RAEM_fields_ {
  // Value Of The Receive FIFO Almost Empty Threshold
  using RX_ALMOST_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RAEM_fields_

struct RAEM : ftl::mmio::Register<
    0x40420198u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    RAEM_fields_::RX_ALMOST_EMPTY,
    ftl::mmio::Reserved<22, 10>> {
  using RX_ALMOST_EMPTY = RAEM_fields_::RX_ALMOST_EMPTY;
};

// Receive FIFO Almost Full Threshold
struct RAFL_fields_ {
  // Value Of The Receive FIFO Almost Full Threshold
  using RX_ALMOST_FULL = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RAFL_fields_

struct RAFL : ftl::mmio::Register<
    0x4042019Cu,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    RAFL_fields_::RX_ALMOST_FULL,
    ftl::mmio::Reserved<22, 10>> {
  using RX_ALMOST_FULL = RAFL_fields_::RX_ALMOST_FULL;
};

// Transmit FIFO Section Empty Threshold
struct TSEM_fields_ {
  // Value Of The Transmit FIFO Section Empty Threshold
  using TX_SECTION_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TSEM_fields_

struct TSEM : ftl::mmio::Register<
    0x404201A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TSEM_fields_::TX_SECTION_EMPTY,
    ftl::mmio::Reserved<22, 10>> {
  using TX_SECTION_EMPTY = TSEM_fields_::TX_SECTION_EMPTY;
};

// Transmit FIFO Almost Empty Threshold
struct TAEM_fields_ {
  // Value of Transmit FIFO Almost Empty Threshold
  using TX_ALMOST_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TAEM_fields_

struct TAEM : ftl::mmio::Register<
    0x404201A4u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    TAEM_fields_::TX_ALMOST_EMPTY,
    ftl::mmio::Reserved<22, 10>> {
  using TX_ALMOST_EMPTY = TAEM_fields_::TX_ALMOST_EMPTY;
};

// Transmit FIFO Almost Full Threshold
struct TAFL_fields_ {
  // Value Of The Transmit FIFO Almost Full Threshold
  using TX_ALMOST_FULL = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TAFL_fields_

struct TAFL : ftl::mmio::Register<
    0x404201A8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    TAFL_fields_::TX_ALMOST_FULL,
    ftl::mmio::Reserved<22, 10>> {
  using TX_ALMOST_FULL = TAFL_fields_::TX_ALMOST_FULL;
};

// Transmit Inter-Packet Gap
struct TIPG_fields_ {
  // Transmit Inter-Packet Gap
  using IPG = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TIPG_fields_

struct TIPG : ftl::mmio::Register<
    0x404201ACu,
    std::uint32_t,
    0x0000000Cu,
    ftl::mmio::RW,
    TIPG_fields_::IPG,
    ftl::mmio::Reserved<27, 5>> {
  using IPG = TIPG_fields_::IPG;
};

// Frame Truncation Length
struct FTRL_fields_ {
  // Frame Truncation Length
  using TRUNC_FL = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct FTRL_fields_

struct FTRL : ftl::mmio::Register<
    0x404201B0u,
    std::uint32_t,
    0x000007FFu,
    ftl::mmio::RW,
    FTRL_fields_::TRUNC_FL,
    ftl::mmio::Reserved<18, 14>> {
  using TRUNC_FL = FTRL_fields_::TRUNC_FL;
};

// Transmit Accelerator Function Configuration
struct TACC_fields_ {
  enum class eSHIFT16 : std::uint32_t {
    // Disabled.
    eZERO = 0,
    // Indicates to the transmit data FIFO that the written frames contain two additional octets before the frame data. This means the actual frame begins at bit 16 of the first word written into the FIFO. This function allows putting the frame payload on a 32-bit boundary in memory, as the 14-byte Ethernet header is extended to a 16-byte header.
    eONE = 1,
  };

  enum class eIPCHK : std::uint32_t {
    // Checksum is not inserted.
    eZERO = 0,
    // If an IP frame is transmitted, the checksum is inserted automatically. The IP header checksum field must be cleared. If a non-IP frame is transmitted the frame is not modified.
    eONE = 1,
  };

  enum class ePROCHK : std::uint32_t {
    // Checksum not inserted.
    eZERO = 0,
    // If an IP frame with a known protocol is transmitted, the checksum is inserted automatically into the frame. The checksum field must be cleared. The other frames are not modified.
    eONE = 1,
  };

  // TX FIFO Shift-16
  using SHIFT16 = ftl::mmio::Field<1, 0, eSHIFT16, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables insertion of IP header checksum.
  using IPCHK = ftl::mmio::Field<1, 3, eIPCHK, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables insertion of protocol checksum.
  using PROCHK = ftl::mmio::Field<1, 4, ePROCHK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TACC_fields_

struct TACC : ftl::mmio::Register<
    0x404201C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TACC_fields_::SHIFT16,
    ftl::mmio::Reserved<2, 1>,
    TACC_fields_::IPCHK,
    TACC_fields_::PROCHK,
    ftl::mmio::Reserved<27, 5>> {
  using eSHIFT16 = TACC_fields_::eSHIFT16;
  using eIPCHK = TACC_fields_::eIPCHK;
  using ePROCHK = TACC_fields_::ePROCHK;
  using SHIFT16 = TACC_fields_::SHIFT16;
  using IPCHK = TACC_fields_::IPCHK;
  using PROCHK = TACC_fields_::PROCHK;
};

// Receive Accelerator Function Configuration
struct RACC_fields_ {
  enum class ePADREM : std::uint32_t {
    // Padding not removed.
    eZERO = 0,
    // Any bytes following the IP payload section of the frame are removed from the frame.
    eONE = 1,
  };

  enum class eIPDIS : std::uint32_t {
    // Frames with wrong IPv4 header checksum are not discarded.
    eZERO = 0,
    // If an IPv4 frame is received with a mismatching header checksum, the frame is discarded. IPv6 has no header checksum and is not affected by this setting. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
    eONE = 1,
  };

  enum class ePRODIS : std::uint32_t {
    // Frames with wrong checksum are not discarded.
    eZERO = 0,
    // If a TCP/IP, UDP/IP, or ICMP/IP frame is received that has a wrong TCP, UDP, or ICMP checksum, the frame is discarded. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
    eONE = 1,
  };

  enum class eLINEDIS : std::uint32_t {
    // Frames with errors are not discarded.
    eZERO = 0,
    // Any frame received with a CRC, length, or PHY error is automatically discarded and not forwarded to the user application interface.
    eONE = 1,
  };

  enum class eSHIFT16 : std::uint32_t {
    // Disabled.
    eZERO = 0,
    // Instructs the MAC to write two additional bytes in front of each frame received into the RX FIFO.
    eONE = 1,
  };

  // Enable Padding Removal For Short IP Frames
  using PADREM = ftl::mmio::Field<1, 0, ePADREM, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Discard Of Frames With Wrong IPv4 Header Checksum
  using IPDIS = ftl::mmio::Field<1, 1, eIPDIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Discard Of Frames With Wrong Protocol Checksum
  using PRODIS = ftl::mmio::Field<1, 2, ePRODIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Discard Of Frames With MAC Layer Errors
  using LINEDIS = ftl::mmio::Field<1, 6, eLINEDIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // RX FIFO Shift-16
  using SHIFT16 = ftl::mmio::Field<1, 7, eSHIFT16, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RACC_fields_

struct RACC : ftl::mmio::Register<
    0x404201C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RACC_fields_::PADREM,
    RACC_fields_::IPDIS,
    RACC_fields_::PRODIS,
    ftl::mmio::Reserved<3, 3>,
    RACC_fields_::LINEDIS,
    RACC_fields_::SHIFT16,
    ftl::mmio::Reserved<24, 8>> {
  using ePADREM = RACC_fields_::ePADREM;
  using eIPDIS = RACC_fields_::eIPDIS;
  using ePRODIS = RACC_fields_::ePRODIS;
  using eLINEDIS = RACC_fields_::eLINEDIS;
  using eSHIFT16 = RACC_fields_::eSHIFT16;
  using PADREM = RACC_fields_::PADREM;
  using IPDIS = RACC_fields_::IPDIS;
  using PRODIS = RACC_fields_::PRODIS;
  using LINEDIS = RACC_fields_::LINEDIS;
  using SHIFT16 = RACC_fields_::SHIFT16;
};

// Receive Classification Match Register for Class n
struct RCMR_fields_ {
  enum class eMATCHEN : std::uint32_t {
    // Disabled (default): no compares will occur and the classification indicator for this class will never assert.
    eZERO = 0,
    // The register contents are valid and a comparison with all compare values is done when a VLAN frame is received.
    eONE = 1,
  };

  // Compare 0
  using CMP0 = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Compare 1
  using CMP1 = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Compare 2
  using CMP2 = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Compare 3
  using CMP3 = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Match Enable
  using MATCHEN = ftl::mmio::Field<1, 16, eMATCHEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RCMR_fields_

template<std::uint32_t Index>
struct RCMR : ftl::mmio::Register<
    0x404201C8u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RCMR_fields_::CMP0,
    ftl::mmio::Reserved<1, 3>,
    RCMR_fields_::CMP1,
    ftl::mmio::Reserved<1, 7>,
    RCMR_fields_::CMP2,
    ftl::mmio::Reserved<1, 11>,
    RCMR_fields_::CMP3,
    ftl::mmio::Reserved<1, 15>,
    RCMR_fields_::MATCHEN,
    ftl::mmio::Reserved<15, 17>> {
  static_assert(Index < 2u, "RCMR: Index out of range");
  using eMATCHEN = RCMR_fields_::eMATCHEN;
  using CMP0 = RCMR_fields_::CMP0;
  using CMP1 = RCMR_fields_::CMP1;
  using CMP2 = RCMR_fields_::CMP2;
  using CMP3 = RCMR_fields_::CMP3;
  using MATCHEN = RCMR_fields_::MATCHEN;
};

// DMA Class Based Configuration
struct DMACFG_fields_ {
  enum class eDMA_CLASS_EN : std::uint32_t {
    // The DMA controller's channel for the class is not used. Disabling the DMA controller of a class also requires disabling the class match comparator for the class (see registers RCMRn). When class 1 and class 2 queues are disabled then their frames will be placed in queue 0.
    eZERO = 0,
    // Enable the DMA controller to support the corresponding descriptor ring for this class of traffic.
    eONE = 1,
  };

  enum class eCALC_NOIPG : std::uint32_t {
    // The traffic shaper function should consider 12 octets of IPG in addition to the frame data transferred for a frame when doing bandwidth calculations. This is the default.
    eZERO = 0,
    // Addition of 12 bytes for the IPG should be omitted when calculating the bandwidth (for traffic shaping, when writing a frame into the transmit FIFO, the shaper will usually consider 12 bytes of IPG for every frame as part of the bandwidth allocated by the frame. This addition can be suppressed, meaning short frames will become more bandwidth than large frames due to the relation of data to IPG overhead).
    eONE = 1,
  };

  // Idle slope
  using IDLE_SLOPE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // DMA class enable
  using DMA_CLASS_EN = ftl::mmio::Field<1, 16, eDMA_CLASS_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Calculate no IPG
  using CALC_NOIPG = ftl::mmio::Field<1, 17, eCALC_NOIPG, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DMACFG_fields_

template<std::uint32_t Index>
struct DMACFG : ftl::mmio::Register<
    0x404201D8u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DMACFG_fields_::IDLE_SLOPE,
    DMACFG_fields_::DMA_CLASS_EN,
    DMACFG_fields_::CALC_NOIPG,
    ftl::mmio::Reserved<14, 18>> {
  static_assert(Index < 2u, "DMACFG: Index out of range");
  using eDMA_CLASS_EN = DMACFG_fields_::eDMA_CLASS_EN;
  using eCALC_NOIPG = DMACFG_fields_::eCALC_NOIPG;
  using IDLE_SLOPE = DMACFG_fields_::IDLE_SLOPE;
  using DMA_CLASS_EN = DMACFG_fields_::DMA_CLASS_EN;
  using CALC_NOIPG = DMACFG_fields_::CALC_NOIPG;
};

// Receive Descriptor Active Register - Ring 1
struct RDAR1_fields_ {
  // Receive Descriptor Active
  using RDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDAR1_fields_

struct RDAR1 : ftl::mmio::Register<
    0x404201E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    RDAR1_fields_::RDAR,
    ftl::mmio::Reserved<7, 25>> {
  using RDAR = RDAR1_fields_::RDAR;
};

// Transmit Descriptor Active Register - Ring 1
struct TDAR1_fields_ {
  // Transmit Descriptor Active
  using TDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TDAR1_fields_

struct TDAR1 : ftl::mmio::Register<
    0x404201E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    TDAR1_fields_::TDAR,
    ftl::mmio::Reserved<7, 25>> {
  using TDAR = TDAR1_fields_::TDAR;
};

// Receive Descriptor Active Register - Ring 2
struct RDAR2_fields_ {
  // Receive Descriptor Active
  using RDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDAR2_fields_

struct RDAR2 : ftl::mmio::Register<
    0x404201E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    RDAR2_fields_::RDAR,
    ftl::mmio::Reserved<7, 25>> {
  using RDAR = RDAR2_fields_::RDAR;
};

// Transmit Descriptor Active Register - Ring 2
struct TDAR2_fields_ {
  // Transmit Descriptor Active
  using TDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TDAR2_fields_

struct TDAR2 : ftl::mmio::Register<
    0x404201ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    TDAR2_fields_::TDAR,
    ftl::mmio::Reserved<7, 25>> {
  using TDAR = TDAR2_fields_::TDAR;
};

// QOS Scheme
struct QOS_fields_ {
  enum class eTX_SCHEME : std::uint32_t {
    // Credit-based scheme
    eCREDIT = 0,
    // Round-robin scheme
    eRR = 1,
  };

  enum class eRX_FLUSH0 : std::uint32_t {
    // Disable
    eZERO = 0,
    // Enable
    eONE = 1,
  };

  enum class eRX_FLUSH1 : std::uint32_t {
    // Disable
    eZERO = 0,
    // Enable
    eONE = 1,
  };

  enum class eRX_FLUSH2 : std::uint32_t {
    // Disable
    eZERO = 0,
    // Enable
    eONE = 1,
  };

  // TX scheme configuration
  using TX_SCHEME = ftl::mmio::Field<3, 0, eTX_SCHEME, ftl::mmio::RW, ftl::mmio::Normal>;
  // RX Flush Ring 0
  using RX_FLUSH0 = ftl::mmio::Field<1, 3, eRX_FLUSH0, ftl::mmio::RW, ftl::mmio::Normal>;
  // RX Flush Ring 1
  using RX_FLUSH1 = ftl::mmio::Field<1, 4, eRX_FLUSH1, ftl::mmio::RW, ftl::mmio::Normal>;
  // RX Flush Ring 2
  using RX_FLUSH2 = ftl::mmio::Field<1, 5, eRX_FLUSH2, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct QOS_fields_

struct QOS : ftl::mmio::Register<
    0x404201F0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QOS_fields_::TX_SCHEME,
    QOS_fields_::RX_FLUSH0,
    QOS_fields_::RX_FLUSH1,
    QOS_fields_::RX_FLUSH2,
    ftl::mmio::Reserved<26, 6>> {
  using eTX_SCHEME = QOS_fields_::eTX_SCHEME;
  using eRX_FLUSH0 = QOS_fields_::eRX_FLUSH0;
  using eRX_FLUSH1 = QOS_fields_::eRX_FLUSH1;
  using eRX_FLUSH2 = QOS_fields_::eRX_FLUSH2;
  using TX_SCHEME = QOS_fields_::TX_SCHEME;
  using RX_FLUSH0 = QOS_fields_::RX_FLUSH0;
  using RX_FLUSH1 = QOS_fields_::RX_FLUSH1;
  using RX_FLUSH2 = QOS_fields_::RX_FLUSH2;
};

// Tx Packet Count Statistic Register
struct RMON_T_PACKETS_fields_ {
  // Packet count
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_PACKETS_fields_

struct RMON_T_PACKETS : ftl::mmio::Register<
    0x40420204u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_PACKETS_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_PACKETS_fields_::TXPKTS;
};

// Tx Broadcast Packets Statistic Register
struct RMON_T_BC_PKT_fields_ {
  // Number of broadcast packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_BC_PKT_fields_

struct RMON_T_BC_PKT : ftl::mmio::Register<
    0x40420208u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_BC_PKT_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_BC_PKT_fields_::TXPKTS;
};

// Tx Multicast Packets Statistic Register
struct RMON_T_MC_PKT_fields_ {
  // Number of multicast packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_MC_PKT_fields_

struct RMON_T_MC_PKT : ftl::mmio::Register<
    0x4042020Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_MC_PKT_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_MC_PKT_fields_::TXPKTS;
};

// Tx Packets with CRC/Align Error Statistic Register
struct RMON_T_CRC_ALIGN_fields_ {
  // Number of packets with CRC/align error
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_CRC_ALIGN_fields_

struct RMON_T_CRC_ALIGN : ftl::mmio::Register<
    0x40420210u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_CRC_ALIGN_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_CRC_ALIGN_fields_::TXPKTS;
};

// Tx Packets Less Than Bytes and Good CRC Statistic Register
struct RMON_T_UNDERSIZE_fields_ {
  // Number of transmit packets less than 64 bytes with good CRC
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_UNDERSIZE_fields_

struct RMON_T_UNDERSIZE : ftl::mmio::Register<
    0x40420214u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_UNDERSIZE_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_UNDERSIZE_fields_::TXPKTS;
};

// Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
struct RMON_T_OVERSIZE_fields_ {
  // Number of transmit packets greater than MAX_FL bytes with good CRC
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_OVERSIZE_fields_

struct RMON_T_OVERSIZE : ftl::mmio::Register<
    0x40420218u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_OVERSIZE_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_OVERSIZE_fields_::TXPKTS;
};

// Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
struct RMON_T_FRAG_fields_ {
  // Number of packets less than 64 bytes with bad CRC
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_FRAG_fields_

struct RMON_T_FRAG : ftl::mmio::Register<
    0x4042021Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_FRAG_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_FRAG_fields_::TXPKTS;
};

// Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
struct RMON_T_JAB_fields_ {
  // Number of transmit packets greater than MAX_FL bytes and bad CRC
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_JAB_fields_

struct RMON_T_JAB : ftl::mmio::Register<
    0x40420220u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_JAB_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_JAB_fields_::TXPKTS;
};

// Tx Collision Count Statistic Register
struct RMON_T_COL_fields_ {
  // Number of transmit collisions
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_COL_fields_

struct RMON_T_COL : ftl::mmio::Register<
    0x40420224u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_COL_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_COL_fields_::TXPKTS;
};

// Tx 64-Byte Packets Statistic Register
struct RMON_T_P64_fields_ {
  // Number of 64-byte transmit packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_P64_fields_

struct RMON_T_P64 : ftl::mmio::Register<
    0x40420228u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_P64_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_P64_fields_::TXPKTS;
};

// Tx 65- to 127-byte Packets Statistic Register
struct RMON_T_P65TO127_fields_ {
  // Number of 65- to 127-byte transmit packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_P65TO127_fields_

struct RMON_T_P65TO127 : ftl::mmio::Register<
    0x4042022Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_P65TO127_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_P65TO127_fields_::TXPKTS;
};

// Tx 128- to 255-byte Packets Statistic Register
struct RMON_T_P128TO255_fields_ {
  // Number of 128- to 255-byte transmit packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_P128TO255_fields_

struct RMON_T_P128TO255 : ftl::mmio::Register<
    0x40420230u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_P128TO255_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_P128TO255_fields_::TXPKTS;
};

// Tx 256- to 511-byte Packets Statistic Register
struct RMON_T_P256TO511_fields_ {
  // Number of 256- to 511-byte transmit packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_P256TO511_fields_

struct RMON_T_P256TO511 : ftl::mmio::Register<
    0x40420234u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_P256TO511_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_P256TO511_fields_::TXPKTS;
};

// Tx 512- to 1023-byte Packets Statistic Register
struct RMON_T_P512TO1023_fields_ {
  // Number of 512- to 1023-byte transmit packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_P512TO1023_fields_

struct RMON_T_P512TO1023 : ftl::mmio::Register<
    0x40420238u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_P512TO1023_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_P512TO1023_fields_::TXPKTS;
};

// Tx 1024- to 2047-byte Packets Statistic Register
struct RMON_T_P1024TO2047_fields_ {
  // Number of 1024- to 2047-byte transmit packets
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_P1024TO2047_fields_

struct RMON_T_P1024TO2047 : ftl::mmio::Register<
    0x4042023Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_P1024TO2047_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_P1024TO2047_fields_::TXPKTS;
};

// Tx Packets Greater Than 2048 Bytes Statistic Register
struct RMON_T_P_GTE2048_fields_ {
  // Number of transmit packets greater than 2048 bytes
  using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_P_GTE2048_fields_

struct RMON_T_P_GTE2048 : ftl::mmio::Register<
    0x40420240u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_P_GTE2048_fields_::TXPKTS,
    ftl::mmio::Reserved<16, 16>> {
  using TXPKTS = RMON_T_P_GTE2048_fields_::TXPKTS;
};

// Tx Octets Statistic Register
struct RMON_T_OCTETS_fields_ {
  // Number of transmit octets
  using TXOCTS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_T_OCTETS_fields_

struct RMON_T_OCTETS : ftl::mmio::Register<
    0x40420244u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_T_OCTETS_fields_::TXOCTS> {
  using TXOCTS = RMON_T_OCTETS_fields_::TXOCTS;
};

// Frames Transmitted OK Statistic Register
struct IEEE_T_FRAME_OK_fields_ {
  // Number of frames transmitted OK
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_FRAME_OK_fields_

struct IEEE_T_FRAME_OK : ftl::mmio::Register<
    0x4042024Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_FRAME_OK_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_FRAME_OK_fields_::COUNT;
};

// Frames Transmitted with Single Collision Statistic Register
struct IEEE_T_1COL_fields_ {
  // Number of frames transmitted with one collision
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_1COL_fields_

struct IEEE_T_1COL : ftl::mmio::Register<
    0x40420250u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_1COL_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_1COL_fields_::COUNT;
};

// Frames Transmitted with Multiple Collisions Statistic Register
struct IEEE_T_MCOL_fields_ {
  // Number of frames transmitted with multiple collisions
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_MCOL_fields_

struct IEEE_T_MCOL : ftl::mmio::Register<
    0x40420254u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_MCOL_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_MCOL_fields_::COUNT;
};

// Frames Transmitted after Deferral Delay Statistic Register
struct IEEE_T_DEF_fields_ {
  // Number of frames transmitted with deferral delay
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_DEF_fields_

struct IEEE_T_DEF : ftl::mmio::Register<
    0x40420258u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_DEF_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_DEF_fields_::COUNT;
};

// Frames Transmitted with Late Collision Statistic Register
struct IEEE_T_LCOL_fields_ {
  // Number of frames transmitted with late collision
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_LCOL_fields_

struct IEEE_T_LCOL : ftl::mmio::Register<
    0x4042025Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_LCOL_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_LCOL_fields_::COUNT;
};

// Frames Transmitted with Excessive Collisions Statistic Register
struct IEEE_T_EXCOL_fields_ {
  // Number of frames transmitted with excessive collisions
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_EXCOL_fields_

struct IEEE_T_EXCOL : ftl::mmio::Register<
    0x40420260u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_EXCOL_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_EXCOL_fields_::COUNT;
};

// Frames Transmitted with Tx FIFO Underrun Statistic Register
struct IEEE_T_MACERR_fields_ {
  // Number of frames transmitted with transmit FIFO underrun
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_MACERR_fields_

struct IEEE_T_MACERR : ftl::mmio::Register<
    0x40420264u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_MACERR_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_MACERR_fields_::COUNT;
};

// Frames Transmitted with Carrier Sense Error Statistic Register
struct IEEE_T_CSERR_fields_ {
  // Number of frames transmitted with carrier sense error
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_CSERR_fields_

struct IEEE_T_CSERR : ftl::mmio::Register<
    0x40420268u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_CSERR_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_CSERR_fields_::COUNT;
};

// Reserved Statistic Register
struct IEEE_T_SQE_fields_ {
  // This read-only field is reserved and always has the value 0
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_SQE_fields_

struct IEEE_T_SQE : ftl::mmio::Register<
    0x4042026Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_SQE_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_SQE_fields_::COUNT;
};

// Flow Control Pause Frames Transmitted Statistic Register
struct IEEE_T_FDXFC_fields_ {
  // Number of flow-control pause frames transmitted
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_FDXFC_fields_

struct IEEE_T_FDXFC : ftl::mmio::Register<
    0x40420270u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_FDXFC_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_T_FDXFC_fields_::COUNT;
};

// Octet Count for Frames Transmitted w/o Error Statistic Register
struct IEEE_T_OCTETS_OK_fields_ {
  // Octet count for frames transmitted without error Counts total octets (includes header and FCS fields).
  using COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_T_OCTETS_OK_fields_

struct IEEE_T_OCTETS_OK : ftl::mmio::Register<
    0x40420274u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_T_OCTETS_OK_fields_::COUNT> {
  using COUNT = IEEE_T_OCTETS_OK_fields_::COUNT;
};

// Rx Packet Count Statistic Register
struct RMON_R_PACKETS_fields_ {
  // Number of packets received
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_PACKETS_fields_

struct RMON_R_PACKETS : ftl::mmio::Register<
    0x40420284u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_PACKETS_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_PACKETS_fields_::COUNT;
};

// Rx Broadcast Packets Statistic Register
struct RMON_R_BC_PKT_fields_ {
  // Number of receive broadcast packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_BC_PKT_fields_

struct RMON_R_BC_PKT : ftl::mmio::Register<
    0x40420288u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_BC_PKT_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_BC_PKT_fields_::COUNT;
};

// Rx Multicast Packets Statistic Register
struct RMON_R_MC_PKT_fields_ {
  // Number of receive multicast packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_MC_PKT_fields_

struct RMON_R_MC_PKT : ftl::mmio::Register<
    0x4042028Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_MC_PKT_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_MC_PKT_fields_::COUNT;
};

// Rx Packets with CRC/Align Error Statistic Register
struct RMON_R_CRC_ALIGN_fields_ {
  // Number of receive packets with CRC or align error
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_CRC_ALIGN_fields_

struct RMON_R_CRC_ALIGN : ftl::mmio::Register<
    0x40420290u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_CRC_ALIGN_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_CRC_ALIGN_fields_::COUNT;
};

// Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
struct RMON_R_UNDERSIZE_fields_ {
  // Number of receive packets with less than 64 bytes and good CRC
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_UNDERSIZE_fields_

struct RMON_R_UNDERSIZE : ftl::mmio::Register<
    0x40420294u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_UNDERSIZE_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_UNDERSIZE_fields_::COUNT;
};

// Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
struct RMON_R_OVERSIZE_fields_ {
  // Number of receive packets greater than MAX_FL and good CRC
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_OVERSIZE_fields_

struct RMON_R_OVERSIZE : ftl::mmio::Register<
    0x40420298u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_OVERSIZE_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_OVERSIZE_fields_::COUNT;
};

// Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
struct RMON_R_FRAG_fields_ {
  // Number of receive packets with less than 64 bytes and bad CRC
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_FRAG_fields_

struct RMON_R_FRAG : ftl::mmio::Register<
    0x4042029Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_FRAG_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_FRAG_fields_::COUNT;
};

// Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
struct RMON_R_JAB_fields_ {
  // Number of receive packets greater than MAX_FL and bad CRC
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_JAB_fields_

struct RMON_R_JAB : ftl::mmio::Register<
    0x404202A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_JAB_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_JAB_fields_::COUNT;
};

// Rx 64-Byte Packets Statistic Register
struct RMON_R_P64_fields_ {
  // Number of 64-byte receive packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_P64_fields_

struct RMON_R_P64 : ftl::mmio::Register<
    0x404202A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_P64_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_P64_fields_::COUNT;
};

// Rx 65- to 127-Byte Packets Statistic Register
struct RMON_R_P65TO127_fields_ {
  // Number of 65- to 127-byte receive packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_P65TO127_fields_

struct RMON_R_P65TO127 : ftl::mmio::Register<
    0x404202ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_P65TO127_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_P65TO127_fields_::COUNT;
};

// Rx 128- to 255-Byte Packets Statistic Register
struct RMON_R_P128TO255_fields_ {
  // Number of 128- to 255-byte receive packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_P128TO255_fields_

struct RMON_R_P128TO255 : ftl::mmio::Register<
    0x404202B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_P128TO255_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_P128TO255_fields_::COUNT;
};

// Rx 256- to 511-Byte Packets Statistic Register
struct RMON_R_P256TO511_fields_ {
  // Number of 256- to 511-byte receive packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_P256TO511_fields_

struct RMON_R_P256TO511 : ftl::mmio::Register<
    0x404202B4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_P256TO511_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_P256TO511_fields_::COUNT;
};

// Rx 512- to 1023-Byte Packets Statistic Register
struct RMON_R_P512TO1023_fields_ {
  // Number of 512- to 1023-byte receive packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_P512TO1023_fields_

struct RMON_R_P512TO1023 : ftl::mmio::Register<
    0x404202B8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_P512TO1023_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_P512TO1023_fields_::COUNT;
};

// Rx 1024- to 2047-Byte Packets Statistic Register
struct RMON_R_P1024TO2047_fields_ {
  // Number of 1024- to 2047-byte receive packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_P1024TO2047_fields_

struct RMON_R_P1024TO2047 : ftl::mmio::Register<
    0x404202BCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_P1024TO2047_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_P1024TO2047_fields_::COUNT;
};

// Rx Packets Greater than 2048 Bytes Statistic Register
struct RMON_R_P_GTE2048_fields_ {
  // Number of greater-than-2048-byte receive packets
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_P_GTE2048_fields_

struct RMON_R_P_GTE2048 : ftl::mmio::Register<
    0x404202C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_P_GTE2048_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = RMON_R_P_GTE2048_fields_::COUNT;
};

// Rx Octets Statistic Register
struct RMON_R_OCTETS_fields_ {
  // Number of receive octets
  using COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RMON_R_OCTETS_fields_

struct RMON_R_OCTETS : ftl::mmio::Register<
    0x404202C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RMON_R_OCTETS_fields_::COUNT> {
  using COUNT = RMON_R_OCTETS_fields_::COUNT;
};

// Frames not Counted Correctly Statistic Register
struct IEEE_R_DROP_fields_ {
  // Frame count
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_R_DROP_fields_

struct IEEE_R_DROP : ftl::mmio::Register<
    0x404202C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_R_DROP_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_R_DROP_fields_::COUNT;
};

// Frames Received OK Statistic Register
struct IEEE_R_FRAME_OK_fields_ {
  // Number of frames received OK
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_R_FRAME_OK_fields_

struct IEEE_R_FRAME_OK : ftl::mmio::Register<
    0x404202CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_R_FRAME_OK_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_R_FRAME_OK_fields_::COUNT;
};

// Frames Received with CRC Error Statistic Register
struct IEEE_R_CRC_fields_ {
  // Number of frames received with CRC error
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_R_CRC_fields_

struct IEEE_R_CRC : ftl::mmio::Register<
    0x404202D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_R_CRC_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_R_CRC_fields_::COUNT;
};

// Frames Received with Alignment Error Statistic Register
struct IEEE_R_ALIGN_fields_ {
  // Number of frames received with alignment error
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_R_ALIGN_fields_

struct IEEE_R_ALIGN : ftl::mmio::Register<
    0x404202D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_R_ALIGN_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_R_ALIGN_fields_::COUNT;
};

// Receive FIFO Overflow Count Statistic Register
struct IEEE_R_MACERR_fields_ {
  // Receive FIFO overflow count
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_R_MACERR_fields_

struct IEEE_R_MACERR : ftl::mmio::Register<
    0x404202D8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_R_MACERR_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_R_MACERR_fields_::COUNT;
};

// Flow Control Pause Frames Received Statistic Register
struct IEEE_R_FDXFC_fields_ {
  // Number of flow-control pause frames received
  using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_R_FDXFC_fields_

struct IEEE_R_FDXFC : ftl::mmio::Register<
    0x404202DCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_R_FDXFC_fields_::COUNT,
    ftl::mmio::Reserved<16, 16>> {
  using COUNT = IEEE_R_FDXFC_fields_::COUNT;
};

// Octet Count for Frames Received without Error Statistic Register
struct IEEE_R_OCTETS_OK_fields_ {
  // Number of octets for frames received without error
  using COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IEEE_R_OCTETS_OK_fields_

struct IEEE_R_OCTETS_OK : ftl::mmio::Register<
    0x404202E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IEEE_R_OCTETS_OK_fields_::COUNT> {
  using COUNT = IEEE_R_OCTETS_OK_fields_::COUNT;
};

// Adjustable Timer Control Register
struct ATCR_fields_ {
  enum class eEN : std::uint32_t {
    // The timer stops at the current value.
    eZERO = 0,
    // The timer starts incrementing.
    eONE = 1,
  };

  enum class eOFFEN : std::uint32_t {
    // Disable.
    eZERO = 0,
    // The timer can be reset to zero when the given offset time is reached (offset event). The field is cleared when the offset event is reached, so no further event occurs until the field is set again. The timer offset value must be set before setting this field.
    eONE = 1,
  };

  enum class eOFFRST : std::uint32_t {
    // The timer is not affected and no action occurs, besides clearing OFFEN, when the offset is reached.
    eZERO = 0,
    // If OFFEN is set, the timer resets to zero when the offset setting is reached. The offset event does not cause a timer interrupt.
    eONE = 1,
  };

  enum class ePEREN : std::uint32_t {
    // Disable.
    eZERO = 0,
    // A period event interrupt can be generated (EIR[TS_TIMER]) and the event signal output is asserted when the timer wraps around according to the periodic setting ATPER. The timer period value must be set before setting this bit. Not all devices contain the event signal output. See the chip configuration details.
    eONE = 1,
  };

  enum class ePINPER : std::uint32_t {
    // Disable.
    eZERO = 0,
    // Enable.
    eONE = 1,
  };

  enum class eCAPTURE : std::uint32_t {
    // No effect.
    eZERO = 0,
    // The current time is captured and can be read from the ATVR register.
    eONE = 1,
  };

  enum class eSLAVE : std::uint32_t {
    // The timer is active and all configuration fields in this register are relevant.
    eZERO = 0,
    // The internal timer is disabled and the externally provided timer value is used. All other fields, except CAPTURE, in this register have no effect. CAPTURE can still be used to capture the current timer value.
    eONE = 1,
  };

  // Enable Timer
  using EN = ftl::mmio::Field<1, 0, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable One-Shot Offset Event
  using OFFEN = ftl::mmio::Field<1, 2, eOFFEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Reset Timer On Offset Event
  using OFFRST = ftl::mmio::Field<1, 3, eOFFRST, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Periodical Event
  using PEREN = ftl::mmio::Field<1, 4, ePEREN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables event signal output external pin frc_evt_period assertion on period event
  using PINPER = ftl::mmio::Field<1, 7, ePINPER, ftl::mmio::RW, ftl::mmio::Normal>;
  // Reset Timer
  using RESTART = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Capture Timer Value
  using CAPTURE = ftl::mmio::Field<1, 11, eCAPTURE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Timer Slave Mode
  using SLAVE = ftl::mmio::Field<1, 13, eSLAVE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ATCR_fields_

struct ATCR : ftl::mmio::Register<
    0x40420400u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ATCR_fields_::EN,
    ftl::mmio::Reserved<1, 1>,
    ATCR_fields_::OFFEN,
    ATCR_fields_::OFFRST,
    ATCR_fields_::PEREN,
    ftl::mmio::Reserved<2, 5>,
    ATCR_fields_::PINPER,
    ftl::mmio::Reserved<1, 8>,
    ATCR_fields_::RESTART,
    ftl::mmio::Reserved<1, 10>,
    ATCR_fields_::CAPTURE,
    ftl::mmio::Reserved<1, 12>,
    ATCR_fields_::SLAVE,
    ftl::mmio::Reserved<18, 14>> {
  using eEN = ATCR_fields_::eEN;
  using eOFFEN = ATCR_fields_::eOFFEN;
  using eOFFRST = ATCR_fields_::eOFFRST;
  using ePEREN = ATCR_fields_::ePEREN;
  using ePINPER = ATCR_fields_::ePINPER;
  using eCAPTURE = ATCR_fields_::eCAPTURE;
  using eSLAVE = ATCR_fields_::eSLAVE;
  using EN = ATCR_fields_::EN;
  using OFFEN = ATCR_fields_::OFFEN;
  using OFFRST = ATCR_fields_::OFFRST;
  using PEREN = ATCR_fields_::PEREN;
  using PINPER = ATCR_fields_::PINPER;
  using RESTART = ATCR_fields_::RESTART;
  using CAPTURE = ATCR_fields_::CAPTURE;
  using SLAVE = ATCR_fields_::SLAVE;
};

// Timer Value Register
struct ATVR_fields_ {
  // A write sets the timer
  using ATIME = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ATVR_fields_

struct ATVR : ftl::mmio::Register<
    0x40420404u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ATVR_fields_::ATIME> {
  using ATIME = ATVR_fields_::ATIME;
};

// Timer Offset Register
struct ATOFF_fields_ {
  // Offset value for one-shot event generation
  using OFFSET = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ATOFF_fields_

struct ATOFF : ftl::mmio::Register<
    0x40420408u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ATOFF_fields_::OFFSET> {
  using OFFSET = ATOFF_fields_::OFFSET;
};

// Timer Period Register
struct ATPER_fields_ {
  // Value for generating periodic events
  using PERIOD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ATPER_fields_

struct ATPER : ftl::mmio::Register<
    0x4042040Cu,
    std::uint32_t,
    0x3B9ACA00u,
    ftl::mmio::RW,
    ATPER_fields_::PERIOD> {
  using PERIOD = ATPER_fields_::PERIOD;
};

// Timer Correction Register
struct ATCOR_fields_ {
  // Correction Counter Wrap-Around Value
  using COR = ftl::mmio::Field<31, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ATCOR_fields_

struct ATCOR : ftl::mmio::Register<
    0x40420410u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ATCOR_fields_::COR,
    ftl::mmio::Reserved<1, 31>> {
  using COR = ATCOR_fields_::COR;
};

// Time-Stamping Clock Period Register
struct ATINC_fields_ {
  // Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
  using INC = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Correction Increment Value
  using INC_CORR = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ATINC_fields_

struct ATINC : ftl::mmio::Register<
    0x40420414u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ATINC_fields_::INC,
    ftl::mmio::Reserved<1, 7>,
    ATINC_fields_::INC_CORR,
    ftl::mmio::Reserved<17, 15>> {
  using INC = ATINC_fields_::INC;
  using INC_CORR = ATINC_fields_::INC_CORR;
};

// Timestamp of Last Transmitted Frame
struct ATSTMP_fields_ {
  // Timestamp of the last frame transmitted by the core that had TxBD[TS] set the ff_tx_ts_frm signal asserted from the user application
  using TIMESTAMP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ATSTMP_fields_

struct ATSTMP : ftl::mmio::Register<
    0x40420418u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ATSTMP_fields_::TIMESTAMP> {
  using TIMESTAMP = ATSTMP_fields_::TIMESTAMP;
};

// Timer Global Status Register
struct TGSR_fields_ {
  enum class eTF0 : std::uint32_t {
    // Timer Flag for Channel 0 is clear
    eZERO = 0,
    // Timer Flag for Channel 0 is set
    eONE = 1,
  };

  enum class eTF1 : std::uint32_t {
    // Timer Flag for Channel 1 is clear
    eZERO = 0,
    // Timer Flag for Channel 1 is set
    eONE = 1,
  };

  enum class eTF2 : std::uint32_t {
    // Timer Flag for Channel 2 is clear
    eZERO = 0,
    // Timer Flag for Channel 2 is set
    eONE = 1,
  };

  enum class eTF3 : std::uint32_t {
    // Timer Flag for Channel 3 is clear
    eZERO = 0,
    // Timer Flag for Channel 3 is set
    eONE = 1,
  };

  // Copy Of Timer Flag For Channel 0
  using TF0 = ftl::mmio::Field<1, 0, eTF0, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Copy Of Timer Flag For Channel 1
  using TF1 = ftl::mmio::Field<1, 1, eTF1, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Copy Of Timer Flag For Channel 2
  using TF2 = ftl::mmio::Field<1, 2, eTF2, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Copy Of Timer Flag For Channel 3
  using TF3 = ftl::mmio::Field<1, 3, eTF3, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct TGSR_fields_

struct TGSR : ftl::mmio::Register<
    0x40420604u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TGSR_fields_::TF0,
    TGSR_fields_::TF1,
    TGSR_fields_::TF2,
    TGSR_fields_::TF3,
    ftl::mmio::Reserved<28, 4>> {
  using eTF0 = TGSR_fields_::eTF0;
  using eTF1 = TGSR_fields_::eTF1;
  using eTF2 = TGSR_fields_::eTF2;
  using eTF3 = TGSR_fields_::eTF3;
  using TF0 = TGSR_fields_::TF0;
  using TF1 = TGSR_fields_::TF1;
  using TF2 = TGSR_fields_::TF2;
  using TF3 = TGSR_fields_::TF3;
};

// Timer Control Status Register
struct TCSR0_fields_ {
  enum class eTDRE : std::uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };

  enum class eTMODE : std::uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15,
  };

  enum class eTIE : std::uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };

  enum class eTF : std::uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };

  // Timer DMA Request Enable
  using TDRE = ftl::mmio::Field<1, 0, eTDRE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Mode
  using TMODE = ftl::mmio::Field<4, 2, eTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Interrupt Enable
  using TIE = ftl::mmio::Field<1, 6, eTIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Flag
  using TF = ftl::mmio::Field<1, 7, eTF, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct TCSR0_fields_

struct TCSR0 : ftl::mmio::Register<
    0x40420608u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCSR0_fields_::TDRE,
    ftl::mmio::Reserved<1, 1>,
    TCSR0_fields_::TMODE,
    TCSR0_fields_::TIE,
    TCSR0_fields_::TF,
    ftl::mmio::Reserved<24, 8>> {
  using eTDRE = TCSR0_fields_::eTDRE;
  using eTMODE = TCSR0_fields_::eTMODE;
  using eTIE = TCSR0_fields_::eTIE;
  using eTF = TCSR0_fields_::eTF;
  using TDRE = TCSR0_fields_::TDRE;
  using TMODE = TCSR0_fields_::TMODE;
  using TIE = TCSR0_fields_::TIE;
  using TF = TCSR0_fields_::TF;
};

// Timer Compare Capture Register
struct TCCR0_fields_ {
  // Timer Capture Compare
  using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCCR0_fields_

struct TCCR0 : ftl::mmio::Register<
    0x4042060Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCCR0_fields_::TCC> {
  using TCC = TCCR0_fields_::TCC;
};

// Timer Control Status Register
struct TCSR1_fields_ {
  enum class eTDRE : std::uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };

  enum class eTMODE : std::uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15,
  };

  enum class eTIE : std::uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };

  enum class eTF : std::uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };

  // Timer DMA Request Enable
  using TDRE = ftl::mmio::Field<1, 0, eTDRE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Mode
  using TMODE = ftl::mmio::Field<4, 2, eTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Interrupt Enable
  using TIE = ftl::mmio::Field<1, 6, eTIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Flag
  using TF = ftl::mmio::Field<1, 7, eTF, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct TCSR1_fields_

struct TCSR1 : ftl::mmio::Register<
    0x40420610u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCSR1_fields_::TDRE,
    ftl::mmio::Reserved<1, 1>,
    TCSR1_fields_::TMODE,
    TCSR1_fields_::TIE,
    TCSR1_fields_::TF,
    ftl::mmio::Reserved<24, 8>> {
  using eTDRE = TCSR1_fields_::eTDRE;
  using eTMODE = TCSR1_fields_::eTMODE;
  using eTIE = TCSR1_fields_::eTIE;
  using eTF = TCSR1_fields_::eTF;
  using TDRE = TCSR1_fields_::TDRE;
  using TMODE = TCSR1_fields_::TMODE;
  using TIE = TCSR1_fields_::TIE;
  using TF = TCSR1_fields_::TF;
};

// Timer Compare Capture Register
struct TCCR1_fields_ {
  // Timer Capture Compare
  using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCCR1_fields_

struct TCCR1 : ftl::mmio::Register<
    0x40420614u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCCR1_fields_::TCC> {
  using TCC = TCCR1_fields_::TCC;
};

// Timer Control Status Register
struct TCSR2_fields_ {
  enum class eTDRE : std::uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };

  enum class eTMODE : std::uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15,
  };

  enum class eTIE : std::uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };

  enum class eTF : std::uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };

  // Timer DMA Request Enable
  using TDRE = ftl::mmio::Field<1, 0, eTDRE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Mode
  using TMODE = ftl::mmio::Field<4, 2, eTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Interrupt Enable
  using TIE = ftl::mmio::Field<1, 6, eTIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Flag
  using TF = ftl::mmio::Field<1, 7, eTF, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct TCSR2_fields_

struct TCSR2 : ftl::mmio::Register<
    0x40420618u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCSR2_fields_::TDRE,
    ftl::mmio::Reserved<1, 1>,
    TCSR2_fields_::TMODE,
    TCSR2_fields_::TIE,
    TCSR2_fields_::TF,
    ftl::mmio::Reserved<24, 8>> {
  using eTDRE = TCSR2_fields_::eTDRE;
  using eTMODE = TCSR2_fields_::eTMODE;
  using eTIE = TCSR2_fields_::eTIE;
  using eTF = TCSR2_fields_::eTF;
  using TDRE = TCSR2_fields_::TDRE;
  using TMODE = TCSR2_fields_::TMODE;
  using TIE = TCSR2_fields_::TIE;
  using TF = TCSR2_fields_::TF;
};

// Timer Compare Capture Register
struct TCCR2_fields_ {
  // Timer Capture Compare
  using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCCR2_fields_

struct TCCR2 : ftl::mmio::Register<
    0x4042061Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCCR2_fields_::TCC> {
  using TCC = TCCR2_fields_::TCC;
};

// Timer Control Status Register
struct TCSR3_fields_ {
  enum class eTDRE : std::uint32_t {
    // DMA request is disabled
    eZERO = 0,
    // DMA request is enabled
    eONE = 1,
  };

  enum class eTMODE : std::uint32_t {
    // Timer Channel is disabled.
    eTMR_DIS = 0,
    // Timer Channel is configured for Input Capture on rising edge.
    eTMR_RE = 1,
    // Timer Channel is configured for Input Capture on falling edge.
    eTMR_FE = 2,
    // Timer Channel is configured for Input Capture on both edges.
    eTMR_BE = 3,
    // Timer Channel is configured for Output Compare - software only.
    eTMR_OUT = 4,
    // Timer Channel is configured for Output Compare - toggle output on compare.
    eTMR_TOGGLE = 5,
    // Timer Channel is configured for Output Compare - clear output on compare.
    eTMR_CLR = 6,
    // Timer Channel is configured for Output Compare - set output on compare.
    eTMR_SET_OUT = 7,
    // Timer Channel is configured for Output Compare - set output on compare, clear output on overflow.
    eTMR_CLR_SET1 = 9,
    // Timer Channel is configured for Output Compare - clear output on compare, set output on overflow.
    eTMR_CLR_SET = 10,
    // Timer Channel is configured for Output Compare - pulse output low on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_LOW = 14,
    // Timer Channel is configured for Output Compare - pulse output high on compare for one 1588-clock cycle.
    eTMR_OUT_CMP_HIGH = 15,
  };

  enum class eTIE : std::uint32_t {
    // Interrupt is disabled
    eZERO = 0,
    // Interrupt is enabled
    eONE = 1,
  };

  enum class eTF : std::uint32_t {
    // Input Capture or Output Compare has not occurred.
    eZERO = 0,
    // Input Capture or Output Compare has occurred.
    eONE = 1,
  };

  // Timer DMA Request Enable
  using TDRE = ftl::mmio::Field<1, 0, eTDRE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Mode
  using TMODE = ftl::mmio::Field<4, 2, eTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Interrupt Enable
  using TIE = ftl::mmio::Field<1, 6, eTIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Timer Flag
  using TF = ftl::mmio::Field<1, 7, eTF, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct TCSR3_fields_

struct TCSR3 : ftl::mmio::Register<
    0x40420620u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCSR3_fields_::TDRE,
    ftl::mmio::Reserved<1, 1>,
    TCSR3_fields_::TMODE,
    TCSR3_fields_::TIE,
    TCSR3_fields_::TF,
    ftl::mmio::Reserved<24, 8>> {
  using eTDRE = TCSR3_fields_::eTDRE;
  using eTMODE = TCSR3_fields_::eTMODE;
  using eTIE = TCSR3_fields_::eTIE;
  using eTF = TCSR3_fields_::eTF;
  using TDRE = TCSR3_fields_::TDRE;
  using TMODE = TCSR3_fields_::TMODE;
  using TIE = TCSR3_fields_::TIE;
  using TF = TCSR3_fields_::TF;
};

// Timer Compare Capture Register
struct TCCR3_fields_ {
  // Timer Capture Compare
  using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCCR3_fields_

struct TCCR3 : ftl::mmio::Register<
    0x40420624u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCCR3_fields_::TCC> {
  using TCC = TCCR3_fields_::TCC;
};

}  // namespace regs::enet_1g