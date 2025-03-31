#include "gtest/gtest.h"

#include "utils/bump_allocator.hpp"
#include <cstdio>

// TODO move to dtcm bump allocator cpp.
__attribute__((section(".m_dtcm_high")))
uint8_t dtcm_bump_region[64 * 1024];

TEST(memory, dtcm_bump_allocator) {
  constexpr size_t region_size = 64 * 1024;
  BumpAllocator dtcm(dtcm_bump_region, region_size);

  void* p1 = dtcm.alloc(128);
  void* p2 = dtcm.alloc(64);
  void* p3 = dtcm.alloc(16, 32);  // explicit alignment

  EXPECT_NE(p1, nullptr);
  EXPECT_EQ(reinterpret_cast<uint32_t>(p1), 0x20040000U);
  EXPECT_NE(p2, nullptr);
  EXPECT_NE(p3, nullptr);

  uintptr_t addr3 = reinterpret_cast<uintptr_t>(p3);
  EXPECT_EQ(addr3 % 32, 0U);  // Ensure 32-byte alignment

  // Allocate too much.
  void* p_fail = dtcm.alloc(region_size);  // should fail
  EXPECT_EQ(p_fail, nullptr);
}
