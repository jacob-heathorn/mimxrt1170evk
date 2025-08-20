#include <gtest/gtest.h>


#include "ftl/allocator/obj_allocator.hpp"
#include "ftl/allocator/bump_pool_obj_strategy.hpp"
#include "utils/dtcm_allocator.hpp"


//------------------------------------------------------------------------------
// Test automatic release via unique_ptr with new allocator API
//------------------------------------------------------------------------------
TEST(BumpPoolTest, UniquePtrAutomaticRelease) {
  auto &dtcm = DtcmAllocator::instance();  
  
  // Create a bump pool strategy for int objects
  ftl::allocator::BumpPoolObjStrategy<int> strategy(dtcm);
  
  // Create an object allocator that manages int objects
  ftl::allocator::ObjAllocator<int> allocator(strategy);

  {
    // Create an int wrapped in unique_ptr
    auto ptr = allocator.make_unique(123);
    
    // The pointer holds our value
    EXPECT_EQ(*ptr, 123);
    
    // Exiting this scope will destroy ptr and automatically deallocate
  }
  
  // After scope exit, we can allocate again (object was returned to pool)
  auto ptr2 = allocator.make_unique(456);
  EXPECT_EQ(*ptr2, 456);
}
