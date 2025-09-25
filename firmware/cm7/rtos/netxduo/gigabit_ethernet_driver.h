#ifndef GIGABIT_ETHERNET_DRIVER_H
#define GIGABIT_ETHERNET_DRIVER_H

#include "ftl/singleton.hpp"

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

private:
    // Future: Add member variables for driver state
    // void* tx_descriptors_;
    // unsigned int current_tx_index_;
    // unsigned int num_tx_descriptors_;
    // etc.
};

// C interface for calling from nx_driver_imxrt.c
#ifdef __cplusplus
extern "C" {
#endif

// C wrapper function for initialize
int gigabit_ethernet_driver_initialize();

// C wrapper function for send
int gigabit_ethernet_driver_send(void* packet_ptr);

#ifdef __cplusplus
}
#endif

#endif // GIGABIT_ETHERNET_DRIVER_H