#include "drivers/clock/clock_control.h"
#include "fsl_clock.h"

// TODO: Modernize clock control implementation to remove dependency on fsl_clock.h
// This should use direct register access to CCM LPCG registers:
// - ENET_1G is LPCG[113] at address 0x40CC6E20
// - ENET is LPCG[112] at address 0x40CC6E00
// - Replace CLOCK_GetRootClockFreq with direct CCM clock root register reads

void ClockControl::enableGigabitEthernetClock() {
    // Enable ENET_1G peripheral clock
    // TODO: Replace with direct LPCG[113] register access
    CLOCK_EnableClock(kCLOCK_Enet_1g);
}

void ClockControl::disableGigabitEthernetClock() {
    // Disable ENET_1G peripheral clock
    // TODO: Replace with direct LPCG[113] register access
    CLOCK_DisableClock(kCLOCK_Enet_1g);
}

void ClockControl::enableEthernetClock() {
    // Enable ENET peripheral clock
    // TODO: Replace with direct LPCG[112] register access
    CLOCK_EnableClock(kCLOCK_Enet);
}

void ClockControl::disableEthernetClock() {
    // Disable ENET peripheral clock
    // TODO: Replace with direct LPCG[112] register access
    CLOCK_DisableClock(kCLOCK_Enet);
}

uint32_t ClockControl::getBusClockFreq() {
    // Get the bus clock frequency (IPS/IPG clock - used for MDIO clock generation)
    // TODO: Replace with direct CCM clock root register read
    return CLOCK_GetRootClockFreq(kCLOCK_Root_Bus);
}
