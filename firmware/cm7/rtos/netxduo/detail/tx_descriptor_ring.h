#pragma once

#include "tx_descriptor.h"
#include "utils/ocram2_allocator.hpp"
#include <cstddef>
#include <cassert>
#include <new>

namespace ethernet {
namespace detail {

// Number of TX descriptors
constexpr size_t kNumTxDescriptors = 64;

// Class for a ring of TX buffer descriptors
// Size must be a power of 2 for efficient modulo operations
class TxDescriptorRing {
public:
    static_assert((kNumTxDescriptors & (kNumTxDescriptors - 1)) == 0, "Ring size must be power of 2");
    static_assert(kNumTxDescriptors > 0, "Ring size must be greater than 0");

    TxDescriptorRing();

    ~TxDescriptorRing();

    // Get the size of the ring
    constexpr size_t size() const { return kNumTxDescriptors; }

    // Resource management interface for descriptor ring

    // Check if ring is full
    bool full() const { return count_ == kNumTxDescriptors; }

    // Check if ring is empty
    bool empty() const { return count_ == 0; }

    // Get number of descriptors in use
    size_t count() const { return count_; }

    // Acquire the next available descriptor for transmission (at back/tail)
    // Returns nullptr if ring is full
    TxDescriptor* acquire_back();


    // Get the oldest descriptor (at head) without releasing
    // Returns nullptr if empty
    TxDescriptor* head();


    // Release the oldest descriptor (at front/head) after transmission completes
    void release_front();


    // Reset all descriptors to initial state
    void reset();


    // Get physical address for TDSR register
    uint32_t getBaseAddress() const;

private:
    // Pointer to array of descriptors allocated from OCRAM2 (64-byte aligned for DMA)
    TxDescriptor* descriptors_;

    // Ring buffer management
    size_t head_index_;  // Index of oldest descriptor in use
    size_t tail_index_;  // Index of next descriptor to use
    size_t count_;       // Number of descriptors currently in use
};

} // namespace detail
} // namespace ethernet
