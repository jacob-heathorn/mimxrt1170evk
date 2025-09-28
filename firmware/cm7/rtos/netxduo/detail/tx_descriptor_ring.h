#pragma once

#include "tx_descriptor.h"
#include "utils/ocram2_allocator.hpp"
#include <cstddef>
#include <cassert>
#include <cstdio>
#include <new>

namespace ethernet {
namespace detail {

// Number of TX descriptors
constexpr size_t kNumTxDescriptors = 64;

// TX Descriptor Ring for i.MX RT1170 Gigabit Ethernet
//
// Manages a circular ring of transmit descriptors for DMA.
// - Software acquires descriptors when READY=0 (not owned by hardware)
// - Software sets READY=1 to hand descriptor to hardware for transmission
// - Hardware processes descriptors and clears READY after transmission
// - Uses single current_index_ to track next descriptor to check
// - Descriptors in OCRAM2 (non-cacheable) with 64-byte alignment for DMA
class TxDescriptorRing {
public:
    static_assert((kNumTxDescriptors & (kNumTxDescriptors - 1)) == 0, "Ring size must be power of 2");
    static_assert(kNumTxDescriptors > 0, "Ring size must be greater than 0");

    TxDescriptorRing() : descriptors_(nullptr), current_index_(0) {
        // Allocate descriptors
        allocateDescriptors();

        // Reset descriptors to initial state
        reset();
    }

    ~TxDescriptorRing() {
        // Note: We don't deallocate from Ocram2Allocator as it's a bump allocator
        // and memory is not freed until program termination
    }

    // Acquire the next available descriptor for transmission
    // Returns descriptor if available (READY bit clear), nullptr otherwise
    TxDescriptor* acquire() {
        // Check if descriptor at current index is available (not owned by hardware)
        if (descriptors_[current_index_].isReady()) {
            return nullptr;  // Descriptor still owned by hardware
        }

        TxDescriptor* desc = &descriptors_[current_index_];
        current_index_ = (current_index_ + 1) & (kNumTxDescriptors - 1);
        return desc;
    }

    // Release a descriptor back to hardware after setting it up
    // Just marks the descriptor as ready for transmission
    void release(TxDescriptor* desc) {
        assert(desc != nullptr);

        // Memory barrier to ensure all descriptor setup is complete
        // before marking as ready for hardware
        __DSB();

        // Mark descriptor as ready for hardware to process
        desc->setReady();  // Sets READY=1
        desc->setLast(true);  // Single frame, not chained
    }

    // Reset all descriptors to initial state
    void reset() {
        for (size_t i = 0; i < kNumTxDescriptors; i++) {
            descriptors_[i].reset();
        }
        // Re-set wrap bit on last descriptor
        descriptors_[kNumTxDescriptors - 1].setWrap(true);
        // Reset current index
        current_index_ = 0;
    }

    // Get physical address for TDSR register
    uint32_t getBaseAddress() const {
        return reinterpret_cast<uint32_t>(descriptors_[0].getRawMemory());
    }

private:
    // Allocate descriptors from OCRAM2 with proper alignment
    void allocateDescriptors() {
        // Allocate descriptor array from OCRAM2 with 64-byte alignment for DMA
        constexpr size_t alignment = 64;
        void* raw_memory = Ocram2Allocator::instance().allocate(
            sizeof(TxDescriptor) * kNumTxDescriptors, alignment);

        if (!raw_memory) {
            printf("TxDescriptorRing: Failed to allocate descriptor array\n");
            assert(false && "Failed to allocate descriptor array");
        }

        // Verify alignment
        assert((reinterpret_cast<uintptr_t>(raw_memory) & (alignment - 1)) == 0 &&
               "Descriptor array must be 64-byte aligned for DMA");

        // Use placement new to construct each descriptor
        descriptors_ = static_cast<TxDescriptor*>(raw_memory);
        for (size_t i = 0; i < kNumTxDescriptors; ++i) {
            new (&descriptors_[i]) TxDescriptor();
        }

        // Set wrap bit on last descriptor
        descriptors_[kNumTxDescriptors - 1].setWrap(true);

        printf("TxDescriptorRing: Allocated %zu descriptors at %p (64-byte aligned)\n",
               kNumTxDescriptors, static_cast<void*>(descriptors_));
    }

    // Pointer to array of descriptors allocated from OCRAM2 (64-byte aligned for DMA)
    TxDescriptor* descriptors_;

    // Current descriptor index for acquiring next available descriptor
    size_t current_index_;
};

} // namespace detail
} // namespace ethernet
