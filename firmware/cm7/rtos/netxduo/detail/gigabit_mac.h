#pragma once

#include <cstdint>
#include "ftl/singleton.hpp"

namespace ethernet {
namespace detail {

// Gigabit MAC Controller for i.MX RT1170 Ethernet
// Encapsulates MAC hardware control including MDIO operations
class GigabitMac : public ftl::Singleton<GigabitMac> {
public:
    // Constructor - enables MAC clock (public for ftl::Singleton)
    GigabitMac();

    // Destructor
    ~GigabitMac() = delete;

    // Initialize MDIO interface
    void mdioInit();

    // MDIO operations (part of MAC controller)
    void mdioWrite(uint8_t phyAddr, uint8_t regAddr, uint16_t data);
    uint16_t mdioRead(uint8_t phyAddr, uint8_t regAddr);
};

} // namespace detail
} // namespace ethernet