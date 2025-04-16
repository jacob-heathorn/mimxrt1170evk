#include "board.h"
#include "core_cm7.h"
#include <cstdio>
#include <cstdint>
#include <cassert>

// A C++ class to encapsulate fault handling
class FaultHandler {
public:
    // A method that decodes and logs fault information.
    static void handleHardFault(uint32_t *stack_pointer) {
        // On Cortex-M, when a fault occurs, the processor automatically pushes 
        // registers R0-R3, R12, LR, PC, and xPSR onto the current stack.
        uint32_t r0   = stack_pointer[0];
        uint32_t r1   = stack_pointer[1];
        uint32_t r2   = stack_pointer[2];
        uint32_t r3   = stack_pointer[3];
        uint32_t r12  = stack_pointer[4];
        uint32_t lr   = stack_pointer[5];
        uint32_t pc   = stack_pointer[6];
        uint32_t xpsr = stack_pointer[7];

        // You can also read fault registers from the System Control Block.
        uint32_t cfsr = SCB->CFSR;  // Configurable Fault Status Register
        uint32_t hfsr = SCB->HFSR;  // Hard Fault Status Register
        uint32_t mmfar = SCB->MMFAR; // Memory Management Fault Address Register
        uint32_t bfar = SCB->BFAR;  // Bus Fault Address Register

        // Print fault details (replace printf with your logger if needed)
        printf("HardFault detected!\n");
        printf("Stacked registers:\n");
        printf(" R0  = 0x%08lx\n", r0);
        printf(" R1  = 0x%08lx\n", r1);
        printf(" R2  = 0x%08lx\n", r2);
        printf(" R3  = 0x%08lx\n", r3);
        printf(" R12 = 0x%08lx\n", r12);
        printf(" LR  = 0x%08lx\n", lr);
        printf(" PC  = 0x%08lx\n", pc);
        printf(" xPSR= 0x%08lx\n", xpsr);
        printf("Fault Status Registers:\n");
        printf(" CFSR = 0x%08lx\n", cfsr);
        printf(" HFSR = 0x%08lx\n", hfsr);
        printf(" MMFAR = 0x%08lx\n", mmfar);
        printf(" BFAR = 0x%08lx\n", bfar);
    }
};


// /* This overrides the weak DefaultISR implementation from startup file */
extern "C" __attribute__((used))
void DefaultISR(void)
{
    uint32_t exceptionNumber = __get_IPSR();
    (void)exceptionNumber;
    // (void)MCMGR_TriggerEvent(kMCMGR_RemoteExceptionEvent, (uint16_t)exceptionNumber);
    assert(false && "Default ISR triggered");
    for (;;)
    {
    } /* stop here */
}

extern "C" __attribute__((used))
void HardFault_Handler(void)
{
    DefaultISR();
}

extern "C" __attribute__((used))
void NMI_Handler(void)
{
    DefaultISR();
}

// // The "naked" attribute tells the compiler not to generate prologue/epilogue code,
// // so you can properly extract the fault stack pointer. This attribute usage may vary based on
// // your toolchain.
// #if defined(__GNUC__)
// __attribute__((naked))
// #endif
// void HardFault_Handler(void) {
// #if defined(__GNUC__)
//     __asm volatile (
//         "tst lr, #4          \n"  // Test EXC_RETURN to determine stack pointer in use (MSP or PSP)
//         "ite eq              \n"
//         "mrseq r0, msp       \n"  // if equal, use MSP
//         "mrsne r0, psp       \n"  // else use PSP
//         "b HardFault_HandlerC\n"
//     );
// #else
//     HardFault_HandlerC(0);
// #endif
// }

// // This is the C function that actually processes the fault.
// void HardFault_HandlerC(uint32_t *stack_pointer) {
//     FaultHandler::handleHardFault(stack_pointer);
//     // Optionally, you could perform a system reset here or enter an infinite loop.
//     while(1);
// }

