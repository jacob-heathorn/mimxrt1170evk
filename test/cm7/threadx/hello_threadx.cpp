#include <cstdio>
#include "tx_api.h"
#include "ftl/tx_thread.hpp"
#include "ftl/mutex.hpp"
#include "etl/delegate.h"

// Define a stack size and allocate stacks for each thread.
#define STACK_SIZE 1024
uint8_t thread_1_stack[STACK_SIZE];
uint8_t thread_2_stack[STACK_SIZE];

ftl::Mutex shared_mutex;

//--- Free function for Thread1 --------------------------------------------
void thread_1_function() {
  while (1) {
    {
      ftl::LockGuard<ftl::Mutex> lock(shared_mutex);
      printf("Thread 1: Hello\n");
      tx_thread_sleep(75);
      printf("Thread 1: Finished\n");
    }
    tx_thread_sleep(150);
  }
}

//--- Class for Thread2 (member function with no parameters) ---------------
struct Thread2 {
  void doWork() {
    while (1) {
      {
        ftl::LockGuard<ftl::Mutex> lock(shared_mutex);
        printf("Thread 2: Hello\n");
        tx_thread_sleep(75);
        printf("Thread 2: Finished\n");
      }
      tx_thread_sleep(150);
    }
  }
};

//--- ThreadX Application Definition ---------------------------------------
extern "C" void tx_application_define(void* first_unused_memory) {
  (void)first_unused_memory;  // Unused parameter

  // Create thread1 using a free function.
  static ftl::TxThread thread1(
      "Thread 1", 
      etl::delegate<void(void)>::create<thread_1_function>(),
      thread_1_stack,
      STACK_SIZE,
      1             // Highest priority
  );

  // Create thread2 using a member function (which takes no argument).
  static Thread2 thread2obj;
  static ftl::TxThread thread2(
      "Thread 2",
      etl::delegate<void(void)>::create<Thread2, &Thread2::doWork>(thread2obj),
      thread_2_stack,
      STACK_SIZE,
      2             // Lower priority than Thread1
  );
}

// main() simply starts the ThreadX kernel which never returns.
int main() {
  tx_kernel_enter();
  return 0;
}
