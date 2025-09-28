#include "ethernet_mac.h"
#include "fsl_enet.h"
#include "fsl_clock.h"

// Undefine conflicting macros from FSL headers before including register definitions
#ifdef CMP1
#undef CMP1
#endif
#ifdef CMP2
#undef CMP2
#endif
#ifdef CMP3
#undef CMP3
#endif
#ifdef CMP4
#undef CMP4
#endif

#include "registers/codegen/enet_1g.hpp"

// Hardware definitions (from nx_driver_imxrt.cpp)
#define EXAMPLE_ENET       ENET_1G
#define MDIO_CLOCK_FREQ    CLOCK_GetRootClockFreq(kCLOCK_Root_Bus)

namespace ethernet {
namespace detail {

void EthernetMac::mdioInit() {
    // Enable ENET clock (s_enetClock is extern from fsl_enet.h)
    (void)CLOCK_EnableClock(s_enetClock[ENET_GetInstance(EXAMPLE_ENET)]);

    // Configure SMI (Serial Management Interface) for MDIO
    // false = disable preamble suppression
    ENET_SetSMI(EXAMPLE_ENET, MDIO_CLOCK_FREQ, false);
}

void EthernetMac::mdioWrite(uint8_t phyAddr, uint8_t regAddr, uint16_t data) {
    // Direct implementation of MDIO write operation

    // Get reference to MMFR register
    volatile auto& mmfr = nENET_1G::MMFR::ref();

    // Clear the MDIO access complete event (write 1 to clear)
    EXAMPLE_ENET->EIR = ENET_EIR_MII_MASK;

    // Reset the MMFR register first
    mmfr.Reset();

    // Write the bits one at a time
    mmfr.bits.ST = 1;        // Start of frame = 01b
    mmfr.bits.OP = 1;        // Operation = 01b (write)
    mmfr.bits.PA = phyAddr;  // PHY address
    mmfr.bits.RA = regAddr;  // Register address
    mmfr.bits.TA = 2;        // Turnaround = 10b
    mmfr.bits.DATA = data;   // Data to write

    // Wait for MDIO transaction to complete (poll MII interrupt flag)
    constexpr uint32_t timeout = 100000;  // Timeout counter
    uint32_t counter = timeout;
    while (counter > 0) {
        if (EXAMPLE_ENET->EIR & ENET_EIR_MII_MASK) {
            break;  // Transaction complete
        }
        counter--;
    }

    // Clear the MDIO access complete event
    EXAMPLE_ENET->EIR = ENET_EIR_MII_MASK;
}

uint16_t EthernetMac::mdioRead(uint8_t phyAddr, uint8_t regAddr) {
    uint16_t data = 0;
    // Use FSL driver to read from PHY register
    // Return value ignored to match existing behavior
    (void)ENET_MDIORead(EXAMPLE_ENET, phyAddr, regAddr, &data);
    return data;
}

} // namespace detail
} // namespace ethernet