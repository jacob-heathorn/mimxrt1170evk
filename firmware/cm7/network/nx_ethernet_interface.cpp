#include "network/nx_ethernet_interface.hpp"
#include "network/nx_udp_socket.hpp"

#include "nx_api.h"
#include "fsl_common.h"
#include "utils/dtcm_allocator.hpp"
#include "utils/ocram1_allocator.hpp"
#include "utils/ocram2_allocator.hpp"
#include "ftl/bump_pool.hpp"

extern "C"
{
VOID nx_link_driver(NX_IP_DRIVER *driver_req_ptr);
}

template <typename D, typename B = D>
class UniqueBumpPool : PolymorphicDeleter<UdpSocket> {
public:
  explicit UniqueBumpPool(ftl::BumpAllocator& allocator, std::size_t initialSize = 1)
   : bump_pool_{allocator, initialSize} {}

  ~UniqueBumpPool() = default;

  // No copying or moving.
  UniqueBumpPool(const UniqueBumpPool&) = delete;            // Delete copy constructor
  UniqueBumpPool& operator=(const UniqueBumpPool&) = delete; // Delete copy assignment operator
  UniqueBumpPool(UniqueBumpPool&&) = delete;                 // Delete move constructor
  UniqueBumpPool& operator=(UniqueBumpPool&&) = delete;      // Delete move assignment operator

  void operator()(B* s) override
  {
    bump_pool_.release(static_cast<D*>(s));
  }

  template <typename... Args>
  std::unique_ptr<B, DelegatingDeleter<B>> acquire(Args&&... args) {
    DelegatingDeleter<B> deleter{this};
    return { bump_pool_.acquire(std::forward<Args>(args)...), deleter };
  }
private:
  BumpPool<D> bump_pool_;
};

NxEthernetInterface::NxEthernetInterface(Ipv4Address address, Ipv4Mask mask)
{
  UINT status;
  ULONG error_counter = 0;

  nx_system_initialize();
  // Create a packet pool.
  void* packet_pool_area = Ocram2Allocator::instance().allocate(NxEthernetInterface::kPacketPoolSize, 64);
  assert(packet_pool_area != nullptr);
  status = nx_packet_pool_create(&pool_, "NetX Main Packet Pool", NxEthernetInterface::kMaxPacketSize,
    (ULONG *)(((int)packet_pool_area + 15) & ~15), NxEthernetInterface::kPacketPoolSize);

  // Check for pool creation error.
  if (status) {
    error_counter++;
  }

  // Create an IP instance.
  void *ip_thread_stack = DtcmAllocator::instance().allocate(NxEthernetInterface::kIpThreadStackSize);
  std::memset(ip_thread_stack, 0, NxEthernetInterface::kIpThreadStackSize);

  status = nx_ip_create(&ip_, "NetX IP Instance 0",
    address.ToUint32(), mask.ToUint32(), &pool_, nx_link_driver,
      ip_thread_stack, NxEthernetInterface::kIpThreadStackSize, 1);

  // Check for IP create errors.
  if (status) {
    error_counter++;
  }

  // Enable ARP and supply ARP cache memory for IP Instance 0.
  void* arp_space_area = Ocram1Allocator::instance().allocate(NxEthernetInterface::kArpSpaceSize);
  status = nx_arp_enable(&ip_, arp_space_area, NxEthernetInterface::kArpSpaceSize);

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

UdpSocketPtr NxEthernetInterface::CreateUdpSocket()
{
  static UniqueBumpPool<NxUdpSocket, UdpSocket> pool{DtcmAllocator::instance()};
  return pool.acquire(*this);
}
