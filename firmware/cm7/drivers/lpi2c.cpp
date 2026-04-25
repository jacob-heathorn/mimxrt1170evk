#include "drivers/lpi2c.hpp"

#include "registers/codegen/ccm.hpp"
#include "registers/codegen/iomuxc_lpsr.hpp"
#include "registers/codegen/lpi2c5.hpp"

namespace ccm = regs::ccm;
namespace lp = regs::lpi2c5;

namespace {

// SCL timing for 400 kHz with functional clock = 24 MHz, PRESCALE = 1.
constexpr std::uint32_t kClkLo   = 36;
constexpr std::uint32_t kClkHi   = 20;
constexpr std::uint32_t kSetHold = 18;
constexpr std::uint32_t kDataVd  = 15;
constexpr std::uint32_t kBusIdle = 100;
constexpr std::uint32_t kFilt    = 2;

constexpr std::uint8_t kWriteBit = 0;
constexpr std::uint8_t kReadBit  = 1;

// Local alias for the verbose MTDR CMD enumerators.
using Cmd = lp::MTDR::eCMD;

}  // namespace

Lpi2c5::Lpi2c5() {
  enableClock();
  configurePins();
  resetAndConfigureMaster();
}

void Lpi2c5::enableClock() {
  using direct = ccm::LPCG102_DIRECT;
  using status = ccm::LPCG102_STATUS0;
  if (status::read().get<status::ON>() != status::eON::eON_1) {
    direct::modify(direct::ON{direct::eON::eON_1});
    while (status::read().get<status::ON>() != status::eON::eON_1) {}
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
  // Disable + reset master logic and FIFOs by writing the combined reset bits,
  // then clear them in a second write so the master can be re-enabled.
  lp::MCR::write(lp::MCR::RST{lp::MCR::eRST::eRESET},
                 lp::MCR::RTF{lp::MCR::eRTF::eRESET},
                 lp::MCR::RRF{lp::MCR::eRRF::eRESET});
  lp::MCR::write();  // all zero: clears RST/RTF/RRF and keeps MEN=0

  lp::MCFGR1::write(
      lp::MCFGR1::PRESCALE{lp::MCFGR1::ePRESCALE::eDIVIDE_BY_1},
      lp::MCFGR1::PINCFG  {lp::MCFGR1::ePINCFG::eOPEN_DRAIN_2_PIN});

  lp::MCFGR2::write(lp::MCFGR2::BUSIDLE{kBusIdle},
                    lp::MCFGR2::FILTSCL{static_cast<std::uint8_t>(kFilt)},
                    lp::MCFGR2::FILTSDA{static_cast<std::uint8_t>(kFilt)});

  lp::MCCR0::write(lp::MCCR0::CLKLO  {static_cast<std::uint8_t>(kClkLo)},
                   lp::MCCR0::CLKHI  {static_cast<std::uint8_t>(kClkHi)},
                   lp::MCCR0::SETHOLD{static_cast<std::uint8_t>(kSetHold)},
                   lp::MCCR0::DATAVD {static_cast<std::uint8_t>(kDataVd)});

  clearAllFlags();

  lp::MCR::modify(lp::MCR::MEN{lp::MCR::eMEN::eENABLED});
}

void Lpi2c5::clearAllFlags() {
  lp::MSR::clear<lp::MSR::EPF, lp::MSR::SDF, lp::MSR::NDF,
                 lp::MSR::ALF, lp::MSR::FEF, lp::MSR::PLTF>();
}

Lpi2cStatus Lpi2c5::checkErrorFlags() {
  auto snap = lp::MSR::read();
  if (snap.get<lp::MSR::NDF>()  == lp::MSR::eNDF::eFLAG)  return Lpi2cStatus::eNack;
  if (snap.get<lp::MSR::ALF>()  == lp::MSR::eALF::eFLAG)  return Lpi2cStatus::eArbitrationLost;
  if (snap.get<lp::MSR::FEF>()  == lp::MSR::eFEF::eFLAG)  return Lpi2cStatus::eFifoError;
  if (snap.get<lp::MSR::PLTF>() == lp::MSR::ePLTF::eFLAG) return Lpi2cStatus::ePinLowTimeout;
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitTxReady() {
  while (lp::MSR::read().get<lp::MSR::TDF>() != lp::MSR::eTDF::eENABLED) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitRxReady() {
  while (lp::MSR::read().get<lp::MSR::RDF>() != lp::MSR::eRDF::eENABLED) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitStopDetected() {
  while (lp::MSR::read().get<lp::MSR::SDF>() != lp::MSR::eSDF::eFLAG) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  lp::MSR::clear<lp::MSR::SDF>();
  return Lpi2cStatus::eOk;
}

namespace {

inline void pushCommand(Cmd cmd, std::uint8_t data) {
  lp::MTDR::write(lp::MTDR::CMD{cmd},
                  lp::MTDR::DATA{data});
}

}  // namespace

Lpi2cStatus Lpi2c5::readRegister(std::uint8_t addr, std::uint8_t reg,
                                 std::uint8_t* dst, std::size_t len) {
  if (len == 0 || len > 256) return Lpi2cStatus::eFifoError;

  clearAllFlags();

  // START + write-address.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(Cmd::eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0,
              static_cast<std::uint8_t>((addr << 1) | kWriteBit));

  // TX the register pointer.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(Cmd::eTRANSMIT_DATA_7_THROUGH_0, reg);

  // Repeated START + read-address.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(Cmd::eGENERATE_START_AND_TRANSMIT_ADDRESS_IN_DATA_7_THROUGH_0,
              static_cast<std::uint8_t>((addr << 1) | kReadBit));

  // Receive len bytes.
  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(Cmd::eRECEIVE_DATA_7_THROUGH_0_PLUS_ONE,
              static_cast<std::uint8_t>(len - 1));

  if (auto s = waitTxReady(); s != Lpi2cStatus::eOk) return s;
  pushCommand(Cmd::eGENERATE_STOP_CONDITION, 0);

  // Drain RX FIFO.
  for (std::size_t i = 0; i < len; ++i) {
    if (auto s = waitRxReady(); s != Lpi2cStatus::eOk) return s;
    dst[i] = static_cast<std::uint8_t>(lp::MRDR::read().get<lp::MRDR::DATA>());
  }

  return waitStopDetected();
}
