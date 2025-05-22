#pragma once

#include "network/udp_socket.hpp"
#include "network/nx_ethernet_interface.hpp"

#include "nx_api.h"
#include <cstring>

class NxUdpSocket : public UdpSocket {
public:
    NxUdpSocket(NxEthernetInterface &interface) : interface_{interface} {}
    virtual ~NxUdpSocket() override 
    {
        this->close();
    }

    bool open(size_t recieve_queue_len) override {
        UINT status = nx_udp_socket_create(interface_.Ip(), &socket_, name_,
            NX_IP_NORMAL, NX_DONT_FRAGMENT, NX_IP_TIME_TO_LIVE, recieve_queue_len);
        return status == NX_SUCCESS;
    }

    bool is_open() const noexcept {
        // `nx_udp_socket_ip_ptr` is null if create() never succeeded
        return (socket_.nx_udp_socket_ip_ptr != NX_NULL);
    }

    bool bind(uint16_t port = 0) override {
        return nx_udp_socket_bind(&socket_, port, TX_NO_WAIT) == NX_SUCCESS;
    }

    // TODO: dest_ip is hardcoded!
    bool send(const char* message, Ipv4Endpoint dest) override {

        NX_PACKET* packet;
        if (nx_packet_allocate(interface_.Pool(), &packet, NX_UDP_PACKET, TX_NO_WAIT) != NX_SUCCESS) {
            return false;
        }

        if (nx_packet_data_append(packet, (void*)message, strlen(message), interface_.Pool(), TX_NO_WAIT) != NX_SUCCESS) {
            nx_packet_release(packet);
            return false;
        }

        if (nx_udp_socket_send(&socket_, packet, dest.address().ToUint32(), dest.port()) != NX_SUCCESS) {
            nx_packet_release(packet);
            return false;
        }

        return true;
    }

    
    ftl::UdpPayload receive(Ipv4Endpoint *const peer) override {
        NX_PACKET* packet;
        UINT status = nx_udp_socket_receive(&socket_, &packet, NX_NO_WAIT);
        if (status != NX_SUCCESS) {
            return {};  // Empty frame
        }

        // Source port and IP. (TODO use)
        ULONG source_ip;
        UINT source_port;
        if (nx_udp_source_extract(packet, &source_ip, &source_port) != NX_SUCCESS) {
            nx_packet_release(packet);
            return {};
        }
        peer->set_address(Ipv4Address(source_ip));
        peer->set_port(source_port);

        // Create a new udp payload with the exact length
        ftl::UdpPayload payload(packet->nx_packet_length);

        // 6) Copy the payload
        ULONG copied = 0;
        status = nx_packet_data_extract_offset(packet,
                                            0,
                                            payload.data(),
                                            payload.size(),
                                            &copied);
        nx_packet_release(packet);

        if (status != NX_SUCCESS || copied != payload.size()) {
            return {};  // something went wrong
        }

        return payload;
    }

    void close() override {
        if (is_open())
        {
            nx_udp_socket_unbind(&socket_);
            nx_udp_socket_delete(&socket_);
        }
    }

private:
    NxEthernetInterface &interface_;
    NX_UDP_SOCKET socket_{};
    char* name_ = "UdpSocket"; // TODO make unique or pass to interface.
};
