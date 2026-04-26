#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DMA
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Dma0 {
  // Control
  struct CrFields {
    enum class eEDBG : std::uint32_t {
      // When the chip is in Debug mode, the eDMA continues to operate.
      eDISABLED = 0,
      // When the chip is in debug mode, the DMA stalls the start of a new channel. Executing channels are allowed to complete.
      eENABLED = 1,
    };

    enum class eERCA : std::uint32_t {
      // Fixed priority arbitration within each group
      eDISABLED = 0,
      // Round robin arbitration within each group
      eENABLED = 1,
    };

    enum class eERGA : std::uint32_t {
      // Fixed priority arbitration
      eDISABLED = 0,
      // Round robin arbitration
      eENABLED = 1,
    };

    enum class eHOE : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // Error causes HALT field to be automatically set to 1
      eHALT_ON_ERROR = 1,
    };

    enum class eHALT : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // eDMA operations halted
      eHALT_DMA = 1,
    };

    enum class eCLM : std::uint32_t {
      // Continuous link mode is off
      eCLM_OFF = 0,
      // Continuous link mode is on
      eCLM_ON = 1,
    };

    enum class eEMLM : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    enum class eECX : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // Cancel the remaining data transfer
      eCANCEL = 1,
    };

    enum class eCX : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // Cancel the remaining data transfer
      eCANCEL = 1,
    };

    enum class eACTIVE : std::uint32_t {
      // eDMA is idle
      eIDLE = 0,
      // eDMA is executing a channel
      eACTIVE = 1,
    };

    // Enable Debug
    using EDBG = ftl::mmio::Field<1, 1, eEDBG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Round Robin Channel Arbitration
    using ERCA = ftl::mmio::Field<1, 2, eERCA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Round Robin Group Arbitration
    using ERGA = ftl::mmio::Field<1, 3, eERGA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Halt On Error
    using HOE = ftl::mmio::Field<1, 4, eHOE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Halt eDMA Operations
    using HALT = ftl::mmio::Field<1, 5, eHALT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Continuous Link Mode
    using CLM = ftl::mmio::Field<1, 6, eCLM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Minor Loop Mapping
    using EMLM = ftl::mmio::Field<1, 7, eEMLM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Group 0 Priority
    using GRP0PRI = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Group 1 Priority
    using GRP1PRI = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Error Cancel Transfer
    using ECX = ftl::mmio::Field<1, 16, eECX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Cancel Transfer
    using CX = ftl::mmio::Field<1, 17, eCX, ftl::mmio::RW, ftl::mmio::Normal>;
    // eDMA version number
    using VERSION = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // eDMA Active Status
    using ACTIVE = ftl::mmio::Field<1, 31, eACTIVE, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CrFields

  struct CR : ftl::mmio::Register<
      0x40070000u,
      std::uint32_t,
      0x00000400u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      CrFields::EDBG,
      CrFields::ERCA,
      CrFields::ERGA,
      CrFields::HOE,
      CrFields::HALT,
      CrFields::CLM,
      CrFields::EMLM,
      CrFields::GRP0PRI,
      ftl::mmio::Reserved<1, 9>,
      CrFields::GRP1PRI,
      ftl::mmio::Reserved<5, 11>,
      CrFields::ECX,
      CrFields::CX,
      ftl::mmio::Reserved<6, 18>,
      CrFields::VERSION,
      CrFields::ACTIVE> {
    using eEDBG = CrFields::eEDBG;
    using eERCA = CrFields::eERCA;
    using eERGA = CrFields::eERGA;
    using eHOE = CrFields::eHOE;
    using eHALT = CrFields::eHALT;
    using eCLM = CrFields::eCLM;
    using eEMLM = CrFields::eEMLM;
    using eECX = CrFields::eECX;
    using eCX = CrFields::eCX;
    using eACTIVE = CrFields::eACTIVE;
    using EDBG = CrFields::EDBG;
    using ERCA = CrFields::ERCA;
    using ERGA = CrFields::ERGA;
    using HOE = CrFields::HOE;
    using HALT = CrFields::HALT;
    using CLM = CrFields::CLM;
    using EMLM = CrFields::EMLM;
    using GRP0PRI = CrFields::GRP0PRI;
    using GRP1PRI = CrFields::GRP1PRI;
    using ECX = CrFields::ECX;
    using CX = CrFields::CX;
    using VERSION = CrFields::VERSION;
    using ACTIVE = CrFields::ACTIVE;
  };

  // Error Status
  struct EsFields {
    enum class eDBE : std::uint32_t {
      // No destination bus error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a bus error on a destination write.
      eERROR = 1,
    };

    enum class eSBE : std::uint32_t {
      // No source bus error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a bus error on a source read.
      eERROR = 1,
    };

    enum class eSGE : std::uint32_t {
      // No scatter/gather configuration error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error detected in the TCDn_DLASTSGA field.
      eERROR = 1,
    };

    enum class eNCE : std::uint32_t {
      // No NBYTES/CITER configuration error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error detected in the TCDn_NBYTES or TCDn_CITER fields. TCDn_NBYTES is not a multiple of TCDn_ATTR[SSIZE] and TCDn_ATTR[DSIZE], or TCDn_CITER[CITER] = 0, or TCDn_CITER[ELINK] is not equal to TCDn_BITER[ELINK].
      eERROR = 1,
    };

    enum class eDOE : std::uint32_t {
      // No destination offset configuration error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error detected in the TCDn_DOFF field. TCDn_DOFF is inconsistent with TCDn_ATTR[DSIZE].
      eERROR = 1,
    };

    enum class eDAE : std::uint32_t {
      // No destination address configuration error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error detected in the TCDn_DADDR field. TCDn_DADDR is inconsistent with TCDn_ATTR[DSIZE].
      eERROR = 1,
    };

    enum class eSOE : std::uint32_t {
      // No source offset configuration error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error detected in the TCDn_SOFF field. TCDn_SOFF is inconsistent with TCDn_ATTR[SSIZE].
      eERROR = 1,
    };

    enum class eSAE : std::uint32_t {
      // No source address configuration error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error detected in the TCDn_SADDR field. TCDn_SADDR is inconsistent with TCDn_ATTR[SSIZE].
      eERROR = 1,
    };

    enum class eCPE : std::uint32_t {
      // No channel priority error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error in the channel priorities within a group. Channel priorities within a group are not unique.
      eERROR = 1,
    };

    enum class eGPE : std::uint32_t {
      // No group priority error.
      eNO_ERROR = 0,
      // The most-recently recorded error was a configuration error among the group priorities. All group priorities are not unique.
      eERROR = 1,
    };

    enum class eECX : std::uint32_t {
      // No canceled transfers
      eNO_CANCELS = 0,
      // The most-recently recorded entry was a canceled transfer initiated by the error cancel transfer field
      eCANCELED = 1,
    };

    enum class eVLD : std::uint32_t {
      // No ERR fields are 1
      eNO_ERROR = 0,
      // At least one ERR field has a value of 1, indicating a valid error exists that has not been cleared
      eERROR = 1,
    };

    // Destination Bus Error
    using DBE = ftl::mmio::Field<1, 0, eDBE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Source Bus Error
    using SBE = ftl::mmio::Field<1, 1, eSBE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Scatter/Gather Configuration Error
    using SGE = ftl::mmio::Field<1, 2, eSGE, ftl::mmio::RO, ftl::mmio::Normal>;
    // NBYTES/CITER Configuration Error
    using NCE = ftl::mmio::Field<1, 3, eNCE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Destination Offset Error
    using DOE = ftl::mmio::Field<1, 4, eDOE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Destination Address Error
    using DAE = ftl::mmio::Field<1, 5, eDAE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Source Offset Error
    using SOE = ftl::mmio::Field<1, 6, eSOE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Source Address Error
    using SAE = ftl::mmio::Field<1, 7, eSAE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Error Channel Number or Canceled Channel Number
    using ERRCHN = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Channel Priority Error
    using CPE = ftl::mmio::Field<1, 14, eCPE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Group Priority Error
    using GPE = ftl::mmio::Field<1, 15, eGPE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Transfer Canceled
    using ECX = ftl::mmio::Field<1, 16, eECX, ftl::mmio::RO, ftl::mmio::Normal>;
    // Logical OR of all ERR status fields
    using VLD = ftl::mmio::Field<1, 31, eVLD, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct EsFields

  struct ES : ftl::mmio::Register<
      0x40070004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      EsFields::DBE,
      EsFields::SBE,
      EsFields::SGE,
      EsFields::NCE,
      EsFields::DOE,
      EsFields::DAE,
      EsFields::SOE,
      EsFields::SAE,
      EsFields::ERRCHN,
      ftl::mmio::Reserved<1, 13>,
      EsFields::CPE,
      EsFields::GPE,
      EsFields::ECX,
      ftl::mmio::Reserved<14, 17>,
      EsFields::VLD> {
    using eDBE = EsFields::eDBE;
    using eSBE = EsFields::eSBE;
    using eSGE = EsFields::eSGE;
    using eNCE = EsFields::eNCE;
    using eDOE = EsFields::eDOE;
    using eDAE = EsFields::eDAE;
    using eSOE = EsFields::eSOE;
    using eSAE = EsFields::eSAE;
    using eCPE = EsFields::eCPE;
    using eGPE = EsFields::eGPE;
    using eECX = EsFields::eECX;
    using eVLD = EsFields::eVLD;
    using DBE = EsFields::DBE;
    using SBE = EsFields::SBE;
    using SGE = EsFields::SGE;
    using NCE = EsFields::NCE;
    using DOE = EsFields::DOE;
    using DAE = EsFields::DAE;
    using SOE = EsFields::SOE;
    using SAE = EsFields::SAE;
    using ERRCHN = EsFields::ERRCHN;
    using CPE = EsFields::CPE;
    using GPE = EsFields::GPE;
    using ECX = EsFields::ECX;
    using VLD = EsFields::VLD;
  };

  // Enable Request
  struct ErqFields {
    enum class eERQ0 : std::uint32_t {
      // The DMA request signal for channel 0 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 0 is enabled
      eENABLE = 1,
    };

    enum class eERQ1 : std::uint32_t {
      // The DMA request signal for channel 1 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 1 is enabled
      eENABLE = 1,
    };

    enum class eERQ2 : std::uint32_t {
      // The DMA request signal for channel 2 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 2 is enabled
      eENABLE = 1,
    };

    enum class eERQ3 : std::uint32_t {
      // The DMA request signal for channel 3 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 3 is enabled
      eENABLE = 1,
    };

    enum class eERQ4 : std::uint32_t {
      // The DMA request signal for channel 4 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 4 is enabled
      eENABLE = 1,
    };

    enum class eERQ5 : std::uint32_t {
      // The DMA request signal for channel 5 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 5 is enabled
      eENABLE = 1,
    };

    enum class eERQ6 : std::uint32_t {
      // The DMA request signal for channel 6 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 6 is enabled
      eENABLE = 1,
    };

    enum class eERQ7 : std::uint32_t {
      // The DMA request signal for channel 7 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 7 is enabled
      eENABLE = 1,
    };

    enum class eERQ8 : std::uint32_t {
      // The DMA request signal for channel 8 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 8 is enabled
      eENABLE = 1,
    };

    enum class eERQ9 : std::uint32_t {
      // The DMA request signal for channel 9 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 9 is enabled
      eENABLE = 1,
    };

    enum class eERQ10 : std::uint32_t {
      // The DMA request signal for channel 10 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 10 is enabled
      eENABLE = 1,
    };

    enum class eERQ11 : std::uint32_t {
      // The DMA request signal for channel 11 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 11 is enabled
      eENABLE = 1,
    };

    enum class eERQ12 : std::uint32_t {
      // The DMA request signal for channel 12 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 12 is enabled
      eENABLE = 1,
    };

    enum class eERQ13 : std::uint32_t {
      // The DMA request signal for channel 13 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 13 is enabled
      eENABLE = 1,
    };

    enum class eERQ14 : std::uint32_t {
      // The DMA request signal for channel 14 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 14 is enabled
      eENABLE = 1,
    };

    enum class eERQ15 : std::uint32_t {
      // The DMA request signal for channel 15 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 15 is enabled
      eENABLE = 1,
    };

    enum class eERQ16 : std::uint32_t {
      // The DMA request signal for channel 16 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 16 is enabled
      eENABLE = 1,
    };

    enum class eERQ17 : std::uint32_t {
      // The DMA request signal for channel 17 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 17 is enabled
      eENABLE = 1,
    };

    enum class eERQ18 : std::uint32_t {
      // The DMA request signal for channel 18 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 18 is enabled
      eENABLE = 1,
    };

    enum class eERQ19 : std::uint32_t {
      // The DMA request signal for channel 19 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 19 is enabled
      eENABLE = 1,
    };

    enum class eERQ20 : std::uint32_t {
      // The DMA request signal for channel 20 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 20 is enabled
      eENABLE = 1,
    };

    enum class eERQ21 : std::uint32_t {
      // The DMA request signal for channel 21 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 21 is enabled
      eENABLE = 1,
    };

    enum class eERQ22 : std::uint32_t {
      // The DMA request signal for channel 22 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 22 is enabled
      eENABLE = 1,
    };

    enum class eERQ23 : std::uint32_t {
      // The DMA request signal for channel 23 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 23 is enabled
      eENABLE = 1,
    };

    enum class eERQ24 : std::uint32_t {
      // The DMA request signal for channel 24 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 24 is enabled
      eENABLE = 1,
    };

    enum class eERQ25 : std::uint32_t {
      // The DMA request signal for channel 25 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 25 is enabled
      eENABLE = 1,
    };

    enum class eERQ26 : std::uint32_t {
      // The DMA request signal for channel 26 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 26 is enabled
      eENABLE = 1,
    };

    enum class eERQ27 : std::uint32_t {
      // The DMA request signal for channel 27 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 27 is enabled
      eENABLE = 1,
    };

    enum class eERQ28 : std::uint32_t {
      // The DMA request signal for channel 28 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 28 is enabled
      eENABLE = 1,
    };

    enum class eERQ29 : std::uint32_t {
      // The DMA request signal for channel 29 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 29 is enabled
      eENABLE = 1,
    };

    enum class eERQ30 : std::uint32_t {
      // The DMA request signal for channel 30 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 30 is enabled
      eENABLE = 1,
    };

    enum class eERQ31 : std::uint32_t {
      // The DMA request signal for channel 31 is disabled
      eDISABLE = 0,
      // The DMA request signal for channel 31 is enabled
      eENABLE = 1,
    };

    // Enable DMA Request 0
    using ERQ0 = ftl::mmio::Field<1, 0, eERQ0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 1
    using ERQ1 = ftl::mmio::Field<1, 1, eERQ1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 2
    using ERQ2 = ftl::mmio::Field<1, 2, eERQ2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 3
    using ERQ3 = ftl::mmio::Field<1, 3, eERQ3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 4
    using ERQ4 = ftl::mmio::Field<1, 4, eERQ4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 5
    using ERQ5 = ftl::mmio::Field<1, 5, eERQ5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 6
    using ERQ6 = ftl::mmio::Field<1, 6, eERQ6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 7
    using ERQ7 = ftl::mmio::Field<1, 7, eERQ7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 8
    using ERQ8 = ftl::mmio::Field<1, 8, eERQ8, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 9
    using ERQ9 = ftl::mmio::Field<1, 9, eERQ9, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 10
    using ERQ10 = ftl::mmio::Field<1, 10, eERQ10, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 11
    using ERQ11 = ftl::mmio::Field<1, 11, eERQ11, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 12
    using ERQ12 = ftl::mmio::Field<1, 12, eERQ12, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 13
    using ERQ13 = ftl::mmio::Field<1, 13, eERQ13, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 14
    using ERQ14 = ftl::mmio::Field<1, 14, eERQ14, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 15
    using ERQ15 = ftl::mmio::Field<1, 15, eERQ15, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 16
    using ERQ16 = ftl::mmio::Field<1, 16, eERQ16, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 17
    using ERQ17 = ftl::mmio::Field<1, 17, eERQ17, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 18
    using ERQ18 = ftl::mmio::Field<1, 18, eERQ18, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 19
    using ERQ19 = ftl::mmio::Field<1, 19, eERQ19, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 20
    using ERQ20 = ftl::mmio::Field<1, 20, eERQ20, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 21
    using ERQ21 = ftl::mmio::Field<1, 21, eERQ21, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 22
    using ERQ22 = ftl::mmio::Field<1, 22, eERQ22, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 23
    using ERQ23 = ftl::mmio::Field<1, 23, eERQ23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 24
    using ERQ24 = ftl::mmio::Field<1, 24, eERQ24, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 25
    using ERQ25 = ftl::mmio::Field<1, 25, eERQ25, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 26
    using ERQ26 = ftl::mmio::Field<1, 26, eERQ26, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 27
    using ERQ27 = ftl::mmio::Field<1, 27, eERQ27, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 28
    using ERQ28 = ftl::mmio::Field<1, 28, eERQ28, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 29
    using ERQ29 = ftl::mmio::Field<1, 29, eERQ29, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 30
    using ERQ30 = ftl::mmio::Field<1, 30, eERQ30, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA Request 31
    using ERQ31 = ftl::mmio::Field<1, 31, eERQ31, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErqFields

  struct ERQ : ftl::mmio::Register<
      0x4007000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ErqFields::ERQ0,
      ErqFields::ERQ1,
      ErqFields::ERQ2,
      ErqFields::ERQ3,
      ErqFields::ERQ4,
      ErqFields::ERQ5,
      ErqFields::ERQ6,
      ErqFields::ERQ7,
      ErqFields::ERQ8,
      ErqFields::ERQ9,
      ErqFields::ERQ10,
      ErqFields::ERQ11,
      ErqFields::ERQ12,
      ErqFields::ERQ13,
      ErqFields::ERQ14,
      ErqFields::ERQ15,
      ErqFields::ERQ16,
      ErqFields::ERQ17,
      ErqFields::ERQ18,
      ErqFields::ERQ19,
      ErqFields::ERQ20,
      ErqFields::ERQ21,
      ErqFields::ERQ22,
      ErqFields::ERQ23,
      ErqFields::ERQ24,
      ErqFields::ERQ25,
      ErqFields::ERQ26,
      ErqFields::ERQ27,
      ErqFields::ERQ28,
      ErqFields::ERQ29,
      ErqFields::ERQ30,
      ErqFields::ERQ31> {
    using eERQ0 = ErqFields::eERQ0;
    using eERQ1 = ErqFields::eERQ1;
    using eERQ2 = ErqFields::eERQ2;
    using eERQ3 = ErqFields::eERQ3;
    using eERQ4 = ErqFields::eERQ4;
    using eERQ5 = ErqFields::eERQ5;
    using eERQ6 = ErqFields::eERQ6;
    using eERQ7 = ErqFields::eERQ7;
    using eERQ8 = ErqFields::eERQ8;
    using eERQ9 = ErqFields::eERQ9;
    using eERQ10 = ErqFields::eERQ10;
    using eERQ11 = ErqFields::eERQ11;
    using eERQ12 = ErqFields::eERQ12;
    using eERQ13 = ErqFields::eERQ13;
    using eERQ14 = ErqFields::eERQ14;
    using eERQ15 = ErqFields::eERQ15;
    using eERQ16 = ErqFields::eERQ16;
    using eERQ17 = ErqFields::eERQ17;
    using eERQ18 = ErqFields::eERQ18;
    using eERQ19 = ErqFields::eERQ19;
    using eERQ20 = ErqFields::eERQ20;
    using eERQ21 = ErqFields::eERQ21;
    using eERQ22 = ErqFields::eERQ22;
    using eERQ23 = ErqFields::eERQ23;
    using eERQ24 = ErqFields::eERQ24;
    using eERQ25 = ErqFields::eERQ25;
    using eERQ26 = ErqFields::eERQ26;
    using eERQ27 = ErqFields::eERQ27;
    using eERQ28 = ErqFields::eERQ28;
    using eERQ29 = ErqFields::eERQ29;
    using eERQ30 = ErqFields::eERQ30;
    using eERQ31 = ErqFields::eERQ31;
    using ERQ0 = ErqFields::ERQ0;
    using ERQ1 = ErqFields::ERQ1;
    using ERQ2 = ErqFields::ERQ2;
    using ERQ3 = ErqFields::ERQ3;
    using ERQ4 = ErqFields::ERQ4;
    using ERQ5 = ErqFields::ERQ5;
    using ERQ6 = ErqFields::ERQ6;
    using ERQ7 = ErqFields::ERQ7;
    using ERQ8 = ErqFields::ERQ8;
    using ERQ9 = ErqFields::ERQ9;
    using ERQ10 = ErqFields::ERQ10;
    using ERQ11 = ErqFields::ERQ11;
    using ERQ12 = ErqFields::ERQ12;
    using ERQ13 = ErqFields::ERQ13;
    using ERQ14 = ErqFields::ERQ14;
    using ERQ15 = ErqFields::ERQ15;
    using ERQ16 = ErqFields::ERQ16;
    using ERQ17 = ErqFields::ERQ17;
    using ERQ18 = ErqFields::ERQ18;
    using ERQ19 = ErqFields::ERQ19;
    using ERQ20 = ErqFields::ERQ20;
    using ERQ21 = ErqFields::ERQ21;
    using ERQ22 = ErqFields::ERQ22;
    using ERQ23 = ErqFields::ERQ23;
    using ERQ24 = ErqFields::ERQ24;
    using ERQ25 = ErqFields::ERQ25;
    using ERQ26 = ErqFields::ERQ26;
    using ERQ27 = ErqFields::ERQ27;
    using ERQ28 = ErqFields::ERQ28;
    using ERQ29 = ErqFields::ERQ29;
    using ERQ30 = ErqFields::ERQ30;
    using ERQ31 = ErqFields::ERQ31;
  };

  // Enable Error Interrupt
  struct EeiFields {
    enum class eEEI0 : std::uint32_t {
      // An error on channel 0 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 0 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI1 : std::uint32_t {
      // An error on channel 1 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 1 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI2 : std::uint32_t {
      // An error on channel 2 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 2 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI3 : std::uint32_t {
      // An error on channel 3 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 3 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI4 : std::uint32_t {
      // An error on channel 4 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 4 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI5 : std::uint32_t {
      // An error on channel 5 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 5 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI6 : std::uint32_t {
      // An error on channel 6 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 6 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI7 : std::uint32_t {
      // An error on channel 7 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 7 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI8 : std::uint32_t {
      // An error on channel 8 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 8 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI9 : std::uint32_t {
      // An error on channel 9 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 9 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI10 : std::uint32_t {
      // An error on channel 10 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 10 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI11 : std::uint32_t {
      // An error on channel 11 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 11 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI12 : std::uint32_t {
      // An error on channel 12 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 12 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI13 : std::uint32_t {
      // An error on channel 13 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 13 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI14 : std::uint32_t {
      // An error on channel 14 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 14 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI15 : std::uint32_t {
      // An error on channel 15 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 15 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI16 : std::uint32_t {
      // An error on channel 16 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 16 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI17 : std::uint32_t {
      // An error on channel 17 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 17 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI18 : std::uint32_t {
      // An error on channel 18 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 18 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI19 : std::uint32_t {
      // An error on channel 19 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 19 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI20 : std::uint32_t {
      // An error on channel 20 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 20 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI21 : std::uint32_t {
      // An error on channel 21 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 21 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI22 : std::uint32_t {
      // An error on channel 22 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 22 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI23 : std::uint32_t {
      // An error on channel 23 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 23 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI24 : std::uint32_t {
      // An error on channel 24 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 24 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI25 : std::uint32_t {
      // An error on channel 25 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 25 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI26 : std::uint32_t {
      // An error on channel 26 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 26 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI27 : std::uint32_t {
      // An error on channel 27 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 27 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI28 : std::uint32_t {
      // An error on channel 28 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 28 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI29 : std::uint32_t {
      // An error on channel 29 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 29 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI30 : std::uint32_t {
      // An error on channel 30 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 30 generates an error interrupt request
      eINTERRUPT = 1,
    };

    enum class eEEI31 : std::uint32_t {
      // An error on channel 31 does not generate an error interrupt
      eNO_INTERRUPT = 0,
      // An error on channel 31 generates an error interrupt request
      eINTERRUPT = 1,
    };

    // Enable Error Interrupt 0
    using EEI0 = ftl::mmio::Field<1, 0, eEEI0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 1
    using EEI1 = ftl::mmio::Field<1, 1, eEEI1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 2
    using EEI2 = ftl::mmio::Field<1, 2, eEEI2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 3
    using EEI3 = ftl::mmio::Field<1, 3, eEEI3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 4
    using EEI4 = ftl::mmio::Field<1, 4, eEEI4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 5
    using EEI5 = ftl::mmio::Field<1, 5, eEEI5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 6
    using EEI6 = ftl::mmio::Field<1, 6, eEEI6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 7
    using EEI7 = ftl::mmio::Field<1, 7, eEEI7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 8
    using EEI8 = ftl::mmio::Field<1, 8, eEEI8, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 9
    using EEI9 = ftl::mmio::Field<1, 9, eEEI9, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 10
    using EEI10 = ftl::mmio::Field<1, 10, eEEI10, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 11
    using EEI11 = ftl::mmio::Field<1, 11, eEEI11, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 12
    using EEI12 = ftl::mmio::Field<1, 12, eEEI12, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 13
    using EEI13 = ftl::mmio::Field<1, 13, eEEI13, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 14
    using EEI14 = ftl::mmio::Field<1, 14, eEEI14, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 15
    using EEI15 = ftl::mmio::Field<1, 15, eEEI15, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 16
    using EEI16 = ftl::mmio::Field<1, 16, eEEI16, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 17
    using EEI17 = ftl::mmio::Field<1, 17, eEEI17, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 18
    using EEI18 = ftl::mmio::Field<1, 18, eEEI18, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 19
    using EEI19 = ftl::mmio::Field<1, 19, eEEI19, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 20
    using EEI20 = ftl::mmio::Field<1, 20, eEEI20, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 21
    using EEI21 = ftl::mmio::Field<1, 21, eEEI21, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 22
    using EEI22 = ftl::mmio::Field<1, 22, eEEI22, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 23
    using EEI23 = ftl::mmio::Field<1, 23, eEEI23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 24
    using EEI24 = ftl::mmio::Field<1, 24, eEEI24, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 25
    using EEI25 = ftl::mmio::Field<1, 25, eEEI25, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 26
    using EEI26 = ftl::mmio::Field<1, 26, eEEI26, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 27
    using EEI27 = ftl::mmio::Field<1, 27, eEEI27, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 28
    using EEI28 = ftl::mmio::Field<1, 28, eEEI28, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 29
    using EEI29 = ftl::mmio::Field<1, 29, eEEI29, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 30
    using EEI30 = ftl::mmio::Field<1, 30, eEEI30, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Error Interrupt 31
    using EEI31 = ftl::mmio::Field<1, 31, eEEI31, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EeiFields

  struct EEI : ftl::mmio::Register<
      0x40070014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EeiFields::EEI0,
      EeiFields::EEI1,
      EeiFields::EEI2,
      EeiFields::EEI3,
      EeiFields::EEI4,
      EeiFields::EEI5,
      EeiFields::EEI6,
      EeiFields::EEI7,
      EeiFields::EEI8,
      EeiFields::EEI9,
      EeiFields::EEI10,
      EeiFields::EEI11,
      EeiFields::EEI12,
      EeiFields::EEI13,
      EeiFields::EEI14,
      EeiFields::EEI15,
      EeiFields::EEI16,
      EeiFields::EEI17,
      EeiFields::EEI18,
      EeiFields::EEI19,
      EeiFields::EEI20,
      EeiFields::EEI21,
      EeiFields::EEI22,
      EeiFields::EEI23,
      EeiFields::EEI24,
      EeiFields::EEI25,
      EeiFields::EEI26,
      EeiFields::EEI27,
      EeiFields::EEI28,
      EeiFields::EEI29,
      EeiFields::EEI30,
      EeiFields::EEI31> {
    using eEEI0 = EeiFields::eEEI0;
    using eEEI1 = EeiFields::eEEI1;
    using eEEI2 = EeiFields::eEEI2;
    using eEEI3 = EeiFields::eEEI3;
    using eEEI4 = EeiFields::eEEI4;
    using eEEI5 = EeiFields::eEEI5;
    using eEEI6 = EeiFields::eEEI6;
    using eEEI7 = EeiFields::eEEI7;
    using eEEI8 = EeiFields::eEEI8;
    using eEEI9 = EeiFields::eEEI9;
    using eEEI10 = EeiFields::eEEI10;
    using eEEI11 = EeiFields::eEEI11;
    using eEEI12 = EeiFields::eEEI12;
    using eEEI13 = EeiFields::eEEI13;
    using eEEI14 = EeiFields::eEEI14;
    using eEEI15 = EeiFields::eEEI15;
    using eEEI16 = EeiFields::eEEI16;
    using eEEI17 = EeiFields::eEEI17;
    using eEEI18 = EeiFields::eEEI18;
    using eEEI19 = EeiFields::eEEI19;
    using eEEI20 = EeiFields::eEEI20;
    using eEEI21 = EeiFields::eEEI21;
    using eEEI22 = EeiFields::eEEI22;
    using eEEI23 = EeiFields::eEEI23;
    using eEEI24 = EeiFields::eEEI24;
    using eEEI25 = EeiFields::eEEI25;
    using eEEI26 = EeiFields::eEEI26;
    using eEEI27 = EeiFields::eEEI27;
    using eEEI28 = EeiFields::eEEI28;
    using eEEI29 = EeiFields::eEEI29;
    using eEEI30 = EeiFields::eEEI30;
    using eEEI31 = EeiFields::eEEI31;
    using EEI0 = EeiFields::EEI0;
    using EEI1 = EeiFields::EEI1;
    using EEI2 = EeiFields::EEI2;
    using EEI3 = EeiFields::EEI3;
    using EEI4 = EeiFields::EEI4;
    using EEI5 = EeiFields::EEI5;
    using EEI6 = EeiFields::EEI6;
    using EEI7 = EeiFields::EEI7;
    using EEI8 = EeiFields::EEI8;
    using EEI9 = EeiFields::EEI9;
    using EEI10 = EeiFields::EEI10;
    using EEI11 = EeiFields::EEI11;
    using EEI12 = EeiFields::EEI12;
    using EEI13 = EeiFields::EEI13;
    using EEI14 = EeiFields::EEI14;
    using EEI15 = EeiFields::EEI15;
    using EEI16 = EeiFields::EEI16;
    using EEI17 = EeiFields::EEI17;
    using EEI18 = EeiFields::EEI18;
    using EEI19 = EeiFields::EEI19;
    using EEI20 = EeiFields::EEI20;
    using EEI21 = EeiFields::EEI21;
    using EEI22 = EeiFields::EEI22;
    using EEI23 = EeiFields::EEI23;
    using EEI24 = EeiFields::EEI24;
    using EEI25 = EeiFields::EEI25;
    using EEI26 = EeiFields::EEI26;
    using EEI27 = EeiFields::EEI27;
    using EEI28 = EeiFields::EEI28;
    using EEI29 = EeiFields::EEI29;
    using EEI30 = EeiFields::EEI30;
    using EEI31 = EeiFields::EEI31;
  };

  // Clear Enable Error Interrupt
  struct CeeiFields {
    enum class eCAEE : std::uint32_t {
      // Write 0 only to the EEI field specified in the CEEI field
      eCLEAR_EEI = 0,
      // Write 0 to all fields in EEI
      eCLEAR_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation, ignore the other fields in this register
      eNO_OPS = 1,
    };

    // Clear Enable Error Interrupt
    using CEEI = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clear All Enable Error Interrupts
    using CAEE = ftl::mmio::Field<1, 6, eCAEE, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CeeiFields

  struct CEEI : ftl::mmio::Register<
      0x40070018u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      CeeiFields::CEEI,
      ftl::mmio::Reserved<1, 5>,
      CeeiFields::CAEE,
      CeeiFields::NOP> {
    using eCAEE = CeeiFields::eCAEE;
    using eNOP = CeeiFields::eNOP;
    using VALUE = CeeiFields::CEEI;
    using CAEE = CeeiFields::CAEE;
    using NOP = CeeiFields::NOP;
  };

  // Set Enable Error Interrupt
  struct SeeiFields {
    enum class eSAEE : std::uint32_t {
      // Write 1 only to the EEI field specified in the SEEI field
      eSET_EEI = 0,
      // Writes 1 to all fields in EEI
      eSET_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation, ignore the other fields in this register
      eNO_OPS = 1,
    };

    // Set Enable Error Interrupt
    using SEEI = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set All Enable Error Interrupts
    using SAEE = ftl::mmio::Field<1, 6, eSAEE, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SeeiFields

  struct SEEI : ftl::mmio::Register<
      0x40070019u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      SeeiFields::SEEI,
      ftl::mmio::Reserved<1, 5>,
      SeeiFields::SAEE,
      SeeiFields::NOP> {
    using eSAEE = SeeiFields::eSAEE;
    using eNOP = SeeiFields::eNOP;
    using VALUE = SeeiFields::SEEI;
    using SAEE = SeeiFields::SAEE;
    using NOP = SeeiFields::NOP;
  };

  // Clear Enable Request
  struct CerqFields {
    enum class eCAER : std::uint32_t {
      // Write 0 to only the ERQ field specified in the CERQ field
      eCLEAR_ERQ = 0,
      // Write 0 to all fields in ERQ
      eCLEAR_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation, ignore the other fields in this register
      eNO_OPS = 1,
    };

    // Clear Enable Request
    using CERQ = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clear All Enable Requests
    using CAER = ftl::mmio::Field<1, 6, eCAER, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CerqFields

  struct CERQ : ftl::mmio::Register<
      0x4007001Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      CerqFields::CERQ,
      ftl::mmio::Reserved<1, 5>,
      CerqFields::CAER,
      CerqFields::NOP> {
    using eCAER = CerqFields::eCAER;
    using eNOP = CerqFields::eNOP;
    using VALUE = CerqFields::CERQ;
    using CAER = CerqFields::CAER;
    using NOP = CerqFields::NOP;
  };

  // Set Enable Request
  struct SerqFields {
    enum class eSAER : std::uint32_t {
      // Write 1 to only the ERQ field specified in the SERQ field
      eSET_ERQ = 0,
      // Write 1 to all fields in ERQ
      eSET_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation, ignore the other fields in this register
      eNO_OPS = 1,
    };

    // Set Enable Request
    using SERQ = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set All Enable Requests
    using SAER = ftl::mmio::Field<1, 6, eSAER, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SerqFields

  struct SERQ : ftl::mmio::Register<
      0x4007001Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      SerqFields::SERQ,
      ftl::mmio::Reserved<1, 5>,
      SerqFields::SAER,
      SerqFields::NOP> {
    using eSAER = SerqFields::eSAER;
    using eNOP = SerqFields::eNOP;
    using VALUE = SerqFields::SERQ;
    using SAER = SerqFields::SAER;
    using NOP = SerqFields::NOP;
  };

  // Clear DONE Status Bit
  struct CdneFields {
    enum class eCADN : std::uint32_t {
      // Writes 0 to only the TCDn_CSR[DONE] field specified in the CDNE field
      eCLEAR_DONE = 0,
      // Writes 0 to all bits in TCDn_CSR[DONE]
      eCLEAR_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation; all other fields in this register are ignored.
      eNO_OPS = 1,
    };

    // Clear DONE field
    using CDNE = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clears All DONE fields
    using CADN = ftl::mmio::Field<1, 6, eCADN, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CdneFields

  struct CDNE : ftl::mmio::Register<
      0x4007001Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      CdneFields::CDNE,
      ftl::mmio::Reserved<1, 5>,
      CdneFields::CADN,
      CdneFields::NOP> {
    using eCADN = CdneFields::eCADN;
    using eNOP = CdneFields::eNOP;
    using VALUE = CdneFields::CDNE;
    using CADN = CdneFields::CADN;
    using NOP = CdneFields::NOP;
  };

  // Set START Bit
  struct SsrtFields {
    enum class eSAST : std::uint32_t {
      // Write 1 to only the TCDn_CSR[START] field specified in the SSRT field
      eSET_START = 0,
      // Write 1 to all bits in TCDn_CSR[START]
      eSET_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation; all other fields in this register are ignored.
      eNO_OPS = 1,
    };

    // Set START field
    using SSRT = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set All START fields (activates all channels)
    using SAST = ftl::mmio::Field<1, 6, eSAST, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SsrtFields

  struct SSRT : ftl::mmio::Register<
      0x4007001Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      SsrtFields::SSRT,
      ftl::mmio::Reserved<1, 5>,
      SsrtFields::SAST,
      SsrtFields::NOP> {
    using eSAST = SsrtFields::eSAST;
    using eNOP = SsrtFields::eNOP;
    using VALUE = SsrtFields::SSRT;
    using SAST = SsrtFields::SAST;
    using NOP = SsrtFields::NOP;
  };

  // Clear Error
  struct CerrFields {
    enum class eCAEI : std::uint32_t {
      // Write 0 to only the ERR field specified in the CERR field
      eCLEAR_ERR = 0,
      // Write 0 to all fields in ERR
      eCLEAR_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation; all other fields in this register are ignored.
      eNO_OPS = 1,
    };

    // Clear Error Indicator
    using CERR = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clear All Error Indicators
    using CAEI = ftl::mmio::Field<1, 6, eCAEI, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CerrFields

  struct CERR : ftl::mmio::Register<
      0x4007001Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      CerrFields::CERR,
      ftl::mmio::Reserved<1, 5>,
      CerrFields::CAEI,
      CerrFields::NOP> {
    using eCAEI = CerrFields::eCAEI;
    using eNOP = CerrFields::eNOP;
    using VALUE = CerrFields::CERR;
    using CAEI = CerrFields::CAEI;
    using NOP = CerrFields::NOP;
  };

  // Clear Interrupt Request
  struct CintFields {
    enum class eCAIR : std::uint32_t {
      // Clear only the INT field specified in the CINT field
      eCLEAR_INT = 0,
      // Clear all bits in INT
      eCLEAR_ALL = 1,
    };

    enum class eNOP : std::uint32_t {
      // Normal operation
      eNORMAL_OPS = 0,
      // No operation; all other fields in this register are ignored.
      eNO_OPS = 1,
    };

    // Clear Interrupt Request
    using CINT = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clear All Interrupt Requests
    using CAIR = ftl::mmio::Field<1, 6, eCAIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // No Op Enable
    using NOP = ftl::mmio::Field<1, 7, eNOP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CintFields

  struct CINT : ftl::mmio::Register<
      0x4007001Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      CintFields::CINT,
      ftl::mmio::Reserved<1, 5>,
      CintFields::CAIR,
      CintFields::NOP> {
    using eCAIR = CintFields::eCAIR;
    using eNOP = CintFields::eNOP;
    using VALUE = CintFields::CINT;
    using CAIR = CintFields::CAIR;
    using NOP = CintFields::NOP;
  };

  // Interrupt Request
  struct IntFields {
    enum class eINT0 : std::uint32_t {
      // The interrupt request for channel 0 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 0 is active
      eACTIVE = 1,
    };

    enum class eINT1 : std::uint32_t {
      // The interrupt request for channel 1 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 1 is active
      eACTIVE = 1,
    };

    enum class eINT2 : std::uint32_t {
      // The interrupt request for channel 2 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 2 is active
      eACTIVE = 1,
    };

    enum class eINT3 : std::uint32_t {
      // The interrupt request for channel 3 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 3 is active
      eACTIVE = 1,
    };

    enum class eINT4 : std::uint32_t {
      // The interrupt request for channel 4 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 4 is active
      eACTIVE = 1,
    };

    enum class eINT5 : std::uint32_t {
      // The interrupt request for channel 5 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 5 is active
      eACTIVE = 1,
    };

    enum class eINT6 : std::uint32_t {
      // The interrupt request for channel 6 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 6 is active
      eCTIVE = 1,
    };

    enum class eINT7 : std::uint32_t {
      // The interrupt request for channel 7 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 7 is active
      eACTIVE = 1,
    };

    enum class eINT8 : std::uint32_t {
      // The interrupt request for channel 8 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 8 is active
      eACTIVE = 1,
    };

    enum class eINT9 : std::uint32_t {
      // The interrupt request for channel 9 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 9 is active
      eACTIVE = 1,
    };

    enum class eINT10 : std::uint32_t {
      // The interrupt request for channel 10 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 10 is active
      eACTIVE = 1,
    };

    enum class eINT11 : std::uint32_t {
      // The interrupt request for channel 11 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 11 is active
      eACTIVE = 1,
    };

    enum class eINT12 : std::uint32_t {
      // The interrupt request for channel 12 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 12 is active
      eACTIVE = 1,
    };

    enum class eINT13 : std::uint32_t {
      // The interrupt request for channel 13 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 13 is active
      eACTIVE = 1,
    };

    enum class eINT14 : std::uint32_t {
      // The interrupt request for channel 14 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 14 is active
      eACTIVE = 1,
    };

    enum class eINT15 : std::uint32_t {
      // The interrupt request for channel 15 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 15 is active
      eACTIVE = 1,
    };

    enum class eINT16 : std::uint32_t {
      // The interrupt request for channel 16 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 16 is active
      eACTIVE = 1,
    };

    enum class eINT17 : std::uint32_t {
      // The interrupt request for channel 17 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 17 is active
      eACTIVE = 1,
    };

    enum class eINT18 : std::uint32_t {
      // The interrupt request for channel 18 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 18 is active
      eACTIVE = 1,
    };

    enum class eINT19 : std::uint32_t {
      // The interrupt request for channel 19 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 19 is active
      eACTIVE = 1,
    };

    enum class eINT20 : std::uint32_t {
      // The interrupt request for channel 20 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 20 is active
      eACTIVE = 1,
    };

    enum class eINT21 : std::uint32_t {
      // The interrupt request for channel 21 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 21 is active
      eACTIVE = 1,
    };

    enum class eINT22 : std::uint32_t {
      // The interrupt request for channel 22 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 22 is active
      eACTIVE = 1,
    };

    enum class eINT23 : std::uint32_t {
      // The interrupt request for channel 23 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 23 is active
      eACTIVE = 1,
    };

    enum class eINT24 : std::uint32_t {
      // The interrupt request for channel 24 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 24 is active
      eACTIVE = 1,
    };

    enum class eINT25 : std::uint32_t {
      // The interrupt request for channel 25 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 25 is active
      eACTIVE = 1,
    };

    enum class eINT26 : std::uint32_t {
      // The interrupt request for channel 26 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 26 is active
      eACTIVE = 1,
    };

    enum class eINT27 : std::uint32_t {
      // The interrupt request for channel 27 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 27 is active
      eACTIVE = 1,
    };

    enum class eINT28 : std::uint32_t {
      // The interrupt request for channel 28 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 28 is active
      eACTIVE = 1,
    };

    enum class eINT29 : std::uint32_t {
      // The interrupt request for channel 29 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 29 is active
      eACTIVE = 1,
    };

    enum class eINT30 : std::uint32_t {
      // The interrupt request for channel 30 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 30 is active
      eACTIVE = 1,
    };

    enum class eINT31 : std::uint32_t {
      // The interrupt request for channel 31 is cleared
      eNOT_ACTIVE = 0,
      // The interrupt request for channel 31 is active
      eACTIVE = 1,
    };

    // Interrupt Request 0
    using INT0 = ftl::mmio::Field<1, 0, eINT0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 1
    using INT1 = ftl::mmio::Field<1, 1, eINT1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 2
    using INT2 = ftl::mmio::Field<1, 2, eINT2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 3
    using INT3 = ftl::mmio::Field<1, 3, eINT3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 4
    using INT4 = ftl::mmio::Field<1, 4, eINT4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 5
    using INT5 = ftl::mmio::Field<1, 5, eINT5, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 6
    using INT6 = ftl::mmio::Field<1, 6, eINT6, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 7
    using INT7 = ftl::mmio::Field<1, 7, eINT7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 8
    using INT8 = ftl::mmio::Field<1, 8, eINT8, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 9
    using INT9 = ftl::mmio::Field<1, 9, eINT9, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 10
    using INT10 = ftl::mmio::Field<1, 10, eINT10, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 11
    using INT11 = ftl::mmio::Field<1, 11, eINT11, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 12
    using INT12 = ftl::mmio::Field<1, 12, eINT12, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 13
    using INT13 = ftl::mmio::Field<1, 13, eINT13, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 14
    using INT14 = ftl::mmio::Field<1, 14, eINT14, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 15
    using INT15 = ftl::mmio::Field<1, 15, eINT15, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 16
    using INT16 = ftl::mmio::Field<1, 16, eINT16, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 17
    using INT17 = ftl::mmio::Field<1, 17, eINT17, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 18
    using INT18 = ftl::mmio::Field<1, 18, eINT18, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 19
    using INT19 = ftl::mmio::Field<1, 19, eINT19, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 20
    using INT20 = ftl::mmio::Field<1, 20, eINT20, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 21
    using INT21 = ftl::mmio::Field<1, 21, eINT21, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 22
    using INT22 = ftl::mmio::Field<1, 22, eINT22, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 23
    using INT23 = ftl::mmio::Field<1, 23, eINT23, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 24
    using INT24 = ftl::mmio::Field<1, 24, eINT24, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 25
    using INT25 = ftl::mmio::Field<1, 25, eINT25, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 26
    using INT26 = ftl::mmio::Field<1, 26, eINT26, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 27
    using INT27 = ftl::mmio::Field<1, 27, eINT27, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 28
    using INT28 = ftl::mmio::Field<1, 28, eINT28, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 29
    using INT29 = ftl::mmio::Field<1, 29, eINT29, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 30
    using INT30 = ftl::mmio::Field<1, 30, eINT30, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Interrupt Request 31
    using INT31 = ftl::mmio::Field<1, 31, eINT31, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct IntFields

  struct INT : ftl::mmio::Register<
      0x40070024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntFields::INT0,
      IntFields::INT1,
      IntFields::INT2,
      IntFields::INT3,
      IntFields::INT4,
      IntFields::INT5,
      IntFields::INT6,
      IntFields::INT7,
      IntFields::INT8,
      IntFields::INT9,
      IntFields::INT10,
      IntFields::INT11,
      IntFields::INT12,
      IntFields::INT13,
      IntFields::INT14,
      IntFields::INT15,
      IntFields::INT16,
      IntFields::INT17,
      IntFields::INT18,
      IntFields::INT19,
      IntFields::INT20,
      IntFields::INT21,
      IntFields::INT22,
      IntFields::INT23,
      IntFields::INT24,
      IntFields::INT25,
      IntFields::INT26,
      IntFields::INT27,
      IntFields::INT28,
      IntFields::INT29,
      IntFields::INT30,
      IntFields::INT31> {
    using eINT0 = IntFields::eINT0;
    using eINT1 = IntFields::eINT1;
    using eINT2 = IntFields::eINT2;
    using eINT3 = IntFields::eINT3;
    using eINT4 = IntFields::eINT4;
    using eINT5 = IntFields::eINT5;
    using eINT6 = IntFields::eINT6;
    using eINT7 = IntFields::eINT7;
    using eINT8 = IntFields::eINT8;
    using eINT9 = IntFields::eINT9;
    using eINT10 = IntFields::eINT10;
    using eINT11 = IntFields::eINT11;
    using eINT12 = IntFields::eINT12;
    using eINT13 = IntFields::eINT13;
    using eINT14 = IntFields::eINT14;
    using eINT15 = IntFields::eINT15;
    using eINT16 = IntFields::eINT16;
    using eINT17 = IntFields::eINT17;
    using eINT18 = IntFields::eINT18;
    using eINT19 = IntFields::eINT19;
    using eINT20 = IntFields::eINT20;
    using eINT21 = IntFields::eINT21;
    using eINT22 = IntFields::eINT22;
    using eINT23 = IntFields::eINT23;
    using eINT24 = IntFields::eINT24;
    using eINT25 = IntFields::eINT25;
    using eINT26 = IntFields::eINT26;
    using eINT27 = IntFields::eINT27;
    using eINT28 = IntFields::eINT28;
    using eINT29 = IntFields::eINT29;
    using eINT30 = IntFields::eINT30;
    using eINT31 = IntFields::eINT31;
    using INT0 = IntFields::INT0;
    using INT1 = IntFields::INT1;
    using INT2 = IntFields::INT2;
    using INT3 = IntFields::INT3;
    using INT4 = IntFields::INT4;
    using INT5 = IntFields::INT5;
    using INT6 = IntFields::INT6;
    using INT7 = IntFields::INT7;
    using INT8 = IntFields::INT8;
    using INT9 = IntFields::INT9;
    using INT10 = IntFields::INT10;
    using INT11 = IntFields::INT11;
    using INT12 = IntFields::INT12;
    using INT13 = IntFields::INT13;
    using INT14 = IntFields::INT14;
    using INT15 = IntFields::INT15;
    using INT16 = IntFields::INT16;
    using INT17 = IntFields::INT17;
    using INT18 = IntFields::INT18;
    using INT19 = IntFields::INT19;
    using INT20 = IntFields::INT20;
    using INT21 = IntFields::INT21;
    using INT22 = IntFields::INT22;
    using INT23 = IntFields::INT23;
    using INT24 = IntFields::INT24;
    using INT25 = IntFields::INT25;
    using INT26 = IntFields::INT26;
    using INT27 = IntFields::INT27;
    using INT28 = IntFields::INT28;
    using INT29 = IntFields::INT29;
    using INT30 = IntFields::INT30;
    using INT31 = IntFields::INT31;
  };

  // Error
  struct ErrFields {
    enum class eERR0 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR1 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR2 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR3 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR4 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR5 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR6 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR7 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR8 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR9 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR10 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR11 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR12 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR13 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR14 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR15 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR16 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR17 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR18 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR19 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR20 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR21 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR22 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR23 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR24 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR25 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR26 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR27 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR28 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR29 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR30 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    enum class eERR31 : std::uint32_t {
      // No error in this channel has occurred
      eNO_ERR = 0,
      // An error in this channel has occurred
      eERR = 1,
    };

    // Error In Channel 0
    using ERR0 = ftl::mmio::Field<1, 0, eERR0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 1
    using ERR1 = ftl::mmio::Field<1, 1, eERR1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 2
    using ERR2 = ftl::mmio::Field<1, 2, eERR2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 3
    using ERR3 = ftl::mmio::Field<1, 3, eERR3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 4
    using ERR4 = ftl::mmio::Field<1, 4, eERR4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 5
    using ERR5 = ftl::mmio::Field<1, 5, eERR5, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 6
    using ERR6 = ftl::mmio::Field<1, 6, eERR6, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 7
    using ERR7 = ftl::mmio::Field<1, 7, eERR7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 8
    using ERR8 = ftl::mmio::Field<1, 8, eERR8, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 9
    using ERR9 = ftl::mmio::Field<1, 9, eERR9, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 10
    using ERR10 = ftl::mmio::Field<1, 10, eERR10, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 11
    using ERR11 = ftl::mmio::Field<1, 11, eERR11, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 12
    using ERR12 = ftl::mmio::Field<1, 12, eERR12, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 13
    using ERR13 = ftl::mmio::Field<1, 13, eERR13, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 14
    using ERR14 = ftl::mmio::Field<1, 14, eERR14, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 15
    using ERR15 = ftl::mmio::Field<1, 15, eERR15, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 16
    using ERR16 = ftl::mmio::Field<1, 16, eERR16, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 17
    using ERR17 = ftl::mmio::Field<1, 17, eERR17, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 18
    using ERR18 = ftl::mmio::Field<1, 18, eERR18, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 19
    using ERR19 = ftl::mmio::Field<1, 19, eERR19, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 20
    using ERR20 = ftl::mmio::Field<1, 20, eERR20, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 21
    using ERR21 = ftl::mmio::Field<1, 21, eERR21, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 22
    using ERR22 = ftl::mmio::Field<1, 22, eERR22, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 23
    using ERR23 = ftl::mmio::Field<1, 23, eERR23, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 24
    using ERR24 = ftl::mmio::Field<1, 24, eERR24, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 25
    using ERR25 = ftl::mmio::Field<1, 25, eERR25, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 26
    using ERR26 = ftl::mmio::Field<1, 26, eERR26, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 27
    using ERR27 = ftl::mmio::Field<1, 27, eERR27, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 28
    using ERR28 = ftl::mmio::Field<1, 28, eERR28, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 29
    using ERR29 = ftl::mmio::Field<1, 29, eERR29, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 30
    using ERR30 = ftl::mmio::Field<1, 30, eERR30, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error In Channel 31
    using ERR31 = ftl::mmio::Field<1, 31, eERR31, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct ErrFields

  struct ERR : ftl::mmio::Register<
      0x4007002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ErrFields::ERR0,
      ErrFields::ERR1,
      ErrFields::ERR2,
      ErrFields::ERR3,
      ErrFields::ERR4,
      ErrFields::ERR5,
      ErrFields::ERR6,
      ErrFields::ERR7,
      ErrFields::ERR8,
      ErrFields::ERR9,
      ErrFields::ERR10,
      ErrFields::ERR11,
      ErrFields::ERR12,
      ErrFields::ERR13,
      ErrFields::ERR14,
      ErrFields::ERR15,
      ErrFields::ERR16,
      ErrFields::ERR17,
      ErrFields::ERR18,
      ErrFields::ERR19,
      ErrFields::ERR20,
      ErrFields::ERR21,
      ErrFields::ERR22,
      ErrFields::ERR23,
      ErrFields::ERR24,
      ErrFields::ERR25,
      ErrFields::ERR26,
      ErrFields::ERR27,
      ErrFields::ERR28,
      ErrFields::ERR29,
      ErrFields::ERR30,
      ErrFields::ERR31> {
    using eERR0 = ErrFields::eERR0;
    using eERR1 = ErrFields::eERR1;
    using eERR2 = ErrFields::eERR2;
    using eERR3 = ErrFields::eERR3;
    using eERR4 = ErrFields::eERR4;
    using eERR5 = ErrFields::eERR5;
    using eERR6 = ErrFields::eERR6;
    using eERR7 = ErrFields::eERR7;
    using eERR8 = ErrFields::eERR8;
    using eERR9 = ErrFields::eERR9;
    using eERR10 = ErrFields::eERR10;
    using eERR11 = ErrFields::eERR11;
    using eERR12 = ErrFields::eERR12;
    using eERR13 = ErrFields::eERR13;
    using eERR14 = ErrFields::eERR14;
    using eERR15 = ErrFields::eERR15;
    using eERR16 = ErrFields::eERR16;
    using eERR17 = ErrFields::eERR17;
    using eERR18 = ErrFields::eERR18;
    using eERR19 = ErrFields::eERR19;
    using eERR20 = ErrFields::eERR20;
    using eERR21 = ErrFields::eERR21;
    using eERR22 = ErrFields::eERR22;
    using eERR23 = ErrFields::eERR23;
    using eERR24 = ErrFields::eERR24;
    using eERR25 = ErrFields::eERR25;
    using eERR26 = ErrFields::eERR26;
    using eERR27 = ErrFields::eERR27;
    using eERR28 = ErrFields::eERR28;
    using eERR29 = ErrFields::eERR29;
    using eERR30 = ErrFields::eERR30;
    using eERR31 = ErrFields::eERR31;
    using ERR0 = ErrFields::ERR0;
    using ERR1 = ErrFields::ERR1;
    using ERR2 = ErrFields::ERR2;
    using ERR3 = ErrFields::ERR3;
    using ERR4 = ErrFields::ERR4;
    using ERR5 = ErrFields::ERR5;
    using ERR6 = ErrFields::ERR6;
    using ERR7 = ErrFields::ERR7;
    using ERR8 = ErrFields::ERR8;
    using ERR9 = ErrFields::ERR9;
    using ERR10 = ErrFields::ERR10;
    using ERR11 = ErrFields::ERR11;
    using ERR12 = ErrFields::ERR12;
    using ERR13 = ErrFields::ERR13;
    using ERR14 = ErrFields::ERR14;
    using ERR15 = ErrFields::ERR15;
    using ERR16 = ErrFields::ERR16;
    using ERR17 = ErrFields::ERR17;
    using ERR18 = ErrFields::ERR18;
    using ERR19 = ErrFields::ERR19;
    using ERR20 = ErrFields::ERR20;
    using ERR21 = ErrFields::ERR21;
    using ERR22 = ErrFields::ERR22;
    using ERR23 = ErrFields::ERR23;
    using ERR24 = ErrFields::ERR24;
    using ERR25 = ErrFields::ERR25;
    using ERR26 = ErrFields::ERR26;
    using ERR27 = ErrFields::ERR27;
    using ERR28 = ErrFields::ERR28;
    using ERR29 = ErrFields::ERR29;
    using ERR30 = ErrFields::ERR30;
    using ERR31 = ErrFields::ERR31;
  };

  // Hardware Request Status
  struct HrsFields {
    enum class eHRS0 : std::uint32_t {
      // A hardware service request for channel 0 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 0 is present
      eHWRQST = 1,
    };

    enum class eHRS1 : std::uint32_t {
      // A hardware service request for channel 1 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 1 is present
      eHWRQST = 1,
    };

    enum class eHRS2 : std::uint32_t {
      // A hardware service request for channel 2 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 2 is present
      eHWRQST = 1,
    };

    enum class eHRS3 : std::uint32_t {
      // A hardware service request for channel 3 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 3 is present
      eHWRQST = 1,
    };

    enum class eHRS4 : std::uint32_t {
      // A hardware service request for channel 4 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 4 is present
      eHWRQST = 1,
    };

    enum class eHRS5 : std::uint32_t {
      // A hardware service request for channel 5 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 5 is present
      eHWRQST = 1,
    };

    enum class eHRS6 : std::uint32_t {
      // A hardware service request for channel 6 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 6 is present
      eHWRQST = 1,
    };

    enum class eHRS7 : std::uint32_t {
      // A hardware service request for channel 7 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 7 is present
      eHWRQST = 1,
    };

    enum class eHRS8 : std::uint32_t {
      // A hardware service request for channel 8 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 8 is present
      eHWRQST = 1,
    };

    enum class eHRS9 : std::uint32_t {
      // A hardware service request for channel 9 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 9 is present
      eHWRQST = 1,
    };

    enum class eHRS10 : std::uint32_t {
      // A hardware service request for channel 10 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 10 is present
      eHWRQST = 1,
    };

    enum class eHRS11 : std::uint32_t {
      // A hardware service request for channel 11 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 11 is present
      eHWRQST = 1,
    };

    enum class eHRS12 : std::uint32_t {
      // A hardware service request for channel 12 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 12 is present
      eHWRQST = 1,
    };

    enum class eHRS13 : std::uint32_t {
      // A hardware service request for channel 13 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 13 is present
      eHWRQST = 1,
    };

    enum class eHRS14 : std::uint32_t {
      // A hardware service request for channel 14 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 14 is present
      eHWRQST = 1,
    };

    enum class eHRS15 : std::uint32_t {
      // A hardware service request for channel 15 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 15 is present
      eHWRQST = 1,
    };

    enum class eHRS16 : std::uint32_t {
      // A hardware service request for channel 16 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 16 is present
      eHWRQST = 1,
    };

    enum class eHRS17 : std::uint32_t {
      // A hardware service request for channel 17 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 17 is present
      eHWRQST = 1,
    };

    enum class eHRS18 : std::uint32_t {
      // A hardware service request for channel 18 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 18 is present
      eHWRQST = 1,
    };

    enum class eHRS19 : std::uint32_t {
      // A hardware service request for channel 19 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 19 is present
      eHWRQST = 1,
    };

    enum class eHRS20 : std::uint32_t {
      // A hardware service request for channel 20 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 20 is present
      eHWRQST = 1,
    };

    enum class eHRS21 : std::uint32_t {
      // A hardware service request for channel 21 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 21 is present
      eHWRQST = 1,
    };

    enum class eHRS22 : std::uint32_t {
      // A hardware service request for channel 22 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 22 is present
      eHWRQST = 1,
    };

    enum class eHRS23 : std::uint32_t {
      // A hardware service request for channel 23 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 23 is present
      eHWRQST = 1,
    };

    enum class eHRS24 : std::uint32_t {
      // A hardware service request for channel 24 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 24 is present
      eHWRQST = 1,
    };

    enum class eHRS25 : std::uint32_t {
      // A hardware service request for channel 25 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 25 is present
      eHWRQST = 1,
    };

    enum class eHRS26 : std::uint32_t {
      // A hardware service request for channel 26 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 26 is present
      eHWRQST = 1,
    };

    enum class eHRS27 : std::uint32_t {
      // A hardware service request for channel 27 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 27 is present
      eHWRQST = 1,
    };

    enum class eHRS28 : std::uint32_t {
      // A hardware service request for channel 28 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 28 is present
      eHWRQST = 1,
    };

    enum class eHRS29 : std::uint32_t {
      // A hardware service request for channel 29 is not preset
      eNO_HWRQST = 0,
      // A hardware service request for channel 29 is present
      eHWRQST = 1,
    };

    enum class eHRS30 : std::uint32_t {
      // A hardware service request for channel 30 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 30 is present
      eHWRQST = 1,
    };

    enum class eHRS31 : std::uint32_t {
      // A hardware service request for channel 31 is not present
      eNO_HWRQST = 0,
      // A hardware service request for channel 31 is present
      eHWRQST = 1,
    };

    // Hardware Request Status Channel 0
    using HRS0 = ftl::mmio::Field<1, 0, eHRS0, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 1
    using HRS1 = ftl::mmio::Field<1, 1, eHRS1, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 2
    using HRS2 = ftl::mmio::Field<1, 2, eHRS2, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 3
    using HRS3 = ftl::mmio::Field<1, 3, eHRS3, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 4
    using HRS4 = ftl::mmio::Field<1, 4, eHRS4, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 5
    using HRS5 = ftl::mmio::Field<1, 5, eHRS5, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 6
    using HRS6 = ftl::mmio::Field<1, 6, eHRS6, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 7
    using HRS7 = ftl::mmio::Field<1, 7, eHRS7, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 8
    using HRS8 = ftl::mmio::Field<1, 8, eHRS8, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 9
    using HRS9 = ftl::mmio::Field<1, 9, eHRS9, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 10
    using HRS10 = ftl::mmio::Field<1, 10, eHRS10, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 11
    using HRS11 = ftl::mmio::Field<1, 11, eHRS11, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 12
    using HRS12 = ftl::mmio::Field<1, 12, eHRS12, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 13
    using HRS13 = ftl::mmio::Field<1, 13, eHRS13, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 14
    using HRS14 = ftl::mmio::Field<1, 14, eHRS14, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 15
    using HRS15 = ftl::mmio::Field<1, 15, eHRS15, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 16
    using HRS16 = ftl::mmio::Field<1, 16, eHRS16, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 17
    using HRS17 = ftl::mmio::Field<1, 17, eHRS17, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 18
    using HRS18 = ftl::mmio::Field<1, 18, eHRS18, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 19
    using HRS19 = ftl::mmio::Field<1, 19, eHRS19, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 20
    using HRS20 = ftl::mmio::Field<1, 20, eHRS20, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 21
    using HRS21 = ftl::mmio::Field<1, 21, eHRS21, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 22
    using HRS22 = ftl::mmio::Field<1, 22, eHRS22, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 23
    using HRS23 = ftl::mmio::Field<1, 23, eHRS23, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 24
    using HRS24 = ftl::mmio::Field<1, 24, eHRS24, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 25
    using HRS25 = ftl::mmio::Field<1, 25, eHRS25, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 26
    using HRS26 = ftl::mmio::Field<1, 26, eHRS26, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 27
    using HRS27 = ftl::mmio::Field<1, 27, eHRS27, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 28
    using HRS28 = ftl::mmio::Field<1, 28, eHRS28, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 29
    using HRS29 = ftl::mmio::Field<1, 29, eHRS29, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 30
    using HRS30 = ftl::mmio::Field<1, 30, eHRS30, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Request Status Channel 31
    using HRS31 = ftl::mmio::Field<1, 31, eHRS31, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HrsFields

  struct HRS : ftl::mmio::Register<
      0x40070034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      HrsFields::HRS0,
      HrsFields::HRS1,
      HrsFields::HRS2,
      HrsFields::HRS3,
      HrsFields::HRS4,
      HrsFields::HRS5,
      HrsFields::HRS6,
      HrsFields::HRS7,
      HrsFields::HRS8,
      HrsFields::HRS9,
      HrsFields::HRS10,
      HrsFields::HRS11,
      HrsFields::HRS12,
      HrsFields::HRS13,
      HrsFields::HRS14,
      HrsFields::HRS15,
      HrsFields::HRS16,
      HrsFields::HRS17,
      HrsFields::HRS18,
      HrsFields::HRS19,
      HrsFields::HRS20,
      HrsFields::HRS21,
      HrsFields::HRS22,
      HrsFields::HRS23,
      HrsFields::HRS24,
      HrsFields::HRS25,
      HrsFields::HRS26,
      HrsFields::HRS27,
      HrsFields::HRS28,
      HrsFields::HRS29,
      HrsFields::HRS30,
      HrsFields::HRS31> {
    using eHRS0 = HrsFields::eHRS0;
    using eHRS1 = HrsFields::eHRS1;
    using eHRS2 = HrsFields::eHRS2;
    using eHRS3 = HrsFields::eHRS3;
    using eHRS4 = HrsFields::eHRS4;
    using eHRS5 = HrsFields::eHRS5;
    using eHRS6 = HrsFields::eHRS6;
    using eHRS7 = HrsFields::eHRS7;
    using eHRS8 = HrsFields::eHRS8;
    using eHRS9 = HrsFields::eHRS9;
    using eHRS10 = HrsFields::eHRS10;
    using eHRS11 = HrsFields::eHRS11;
    using eHRS12 = HrsFields::eHRS12;
    using eHRS13 = HrsFields::eHRS13;
    using eHRS14 = HrsFields::eHRS14;
    using eHRS15 = HrsFields::eHRS15;
    using eHRS16 = HrsFields::eHRS16;
    using eHRS17 = HrsFields::eHRS17;
    using eHRS18 = HrsFields::eHRS18;
    using eHRS19 = HrsFields::eHRS19;
    using eHRS20 = HrsFields::eHRS20;
    using eHRS21 = HrsFields::eHRS21;
    using eHRS22 = HrsFields::eHRS22;
    using eHRS23 = HrsFields::eHRS23;
    using eHRS24 = HrsFields::eHRS24;
    using eHRS25 = HrsFields::eHRS25;
    using eHRS26 = HrsFields::eHRS26;
    using eHRS27 = HrsFields::eHRS27;
    using eHRS28 = HrsFields::eHRS28;
    using eHRS29 = HrsFields::eHRS29;
    using eHRS30 = HrsFields::eHRS30;
    using eHRS31 = HrsFields::eHRS31;
    using HRS0 = HrsFields::HRS0;
    using HRS1 = HrsFields::HRS1;
    using HRS2 = HrsFields::HRS2;
    using HRS3 = HrsFields::HRS3;
    using HRS4 = HrsFields::HRS4;
    using HRS5 = HrsFields::HRS5;
    using HRS6 = HrsFields::HRS6;
    using HRS7 = HrsFields::HRS7;
    using HRS8 = HrsFields::HRS8;
    using HRS9 = HrsFields::HRS9;
    using HRS10 = HrsFields::HRS10;
    using HRS11 = HrsFields::HRS11;
    using HRS12 = HrsFields::HRS12;
    using HRS13 = HrsFields::HRS13;
    using HRS14 = HrsFields::HRS14;
    using HRS15 = HrsFields::HRS15;
    using HRS16 = HrsFields::HRS16;
    using HRS17 = HrsFields::HRS17;
    using HRS18 = HrsFields::HRS18;
    using HRS19 = HrsFields::HRS19;
    using HRS20 = HrsFields::HRS20;
    using HRS21 = HrsFields::HRS21;
    using HRS22 = HrsFields::HRS22;
    using HRS23 = HrsFields::HRS23;
    using HRS24 = HrsFields::HRS24;
    using HRS25 = HrsFields::HRS25;
    using HRS26 = HrsFields::HRS26;
    using HRS27 = HrsFields::HRS27;
    using HRS28 = HrsFields::HRS28;
    using HRS29 = HrsFields::HRS29;
    using HRS30 = HrsFields::HRS30;
    using HRS31 = HrsFields::HRS31;
  };

  // Enable Asynchronous Request in Stop
  struct EarsFields {
    enum class eEDREQ_0 : std::uint32_t {
      // Disable asynchronous DMA request for channel 0
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 0
      eENABLE = 1,
    };

    enum class eEDREQ_1 : std::uint32_t {
      // Disable asynchronous DMA request for channel 1
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 1
      eENABLE = 1,
    };

    enum class eEDREQ_2 : std::uint32_t {
      // Disable asynchronous DMA request for channel 2
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 2
      eENABLE = 1,
    };

    enum class eEDREQ_3 : std::uint32_t {
      // Disable asynchronous DMA request for channel 3
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 3
      eENABLE = 1,
    };

    enum class eEDREQ_4 : std::uint32_t {
      // Disable asynchronous DMA request for channel 4
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 4
      eENABLE = 1,
    };

    enum class eEDREQ_5 : std::uint32_t {
      // Disable asynchronous DMA request for channel 5
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 5
      eENABLE = 1,
    };

    enum class eEDREQ_6 : std::uint32_t {
      // Disable asynchronous DMA request for channel 6
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 6
      eENABLE = 1,
    };

    enum class eEDREQ_7 : std::uint32_t {
      // Disable asynchronous DMA request for channel 7
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 7
      eENABLE = 1,
    };

    enum class eEDREQ_8 : std::uint32_t {
      // Disable asynchronous DMA request for channel 8
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 8
      eENABLE = 1,
    };

    enum class eEDREQ_9 : std::uint32_t {
      // Disable asynchronous DMA request for channel 9
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 9
      eENABLE = 1,
    };

    enum class eEDREQ_10 : std::uint32_t {
      // Disable asynchronous DMA request for channel 10
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 10
      eENABLE = 1,
    };

    enum class eEDREQ_11 : std::uint32_t {
      // Disable asynchronous DMA request for channel 11
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 11
      eENABLE = 1,
    };

    enum class eEDREQ_12 : std::uint32_t {
      // Disable asynchronous DMA request for channel 12
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 12
      eENABLE = 1,
    };

    enum class eEDREQ_13 : std::uint32_t {
      // Disable asynchronous DMA request for channel 13
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 13
      eENABLE = 1,
    };

    enum class eEDREQ_14 : std::uint32_t {
      // Disable asynchronous DMA request for channel 14
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 14
      eENABLE = 1,
    };

    enum class eEDREQ_15 : std::uint32_t {
      // Disable asynchronous DMA request for channel 15
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 15
      eENABLE = 1,
    };

    enum class eEDREQ_16 : std::uint32_t {
      // Disable asynchronous DMA request for channel 16
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 16
      eENABLE = 1,
    };

    enum class eEDREQ_17 : std::uint32_t {
      // Disable asynchronous DMA request for channel 17
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 17
      eENABLE = 1,
    };

    enum class eEDREQ_18 : std::uint32_t {
      // Disable asynchronous DMA request for channel 18
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 18
      eENABLE = 1,
    };

    enum class eEDREQ_19 : std::uint32_t {
      // Disable asynchronous DMA request for channel 19
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 19
      eENABLE = 1,
    };

    enum class eEDREQ_20 : std::uint32_t {
      // Disable asynchronous DMA request for channel 20
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 20
      eENABLE = 1,
    };

    enum class eEDREQ_21 : std::uint32_t {
      // Disable asynchronous DMA request for channel 21
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 21
      eENABLE = 1,
    };

    enum class eEDREQ_22 : std::uint32_t {
      // Disable asynchronous DMA request for channel 22
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 22
      eENABLE = 1,
    };

    enum class eEDREQ_23 : std::uint32_t {
      // Disable asynchronous DMA request for channel 23
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 23
      eENABLE = 1,
    };

    enum class eEDREQ_24 : std::uint32_t {
      // Disable asynchronous DMA request for channel 24
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 24
      eENABLE = 1,
    };

    enum class eEDREQ_25 : std::uint32_t {
      // Disable asynchronous DMA request for channel 25
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 25
      eENABLE = 1,
    };

    enum class eEDREQ_26 : std::uint32_t {
      // Disable asynchronous DMA request for channel 26
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 26
      eENABLE = 1,
    };

    enum class eEDREQ_27 : std::uint32_t {
      // Disable asynchronous DMA request for channel 27
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 27
      eENABLE = 1,
    };

    enum class eEDREQ_28 : std::uint32_t {
      // Disable asynchronous DMA request for channel 28
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 28
      eENABLE = 1,
    };

    enum class eEDREQ_29 : std::uint32_t {
      // Disable asynchronous DMA request for channel 29
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 29
      eENABLE = 1,
    };

    enum class eEDREQ_30 : std::uint32_t {
      // Disable asynchronous DMA request for channel 30
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 30
      eENABLE = 1,
    };

    enum class eEDREQ_31 : std::uint32_t {
      // Disable asynchronous DMA request for channel 31
      eDISABLE = 0,
      // Enable asynchronous DMA request for channel 31
      eENABLE = 1,
    };

    // Enable asynchronous DMA request in stop mode for channel 0.
    using EDREQ_0 = ftl::mmio::Field<1, 0, eEDREQ_0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 1.
    using EDREQ_1 = ftl::mmio::Field<1, 1, eEDREQ_1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 2.
    using EDREQ_2 = ftl::mmio::Field<1, 2, eEDREQ_2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 3.
    using EDREQ_3 = ftl::mmio::Field<1, 3, eEDREQ_3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 4.
    using EDREQ_4 = ftl::mmio::Field<1, 4, eEDREQ_4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 5.
    using EDREQ_5 = ftl::mmio::Field<1, 5, eEDREQ_5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 6.
    using EDREQ_6 = ftl::mmio::Field<1, 6, eEDREQ_6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 7.
    using EDREQ_7 = ftl::mmio::Field<1, 7, eEDREQ_7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 8.
    using EDREQ_8 = ftl::mmio::Field<1, 8, eEDREQ_8, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 9.
    using EDREQ_9 = ftl::mmio::Field<1, 9, eEDREQ_9, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 10.
    using EDREQ_10 = ftl::mmio::Field<1, 10, eEDREQ_10, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 11.
    using EDREQ_11 = ftl::mmio::Field<1, 11, eEDREQ_11, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 12.
    using EDREQ_12 = ftl::mmio::Field<1, 12, eEDREQ_12, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 13.
    using EDREQ_13 = ftl::mmio::Field<1, 13, eEDREQ_13, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 14.
    using EDREQ_14 = ftl::mmio::Field<1, 14, eEDREQ_14, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 15.
    using EDREQ_15 = ftl::mmio::Field<1, 15, eEDREQ_15, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 16.
    using EDREQ_16 = ftl::mmio::Field<1, 16, eEDREQ_16, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 17.
    using EDREQ_17 = ftl::mmio::Field<1, 17, eEDREQ_17, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 18.
    using EDREQ_18 = ftl::mmio::Field<1, 18, eEDREQ_18, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 19.
    using EDREQ_19 = ftl::mmio::Field<1, 19, eEDREQ_19, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 20.
    using EDREQ_20 = ftl::mmio::Field<1, 20, eEDREQ_20, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 21.
    using EDREQ_21 = ftl::mmio::Field<1, 21, eEDREQ_21, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 22.
    using EDREQ_22 = ftl::mmio::Field<1, 22, eEDREQ_22, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 23.
    using EDREQ_23 = ftl::mmio::Field<1, 23, eEDREQ_23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 24.
    using EDREQ_24 = ftl::mmio::Field<1, 24, eEDREQ_24, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 25.
    using EDREQ_25 = ftl::mmio::Field<1, 25, eEDREQ_25, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 26.
    using EDREQ_26 = ftl::mmio::Field<1, 26, eEDREQ_26, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 27.
    using EDREQ_27 = ftl::mmio::Field<1, 27, eEDREQ_27, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 28.
    using EDREQ_28 = ftl::mmio::Field<1, 28, eEDREQ_28, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 29.
    using EDREQ_29 = ftl::mmio::Field<1, 29, eEDREQ_29, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 30.
    using EDREQ_30 = ftl::mmio::Field<1, 30, eEDREQ_30, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable asynchronous DMA request in stop mode for channel 31.
    using EDREQ_31 = ftl::mmio::Field<1, 31, eEDREQ_31, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EarsFields

  struct EARS : ftl::mmio::Register<
      0x40070044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EarsFields::EDREQ_0,
      EarsFields::EDREQ_1,
      EarsFields::EDREQ_2,
      EarsFields::EDREQ_3,
      EarsFields::EDREQ_4,
      EarsFields::EDREQ_5,
      EarsFields::EDREQ_6,
      EarsFields::EDREQ_7,
      EarsFields::EDREQ_8,
      EarsFields::EDREQ_9,
      EarsFields::EDREQ_10,
      EarsFields::EDREQ_11,
      EarsFields::EDREQ_12,
      EarsFields::EDREQ_13,
      EarsFields::EDREQ_14,
      EarsFields::EDREQ_15,
      EarsFields::EDREQ_16,
      EarsFields::EDREQ_17,
      EarsFields::EDREQ_18,
      EarsFields::EDREQ_19,
      EarsFields::EDREQ_20,
      EarsFields::EDREQ_21,
      EarsFields::EDREQ_22,
      EarsFields::EDREQ_23,
      EarsFields::EDREQ_24,
      EarsFields::EDREQ_25,
      EarsFields::EDREQ_26,
      EarsFields::EDREQ_27,
      EarsFields::EDREQ_28,
      EarsFields::EDREQ_29,
      EarsFields::EDREQ_30,
      EarsFields::EDREQ_31> {
    using eEDREQ_0 = EarsFields::eEDREQ_0;
    using eEDREQ_1 = EarsFields::eEDREQ_1;
    using eEDREQ_2 = EarsFields::eEDREQ_2;
    using eEDREQ_3 = EarsFields::eEDREQ_3;
    using eEDREQ_4 = EarsFields::eEDREQ_4;
    using eEDREQ_5 = EarsFields::eEDREQ_5;
    using eEDREQ_6 = EarsFields::eEDREQ_6;
    using eEDREQ_7 = EarsFields::eEDREQ_7;
    using eEDREQ_8 = EarsFields::eEDREQ_8;
    using eEDREQ_9 = EarsFields::eEDREQ_9;
    using eEDREQ_10 = EarsFields::eEDREQ_10;
    using eEDREQ_11 = EarsFields::eEDREQ_11;
    using eEDREQ_12 = EarsFields::eEDREQ_12;
    using eEDREQ_13 = EarsFields::eEDREQ_13;
    using eEDREQ_14 = EarsFields::eEDREQ_14;
    using eEDREQ_15 = EarsFields::eEDREQ_15;
    using eEDREQ_16 = EarsFields::eEDREQ_16;
    using eEDREQ_17 = EarsFields::eEDREQ_17;
    using eEDREQ_18 = EarsFields::eEDREQ_18;
    using eEDREQ_19 = EarsFields::eEDREQ_19;
    using eEDREQ_20 = EarsFields::eEDREQ_20;
    using eEDREQ_21 = EarsFields::eEDREQ_21;
    using eEDREQ_22 = EarsFields::eEDREQ_22;
    using eEDREQ_23 = EarsFields::eEDREQ_23;
    using eEDREQ_24 = EarsFields::eEDREQ_24;
    using eEDREQ_25 = EarsFields::eEDREQ_25;
    using eEDREQ_26 = EarsFields::eEDREQ_26;
    using eEDREQ_27 = EarsFields::eEDREQ_27;
    using eEDREQ_28 = EarsFields::eEDREQ_28;
    using eEDREQ_29 = EarsFields::eEDREQ_29;
    using eEDREQ_30 = EarsFields::eEDREQ_30;
    using eEDREQ_31 = EarsFields::eEDREQ_31;
    using EDREQ_0 = EarsFields::EDREQ_0;
    using EDREQ_1 = EarsFields::EDREQ_1;
    using EDREQ_2 = EarsFields::EDREQ_2;
    using EDREQ_3 = EarsFields::EDREQ_3;
    using EDREQ_4 = EarsFields::EDREQ_4;
    using EDREQ_5 = EarsFields::EDREQ_5;
    using EDREQ_6 = EarsFields::EDREQ_6;
    using EDREQ_7 = EarsFields::EDREQ_7;
    using EDREQ_8 = EarsFields::EDREQ_8;
    using EDREQ_9 = EarsFields::EDREQ_9;
    using EDREQ_10 = EarsFields::EDREQ_10;
    using EDREQ_11 = EarsFields::EDREQ_11;
    using EDREQ_12 = EarsFields::EDREQ_12;
    using EDREQ_13 = EarsFields::EDREQ_13;
    using EDREQ_14 = EarsFields::EDREQ_14;
    using EDREQ_15 = EarsFields::EDREQ_15;
    using EDREQ_16 = EarsFields::EDREQ_16;
    using EDREQ_17 = EarsFields::EDREQ_17;
    using EDREQ_18 = EarsFields::EDREQ_18;
    using EDREQ_19 = EarsFields::EDREQ_19;
    using EDREQ_20 = EarsFields::EDREQ_20;
    using EDREQ_21 = EarsFields::EDREQ_21;
    using EDREQ_22 = EarsFields::EDREQ_22;
    using EDREQ_23 = EarsFields::EDREQ_23;
    using EDREQ_24 = EarsFields::EDREQ_24;
    using EDREQ_25 = EarsFields::EDREQ_25;
    using EDREQ_26 = EarsFields::EDREQ_26;
    using EDREQ_27 = EarsFields::EDREQ_27;
    using EDREQ_28 = EarsFields::EDREQ_28;
    using EDREQ_29 = EarsFields::EDREQ_29;
    using EDREQ_30 = EarsFields::EDREQ_30;
    using EDREQ_31 = EarsFields::EDREQ_31;
  };

  // Channel Priority
  struct Dchpri3Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri3Fields

  struct DCHPRI3 : ftl::mmio::Register<
      0x40070100u,
      std::uint8_t,
      0x03u,
      ftl::mmio::RW,
      Dchpri3Fields::CHPRI,
      Dchpri3Fields::GRPPRI,
      Dchpri3Fields::DPA,
      Dchpri3Fields::ECP> {
    using eDPA = Dchpri3Fields::eDPA;
    using eECP = Dchpri3Fields::eECP;
    using CHPRI = Dchpri3Fields::CHPRI;
    using GRPPRI = Dchpri3Fields::GRPPRI;
    using DPA = Dchpri3Fields::DPA;
    using ECP = Dchpri3Fields::ECP;
  };

  // Channel Priority
  struct Dchpri2Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri2Fields

  struct DCHPRI2 : ftl::mmio::Register<
      0x40070101u,
      std::uint8_t,
      0x02u,
      ftl::mmio::RW,
      Dchpri2Fields::CHPRI,
      Dchpri2Fields::GRPPRI,
      Dchpri2Fields::DPA,
      Dchpri2Fields::ECP> {
    using eDPA = Dchpri2Fields::eDPA;
    using eECP = Dchpri2Fields::eECP;
    using CHPRI = Dchpri2Fields::CHPRI;
    using GRPPRI = Dchpri2Fields::GRPPRI;
    using DPA = Dchpri2Fields::DPA;
    using ECP = Dchpri2Fields::ECP;
  };

  // Channel Priority
  struct Dchpri1Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri1Fields

  struct DCHPRI1 : ftl::mmio::Register<
      0x40070102u,
      std::uint8_t,
      0x01u,
      ftl::mmio::RW,
      Dchpri1Fields::CHPRI,
      Dchpri1Fields::GRPPRI,
      Dchpri1Fields::DPA,
      Dchpri1Fields::ECP> {
    using eDPA = Dchpri1Fields::eDPA;
    using eECP = Dchpri1Fields::eECP;
    using CHPRI = Dchpri1Fields::CHPRI;
    using GRPPRI = Dchpri1Fields::GRPPRI;
    using DPA = Dchpri1Fields::DPA;
    using ECP = Dchpri1Fields::ECP;
  };

  // Channel Priority
  struct Dchpri0Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri0Fields

  struct DCHPRI0 : ftl::mmio::Register<
      0x40070103u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      Dchpri0Fields::CHPRI,
      Dchpri0Fields::GRPPRI,
      Dchpri0Fields::DPA,
      Dchpri0Fields::ECP> {
    using eDPA = Dchpri0Fields::eDPA;
    using eECP = Dchpri0Fields::eECP;
    using CHPRI = Dchpri0Fields::CHPRI;
    using GRPPRI = Dchpri0Fields::GRPPRI;
    using DPA = Dchpri0Fields::DPA;
    using ECP = Dchpri0Fields::ECP;
  };

  // Channel Priority
  struct Dchpri7Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri7Fields

  struct DCHPRI7 : ftl::mmio::Register<
      0x40070104u,
      std::uint8_t,
      0x07u,
      ftl::mmio::RW,
      Dchpri7Fields::CHPRI,
      Dchpri7Fields::GRPPRI,
      Dchpri7Fields::DPA,
      Dchpri7Fields::ECP> {
    using eDPA = Dchpri7Fields::eDPA;
    using eECP = Dchpri7Fields::eECP;
    using CHPRI = Dchpri7Fields::CHPRI;
    using GRPPRI = Dchpri7Fields::GRPPRI;
    using DPA = Dchpri7Fields::DPA;
    using ECP = Dchpri7Fields::ECP;
  };

  // Channel Priority
  struct Dchpri6Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri6Fields

  struct DCHPRI6 : ftl::mmio::Register<
      0x40070105u,
      std::uint8_t,
      0x06u,
      ftl::mmio::RW,
      Dchpri6Fields::CHPRI,
      Dchpri6Fields::GRPPRI,
      Dchpri6Fields::DPA,
      Dchpri6Fields::ECP> {
    using eDPA = Dchpri6Fields::eDPA;
    using eECP = Dchpri6Fields::eECP;
    using CHPRI = Dchpri6Fields::CHPRI;
    using GRPPRI = Dchpri6Fields::GRPPRI;
    using DPA = Dchpri6Fields::DPA;
    using ECP = Dchpri6Fields::ECP;
  };

  // Channel Priority
  struct Dchpri5Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri5Fields

  struct DCHPRI5 : ftl::mmio::Register<
      0x40070106u,
      std::uint8_t,
      0x05u,
      ftl::mmio::RW,
      Dchpri5Fields::CHPRI,
      Dchpri5Fields::GRPPRI,
      Dchpri5Fields::DPA,
      Dchpri5Fields::ECP> {
    using eDPA = Dchpri5Fields::eDPA;
    using eECP = Dchpri5Fields::eECP;
    using CHPRI = Dchpri5Fields::CHPRI;
    using GRPPRI = Dchpri5Fields::GRPPRI;
    using DPA = Dchpri5Fields::DPA;
    using ECP = Dchpri5Fields::ECP;
  };

  // Channel Priority
  struct Dchpri4Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri4Fields

  struct DCHPRI4 : ftl::mmio::Register<
      0x40070107u,
      std::uint8_t,
      0x04u,
      ftl::mmio::RW,
      Dchpri4Fields::CHPRI,
      Dchpri4Fields::GRPPRI,
      Dchpri4Fields::DPA,
      Dchpri4Fields::ECP> {
    using eDPA = Dchpri4Fields::eDPA;
    using eECP = Dchpri4Fields::eECP;
    using CHPRI = Dchpri4Fields::CHPRI;
    using GRPPRI = Dchpri4Fields::GRPPRI;
    using DPA = Dchpri4Fields::DPA;
    using ECP = Dchpri4Fields::ECP;
  };

  // Channel Priority
  struct Dchpri11Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri11Fields

  struct DCHPRI11 : ftl::mmio::Register<
      0x40070108u,
      std::uint8_t,
      0x0Bu,
      ftl::mmio::RW,
      Dchpri11Fields::CHPRI,
      Dchpri11Fields::GRPPRI,
      Dchpri11Fields::DPA,
      Dchpri11Fields::ECP> {
    using eDPA = Dchpri11Fields::eDPA;
    using eECP = Dchpri11Fields::eECP;
    using CHPRI = Dchpri11Fields::CHPRI;
    using GRPPRI = Dchpri11Fields::GRPPRI;
    using DPA = Dchpri11Fields::DPA;
    using ECP = Dchpri11Fields::ECP;
  };

  // Channel Priority
  struct Dchpri10Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri10Fields

  struct DCHPRI10 : ftl::mmio::Register<
      0x40070109u,
      std::uint8_t,
      0x0Au,
      ftl::mmio::RW,
      Dchpri10Fields::CHPRI,
      Dchpri10Fields::GRPPRI,
      Dchpri10Fields::DPA,
      Dchpri10Fields::ECP> {
    using eDPA = Dchpri10Fields::eDPA;
    using eECP = Dchpri10Fields::eECP;
    using CHPRI = Dchpri10Fields::CHPRI;
    using GRPPRI = Dchpri10Fields::GRPPRI;
    using DPA = Dchpri10Fields::DPA;
    using ECP = Dchpri10Fields::ECP;
  };

  // Channel Priority
  struct Dchpri9Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri9Fields

  struct DCHPRI9 : ftl::mmio::Register<
      0x4007010Au,
      std::uint8_t,
      0x09u,
      ftl::mmio::RW,
      Dchpri9Fields::CHPRI,
      Dchpri9Fields::GRPPRI,
      Dchpri9Fields::DPA,
      Dchpri9Fields::ECP> {
    using eDPA = Dchpri9Fields::eDPA;
    using eECP = Dchpri9Fields::eECP;
    using CHPRI = Dchpri9Fields::CHPRI;
    using GRPPRI = Dchpri9Fields::GRPPRI;
    using DPA = Dchpri9Fields::DPA;
    using ECP = Dchpri9Fields::ECP;
  };

  // Channel Priority
  struct Dchpri8Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri8Fields

  struct DCHPRI8 : ftl::mmio::Register<
      0x4007010Bu,
      std::uint8_t,
      0x08u,
      ftl::mmio::RW,
      Dchpri8Fields::CHPRI,
      Dchpri8Fields::GRPPRI,
      Dchpri8Fields::DPA,
      Dchpri8Fields::ECP> {
    using eDPA = Dchpri8Fields::eDPA;
    using eECP = Dchpri8Fields::eECP;
    using CHPRI = Dchpri8Fields::CHPRI;
    using GRPPRI = Dchpri8Fields::GRPPRI;
    using DPA = Dchpri8Fields::DPA;
    using ECP = Dchpri8Fields::ECP;
  };

  // Channel Priority
  struct Dchpri15Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri15Fields

  struct DCHPRI15 : ftl::mmio::Register<
      0x4007010Cu,
      std::uint8_t,
      0x0Fu,
      ftl::mmio::RW,
      Dchpri15Fields::CHPRI,
      Dchpri15Fields::GRPPRI,
      Dchpri15Fields::DPA,
      Dchpri15Fields::ECP> {
    using eDPA = Dchpri15Fields::eDPA;
    using eECP = Dchpri15Fields::eECP;
    using CHPRI = Dchpri15Fields::CHPRI;
    using GRPPRI = Dchpri15Fields::GRPPRI;
    using DPA = Dchpri15Fields::DPA;
    using ECP = Dchpri15Fields::ECP;
  };

  // Channel Priority
  struct Dchpri14Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri14Fields

  struct DCHPRI14 : ftl::mmio::Register<
      0x4007010Du,
      std::uint8_t,
      0x0Eu,
      ftl::mmio::RW,
      Dchpri14Fields::CHPRI,
      Dchpri14Fields::GRPPRI,
      Dchpri14Fields::DPA,
      Dchpri14Fields::ECP> {
    using eDPA = Dchpri14Fields::eDPA;
    using eECP = Dchpri14Fields::eECP;
    using CHPRI = Dchpri14Fields::CHPRI;
    using GRPPRI = Dchpri14Fields::GRPPRI;
    using DPA = Dchpri14Fields::DPA;
    using ECP = Dchpri14Fields::ECP;
  };

  // Channel Priority
  struct Dchpri13Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri13Fields

  struct DCHPRI13 : ftl::mmio::Register<
      0x4007010Eu,
      std::uint8_t,
      0x0Du,
      ftl::mmio::RW,
      Dchpri13Fields::CHPRI,
      Dchpri13Fields::GRPPRI,
      Dchpri13Fields::DPA,
      Dchpri13Fields::ECP> {
    using eDPA = Dchpri13Fields::eDPA;
    using eECP = Dchpri13Fields::eECP;
    using CHPRI = Dchpri13Fields::CHPRI;
    using GRPPRI = Dchpri13Fields::GRPPRI;
    using DPA = Dchpri13Fields::DPA;
    using ECP = Dchpri13Fields::ECP;
  };

  // Channel Priority
  struct Dchpri12Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri12Fields

  struct DCHPRI12 : ftl::mmio::Register<
      0x4007010Fu,
      std::uint8_t,
      0x0Cu,
      ftl::mmio::RW,
      Dchpri12Fields::CHPRI,
      Dchpri12Fields::GRPPRI,
      Dchpri12Fields::DPA,
      Dchpri12Fields::ECP> {
    using eDPA = Dchpri12Fields::eDPA;
    using eECP = Dchpri12Fields::eECP;
    using CHPRI = Dchpri12Fields::CHPRI;
    using GRPPRI = Dchpri12Fields::GRPPRI;
    using DPA = Dchpri12Fields::DPA;
    using ECP = Dchpri12Fields::ECP;
  };

  // Channel Priority
  struct Dchpri19Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri19Fields

  struct DCHPRI19 : ftl::mmio::Register<
      0x40070110u,
      std::uint8_t,
      0x13u,
      ftl::mmio::RW,
      Dchpri19Fields::CHPRI,
      Dchpri19Fields::GRPPRI,
      Dchpri19Fields::DPA,
      Dchpri19Fields::ECP> {
    using eDPA = Dchpri19Fields::eDPA;
    using eECP = Dchpri19Fields::eECP;
    using CHPRI = Dchpri19Fields::CHPRI;
    using GRPPRI = Dchpri19Fields::GRPPRI;
    using DPA = Dchpri19Fields::DPA;
    using ECP = Dchpri19Fields::ECP;
  };

  // Channel Priority
  struct Dchpri18Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri18Fields

  struct DCHPRI18 : ftl::mmio::Register<
      0x40070111u,
      std::uint8_t,
      0x12u,
      ftl::mmio::RW,
      Dchpri18Fields::CHPRI,
      Dchpri18Fields::GRPPRI,
      Dchpri18Fields::DPA,
      Dchpri18Fields::ECP> {
    using eDPA = Dchpri18Fields::eDPA;
    using eECP = Dchpri18Fields::eECP;
    using CHPRI = Dchpri18Fields::CHPRI;
    using GRPPRI = Dchpri18Fields::GRPPRI;
    using DPA = Dchpri18Fields::DPA;
    using ECP = Dchpri18Fields::ECP;
  };

  // Channel Priority
  struct Dchpri17Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri17Fields

  struct DCHPRI17 : ftl::mmio::Register<
      0x40070112u,
      std::uint8_t,
      0x11u,
      ftl::mmio::RW,
      Dchpri17Fields::CHPRI,
      Dchpri17Fields::GRPPRI,
      Dchpri17Fields::DPA,
      Dchpri17Fields::ECP> {
    using eDPA = Dchpri17Fields::eDPA;
    using eECP = Dchpri17Fields::eECP;
    using CHPRI = Dchpri17Fields::CHPRI;
    using GRPPRI = Dchpri17Fields::GRPPRI;
    using DPA = Dchpri17Fields::DPA;
    using ECP = Dchpri17Fields::ECP;
  };

  // Channel Priority
  struct Dchpri16Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri16Fields

  struct DCHPRI16 : ftl::mmio::Register<
      0x40070113u,
      std::uint8_t,
      0x10u,
      ftl::mmio::RW,
      Dchpri16Fields::CHPRI,
      Dchpri16Fields::GRPPRI,
      Dchpri16Fields::DPA,
      Dchpri16Fields::ECP> {
    using eDPA = Dchpri16Fields::eDPA;
    using eECP = Dchpri16Fields::eECP;
    using CHPRI = Dchpri16Fields::CHPRI;
    using GRPPRI = Dchpri16Fields::GRPPRI;
    using DPA = Dchpri16Fields::DPA;
    using ECP = Dchpri16Fields::ECP;
  };

  // Channel Priority
  struct Dchpri23Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri23Fields

  struct DCHPRI23 : ftl::mmio::Register<
      0x40070114u,
      std::uint8_t,
      0x17u,
      ftl::mmio::RW,
      Dchpri23Fields::CHPRI,
      Dchpri23Fields::GRPPRI,
      Dchpri23Fields::DPA,
      Dchpri23Fields::ECP> {
    using eDPA = Dchpri23Fields::eDPA;
    using eECP = Dchpri23Fields::eECP;
    using CHPRI = Dchpri23Fields::CHPRI;
    using GRPPRI = Dchpri23Fields::GRPPRI;
    using DPA = Dchpri23Fields::DPA;
    using ECP = Dchpri23Fields::ECP;
  };

  // Channel Priority
  struct Dchpri22Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri22Fields

  struct DCHPRI22 : ftl::mmio::Register<
      0x40070115u,
      std::uint8_t,
      0x16u,
      ftl::mmio::RW,
      Dchpri22Fields::CHPRI,
      Dchpri22Fields::GRPPRI,
      Dchpri22Fields::DPA,
      Dchpri22Fields::ECP> {
    using eDPA = Dchpri22Fields::eDPA;
    using eECP = Dchpri22Fields::eECP;
    using CHPRI = Dchpri22Fields::CHPRI;
    using GRPPRI = Dchpri22Fields::GRPPRI;
    using DPA = Dchpri22Fields::DPA;
    using ECP = Dchpri22Fields::ECP;
  };

  // Channel Priority
  struct Dchpri21Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri21Fields

  struct DCHPRI21 : ftl::mmio::Register<
      0x40070116u,
      std::uint8_t,
      0x15u,
      ftl::mmio::RW,
      Dchpri21Fields::CHPRI,
      Dchpri21Fields::GRPPRI,
      Dchpri21Fields::DPA,
      Dchpri21Fields::ECP> {
    using eDPA = Dchpri21Fields::eDPA;
    using eECP = Dchpri21Fields::eECP;
    using CHPRI = Dchpri21Fields::CHPRI;
    using GRPPRI = Dchpri21Fields::GRPPRI;
    using DPA = Dchpri21Fields::DPA;
    using ECP = Dchpri21Fields::ECP;
  };

  // Channel Priority
  struct Dchpri20Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri20Fields

  struct DCHPRI20 : ftl::mmio::Register<
      0x40070117u,
      std::uint8_t,
      0x14u,
      ftl::mmio::RW,
      Dchpri20Fields::CHPRI,
      Dchpri20Fields::GRPPRI,
      Dchpri20Fields::DPA,
      Dchpri20Fields::ECP> {
    using eDPA = Dchpri20Fields::eDPA;
    using eECP = Dchpri20Fields::eECP;
    using CHPRI = Dchpri20Fields::CHPRI;
    using GRPPRI = Dchpri20Fields::GRPPRI;
    using DPA = Dchpri20Fields::DPA;
    using ECP = Dchpri20Fields::ECP;
  };

  // Channel Priority
  struct Dchpri27Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri27Fields

  struct DCHPRI27 : ftl::mmio::Register<
      0x40070118u,
      std::uint8_t,
      0x1Bu,
      ftl::mmio::RW,
      Dchpri27Fields::CHPRI,
      Dchpri27Fields::GRPPRI,
      Dchpri27Fields::DPA,
      Dchpri27Fields::ECP> {
    using eDPA = Dchpri27Fields::eDPA;
    using eECP = Dchpri27Fields::eECP;
    using CHPRI = Dchpri27Fields::CHPRI;
    using GRPPRI = Dchpri27Fields::GRPPRI;
    using DPA = Dchpri27Fields::DPA;
    using ECP = Dchpri27Fields::ECP;
  };

  // Channel Priority
  struct Dchpri26Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri26Fields

  struct DCHPRI26 : ftl::mmio::Register<
      0x40070119u,
      std::uint8_t,
      0x1Au,
      ftl::mmio::RW,
      Dchpri26Fields::CHPRI,
      Dchpri26Fields::GRPPRI,
      Dchpri26Fields::DPA,
      Dchpri26Fields::ECP> {
    using eDPA = Dchpri26Fields::eDPA;
    using eECP = Dchpri26Fields::eECP;
    using CHPRI = Dchpri26Fields::CHPRI;
    using GRPPRI = Dchpri26Fields::GRPPRI;
    using DPA = Dchpri26Fields::DPA;
    using ECP = Dchpri26Fields::ECP;
  };

  // Channel Priority
  struct Dchpri25Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri25Fields

  struct DCHPRI25 : ftl::mmio::Register<
      0x4007011Au,
      std::uint8_t,
      0x19u,
      ftl::mmio::RW,
      Dchpri25Fields::CHPRI,
      Dchpri25Fields::GRPPRI,
      Dchpri25Fields::DPA,
      Dchpri25Fields::ECP> {
    using eDPA = Dchpri25Fields::eDPA;
    using eECP = Dchpri25Fields::eECP;
    using CHPRI = Dchpri25Fields::CHPRI;
    using GRPPRI = Dchpri25Fields::GRPPRI;
    using DPA = Dchpri25Fields::DPA;
    using ECP = Dchpri25Fields::ECP;
  };

  // Channel Priority
  struct Dchpri24Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri24Fields

  struct DCHPRI24 : ftl::mmio::Register<
      0x4007011Bu,
      std::uint8_t,
      0x18u,
      ftl::mmio::RW,
      Dchpri24Fields::CHPRI,
      Dchpri24Fields::GRPPRI,
      Dchpri24Fields::DPA,
      Dchpri24Fields::ECP> {
    using eDPA = Dchpri24Fields::eDPA;
    using eECP = Dchpri24Fields::eECP;
    using CHPRI = Dchpri24Fields::CHPRI;
    using GRPPRI = Dchpri24Fields::GRPPRI;
    using DPA = Dchpri24Fields::DPA;
    using ECP = Dchpri24Fields::ECP;
  };

  // Channel Priority
  struct Dchpri31Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri31Fields

  struct DCHPRI31 : ftl::mmio::Register<
      0x4007011Cu,
      std::uint8_t,
      0x1Fu,
      ftl::mmio::RW,
      Dchpri31Fields::CHPRI,
      Dchpri31Fields::GRPPRI,
      Dchpri31Fields::DPA,
      Dchpri31Fields::ECP> {
    using eDPA = Dchpri31Fields::eDPA;
    using eECP = Dchpri31Fields::eECP;
    using CHPRI = Dchpri31Fields::CHPRI;
    using GRPPRI = Dchpri31Fields::GRPPRI;
    using DPA = Dchpri31Fields::DPA;
    using ECP = Dchpri31Fields::ECP;
  };

  // Channel Priority
  struct Dchpri30Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri30Fields

  struct DCHPRI30 : ftl::mmio::Register<
      0x4007011Du,
      std::uint8_t,
      0x1Eu,
      ftl::mmio::RW,
      Dchpri30Fields::CHPRI,
      Dchpri30Fields::GRPPRI,
      Dchpri30Fields::DPA,
      Dchpri30Fields::ECP> {
    using eDPA = Dchpri30Fields::eDPA;
    using eECP = Dchpri30Fields::eECP;
    using CHPRI = Dchpri30Fields::CHPRI;
    using GRPPRI = Dchpri30Fields::GRPPRI;
    using DPA = Dchpri30Fields::DPA;
    using ECP = Dchpri30Fields::ECP;
  };

  // Channel Priority
  struct Dchpri29Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri29Fields

  struct DCHPRI29 : ftl::mmio::Register<
      0x4007011Eu,
      std::uint8_t,
      0x1Du,
      ftl::mmio::RW,
      Dchpri29Fields::CHPRI,
      Dchpri29Fields::GRPPRI,
      Dchpri29Fields::DPA,
      Dchpri29Fields::ECP> {
    using eDPA = Dchpri29Fields::eDPA;
    using eECP = Dchpri29Fields::eECP;
    using CHPRI = Dchpri29Fields::CHPRI;
    using GRPPRI = Dchpri29Fields::GRPPRI;
    using DPA = Dchpri29Fields::DPA;
    using ECP = Dchpri29Fields::ECP;
  };

  // Channel Priority
  struct Dchpri28Fields {
    enum class eDPA : std::uint32_t {
      // Channel n can suspend a lower priority channel
      eENABLED = 0,
      // Channel n cannot suspend any channel, regardless of channel priority
      eDISABLED = 1,
    };

    enum class eECP : std::uint32_t {
      // Channel n cannot be suspended by a higher priority channel's service request
      eDISABLED = 0,
      // Channel n can be temporarily suspended by the service request of a higher priority channel
      eENABLED = 1,
    };

    // Channel n Arbitration Priority
    using CHPRI = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel n Current Group Priority
    using GRPPRI = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Disable Preempt Ability. This field resets to 0.
    using DPA = ftl::mmio::Field<1, 6, eDPA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Channel Preemption. This field resets to 0.
    using ECP = ftl::mmio::Field<1, 7, eECP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dchpri28Fields

  struct DCHPRI28 : ftl::mmio::Register<
      0x4007011Fu,
      std::uint8_t,
      0x1Cu,
      ftl::mmio::RW,
      Dchpri28Fields::CHPRI,
      Dchpri28Fields::GRPPRI,
      Dchpri28Fields::DPA,
      Dchpri28Fields::ECP> {
    using eDPA = Dchpri28Fields::eDPA;
    using eECP = Dchpri28Fields::eECP;
    using CHPRI = Dchpri28Fields::CHPRI;
    using GRPPRI = Dchpri28Fields::GRPPRI;
    using DPA = Dchpri28Fields::DPA;
    using ECP = Dchpri28Fields::ECP;
  };

  // TCD Source Address
  struct TcdSaddrFields {
    // Source Address
    using SADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdSaddrFields

  template<std::uint32_t ClusterIndex>
  struct TCD_SADDR : ftl::mmio::Register<
      0x40071000u + (ClusterIndex * 0x20u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcdSaddrFields::SADDR> {
    static_assert(ClusterIndex < 32u, "TCD_SADDR: ClusterIndex out of range");
    using SADDR = TcdSaddrFields::SADDR;
  };

  // TCD Signed Source Address Offset
  struct TcdSoffFields {
    // Source address signed offset
    using SOFF = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdSoffFields

  template<std::uint32_t ClusterIndex>
  struct TCD_SOFF : ftl::mmio::Register<
      0x40071004u + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdSoffFields::SOFF> {
    static_assert(ClusterIndex < 32u, "TCD_SOFF: ClusterIndex out of range");
    using SOFF = TcdSoffFields::SOFF;
  };

  // TCD Transfer Attributes
  struct TcdAttrFields {
    enum class eSSIZE : std::uint32_t {
      // 8-bit
      eEIGHT = 0,
      // 16-bit
      eSIXTEEN_BIT = 1,
      // 32-bit
      eTHIRTYTWO_BIT = 2,
      // 64-bit
      eSIXTYFOUR = 3,
      // 32-byte burst (4 beats of 64 bits)
      eTHIRTYTWO_BYTE = 5,
    };

    enum class eSMOD : std::uint32_t {
      // Source address modulo feature is disabled
      eDISABLED = 0,
      // Value defines address range used to set up circular data queue
      eENABLED_1 = 1,
      // Value defines address range used to set up circular data queue
      eENABLED_2 = 2,
      // Value defines address range used to set up circular data queue
      eENABLED_3 = 3,
      // Value defines address range used to set up circular data queue
      eENABLED_4 = 4,
      // Value defines address range used to set up circular data queue
      eENABLED_5 = 5,
      // Value defines address range used to set up circular data queue
      eENABLED_6 = 6,
      // Value defines address range used to set up circular data queue
      eENABLED_7 = 7,
      // Value defines address range used to set up circular data queue
      eENABLED_8 = 8,
      // Value defines address range used to set up circular data queue
      eENABLED_9 = 9,
    };

    // Destination data transfer size
    using DSIZE = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Destination Address Modulo
    using DMOD = ftl::mmio::Field<5, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Source data transfer size
    using SSIZE = ftl::mmio::Field<3, 8, eSSIZE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Source Address Modulo
    using SMOD = ftl::mmio::Field<5, 11, eSMOD, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdAttrFields

  template<std::uint32_t ClusterIndex>
  struct TCD_ATTR : ftl::mmio::Register<
      0x40071006u + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdAttrFields::DSIZE,
      TcdAttrFields::DMOD,
      TcdAttrFields::SSIZE,
      TcdAttrFields::SMOD> {
    static_assert(ClusterIndex < 32u, "TCD_ATTR: ClusterIndex out of range");
    using eSSIZE = TcdAttrFields::eSSIZE;
    using eSMOD = TcdAttrFields::eSMOD;
    using DSIZE = TcdAttrFields::DSIZE;
    using DMOD = TcdAttrFields::DMOD;
    using SSIZE = TcdAttrFields::SSIZE;
    using SMOD = TcdAttrFields::SMOD;
  };

  // TCD Last Source Address Adjustment
  struct TcdSlastFields {
    // Last Source Address Adjustment
    using SLAST = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdSlastFields

  template<std::uint32_t ClusterIndex>
  struct TCD_SLAST : ftl::mmio::Register<
      0x4007100Cu + (ClusterIndex * 0x20u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcdSlastFields::SLAST> {
    static_assert(ClusterIndex < 32u, "TCD_SLAST: ClusterIndex out of range");
    using SLAST = TcdSlastFields::SLAST;
  };

  // TCD Destination Address
  struct TcdDaddrFields {
    // Destination Address
    using DADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdDaddrFields

  template<std::uint32_t ClusterIndex>
  struct TCD_DADDR : ftl::mmio::Register<
      0x40071010u + (ClusterIndex * 0x20u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcdDaddrFields::DADDR> {
    static_assert(ClusterIndex < 32u, "TCD_DADDR: ClusterIndex out of range");
    using DADDR = TcdDaddrFields::DADDR;
  };

  // TCD Signed Destination Address Offset
  struct TcdDoffFields {
    // Destination Address Signed Offset
    using DOFF = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdDoffFields

  template<std::uint32_t ClusterIndex>
  struct TCD_DOFF : ftl::mmio::Register<
      0x40071014u + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdDoffFields::DOFF> {
    static_assert(ClusterIndex < 32u, "TCD_DOFF: ClusterIndex out of range");
    using DOFF = TcdDoffFields::DOFF;
  };

  // TCD Last Destination Address Adjustment/Scatter Gather Address
  struct TcdDlastsgaFields {
    // Destination last address adjustment, or next memory address TCD for channel (scatter/gather)
    using DLASTSGA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdDlastsgaFields

  template<std::uint32_t ClusterIndex>
  struct TCD_DLASTSGA : ftl::mmio::Register<
      0x40071018u + (ClusterIndex * 0x20u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcdDlastsgaFields::DLASTSGA> {
    static_assert(ClusterIndex < 32u, "TCD_DLASTSGA: ClusterIndex out of range");
    using DLASTSGA = TcdDlastsgaFields::DLASTSGA;
  };

  // TCD Control and Status
  struct TcdCsrFields {
    enum class eSTART : std::uint32_t {
      // Channel is not explicitly started
      eNO_START = 0,
      // Channel is explicitly started via a software initiated service request
      eSTART = 1,
    };

    enum class eINTMAJOR : std::uint32_t {
      // End of major loop interrupt is disabled
      eDISABLED = 0,
      // End of major loop interrupt is enabled
      eENABLED = 1,
    };

    enum class eINTHALF : std::uint32_t {
      // Half-point interrupt is disabled
      eDISABLED = 0,
      // Half-point interrupt is enabled
      eENABLED = 1,
    };

    enum class eDREQ : std::uint32_t {
      // The channel's ERQ field is not affected
      eNO_CLEAR = 0,
      // The channel's ERQ field value changes to 0 when the major loop is complete
      eCLEAR = 1,
    };

    enum class eESG : std::uint32_t {
      // The current channel's TCD is normal format
      eNORMAL = 0,
      // The current channel's TCD specifies a scatter gather format
      eSCATTER = 1,
    };

    enum class eMAJORELINK : std::uint32_t {
      // Channel-to-channel linking is disabled
      eDISABLED = 0,
      // Channel-to-channel linking is enabled
      eENABLED = 1,
    };

    enum class eBWC : std::uint32_t {
      // No eDMA engine stalls
      eDISABLED = 0,
      // eDMA engine stalls for 4 cycles after each R/W
      eSTALL4 = 2,
      // eDMA engine stalls for 8 cycles after each R/W
      eSTALL8 = 3,
    };

    // Channel Start
    using START = ftl::mmio::Field<1, 0, eSTART, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable an interrupt when major iteration count completes.
    using INTMAJOR = ftl::mmio::Field<1, 1, eINTMAJOR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable an interrupt when major counter is half complete.
    using INTHALF = ftl::mmio::Field<1, 2, eINTHALF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable Request
    using DREQ = ftl::mmio::Field<1, 3, eDREQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Scatter/Gather Processing
    using ESG = ftl::mmio::Field<1, 4, eESG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable channel-to-channel linking on major loop complete
    using MAJORELINK = ftl::mmio::Field<1, 5, eMAJORELINK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel Active
    using ACTIVE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Channel Done
    using DONE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Major Loop Link Channel Number
    using MAJORLINKCH = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bandwidth Control
    using BWC = ftl::mmio::Field<2, 14, eBWC, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdCsrFields

  template<std::uint32_t ClusterIndex>
  struct TCD_CSR : ftl::mmio::Register<
      0x4007101Cu + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdCsrFields::START,
      TcdCsrFields::INTMAJOR,
      TcdCsrFields::INTHALF,
      TcdCsrFields::DREQ,
      TcdCsrFields::ESG,
      TcdCsrFields::MAJORELINK,
      TcdCsrFields::ACTIVE,
      TcdCsrFields::DONE,
      TcdCsrFields::MAJORLINKCH,
      ftl::mmio::Reserved<1, 13>,
      TcdCsrFields::BWC> {
    static_assert(ClusterIndex < 32u, "TCD_CSR: ClusterIndex out of range");
    using eSTART = TcdCsrFields::eSTART;
    using eINTMAJOR = TcdCsrFields::eINTMAJOR;
    using eINTHALF = TcdCsrFields::eINTHALF;
    using eDREQ = TcdCsrFields::eDREQ;
    using eESG = TcdCsrFields::eESG;
    using eMAJORELINK = TcdCsrFields::eMAJORELINK;
    using eBWC = TcdCsrFields::eBWC;
    using START = TcdCsrFields::START;
    using INTMAJOR = TcdCsrFields::INTMAJOR;
    using INTHALF = TcdCsrFields::INTHALF;
    using DREQ = TcdCsrFields::DREQ;
    using ESG = TcdCsrFields::ESG;
    using MAJORELINK = TcdCsrFields::MAJORELINK;
    using ACTIVE = TcdCsrFields::ACTIVE;
    using DONE = TcdCsrFields::DONE;
    using MAJORLINKCH = TcdCsrFields::MAJORLINKCH;
    using BWC = TcdCsrFields::BWC;
  };

  // TCD Minor Byte Count (Minor Loop Mapping Disabled)
  struct TcdNbytesMlnoFields {
    // Minor Byte Transfer Count
    using NBYTES = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdNbytesMlnoFields

  template<std::uint32_t ClusterIndex>
  struct TCD_NBYTES_MLNO : ftl::mmio::Register<
      0x40071008u + (ClusterIndex * 0x20u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcdNbytesMlnoFields::NBYTES> {
    static_assert(ClusterIndex < 32u, "TCD_NBYTES_MLNO: ClusterIndex out of range");
    using NBYTES = TcdNbytesMlnoFields::NBYTES;
  };

  // TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
  struct TcdNbytesMloffnoFields {
    enum class eDMLOE : std::uint32_t {
      // The minor loop offset is not applied to the DADDR
      eDISABLED = 0,
      // The minor loop offset is applied to the DADDR
      eENABLED = 1,
    };

    enum class eSMLOE : std::uint32_t {
      // The minor loop offset is not applied to the SADDR
      eDISABLED = 0,
      // The minor loop offset is applied to the SADDR
      eENABLED = 1,
    };

    // Minor Byte Transfer Count
    using NBYTES = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Destination Minor Loop Offset Enable
    using DMLOE = ftl::mmio::Field<1, 30, eDMLOE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Source Minor Loop Offset Enable
    using SMLOE = ftl::mmio::Field<1, 31, eSMLOE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdNbytesMloffnoFields

  template<std::uint32_t ClusterIndex>
  struct TCD_NBYTES_MLOFFNO : ftl::mmio::Register<
      0x40071008u + (ClusterIndex * 0x20u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcdNbytesMloffnoFields::NBYTES,
      TcdNbytesMloffnoFields::DMLOE,
      TcdNbytesMloffnoFields::SMLOE> {
    static_assert(ClusterIndex < 32u, "TCD_NBYTES_MLOFFNO: ClusterIndex out of range");
    using eDMLOE = TcdNbytesMloffnoFields::eDMLOE;
    using eSMLOE = TcdNbytesMloffnoFields::eSMLOE;
    using NBYTES = TcdNbytesMloffnoFields::NBYTES;
    using DMLOE = TcdNbytesMloffnoFields::DMLOE;
    using SMLOE = TcdNbytesMloffnoFields::SMLOE;
  };

  // TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
  struct TcdNbytesMloffyesFields {
    enum class eDMLOE : std::uint32_t {
      // The minor loop offset is not applied to the DADDR
      eDISABLED = 0,
      // The minor loop offset is applied to the DADDR
      eENABLED = 1,
    };

    enum class eSMLOE : std::uint32_t {
      // The minor loop offset is not applied to the SADDR
      eDISABLED = 0,
      // The minor loop offset is applied to the SADDR
      eENABLED = 1,
    };

    // Minor Byte Transfer Count
    using NBYTES = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // If SMLOE = 1 or DMLOE = 1, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
    using MLOFF = ftl::mmio::Field<20, 10, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Destination Minor Loop Offset Enable
    using DMLOE = ftl::mmio::Field<1, 30, eDMLOE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Source Minor Loop Offset Enable
    using SMLOE = ftl::mmio::Field<1, 31, eSMLOE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdNbytesMloffyesFields

  template<std::uint32_t ClusterIndex>
  struct TCD_NBYTES_MLOFFYES : ftl::mmio::Register<
      0x40071008u + (ClusterIndex * 0x20u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcdNbytesMloffyesFields::NBYTES,
      TcdNbytesMloffyesFields::MLOFF,
      TcdNbytesMloffyesFields::DMLOE,
      TcdNbytesMloffyesFields::SMLOE> {
    static_assert(ClusterIndex < 32u, "TCD_NBYTES_MLOFFYES: ClusterIndex out of range");
    using eDMLOE = TcdNbytesMloffyesFields::eDMLOE;
    using eSMLOE = TcdNbytesMloffyesFields::eSMLOE;
    using NBYTES = TcdNbytesMloffyesFields::NBYTES;
    using MLOFF = TcdNbytesMloffyesFields::MLOFF;
    using DMLOE = TcdNbytesMloffyesFields::DMLOE;
    using SMLOE = TcdNbytesMloffyesFields::SMLOE;
  };

  // TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
  struct TcdCiterElinknoFields {
    enum class eELINK : std::uint32_t {
      // Channel-to-channel linking is disabled
      eDISABLED = 0,
      // Channel-to-channel linking is enabled
      eENABLED = 1,
    };

    // Current Major Iteration Count
    using CITER = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable channel-to-channel linking on minor-loop complete
    using ELINK = ftl::mmio::Field<1, 15, eELINK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdCiterElinknoFields

  template<std::uint32_t ClusterIndex>
  struct TCD_CITER_ELINKNO : ftl::mmio::Register<
      0x40071016u + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdCiterElinknoFields::CITER,
      TcdCiterElinknoFields::ELINK> {
    static_assert(ClusterIndex < 32u, "TCD_CITER_ELINKNO: ClusterIndex out of range");
    using eELINK = TcdCiterElinknoFields::eELINK;
    using CITER = TcdCiterElinknoFields::CITER;
    using ELINK = TcdCiterElinknoFields::ELINK;
  };

  // TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
  struct TcdCiterElinkyesFields {
    enum class eELINK : std::uint32_t {
      // Channel-to-channel linking is disabled
      eDISABLED = 0,
      // Channel-to-channel linking is enabled
      eENABLED = 1,
    };

    // Current Major Iteration Count
    using CITER = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Minor Loop Link Channel Number
    using LINKCH = ftl::mmio::Field<5, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable channel-to-channel linking on minor-loop complete
    using ELINK = ftl::mmio::Field<1, 15, eELINK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdCiterElinkyesFields

  template<std::uint32_t ClusterIndex>
  struct TCD_CITER_ELINKYES : ftl::mmio::Register<
      0x40071016u + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdCiterElinkyesFields::CITER,
      TcdCiterElinkyesFields::LINKCH,
      ftl::mmio::Reserved<1, 14>,
      TcdCiterElinkyesFields::ELINK> {
    static_assert(ClusterIndex < 32u, "TCD_CITER_ELINKYES: ClusterIndex out of range");
    using eELINK = TcdCiterElinkyesFields::eELINK;
    using CITER = TcdCiterElinkyesFields::CITER;
    using LINKCH = TcdCiterElinkyesFields::LINKCH;
    using ELINK = TcdCiterElinkyesFields::ELINK;
  };

  // TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
  struct TcdBiterElinknoFields {
    enum class eELINK : std::uint32_t {
      // Channel-to-channel linking is disabled
      eDISABLED = 0,
      // Channel-to-channel linking is enabled
      eENABLED = 1,
    };

    // Starting Major Iteration Count
    using BITER = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enables channel-to-channel linking on minor loop complete
    using ELINK = ftl::mmio::Field<1, 15, eELINK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdBiterElinknoFields

  template<std::uint32_t ClusterIndex>
  struct TCD_BITER_ELINKNO : ftl::mmio::Register<
      0x4007101Eu + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdBiterElinknoFields::BITER,
      TcdBiterElinknoFields::ELINK> {
    static_assert(ClusterIndex < 32u, "TCD_BITER_ELINKNO: ClusterIndex out of range");
    using eELINK = TcdBiterElinknoFields::eELINK;
    using BITER = TcdBiterElinknoFields::BITER;
    using ELINK = TcdBiterElinknoFields::ELINK;
  };

  // TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
  struct TcdBiterElinkyesFields {
    enum class eELINK : std::uint32_t {
      // Channel-to-channel linking is disabled
      eDISABLED = 0,
      // Channel-to-channel linking is enabled
      eENABLED = 1,
    };

    // Starting major iteration count
    using BITER = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Link Channel Number
    using LINKCH = ftl::mmio::Field<5, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enables channel-to-channel linking on minor loop complete
    using ELINK = ftl::mmio::Field<1, 15, eELINK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TcdBiterElinkyesFields

  template<std::uint32_t ClusterIndex>
  struct TCD_BITER_ELINKYES : ftl::mmio::Register<
      0x4007101Eu + (ClusterIndex * 0x20u),
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      TcdBiterElinkyesFields::BITER,
      TcdBiterElinkyesFields::LINKCH,
      ftl::mmio::Reserved<1, 14>,
      TcdBiterElinkyesFields::ELINK> {
    static_assert(ClusterIndex < 32u, "TCD_BITER_ELINKYES: ClusterIndex out of range");
    using eELINK = TcdBiterElinkyesFields::eELINK;
    using BITER = TcdBiterElinkyesFields::BITER;
    using LINKCH = TcdBiterElinkyesFields::LINKCH;
    using ELINK = TcdBiterElinkyesFields::ELINK;
  };

};

}  // namespace regs