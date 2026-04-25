#include "drivers/gpio.hpp"
#include <cassert>

namespace iomuxc = regs::iomuxc;

template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::configurePinMux() {
  static_assert(false, "This functions needs to be specialized for this GPIO port");
}

// GPIO 9 pin mux.
template <>
void Gpio<9>::configurePinMux() {
    // Set GPIO9, pin3 mux, for LED.
    switch (pin_)
    {
      case 3: {
        using pad = iomuxc::SW_MUX_CTL_PAD_GPIO_AD_04;
        pad::modify(pad::MUX_MODE{pad::eMUX_MODE::eALT10_gpio9_IO3});
        break;
      }
      case 25: {
        using pad = iomuxc::SW_MUX_CTL_PAD_GPIO_AD_26;
        pad::modify(pad::MUX_MODE{pad::eMUX_MODE::eALT10_gpio9_IO25});
        break;
      }
      default:
        assert(false);  // TODO: pin not implemented yet.
    }
}
