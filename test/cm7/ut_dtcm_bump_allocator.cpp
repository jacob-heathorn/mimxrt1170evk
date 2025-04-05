#include "gtest/gtest.h"

#include "utils/dtcm_allocator.hpp"
#include <cstdio>

// NOTE: Base bump allocator class is already unit tested in the native build environment in the
// forge repository. Just verify the ranges here.
TEST(memory, dtcm_bump_allocator) {
  // Verify DTCM range.
  EXPECT_GT(reinterpret_cast<uint32_t>(DtcmAllocator::start()), 0x20000000U);
  EXPECT_EQ(reinterpret_cast<uint32_t>(DtcmAllocator::end()), 0x20040000U);
  EXPECT_GT(DtcmAllocator::size(), 0U); // Otherwise all DTCM was used in the linker script for applcation data.
}
