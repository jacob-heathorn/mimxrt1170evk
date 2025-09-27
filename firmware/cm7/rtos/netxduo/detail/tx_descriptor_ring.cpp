#include "tx_descriptor_ring.h"
#include <cstring>
#include <cstdio>

namespace ethernet {
namespace detail {

TxDescriptorRing::TxDescriptorRing() : head_index_(0), tail_index_(0), count_(0) {
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

TxDescriptorRing::~TxDescriptorRing() {
    // Note: We don't deallocate from Ocram2Allocator as it's a bump allocator
    // and memory is not freed until program termination
}

TxDescriptor* TxDescriptorRing::acquire_back() {
    if (full()) {
        return nullptr;
    }
    TxDescriptor* desc = &descriptors_[tail_index_];
    tail_index_ = (tail_index_ + 1) & (kNumTxDescriptors - 1);
    count_++;
    return desc;
}

TxDescriptor* TxDescriptorRing::head() {
    if (empty()) {
        return nullptr;
    }
    return &descriptors_[head_index_];
}

void TxDescriptorRing::release_front() {
    if (!empty()) {
        head_index_ = (head_index_ + 1) & (kNumTxDescriptors - 1);
        count_--;
    }
}

void TxDescriptorRing::reset() {
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

uint32_t TxDescriptorRing::getBaseAddress() const {
    return reinterpret_cast<uint32_t>(descriptors_[0].getRawMemory());
}

} // namespace detail
} // namespace ethernet