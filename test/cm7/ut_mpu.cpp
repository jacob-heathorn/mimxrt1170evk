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

// Define a test memory address in SRAM (must align with region size for MPU).
#define TEST_ADDR    ((uint32_t*)0x20200000)

TEST(mpu, varify_cache_clean)
{
  volatile uint32_t *ptr = TEST_ADDR;
  
  // Write a new value to the memory location (update stays in cache)
  uint32_t old_value = *ptr; // Read the initial value from RAM (likely loads into cache)
  uint32_t new_value = ~old_value; // Invert bits of old value to get a distinct new value

  *ptr = new_value; // Write new value - goes to D-cache (write-back mode keeps it in cache, not RAM)
  __DMB(); // Data memory barrier to ensure write completes to cache

  // Use a DMA to read the memory location directly from RAM to confirm old value is still there.
  uint32_t ram_read_val = 0;
  DMA_ReadWord((uint32_t *)ptr, &ram_read_val);
  EXPECT_EQ(ram_read_val, old_value);

  // Clean the D-Cache to write back the updated value to RAM
  SCB_CleanDCache_by_Addr(ptr, sizeof(ptr)); // Flush cache line for our address to RAM
  __DSB();  // Data sync barrier to ensure cache clean completes

  // Read RAM again to verify it now contains the updated value.
  uint32_t ram_read_val_after = 0;
  DMA_ReadWord(ptr, &ram_read_val_after); // Read from RAM via DMA again
  EXPECT_EQ(ram_read_val_after, new_value);
}

inline bool is_write_back_cacheable(uint32_t region)
{
  MPU->RNR = region;
  uint32_t tex = (MPU->RASR >> MPU_RASR_TEX_Pos) & 0x7;
  uint32_t c = (MPU->RASR >> MPU_RASR_C_Pos) & 0x1;
  return tex == 1 && c == 1;
}

inline bool is_cacheable(uint32_t region)
{
  MPU->RNR = region;
  uint32_t c = (MPU->RASR >> MPU_RASR_C_Pos) & 0x1;
  return c == 0;
}

inline bool is_bufferable(uint32_t region)
{
  MPU->RNR = region;
  uint32_t b = (MPU->RASR >> MPU_RASR_B_Pos) & 0x1;
  return b == 1;
}

inline uint32_t get_region_start_address(uint32_t region)
{
  MPU->RNR = region;
  return MPU->RBAR & 0xFFFFFFE0;
}

inline uint32_t get_region_end_address(uint32_t region)
{
    // Select the region
    MPU->RNR = region;

    // Extract base address (RBAR) - Aligns to 32 bytes
    uint32_t base_addr = MPU->RBAR & 0xFFFFFFE0;

    // Extract region size (RASR): Bits 1-5 store (Size encoding - 1)
    uint32_t size_encoding = (MPU->RASR >> 1) & 0x1F;

    // Compute region size: 2^(size_encoding + 1)
    uint32_t region_size = (1 << (size_encoding + 1));

    // Compute end address
    return base_addr + region_size - 1;
}

inline uint32_t get_region_size_kb(uint32_t region)
{
  MPU->RNR = region;
  uint32_t size = (MPU->RASR >> 1) & 0x1F;  // Extract region size field (bits 5:1)
  // Use uint64_t to prevent overflow
  uint64_t region_size_bytes = (uint64_t)1 << (size + 1);
  uint32_t region_size_kb = region_size_bytes / 1024;  // Convert bytes to KB
  return region_size_kb;
}
inline uint32_t get_region_size_mb(uint32_t region)
{
  return get_region_size_kb(region) / 1024;
}

inline bool is_shareable(uint32_t region) {
  MPU->RNR = region; // Select the region
  uint32_t s = (MPU->RASR >> MPU_RASR_S_Pos) & 0x1; // Extract S bit (bit 18)
  return s == 1; // True if shareable
}

enum class eMemoryAccess : uint32_t {
  eNoAccess      = 0b000,  // No access (privileged and unprivileged)
  ePrivRW        = 0b001,  // Privileged Read/Write, No access for unprivileged
  ePrivRW_UnprivR = 0b010, // Privileged Read/Write, Unprivileged Read-only
  eFullAccess    = 0b011,  // Full Read/Write access for both privileged & unprivileged
  eReserved1     = 0b100,  // Reserved (should not be used)
  ePrivRO        = 0b101,  // Privileged Read-only, No access for unprivileged
  eReadOnly      = 0b110,  // Read-only for both privileged and unprivileged
  eReserved2     = 0b111   // Reserved (should not be used)
};

inline eMemoryAccess get_memory_access(uint32_t region) 
{
    // Select the region to read its configuration
    MPU->RNR = region;

    // Extract access permission bits from the RASR register
    uint32_t ap_bits = (MPU->RASR >> 24) & 0b111; // Bits [26:24] hold the access permissions

    // Convert to eMemoryAccess enum
    switch (ap_bits) {
        case 0b000: return eMemoryAccess::eNoAccess;
        case 0b001: return eMemoryAccess::ePrivRW;
        case 0b010: return eMemoryAccess::ePrivRW_UnprivR;
        case 0b011: return eMemoryAccess::eFullAccess;
        case 0b101: return eMemoryAccess::ePrivRO;
        case 0b110: return eMemoryAccess::eReadOnly;
        default:    return eMemoryAccess::eReserved1; // Reserved cases
    }
}

// TODO finish
TEST(mpu, verify_regions)
{
  EXPECT_TRUE(MPU->CTRL & MPU_CTRL_ENABLE_Msk);
  uint32_t region = 0;

  // Region 0. The entire 4GB address space, default.
  region = 0;
  EXPECT_EQ(get_region_start_address(region), 0x00000000U);
  EXPECT_EQ(get_region_size_mb(region), 4096U);
  EXPECT_TRUE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_FALSE(is_shareable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eNoAccess);
  
  // Region 6, 1st MB of OCRAM.
  region = 6;
  EXPECT_EQ(get_region_start_address(region), 0x20200000U);
  EXPECT_EQ(get_region_size_kb(region), 1024U);
  EXPECT_TRUE(is_write_back_cacheable(region));
  EXPECT_TRUE(is_bufferable(region));
  EXPECT_FALSE(is_shareable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // // Region 7
  // EXPECT_TRUE(is_write_back_cacheable(7));
  // EXPECT_EQ(get_region_address(7), 0x20300000U);
  // EXPECT_EQ(get_region_size_kb(7), 512U);
}
