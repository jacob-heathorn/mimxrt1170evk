#pragma once

#include <cassert>
#include <cstdint>
#include <stdio.h>

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
  using regs = ::regs::Gpio<GPIO_NUM>;  // generated family class

  void configurePinMux();
};

// ================================================================================================
// Non-templated shared code

inline void EnableGpioClock()
{
  namespace ccm = ::regs::ccm;
  using direct = ccm::LPCG51_DIRECT;
  using status = ccm::LPCG51_STATUS0;
  direct::modify(direct::ON{direct::eON::eON_1});
  while (status::read().get<status::ON>() != status::eON::eON_1) {}
}

// ================================================================================================
// Template implementations

template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::configure(GpioDirection dir, GpioPull pull) {
  EnableGpioClock();
  configurePinMux();

  if (dir == GpioDirection::eOutput) {
    regs::IMR::raw()  &= ~(1UL << pin_);
    regs::DR::raw()   &= ~(1UL << pin_);
    regs::GDIR::raw() |=  (1UL << pin_);
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
  if (state) {
    regs::DR::raw() |=  (1UL << pin_);
  } else {
    regs::DR::raw() &= ~(1UL << pin_);
  }
}

template <uint32_t GPIO_NUM>
bool Gpio<GPIO_NUM>::read() {
  assert(false);  // TODO: implement read.
  return false;
}

template <uint32_t GPIO_NUM>
void Gpio<GPIO_NUM>::toggle() {
  regs::DR_TOGGLE::raw() = (1UL << pin_);
}
