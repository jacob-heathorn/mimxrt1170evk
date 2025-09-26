#include "tx_buffer_descriptor.h"
#include <cstring>
#include <cassert>

TxBufferDescriptor::TxBufferDescriptor() {
    // Verify size at compile time
    static_assert(sizeof(TxBufferDescriptor) == 8, "TxBufferDescriptor size must be 8 bytes");

    // Note: Individual descriptors in an array don't need to be 16-byte aligned.
    // Only the base of the descriptor array needs 16-byte alignment for DMA.
    // The hardware will access descriptors sequentially from the aligned base address.

    reset();
}

void TxBufferDescriptor::reset() {
    std::memset(&data_, 0, sizeof(data_));
    // Set default control bits - transmit CRC should be enabled by default
    data_.control = TX_BD_TRANSMITCRC_MASK;
}

void TxBufferDescriptor::setSoftwareOwner1(bool set) {
    if (set) {
        data_.control |= TX_BD_SOFTOWNER1_MASK;
    } else {
        data_.control &= ~TX_BD_SOFTOWNER1_MASK;
    }
}

bool TxBufferDescriptor::isSoftwareOwner1() const {
    return (data_.control & TX_BD_SOFTOWNER1_MASK) != 0;
}

void TxBufferDescriptor::setSoftwareOwner2(bool set) {
    if (set) {
        data_.control |= TX_BD_SOFTOWNER2_MASK;
    } else {
        data_.control &= ~TX_BD_SOFTOWNER2_MASK;
    }
}

bool TxBufferDescriptor::isSoftwareOwner2() const {
    return (data_.control & TX_BD_SOFTOWNER2_MASK) != 0;
}

bool TxBufferDescriptor::operator==(const TxBufferDescriptor& other) const {
    return data_.length == other.data_.length &&
           data_.control == other.data_.control &&
           data_.buffer == other.data_.buffer;
}

bool TxBufferDescriptor::operator!=(const TxBufferDescriptor& other) const {
    return !(*this == other);
}