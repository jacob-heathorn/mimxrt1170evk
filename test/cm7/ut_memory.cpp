#include <gtest/gtest.h>

#include <atomic>
#include <thread>
#include <memory>

#include "ftl/bump_allocator.hpp"
#include "ftl/bump_pool.hpp"
#include "utils/dtcm_allocator.hpp"

#include <cstdio> 

//------------------------------------------------------------------------------
// Test automatic release via unique_ptr custom deleter
//------------------------------------------------------------------------------
TEST(BumpPoolTest, UniquePtrAutomaticRelease) {
  auto &dtcm = DtcmAllocator::instance();  
  BumpPool<int> pool(dtcm, /*initialSize=*/1);

  // Initially exactly one free slot, none in use
  EXPECT_EQ(pool.FreeSize(), 1u);
  EXPECT_EQ(pool.UsedSize(), 0u);

  {
    // Create a unique_ptr that will call pool.release(...) when destroyed
    auto deleter = [&](int* p){ pool.release(p); };
    std::unique_ptr<int, decltype(deleter)> ptr(pool.acquire(123), deleter);

    // The pointer holds our value, and the pool is now empty/1 in use
    EXPECT_EQ(*ptr, 123);
    EXPECT_EQ(pool.FreeSize(), 0u);
    EXPECT_EQ(pool.UsedSize(), 1u);

    // Exiting this scope will destroy ptr and call pool.release(ptr.get())
  }

  // After scope exit, the slot is returned automatically
  EXPECT_EQ(pool.FreeSize(), 1u);
  EXPECT_EQ(pool.UsedSize(), 0u);
}
