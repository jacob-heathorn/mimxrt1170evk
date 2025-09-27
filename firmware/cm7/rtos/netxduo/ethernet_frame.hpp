#pragma once

#include "ftl/allocator/data_frame.hpp"
#include "detail/tx_descriptor.h"
#include "detail/tx_descriptor_ring.h"
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

// TxFrame encapsulates an Ethernet frame for transmission
// Owns the frame data and manages the associated descriptor
class TxFrame {
public:
    // Initialize TxFrame with TX descriptor ring pointer
    static void initialize(detail::TxDescriptorRing* ring) {
        tx_descriptor_ring_ = ring;
    }

    // Create a TxFrame by acquiring a descriptor and moving an ethernet::Frame
    // Returns a TxFrame that may be empty if no descriptor available
    // Use operator bool() to check if frame is valid
    // Takes ownership of the Frame data
    static TxFrame create(ethernet::Frame&& frame) {
        // Acquire descriptor from the ring (at back/tail)
        detail::TxDescriptor* descriptor = tx_descriptor_ring_->acquire_back();
        if (!descriptor) {
            return TxFrame();  // Return empty frame
        }

        // Check if descriptor is free (hardware cleared READY bit)
        if (descriptor->isReady()) {
            // Descriptor still owned by hardware - should not happen with proper ring management
            assert(false && "Ring returned descriptor still owned by hardware");
            return TxFrame();  // Return empty frame
        }

        return TxFrame(*descriptor, std::move(frame));
    }

    // Check if frame is valid (has a descriptor)
    explicit operator bool() const {
        return descriptor_ != nullptr;
    }

    // Check if transmission is complete (descriptor READY bit cleared by hardware)
    bool isTransmissionComplete() const {
        assert(descriptor_ && "Cannot check transmission on empty frame");
        return !descriptor_->isReady();
    }

    // Move constructor
    TxFrame(TxFrame&& other) noexcept
        : data_frame_(std::move(other.data_frame_)),
          descriptor_(other.descriptor_) {
        other.descriptor_ = nullptr;
    }

    // Destructor - releases descriptor back to ring if owned
    ~TxFrame() {
        if (descriptor_) {
            // Assert that we're releasing the oldest descriptor (at front/head of ring)
            assert(tx_descriptor_ring_->head() == descriptor_ && "Releasing descriptor out of order");
            // Release the descriptor back to the ring (from front/head)
            tx_descriptor_ring_->release_front();
            descriptor_ = nullptr;
        }
    }

    // Move assignment operator
    TxFrame& operator=(TxFrame&& other) noexcept {
        if (this != &other) {
            // Release current descriptor if owned
            if (descriptor_) {
                // Assert that we're releasing the oldest descriptor (at front/head of ring)
                assert(tx_descriptor_ring_->head() == descriptor_ && "Releasing descriptor out of order");
                tx_descriptor_ring_->release_front();
            }
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
    // Default constructor for empty frame
    TxFrame() : descriptor_(nullptr) {}

    // Private constructor - use create() method instead
    TxFrame(detail::TxDescriptor &descriptor, ethernet::Frame&& frame)
        : data_frame_(std::move(frame)), descriptor_(&descriptor) {
        // Assert that Frame buffer is 8-byte aligned for DMA
        assert((reinterpret_cast<uintptr_t>(data_frame_.front()) & 0x7) == 0 &&
               "Frame buffer must be 8-byte aligned for DMA");

        // Configure descriptor to point to the frame buffer
        descriptor_->setBuffer(data_frame_.front());
        descriptor_->setLength(data_frame_.size());
    }
    Frame data_frame_;                  // Owns the frame data
    detail::TxDescriptor* descriptor_;  // Non-owning pointer to descriptor

    // Static pointer to TX descriptor ring (set via initialize())
    static inline detail::TxDescriptorRing* tx_descriptor_ring_ = nullptr;
};

// Ensure TxFrame size is exactly Frame size plus one pointer
static_assert(sizeof(TxFrame) == sizeof(Frame) + sizeof(detail::TxDescriptor*),
              "TxFrame size must be Frame size plus one pointer");

} // namespace ethernet
