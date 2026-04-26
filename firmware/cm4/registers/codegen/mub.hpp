#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MUB
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Mub {
  // Processor B Transmit Register 0
  struct Tr0Fields {
    // TR0
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr0Fields

  struct TR0 : ftl::mmio::Register<
      0x40C4C000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr0Fields::DATA> {
    using DATA = Tr0Fields::DATA;
  };

  // Processor B Transmit Register 1
  struct Tr1Fields {
    // TR1
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr1Fields

  struct TR1 : ftl::mmio::Register<
      0x40C4C004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr1Fields::DATA> {
    using DATA = Tr1Fields::DATA;
  };

  // Processor B Transmit Register 2
  struct Tr2Fields {
    // TR2
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr2Fields

  struct TR2 : ftl::mmio::Register<
      0x40C4C008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr2Fields::DATA> {
    using DATA = Tr2Fields::DATA;
  };

  // Processor B Transmit Register 3
  struct Tr3Fields {
    // TR3
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Tr3Fields

  struct TR3 : ftl::mmio::Register<
      0x40C4C00Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Tr3Fields::DATA> {
    using DATA = Tr3Fields::DATA;
  };

  // Processor B Receive Register 0
  struct Rr0Fields {
    // RR0
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr0Fields

  struct RR0 : ftl::mmio::Register<
      0x40C4C010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr0Fields::DATA> {
    using DATA = Rr0Fields::DATA;
  };

  // Processor B Receive Register 1
  struct Rr1Fields {
    // RR1
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr1Fields

  struct RR1 : ftl::mmio::Register<
      0x40C4C014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr1Fields::DATA> {
    using DATA = Rr1Fields::DATA;
  };

  // Processor B Receive Register 2
  struct Rr2Fields {
    // RR2
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr2Fields

  struct RR2 : ftl::mmio::Register<
      0x40C4C018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr2Fields::DATA> {
    using DATA = Rr2Fields::DATA;
  };

  // Processor B Receive Register 3
  struct Rr3Fields {
    // RR3
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Rr3Fields

  struct RR3 : ftl::mmio::Register<
      0x40C4C01Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Rr3Fields::DATA> {
    using DATA = Rr3Fields::DATA;
  };

  // Processor B Status Register
  struct SrFields {
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
  };  // struct SrFields

  struct SR : ftl::mmio::Register<
      0x40C4C020u,
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

  // Processor B Control Register
  struct CrFields {
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
  };  // struct CrFields

  struct CR : ftl::mmio::Register<
      0x40C4C024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CrFields::Fn,
      ftl::mmio::Reserved<13, 3>,
      CrFields::GIRn,
      CrFields::TIEn,
      CrFields::RIEn,
      CrFields::GIEn> {
    using eFn = CrFields::eFn;
    using eGIRn = CrFields::eGIRn;
    using eTIEn = CrFields::eTIEn;
    using eRIEn = CrFields::eRIEn;
    using eGIEn = CrFields::eGIEn;
    using Fn = CrFields::Fn;
    using GIRn = CrFields::GIRn;
    using TIEn = CrFields::TIEn;
    using RIEn = CrFields::RIEn;
    using GIEn = CrFields::GIEn;
  };

};

}  // namespace regs