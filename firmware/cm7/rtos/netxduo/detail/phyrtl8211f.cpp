/*
 * Copyright 2020-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "phyrtl8211f.h"
#include "gigabit_mac.h"
#include <cassert>

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Defines the PHY RTL8211F vendor defined registers. */
#define PHY_SPECIFIC_STATUS_REG (0x1AU) /*!< The PHY specific status register. */
#define PHY_PAGE_SELECT_REG     (0x1FU) /*!< The PHY page select register. */

/*! @brief Defines the PHY RTL8211F ID number. */
#define PHY_CONTROL_ID1 (0x001CU) /*!< The PHY ID1 . */

/*! @brief Defines the mask flag in interrupt enable register. */
#define PHY_INER_LINKSTATUS_CHANGE_MASK ((uint16_t)0x0010U) /*!< The PHY link status change interrupt mask. */

/*! @brief Defines the mask flag in specific status register. */
#define PHY_SSTATUS_LINKSTATUS_MASK ((uint16_t)0x0004U) /*!< The PHY link status mask. */
#define PHY_SSTATUS_LINKSPEED_MASK  ((uint16_t)0x0030U) /*!< The PHY link speed mask. */
#define PHY_SSTATUS_LINKDUPLEX_MASK ((uint16_t)0x0008U) /*!< The PHY link duplex mask. */
#define PHY_SSTATUS_LINKSPEED_SHIFT (4U)                /*!< The link speed shift */

/*! @brief Defines the PHY RTL8211F extra page and the registers in specified page. */
#define PHY_PAGE_RGMII_TXRX_DELAY_ADDR (0xD08U) /*!< The register page including RGMII TX/RX delay setting. */
#define PHY_RGMII_TX_DELAY_REG         (0x11U)  /*!< The RGMII TXC delay register. */
#define PHY_RGMII_RX_DELAY_REG         (0x15U)  /*!< The RGMII RXC delay register. */
#define PHY_RGMII_TX_DELAY_MASK        ((uint16_t)0x0100U) /*!< The RGMII TXC delay mask. */
#define PHY_RGMII_RX_DELAY_MASK        ((uint16_t)0x0008U) /*!< The RGMII RXC delay mask. */

#define PHY_PAGE_INTR_PIN_ADDR (0xD40U)            /*!< The register page including PHY interrupt pin setting. */
#define PHY_PAGE_INTR_PIN_REG  (0x16U)             /*!< The PHY interrupt pin setting register. */
#define PHY_PAGE_INTR_PIN_MASK ((uint16_t)0x0020U) /*!< The PHY interrupt pin setting mask. */

#define PHY_PAGE_INTR_ADDR (0xA42U)                /*!< The register page including interrupt control setting. */
#define PHY_INER_REG       (0x12U)                 /*!< The PHY interrupt enable register. */
#define PHY_INSR_REG       (0x1DU)                 /*!< The PHY interrupt status register. */

/*! @brief Defines the timeout macro. */
#define PHY_READID_TIMEOUT_COUNT 1000U

namespace ethernet {
namespace detail {

PhyRtl8211f::PhyRtl8211f(GigabitMac& mac, uint8_t phyAddr, bool autoNeg)
    : mac_(mac)
    , phyAddr_(phyAddr)
    , autoNeg_(autoNeg)
{
}

status_t PhyRtl8211f::initialize()
{
    uint32_t counter  = PHY_READID_TIMEOUT_COUNT;
    uint16_t regValue = 0U;
    status_t result;

    /* Check PHY ID. */
    do
    {
        regValue = mac_.mdioRead(phyAddr_, PHY_ID1_REG);
        counter--;
    } while ((regValue != PHY_CONTROL_ID1) && (counter != 0U));

    if (counter == 0U)
    {
        return kStatus_Fail;
    }

    /* Reset PHY. */
    mac_.mdioWrite(phyAddr_, PHY_BASICCONTROL_REG, PHY_BCTL_RESET_MASK);

    do
    {
        regValue = mac_.mdioRead(phyAddr_, PHY_BASICCONTROL_REG);
    } while ((regValue & PHY_BCTL_RESET_MASK) != 0U);

    /* The RGMII specifies output TXC/RXC and TXD/RXD without any clock skew. Need to add skew on clock line
       to make sure the other side sample right data. This can also be done in PCB traces. */
    mac_.mdioWrite(phyAddr_, PHY_PAGE_SELECT_REG, PHY_PAGE_RGMII_TXRX_DELAY_ADDR);
    /* Set Tx Delay. */
    regValue = mac_.mdioRead(phyAddr_, PHY_RGMII_TX_DELAY_REG);
    regValue |= PHY_RGMII_TX_DELAY_MASK;
    mac_.mdioWrite(phyAddr_, PHY_RGMII_TX_DELAY_REG, regValue);

    /* Set Rx Delay. */
    regValue = mac_.mdioRead(phyAddr_, PHY_RGMII_RX_DELAY_REG);
    regValue |= PHY_RGMII_RX_DELAY_MASK;
    mac_.mdioWrite(phyAddr_, PHY_RGMII_RX_DELAY_REG, regValue);
    /* Restore to default page 0 */
    mac_.mdioWrite(phyAddr_, PHY_PAGE_SELECT_REG, 0x0);

    /* Set INT pin as interrupt mode. */
    mac_.mdioWrite(phyAddr_, PHY_PAGE_SELECT_REG, PHY_PAGE_INTR_PIN_ADDR);
    regValue = mac_.mdioRead(phyAddr_, PHY_PAGE_INTR_PIN_REG);
    regValue &= ~PHY_PAGE_INTR_PIN_MASK;
    mac_.mdioWrite(phyAddr_, PHY_PAGE_INTR_PIN_REG, regValue);
    /* Restore to default page 0 */
    mac_.mdioWrite(phyAddr_, PHY_PAGE_SELECT_REG, 0);

    result = clearInterrupt();
    if (result != kStatus_Success)
    {
        return result;
    }

    if (autoNeg_)
    {
        /* Set the auto-negotiation. */
        mac_.mdioWrite(phyAddr_, PHY_AUTONEG_ADVERTISE_REG,
                                    PHY_100BASETX_FULLDUPLEX_MASK | PHY_100BASETX_HALFDUPLEX_MASK |
                                        PHY_10BASETX_FULLDUPLEX_MASK | PHY_10BASETX_HALFDUPLEX_MASK |
                                        PHY_IEEE802_3_SELECTOR_MASK);
        mac_.mdioWrite(phyAddr_, PHY_1000BASET_CONTROL_REG, PHY_1000BASET_FULLDUPLEX_MASK);
        regValue = mac_.mdioRead(phyAddr_, PHY_BASICCONTROL_REG);
        mac_.mdioWrite(phyAddr_, PHY_BASICCONTROL_REG,
                                    (regValue | PHY_BCTL_AUTONEG_MASK | PHY_BCTL_RESTART_AUTONEG_MASK));
    }
    else
    {
        /* Disable isolate mode */
        regValue = mac_.mdioRead(phyAddr_, PHY_BASICCONTROL_REG);
        regValue &= ~PHY_BCTL_ISOLATE_MASK;
        mac_.mdioWrite(phyAddr_, PHY_BASICCONTROL_REG, regValue);

        /* Disable the auto-negotiation and set default speed/duplex. */
        result = setLinkSpeedDuplex(kPHY_Speed1000M, kPHY_FullDuplex);
        if (result != kStatus_Success)
        {
            return result;
        }
    }

    // Enable link interrupt (active low)
    result = enableLinkInterrupt(kPHY_IntrActiveLow);

    return result;
}

status_t PhyRtl8211f::getAutoNegotiationStatus(bool *status)
{
    assert(status);

    uint16_t regValue;

    *status = false;

    /* Check auto negotiation complete. */
    regValue = mac_.mdioRead(phyAddr_, PHY_BASICSTATUS_REG);
    if ((regValue & PHY_BSTATUS_AUTONEGCOMP_MASK) != 0U)
    {
        *status = true;
    }
    return kStatus_Success;
}

status_t PhyRtl8211f::getLinkStatus(bool *status)
{
    assert(status);

    uint16_t regValue;

    /* Read the basic status register. */
    regValue = mac_.mdioRead(phyAddr_, PHY_SPECIFIC_STATUS_REG);
    if ((PHY_SSTATUS_LINKSTATUS_MASK & regValue) != 0U)
    {
        /* Link up. */
        *status = true;
    }
    else
    {
        /* Link down. */
        *status = false;
    }
    return kStatus_Success;
}

status_t PhyRtl8211f::getLinkSpeedDuplex(phy_speed_t *speed, phy_duplex_t *duplex)
{
    assert(!((speed == NULL) && (duplex == NULL)));

    uint16_t regValue;

    /* Read the status register. */
    regValue = mac_.mdioRead(phyAddr_, PHY_SPECIFIC_STATUS_REG);

    if (speed != NULL)
    {
        switch ((regValue & PHY_SSTATUS_LINKSPEED_MASK) >> PHY_SSTATUS_LINKSPEED_SHIFT)
        {
            case (uint16_t)kPHY_Speed10M:
                *speed = kPHY_Speed10M;
                break;
            case (uint16_t)kPHY_Speed100M:
                *speed = kPHY_Speed100M;
                break;
            case (uint16_t)kPHY_Speed1000M:
                *speed = kPHY_Speed1000M;
                break;
            default:
                *speed = kPHY_Speed10M;
                break;
        }
    }

    if (duplex != NULL)
    {
        if ((regValue & PHY_SSTATUS_LINKDUPLEX_MASK) != 0U)
        {
            *duplex = kPHY_FullDuplex;
        }
        else
        {
            *duplex = kPHY_HalfDuplex;
        }
    }

    return kStatus_Success;
}

status_t PhyRtl8211f::setLinkSpeedDuplex(phy_speed_t speed, phy_duplex_t duplex)
{
    uint16_t regValue;

    regValue = mac_.mdioRead(phyAddr_, PHY_BASICCONTROL_REG);

    /* Disable the auto-negotiation and set according to user-defined configuration. */
    regValue &= ~PHY_BCTL_AUTONEG_MASK;
    if (speed == kPHY_Speed1000M)
    {
        regValue &= PHY_BCTL_SPEED0_MASK;
        regValue |= PHY_BCTL_SPEED1_MASK;
    }
    else if (speed == kPHY_Speed100M)
    {
        regValue |= PHY_BCTL_SPEED0_MASK;
        regValue &= ~PHY_BCTL_SPEED1_MASK;
    }
    else
    {
        regValue &= ~PHY_BCTL_SPEED0_MASK;
        regValue &= ~PHY_BCTL_SPEED1_MASK;
    }
    if (duplex == kPHY_FullDuplex)
    {
        regValue |= PHY_BCTL_DUPLEX_MASK;
    }
    else
    {
        regValue &= ~PHY_BCTL_DUPLEX_MASK;
    }
    mac_.mdioWrite(phyAddr_, PHY_BASICCONTROL_REG, regValue);

    return kStatus_Success;
}

status_t PhyRtl8211f::enableLoopback(phy_loop_t mode, phy_speed_t speed, bool enable)
{
    /* This PHY only supports local loopback. */
    assert(mode == kPHY_LocalLoop);

    uint16_t regValue;

    /* Set the loop mode. */
    if (enable)
    {
        if (speed == kPHY_Speed1000M)
        {
            regValue = PHY_BCTL_SPEED1_MASK | PHY_BCTL_DUPLEX_MASK | PHY_BCTL_LOOP_MASK;
        }
        else if (speed == kPHY_Speed100M)
        {
            regValue = PHY_BCTL_SPEED0_MASK | PHY_BCTL_DUPLEX_MASK | PHY_BCTL_LOOP_MASK;
        }
        else
        {
            regValue = PHY_BCTL_DUPLEX_MASK | PHY_BCTL_LOOP_MASK;
        }
        mac_.mdioWrite(phyAddr_, PHY_BASICCONTROL_REG, regValue);
    }
    else
    {
        /* First read the current status in control register. */
        regValue = mac_.mdioRead(phyAddr_, PHY_BASICCONTROL_REG);
        regValue &= ~PHY_BCTL_LOOP_MASK;
        mac_.mdioWrite(phyAddr_, PHY_BASICCONTROL_REG, (regValue | PHY_BCTL_RESTART_AUTONEG_MASK));
    }
    return kStatus_Success;
}

status_t PhyRtl8211f::enableLinkInterrupt(phy_interrupt_type_t type)
{
    assert(type != kPHY_IntrActiveHigh);

    uint16_t regValue;

    mac_.mdioWrite(phyAddr_, PHY_PAGE_SELECT_REG, PHY_PAGE_INTR_ADDR);

    /* Read operation will clear pending interrupt before enable interrupt. */
    regValue = mac_.mdioRead(phyAddr_, PHY_INER_REG);

    /* Enable/Disable link up+down interrupt. */
    if (type != kPHY_IntrDisable)
    {
        regValue |= PHY_INER_LINKSTATUS_CHANGE_MASK;
    }
    else
    {
        regValue &= ~PHY_INER_LINKSTATUS_CHANGE_MASK;
    }
    mac_.mdioWrite(phyAddr_, PHY_INER_REG, regValue);

    /* Restore to default page 0 */
    mac_.mdioWrite(phyAddr_, PHY_PAGE_SELECT_REG, 0);

    return kStatus_Success;
}

status_t PhyRtl8211f::clearInterrupt()
{
    /* Found both read reg 0x1D from page 0 or page 0xA42 are useful. But datasheet
       describes it's in page 0xA42. Here use simpler implementation. */
    // Reading the interrupt status register clears it
    mac_.mdioRead(phyAddr_, PHY_INSR_REG);
    return kStatus_Success;
}

} // namespace detail
} // namespace ethernet