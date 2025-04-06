#include <stdio.h>
#include <stdint.h>

extern "C" {
  #include "tx_api.h"
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
            }
        },
        0, app_stack, STACK_SIZE, 1, 1, TX_NO_TIME_SLICE, TX_AUTO_START);
}

int main()
{
    printf("\r\nHello Threadx\r\n\n");
    tx_kernel_enter();  // Transfers control to ThreadX
    return 0;
}
