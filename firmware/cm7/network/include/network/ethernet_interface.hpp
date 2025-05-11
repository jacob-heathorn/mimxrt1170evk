#pragma once

#include <memory>

#include "network/ipv4.hpp"

class UdpSocket;
class EthernetInterface;


template <typename T>
class PolymorphicDeleter
{
public:
  PolymorphicDeleter() = default;
  virtual ~PolymorphicDeleter() = default;
  virtual void operator()(T* s) = 0;

private:
  PolymorphicDeleter(const PolymorphicDeleter&) = delete;
  PolymorphicDeleter& operator=(const PolymorphicDeleter&) = delete;
  PolymorphicDeleter(PolymorphicDeleter&&) noexcept = delete;
  PolymorphicDeleter& operator=(PolymorphicDeleter&&) noexcept = delete;
};

template <typename T>
class DelegatingDeleter
{
public:
  PolymorphicDeleter<T> *polymorphic_deleter_ = nullptr;
  void operator()(T* s) const {
    polymorphic_deleter_->operator()(s);
  }
  DelegatingDeleter(const DelegatingDeleter&) = default;
  DelegatingDeleter(DelegatingDeleter&&) noexcept = default;
private:
  DelegatingDeleter& operator=(const DelegatingDeleter&) = delete;
  DelegatingDeleter& operator=(DelegatingDeleter&&) noexcept = delete;
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
