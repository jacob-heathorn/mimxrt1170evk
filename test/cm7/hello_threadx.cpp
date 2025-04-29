#include <cstdio>
#include "tx_api.h"
#include "ftl/tx_thread.hpp"
#include "ftl/mutex.hpp"
#include "etl/delegate.h"
#include "stdio.h"

// Define a stack size and allocate stacks for each thread.
#define STACK_SIZE 1024
uint8_t thread_1_stack[STACK_SIZE];
uint8_t thread_2_stack[STACK_SIZE];

ftl::Mutex shared_mutex;

//--- Free function for Thread1 --------------------------------------------
void thread_1_function() {
  for (int i = 0;; ++i) {
    char msg[64];
    sprintf(msg, "Hello World %d", i);
    printf("%s\r\n", msg);
    // fflush(stdout);
    tx_thread_sleep(100);
  }
}

//--- Class for Thread2 (member function with no parameters) ---------------
struct Thread2 {
  void doWork() {
    // Create a mutex
    ftl::Mutex mutex;

    // try_lock() on an unlocked mutex should succeed.
    if (mutex.try_lock() == true)
    {
      mutex.unlock();

      // Manually call lock() and unlock()
      mutex.lock();
      mutex.unlock();
    }
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

  // // Create thread2 using a member function (which takes no argument).
  // static Thread2 thread2obj;
  // static ftl::TxThread thread2(
  //     "Thread 2",
  //     etl::delegate<void(void)>::create<Thread2, &Thread2::doWork>(thread2obj),
  //     thread_2_stack,
  //     STACK_SIZE,
  //     2             // Lower priority than Thread1
  // );
}

// main() simply starts the ThreadX kernel which never returns.
int main() {
  tx_kernel_enter();
  return 0;
}
