#include <stdio.h>
#include <stdint.h>

#include "tx_api.h"
#include "fsl_clock.h"
#include "clock_config.h"


void _tx_timer_interrupt(void);  // explicitly declare it as C linkage

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

void SysTick_Handler(void) {
    _tx_timer_interrupt();
}
