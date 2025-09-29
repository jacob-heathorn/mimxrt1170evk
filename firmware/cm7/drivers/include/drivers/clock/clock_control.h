#pragma once

#include <cstdint>

// Clock control interface for i.MX RT1170 peripherals
// Abstracts platform-specific clock control mechanisms
class ClockControl {
public:
    // Enable Gigabit Ethernet (ENET_1G) peripheral clock
    static void enableGigabitEthernetClock();

    // Disable Gigabit Ethernet (ENET_1G) peripheral clock
    static void disableGigabitEthernetClock();

    // Enable 100M Ethernet (ENET) peripheral clock
    static void enableEthernetClock();

    // Disable 100M Ethernet (ENET) peripheral clock
    static void disableEthernetClock();

    // Get bus clock frequency in Hz
    static uint32_t getBusClockFreq();

    // Get MDIO clock frequency in Hz (typically bus clock)
    static uint32_t getMdioClockFreq();
};