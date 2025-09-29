#include <utility>

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
#include "drivers/ethernet/gigabit_ethernet_driver.h"

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
        if (!socket->send(std::move(msg1), Endpoint("192.0.2.1", 5001))) {
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
