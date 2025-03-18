#include "gtest/gtest.h"
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

// TODO use stack? TODO verify cache in all memory locations?

// Define a test memory address in SRAM (must align with region size for MPU).
#define TEST_ADDR    ((uint32_t*)0x20200000)
// #define REGION_SIZE  MPU_REGION_SIZE_32B     // Using a 32-byte MPU region for test


TEST(CacheTest, Test1)
{
  // Enable D-Cache if not already enabled. TODO needed?
  SCB_EnableDCache();

  // Step 2: Write a new value to the memory location (update stays in cache)
  volatile uint32_t *ptr = TEST_ADDR;
  uint32_t old_value = *ptr;               // Read the initial value from RAM (likely loads into cache)
  uint32_t new_value = ~old_value;         // Invert bits of old value to get a distinct new value

  *ptr = new_value;  // Write new value - goes to D-cache (write-back mode keeps it in cache, not RAM)
  __DMB();           // Data memory barrier to ensure write completes to cache

  // (Optional) Verify CPU can read the new value from cache
  uint32_t cached_val = *ptr;
  EXPECT_EQ(cached_val, new_value);

  // Use a DMA read the memory location directly from RAM to confirm old value is still there.
  uint32_t ram_read_val = 0;
  DMA_ReadWord(ptr, &ram_read_val);

  // Expect old value when reading directly from ram with out the DMA
  EXPECT_EQ(ram_read_val, old_value);

  // Clean the D-Cache to write back the updated value to RAM
  SCB_CleanDCache_by_Addr((uint32_t*)ptr, sizeof(*ptr));  // Flush cache line for our address to RAM
  __DSB();  // Data sync barrier to ensure cache clean completes


  // Read RAM again to verify it now contains the updated value
  uint32_t ram_read_val_after = 0;
  DMA_ReadWord(ptr, &ram_read_val_after);  // Read from RAM via DMA again
  EXPECT_EQ(ram_read_val_after, new_value);
}
