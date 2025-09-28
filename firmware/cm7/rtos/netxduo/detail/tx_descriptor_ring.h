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

// TX Descriptor Ring for i.MX RT1170 Gigabit Ethernet DMA
//
// This class manages a circular ring of transmit buffer descriptors for the
// ENET_1G peripheral's DMA engine. The hardware and software work together
// using a producer-consumer model:
//
// Hardware/Software Interaction:
// ------------------------------
// 1. Software (Producer): Prepares descriptors with TX data and sets READY bit
// 2. Hardware (Consumer): Processes READY descriptors and clears READY bit
// 3. The TDSR register points to the base of this descriptor array
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
// - Uses current_index_ to track next descriptor to check/acquire
// - Software checks if descriptor at current_index_ is available (READY=0)
// - If available, returns it and advances index; otherwise returns nullptr
// - Hardware uses the WRAP bit on last descriptor to detect ring boundary
// - Ring size is power of 2 (64) for efficient modulo via bitwise AND
//
// Synchronization:
// ---------------
// - READY bit provides ownership: 1=hardware owns, 0=software owns
// - Software must only modify descriptors when READY=0
// - After setting READY=1, software triggers DMA via TDAR register
// - Software polls READY bit to detect transmission completion
//
// Note: This implementation assumes single-threaded access from the
//       driver context. Additional synchronization needed for multi-threaded use.
class TxDescriptorRing {
public:
    static_assert((kNumTxDescriptors & (kNumTxDescriptors - 1)) == 0, "Ring size must be power of 2");
    static_assert(kNumTxDescriptors > 0, "Ring size must be greater than 0");

    TxDescriptorRing() : descriptors_(nullptr), current_index_(0) {
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
        desc->setReady(true);
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
    // Pointer to array of descriptors allocated from OCRAM2 (64-byte aligned for DMA)
    TxDescriptor* descriptors_;

    // Current descriptor index for acquiring next available descriptor
    size_t current_index_;
};

} // namespace detail
} // namespace ethernet
