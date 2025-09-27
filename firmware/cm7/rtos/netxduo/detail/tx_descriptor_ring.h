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
// - Uses head/tail indices for software's view of the ring
// - head_index_: Points to oldest descriptor still being transmitted
// - tail_index_: Points to next free descriptor to use
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
