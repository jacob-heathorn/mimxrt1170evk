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

    // Get the TX descriptors pointer (for C code access)
    enet_tx_bd_struct_t* get_tx_descriptors() { return tx_descriptors_; }

    // Get/Set transmit current index
    unsigned int get_transmit_current_index() const { return transmit_current_index_; }
    void set_transmit_current_index(unsigned int index) { transmit_current_index_ = index; }

    // Get/Set transmit packet at index
    NX_PACKET* get_transmit_packet(unsigned int index) {
        return (index < TX_DESCRIPTOR_COUNT) ? transmit_packets_[index] : nullptr;
    }
    void set_transmit_packet(unsigned int index, NX_PACKET* packet) {
        if (index < TX_DESCRIPTOR_COUNT) {
            transmit_packets_[index] = packet;
        }
    }

    // Get transmit packets array (for bulk operations)
    NX_PACKET** get_transmit_packets() { return transmit_packets_; }

    // Get/Set number of transmit buffers in use
    unsigned int get_number_of_transmit_buffers_in_use() const { return number_of_transmit_buffers_in_use_; }
    void set_number_of_transmit_buffers_in_use(unsigned int count) { number_of_transmit_buffers_in_use_ = count; }

    // Get/Set transmit release index
    unsigned int get_transmit_release_index() const { return transmit_release_index_; }
    void set_transmit_release_index(unsigned int index) { transmit_release_index_ = index; }

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

// C wrapper function to get TX descriptors
void* gigabit_ethernet_driver_get_tx_descriptors();

// C wrapper functions for transmit current index
unsigned int gigabit_ethernet_driver_get_transmit_current_index();
void gigabit_ethernet_driver_set_transmit_current_index(unsigned int index);

// C wrapper functions for transmit packets
void* gigabit_ethernet_driver_get_transmit_packet(unsigned int index);
void gigabit_ethernet_driver_set_transmit_packet(unsigned int index, void* packet);
void** gigabit_ethernet_driver_get_transmit_packets();

// C wrapper functions for number of transmit buffers in use
unsigned int gigabit_ethernet_driver_get_number_of_transmit_buffers_in_use();
void gigabit_ethernet_driver_set_number_of_transmit_buffers_in_use(unsigned int count);

// C wrapper functions for transmit release index
unsigned int gigabit_ethernet_driver_get_transmit_release_index();
void gigabit_ethernet_driver_set_transmit_release_index(unsigned int index);

#ifdef __cplusplus
}
#endif

#endif // GIGABIT_ETHERNET_DRIVER_H