#pragma once

#include <cstdint>
#include <cassert>

namespace ethernet {
namespace detail {

// RX Buffer Descriptor for i.MX RT1170 Gigabit Ethernet
//
// 8-byte hardware descriptor:
// - Offset 0x0: Received frame length (16 bits) - set by hardware
// - Offset 0x2: Control/Status (16 bits) - EMPTY, WRAP, error flags
// - Offset 0x4: Buffer address (32 bits)
//
// Software sets EMPTY=1 to give buffer to hardware, hardware clears after RX.
class RxDescriptor {
public:
    // Control bit masks
    static constexpr uint16_t EMPTY_MASK = 0x8000;  // Buffer is empty (owned by DMA)
    static constexpr uint16_t WRAP_MASK  = 0x2000;  // Wrap to first descriptor
    static constexpr uint16_t LAST_MASK  = 0x0800;  // Last buffer in frame
    static constexpr uint16_t MISS_MASK  = 0x0100;  // Frame truncated
    static constexpr uint16_t BC_MASK    = 0x0080;  // Broadcast frame
    static constexpr uint16_t MC_MASK    = 0x0040;  // Multicast frame
    static constexpr uint16_t LG_MASK    = 0x0020;  // Length violation
    static constexpr uint16_t NO_MASK    = 0x0010;  // Non-octet aligned
    static constexpr uint16_t CR_MASK    = 0x0004;  // CRC error
    static constexpr uint16_t OV_MASK    = 0x0002;  // Overrun
    static constexpr uint16_t TR_MASK    = 0x0001;  // Truncated

    // Constructor
    RxDescriptor() : length_(0), control_(EMPTY_MASK), buffer_(0) {}

    // Check if buffer is empty (owned by DMA)
    bool isEmpty() const {
        return (control_ & EMPTY_MASK) != 0;
    }

    // Set empty bit (return buffer to hardware)
    void setEmpty() {
        control_ |= EMPTY_MASK;  // Software can only set EMPTY=1
    }

    // Check if this is the last buffer of a frame
    bool isLast() const {
        return (control_ & LAST_MASK) != 0;
    }

    // Check if wrap bit is set (last descriptor in ring)
    bool isWrap() const {
        return (control_ & WRAP_MASK) != 0;
    }

    // Set wrap bit (for last descriptor in ring)
    void setWrap(bool wrap) {
        if (wrap) {
            control_ |= WRAP_MASK;
        } else {
            control_ &= ~WRAP_MASK;
        }
    }

    // Get length of received data
    uint16_t getLength() const {
        return length_;
    }

    // Set buffer pointer
    void setBuffer(void* buffer) {
        assert(buffer != nullptr);
        // Ensure 8-byte alignment for DMA
        assert((reinterpret_cast<uintptr_t>(buffer) & 0x7) == 0);
        buffer_ = reinterpret_cast<uint32_t>(buffer);
    }

    // Get buffer pointer
    void* getBuffer() const {
        return reinterpret_cast<void*>(buffer_);
    }

    // Check for receive errors
    bool hasError() const {
        // Check for any error bits
        return (control_ & (CR_MASK | OV_MASK | TR_MASK | NO_MASK | LG_MASK)) != 0;
    }

    // Reset descriptor to initial state (empty, no errors)
    void reset() {
        length_ = 0;
        control_ = EMPTY_MASK;
        buffer_ = 0;
    }

    // Get raw memory address (for RDSR register)
    void* getRawMemory() {
        return this;
    }

private:
    // Memory layout must match hardware expectations (8 bytes total)
    uint16_t length_;   // Bytes 0-1: Length of received data
    uint16_t control_;  // Bytes 2-3: Control and status flags
    uint32_t buffer_;   // Bytes 4-7: Buffer pointer
};

// Verify structure size matches hardware expectation
static_assert(sizeof(RxDescriptor) == 8, "RxDescriptor must be exactly 8 bytes");

} // namespace detail
} // namespace ethernet