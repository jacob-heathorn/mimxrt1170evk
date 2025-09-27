#pragma once

#include <cstdint>

namespace ethernet {
namespace detail {

// Control and status bit masks for transmit buffer descriptor
#define TX_BD_READY_MASK       0x8000U  // Ready bit mask
#define TX_BD_SOFTOWNER1_MASK  0x4000U  // Software owner one mask
#define TX_BD_WRAP_MASK        0x2000U  // Wrap buffer descriptor mask
#define TX_BD_SOFTOWNER2_MASK  0x1000U  // Software owner two mask
#define TX_BD_LAST_MASK        0x0800U  // Last BD of the frame mask
#define TX_BD_TRANSMITCRC_MASK 0x0400U  // Transmit CRC mask

// TX Buffer Descriptor for i.MX RT1170 Gigabit Ethernet DMA
//
// This class represents a single transmit buffer descriptor as defined in
// the i.MX RT1170 Reference Manual section 60.3.11.2 (Legacy format).
//
// Hardware Descriptor Format (8 bytes total):
// ------------------------------------------
// Offset 0x0: [15:0]  Frame Length - Number of bytes to transmit
// Offset 0x2: [15:0]  Control/Status bits:
//             [15]    R (Ready) - 1=owned by DMA, 0=owned by software
//             [14]    TO1 (Software Owner 1) - For software use
//             [13]    W (Wrap) - 1=last descriptor in ring
//             [12]    TO2 (Software Owner 2) - For software use
//             [11]    L (Last) - 1=last descriptor of frame
//             [10]    TC (Transmit CRC) - 1=append CRC
//             [9:0]   Reserved/Status bits set by hardware
// Offset 0x4: [31:0]  Buffer Address - Physical address of data buffer
//
// DMA Operation:
// -------------
// 1. Software prepares descriptor: sets buffer address, length, control bits
// 2. Software sets READY bit to transfer ownership to hardware
// 3. Hardware reads descriptor, transmits data, clears READY bit
// 4. Software checks READY bit to detect completion
//
// Memory Requirements:
// -------------------
// - Descriptors must be in non-cacheable memory for coherent DMA access
// - Descriptor arrays require 64-byte alignment for optimal DMA performance
// - Data buffers pointed to by descriptors must be 8-byte aligned
//
// Note: This implementation uses direct member fields (not a struct wrapper)
//       to minimize indirection and match the exact hardware layout.
class TxDescriptor {
public:
    TxDescriptor() {
        // Verify size at compile time
        static_assert(sizeof(TxDescriptor) == 8, "TxDescriptor size must be 8 bytes");

        // Note: Individual descriptors in an array don't need to be 16-byte aligned.
        // Only the base of the descriptor array needs 16-byte alignment for DMA.
        // The hardware will access descriptors sequentially from the aligned base address.

        reset();
    }

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
    void setSoftwareOwner1(bool set) {
        if (set) {
            control_ |= TX_BD_SOFTOWNER1_MASK;
        } else {
            control_ &= ~TX_BD_SOFTOWNER1_MASK;
        }
    }

    bool isSoftwareOwner1() const {
        return (control_ & TX_BD_SOFTOWNER1_MASK) != 0;
    }

    void setSoftwareOwner2(bool set) {
        if (set) {
            control_ |= TX_BD_SOFTOWNER2_MASK;
        } else {
            control_ &= ~TX_BD_SOFTOWNER2_MASK;
        }
    }

    bool isSoftwareOwner2() const {
        return (control_ & TX_BD_SOFTOWNER2_MASK) != 0;
    }

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
    void reset() {
        length_ = 0;
        control_ = TX_BD_TRANSMITCRC_MASK;  // Set default control bits - transmit CRC should be enabled by default
        buffer_ = 0;
    }

    // Get raw memory layout (for hardware access)
    volatile void* getRawMemory();
    const volatile void* getRawMemory() const;

    // Comparison operators
    bool operator==(const TxDescriptor& other) const {
        return length_ == other.length_ &&
               control_ == other.control_ &&
               buffer_ == other.buffer_;
    }

    bool operator!=(const TxDescriptor& other) const {
        return !(*this == other);
    }

    // Static helper to verify array base alignment for DMA
    static bool isArrayAligned(const TxDescriptor* array_base) {
        uintptr_t addr = reinterpret_cast<uintptr_t>(array_base);
        return (addr & 0xF) == 0;
    }

private:
    // Memory layout matching hardware requirements
    // Layout: [length:16][control:16][buffer:32]
    // Total: 8 bytes (legacy descriptor size)
    uint16_t length_;
    uint16_t control_;
    uint32_t buffer_;
};

// Inline implementations for performance
inline void TxDescriptor::setReady(bool ready) {
    if (ready) {
        control_ |= TX_BD_READY_MASK;
    } else {
        control_ &= ~TX_BD_READY_MASK;
    }
}

inline bool TxDescriptor::isReady() const {
    return (control_ & TX_BD_READY_MASK) != 0;
}

inline void TxDescriptor::setWrap(bool wrap) {
    if (wrap) {
        control_ |= TX_BD_WRAP_MASK;
    } else {
        control_ &= ~TX_BD_WRAP_MASK;
    }
}

inline bool TxDescriptor::isWrap() const {
    return (control_ & TX_BD_WRAP_MASK) != 0;
}

inline void TxDescriptor::setLast(bool last) {
    if (last) {
        control_ |= TX_BD_LAST_MASK;
    } else {
        control_ &= ~TX_BD_LAST_MASK;
    }
}

inline bool TxDescriptor::isLast() const {
    return (control_ & TX_BD_LAST_MASK) != 0;
}

inline void TxDescriptor::setTransmitCRC(bool enable) {
    if (enable) {
        control_ |= TX_BD_TRANSMITCRC_MASK;
    } else {
        control_ &= ~TX_BD_TRANSMITCRC_MASK;
    }
}

inline bool TxDescriptor::isTransmitCRC() const {
    return (control_ & TX_BD_TRANSMITCRC_MASK) != 0;
}

inline void TxDescriptor::setLength(uint16_t length) {
    length_ = length;
}

inline uint16_t TxDescriptor::getLength() const {
    return length_;
}

inline void TxDescriptor::setBuffer(uint32_t buffer) {
    buffer_ = buffer;
}

inline void TxDescriptor::setBuffer(void* buffer) {
    buffer_ = reinterpret_cast<uint32_t>(buffer);
}

inline uint32_t TxDescriptor::getBuffer() const {
    return buffer_;
}

inline void* TxDescriptor::getBufferPtr() const {
    return reinterpret_cast<void*>(buffer_);
}

inline void TxDescriptor::setControl(uint16_t control) {
    control_ = control;
}

inline uint16_t TxDescriptor::getControl() const {
    return control_;
}

inline volatile void* TxDescriptor::getRawMemory() {
    return reinterpret_cast<volatile void*>(this);
}

inline const volatile void* TxDescriptor::getRawMemory() const {
    return reinterpret_cast<const volatile void*>(this);
}

} // namespace detail
} // namespace ethernet