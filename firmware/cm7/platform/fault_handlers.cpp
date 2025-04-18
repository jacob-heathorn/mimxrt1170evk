#include "board.h"
#include "core_cm7.h"
#include <cstdio>
#include <cstdint>
#include <cassert>


// This overrides the weak DefaultISR implementation from startup file.
extern "C" __attribute__((used))
void DefaultISR(void)
{
    uint32_t exceptionNumber = __get_IPSR();
    (void)exceptionNumber;
    // (void)MCMGR_TriggerEvent(kMCMGR_RemoteExceptionEvent, (uint16_t)exceptionNumber);
    printf("Exception number: %lu\r\n", exceptionNumber);
    assert(false && "Default ISR triggered");
    for (;;)
    {
    } /* stop here */
}

extern "C" __attribute__((used))
void HardFault_Handler(void)
{
    assert(false && "HardFault_Handler triggered");
    for (;;)
    {
    }
}

extern "C" __attribute__((used))
void NMI_Handler(void)
{
    assert(false && "NMI_Handler triggered");
    for (;;)
    {
    }
}

// Naked function to select the correct stack pointer
extern "C" __attribute__((naked))
void BusFault_Handler(void)
{
    __asm volatile (
        "tst lr, #4              \n" // Test EXC_RETURN bit 2: determines which SP was used.
        "ite eq                  \n"
        "mrseq r0, msp           \n" // If zero, use MSP.
        "mrsne r0, psp           \n" // Otherwise, use PSP.
        "b BusFault_HandlerC     \n" // Branch to C function with SP in r0.
    );
}

extern "C" void BusFault_HandlerC(uint32_t *stack_pointer)
{
    printf("BusFault triggerd!\r\n");
    [[maybe_unused]] volatile uint32_t cfsr = SCB->CFSR;
    [[maybe_unused]] volatile uint32_t hfsr = SCB->HFSR;
    [[maybe_unused]] volatile uint32_t bfar = SCB->BFAR;
    [[maybe_unused]] volatile uint32_t bfsr = (cfsr >> 8) & 0xFF;
    
    // Optionally, copy the stacked registers to volatile locals
    [[maybe_unused]] volatile uint32_t stacked_r0   = stack_pointer[0];
    [[maybe_unused]] volatile uint32_t stacked_r1   = stack_pointer[1];
    [[maybe_unused]] volatile uint32_t stacked_r2   = stack_pointer[2];
    [[maybe_unused]] volatile uint32_t stacked_r3   = stack_pointer[3];
    [[maybe_unused]] volatile uint32_t stacked_r12  = stack_pointer[4];
    [[maybe_unused]] volatile uint32_t stacked_lr   = stack_pointer[5];
    [[maybe_unused]] volatile uint32_t stacked_pc   = stack_pointer[6];
    [[maybe_unused]] volatile uint32_t stacked_xpsr = stack_pointer[7];

    // At this point, you can optionally signal this data via a debugging interface
    // or store it in RAM for later retrieval rather than calling printf or assert.

    // Stay here.
    assert(false && "BusFault assert!");
    for (;;);
}
