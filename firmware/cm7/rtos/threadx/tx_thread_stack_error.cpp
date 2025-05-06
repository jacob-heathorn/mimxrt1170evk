#include <cassert>

#include "tx_api.h"

extern "C" {
  
  void tx_thread_stack_error(TX_THREAD *thread_ptr)
    {
        assert(false && "stack overflow!");

        // For demonstration, simply loop forever:
        while(1)
        {
            // You could also signal via a debug breakpoint or LED indicator.
        }
    }
}
