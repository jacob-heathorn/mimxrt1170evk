#pragma once

#include "network/udp_socket.hpp"

#include "nx_api.h"
#include <cstring>

class NxUdpSocket : public UdpSocket {
public:
    // TODO give it the NxEthernetInterface?
    NxUdpSocket(EthernetInterface &interface, NX_IP* ip, NX_PACKET_POOL* pool)
        : interface_{interface}, ip_(ip), pool_(pool), socket_{} {}

    bool open() override {
        UINT status = nx_udp_socket_create(ip_, &socket_, name_,
            NX_IP_NORMAL, NX_FRAGMENT_OKAY, NX_IP_TIME_TO_LIVE, 512);
        return status == NX_SUCCESS;
    }

    bool bind(uint16_t port = 0) override {
        return nx_udp_socket_bind(&socket_, port, TX_NO_WAIT) == NX_SUCCESS;
    }

    // TODO: dest_ip is hardcoded!
    bool send(const char* message, uint16_t port) override {
        ULONG dest_ip = IP_ADDRESS(192, 2, 2, 100);

        NX_PACKET* packet;
        if (nx_packet_allocate(pool_, &packet, NX_UDP_PACKET, TX_NO_WAIT) != NX_SUCCESS) {
            return false;
        }

        if (nx_packet_data_append(packet, (void*)message, strlen(message), pool_, TX_NO_WAIT) != NX_SUCCESS) {
            nx_packet_release(packet);
            return false;
        }

        if (nx_udp_socket_send(&socket_, packet, dest_ip, port) != NX_SUCCESS) {
            nx_packet_release(packet);
            return false;
        }

        return true;
    }

    void close() override {
        nx_udp_socket_unbind(&socket_);
        nx_udp_socket_delete(&socket_);
    }

private:
    EthernetInterface &interface_;
    NX_IP* ip_;
    NX_PACKET_POOL* pool_;
    NX_UDP_SOCKET socket_;
    char* name_ = "UdpSocket"; // TODO make unique or pass to interface.
};
