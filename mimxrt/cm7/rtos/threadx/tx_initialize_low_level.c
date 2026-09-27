#include "fsl_common.h"
#include "tx_api.h"


// /* GCC */
// extern void *__HeapLimit;
// #define UNUSED_MEM_PTR  (&__HeapLimit)

// extern VOID *_tx_initialize_unused_memory;


extern VOID _tx_timer_interrupt(VOID);

VOID _tx_initialize_low_level(VOID)
{
    DisableGlobalIRQ();

    // _tx_initialize_unused_memory = (VOID *)UNUSED_MEM_PTR;

    /* enable CPU cycle counter */
    DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;

    SysTick_Config(SystemCoreClock / TX_TIMER_TICKS_PER_SECOND);

    NVIC_SetPriority(MemoryManagement_IRQn, 0);
    NVIC_SetPriority(BusFault_IRQn, 0);
    NVIC_SetPriority(UsageFault_IRQn, 0);

    NVIC_SetPriority(SVCall_IRQn, 0x0ff);

    NVIC_SetPriority(DebugMonitor_IRQn, 0);
    NVIC_SetPriority(PendSV_IRQn, 0x0ff);
    NVIC_SetPriority(SysTick_IRQn, 0x40);
}

VOID SysTick_Handler(VOID)
{
    _tx_timer_interrupt();
}
