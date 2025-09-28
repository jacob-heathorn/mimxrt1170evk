#include "mdio.h"
#include "fsl_enet.h"
#include "fsl_clock.h"

// Hardware definitions (from nx_driver_imxrt.cpp)
#define EXAMPLE_ENET       ENET_1G
#define MDIO_CLOCK_FREQ    CLOCK_GetRootClockFreq(kCLOCK_Root_Bus)

namespace ethernet {
namespace detail {

void Mdio::initialize() {
    // Enable ENET clock
    (void)CLOCK_EnableClock(s_enetClock[ENET_GetInstance(EXAMPLE_ENET)]);

    // Configure SMI (Serial Management Interface) for MDIO
    // false = disable preamble suppression
    ENET_SetSMI(EXAMPLE_ENET, MDIO_CLOCK_FREQ, false);
}

void Mdio::write(uint8_t phyAddr, uint8_t regAddr, uint16_t data) {
    // Use FSL driver to write to PHY register
    // Return value ignored to match existing behavior
    (void)ENET_MDIOWrite(EXAMPLE_ENET, phyAddr, regAddr, data);
}

uint16_t Mdio::read(uint8_t phyAddr, uint8_t regAddr) {
    uint16_t data = 0;
    // Use FSL driver to read from PHY register
    // Return value ignored to match existing behavior
    (void)ENET_MDIORead(EXAMPLE_ENET, phyAddr, regAddr, &data);
    return data;
}

} // namespace detail
} // namespace ethernet