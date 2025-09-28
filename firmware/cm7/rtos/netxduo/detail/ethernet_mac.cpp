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
    // TODO: Replace with direct clock control when available
    (void)CLOCK_EnableClock(s_enetClock[ENET_GetInstance(EXAMPLE_ENET)]);

    // Configure SMI (Serial Management Interface) for MDIO
    // Implementation based on ENET_SetSMI but using C++ register access

    // Constants from FSL driver
    constexpr uint32_t MDC_FREQUENCY = 2500000U;  // 2.5 MHz MDC clock
    constexpr uint32_t NANOSECOND_ONE_SECOND = 1000000000U;

    // Get reference to MSCR register
    volatile auto& mscr = nENET_1G::MSCR::ref();

    // Calculate the MII speed which controls the frequency of the MDC
    // Use (param + N - 1) / N to increase accuracy with rounding
    uint32_t speed = (MDIO_CLOCK_FREQ + 2U * MDC_FREQUENCY - 1U) / (2U * MDC_FREQUENCY) - 1U;

    // Calculate the hold time on the MDIO output (minimum 10ns)
    uint32_t holdTime = (10U + NANOSECOND_ONE_SECOND / MDIO_CLOCK_FREQ - 1U) /
                        (NANOSECOND_ONE_SECOND / MDIO_CLOCK_FREQ) - 1U;

    // Build MSCR value locally for atomic write
    nENET_1G::MSCR mscr_val{};
    mscr_val.value = 0;
    mscr_val.bits.MII_SPEED = speed;
    mscr_val.bits.HOLDTIME = static_cast<nENET_1G::MSCR::eHOLDTIME>(holdTime);
    mscr_val.bits.DIS_PRE = nENET_1G::MSCR::eDIS_PRE::eZERO;  // Preamble enabled

    // Write the complete value atomically
    mscr.value = mscr_val.value;
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