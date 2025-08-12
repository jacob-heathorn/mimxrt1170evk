#include <gtest/gtest.h>

#include <atomic>
#include <thread>
#include <memory>

#include "ftl/allocator/bump_allocator.hpp"
#include "ftl/allocator/obj_allocator.hpp"
#include "ftl/allocator/bump_pool_strategy.hpp"
#include "ftl/allocator/unique_obj_allocator.hpp"
#include "utils/dtcm_allocator.hpp"

#include <cstdio> 

//------------------------------------------------------------------------------
// Test automatic release via unique_ptr with new allocator API
//------------------------------------------------------------------------------
TEST(BumpPoolTest, UniquePtrAutomaticRelease) {
  auto &dtcm = DtcmAllocator::instance();  
  
  // Create a bump pool strategy for int objects
  ftl::allocator::BumpPoolObjStrategy<int> strategy(dtcm);
  
  // Create a unique object allocator that manages int objects
  ftl::allocator::UniqueObjAllocator<int> allocator(strategy);

  {
    // Acquire an int from the allocator wrapped in unique_ptr
    auto ptr = allocator.acquire(123);
    
    // The pointer holds our value
    EXPECT_EQ(*ptr, 123);
    
    // Exiting this scope will destroy ptr and automatically deallocate
  }
  
  // After scope exit, we can allocate again (object was returned to pool)
  auto ptr2 = allocator.acquire(456);
  EXPECT_EQ(*ptr2, 456);
}
