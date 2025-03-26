#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"

#include "registers/codegen/gpio1.hpp"
#include "registers/codegen/gpio2.hpp"
#include "registers/codegen/gpio3.hpp"
#include "registers/codegen/gpio4.hpp"
#include "registers/codegen/gpio5.hpp"
#include "registers/codegen/gpio6.hpp"
#include "registers/codegen/gpio7.hpp"
#include "registers/codegen/gpio8.hpp"
#include "registers/codegen/gpio9.hpp"
#include "registers/codegen/gpio10.hpp"
#include "registers/codegen/gpio11.hpp"
#include "registers/codegen/gpio12.hpp"
#include "registers/codegen/gpio13.hpp"

// ================================================================================================
// Generic Gpio class definition

enum class GpioDirection : uint32_t {
  eInput,
  eOutput
};

enum class GpioPull : uint32_t {
    eNoPull,
    ePullUp,
    ePullDown
};

template  <uint32_t GPIO_NUM>
class Gpio {
public:

  Gpio(uint32_t pin) : pin_(pin) {}
  void configure(GpioDirection dir, GpioPull pull = GpioPull::eNoPull);
  void write(bool state);
  bool read();
  void toggle();

private:
  uint32_t pin_;
  void configurePinMux();
};

// ================================================================================================
// Template to map GPIO number to the correct register namespace
namespace Registers
{
template <uint32_t GPIO_NUM>
struct Gpio;

template <> struct Gpio<1> {
  using DR = nGPIO1::DR; 
  using DR_TOGGLE = nGPIO1::DR_TOGGLE;
  using GDIR = nGPIO1::GDIR;
  using IMR = nGPIO1::IMR;
};
template <> struct Gpio<2> {
  using DR = nGPIO2::DR; 
  using DR_TOGGLE = nGPIO2::DR_TOGGLE;
  using GDIR = nGPIO2::GDIR;
  using IMR = nGPIO2::IMR;
};
template <> struct Gpio<3> {
  using DR = nGPIO3::DR; 
  using DR_TOGGLE = nGPIO3::DR_TOGGLE;
  using GDIR = nGPIO3::GDIR;
  using IMR = nGPIO3::IMR;
};
template <> struct Gpio<4> {
  using DR = nGPIO4::DR; 
  using DR_TOGGLE = nGPIO4::DR_TOGGLE;
  using GDIR = nGPIO4::GDIR;
  using IMR = nGPIO4::IMR;
};
template <> struct Gpio<5> {
  using DR = nGPIO5::DR; 
  using DR_TOGGLE = nGPIO5::DR_TOGGLE;
  using GDIR = nGPIO5::GDIR;
  using IMR = nGPIO5::IMR;
};
template <> struct Gpio<6> {
  using DR = nGPIO6::DR; 
  using DR_TOGGLE = nGPIO6::DR_TOGGLE; 
  using GDIR = nGPIO6::GDIR;
  using IMR = nGPIO6::IMR;
};
template <> struct Gpio<7> {
  using DR = nGPIO7::DR; 
  using DR_TOGGLE = nGPIO7::DR_TOGGLE;
  using GDIR = nGPIO7::GDIR;
  using IMR = nGPIO7::IMR;
};
template <> struct Gpio<8> {
  using DR = nGPIO8::DR; 
  using DR_TOGGLE = nGPIO8::DR_TOGGLE;
  using GDIR = nGPIO8::GDIR;
  using IMR = nGPIO8::IMR;
};
template <> struct Gpio<9> {
  using DR = nGPIO9::DR; 
  using DR_TOGGLE = nGPIO9::DR_TOGGLE;
  using GDIR = nGPIO9::GDIR;
  using IMR = nGPIO9::IMR;
};
template <> struct Gpio<10> {
  using DR = nGPIO10::DR; 
  using DR_TOGGLE = nGPIO10::DR_TOGGLE;
  using GDIR = nGPIO10::GDIR;
  using IMR = nGPIO10::IMR;
};
template <> struct Gpio<11> {
  using DR = nGPIO11::DR; 
  using DR_TOGGLE = nGPIO11::DR_TOGGLE;
  using GDIR = nGPIO11::GDIR;
  using IMR = nGPIO11::IMR;
};
template <> struct Gpio<12> {
  using DR = nGPIO12::DR; 
  using DR_TOGGLE = nGPIO12::DR_TOGGLE;
  using GDIR = nGPIO12::GDIR;
  using IMR = nGPIO12::IMR;
};
template <> struct Gpio<13> {
  using DR = nGPIO13::DR; 
  using DR_TOGGLE = nGPIO13::DR_TOGGLE;
  using GDIR = nGPIO13::GDIR;
  using IMR = nGPIO13::IMR;
};
}

// ================================================================================================
// Non-templated shared code

namespace
{
  void EnableGpioClock()
  {
    nCCM::LPCG51_DIRECT::ref().bits.ON = nCCM::LPCG51_DIRECT::eON::eON_1;
    while (nCCM::LPCG51_STATUS0::ref().bits.ON != nCCM::LPCG51_STATUS0::eON::eON_1) {}
  }
}

// ================================================================================================
// Template implementations

// Configure GPIO pin direction and pull-up/down settings
template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::configure(GpioDirection dir, GpioPull pull) {
  EnableGpioClock();
  configurePinMux();

  // Configure direction.
  if (dir == GpioDirection::eOutput) {
    Registers::Gpio<GPIO_NUM>::IMR::ref().bits.IMR &= ~(1UL << pin_);
    Registers::Gpio<GPIO_NUM>::DR::ref().bits.DR &= ~(1UL << pin_);
    Registers::Gpio<GPIO_NUM>::GDIR::ref().bits.GDIR |= (1UL << pin_);
  } else {
    assert(false);  // TODO: implement eInput
  }

  // Configure pull-up/down resistors
  if (pull == GpioPull::ePullUp) {
    assert(false);  // TODO: implement pull up.
  } else if (pull == GpioPull::ePullDown) {
    assert(false);  // TODO: implement pull down.
  }
}

// Write state to the GPIO pin.
template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::write(bool state) {
    if (state == true) {
       Registers::Gpio<GPIO_NUM>::DR::ref().bits.DR |= (1 << pin_);
    } else {
       Registers::Gpio<GPIO_NUM>::DR::ref().bits.DR &= ~(1UL << 3);
    }
}

// Read the current state of the GPIO pin.
template <uint32_t GPIO_NUM>
bool Gpio<GPIO_NUM>::read() {
    assert(false);  // TODO: implement read.
    return false;
}

// Toggle the state of the GPIO pin.
template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::toggle() {
    Registers::Gpio<GPIO_NUM>::DR_TOGGLE::ref().bits.DR_TOGGLE ^= (1 << pin_);
}

// ------------------------------------------------------------------------------------------------
// Pin Mux Conifigurations
//

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
      case 3:
        nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::ref().bits.MUX_MODE =
          nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::eMUX_MODE::eALT10_gpio9_IO3;
        break;
      default:
        assert(false);  // TODO: pin not implemented yet.
    }
}
