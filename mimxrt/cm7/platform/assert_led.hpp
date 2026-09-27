# pragma once

#include "forge/ftl/singleton.hpp"
#include "mimxrt/cm7/drivers/gpio.hpp"
#include "mimxrt/cm7/utils/dtcm_allocator.hpp"


class AssertLed : public ftl::Singleton<AssertLed>
{
  friend class ftl::Singleton<AssertLed>;
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
