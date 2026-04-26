#include "drivers/lpi2c.hpp"

#include "registers/codegen/ccm.hpp"
#include "registers/codegen/iomuxc_lpsr.hpp"
#include "registers/codegen/lpi2c.hpp"

using Ccm = regs::Ccm;
using IomuxcLpsr = regs::IomuxcLpsr;
using Lp = regs::Lpi2c<5>;

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
using Cmd = Lp::MTDR::eCMD;

}  // namespace

Lpi2c5::Lpi2c5() {
  enableClock();
  configurePins();
  resetAndConfigureMaster();
}

void Lpi2c5::enableClock() {
  using Direct = Ccm::LPCG102_DIRECT;
  using Status = Ccm::LPCG102_STATUS0;
  if (Status::read().get<Status::ON>() != Status::eON::eON_1) {
    Direct::modify(Direct::ON{Direct::eON::eON_1});
    while (Status::read().get<Status::ON>() != Status::eON::eON_1) {}
  }
}

void Lpi2c5::configurePins() {
  // SION enabled so the master can sense SDA/SCL for ACK and arbitration.
  using Sda = IomuxcLpsr::SW_MUX_CTL_PAD_GPIO_LPSR_04;
  Sda::modify(Sda::MUX_MODE{Sda::eMUX_MODE::eALT0_lpi2c5_SDA},
              Sda::SION    {Sda::eSION::eENABLED});

  using Scl = IomuxcLpsr::SW_MUX_CTL_PAD_GPIO_LPSR_05;
  Scl::modify(Scl::MUX_MODE{Scl::eMUX_MODE::eALT0_lpi2c5_SCL},
              Scl::SION    {Scl::eSION::eENABLED});
}

void Lpi2c5::resetAndConfigureMaster() {
  // Disable + reset master logic and FIFOs by writing the combined reset bits,
  // then clear them in a second write so the master can be re-enabled.
  Lp::MCR::write(Lp::MCR::RST{Lp::MCR::eRST::eRESET},
                 Lp::MCR::RTF{Lp::MCR::eRTF::eRESET},
                 Lp::MCR::RRF{Lp::MCR::eRRF::eRESET});
  Lp::MCR::write();  // all zero: clears RST/RTF/RRF and keeps MEN=0

  Lp::MCFGR1::write(
      Lp::MCFGR1::PRESCALE{Lp::MCFGR1::ePRESCALE::eDIVIDE_BY_1},
      Lp::MCFGR1::PINCFG  {Lp::MCFGR1::ePINCFG::eOPEN_DRAIN_2_PIN});

  Lp::MCFGR2::write(Lp::MCFGR2::BUSIDLE{kBusIdle},
                    Lp::MCFGR2::FILTSCL{static_cast<std::uint8_t>(kFilt)},
                    Lp::MCFGR2::FILTSDA{static_cast<std::uint8_t>(kFilt)});

  Lp::MCCR0::write(Lp::MCCR0::CLKLO  {static_cast<std::uint8_t>(kClkLo)},
                   Lp::MCCR0::CLKHI  {static_cast<std::uint8_t>(kClkHi)},
                   Lp::MCCR0::SETHOLD{static_cast<std::uint8_t>(kSetHold)},
                   Lp::MCCR0::DATAVD {static_cast<std::uint8_t>(kDataVd)});

  clearAllFlags();

  Lp::MCR::modify(Lp::MCR::MEN{Lp::MCR::eMEN::eENABLED});
}

void Lpi2c5::clearAllFlags() {
  Lp::MSR::clear<Lp::MSR::EPF, Lp::MSR::SDF, Lp::MSR::NDF,
                 Lp::MSR::ALF, Lp::MSR::FEF, Lp::MSR::PLTF>();
}

Lpi2cStatus Lpi2c5::checkErrorFlags() {
  auto snap = Lp::MSR::read();
  if (snap.get<Lp::MSR::NDF>()  == Lp::MSR::eNDF::eFLAG)  return Lpi2cStatus::eNack;
  if (snap.get<Lp::MSR::ALF>()  == Lp::MSR::eALF::eFLAG)  return Lpi2cStatus::eArbitrationLost;
  if (snap.get<Lp::MSR::FEF>()  == Lp::MSR::eFEF::eFLAG)  return Lpi2cStatus::eFifoError;
  if (snap.get<Lp::MSR::PLTF>() == Lp::MSR::ePLTF::eFLAG) return Lpi2cStatus::ePinLowTimeout;
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitTxReady() {
  while (Lp::MSR::read().get<Lp::MSR::TDF>() != Lp::MSR::eTDF::eENABLED) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitRxReady() {
  while (Lp::MSR::read().get<Lp::MSR::RDF>() != Lp::MSR::eRDF::eENABLED) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  return Lpi2cStatus::eOk;
}

Lpi2cStatus Lpi2c5::waitStopDetected() {
  while (Lp::MSR::read().get<Lp::MSR::SDF>() != Lp::MSR::eSDF::eFLAG) {
    auto err = checkErrorFlags();
    if (err != Lpi2cStatus::eOk) return err;
  }
  Lp::MSR::clear<Lp::MSR::SDF>();
  return Lpi2cStatus::eOk;
}

namespace {

inline void pushCommand(Cmd cmd, std::uint8_t data) {
  Lp::MTDR::write(Lp::MTDR::CMD{cmd},
                  Lp::MTDR::DATA{data});
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
    dst[i] = static_cast<std::uint8_t>(Lp::MRDR::read().get<Lp::MRDR::DATA>());
  }

  return waitStopDetected();
}
