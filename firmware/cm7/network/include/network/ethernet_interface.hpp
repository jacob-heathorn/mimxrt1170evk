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
  explicit DelegatingDeleter(PolymorphicDeleter<T> *const polymorphic_deleter)
    : polymorphic_deleter_{polymorphic_deleter} {}

  ~DelegatingDeleter() = default;
  
  void operator()(T* s) const {
    polymorphic_deleter_->operator()(s);
  }
  DelegatingDeleter(const DelegatingDeleter&) = default;
  DelegatingDeleter(DelegatingDeleter&&) noexcept = default;
private:
  PolymorphicDeleter<T> *polymorphic_deleter_ = nullptr;
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
