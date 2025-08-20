#pragma once

#include "ftl/singleton.hpp"
#include "network/nx_ethernet_interface.hpp"
#include "network/nx_udp_socket.hpp"

class GigabitEthernet : public NxEthernetInterface, public ftl::Singleton<GigabitEthernet>
{
  friend class ftl::Singleton<GigabitEthernet>;

  private:
    GigabitEthernet(ftl::ipv4::Address address, ftl::ipv4::Mask mask,
                    ftl::allocator::ObjAllocator<NxUdpSocket>& socket_allocator);
    ~GigabitEthernet() override = default;

    // Rule of 5
    GigabitEthernet(const GigabitEthernet&) = delete;
    GigabitEthernet& operator=(const GigabitEthernet&) = delete;
    GigabitEthernet(GigabitEthernet&&) = delete;
    GigabitEthernet& operator=(GigabitEthernet&&) = delete;


    void InitEnetModuleClock();
    void IomuxcSelectEnetClock();
};
