#include "network/gigabit_ethernet.hpp"

#include "nx_api.h"


GigabitEthernet::GigabitEthernet(ftl::ipv4::Address address, ftl::ipv4::Mask mask,
                                 ftl::allocator::ObjAllocator<NxUdpSocket>& socket_allocator)
  : NxEthernetInterface(address, mask, socket_allocator)
{
  // Pin configuration, clock initialization, and PHY reset are now handled
  // by the GigabitEthernetDriver constructor when it's created
}
