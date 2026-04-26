#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// ENET
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Enet1g {
  // Interrupt Event Register
  struct EirFields {
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
  };  // struct EirFields

  struct EIR : ftl::mmio::Register<
      0x40420004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EirFields::RXB1,
      EirFields::RXF1,
      EirFields::TXB1,
      EirFields::TXF1,
      EirFields::RXB2,
      EirFields::RXF2,
      EirFields::TXB2,
      EirFields::TXF2,
      ftl::mmio::Reserved<4, 8>,
      EirFields::RXFLUSH_0,
      EirFields::RXFLUSH_1,
      EirFields::RXFLUSH_2,
      EirFields::TS_TIMER,
      EirFields::TS_AVAIL,
      EirFields::WAKEUP,
      EirFields::PLR,
      EirFields::UN,
      EirFields::RL,
      EirFields::LC,
      EirFields::EBERR,
      EirFields::MII,
      EirFields::RXB,
      EirFields::RXF,
      EirFields::TXB,
      EirFields::TXF,
      EirFields::GRA,
      EirFields::BABT,
      EirFields::BABR,
      ftl::mmio::Reserved<1, 31>> {
    using RXB1 = EirFields::RXB1;
    using RXF1 = EirFields::RXF1;
    using TXB1 = EirFields::TXB1;
    using TXF1 = EirFields::TXF1;
    using RXB2 = EirFields::RXB2;
    using RXF2 = EirFields::RXF2;
    using TXB2 = EirFields::TXB2;
    using TXF2 = EirFields::TXF2;
    using RXFLUSH_0 = EirFields::RXFLUSH_0;
    using RXFLUSH_1 = EirFields::RXFLUSH_1;
    using RXFLUSH_2 = EirFields::RXFLUSH_2;
    using TS_TIMER = EirFields::TS_TIMER;
    using TS_AVAIL = EirFields::TS_AVAIL;
    using WAKEUP = EirFields::WAKEUP;
    using PLR = EirFields::PLR;
    using UN = EirFields::UN;
    using RL = EirFields::RL;
    using LC = EirFields::LC;
    using EBERR = EirFields::EBERR;
    using MII = EirFields::MII;
    using RXB = EirFields::RXB;
    using RXF = EirFields::RXF;
    using TXB = EirFields::TXB;
    using TXF = EirFields::TXF;
    using GRA = EirFields::GRA;
    using BABT = EirFields::BABT;
    using BABR = EirFields::BABR;
  };

  // Interrupt Mask Register
  struct EimrFields {
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
  };  // struct EimrFields

  struct EIMR : ftl::mmio::Register<
      0x40420008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EimrFields::RXB1,
      EimrFields::RXF1,
      EimrFields::TXB1,
      EimrFields::TXF1,
      EimrFields::RXB2,
      EimrFields::RXF2,
      EimrFields::TXB2,
      EimrFields::TXF2,
      ftl::mmio::Reserved<4, 8>,
      EimrFields::RXFLUSH_0,
      EimrFields::RXFLUSH_1,
      EimrFields::RXFLUSH_2,
      EimrFields::TS_TIMER,
      EimrFields::TS_AVAIL,
      EimrFields::WAKEUP,
      EimrFields::PLR,
      EimrFields::UN,
      EimrFields::RL,
      EimrFields::LC,
      EimrFields::EBERR,
      EimrFields::MII,
      EimrFields::RXB,
      EimrFields::RXF,
      EimrFields::TXB,
      EimrFields::TXF,
      EimrFields::GRA,
      EimrFields::BABT,
      EimrFields::BABR,
      ftl::mmio::Reserved<1, 31>> {
    using eRXB1 = EimrFields::eRXB1;
    using eRXF1 = EimrFields::eRXF1;
    using eTXB1 = EimrFields::eTXB1;
    using eTXF1 = EimrFields::eTXF1;
    using eRXB2 = EimrFields::eRXB2;
    using eRXF2 = EimrFields::eRXF2;
    using eTXB2 = EimrFields::eTXB2;
    using eTXF2 = EimrFields::eTXF2;
    using eRXFLUSH_0 = EimrFields::eRXFLUSH_0;
    using eRXFLUSH_1 = EimrFields::eRXFLUSH_1;
    using eRXFLUSH_2 = EimrFields::eRXFLUSH_2;
    using eTS_TIMER = EimrFields::eTS_TIMER;
    using eTS_AVAIL = EimrFields::eTS_AVAIL;
    using eWAKEUP = EimrFields::eWAKEUP;
    using ePLR = EimrFields::ePLR;
    using eUN = EimrFields::eUN;
    using eRL = EimrFields::eRL;
    using eLC = EimrFields::eLC;
    using eEBERR = EimrFields::eEBERR;
    using eMII = EimrFields::eMII;
    using eRXB = EimrFields::eRXB;
    using eRXF = EimrFields::eRXF;
    using eTXB = EimrFields::eTXB;
    using eTXF = EimrFields::eTXF;
    using eGRA = EimrFields::eGRA;
    using eBABT = EimrFields::eBABT;
    using eBABR = EimrFields::eBABR;
    using RXB1 = EimrFields::RXB1;
    using RXF1 = EimrFields::RXF1;
    using TXB1 = EimrFields::TXB1;
    using TXF1 = EimrFields::TXF1;
    using RXB2 = EimrFields::RXB2;
    using RXF2 = EimrFields::RXF2;
    using TXB2 = EimrFields::TXB2;
    using TXF2 = EimrFields::TXF2;
    using RXFLUSH_0 = EimrFields::RXFLUSH_0;
    using RXFLUSH_1 = EimrFields::RXFLUSH_1;
    using RXFLUSH_2 = EimrFields::RXFLUSH_2;
    using TS_TIMER = EimrFields::TS_TIMER;
    using TS_AVAIL = EimrFields::TS_AVAIL;
    using WAKEUP = EimrFields::WAKEUP;
    using PLR = EimrFields::PLR;
    using UN = EimrFields::UN;
    using RL = EimrFields::RL;
    using LC = EimrFields::LC;
    using EBERR = EimrFields::EBERR;
    using MII = EimrFields::MII;
    using RXB = EimrFields::RXB;
    using RXF = EimrFields::RXF;
    using TXB = EimrFields::TXB;
    using TXF = EimrFields::TXF;
    using GRA = EimrFields::GRA;
    using BABT = EimrFields::BABT;
    using BABR = EimrFields::BABR;
  };

  // Receive Descriptor Active Register - Ring 0
  struct RdarFields {
    // Receive Descriptor Active
    using RDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RdarFields

  struct RDAR : ftl::mmio::Register<
      0x40420010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      RdarFields::RDAR,
      ftl::mmio::Reserved<7, 25>> {
    using VALUE = RdarFields::RDAR;
  };

  // Transmit Descriptor Active Register - Ring 0
  struct TdarFields {
    // Transmit Descriptor Active
    using TDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TdarFields

  struct TDAR : ftl::mmio::Register<
      0x40420014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      TdarFields::TDAR,
      ftl::mmio::Reserved<7, 25>> {
    using VALUE = TdarFields::TDAR;
  };

  // Ethernet Control Register
  struct EcrFields {
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
  };  // struct EcrFields

  struct ECR : ftl::mmio::Register<
      0x40420024u,
      std::uint32_t,
      0x70000000u,
      ftl::mmio::RW,
      EcrFields::RESET,
      EcrFields::ETHEREN,
      EcrFields::MAGICEN,
      EcrFields::SLEEP,
      EcrFields::EN1588,
      EcrFields::SPEED,
      EcrFields::DBGEN,
      ftl::mmio::Reserved<1, 7>,
      EcrFields::DBSWP,
      EcrFields::SVLANEN,
      EcrFields::VLANUSE2ND,
      EcrFields::SVLANDBL,
      ftl::mmio::Reserved<4, 12>,
      EcrFields::TXC_DLY,
      ftl::mmio::Reserved<15, 17>> {
    using eETHEREN = EcrFields::eETHEREN;
    using eMAGICEN = EcrFields::eMAGICEN;
    using eSLEEP = EcrFields::eSLEEP;
    using eEN1588 = EcrFields::eEN1588;
    using eSPEED = EcrFields::eSPEED;
    using eDBGEN = EcrFields::eDBGEN;
    using eDBSWP = EcrFields::eDBSWP;
    using eSVLANEN = EcrFields::eSVLANEN;
    using eVLANUSE2ND = EcrFields::eVLANUSE2ND;
    using eSVLANDBL = EcrFields::eSVLANDBL;
    using eTXC_DLY = EcrFields::eTXC_DLY;
    using RESET = EcrFields::RESET;
    using ETHEREN = EcrFields::ETHEREN;
    using MAGICEN = EcrFields::MAGICEN;
    using SLEEP = EcrFields::SLEEP;
    using EN1588 = EcrFields::EN1588;
    using SPEED = EcrFields::SPEED;
    using DBGEN = EcrFields::DBGEN;
    using DBSWP = EcrFields::DBSWP;
    using SVLANEN = EcrFields::SVLANEN;
    using VLANUSE2ND = EcrFields::VLANUSE2ND;
    using SVLANDBL = EcrFields::SVLANDBL;
    using TXC_DLY = EcrFields::TXC_DLY;
  };

  // MII Management Frame Register
  struct MmfrFields {
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
  };  // struct MmfrFields

  struct MMFR : ftl::mmio::Register<
      0x40420040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MmfrFields::DATA,
      MmfrFields::TA,
      MmfrFields::RA,
      MmfrFields::PA,
      MmfrFields::OP,
      MmfrFields::ST> {
    using DATA = MmfrFields::DATA;
    using TA = MmfrFields::TA;
    using RA = MmfrFields::RA;
    using PA = MmfrFields::PA;
    using OP = MmfrFields::OP;
    using ST = MmfrFields::ST;
  };

  // MII Speed Control Register
  struct MscrFields {
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
  };  // struct MscrFields

  struct MSCR : ftl::mmio::Register<
      0x40420044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      MscrFields::MII_SPEED,
      MscrFields::DIS_PRE,
      MscrFields::HOLDTIME,
      ftl::mmio::Reserved<21, 11>> {
    using eDIS_PRE = MscrFields::eDIS_PRE;
    using eHOLDTIME = MscrFields::eHOLDTIME;
    using MII_SPEED = MscrFields::MII_SPEED;
    using DIS_PRE = MscrFields::DIS_PRE;
    using HOLDTIME = MscrFields::HOLDTIME;
  };

  // MIB Control Register
  struct MibcFields {
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
  };  // struct MibcFields

  struct MIBC : ftl::mmio::Register<
      0x40420064u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<29, 0>,
      MibcFields::MIB_CLEAR,
      MibcFields::MIB_IDLE,
      MibcFields::MIB_DIS> {
    using eMIB_CLEAR = MibcFields::eMIB_CLEAR;
    using eMIB_IDLE = MibcFields::eMIB_IDLE;
    using eMIB_DIS = MibcFields::eMIB_DIS;
    using MIB_CLEAR = MibcFields::MIB_CLEAR;
    using MIB_IDLE = MibcFields::MIB_IDLE;
    using MIB_DIS = MibcFields::MIB_DIS;
  };

  // Receive Control Register
  struct RcrFields {
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
  };  // struct RcrFields

  struct RCR : ftl::mmio::Register<
      0x40420084u,
      std::uint32_t,
      0x05EE0001u,
      ftl::mmio::RW,
      RcrFields::LOOP,
      RcrFields::DRT,
      RcrFields::MII_MODE,
      RcrFields::PROM,
      RcrFields::BC_REJ,
      RcrFields::FCE,
      RcrFields::RGMII_EN,
      ftl::mmio::Reserved<1, 7>,
      RcrFields::RMII_MODE,
      RcrFields::RMII_10T,
      ftl::mmio::Reserved<2, 10>,
      RcrFields::PADEN,
      RcrFields::PAUFWD,
      RcrFields::CRCFWD,
      RcrFields::CFEN,
      RcrFields::MAX_FL,
      RcrFields::NLC,
      RcrFields::GRS> {
    using eLOOP = RcrFields::eLOOP;
    using eDRT = RcrFields::eDRT;
    using eMII_MODE = RcrFields::eMII_MODE;
    using ePROM = RcrFields::ePROM;
    using eBC_REJ = RcrFields::eBC_REJ;
    using eFCE = RcrFields::eFCE;
    using eRGMII_EN = RcrFields::eRGMII_EN;
    using eRMII_MODE = RcrFields::eRMII_MODE;
    using eRMII_10T = RcrFields::eRMII_10T;
    using ePADEN = RcrFields::ePADEN;
    using ePAUFWD = RcrFields::ePAUFWD;
    using eCRCFWD = RcrFields::eCRCFWD;
    using eCFEN = RcrFields::eCFEN;
    using eNLC = RcrFields::eNLC;
    using eGRS = RcrFields::eGRS;
    using LOOP = RcrFields::LOOP;
    using DRT = RcrFields::DRT;
    using MII_MODE = RcrFields::MII_MODE;
    using PROM = RcrFields::PROM;
    using BC_REJ = RcrFields::BC_REJ;
    using FCE = RcrFields::FCE;
    using RGMII_EN = RcrFields::RGMII_EN;
    using RMII_MODE = RcrFields::RMII_MODE;
    using RMII_10T = RcrFields::RMII_10T;
    using PADEN = RcrFields::PADEN;
    using PAUFWD = RcrFields::PAUFWD;
    using CRCFWD = RcrFields::CRCFWD;
    using CFEN = RcrFields::CFEN;
    using MAX_FL = RcrFields::MAX_FL;
    using NLC = RcrFields::NLC;
    using GRS = RcrFields::GRS;
  };

  // Transmit Control Register
  struct TcrFields {
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
  };  // struct TcrFields

  struct TCR : ftl::mmio::Register<
      0x404200C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcrFields::GTS,
      ftl::mmio::Reserved<1, 1>,
      TcrFields::FDEN,
      TcrFields::TFC_PAUSE,
      TcrFields::RFC_PAUSE,
      TcrFields::ADDSEL,
      TcrFields::ADDINS,
      TcrFields::CRCFWD,
      ftl::mmio::Reserved<22, 10>> {
    using eGTS = TcrFields::eGTS;
    using eFDEN = TcrFields::eFDEN;
    using eTFC_PAUSE = TcrFields::eTFC_PAUSE;
    using eADDSEL = TcrFields::eADDSEL;
    using eADDINS = TcrFields::eADDINS;
    using eCRCFWD = TcrFields::eCRCFWD;
    using GTS = TcrFields::GTS;
    using FDEN = TcrFields::FDEN;
    using TFC_PAUSE = TcrFields::TFC_PAUSE;
    using RFC_PAUSE = TcrFields::RFC_PAUSE;
    using ADDSEL = TcrFields::ADDSEL;
    using ADDINS = TcrFields::ADDINS;
    using CRCFWD = TcrFields::CRCFWD;
  };

  // Physical Address Lower Register
  struct PalrFields {
    // Pause Address
    using PADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PalrFields

  struct PALR : ftl::mmio::Register<
      0x404200E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PalrFields::PADDR1> {
    using PADDR1 = PalrFields::PADDR1;
  };

  // Physical Address Upper Register
  struct PaurFields {
    // Type Field In PAUSE Frames
    using TYPE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used for exact match, and the source address field in PAUSE frames
    using PADDR2 = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PaurFields

  struct PAUR : ftl::mmio::Register<
      0x404200E8u,
      std::uint32_t,
      0x00008808u,
      ftl::mmio::RW,
      PaurFields::TYPE,
      PaurFields::PADDR2> {
    using TYPE = PaurFields::TYPE;
    using PADDR2 = PaurFields::PADDR2;
  };

  // Opcode/Pause Duration Register
  struct OpdFields {
    // Pause Duration
    using PAUSE_DUR = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Opcode Field In PAUSE Frames
    using OPCODE = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OpdFields

  struct OPD : ftl::mmio::Register<
      0x404200ECu,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      OpdFields::PAUSE_DUR,
      OpdFields::OPCODE> {
    using PAUSE_DUR = OpdFields::PAUSE_DUR;
    using OPCODE = OpdFields::OPCODE;
  };

  // Transmit Interrupt Coalescing Register
  struct TxicFields {
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
  };  // struct TxicFields

  template<std::uint32_t Index>
  struct TXIC : ftl::mmio::Register<
      0x404200F0u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TxicFields::ICTT,
      ftl::mmio::Reserved<4, 16>,
      TxicFields::ICFT,
      ftl::mmio::Reserved<2, 28>,
      TxicFields::ICCS,
      TxicFields::ICEN> {
    static_assert(Index < 3u, "TXIC: Index out of range");
    using eICCS = TxicFields::eICCS;
    using eICEN = TxicFields::eICEN;
    using ICTT = TxicFields::ICTT;
    using ICFT = TxicFields::ICFT;
    using ICCS = TxicFields::ICCS;
    using ICEN = TxicFields::ICEN;
  };

  // Receive Interrupt Coalescing Register
  struct RxicFields {
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
  };  // struct RxicFields

  template<std::uint32_t Index>
  struct RXIC : ftl::mmio::Register<
      0x40420100u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RxicFields::ICTT,
      ftl::mmio::Reserved<4, 16>,
      RxicFields::ICFT,
      ftl::mmio::Reserved<2, 28>,
      RxicFields::ICCS,
      RxicFields::ICEN> {
    static_assert(Index < 3u, "RXIC: Index out of range");
    using eICCS = RxicFields::eICCS;
    using eICEN = RxicFields::eICEN;
    using ICTT = RxicFields::ICTT;
    using ICFT = RxicFields::ICFT;
    using ICCS = RxicFields::ICCS;
    using ICEN = RxicFields::ICEN;
  };

  // Descriptor Individual Upper Address Register
  struct IaurFields {
    // Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    using IADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IaurFields

  struct IAUR : ftl::mmio::Register<
      0x40420118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IaurFields::IADDR1> {
    using IADDR1 = IaurFields::IADDR1;
  };

  // Descriptor Individual Lower Address Register
  struct IalrFields {
    // Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    using IADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IalrFields

  struct IALR : ftl::mmio::Register<
      0x4042011Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IalrFields::IADDR2> {
    using IADDR2 = IalrFields::IADDR2;
  };

  // Descriptor Group Upper Address Register
  struct GaurFields {
    // Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    using GADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GaurFields

  struct GAUR : ftl::mmio::Register<
      0x40420120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GaurFields::GADDR1> {
    using GADDR1 = GaurFields::GADDR1;
  };

  // Descriptor Group Lower Address Register
  struct GalrFields {
    // Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    using GADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GalrFields

  struct GALR : ftl::mmio::Register<
      0x40420124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GalrFields::GADDR2> {
    using GADDR2 = GalrFields::GADDR2;
  };

  // Transmit FIFO Watermark Register
  struct TfwrFields {
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
  };  // struct TfwrFields

  struct TFWR : ftl::mmio::Register<
      0x40420144u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TfwrFields::TFWR,
      ftl::mmio::Reserved<2, 6>,
      TfwrFields::STRFWD,
      ftl::mmio::Reserved<23, 9>> {
    using eTFWR = TfwrFields::eTFWR;
    using eSTRFWD = TfwrFields::eSTRFWD;
    using VALUE = TfwrFields::TFWR;
    using STRFWD = TfwrFields::STRFWD;
  };

  // Receive Descriptor Ring 1 Start Register
  struct Rdsr1Fields {
    // Pointer to the beginning of the receive buffer descriptor queue 1.
    using R_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rdsr1Fields

  struct RDSR1 : ftl::mmio::Register<
      0x40420160u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      Rdsr1Fields::R_DES_START> {
    using R_DES_START = Rdsr1Fields::R_DES_START;
  };

  // Transmit Buffer Descriptor Ring 1 Start Register
  struct Tdsr1Fields {
    // Pointer to the beginning of transmit buffer descriptor queue 1.
    using X_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tdsr1Fields

  struct TDSR1 : ftl::mmio::Register<
      0x40420164u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      Tdsr1Fields::X_DES_START> {
    using X_DES_START = Tdsr1Fields::X_DES_START;
  };

  // Maximum Receive Buffer Size Register - Ring 1
  struct Mrbr1Fields {
    // Receive buffer size (in bytes)
    using R_BUF_SIZE = ftl::mmio::Field<7, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mrbr1Fields

  struct MRBR1 : ftl::mmio::Register<
      0x40420168u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Mrbr1Fields::R_BUF_SIZE,
      ftl::mmio::Reserved<21, 11>> {
    using R_BUF_SIZE = Mrbr1Fields::R_BUF_SIZE;
  };

  // Receive Descriptor Ring 2 Start Register
  struct Rdsr2Fields {
    // Pointer to the beginning of receive buffer descriptor queue 2.
    using R_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rdsr2Fields

  struct RDSR2 : ftl::mmio::Register<
      0x4042016Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      Rdsr2Fields::R_DES_START> {
    using R_DES_START = Rdsr2Fields::R_DES_START;
  };

  // Transmit Buffer Descriptor Ring 2 Start Register
  struct Tdsr2Fields {
    // Pointer to the beginning of transmit buffer descriptor queue 2.
    using X_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tdsr2Fields

  struct TDSR2 : ftl::mmio::Register<
      0x40420170u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      Tdsr2Fields::X_DES_START> {
    using X_DES_START = Tdsr2Fields::X_DES_START;
  };

  // Maximum Receive Buffer Size Register - Ring 2
  struct Mrbr2Fields {
    // Receive buffer size (in bytes)
    using R_BUF_SIZE = ftl::mmio::Field<7, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Mrbr2Fields

  struct MRBR2 : ftl::mmio::Register<
      0x40420174u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Mrbr2Fields::R_BUF_SIZE,
      ftl::mmio::Reserved<21, 11>> {
    using R_BUF_SIZE = Mrbr2Fields::R_BUF_SIZE;
  };

  // Receive Descriptor Ring 0 Start Register
  struct RdsrFields {
    // Pointer to the beginning of the receive buffer descriptor queue. 0
    using R_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RdsrFields

  struct RDSR : ftl::mmio::Register<
      0x40420180u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      RdsrFields::R_DES_START> {
    using R_DES_START = RdsrFields::R_DES_START;
  };

  // Transmit Buffer Descriptor Ring 0 Start Register
  struct TdsrFields {
    // Pointer to the beginning of the transmit buffer descriptor queue.
    using X_DES_START = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TdsrFields

  struct TDSR : ftl::mmio::Register<
      0x40420184u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      TdsrFields::X_DES_START> {
    using X_DES_START = TdsrFields::X_DES_START;
  };

  // Maximum Receive Buffer Size Register - Ring 0
  struct MrbrFields {
    // Receive buffer size in bytes
    using R_BUF_SIZE = ftl::mmio::Field<7, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MrbrFields

  struct MRBR : ftl::mmio::Register<
      0x40420188u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      MrbrFields::R_BUF_SIZE,
      ftl::mmio::Reserved<21, 11>> {
    using R_BUF_SIZE = MrbrFields::R_BUF_SIZE;
  };

  // Receive FIFO Section Full Threshold
  struct RsflFields {
    // Value Of Receive FIFO Section Full Threshold
    using RX_SECTION_FULL = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RsflFields

  struct RSFL : ftl::mmio::Register<
      0x40420190u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RsflFields::RX_SECTION_FULL,
      ftl::mmio::Reserved<22, 10>> {
    using RX_SECTION_FULL = RsflFields::RX_SECTION_FULL;
  };

  // Receive FIFO Section Empty Threshold
  struct RsemFields {
    // Value Of The Receive FIFO Section Empty Threshold
    using RX_SECTION_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RX Status FIFO Section Empty Threshold
    using STAT_SECTION_EMPTY = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RsemFields

  struct RSEM : ftl::mmio::Register<
      0x40420194u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RsemFields::RX_SECTION_EMPTY,
      ftl::mmio::Reserved<6, 10>,
      RsemFields::STAT_SECTION_EMPTY,
      ftl::mmio::Reserved<11, 21>> {
    using RX_SECTION_EMPTY = RsemFields::RX_SECTION_EMPTY;
    using STAT_SECTION_EMPTY = RsemFields::STAT_SECTION_EMPTY;
  };

  // Receive FIFO Almost Empty Threshold
  struct RaemFields {
    // Value Of The Receive FIFO Almost Empty Threshold
    using RX_ALMOST_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RaemFields

  struct RAEM : ftl::mmio::Register<
      0x40420198u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      RaemFields::RX_ALMOST_EMPTY,
      ftl::mmio::Reserved<22, 10>> {
    using RX_ALMOST_EMPTY = RaemFields::RX_ALMOST_EMPTY;
  };

  // Receive FIFO Almost Full Threshold
  struct RaflFields {
    // Value Of The Receive FIFO Almost Full Threshold
    using RX_ALMOST_FULL = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RaflFields

  struct RAFL : ftl::mmio::Register<
      0x4042019Cu,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      RaflFields::RX_ALMOST_FULL,
      ftl::mmio::Reserved<22, 10>> {
    using RX_ALMOST_FULL = RaflFields::RX_ALMOST_FULL;
  };

  // Transmit FIFO Section Empty Threshold
  struct TsemFields {
    // Value Of The Transmit FIFO Section Empty Threshold
    using TX_SECTION_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TsemFields

  struct TSEM : ftl::mmio::Register<
      0x404201A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TsemFields::TX_SECTION_EMPTY,
      ftl::mmio::Reserved<22, 10>> {
    using TX_SECTION_EMPTY = TsemFields::TX_SECTION_EMPTY;
  };

  // Transmit FIFO Almost Empty Threshold
  struct TaemFields {
    // Value of Transmit FIFO Almost Empty Threshold
    using TX_ALMOST_EMPTY = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TaemFields

  struct TAEM : ftl::mmio::Register<
      0x404201A4u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      TaemFields::TX_ALMOST_EMPTY,
      ftl::mmio::Reserved<22, 10>> {
    using TX_ALMOST_EMPTY = TaemFields::TX_ALMOST_EMPTY;
  };

  // Transmit FIFO Almost Full Threshold
  struct TaflFields {
    // Value Of The Transmit FIFO Almost Full Threshold
    using TX_ALMOST_FULL = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TaflFields

  struct TAFL : ftl::mmio::Register<
      0x404201A8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      TaflFields::TX_ALMOST_FULL,
      ftl::mmio::Reserved<22, 10>> {
    using TX_ALMOST_FULL = TaflFields::TX_ALMOST_FULL;
  };

  // Transmit Inter-Packet Gap
  struct TipgFields {
    // Transmit Inter-Packet Gap
    using IPG = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TipgFields

  struct TIPG : ftl::mmio::Register<
      0x404201ACu,
      std::uint32_t,
      0x0000000Cu,
      ftl::mmio::RW,
      TipgFields::IPG,
      ftl::mmio::Reserved<27, 5>> {
    using IPG = TipgFields::IPG;
  };

  // Frame Truncation Length
  struct FtrlFields {
    // Frame Truncation Length
    using TRUNC_FL = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FtrlFields

  struct FTRL : ftl::mmio::Register<
      0x404201B0u,
      std::uint32_t,
      0x000007FFu,
      ftl::mmio::RW,
      FtrlFields::TRUNC_FL,
      ftl::mmio::Reserved<18, 14>> {
    using TRUNC_FL = FtrlFields::TRUNC_FL;
  };

  // Transmit Accelerator Function Configuration
  struct TaccFields {
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
  };  // struct TaccFields

  struct TACC : ftl::mmio::Register<
      0x404201C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TaccFields::SHIFT16,
      ftl::mmio::Reserved<2, 1>,
      TaccFields::IPCHK,
      TaccFields::PROCHK,
      ftl::mmio::Reserved<27, 5>> {
    using eSHIFT16 = TaccFields::eSHIFT16;
    using eIPCHK = TaccFields::eIPCHK;
    using ePROCHK = TaccFields::ePROCHK;
    using SHIFT16 = TaccFields::SHIFT16;
    using IPCHK = TaccFields::IPCHK;
    using PROCHK = TaccFields::PROCHK;
  };

  // Receive Accelerator Function Configuration
  struct RaccFields {
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
  };  // struct RaccFields

  struct RACC : ftl::mmio::Register<
      0x404201C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RaccFields::PADREM,
      RaccFields::IPDIS,
      RaccFields::PRODIS,
      ftl::mmio::Reserved<3, 3>,
      RaccFields::LINEDIS,
      RaccFields::SHIFT16,
      ftl::mmio::Reserved<24, 8>> {
    using ePADREM = RaccFields::ePADREM;
    using eIPDIS = RaccFields::eIPDIS;
    using ePRODIS = RaccFields::ePRODIS;
    using eLINEDIS = RaccFields::eLINEDIS;
    using eSHIFT16 = RaccFields::eSHIFT16;
    using PADREM = RaccFields::PADREM;
    using IPDIS = RaccFields::IPDIS;
    using PRODIS = RaccFields::PRODIS;
    using LINEDIS = RaccFields::LINEDIS;
    using SHIFT16 = RaccFields::SHIFT16;
  };

  // Receive Classification Match Register for Class n
  struct RcmrFields {
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
  };  // struct RcmrFields

  template<std::uint32_t Index>
  struct RCMR : ftl::mmio::Register<
      0x404201C8u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RcmrFields::CMP0,
      ftl::mmio::Reserved<1, 3>,
      RcmrFields::CMP1,
      ftl::mmio::Reserved<1, 7>,
      RcmrFields::CMP2,
      ftl::mmio::Reserved<1, 11>,
      RcmrFields::CMP3,
      ftl::mmio::Reserved<1, 15>,
      RcmrFields::MATCHEN,
      ftl::mmio::Reserved<15, 17>> {
    static_assert(Index < 2u, "RCMR: Index out of range");
    using eMATCHEN = RcmrFields::eMATCHEN;
    using CMP0 = RcmrFields::CMP0;
    using CMP1 = RcmrFields::CMP1;
    using CMP2 = RcmrFields::CMP2;
    using CMP3 = RcmrFields::CMP3;
    using MATCHEN = RcmrFields::MATCHEN;
  };

  // DMA Class Based Configuration
  struct DmacfgFields {
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
  };  // struct DmacfgFields

  template<std::uint32_t Index>
  struct DMACFG : ftl::mmio::Register<
      0x404201D8u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DmacfgFields::IDLE_SLOPE,
      DmacfgFields::DMA_CLASS_EN,
      DmacfgFields::CALC_NOIPG,
      ftl::mmio::Reserved<14, 18>> {
    static_assert(Index < 2u, "DMACFG: Index out of range");
    using eDMA_CLASS_EN = DmacfgFields::eDMA_CLASS_EN;
    using eCALC_NOIPG = DmacfgFields::eCALC_NOIPG;
    using IDLE_SLOPE = DmacfgFields::IDLE_SLOPE;
    using DMA_CLASS_EN = DmacfgFields::DMA_CLASS_EN;
    using CALC_NOIPG = DmacfgFields::CALC_NOIPG;
  };

  // Receive Descriptor Active Register - Ring 1
  struct Rdar1Fields {
    // Receive Descriptor Active
    using RDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rdar1Fields

  struct RDAR1 : ftl::mmio::Register<
      0x404201E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Rdar1Fields::RDAR,
      ftl::mmio::Reserved<7, 25>> {
    using RDAR = Rdar1Fields::RDAR;
  };

  // Transmit Descriptor Active Register - Ring 1
  struct Tdar1Fields {
    // Transmit Descriptor Active
    using TDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tdar1Fields

  struct TDAR1 : ftl::mmio::Register<
      0x404201E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Tdar1Fields::TDAR,
      ftl::mmio::Reserved<7, 25>> {
    using TDAR = Tdar1Fields::TDAR;
  };

  // Receive Descriptor Active Register - Ring 2
  struct Rdar2Fields {
    // Receive Descriptor Active
    using RDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Rdar2Fields

  struct RDAR2 : ftl::mmio::Register<
      0x404201E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Rdar2Fields::RDAR,
      ftl::mmio::Reserved<7, 25>> {
    using RDAR = Rdar2Fields::RDAR;
  };

  // Transmit Descriptor Active Register - Ring 2
  struct Tdar2Fields {
    // Transmit Descriptor Active
    using TDAR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tdar2Fields

  struct TDAR2 : ftl::mmio::Register<
      0x404201ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Tdar2Fields::TDAR,
      ftl::mmio::Reserved<7, 25>> {
    using TDAR = Tdar2Fields::TDAR;
  };

  // QOS Scheme
  struct QosFields {
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
  };  // struct QosFields

  struct QOS : ftl::mmio::Register<
      0x404201F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      QosFields::TX_SCHEME,
      QosFields::RX_FLUSH0,
      QosFields::RX_FLUSH1,
      QosFields::RX_FLUSH2,
      ftl::mmio::Reserved<26, 6>> {
    using eTX_SCHEME = QosFields::eTX_SCHEME;
    using eRX_FLUSH0 = QosFields::eRX_FLUSH0;
    using eRX_FLUSH1 = QosFields::eRX_FLUSH1;
    using eRX_FLUSH2 = QosFields::eRX_FLUSH2;
    using TX_SCHEME = QosFields::TX_SCHEME;
    using RX_FLUSH0 = QosFields::RX_FLUSH0;
    using RX_FLUSH1 = QosFields::RX_FLUSH1;
    using RX_FLUSH2 = QosFields::RX_FLUSH2;
  };

  // Tx Packet Count Statistic Register
  struct RmonTPacketsFields {
    // Packet count
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTPacketsFields

  struct RMON_T_PACKETS : ftl::mmio::Register<
      0x40420204u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTPacketsFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTPacketsFields::TXPKTS;
  };

  // Tx Broadcast Packets Statistic Register
  struct RmonTBcPktFields {
    // Number of broadcast packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTBcPktFields

  struct RMON_T_BC_PKT : ftl::mmio::Register<
      0x40420208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTBcPktFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTBcPktFields::TXPKTS;
  };

  // Tx Multicast Packets Statistic Register
  struct RmonTMcPktFields {
    // Number of multicast packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTMcPktFields

  struct RMON_T_MC_PKT : ftl::mmio::Register<
      0x4042020Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTMcPktFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTMcPktFields::TXPKTS;
  };

  // Tx Packets with CRC/Align Error Statistic Register
  struct RmonTCrcAlignFields {
    // Number of packets with CRC/align error
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTCrcAlignFields

  struct RMON_T_CRC_ALIGN : ftl::mmio::Register<
      0x40420210u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTCrcAlignFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTCrcAlignFields::TXPKTS;
  };

  // Tx Packets Less Than Bytes and Good CRC Statistic Register
  struct RmonTUndersizeFields {
    // Number of transmit packets less than 64 bytes with good CRC
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTUndersizeFields

  struct RMON_T_UNDERSIZE : ftl::mmio::Register<
      0x40420214u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTUndersizeFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTUndersizeFields::TXPKTS;
  };

  // Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
  struct RmonTOversizeFields {
    // Number of transmit packets greater than MAX_FL bytes with good CRC
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTOversizeFields

  struct RMON_T_OVERSIZE : ftl::mmio::Register<
      0x40420218u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTOversizeFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTOversizeFields::TXPKTS;
  };

  // Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
  struct RmonTFragFields {
    // Number of packets less than 64 bytes with bad CRC
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTFragFields

  struct RMON_T_FRAG : ftl::mmio::Register<
      0x4042021Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTFragFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTFragFields::TXPKTS;
  };

  // Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
  struct RmonTJabFields {
    // Number of transmit packets greater than MAX_FL bytes and bad CRC
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTJabFields

  struct RMON_T_JAB : ftl::mmio::Register<
      0x40420220u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTJabFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTJabFields::TXPKTS;
  };

  // Tx Collision Count Statistic Register
  struct RmonTColFields {
    // Number of transmit collisions
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTColFields

  struct RMON_T_COL : ftl::mmio::Register<
      0x40420224u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTColFields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTColFields::TXPKTS;
  };

  // Tx 64-Byte Packets Statistic Register
  struct RmonTP64Fields {
    // Number of 64-byte transmit packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTP64Fields

  struct RMON_T_P64 : ftl::mmio::Register<
      0x40420228u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTP64Fields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTP64Fields::TXPKTS;
  };

  // Tx 65- to 127-byte Packets Statistic Register
  struct RmonTP65to127Fields {
    // Number of 65- to 127-byte transmit packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTP65to127Fields

  struct RMON_T_P65TO127 : ftl::mmio::Register<
      0x4042022Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTP65to127Fields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTP65to127Fields::TXPKTS;
  };

  // Tx 128- to 255-byte Packets Statistic Register
  struct RmonTP128to255Fields {
    // Number of 128- to 255-byte transmit packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTP128to255Fields

  struct RMON_T_P128TO255 : ftl::mmio::Register<
      0x40420230u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTP128to255Fields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTP128to255Fields::TXPKTS;
  };

  // Tx 256- to 511-byte Packets Statistic Register
  struct RmonTP256to511Fields {
    // Number of 256- to 511-byte transmit packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTP256to511Fields

  struct RMON_T_P256TO511 : ftl::mmio::Register<
      0x40420234u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTP256to511Fields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTP256to511Fields::TXPKTS;
  };

  // Tx 512- to 1023-byte Packets Statistic Register
  struct RmonTP512to1023Fields {
    // Number of 512- to 1023-byte transmit packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTP512to1023Fields

  struct RMON_T_P512TO1023 : ftl::mmio::Register<
      0x40420238u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTP512to1023Fields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTP512to1023Fields::TXPKTS;
  };

  // Tx 1024- to 2047-byte Packets Statistic Register
  struct RmonTP1024to2047Fields {
    // Number of 1024- to 2047-byte transmit packets
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTP1024to2047Fields

  struct RMON_T_P1024TO2047 : ftl::mmio::Register<
      0x4042023Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTP1024to2047Fields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTP1024to2047Fields::TXPKTS;
  };

  // Tx Packets Greater Than 2048 Bytes Statistic Register
  struct RmonTPGte2048Fields {
    // Number of transmit packets greater than 2048 bytes
    using TXPKTS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTPGte2048Fields

  struct RMON_T_P_GTE2048 : ftl::mmio::Register<
      0x40420240u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTPGte2048Fields::TXPKTS,
      ftl::mmio::Reserved<16, 16>> {
    using TXPKTS = RmonTPGte2048Fields::TXPKTS;
  };

  // Tx Octets Statistic Register
  struct RmonTOctetsFields {
    // Number of transmit octets
    using TXOCTS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonTOctetsFields

  struct RMON_T_OCTETS : ftl::mmio::Register<
      0x40420244u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonTOctetsFields::TXOCTS> {
    using TXOCTS = RmonTOctetsFields::TXOCTS;
  };

  // Frames Transmitted OK Statistic Register
  struct IeeeTFrameOkFields {
    // Number of frames transmitted OK
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTFrameOkFields

  struct IEEE_T_FRAME_OK : ftl::mmio::Register<
      0x4042024Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTFrameOkFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTFrameOkFields::COUNT;
  };

  // Frames Transmitted with Single Collision Statistic Register
  struct IeeeT1colFields {
    // Number of frames transmitted with one collision
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeT1colFields

  struct IEEE_T_1COL : ftl::mmio::Register<
      0x40420250u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeT1colFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeT1colFields::COUNT;
  };

  // Frames Transmitted with Multiple Collisions Statistic Register
  struct IeeeTMcolFields {
    // Number of frames transmitted with multiple collisions
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTMcolFields

  struct IEEE_T_MCOL : ftl::mmio::Register<
      0x40420254u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTMcolFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTMcolFields::COUNT;
  };

  // Frames Transmitted after Deferral Delay Statistic Register
  struct IeeeTDefFields {
    // Number of frames transmitted with deferral delay
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTDefFields

  struct IEEE_T_DEF : ftl::mmio::Register<
      0x40420258u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTDefFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTDefFields::COUNT;
  };

  // Frames Transmitted with Late Collision Statistic Register
  struct IeeeTLcolFields {
    // Number of frames transmitted with late collision
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTLcolFields

  struct IEEE_T_LCOL : ftl::mmio::Register<
      0x4042025Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTLcolFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTLcolFields::COUNT;
  };

  // Frames Transmitted with Excessive Collisions Statistic Register
  struct IeeeTExcolFields {
    // Number of frames transmitted with excessive collisions
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTExcolFields

  struct IEEE_T_EXCOL : ftl::mmio::Register<
      0x40420260u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTExcolFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTExcolFields::COUNT;
  };

  // Frames Transmitted with Tx FIFO Underrun Statistic Register
  struct IeeeTMacerrFields {
    // Number of frames transmitted with transmit FIFO underrun
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTMacerrFields

  struct IEEE_T_MACERR : ftl::mmio::Register<
      0x40420264u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTMacerrFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTMacerrFields::COUNT;
  };

  // Frames Transmitted with Carrier Sense Error Statistic Register
  struct IeeeTCserrFields {
    // Number of frames transmitted with carrier sense error
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTCserrFields

  struct IEEE_T_CSERR : ftl::mmio::Register<
      0x40420268u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTCserrFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTCserrFields::COUNT;
  };

  // Reserved Statistic Register
  struct IeeeTSqeFields {
    // This read-only field is reserved and always has the value 0
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTSqeFields

  struct IEEE_T_SQE : ftl::mmio::Register<
      0x4042026Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTSqeFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTSqeFields::COUNT;
  };

  // Flow Control Pause Frames Transmitted Statistic Register
  struct IeeeTFdxfcFields {
    // Number of flow-control pause frames transmitted
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTFdxfcFields

  struct IEEE_T_FDXFC : ftl::mmio::Register<
      0x40420270u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTFdxfcFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeTFdxfcFields::COUNT;
  };

  // Octet Count for Frames Transmitted w/o Error Statistic Register
  struct IeeeTOctetsOkFields {
    // Octet count for frames transmitted without error Counts total octets (includes header and FCS fields).
    using COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeTOctetsOkFields

  struct IEEE_T_OCTETS_OK : ftl::mmio::Register<
      0x40420274u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeTOctetsOkFields::COUNT> {
    using COUNT = IeeeTOctetsOkFields::COUNT;
  };

  // Rx Packet Count Statistic Register
  struct RmonRPacketsFields {
    // Number of packets received
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRPacketsFields

  struct RMON_R_PACKETS : ftl::mmio::Register<
      0x40420284u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRPacketsFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRPacketsFields::COUNT;
  };

  // Rx Broadcast Packets Statistic Register
  struct RmonRBcPktFields {
    // Number of receive broadcast packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRBcPktFields

  struct RMON_R_BC_PKT : ftl::mmio::Register<
      0x40420288u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRBcPktFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRBcPktFields::COUNT;
  };

  // Rx Multicast Packets Statistic Register
  struct RmonRMcPktFields {
    // Number of receive multicast packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRMcPktFields

  struct RMON_R_MC_PKT : ftl::mmio::Register<
      0x4042028Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRMcPktFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRMcPktFields::COUNT;
  };

  // Rx Packets with CRC/Align Error Statistic Register
  struct RmonRCrcAlignFields {
    // Number of receive packets with CRC or align error
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRCrcAlignFields

  struct RMON_R_CRC_ALIGN : ftl::mmio::Register<
      0x40420290u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRCrcAlignFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRCrcAlignFields::COUNT;
  };

  // Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
  struct RmonRUndersizeFields {
    // Number of receive packets with less than 64 bytes and good CRC
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRUndersizeFields

  struct RMON_R_UNDERSIZE : ftl::mmio::Register<
      0x40420294u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRUndersizeFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRUndersizeFields::COUNT;
  };

  // Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
  struct RmonROversizeFields {
    // Number of receive packets greater than MAX_FL and good CRC
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonROversizeFields

  struct RMON_R_OVERSIZE : ftl::mmio::Register<
      0x40420298u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonROversizeFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonROversizeFields::COUNT;
  };

  // Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
  struct RmonRFragFields {
    // Number of receive packets with less than 64 bytes and bad CRC
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRFragFields

  struct RMON_R_FRAG : ftl::mmio::Register<
      0x4042029Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRFragFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRFragFields::COUNT;
  };

  // Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
  struct RmonRJabFields {
    // Number of receive packets greater than MAX_FL and bad CRC
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRJabFields

  struct RMON_R_JAB : ftl::mmio::Register<
      0x404202A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRJabFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRJabFields::COUNT;
  };

  // Rx 64-Byte Packets Statistic Register
  struct RmonRP64Fields {
    // Number of 64-byte receive packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRP64Fields

  struct RMON_R_P64 : ftl::mmio::Register<
      0x404202A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRP64Fields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRP64Fields::COUNT;
  };

  // Rx 65- to 127-Byte Packets Statistic Register
  struct RmonRP65to127Fields {
    // Number of 65- to 127-byte receive packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRP65to127Fields

  struct RMON_R_P65TO127 : ftl::mmio::Register<
      0x404202ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRP65to127Fields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRP65to127Fields::COUNT;
  };

  // Rx 128- to 255-Byte Packets Statistic Register
  struct RmonRP128to255Fields {
    // Number of 128- to 255-byte receive packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRP128to255Fields

  struct RMON_R_P128TO255 : ftl::mmio::Register<
      0x404202B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRP128to255Fields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRP128to255Fields::COUNT;
  };

  // Rx 256- to 511-Byte Packets Statistic Register
  struct RmonRP256to511Fields {
    // Number of 256- to 511-byte receive packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRP256to511Fields

  struct RMON_R_P256TO511 : ftl::mmio::Register<
      0x404202B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRP256to511Fields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRP256to511Fields::COUNT;
  };

  // Rx 512- to 1023-Byte Packets Statistic Register
  struct RmonRP512to1023Fields {
    // Number of 512- to 1023-byte receive packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRP512to1023Fields

  struct RMON_R_P512TO1023 : ftl::mmio::Register<
      0x404202B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRP512to1023Fields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRP512to1023Fields::COUNT;
  };

  // Rx 1024- to 2047-Byte Packets Statistic Register
  struct RmonRP1024to2047Fields {
    // Number of 1024- to 2047-byte receive packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRP1024to2047Fields

  struct RMON_R_P1024TO2047 : ftl::mmio::Register<
      0x404202BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRP1024to2047Fields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRP1024to2047Fields::COUNT;
  };

  // Rx Packets Greater than 2048 Bytes Statistic Register
  struct RmonRPGte2048Fields {
    // Number of greater-than-2048-byte receive packets
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonRPGte2048Fields

  struct RMON_R_P_GTE2048 : ftl::mmio::Register<
      0x404202C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonRPGte2048Fields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = RmonRPGte2048Fields::COUNT;
  };

  // Rx Octets Statistic Register
  struct RmonROctetsFields {
    // Number of receive octets
    using COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RmonROctetsFields

  struct RMON_R_OCTETS : ftl::mmio::Register<
      0x404202C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RmonROctetsFields::COUNT> {
    using COUNT = RmonROctetsFields::COUNT;
  };

  // Frames not Counted Correctly Statistic Register
  struct IeeeRDropFields {
    // Frame count
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeRDropFields

  struct IEEE_R_DROP : ftl::mmio::Register<
      0x404202C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeRDropFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeRDropFields::COUNT;
  };

  // Frames Received OK Statistic Register
  struct IeeeRFrameOkFields {
    // Number of frames received OK
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeRFrameOkFields

  struct IEEE_R_FRAME_OK : ftl::mmio::Register<
      0x404202CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeRFrameOkFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeRFrameOkFields::COUNT;
  };

  // Frames Received with CRC Error Statistic Register
  struct IeeeRCrcFields {
    // Number of frames received with CRC error
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeRCrcFields

  struct IEEE_R_CRC : ftl::mmio::Register<
      0x404202D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeRCrcFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeRCrcFields::COUNT;
  };

  // Frames Received with Alignment Error Statistic Register
  struct IeeeRAlignFields {
    // Number of frames received with alignment error
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeRAlignFields

  struct IEEE_R_ALIGN : ftl::mmio::Register<
      0x404202D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeRAlignFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeRAlignFields::COUNT;
  };

  // Receive FIFO Overflow Count Statistic Register
  struct IeeeRMacerrFields {
    // Receive FIFO overflow count
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeRMacerrFields

  struct IEEE_R_MACERR : ftl::mmio::Register<
      0x404202D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeRMacerrFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeRMacerrFields::COUNT;
  };

  // Flow Control Pause Frames Received Statistic Register
  struct IeeeRFdxfcFields {
    // Number of flow-control pause frames received
    using COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeRFdxfcFields

  struct IEEE_R_FDXFC : ftl::mmio::Register<
      0x404202DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeRFdxfcFields::COUNT,
      ftl::mmio::Reserved<16, 16>> {
    using COUNT = IeeeRFdxfcFields::COUNT;
  };

  // Octet Count for Frames Received without Error Statistic Register
  struct IeeeROctetsOkFields {
    // Number of octets for frames received without error
    using COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IeeeROctetsOkFields

  struct IEEE_R_OCTETS_OK : ftl::mmio::Register<
      0x404202E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IeeeROctetsOkFields::COUNT> {
    using COUNT = IeeeROctetsOkFields::COUNT;
  };

  // Adjustable Timer Control Register
  struct AtcrFields {
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
  };  // struct AtcrFields

  struct ATCR : ftl::mmio::Register<
      0x40420400u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AtcrFields::EN,
      ftl::mmio::Reserved<1, 1>,
      AtcrFields::OFFEN,
      AtcrFields::OFFRST,
      AtcrFields::PEREN,
      ftl::mmio::Reserved<2, 5>,
      AtcrFields::PINPER,
      ftl::mmio::Reserved<1, 8>,
      AtcrFields::RESTART,
      ftl::mmio::Reserved<1, 10>,
      AtcrFields::CAPTURE,
      ftl::mmio::Reserved<1, 12>,
      AtcrFields::SLAVE,
      ftl::mmio::Reserved<18, 14>> {
    using eEN = AtcrFields::eEN;
    using eOFFEN = AtcrFields::eOFFEN;
    using eOFFRST = AtcrFields::eOFFRST;
    using ePEREN = AtcrFields::ePEREN;
    using ePINPER = AtcrFields::ePINPER;
    using eCAPTURE = AtcrFields::eCAPTURE;
    using eSLAVE = AtcrFields::eSLAVE;
    using EN = AtcrFields::EN;
    using OFFEN = AtcrFields::OFFEN;
    using OFFRST = AtcrFields::OFFRST;
    using PEREN = AtcrFields::PEREN;
    using PINPER = AtcrFields::PINPER;
    using RESTART = AtcrFields::RESTART;
    using CAPTURE = AtcrFields::CAPTURE;
    using SLAVE = AtcrFields::SLAVE;
  };

  // Timer Value Register
  struct AtvrFields {
    // A write sets the timer
    using ATIME = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AtvrFields

  struct ATVR : ftl::mmio::Register<
      0x40420404u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AtvrFields::ATIME> {
    using ATIME = AtvrFields::ATIME;
  };

  // Timer Offset Register
  struct AtoffFields {
    // Offset value for one-shot event generation
    using OFFSET = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AtoffFields

  struct ATOFF : ftl::mmio::Register<
      0x40420408u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AtoffFields::OFFSET> {
    using OFFSET = AtoffFields::OFFSET;
  };

  // Timer Period Register
  struct AtperFields {
    // Value for generating periodic events
    using PERIOD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AtperFields

  struct ATPER : ftl::mmio::Register<
      0x4042040Cu,
      std::uint32_t,
      0x3B9ACA00u,
      ftl::mmio::RW,
      AtperFields::PERIOD> {
    using PERIOD = AtperFields::PERIOD;
  };

  // Timer Correction Register
  struct AtcorFields {
    // Correction Counter Wrap-Around Value
    using COR = ftl::mmio::Field<31, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AtcorFields

  struct ATCOR : ftl::mmio::Register<
      0x40420410u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AtcorFields::COR,
      ftl::mmio::Reserved<1, 31>> {
    using COR = AtcorFields::COR;
  };

  // Time-Stamping Clock Period Register
  struct AtincFields {
    // Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
    using INC = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Correction Increment Value
    using INC_CORR = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AtincFields

  struct ATINC : ftl::mmio::Register<
      0x40420414u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AtincFields::INC,
      ftl::mmio::Reserved<1, 7>,
      AtincFields::INC_CORR,
      ftl::mmio::Reserved<17, 15>> {
    using INC = AtincFields::INC;
    using INC_CORR = AtincFields::INC_CORR;
  };

  // Timestamp of Last Transmitted Frame
  struct AtstmpFields {
    // Timestamp of the last frame transmitted by the core that had TxBD[TS] set the ff_tx_ts_frm signal asserted from the user application
    using TIMESTAMP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AtstmpFields

  struct ATSTMP : ftl::mmio::Register<
      0x40420418u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AtstmpFields::TIMESTAMP> {
    using TIMESTAMP = AtstmpFields::TIMESTAMP;
  };

  // Timer Global Status Register
  struct TgsrFields {
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
  };  // struct TgsrFields

  struct TGSR : ftl::mmio::Register<
      0x40420604u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TgsrFields::TF0,
      TgsrFields::TF1,
      TgsrFields::TF2,
      TgsrFields::TF3,
      ftl::mmio::Reserved<28, 4>> {
    using eTF0 = TgsrFields::eTF0;
    using eTF1 = TgsrFields::eTF1;
    using eTF2 = TgsrFields::eTF2;
    using eTF3 = TgsrFields::eTF3;
    using TF0 = TgsrFields::TF0;
    using TF1 = TgsrFields::TF1;
    using TF2 = TgsrFields::TF2;
    using TF3 = TgsrFields::TF3;
  };

  // Timer Control Status Register
  struct Tcsr0Fields {
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
  };  // struct Tcsr0Fields

  struct TCSR0 : ftl::mmio::Register<
      0x40420608u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcsr0Fields::TDRE,
      ftl::mmio::Reserved<1, 1>,
      Tcsr0Fields::TMODE,
      Tcsr0Fields::TIE,
      Tcsr0Fields::TF,
      ftl::mmio::Reserved<24, 8>> {
    using eTDRE = Tcsr0Fields::eTDRE;
    using eTMODE = Tcsr0Fields::eTMODE;
    using eTIE = Tcsr0Fields::eTIE;
    using eTF = Tcsr0Fields::eTF;
    using TDRE = Tcsr0Fields::TDRE;
    using TMODE = Tcsr0Fields::TMODE;
    using TIE = Tcsr0Fields::TIE;
    using TF = Tcsr0Fields::TF;
  };

  // Timer Compare Capture Register
  struct Tccr0Fields {
    // Timer Capture Compare
    using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tccr0Fields

  struct TCCR0 : ftl::mmio::Register<
      0x4042060Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tccr0Fields::TCC> {
    using TCC = Tccr0Fields::TCC;
  };

  // Timer Control Status Register
  struct Tcsr1Fields {
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
  };  // struct Tcsr1Fields

  struct TCSR1 : ftl::mmio::Register<
      0x40420610u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcsr1Fields::TDRE,
      ftl::mmio::Reserved<1, 1>,
      Tcsr1Fields::TMODE,
      Tcsr1Fields::TIE,
      Tcsr1Fields::TF,
      ftl::mmio::Reserved<24, 8>> {
    using eTDRE = Tcsr1Fields::eTDRE;
    using eTMODE = Tcsr1Fields::eTMODE;
    using eTIE = Tcsr1Fields::eTIE;
    using eTF = Tcsr1Fields::eTF;
    using TDRE = Tcsr1Fields::TDRE;
    using TMODE = Tcsr1Fields::TMODE;
    using TIE = Tcsr1Fields::TIE;
    using TF = Tcsr1Fields::TF;
  };

  // Timer Compare Capture Register
  struct Tccr1Fields {
    // Timer Capture Compare
    using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tccr1Fields

  struct TCCR1 : ftl::mmio::Register<
      0x40420614u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tccr1Fields::TCC> {
    using TCC = Tccr1Fields::TCC;
  };

  // Timer Control Status Register
  struct Tcsr2Fields {
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
  };  // struct Tcsr2Fields

  struct TCSR2 : ftl::mmio::Register<
      0x40420618u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcsr2Fields::TDRE,
      ftl::mmio::Reserved<1, 1>,
      Tcsr2Fields::TMODE,
      Tcsr2Fields::TIE,
      Tcsr2Fields::TF,
      ftl::mmio::Reserved<24, 8>> {
    using eTDRE = Tcsr2Fields::eTDRE;
    using eTMODE = Tcsr2Fields::eTMODE;
    using eTIE = Tcsr2Fields::eTIE;
    using eTF = Tcsr2Fields::eTF;
    using TDRE = Tcsr2Fields::TDRE;
    using TMODE = Tcsr2Fields::TMODE;
    using TIE = Tcsr2Fields::TIE;
    using TF = Tcsr2Fields::TF;
  };

  // Timer Compare Capture Register
  struct Tccr2Fields {
    // Timer Capture Compare
    using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tccr2Fields

  struct TCCR2 : ftl::mmio::Register<
      0x4042061Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tccr2Fields::TCC> {
    using TCC = Tccr2Fields::TCC;
  };

  // Timer Control Status Register
  struct Tcsr3Fields {
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
  };  // struct Tcsr3Fields

  struct TCSR3 : ftl::mmio::Register<
      0x40420620u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tcsr3Fields::TDRE,
      ftl::mmio::Reserved<1, 1>,
      Tcsr3Fields::TMODE,
      Tcsr3Fields::TIE,
      Tcsr3Fields::TF,
      ftl::mmio::Reserved<24, 8>> {
    using eTDRE = Tcsr3Fields::eTDRE;
    using eTMODE = Tcsr3Fields::eTMODE;
    using eTIE = Tcsr3Fields::eTIE;
    using eTF = Tcsr3Fields::eTF;
    using TDRE = Tcsr3Fields::TDRE;
    using TMODE = Tcsr3Fields::TMODE;
    using TIE = Tcsr3Fields::TIE;
    using TF = Tcsr3Fields::TF;
  };

  // Timer Compare Capture Register
  struct Tccr3Fields {
    // Timer Capture Compare
    using TCC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tccr3Fields

  struct TCCR3 : ftl::mmio::Register<
      0x40420624u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tccr3Fields::TCC> {
    using TCC = Tccr3Fields::TCC;
  };

};

}  // namespace regs