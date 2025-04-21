#pragma once

#include "ftl/singleton.hpp"
#include "nx_api.h" // todo remove
#include "network/udp_socket.hpp"
#include "network/ethernet_interface.hpp"

class GigabitEthernet : public EthernetInterface, public ftl::Singleton<GigabitEthernet>
{
  friend class ftl::Singleton<GigabitEthernet>;
private:
  GigabitEthernet();
  ~GigabitEthernet() override = default;

  // Rule of 5
  GigabitEthernet(const GigabitEthernet&) = delete;
  GigabitEthernet& operator=(const GigabitEthernet&) = delete;
  GigabitEthernet(GigabitEthernet&&) = delete;
  GigabitEthernet& operator=(GigabitEthernet&&) = delete;

public:
  // TODO remove
  NX_IP *Ip0();
  NX_PACKET_POOL *Pool0();

  // Waits for the stack to be fully ready.
  void WaitUntilReady();

  bool RegisterUdpSocket(UdpSocket &sock) override;
};
