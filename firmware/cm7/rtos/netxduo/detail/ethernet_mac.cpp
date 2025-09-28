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
    // Get references to registers
    volatile auto& mmfr = nENET_1G::MMFR::ref();
    volatile auto& eir = nENET_1G::EIR::ref();

    // Clear the MDIO access complete event (write 1 to clear)
    eir.bits.MII = 1;

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
        if (eir.bits.MII) {
            break;  // Transaction complete
        }
        counter--;
    }

    // Clear the MDIO access complete event
    eir.bits.MII = 1;
}

uint16_t EthernetMac::mdioRead(uint8_t phyAddr, uint8_t regAddr) {
    // Clear the MII interrupt flag (write 1 to clear)
    EXAMPLE_ENET->EIR = ENET_EIR_MII_MASK;

    // Build and write the MMFR register value for a read operation
    // ST=01b (bits 31-30), OP=10b (bits 29-28), PA (bits 27-23), RA (bits 22-18), TA=10b (bits 17-16)
    uint32_t mmfr = ENET_MMFR_ST(1) |        // Start of frame = 01b
                    ENET_MMFR_OP(2) |        // Operation = 10b (read)
                    ENET_MMFR_PA(phyAddr) |  // PHY address
                    ENET_MMFR_RA(regAddr) |  // Register address
                    ENET_MMFR_TA(2);         // Turnaround = 10b

    EXAMPLE_ENET->MMFR = mmfr;

    // Wait for MDIO transaction to complete (poll MII interrupt flag)
    constexpr uint32_t timeout = 100000;  // Timeout counter
    uint32_t counter = timeout;
    while (counter > 0) {
        if (EXAMPLE_ENET->EIR & ENET_EIR_MII_MASK) {
            break;  // Transaction complete
        }
        counter--;
    }

    // TODO: Implement proper error handling instead of assert
    // For now, just read the data even if timeout occurred

    // Read the data from the MMFR register
    uint16_t data = (uint16_t)(EXAMPLE_ENET->MMFR & ENET_MMFR_DATA_MASK);

    // Clear the MII interrupt flag
    EXAMPLE_ENET->EIR = ENET_EIR_MII_MASK;

    return data;
}

} // namespace detail
} // namespace ethernet