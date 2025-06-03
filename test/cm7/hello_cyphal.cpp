#include <utility>

#include "stdio.h"
#include "tx_api.h"

#include "ftl/tx_thread.hpp"
#include "ftl/ipv4/udp/socket.hpp"
#include "network/gigabit_ethernet.hpp"

#include "cyphal/udp_frame.hpp"
#include "cyphal/publisher.hpp"
#include "utils/dtcm_allocator.hpp"

#include <uavcan/node/Heartbeat_1_0.hpp>

using namespace ftl::ipv4;

// The port number is defined in the Cyphal/UDP Specification.
static constexpr uint16_t kCyphalUdpPort = 9382U;

static constexpr uint16_t kSourceNodeId = 1001;

#define STACK_SIZE 2048
uint8_t thread_1_stack[STACK_SIZE];

int main()
{
    printf("Entering the kernel..\n\r");
    tx_kernel_enter();
    return 0;
}

void cyphal_publisher_thread()
{
    printf("Waiting for link...\r\n");
    GigabitEthernet::instance().WaitUntilReady();
    printf("Starting Cyphal publisher...\r\n");

    // Create an allocator for the data frame
    static constexpr size_t POOL_MEMORY_SIZE = 16 * 1024;
    static uint8_t buffer[POOL_MEMORY_SIZE] __attribute__((section(".dtcm_data")));
    ftl::BumpAllocator allocator(buffer, POOL_MEMORY_SIZE);

    // Initialize data frame class with the memory allocator.
    ftl::DataFrame::initialize(allocator);

    // Create UDP socket for Cyphal
    udp::SocketPtr socket = GigabitEthernet::instance().CreateUdpSocket();
    
    if (!socket->open(4)) {
        printf("Failed to open socket\r\n");
        assert(false);
    }
    
    if (!socket->bind(kCyphalUdpPort)) {
        printf("Failed to bind to port %u\r\n", kCyphalUdpPort);
        assert(false);
    }

    // Create Cyphal publisher for Heartbeat messages
    cyphal::UdpPublisher<uavcan::node::Heartbeat_1_0> publisher(
        uavcan::node::Heartbeat_1_0::_traits_::FixedPortId,
        std::move(socket), 
        kSourceNodeId
    );

    uavcan::node::Heartbeat_1_0 msg{};
    msg.uptime = 0;
    msg.health.value = uavcan::node::Health_1_0::NOMINAL;
    msg.mode.value = uavcan::node::Mode_1_0::OPERATIONAL; 
    msg.vendor_specific_status_code = 0xAB;

    uint32_t count = 0;
    while (1)
    {
        publisher.publish(msg);
        printf("Published heartbeat #%lu (uptime=%lu)\r\n", count++, msg.uptime);
        
        tx_thread_sleep(NX_IP_PERIODIC_RATE);  // ~1 second
        msg.uptime += 1'000'000;  // Increment uptime by 1 second in microseconds
    }
}

/* Define what the initial system looks like.  */
VOID tx_application_define(void *first_unused_memory)
{
    NX_PARAMETER_NOT_USED(first_unused_memory);

    // Set up the ethernet interface
    GigabitEthernet::create("192.2.2.149", Mask{255, 255, 255, 0});

    // Create Cyphal publisher thread.
    static ftl::TxThread thread1(
        "Cyphal Publisher", 
        etl::delegate<void(void)>::create<cyphal_publisher_thread>(),
        thread_1_stack,
        STACK_SIZE,
        10
    );
}