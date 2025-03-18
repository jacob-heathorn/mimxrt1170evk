

#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"
#include <cstdio>

#include "registers/handwritten/dma0.hpp"
#include "registers/codegen/dmamux0.hpp"

// #define DMA0_BASE 0x40070000
#define DMA_CHANNEL 1  // Choose eDMA Channel 0
//#define DMAMUX_SOURCE_MEM_TO_MEM 63  // Special source for memory-to-memory transfer

void DMA_ReadWord(volatile uint32_t *src, uint32_t *dest) {
    auto &es = nDMA0::ES::ref();
    es.Reset();
    
    // Step 1: Enable DMAMUX for memory-to-memory transfer (channel 0)
    auto &dmamux = nDMAMUX0::CHCFG_1::ref();
    //dmamux.bits.SOURCE = DMAMUX_SOURCE_MEM_TO_MEM;  // Memory-to-memory transfer
    dmamux.bits.ENBL = nDMAMUX0::CHCFG_1::eENBL::eENBL_1;

    // Step 2: Configure the eDMA TCD (Transfer Control Descriptor) for channel 0
    auto &tcd_saddr = nDMA0::TCD_SADDR<DMA_CHANNEL>::ref();
    auto &tcd_daddr = nDMA0::TCD_DADDR<DMA_CHANNEL>::ref();
    auto &nbytes = nDMA0::TCD_NBYTES_MLOFFNO<DMA_CHANNEL>::ref();
    auto &tcd_attr = nDMA0::TCD_ATTR<DMA_CHANNEL>::ref();
    auto &tcd_citer = nDMA0::TCD_CITER_ELINKNO<DMA_CHANNEL>::ref();
    auto &tcd_biter = nDMA0::TCD_BITER_ELINKNO<DMA_CHANNEL>::ref();
    auto &tcd_csr = nDMA0::TCD_CSR<DMA_CHANNEL>::ref();
    auto &doff = nDMA0::TCD_DOFF<DMA_CHANNEL>::ref();
    auto &soff = nDMA0::TCD_SOFF<DMA_CHANNEL>::ref();

    // Source & Destination Addresses
    tcd_saddr.value = (uint32_t)src;  // Read from this address (RAM location)
    tcd_daddr.value = (uint32_t)dest; // Store the value here

    // Source and destination offsets
    soff.bits.SOFF = 4;  // Increment source by 1 byte
    doff.bits.DOFF = 4;  // No dest increment

    // Configure transfer size
    nbytes.bits.DMLOE = 0;
    nbytes.bits.SMLOE = 0;
    nbytes.value = 4;  // Transfer 4 bytes (1 word)

    // Configure source & destination attributes
    tcd_attr.bits.SSIZE = 2;  // 2 = 32-bit transfer size (4 bytes)
    tcd_attr.bits.DSIZE = 2;  // 2 = 32-bit transfer size (4 bytes)

    // Configure loop counters
    tcd_citer.bits.CITER = 1;  // Only 1 transfer needed
    tcd_biter.bits.BITER = 1;  // Total number of iterations

    // Enable DMA request and start transfer
    auto &erq = nDMA0::ERQ::ref();
    erq.bits.ERQ1 = nDMA0::ERQ::eERQ1::eENABLE;  // Enable eDMA Channel 1

    auto &serq = nDMA0::SERQ::ref();
    serq.bits.SERQ = DMA_CHANNEL;  // Start transfer

    nDMA0::SSRT::ref().bits.SSRT = 1; // Trigger DMA

    // Wait for DMA transfer completion
    // int x = 5;
    // while (!(x == 1'000'000)) {
    //     ++x;
    // }
    while (!(tcd_csr.bits.DONE)) {}  // Wait until transfer is done

    // Clear Done flag
    tcd_csr.bits.DONE = 1;

    // Disable DMA channel to avoid unwanted future transfers
    erq.bits.ERQ1 = nDMA0::ERQ::eERQ1::eDISABLE;
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
    // extern void DMA_ReadWord(volatile uint32_t *src, uint32_t *dest);  // (User-provided DMA function)
    DMA_ReadWord(ptr, &ram_read_val);

    
    // Expect old value when reading directly from ram with out the DMA
    if (ram_read_val == old_value) {
        printf("SUCCESS - Memory still has old value (cache write not flushed yet).\r\n");
    } else {
        printf("FAIL - Memory value changed (0x%08lX), expected old 0x%08lX.\n", ram_read_val, old_value);
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

int main(void)
{
    /* Print the initial banner from Primary core */
    printf("\r\nRunning cache clean test!\r\n");

    // uint32_t src = 5;
    // uint32_t dest = 0;
    // DMA_ReadWord(&src, &dest);

    // printf("src: %ld, dest: %ld\r\n", src, dest);
    CacheWriteBackTest();


    for (;;)
    {
    }
}
