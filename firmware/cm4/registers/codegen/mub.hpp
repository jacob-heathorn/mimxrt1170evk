#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MUB
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::mub {

// Processor B Transmit Register 0
struct TR0_fields_ {
  // TR0
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR0_fields_

struct TR0 : ftl::mmio::Register<
    0x40C4C000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR0_fields_::DATA> {
  using DATA = TR0_fields_::DATA;
};

// Processor B Transmit Register 1
struct TR1_fields_ {
  // TR1
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR1_fields_

struct TR1 : ftl::mmio::Register<
    0x40C4C004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR1_fields_::DATA> {
  using DATA = TR1_fields_::DATA;
};

// Processor B Transmit Register 2
struct TR2_fields_ {
  // TR2
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR2_fields_

struct TR2 : ftl::mmio::Register<
    0x40C4C008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR2_fields_::DATA> {
  using DATA = TR2_fields_::DATA;
};

// Processor B Transmit Register 3
struct TR3_fields_ {
  // TR3
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR3_fields_

struct TR3 : ftl::mmio::Register<
    0x40C4C00Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR3_fields_::DATA> {
  using DATA = TR3_fields_::DATA;
};

// Processor B Receive Register 0
struct RR0_fields_ {
  // RR0
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR0_fields_

struct RR0 : ftl::mmio::Register<
    0x40C4C010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR0_fields_::DATA> {
  using DATA = RR0_fields_::DATA;
};

// Processor B Receive Register 1
struct RR1_fields_ {
  // RR1
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR1_fields_

struct RR1 : ftl::mmio::Register<
    0x40C4C014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR1_fields_::DATA> {
  using DATA = RR1_fields_::DATA;
};

// Processor B Receive Register 2
struct RR2_fields_ {
  // RR2
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR2_fields_

struct RR2 : ftl::mmio::Register<
    0x40C4C018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR2_fields_::DATA> {
  using DATA = RR2_fields_::DATA;
};

// Processor B Receive Register 3
struct RR3_fields_ {
  // RR3
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR3_fields_

struct RR3 : ftl::mmio::Register<
    0x40C4C01Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR3_fields_::DATA> {
  using DATA = RR3_fields_::DATA;
};

// Processor B Status Register
struct SR_fields_ {
  enum class eFn : std::uint32_t {
    // ABFn bit in MUA.CR register is written 0 (default).
    ezero = 0,
    // ABFn bit in MUA.CR register is written 1.
    eone = 1,
  };

  enum class eEP : std::uint32_t {
    // The Processor B-side event is not pending (default).
    enot_pending = 0,
    // The Processor B-side event is pending.
    epending = 1,
  };

  enum class eRS : std::uint32_t {
    // The Processor A or the Processor A-side of the MU is not in reset.
    enot_reset = 0,
    // The Processor A or the Processor A-side of the MU is in reset.
    ereset = 1,
  };

  enum class eFUP : std::uint32_t {
    // No flags updated, initiated by the Processor B, in progress (default)
    eno_update = 0,
    // Processor B initiated flags update, processing
    eupdate = 1,
  };

  enum class eTEn : std::uint32_t {
    // MUB.TRn register is not empty.
    enot_empty = 0,
    // MUB.TRn register is empty (default).
    eempty = 1,
  };

  enum class eRFn : std::uint32_t {
    // MUB.RRn register is not full (default).
    enot_full = 0,
    // MUB.RRn register has received data from MUA.TRn register and is ready to be read by the Processor B.
    efull = 1,
  };

  enum class eGIPn : std::uint32_t {
    // Processor B general purpose interrupt n is not pending. (default)
    enot_pending = 0,
    // Processor B general purpose interrupt n is pending.
    epending = 1,
  };

  // Fn
  using Fn = ftl::mmio::Field<3, 0, eFn, ftl::mmio::RO, ftl::mmio::Normal>;
  // EP
  using EP = ftl::mmio::Field<1, 4, eEP, ftl::mmio::RO, ftl::mmio::Normal>;
  // RS
  using RS = ftl::mmio::Field<1, 7, eRS, ftl::mmio::RO, ftl::mmio::Normal>;
  // FUP
  using FUP = ftl::mmio::Field<1, 8, eFUP, ftl::mmio::RO, ftl::mmio::Normal>;
  // TEn
  using TEn = ftl::mmio::Field<4, 20, eTEn, ftl::mmio::RO, ftl::mmio::Normal>;
  // RFn
  using RFn = ftl::mmio::Field<4, 24, eRFn, ftl::mmio::RO, ftl::mmio::Normal>;
  // GIPn
  using GIPn = ftl::mmio::Field<4, 28, eGIPn, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct SR_fields_

struct SR : ftl::mmio::Register<
    0x40C4C020u,
    std::uint32_t,
    0x00F00080u,
    ftl::mmio::RW,
    SR_fields_::Fn,
    ftl::mmio::Reserved<1, 3>,
    SR_fields_::EP,
    ftl::mmio::Reserved<2, 5>,
    SR_fields_::RS,
    SR_fields_::FUP,
    ftl::mmio::Reserved<11, 9>,
    SR_fields_::TEn,
    SR_fields_::RFn,
    SR_fields_::GIPn> {
  using eFn = SR_fields_::eFn;
  using eEP = SR_fields_::eEP;
  using eRS = SR_fields_::eRS;
  using eFUP = SR_fields_::eFUP;
  using eTEn = SR_fields_::eTEn;
  using eRFn = SR_fields_::eRFn;
  using eGIPn = SR_fields_::eGIPn;
  using Fn = SR_fields_::Fn;
  using EP = SR_fields_::EP;
  using RS = SR_fields_::RS;
  using FUP = SR_fields_::FUP;
  using TEn = SR_fields_::TEn;
  using RFn = SR_fields_::RFn;
  using GIPn = SR_fields_::GIPn;
};

// Processor B Control Register
struct CR_fields_ {
  enum class eFn : std::uint32_t {
    // Clears the Fn bit in the MUA.SR register.
    eclear = 0,
    // Sets the Fn bit in the MUA.SR register.
    eset = 1,
  };

  enum class eGIRn : std::uint32_t {
    // Processor B General Interrupt n is not requested to the Processor A (default).
    enot_requested = 0,
    // Processor B General Interrupt n is requested to the Processor A.
    erequested = 1,
  };

  enum class eTIEn : std::uint32_t {
    // Disables Processor B Transmit Interrupt n. (default)
    edisable = 0,
    // Enables Processor B Transmit Interrupt n.
    eenable = 1,
  };

  enum class eRIEn : std::uint32_t {
    // Disables Processor B Receive Interrupt n. (default)
    edisable = 0,
    // Enables Processor B Receive Interrupt n.
    eenable = 1,
  };

  enum class eGIEn : std::uint32_t {
    // Disables Processor B General Interrupt n. (default)
    edisable = 0,
    // Enables Processor B General Interrupt n.
    eenable = 1,
  };

  // Fn
  using Fn = ftl::mmio::Field<3, 0, eFn, ftl::mmio::RW, ftl::mmio::Normal>;
  // GIRn
  using GIRn = ftl::mmio::Field<4, 16, eGIRn, ftl::mmio::RW, ftl::mmio::Normal>;
  // TIEn
  using TIEn = ftl::mmio::Field<4, 20, eTIEn, ftl::mmio::RW, ftl::mmio::Normal>;
  // RIEn
  using RIEn = ftl::mmio::Field<4, 24, eRIEn, ftl::mmio::RW, ftl::mmio::Normal>;
  // GIEn
  using GIEn = ftl::mmio::Field<4, 28, eGIEn, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CR_fields_

struct CR : ftl::mmio::Register<
    0x40C4C024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CR_fields_::Fn,
    ftl::mmio::Reserved<13, 3>,
    CR_fields_::GIRn,
    CR_fields_::TIEn,
    CR_fields_::RIEn,
    CR_fields_::GIEn> {
  using eFn = CR_fields_::eFn;
  using eGIRn = CR_fields_::eGIRn;
  using eTIEn = CR_fields_::eTIEn;
  using eRIEn = CR_fields_::eRIEn;
  using eGIEn = CR_fields_::eGIEn;
  using Fn = CR_fields_::Fn;
  using GIRn = CR_fields_::GIRn;
  using TIEn = CR_fields_::TIEn;
  using RIEn = CR_fields_::RIEn;
  using GIEn = CR_fields_::GIEn;
};

}  // namespace regs::mub