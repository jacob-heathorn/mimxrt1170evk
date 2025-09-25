#include <string.h>
#include <stdint.h>
#include "fsl_enet.h"

/* Only include NetXDuo headers if available */
#ifdef NX_INCLUDE_USER_DEFINE_FILE
#include "nx_api.h"
#include "nx_driver_imxrt.h"
#endif

/**
 * Send raw ethernet packet using static buffer
 * This function is completely independent of NetXDuo
 *
 * @param data Pointer to ethernet frame data
 * @param length Length of ethernet frame
 * @param tx_descriptors Pointer to TX descriptor array
 * @param current_index Pointer to current TX descriptor index
 * @param num_descriptors Total number of TX descriptors
 * @param buffers_in_use Pointer to buffers in use counter
 * @return 0 on success, -1 on error
 */
int nx_driver_send_raw_packet_static(
    const uint8_t *data,
    size_t length,
    void *tx_descriptors,
    unsigned int *current_index,
    unsigned int num_descriptors,
    unsigned int *buffers_in_use)
{
    static uint8_t tx_buffer[1536] __attribute__((aligned(8)));
    enet_tx_bd_struct_t *tx_bd_array = (enet_tx_bd_struct_t *)tx_descriptors;
    unsigned int curIdx;

    /* Validate parameters */
    if (!data || length < 14 || length > sizeof(tx_buffer)) {
        return -1;
    }

    if (!tx_descriptors || !current_index || !buffers_in_use) {
        return -1;
    }

    /* Get current TX descriptor index */
    curIdx = *current_index;

    /* Check if descriptor is free */
    if (tx_bd_array[curIdx].control & ENET_BUFFDESCRIPTOR_TX_READY_MASK) {
        return -1; /* Descriptor is busy */
    }

    /* Copy data to static aligned buffer */
    memcpy(tx_buffer, data, length);

    /* Set up the buffer descriptor */
    tx_bd_array[curIdx].buffer = (uint32_t)tx_buffer;
    tx_bd_array[curIdx].length = length;

    /* Set control bits: Ready, Last, and CRC */
    tx_bd_array[curIdx].control |=
        (ENET_BUFFDESCRIPTOR_TX_READY_MASK |
         ENET_BUFFDESCRIPTOR_TX_LAST_MASK |
         ENET_BUFFDESCRIPTOR_TX_TRANMITCRC_MASK);

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    tx_bd_array[curIdx].controlExtend1 |= ENET_BUFFDESCRIPTOR_TX_INTERRUPT_MASK;
#endif

    /* Move to next descriptor */
    *current_index = (curIdx + 1) & (num_descriptors - 1);

    /* Increment buffers in use */
    (*buffers_in_use)++;

    /* Trigger transmission on ENET_1G (Gigabit Ethernet) */
    if (!ENET_1G->TDAR) {
        ENET_1G->TDAR = ENET_TDAR_TDAR_MASK;
    }

    return 0;
}

/* Helper function stub - should be implemented in the actual driver file */
__attribute__((weak)) void get_driver_tx_info(void **tx_descriptors, unsigned int *current_index,
                        unsigned int *num_descriptors, unsigned int *buffers_in_use)
{
    /* This is a weak symbol - the actual implementation should be in nx_driver_imxrt.c */
    (void)tx_descriptors;
    (void)current_index;
    (void)num_descriptors;
    (void)buffers_in_use;
}