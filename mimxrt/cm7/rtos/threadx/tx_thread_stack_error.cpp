#include <cassert>

#include "tx_api.h"

extern "C" void tx_thread_stack_error(TX_THREAD* thread) {
  (void)thread;
  assert(false && "stack overflow!");
  for (;;) {
  }
}
