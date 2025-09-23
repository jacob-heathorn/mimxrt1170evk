#include "gigabit_ethernet_driver.hpp"
#include <cstdio>
#include "registers/codegen/enet_1g.hpp"
#include "registers/codegen/iomuxc_gpr.hpp"
#include "registers/codegen/ccm.hpp"
#include "registers/codegen/gpio11.hpp"
#include "enet_pin_mux.h"
#include "fsl_clock.h"
#include "fsl_common.h"

static uint8_t tx_buffer_storage[GigabitEthernetDriver::kMaxFrameSize] __attribute__((aligned(64)));
static uint8_t rx_buffer_storage[GigabitEthernetDriver::kMaxFrameSize] __attribute__((aligned(64)));
static GigabitEthernetDriver::BufferDescriptor tx_bd_storage __attribute__((aligned(64)));
static GigabitEthernetDriver::BufferDescriptor rx_bd_storage __attribute__((aligned(64)));

GigabitEthernetDriver::GigabitEthernetDriver()
    : tx_bd_(&tx_bd_storage),
      rx_bd_(&rx_bd_storage),
      tx_buffer_(tx_buffer_storage),
      rx_buffer_(rx_buffer_storage) {
}

GigabitEthernetDriver::~GigabitEthernetDriver() {
}

bool GigabitEthernetDriver::Initialize() {
    printf("[ETH] Starting initialization\n");

    printf("[ETH] Initializing clock...\n");
    InitClock();

    printf("[ETH] Initializing pins...\n");
    InitPins();

    printf("[ETH] Resetting PHY...\n");
    ResetPhy();

    printf("[ETH] Initializing PHY...\n");
    if (!InitPhy()) {
        printf("[ETH] ERROR: PHY initialization failed\n");
        return false;
    }

    printf("[ETH] Initializing MAC...\n");
    if (!InitMac()) {
        printf("[ETH] ERROR: MAC initialization failed\n");
        return false;
    }

    printf("[ETH] Initialization complete\n");
    return true;
}

void GigabitEthernetDriver::InitClock() {
    const clock_sys_pll1_config_t sysPll1Config = {
        .pllDiv2En = true,
        .pllDiv5En = false,
        .ss = nullptr,
        .ssEnable = false
    };
    CLOCK_InitSysPll1(&sysPll1Config);

    clock_root_config_t rootCfg = {.clockOff = false, .mux = 4, .div = 4};
    CLOCK_SetRootClock(kCLOCK_Root_Enet2, &rootCfg);

    CLOCK_InitPfd(kCLOCK_PllSys2, kCLOCK_Pfd3, 24);
    rootCfg.mux = 7;
    rootCfg.div = 2;
    CLOCK_SetRootClock(kCLOCK_Root_Bus, &rootCfg);
}

void GigabitEthernetDriver::InitPins() {
    BOARD_InitEnet1GPins();

    nIOMUXC_GPR::GPR5::ref().bits.ENET1G_RGMII_EN = 1;

    SDK_DelayAtLeastUs(1000, CLOCK_GetFreq(kCLOCK_CpuClk));
}

void GigabitEthernetDriver::ResetPhy() {
    nGPIO11::GDIR::ref().bits.GDIR |= (1U << 14);

    nGPIO11::DR::ref().bits.DR &= ~(1U << 14);
    SDK_DelayAtLeastUs(20000, CLOCK_GetFreq(kCLOCK_CpuClk));

    nGPIO11::DR::ref().bits.DR |= (1U << 14);
    SDK_DelayAtLeastUs(60000, CLOCK_GetFreq(kCLOCK_CpuClk));
}

bool GigabitEthernetDriver::InitPhy() {
    printf("[PHY] Setting MDIO clock speed\n");
    nENET_1G::MSCR::ref().bits.MII_SPEED = 0x18;

    printf("[PHY] Reading PHY ID registers\n");
    uint16_t phyId1 = MdioRead(kPhyAddr, 0x02);
    uint16_t phyId2 = MdioRead(kPhyAddr, 0x03);
    printf("[PHY] PHY ID: 0x%04X:0x%04X\n", phyId1, phyId2);

    if (phyId1 != 0x001C) {
        printf("[PHY] ERROR: Unexpected PHY ID1 (expected 0x001C, got 0x%04X)\n", phyId1);
        return false;
    }

    printf("[PHY] Performing PHY software reset\n");
    MdioWrite(kPhyAddr, 0x00, 0x8000);

    printf("[PHY] Waiting for reset to complete...\n");
    uint32_t reset_timeout = 100000;
    uint16_t status;
    do {
        status = MdioRead(kPhyAddr, 0x00);
        reset_timeout--;
    } while ((status & 0x8000) != 0 && reset_timeout > 0);

    printf("[PHY] Control register after reset: 0x%04X\n", status);
    if (status & 0x8000) {
        printf("[PHY] ERROR: PHY reset timeout (bit still set after %lu attempts)\n", 100000UL - (unsigned long)reset_timeout);
        return false;
    }
    printf("[PHY] Reset completed successfully after %lu attempts\n", 100000UL - (unsigned long)reset_timeout);

    // Configure RGMII delays (based on RTL8211F driver)
    printf("[PHY] Configuring RGMII delays\n");

    // Page select register to access RGMII delay page
    MdioWrite(kPhyAddr, 0x1F, 0xD08);

    // Enable TX delay (register 0x11, bit 8)
    uint16_t tx_delay = MdioRead(kPhyAddr, 0x11);
    tx_delay |= 0x0100;
    MdioWrite(kPhyAddr, 0x11, tx_delay);

    // Enable RX delay (register 0x15, bit 3)
    uint16_t rx_delay = MdioRead(kPhyAddr, 0x15);
    rx_delay |= 0x0008;
    MdioWrite(kPhyAddr, 0x15, rx_delay);

    // Return to page 0
    MdioWrite(kPhyAddr, 0x1F, 0x0000);

    // Configure auto-negotiation advertisement registers
    printf("[PHY] Configuring auto-negotiation advertisement\n");

    // Set 1000BASE-T advertisement (register 9)
    // Advertise 1000BASE-T full duplex (bit 9) and half duplex (bit 8)
    MdioWrite(kPhyAddr, 0x09, 0x0300);

    // Set 100/10 BASE-T advertisement (register 4)
    // Advertise 100BASE-TX Full/Half, 10BASE-T Full/Half, 802.3
    MdioWrite(kPhyAddr, 0x04, 0x01E1);

    printf("[PHY] Starting auto-negotiation\n");
    // Enable and restart auto-negotiation
    MdioWrite(kPhyAddr, 0x00, 0x1340);  // Auto-neg enable + restart + full duplex + 1000Mbps

    // Wait for auto-negotiation to complete
    printf("[PHY] Waiting for auto-negotiation...\n");
    uint32_t autoneg_timeout = 50000;  // About 5 seconds
    uint16_t status_reg;
    do {
        status_reg = MdioRead(kPhyAddr, 0x01);  // Basic Status Register
        if (status_reg & 0x0020) {  // Auto-negotiation complete bit
            break;
        }
        SDK_DelayAtLeastUs(100, CLOCK_GetFreq(kCLOCK_CpuClk));
        autoneg_timeout--;
    } while (autoneg_timeout > 0);

    printf("[PHY] Basic Status Register (0x01): 0x%04X\n", status_reg);
    printf("[PHY]   Link status: %s\n", (status_reg & 0x0004) ? "UP" : "DOWN");
    printf("[PHY]   Auto-neg complete: %s\n", (status_reg & 0x0020) ? "YES" : "NO");
    printf("[PHY]   Auto-neg ability: %s\n", (status_reg & 0x0008) ? "YES" : "NO");

    // Read more PHY status registers for debugging
    uint16_t ctrl_reg = MdioRead(kPhyAddr, 0x00);  // Control Register
    printf("[PHY] Control Register (0x00): 0x%04X\n", ctrl_reg);

    // Read PHY Specific Status Register (vendor specific)
    uint16_t phy_status = MdioRead(kPhyAddr, 0x1A);  // RTL8211F specific status
    printf("[PHY] PHY Specific Status (0x1A): 0x%04X\n", phy_status);
    printf("[PHY]   Speed: ");
    switch ((phy_status >> 4) & 0x03) {
        case 0: printf("10 Mbps\n"); break;
        case 1: printf("100 Mbps\n"); break;
        case 2: printf("1000 Mbps\n"); break;
        default: printf("Reserved\n"); break;
    }
    printf("[PHY]   Duplex: %s\n", (phy_status & 0x0008) ? "Full" : "Half");
    printf("[PHY]   Link (vendor): %s\n", (phy_status & 0x0004) ? "UP" : "DOWN");

    // Read auto-negotiation advertisement and link partner ability
    uint16_t anar = MdioRead(kPhyAddr, 0x04);  // Auto-Negotiation Advertisement
    uint16_t anlpar = MdioRead(kPhyAddr, 0x05);  // Link Partner Ability
    printf("[PHY] Auto-Neg Advertisement (0x04): 0x%04X\n", anar);
    printf("[PHY] Link Partner Ability (0x05): 0x%04X\n", anlpar);

    // Read 1000BASE-T registers
    uint16_t gbcr = MdioRead(kPhyAddr, 0x09);  // 1000BASE-T Control
    uint16_t gbsr = MdioRead(kPhyAddr, 0x0A);  // 1000BASE-T Status
    printf("[PHY] 1000BASE-T Control (0x09): 0x%04X\n", gbcr);
    printf("[PHY] 1000BASE-T Status (0x0A): 0x%04X\n", gbsr);

    // Determine actual link speed from PHY specific status
    uint8_t speed_bits = (phy_status >> 4) & 0x03;
    switch (speed_bits) {
        case 0: phy_speed_ = 10; break;
        case 1: phy_speed_ = 100; break;
        case 2: phy_speed_ = 1000; break;
        default:
            printf("[PHY] ERROR: Invalid PHY speed value in status register: 0x%X\n", speed_bits);
            printf("[PHY] This should be 0 (10M), 1 (100M), or 2 (1000M)\n");
            return false;
    }
    phy_duplex_full_ = (phy_status & 0x0008) ? true : false;

    printf("[PHY] Negotiated: %lu Mbps %s duplex\n", (unsigned long)phy_speed_, phy_duplex_full_ ? "Full" : "Half");

    // Check for link status discrepancy
    bool basic_link = (status_reg & 0x0004) != 0;
    bool vendor_link = (phy_status & 0x0004) != 0;

    if (basic_link != vendor_link) {
        printf("[PHY] WARNING: Link status mismatch - Basic:%s, Vendor:%s\n",
               basic_link ? "UP" : "DOWN", vendor_link ? "UP" : "DOWN");
        // Trust the vendor-specific register
        if (vendor_link) {
            printf("[PHY] Using vendor link status: UP\n");
        }
    }

    printf("[PHY] PHY initialization successful\n");
    return true;
}

bool GigabitEthernetDriver::InitMac() {
    printf("[MAC] Performing MAC reset\n");
    nENET_1G::ECR::ref().bits.RESET = 1;
    uint32_t timeout = 10000;
    while (nENET_1G::ECR::ref().bits.RESET && timeout--) {
        __asm__("nop");
    }
    if (timeout == 0) {
        printf("[MAC] ERROR: MAC reset timeout\n");
        return false;
    }

    printf("[MAC] Clearing interrupt flags\n");
    nENET_1G::EIR::ref().value = 0xFFFFFFFF;
    nENET_1G::EIMR::ref().value = 0;

    // Clear and enable MIB counters
    printf("[MAC] Clearing and enabling MIB counters\n");
    nENET_1G::MIBC::ref().bits.MIB_CLEAR = nENET_1G::MIBC::eMIB_CLEAR::eONE;
    nENET_1G::MIBC::ref().bits.MIB_CLEAR = nENET_1G::MIBC::eMIB_CLEAR::eZERO;
    nENET_1G::MIBC::ref().bits.MIB_DIS = nENET_1G::MIBC::eMIB_DIS::eZERO;  // Enable MIB

    printf("[MAC] Configuring RX/TX control registers\n");
    // Based on nx_driver_imxrt.c: Configure RCR based on PHY speed
    uint32_t rcr = (1522 << 16) |  // MAX_FL (14+1500+4+CRC)
                   (1 << 2) |       // MII_MODE
                   (1 << 4);        // CRCFWD (no CRC pad required)

    // Only set RGMII_EN for gigabit mode
    if (phy_speed_ == 1000) {
        rcr |= (1 << 6);  // RGMII_EN for RGMII mode at 1000Mbps
    }
    // For 10/100 Mbps in RGMII mode, RGMII_EN should be 0

    nENET_1G::RCR::ref().value = rcr;
    printf("[MAC] RCR configured: 0x%08lX\n", (unsigned long)rcr);

    // TCR: Full duplex, FDEN=1 (bit 2)
    nENET_1G::TCR::ref().value = 0x00000004;

    // Set TFWR to store and forward (same as nx_driver_imxrt.c)
    nENET_1G::TFWR::ref().bits.STRFWD = nENET_1G::TFWR::eSTRFWD::eONE;  // Store and forward mode
    printf("[MAC] TFWR configured for store-and-forward mode\n");

    // Configure QOS for round-robin TX scheduling (from nx_driver_imxrt.c line 1639)
    nENET_1G::QOS::ref().bits.TX_SCHEME = nENET_1G::QOS::eTX_SCHEME::eRR;  // Round-robin scheme
    printf("[MAC] QOS configured for round-robin TX scheduling\n");

    // Configure TACC and RACC (from nx_driver_imxrt.c lines 1684-1687)
    // SHIFT16 enables padding removal
    nENET_1G::TACC::ref().bits.SHIFT16 = nENET_1G::TACC::eSHIFT16::eONE;
    nENET_1G::RACC::ref().bits.SHIFT16 = nENET_1G::RACC::eSHIFT16::eONE;
    nENET_1G::RACC::ref().bits.LINEDIS = nENET_1G::RACC::eLINEDIS::eONE;  // Discard bad frames
    printf("[MAC] TACC/RACC configured\n");

    printf("[MAC] Setting MAC address\n");
    // Set MAC address: 00:11:22:33:44:56 (same as nx_driver default)
    // PALR = MAC[0]<<24 | MAC[1]<<16 | MAC[2]<<8 | MAC[3]
    // PAUR = (MAC[4]<<8 | MAC[5]) << 16
    uint8_t mac_addr[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x56};
    uint32_t palr = ((uint32_t)mac_addr[0] << 24) |
                    ((uint32_t)mac_addr[1] << 16) |
                    ((uint32_t)mac_addr[2] << 8) |
                    ((uint32_t)mac_addr[3]);
    uint32_t paur = ((uint32_t)mac_addr[4] << 8) | ((uint32_t)mac_addr[5]);
    nENET_1G::PALR::ref().value = palr;
    nENET_1G::PAUR::ref().value = paur << 16;  // PADDR2 field is at bits 31:16
    printf("[MAC] MAC address set to: %02X:%02X:%02X:%02X:%02X:%02X\n",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);

    printf("[MAC] Initializing buffer descriptors\n");
    memset(tx_bd_, 0, sizeof(BufferDescriptor));
    memset(rx_bd_, 0, sizeof(BufferDescriptor));

    tx_bd_->control = kBdTxWrap;
    tx_bd_->buffer = (uint32_t)tx_buffer_;
    printf("[MAC] TX BD at 0x%08lX, buffer at 0x%08lX\n", (unsigned long)tx_bd_, (unsigned long)tx_buffer_);

    rx_bd_->control = kBdRxEmpty | kBdRxWrap;
    rx_bd_->buffer = (uint32_t)rx_buffer_;
    printf("[MAC] RX BD at 0x%08lX, buffer at 0x%08lX\n", (unsigned long)rx_bd_, (unsigned long)rx_buffer_);

    nENET_1G::TDSR::ref().value = (uint32_t)tx_bd_;
    nENET_1G::RDSR::ref().value = (uint32_t)rx_bd_;

    nENET_1G::MRBR::ref().value = kMaxFrameSize;

    printf("[MAC] Configuring ECR register (pre-enable)\n");
    // Based on nx_driver_imxrt.c: Set SPEED based on PHY negotiation
    // The ECR register gets configured in two steps:
    // 1. First set SPEED during enet_init_imx
    // 2. Later OR in ETHEREN|DBSWP during hardware_enable
    uint32_t ecr_val = 0;
    if (phy_speed_ == 1000) {
        ecr_val |= (1 << 5);  // SPEED bit for gigabit
        printf("[MAC] Configuring for 1000 Mbps\n");
    } else {
        // For 10/100 Mbps, SPEED bit = 0
        printf("[MAC] Configuring for %lu Mbps\n", (unsigned long)phy_speed_);
    }
    nENET_1G::ECR::ref().value = ecr_val;
    printf("[MAC] ECR pre-configured: 0x%08lX\n", (unsigned long)ecr_val);

    printf("[MAC] Enabling MAC (ETHEREN | DBSWP)\n");
    // From nx_driver_imxrt.c line 1977: OR in ETHEREN and DBSWP, preserving SPEED
    nENET_1G::ECR::ref().value |= (1 << 1) | (1 << 3);  // ETHEREN | DBSWP
    printf("[MAC] ECR final: 0x%08lX\n", (unsigned long)nENET_1G::ECR::ref().value);

    printf("[MAC] Activating RX descriptor\n");
    nENET_1G::RDAR::ref().bits.RDAR = 1;

    printf("[MAC] MAC initialization successful\n");
    return true;
}

bool GigabitEthernetDriver::SendPacket(const uint8_t* buffer, size_t length) {
    if (length > kMaxFrameSize) {
        printf("[TX] ERROR: Packet too large (%zu > %lu)\n", length, (unsigned long)kMaxFrameSize);
        return false;
    }

    // Wait for previous transmission to complete
    uint32_t wait_timeout = 10000;
    while ((tx_bd_->control & kBdTxReady) && wait_timeout--) {
        __asm__("nop");
    }

    if (tx_bd_->control & kBdTxReady) {
        printf("[TX] ERROR: TX buffer still busy\n");
        return false;
    }

    // Copy packet data
    memcpy(tx_buffer_, buffer, length);

    // Set up the buffer descriptor
    tx_bd_->length = length;
    tx_bd_->control = kBdTxReady | kBdTxLast | kBdTxWrap;

    // Clear any previous TX interrupt flags
    nENET_1G::EIR::ref().bits.TXF = 1;

    // Trigger transmission
    nENET_1G::TDAR::ref().bits.TDAR = 1;

    // Wait for transmission to complete
    uint32_t timeout = 100000;
    while ((tx_bd_->control & kBdTxReady) && timeout--) {
        __asm__("nop");
    }

    if (timeout == 0) {
        printf("[TX] ERROR: Transmission timeout\n");
        return false;
    }

    // Check for transmission errors in the buffer descriptor
    // Bit 15: Ready, Bit 11: Last, Bit 10: TC, Bit 9: ABC
    if (tx_bd_->control & 0x8000) {
        // Still ready means transmission didn't complete
        printf("[TX] ERROR: Transmission didn't complete (BD control: 0x%04X)\n", tx_bd_->control);
        printf("[TX] ECR: 0x%08lX, EIR: 0x%08lX\n",
               (unsigned long)nENET_1G::ECR::ref().value,
               (unsigned long)nENET_1G::EIR::ref().value);

        // Check more status registers for debugging
        printf("[TX] MIBC: 0x%08lX (MIB control)\n", (unsigned long)nENET_1G::MIBC::ref().value);
        printf("[TX] RMON_T_PACKETS: 0x%08lX\n", (unsigned long)nENET_1G::RMON_T_PACKETS::ref().value);
        printf("[TX] IEEE_T_FRAME_OK: 0x%08lX\n", (unsigned long)nENET_1G::IEEE_T_FRAME_OK::ref().value);
        printf("[TX] TDAR: 0x%08lX\n", (unsigned long)nENET_1G::TDAR::ref().value);
        printf("[TX] TDSR: 0x%08lX\n", (unsigned long)nENET_1G::TDSR::ref().value);

        // Check if MAC is actually enabled
        if (!(nENET_1G::ECR::ref().value & 0x02)) {
            printf("[TX] ERROR: MAC is not enabled!\n");
        }

        return false;
    }

    return true;
}

void GigabitEthernetDriver::MdioWrite(uint8_t phyAddr, uint8_t regAddr, uint16_t data) {
    if (!WaitForMdio()) {
        return;
    }

    nENET_1G::EIR::ref().bits.MII = 1;

    uint32_t mmfr = (1U << 30) |
                    (1U << 28) |
                    ((uint32_t)phyAddr << 23) |
                    ((uint32_t)regAddr << 18) |
                    (2U << 16) |
                    data;

    nENET_1G::MMFR::ref().value = mmfr;

    WaitForMdio();
}

uint16_t GigabitEthernetDriver::MdioRead(uint8_t phyAddr, uint8_t regAddr) {
    if (!WaitForMdio()) {
        return 0;
    }

    nENET_1G::EIR::ref().bits.MII = 1;

    uint32_t mmfr = (1U << 30) |
                    (2U << 28) |
                    ((uint32_t)phyAddr << 23) |
                    ((uint32_t)regAddr << 18) |
                    (2U << 16);

    nENET_1G::MMFR::ref().value = mmfr;

    if (!WaitForMdio()) {
        return 0;
    }

    return (uint16_t)(nENET_1G::MMFR::ref().value & 0xFFFF);
}

bool GigabitEthernetDriver::WaitForMdio() {
    uint32_t timeout = 10000;
    while (!(nENET_1G::EIR::ref().bits.MII) && timeout--) {
        __asm__("nop");
    }
    if (timeout == 0) {
        printf("[MDIO] ERROR: MDIO operation timeout\n");
    }
    return timeout > 0;
}