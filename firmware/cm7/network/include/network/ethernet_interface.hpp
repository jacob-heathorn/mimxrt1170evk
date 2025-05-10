#pragma once

#include <memory>

#include "network/ipv4.hpp"

class UdpSocket;
class EthernetInterface;


class EthernetInterface
{
  public:
  struct UdpSocketDeleter
  {
    EthernetInterface* owner;

    void operator()(UdpSocket* s) const {
      owner->ReclaimUdpSocket(s);
    }
  };

  public:
    EthernetInterface() = default;
    virtual ~EthernetInterface() = default;

    EthernetInterface(const EthernetInterface&) = delete;
    EthernetInterface& operator=(const EthernetInterface&) = delete;
    EthernetInterface(EthernetInterface&&) = delete;
    EthernetInterface& operator=(EthernetInterface&&) = delete;

    virtual std::unique_ptr<UdpSocket, UdpSocketDeleter> CreateUdpSocket() = 0;

  protected:
    virtual void ReclaimUdpSocket(UdpSocket* s) = 0;
};
