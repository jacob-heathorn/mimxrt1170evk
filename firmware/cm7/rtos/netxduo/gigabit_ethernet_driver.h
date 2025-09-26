#ifndef GIGABIT_ETHERNET_DRIVER_H
#define GIGABIT_ETHERNET_DRIVER_H

#include "ftl/singleton.hpp"
#include "fsl_enet.h"

// Forward declaration for NX_PACKET (it's a typedef in nx_api.h)
typedef struct NX_PACKET_STRUCT NX_PACKET;

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

    // TX descriptor storage (with alignment padding)
    // The +16 allows for 16-byte alignment requirement
    alignas(16) uint8_t tx_descriptors_area_[sizeof(enet_tx_bd_struct_t) * TX_DESCRIPTOR_COUNT + 16];

    // Aligned pointer to TX descriptors
    enet_tx_bd_struct_t* tx_descriptors_;

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