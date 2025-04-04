# pragma once

#include "etl/singleton.h"
#include "drivers/gpio.hpp"
#include "utils/dtcm_allocator.hpp"

// TODO: Use

class AssertLed : public etl::singleton<AssertLed>
{
private:
  AssertLed() = default;
public:
    void initialize()
    {

      led_d34_ = DtcmAllocator::instance().allocate2<Gpio<9>>(25);
      // if (raw_memory == nullptr) {
      //     // Handle allocation failure (e.g., assert or throw)
      //     assert(false && "DTCM allocation failed");
      // }

      // led_d34_ = new (raw_memory) Gpio<9>(25);
      led_d34_->configure(GpioDirection::eOutput);
      led_d34_->write(false);
      configured_ = true;
    }

    void toggle()
    {
      led_d34_->toggle();
    }

private:
  Gpio<9> *led_d34_ = nullptr;
  bool configured_ = false;
};
