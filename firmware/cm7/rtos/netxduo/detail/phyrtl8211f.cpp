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

/*! @brief MDIO MMD Devices .*/
#define PHY_MDIO_MMD_PCS 3U
#define PHY_MDIO_MMD_AN  7U

/*! @brief MDIO MMD Physical Coding layer device registers .*/
#define PHY_MDIO_PCS_EEE_CAP 0x14U /*!< EEE capability */

/*! @brief MDIO MMD AutoNegotiation device registers .*/
#define PHY_MDIO_AN_EEE_ADV 0x3CU /*!< EEE advertisement */

/*! @brief MDIO MMD EEE mask flags. (common for adv and cap) */
#define PHY_MDIO_EEE_100TX 0x2U
#define PHY_MDIO_EEE_1000T 0x4U

/*! @brief Defines the timeout macro. */
#define PHY_READID_TIMEOUT_COUNT 1000U


status_t PHY_RTL8211F_Init(phy_handle_t *handle, const phy_config_t *config)
{
    uint32_t counter  = PHY_READID_TIMEOUT_COUNT;
    uint16_t regValue = 0U;
    status_t result;

    /* Assign PHY address and operation resource. */
    handle->phyAddr  = config->phyAddr;
    handle->resource = config->resource;

    /* Check PHY ID. */
    do
    {
        regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_ID1_REG);
        counter--;
    } while ((regValue != PHY_CONTROL_ID1) && (counter != 0U));

    if (counter == 0U)
    {
        return kStatus_Fail;
    }

    /* Reset PHY. */
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_BASICCONTROL_REG, PHY_BCTL_RESET_MASK);

    do
    {
        regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_BASICCONTROL_REG);
    } while ((regValue & PHY_BCTL_RESET_MASK) != 0U);

    /* The RGMII specifies output TXC/RXC and TXD/RXD without any clock skew. Need to add skew on clock line
       to make sure the other side sample right data. This can also be done in PCB traces. */
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_PAGE_SELECT_REG, PHY_PAGE_RGMII_TXRX_DELAY_ADDR);
    /* Set Tx Delay. */
    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_RGMII_TX_DELAY_REG);
    regValue |= PHY_RGMII_TX_DELAY_MASK;
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_RGMII_TX_DELAY_REG, regValue);

    /* Set Rx Delay. */
    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_RGMII_RX_DELAY_REG);
    regValue |= PHY_RGMII_RX_DELAY_MASK;
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_RGMII_RX_DELAY_REG, regValue);
    /* Restore to default page 0 */
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_PAGE_SELECT_REG, 0x0);

    /* EEE not supported - assert if enabled */
    assert(!config->enableEEE && "EEE (Energy Efficient Ethernet) is not supported");

    /* Set INT pin as interrupt mode. */
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_PAGE_SELECT_REG, PHY_PAGE_INTR_PIN_ADDR);
    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_PAGE_INTR_PIN_REG);
    regValue &= ~PHY_PAGE_INTR_PIN_MASK;
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_PAGE_INTR_PIN_REG, regValue);
    /* Restore to default page 0 */
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_PAGE_SELECT_REG, 0);

    result = PHY_RTL8211F_ClearInterrupt(handle);
    if (result != kStatus_Success)
    {
        return result;
    }

    if (config->autoNeg)
    {
        /* Set the auto-negotiation. */
        ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_AUTONEG_ADVERTISE_REG,
                                    PHY_100BASETX_FULLDUPLEX_MASK | PHY_100BASETX_HALFDUPLEX_MASK |
                                        PHY_10BASETX_FULLDUPLEX_MASK | PHY_10BASETX_HALFDUPLEX_MASK |
                                        PHY_IEEE802_3_SELECTOR_MASK);
        ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_1000BASET_CONTROL_REG, PHY_1000BASET_FULLDUPLEX_MASK);
        regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_BASICCONTROL_REG);
        ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_BASICCONTROL_REG,
                                    (regValue | PHY_BCTL_AUTONEG_MASK | PHY_BCTL_RESTART_AUTONEG_MASK));
    }
    else
    {
        /* Disable isolate mode */
        regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_BASICCONTROL_REG);
        regValue &= ~PHY_BCTL_ISOLATE_MASK;
        ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_BASICCONTROL_REG, regValue);

        /* Disable the auto-negotiation and set user-defined speed/duplex configuration. */
        result = PHY_RTL8211F_SetLinkSpeedDuplex(handle, config->speed, config->duplex);
        if (result != kStatus_Success)
        {
            return result;
        }
    }

    result = PHY_RTL8211F_EnableLinkInterrupt(handle, config->intrType);
    return result;
}

status_t PHY_RTL8211F_Write(phy_handle_t *handle, uint8_t phyReg, uint16_t data)
{
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, phyReg, data);
    return kStatus_Success;
}

status_t PHY_RTL8211F_Read(phy_handle_t *handle, uint8_t phyReg, uint16_t *pData)
{
    *pData = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, phyReg);
    return kStatus_Success;
}

status_t PHY_RTL8211F_GetAutoNegotiationStatus(phy_handle_t *handle, bool *status)
{
    assert(status);

    uint16_t regValue;

    *status = false;

    /* Check auto negotiation complete. */
    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_BASICSTATUS_REG);
    if ((regValue & PHY_BSTATUS_AUTONEGCOMP_MASK) != 0U)
    {
        *status = true;
    }
    return kStatus_Success;
}

status_t PHY_RTL8211F_GetLinkStatus(phy_handle_t *handle, bool *status)
{
    assert(status);

    uint16_t regValue;

    /* Read the basic status register. */
    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_SPECIFIC_STATUS_REG);
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

status_t PHY_RTL8211F_GetLinkSpeedDuplex(phy_handle_t *handle, phy_speed_t *speed, phy_duplex_t *duplex)
{
    assert(!((speed == NULL) && (duplex == NULL)));

    uint16_t regValue;

    /* Read the status register. */
    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_SPECIFIC_STATUS_REG);

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

status_t PHY_RTL8211F_SetLinkSpeedDuplex(phy_handle_t *handle, phy_speed_t speed, phy_duplex_t duplex)
{
    uint16_t regValue;

    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_BASICCONTROL_REG);

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
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_BASICCONTROL_REG, regValue);

    return kStatus_Success;
}

status_t PHY_RTL8211F_EnableLoopback(phy_handle_t *handle, phy_loop_t mode, phy_speed_t speed, bool enable)
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
        ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_BASICCONTROL_REG, regValue);
    }
    else
    {
        /* First read the current status in control register. */
        regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_BASICCONTROL_REG);
        regValue &= ~PHY_BCTL_LOOP_MASK;
        ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_BASICCONTROL_REG, (regValue | PHY_BCTL_RESTART_AUTONEG_MASK));
    }
    return kStatus_Success;
}

status_t PHY_RTL8211F_EnableLinkInterrupt(phy_handle_t *handle, phy_interrupt_type_t type)
{
    assert(type != kPHY_IntrActiveHigh);

    uint16_t regValue;

    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_PAGE_SELECT_REG, PHY_PAGE_INTR_ADDR);

    /* Read operation will clear pending interrupt before enable interrupt. */
    regValue = ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_INER_REG);

    /* Enable/Disable link up+down interrupt. */
    if (type != kPHY_IntrDisable)
    {
        regValue |= PHY_INER_LINKSTATUS_CHANGE_MASK;
    }
    else
    {
        regValue &= ~PHY_INER_LINKSTATUS_CHANGE_MASK;
    }
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_INER_REG, regValue);

    /* Restore to default page 0 */
    ethernet::detail::GigabitMac::instance().mdioWrite(handle->phyAddr, PHY_PAGE_SELECT_REG, 0);

    return kStatus_Success;
}

status_t PHY_RTL8211F_ClearInterrupt(phy_handle_t *handle)
{
    /* Found both read reg 0x1D from page 0 or page 0xA42 are useful. But datasheet
       describes it's in page 0xA42. Here use simpler implementation. */
    // Reading the interrupt status register clears it
    ethernet::detail::GigabitMac::instance().mdioRead(handle->phyAddr, PHY_INSR_REG);
    return kStatus_Success;
}

// MMD functions removed - no longer needed after removing EEE support
