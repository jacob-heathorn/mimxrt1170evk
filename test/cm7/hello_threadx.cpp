#include <stdio.h>
#include <stdint.h>

extern "C" {
  #include "tx_api.h"
}

TX_THREAD app_thread;
constexpr size_t STACK_SIZE = 1024;
uint8_t app_stack[STACK_SIZE];

void my_thread_entry(ULONG thread_input)
{
    while (1)
    {
        printf("\r\nHi\r\n\n");
        tx_thread_sleep(TX_TIMER_TICKS_PER_SECOND); // Sleep 1 second
    }
}

extern "C" void tx_application_define(void *unused)
{
    tx_thread_create(&app_thread, "App Thread",&my_thread_entry,
        0, app_stack, STACK_SIZE, 1, 1, TX_NO_TIME_SLICE, TX_AUTO_START);
}

int main()
{
    tx_kernel_enter();  // Transfers control to ThreadX
    return 0;
}
