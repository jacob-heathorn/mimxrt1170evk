#pragma once

class UdpSocket;

class EthernetInterface
{
  public:
    EthernetInterface() = default;
    virtual ~EthernetInterface() = default;

    // Rule of 5
    EthernetInterface(const EthernetInterface&) = delete;
    EthernetInterface& operator=(const EthernetInterface&) = delete;
    EthernetInterface(EthernetInterface&&) = delete;
    EthernetInterface& operator=(EthernetInterface&&) = delete;

    virtual UdpSocket* CreateUdpSocket() = 0;
};
