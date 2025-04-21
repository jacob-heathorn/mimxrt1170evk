#pragma once

#include "stdint.h"

class EthernetInterface;

class UdpSocket {
public:
  UdpSocket() = default;

  virtual ~UdpSocket() = default;
  UdpSocket(const UdpSocket&) = delete;
  UdpSocket& operator=(const UdpSocket&) = delete;
  UdpSocket(UdpSocket&&) = delete;
  UdpSocket& operator=(UdpSocket&&) = delete;

  virtual bool open() = 0;
  virtual bool bind(uint16_t port = 0) = 0;
  virtual bool send(const char* message, uint16_t port) = 0;
  virtual void close() = 0;
};
