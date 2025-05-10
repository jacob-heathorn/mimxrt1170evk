#pragma once

#include <memory>

#include "network/ipv4.hpp"

class UdpSocket;
class EthernetInterface;


struct BumpPoolReleaser
{
  virtual void release(UdpSocket* s) const = 0;
};

class EthernetInterface
{
  public:
  struct UdpSocketDeleter
  {
    BumpPoolReleaser* releaser = nullptr;

    void operator()(UdpSocket* s) const {
      releaser->release(s);
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
};
