#include <gtest/gtest.h>

#include "ftl/mutex.hpp"
#include "ftl/tx_thread.hpp"

#include "etl/delegate.h"
#include "etl/optional.h"
#include "tx_api.h"  // For tx_thread_sleep()
#include "utils/dtcm_allocator.hpp"

//------------------------------------------------------------------------------
// Basic Mutex Test
// - Verifies that try_lock(), lock(), and unlock() work correctly in a single-thread.
TEST(MutexTest, BasicLockUnlock)
{
    // Create a mutex
    ftl::Mutex mutex;

    // try_lock() on an unlocked mutex should succeed.
    EXPECT_TRUE(mutex.try_lock());
    mutex.unlock();

    // Manually call lock() and unlock()
    mutex.lock();
    mutex.unlock();
}

//------------------------------------------------------------------------------
// Concurrency Test
// - Creates two threads that each increment a shared counter.
//   The mutex ensures mutual exclusion so that the final value matches expectations.
// - It is assumed that ThreadX is already initialized in your test setup.
TEST(MutexTest, ConcurrencyTest)
{
    // Shared variables
    volatile int counter = 0;
    const int iterations = 1000;
    volatile bool thread1_done = false;
    volatile bool thread2_done = false;

    // Create a mutex (local to this test)
    ftl::Mutex mutex;

    // Define a lambda for thread work that repeatedly locks the mutex,
    // increments a counter, and then unlocks.
    auto thread1_lambda = [&counter, &mutex, &thread1_done, iterations]() {
        for (int i = 0; i < iterations; i++) {
            {
                ftl::LockGuard<ftl::Mutex> lock(mutex);
                counter++;
            }
        }
        thread1_done = true;
    };

    auto thread2_lambda = [&counter, &mutex, &thread2_done, iterations]() {
        for (int i = 0; i < iterations; i++) {
            {
                ftl::LockGuard<ftl::Mutex> lock(mutex);
                counter++;
            }
        }
        thread2_done = true;
    };

    // Allocate stacks for the two threads.
    // (Stack memory must remain valid until the threads finish.)
    static const size_t STACK_SIZE = 1024;
    void* stack1 = DtcmAllocator::instance().allocate(STACK_SIZE);
    void* stack2 = DtcmAllocator::instance().allocate(STACK_SIZE);

    // Create two threads.
    // Using TX_AUTO_START to launch them automatically.
    ftl::TxThread thread1("Thread1",
                          etl::delegate<void(void)>::create(thread1_lambda),
                          stack1,
                          STACK_SIZE,
                          4);

    ftl::TxThread thread2("Thread2",
                          etl::delegate<void(void)>::create(thread2_lambda),
                          stack2,
                          STACK_SIZE,
                          5);

    // Wait for both threads to complete by polling the done flags.
    // A timeout mechanism is provided to avoid an infinite loop.
    ULONG wait_count = 0;
    while (!(thread1_done && thread2_done) && wait_count < 10000) {
        tx_thread_sleep(1);  // Yield for one tick.
        wait_count++;
    }

    // Verify that both threads are done.
    EXPECT_TRUE(thread1_done);
    EXPECT_TRUE(thread2_done);

    // Check that the counter equals the total expected increments.
    EXPECT_EQ(counter, 2 * iterations);
}
