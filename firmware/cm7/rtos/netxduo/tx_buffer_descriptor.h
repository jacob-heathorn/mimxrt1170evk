#ifndef TX_BUFFER_DESCRIPTOR_H
#define TX_BUFFER_DESCRIPTOR_H

#include <cstdint>

// Control and status bit masks for transmit buffer descriptor
#define TX_BD_READY_MASK       0x8000U  // Ready bit mask
#define TX_BD_SOFTOWNER1_MASK  0x4000U  // Software owner one mask
#define TX_BD_WRAP_MASK        0x2000U  // Wrap buffer descriptor mask
#define TX_BD_SOFTOWNER2_MASK  0x1000U  // Software owner two mask
#define TX_BD_LAST_MASK        0x0800U  // Last BD of the frame mask
#define TX_BD_TRANSMITCRC_MASK 0x0400U  // Transmit CRC mask

// Following layout from RM:
// 60.3.11.2 Legacy transmit buffer descriptor
//
// C++ class for Ethernet transmit buffer descriptor
// Note: Hardware requires minimum 8-byte (64-bit) alignment for DMA access per NXP driver
// TODO: Verify exact alignment requirement in i.MX RT1170 Reference Manual section 60.3.11
// Currently using 16-byte alignment, NXP recommends ENET_BUFF_ALIGNMENT (64-byte)
// Alignment is handled by allocating from OCRAM2 with proper alignment
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

    // Reset descriptor to initial state
    void reset();

    // Get raw memory layout (for hardware access)
    volatile void* getRawMemory();
    const volatile void* getRawMemory() const;

    // Comparison operators
    bool operator==(const TxBufferDescriptor& other) const;
    bool operator!=(const TxBufferDescriptor& other) const;

    // Static helper to verify array base alignment for DMA
    static bool isArrayAligned(const TxBufferDescriptor* array_base) {
        uintptr_t addr = reinterpret_cast<uintptr_t>(array_base);
        return (addr & 0xF) == 0;
    }

private:
    // Memory layout matching hardware requirements
    // Layout: [length:16][control:16][buffer:32]
    // Total: 8 bytes (legacy descriptor size)
    struct {
        uint16_t length;
        uint16_t control;
        uint32_t buffer;
    } data_;
};

// Inline implementations for performance
inline void TxBufferDescriptor::setReady(bool ready) {
    if (ready) {
        data_.control |= TX_BD_READY_MASK;
    } else {
        data_.control &= ~TX_BD_READY_MASK;
    }
}

inline bool TxBufferDescriptor::isReady() const {
    return (data_.control & TX_BD_READY_MASK) != 0;
}

inline void TxBufferDescriptor::setWrap(bool wrap) {
    if (wrap) {
        data_.control |= TX_BD_WRAP_MASK;
    } else {
        data_.control &= ~TX_BD_WRAP_MASK;
    }
}

inline bool TxBufferDescriptor::isWrap() const {
    return (data_.control & TX_BD_WRAP_MASK) != 0;
}

inline void TxBufferDescriptor::setLast(bool last) {
    if (last) {
        data_.control |= TX_BD_LAST_MASK;
    } else {
        data_.control &= ~TX_BD_LAST_MASK;
    }
}

inline bool TxBufferDescriptor::isLast() const {
    return (data_.control & TX_BD_LAST_MASK) != 0;
}

inline void TxBufferDescriptor::setTransmitCRC(bool enable) {
    if (enable) {
        data_.control |= TX_BD_TRANSMITCRC_MASK;
    } else {
        data_.control &= ~TX_BD_TRANSMITCRC_MASK;
    }
}

inline bool TxBufferDescriptor::isTransmitCRC() const {
    return (data_.control & TX_BD_TRANSMITCRC_MASK) != 0;
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

inline volatile void* TxBufferDescriptor::getRawMemory() {
    return reinterpret_cast<volatile void*>(&data_);
}

inline const volatile void* TxBufferDescriptor::getRawMemory() const {
    return reinterpret_cast<const volatile void*>(&data_);
}

#endif // TX_BUFFER_DESCRIPTOR_H