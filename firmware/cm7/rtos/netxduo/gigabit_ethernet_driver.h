#ifndef GIGABIT_ETHERNET_DRIVER_H
#define GIGABIT_ETHERNET_DRIVER_H

#include "ftl/singleton.hpp"
#include "fsl_enet.h"

// C++ driver class for Gigabit Ethernet
class GigabitEthernetDriver : public ftl::Singleton<GigabitEthernetDriver> {
public:
    // Constructor - public for ftl::Singleton
    GigabitEthernetDriver();
    ~GigabitEthernetDriver();

    // Initialize the driver (skeleton function for now)
    // Will eventually contain hardware initialization logic
    int initialize();

    // Send a packet (skeleton function for now)
    // packet_ptr will eventually be NX_PACKET* but using void* for C compatibility
    int send(void* packet_ptr);

    // Get the TX descriptors pointer (for C code access)
    enet_tx_bd_struct_t* get_tx_descriptors() { return tx_descriptors_; }

    // Get/Set transmit current index
    unsigned int get_transmit_current_index() const { return transmit_current_index_; }
    void set_transmit_current_index(unsigned int index) { transmit_current_index_ = index; }

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
};

// C interface for calling from nx_driver_imxrt.c
#ifdef __cplusplus
extern "C" {
#endif

// C wrapper function for initialize
int gigabit_ethernet_driver_initialize();

// C wrapper function for send
int gigabit_ethernet_driver_send(void* packet_ptr);

// C wrapper function to get TX descriptors
void* gigabit_ethernet_driver_get_tx_descriptors();

// C wrapper functions for transmit current index
unsigned int gigabit_ethernet_driver_get_transmit_current_index();
void gigabit_ethernet_driver_set_transmit_current_index(unsigned int index);

#ifdef __cplusplus
}
#endif

#endif // GIGABIT_ETHERNET_DRIVER_H