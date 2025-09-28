/*
 * Copyright 2020-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PHYRTL8211F_H_
#define _PHYRTL8211F_H_

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

    // PHY operations
    status_t initialize();
    status_t getAutoNegotiationStatus(bool* status);
    status_t getLinkStatus(bool* status);
    status_t getLinkSpeedDuplex(phy_speed_t* speed, phy_duplex_t* duplex);
    status_t setLinkSpeedDuplex(phy_speed_t speed, phy_duplex_t duplex);
    status_t enableLoopback(phy_loop_t mode, phy_speed_t speed, bool enable);
    status_t enableLinkInterrupt(phy_interrupt_type_t type);
    status_t clearInterrupt();

private:
    GigabitMac& mac_;
    uint8_t phyAddr_ = 0;
    bool autoNeg_ = true;
};

} // namespace detail
} // namespace ethernet

#endif /* _PHYRTL8211F_H_ */