#pragma once

#include "drivers/ethernet/detail/tx_descriptor.h"
#include "drivers/ethernet/detail/tx_descriptor_ring.h"
#include "drivers/ethernet/ethernet_frame.hpp"
#include <cassert>

namespace ethernet {
namespace detail {

// TxFrame for i.MX RT1170 Gigabit Ethernet Transmission
//
// This class encapsulates an Ethernet frame for DMA transmission, managing
// the lifecycle of both the frame data and its associated TX descriptor.
//
// Ownership Model:
// ---------------
// - Takes ownership of an ethernet::Frame via move semantics
// - Acquires a TX descriptor from the ring upon creation
// - Releases the descriptor back to the ring upon destruction
// - Ensures FIFO ordering: descriptors must be released in acquisition order
//
// DMA Transmission Flow:
// ---------------------
// 1. TxFrame::create() acquires a descriptor and moves in frame data
// 2. Software calls markReadyForTransmission() to set READY bit
// 3. Software triggers DMA via TDAR register (done by driver)
// 4. Hardware processes descriptor, transmits data, clears READY bit
// 5. Software checks isTransmissionComplete() for status
// 6. TxFrame destructor releases descriptor back to ring
//
// Memory Management:
// -----------------
// - Frame data is allocated from OCRAM2 (non-cacheable) with 8-byte alignment
// - Descriptors are managed by TxDescriptorRing with 64-byte alignment
// - Both ensure coherent DMA access without cache management
//
// Thread Safety:
// -------------
// - Not thread-safe: assumes single-threaded access from driver context
// - Static tx_descriptor_ring_ pointer shared across all instances
class TxFrame {
public:
    // Initialize TxFrame with TX descriptor ring pointer
    // Must be called once during driver initialization
    static void initialize(TxDescriptorRing* ring) {
        tx_descriptor_ring_ = ring;
    }

    // Create a TxFrame by acquiring a descriptor and moving an ethernet::Frame
    // Returns a TxFrame that may be empty if no descriptor available
    // Use operator bool() to check if frame is valid
    // Takes ownership of the Frame data
    static TxFrame create(ethernet::Frame&& frame) {
        // Acquire descriptor from the ring
        TxDescriptor* descriptor = tx_descriptor_ring_->acquire();
        if (!descriptor) {
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

    // Destructor - descriptor already released to hardware in markReadyForTransmission
    ~TxFrame() {
        // Nothing to do - descriptor was already given to hardware
        descriptor_ = nullptr;
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
        assert(descriptor_ && "Cannot mark empty frame for transmission");

        // Release the descriptor to hardware (sets READY bit)
        tx_descriptor_ring_->release(descriptor_);
    }

private:
    // Default constructor for empty frame
    TxFrame() : descriptor_(nullptr) {}

    // Private constructor - use create() method instead
    TxFrame(TxDescriptor &descriptor, ethernet::Frame&& frame)
        : data_frame_(std::move(frame)), descriptor_(&descriptor) {
        // Assert that Frame buffer is 8-byte aligned for DMA
        assert((reinterpret_cast<uintptr_t>(data_frame_.front()) & 0x7) == 0 &&
               "Frame buffer must be 8-byte aligned for DMA");

        // Configure descriptor to point to the frame buffer
        descriptor_->setBuffer(data_frame_.front());
        descriptor_->setLength(data_frame_.size());
    }

    ethernet::Frame data_frame_;     // Owns the frame data
    TxDescriptor* descriptor_;       // Non-owning pointer to descriptor

    // Static pointer to TX descriptor ring (set via initialize())
    static inline TxDescriptorRing* tx_descriptor_ring_ = nullptr;
};

// Ensure TxFrame size is exactly Frame size plus one pointer
static_assert(sizeof(TxFrame) == sizeof(ethernet::Frame) + sizeof(TxDescriptor*),
              "TxFrame size must be Frame size plus one pointer");

} // namespace detail
} // namespace ethernet