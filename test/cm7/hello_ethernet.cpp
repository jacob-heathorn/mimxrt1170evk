#include <cstdio>
#include <cstring>
#include "drivers/gigabit_ethernet_driver.hpp"

static void PrintBuffer(const uint8_t* buffer, size_t length) {
    printf("Packet content (%d bytes):\n", length);
    for (size_t i = 0; i < length; i++) {
        printf("%02X ", buffer[i]);
        if ((i + 1) % 16 == 0) {
            printf("\n");
        }
    }
    if (length % 16 != 0) {
        printf("\n");
    }
}

static void BuildTestPacket(uint8_t* buffer, size_t* length) {
    // Build a simple Ethernet frame
    // Destination MAC (broadcast)
    buffer[0] = 0xFF;
    buffer[1] = 0xFF;
    buffer[2] = 0xFF;
    buffer[3] = 0xFF;
    buffer[4] = 0xFF;
    buffer[5] = 0xFF;

    // Source MAC
    buffer[6] = 0x12;
    buffer[7] = 0x34;
    buffer[8] = 0x56;
    buffer[9] = 0x78;
    buffer[10] = 0x88;
    buffer[11] = 0x08;

    // EtherType (0x0800 = IPv4, but we'll use a custom type for testing)
    buffer[12] = 0x88;
    buffer[13] = 0xB5;

    // Payload - "Hello Ethernet!"
    const char* message = "Hello Ethernet! This is a test packet from the Gigabit Ethernet Driver.";
    size_t message_len = strlen(message);
    memcpy(&buffer[14], message, message_len);

    // Minimum Ethernet frame is 64 bytes (including 4-byte CRC added by hardware)
    // So we need at least 60 bytes of data
    *length = 14 + message_len;
    if (*length < 60) {
        // Pad with zeros
        memset(&buffer[*length], 0, 60 - *length);
        *length = 60;
    }
}

int main() {
    printf("\n=== Gigabit Ethernet Driver Test ===\n\n");

    GigabitEthernetDriver eth_driver;

    printf("Initializing Gigabit Ethernet driver...\n");
    if (!eth_driver.Initialize()) {
        printf("ERROR: Failed to initialize Ethernet driver\n");
        return -1;
    }
    printf("Ethernet driver initialized successfully!\n\n");

    uint8_t packet_buffer[256];
    size_t packet_length;

    // Build test packet
    BuildTestPacket(packet_buffer, &packet_length);

    printf("Sending test packet...\n");
    PrintBuffer(packet_buffer, packet_length);

    // Send multiple packets to test
    const int num_packets = 5;
    int successful_sends = 0;

    for (int i = 0; i < num_packets; i++) {
        printf("\nSending packet %d/%d... ", i + 1, num_packets);

        // Modify packet slightly for each send
        packet_buffer[14] = '0' + i;  // Change first byte of payload

        if (eth_driver.SendPacket(packet_buffer, packet_length)) {
            printf("SUCCESS\n");
            successful_sends++;
        } else {
            printf("FAILED\n");
        }

        // Small delay between packets
        for (volatile int delay = 0; delay < 1000000; delay++) {
            __asm__("nop");
        }
    }

    printf("\n=== Test Results ===\n");
    printf("Packets sent successfully: %d/%d\n", successful_sends, num_packets);

    if (successful_sends == num_packets) {
        printf("All packets sent successfully!\n");
        printf("\nTest PASSED\n");
        return 0;
    } else if (successful_sends > 0) {
        printf("Some packets were sent successfully\n");
        printf("\nTest PARTIALLY PASSED\n");
        return 1;
    } else {
        printf("No packets were sent successfully\n");
        printf("\nTest FAILED\n");
        return -1;
    }
}