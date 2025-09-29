#pragma once

#include "drivers/ethernet/detail/rx_descriptor.h"
#include "utils/ocram2_allocator.hpp"
extern "C" {
#include "cmsis_gcc.h"  // For __DSB()
}
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

// RX Descriptor Ring for i.MX RT1170 Gigabit Ethernet
//
// Manages a circular ring of receive descriptors and buffers for DMA.
// - Software provides buffers to hardware by setting EMPTY=1
// - Hardware fills buffers with received data and clears EMPTY
// - Software acquires filled descriptors when EMPTY=0
// - Uses single current_index_ to track next descriptor to process
// - Descriptors and buffers in OCRAM2 (non-cacheable) with 64-byte alignment
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

    // Acquire the next descriptor that has been filled by hardware
    // Returns pointer to descriptor if available, nullptr otherwise
    // Caller must check isLast() and hasError() on the descriptor
    // Caller must call release() after processing
    RxDescriptor* acquire() {
        // Check if current descriptor is owned by CPU (EMPTY bit cleared by hardware)
        if (descriptors_[current_index_].isEmpty()) {
            return nullptr;  // No packet available
        }
        return &descriptors_[current_index_];
    }

    // Release a descriptor back to hardware after processing
    // The descriptor will be marked as empty (ready for hardware to use)
    void release(RxDescriptor* desc) {
        assert(desc != nullptr);
        assert(desc == &descriptors_[current_index_] &&
               "Must release descriptors in order - releasing wrong descriptor");

        // Memory barrier to ensure all memory operations complete before
        // releasing descriptor to hardware. This prevents CPU reordering
        // that could cause the EMPTY bit to be set before data is copied.
        __DSB();  // Data Synchronization Barrier (ARM specific)

        // Return descriptor to hardware (mark as empty)
        desc->setEmpty();

        // Move to next descriptor
        current_index_ = (current_index_ + 1) & (kNumRxDescriptors - 1);
    }

    // Reset all descriptors to initial state with their buffers
    // TODO: This may race with hardware DMA - should disable ENET RX first
    void reset() {
        for (size_t i = 0; i < kNumRxDescriptors; i++) {
            // Reset descriptor to default state
            descriptors_[i].reset();

            // Reconfigure with existing buffer
            descriptors_[i].setBuffer(buffers_[i]);

            // Mark as empty (ready for hardware)
            descriptors_[i].setEmpty();
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