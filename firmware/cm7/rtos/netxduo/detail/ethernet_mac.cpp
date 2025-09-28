#include "ethernet_mac.h"
#include "fsl_enet.h"
#include "fsl_clock.h"

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

    // Clear the MDIO access complete event (write 1 to clear)
    EXAMPLE_ENET->EIR = ENET_EIR_MII_MASK;

    // Start MDIO write command by writing to MMFR register
    // Format: ST(1) | OP(1 for write) | PA(phyAddr) | RA(regAddr) | TA(2) | DATA(data)
    EXAMPLE_ENET->MMFR = ENET_MMFR_ST(1U) |           // Start of frame = 01b
                         ENET_MMFR_OP(1U) |            // Operation = 01b (write)
                         ENET_MMFR_PA(phyAddr) |       // PHY address
                         ENET_MMFR_RA(regAddr) |       // Register address
                         ENET_MMFR_TA(2U) |            // Turnaround = 10b
                         ENET_MMFR_DATA(data);         // Data to write

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