#include "etl/array.h"
// #include "etl/string.h"
// #include "etl/string_stream.h"
// #include <cstdint>

// class IpAddress {
// public:
//   explicit constexpr IpAddress(uint8_t o1,
//                                uint8_t o2,
//                                uint8_t o3,
//                                uint8_t o4)
//     : octets_{ o1, o2, o3, o4 }
//   {}

//   // 2) static factory to parse from dotted‐string
//   static bool fromString(etl::string_view sv, IpAddress& out)
//   {
//     etl::array<uint8_t,4> tmp;
//     size_t idx = 0;

//     int val = 0;
//     for (char c : sv) {
//       if (c >= '0' && c <= '9') {
//         val = val * 10 + (c - '0');
//         if (val > 255) return false;        // overflow
//       }
//       else if (c == '.' && idx < 4) {
//         tmp[idx++] = static_cast<uint8_t>(val);
//         val = 0;
//       }
//       else {
//         return false;                       // invalid char
//       }
//     }
//     if (idx != 3) return false;            // must have 3 dots
//     tmp[3] = static_cast<uint8_t>(val);

//     out.octets_ = tmp;
//     return true;
//   }

//   // 3) constexpr accessor
//   constexpr etl::array<uint8_t,4> octets() const noexcept { return octets_; }

//   // 4) convert to 32-bit network-order integer
//   constexpr uint32_t to_uint32() const noexcept {
//     return (uint32_t(octets_[0]) << 24)
//          | (uint32_t(octets_[1]) << 16)
//          | (uint32_t(octets_[2]) <<  8)
//          | (uint32_t(octets_[3]) <<  0);
//   }

//   // 5) pretty‐print
//   etl::string<16> toString() const {
//     etl::string<16> s;
//     etl::string_stream ss(s);
//     ss << int(octets_[0]) << "."
//        << int(octets_[1]) << "."
//        << int(octets_[2]) << "."
//        << int(octets_[3]);
//     return s;
//   }

//   // 6) equality
//   bool operator==(IpAddress const& o) const noexcept = default;
//   bool operator!=(IpAddress const& o) const noexcept = default;

// private:
//   etl::array<uint8_t,4> octets_;
// };
