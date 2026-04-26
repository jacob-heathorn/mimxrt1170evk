#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CM7_MCM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cm7Mcm {
  // Interrupt Status and Control Register
  struct IscrFields {
    enum class eWABS : std::uint32_t {
      // No abort
      enoabort = 0,
      // Abort
      eabort = 1,
    };

    enum class eWABSO : std::uint32_t {
      // No write abort overrun
      eno = 0,
      // Write abort overrun occurred
      eyes = 1,
    };

    enum class eFIOC : std::uint32_t {
      // No interrupt
      eNo = 0,
      // Interrupt occured
      eYes = 1,
    };

    enum class eFDZC : std::uint32_t {
      // No interrupt
      eNo = 0,
      // Interrupt occured
      eYes = 1,
    };

    enum class eFOFC : std::uint32_t {
      // No interrupt
      eNo = 0,
      // Interrupt occured
      eYes = 1,
    };

    enum class eFUFC : std::uint32_t {
      // No interrupt
      eNo = 0,
      // Interrupt occured
      eYes = 1,
    };

    enum class eFIXC : std::uint32_t {
      // No interrupt
      eNo = 0,
      // Interrupt occured
      eYes = 1,
    };

    enum class eFIDC : std::uint32_t {
      // No interrupt
      eNo = 0,
      // Interrupt occured
      eYes = 1,
    };

    enum class eWABE : std::uint32_t {
      // Disable interrupt
      eDISABLE = 0,
      // Enable interrupt
      eENABLE = 1,
    };

    enum class eFIOCE : std::uint32_t {
      // Disable interrupt
      eDISABLE = 0,
      // Enable interrupt
      eENABLE = 1,
    };

    enum class eFDZCE : std::uint32_t {
      // Disable interrupt
      eDISABLE = 0,
      // Enable interrupt
      eENABLE = 1,
    };

    enum class eFOFCE : std::uint32_t {
      // Disable interrupt
      eDISABLE = 0,
      // Enable interrupt
      eENABLE = 1,
    };

    enum class eFUFCE : std::uint32_t {
      // Disable interrupt
      eDISABLE = 0,
      // Enable interrupt
      eENABLE = 1,
    };

    enum class eFIXCE : std::uint32_t {
      // Disable interrupt
      eDISABLE = 0,
      // Enable interrupt
      eENABLE = 1,
    };

    enum class eFIDCE : std::uint32_t {
      // Disable interrupt
      eDISABLE = 0,
      // Enable interrupt
      eENABLE = 1,
    };

    // Write Abort on Slave
    using WABS = ftl::mmio::Field<1, 5, eWABS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Write Abort on Slave Overrun
    using WABSO = ftl::mmio::Field<1, 6, eWABSO, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU Invalid Operation interrupt Status
    using FIOC = ftl::mmio::Field<1, 8, eFIOC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU Divide-by-Zero Interrupt Status
    using FDZC = ftl::mmio::Field<1, 9, eFDZC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU Overflow interrupt status
    using FOFC = ftl::mmio::Field<1, 10, eFOFC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU Underflow Interrupt Status
    using FUFC = ftl::mmio::Field<1, 11, eFUFC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU Inexact Interrupt Status
    using FIXC = ftl::mmio::Field<1, 12, eFIXC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU Input Denormal Interrupt Status
    using FIDC = ftl::mmio::Field<1, 15, eFIDC, ftl::mmio::RO, ftl::mmio::Normal>;
    // TCM Write Abort Interrupt enable
    using WABE = ftl::mmio::Field<1, 21, eWABE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU Invalid Operation Interrupt Enable
    using FIOCE = ftl::mmio::Field<1, 24, eFIOCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU Divide-by-Zero Interrupt Enable
    using FDZCE = ftl::mmio::Field<1, 25, eFDZCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU Overflow Interrupt Enable
    using FOFCE = ftl::mmio::Field<1, 26, eFOFCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU Underflow Interrupt Enable
    using FUFCE = ftl::mmio::Field<1, 27, eFUFCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU Inexact Interrupt Enable
    using FIXCE = ftl::mmio::Field<1, 28, eFIXCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU Input Denormal Interrupt Enable
    using FIDCE = ftl::mmio::Field<1, 31, eFIDCE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IscrFields

  struct ISCR : ftl::mmio::Register<
      0xE0080010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<5, 0>,
      IscrFields::WABS,
      IscrFields::WABSO,
      ftl::mmio::Reserved<1, 7>,
      IscrFields::FIOC,
      IscrFields::FDZC,
      IscrFields::FOFC,
      IscrFields::FUFC,
      IscrFields::FIXC,
      ftl::mmio::Reserved<2, 13>,
      IscrFields::FIDC,
      ftl::mmio::Reserved<5, 16>,
      IscrFields::WABE,
      ftl::mmio::Reserved<2, 22>,
      IscrFields::FIOCE,
      IscrFields::FDZCE,
      IscrFields::FOFCE,
      IscrFields::FUFCE,
      IscrFields::FIXCE,
      ftl::mmio::Reserved<2, 29>,
      IscrFields::FIDCE> {
    using eWABS = IscrFields::eWABS;
    using eWABSO = IscrFields::eWABSO;
    using eFIOC = IscrFields::eFIOC;
    using eFDZC = IscrFields::eFDZC;
    using eFOFC = IscrFields::eFOFC;
    using eFUFC = IscrFields::eFUFC;
    using eFIXC = IscrFields::eFIXC;
    using eFIDC = IscrFields::eFIDC;
    using eWABE = IscrFields::eWABE;
    using eFIOCE = IscrFields::eFIOCE;
    using eFDZCE = IscrFields::eFDZCE;
    using eFOFCE = IscrFields::eFOFCE;
    using eFUFCE = IscrFields::eFUFCE;
    using eFIXCE = IscrFields::eFIXCE;
    using eFIDCE = IscrFields::eFIDCE;
    using WABS = IscrFields::WABS;
    using WABSO = IscrFields::WABSO;
    using FIOC = IscrFields::FIOC;
    using FDZC = IscrFields::FDZC;
    using FOFC = IscrFields::FOFC;
    using FUFC = IscrFields::FUFC;
    using FIXC = IscrFields::FIXC;
    using FIDC = IscrFields::FIDC;
    using WABE = IscrFields::WABE;
    using FIOCE = IscrFields::FIOCE;
    using FDZCE = IscrFields::FDZCE;
    using FOFCE = IscrFields::FOFCE;
    using FUFCE = IscrFields::FUFCE;
    using FIXCE = IscrFields::FIXCE;
    using FIDCE = IscrFields::FIDCE;
  };

};

}  // namespace regs