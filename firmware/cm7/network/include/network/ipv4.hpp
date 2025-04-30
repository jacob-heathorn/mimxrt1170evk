#pragma once

#include "etl/array.h"
#include "etl/string.h"
#include "etl/string_stream.h"
#include <cstdint>

class Ipv4Address {
public:
  explicit constexpr Ipv4Address(uint8_t o1, uint8_t o2, uint8_t o3, uint8_t o4)
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
  bool operator==(Ipv4Address const& o) const noexcept {
    return octets_ == o.octets_;
  }
  bool operator!=(Ipv4Address const& o) const noexcept {
    return !(*this == o);
  }
private:
  etl::array<uint8_t,4> octets_;
};


//----------------------------------------------------------------------
// A class representing an IPv4 subnet mask (contiguous ones then zeros).
class Ipv4Mask : public Ipv4Address {
  public:
    Ipv4Mask(uint8_t m1, uint8_t m2, uint8_t m3, uint8_t m4)
      : Ipv4Address(m1, m2, m3, m4)
    {
      assert(this->IsValid());
    }
  
    // Checks that the mask is contiguous ones then zeros
    constexpr bool IsValid() const noexcept {
      uint32_t m   = ToUint32();
      uint32_t inv = ~m;                   // host‐portion mask: 00000000.00000000.00000000.11111111
      // valid if inv is 0 (i.e. /32) or a contiguous run of ones:
      // inv = 0b000...0111...1  ⇒  inv & (inv + 1) == 0
      return inv == 0u || ((inv & (inv + 1u)) == 0u);
    }
};
