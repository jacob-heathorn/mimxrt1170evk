#include "gigabit_ethernet_driver.h"
#include <cstdio>
#include <cstring>
#include "fsl_enet.h"
#include "nx_api.h"  // For NX_PACKET structure

GigabitEthernetDriver::GigabitEthernetDriver() :
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

    // Make sure Number of Buffer Descriptors is power of 2
    static_assert((TX_DESCRIPTOR_COUNT & (TX_DESCRIPTOR_COUNT - 1)) == 0,
                  "Number of Buffer Descriptors must be power of 2");

    // Set Transmit Descriptor List Address Register
    ENET_1G->TDSR = reinterpret_cast<uint32_t>(tx_descriptors_);

    printf("GigabitEthernetDriver: Initialized %u TX descriptors at %p, TDSR set to 0x%08lX\n",
           TX_DESCRIPTOR_COUNT, static_cast<void*>(tx_descriptors_), ENET_1G->TDSR);

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
    if ((tx_descriptors_[curIdx].control & ENET_BUFFDESCRIPTOR_TX_READY_MASK) || transmit_packets_[curIdx]) {
        // Buffer is still owned by device
        return false;
    }

    // Set the buffer size
    tx_descriptors_[curIdx].length = (packet->nx_packet_append_ptr - packet->nx_packet_prepend_ptr + 2);

    // Handle alignment requirement (8-byte alignment)
    uint8_t remainder = static_cast<uint8_t>(reinterpret_cast<uintptr_t>(packet->nx_packet_prepend_ptr - 2) & 0x07);
    if (remainder) {
        uint8_t* src_addr = packet->nx_packet_prepend_ptr;
        // Make sure transmit BD buffer is 8-byte aligned
        packet->nx_packet_prepend_ptr -= remainder;
        memmove(packet->nx_packet_prepend_ptr, src_addr, tx_descriptors_[curIdx].length);
    }

    // Set the buffer pointer
    tx_descriptors_[curIdx].buffer = reinterpret_cast<uint32_t>(packet->nx_packet_prepend_ptr - 2);

    // Clear the first descriptor's LAST bit
    tx_descriptors_[curIdx].control &= ~ENET_BUFFDESCRIPTOR_TX_LAST_MASK;

    // Handle chained packets
    unsigned int bd_count = 0;
    NX_PACKET* pktIdx = packet->nx_packet_next;
    while (pktIdx != nullptr) {
        // Move to next descriptor
        curIdx = (curIdx + 1) & (TX_DESCRIPTOR_COUNT - 1);

        // Check if it is a free descriptor
        if ((tx_descriptors_[curIdx].control & ENET_BUFFDESCRIPTOR_TX_READY_MASK) || transmit_packets_[curIdx]) {
            // No more descriptor available
            return false;
        }

        // Set the buffer pointer
        tx_descriptors_[curIdx].buffer = reinterpret_cast<uint32_t>(pktIdx->nx_packet_prepend_ptr);

        // Set the buffer size
        tx_descriptors_[curIdx].length = (pktIdx->nx_packet_append_ptr - pktIdx->nx_packet_prepend_ptr);

        // Clear the descriptor's LAST bit
        tx_descriptors_[curIdx].control &= ~ENET_BUFFDESCRIPTOR_TX_LAST_MASK;

        // Increment the BD count
        bd_count++;

        // Move to next packet in chain
        pktIdx = pktIdx->nx_packet_next;
    }

    // Set the last descriptor's LAST and READY bits
    tx_descriptors_[curIdx].control |= (ENET_BUFFDESCRIPTOR_TX_LAST_MASK | ENET_BUFFDESCRIPTOR_TX_READY_MASK);

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
        tx_descriptors_[curIdx].control |= ENET_BUFFDESCRIPTOR_TX_READY_MASK;
    }

    // Resume DMA transmission if suspended (using ENET_1G for gigabit)
    if (!ENET_1G->TDAR) {
        ENET_1G->TDAR = ENET_TDAR_TDAR_MASK;
    }

    return true;
}

// C interface functions for calling from nx_driver_imxrt.c
extern "C" {

int gigabit_ethernet_driver_initialize() {
    return GigabitEthernetDriver::instance().initialize();
}

bool gigabit_ethernet_driver_send(void* packet_ptr) {
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

void* gigabit_ethernet_driver_get_transmit_packet(unsigned int index) {
    return GigabitEthernetDriver::instance().get_transmit_packet(index);
}

void gigabit_ethernet_driver_set_transmit_packet(unsigned int index, void* packet) {
    GigabitEthernetDriver::instance().set_transmit_packet(index, static_cast<NX_PACKET*>(packet));
}

void** gigabit_ethernet_driver_get_transmit_packets() {
    return reinterpret_cast<void**>(GigabitEthernetDriver::instance().get_transmit_packets());
}

unsigned int gigabit_ethernet_driver_get_number_of_transmit_buffers_in_use() {
    return GigabitEthernetDriver::instance().get_number_of_transmit_buffers_in_use();
}

void gigabit_ethernet_driver_set_number_of_transmit_buffers_in_use(unsigned int count) {
    GigabitEthernetDriver::instance().set_number_of_transmit_buffers_in_use(count);
}

unsigned int gigabit_ethernet_driver_get_transmit_release_index() {
    return GigabitEthernetDriver::instance().get_transmit_release_index();
}

void gigabit_ethernet_driver_set_transmit_release_index(unsigned int index) {
    GigabitEthernetDriver::instance().set_transmit_release_index(index);
}

} // extern "C"