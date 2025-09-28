#pragma once

#include <cstdint>

namespace ethernet {
namespace detail {

// Ethernet MAC Controller for i.MX RT1170 Gigabit Ethernet
// Encapsulates MAC hardware control including MDIO operations
class EthernetMac {
public:
    // Initialize MDIO interface
    static void mdioInit();

    // MDIO operations (part of MAC controller)
    static void mdioWrite(uint8_t phyAddr, uint8_t regAddr, uint16_t data);
    static uint16_t mdioRead(uint8_t phyAddr, uint8_t regAddr);
};

} // namespace detail
} // namespace ethernet