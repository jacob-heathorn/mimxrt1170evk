#include "drivers/ethernet/gigabit_ethernet_driver.h"
#include <cstdio>
#include <cstring>
#include "utils/ocram2_allocator.hpp"
#include "utils/dtcm_allocator.hpp"
#include "ftl/allocator/bump_pool_buffer_strategy.hpp"
#include "ftl/allocator/buffer_allocator.hpp"
#include "drivers/ethernet/detail/gigabit_mac.h"
#include "drivers/ethernet/detail/phyrtl8211f.h"
#include "registers/codegen/enet_1g.hpp"
#include "fsl_common.h"  // For EnableIRQ/DisableIRQ through CMSIS
#include "fsl_iomuxc.h"  // For IOMUXC_SetPinMux
#include "fsl_gpio.h"    // For GPIO operations
#include "fsl_clock.h"   // For clock configuration

// PHY configuration constants
constexpr uint8_t kPhyAddress = 0x01;  // PHY address for ENET port 1
constexpr bool kAutoNegotiation = true;  // Enable auto-negotiation


GigabitEthernetDriver::GigabitEthernetDriver(const std::array<uint8_t, 6>& macAddr) {
    // Initialize clocks and pins for Gigabit Ethernet
    initializeClocks();
    initializePins();

    // Reset the PHY hardware
    resetPhy();

    // Create the GigabitMac singleton instance.
    ethernet::detail::GigabitMac::create();

    // Initialize TxFrame with the descriptor ring
    ethernet::detail::TxFrame::initialize(&tx_descriptor_ring_);

    // Set up frame pools
    setupFramePools();

    // Reset the driver
    reset();

    // Initialize PHY and wait for link
    setupPhyAndWaitForLink();

    // Configure MAC with the provided address
    configureMac(macAddr);
}

void GigabitEthernetDriver::setupFramePools() {
    // Initialize ethernet::Frame allocator strategies with varying sizes
    // Similar to how UDP datagrams are set up in hello_netx
    // Maximum frame size: 1538 (1536+2 byte padding) bytes
    // Minimum frame size: 64 (bytes on the wire)

    // Set up buffer strategies for different frame sizes
    // Use OCRAM2 (non-cacheable) for DMA compatibility
    // Require 8-byte alignment for Ethernet DMA
    //
    // TODO: Consider exposing these strategies through the interface.
    constexpr size_t dma_alignment = 64;
    static ftl::allocator::BumpPoolBufferStrategy strategy_64(Ocram2Allocator::instance(), 64, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_128(Ocram2Allocator::instance(), 128, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_256(Ocram2Allocator::instance(), 256, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_512(Ocram2Allocator::instance(), 512, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1024(Ocram2Allocator::instance(), 1024, dma_alignment);
    static ftl::allocator::BumpPoolBufferStrategy strategy_1536(Ocram2Allocator::instance(), 1538, dma_alignment);

    // Create a BufferAllocator with all strategies
    static ftl::allocator::BufferAllocator buffer_allocator(
        strategy_64, strategy_128, strategy_256,
        strategy_512, strategy_1024, strategy_1536);

    // Initialize ethernet::Frame with the buffer allocator
    ethernet::Frame::initialize(buffer_allocator);
}

bool GigabitEthernetDriver::reset() {
    // Clear the queue if it has any leftover frames
    tx_frame_queue_.clear();

    // Set Transmit Descriptor List Address Register
    // Point to the base of the descriptor ring (allocated in constructor)
    nENET_1G::TDSR::ref().value = tx_descriptor_ring_.getBaseAddress();

    // Reset RX descriptor ring to ensure clean state
    // This is important for warm boot scenarios or re-initialization
    rx_descriptor_ring_.reset();

    // Set Receive Descriptor List Address Register
    // Point to the base of the RX descriptor ring
    nENET_1G::RDSR::ref().value = rx_descriptor_ring_.getBaseAddress();

    return true;  // Return success
}

void GigabitEthernetDriver::setupPhyAndWaitForLink() {
    // Keep trying to initialize PHY and establish link
    do {
        bool success = initializePhy(kPhyAddress, kAutoNegotiation);
        if (success) {
            // Wait for link to come up
            if (waitForLink(&link_speed_, &link_duplex_)) {
                printf("PHY Link is up - Speed: %s, Duplex: %s\r\n",
                       (link_speed_ == ethernet::detail::PhySpeed::e1000M) ? "1000M" :
                       (link_speed_ == ethernet::detail::PhySpeed::e100M) ? "100M" : "10M",
                       (link_duplex_ == ethernet::detail::PhyDuplex::eFull) ? "Full" : "Half");
                break;
            }
        }
    } while (true);
}

bool GigabitEthernetDriver::initializePhy(uint8_t phyAddress, bool autoNegotiation) {
    // Initialize MDIO interface
    ethernet::detail::GigabitMac::instance().mdioInit();

    // Create PHY singleton with MAC reference, address and auto-negotiation setting
    ethernet::detail::PhyRtl8211f::create(
        ethernet::detail::GigabitMac::instance(),
        phyAddress,
        autoNegotiation
    );

    // Initialize the PHY
    return ethernet::detail::PhyRtl8211f::instance().initialize();
}

bool GigabitEthernetDriver::waitForLink(ethernet::detail::PhySpeed* speed, ethernet::detail::PhyDuplex* duplex) {
    constexpr uint32_t PHY_AUTONEGO_TIMEOUT_COUNT = 100000;
    bool link = false;
    bool autonego = false;
    uint32_t count = PHY_AUTONEGO_TIMEOUT_COUNT;

    // Wait for auto-negotiation success and link up
    do {
        ethernet::detail::PhyRtl8211f::instance().getAutoNegotiationStatus(&autonego);
        ethernet::detail::PhyRtl8211f::instance().getLinkStatus(&link);
        if (autonego && link) {
            break;
        }
    } while (--count);

    if (!autonego) {
        printf("PHY Auto-negotiation failed. Please check the cable connection and link partner setting.\r\n");
        return false;
    }

    if (!link) {
        printf("PHY Link is down. Please check the cable connection.\r\n");
        return false;
    }

    // Get the negotiated speed and duplex
    ethernet::detail::PhyRtl8211f::instance().getLinkSpeedDuplex(speed, duplex);

    return true;
}

bool GigabitEthernetDriver::send(ethernet::Frame&& frame) {
    printf("GigabitEthernetDriver::send\n");

    // Check if queue has space
    if (tx_frame_queue_.full()) {
        // Queue is full, cannot send
        return false;
    }

    // Create TxFrame which acquires descriptor and takes ownership of the frame
    ethernet::detail::TxFrame tx_frame = ethernet::detail::TxFrame::create(std::move(frame));

    // Check if frame was successfully created
    if (!tx_frame) {
        // No descriptor available
        return false;
    }

    // Mark frame ready for transmission
    tx_frame.markReadyForTransmission();

    // Move the frame into the queue
    tx_frame_queue_.push(std::move(tx_frame));

    // Resume DMA transmission if suspended
    if (!nENET_1G::TDAR::ref().value) {
        nENET_1G::TDAR::ref().value = 1;  // Set TDAR bit to resume transmission
    }

    return true;
}

void GigabitEthernetDriver::process_transmitted_packets() {
    // Process completed transmissions in queue order
    while (!tx_frame_queue_.empty()) {
        // Check if the front frame has completed transmission
        // ETL queue uses front() to access without removing
        if (tx_frame_queue_.front().isTransmissionComplete()) {
            // Transmission complete - remove frame from queue
            // Frame destructor will clean up the Frame buffer and release descriptor
            tx_frame_queue_.pop();
        } else {
            // Front frame not yet transmitted, stop processing
            // (frames are processed in order)
            break;
        }
    }
}

ethernet::Frame GigabitEthernetDriver::receive() {
    // Acquire the next descriptor that has been filled by hardware
    auto* desc = rx_descriptor_ring_.acquire();
    if (!desc) {
        return ethernet::Frame();  // No packet available
    }

    // Check if this is a complete frame (not chained)
    if (!desc->isLast()) {
        // Chained packet - not supported
        printf("Received packet requires chaining - not supported.\n");
        // Release descriptor immediately back to hardware
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    // Check for errors
    if (desc->hasError()) {
        // Error in received packet - skip it
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    // Get buffer and length from descriptor
    void* buffer = desc->getBuffer();
    size_t length = desc->getLength();

    // Skip 2-byte padding at the beginning
    if (length <= 2) {
        // Invalid length
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    const uint8_t* data = static_cast<const uint8_t*>(buffer) + 2;
    size_t frame_length = length - 2;

    // Create ethernet::Frame with the received data
    ethernet::Frame frame(frame_length);

    if (!frame) {
        // Failed to allocate frame
        rx_descriptor_ring_.release(desc);
        return ethernet::Frame();  // Return empty frame
    }

    // Copy the received data to the frame
    std::memcpy(frame.front(), data, frame_length);

    // IMPORTANT: Release descriptor back to hardware immediately after copy
    // This maintains FIFO order - descriptors are always processed and released in order
    // Note: releaseCurrentDescriptor() includes a memory barrier to ensure the
    // memcpy completes before the descriptor is returned to hardware
    rx_descriptor_ring_.release(desc);

    // Resume DMA reception if it was suspended
    if (!nENET_1G::RDAR::ref().value) {
        nENET_1G::RDAR::ref().value = 1;  // Set RDAR bit to resume reception
    }

    return frame;
}

void GigabitEthernetDriver::enable() {
    // Enable Ethernet interrupts (RX and TX frame interrupts)
    nENET_1G::EIMR::ref().value |= (1U << 25) | (1U << 27);  // RXF_MASK | TXF_MASK

    // Start Ethernet controller
    // The buffer descriptor bytes are swapped to support little-endian devices
    // The DBSWP field must be written to 1 after reset
    nENET_1G::ECR ecr_val = { .value = nENET_1G::ECR::ref().value };
    ecr_val.bits.ETHEREN = nENET_1G::ECR::eETHEREN::eONE;  // Enable Ethernet
    ecr_val.bits.DBSWP = nENET_1G::ECR::eDBSWP::eONE;      // Descriptor byte swapping
    nENET_1G::ECR::ref().value = ecr_val.value;

    // Enable interrupt at NVIC level
    EnableIRQ(ENET_1G_IRQn);

    // Activate RX descriptor - tell hardware that descriptors are ready
    nENET_1G::RDAR::ref().value = 1;
}

void GigabitEthernetDriver::disable() {
    // Disable interrupt at NVIC level
    DisableIRQ(ENET_1G_IRQn);

    // Stop the Ethernet controller
    nENET_1G::ECR ecr_val = { .value = nENET_1G::ECR::ref().value };
    ecr_val.bits.ETHEREN = nENET_1G::ECR::eETHEREN::eZERO;  // Disable Ethernet
    nENET_1G::ECR::ref().value = ecr_val.value;
}

void GigabitEthernetDriver::configureMac(const std::array<uint8_t, 6>& macAddr) {
    // Configure MAC address
    // Delegate to GigabitMac which handles the low-level register operations
    // This includes clearing hash registers and setting the MAC address
    ethernet::detail::GigabitMac::instance().setAddress(macAddr);

    // Mask all FEC interrupts
    nENET_1G::EIMR::ref().value = 0;

    // Clear all FEC interrupt events
    nENET_1G::EIR::ref().value = 0xFFFFFFFF;

    // Checksum offload - Transmit
    nENET_1G::TACC tacc_val = { .value = nENET_1G::TACC::ref().value };
    tacc_val.bits.SHIFT16 = nENET_1G::TACC::eSHIFT16::eONE;
    tacc_val.bits.IPCHK = nENET_1G::TACC::eIPCHK::eONE;
    tacc_val.bits.PROCHK = nENET_1G::TACC::ePROCHK::eONE;
    nENET_1G::TACC::ref().value = tacc_val.value;

    // Transmit FIFO Watermark
    nENET_1G::TFWR::ref().bits.STRFWD = nENET_1G::TFWR::eSTRFWD::eONE;

    // Checksum offload - Receive
    nENET_1G::RACC racc_val = {};
    racc_val.bits.SHIFT16 = nENET_1G::RACC::eSHIFT16::eONE;
    racc_val.bits.LINEDIS = nENET_1G::RACC::eLINEDIS::eONE;
    racc_val.bits.PRODIS = nENET_1G::RACC::ePRODIS::eONE;
    racc_val.bits.IPDIS = nENET_1G::RACC::eIPDIS::eONE;
    nENET_1G::RACC::ref().value = racc_val.value;

    // Build up register values using union structures
    nENET_1G::RCR rcr_val = {};
    nENET_1G::ECR ecr_val = {};
    nENET_1G::TCR tcr_val = {};

    // Initialize the Receive Control Register
    rcr_val.bits.MAX_FL = 14 + 1500 + 4;  // ethernet frame head + max data + crc
    rcr_val.bits.MII_MODE = nENET_1G::RCR::eMII_MODE::eONE;  // always set
    rcr_val.bits.CRCFWD = nENET_1G::RCR::eCRCFWD::eONE;  // strip CRC from received frames
    rcr_val.bits.RGMII_EN = nENET_1G::RCR::eRGMII_EN::eONE;  // RGMII mode (always used)

    // Get the negotiated speed from the driver and configure speed register
    if (link_speed_ == ethernet::detail::PhySpeed::e1000M) {
        ecr_val.bits.SPEED = nENET_1G::ECR::eSPEED::eONE;  // 1000 Mbps
    } else {
        ecr_val.bits.SPEED = nENET_1G::ECR::eSPEED::eZERO;  // 10/100 Mbps
    }

    // Use Round-robin scheme for legacy buffer descriptor mode
    nENET_1G::QOS::ref().bits.TX_SCHEME = nENET_1G::QOS::eTX_SCHEME::eRR;  // Round-robin

    // Set the duplex - get from driver and configure
    if (link_duplex_ == ethernet::detail::PhyDuplex::eHalf) {
        rcr_val.bits.DRT = nENET_1G::RCR::eDRT::eONE;  // Disable receive on transmit
        tcr_val.bits.FDEN = nENET_1G::TCR::eFDEN::eZERO;  // Half duplex
    } else {  // Full duplex
        rcr_val.bits.DRT = nENET_1G::RCR::eDRT::eZERO;  // Full duplex
        tcr_val.bits.FDEN = nENET_1G::TCR::eFDEN::eONE;  // Full duplex
    }

    // Write the main control registers all at once
    nENET_1G::RCR::ref().value = rcr_val.value;
    nENET_1G::ECR::ref().value = ecr_val.value;
    nENET_1G::TCR::ref().value = tcr_val.value;
}

void GigabitEthernetDriver::initializePins() {
    // Enable IOMUXC clock for pin mux configuration
    CLOCK_EnableClock(kCLOCK_Iomuxc);

    // Configure RGMII RX pins
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_00_ENET_1G_RX_EN, 0U);      // RX Enable
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_01_ENET_1G_RX_CLK, 0U);     // RX Clock
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_02_ENET_1G_RX_DATA00, 0U);  // RX Data 0
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_03_ENET_1G_RX_DATA01, 0U);  // RX Data 1
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_04_ENET_1G_RX_DATA02, 0U);  // RX Data 2
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_05_ENET_1G_RX_DATA03, 0U);  // RX Data 3

    // Configure RGMII TX pins
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_06_ENET_1G_TX_DATA03, 0U);  // TX Data 3
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_07_ENET_1G_TX_DATA02, 0U);  // TX Data 2
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_08_ENET_1G_TX_DATA01, 0U);  // TX Data 1
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_09_ENET_1G_TX_DATA00, 0U);  // TX Data 0
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_10_ENET_1G_TX_EN, 0U);      // TX Enable
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B1_11_ENET_1G_TX_CLK_IO, 0U);  // TX Clock

    // Configure MDIO/MDC pins
    IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_B2_19_ENET_1G_MDC, 0U);   // MDC (Management Data Clock)
    IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_B2_20_ENET_1G_MDIO, 0U);  // MDIO (Management Data I/O)

    // Configure PHY reset pin (GPIO11_IO14)
    IOMUXC_SetPinMux(IOMUXC_GPIO_DISP_B2_13_GPIO11_IO14, 0U);

    // Initialize GPIO11_14 as output for PHY reset control
    gpio_pin_config_t gpio_config = {
        .direction = kGPIO_DigitalOutput,
        .outputLogic = 0,  // Start with reset asserted (active low)
        .interruptMode = kGPIO_NoIntmode
    };
    GPIO_PinInit(GPIO11, 14, &gpio_config);
}

void GigabitEthernetDriver::initializeClocks() {
    // Initialize System PLL1 for Gigabit Ethernet
    // PLL1 provides 1GHz clock, divided by 2 for 500MHz, divided by 4 for 125MHz RGMII clock
    const clock_sys_pll1_config_t sysPll1Config = {
        .pllDiv2En = true,   // Enable divide by 2 output
        .pllDiv5En = false,  // Disable divide by 5 output
        .ss = nullptr,       // No spread spectrum
        .ssEnable = false    // Spread spectrum disabled
    };
    CLOCK_InitSysPll1(&sysPll1Config);

    // Configure ENET2 root clock to generate 125MHz for RGMII
    // Source: System PLL1 Div2 (500MHz), Divide by 4 = 125MHz
    clock_root_config_t rootCfg = {
        .clockOff = false,  // Clock enabled
        .mux = 4,          // Select System PLL1 Div2
        .div = 4           // Divide by 4 (500MHz / 4 = 125MHz)
    };
    CLOCK_SetRootClock(kCLOCK_Root_Enet2, &rootCfg);

    // Configure bus clock for MDIO interface
    // Select System PLL2 PFD3: 528MHz * 18 / 24 = 396MHz
    CLOCK_InitPfd(kCLOCK_PllSys2, kCLOCK_Pfd3, 24);

    // Set bus root clock to 198MHz (396MHz / 2)
    rootCfg.mux = 7;   // Select System PLL2 PFD3
    rootCfg.div = 2;   // Divide by 2 (396MHz / 2 = 198MHz)
    CLOCK_SetRootClock(kCLOCK_Root_Bus, &rootCfg);

    // Configure IOMUXC GPR for RGMII mode
    // Set ENET1G_RGMII_EN to enable RGMII interface mode
    IOMUXC_GPR->GPR5 |= IOMUXC_GPR_GPR5_ENET1G_RGMII_EN_MASK;

    // Wait 1ms for clock to stabilize
    SDK_DelayAtLeastUs(1000, CLOCK_GetFreq(kCLOCK_CpuClk));
}

void GigabitEthernetDriver::resetPhy() {
    // Assert PHY reset (active low) - GPIO11_IO14
    GPIO_WritePinOutput(GPIO11, 14, 0);

    // Hold reset low for at least 20ms per RTL8211FDI-CG datasheet
    SDK_DelayAtLeastUs(20000, CLOCK_GetFreq(kCLOCK_CpuClk));

    // De-assert PHY reset (set high)
    GPIO_WritePinOutput(GPIO11, 14, 1);

    // Wait 60ms for PHY internal circuits to settle per datasheet
    SDK_DelayAtLeastUs(60000, CLOCK_GetFreq(kCLOCK_CpuClk));
}
