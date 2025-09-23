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

    printf("[PHY] Enabling auto-negotiation\n");
    MdioWrite(kPhyAddr, 0x00, 0x1140);  // Auto-neg + 1000Mbps + Full duplex

    // Wait a bit for link to come up
    printf("[PHY] Waiting for link...\n");
    SDK_DelayAtLeastUs(100000, CLOCK_GetFreq(kCLOCK_CpuClk));

    // Check link status
    uint16_t status_reg = MdioRead(kPhyAddr, 0x01);  // Basic Status Register
    printf("[PHY] Status register: 0x%04X\n", status_reg);
    if (!(status_reg & 0x0004)) {  // Link status bit
        printf("[PHY] WARNING: Link is down\n");
    } else {
        printf("[PHY] Link is up\n");
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

    printf("[MAC] Configuring RX/TX control registers\n");
    // RCR: RGMII mode, MII mode, promiscuous mode, max frame length
    // Bit 30: GRS=0, Bit 6: RGMII_EN=1, Bit 2: MII_MODE=1, Bit 3: PROM=1, Bit 14-15: MAX_FL
    nENET_1G::RCR::ref().value = 0x05EE0144;

    // TCR: Full duplex, FDEN=1 (bit 2)
    nENET_1G::TCR::ref().value = 0x00000004;

    // Set TFWR to a reasonable threshold (store and forward)
    nENET_1G::TFWR::ref().value = 0x00000000;  // Store and forward mode

    printf("[MAC] Setting MAC address\n");
    nENET_1G::PALR::ref().value = 0x12345678;
    nENET_1G::PAUR::ref().value = 0x00008808;

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
    // Based on nx_driver_imxrt.c: Set SPEED for gigabit but NOT ETHEREN yet
    // The ECR register gets configured in two steps:
    // 1. First set SPEED during enet_init_imx (line 1631)
    // 2. Later OR in ETHEREN|DBSWP during hardware_enable (line 1977)
    uint32_t ecr_val = (1 << 5);  // SPEED bit for gigabit
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