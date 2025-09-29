#pragma once

#include <array>
#include <cstdint>
#include "ftl/singleton.hpp"
#include "drivers/ethernet/ethernet_frame.hpp"
#include "etl/queue.h"
#include <cstring>
#include <cassert>

#include "drivers/ethernet/detail/phyrtl8211f.h"
#include "drivers/ethernet/detail/tx_descriptor_ring.h"
#include "drivers/ethernet/detail/tx_frame.h"
#include "drivers/ethernet/detail/rx_descriptor_ring.h"

// TODO: Missing features
// 1) Link mode change.
// 2) Multicast support

// C++ driver class for Gigabit Ethernet
class GigabitEthernetDriver : public ftl::Singleton<GigabitEthernetDriver> {
public:
    // Constructor - public for ftl::Singleton
    // Takes MAC address to configure during initialization
    GigabitEthernetDriver(const std::array<uint8_t, 6>& macAddr);
    // Destructor deleted - singleton lives for entire program
    ~GigabitEthernetDriver() = delete;

    // Send a frame (takes ownership of the frame)
    // Returns true on success, false on error
    bool send(ethernet::Frame&& frame);

    // Process transmitted packets - check for completed transmissions and release packets
    // This is called from the deferred processing routine
    void process_transmitted_packets();

    // Receive a single packet
    // Returns an ethernet::Frame with the received data
    // Returns an empty frame (operator bool() returns false) if no packet available or on error
    ethernet::Frame receive();

    // Configure MAC with address and other settings
    void configureMac(const std::array<uint8_t, 6>& macAddr);

    // Enable the Ethernet controller and interrupts
    // Starts the Ethernet hardware and activates RX descriptor processing
    void enable();

    // Disable the Ethernet controller and interrupts
    // Stops the Ethernet hardware
    void disable();

private:
    // Initialize GPIO pins for Gigabit Ethernet RGMII interface
    // Configures pin mux for all RGMII signals and PHY reset GPIO
    void initializePins();

    // Initialize clocks for Gigabit Ethernet operation
    // Sets up PLL, root clocks, and RGMII clock selection
    void initializeClocks();

    // Reset the PHY hardware
    // Asserts reset for minimum 20ms, then waits 60ms for PHY to stabilize
    void resetPhy();

    // Reset the driver - clears TX queue and resets TX/RX descriptor rings
    // Returns true on success, false on error
    bool reset();

    // Set up frame pools for ethernet::Frame allocator
    void setupFramePools();

    // Initialize and configure PHY, wait for link
    // This will retry until successful
    void setupPhyAndWaitForLink();

    // Initialize PHY with auto-negotiation
    // Returns true on success, false on failure
    bool initializePhy(uint8_t phyAddress, bool autoNegotiation);

    // Wait for PHY link to be up
    // Returns true when link is up with auto-negotiation complete
    bool waitForLink(ethernet::detail::PhySpeed* speed, ethernet::detail::PhyDuplex* duplex);

    // TX descriptor ring (internally allocates from OCRAM2 with 64-byte alignment)
    // Ring manages its own head/tail indices for queue-like behavior
    ethernet::detail::TxDescriptorRing tx_descriptor_ring_{};

    // Queue of TxFrame objects pending transmission
    // Using ETL queue with fixed size matching kNumTxDescriptors
    etl::queue<ethernet::detail::TxFrame, ethernet::detail::kNumTxDescriptors> tx_frame_queue_;

    // RX descriptor ring (internally allocates from OCRAM2 with 64-byte alignment)
    // Ring manages its own current index for processing received packets
    // Buffers are allocated and managed internally by the ring
    ethernet::detail::RxDescriptorRing rx_descriptor_ring_{};

    // PHY link speed and duplex settings (set during PHY initialization)
    ethernet::detail::PhySpeed link_speed_{};
    ethernet::detail::PhyDuplex link_duplex_{};
};
