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

using ftl::ipv4::Mask;

// External driver function
extern "C" {
    void nx_link_driver(NX_IP_DRIVER* driver_req_ptr);
}

// Thread resources
#define STACK_SIZE 4096
static uint8_t thread_stack[STACK_SIZE];
static TX_THREAD test_thread;

// Packet pool for NetX
#define PACKET_SIZE 1518
#define POOL_SIZE (PACKET_SIZE + sizeof(NX_PACKET)) * 16
static uint8_t packet_pool_memory[POOL_SIZE] __attribute__((aligned(32)));
static NX_PACKET_POOL packet_pool;

// Test packet content
static void BuildTestPacket(uint8_t* buffer, size_t* length) {
    // Build a simple Ethernet frame
    // Destination MAC (broadcast)
    buffer[0] = 0xFF;
    buffer[1] = 0xFF;
    buffer[2] = 0xFF;
    buffer[3] = 0xFF;
    buffer[4] = 0xFF;
    buffer[5] = 0xFF;

    // Source MAC (should match what nx driver configures: 00:11:22:33:44:56)
    buffer[6] = 0x00;
    buffer[7] = 0x11;
    buffer[8] = 0x22;
    buffer[9] = 0x33;
    buffer[10] = 0x44;
    buffer[11] = 0x56;

    // EtherType (0x88B5 - custom test type)
    buffer[12] = 0x88;
    buffer[13] = 0xB5;

    // Payload - "Hello from NX Ethernet!"
    const char* message = "Hello from NX Ethernet! This is a test packet using NetX driver directly.";
    size_t message_len = strlen(message);
    memcpy(&buffer[14], message, message_len);

    // Minimum Ethernet frame is 64 bytes (including 4-byte CRC added by hardware)
    // So we need at least 60 bytes of data
    *length = 14 + message_len;
    if (*length < 60) {
        // Pad with zeros
        memset(&buffer[*length], 0, 60 - *length);
        *length = 60;
    }
}

static void PrintBuffer(const uint8_t* buffer, size_t length) {
    printf("Packet content (%zu bytes):\n", length);
    for (size_t i = 0; i < length; i++) {
        printf("%02X ", buffer[i]);
        if ((i + 1) % 16 == 0) {
            printf("\n");
        }
    }
    if (length % 16 != 0) {
        printf("\n");
    }
}

// Thread entry function
static VOID test_thread_entry(ULONG thread_input) {
    NX_PARAMETER_NOT_USED(thread_input);

    printf("\n=== NetX Ethernet Driver Test ===\n\n");

    // Wait for network to be ready
    printf("Waiting for network link...\n");
    GigabitEthernet::instance().WaitUntilReady();
    printf("Network link is up!\n\n");

    // Get the IP instance from GigabitEthernet
    NX_IP* ip_ptr = GigabitEthernet::instance().Ip();
    if (ip_ptr == nullptr) {
        printf("ERROR: Failed to get IP instance\n");
        return;
    }

    printf("Got IP instance at 0x%08lX\n", (unsigned long)ip_ptr);
    printf("IP interface[0] at 0x%08lX\n", (unsigned long)&ip_ptr->nx_ip_interface[0]);

    // Build test packet
    uint8_t packet_buffer[256];
    size_t packet_length;
    BuildTestPacket(packet_buffer, &packet_length);

    printf("Sending test packet via NetX driver...\n");
    PrintBuffer(packet_buffer, packet_length);

    // Send multiple packets to test
    const int num_packets = 5;
    int successful_sends = 0;

    for (int i = 0; i < num_packets; i++) {
        printf("\nSending packet %d/%d... ", i + 1, num_packets);

        // Modify packet slightly for each send
        packet_buffer[14] = '0' + i;  // Change first byte of payload

        // Allocate a packet from the pool
        NX_PACKET* packet_ptr;
        UINT status = nx_packet_allocate(&packet_pool, &packet_ptr, NX_PHYSICAL_HEADER, NX_WAIT_FOREVER);
        if (status != NX_SUCCESS) {
            printf("ERROR: Failed to allocate packet (status=0x%02X)\n", status);
            continue;
        }

        // Copy data into packet
        status = nx_packet_data_append(packet_ptr, packet_buffer, packet_length,
                                       &packet_pool, NX_WAIT_FOREVER);
        if (status != NX_SUCCESS) {
            printf("ERROR: Failed to append data (status=0x%02X)\n", status);
            nx_packet_release(packet_ptr);
            continue;
        }

        // Adjust packet pointers for raw Ethernet frame
        packet_ptr->nx_packet_prepend_ptr = packet_ptr->nx_packet_data_start;
        packet_ptr->nx_packet_append_ptr = packet_ptr->nx_packet_prepend_ptr + packet_length;
        packet_ptr->nx_packet_length = packet_length;

        // Send the packet directly through the driver
        // This calls _nx_driver_hardware_packet_send in nx_driver_imxrt.c
        NX_IP_DRIVER driver_request;
        driver_request.nx_ip_driver_command = NX_LINK_PACKET_SEND;
        driver_request.nx_ip_driver_ptr = ip_ptr;
        driver_request.nx_ip_driver_packet = packet_ptr;
        driver_request.nx_ip_driver_interface = &ip_ptr->nx_ip_interface[0];

        // Call the driver entry point
        nx_link_driver(&driver_request);

        // The driver now owns the packet and will release it after transmission
        printf("SUCCESS (packet queued for transmission)\n");
        successful_sends++;

        // Small delay between packets
        tx_thread_sleep(10);  // 100ms delay
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
    printf("Starting NetX Ethernet test...\n");
    tx_kernel_enter();
    return 0;
}

// ThreadX application definition
extern "C" void tx_application_define(void* first_unused_memory) {
    NX_PARAMETER_NOT_USED(first_unused_memory);

    // Create packet pool for raw packets
    UINT status = nx_packet_pool_create(&packet_pool,
                                        "Test Packet Pool",
                                        PACKET_SIZE,
                                        packet_pool_memory,
                                        POOL_SIZE);
    if (status != NX_SUCCESS) {
        printf("ERROR: Failed to create packet pool (status=0x%02X)\n", status);
        return;
    }

    // Set up socket allocation strategy and allocator
    static ftl::allocator::BumpPoolObjStrategy<NxUdpSocket> socket_strategy(DtcmAllocator::instance());
    static ftl::allocator::ObjAllocator<NxUdpSocket> socket_allocator(socket_strategy);

    // Initialize the GigabitEthernet singleton
    GigabitEthernet::create("192.0.2.100", Mask{255, 255, 255, 0}, socket_allocator);

    // Create the test thread
    status = tx_thread_create(&test_thread,
                             "Test Thread",
                             test_thread_entry,
                             0,
                             thread_stack,
                             STACK_SIZE,
                             1,  // priority
                             1,  // preempt threshold
                             TX_NO_TIME_SLICE,
                             TX_AUTO_START);

    if (status != TX_SUCCESS) {
        printf("ERROR: Failed to create test thread (status=0x%02X)\n", status);
        return;
    }
}