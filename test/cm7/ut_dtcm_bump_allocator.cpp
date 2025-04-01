#include "gtest/gtest.h"

#include "utils/dtcm_allocator.hpp"
#include <cstdio>

TEST(memory, dtcm_bump_allocator) {
  // Verify the assumed DTCM size is correct against the ranges from the linker script.
  EXPECT_EQ(kDtcmSize,
    static_cast<uint32_t>(__dtcm_high_end__ - __dtcm_high_start__));
  
  auto dtcm = DtcmAllocator();

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
  void* p_fail = dtcm.alloc(256 * 1024);  // should fail
  EXPECT_EQ(p_fail, nullptr);

  // Verify Reset.
  dtcm.reset();
  p1 = dtcm.alloc(128);
  EXPECT_NE(p1, nullptr);
  EXPECT_EQ(reinterpret_cast<uint32_t>(p1), 0x20040000U);

  // Final reset to leave in a clean state.
  dtcm.reset();
}
