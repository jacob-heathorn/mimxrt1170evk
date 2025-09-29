#pragma once

#include <cstdint>
#include "ftl/singleton.hpp"

namespace ethernet {
namespace detail {

// PHY link speed definitions
enum class PhySpeed : uint8_t {
    e10M = 0,    // 10 Mbps
    e100M = 1,   // 100 Mbps
    e1000M = 2,  // 1 Gbps
    e2500M = 3,  // 2.5 Gbps
    e5G = 4,     // 5 Gbps
    e10G = 5     // 10 Gbps
};

// PHY link duplex definitions
enum class PhyDuplex : uint8_t {
    eHalf = 0,  // Half duplex mode
    eFull = 1   // Full duplex mode
};

// PHY loopback mode definitions
enum class PhyLoopback : uint8_t {
    eLocal = 0,   // Local loopback mode
    eRemote = 1   // Remote loopback mode
};

// PHY interrupt type definitions
enum class PhyInterruptType : uint8_t {
    eDisable = 0,     // Interrupt disabled
    eActiveLow = 1,   // Interrupt active low
    eActiveHigh = 2   // Interrupt active high
};

// Forward declaration
class GigabitMac;

class PhyRtl8211f : public ftl::Singleton<PhyRtl8211f> {
public:
    PhyRtl8211f(GigabitMac& mac, uint8_t phyAddr, bool autoNeg);
    ~PhyRtl8211f() = delete;

    // PHY operations - return true on success, false on failure
    bool initialize();
    bool getAutoNegotiationStatus(bool* status);
    bool getLinkStatus(bool* status);
    bool getLinkSpeedDuplex(PhySpeed* speed, PhyDuplex* duplex);
    bool setLinkSpeedDuplex(PhySpeed speed, PhyDuplex duplex);
    bool enableLoopback(PhyLoopback mode, PhySpeed speed, bool enable);
    bool enableLinkInterrupt(PhyInterruptType type);
    bool clearInterrupt();

private:
    GigabitMac& mac_;
    uint8_t phyAddr_ = 0;
    bool autoNeg_ = true;
};

} // namespace detail
} // namespace ethernet
