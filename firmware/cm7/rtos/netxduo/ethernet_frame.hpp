#pragma once

#include "ftl/allocator/data_frame.hpp"
#include "tx_buffer_descriptor.h"
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

    Frame() = default;

    // Movable but not copyable
    Frame(Frame&&) noexcept = default;
    Frame& operator=(Frame&&) noexcept = default;
    Frame(const Frame&) = delete;
    Frame& operator=(const Frame&) = delete;
    ~Frame() = default;
};

// TxFrame encapsulates an Ethernet frame for transmission
// Owns the frame data and manages the associated descriptor
class TxFrame {
public:
    // Constructs a TxFrame by copying data from NX_PACKET
    // After construction, the original NX_PACKET can be released immediately
    // as TxFrame owns its own copy of the data
    TxFrame(TxBufferDescriptor &descriptor, NX_PACKET* packet)
        : descriptor_(&descriptor) {
        // Assumes packet is not chained (nx_packet_next == nullptr)
        assert(packet->nx_packet_next == nullptr && "TxFrame does not support chained packets");

        // Calculate frame size from packet pointers
        size_t frame_size = packet->nx_packet_append_ptr - packet->nx_packet_prepend_ptr;

        // Allocate with 2-byte padding at the start for hardware requirement
        data_frame_ = Frame(frame_size + 2);

        // Assert that Frame allocator returned 8-byte aligned memory
        // This is required for DMA to work correctly
        assert((reinterpret_cast<uintptr_t>(data_frame_.front()) & 0x7) == 0 &&
               "Frame buffer must be 8-byte aligned for DMA");

        // Copy packet data starting at offset 2
        std::memcpy(data_frame_.front() + 2, packet->nx_packet_prepend_ptr, frame_size);

        // Configure descriptor to point to start of buffer (with 2-byte padding)
        descriptor_->setBuffer(data_frame_.front());
        descriptor_->setLength(frame_size + 2);
    }

    // Check if transmission is complete (descriptor READY bit cleared by hardware)
    bool isTransmissionComplete() const {
        return !descriptor_->isReady();
    }

    // Move constructor
    TxFrame(TxFrame&& other) noexcept
        : data_frame_(std::move(other.data_frame_)),
          descriptor_(other.descriptor_) {
        other.descriptor_ = nullptr;
    }

    // Move assignment operator
    TxFrame& operator=(TxFrame&& other) noexcept {
        if (this != &other) {
            data_frame_ = std::move(other.data_frame_);
            descriptor_ = other.descriptor_;
            other.descriptor_ = nullptr;
        }
        return *this;
    }

    // Delete copy operations
    TxFrame(const TxFrame&) = delete;
    TxFrame& operator=(const TxFrame&) = delete;

    // Mark descriptor as ready for transmission
    void markReadyForTransmission() {
        descriptor_->setReady(true);
        descriptor_->setLast(true);  // Single frame, not chained
    }

private:
    Frame data_frame_;                // Owns the frame data
    TxBufferDescriptor* descriptor_;  // Non-owning pointer to descriptor
};

} // namespace ethernet
