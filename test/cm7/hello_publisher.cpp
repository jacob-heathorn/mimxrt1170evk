#include <utility>

#include "stdio.h"
#include "tx_api.h"

#include "ftl/tx_thread.hpp"
#include "ftl/allocator/bump_pool_strategy.hpp"
#include "ftl/allocator/bump_pool_buffer_strategy.hpp"
#include "ftl/ipv4/udp/payload.hpp"
#include "network/gigabit_ethernet.hpp"
#include "utils/dtcm_allocator.hpp"
#include "utils/ocram1_allocator.hpp"

#include "cyphal/udp_transport.hpp"
#include "cyphal/udp_publisher.hpp"

#include <uavcan/node/Heartbeat_1_0.hpp>

using namespace ftl::ipv4;

static constexpr uint16_t kSourceNodeId = 1002;

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

    // Create UDP transport for Cyphal
    cyphal::UdpTransport transport(GigabitEthernet::instance());

    // Create Cyphal publisher for Heartbeat messages
    cyphal::UdpPublisher<uavcan::node::Heartbeat_1_0> publisher(
        uavcan::node::Heartbeat_1_0::_traits_::FixedPortId,
        kSourceNodeId,
        transport
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
        msg.uptime += 1;  // Increment uptime by 1 second
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