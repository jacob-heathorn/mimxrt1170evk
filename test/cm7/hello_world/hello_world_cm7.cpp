/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_debug_console.h"
#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/iomuxc.hpp"
#include "registers/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"

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

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

#ifdef CORE1_IMAGE_COPY_TO_RAM
uint32_t get_core1_image_size(void);
#endif

/*******************************************************************************
 * Code
 ******************************************************************************/


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


#include <stdint.h> // Ensure uint64_t is available

void check_mpu_settings(uint32_t addr) {
    for (uint32_t region = 0; region < 8; region++) {  // Check all MPU regions
        MPU->RNR = region;  // Select region

        uint32_t base = MPU->RBAR & 0xFFFFFFE0;  // Extract base address
        uint32_t size = (MPU->RASR >> 1) & 0x1F;  // Extract region size (encoded)
        uint32_t region_size = 1 << (size + 1);  // Compute actual size

        (void)PRINTF("Base%i: 0x%08X, size: %d KB, end: 0x%08X\n\r", region,base, region_size / 1024, base+region_size);
        if (addr >= base && addr < (base + region_size)) {  // Address is in region
            if (MPU->RASR & (1 << 17)) {  // Cacheable bit
                (void)PRINTF("✅ Address 0x%08X is CACHEABLE (Region %d, Size: %d KB).\n\r", 
                             addr, region, region_size / 1024);
            } else {
                (void)PRINTF("❌ Address 0x%08X is NOT CACHEABLE (Region %d, Size: %d KB).\n\r", 
                             addr, region, region_size / 1024);
            }
            return;
        }
    }

    // If no region matched:
    (void)PRINTF("❌ Address 0x%08X is NOT COVERED by any MPU region.\n\r", addr);
}

#define TEST_ADDRESS  ((volatile uint32_t *)0x20200000)  // Some RAM location
#define TEST_SIZE     (sizeof(uint32_t))

void test_cache_clean_invalidate() {
    MPU->CTRL |= 1;
    MPU->RBAR = ARM_MPU_RBAR(6, 0x20200000U);
    MPU->RASR = ARM_MPU_RASR(0, ARM_MPU_AP_FULL, 0, 0, 1, 0, 0, ARM_MPU_REGION_SIZE_1MB);
    __DSB();
    __ISB();
    PRINTF("MPU->CTRL = 0x%08X\n\r", MPU->CTRL);
    check_mpu_settings(0x20200000);

    if ((SCB->CCR & SCB_CCR_DC_Msk) == 0) {
        (void)PRINTF("❌ D-Cache is DISABLED, Step 2 is not valid.\n\r");
    } else {
        (void)PRINTF("✅ D-Cache is ENABLED.\n\r");
    }
    
    volatile uint32_t *ram_addr = TEST_ADDRESS;
    
    // 1️⃣ Step 1: Initialize RAM with a known value
    *ram_addr = 0x12345678;  
    __DSB(); __ISB();  // Ensure store is completed

    // 2️⃣ Step 2: Write a new value (this may stay in cache)
    *ram_addr = 0xDEADBEEF;

    // 3️⃣ Step 3: Read back RAM content directly using a non-cached pointer
    uint32_t ram_value_before_clean = *(volatile uint32_t *)TEST_ADDRESS;

    // 4️⃣ Step 4: Verify if the cached value differs from the RAM-stored value
    if (ram_value_before_clean == 0x12345678) {
        (void)PRINTF("✅ Cache contains new value, but RAM still holds old value.\n\r");
    } else {
        (void)PRINTF("❌ Cache did not retain new value; test might be invalid.\n\r");
        return;
    }

    // // 5️⃣ Step 5: Clean and Invalidate the Cache
    // SCB_CleanInvalidateDCache_by_Addr((void *)ram_addr, TEST_SIZE);
    // __DSB(); __ISB();  // Ensure completion

    // // 6️⃣ Step 6: Read RAM content again
    // uint32_t ram_value_after_clean = *(volatile uint32_t *)TEST_ADDRESS;

    // // 7️⃣ Step 7: Verify if the RAM now has the new value
    // if (ram_value_after_clean == 0xDEADBEEF) {
    //     printf("✅ Cache cleaning successful, RAM now has the correct value.\n");
    // } else {
    //     printf("❌ Cache cleaning failed, RAM does not have updated value.\n");
    // }

    // // 8️⃣ Step 8: Modify RAM directly and verify cache invalidation
    // *(volatile uint32_t *)TEST_ADDRESS = 0xCAFEBABE;  // Write to RAM (bypass cache)
    // SCB_InvalidateDCache_by_Addr((void *)ram_addr, TEST_SIZE);
    // __DSB(); __ISB();  // Ensure completion

    // uint32_t cache_reload_value = *ram_addr;  // Read from potentially reloaded cache

    // if (cache_reload_value == 0xCAFEBABE) {
    //     printf("✅ Cache invalidation successful, reloaded correct RAM value.\n");
    // } else {
    //     printf("❌ Cache invalidation failed, old cache value was used.\n");
    // }
}

/*!
 * @brief Main function
 */
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
    (void)PRINTF("\r\nHello World from the Primary Core!\r\n\n");
    test_cache_clean_invalidate();

    /* This section ensures the secondary core image is copied from flash location to the target RAM memory.
       It consists of several steps: image size calculation, image copying and cache invalidation (optional for some
       platforms/cases). These steps are not required on MCUXpresso IDE which copies the secondary core image to the
       target memory during startup automatically. */
    uint32_t core1_image_size;
    core1_image_size = hello_world_cm4_bin_len;
    (void)PRINTF("Copy Secondary core image to address: 0x%x, size: %d\r\n", (void *)(char *)CORE1_BOOT_ADDRESS,
                 core1_image_size);

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
    (void)PRINTF("Starting Secondary core.\r\n");
    (void)MCMGR_StartCore(kMCMGR_Core1, (void *)(char *)CORE1_BOOT_ADDRESS, 2, kMCMGR_Start_Synchronous);
    (void)PRINTF("The secondary core application has been started.\r\n");

    for (;;)
    {
    }
}
