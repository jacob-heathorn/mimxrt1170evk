#pragma once


#include "ftl/singleton.hpp"
#include "fsl_enet.h"
#include "detail/tx_descriptor_ring.h"
#include "detail/tx_frame.h"
#include "detail/rx_descriptor_ring.h"
#include "ethernet_frame.hpp"
#include "nx_api.h"
#include "etl/queue.h"
#include <cstring>
#include <cassert>

// C++ driver class for Gigabit Ethernet
class GigabitEthernetDriver : public ftl::Singleton<GigabitEthernetDriver> {
public:
    // Constructor - public for ftl::Singleton
    GigabitEthernetDriver();
    // Destructor deleted - singleton lives for entire program
    ~GigabitEthernetDriver() = delete;

    // Initialize the driver (skeleton function for now)
    // Will eventually contain hardware initialization logic
    // Returns true on success, false on error
    bool initialize();

    // Send a frame (takes ownership of the frame)
    // Returns true on success, false on error
    bool send(ethernet::Frame&& frame);

    // Process transmitted packets - check for completed transmissions and release packets
    // This is called from the deferred processing routine
    void process_transmitted_packets();

    // Handle link mode change (speed/duplex change)
    // This is called when the PHY detects a link status change
    void handle_link_mode_change(unsigned int link_speed, unsigned int link_duplex);

    // Process received packets - check for received frames and process them
    // This is called from the deferred processing routine
    // The callback is invoked for each received frame converted to NX_PACKET
    // Callback signature: void(NX_IP* ip_ptr, NX_PACKET* packet_ptr)
    // packet_pool and ip_ptr are needed to allocate NX_PACKETs
    void process_received_packets(NX_PACKET_POOL* packet_pool,
                                   NX_IP* ip_ptr,
                                   void (*callback)(NX_IP*, NX_PACKET*));

    // Initialize RX buffers - must be called during initialization
    // Allocates ethernet::Frame buffers for each RX descriptor
    bool initialize_rx_buffers();

    // Get RX descriptor ring for buffer management
    ethernet::detail::RxDescriptorRing& get_rx_ring() { return rx_descriptor_ring_; }

private:
    // TX descriptor ring (internally allocates from OCRAM2 with 64-byte alignment)
    // Ring manages its own head/tail indices for queue-like behavior
    ethernet::detail::TxDescriptorRing tx_descriptor_ring_{};

    // Queue of TxFrame objects pending transmission
    // TxFrames own their data and can release the original NX_PACKET immediately
    // Using ETL queue with fixed size matching kNumTxDescriptors
    etl::queue<ethernet::detail::TxFrame, ethernet::detail::kNumTxDescriptors> tx_frame_queue_;

    // RX descriptor ring (internally allocates from OCRAM2 with 64-byte alignment)
    // Ring manages its own current index for processing received packets
    ethernet::detail::RxDescriptorRing rx_descriptor_ring_{};

    // Array of ethernet::Frame objects used as RX buffers
    // These are allocated and assigned to RX descriptors during initialization
    ethernet::Frame rx_buffers_[ethernet::detail::kNumRxDescriptors];
};

// C interface for calling from nx_driver_imxrt.c
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>  // For bool type in C

// C wrapper function for initialize
int gigabit_ethernet_driver_initialize();

// C wrapper function for send (returns true on success, false on error)
// Note: packet must not be chained (nx_packet_next must be NULL)
bool gigabit_ethernet_driver_send(void* packet_ptr);

// C wrapper function for processing transmitted packets
void gigabit_ethernet_driver_process_transmitted_packets();

// C wrapper function for processing received packets
// packet_pool: NX_PACKET_POOL for allocating packets
// ip_ptr: NX_IP pointer for the network interface
// callback: Function to call with each received packet
void gigabit_ethernet_driver_process_received_packets(void* packet_pool,
                                                       void* ip_ptr,
                                                       void (*callback)(void*, void*));

#ifdef __cplusplus
}
#endif
