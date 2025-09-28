#include "gigabit_mac.h"
#include "drivers/clock/clock_control.h"

#include "registers/codegen/enet_1g.hpp"
#include <cassert>

// Ethernet MAC constants
namespace {
// MDIO interface constants
constexpr uint32_t kMdcFrequency = 2500000U;           // 2.5 MHz MDC clock
constexpr uint32_t kNanosecondsPerSecond = 1000000000U; // For timing calculations
constexpr uint32_t kMdioMinHoldTimeNs = 10U;           // Minimum 10ns hold time
constexpr uint32_t kMdioTimeoutCycles = 100000U;       // Timeout for MDIO operations

} // anonymous namespace

namespace ethernet {
namespace detail {

GigabitMac::GigabitMac() {
    // Enable ENET_1G peripheral clock
    ClockControl::enableGigabitEthernetClock();
}

void GigabitMac::setAddress(const std::array<uint8_t, 6>& macAddr) {
    // Clear the Individual and Group Address Hash registers
    // IALR/IAUR: Individual (unicast) Address hash registers
    // GALR/GAUR: Group (multicast) Address hash registers
    // These are used for hardware filtering of multicast/unicast addresses
    nENET_1G::IALR::ref().value = 0;
    nENET_1G::IAUR::ref().value = 0;
    nENET_1G::GALR::ref().value = 0;
    nENET_1G::GAUR::ref().value = 0;

    // Set MAC address in the ENET_1G registers
    // PALR: Physical Address Lower Register (bytes 0-3)
    // PAUR: Physical Address Upper Register (bytes 4-5)

    uint32_t address;

    // Set physical address lower register (bytes 3-0 in big-endian order)
    address = (uint32_t)(((uint32_t)macAddr[0] << 24U) |
                        ((uint32_t)macAddr[1] << 16U) |
                        ((uint32_t)macAddr[2] << 8U) |
                        (uint32_t)macAddr[3]);
    nENET_1G::PALR::ref().value = address;

    // Set physical address upper register (bytes 5-4)
    address = (uint32_t)(((uint32_t)macAddr[4] << 8U) |
                        (uint32_t)macAddr[5]);
    nENET_1G::PAUR::ref().value = address << 16U;  // PAUR[31:16] contains MAC address bytes 5-4
}

void GigabitMac::mdioInit() {
    // Configure SMI (Serial Management Interface) for MDIO
    volatile auto& mscr = nENET_1G::MSCR::ref();

    // Get IPS bus clock frequency (MDC is generated from IPS bus clock per ref manual section 60.3.15.3)
    const uint32_t clockFreq = ClockControl::getBusClockFreq();

    // Calculate the MII speed which controls the frequency of the MDC
    // Use (param + N - 1) / N to increase accuracy with rounding
    const uint32_t speed = (clockFreq + 2U * kMdcFrequency - 1U) / (2U * kMdcFrequency) - 1U;

    // Calculate the hold time on the MDIO output (minimum 10ns)
    const uint32_t holdTime = (kMdioMinHoldTimeNs + kNanosecondsPerSecond / clockFreq - 1U) /
                              (kNanosecondsPerSecond / clockFreq) - 1U;

    // Build MSCR value locally for atomic write
    nENET_1G::MSCR mscr_val{};
    mscr_val.value = 0;
    mscr_val.bits.MII_SPEED = speed;
    mscr_val.bits.HOLDTIME = static_cast<nENET_1G::MSCR::eHOLDTIME>(holdTime);
    mscr_val.bits.DIS_PRE = nENET_1G::MSCR::eDIS_PRE::eZERO;  // Preamble enabled

    // Write the complete value atomically
    mscr.value = mscr_val.value;
}

void GigabitMac::mdioWrite(uint8_t phyAddr, uint8_t regAddr, uint16_t data) {
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
    uint32_t counter = kMdioTimeoutCycles;
    while (counter > 0) {
        if (eir.bits.MII) {
            break;  // Transaction complete
        }
        counter--;
    }

    // TODO: Implement proper error handling for MDIO timeout
    assert(counter > 0 && "MDIO write operation timed out");

    // Clear the MDIO access complete event
    eir.bits.MII = 1;
}

uint16_t GigabitMac::mdioRead(uint8_t phyAddr, uint8_t regAddr) {
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
    uint32_t counter = kMdioTimeoutCycles;
    while (counter > 0) {
        if (eir.bits.MII) {
            break;  // Transaction complete
        }
        counter--;
    }

    // TODO: Implement proper error handling for MDIO timeout
    assert(counter > 0 && "MDIO read operation timed out");

    // Read the data from the MMFR register
    uint16_t data = mmfr.bits.DATA;

    // Clear the MDIO access complete event
    eir.bits.MII = 1;

    return data;
}

} // namespace detail
} // namespace ethernet