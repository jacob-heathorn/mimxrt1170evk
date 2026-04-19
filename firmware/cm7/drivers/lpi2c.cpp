#include "drivers/lpi2c.hpp"

#include "registers/codegen/ccm.hpp"
#include "registers/codegen/iomuxc_lpsr.hpp"
#include "registers/codegen/lpi2c5.hpp"

namespace {

// SCL timing for 400 kHz with functional clock = 24 MHz, PRESCALE = 1.
// Bit period ≈ (CLKLO + 1) + (CLKHI + 1) + 2 = 60 cycles = 2.5 us.
// tLOW = 37 cycles = 1.54 us (spec ≥ 1.3 us). tHIGH = 21 cycles = 0.88 us (≥ 0.6 us).
constexpr uint32_t kClkLo   = 36;
constexpr uint32_t kClkHi   = 20;
constexpr uint32_t kSetHold = 18;
constexpr uint32_t kDataVd  = 15;
constexpr uint32_t kBusIdle = 100;
constexpr uint32_t kFilt    = 2;

constexpr uint8_t kWriteBit = 0;
constexpr uint8_t kReadBit  = 1;

}  // namespace

Lpi2c5::Lpi2c5() {
  enableClock();
  configurePins();
  resetAndConfigureMaster();
}

void Lpi2c5::enableClock() {
  auto& direct = nCCM::LPCG102_DIRECT::ref();
  auto& status = nCCM::LPCG102_STATUS0::ref();
  if (status.bits.ON != nCCM::LPCG102_STATUS0::eON::eON_1) {
    direct.bits.ON = nCCM::LPCG102_DIRECT::eON::eON_1;
    while (status.bits.ON != nCCM::LPCG102_STATUS0::eON::eON_1) {}
  }
}

void Lpi2c5::configurePins() {
  // SION enabled so the master can sense SDA/SCL for ACK and arbitration.
  auto& sda = nIOMUXC_LPSR::SW_MUX_CTL_PAD_GPIO_LPSR_04::ref();
  sda.bits.MUX_MODE = nIOMUXC_LPSR::SW_MUX_CTL_PAD_GPIO_LPSR_04::eMUX_MODE::eALT0_lpi2c5_SDA;
  sda.bits.SION     = nIOMUXC_LPSR::SW_MUX_CTL_PAD_GPIO_LPSR_04::eSION::eENABLED;

  auto& scl = nIOMUXC_LPSR::SW_MUX_CTL_PAD_GPIO_LPSR_05::ref();
  scl.bits.MUX_MODE = nIOMUXC_LPSR::SW_MUX_CTL_PAD_GPIO_LPSR_05::eMUX_MODE::eALT0_lpi2c5_SCL;
  scl.bits.SION     = nIOMUXC_LPSR::SW_MUX_CTL_PAD_GPIO_LPSR_05::eSION::eENABLED;
}

void Lpi2c5::resetAndConfigureMaster() {
  auto& mcr = nLPI2C5::MCR::ref();

  // Disable + reset master logic and both FIFOs. MCR.RST self-holds until cleared.
  mcr.value = 0;
  mcr.bits.RST = nLPI2C5::MCR::eRST::eRESET;
  mcr.bits.RTF = nLPI2C5::MCR::eRTF::eRESET;
  mcr.bits.RRF = nLPI2C5::MCR::eRRF::eRESET;
  mcr.value = 0;

  auto& cfg1 = nLPI2C5::MCFGR1::ref();
  cfg1.value = 0;
  cfg1.bits.PRESCALE = nLPI2C5::MCFGR1::ePRESCALE::eDIVIDE_BY_1;
  cfg1.bits.PINCFG   = nLPI2C5::MCFGR1::ePINCFG::eOPEN_DRAIN_2_PIN;

  auto& cfg2 = nLPI2C5::MCFGR2::ref();
  cfg2.value = 0;
  cfg2.bits.BUSIDLE = kBusIdle;
  cfg2.bits.FILTSCL = kFilt;
  cfg2.bits.FILTSDA = kFilt;

  auto& ccr0 = nLPI2C5::MCCR0::ref();
  ccr0.value = 0;
  ccr0.bits.CLKLO   = kClkLo;
  ccr0.bits.CLKHI   = kClkHi;
  ccr0.bits.SETHOLD = kSetHold;
  ccr0.bits.DATAVD  = kDataVd;

  clearAllFlags();

  mcr.bits.MEN = nLPI2C5::MCR::eMEN::eENABLED;
}

void Lpi2c5::clearAllFlags() {
  // W1C on the sticky flags.
  auto& msr = nLPI2C5::MSR::ref();
  msr.value = 0;
  msr.bits.EPF  = nLPI2C5::MSR::eEPF::eFLAG;
  msr.bits.SDF  = nLPI2C5::MSR::eSDF::eFLAG;
  msr.bits.NDF  = nLPI2C5::MSR::eNDF::eFLAG;
  msr.bits.ALF  = nLPI2C5::MSR::eALF::eFLAG;
  msr.bits.FEF  = nLPI2C5::MSR::eFEF::eFLAG;
  msr.bits.PLTF = nLPI2C5::MSR::ePLTF::eFLAG;
}

Lpi2cStatus Lpi2c5::checkErrorFlags() {
  auto& msr = nLPI2C5::MSR::ref();
  if (msr.bits.NDF  == nLPI2C5::MSR::eNDF::eFLAG)  return Lpi2cStatus::eNack;
  if (msr.bits.ALF  == nLPI2C5::MSR::eALF::eFLAG)  return Lpi2cStatus::eArbitrationLost;
  if (msr.bits.FEF  == nLPI2C5::MSR::eFEF::eFLAG)  return Lpi2cStatus::eFifoError;
  if (msr.bits.PLTF == nLPI2C5::MSR::ePLTF::eFLAG) return Lpi2cStatus::ePinLowTimeout;
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitTxReady() {
  auto& msr = nLPI2C5::MSR::ref();
  while (msr.bits.TDF != nLPI2C5::MSR::eTDF::eENABLED) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitRxReady() {
  auto& msr = nLPI2C5::MSR::ref();
  while (msr.bits.RDF != nLPI2C5::MSR::eRDF::eENABLED) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitStopDetected() {
  auto& msr = nLPI2C5::MSR::ref();
  while (msr.bits.SDF != nLPI2C5::MSR::eSDF::eFLAG) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  msr.bits.SDF = nLPI2C5::MSR::eSDF::eFLAG;  // W1C
  return Lpi2cStatus::eOk;
}

namespace {

inline void pushCommand(nLPI2C5::MTDR::eCMD cmd, uint8_t data) {
  // MTDR layout: CMD in bits [10:8], DATA in bits [7:0].
  nLPI2C5::MTDR::ref().value =
      (static_cast<uint32_t>(cmd) << 8) | static_cast<uint32_t>(data);
}

}  // namespace

Lpi2cStatus Lpi2c5::readRegister(uint8_t addr, uint8_t reg, uint8_t* dst, size_t len) {
  if (len == 0 || len > 256) return Lpi2cStatus::eFifoError;

  clearAllFlags();

  // START + write-address.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(nLPI2C5::MTDR::eCMD::eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0,
              static_cast<uint8_t>((addr << 1) | kWriteBit));

  // TX the register pointer.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(nLPI2C5::MTDR::eCMD::eTRANSMIT_DATA_7_THROUGH_0, reg);

  // Repeated START + read-address.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(nLPI2C5::MTDR::eCMD::eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0,
              static_cast<uint8_t>((addr << 1) | kReadBit));

  // Queue a single RX command for (len - 1) + 1 = len bytes, then STOP.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(nLPI2C5::MTDR::eCMD::eRECEIVE_DATA_7_THROUGH_0_PLUS_ONE,
              static_cast<uint8_t>(len - 1));

  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(nLPI2C5::MTDR::eCMD::eGENERATE_STOP_CONDITION, 0);

  // Drain RX FIFO.
  for (size_t i = 0; i < len; ++i) {
    if (auto s = waitRxReady(); s != Lpi2cStatus::eOk) return s;
    dst[i] = static_cast<uint8_t>(nLPI2C5::MRDR::ref().bits.DATA);
  }

  return waitStopDetected();
}
