#include <cstdint>
#include <cstdio>

#include "drivers/lpi2c.hpp"

// AS5600 magnetic rotary encoder over I2C.
//
// Wiring (MIMXRT1170-EVK Arduino expansion headers):
//   AS5600 SDA -> J10 D14 (GPIO_LPSR_04)
//   AS5600 SCL -> J10 D15 (GPIO_LPSR_05)
//   AS5600 VCC -> J25 3.3V  (3V3 only, do not use 5V)
//   AS5600 GND -> J25 GND
//   AS5600 DIR -> GND        (fix rotation direction)

namespace {

constexpr uint8_t kAs5600Address  = 0x36;
constexpr uint8_t kRegZpos        = 0x01;  // start position, 12-bit
constexpr uint8_t kRegMpos        = 0x03;  // stop position, 12-bit
constexpr uint8_t kRegMang        = 0x05;  // max angle, 12-bit (0 = full 360 deg)
constexpr uint8_t kRegConf        = 0x07;  // configuration, 14-bit
constexpr uint8_t kRegAngle       = 0x0E;  // filtered angle, 12-bit
constexpr uint8_t kRegStatus      = 0x0B;  // MH/ML/MD bits
constexpr uint8_t kRegAgc         = 0x1A;  // automatic gain, 0..255 (ideal ~128)
constexpr uint32_t kAngleCounts   = 4096;

uint16_t readU12(Lpi2c5& i2c, uint8_t reg) {
  uint8_t buf[2] = {};
  i2c.readRegister(kAs5600Address, reg, buf, sizeof(buf));
  return static_cast<uint16_t>((buf[0] & 0x0F) << 8 | buf[1]);
}

uint8_t readU8(Lpi2c5& i2c, uint8_t reg) {
  uint8_t b = 0;
  i2c.readRegister(kAs5600Address, reg, &b, 1);
  return b;
}

}  // namespace

int main() {
  Lpi2c5 i2c;

  std::printf("\r\nAS5600 encoder ready -- rotate the shaft\r\n");

  const uint8_t  status0 = readU8 (i2c, kRegStatus);
  const uint8_t  agc0    = readU8 (i2c, kRegAgc);
  const uint16_t zpos    = readU12(i2c, kRegZpos);
  const uint16_t mpos    = readU12(i2c, kRegMpos);
  const uint16_t mang    = readU12(i2c, kRegMang);
  const uint16_t conf    = readU12(i2c, kRegConf);
  std::printf("STATUS=0x%02X (MD=%u MH=%u ML=%u)  AGC=%u\r\n",
              status0,
              (status0 >> 5) & 1u,   // MD: magnet detected
              (status0 >> 4) & 1u,   // MH: magnet too strong (too close)
              (status0 >> 3) & 1u,   // ML: magnet too weak (too far)
              agc0);
  std::printf("ZPOS=%u  MPOS=%u  MANG=%u  CONF=0x%04X\r\n", zpos, mpos, mang, conf);

  while (true) {
    uint8_t raw[2] = {};
    auto status = i2c.readRegister(kAs5600Address, kRegAngle, raw, sizeof(raw));

    if (status != Lpi2cStatus::eOk) {
      std::printf("read error: %u\r\n", static_cast<unsigned>(status));
      for (volatile int i = 0; i < 1'000'000; ++i) {}
      continue;
    }

    const uint16_t angle   = static_cast<uint16_t>((raw[0] & 0x0F) << 8 | raw[1]);
    const uint32_t deg_x10 = (static_cast<uint32_t>(angle) * 3600u) / kAngleCounts;
    std::printf("angle=%4u (%3lu.%lu deg)  STATUS=0x%02X  AGC=%u\r\n",
                angle,
                static_cast<unsigned long>(deg_x10 / 10),
                static_cast<unsigned long>(deg_x10 % 10),
                readU8(i2c, kRegStatus), readU8(i2c, kRegAgc));

    for (volatile int i = 0; i < 1'000'000; ++i) {}
  }
}
