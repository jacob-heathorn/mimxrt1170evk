#include "drivers/gpio.hpp"
#include <cassert>

namespace {
using Iomuxc = regs::Iomuxc;
}  // namespace

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
        using Pad = Iomuxc::SW_MUX_CTL_PAD_GPIO_AD_04;
        Pad::modify(Pad::MUX_MODE{Pad::eMUX_MODE::eALT10_gpio9_IO3});
        break;
      }
      case 25: {
        using Pad = Iomuxc::SW_MUX_CTL_PAD_GPIO_AD_26;
        Pad::modify(Pad::MUX_MODE{Pad::eMUX_MODE::eALT10_gpio9_IO25});
        break;
      }
      default:
        assert(false);  // TODO: pin not implemented yet.
    }
}
