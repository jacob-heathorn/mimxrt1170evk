#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/iomuxc.hpp"
#include "registers/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"
#include <cstdio>

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

// Define a test memory address in SRAM (must align with region size for MPU).
#define TEST_ADDR    ((uint32_t*)0x20200000)
// #define REGION_SIZE  MPU_REGION_SIZE_32B     // Using a 32-byte MPU region for test

void CacheWriteBackTest(void) {
    // // Step 1: Configure the MPU for write-back cacheable memory at TEST_ADDR
    // MPU_Region_InitTypeDef MPU_InitStruct;
    // ARM_MPU_Disable();  // Disable MPU to configure regions

    // MPU_InitStruct.Enable           = MPU_REGION_ENABLE;
    // MPU_InitStruct.BaseAddress      = (uint32_t)TEST_ADDR;
    // MPU_InitStruct.Size             = REGION_SIZE;
    // MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
    // MPU_InitStruct.IsBufferable     = MPU_ACCESS_NOT_BUFFERABLE;
    // MPU_InitStruct.IsCacheable      = MPU_ACCESS_CACHEABLE;     // Enable caching
    // MPU_InitStruct.IsShareable      = MPU_ACCESS_NOT_SHAREABLE; // Non-shareable (allows D-cache use)
    // MPU_InitStruct.TypeExtField     = MPU_TEX_LEVEL1;  // TEX level for write-back (WBWA inner policy)
    // MPU_InitStruct.SubRegionDisable = 0x00;
    // MPU_InitStruct.DisableExec      = MPU_INSTRUCTION_ACCESS_DISABLE; // Data only region

    // ARM_MPU_ConfigRegion(&MPU_InitStruct);
    // ARM_MPU_Enable(MPU_PRIVILEGED_DEFAULT);  // Enable MPU (privileged access uses default map for other regions)

    // Enable D-Cache if not already enabled
    SCB_EnableDCache();

    // printf("MPU configured 0x%08X size %u as write-back cacheable. D-Cache enabled.\n", 
    //        (unsigned)TEST_ADDR, 1 << (REGION_SIZE + 1));

    // Step 2: Write a new value to the memory location (update stays in cache)
    volatile uint32_t *ptr = TEST_ADDR;
    uint32_t old_value = *ptr;               // Read the initial value from RAM (likely loads into cache)
    uint32_t new_value = ~old_value;         // Invert bits of old value to get a distinct new value

    *ptr = new_value;  // Write new value - goes to D-cache (write-back mode keeps it in cache, not RAM)
    __DMB();           // Data memory barrier to ensure write completes to cache

    // (Optional) Verify CPU can read the new value from cache
    uint32_t cached_val = *ptr;
    if (cached_val == new_value) {
        printf("Step 2: Wrote new value 0x%08lX to *ptr (cache updated, RAM not yet updated).\n", cached_val);
    } else {
        printf("Step 2: FAIL - Write to cache did not stick (read back 0x%08lX, expected 0x%08lX).\n", 
               cached_val, new_value);
    }

    // Step 3: Read the memory location directly from RAM to confirm old value is still there
    uint32_t ram_read_val = 0;
    // Use DMA to read the value from RAM, bypassing the CPU cache
    // (Configure a DMA channel for memory-to-memory transfer: source=ptr, dest=&ram_read_val)
    // Pseudocode for DMA setup and transfer (implementation depends on platform):
    // DMA_Init(...source = ptr, dest = &ram_read_val, length = sizeof(ram_read_val)...);
    // DMA_Start();
    // DMA_WaitForCompletion();
    // For simplicity in this pseudo-test, we'll assume a function DMA_ReadWord(src, dest) that does this:
    extern void DMA_ReadWord(volatile uint32_t *src, uint32_t *dest);  // (User-provided DMA function)
    DMA_ReadWord(ptr, &ram_read_val);

    printf("Step 3: RAM content before cache clean = 0x%08lX (expected old value 0x%08lX)\n",
           ram_read_val, old_value);
    if (ram_read_val == old_value) {
        printf("        SUCCESS - Memory still has old value (cache write not flushed yet).\n");
    } else {
        printf("        FAIL - Memory value changed (0x%08lX), expected old 0x%08lX.\n", ram_read_val, old_value);
    }

    // Step 4: Clean the D-Cache to write back the updated value to RAM
    SCB_CleanDCache_by_Addr((uint32_t*)ptr, sizeof(*ptr));  // Flush cache line for our address to RAM
    __DSB();  // Data sync barrier to ensure cache clean completes

    printf("Step 4: D-Cache cleaned for address 0x%08X (cache flush to RAM done).\n", (unsigned)ptr);

    // Step 5: Read RAM again to verify it now contains the updated value
    uint32_t ram_read_val_after = 0;
    DMA_ReadWord(ptr, &ram_read_val_after);  // Read from RAM via DMA again

    printf("Step 5: RAM content after cache clean = 0x%08lX (expected new value 0x%08lX)\n",
           ram_read_val_after, new_value);
    if (ram_read_val_after == new_value) {
        printf("        SUCCESS - Memory updated with new value after cache clean.\n");
    } else {
        printf("        FAIL - Memory still has old value 0x%08lX (cache clean did not work!).\n", ram_read_val_after);
    }

    // (Step 6: Debug output has been provided at each step above)
}
