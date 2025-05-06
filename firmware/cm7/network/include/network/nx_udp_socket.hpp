#pragma once

#include "network/udp_socket.hpp"
#include "network/nx_ethernet_interface.hpp"

#include "nx_api.h"
#include <cstring>

class NxUdpSocket : public UdpSocket {
public:
    // TODO give it the NxEthernetInterface?
    NxUdpSocket(NxEthernetInterface &interface) : interface_{interface} {}

    bool open(size_t recieve_queue_len) override {
        UINT status = nx_udp_socket_create(interface_.Ip(), &socket_, name_,
            NX_IP_NORMAL, NX_DONT_FRAGMENT, NX_IP_TIME_TO_LIVE, recieve_queue_len);
        return status == NX_SUCCESS;
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

    bool receive(char* buffer, size_t buffer_len, size_t& out_len, Ipv4Endpoint *const peer) override {
        NX_PACKET* packet;
        UINT status = nx_udp_socket_receive(&socket_, &packet, NX_NO_WAIT);
        if (status != NX_SUCCESS) {
            return false;
        }
        
        // Extract the peer’s address:
        ULONG   source_ip;
        UINT    source_port;
        UINT    info_status = nx_udp_source_extract(packet, &source_ip, &source_port);
        if (info_status != NX_SUCCESS) {
            nx_packet_release(packet);
            return false;
        }
        peer->set_address(Ipv4Address(source_ip));
        peer->set_port(source_port);

        // Ensure we don't overflow the buffer
        ULONG data_len = packet->nx_packet_length;
        if (data_len > buffer_len) {
            // Drop the packet if too large
            nx_packet_release(packet);
            return false;
        }

        // Copy the payload into the provided buffer
        ULONG copied = 0;
        status = nx_packet_data_extract_offset(packet, 0, buffer, data_len, &copied);
        if (status != NX_SUCCESS || copied == 0) {
            nx_packet_release(packet);
            return false;
        }

        out_len = copied;
        buffer[copied] = '\0'; // Null terminate for convenience if it's a string
        nx_packet_release(packet);
        return true;
    }

    void close() override {
        nx_udp_socket_unbind(&socket_);
        nx_udp_socket_delete(&socket_);
    }

private:
    NxEthernetInterface &interface_;
    NX_UDP_SOCKET socket_{};
    char* name_ = "UdpSocket"; // TODO make unique or pass to interface.
};
