/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/iomuxc.hpp"
#include "registers/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"
#include <cstdio>

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Address of memory, from which the secondary core will boot */
#define CORE1_BOOT_ADDRESS (void *)0x20200000

extern unsigned char hello_world_cm4_bin[];
extern unsigned int hello_world_cm4_bin_len;

const unsigned char *core1_image_start = hello_world_cm4_bin;

#define CORE1_IMAGE_START ((void *)core1_image_start)
#define CORE1_IMAGE_SIZE  ((void *)hello_world_cm4_bin_len)


/*!
 * @brief Application-specific implementation of the SystemInitHook() weak function.
 */
void SystemInitHook(void)
{
    /* Initialize MCMGR - low level multicore management library. Call this
       function as close to the reset entry as possible to allow CoreUp event
       triggering. The SystemInitHook() weak function overloading is used in this
       application. */
    (void)MCMGR_EarlyInit();
}

void BoardInitPins()
{
    // Enable the IOMUXC clock and wait for it.
    nCCM::LPCG49_DIRECT::Instance().bits.ON = nCCM::LPCG49_DIRECT::eON::eON_1;
    while (nCCM::LPCG49_STATUS0::Instance().bits.ON != nCCM::LPCG49_STATUS0::eON::eON_1) {}

    // Enable lpuartt1 RX and TX.
    nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_24::Instance().bits.MUX_MODE = 
        nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_24::eMUX_MODE::eALT0_lpuart1_TX;
    nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_25::Instance().bits.MUX_MODE = 
        nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_25::eMUX_MODE::eALT0_lpuart1_RX;
}

int main(void)
{
    /* Initialize MCMGR, install generic event handlers */
    (void)MCMGR_Init();

    int x = 4;
    int y = x*5;
    (void)y;

    /* Init board hardware.*/
    BOARD_ConfigMPU();
    BoardInitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();

    /* Print the initial banner from Primary core */
    printf("\r\nHello World from the Primary Core!\r\n\n");

    /* This section ensures the secondary core image is copied from flash location to the target RAM memory.
       It consists of several steps: image size calculation, image copying and cache invalidation (optional for some
       platforms/cases). These steps are not required on MCUXpresso IDE which copies the secondary core image to the
       target memory during startup automatically. */
    uint32_t core1_image_size;
    core1_image_size = hello_world_cm4_bin_len;
    std::printf("Copy Secondary core image to address: 0x%x, size: %d\r\n", (unsigned int)CORE1_BOOT_ADDRESS, (int)core1_image_size);

    /* Copy Secondary core application from FLASH to the target memory. */
    (void)memcpy((void *)(char *)CORE1_BOOT_ADDRESS, (void *)CORE1_IMAGE_START, core1_image_size);

#ifdef APP_INVALIDATE_CACHE_FOR_SECONDARY_CORE_IMAGE_MEMORY
    /* Invalidate cache for memory range the secondary core image has been copied to. */
    if (LMEM_PSCCR_ENCACHE_MASK == (LMEM_PSCCR_ENCACHE_MASK & LMEM->PSCCR))
    {
        L1CACHE_CleanInvalidateSystemCacheByRange((uint32_t)CORE1_BOOT_ADDRESS, core1_image_size);
    }
#endif /* APP_INVALIDATE_CACHE_FOR_SECONDARY_CORE_IMAGE_MEMORY*/
    SCB_CleanInvalidateDCache_by_Addr((void *)CORE1_BOOT_ADDRESS, core1_image_size);

    /* Boot Secondary core application */
    std::printf("Starting Secondary core.\r\n");
    (void)MCMGR_StartCore(kMCMGR_Core1, (void *)(char *)CORE1_BOOT_ADDRESS, 2, kMCMGR_Start_Synchronous);
    std::printf("The secondary core application has been started.\r\n");

    for (;;)
    {
    }
}
