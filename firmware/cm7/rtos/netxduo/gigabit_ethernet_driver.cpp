#include "gigabit_ethernet_driver.h"
#include <cstdio>
#include <cstring>
#include "fsl_enet.h"

GigabitEthernetDriver::GigabitEthernetDriver() : transmit_current_index_(0) {
    // Constructor - initialize transmit index
}

GigabitEthernetDriver::~GigabitEthernetDriver() {
    // Destructor - will be expanded later
}

int GigabitEthernetDriver::initialize() {
    printf("GigabitEthernetDriver::initialize\n");

    // Initialize the transmit current index
    transmit_current_index_ = 0;

    // Align TX descriptors to 16-byte boundary (hardware requirement)
    // This is the same alignment logic from nx_driver_imxrt.c
    uintptr_t addr = reinterpret_cast<uintptr_t>(tx_descriptors_area_);
    addr = (addr + 15) & (~15);  // Align to 16-byte boundary
    tx_descriptors_ = reinterpret_cast<enet_tx_bd_struct_t*>(addr);

    // Initialize TX descriptors (moved from _nx_driver_hardware_initialize)
    for (unsigned int i = 0; i < TX_DESCRIPTOR_COUNT; i++) {
        // Initialize tx descriptors
        tx_descriptors_[i].control = ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK;
        tx_descriptors_[i].length = 0;

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
#ifdef IMX_CHECKSUM_OFFLOAD
        // Enable tx interrupt & checksum offload
        tx_descriptors_[i].controlExtend1 = ENET_BUFFDESCRIPTOR_TX_INTERRUPT_MASK | 0x0800 | 0x1000;
#else
        // Enable tx interrupt
        tx_descriptors_[i].controlExtend1 = ENET_BUFFDESCRIPTOR_TX_INTERRUPT_MASK;
#endif
#endif
    }

    // Put the Wrap indication on the last descriptor
    tx_descriptors_[TX_DESCRIPTOR_COUNT - 1].control |= ENET_BUFFDESCRIPTOR_TX_WRAP_MASK;

    printf("GigabitEthernetDriver: Initialized %u TX descriptors at %p\n",
           TX_DESCRIPTOR_COUNT, static_cast<void*>(tx_descriptors_));

    return 0;  // Return success
}

int GigabitEthernetDriver::send(void* packet_ptr) {
    // Skeleton send function - currently does nothing
    // Will eventually handle packet transmission

    printf("GigabitEthernetDriver::send\n");

    // For now, just return success
    (void)packet_ptr;  // Suppress unused parameter warning

    // Uncomment for debug:
    // printf("GigabitEthernetDriver::send() called\n");

    return 0;  // Return success
}

// C interface functions for calling from nx_driver_imxrt.c
extern "C" {

int gigabit_ethernet_driver_initialize() {
    return GigabitEthernetDriver::instance().initialize();
}

int gigabit_ethernet_driver_send(void* packet_ptr) {
    return GigabitEthernetDriver::instance().send(packet_ptr);
}

// TODO: These are temporary while bridging, and should be removed
//
//
void* gigabit_ethernet_driver_get_tx_descriptors() {
    return GigabitEthernetDriver::instance().get_tx_descriptors();
}

unsigned int gigabit_ethernet_driver_get_transmit_current_index() {
    return GigabitEthernetDriver::instance().get_transmit_current_index();
}

void gigabit_ethernet_driver_set_transmit_current_index(unsigned int index) {
    GigabitEthernetDriver::instance().set_transmit_current_index(index);
}

} // extern "C"