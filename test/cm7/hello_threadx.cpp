#include <cstdio>
#include "tx_api.h"
#include "ftl/tx_thread.hpp"    // Your thread wrapper header
#include "etl/delegate.h"       // ETL delegate

// Define a stack size and allocate stacks for each thread.
#define STACK_SIZE 1024
uint8_t thread_1_stack[STACK_SIZE];
uint8_t thread_2_stack[STACK_SIZE];

//--- Free function for Thread1 --------------------------------------------
void thread_1_function() {
  printf("Thread 1: Running\n");
  while (1) {
    printf("Thread 1: Looping\n");
    tx_thread_sleep(100);
  }
}

//--- Class for Thread2 ----------------------------------------------------
struct Thread2 {
  void doWork() {
    printf("Thread 2: Starting\n");
    while (1) {
      // Simulate a critical section (insert your mutex lock as needed).
      printf("Thread 2: Hello\n");
      tx_thread_sleep(75);
      printf("Thread 2: Finished\n");
      tx_thread_sleep(150);
    }
  }
};

//--- ThreadX Application Definition ---------------------------------------
extern "C" void tx_application_define(void* first_unused_memory) {
  (void)first_unused_memory;  // Unused parameter

  // Create thread1 using a free function.
  // Use the compile-time delegate creation for free functions.
  static ftl::TxThread thread1(
      "Thread 1", 
      etl::delegate<void(void)>::create<thread_1_function>(),
      thread_1_stack,
      STACK_SIZE,
      1,             // Highest priority
      1,             // Preemption threshold
      TX_NO_TIME_SLICE,
      TX_AUTO_START   // Auto-start the thread
  );

  // Create an instance of Thread2.
  static Thread2 thread2obj;
  auto del = etl::delegate<void(void)>::create<Thread2, &Thread2::doWork>(thread2obj);
  printf("sizeof del: %u", sizeof(del));

  // Create thread2 using a member function of Thread2.
  // Pass the object by reference (not as a pointer) to match the delegate's API.
  static ftl::TxThread thread2(
      "Thread 2",
      del,
      thread_2_stack,
      STACK_SIZE,
      2,             // Lower priority than Thread1
      2,             // Preemption threshold
      TX_NO_TIME_SLICE,
      TX_AUTO_START
  );
}

// main() simply starts the ThreadX kernel which never returns.
int main() {
  tx_kernel_enter();
  return 0;
}
