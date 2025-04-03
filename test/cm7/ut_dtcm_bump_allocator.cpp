#include "gtest/gtest.h"

#include "utils/dtcm_allocator.hpp"
#include <cstdio>

TEST(memory, dtcm_bump_allocator) {

  // Verify DTCM range.
  EXPECT_GT(reinterpret_cast<uint32_t>(DtcmAllocator::start()), 0x20000000U);
  EXPECT_EQ(reinterpret_cast<uint32_t>(DtcmAllocator::end()), 0x20040000U);
  EXPECT_GT(DtcmAllocator::size(), 0U); // Otherwise all DTCM was used in the linker script for applcation data.
  
  DtcmAllocator& dtcm = DtcmAllocator::instance();
  void* p1 = dtcm.allocate(128);
  void* p2 = dtcm.allocate(64);
  void* p3 = dtcm.allocate(16, 32);  // explicit alignment

  EXPECT_NE(p1, nullptr);
  EXPECT_NE(p2, nullptr);
  EXPECT_NE(p3, nullptr);

  uintptr_t addr3 = reinterpret_cast<uintptr_t>(p3);
  EXPECT_EQ(addr3 % 32, 0U);  // Ensure 32-byte alignment

  // Allocate too much.
  void* p_fail = dtcm.allocate(256 * 1024);  // should fail
  EXPECT_EQ(p_fail, nullptr);

  // Verify Reset, goes back dtcm start.
  dtcm.reset();
  void* p1_after_reset = dtcm.allocate(128);
  EXPECT_EQ(p1, p1_after_reset);

  // Final reset to leave in a clean state.
  dtcm.reset();
}
