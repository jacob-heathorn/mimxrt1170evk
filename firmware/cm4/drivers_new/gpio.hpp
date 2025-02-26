#include "registers/gpio9.hpp"

class Gpio {
public:
    enum class Direction : uint32_t {
        eInput,
        eOutput
    };

    enum Pull {
        NO_PULL,
        PULL_UP,
        PULL_DOWN
    };

    enum State {
        LOW = 0,
        HIGH = 1
    };

    Gpio(uint32_t port, uint32_t pin);
    void configure(Direction dir, Pull pull = NO_PULL);
    void write(State state);
    State read();
    void toggle();

private:
    uint32_t port_;  // GPIO Port
    uint32_t pin_;   // GPIO Pin

    void configurePinMux();
};

// Constructor: Assigns port and pin
Gpio::Gpio(uint32_t port, uint32_t pin) : port_(port), pin_(pin) {}

// Configure GPIO pin direction and pull-up/down settings
void Gpio::configure(Direction dir, Pull pull) {
    // Enable th GPIO0 clock. TODO which GPIO?
    nCCM::LPCG51_DIRECT::Instance().bits.ON = nCCM::LPCG51_DIRECT::eON::eON_1;
    while (nCCM::LPCG51_STATUS0::Instance().bits.ON != nCCM::LPCG51_STATUS0::eON::eON_1) {}
    
    // Configure the pin in IOMUXC for GPIO use.
    configurePinMux();

    // Configure direction
    if (dir == Gpio::Direction::eOutput) {
      // TODO templatize?
      nGPIO9::IMR::Instance().bits.IMR &= ~(1UL << pin_);
      nGPIO9::DR::Instance().bits.DR &= ~(1UL << pin_);
      nGPIO9::GDIR::Instance().bits.GDIR |= (1UL << pin_);
    } else {
        // Set pin as input
        // GPIOx->GDIR &= ~(1 << pin_);
    }

    // Configure pull-up/down resistors
    if (pull == PULL_UP) {
        // Enable pull-up resistor
        // GPIOx->PULL |= (1 << pin_);
    } else if (pull == PULL_DOWN) {
        // Enable pull-down resistor
        // GPIOx->PULL &= ~(1 << pin_);
    }
}

// Write HIGH or LOW to the GPIO pin
void Gpio::write(State state) {
    if (state == HIGH) {
      nGPIO9::DR::Instance().bits.DR |= (1 << pin_);
        
    } else {
      nGPIO9::DR::Instance().bits.DR &= ~(1UL << 3);
    }
}

// Read the current state of the GPIO pin
Gpio::State Gpio::read() {
    // Example: return (GPIOx->DR & (1 << pin_)) ? HIGH : LOW;
    return LOW;  // Placeholder
}

// Toggle the state of the GPIO pin
void Gpio::toggle() {
    // Example: GPIOx->DR ^= (1 << pin_);
    nGPIO9::DR_TOGGLE::Instance().bits.DR_TOGGLE ^= (1 << pin_);
}

// Configure Pin MUX for GPIO (specific to i.MX RT1170)
void Gpio::configurePinMux() {
  // Set GPIO9, pin3 mux, for LED.
  nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::Instance().bits.MUX_MODE = 
      nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_04::eMUX_MODE::eALT10_gpio9_IO3;
}
