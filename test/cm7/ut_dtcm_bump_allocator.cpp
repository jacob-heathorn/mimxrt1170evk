#include "gtest/gtest.h"

#include "utils/bump_allocator.hpp"

TEST(memory, dtcm_bump_allocator) {
  EXPECT_TRUE(true);
  EXPECT_FALSE(false);

  EXPECT_TRUE(1);
  EXPECT_TRUE(1203492);
  EXPECT_TRUE(-1);
  EXPECT_TRUE(0.1f);

  EXPECT_FALSE(0);
  EXPECT_FALSE(0.0f);
  EXPECT_FALSE(-0.0f);
}
