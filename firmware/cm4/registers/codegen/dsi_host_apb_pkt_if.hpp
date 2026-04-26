#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI HOST APB PKT Interface
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct DsiHostApbPktIf {
  // TX_PAYLOAD
  struct TX_PAYLOAD_fields_ {
    // Tx Payload data write register. Write to this register loads the payload FIFO with 32 bit values.
    using PAYLOAD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TX_PAYLOAD_fields_

  struct TX_PAYLOAD : ftl::mmio::Register<
      0x4080C280u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TX_PAYLOAD_fields_::PAYLOAD> {
    using PAYLOAD = TX_PAYLOAD_fields_::PAYLOAD;
  };

  // PKT_CONTROL
  struct PKT_CONTROL_fields_ {
    // Tx packet control
    using CTRL = ftl::mmio::Field<27, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PKT_CONTROL_fields_

  struct PKT_CONTROL : ftl::mmio::Register<
      0x4080C284u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PKT_CONTROL_fields_::CTRL,
      ftl::mmio::Reserved<5, 27>> {
    using CTRL = PKT_CONTROL_fields_::CTRL;
  };

  // SEND_PACKET
  struct SEND_PACKET_fields_ {
    enum class eTX_SEND : std::uint32_t {
      // Packet not sent
      eTX_SEND_0 = 0,
      // Packet is sent
      eTX_SEND_1 = 1,
    };

    // Tx send packet, writing to this register causes the packet described in dsi_host_pkt_control to be sent.
    using TX_SEND = ftl::mmio::Field<1, 0, eTX_SEND, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SEND_PACKET_fields_

  struct SEND_PACKET : ftl::mmio::Register<
      0x4080C288u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SEND_PACKET_fields_::TX_SEND,
      ftl::mmio::Reserved<31, 1>> {
    using eTX_SEND = SEND_PACKET_fields_::eTX_SEND;
    using TX_SEND = SEND_PACKET_fields_::TX_SEND;
  };

  // PKT_STATUS
  struct PKT_STATUS_fields_ {
    // Status of APB to packet interface.
    using STATUS = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PKT_STATUS_fields_

  struct PKT_STATUS : ftl::mmio::Register<
      0x4080C28Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PKT_STATUS_fields_::STATUS,
      ftl::mmio::Reserved<23, 9>> {
    using STATUS = PKT_STATUS_fields_::STATUS;
  };

  // PKT_FIFO_WR_LEVEL
  struct PKT_FIFO_WR_LEVEL_fields_ {
    // Write level of APB to pkt interface FIFO
    using WR = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PKT_FIFO_WR_LEVEL_fields_

  struct PKT_FIFO_WR_LEVEL : ftl::mmio::Register<
      0x4080C290u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PKT_FIFO_WR_LEVEL_fields_::WR,
      ftl::mmio::Reserved<16, 16>> {
    using WR = PKT_FIFO_WR_LEVEL_fields_::WR;
  };

  // PKT_FIFO_RD_LEVEL
  struct PKT_FIFO_RD_LEVEL_fields_ {
    // Read level of APB to pkt interface FIFO
    using RD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PKT_FIFO_RD_LEVEL_fields_

  struct PKT_FIFO_RD_LEVEL : ftl::mmio::Register<
      0x4080C294u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PKT_FIFO_RD_LEVEL_fields_::RD,
      ftl::mmio::Reserved<16, 16>> {
    using RD = PKT_FIFO_RD_LEVEL_fields_::RD;
  };

  // PKT_RX_PAYLOAD
  struct PKT_RX_PAYLOAD_fields_ {
    // APB to pkt interface Rx payload read
    using PAYLOAD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PKT_RX_PAYLOAD_fields_

  struct PKT_RX_PAYLOAD : ftl::mmio::Register<
      0x4080C298u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PKT_RX_PAYLOAD_fields_::PAYLOAD> {
    using PAYLOAD = PKT_RX_PAYLOAD_fields_::PAYLOAD;
  };

  // PKT_RX_PKT_HEADER
  struct PKT_RX_PKT_HEADER_fields_ {
    // APB to pkt interface Rx packet header
    using HEADER = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PKT_RX_PKT_HEADER_fields_

  struct PKT_RX_PKT_HEADER : ftl::mmio::Register<
      0x4080C29Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PKT_RX_PKT_HEADER_fields_::HEADER,
      ftl::mmio::Reserved<8, 24>> {
    using HEADER = PKT_RX_PKT_HEADER_fields_::HEADER;
  };

  // IRQ_STATUS
  struct IRQ_STATUS_fields_ {
    // Status of APB to packet interface.
    using STATUS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IRQ_STATUS_fields_

  struct IRQ_STATUS : ftl::mmio::Register<
      0x4080C2A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IRQ_STATUS_fields_::STATUS> {
    using STATUS = IRQ_STATUS_fields_::STATUS;
  };

  // IRQ_STATUS2
  struct IRQ_STATUS2_fields_ {
    // Status of APB to packet interface part 2, read part 2 first then dsi_host_irq_status. Reading dsi_host_irq_status will clear both status and status2.
    using STATUS2 = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IRQ_STATUS2_fields_

  struct IRQ_STATUS2 : ftl::mmio::Register<
      0x4080C2A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IRQ_STATUS2_fields_::STATUS2,
      ftl::mmio::Reserved<29, 3>> {
    using STATUS2 = IRQ_STATUS2_fields_::STATUS2;
  };

  // IRQ_MASK
  struct IRQ_MASK_fields_ {
    // IRQ Mask
    using MASK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IRQ_MASK_fields_

  struct IRQ_MASK : ftl::mmio::Register<
      0x4080C2A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IRQ_MASK_fields_::MASK> {
    using MASK = IRQ_MASK_fields_::MASK;
  };

  // IRQ_MASK2
  struct IRQ_MASK2_fields_ {
    // IRQ mask 2
    using MASK2 = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IRQ_MASK2_fields_

  struct IRQ_MASK2 : ftl::mmio::Register<
      0x4080C2ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IRQ_MASK2_fields_::MASK2,
      ftl::mmio::Reserved<29, 3>> {
    using MASK2 = IRQ_MASK2_fields_::MASK2;
  };

};

}  // namespace regs