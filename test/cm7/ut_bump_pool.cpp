#include <gtest/gtest.h>
#include <atomic>

#include "ftl/mutex.hpp"
#include "ftl/tx_thread.hpp"
#include "utils/bump_pool.hpp"
#include "utils/dtcm_allocator.hpp"
#include "etl/delegate.h"

// A helper type to count constructions and destructions
struct CountingType {
  static std::atomic<int> ctor_count;
  static std::atomic<int> dtor_count;
  int val;

  CountingType(int v = 0) : val(v) {
    ++ctor_count;
  }

  ~CountingType() {
    ++dtor_count;
  }
};

std::atomic<int> CountingType::ctor_count{0};
std::atomic<int> CountingType::dtor_count{0};

// Test that acquire returns a non-null pointer
TEST(BumpPoolTest, AcquireReturnsNonNull) {
  auto &dtcm = DtcmAllocator::instance();               
  BumpPool<int> pool(dtcm);
  int* p = pool.acquire();
  EXPECT_NE(p, nullptr);
}

// Test that releasing a null pointer does nothing
TEST(BumpPoolTest, ReleaseNullIsNoOp) {
  auto &dtcm = DtcmAllocator::instance(); 
  BumpPool<int> pool(dtcm);
  pool.release(nullptr);
}

// Test that constructors and destructors of T are called
TEST(BumpPoolCountingType, ConstructorDestructorCount) {
  auto &dtcm = DtcmAllocator::instance(); 
  BumpPool<CountingType> pool(dtcm, 0);
  
  // Reset counters
  CountingType::ctor_count = 0;
  CountingType::dtor_count = 0;

  // Acquire with argument and check construction
  CountingType* obj = pool.acquire(42);
  EXPECT_EQ(CountingType::ctor_count.load(), 1);
  EXPECT_EQ(obj->val, 42);

  // Release and check destruction
  pool.release(obj);
  EXPECT_EQ(CountingType::dtor_count.load(), 1);
}

// Test that released memory is reused
TEST(BumpPoolTest, ReuseMemoryAfterRelease) {
  auto &dtcm = DtcmAllocator::instance(); 
  BumpPool<int> pool(dtcm, 1);

  int* first = pool.acquire();
  pool.release(first);
  int* second = pool.acquire();

  EXPECT_EQ(second, first);
}

// // TOOD move inside
#define STACK_SIZE 1024
uint8_t thread_1_stack[STACK_SIZE];
uint8_t thread_2_stack[STACK_SIZE];

// Stress test thread-safety: concurrent acquire/release using ThreadX with non-capturing lambdas
TEST(BumpPoolThreadSafety, AcquireReleaseConcurrently) {
    auto &dtcm = DtcmAllocator::instance();
    BumpPool<CountingType> pool(dtcm, 2);

    // Reset counters
    CountingType::ctor_count = 0;
    CountingType::dtor_count = 0;

    const int iterations = 1000;
    // Static globals for lambda context
    static BumpPool<CountingType>* poolPtr;
    static int iterCount;
    static volatile bool done1 = false;
    static volatile bool done2 = false;

    poolPtr = &pool;
    iterCount = iterations;
    done1 = false;
    done2 = false;

    // Non-capturing lambdas for each thread
    auto lambda1 = []() {
        for (int i = 0; i < iterCount; ++i) {
            auto* obj = poolPtr->acquire(i);
            poolPtr->release(obj);
        }
        done1 = true;
    };
    auto lambda2 = []() {
        for (int i = 0; i < iterCount; ++i) {
            auto* obj = poolPtr->acquire(i);
            poolPtr->release(obj);
        }
        done2 = true;
    };

    // Create delegates
    auto del1 = etl::delegate<void(void)>::create(lambda1);
    auto del2 = etl::delegate<void(void)>::create(lambda2);

    // Spawn two ThreadX threads running the lambdas
    ftl::TxThread t1("Thread1", del1, thread_1_stack, STACK_SIZE, 5);
    ftl::TxThread t2("Thread2", del2, thread_2_stack, STACK_SIZE, 6);

    // Wait for both threads to complete
    ULONG wait_count = 0;
    while (!(done1 && done2) && wait_count < 10000) {
        tx_thread_sleep(1);
        ++wait_count;
    }
    EXPECT_TRUE(done1);
    EXPECT_TRUE(done2);

    EXPECT_EQ(CountingType::ctor_count.load(), 2 * iterations);
    EXPECT_EQ(CountingType::dtor_count.load(), 2 * iterations);
}
