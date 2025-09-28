#pragma once

#include <cstdint>

namespace ethernet {
namespace detail {

// MDIO (Management Data Input/Output) driver for PHY communication
// Provides minimal interface for PHY register access via ENET peripheral
class Mdio {
public:
    // Initialize MDIO interface with clock configuration
    static void initialize();

    // Write to PHY register
    // phyAddr: PHY address (0-31)
    // regAddr: Register address (0-31)
    // data: 16-bit data to write
    static void write(uint8_t phyAddr, uint8_t regAddr, uint16_t data);

    // Read from PHY register
    // phyAddr: PHY address (0-31)
    // regAddr: Register address (0-31)
    // Returns: 16-bit register data
    static uint16_t read(uint8_t phyAddr, uint8_t regAddr);
};

} // namespace detail
} // namespace ethernet