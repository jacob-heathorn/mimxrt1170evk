#include "gigabit_ethernet_driver.hpp"
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
    InitClock();
    InitPins();
    ResetPhy();

    if (!InitPhy()) {
        return false;
    }

    if (!InitMac()) {
        return false;
    }

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
    nENET_1G::MSCR::ref().bits.MII_SPEED = 0x18;

    uint16_t phyId1 = MdioRead(kPhyAddr, 0x02);
    [[maybe_unused]] uint16_t phyId2 = MdioRead(kPhyAddr, 0x03);

    if (phyId1 != 0x001C) {
        return false;
    }

    MdioWrite(kPhyAddr, 0x00, 0x8000);
    SDK_DelayAtLeastUs(10000, CLOCK_GetFreq(kCLOCK_CpuClk));

    uint16_t status = MdioRead(kPhyAddr, 0x00);
    if (status & 0x8000) {
        return false;
    }

    MdioWrite(kPhyAddr, 0x00, 0x1000);

    return true;
}

bool GigabitEthernetDriver::InitMac() {
    nENET_1G::ECR::ref().bits.RESET = 1;
    while (nENET_1G::ECR::ref().bits.RESET) {
    }

    nENET_1G::EIR::ref().value = 0xFFFFFFFF;
    nENET_1G::EIMR::ref().value = 0;

    nENET_1G::RCR::ref().value = 0x05EE0104;
    nENET_1G::TCR::ref().value = 0x00000004;

    nENET_1G::PALR::ref().value = 0x12345678;
    nENET_1G::PAUR::ref().value = 0x00008808;

    memset(tx_bd_, 0, sizeof(BufferDescriptor));
    memset(rx_bd_, 0, sizeof(BufferDescriptor));

    tx_bd_->control = kBdTxWrap;
    tx_bd_->buffer = (uint32_t)tx_buffer_;

    rx_bd_->control = kBdRxEmpty | kBdRxWrap;
    rx_bd_->buffer = (uint32_t)rx_buffer_;

    nENET_1G::TDSR::ref().value = (uint32_t)tx_bd_;
    nENET_1G::RDSR::ref().value = (uint32_t)rx_bd_;

    nENET_1G::MRBR::ref().value = kMaxFrameSize;

    nENET_1G::ECR::ref().bits.DBSWP = nENET_1G::ECR::eDBSWP::eONE;
    nENET_1G::ECR::ref().bits.EN1588 = nENET_1G::ECR::eEN1588::eZERO;

    nENET_1G::ECR::ref().bits.ETHEREN = nENET_1G::ECR::eETHEREN::eONE;

    nENET_1G::RDAR::ref().bits.RDAR = 1;

    return true;
}

bool GigabitEthernetDriver::SendPacket(const uint8_t* buffer, size_t length) {
    if (length > kMaxFrameSize) {
        return false;
    }

    if (tx_bd_->control & kBdTxReady) {
        return false;
    }

    memcpy(tx_buffer_, buffer, length);

    tx_bd_->length = length;
    tx_bd_->control |= (kBdTxReady | kBdTxLast | kBdTxWrap);

    nENET_1G::TDAR::ref().bits.TDAR = 1;

    uint32_t timeout = 100000;
    while ((tx_bd_->control & kBdTxReady) && timeout--) {
        __asm__("nop");
    }

    return timeout > 0;
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
    return timeout > 0;
}