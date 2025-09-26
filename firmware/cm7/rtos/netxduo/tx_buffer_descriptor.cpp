#include "tx_buffer_descriptor.h"
#include <cstring>

TxBufferDescriptor::TxBufferDescriptor() {
    reset();
}

void TxBufferDescriptor::reset() {
    std::memset(&data_, 0, sizeof(data_));
    // Set default control bits
    data_.control = ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK;
}

void TxBufferDescriptor::setSoftwareOwner1(bool set) {
    if (set) {
        data_.control |= ENET_BUFFDESCRIPTOR_TX_SOFTOWENER1_MASK;
    } else {
        data_.control &= ~ENET_BUFFDESCRIPTOR_TX_SOFTOWENER1_MASK;
    }
}

bool TxBufferDescriptor::isSoftwareOwner1() const {
    return (data_.control & ENET_BUFFDESCRIPTOR_TX_SOFTOWENER1_MASK) != 0;
}

void TxBufferDescriptor::setSoftwareOwner2(bool set) {
    if (set) {
        data_.control |= ENET_BUFFDESCRIPTOR_TX_SOFTOWENER2_MASK;
    } else {
        data_.control &= ~ENET_BUFFDESCRIPTOR_TX_SOFTOWENER2_MASK;
    }
}

bool TxBufferDescriptor::isSoftwareOwner2() const {
    return (data_.control & ENET_BUFFDESCRIPTOR_TX_SOFTOWENER2_MASK) != 0;
}

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
void TxBufferDescriptor::setTimestamp(bool enable) {
    if (enable) {
        data_.controlExtend1 |= ENET_BUFFDESCRIPTOR_TX_TIMESTAMP_MASK;
    } else {
        data_.controlExtend1 &= ~ENET_BUFFDESCRIPTOR_TX_TIMESTAMP_MASK;
    }
}

bool TxBufferDescriptor::isTimestamp() const {
    return (data_.controlExtend1 & ENET_BUFFDESCRIPTOR_TX_TIMESTAMP_MASK) != 0;
}

void TxBufferDescriptor::setTransmitError(bool error) {
    if (error) {
        data_.controlExtend0 |= ENET_BUFFDESCRIPTOR_TX_ERR_MASK;
    } else {
        data_.controlExtend0 &= ~ENET_BUFFDESCRIPTOR_TX_ERR_MASK;
    }
}

bool TxBufferDescriptor::hasTransmitError() const {
    return (data_.controlExtend0 & ENET_BUFFDESCRIPTOR_TX_ERR_MASK) != 0;
}

void TxBufferDescriptor::setUnderflowError(bool error) {
    if (error) {
        data_.controlExtend0 |= ENET_BUFFDESCRIPTOR_TX_UNDERFLOWERR_MASK;
    } else {
        data_.controlExtend0 &= ~ENET_BUFFDESCRIPTOR_TX_UNDERFLOWERR_MASK;
    }
}

bool TxBufferDescriptor::hasUnderflowError() const {
    return (data_.controlExtend0 & ENET_BUFFDESCRIPTOR_TX_UNDERFLOWERR_MASK) != 0;
}

void TxBufferDescriptor::setExcessCollisionError(bool error) {
    if (error) {
        data_.controlExtend0 |= ENET_BUFFDESCRIPTOR_TX_EXCCOLLISIONERR_MASK;
    } else {
        data_.controlExtend0 &= ~ENET_BUFFDESCRIPTOR_TX_EXCCOLLISIONERR_MASK;
    }
}

bool TxBufferDescriptor::hasExcessCollisionError() const {
    return (data_.controlExtend0 & ENET_BUFFDESCRIPTOR_TX_EXCCOLLISIONERR_MASK) != 0;
}

void TxBufferDescriptor::setFrameError(bool error) {
    if (error) {
        data_.controlExtend0 |= ENET_BUFFDESCRIPTOR_TX_FRAMEERR_MASK;
    } else {
        data_.controlExtend0 &= ~ENET_BUFFDESCRIPTOR_TX_FRAMEERR_MASK;
    }
}

bool TxBufferDescriptor::hasFrameError() const {
    return (data_.controlExtend0 & ENET_BUFFDESCRIPTOR_TX_FRAMEERR_MASK) != 0;
}

void TxBufferDescriptor::setLateCollisionError(bool error) {
    if (error) {
        data_.controlExtend0 |= ENET_BUFFDESCRIPTOR_TX_LATECOLLISIONERR_MASK;
    } else {
        data_.controlExtend0 &= ~ENET_BUFFDESCRIPTOR_TX_LATECOLLISIONERR_MASK;
    }
}

bool TxBufferDescriptor::hasLateCollisionError() const {
    return (data_.controlExtend0 & ENET_BUFFDESCRIPTOR_TX_LATECOLLISIONERR_MASK) != 0;
}

void TxBufferDescriptor::setOverflowError(bool error) {
    if (error) {
        data_.controlExtend0 |= ENET_BUFFDESCRIPTOR_TX_OVERFLOWERR_MASK;
    } else {
        data_.controlExtend0 &= ~ENET_BUFFDESCRIPTOR_TX_OVERFLOWERR_MASK;
    }
}

bool TxBufferDescriptor::hasOverflowError() const {
    return (data_.controlExtend0 & ENET_BUFFDESCRIPTOR_TX_OVERFLOWERR_MASK) != 0;
}

void TxBufferDescriptor::setTimestampError(bool error) {
    if (error) {
        data_.controlExtend0 |= ENET_BUFFDESCRIPTOR_TX_TIMESTAMPERR_MASK;
    } else {
        data_.controlExtend0 &= ~ENET_BUFFDESCRIPTOR_TX_TIMESTAMPERR_MASK;
    }
}

bool TxBufferDescriptor::hasTimestampError() const {
    return (data_.controlExtend0 & ENET_BUFFDESCRIPTOR_TX_TIMESTAMPERR_MASK) != 0;
}

#if defined(FSL_FEATURE_ENET_HAS_AVB) && FSL_FEATURE_ENET_HAS_AVB
void TxBufferDescriptor::setTxLaunchTime(uint32_t time) {
    data_.txLaunchTimeLow = time & 0xFFFF;
    data_.txLaunchTimeHigh = (time >> 16) & 0xFFFF;
}

uint32_t TxBufferDescriptor::getTxLaunchTime() const {
    return (static_cast<uint32_t>(data_.txLaunchTimeHigh) << 16) | data_.txLaunchTimeLow;
}
#endif
#endif

bool TxBufferDescriptor::isEquivalentTo(const enet_tx_bd_struct_t& legacy) const {
    if (data_.length != legacy.length) return false;
    if (data_.control != legacy.control) return false;
    if (data_.buffer != legacy.buffer) return false;

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    if (data_.controlExtend0 != legacy.controlExtend0) return false;
    if (data_.controlExtend1 != legacy.controlExtend1) return false;
#if defined(FSL_FEATURE_ENET_HAS_AVB) && FSL_FEATURE_ENET_HAS_AVB
    if (data_.txLaunchTimeLow != legacy.txLaunchTimeLow) return false;
    if (data_.txLaunchTimeHigh != legacy.txLaunchTimeHigh) return false;
#endif
#endif

    return true;
}

void TxBufferDescriptor::copyFrom(const enet_tx_bd_struct_t& src) {
    data_.length = src.length;
    data_.control = src.control;
    data_.buffer = src.buffer;

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    data_.controlExtend0 = src.controlExtend0;
    data_.controlExtend1 = src.controlExtend1;
#if defined(FSL_FEATURE_ENET_HAS_AVB) && FSL_FEATURE_ENET_HAS_AVB
    data_.txLaunchTimeLow = src.txLaunchTimeLow;
    data_.txLaunchTimeHigh = src.txLaunchTimeHigh;
#else
    data_.reserved0 = src.reserved0;
    data_.reserved1 = src.reserved1;
#endif
    data_.reserved2 = src.reserved2;
    data_.reserved3 = src.reserved3;
    data_.timestamp = src.timestamp;
    data_.reserved4 = src.reserved4;
    data_.reserved5 = src.reserved5;
    data_.reserved6 = src.reserved6;
    data_.reserved7 = src.reserved7;
#endif
}

void TxBufferDescriptor::copyTo(enet_tx_bd_struct_t& dst) const {
    dst.length = data_.length;
    dst.control = data_.control;
    dst.buffer = data_.buffer;

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    dst.controlExtend0 = data_.controlExtend0;
    dst.controlExtend1 = data_.controlExtend1;
#if defined(FSL_FEATURE_ENET_HAS_AVB) && FSL_FEATURE_ENET_HAS_AVB
    dst.txLaunchTimeLow = data_.txLaunchTimeLow;
    dst.txLaunchTimeHigh = data_.txLaunchTimeHigh;
#else
    dst.reserved0 = data_.reserved0;
    dst.reserved1 = data_.reserved1;
#endif
    dst.reserved2 = data_.reserved2;
    dst.reserved3 = data_.reserved3;
    dst.timestamp = data_.timestamp;
    dst.reserved4 = data_.reserved4;
    dst.reserved5 = data_.reserved5;
    dst.reserved6 = data_.reserved6;
    dst.reserved7 = data_.reserved7;
#endif
}