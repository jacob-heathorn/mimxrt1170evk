#ifndef TX_BUFFER_DESCRIPTOR_RING_H
#define TX_BUFFER_DESCRIPTOR_RING_H

#include "tx_buffer_descriptor.h"
#include <cstddef>
#include <cassert>
#include <array>
#include <new>

// Template class for a ring of TX buffer descriptors
// N must be a power of 2 for efficient modulo operations
template<size_t N>
class TxBufferDescriptorRing {
public:
    static_assert((N & (N - 1)) == 0, "Ring size must be power of 2");
    static_assert(N > 0, "Ring size must be greater than 0");

    TxBufferDescriptorRing() {
        // std::array default-constructs all elements
        // Set wrap bit on last descriptor
        descriptors_[N - 1].setWrap(true);
    }

    ~TxBufferDescriptorRing() {
        // std::array automatically destructs all elements
    }

    // Array access operators
    TxBufferDescriptor& operator[](size_t index) {
        assert(index < N);
        return descriptors_[index];
    }

    const TxBufferDescriptor& operator[](size_t index) const {
        assert(index < N);
        return descriptors_[index];
    }

    // Get descriptor at index with bounds checking
    TxBufferDescriptor& at(size_t index) {
        if (index >= N) {
            // In embedded, we can't throw exceptions, so assert
            assert(false && "Index out of bounds");
        }
        return descriptors_[index];
    }

    const TxBufferDescriptor& at(size_t index) const {
        if (index >= N) {
            assert(false && "Index out of bounds");
        }
        return descriptors_[index];
    }

    // Get the size of the ring
    constexpr size_t size() const { return N; }

    // Get next index with wrap-around
    size_t nextIndex(size_t currentIndex) const {
        return (currentIndex + 1) & (N - 1);
    }

    // Get previous index with wrap-around
    size_t prevIndex(size_t currentIndex) const {
        return (currentIndex - 1) & (N - 1);
    }

    // Reset all descriptors to initial state
    void reset() {
        for (size_t i = 0; i < N; i++) {
            descriptors_[i].reset();
        }
        // Re-set wrap bit on last descriptor
        descriptors_[N - 1].setWrap(true);
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
    std::array<TxBufferDescriptor, N> descriptors_;
};

#endif // TX_BUFFER_DESCRIPTOR_RING_H