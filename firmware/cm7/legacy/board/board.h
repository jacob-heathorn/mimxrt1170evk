#pragma once

#include "fsl_common.h"

/*! @brief The Ethernet port used by network examples, default use 1G port. */
/* Below comment is for test script to easily define which port to be used, please don't delete. */
/* @TEST_ANCHOR */
#ifndef BOARD_NETWORK_USE_100M_ENET_PORT
#define BOARD_NETWORK_USE_100M_ENET_PORT (0U)
#endif

#define BOARD_ENET1_PHY_ADDRESS (0x01U) /* Phy address of enet port 1. */

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */


void BOARD_ConfigMPU(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */
