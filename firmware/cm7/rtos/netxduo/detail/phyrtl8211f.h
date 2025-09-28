#pragma once


#include "legacy/drivers/fsl_phy.h"
#include "ftl/singleton.hpp"

namespace ethernet {
namespace detail {

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
    bool getLinkSpeedDuplex(phy_speed_t* speed, phy_duplex_t* duplex);
    bool setLinkSpeedDuplex(phy_speed_t speed, phy_duplex_t duplex);
    bool enableLoopback(phy_loop_t mode, phy_speed_t speed, bool enable);
    bool enableLinkInterrupt(phy_interrupt_type_t type);
    bool clearInterrupt();

private:
    GigabitMac& mac_;
    uint8_t phyAddr_ = 0;
    bool autoNeg_ = true;
};

} // namespace detail
} // namespace ethernet
