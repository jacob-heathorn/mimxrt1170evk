#pragma once

#include "etl/array.h"
#include "etl/string.h"
#include "etl/string_stream.h"
#include <cstdint>

class IpAddress {
public:
  explicit constexpr IpAddress(uint8_t o1,
                               uint8_t o2,
                               uint8_t o3,
                               uint8_t o4)
    : octets_{ o1, o2, o3, o4 }
  {}


  constexpr etl::array<uint8_t,4> Octets() const noexcept { return octets_; }

  // Converts to 32-bit network-order integer
  constexpr uint32_t ToUint32() const noexcept {
    return (uint32_t(octets_[0]) << 24)
         | (uint32_t(octets_[1]) << 16)
         | (uint32_t(octets_[2]) <<  8)
         | (uint32_t(octets_[3]) <<  0);
  }

  // Returns octets as a string.
  etl::string<16> ToString() const {
    etl::string<16> s;
    etl::string_stream ss(s);
    ss << int(octets_[0]) << "."
       << int(octets_[1]) << "."
       << int(octets_[2]) << "."
       << int(octets_[3]);
    return s;
  }

  // Equality operators
  bool operator==(IpAddress const& o) const noexcept {
    return octets_ == o.octets_;
  }
  bool operator!=(IpAddress const& o) const noexcept {
    return !(*this == o);
  }
private:
  etl::array<uint8_t,4> octets_;
};
