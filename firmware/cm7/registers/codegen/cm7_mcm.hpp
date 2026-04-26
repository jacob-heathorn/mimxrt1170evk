#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CM7_MCM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cm7Mcm {
  // Interrupt Status and Control Register
  struct ISCR_fields_ {
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
  };  // struct ISCR_fields_

  struct ISCR : ftl::mmio::Register<
      0xE0080010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<5, 0>,
      ISCR_fields_::WABS,
      ISCR_fields_::WABSO,
      ftl::mmio::Reserved<1, 7>,
      ISCR_fields_::FIOC,
      ISCR_fields_::FDZC,
      ISCR_fields_::FOFC,
      ISCR_fields_::FUFC,
      ISCR_fields_::FIXC,
      ftl::mmio::Reserved<2, 13>,
      ISCR_fields_::FIDC,
      ftl::mmio::Reserved<5, 16>,
      ISCR_fields_::WABE,
      ftl::mmio::Reserved<2, 22>,
      ISCR_fields_::FIOCE,
      ISCR_fields_::FDZCE,
      ISCR_fields_::FOFCE,
      ISCR_fields_::FUFCE,
      ISCR_fields_::FIXCE,
      ftl::mmio::Reserved<2, 29>,
      ISCR_fields_::FIDCE> {
    using eWABS = ISCR_fields_::eWABS;
    using eWABSO = ISCR_fields_::eWABSO;
    using eFIOC = ISCR_fields_::eFIOC;
    using eFDZC = ISCR_fields_::eFDZC;
    using eFOFC = ISCR_fields_::eFOFC;
    using eFUFC = ISCR_fields_::eFUFC;
    using eFIXC = ISCR_fields_::eFIXC;
    using eFIDC = ISCR_fields_::eFIDC;
    using eWABE = ISCR_fields_::eWABE;
    using eFIOCE = ISCR_fields_::eFIOCE;
    using eFDZCE = ISCR_fields_::eFDZCE;
    using eFOFCE = ISCR_fields_::eFOFCE;
    using eFUFCE = ISCR_fields_::eFUFCE;
    using eFIXCE = ISCR_fields_::eFIXCE;
    using eFIDCE = ISCR_fields_::eFIDCE;
    using WABS = ISCR_fields_::WABS;
    using WABSO = ISCR_fields_::WABSO;
    using FIOC = ISCR_fields_::FIOC;
    using FDZC = ISCR_fields_::FDZC;
    using FOFC = ISCR_fields_::FOFC;
    using FUFC = ISCR_fields_::FUFC;
    using FIXC = ISCR_fields_::FIXC;
    using FIDC = ISCR_fields_::FIDC;
    using WABE = ISCR_fields_::WABE;
    using FIOCE = ISCR_fields_::FIOCE;
    using FDZCE = ISCR_fields_::FDZCE;
    using FOFCE = ISCR_fields_::FOFCE;
    using FUFCE = ISCR_fields_::FUFCE;
    using FIXCE = ISCR_fields_::FIXCE;
    using FIDCE = ISCR_fields_::FIDCE;
  };

};

}  // namespace regs