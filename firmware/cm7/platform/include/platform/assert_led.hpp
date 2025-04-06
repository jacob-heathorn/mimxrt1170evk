# pragma once

#include "forge/singleton.hpp"
#include "drivers/gpio.hpp"
#include "utils/dtcm_allocator.hpp"


class AssertLed : public forge::Singleton<AssertLed>
{
  friend class forge::Singleton<AssertLed>;
private:
  AssertLed()
  {
    led_d34_.configure(GpioDirection::eOutput);
    led_d34_.write(false);
  }
public:
  void write(bool state) { led_d34_.write(state); }
  void toggle() { led_d34_.toggle(); }

private:
  Gpio<9> led_d34_{25};
};
