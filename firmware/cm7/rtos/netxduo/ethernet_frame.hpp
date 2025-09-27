#pragma once

#include "ftl/allocator/data_frame.hpp"

namespace ethernet {

// Ethernet frame class following the same pattern as ftl::ipv4::udp::Payload
// Supports runtime-sized buffers up to 1536 bytes (matching NX_PACKET max size)
class Frame : public ftl::allocator::DataFrame<Frame> {
public:
    // Construct with frame size
    explicit Frame(std::size_t size)
        : DataFrame(size) {
    }

    Frame() = default;

    // Movable but not copyable
    Frame(Frame&&) noexcept = default;
    Frame& operator=(Frame&&) noexcept = default;
    Frame(const Frame&) = delete;
    Frame& operator=(const Frame&) = delete;
    ~Frame() = default;
};

} // namespace ethernet
