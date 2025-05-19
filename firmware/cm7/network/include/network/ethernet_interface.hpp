#pragma once

#include <memory>

#include "ftl/deleter.hpp"
#include "network/ipv4.hpp"

class UdpSocket;
class EthernetInterface;

using UdpSocketPtr = std::unique_ptr<UdpSocket, DelegatingDeleter<UdpSocket>>;

class EthernetInterface
{
  public:

    EthernetInterface() = default;
    virtual ~EthernetInterface() = default;

    // No copying or moving.
    EthernetInterface(const EthernetInterface&) = delete;            // Delete copy constructor
    EthernetInterface& operator=(const EthernetInterface&) = delete; // Delete copy assignment operator
    EthernetInterface(EthernetInterface&&) = delete;                 // Delete move constructor
    EthernetInterface& operator=(EthernetInterface&&) = delete;      // Delete move assignment operator

    virtual UdpSocketPtr CreateUdpSocket() = 0;
};
