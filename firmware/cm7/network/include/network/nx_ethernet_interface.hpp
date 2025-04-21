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

  // TODO remove
  NX_IP *Ip0();
  NX_PACKET_POOL *Pool0();

  // Waits for the stack to be fully ready.
  void WaitUntilReady();

  UdpSocket *CreateUdpSocket() override;
};
