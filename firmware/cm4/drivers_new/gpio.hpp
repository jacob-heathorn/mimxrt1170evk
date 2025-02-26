#include "registers/gpio1.hpp"
#include "registers/gpio2.hpp"
#include "registers/gpio3.hpp"
#include "registers/gpio4.hpp"
#include "registers/gpio5.hpp"
#include "registers/gpio6.hpp"
#include "registers/gpio7.hpp"
#include "registers/gpio8.hpp"
#include "registers/gpio9.hpp"
#include "registers/gpio10.hpp"
#include "registers/gpio11.hpp"
#include "registers/gpio12.hpp"
#include "registers/gpio13.hpp"


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


// Template to map GPIO number to the correct register namespace
//
namespace Registers
{
template <uint32_t GPIO_NUM>
struct Gpio;

template <> struct Gpio<1> {
  using DR = nGPIO1::DR; 
  using DR_TOGGLE = nGPIO1::DR_TOGGLE; 
};
template <> struct Gpio<2> {
  using DR = nGPIO2::DR; 
  using DR_TOGGLE = nGPIO2::DR_TOGGLE; 
};
template <> struct Gpio<3> {
  using DR = nGPIO3::DR; 
  using DR_TOGGLE = nGPIO3::DR_TOGGLE; 
};
template <> struct Gpio<4> {
  using DR = nGPIO4::DR; 
  using DR_TOGGLE = nGPIO4::DR_TOGGLE; 
};
template <> struct Gpio<5> {
  using DR = nGPIO5::DR; 
  using DR_TOGGLE = nGPIO5::DR_TOGGLE; 
};
template <> struct Gpio<6> {
  using DR = nGPIO6::DR; 
  using DR_TOGGLE = nGPIO6::DR_TOGGLE; 
};
template <> struct Gpio<7> {
  using DR = nGPIO7::DR; 
  using DR_TOGGLE = nGPIO7::DR_TOGGLE; 
};
template <> struct Gpio<8> {
  using DR = nGPIO8::DR; 
  using DR_TOGGLE = nGPIO8::DR_TOGGLE; 
};
template <> struct Gpio<9> {
  using DR = nGPIO9::DR; 
  using DR_TOGGLE = nGPIO9::DR_TOGGLE; 
};
template <> struct Gpio<10> {
  using DR = nGPIO10::DR; 
  using DR_TOGGLE = nGPIO10::DR_TOGGLE; 
};
template <> struct Gpio<11> {
  using DR = nGPIO11::DR; 
  using DR_TOGGLE = nGPIO11::DR_TOGGLE; 
};
template <> struct Gpio<12> {
  using DR = nGPIO12::DR; 
  using DR_TOGGLE = nGPIO12::DR_TOGGLE; 
};
template <> struct Gpio<13> {
  using DR = nGPIO13::DR; 
  using DR_TOGGLE = nGPIO13::DR_TOGGLE; 
};
}

// Non-templated code.
namespace
{
  void EnableGpioClock()
  {
    nCCM::LPCG51_DIRECT::Instance().bits.ON = nCCM::LPCG51_DIRECT::eON::eON_1;
    while (nCCM::LPCG51_STATUS0::Instance().bits.ON != nCCM::LPCG51_STATUS0::eON::eON_1) {}
  }
}

// Configure GPIO pin direction and pull-up/down settings
template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::configure(GpioDirection dir, GpioPull pull) {
  // Enable the Gpio Clock.
  EnableGpioClock();
    
  // Configure the pin in IOMUXC for GPIO use.
  //
  // TODO Could I do some kind of static code thing that would fail if you try to configure
  // multiple functions fo the same pin?
  configurePinMux();

  // Configure direction
  if (dir == GpioDirection::eOutput) {
    // TODO templatize?
    nGPIO9::IMR::Instance().bits.IMR &= ~(1UL << pin_);
    nGPIO9::DR::Instance().bits.DR &= ~(1UL << pin_);
    nGPIO9::GDIR::Instance().bits.GDIR |= (1UL << pin_);
  } else {
      // Set pin as input
      // GPIOx->GDIR &= ~(1 << pin_);
  }

  // Configure pull-up/down resistors
  if (pull == GpioPull::ePullUp) {
      // Enable pull-up resistor
      // GPIOx->PULL |= (1 << pin_);
  } else if (pull == GpioPull::ePullDown) {
      // Enable pull-down resistor
      // GPIOx->PULL &= ~(1 << pin_);
  }
}

// Write HIGH or LOW to the GPIO pin
template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::write(bool state) {
    if (state == true) {
       Registers::Gpio<GPIO_NUM>::DR::Instance().bits.DR |= (1 << pin_);
    } else {
       Registers::Gpio<GPIO_NUM>::DR::Instance().bits.DR &= ~(1UL << 3);
    }
}

// Read the current state of the GPIO pin
template <uint32_t GPIO_NUM>
bool Gpio<GPIO_NUM>::read() {
    // Example: return (GPIOx->DR & (1 << pin_)) ? HIGH : LOW;
    return false;  // Placeholder
}

// Toggle the state of the GPIO pin
template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::toggle() {
    // Example: GPIOx->DR ^= (1 << pin_);
    // nGPIO9::DR_TOGGLE::Instance().bits.DR_TOGGLE ^= (1 << pin_);
    Registers::Gpio<GPIO_NUM>::DR_TOGGLE::Instance().bits.DR_TOGGLE ^= (1 << pin_);
}

// Configure Pin MUX for GPIO (specific to i.MX RT1170)
template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::configurePinMux() {
  // Set GPIO9, pin3 mux, for LED.
  nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::Instance().bits.MUX_MODE = 
      nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::eMUX_MODE::eALT10_gpio9_IO3;
}
