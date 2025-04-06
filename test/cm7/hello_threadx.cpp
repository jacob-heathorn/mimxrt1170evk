#include <stdio.h>
#include <stdint.h>

extern "C" {
  #include "tx_api.h"

  // TODO
  void _tx_initialize_low_level(void) {
    // Configure SysTick timer or PIT as RTOS tick
  }
}

TX_THREAD app_thread;
constexpr size_t STACK_SIZE = 1024;
uint8_t app_stack[STACK_SIZE];

extern "C" void tx_application_define(void *unused)
{
    tx_thread_create(&app_thread, "App Thread",
        [](ULONG){
            while (1) {
                // your app logic here
                printf("\r\nHello Threadx\r\n\n");
            }
        },
        0, app_stack, STACK_SIZE, 1, 1, TX_NO_TIME_SLICE, TX_AUTO_START);
}

int main()
{
    tx_kernel_enter();  // Transfers control to ThreadX
    return 0;
}
