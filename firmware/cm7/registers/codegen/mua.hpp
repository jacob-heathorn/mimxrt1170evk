#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MUA
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Mua {
  // Processor A Transmit Register 0
  struct Tr0Fields {
    // TR0
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr0Fields

  struct TR0 : ftl::mmio::Register<
      0x40C48000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr0Fields::DATA> {
    using DATA = Tr0Fields::DATA;
  };

  // Processor A Transmit Register 1
  struct Tr1Fields {
    // TR1
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr1Fields

  struct TR1 : ftl::mmio::Register<
      0x40C48004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr1Fields::DATA> {
    using DATA = Tr1Fields::DATA;
  };

  // Processor A Transmit Register 2
  struct Tr2Fields {
    // TR2
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr2Fields

  struct TR2 : ftl::mmio::Register<
      0x40C48008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr2Fields::DATA> {
    using DATA = Tr2Fields::DATA;
  };

  // Processor A Transmit Register 3
  struct Tr3Fields {
    // TR3
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr3Fields

  struct TR3 : ftl::mmio::Register<
      0x40C4800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr3Fields::DATA> {
    using DATA = Tr3Fields::DATA;
  };

  // Processor A Receive Register 0
  struct Rr0Fields {
    // RR0
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr0Fields

  struct RR0 : ftl::mmio::Register<
      0x40C48010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr0Fields::DATA> {
    using DATA = Rr0Fields::DATA;
  };

  // Processor A Receive Register 1
  struct Rr1Fields {
    // RR1
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr1Fields

  struct RR1 : ftl::mmio::Register<
      0x40C48014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr1Fields::DATA> {
    using DATA = Rr1Fields::DATA;
  };

  // Processor A Receive Register 2
  struct Rr2Fields {
    // RR2
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr2Fields

  struct RR2 : ftl::mmio::Register<
      0x40C48018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr2Fields::DATA> {
    using DATA = Rr2Fields::DATA;
  };

  // Processor A Receive Register 3
  struct Rr3Fields {
    // RR3
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr3Fields

  struct RR3 : ftl::mmio::Register<
      0x40C4801Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr3Fields::DATA> {
    using DATA = Rr3Fields::DATA;
  };

  // Processor A Status Register
  struct SrFields {
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
  };  // struct SrFields

  struct SR : ftl::mmio::Register<
      0x40C48020u,
      std::uint32_t,
      0x00F00080u,
      ftl::mmio::RW,
      SrFields::Fn,
      ftl::mmio::Reserved<1, 3>,
      SrFields::EP,
      ftl::mmio::Reserved<2, 5>,
      SrFields::RS,
      SrFields::FUP,
      ftl::mmio::Reserved<11, 9>,
      SrFields::TEn,
      SrFields::RFn,
      SrFields::GIPn> {
    using eFn = SrFields::eFn;
    using eEP = SrFields::eEP;
    using eRS = SrFields::eRS;
    using eFUP = SrFields::eFUP;
    using eTEn = SrFields::eTEn;
    using eRFn = SrFields::eRFn;
    using eGIPn = SrFields::eGIPn;
    using Fn = SrFields::Fn;
    using EP = SrFields::EP;
    using RS = SrFields::RS;
    using FUP = SrFields::FUP;
    using TEn = SrFields::TEn;
    using RFn = SrFields::RFn;
    using GIPn = SrFields::GIPn;
  };

  // Processor A Control Register
  struct CrFields {
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
  };  // struct CrFields

  struct CR : ftl::mmio::Register<
      0x40C48024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CrFields::Fn,
      ftl::mmio::Reserved<2, 3>,
      CrFields::MUR,
      ftl::mmio::Reserved<10, 6>,
      CrFields::GIRn,
      CrFields::TIEn,
      CrFields::RIEn,
      CrFields::GIEn> {
    using eFn = CrFields::eFn;
    using eMUR = CrFields::eMUR;
    using eGIRn = CrFields::eGIRn;
    using eTIEn = CrFields::eTIEn;
    using eRIEn = CrFields::eRIEn;
    using eGIEn = CrFields::eGIEn;
    using Fn = CrFields::Fn;
    using MUR = CrFields::MUR;
    using GIRn = CrFields::GIRn;
    using TIEn = CrFields::TIEn;
    using RIEn = CrFields::RIEn;
    using GIEn = CrFields::GIEn;
  };

};

}  // namespace regs