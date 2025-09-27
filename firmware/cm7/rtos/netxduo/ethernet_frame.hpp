#pragma once

#include "ftl/allocator/data_frame.hpp"
#include "nx_api.h"
#include <cstring>
#include <cassert>

namespace ethernet {

// Ethernet frame class following the same pattern as ftl::ipv4::udp::Payload
// Supports runtime-sized buffers up to 1536 bytes (matching NX_PACKET max size)
class Frame : public ftl::allocator::DataFrame<Frame> {
public:
    // Construct with frame size
    explicit Frame(std::size_t size)
        : DataFrame(size) {
    }

    // Construct from NX_PACKET - copies data with 2-byte padding for hardware
    explicit Frame(NX_PACKET* packet) {
        // Assumes packet is not chained (nx_packet_next == nullptr)
        assert(packet->nx_packet_next == nullptr && "Frame does not support chained packets");

        // Calculate frame size from packet pointers
        size_t frame_size = packet->nx_packet_append_ptr - packet->nx_packet_prepend_ptr;

        // Allocate with 2-byte padding at the start for hardware requirement
        *this = Frame(frame_size + 2);

        // Copy packet data starting at offset 2
        std::memcpy(front() + 2, packet->nx_packet_prepend_ptr, frame_size);
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
