#include "drivers/gpio.hpp"
#include <cassert>

// template <uint32_t GPIO_NUM>
// void Gpio<GPIO_NUM>::configurePinMux() {
//   static_assert(false, "This functions needs to be specialized for this GPIO port");
// }

// // GPIO 9 pin mux.
// template <>
// void Gpio<9>::configurePinMux() {
//     // Set GPIO9, pin3 mux, for LED.
//     switch (pin_)
//     {
//       case 3:
//         nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::ref().bits.MUX_MODE =
//           nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::eMUX_MODE::eALT10_gpio9_IO3;
//         break;
//       case 25:
//         nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_26::ref().bits.MUX_MODE =
//           nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_26::eMUX_MODE::eALT10_gpio9_IO25;
//         break;
//       default:
//         assert(false);  // TODO: pin not implemented yet.
//     }
// }
