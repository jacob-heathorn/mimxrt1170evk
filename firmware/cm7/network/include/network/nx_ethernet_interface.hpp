#pragma once

#include "nx_api.h"
#include "network/ethernet_interface.hpp"

class UdpSocket;

class NxEthernetInterface : public EthernetInterface
{
public:
  NxEthernetInterface();
  ~NxEthernetInterface() override = default;

  NxEthernetInterface(const NxEthernetInterface&) = delete;
  NxEthernetInterface& operator=(const NxEthernetInterface&) = delete;
  NxEthernetInterface(NxEthernetInterface&&) = delete;
  NxEthernetInterface& operator=(NxEthernetInterface&&) = delete;

  NX_IP *Ip() { return &ip_; }
  NX_PACKET_POOL *Pool() {  return &pool_; };

  // Waits for the stack to be fully ready.
  void WaitUntilReady();

  UdpSocket *CreateUdpSocket() override;

private:
  NX_PACKET_POOL pool_{};
  NX_IP ip_ {};
};

