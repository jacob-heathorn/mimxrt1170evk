#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MUA
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::mua {

// Processor A Transmit Register 0
struct TR0_fields_ {
  // TR0
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR0_fields_

struct TR0 : ftl::mmio::Register<
    0x40C48000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR0_fields_::DATA> {
  using DATA = TR0_fields_::DATA;
};

// Processor A Transmit Register 1
struct TR1_fields_ {
  // TR1
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR1_fields_

struct TR1 : ftl::mmio::Register<
    0x40C48004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR1_fields_::DATA> {
  using DATA = TR1_fields_::DATA;
};

// Processor A Transmit Register 2
struct TR2_fields_ {
  // TR2
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR2_fields_

struct TR2 : ftl::mmio::Register<
    0x40C48008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR2_fields_::DATA> {
  using DATA = TR2_fields_::DATA;
};

// Processor A Transmit Register 3
struct TR3_fields_ {
  // TR3
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TR3_fields_

struct TR3 : ftl::mmio::Register<
    0x40C4800Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TR3_fields_::DATA> {
  using DATA = TR3_fields_::DATA;
};

// Processor A Receive Register 0
struct RR0_fields_ {
  // RR0
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR0_fields_

struct RR0 : ftl::mmio::Register<
    0x40C48010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR0_fields_::DATA> {
  using DATA = RR0_fields_::DATA;
};

// Processor A Receive Register 1
struct RR1_fields_ {
  // RR1
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR1_fields_

struct RR1 : ftl::mmio::Register<
    0x40C48014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR1_fields_::DATA> {
  using DATA = RR1_fields_::DATA;
};

// Processor A Receive Register 2
struct RR2_fields_ {
  // RR2
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR2_fields_

struct RR2 : ftl::mmio::Register<
    0x40C48018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR2_fields_::DATA> {
  using DATA = RR2_fields_::DATA;
};

// Processor A Receive Register 3
struct RR3_fields_ {
  // RR3
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RR3_fields_

struct RR3 : ftl::mmio::Register<
    0x40C4801Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RR3_fields_::DATA> {
  using DATA = RR3_fields_::DATA;
};

// Processor A Status Register
struct SR_fields_ {
  enum class eFn : std::uint32_t {
    // BAFn bit in MUB.CR register is written 0 (default).
    ezero = 0,
    // BAFn bit in MUB.CR register is written 1.
    eone = 1,
  };

  enum class eEP : std::uint32_t {
    // The Processor A-side event is not pending (default).
    enot_pending = 0,
    // The Processor A-side event is pending.
    epending = 1,
  };

  enum class eRS : std::uint32_t {
    // The Processor B-side of the MU is not in reset.
    enot_reset = 0,
    // The Processor B-side of the MU is in reset.
    ereset = 1,
  };

  enum class eFUP : std::uint32_t {
    // No flags updated, initiated by the Processor A, in progress (default)
    eno_update = 0,
    // Processor A initiated flags update, processing
    eupdate = 1,
  };

  enum class eTEn : std::uint32_t {
    // MUA.TRn register is not empty.
    enot_empty = 0,
    // MUA.TRn register is empty (default).
    eempty = 1,
  };

  enum class eRFn : std::uint32_t {
    // MUA.RRn register is not full (default).
    enot_full = 0,
    // MUA.RRn register has received data from MUB.TRn register and is ready to be read by the Processor A.
    efull = 1,
  };

  enum class eGIPn : std::uint32_t {
    // Processor A general purpose interrupt n is not pending. (default)
    enot_pending = 0,
    // Processor A general purpose interrupt n is pending.
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
    0x40C48020u,
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

// Processor A Control Register
struct CR_fields_ {
  enum class eFn : std::uint32_t {
    // N/A. Self clearing bit (default).
    enot_appl = 0,
    // Asserts the Processor A MU reset.
    eassert_reset = 1,
  };

  enum class eMUR : std::uint32_t {
    // N/A. Self clearing bit (default).
    enot_appl = 0,
    // Asserts the Processor A MU reset.
    eassert_reset = 1,
  };

  enum class eGIRn : std::uint32_t {
    // Processor A General Interrupt n is not requested to the Processor B (default).
    enot_requested = 0,
    // Processor A General Interrupt n is requested to the Processor B.
    erequested = 1,
  };

  enum class eTIEn : std::uint32_t {
    // Disables Processor A Transmit Interrupt n. (default)
    edisable = 0,
    // Enables Processor A Transmit Interrupt n.
    eenable = 1,
  };

  enum class eRIEn : std::uint32_t {
    // Disables Processor A Receive Interrupt n. (default)
    edisable = 0,
    // Enables Processor A Receive Interrupt n.
    eenable = 1,
  };

  enum class eGIEn : std::uint32_t {
    // Disables Processor A General Interrupt n. (default)
    edisable = 0,
    // Enables Processor A General Interrupt n.
    eenable = 1,
  };

  // Fn
  using Fn = ftl::mmio::Field<3, 0, eFn, ftl::mmio::RW, ftl::mmio::Normal>;
  // MUR
  using MUR = ftl::mmio::Field<1, 5, eMUR, ftl::mmio::RW, ftl::mmio::Normal>;
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
    0x40C48024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CR_fields_::Fn,
    ftl::mmio::Reserved<2, 3>,
    CR_fields_::MUR,
    ftl::mmio::Reserved<10, 6>,
    CR_fields_::GIRn,
    CR_fields_::TIEn,
    CR_fields_::RIEn,
    CR_fields_::GIEn> {
  using eFn = CR_fields_::eFn;
  using eMUR = CR_fields_::eMUR;
  using eGIRn = CR_fields_::eGIRn;
  using eTIEn = CR_fields_::eTIEn;
  using eRIEn = CR_fields_::eRIEn;
  using eGIEn = CR_fields_::eGIEn;
  using Fn = CR_fields_::Fn;
  using MUR = CR_fields_::MUR;
  using GIRn = CR_fields_::GIRn;
  using TIEn = CR_fields_::TIEn;
  using RIEn = CR_fields_::RIEn;
  using GIEn = CR_fields_::GIEn;
};

}  // namespace regs::mua