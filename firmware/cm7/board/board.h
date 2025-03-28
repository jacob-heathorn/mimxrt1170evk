#pragma once

#include "fsl_common.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/*! @brief The board flash size */
#define BOARD_FLASH_SIZE (0x1000000U)

void BOARD_ConfigMPU(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */
