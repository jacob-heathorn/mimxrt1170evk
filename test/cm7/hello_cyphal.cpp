#include <utility>

#include "stdio.h"
#include "tx_api.h"

#include "ftl/tx_thread.hpp"
#include "ftl/ipv4/udp/socket.hpp"
#include "network/gigabit_ethernet.hpp"

using namespace ftl::ipv4;


#define STACK_SIZE 2048
uint8_t thread_1_stack[STACK_SIZE];


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
        
        // Send unicast message.
        udp::Payload msg1(strlen("Hello unicast") + 2);
        sprintf((char *)msg1.front(), "Hello unicast %d", i % 10);
        if (!socket->send(std::move(msg1), Endpoint("192.2.2.100", 5001))) {
            printf("Failed to send UDP packet\r\n");
        }

        // Send multicast message.
        udp::Payload msg2(strlen("Hello multicast") + 2);
        sprintf((char *)msg2.front(), "Hello multicast %d", i % 10);
        if (!socket->send(std::move(msg2), Endpoint("224.1.0.2", 5002))) {
            printf("Failed to send UDP packet\r\n");
        }

        tx_thread_sleep(NX_IP_PERIODIC_RATE);  // ~1 second

        // Try receiving
        udp::Payload payload;
        do {
            Endpoint peer{};
            payload = socket->receive(&peer);
            if (payload) {
                printf("Received UDP: '%.*s' from %s (len=%u)\r\n",
                    payload.size(),    // precision for the %s
                    payload.string_view().data(),
                    peer.ToString().data(),
                    payload.size());
            }
        }
        while (payload);
    }
}

/* Define what the initial system looks like.  */
VOID tx_application_define(void *first_unused_memory)
{
    NX_PARAMETER_NOT_USED(first_unused_memory);

    // Set up the etherenet interface
    GigabitEthernet::create("192.2.2.149", Mask{255, 255, 255, 0});

    // Create hello thread.
    static ftl::TxThread thread1(
        "Thread 1", 
        etl::delegate<void(void)>::create<echo_hello>(),
        thread_1_stack,
        STACK_SIZE,
        10
    );
}


// #include <iostream>
// #include <thread>
// #include <chrono>

// #include "cyphal/udp_frame.hpp"
// #include "cyphal/publisher.hpp"
// #include "ftl/native_udp_socket.hpp"
// #include "ftl/native_ethernet_interface.hpp"

// #include <uavcan/node/Heartbeat_1_0.hpp>

// // The port number is defined in the Cyphal/UDP Specification.
// static constexpr uint16_t kCyphalUdpPort = 9382U;

// static constexpr uint16_t kSourceNodeId = 1001;
// static constexpr uint16_t kSubjectId = 2001;

// int main() {
//   using namespace ftl::ipv4;

//   std::cout << "Hello World!" << std::endl;

//   // Create an allocator for the data frame
//   static constexpr size_t POOL_MEMORY_SIZE = 16 * 1024;
//   uint8_t* buffer = new uint8_t[POOL_MEMORY_SIZE];
//   ftl::BumpAllocator allocator(buffer, POOL_MEMORY_SIZE);

//   // Initialize data frame class with the memory allocator.
//   ftl::DataFrame::initialize(allocator);

//   cyphal::UdpFrame f(2);

//   std::cout << "version: " << (uint32_t)f.version() << std::endl;

//   // Setup interface on loopback interface.
//   ftl::ethernet::NativeEthernetInterface lo{Address{"127.0.0.1"}, Mask{"255.255.255.0"}};
//   auto socket = lo.CreateUdpSocket();
//   if (!socket->open(4)) {
//     std::cerr << "Failed to open\n";
//     return 1;
//   }
  
//   if (!socket->bind(kCyphalUdpPort)) {
//     std::cerr << "Failed to bind\n";
//     return 1;
//   }

//   // cyphal::UdpPublisher<uavcan::node::Health_1_0> publisher(kSubjectId, std::move(socket), kSourceNodeId);
//   cyphal::UdpPublisher<uavcan::node::Heartbeat_1_0> publisher(uavcan::node::Heartbeat_1_0::_traits_::FixedPortId,
//     std::move(socket), kSourceNodeId);

//   uavcan::node::Heartbeat_1_0 msg{};
//   msg.uptime = 0;
//   msg.health.value = uavcan::node::Health_1_0::NOMINAL;
//   msg.mode.value = uavcan::node::Mode_1_0::OPERATIONAL; 
//   msg.vendor_specific_status_code = 0xAB;

//   while (1)
//   {
//     publisher.publish(msg);
//     std::cout << "published health" << std::endl;
    
//     std::this_thread::sleep_for(std::chrono::seconds(1));
//     msg.uptime += 1'000'000;
//   }
// }
