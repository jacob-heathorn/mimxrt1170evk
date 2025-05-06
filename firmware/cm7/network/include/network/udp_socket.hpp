#pragma once

#include "stdint.h"
#include "network/ipv4_endpoint.hpp"

class EthernetInterface;

class UdpSocket {
public:
  UdpSocket() = default;

  virtual ~UdpSocket() = default;
  UdpSocket(const UdpSocket&) = delete;
  UdpSocket& operator=(const UdpSocket&) = delete;
  UdpSocket(UdpSocket&&) = delete;
  UdpSocket& operator=(UdpSocket&&) = delete;

  virtual bool open(size_t recieve_queue_len = 1) = 0;
  virtual bool bind(uint16_t port = 0) = 0;
  virtual bool send(const char* message, Ipv4Endpoint dest) = 0;
  virtual bool receive(char* buffer, size_t buffer_len, size_t& out_len, Ipv4Endpoint *const peer) = 0;
  virtual void close() = 0;
};
