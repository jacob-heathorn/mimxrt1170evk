#pragma once

#include <cstddef>
#include <cstdint>

// LPI2C5 polling-mode master driver at 400 kHz.
//
// Pads: SDA = GPIO_LPSR_04 ALT0, SCL = GPIO_LPSR_05 ALT0.
// Clock: LPI2C5_CLK_ROOT = 24 MHz (OSC_RC_48M_DIV2), gated by LPCG102.
// Requires BOARD_BootClockRUN to have configured the clock root.

enum class Lpi2cStatus : uint32_t {
  eOk,
  eNack,
  eArbitrationLost,
  eFifoError,
  ePinLowTimeout,
  eBusBusy,
};

class Lpi2c5 {
public:
  Lpi2c5();
  Lpi2c5(const Lpi2c5&) = delete;
  Lpi2c5(Lpi2c5&&) = delete;
  Lpi2c5& operator=(const Lpi2c5&) = delete;
  Lpi2c5& operator=(Lpi2c5&&) = delete;

  // Read `len` bytes from `reg` on 7-bit slave `addr` into `dst`.
  // Performs: START, write(addr<<1|0), write(reg), REP-START, read(addr<<1|1), STOP.
  Lpi2cStatus readRegister(uint8_t addr, uint8_t reg, uint8_t* dst, size_t len);

private:
  void configurePins();
  void enableClock();
  void resetAndConfigureMaster();
  Lpi2cStatus waitTxReady();
  Lpi2cStatus waitRxReady();
  Lpi2cStatus waitStopDetected();
  Lpi2cStatus checkErrorFlags();
  void clearAllFlags();
};
