#ifndef GIGABIT_ETHERNET_DRIVER_H
#define GIGABIT_ETHERNET_DRIVER_H

#include "ftl/singleton.hpp"
#include "fsl_enet.h"
#include "tx_buffer_descriptor_ring.h"
#include "ftl/ipv4/udp/payload.hpp"
#include "nx_api.h"
#include <cstring>
#include <cassert>


// TODO: Rename ftl::ipv4::udp::Payload to something more generic (not UDP-specific)
// For now using Payload as a runtime-sized buffer for Ethernet frames
class TxFrame {
    public:
        TxFrame(TxBufferDescriptor &descriptor, NX_PACKET* packet)
            : descriptor_(&descriptor) {
            // Assumes packet is not chained (nx_packet_next == nullptr)
            // Calculate frame size from packet pointers
            size_t frame_size = packet->nx_packet_append_ptr - packet->nx_packet_prepend_ptr;

            // Allocate with 2-byte padding at the start for hardware requirement
            data_frame_ = ftl::ipv4::udp::Payload(frame_size + 2);

            // Assert that Payload allocator returned 8-byte aligned memory
            // This is required for DMA to work correctly
            assert((reinterpret_cast<uintptr_t>(data_frame_.front()) & 0x7) == 0 &&
                   "Payload buffer must be 8-byte aligned for DMA");

            // Copy packet data starting at offset 2
            std::memcpy(data_frame_.front() + 2, packet->nx_packet_prepend_ptr, frame_size);

            // Configure descriptor to point to start of buffer (with 2-byte padding)
            descriptor_->setBuffer(data_frame_.front());
            descriptor_->setLength(frame_size + 2);
        }

    private:
        ftl::ipv4::udp::Payload data_frame_;  // Local buffer for frame data
        TxBufferDescriptor* descriptor_;
};

// C++ driver class for Gigabit Ethernet
class GigabitEthernetDriver : public ftl::Singleton<GigabitEthernetDriver> {
public:
    // Constructor - public for ftl::Singleton
    GigabitEthernetDriver();
    ~GigabitEthernetDriver();

    // Initialize the driver (skeleton function for now)
    // Will eventually contain hardware initialization logic
    int initialize();

    // Send a packet
    // packet_ptr will eventually be NX_PACKET* but using void* for C compatibility
    // Returns true on success, false on error
    bool send(void* packet_ptr);

    // Process transmitted packets - check for completed transmissions and release packets
    // This is called from the deferred processing routine
    void process_transmitted_packets();

    // Handle link mode change (speed/duplex change)
    // This is called when the PHY detects a link status change
    void handle_link_mode_change(unsigned int link_speed, unsigned int link_duplex);

private:
    // Constants - must match nx_driver_imxrt.h
    static constexpr unsigned int TX_DESCRIPTOR_COUNT = 64;  // NX_DRIVER_TX_DESCRIPTORS

    // Pointer to TX descriptor ring (allocated from OCRAM2)
    TxBufferDescriptorRing<TX_DESCRIPTOR_COUNT>* tx_descriptor_ring_;

    // Current transmit descriptor index
    unsigned int transmit_current_index_;

    // Array to track NX_PACKET pointers for each TX descriptor
    NX_PACKET* transmit_packets_[TX_DESCRIPTOR_COUNT];

    // Number of transmit buffers currently in use
    unsigned int number_of_transmit_buffers_in_use_;

    // Transmit release index
    unsigned int transmit_release_index_;
};

// C interface for calling from nx_driver_imxrt.c
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>  // For bool type in C

// C wrapper function for initialize
int gigabit_ethernet_driver_initialize();

// C wrapper function for send (returns true on success, false on error)
bool gigabit_ethernet_driver_send(void* packet_ptr);

// C wrapper function for processing transmitted packets
void gigabit_ethernet_driver_process_transmitted_packets();


#ifdef __cplusplus
}
#endif

#endif // GIGABIT_ETHERNET_DRIVER_H