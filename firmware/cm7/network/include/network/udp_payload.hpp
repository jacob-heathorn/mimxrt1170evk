#pragma once

#include <cstddef>
#include <cstdint>

#include "etl/string.h"
#include "ftl/data_frame.hpp"

namespace ftl {

// Provides an interface to an ethernet data frame to access UDP payload data. 
class UdpPayload : private DataFrame {
public:
  // Offsets into the raw frame
  //
  // NOTE: We have not implemented lower frame layers (e.g. EthernetFrame)
  static constexpr std::size_t kPayloadOffset = 0;

  // Construct with payload size
  explicit UdpPayload(std::size_t size)
      : DataFrame(size)
  {}

  // Access the UDP payload pointer
  uint8_t* data() noexcept { return front() + kPayloadOffset; }
  const uint8_t* data() const noexcept { return front() + kPayloadOffset; }
  using DataFrame::size;  // expose base size() without redefinition
};

static_assert(sizeof(UdpPayload) == sizeof(DataFrame));
}
