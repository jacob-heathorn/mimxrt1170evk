#include "phyrtl8211f.h"
#include "gigabit_mac.h"
#include <cassert>
#include <cstddef>

/*! @brief Defines the PHY basic registers. */
#define PHY_ID1_REG                (0x02U)  /*!< The PHY ID1 register. */
#define PHY_BASICCONTROL_REG       (0x00U)  /*!< The PHY basic control register. */
#define PHY_BASICSTATUS_REG        (0x01U)  /*!< The PHY basic status register. */
#define PHY_AUTONEG_ADVERTISE_REG  (0x04U)  /*!< The PHY auto-negotiation advertisement register. */
#define PHY_1000BASET_CONTROL_REG  (0x09U)  /*!< The PHY 1000BASE-T control register. */

/*! @brief Defines the mask flag in basic control register. */
#define PHY_BCTL_RESET_MASK         ((uint16_t)0x8000U) /*!< The PHY reset mask. */
#define PHY_BCTL_AUTONEG_MASK       ((uint16_t)0x1000U) /*!< The PHY auto-negotiation mask. */
#define PHY_BCTL_RESTART_AUTONEG_MASK ((uint16_t)0x0200U) /*!< The PHY restart auto-negotiation mask. */
#define PHY_BCTL_ISOLATE_MASK       ((uint16_t)0x0400U) /*!< The PHY isolate mask. */
#define PHY_BCTL_SPEED0_MASK        ((uint16_t)0x2000U) /*!< The PHY speed bit 0 mask. */
#define PHY_BCTL_SPEED1_MASK        ((uint16_t)0x0040U) /*!< The PHY speed bit 1 mask. */
#define PHY_BCTL_DUPLEX_MASK        ((uint16_t)0x0100U) /*!< The PHY duplex mask. */
#define PHY_BCTL_LOOP_MASK          ((uint16_t)0x4000U) /*!< The PHY loop mask. */

/*! @brief Defines the mask flag in basic status register. */
#define PHY_BSTATUS_AUTONEGCOMP_MASK ((uint16_t)0x0020U) /*!< The PHY auto-negotiation complete mask. */

/*! @brief Defines the mask flag in auto-negotiation advertise register. */
#define PHY_100BASETX_FULLDUPLEX_MASK ((uint16_t)0x0100U) /*!< The PHY 100BASE-TX full duplex mask. */
#define PHY_100BASETX_HALFDUPLEX_MASK ((uint16_t)0x0080U) /*!< The PHY 100BASE-TX half duplex mask. */
#define PHY_10BASETX_FULLDUPLEX_MASK  ((uint16_t)0x0040U) /*!< The PHY 10BASE-TX full duplex mask. */
#define PHY_10BASETX_HALFDUPLEX_MASK  ((uint16_t)0x0020U) /*!< The PHY 10BASE-TX half duplex mask. */
#define PHY_IEEE802_3_SELECTOR_MASK   ((uint16_t)0x0001U) /*!< The PHY IEEE802.3 selector mask. */

/*! @brief Defines the mask flag in 1000BASE-T control register. */
#define PHY_1000BASET_FULLDUPLEX_MASK ((uint16_t)0x0200U) /*!< The PHY 1000BASE-T full duplex mask. */

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

bool PhyRtl8211f::initialize()
{
    uint32_t counter  = PHY_READID_TIMEOUT_COUNT;
    uint16_t regValue = 0U;
    /* Check PHY ID. */
    do
    {
        regValue = mac_.mdioRead(phyAddr_, PHY_ID1_REG);
        counter--;
    } while ((regValue != PHY_CONTROL_ID1) && (counter != 0U));

    if (counter == 0U)
    {
        return false;
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

    if (!clearInterrupt())
    {
        return false;
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
        if (!setLinkSpeedDuplex(PhySpeed::e1000M, PhyDuplex::eFull))
        {
            return false;
        }
    }

    // Enable link interrupt (active low)
    return enableLinkInterrupt(PhyInterruptType::eActiveLow);
}

bool PhyRtl8211f::getAutoNegotiationStatus(bool *status)
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
    return true;
}

bool PhyRtl8211f::getLinkStatus(bool *status)
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
    return true;
}

bool PhyRtl8211f::getLinkSpeedDuplex(PhySpeed *speed, PhyDuplex *duplex)
{
    assert(!((speed == nullptr) && (duplex == nullptr)));

    uint16_t regValue;

    /* Read the status register. */
    regValue = mac_.mdioRead(phyAddr_, PHY_SPECIFIC_STATUS_REG);

    if (speed != nullptr)
    {
        switch ((regValue & PHY_SSTATUS_LINKSPEED_MASK) >> PHY_SSTATUS_LINKSPEED_SHIFT)
        {
            case 0:  // 10M
                *speed = PhySpeed::e10M;
                break;
            case 1:  // 100M
                *speed = PhySpeed::e100M;
                break;
            case 2:  // 1000M
                *speed = PhySpeed::e1000M;
                break;
            default:
                *speed = PhySpeed::e10M;
                break;
        }
    }

    if (duplex != nullptr)
    {
        if ((regValue & PHY_SSTATUS_LINKDUPLEX_MASK) != 0U)
        {
            *duplex = PhyDuplex::eFull;
        }
        else
        {
            *duplex = PhyDuplex::eHalf;
        }
    }

    return true;
}

bool PhyRtl8211f::setLinkSpeedDuplex(PhySpeed speed, PhyDuplex duplex)
{
    uint16_t regValue;

    regValue = mac_.mdioRead(phyAddr_, PHY_BASICCONTROL_REG);

    /* Disable the auto-negotiation and set according to user-defined configuration. */
    regValue &= ~PHY_BCTL_AUTONEG_MASK;
    if (speed == PhySpeed::e1000M)
    {
        regValue &= PHY_BCTL_SPEED0_MASK;
        regValue |= PHY_BCTL_SPEED1_MASK;
    }
    else if (speed == PhySpeed::e100M)
    {
        regValue |= PHY_BCTL_SPEED0_MASK;
        regValue &= ~PHY_BCTL_SPEED1_MASK;
    }
    else
    {
        regValue &= ~PHY_BCTL_SPEED0_MASK;
        regValue &= ~PHY_BCTL_SPEED1_MASK;
    }
    if (duplex == PhyDuplex::eFull)
    {
        regValue |= PHY_BCTL_DUPLEX_MASK;
    }
    else
    {
        regValue &= ~PHY_BCTL_DUPLEX_MASK;
    }
    mac_.mdioWrite(phyAddr_, PHY_BASICCONTROL_REG, regValue);

    return true;
}

bool PhyRtl8211f::enableLoopback(PhyLoopback mode, PhySpeed speed, bool enable)
{
    /* This PHY only supports local loopback. */
    assert(mode == PhyLoopback::eLocal);

    uint16_t regValue;

    /* Set the loop mode. */
    if (enable)
    {
        if (speed == PhySpeed::e1000M)
        {
            regValue = PHY_BCTL_SPEED1_MASK | PHY_BCTL_DUPLEX_MASK | PHY_BCTL_LOOP_MASK;
        }
        else if (speed == PhySpeed::e100M)
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
    return true;
}

bool PhyRtl8211f::enableLinkInterrupt(PhyInterruptType type)
{
    assert(type != PhyInterruptType::eActiveHigh);

    uint16_t regValue;

    mac_.mdioWrite(phyAddr_, PHY_PAGE_SELECT_REG, PHY_PAGE_INTR_ADDR);

    /* Read operation will clear pending interrupt before enable interrupt. */
    regValue = mac_.mdioRead(phyAddr_, PHY_INER_REG);

    /* Enable/Disable link up+down interrupt. */
    if (type != PhyInterruptType::eDisable)
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

    return true;
}

bool PhyRtl8211f::clearInterrupt()
{
    /* Found both read reg 0x1D from page 0 or page 0xA42 are useful. But datasheet
       describes it's in page 0xA42. Here use simpler implementation. */
    // Reading the interrupt status register clears it
    mac_.mdioRead(phyAddr_, PHY_INSR_REG);
    return true;
}

} // namespace detail
} // namespace ethernet