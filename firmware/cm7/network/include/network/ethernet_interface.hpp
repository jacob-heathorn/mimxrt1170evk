#pragma once

#include <memory>

#include "network/ipv4.hpp"

class UdpSocket;
class EthernetInterface;


template <typename T>
struct PolymorphicDeleter
{
  virtual void operator()(T* s) = 0;
};

template <typename T>
struct DelegatingDeleter
{
  PolymorphicDeleter<T> *polymorphic_deleter_ = nullptr;
  void operator()(T* s) const {
    polymorphic_deleter_->operator()(s);
  }
};

using UdpSocketPtr = std::unique_ptr<UdpSocket, DelegatingDeleter<UdpSocket>>;

class EthernetInterface
{
  public:

    EthernetInterface() = default;
    virtual ~EthernetInterface() = default;

    EthernetInterface(const EthernetInterface&) = delete;
    EthernetInterface& operator=(const EthernetInterface&) = delete;
    EthernetInterface(EthernetInterface&&) = delete;
    EthernetInterface& operator=(EthernetInterface&&) = delete;

    virtual UdpSocketPtr CreateUdpSocket() = 0;
};
