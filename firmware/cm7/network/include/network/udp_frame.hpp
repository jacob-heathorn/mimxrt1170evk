#pragma once

#include <cstddef>
#include <cstdint>
#include "ftl/data_frame.hpp"

namespace ftl {

// UdpFrame: wraps a DataFrame to hold a UDP header + payload
class UdpFrame : public DataFrame {
public:
    // Field offsets within the UDP header
    static constexpr std::size_t SourcePortOffset      = 0;
    static constexpr std::size_t DestinationPortOffset = SourcePortOffset + sizeof(uint16_t);
    static constexpr std::size_t LengthOffset          = DestinationPortOffset + sizeof(uint16_t);
    static constexpr std::size_t ChecksumOffset        = LengthOffset + sizeof(uint16_t);

    // Total UDP header size (sum of all fields)
    static constexpr std::size_t HeaderSize = ChecksumOffset + sizeof(uint16_t);

    // Construct with payload size => allocates header + payload
    explicit UdpFrame(std::size_t payloadSize) : DataFrame(HeaderSize + payloadSize) {
      setLength();
    }

    // Default constructs an empty data frame.
    UdpFrame() = default;

    // --- Header setters ---
    void setSourcePort(uint16_t port) noexcept {
        set<uint16_t>(SourcePortOffset, htons(port));
    }

    void setDestinationPort(uint16_t port) noexcept {
        set<uint16_t>(DestinationPortOffset, htons(port));
    }

    void setChecksum(uint16_t checksum) noexcept {
        set<uint16_t>(ChecksumOffset, htons(checksum));
    }

    // --- Header getters ---
    uint16_t getSourcePort() const noexcept {
        return ntohs(get<uint16_t>(SourcePortOffset));
    }

    uint16_t getDestinationPort() const noexcept {
        return ntohs(get<uint16_t>(DestinationPortOffset));
    }

    uint16_t getLength() const noexcept {
      return ntohs(get<uint16_t>(LengthOffset));
    }

    uint16_t getChecksum() const noexcept {
        return ntohs(get<uint16_t>(ChecksumOffset));
    }

    // --- Payload accessors ---
    uint8_t* payload() noexcept {
        return front() + HeaderSize;
    }

    std::size_t payloadSize() const noexcept {
        return size() - HeaderSize;
    }
private:
  void setLength() noexcept {
    set<uint16_t>(LengthOffset, htons(HeaderSize + payloadSize()));
  }
};

static_assert(sizeof(UdpFrame) == sizeof(DataFrame));

} // namespace ftl
