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
  
  // No copying or moving.
  PolymorphicDeleter(const PolymorphicDeleter&) = delete;            // Delete copy constructor
  PolymorphicDeleter& operator=(const PolymorphicDeleter&) = delete; // Delete copy assignment operator
  PolymorphicDeleter(PolymorphicDeleter&&) = delete;                 // Delete move constructor
  PolymorphicDeleter& operator=(PolymorphicDeleter&&) = delete;      // Delete move assignment operator
  
  virtual void operator()(T* s) = 0;
};

template <typename T>
class DelegatingDeleter
{
public:
  explicit DelegatingDeleter(PolymorphicDeleter<T> *const polymorphic_deleter)
    : polymorphic_deleter_{polymorphic_deleter} {}
  ~DelegatingDeleter() = default;

  // Default copy and move constructors.
  DelegatingDeleter(const DelegatingDeleter&) = default;
  DelegatingDeleter(DelegatingDeleter&&) noexcept = default;
  
  // Delete assignment operators.
  DelegatingDeleter& operator=(const DelegatingDeleter&) = delete;  // Delete copy assignment operator
  DelegatingDeleter& operator=(DelegatingDeleter&&) = delete;       // Delete move assignment operator
  
  void operator()(T* s) const {
    polymorphic_deleter_->operator()(s);
  }
private:
  PolymorphicDeleter<T> *polymorphic_deleter_ = nullptr;
};

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
