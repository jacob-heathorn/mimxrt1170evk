#pragma once

#include <cstdint>
#include <cassert>

namespace ethernet {
namespace detail {

// RX Buffer Descriptor for i.MX RT1170 Gigabit Ethernet
//
// This class represents a single receive buffer descriptor used by the
// ENET_1G DMA engine. The hardware uses these descriptors to write
// received Ethernet frames into memory buffers.
//
// Memory Layout (8 bytes total):
// - Bytes 0-1: Length of received data
// - Bytes 2-3: Control/status flags
// - Bytes 4-7: Buffer pointer (physical address)
//
// Control Bits (from fsl_enet.h):
// - EMPTY (bit 15): 1=buffer empty (owned by DMA), 0=buffer full (owned by CPU)
// - WRAP  (bit 13): 1=last descriptor in ring, wrap to start
// - LAST  (bit 11): 1=last buffer of frame (for single-buffer frames)
// - MISS  (bit 8):  1=frame truncated due to no buffers
// - BC    (bit 7):  1=broadcast frame received
// - MC    (bit 6):  1=multicast frame received
// - LG    (bit 5):  1=frame length violation
// - NO    (bit 4):  1=non-octet aligned frame
// - CR    (bit 2):  1=CRC error
// - OV    (bit 1):  1=FIFO overrun
// - TR    (bit 0):  1=frame truncated
//
// DMA Behavior:
// - Hardware writes received data to buffer pointed to by buffer_
// - Hardware updates length_ with actual bytes received
// - Hardware clears EMPTY bit when frame received
// - Software must set EMPTY bit after processing to return buffer to DMA
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

    // Set empty bit (return buffer to DMA)
    void setEmpty(bool empty) {
        if (empty) {
            control_ |= EMPTY_MASK;
        } else {
            control_ &= ~EMPTY_MASK;
        }
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