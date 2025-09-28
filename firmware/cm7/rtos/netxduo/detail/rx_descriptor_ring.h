#pragma once

#include "rx_descriptor.h"
#include "utils/ocram2_allocator.hpp"
#include <cstddef>
#include <cassert>
#include <cstdio>
#include <new>
#include <array>

namespace ethernet {
namespace detail {

// Number of RX descriptors (must match NX_DRIVER_RX_DESCRIPTORS in nx_driver_imxrt.h)
constexpr size_t kNumRxDescriptors = 64;

// Size of each RX buffer (max Ethernet frame + 2-byte hardware padding)
constexpr size_t kRxBufferSize = 1536 + 2;

// RX Descriptor Ring for i.MX RT1170 Gigabit Ethernet DMA
//
// This class manages a circular ring of receive buffer descriptors for the
// ENET_1G peripheral's DMA engine. The hardware and software work together
// using a producer-consumer model:
//
// Hardware/Software Interaction:
// ------------------------------
// 1. Software (Producer): Provides empty buffers by setting EMPTY bit
// 2. Hardware (Consumer): Fills buffers with received data and clears EMPTY bit
// 3. The RDSR register points to the base of this descriptor array
// 4. Hardware walks the ring sequentially, wrapping at the WRAP bit
//
// Memory Requirements:
// -------------------
// - Descriptors must be in non-cacheable memory (OCRAM2) for coherent DMA access
// - The descriptor array requires 64-byte alignment for optimal DMA performance
// - Each descriptor is 8 bytes (16-bit length, 16-bit control, 32-bit buffer ptr)
// - Total memory: 64 descriptors × 8 bytes = 512 bytes
//
// Ring Management:
// ---------------
// - Uses current_index_ to track next descriptor to process
// - Hardware uses the WRAP bit on last descriptor to detect ring boundary
// - Ring size is power of 2 (64) for efficient modulo via bitwise AND
// - All descriptors start as EMPTY (owned by hardware)
//
// Buffer Management:
// -----------------
// - Each descriptor points to a pre-allocated receive buffer
// - Buffers must be large enough for maximum Ethernet frame (1536 bytes)
// - Buffers must be 8-byte aligned for DMA access
// - Software must provide new buffers after processing received frames
//
// Synchronization:
// ---------------
// - EMPTY bit provides ownership: 1=hardware owns, 0=software owns
// - Software must only read descriptors when EMPTY=0
// - After processing, software sets EMPTY=1 to return buffer to hardware
// - Software triggers DMA via RDAR register if it was suspended
//
// Note: This implementation assumes single-threaded access from the
//       driver context. Additional synchronization needed for multi-threaded use.
class RxDescriptorRing {
public:
    static_assert((kNumRxDescriptors & (kNumRxDescriptors - 1)) == 0, "Ring size must be power of 2");
    static_assert(kNumRxDescriptors > 0, "Ring size must be greater than 0");

    RxDescriptorRing() : descriptors_(nullptr), buffers_{}, current_index_(0) {
        // Allocate descriptors
        allocateDescriptors();

        // Allocate buffers
        allocateBuffers();

        // Connect buffers to descriptors and mark them as ready
        reset();
    }

    ~RxDescriptorRing() {
        // Note: We don't deallocate from Ocram2Allocator as it's a bump allocator
        // and memory is not freed until program termination
    }

    // Get the size of the ring
    constexpr size_t size() const { return kNumRxDescriptors; }

    // Get descriptor at index
    RxDescriptor& operator[](size_t index) {
        assert(index < kNumRxDescriptors);
        return descriptors_[index];
    }

    const RxDescriptor& operator[](size_t index) const {
        assert(index < kNumRxDescriptors);
        return descriptors_[index];
    }

    // Get current descriptor being processed
    RxDescriptor& current() {
        return descriptors_[current_index_];
    }

    // Get current index
    size_t getCurrentIndex() const {
        return current_index_;
    }

    // Advance to next descriptor
    void advance() {
        current_index_ = (current_index_ + 1) & (kNumRxDescriptors - 1);
    }

    // Set buffer for descriptor at index
    void setBuffer(size_t index, void* buffer) {
        assert(index < kNumRxDescriptors);
        descriptors_[index].setBuffer(buffer);
    }

    // Reset all descriptors to initial state with their buffers
    // This can be used after link changes or error recovery
    // Called from the ethernet driver initialize function
    void reset() {
        for (size_t i = 0; i < kNumRxDescriptors; i++) {
            // Reset descriptor to default state
            descriptors_[i].reset();

            // Reconfigure with existing buffer
            descriptors_[i].setBuffer(buffers_[i]);

            // Mark as empty (ready for hardware)
            descriptors_[i].setEmpty(true);
        }
        // Re-set wrap bit on last descriptor
        descriptors_[kNumRxDescriptors - 1].setWrap(true);
        // Reset current index
        current_index_ = 0;
    }

    // Get physical address for RDSR register
    uint32_t getBaseAddress() const {
        return reinterpret_cast<uint32_t>(descriptors_[0].getRawMemory());
    }

    // Check if there's a received packet available
    bool hasReceivedPacket() const {
        // Check if current descriptor is owned by CPU (EMPTY bit cleared by hardware)
        return !descriptors_[current_index_].isEmpty();
    }

    // Get the next received descriptor
    // Returns nullptr if no packet available
    // Caller must check isLast() and hasError() on the descriptor
    // Caller must call releaseCurrentDescriptor() after processing
    RxDescriptor* getNextDescriptor() {
        if (!hasReceivedPacket()) {
            return nullptr;
        }
        return &descriptors_[current_index_];
    }

    // Release the current descriptor back to hardware
    // Must be called after processing a descriptor from getNextDescriptor()
    void releaseCurrentDescriptor() {
        // Memory barrier to ensure all memory operations complete before
        // releasing descriptor to hardware. This prevents CPU reordering
        // that could cause the EMPTY bit to be set before data is copied.
        __DSB();  // Data Synchronization Barrier (ARM specific)

        // Return descriptor to hardware (mark as empty)
        descriptors_[current_index_].setEmpty(true);

        // Move to next descriptor
        advance();
    }

private:
    // Allocate descriptors from OCRAM2 with proper alignment
    void allocateDescriptors() {
        // Allocate descriptor array from OCRAM2 with 64-byte alignment for DMA
        constexpr size_t alignment = 64;
        void* raw_memory = Ocram2Allocator::instance().allocate(
            sizeof(RxDescriptor) * kNumRxDescriptors, alignment);

        if (!raw_memory) {
            printf("RxDescriptorRing: Failed to allocate descriptor array\n");
            assert(false && "Failed to allocate descriptor array");
        }

        // Verify alignment
        assert((reinterpret_cast<uintptr_t>(raw_memory) & (alignment - 1)) == 0 &&
               "Descriptor array must be 64-byte aligned for DMA");

        // Use placement new to construct each descriptor
        descriptors_ = static_cast<RxDescriptor*>(raw_memory);
        for (size_t i = 0; i < kNumRxDescriptors; ++i) {
            new (&descriptors_[i]) RxDescriptor();
        }

        // Set wrap bit on last descriptor
        descriptors_[kNumRxDescriptors - 1].setWrap(true);

        printf("RxDescriptorRing: Allocated %zu descriptors at %p (64-byte aligned)\n",
               kNumRxDescriptors, static_cast<void*>(descriptors_));
    }

    // Allocate RX buffers from OCRAM2 with proper alignment
    void allocateBuffers() {
        constexpr size_t alignment = 64;  // DMA requires 64-byte alignment (empirically)
        // TODO: Confirm this in the RM

        for (size_t i = 0; i < kNumRxDescriptors; ++i) {
            // Allocate buffer from OCRAM2 (non-cacheable for DMA)
            void* raw_buffer = Ocram2Allocator::instance().allocate(kRxBufferSize, alignment);

            if (!raw_buffer) {
                printf("RxDescriptorRing: Failed to allocate RX buffer %zu\n", i);
                assert(false && "Failed to allocate RX buffer");
            }

            // Store buffer pointer as uint8_t*
            buffers_[i] = static_cast<uint8_t*>(raw_buffer);
        }

        printf("RxDescriptorRing: Allocated %zu RX buffers of %zu bytes each\n",
               kNumRxDescriptors, kRxBufferSize);
    }

    // Pointer to array of descriptors allocated from OCRAM2 (64-byte aligned for DMA)
    RxDescriptor* descriptors_;

    // Array of buffer pointers (allocated from OCRAM2)
    std::array<uint8_t*, kNumRxDescriptors> buffers_;

    // Current descriptor index for processing received packets
    size_t current_index_;
};

} // namespace detail
} // namespace ethernet