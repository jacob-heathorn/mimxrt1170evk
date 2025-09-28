#include "gigabit_ethernet_driver.h"
#include <cstdio>
#include <cstring>
#include "fsl_enet.h"
#include "nx_api.h"  // For NX_PACKET structure
#include "utils/ocram2_allocator.hpp"
#include "utils/dtcm_allocator.hpp"
#include "ftl/allocator/bump_pool_buffer_strategy.hpp"
#include "ftl/allocator/buffer_allocator.hpp"
#include "detail/gigabit_mac.h"
#include "detail/phyrtl8211f.h"

// Macro to remove Ethernet header from packet before releasing to pool
#define NX_DRIVER_ETHERNET_FRAME_SIZE 14
#define NX_DRIVER_ETHERNET_HEADER_REMOVE(p) \
{ \
    (p)->nx_packet_prepend_ptr += NX_DRIVER_ETHERNET_FRAME_SIZE; \
    (p)->nx_packet_length -= NX_DRIVER_ETHERNET_FRAME_SIZE; \
}

// Macro to remove Ethernet header from packet
#define NX_DRIVER_ETHERNET_FRAME_SIZE 14
#define NX_DRIVER_ETHERNET_HEADER_REMOVE(p) \
{ \
    (p)->nx_packet_prepend_ptr += NX_DRIVER_ETHERNET_FRAME_SIZE; \
    (p)->nx_packet_length -= NX_DRIVER_ETHERNET_FRAME_SIZE; \
}

GigabitEthernetDriver::GigabitEthernetDriver() {
    // Create the GigabitMac singleton instance.
    ethernet::detail::GigabitMac::create();

    // Initialize TxFrame with the descriptor ring
    ethernet::detail::TxFrame::initialize(&tx_descriptor_ring_);

    // Initialize ethernet::Frame allocator strategies with varying sizes
    // Similar to how UDP datagrams are set up in hello_netx
    // Maximum frame size: 1538 (1536+2 byte padding) bytes
    // Minimum frame size: 64 (bytes on the wire)

    // Set up buffer strategies for different frame sizes
    // Use OCRAM2 (non-cacheable) for DMA compatibility - same as NX_PACKET pool
    // Require 8-byte alignment for Ethernet DMA
    //
    // TODO: Consider exposing these strategies through the interface.
    constexpr size_t dma_alignment = 64;
    static ftl::allocator::BumpPoolBufferStrategy strategy_64(Ocram2Allocator::instance(), 64, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_128(Ocram2Allocator::instance(), 128, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_256(Ocram2Allocator::instance(), 256, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_512(Ocram2Allocator::instance(), 512, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1024(Ocram2Allocator::instance(), 1024, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1536(Ocram2Allocator::instance(), 1538, dma_alignment);

    // Create a BufferAllocator with all strategies
    static ftl::allocator::BufferAllocator buffer_allocator(
        strategy_64, strategy_128, strategy_256,
        strategy_512, strategy_1024, strategy_1536);

    // Initialize ethernet::Frame with the buffer allocator
    ethernet::Frame::initialize(buffer_allocator);
}

bool GigabitEthernetDriver::initialize() {
    printf("GigabitEthernetDriver::initialize\n");

    // Clear the queue if it has any leftover frames
    tx_frame_queue_.clear();

    // Set Transmit Descriptor List Address Register
    // Point to the base of the descriptor ring (allocated in constructor)
    ENET_1G->TDSR = tx_descriptor_ring_.getBaseAddress();

    printf("GigabitEthernetDriver: TDSR set to 0x%08lX\n", ENET_1G->TDSR);


    // Reset RX descriptor ring to ensure clean state
    // This is important for warm boot scenarios or re-initialization
    rx_descriptor_ring_.reset();

    // Set Receive Descriptor List Address Register
    // Point to the base of the RX descriptor ring
    ENET_1G->RDSR = rx_descriptor_ring_.getBaseAddress();

    printf("GigabitEthernetDriver: RDSR set to 0x%08lX\n", ENET_1G->RDSR);

    return true;  // Return success
}

status_t GigabitEthernetDriver::initializePhy(uint8_t phyAddress, bool autoNegotiation) {
    // Initialize MDIO interface
    ethernet::detail::GigabitMac::instance().mdioInit();

    // Create PHY singleton with MAC reference, address and auto-negotiation setting
    ethernet::detail::PhyRtl8211f::create(
        ethernet::detail::GigabitMac::instance(),
        phyAddress,
        autoNegotiation
    );

    // Initialize the PHY
    return ethernet::detail::PhyRtl8211f::instance().initialize();
}

bool GigabitEthernetDriver::waitForLink(phy_speed_t* speed, phy_duplex_t* duplex) {
    constexpr uint32_t PHY_AUTONEGO_TIMEOUT_COUNT = 100000;
    bool link = false;
    bool autonego = false;
    uint32_t count = PHY_AUTONEGO_TIMEOUT_COUNT;

    // Wait for auto-negotiation success and link up
    do {
        ethernet::detail::PhyRtl8211f::instance().getAutoNegotiationStatus(&autonego);
        ethernet::detail::PhyRtl8211f::instance().getLinkStatus(&link);
        if (autonego && link) {
            break;
        }
    } while (--count);

    if (!autonego) {
        printf("PHY Auto-negotiation failed. Please check the cable connection and link partner setting.\r\n");
        return false;
    }

    if (!link) {
        printf("PHY Link is down. Please check the cable connection.\r\n");
        return false;
    }

    // Get the negotiated speed and duplex
    ethernet::detail::PhyRtl8211f::instance().getLinkSpeedDuplex(speed, duplex);

    return true;
}

bool GigabitEthernetDriver::send(ethernet::Frame&& frame) {
    printf("GigabitEthernetDriver::send\n");

    // Check if queue has space
    if (tx_frame_queue_.full()) {
        // Queue is full, cannot send
        return false;
    }

    // Create TxFrame which acquires descriptor and takes ownership of the frame
    ethernet::detail::TxFrame tx_frame = ethernet::detail::TxFrame::create(std::move(frame));

    // Check if frame was successfully created
    if (!tx_frame) {
        // No descriptor available
        return false;
    }

    // Mark frame ready for transmission
    tx_frame.markReadyForTransmission();

    // Move the frame into the queue
    tx_frame_queue_.push(std::move(tx_frame));

    // Resume DMA transmission if suspended (using ENET_1G for gigabit)
    if (!ENET_1G->TDAR) {
        ENET_1G->TDAR = ENET_TDAR_TDAR_MASK;
    }

    return true;
}

void GigabitEthernetDriver::process_transmitted_packets() {
    // Process completed transmissions in queue order
    while (!tx_frame_queue_.empty()) {
        // Check if the front frame has completed transmission
        // ETL queue uses front() to access without removing
        if (tx_frame_queue_.front().isTransmissionComplete()) {
            // Transmission complete - remove frame from queue
            // Frame destructor will clean up the Frame buffer and release descriptor
            tx_frame_queue_.pop();
        } else {
            // Front frame not yet transmitted, stop processing
            // (frames are processed in order)
            break;
        }
    }
}

ethernet::Frame GigabitEthernetDriver::receive() {
    // Acquire the next descriptor that has been filled by hardware
    auto* desc = rx_descriptor_ring_.acquire();
    if (!desc) {
        return ethernet::Frame();  // No packet available
    }

    // Check if this is a complete frame (not chained)
    if (!desc->isLast()) {
        // Chained packet - not supported
        printf("Received packet requires chaining - not supported.\n");
        // Release descriptor immediately back to hardware
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    // Check for errors
    if (desc->hasError()) {
        // Error in received packet - skip it
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    // Get buffer and length from descriptor
    void* buffer = desc->getBuffer();
    size_t length = desc->getLength();

    // Skip 2-byte padding at the beginning
    if (length <= 2) {
        // Invalid length
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    const uint8_t* data = static_cast<const uint8_t*>(buffer) + 2;
    size_t frame_length = length - 2;

    // Create ethernet::Frame with the received data
    ethernet::Frame frame(frame_length);

    if (!frame) {
        // Failed to allocate frame
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    // Copy the received data to the frame
    std::memcpy(frame.front(), data, frame_length);

    // IMPORTANT: Release descriptor back to hardware immediately after copy
    // This maintains FIFO order - descriptors are always processed and released in order
    // Note: releaseCurrentDescriptor() includes a memory barrier to ensure the
    // memcpy completes before the descriptor is returned to hardware
    rx_descriptor_ring_.release(desc);

    // Resume DMA reception if it was suspended
    if (!ENET_1G->RDAR) {
        ENET_1G->RDAR = ENET_RDAR_RDAR_MASK;
    }

    return frame;
}

void GigabitEthernetDriver::handle_link_mode_change(unsigned int link_speed, unsigned int link_duplex) {
    /****************************************************************************
     * Handle Ethernet link mode change (speed/duplex change)
     *
     * This function is called when the PHY detects a change in link status,
     * such as when:
     * - Ethernet cable is plugged/unplugged
     * - Link partner changes speed/duplex settings
     * - Auto-negotiation completes with different parameters
     * - Link quality issues cause renegotiation
     *
     * The function needs to:
     * 1. Stop the Ethernet controller temporarily
     * 2. Reconfigure hardware for new link mode (speed/duplex)
     * 3. Clean up any in-flight packets
     * 4. Reset TX/RX indices and descriptors
     * 5. Restart the Ethernet controller
     *
     * @param link_speed  New link speed (e.g., 10M, 100M, 1G)
     * @param link_duplex New duplex mode (half/full)
     ****************************************************************************/

    // TODO: Implement link mode change handling
    // - Stop ENET_1G controller (ECR register)
    // - Configure speed settings (RCR register for RMII mode)
    // - Configure duplex settings (RCR/TCR registers)
    // - Release any pending TX packets
    // - Reset TX/RX indices
    // - Re-initialize descriptor registers (TDSR, RDSR, MRBR)
    // - Restart ENET_1G controller if previously enabled

    // For now, just log the change
    printf("GigabitEthernetDriver: Link mode change - Speed: %u, Duplex: %u\n",
           link_speed, link_duplex);
}



// Direct C++ interface - no C wrapper functions needed since nx_driver_imxrt.cpp is now C++
