#include "network/nx_ethernet_interface.hpp"
#include "network/nx_udp_socket.hpp"

#include "nx_api.h"
#include "fsl_common.h"
#include "utils/dtcm_allocator.hpp"
#include "utils/ocram2_allocator.hpp"

extern "C"
{
VOID nx_link_driver(NX_IP_DRIVER *driver_req_ptr);
}


/* Define packet pool for the demonstration.  */
#define NX_PACKET_POOL_SIZE ((1536 + sizeof(NX_PACKET)) * 50)

/* Define the IP thread's stack area.  */
ULONG ip_thread_stack[2 * 1024 / sizeof(ULONG)];

/* Define the ARP cache area.  */
ULONG arp_space_area[1024 / sizeof(ULONG)];

NxEthernetInterface::NxEthernetInterface()
{
  UINT status;
  ULONG error_counter = 0;

  nx_system_initialize();
  // Create a packet pool.
  void* packet_pool_area = Ocram2Allocator::instance().allocate(NX_PACKET_POOL_SIZE, 64);
  assert(packet_pool_area != nullptr);
  status = nx_packet_pool_create(&pool_, "NetX Main Packet Pool", 1536,
    (ULONG *)(((int)packet_pool_area + 15) & ~15), NX_PACKET_POOL_SIZE);

  // Check for pool creation error.
  if (status) {
    error_counter++;
  }

  // Create an IP instance.
  status = nx_ip_create(&ip_, "NetX IP Instance 0",
  IP_ADDRESS(192, 2, 2, 149), 0xFFFFFF00UL,
  &pool_, nx_link_driver, (UCHAR *)ip_thread_stack, sizeof(ip_thread_stack), 1);

  // Check for IP create errors.
  if (status) {
    error_counter++;
  }

  // Enable ARP and supply ARP cache memory for IP Instance 0.
  status = nx_arp_enable(&ip_, (void *)arp_space_area, sizeof(arp_space_area));

  // Check for ARP enable errors.
  if (status) {
    error_counter++;
  }

  // Enable TCP traffic.
  status = nx_tcp_enable(&ip_);

  // Check for TCP enable errors.
  if (status) {
    error_counter++;
  }

  // Enable UDP traffic.
  status = nx_udp_enable(&ip_);

  // Check for UDP enable errors.
  if (status) {
    error_counter++;
  }

  // Enable ICMP.
  status = nx_icmp_enable(&ip_);

  // Check for errors.
  if (status) {
    error_counter++;
  }
  
  assert(error_counter == 0);
}

void NxEthernetInterface::WaitUntilReady()
{
  UINT status;
  ULONG actual_status;
  status = nx_ip_status_check(this->Ip(), NX_IP_INITIALIZE_DONE, &actual_status, NX_WAIT_FOREVER);
  if (status != NX_SUCCESS) {
      printf("IP initialization failed: %u\r\n", status);
      assert(status == NX_SUCCESS);
  }
}

UdpSocket *NxEthernetInterface::CreateUdpSocket()
{
  auto *socket = DtcmAllocator::instance().allocate<NxUdpSocket>(*this);
  return socket;
}
