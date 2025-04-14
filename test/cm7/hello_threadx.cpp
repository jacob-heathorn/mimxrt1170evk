#include <stdio.h>
#include <stdint.h>
#include "tx_api.h"
#include "ftl/mutex.hpp"
#include "ftl/tx_thread.hpp"

// Increase stack size to avoid overflows.
#define STACK_SIZE 1024

// Preallocated stack memory for both threads; we use alignas(8) to ensure proper alignment.
alignas(8) uint8_t thread_1_stack[STACK_SIZE];
alignas(8) uint8_t thread_2_stack[STACK_SIZE];

// Shared mutex instance
ftl::Mutex shared_mutex;

// Thread entry function for Thread 1.
// Signature: void(void*)
// (The argument is unused here.)
void thread_1_entry() {
  printf("Thread 1: Starting\n");
  while (1) {
    { // Begin critical section
      ftl::LockGuard<ftl::Mutex> lock(shared_mutex);
      printf("Thread 1: Hi\n");
      tx_thread_sleep(50);  // Sleep for 50 tick units to simulate work
      printf("Thread 1: Done\n");
    }
    tx_thread_sleep(100);   // Sleep to yield time to other tasks
  }
}

// Thread entry function for Thread 2.
void thread_2_entry() {
  printf("Thread 2: Starting\n");
  while (1) {
    { // Begin critical section
      ftl::LockGuard<ftl::Mutex> lock(shared_mutex);
      printf("Thread 2: Hello\n");
      tx_thread_sleep(75);
      printf("Thread 2: Finished\n");
    }
    tx_thread_sleep(150);
  }
}

// The ThreadX application definition function.
// This is called by ThreadX when the kernel starts.
extern "C" void tx_application_define(void* first_unused_memory) {
  (void)first_unused_memory;  // Unused parameter

  // Create two static TxThread objects.
  // The TxThread constructor internally calls tx_thread_create() using the supplied stack,
  // thread priority, preemption threshold, time slice, etc.
  static ftl::TxThread thread1(
      "Thread 1",            // Thread name (converted to char* as required by ThreadX)
      thread_1_entry,        // Entry function matching void(void*)
      // nullptr,               // User argument (none in this case)
      thread_1_stack,        // Pointer to preallocated stack memory
      STACK_SIZE,            // Stack size in bytes
      1,                     // Priority (1 = highest)
      1,                     // Preemption threshold (same as priority in this case)
      TX_NO_TIME_SLICE,      // No time slicing
      TX_AUTO_START          // Auto-start the thread upon creation
  );

  static ftl::TxThread thread2(
      "Thread 2",
      thread_2_entry,
      // nullptr,
      thread_2_stack,
      STACK_SIZE,
      2,                     // Lower priority than Thread 1
      2,                     // Preemption threshold
      TX_NO_TIME_SLICE,
      TX_AUTO_START
  );
}

// main() simply starts the ThreadX kernel which never returns.
int main() {
  tx_kernel_enter();
  return 0;
}
