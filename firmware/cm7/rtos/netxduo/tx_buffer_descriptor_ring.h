#ifndef TX_BUFFER_DESCRIPTOR_RING_H
#define TX_BUFFER_DESCRIPTOR_RING_H

#include "tx_buffer_descriptor.h"
#include <cstddef>
#include <cassert>
#include <array>
#include <new>

// Number of TX descriptors - must match nx_driver_imxrt.h
constexpr size_t kNumTxDescriptors = 64;

// Class for a ring of TX buffer descriptors
// Size must be a power of 2 for efficient modulo operations
class TxBufferDescriptorRing {
public:
    static_assert((kNumTxDescriptors & (kNumTxDescriptors - 1)) == 0, "Ring size must be power of 2");
    static_assert(kNumTxDescriptors > 0, "Ring size must be greater than 0");

    TxBufferDescriptorRing() : head_index_(0), tail_index_(0), count_(0) {
        // std::array default-constructs all elements
        // Set wrap bit on last descriptor
        descriptors_[kNumTxDescriptors - 1].setWrap(true);
    }

    ~TxBufferDescriptorRing() {
        // std::array automatically destructs all elements
    }

    // Array access operators
    TxBufferDescriptor& operator[](size_t index) {
        assert(index < kNumTxDescriptors);
        return descriptors_[index];
    }

    const TxBufferDescriptor& operator[](size_t index) const {
        assert(index < kNumTxDescriptors);
        return descriptors_[index];
    }

    // Get descriptor at index with bounds checking
    TxBufferDescriptor& at(size_t index) {
        if (index >= kNumTxDescriptors) {
            // In embedded, we can't throw exceptions, so assert
            assert(false && "Index out of bounds");
        }
        return descriptors_[index];
    }

    const TxBufferDescriptor& at(size_t index) const {
        if (index >= kNumTxDescriptors) {
            assert(false && "Index out of bounds");
        }
        return descriptors_[index];
    }

    // Get the size of the ring
    constexpr size_t size() const { return kNumTxDescriptors; }

    // Resource management interface for descriptor ring

    // Check if ring is full
    bool full() const { return count_ == kNumTxDescriptors; }

    // Check if ring is empty
    bool empty() const { return count_ == 0; }

    // Get number of descriptors in use
    size_t count() const { return count_; }

    // Acquire the next available descriptor for transmission
    // Returns nullptr if ring is full
    TxBufferDescriptor* acquire_front() {
        if (full()) {
            return nullptr;
        }
        TxBufferDescriptor* desc = &descriptors_[tail_index_];
        tail_index_ = (tail_index_ + 1) & (kNumTxDescriptors - 1);
        count_++;
        return desc;
    }

    // Get the oldest descriptor (at head) without releasing
    // Returns nullptr if empty
    TxBufferDescriptor* head() {
        if (empty()) {
            return nullptr;
        }
        return &descriptors_[head_index_];
    }

    // Release the oldest descriptor (at head) after transmission completes
    void release_back() {
        if (!empty()) {
            head_index_ = (head_index_ + 1) & (kNumTxDescriptors - 1);
            count_--;
        }
    }

    // Reset all descriptors to initial state
    void reset() {
        for (size_t i = 0; i < kNumTxDescriptors; i++) {
            descriptors_[i].reset();
        }
        // Re-set wrap bit on last descriptor
        descriptors_[kNumTxDescriptors - 1].setWrap(true);
        // Reset queue indices
        head_index_ = 0;
        tail_index_ = 0;
        count_ = 0;
    }

    // Get raw memory pointer for hardware (DMA) access
    // Returns pointer to first descriptor
    volatile void* getRawMemory() {
        return descriptors_[0].getRawMemory();
    }

    const volatile void* getRawMemory() const {
        return descriptors_[0].getRawMemory();
    }

    // Get physical address for TDSR register
    uint32_t getBaseAddress() const {
        return reinterpret_cast<uint32_t>(descriptors_[0].getRawMemory());
    }

    // Static helper to verify ring alignment for DMA
    static bool isAligned(const TxBufferDescriptorRing* ring, size_t alignment = 64) {
        uintptr_t addr = reinterpret_cast<uintptr_t>(ring);
        return (addr & (alignment - 1)) == 0;
    }

private:
    // Array of descriptors - must be contiguous for DMA
    std::array<TxBufferDescriptor, kNumTxDescriptors> descriptors_;

    // Ring buffer management
    size_t head_index_;  // Index of oldest descriptor in use
    size_t tail_index_;  // Index of next descriptor to use
    size_t count_;       // Number of descriptors currently in use
};

#endif // TX_BUFFER_DESCRIPTOR_RING_H