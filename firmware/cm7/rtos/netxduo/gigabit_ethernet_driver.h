#pragma once


#include "ftl/singleton.hpp"
#include "fsl_enet.h"
#include "detail/tx_descriptor_ring.h"
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

private:
    // TX descriptor ring (internally allocates from OCRAM2 with 64-byte alignment)
    // Ring manages its own head/tail indices for queue-like behavior
    ethernet::detail::TxDescriptorRing tx_descriptor_ring_{};

    // Queue of TxFrame objects pending transmission
    // TxFrames own their data and can release the original NX_PACKET immediately
    // Using ETL queue with fixed size matching kNumTxDescriptors
    etl::queue<ethernet::TxFrame, ethernet::detail::kNumTxDescriptors> tx_frame_queue_;
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


#ifdef __cplusplus
}
#endif
