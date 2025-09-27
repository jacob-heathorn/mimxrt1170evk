#include "gigabit_ethernet_driver.h"
#include <cstdio>
#include <cstring>
#include "fsl_enet.h"
#include "nx_api.h"  // For NX_PACKET structure
#include "utils/ocram2_allocator.hpp"
#include "utils/dtcm_allocator.hpp"  // For TxFrame allocation
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

GigabitEthernetDriver::GigabitEthernetDriver() :
    tx_descriptor_ring_(nullptr) {
    // Constructor - initialize descriptor ring pointer

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

GigabitEthernetDriver::~GigabitEthernetDriver() {
    // Destructor - will be expanded later
}

int GigabitEthernetDriver::initialize() {
    printf("GigabitEthernetDriver::initialize\n");

    // Clear the queue if it has any leftover frames
    tx_frame_queue_.clear();

    // Allocate TX descriptor ring from OCRAM2 (non-cacheable, 64-byte aligned)
    // NXP driver suggests minimum 8-byte, recommended 64-byte (ENET_BUFF_ALIGNMENT)
    // TODO: Confirm above statement in RM
    size_t ring_size = sizeof(TxBufferDescriptorRing<TX_DESCRIPTOR_COUNT>);
    void* mem = Ocram2Allocator::instance().allocate(ring_size, 64);
    if (!mem) {
        printf("GigabitEthernetDriver: Failed to allocate TX descriptor ring\n");
        return -1;
    }

    // Placement new to construct TxBufferDescriptorRing
    tx_descriptor_ring_ = new (mem) TxBufferDescriptorRing<TX_DESCRIPTOR_COUNT>();

    // Ring constructor already initializes descriptors and sets wrap bit

    // Make sure Number of Buffer Descriptors is power of 2
    static_assert((TX_DESCRIPTOR_COUNT & (TX_DESCRIPTOR_COUNT - 1)) == 0,
                  "Number of Buffer Descriptors must be power of 2");

    // Set Transmit Descriptor List Address Register
    // Point to the base of the descriptor ring
    ENET_1G->TDSR = tx_descriptor_ring_->getBaseAddress();

    printf("GigabitEthernetDriver: Initialized TX descriptor ring with %u descriptors at %p, TDSR set to 0x%08lX\n",
           TX_DESCRIPTOR_COUNT, const_cast<const void*>(tx_descriptor_ring_->getRawMemory()), ENET_1G->TDSR);

    return 0;  // Return success
}

bool GigabitEthernetDriver::send(NX_PACKET* packet) {
    printf("GigabitEthernetDriver::send\n");

    if (!packet) {
        return false;
    }

    // This driver does not support chained packets
    assert(packet->nx_packet_next == nullptr && "Driver does not support chained packets");

    // Static TxFrame allocator using DTCM memory
    // BumpPoolObjStrategy takes only the allocator
    static ftl::allocator::BumpPoolObjStrategy<ethernet::TxFrame> tx_frame_strategy(DtcmAllocator::instance());
    static ftl::allocator::ObjAllocator<ethernet::TxFrame> tx_frame_allocator(tx_frame_strategy);

    // Get the next available descriptor from the ring
    TxBufferDescriptor* descriptor = tx_descriptor_ring_->acquire_front();
    if (!descriptor) {
        // Ring is full, cannot send
        assert(false && "Ethernet Tx descriptor ring is full");
        return false;
    }

    printf("Descriptor address %p\n", descriptor);

    // Check if descriptor is free (hardware cleared READY bit)
    if (descriptor->isReady()) {
        // Descriptor is still owned by hardware, ring state is inconsistent
        // This shouldn't happen if ring is properly managed
        assert(false && "Ring returned descriptor still owned by hardware");
        return false;
    }

    // Create TxFrame which copies the packet data
    // Uses custom allocator with DTCM memory
    auto tx_frame = tx_frame_allocator.make_unique(*descriptor, packet);

    // Mark frame ready for transmission
    tx_frame->markReadyForTransmission();

    // Queue the frame
    if (!tx_frame_queue_.full()) {
        tx_frame_queue_.push(std::move(tx_frame));
    } else {
        // Queue is full, cannot send
        return false;
    }

    // Remove the Ethernet header that was added by _nx_driver_packet_send()
    // before releasing the packet back to the pool
    NX_DRIVER_ETHERNET_HEADER_REMOVE(packet);

    // Release the original packet immediately since TxFrame owns the data now
    nx_packet_transmit_release(packet);

    // Descriptor is now in use, tracked by the ring's internal count

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
        if (tx_frame_queue_.front()->isTransmissionComplete()) {
            // Transmission complete - remove frame from queue
            // Frame destructor will clean up the Payload buffer
            tx_frame_queue_.pop();

            // Release the descriptor back to the ring
            tx_descriptor_ring_->release_back();
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
    return GigabitEthernetDriver::instance().initialize();
}

bool gigabit_ethernet_driver_send(void* packet_ptr) {
    NX_PACKET* packet = static_cast<NX_PACKET*>(packet_ptr);
    return GigabitEthernetDriver::instance().send(packet);
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