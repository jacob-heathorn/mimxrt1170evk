#pragma once

#include "ftl/ipv4/udp/socket.hpp"
#include "network/nx_ethernet_interface.hpp"

#include "nx_api.h"
#include <cstring>

class NxUdpSocket : public ftl::ipv4::udp::Socket {
public:
    NxUdpSocket(NxEthernetInterface &interface)
      : interface_{interface}
    {}

    virtual ~NxUdpSocket() override {
        close();
    }

    // --- basic unicast setup ---

    bool open(size_t receive_queue_len = 1) override {
        UINT status = nx_udp_socket_create(
            interface_.Ip(),            // NX_IP*
            &socket_,                   // NX_UDP_SOCKET*
            name_,                      // socket name
            NX_IP_NORMAL,               // type‐of‐service
            NX_DONT_FRAGMENT,           // fragmentation
            NX_IP_TIME_TO_LIVE,         // default TTL
            receive_queue_len           // max queued packets
        );
        return status == NX_SUCCESS;
    }

    bool is_open() const noexcept override {
        return (socket_.nx_udp_socket_ip_ptr != NX_NULL);
    }

    bool bind(uint16_t port = 0) override {
        return nx_udp_socket_bind(&socket_, port, TX_NO_WAIT) == NX_SUCCESS;
    }

    bool join_multicast_group(const ftl::ipv4::Address &group) override
    {
        UINT status = nx_igmp_multicast_join( this->interface_.Ip(), group.ToUint32() );
        return status == NX_SUCCESS;
    }

    bool leave_multicast_group(const ftl::ipv4::Address &group) override
    {
        UINT status = nx_igmp_multicast_leave( this->interface_.Ip(), group.ToUint32() );
        return status == NX_SUCCESS;
    }

    // /// Change the TTL (hop‐limit) for outgoing packets on this socket.
    // bool setTimeToLive(uint8_t ttl) {
    //     UINT status = nx_udp_socket_time_to_live_set(
    //         &socket_,
    //         static_cast<UINT>(ttl)
    //     );
    //     return status == NX_SUCCESS;
    // }

    // --- unicast send/recv remain the same ---

    bool send(ftl::ipv4::udp::Payload payload,
              const ftl::ipv4::Endpoint dest) override
    {
        NX_PACKET* packet;
        if (nx_packet_allocate(interface_.Pool(), &packet, NX_UDP_PACKET, TX_NO_WAIT) != NX_SUCCESS)
            return false;

        if (nx_packet_data_append(packet, payload.front(), payload.size(),
                                  interface_.Pool(), TX_NO_WAIT) != NX_SUCCESS)
        {
            nx_packet_release(packet);
            return false;
        }

        if (nx_udp_socket_send(&socket_, packet,
                               dest.address().ToUint32(), dest.port()) != NX_SUCCESS)
        {
            nx_packet_release(packet);
            return false;
        }

        return true;
    }

    ftl::ipv4::udp::Payload receive(ftl::ipv4::Endpoint *const peer) override {
        NX_PACKET* packet;
        if (nx_udp_socket_receive(&socket_, &packet, NX_NO_WAIT) != NX_SUCCESS)
            return {};  // no data

        // extract source
        ULONG source_ip;
        UINT  source_port;
        if (nx_udp_source_extract(packet, &source_ip, &source_port) != NX_SUCCESS) {
            nx_packet_release(packet);
            return {};
        }
        peer->set_address(ftl::ipv4::Address(source_ip));
        peer->set_port(source_port);

        // copy out
        ftl::ipv4::udp::Payload payload(packet->nx_packet_length);
        ULONG copied = 0;
        UINT status = nx_packet_data_extract_offset(
            packet, 0, payload.front(), payload.size(), &copied
        );
        nx_packet_release(packet);

        if (status != NX_SUCCESS || copied != payload.size())
            return {};

        return payload;
    }

    void close() override {
        if (is_open()) {
            nx_udp_socket_unbind(&socket_);
            nx_udp_socket_delete(&socket_);
        }
    }

private:
    NxEthernetInterface &interface_;
    NX_UDP_SOCKET       socket_{};
    char*               name_ = "NxUdpSocket";
};
