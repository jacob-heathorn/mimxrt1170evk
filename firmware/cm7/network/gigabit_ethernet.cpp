#include "network/gigabit_ethernet.hpp"

#include "nx_api.h"
#include "fsl_common.h"

extern "C"
{
VOID nx_link_driver(NX_IP_DRIVER *driver_req_ptr);
}


/* Define packet pool for the demonstration.  */
#define NX_PACKET_POOL_SIZE ((1536 + sizeof(NX_PACKET)) * 50)

NX_PACKET_POOL pool_0;
NX_IP ip_0;

/* Define the IP thread's stack area.  */
ULONG ip_thread_stack[2 * 1024 / sizeof(ULONG)];

AT_NONCACHEABLE_SECTION_ALIGN(ULONG packet_pool_area[NX_PACKET_POOL_SIZE / 4 + 4], 64);

/* Define the ARP cache area.  */
ULONG arp_space_area[1024 / sizeof(ULONG)];

GigabitEthernet::GigabitEthernet()
{
  UINT status;
  ULONG error_counter;

  nx_system_initialize();
  /* Create a packet pool.  */
  status = nx_packet_pool_create(&pool_0, "NetX Main Packet Pool", 1536,
    (ULONG *)(((int)packet_pool_area + 15) & ~15), NX_PACKET_POOL_SIZE);

  /* Check for pool creation error.  */
  if (status)
  error_counter++;

  /* Create an IP instance.  */
  status = nx_ip_create(&ip_0, "NetX IP Instance 0",
  IP_ADDRESS(192, 2, 2, 149), 0xFFFFFF00UL,
  &pool_0, nx_link_driver, (UCHAR *)ip_thread_stack, sizeof(ip_thread_stack), 1);

  /* Check for IP create errors.  */
  if (status)
  error_counter++;

  /* Enable ARP and supply ARP cache memory for IP Instance 0.  */
  status = nx_arp_enable(&ip_0, (void *)arp_space_area, sizeof(arp_space_area));

  /* Check for ARP enable errors.  */
  if (status)
  error_counter++;

  /* Enable TCP traffic.  */
  status = nx_tcp_enable(&ip_0);

  /* Check for TCP enable errors.  */
  if (status)
  error_counter++;

  /* Enable UDP traffic.  */
  status = nx_udp_enable(&ip_0);

  /* Check for UDP enable errors.  */
  if (status)
  error_counter++;

  /* Enable ICMP.  */
  status = nx_icmp_enable(&ip_0);

  /* Check for errors.  */
  if (status)
  error_counter++;
}


NX_IP *GigabitEthernet::Ip0() { return &ip_0; }
NX_PACKET_POOL *GigabitEthernet::Pool0() { return &pool_0; }

void GigabitEthernet::WaitUntilReady()
{
  UINT status;
  ULONG actual_status;
  status = nx_ip_status_check(GigabitEthernet::instance().Ip0(), NX_IP_INITIALIZE_DONE, &actual_status, NX_WAIT_FOREVER);
  if (status != NX_SUCCESS) {
      printf("IP initialization failed: %u\r\n", status);
      assert(status == NX_SUCCESS);
  }
}

bool GigabitEthernet::RegisterUdpSocket(UdpSocket &sock)
{
  UINT status = nx_udp_socket_create(&ip_0, &sock.socket_, sock.name_,
                                           NX_IP_NORMAL, NX_FRAGMENT_OKAY, NX_IP_TIME_TO_LIVE, 512);
  return status == NX_SUCCESS;
}
