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

class PhyRtl8211f : public ftl::Singleton<PhyRtl8211f> {
public:
    PhyRtl8211f();
    ~PhyRtl8211f() = delete;

    // Initialize with handle and config
    void setHandle(uint8_t phyAddr, void* resource);

    // PHY operations
    status_t init(const phy_config_t* config);
    status_t write(uint8_t phyReg, uint16_t data);
    status_t read(uint8_t phyReg, uint16_t* pData);
    status_t getAutoNegotiationStatus(bool* status);
    status_t getLinkStatus(bool* status);
    status_t getLinkSpeedDuplex(phy_speed_t* speed, phy_duplex_t* duplex);
    status_t setLinkSpeedDuplex(phy_speed_t speed, phy_duplex_t duplex);
    status_t enableLoopback(phy_loop_t mode, phy_speed_t speed, bool enable);
    status_t enableLinkInterrupt(phy_interrupt_type_t type);
    status_t clearInterrupt();

private:
    uint8_t phyAddr_;
    void* resource_;
};

} // namespace detail
} // namespace ethernet

// C compatibility functions - these will forward to the singleton
#if defined(__cplusplus)
extern "C" {
#endif

status_t PHY_RTL8211F_Init(phy_handle_t *handle, const phy_config_t *config);
status_t PHY_RTL8211F_Write(phy_handle_t *handle, uint8_t phyReg, uint16_t data);
status_t PHY_RTL8211F_Read(phy_handle_t *handle, uint8_t phyReg, uint16_t *pData);
status_t PHY_RTL8211F_GetAutoNegotiationStatus(phy_handle_t *handle, bool *status);
status_t PHY_RTL8211F_GetLinkStatus(phy_handle_t *handle, bool *status);
status_t PHY_RTL8211F_GetLinkSpeedDuplex(phy_handle_t *handle, phy_speed_t *speed, phy_duplex_t *duplex);
status_t PHY_RTL8211F_SetLinkSpeedDuplex(phy_handle_t *handle, phy_speed_t speed, phy_duplex_t duplex);
status_t PHY_RTL8211F_EnableLoopback(phy_handle_t *handle, phy_loop_t mode, phy_speed_t speed, bool enable);
status_t PHY_RTL8211F_EnableLinkInterrupt(phy_handle_t *handle, phy_interrupt_type_t type);
status_t PHY_RTL8211F_ClearInterrupt(phy_handle_t *handle);

#if defined(__cplusplus)
}
#endif

#endif /* _PHYRTL8211F_H_ */