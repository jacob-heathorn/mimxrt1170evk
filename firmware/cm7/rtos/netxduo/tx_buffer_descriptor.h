#ifndef TX_BUFFER_DESCRIPTOR_H
#define TX_BUFFER_DESCRIPTOR_H

#include <cstdint>
#include "fsl_enet.h"

// Following layout from RM:
// 60.3.11.2 Legacy transmit buffer descriptor
//
// TODO: Consider upgrading to 60.3.12 Enhanced buffer descriptors
class TxBufferDescriptor {
public:
    TxBufferDescriptor();

    // Control field management
    void setReady(bool ready);
    bool isReady() const;

    void setWrap(bool wrap);
    bool isWrap() const;

    void setLast(bool last);
    bool isLast() const;

    void setTransmitCRC(bool enable);
    bool isTransmitCRC() const;

    // Software owner bits
    void setSoftwareOwner1(bool set);
    bool isSoftwareOwner1() const;

    void setSoftwareOwner2(bool set);
    bool isSoftwareOwner2() const;

    // Length management
    void setLength(uint16_t length);
    uint16_t getLength() const;

    // Buffer management
    void setBuffer(uint32_t buffer);
    void setBuffer(void* buffer);
    uint32_t getBuffer() const;
    void* getBufferPtr() const;

    // Control field direct access
    void setControl(uint16_t control);
    uint16_t getControl() const;

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    // Extended control management
    void setInterrupt(bool enable);
    bool isInterrupt() const;

    void setTimestamp(bool enable);
    bool isTimestamp() const;

    void setProtocolChecksum(bool enable);
    bool isProtocolChecksum() const;

    void setIPChecksum(bool enable);
    bool isIPChecksum() const;

    // Error flags (extend0)
    void setTransmitError(bool error);
    bool hasTransmitError() const;

    void setUnderflowError(bool error);
    bool hasUnderflowError() const;

    void setExcessCollisionError(bool error);
    bool hasExcessCollisionError() const;

    void setFrameError(bool error);
    bool hasFrameError() const;

    void setLateCollisionError(bool error);
    bool hasLateCollisionError() const;

    void setOverflowError(bool error);
    bool hasOverflowError() const;

    void setTimestampError(bool error);
    bool hasTimestampError() const;

    // Extended control direct access
    void setControlExtend0(uint16_t control);
    uint16_t getControlExtend0() const;

    void setControlExtend1(uint16_t control);
    uint16_t getControlExtend1() const;

#if defined(FSL_FEATURE_ENET_HAS_AVB) && FSL_FEATURE_ENET_HAS_AVB
    void setTxLaunchTime(uint32_t time);
    uint32_t getTxLaunchTime() const;
#endif
#endif

    // Reset descriptor to initial state
    void reset();

    // Comparison with legacy struct for testing
    bool isEquivalentTo(const enet_tx_bd_struct_t& legacy) const;

    // Copy from legacy struct for migration
    void copyFrom(const enet_tx_bd_struct_t& src);

    // Copy to legacy struct for compatibility
    void copyTo(enet_tx_bd_struct_t& dst) const;

    // Get raw memory layout (for hardware access)
    volatile uint16_t* getRawMemory();
    const volatile uint16_t* getRawMemory() const;

private:
    // Memory layout matching hardware requirements
    // Layout: [length:16][control:16][buffer:32][extend0:16][extend1:16]...
    alignas(16) struct {
        uint16_t length;
        uint16_t control;
        uint32_t buffer;
#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
        uint16_t controlExtend0;
        uint16_t controlExtend1;
#if defined(FSL_FEATURE_ENET_HAS_AVB) && FSL_FEATURE_ENET_HAS_AVB
        uint16_t txLaunchTimeLow;
        uint16_t txLaunchTimeHigh;
#else
        uint16_t reserved0;
        uint16_t reserved1;
#endif
        uint16_t reserved2;
        uint16_t reserved3;
        uint32_t timestamp;
        uint16_t reserved4;
        uint16_t reserved5;
        uint16_t reserved6;
        uint16_t reserved7;
#endif
    } data_;
};

// Inline implementations for performance
inline void TxBufferDescriptor::setReady(bool ready) {
    if (ready) {
        data_.control |= ENET_BUFFDESCRIPTOR_TX_READY_MASK;
    } else {
        data_.control &= ~ENET_BUFFDESCRIPTOR_TX_READY_MASK;
    }
}

inline bool TxBufferDescriptor::isReady() const {
    return (data_.control & ENET_BUFFDESCRIPTOR_TX_READY_MASK) != 0;
}

inline void TxBufferDescriptor::setWrap(bool wrap) {
    if (wrap) {
        data_.control |= ENET_BUFFDESCRIPTOR_TX_WRAP_MASK;
    } else {
        data_.control &= ~ENET_BUFFDESCRIPTOR_TX_WRAP_MASK;
    }
}

inline bool TxBufferDescriptor::isWrap() const {
    return (data_.control & ENET_BUFFDESCRIPTOR_TX_WRAP_MASK) != 0;
}

inline void TxBufferDescriptor::setLast(bool last) {
    if (last) {
        data_.control |= ENET_BUFFDESCRIPTOR_TX_LAST_MASK;
    } else {
        data_.control &= ~ENET_BUFFDESCRIPTOR_TX_LAST_MASK;
    }
}

inline bool TxBufferDescriptor::isLast() const {
    return (data_.control & ENET_BUFFDESCRIPTOR_TX_LAST_MASK) != 0;
}

inline void TxBufferDescriptor::setTransmitCRC(bool enable) {
    if (enable) {
        data_.control |= ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK;
    } else {
        data_.control &= ~ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK;
    }
}

inline bool TxBufferDescriptor::isTransmitCRC() const {
    return (data_.control & ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK) != 0;
}

inline void TxBufferDescriptor::setLength(uint16_t length) {
    data_.length = length;
}

inline uint16_t TxBufferDescriptor::getLength() const {
    return data_.length;
}

inline void TxBufferDescriptor::setBuffer(uint32_t buffer) {
    data_.buffer = buffer;
}

inline void TxBufferDescriptor::setBuffer(void* buffer) {
    data_.buffer = reinterpret_cast<uint32_t>(buffer);
}

inline uint32_t TxBufferDescriptor::getBuffer() const {
    return data_.buffer;
}

inline void* TxBufferDescriptor::getBufferPtr() const {
    return reinterpret_cast<void*>(data_.buffer);
}

inline void TxBufferDescriptor::setControl(uint16_t control) {
    data_.control = control;
}

inline uint16_t TxBufferDescriptor::getControl() const {
    return data_.control;
}

inline volatile uint16_t* TxBufferDescriptor::getRawMemory() {
    return reinterpret_cast<volatile uint16_t*>(&data_);
}

inline const volatile uint16_t* TxBufferDescriptor::getRawMemory() const {
    return reinterpret_cast<const volatile uint16_t*>(&data_);
}

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
inline void TxBufferDescriptor::setControlExtend0(uint16_t control) {
    data_.controlExtend0 = control;
}

inline uint16_t TxBufferDescriptor::getControlExtend0() const {
    return data_.controlExtend0;
}

inline void TxBufferDescriptor::setControlExtend1(uint16_t control) {
    data_.controlExtend1 = control;
}

inline uint16_t TxBufferDescriptor::getControlExtend1() const {
    return data_.controlExtend1;
}

inline void TxBufferDescriptor::setInterrupt(bool enable) {
    if (enable) {
        data_.controlExtend1 |= ENET_BUFFDESCRIPTOR_TX_INTERRUPT_MASK;
    } else {
        data_.controlExtend1 &= ~ENET_BUFFDESCRIPTOR_TX_INTERRUPT_MASK;
    }
}

inline bool TxBufferDescriptor::isInterrupt() const {
    return (data_.controlExtend1 & ENET_BUFFDESCRIPTOR_TX_INTERRUPT_MASK) != 0;
}

inline void TxBufferDescriptor::setIPChecksum(bool enable) {
    if (enable) {
        data_.controlExtend1 |= ENET_BUFFDESCRIPTOR_TX_IPCHECKSUM_MASK;
    } else {
        data_.controlExtend1 &= ~ENET_BUFFDESCRIPTOR_TX_IPCHECKSUM_MASK;
    }
}

inline bool TxBufferDescriptor::isIPChecksum() const {
    return (data_.controlExtend1 & ENET_BUFFDESCRIPTOR_TX_IPCHECKSUM_MASK) != 0;
}

inline void TxBufferDescriptor::setProtocolChecksum(bool enable) {
    if (enable) {
        data_.controlExtend1 |= ENET_BUFFDESCRIPTOR_TX_PROTOCHECKSUM_MASK;
    } else {
        data_.controlExtend1 &= ~ENET_BUFFDESCRIPTOR_TX_PROTOCHECKSUM_MASK;
    }
}

inline bool TxBufferDescriptor::isProtocolChecksum() const {
    return (data_.controlExtend1 & ENET_BUFFDESCRIPTOR_TX_PROTOCHECKSUM_MASK) != 0;
}
#endif

#endif // TX_BUFFER_DESCRIPTOR_H