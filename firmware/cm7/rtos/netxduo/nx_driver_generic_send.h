#ifndef NX_DRIVER_GENERIC_SEND_H
#define NX_DRIVER_GENERIC_SEND_H

#include <stdint.h>
#include <stddef.h>

/* Use UINT type to match NetXDuo definitions */
#ifndef UINT
typedef unsigned int UINT;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Send raw ethernet packet using a static buffer
 * This function is completely independent of NetXDuo and works directly with ENET hardware
 *
 * @param data Pointer to ethernet frame data (should include ethernet header)
 * @param length Total length of ethernet frame (14-1518 bytes)
 * @param tx_descriptors Pointer to TX descriptor array (from driver)
 * @param current_index Pointer to current TX descriptor index (from driver)
 * @param num_descriptors Total number of TX descriptors (e.g., 8, 64)
 * @param buffers_in_use Pointer to buffers in use counter (from driver)
 * @return 0 on success, -1 on error
 *
 * Warning: This uses a single static buffer, so only one packet
 * can be in flight at a time when using this function.
 *
 * The ethernet frame should be properly formatted with:
 * - Destination MAC (6 bytes)
 * - Source MAC (6 bytes)
 * - EtherType/Length (2 bytes)
 * - Payload
 * - CRC will be added by hardware
 *
 * This function triggers transmission on ENET_1G (Gigabit Ethernet port)
 */
int nx_driver_send_raw_packet_static(
    const uint8_t *data,
    size_t length,
    void *tx_descriptors,
    unsigned int *current_index,
    unsigned int num_descriptors,
    unsigned int *buffers_in_use);

/**
 * Example usage for sending a custom ethernet frame:
 *
 * uint8_t frame[100];
 * // Set destination MAC
 * frame[0] = 0xFF; frame[1] = 0xFF; frame[2] = 0xFF;
 * frame[3] = 0xFF; frame[4] = 0xFF; frame[5] = 0xFF;
 * // Set source MAC (get from driver)
 * memcpy(&frame[6], my_mac_address, 6);
 * // Set EtherType (e.g., 0x0800 for IPv4)
 * frame[12] = 0x08; frame[13] = 0x00;
 * // Add payload...
 * memcpy(&frame[14], payload_data, payload_len);
 *
 * int result = nx_driver_send_raw_packet(frame, 14 + payload_len);
 */

#ifdef __cplusplus
}
#endif

#endif /* NX_DRIVER_GENERIC_SEND_H */