#include <utility>
#include <cstring>

#include "stdio.h"
#include "tx_api.h"

#include "ftl/tx_thread.hpp"
#include "ftl/allocator/bump_pool_buffer_strategy.hpp"
#include "ftl/allocator/bump_pool_obj_strategy.hpp"
#include "ftl/allocator/buffer_allocator.hpp"
#include "ftl/ipv4/udp/payload.hpp"
#include "ftl/ipv4/udp/socket.hpp"
#include "network/gigabit_ethernet.hpp"
#include "utils/dtcm_allocator.hpp"
#include "network/nx_udp_socket.hpp"

// Include our generic send function and NetXDuo driver info
extern "C" {
#include "../../firmware/cm7/rtos/netxduo/nx_driver_generic_send.h"
}

// We need to forward declare the driver structure for C++
struct NX_DRIVER_INFORMATION_STRUCT;
typedef struct NX_DRIVER_INFORMATION_STRUCT NX_DRIVER_INFORMATION;
extern "C" NX_DRIVER_INFORMATION nx_driver_information;

// Define what we need from the driver
#ifndef NX_DRIVER_TX_DESCRIPTORS
#define NX_DRIVER_TX_DESCRIPTORS   64
#endif

using namespace ftl::ipv4;


#define STACK_SIZE 2048
uint8_t thread_1_stack[STACK_SIZE];

// Function to calculate IP checksum
static uint16_t ip_checksum(const uint8_t *data, size_t len) {
    uint32_t sum = 0;
    const uint16_t *ptr = (const uint16_t *)data;

    while (len > 1) {
        sum += *ptr++;
        len -= 2;
    }

    if (len > 0) {
        sum += *(uint8_t*)ptr;
    }

    while (sum >> 16) {
        sum = (sum & 0xffff) + (sum >> 16);
    }

    return ~sum;
}

// Helper functions to get/update driver info from C code
extern "C" {
    void get_driver_tx_info(void **tx_descriptors, unsigned int *current_index,
                           unsigned int *num_descriptors, unsigned int *buffers_in_use);
    void update_driver_tx_info(unsigned int new_current_index, unsigned int new_buffers_in_use);
}

// Function to send a raw UDP packet using our generic send function
static void send_raw_udp_packet(const char *message, int counter) {
    uint8_t packet[256];
    size_t offset = 0;

    // Use a default source MAC (will be filled by hardware usually)
    uint8_t src_mac[6] = {0x00, 0x04, 0x9F, 0x05, 0xDE, 0xAD};

    // Ethernet header (14 bytes)
    // Destination MAC (broadcast)
    packet[offset++] = 0xFF; packet[offset++] = 0xFF; packet[offset++] = 0xFF;
    packet[offset++] = 0xFF; packet[offset++] = 0xFF; packet[offset++] = 0xFF;

    // Source MAC
    memcpy(&packet[offset], src_mac, 6);
    offset += 6;

    // EtherType (IPv4 = 0x0800)
    packet[offset++] = 0x08;
    packet[offset++] = 0x00;

    // IPv4 header (20 bytes)
    size_t ip_header_start = offset;
    packet[offset++] = 0x45;  // Version 4, Header length 5 (20 bytes)
    packet[offset++] = 0x00;  // TOS

    // Total length (will fill in later)
    size_t ip_length_offset = offset;
    packet[offset++] = 0x00;
    packet[offset++] = 0x00;

    // Identification
    packet[offset++] = 0x12;
    packet[offset++] = 0x34;

    // Flags and Fragment offset (Don't Fragment)
    packet[offset++] = 0x40;
    packet[offset++] = 0x00;

    // TTL
    packet[offset++] = 64;

    // Protocol (UDP = 17)
    packet[offset++] = 17;

    // Header checksum (will calculate later)
    size_t ip_checksum_offset = offset;
    packet[offset++] = 0x00;
    packet[offset++] = 0x00;

    // Source IP (192.0.2.100 - matching GigabitEthernet default)
    packet[offset++] = 192; packet[offset++] = 0; packet[offset++] = 2; packet[offset++] = 100;

    // Destination IP (192.0.2.255 - broadcast)
    packet[offset++] = 192; packet[offset++] = 0; packet[offset++] = 2; packet[offset++] = 255;

    // UDP header (8 bytes)

    // Source port (5555)
    packet[offset++] = 0x15; packet[offset++] = 0xB3;

    // Destination port (5003)
    packet[offset++] = 0x13; packet[offset++] = 0x8B;

    // UDP length (will fill in later)
    size_t udp_length_offset = offset;
    packet[offset++] = 0x00;
    packet[offset++] = 0x00;

    // UDP checksum (optional, set to 0)
    packet[offset++] = 0x00;
    packet[offset++] = 0x00;

    // UDP payload
    char payload[64];
    int len = snprintf(payload, sizeof(payload), "%s %d", message, counter);
    memcpy(&packet[offset], payload, len);
    offset += len;

    // Calculate and fill in lengths
    uint16_t udp_length = 8 + len;  // UDP header + payload
    packet[udp_length_offset] = (udp_length >> 8) & 0xFF;
    packet[udp_length_offset + 1] = udp_length & 0xFF;

    uint16_t ip_total_length = 20 + udp_length;  // IP header + UDP
    packet[ip_length_offset] = (ip_total_length >> 8) & 0xFF;
    packet[ip_length_offset + 1] = ip_total_length & 0xFF;

    // Calculate IP checksum
    uint16_t checksum = ip_checksum(&packet[ip_header_start], 20);
    packet[ip_checksum_offset] = (checksum >> 8) & 0xFF;
    packet[ip_checksum_offset + 1] = checksum & 0xFF;

    // Get driver info
    void *tx_descriptors;
    unsigned int current_index, num_descriptors, buffers_in_use;
    get_driver_tx_info(&tx_descriptors, &current_index, &num_descriptors, &buffers_in_use);

    // Send the packet using our generic function
    int result = nx_driver_send_raw_packet_static(
        packet,
        offset,
        tx_descriptors,
        &current_index,
        num_descriptors,
        &buffers_in_use);

    if (result == 0) {
        // Update driver state after successful send
        update_driver_tx_info(current_index, buffers_in_use);
        printf("Raw UDP packet sent successfully (len=%lu)\r\n", (unsigned long)offset);
    } else {
        printf("Failed to send raw UDP packet (error=%d, desc=%u, bufs=%u)\r\n",
               result, current_index, buffers_in_use);
    }
}


int main()
{
  printf("Entering the kernel..\n\r");
  tx_kernel_enter();
  return 0;
}

void echo_hello()
{

    printf("Waiting for link...\r\n");
    GigabitEthernet::instance().WaitUntilReady();
    printf("Starting Hello World loop...\r\n");

    for (int i = 0;; ++i) {
        // Try creating and destroying it in the loop to execise the full socket and smart pointer
        // functionality
        udp::SocketPtr socket = GigabitEthernet::instance().CreateUdpSocket();

        socket->join_multicast_group("224.1.0.1");

        if (!socket->open(2) || !socket->bind(5010)) {
            assert(false && "Failed to open or bind UDP socket");
        }
        
        // // Send unicast message.
        // udp::Payload msg1(strlen("Hello unicast") + 2);
        // sprintf((char *)msg1.front(), "Hello unicast %d", i % 10);
        // if (!socket->send(std::move(msg1), Endpoint("192.0.2.1", 5001))) {
        //     printf("Failed to send UDP packet\r\n");
        // }

        // Send raw UDP packet using our generic function
        send_raw_udp_packet("Hello RAW UDP", i);

        tx_thread_sleep(NX_IP_PERIODIC_RATE);  // ~1 second

        // // Try receiving
        // udp::Payload payload;
        // do {
        //     Endpoint peer{};
        //     payload = socket->receive(&peer);
        //     if (payload) {
        //         printf("Received UDP: '%.*s' from %s (len=%u)\r\n",
        //             payload.size(),    // precision for the %s
        //             payload.string_view().data(),
        //             peer.ToString().data(),
        //             payload.size());
        //     }
        // }
        // while (payload);
    }
}

/* Define what the initial system looks like.  */
VOID tx_application_define(void *first_unused_memory)
{
    NX_PARAMETER_NOT_USED(first_unused_memory);

    // Initialize buffer strategies for UDP payloads
    static ftl::allocator::BumpPoolBufferStrategy strategy_32(DtcmAllocator::instance(), 32);
    static ftl::allocator::BumpPoolBufferStrategy strategy_64(DtcmAllocator::instance(), 64);
    static ftl::allocator::BumpPoolBufferStrategy strategy_128(DtcmAllocator::instance(), 128);
    static ftl::allocator::BumpPoolBufferStrategy strategy_256(DtcmAllocator::instance(), 256);
    static ftl::allocator::BumpPoolBufferStrategy strategy_512(DtcmAllocator::instance(), 512);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1024(DtcmAllocator::instance(), 1024);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1500(DtcmAllocator::instance(), 1500);
    
    // Create a BufferAllocator with all strategies
    static ftl::allocator::BufferAllocator buffer_allocator(
        strategy_32, strategy_64, strategy_128, strategy_256,
        strategy_512, strategy_1024, strategy_1500);
    
    ftl::ipv4::udp::Payload::initialize(buffer_allocator);

    // Set up socket allocation strategy and allocator
    static ftl::allocator::BumpPoolObjStrategy<NxUdpSocket> socket_strategy(DtcmAllocator::instance());
    static ftl::allocator::ObjAllocator<NxUdpSocket> socket_allocator(socket_strategy);
    
    // Set up the etherenet interface
    GigabitEthernet::create("192.0.2.149", Mask{255, 255, 255, 0}, socket_allocator);

    // Create hello thread.
    static ftl::TxThread thread1(
        "Thread 1", 
        etl::delegate<void(void)>::create<echo_hello>(),
        thread_1_stack,
        STACK_SIZE,
        10
    );
}
