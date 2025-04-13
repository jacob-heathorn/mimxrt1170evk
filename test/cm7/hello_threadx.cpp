#include <stdio.h>
#include <stdint.h>
#include "tx_api.h"
#include "ftl/mutex.hpp"
#include "ftl/thread.hpp"  // ftl::thread implemented with ThreadX underneath

#define STACK_SIZE 4096  // Increased to avoid stack overflow

// Preallocated stack memory for the threads (with proper alignment)
alignas(8) uint8_t thread_1_stack[STACK_SIZE];
alignas(8) uint8_t thread_2_stack[STACK_SIZE];

// Shared mutex instance
ftl::mutex shared_mutex;

// Thread entry functions -- matching signature: void function(void* arg)
void thread_1_entry(void* arg) {
  (void)arg;  // Unused argument
  printf("Thread 1: Starting\n");
  while (1) {
    { // Enter critical section
      ftl::lock_guard<ftl::mutex> lock(shared_mutex);
      printf("Thread 1: Hi\n");
      tx_thread_sleep(50);  // Sleep for 50 tick units
      printf("Thread 1: Done\n");
    } // lock_guard unlocks the mutex automatically here
    tx_thread_sleep(100); // Sleep to yield time to other tasks
  }
}

void thread_2_entry(void* arg) {
  (void)arg;
  printf("Thread 2: Starting\n");
  while (1) {
    { // Enter critical section
      ftl::lock_guard<ftl::mutex> lock(shared_mutex);
      printf("Thread 2: Hello\n");
      tx_thread_sleep(75);
      printf("Thread 2: Finished\n");
    }
    tx_thread_sleep(150);
  }
}

// The ThreadX application define function is called by the ThreadX kernel at startup.
extern "C" void tx_application_define(void* first_unused_memory) {
  (void)first_unused_memory;  // Unused parameter

  // Create two static ftl::thread objects.
  // The constructor will call tx_thread_create() internally, using the provided stack memory.
  static ftl::thread thread1(
      "Thread 1",            // Thread name (converted to char* as needed)
      thread_1_entry,        // Thread entry function
      nullptr,               // User argument (none in this case)
      thread_1_stack,        // Preallocated stack pointer
      STACK_SIZE,            // Stack size (in bytes)
      1,                     // Thread priority (1 = highest)
      1,                     // Preemption threshold
      TX_NO_TIME_SLICE,      // Time slice (none)
      TX_AUTO_START          // Auto-start thread
  );

  static ftl::thread thread2(
      "Thread 2",
      thread_2_entry,
      nullptr,
      thread_2_stack,
      STACK_SIZE,
      2,                     // Lower priority than Thread 1
      2,                     // Preemption threshold
      TX_NO_TIME_SLICE,
      TX_AUTO_START
  );
}

int main() {
  // Enter the ThreadX kernel. This never returns.
  tx_kernel_enter();
  return 0;
}
