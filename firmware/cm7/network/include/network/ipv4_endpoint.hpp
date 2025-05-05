#pragma once

#include "network/ipv4_address.hpp"

class Ipv4Endpoint {
public:
  // 1) Main ctor: Ipv4Address + port
  constexpr Ipv4Endpoint(Ipv4Address addr, uint16_t port) noexcept
    : address_(addr), port_(port)
  {}

  // 2) Convenience from string literal or etl::string_view
  Ipv4Endpoint(const char* addr, uint16_t port)
    : Ipv4Endpoint(Ipv4Address{addr}, port)
  {}
  Ipv4Endpoint(etl::string_view addr, uint16_t port)
    : Ipv4Endpoint(Ipv4Address{addr}, port)
  {}

  // Accessors
  constexpr Ipv4Address   Address() const noexcept { return address_; }
  constexpr uint16_t       Port()    const noexcept { return port_;    }

  etl::string<21> ToString() const {
    etl::string<21> s;
    etl::string_stream ss(s);
    ss << Address().ToString() << ":" << Port();
    return s;
  }

private:
  Ipv4Address address_;
  uint16_t    port_;
};
