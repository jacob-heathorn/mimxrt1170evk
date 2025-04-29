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

#include "utils/dtcm_allocator.hpp"
#include "utils/ocram1_allocator.hpp"
#include "utils/ocram2_allocator.hpp"

// #define DMA0_BASE 0x40070000
#define DMA_CHANNEL 1  // Choose eDMA Channel 0
//#define DMAMUX_SOURCE_MEM_TO_MEM 63  // Special source for memory-to-memory transfer

void DMA_ReadWord(volatile uint32_t *src, uint32_t *dest) {
    auto &es = nDMA0::ES::ref();
    es.Reset();
    
    // Step 1: Enable DMAMUX for memory-to-memory transfer (channel 1)
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

TEST(mpu, verify_cache_clean)
{
  // Allocate a uint32_t in the write-back cacheable region (OCRAM1).
  volatile uint32_t *ptr = Ocram1Allocator::instance().allocate<uint32_t>();
  ASSERT_NE(ptr, nullptr);

  // === 1) Invalidate any old cache contents so that *ptr truly comes from RAM ===
  SCB_InvalidateDCache_by_Addr(const_cast<uint32_t*>(ptr), sizeof(*ptr));
  __DSB(); 
  __ISB();

  // Read the “old” value and cache it
  uint32_t old_value = *ptr;

  // === 2) Write a new value into that cache line (stays in D-cache, not RAM) ===
  uint32_t new_value = ~old_value;
  *ptr = new_value;
  __DSB();    // make sure the store completes to the cache

  // === 3) DMA-read directly from RAM; must still see old_value ===
  uint32_t ram_read_val = 0;
  DMA_ReadWord(ptr, &ram_read_val);
  EXPECT_EQ(ram_read_val, old_value);

  // === 4) Clean (flush) that cache line back to RAM ===
  SCB_CleanDCache_by_Addr(const_cast<uint32_t*>(ptr), sizeof(*ptr));
  __DSB();
  __ISB();

  // === 5) DMA-read again; now RAM must have new_value ===
  uint32_t ram_read_val_after = 0;
  DMA_ReadWord(ptr, &ram_read_val_after);
  EXPECT_EQ(ram_read_val_after, new_value);
}

TEST(mpu, verify_dtcm_non_cacheable)
{
    // Allocate one 32-bit word from DTCM
    volatile uint32_t *ptr = DtcmAllocator::instance().allocate<uint32_t>();
    ASSERT_NE(ptr, nullptr);

    // Pick a distinct value and write it
    const uint32_t new_value = 0xA5A5A5A5;
    *ptr = new_value; // Goes straight into DTCM, bypassing D-cache

    // Read it back via DMA (which also bypasses D-cache)
    uint32_t dma_read = 0;
    DMA_ReadWord(ptr, &dma_read);

    // Because DTCM is non-cacheable, DMA should see new_value immediately
    EXPECT_EQ(dma_read, new_value);
}

TEST(mpu, verify_ocram2_non_cacheable)
{
    // Allocate one 32-bit word from DTCM
    volatile uint32_t *ptr = Ocram2Allocator::instance().allocate<uint32_t>();
    ASSERT_NE(ptr, nullptr);

    // Pick a distinct value and write it
    const uint32_t new_value = 0xA5A5A5A5;
    *ptr = new_value; // Goes straight into OCRAM2, bypassing D-cache

    // Read it back via DMA (which also bypasses D-cache)
    uint32_t dma_read = 0;
    DMA_ReadWord(ptr, &dma_read);

    // Because OCRAM2 is non-cacheable, DMA should see new_value immediately
    EXPECT_EQ(dma_read, new_value);
}

static inline bool is_executable(uint32_t region)
{
    MPU->RNR = region;  // select MPU region
    // XN == 0 → executable, XN == 1 → execute-never
    uint32_t xn = (MPU->RASR >> MPU_RASR_XN_Pos) & 0x1;
    return (xn == 0);
}

inline bool is_write_back_cacheable(uint32_t region)
{
  // TEX=0, C=1, B=1 → normal write-back cacheable
  MPU->RNR = region;
  uint32_t rasr = MPU->RASR;
  uint32_t tex = (rasr >> MPU_RASR_TEX_Pos) & 0x7;
  uint32_t c   = (rasr >> MPU_RASR_C_Pos)   & 0x1;
  uint32_t b   = (rasr >> MPU_RASR_B_Pos)   & 0x1;
  return (tex == 0) && (c == 1) && (b == 1);
}

inline bool is_write_through_cacheable(uint32_t region)
{
  // TEX=0, C=1, B=0 → normal write-through cacheable
  MPU->RNR = region;
  uint32_t rasr = MPU->RASR;
  uint32_t tex = (rasr >> MPU_RASR_TEX_Pos) & 0x7;
  uint32_t c   = (rasr >> MPU_RASR_C_Pos)   & 0x1;
  uint32_t b   = (rasr >> MPU_RASR_B_Pos)   & 0x1;
  return (tex == 0) && (c == 1) && (b == 0);
}

inline bool is_strongly_ordered(uint32_t region)
{
  // TEX=0, C=0, B=0 → strongly-ordered
  MPU->RNR = region;
  uint32_t rasr = MPU->RASR;
  uint32_t tex = (rasr >> MPU_RASR_TEX_Pos) & 0x7;
  uint32_t c   = (rasr >> MPU_RASR_C_Pos)   & 0x1;
  uint32_t b   = (rasr >> MPU_RASR_B_Pos)   & 0x1;
  return (tex == 0) && (c == 0) && (b == 0);
}

inline bool is_cacheable(uint32_t region)
{
  MPU->RNR = region;
  uint32_t c = (MPU->RASR >> MPU_RASR_C_Pos) & 0x1;
  return c == 1;
}

inline bool is_bufferable(uint32_t region)
{
  MPU->RNR = region;
  uint32_t b = (MPU->RASR >> MPU_RASR_B_Pos) & 0x1;
  return b == 1;
}

inline uint32_t get_tex(uint32_t region)
{
  MPU->RNR = region;
  uint32_t tex = (MPU->RASR >> MPU_RASR_TEX_Pos) & 0x7;
  return tex;
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

TEST(mpu, verify_regions)
{
  EXPECT_TRUE(MPU->CTRL & MPU_CTRL_ENABLE_Msk);
  uint32_t region = 0;

  // Region 0. Default for the entire 4GB address space.
  region = 0;
  EXPECT_EQ(get_region_start_address(region), 0x00000000U);
  EXPECT_EQ(get_region_size_mb(region), 4096U);
  EXPECT_EQ(get_tex(region), 0U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eNoAccess);

  // Region 1. SEMC0 and SEMC1.
  region = 1;
  EXPECT_EQ(get_region_start_address(region), 0x80000000U);
  EXPECT_EQ(get_region_end_address(region), 0x9FFFFFFFU);
  EXPECT_EQ(get_region_size_mb(region), 512U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 2. FlexSPI2/ FlexSPI2 ciphertext (First 504MB)
  region = 2;
  EXPECT_EQ(get_region_start_address(region), 0x60000000U);
  EXPECT_EQ(get_region_size_mb(region), 512U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 3. Default first GB, for devices.
  region = 3;
  EXPECT_EQ(get_region_start_address(region), 0x00000000U);
  EXPECT_EQ(get_region_size_mb(region), 1024U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 4. 512KB ITCM region (FlexRAM).
  //
  // NOTE: The FlexRAM controller allocates 256KB to ITCM by default.
  region = 4;
  EXPECT_EQ(get_region_start_address(region), 0x00000000U);
  EXPECT_EQ(get_region_size_kb(region), 512U);
  EXPECT_TRUE(is_executable(region));
  EXPECT_EQ(get_tex(region), 0U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 5, 512KB DTCM region (FlexRAM).
  //
  // NOTE: The FlexRAM controller allocates 256KB to DTCM by default.
  region = 5;
  EXPECT_EQ(get_region_start_address(region), 0x20000000U);
  EXPECT_EQ(get_region_size_kb(region), 512U);
  EXPECT_FALSE(is_executable(region));
  EXPECT_EQ(get_tex(region), 0U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 6, OCRAM M4
  region = 6;
  EXPECT_EQ(get_region_start_address(region), 0x20200000U);
  EXPECT_EQ(get_region_end_address(region), 0x2023FFFFU);
  EXPECT_EQ(get_region_size_kb(region), 256U);
  EXPECT_TRUE(is_write_back_cacheable(region));
  EXPECT_FALSE(is_shareable(region));
  EXPECT_TRUE(is_cacheable(region));
  EXPECT_TRUE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 7, OCRAM1
  region = 7;
  EXPECT_EQ(get_region_start_address(region), 0x20240000U );
  EXPECT_EQ(get_region_end_address(region), 0x202BFFFFU);
  EXPECT_EQ(get_region_size_kb(region), 512U);
  EXPECT_TRUE(is_write_back_cacheable(region));
  EXPECT_FALSE(is_shareable(region));
  EXPECT_TRUE(is_cacheable(region));
  EXPECT_TRUE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 8, OCRAM2 (Non-cacheable OCRAM section)
  region = 8;
  EXPECT_EQ(get_region_start_address(region), 0x202C0000U );
  EXPECT_EQ(get_region_end_address(region), 0x2033FFFFU);
  EXPECT_EQ(get_region_size_kb(region), 512U);
  EXPECT_EQ(get_tex(region), 1U);
  EXPECT_TRUE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 9, external flash.
  region = 9;
  EXPECT_EQ(get_region_start_address(region), 0x30000000U);
  EXPECT_EQ(get_region_size_mb(region), 16U);
  EXPECT_EQ(get_tex(region), 0U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_TRUE(is_cacheable(region));
  EXPECT_TRUE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eReadOnly);

  // Region 10, (Still available)

  // Region 11, AIPS (Advanced peripheral bus system)
  region = 11;
  EXPECT_EQ(get_region_start_address(region), 0x40000000U);
  EXPECT_EQ(get_region_end_address(region), 0x40FFFFFFU);
  EXPECT_EQ(get_region_size_mb(region), 16U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 12, SIM_DISP and SIM_M configuration ports.
  region = 12;
  EXPECT_EQ(get_region_start_address(region), 0x41000000U);
  EXPECT_EQ(get_region_size_mb(region), 2U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 13, SIM_M7 configuration port.
  region = 13;
  EXPECT_EQ(get_region_start_address(region), 0x41400000U);
  EXPECT_EQ(get_region_size_mb(region), 1U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 14, GPU2D (Peripheral, AHB) and CDOG (Peripheral, AHB).
  region = 14;
  EXPECT_EQ(get_region_start_address(region), 0x41800000U);
  EXPECT_EQ(get_region_size_mb(region), 2U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);

  // Region 15, AIPS M7 (Peripheral, Platform)
  region = 15;
  EXPECT_EQ(get_region_start_address(region), 0x42000000U);
  EXPECT_EQ(get_region_size_mb(region), 1U);
  EXPECT_EQ(get_tex(region), 2U);
  EXPECT_FALSE(is_shareable(region));
  EXPECT_FALSE(is_cacheable(region));
  EXPECT_FALSE(is_bufferable(region));
  EXPECT_EQ(get_memory_access(region), eMemoryAccess::eFullAccess);
}
