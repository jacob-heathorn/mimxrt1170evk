#include "gtest/gtest.h"
#include "ftl/mmio.hpp"

#include <cstdint>
#include <cstring>

// Tests use OCRAM1 as a scratch area to simulate MMIO. OCRAM1 is unused by
// the test binary (see linker memory-usage output), so we can poke at it.

namespace {

constexpr std::uintptr_t kScratchBase = 0x20240000u;
constexpr std::uintptr_t kMsrAddr     = kScratchBase + 0x00;
constexpr std::uintptr_t kMtdrAddr    = kScratchBase + 0x04;
constexpr std::uintptr_t kMixedAddr   = kScratchBase + 0x08;

volatile std::uint32_t& msrWord()   { return *reinterpret_cast<volatile std::uint32_t*>(kMsrAddr); }
volatile std::uint32_t& mtdrWord()  { return *reinterpret_cast<volatile std::uint32_t*>(kMtdrAddr); }
volatile std::uint32_t& mixedWord() { return *reinterpret_cast<volatile std::uint32_t*>(kMixedAddr); }

// ---------- Test register definitions (in a namespace to dodge global symbols) ----------
namespace fake {

namespace MsrFields {
  using TDF = ftl::mmio::Field<1,  0, bool, ftl::mmio::RO>;
  using RDF = ftl::mmio::Field<1,  1, bool, ftl::mmio::RO>;
  using SDF = ftl::mmio::Field<1,  9, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  using NDF = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  using ALF = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  using MBF = ftl::mmio::Field<1, 24, bool, ftl::mmio::RO>;
}
using Msr = ftl::mmio::Register<kMsrAddr, 0x1, ftl::mmio::RW,
    MsrFields::TDF, MsrFields::RDF, MsrFields::SDF,
    MsrFields::NDF, MsrFields::ALF, MsrFields::MBF>;

namespace MtdrFields {
  enum class Cmd : std::uint32_t { TxData = 0, RxData = 1, Stop = 2, Start = 4 };
  using DATA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::WO>;
  using CMD  = ftl::mmio::Field<3, 8, Cmd,          ftl::mmio::WO>;
}
using Mtdr = ftl::mmio::Register<kMtdrAddr, 0x0, ftl::mmio::WO,
    MtdrFields::DATA, MtdrFields::CMD>;

namespace MixedFields {
  using ENABLE = ftl::mmio::Field<1, 0, bool>;
  using COUNT  = ftl::mmio::Field<4, 4, std::uint8_t>;
  using FLAG   = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
}
using Mixed = ftl::mmio::Register<kMixedAddr, 0x0, ftl::mmio::RW,
    MixedFields::ENABLE, MixedFields::COUNT, MixedFields::FLAG>;

}  // namespace fake
}  // namespace

TEST(Mmio, SnapshotIsCoherent) {
  msrWord() = (1u << 0) | (1u << 9) | (1u << 24);
  auto snap = fake::Msr::read();
  EXPECT_TRUE (snap.get<fake::MsrFields::TDF>());
  EXPECT_FALSE(snap.get<fake::MsrFields::RDF>());
  EXPECT_TRUE (snap.get<fake::MsrFields::SDF>());
  EXPECT_TRUE (snap.get<fake::MsrFields::MBF>());

  msrWord() = 0;
  EXPECT_TRUE(snap.get<fake::MsrFields::SDF>());
}

TEST(Mmio, W1cClearWritesOnlyTargetBit) {
  msrWord() = (1u << 9) | (1u << 10) | (1u << 11);
  fake::Msr::clear<fake::MsrFields::SDF>();
  EXPECT_EQ(msrWord(), 1u << 9);
}

TEST(Mmio, ModifyNeutralizesW1cBits) {
  mixedWord() = (1u << 0) | (0xAu << 4) | (1u << 16);
  fake::Mixed::modify(fake::MixedFields::COUNT{0x3});
  EXPECT_EQ(mixedWord() & (1u << 16), 0u);           // W1C bit written as 0
  EXPECT_EQ(mixedWord() & (0xFu << 4), 0x3u << 4);   // COUNT updated
  EXPECT_EQ(mixedWord() & 1u, 1u);                   // ENABLE preserved
}

TEST(Mmio, ModifyMultipleFields) {
  mixedWord() = 0;
  fake::Mixed::modify(fake::MixedFields::ENABLE{true},
                      fake::MixedFields::COUNT{0x7});
  EXPECT_EQ(mixedWord() & 1u, 1u);
  EXPECT_EQ(mixedWord() & (0xFu << 4), 0x7u << 4);
}

TEST(Mmio, WriteIsAtomic) {
  mtdrWord() = 0xDEADBEEFu;
  fake::Mtdr::write(fake::MtdrFields::CMD {fake::MtdrFields::Cmd::Start},
                    fake::MtdrFields::DATA{0x6Cu});
  EXPECT_EQ(mtdrWord(),
            (static_cast<std::uint32_t>(fake::MtdrFields::Cmd::Start) << 8) | 0x6Cu);
}

TEST(Mmio, ResetWritesResetValue) {
  msrWord() = 0xFFFFFFFFu;
  fake::Msr::reset();
  EXPECT_EQ(msrWord(), 0x1u);
}

TEST(Mmio, EscapeHatchAccess) {
  mixedWord() = 0;
  fake::Mixed::raw() |= 0x1;
  EXPECT_EQ(mixedWord(), 0x1u);

  *reinterpret_cast<volatile std::uint32_t*>(fake::Mixed::kAddr) = 0x42u;
  EXPECT_EQ(mixedWord(), 0x42u);
}
