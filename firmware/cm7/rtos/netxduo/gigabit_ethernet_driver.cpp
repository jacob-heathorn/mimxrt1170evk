#include "gigabit_ethernet_driver.h"
#include <cstdio>
#include <cstring>
#include "fsl_enet.h"
#include "nx_api.h"  // For NX_PACKET structure
#include "utils/ocram2_allocator.hpp"
#include "utils/dtcm_allocator.hpp"
#include "ftl/allocator/bump_pool_buffer_strategy.hpp"
#include "ftl/allocator/buffer_allocator.hpp"

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
    // Initialize TxFrame with the descriptor ring
    ethernet::detail::TxFrame::initialize(&tx_descriptor_ring_);

    // Initialize ethernet::Frame allocator strategies with varying sizes
    // Similar to how UDP datagrams are set up in hello_netx
    // Maximum frame size is 1536 bytes (matching NX_PACKET max size)

    // Set up buffer strategies for different frame sizes
    // Use OCRAM2 (non-cacheable) for DMA compatibility - same as NX_PACKET pool
    // Require 8-byte alignment for Ethernet DMA
    //
    // TODO: Consider exposing these strategies through the interface.
    constexpr size_t dma_alignment = 8;
    static ftl::allocator::BumpPoolBufferStrategy strategy_64(Ocram2Allocator::instance(), 64, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_128(Ocram2Allocator::instance(), 128, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_256(Ocram2Allocator::instance(), 256, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_512(Ocram2Allocator::instance(), 512, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1024(Ocram2Allocator::instance(), 1024, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1536(Ocram2Allocator::instance(), 1536, dma_alignment);

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

    return true;  // Return success
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

// C interface functions for calling from nx_driver_imxrt.c
extern "C" {

int gigabit_ethernet_driver_initialize() {
    // Convert bool to int for C interface (0 = success, -1 = error)
    return GigabitEthernetDriver::instance().initialize() ? 0 : -1;
}

bool gigabit_ethernet_driver_send(void* packet_ptr) {
    NX_PACKET* packet = static_cast<NX_PACKET*>(packet_ptr);

    // This driver does not support chained packets
    assert(packet->nx_packet_next == nullptr && "Driver does not support chained packets");

    // Calculate frame size from packet pointers
    size_t packet_size = packet->nx_packet_append_ptr - packet->nx_packet_prepend_ptr;

    // Create ethernet::Frame with 2-byte padding for hardware requirement
    ethernet::Frame frame(packet_size + 2);

    // Copy packet data starting at offset 2
    std::memcpy(frame.front() + 2, packet->nx_packet_prepend_ptr, packet_size);

    // Pass the frame to the driver
    bool success = GigabitEthernetDriver::instance().send(std::move(frame));

    if (success) {
        // Remove the Ethernet header that was added by _nx_driver_packet_send()
        // before releasing the packet back to the pool
        NX_DRIVER_ETHERNET_HEADER_REMOVE(packet);

        // Release the original packet immediately since Frame has copied the data
        nx_packet_transmit_release(packet);
    }

    return success;
}

void gigabit_ethernet_driver_process_transmitted_packets() {
    GigabitEthernetDriver::instance().process_transmitted_packets();
}

} // extern "C"

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