#include <cstdio>
#include <cstring>
#include "tx_api.h"
#include "nx_api.h"
#include "network/gigabit_ethernet.hpp"
#include "network/nx_udp_socket.hpp"
#include "utils/dtcm_allocator.hpp"
#include "ftl/allocator/bump_pool_obj_strategy.hpp"
#include "ftl/allocator/obj_allocator.hpp"
#include "ftl/ipv4/address.hpp"
#include "ftl/ipv4/mask.hpp"
#include "ftl/tx_thread.hpp"

// Include our generic send function
extern "C" {
#include "../../firmware/cm7/rtos/netxduo/nx_driver_generic_send.h"
}

using ftl::ipv4::Mask;

// Access to the actual ENET hardware registers
#include "registers/codegen/enet_1g.hpp"

// Thread resources
#define STACK_SIZE 4096

// External definitions from nx_driver_imxrt.c
extern "C" {
    // Buffer descriptor structure from nx_driver_imxrt.c
    typedef struct {
        uint16_t control;
        uint16_t length;
        uint32_t buffer;
        uint32_t extend1;
        uint32_t extend2;
        uint32_t timestamp;
        uint16_t reserved0;
        uint16_t reserved1;
        uint16_t reserved2;
        uint16_t reserved3;
    } ENET_BUFFDESCRIPTOR;

    // From nx_driver_imxrt.c
    #define ENET_BUFFDESCRIPTOR_TX_READY_MASK  0x8000U
    #define ENET_BUFFDESCRIPTOR_TX_WRAP_MASK   0x2000U
    #define ENET_BUFFDESCRIPTOR_TX_LAST_MASK   0x0800U
    #define ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK  0x0400U

    // Constants from nx_driver_imxrt.c
    #define NX_DRIVER_TX_DESCRIPTORS  8
}

// Test packet buffer
static uint8_t test_packet_buffer[1518] __attribute__((aligned(64)));

// Function to send raw packet directly to hardware (bypassing NetX)
static bool SendRawPacketDirect(const uint8_t* data, size_t length) {
    printf("\n[DIRECT TX] Attempting to send %lu byte packet\n", (unsigned long)length);

    // Get the TX descriptor base from TDSR register
    uint32_t tx_desc_base = nENET_1G::TDSR::ref().value;
    ENET_BUFFDESCRIPTOR* tx_descriptors = (ENET_BUFFDESCRIPTOR*)tx_desc_base;

    if (tx_descriptors == nullptr) {
        printf("[DIRECT TX] ERROR: No TX descriptors found\n");
        return false;
    }

    printf("[DIRECT TX] TX descriptors at 0x%08lX\n", (unsigned long)tx_descriptors);

    // Use first descriptor for simplicity
    ENET_BUFFDESCRIPTOR* tx_bd = &tx_descriptors[0];

    // Check if descriptor is available
    if (tx_bd->control & ENET_BUFFDESCRIPTOR_TX_READY_MASK) {
        printf("[DIRECT TX] ERROR: TX descriptor 0 is busy (control=0x%04X)\n", tx_bd->control);
        return false;
    }

    // Copy packet to aligned buffer
    memcpy(test_packet_buffer, data, length);

    // Set up the descriptor
    tx_bd->buffer = (uint32_t)test_packet_buffer;
    tx_bd->length = length;

    // Set control bits: Ready, Last, Wrap (for first descriptor), and TC (transmit CRC)
    tx_bd->control = ENET_BUFFDESCRIPTOR_TX_READY_MASK |
                     ENET_BUFFDESCRIPTOR_TX_LAST_MASK |
                     ENET_BUFFDESCRIPTOR_TX_WRAP_MASK |
                     ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK;

    printf("[DIRECT TX] Descriptor setup: buffer=0x%08lX, length=%u, control=0x%04X\n",
           (unsigned long)tx_bd->buffer, tx_bd->length, tx_bd->control);

    // Clear any pending TX interrupts
    nENET_1G::EIR::ref().bits.TXF = 1;

    // Trigger transmission by setting TDAR
    printf("[DIRECT TX] Setting TDAR to trigger transmission\n");
    nENET_1G::TDAR::ref().bits.TDAR = 1;

    // Wait for transmission to complete
    printf("[DIRECT TX] Waiting for transmission to complete...\n");
    uint32_t timeout = 100000;
    while ((tx_bd->control & ENET_BUFFDESCRIPTOR_TX_READY_MASK) && timeout--) {
        __asm__("nop");
    }

    if (timeout == 0) {
        printf("[DIRECT TX] ERROR: Transmission timeout (control=0x%04X)\n", tx_bd->control);

        // Debug: Check various status registers
        printf("[DIRECT TX] ECR: 0x%08lX\n", (unsigned long)nENET_1G::ECR::ref().value);
        printf("[DIRECT TX] EIR: 0x%08lX\n", (unsigned long)nENET_1G::EIR::ref().value);
        printf("[DIRECT TX] TDAR: 0x%08lX\n", (unsigned long)nENET_1G::TDAR::ref().value);
        printf("[DIRECT TX] MIBC: 0x%08lX\n", (unsigned long)nENET_1G::MIBC::ref().value);
        printf("[DIRECT TX] RMON_T_PACKETS: 0x%08lX\n", (unsigned long)nENET_1G::RMON_T_PACKETS::ref().value);

        return false;
    }

    printf("[DIRECT TX] SUCCESS: Transmission completed (control=0x%04X)\n", tx_bd->control);
    printf("[DIRECT TX] RMON_T_PACKETS: %lu\n", (unsigned long)nENET_1G::RMON_T_PACKETS::ref().value);

    return true;
}

// Build test Ethernet frame
static void BuildTestPacket(uint8_t* buffer, size_t* length) {
    // Destination MAC (broadcast)
    buffer[0] = 0xFF;
    buffer[1] = 0xFF;
    buffer[2] = 0xFF;
    buffer[3] = 0xFF;
    buffer[4] = 0xFF;
    buffer[5] = 0xFF;

    // Source MAC (matching nx driver: 00:11:22:33:44:56)
    buffer[6] = 0x00;
    buffer[7] = 0x11;
    buffer[8] = 0x22;
    buffer[9] = 0x33;
    buffer[10] = 0x44;
    buffer[11] = 0x56;

    // EtherType (0x88B5 - custom test type)
    buffer[12] = 0x88;
    buffer[13] = 0xB5;

    // Payload
    const char* message = "Hello from NetX-initialized hardware with direct TX!";
    size_t message_len = strlen(message);
    memcpy(&buffer[14], message, message_len);

    // Ensure minimum Ethernet frame size (60 bytes without CRC)
    *length = 14 + message_len;
    if (*length < 60) {
        memset(&buffer[*length], 0, 60 - *length);
        *length = 60;
    }
}

static void test_direct_tx() {
    printf("\n=== NetX Hardware Init + Direct TX Test ===\n\n");

    // Wait for the network to be ready (NetX initialization)
    printf("Waiting for NetX to initialize network...\n");
    GigabitEthernet::instance().WaitUntilReady();
    printf("Network is ready!\n\n");

    // Give NetX time to fully initialize the hardware
    printf("Waiting for hardware initialization to complete...\n");
    tx_thread_sleep(100);  // Wait 1 second for full initialization

    // At this point, NetX has initialized the hardware (PHY, MAC, descriptors, etc.)
    // Now we'll send packets directly to the hardware

    // Check hardware status
    printf("Hardware status after NetX init:\n");
    printf("  ECR: 0x%08lX (ETHEREN=%lu, SPEED=%lu)\n",
           (unsigned long)nENET_1G::ECR::ref().value,
           (unsigned long)((nENET_1G::ECR::ref().value >> 1) & 1),
           (unsigned long)((nENET_1G::ECR::ref().value >> 5) & 1));
    printf("  TDSR: 0x%08lX\n", (unsigned long)nENET_1G::TDSR::ref().value);
    printf("  RDSR: 0x%08lX\n", (unsigned long)nENET_1G::RDSR::ref().value);
    printf("  MIBC: 0x%08lX\n", (unsigned long)nENET_1G::MIBC::ref().value);

    // Check if descriptors are initialized
    if (nENET_1G::TDSR::ref().value == 0) {
        printf("WARNING: TX descriptors not initialized by NetX!\n");
        printf("This test requires NetX to set up the descriptors.\n");
        return;
    }

    // Build test packet
    uint8_t packet[256];
    size_t packet_length;
    BuildTestPacket(packet, &packet_length);

    printf("\nTest packet (%lu bytes):\n", (unsigned long)packet_length);
    for (size_t i = 0; i < packet_length; i++) {
        printf("%02X ", packet[i]);
        if ((i + 1) % 16 == 0) printf("\n");
    }
    if (packet_length % 16 != 0) printf("\n");

    // Send multiple test packets
    const int num_packets = 5;
    int successful_sends = 0;

    for (int i = 0; i < num_packets; i++) {
        printf("\n--- Packet %d/%d ---\n", i + 1, num_packets);

        // Modify packet slightly for each send
        packet[14] = '0' + i;

        if (SendRawPacketDirect(packet, packet_length)) {
            successful_sends++;
        }

        // Small delay between packets
        tx_thread_sleep(10); // 100ms
    }

    printf("\n=== Test Results ===\n");
    printf("Packets sent successfully: %d/%d\n", successful_sends, num_packets);

    if (successful_sends == num_packets) {
        printf("All packets sent successfully!\n");
        printf("\nTest PASSED\n");
    } else if (successful_sends > 0) {
        printf("Some packets were sent successfully\n");
        printf("\nTest PARTIALLY PASSED\n");
    } else {
        printf("No packets were sent successfully\n");
        printf("\nTest FAILED\n");
    }
}

int main() {
    printf("Starting NetX + Direct TX test...\n");
    tx_kernel_enter();
    return 0;
}

// ThreadX application definition
extern "C" void tx_application_define(void* first_unused_memory) {
    NX_PARAMETER_NOT_USED(first_unused_memory);

    // Set up socket allocation strategy and allocator (required for GigabitEthernet)
    static ftl::allocator::BumpPoolObjStrategy<NxUdpSocket> socket_strategy(DtcmAllocator::instance());
    static ftl::allocator::ObjAllocator<NxUdpSocket> socket_allocator(socket_strategy);

    // Initialize the GigabitEthernet singleton (this initializes NetX and the hardware)
    GigabitEthernet::create("192.0.2.100", Mask{255, 255, 255, 0}, socket_allocator);

    // Create test thread with stack
    static uint8_t thread_stack[STACK_SIZE];
    static ftl::TxThread test_thread(
        "Direct TX Test",
        etl::delegate<void(void)>::create<test_direct_tx>(),
        thread_stack,
        STACK_SIZE,
        1,  // priority
        etl::nullopt,  // no preemption threshold
        TX_NO_TIME_SLICE,
        TX_AUTO_START
    );
}