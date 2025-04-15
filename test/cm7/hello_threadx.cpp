#include <cstdio>
#include "tx_api.h"
#include "ftl/tx_thread.hpp"    // Your thread wrapper header
#include "etl/delegate.h"       // ETL delegate

// Define a stack size and allocate stacks for each thread.
#define STACK_SIZE 1024
uint8_t thread_1_stack[STACK_SIZE];
uint8_t thread_2_stack[STACK_SIZE];
uint8_t thread_3_stack[STACK_SIZE];

//--- Free function for Thread1 --------------------------------------------
void thread_1_function() {
  printf("Thread 1: Running\n");
  while (1) {
    printf("Thread 1: Looping\n");
    tx_thread_sleep(100);
  }
}

//--- Class for Thread2 (member function with no parameters) ---------------
struct Thread2 {
  void doWork() {
    printf("Thread 2: Starting\n");
    while (1) {
      // Critical section example (you would use a real lock in your app)
      printf("Thread 2: Hello\n");
      tx_thread_sleep(75);
      printf("Thread 2: Finished\n");
      tx_thread_sleep(150);
    }
  }
};

//--- Class for Thread3 (member function that takes an int argument) -------
struct Thread3 {
  void doWorkWithArg(int value) {
    printf("Thread 3: Received argument %d\n", value);
    while (1) {
      printf("Thread 3: Working with argument %d\n", value);
      tx_thread_sleep(100);
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
      1,             // Highest priority
      1              // Preemption threshold
  );

  // Create thread2 using a member function (which takes no argument).
  static Thread2 thread2obj;
  static ftl::TxThread thread2(
      "Thread 2",
      etl::delegate<void(void)>::create<Thread2, &Thread2::doWork>(thread2obj),
      thread_2_stack,
      STACK_SIZE,
      2,             // Lower priority than Thread1
      2              // Preemption threshold
  );

  // For Thread3 we need to bind an integer argument (5) to a member function that accepts an int.
  // Since our TxThread requires a delegate of type void(void), we wrap the call in a lambda.
  static Thread3 thread3obj;
  // Note: Because the lambda captures thread3obj by reference, we need to ensure it remains valid.
  // Here we define a static lambda variable that will be used to create the delegate.
  static auto thread3_lambda = []() {
    // Call the member function with the desired argument.
    thread3obj.doWorkWithArg(5);
  };

  // Create thread3 using the lambda wrapped in an ETL delegate.
  static ftl::TxThread thread3(
      "Thread 3",
      etl::delegate<void(void)>(thread3_lambda),
      thread_3_stack,
      STACK_SIZE,
      3,             // Priority (choose appropriately)
      3              // Preemption threshold
  );
}

// main() simply starts the ThreadX kernel which never returns.
int main() {
  tx_kernel_enter();
  return 0;
}
