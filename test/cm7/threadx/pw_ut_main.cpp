#include "gtest/gtest.h"

#include "tx_api.h"
#include <cstdio>

#include "ftl/tx_thread.hpp"

// pw_unit_test:light requires an event handler to be configured.
#include "pw_unit_test/simple_printing_event_handler.h"

#define STACK_SIZE 1024
uint8_t main_thread_stack[STACK_SIZE];

void WriteString(const std::string_view& string, bool newline) {
  (void)string;
  printf("%s", string.data());
  if (newline) {
    printf("\r\n");
  }
}

void main_thread_function() {
  // // The following line has no effect with pw_unit_test_light, but makes this
  // // test compatible with upstream GoogleTest.
  // testing::InitGoogleTest();
  printf("\r\nRunning Pigweed Unit Tests! For the baddies.\r\n");

  // Since we are using pw_unit_test:light, set up an event handler.
  pw::unit_test::SimplePrintingEventHandler handler(WriteString);
  pw::unit_test::RegisterEventHandler(&handler);
  RUN_ALL_TESTS();
}


//--- ThreadX Application Definition ---------------------------------------
extern "C" void tx_application_define(void* first_unused_memory) {
  (void)first_unused_memory;  // Unused parameter

  static ftl::TxThread main_thread(
      "Pigweed main thread", 
      etl::delegate<void(void)>::create<main_thread_function>(),
      main_thread_stack,
      STACK_SIZE,
      1             // Highest priority
  );
}

int main() {
  tx_kernel_enter();
  return 0;
}
