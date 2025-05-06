#pragma once

#include "network/ipv4_address.hpp"

class Ipv4Endpoint {
public:
  Ipv4Endpoint() = default;

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
  constexpr Ipv4Address address() const noexcept { return address_; }
  constexpr void set_address(const Ipv4Address address) noexcept { address_ = address; }
  constexpr uint16_t port()    const noexcept { return port_;    }
  constexpr void set_port(const uint16_t port) noexcept { port_ = port; }

  etl::string<21> ToString() const {
    etl::string<21> s;
    etl::string_stream ss(s);
    ss << address().ToString() << ":" << port();
    return s;
  }

private:
  Ipv4Address address_ = {"0.0.0.0"};
  uint16_t    port_ = 0;
};
