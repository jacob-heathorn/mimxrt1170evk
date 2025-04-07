#include <stdio.h>
#include <stdint.h>

extern "C" {
  #include "tx_api.h"
  #include "fsl_clock.h"
  #include "clock_config.h"

  void _tx_timer_interrupt(void);  // explicitly declare it as C linkage

  // TODO
  void _tx_initialize_low_level(void) {    
    DisableGlobalIRQ();

    /* enable CPU cycle counter */
    DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;

    SysTick_Config(SystemCoreClock / TX_TIMER_TICKS_PER_SECOND);

    NVIC_SetPriority(MemoryManagement_IRQn, 0);
    NVIC_SetPriority(BusFault_IRQn, 0);
    NVIC_SetPriority(UsageFault_IRQn, 0);

    NVIC_SetPriority(SVCall_IRQn, 0x0ff);

    NVIC_SetPriority(DebugMonitor_IRQn, 0);
    NVIC_SetPriority(PendSV_IRQn, 0xFF);
    NVIC_SetPriority(SysTick_IRQn, 0x40);
  }

  // void SysTick_Handler(void) __attribute__((interrupt("IRQ")));
  void SysTick_Handler(void) {
      _tx_timer_interrupt();
  }
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
    BOARD_InitBootClocks();
    tx_kernel_enter();  // Transfers control to ThreadX
    return 0;
}
