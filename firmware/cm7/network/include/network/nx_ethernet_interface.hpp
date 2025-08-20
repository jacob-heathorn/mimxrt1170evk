#pragma once

#include "nx_api.h"
#include "stdint.h"

#include "ftl/ethernet/interface.hpp"
#include "ftl/allocator/strategy.hpp"
#include "ftl/allocator/obj_allocator.hpp"

class NxUdpSocket;

class NxEthernetInterface : public ftl::ethernet::Interface
{
public:
  static constexpr uint32_t kMaxPacketSize = 1536;
  static constexpr uint32_t kNumPackets = 50;
  static constexpr uint32_t kPacketPoolSize = ((kMaxPacketSize + sizeof(NX_PACKET)) * kNumPackets);
  static constexpr uint32_t kIpThreadStackSize = 2048;
  static constexpr uint32_t kArpSpaceSize = 1024;

  NxEthernetInterface(ftl::ipv4::Address address, ftl::ipv4::Mask mask,
                      ftl::allocator::ObjAllocator<NxUdpSocket>& socket_allocator);
  ~NxEthernetInterface() override = default;

  NxEthernetInterface(const NxEthernetInterface&) = delete;
  NxEthernetInterface& operator=(const NxEthernetInterface&) = delete;
  NxEthernetInterface(NxEthernetInterface&&) = delete;
  NxEthernetInterface& operator=(NxEthernetInterface&&) = delete;

  NX_IP *Ip() { return &ip_; }
  NX_PACKET_POOL *Pool() {  return &pool_; };

  // Waits for the stack to be fully ready.
  void WaitUntilReady();

  ftl::ipv4::udp::SocketPtr CreateUdpSocket() override;

private:
  NX_PACKET_POOL pool_{};
  NX_IP ip_ {};
  ftl::allocator::ObjAllocator<NxUdpSocket>& socket_allocator_;
};
