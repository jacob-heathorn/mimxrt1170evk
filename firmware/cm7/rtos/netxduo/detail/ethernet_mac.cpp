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

    // Build the MMFR value locally for atomic write
    nENET_1G::MMFR mmfr_val{};
    mmfr_val.value = 0;  // Start with zero
    mmfr_val.bits.ST = 1;        // Start of frame = 01b
    mmfr_val.bits.OP = 1;        // Operation = 01b (write)
    mmfr_val.bits.PA = phyAddr;  // PHY address
    mmfr_val.bits.RA = regAddr;  // Register address
    mmfr_val.bits.TA = 2;        // Turnaround = 10b
    mmfr_val.bits.DATA = data;   // Data to write

    // Write the complete value atomically
    mmfr.value = mmfr_val.value;

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
    // Get references to registers
    volatile auto& mmfr = nENET_1G::MMFR::ref();
    volatile auto& eir = nENET_1G::EIR::ref();

    // Clear the MDIO access complete event (write 1 to clear)
    eir.bits.MII = 1;

    // Build the MMFR value locally for atomic write
    nENET_1G::MMFR mmfr_val{};
    mmfr_val.value = 0;  // Start with zero
    mmfr_val.bits.ST = 1;        // Start of frame = 01b
    mmfr_val.bits.OP = 2;        // Operation = 10b (read)
    mmfr_val.bits.PA = phyAddr;  // PHY address
    mmfr_val.bits.RA = regAddr;  // Register address
    mmfr_val.bits.TA = 2;        // Turnaround = 10b

    // Write the complete value atomically
    mmfr.value = mmfr_val.value;

    // Wait for MDIO transaction to complete (poll MII interrupt flag)
    constexpr uint32_t timeout = 100000;  // Timeout counter
    uint32_t counter = timeout;
    while (counter > 0) {
        if (eir.bits.MII) {
            break;  // Transaction complete
        }
        counter--;
    }

    // TODO: Implement proper error handling instead of assert
    // For now, just read the data even if timeout occurred

    // Read the data from the MMFR register
    uint16_t data = mmfr.bits.DATA;

    // Clear the MDIO access complete event
    eir.bits.MII = 1;

    return data;
}

} // namespace detail
} // namespace ethernet