#include "tx_descriptor_ring.h"

namespace ethernet {
namespace detail {

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