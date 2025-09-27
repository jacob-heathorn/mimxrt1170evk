#include "tx_descriptor.h"
#include <cstring>
#include <cassert>

namespace ethernet {
namespace detail {

TxDescriptor::TxDescriptor() {
    // Verify size at compile time
    static_assert(sizeof(TxDescriptor) == 8, "TxDescriptor size must be 8 bytes");

    // Note: Individual descriptors in an array don't need to be 16-byte aligned.
    // Only the base of the descriptor array needs 16-byte alignment for DMA.
    // The hardware will access descriptors sequentially from the aligned base address.

    reset();
}

void TxDescriptor::reset() {
    std::memset(&data_, 0, sizeof(data_));
    // Set default control bits - transmit CRC should be enabled by default
    data_.control = TX_BD_TRANSMITCRC_MASK;
}

void TxDescriptor::setSoftwareOwner1(bool set) {
    if (set) {
        data_.control |= TX_BD_SOFTOWNER1_MASK;
    } else {
        data_.control &= ~TX_BD_SOFTOWNER1_MASK;
    }
}

bool TxDescriptor::isSoftwareOwner1() const {
    return (data_.control & TX_BD_SOFTOWNER1_MASK) != 0;
}

void TxDescriptor::setSoftwareOwner2(bool set) {
    if (set) {
        data_.control |= TX_BD_SOFTOWNER2_MASK;
    } else {
        data_.control &= ~TX_BD_SOFTOWNER2_MASK;
    }
}

bool TxDescriptor::isSoftwareOwner2() const {
    return (data_.control & TX_BD_SOFTOWNER2_MASK) != 0;
}

bool TxDescriptor::operator==(const TxDescriptor& other) const {
    return data_.length == other.data_.length &&
           data_.control == other.data_.control &&
           data_.buffer == other.data_.buffer;
}

bool TxDescriptor::operator!=(const TxDescriptor& other) const {
    return !(*this == other);
}

} // namespace detail
} // namespace ethernet