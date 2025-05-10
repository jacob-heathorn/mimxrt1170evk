#pragma once

#include "nx_api.h"
#include "network/ethernet_interface.hpp"
#include "stdint.h"

class UdpSocket;

class NxEthernetInterface : public EthernetInterface
{
public:
  static constexpr uint32_t kMaxPacketSize = 1536;
  static constexpr uint32_t kNumPackets = 50;
  static constexpr uint32_t kPacketPoolSize = ((kMaxPacketSize + sizeof(NX_PACKET)) * kNumPackets);
  static constexpr uint32_t kIpThreadStackSize = 2048;
  static constexpr uint32_t kArpSpaceSize = 1024;

  NxEthernetInterface(Ipv4Address address, Ipv4Mask mask);
  ~NxEthernetInterface() override = default;

  NxEthernetInterface(const NxEthernetInterface&) = delete;
  NxEthernetInterface& operator=(const NxEthernetInterface&) = delete;
  NxEthernetInterface(NxEthernetInterface&&) = delete;
  NxEthernetInterface& operator=(NxEthernetInterface&&) = delete;

  NX_IP *Ip() { return &ip_; }
  NX_PACKET_POOL *Pool() {  return &pool_; };

  // Waits for the stack to be fully ready.
  void WaitUntilReady();

  std::unique_ptr<UdpSocket, EthernetInterface::UdpSocketDeleter> CreateUdpSocket() override;

private:
  NX_PACKET_POOL pool_{};
  NX_IP ip_ {};
};
