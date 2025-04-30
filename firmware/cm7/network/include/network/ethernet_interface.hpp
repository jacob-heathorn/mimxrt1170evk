#pragma once

#include "network/ip_address.hpp"

class UdpSocket;

class EthernetInterface
{
  public:
    EthernetInterface() = default;
    virtual ~EthernetInterface() = default;

    EthernetInterface(const EthernetInterface&) = delete;
    EthernetInterface& operator=(const EthernetInterface&) = delete;
    EthernetInterface(EthernetInterface&&) = delete;
    EthernetInterface& operator=(EthernetInterface&&) = delete;

    virtual UdpSocket* CreateUdpSocket() = 0;
};
