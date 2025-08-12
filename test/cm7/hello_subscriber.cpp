#include <utility>
#include <array>

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
#include "cyphal/udp_subscriber.hpp"

#include <uavcan/node/Heartbeat_1_0.hpp>

using namespace ftl::ipv4;

static constexpr uint16_t kNodeId = 1003;

#define STACK_SIZE 2048
uint8_t thread_1_stack[STACK_SIZE];

int main()
{
    printf("Entering the kernel..\n\r");
    tx_kernel_enter();
    return 0;
}

void cyphal_subscriber_thread()
{
    printf("Waiting for link...\r\n");
    GigabitEthernet::instance().WaitUntilReady();
    printf("Starting Cyphal subscriber...\r\n");

    // Initialize Payload with buffer strategy for UDP frames
    auto& frame_allocator = Ocram1Allocator::instance();
    static std::array<std::size_t, 8> buffer_sizes = {32, 64, 128, 256, 512, 1024, 2048, 4096};
    static ftl::allocator::BumpPoolBufferStrategy<8> buffer_strategy(frame_allocator, buffer_sizes);
    ftl::ipv4::udp::Payload::initialize(buffer_strategy);
    
    // Create BumpPoolObjStrategy for duplicate detection map nodes
    auto& dup_allocator = DtcmAllocator::instance();
    static ftl::allocator::BumpPoolObjStrategy<cyphal::LastTransferIdAllocator::NodeType> node_strategy(dup_allocator);
    cyphal::LastTransferIdAllocator::initialize(node_strategy);

    // Create UDP transport for Cyphal
    cyphal::UdpTransport transport(GigabitEthernet::instance());

    // Create Cyphal subscriber for Heartbeat messages
    cyphal::UdpSubscriber<uavcan::node::Heartbeat_1_0> subscriber(
        uavcan::node::Heartbeat_1_0::_traits_::FixedPortId,
        kNodeId,
        transport
    );

    uint32_t count = 0;
    while (1)
    {
        // Check for received messages
        auto result = subscriber.receive();
        
        if (result.has_value()) {
            const auto& msg = result.value();
            printf("Received heartbeat #%lu: uptime=%lu, health=%u, mode=%u, vendor=0x%02X\r\n", 
                   count++,
                   msg.uptime, 
                   msg.health.value,
                   msg.mode.value,
                   msg.vendor_specific_status_code);
        }
        
        // Small delay to avoid busy-waiting
        tx_thread_sleep(10);  // 100ms delay
    }
}

/* Define what the initial system looks like.  */
VOID tx_application_define(void *first_unused_memory)
{
    NX_PARAMETER_NOT_USED(first_unused_memory);

    // Set up the ethernet interface
    GigabitEthernet::create("192.2.2.150", Mask{255, 255, 255, 0});

    // Create Cyphal subscriber thread.
    static ftl::TxThread thread1(
        "Cyphal Subscriber", 
        etl::delegate<void(void)>::create<cyphal_subscriber_thread>(),
        thread_1_stack,
        STACK_SIZE,
        10
    );
}