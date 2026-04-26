#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI HOST APB PKT Interface
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct DsiHostApbPktIf {
  // TX_PAYLOAD
  struct TxPayloadFields {
    // Tx Payload data write register. Write to this register loads the payload FIFO with 32 bit values.
    using PAYLOAD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TxPayloadFields

  struct TX_PAYLOAD : ftl::mmio::Register<
      0x4080C280u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TxPayloadFields::PAYLOAD> {
    using PAYLOAD = TxPayloadFields::PAYLOAD;
  };

  // PKT_CONTROL
  struct PktControlFields {
    // Tx packet control
    using CTRL = ftl::mmio::Field<27, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PktControlFields

  struct PKT_CONTROL : ftl::mmio::Register<
      0x4080C284u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PktControlFields::CTRL,
      ftl::mmio::Reserved<5, 27>> {
    using CTRL = PktControlFields::CTRL;
  };

  // SEND_PACKET
  struct SendPacketFields {
    enum class eTX_SEND : std::uint32_t {
      // Packet not sent
      eTX_SEND_0 = 0,
      // Packet is sent
      eTX_SEND_1 = 1,
    };

    // Tx send packet, writing to this register causes the packet described in dsi_host_pkt_control to be sent.
    using TX_SEND = ftl::mmio::Field<1, 0, eTX_SEND, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SendPacketFields

  struct SEND_PACKET : ftl::mmio::Register<
      0x4080C288u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SendPacketFields::TX_SEND,
      ftl::mmio::Reserved<31, 1>> {
    using eTX_SEND = SendPacketFields::eTX_SEND;
    using TX_SEND = SendPacketFields::TX_SEND;
  };

  // PKT_STATUS
  struct PktStatusFields {
    // Status of APB to packet interface.
    using STATUS = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PktStatusFields

  struct PKT_STATUS : ftl::mmio::Register<
      0x4080C28Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PktStatusFields::STATUS,
      ftl::mmio::Reserved<23, 9>> {
    using STATUS = PktStatusFields::STATUS;
  };

  // PKT_FIFO_WR_LEVEL
  struct PktFifoWrLevelFields {
    // Write level of APB to pkt interface FIFO
    using WR = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PktFifoWrLevelFields

  struct PKT_FIFO_WR_LEVEL : ftl::mmio::Register<
      0x4080C290u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PktFifoWrLevelFields::WR,
      ftl::mmio::Reserved<16, 16>> {
    using WR = PktFifoWrLevelFields::WR;
  };

  // PKT_FIFO_RD_LEVEL
  struct PktFifoRdLevelFields {
    // Read level of APB to pkt interface FIFO
    using RD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PktFifoRdLevelFields

  struct PKT_FIFO_RD_LEVEL : ftl::mmio::Register<
      0x4080C294u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PktFifoRdLevelFields::RD,
      ftl::mmio::Reserved<16, 16>> {
    using RD = PktFifoRdLevelFields::RD;
  };

  // PKT_RX_PAYLOAD
  struct PktRxPayloadFields {
    // APB to pkt interface Rx payload read
    using PAYLOAD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PktRxPayloadFields

  struct PKT_RX_PAYLOAD : ftl::mmio::Register<
      0x4080C298u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PktRxPayloadFields::PAYLOAD> {
    using PAYLOAD = PktRxPayloadFields::PAYLOAD;
  };

  // PKT_RX_PKT_HEADER
  struct PktRxPktHeaderFields {
    // APB to pkt interface Rx packet header
    using HEADER = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PktRxPktHeaderFields

  struct PKT_RX_PKT_HEADER : ftl::mmio::Register<
      0x4080C29Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PktRxPktHeaderFields::HEADER,
      ftl::mmio::Reserved<8, 24>> {
    using HEADER = PktRxPktHeaderFields::HEADER;
  };

  // IRQ_STATUS
  struct IrqStatusFields {
    // Status of APB to packet interface.
    using STATUS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IrqStatusFields

  struct IRQ_STATUS : ftl::mmio::Register<
      0x4080C2A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IrqStatusFields::STATUS> {
    using STATUS = IrqStatusFields::STATUS;
  };

  // IRQ_STATUS2
  struct IrqStatus2Fields {
    // Status of APB to packet interface part 2, read part 2 first then dsi_host_irq_status. Reading dsi_host_irq_status will clear both status and status2.
    using STATUS2 = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IrqStatus2Fields

  struct IRQ_STATUS2 : ftl::mmio::Register<
      0x4080C2A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IrqStatus2Fields::STATUS2,
      ftl::mmio::Reserved<29, 3>> {
    using STATUS2 = IrqStatus2Fields::STATUS2;
  };

  // IRQ_MASK
  struct IrqMaskFields {
    // IRQ Mask
    using MASK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IrqMaskFields

  struct IRQ_MASK : ftl::mmio::Register<
      0x4080C2A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IrqMaskFields::MASK> {
    using MASK = IrqMaskFields::MASK;
  };

  // IRQ_MASK2
  struct IrqMask2Fields {
    // IRQ mask 2
    using MASK2 = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IrqMask2Fields

  struct IRQ_MASK2 : ftl::mmio::Register<
      0x4080C2ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IrqMask2Fields::MASK2,
      ftl::mmio::Reserved<29, 3>> {
    using MASK2 = IrqMask2Fields::MASK2;
  };

};

}  // namespace regs