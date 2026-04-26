#pragma once

#include <cassert>
#include <cstdint>

#include "registers/codegen/ccm.hpp"
#include "registers/codegen/gpio.hpp"
#include "registers/codegen/iomuxc.hpp"

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

template <uint32_t GPIO_NUM>
class Gpio {
public:
  explicit Gpio(uint32_t pin) : pin_(pin) {}
  Gpio() = delete;
  Gpio(const Gpio&) = delete;
  Gpio(Gpio&&) noexcept = delete;
  Gpio& operator=(const Gpio&) = delete;
  Gpio& operator=(Gpio&&) noexcept = delete;

  void configure(GpioDirection dir, GpioPull pull = GpioPull::eNoPull);
  void write(bool state);
  bool read();
  void toggle();

private:
  uint32_t pin_;
  using Regs = regs::Gpio<GPIO_NUM>;  // generated family class

  void configurePinMux();
};

// ================================================================================================
// Non-templated shared code

inline void EnableGpioClock()
{
  using Ccm = regs::Ccm;
  using Direct = Ccm::LPCG51_DIRECT;
  using Status = Ccm::LPCG51_STATUS0;
  Direct::modify(Direct::ON{Direct::eON::eON_1});
  while (Status::read().get<Status::ON>() != Status::eON::eON_1) {}
}

// ================================================================================================
// Template implementations

template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::configure(GpioDirection dir, GpioPull pull) {
  EnableGpioClock();
  configurePinMux();

  if (dir == GpioDirection::eOutput) {
    // IMR / GDIR have no atomic-bit registers in the SVD; runtime-indexed bit
    // twiddling has to go through raw() + RMW. DR uses its W1C/W1S sibling
    // (DR_CLEAR) for atomic single-bit ops with no RMW hazard.
    Regs::IMR::raw()      &= ~(1UL << pin_);  // mask interrupt for this pin
    Regs::DR_CLEAR::raw()  =  (1UL << pin_);  // drive low before flipping to output
    Regs::GDIR::raw()     |=  (1UL << pin_);  // direction = output
  } else {
    assert(false);  // TODO: implement eInput
  }

  if (pull == GpioPull::ePullUp) {
    assert(false);  // TODO: implement pull up.
  } else if (pull == GpioPull::ePullDown) {
    assert(false);  // TODO: implement pull down.
  }
}

template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::write(bool state) {
  // Atomic single-bit set/clear via the dedicated W1-style registers.
  if (state) {
    Regs::DR_SET::raw()   = (1UL << pin_);
  } else {
    Regs::DR_CLEAR::raw() = (1UL << pin_);
  }
}

template <uint32_t GPIO_NUM>
bool Gpio<GPIO_NUM>::read() {
  assert(false);  // TODO: implement read.
  return false;
}

template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::toggle() {
  // DR_TOGGLE: write a 1-bit pattern to atomically toggle the matching DR bits.
  Regs::DR_TOGGLE::raw() = (1UL << pin_);
}

// ================================================================================================
// Pin mux configuration

template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::configurePinMux() {
  static_assert(GPIO_NUM == 0,
                "Gpio<N>::configurePinMux must be specialized for this GPIO port");
}

// GPIO 9 pin mux: pin 3 used for the user LED.
template <>
inline void Gpio<9>::configurePinMux() {
  using Iomuxc = regs::Iomuxc;
  switch (pin_) {
    case 3: {
      using Pad = Iomuxc::SW_MUX_CTL_PAD_GPIO_AD_04;
      Pad::modify(Pad::MUX_MODE{Pad::eMUX_MODE::eALT10_gpio9_IO3});
      break;
    }
    default:
      assert(false);  // TODO: pin not implemented yet.
  }
}
