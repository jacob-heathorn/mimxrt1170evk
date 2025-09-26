#include "gigabit_ethernet_driver.h"
#include <cstdio>
#include <cstring>
#include "fsl_enet.h"
#include "nx_api.h"  // For NX_PACKET structure
#include "utils/ocram2_allocator.hpp"

// Macro to remove Ethernet header from packet
#define NX_DRIVER_ETHERNET_FRAME_SIZE 14
#define NX_DRIVER_ETHERNET_HEADER_REMOVE(p) \
{ \
    (p)->nx_packet_prepend_ptr += NX_DRIVER_ETHERNET_FRAME_SIZE; \
    (p)->nx_packet_length -= NX_DRIVER_ETHERNET_FRAME_SIZE; \
}

GigabitEthernetDriver::GigabitEthernetDriver() :
    tx_descriptor_ring_(nullptr),
    transmit_current_index_(0),
    number_of_transmit_buffers_in_use_(0),
    transmit_release_index_(0) {
    // Constructor - initialize transmit indices and clear packets array
    for (unsigned int i = 0; i < TX_DESCRIPTOR_COUNT; i++) {
        transmit_packets_[i] = nullptr;
    }
}

GigabitEthernetDriver::~GigabitEthernetDriver() {
    // Destructor - will be expanded later
}

int GigabitEthernetDriver::initialize() {
    printf("GigabitEthernetDriver::initialize\n");

    // Initialize the transmit indices, buffers in use count, and clear packets array
    transmit_current_index_ = 0;
    transmit_release_index_ = 0;
    number_of_transmit_buffers_in_use_ = 0;
    for (unsigned int i = 0; i < TX_DESCRIPTOR_COUNT; i++) {
        transmit_packets_[i] = nullptr;
    }

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

bool GigabitEthernetDriver::send(void* packet_ptr) {
    printf("GigabitEthernetDriver::send\n");

    NX_PACKET* packet = static_cast<NX_PACKET*>(packet_ptr);
    if (!packet) {
        return false;
    }

    // Pick up the first BD
    unsigned int curIdx = transmit_current_index_;

    // Check if it is a free descriptor
    if ((*tx_descriptor_ring_)[curIdx].isReady() || transmit_packets_[curIdx]) {
        // Buffer is still owned by device
        return false;
    }

    // Set the buffer size
    (*tx_descriptor_ring_)[curIdx].setLength(packet->nx_packet_append_ptr - packet->nx_packet_prepend_ptr + 2);

    // Handle alignment requirement (8-byte alignment)
    uint8_t remainder = static_cast<uint8_t>(reinterpret_cast<uintptr_t>(packet->nx_packet_prepend_ptr - 2) & 0x07);
    if (remainder) {
        uint8_t* src_addr = packet->nx_packet_prepend_ptr;
        // Make sure transmit BD buffer is 8-byte aligned
        packet->nx_packet_prepend_ptr -= remainder;
        memmove(packet->nx_packet_prepend_ptr, src_addr, (*tx_descriptor_ring_)[curIdx].getLength());
    }

    // Set the buffer pointer
    (*tx_descriptor_ring_)[curIdx].setBuffer(reinterpret_cast<uint32_t>(packet->nx_packet_prepend_ptr - 2));

    // Clear the first descriptor's LAST bit
    (*tx_descriptor_ring_)[curIdx].setLast(false);

    // Handle chained packets
    unsigned int bd_count = 0;
    NX_PACKET* pktIdx = packet->nx_packet_next;
    while (pktIdx != nullptr) {
        // Move to next descriptor
        curIdx = (curIdx + 1) & (TX_DESCRIPTOR_COUNT - 1);

        // Check if it is a free descriptor
        if ((*tx_descriptor_ring_)[curIdx].isReady() || transmit_packets_[curIdx]) {
            // No more descriptor available
            return false;
        }

        // Set the buffer pointer
        (*tx_descriptor_ring_)[curIdx].setBuffer(reinterpret_cast<uint32_t>(pktIdx->nx_packet_prepend_ptr));

        // Set the buffer size
        (*tx_descriptor_ring_)[curIdx].setLength(pktIdx->nx_packet_append_ptr - pktIdx->nx_packet_prepend_ptr);

        // Clear the descriptor's LAST bit
        (*tx_descriptor_ring_)[curIdx].setLast(false);

        // Increment the BD count
        bd_count++;

        // Move to next packet in chain
        pktIdx = pktIdx->nx_packet_next;
    }

    // Set the last descriptor's LAST and READY bits
    (*tx_descriptor_ring_)[curIdx].setLast(true);
    (*tx_descriptor_ring_)[curIdx].setReady(true);

    // Save the packet pointer for later release
    transmit_packets_[curIdx] = packet;

    // Set the current index to the next descriptor
    transmit_current_index_ = (curIdx + 1) & (TX_DESCRIPTOR_COUNT - 1);

    // Increment the transmit buffers in use count
    number_of_transmit_buffers_in_use_ += bd_count + 1;

    // Set READY bit to indicate BDs are ready (in reverse order)
    for (; bd_count > 0; bd_count--) {
        // Move to previous BD
        curIdx = (curIdx - 1) & (TX_DESCRIPTOR_COUNT - 1);
        // Set this BD's READY bit
        (*tx_descriptor_ring_)[curIdx].setReady(true);
    }

    // Resume DMA transmission if suspended (using ENET_1G for gigabit)
    if (!ENET_1G->TDAR) {
        ENET_1G->TDAR = ENET_TDAR_TDAR_MASK;
    }

    return true;
}

void GigabitEthernetDriver::process_transmitted_packets() {
    unsigned int numOfBuf = number_of_transmit_buffers_in_use_;
    unsigned int idx = transmit_release_index_;

    // Loop through buffers in use
    while (numOfBuf--) {
        // If no packet, just examine the next packet
        if (transmit_packets_[idx] == nullptr) {
            // No packet in use, skip to next
            idx = (idx + 1) & (TX_DESCRIPTOR_COUNT - 1);
            continue;
        }

        // Determine if the packet has been transmitted
        if (!(*tx_descriptor_ring_)[idx].isReady()) {
            // Yes, packet has been transmitted

            // Get the packet
            NX_PACKET* packet = transmit_packets_[idx];

            // Remove the Ethernet header and release the packet
            NX_DRIVER_ETHERNET_HEADER_REMOVE(packet);

            // Release the packet
            nx_packet_transmit_release(packet);

            // Clear the entry in the in-use array
            transmit_packets_[idx] = nullptr;

            // Update the transmit release index and number of buffers in use
            idx = (idx + 1) & (TX_DESCRIPTOR_COUNT - 1);
            number_of_transmit_buffers_in_use_ = numOfBuf;
            transmit_release_index_ = idx;
        } else {
            // Packet not yet transmitted, get out of the loop
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
    return GigabitEthernetDriver::instance().send(packet_ptr);
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