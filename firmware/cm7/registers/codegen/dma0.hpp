#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DMA
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::dma0 {

// Control
struct CR_fields_ {
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
};  // struct CR_fields_

struct CR : ftl::mmio::Register<
    0x40070000u,
    std::uint32_t,
    0x00000400u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    CR_fields_::EDBG,
    CR_fields_::ERCA,
    CR_fields_::ERGA,
    CR_fields_::HOE,
    CR_fields_::HALT,
    CR_fields_::CLM,
    CR_fields_::EMLM,
    CR_fields_::GRP0PRI,
    ftl::mmio::Reserved<1, 9>,
    CR_fields_::GRP1PRI,
    ftl::mmio::Reserved<5, 11>,
    CR_fields_::ECX,
    CR_fields_::CX,
    ftl::mmio::Reserved<6, 18>,
    CR_fields_::VERSION,
    CR_fields_::ACTIVE> {
  using eEDBG = CR_fields_::eEDBG;
  using eERCA = CR_fields_::eERCA;
  using eERGA = CR_fields_::eERGA;
  using eHOE = CR_fields_::eHOE;
  using eHALT = CR_fields_::eHALT;
  using eCLM = CR_fields_::eCLM;
  using eEMLM = CR_fields_::eEMLM;
  using eECX = CR_fields_::eECX;
  using eCX = CR_fields_::eCX;
  using eACTIVE = CR_fields_::eACTIVE;
  using EDBG = CR_fields_::EDBG;
  using ERCA = CR_fields_::ERCA;
  using ERGA = CR_fields_::ERGA;
  using HOE = CR_fields_::HOE;
  using HALT = CR_fields_::HALT;
  using CLM = CR_fields_::CLM;
  using EMLM = CR_fields_::EMLM;
  using GRP0PRI = CR_fields_::GRP0PRI;
  using GRP1PRI = CR_fields_::GRP1PRI;
  using ECX = CR_fields_::ECX;
  using CX = CR_fields_::CX;
  using VERSION = CR_fields_::VERSION;
  using ACTIVE = CR_fields_::ACTIVE;
};

// Error Status
struct ES_fields_ {
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
};  // struct ES_fields_

struct ES : ftl::mmio::Register<
    0x40070004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ES_fields_::DBE,
    ES_fields_::SBE,
    ES_fields_::SGE,
    ES_fields_::NCE,
    ES_fields_::DOE,
    ES_fields_::DAE,
    ES_fields_::SOE,
    ES_fields_::SAE,
    ES_fields_::ERRCHN,
    ftl::mmio::Reserved<1, 13>,
    ES_fields_::CPE,
    ES_fields_::GPE,
    ES_fields_::ECX,
    ftl::mmio::Reserved<14, 17>,
    ES_fields_::VLD> {
  using eDBE = ES_fields_::eDBE;
  using eSBE = ES_fields_::eSBE;
  using eSGE = ES_fields_::eSGE;
  using eNCE = ES_fields_::eNCE;
  using eDOE = ES_fields_::eDOE;
  using eDAE = ES_fields_::eDAE;
  using eSOE = ES_fields_::eSOE;
  using eSAE = ES_fields_::eSAE;
  using eCPE = ES_fields_::eCPE;
  using eGPE = ES_fields_::eGPE;
  using eECX = ES_fields_::eECX;
  using eVLD = ES_fields_::eVLD;
  using DBE = ES_fields_::DBE;
  using SBE = ES_fields_::SBE;
  using SGE = ES_fields_::SGE;
  using NCE = ES_fields_::NCE;
  using DOE = ES_fields_::DOE;
  using DAE = ES_fields_::DAE;
  using SOE = ES_fields_::SOE;
  using SAE = ES_fields_::SAE;
  using ERRCHN = ES_fields_::ERRCHN;
  using CPE = ES_fields_::CPE;
  using GPE = ES_fields_::GPE;
  using ECX = ES_fields_::ECX;
  using VLD = ES_fields_::VLD;
};

// Enable Request
struct ERQ_fields_ {
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
};  // struct ERQ_fields_

struct ERQ : ftl::mmio::Register<
    0x4007000Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ERQ_fields_::ERQ0,
    ERQ_fields_::ERQ1,
    ERQ_fields_::ERQ2,
    ERQ_fields_::ERQ3,
    ERQ_fields_::ERQ4,
    ERQ_fields_::ERQ5,
    ERQ_fields_::ERQ6,
    ERQ_fields_::ERQ7,
    ERQ_fields_::ERQ8,
    ERQ_fields_::ERQ9,
    ERQ_fields_::ERQ10,
    ERQ_fields_::ERQ11,
    ERQ_fields_::ERQ12,
    ERQ_fields_::ERQ13,
    ERQ_fields_::ERQ14,
    ERQ_fields_::ERQ15,
    ERQ_fields_::ERQ16,
    ERQ_fields_::ERQ17,
    ERQ_fields_::ERQ18,
    ERQ_fields_::ERQ19,
    ERQ_fields_::ERQ20,
    ERQ_fields_::ERQ21,
    ERQ_fields_::ERQ22,
    ERQ_fields_::ERQ23,
    ERQ_fields_::ERQ24,
    ERQ_fields_::ERQ25,
    ERQ_fields_::ERQ26,
    ERQ_fields_::ERQ27,
    ERQ_fields_::ERQ28,
    ERQ_fields_::ERQ29,
    ERQ_fields_::ERQ30,
    ERQ_fields_::ERQ31> {
  using eERQ0 = ERQ_fields_::eERQ0;
  using eERQ1 = ERQ_fields_::eERQ1;
  using eERQ2 = ERQ_fields_::eERQ2;
  using eERQ3 = ERQ_fields_::eERQ3;
  using eERQ4 = ERQ_fields_::eERQ4;
  using eERQ5 = ERQ_fields_::eERQ5;
  using eERQ6 = ERQ_fields_::eERQ6;
  using eERQ7 = ERQ_fields_::eERQ7;
  using eERQ8 = ERQ_fields_::eERQ8;
  using eERQ9 = ERQ_fields_::eERQ9;
  using eERQ10 = ERQ_fields_::eERQ10;
  using eERQ11 = ERQ_fields_::eERQ11;
  using eERQ12 = ERQ_fields_::eERQ12;
  using eERQ13 = ERQ_fields_::eERQ13;
  using eERQ14 = ERQ_fields_::eERQ14;
  using eERQ15 = ERQ_fields_::eERQ15;
  using eERQ16 = ERQ_fields_::eERQ16;
  using eERQ17 = ERQ_fields_::eERQ17;
  using eERQ18 = ERQ_fields_::eERQ18;
  using eERQ19 = ERQ_fields_::eERQ19;
  using eERQ20 = ERQ_fields_::eERQ20;
  using eERQ21 = ERQ_fields_::eERQ21;
  using eERQ22 = ERQ_fields_::eERQ22;
  using eERQ23 = ERQ_fields_::eERQ23;
  using eERQ24 = ERQ_fields_::eERQ24;
  using eERQ25 = ERQ_fields_::eERQ25;
  using eERQ26 = ERQ_fields_::eERQ26;
  using eERQ27 = ERQ_fields_::eERQ27;
  using eERQ28 = ERQ_fields_::eERQ28;
  using eERQ29 = ERQ_fields_::eERQ29;
  using eERQ30 = ERQ_fields_::eERQ30;
  using eERQ31 = ERQ_fields_::eERQ31;
  using ERQ0 = ERQ_fields_::ERQ0;
  using ERQ1 = ERQ_fields_::ERQ1;
  using ERQ2 = ERQ_fields_::ERQ2;
  using ERQ3 = ERQ_fields_::ERQ3;
  using ERQ4 = ERQ_fields_::ERQ4;
  using ERQ5 = ERQ_fields_::ERQ5;
  using ERQ6 = ERQ_fields_::ERQ6;
  using ERQ7 = ERQ_fields_::ERQ7;
  using ERQ8 = ERQ_fields_::ERQ8;
  using ERQ9 = ERQ_fields_::ERQ9;
  using ERQ10 = ERQ_fields_::ERQ10;
  using ERQ11 = ERQ_fields_::ERQ11;
  using ERQ12 = ERQ_fields_::ERQ12;
  using ERQ13 = ERQ_fields_::ERQ13;
  using ERQ14 = ERQ_fields_::ERQ14;
  using ERQ15 = ERQ_fields_::ERQ15;
  using ERQ16 = ERQ_fields_::ERQ16;
  using ERQ17 = ERQ_fields_::ERQ17;
  using ERQ18 = ERQ_fields_::ERQ18;
  using ERQ19 = ERQ_fields_::ERQ19;
  using ERQ20 = ERQ_fields_::ERQ20;
  using ERQ21 = ERQ_fields_::ERQ21;
  using ERQ22 = ERQ_fields_::ERQ22;
  using ERQ23 = ERQ_fields_::ERQ23;
  using ERQ24 = ERQ_fields_::ERQ24;
  using ERQ25 = ERQ_fields_::ERQ25;
  using ERQ26 = ERQ_fields_::ERQ26;
  using ERQ27 = ERQ_fields_::ERQ27;
  using ERQ28 = ERQ_fields_::ERQ28;
  using ERQ29 = ERQ_fields_::ERQ29;
  using ERQ30 = ERQ_fields_::ERQ30;
  using ERQ31 = ERQ_fields_::ERQ31;
};

// Enable Error Interrupt
struct EEI_fields_ {
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
};  // struct EEI_fields_

struct EEI : ftl::mmio::Register<
    0x40070014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EEI_fields_::EEI0,
    EEI_fields_::EEI1,
    EEI_fields_::EEI2,
    EEI_fields_::EEI3,
    EEI_fields_::EEI4,
    EEI_fields_::EEI5,
    EEI_fields_::EEI6,
    EEI_fields_::EEI7,
    EEI_fields_::EEI8,
    EEI_fields_::EEI9,
    EEI_fields_::EEI10,
    EEI_fields_::EEI11,
    EEI_fields_::EEI12,
    EEI_fields_::EEI13,
    EEI_fields_::EEI14,
    EEI_fields_::EEI15,
    EEI_fields_::EEI16,
    EEI_fields_::EEI17,
    EEI_fields_::EEI18,
    EEI_fields_::EEI19,
    EEI_fields_::EEI20,
    EEI_fields_::EEI21,
    EEI_fields_::EEI22,
    EEI_fields_::EEI23,
    EEI_fields_::EEI24,
    EEI_fields_::EEI25,
    EEI_fields_::EEI26,
    EEI_fields_::EEI27,
    EEI_fields_::EEI28,
    EEI_fields_::EEI29,
    EEI_fields_::EEI30,
    EEI_fields_::EEI31> {
  using eEEI0 = EEI_fields_::eEEI0;
  using eEEI1 = EEI_fields_::eEEI1;
  using eEEI2 = EEI_fields_::eEEI2;
  using eEEI3 = EEI_fields_::eEEI3;
  using eEEI4 = EEI_fields_::eEEI4;
  using eEEI5 = EEI_fields_::eEEI5;
  using eEEI6 = EEI_fields_::eEEI6;
  using eEEI7 = EEI_fields_::eEEI7;
  using eEEI8 = EEI_fields_::eEEI8;
  using eEEI9 = EEI_fields_::eEEI9;
  using eEEI10 = EEI_fields_::eEEI10;
  using eEEI11 = EEI_fields_::eEEI11;
  using eEEI12 = EEI_fields_::eEEI12;
  using eEEI13 = EEI_fields_::eEEI13;
  using eEEI14 = EEI_fields_::eEEI14;
  using eEEI15 = EEI_fields_::eEEI15;
  using eEEI16 = EEI_fields_::eEEI16;
  using eEEI17 = EEI_fields_::eEEI17;
  using eEEI18 = EEI_fields_::eEEI18;
  using eEEI19 = EEI_fields_::eEEI19;
  using eEEI20 = EEI_fields_::eEEI20;
  using eEEI21 = EEI_fields_::eEEI21;
  using eEEI22 = EEI_fields_::eEEI22;
  using eEEI23 = EEI_fields_::eEEI23;
  using eEEI24 = EEI_fields_::eEEI24;
  using eEEI25 = EEI_fields_::eEEI25;
  using eEEI26 = EEI_fields_::eEEI26;
  using eEEI27 = EEI_fields_::eEEI27;
  using eEEI28 = EEI_fields_::eEEI28;
  using eEEI29 = EEI_fields_::eEEI29;
  using eEEI30 = EEI_fields_::eEEI30;
  using eEEI31 = EEI_fields_::eEEI31;
  using EEI0 = EEI_fields_::EEI0;
  using EEI1 = EEI_fields_::EEI1;
  using EEI2 = EEI_fields_::EEI2;
  using EEI3 = EEI_fields_::EEI3;
  using EEI4 = EEI_fields_::EEI4;
  using EEI5 = EEI_fields_::EEI5;
  using EEI6 = EEI_fields_::EEI6;
  using EEI7 = EEI_fields_::EEI7;
  using EEI8 = EEI_fields_::EEI8;
  using EEI9 = EEI_fields_::EEI9;
  using EEI10 = EEI_fields_::EEI10;
  using EEI11 = EEI_fields_::EEI11;
  using EEI12 = EEI_fields_::EEI12;
  using EEI13 = EEI_fields_::EEI13;
  using EEI14 = EEI_fields_::EEI14;
  using EEI15 = EEI_fields_::EEI15;
  using EEI16 = EEI_fields_::EEI16;
  using EEI17 = EEI_fields_::EEI17;
  using EEI18 = EEI_fields_::EEI18;
  using EEI19 = EEI_fields_::EEI19;
  using EEI20 = EEI_fields_::EEI20;
  using EEI21 = EEI_fields_::EEI21;
  using EEI22 = EEI_fields_::EEI22;
  using EEI23 = EEI_fields_::EEI23;
  using EEI24 = EEI_fields_::EEI24;
  using EEI25 = EEI_fields_::EEI25;
  using EEI26 = EEI_fields_::EEI26;
  using EEI27 = EEI_fields_::EEI27;
  using EEI28 = EEI_fields_::EEI28;
  using EEI29 = EEI_fields_::EEI29;
  using EEI30 = EEI_fields_::EEI30;
  using EEI31 = EEI_fields_::EEI31;
};

// Clear Enable Error Interrupt
struct CEEI_fields_ {
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
};  // struct CEEI_fields_

struct CEEI : ftl::mmio::Register<
    0x40070018u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CEEI_fields_::CEEI,
    ftl::mmio::Reserved<1, 5>,
    CEEI_fields_::CAEE,
    CEEI_fields_::NOP> {
  using eCAEE = CEEI_fields_::eCAEE;
  using eNOP = CEEI_fields_::eNOP;
  using value_ = CEEI_fields_::CEEI;
  using CAEE = CEEI_fields_::CAEE;
  using NOP = CEEI_fields_::NOP;
};

// Set Enable Error Interrupt
struct SEEI_fields_ {
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
};  // struct SEEI_fields_

struct SEEI : ftl::mmio::Register<
    0x40070019u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    SEEI_fields_::SEEI,
    ftl::mmio::Reserved<1, 5>,
    SEEI_fields_::SAEE,
    SEEI_fields_::NOP> {
  using eSAEE = SEEI_fields_::eSAEE;
  using eNOP = SEEI_fields_::eNOP;
  using value_ = SEEI_fields_::SEEI;
  using SAEE = SEEI_fields_::SAEE;
  using NOP = SEEI_fields_::NOP;
};

// Clear Enable Request
struct CERQ_fields_ {
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
};  // struct CERQ_fields_

struct CERQ : ftl::mmio::Register<
    0x4007001Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CERQ_fields_::CERQ,
    ftl::mmio::Reserved<1, 5>,
    CERQ_fields_::CAER,
    CERQ_fields_::NOP> {
  using eCAER = CERQ_fields_::eCAER;
  using eNOP = CERQ_fields_::eNOP;
  using value_ = CERQ_fields_::CERQ;
  using CAER = CERQ_fields_::CAER;
  using NOP = CERQ_fields_::NOP;
};

// Set Enable Request
struct SERQ_fields_ {
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
};  // struct SERQ_fields_

struct SERQ : ftl::mmio::Register<
    0x4007001Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    SERQ_fields_::SERQ,
    ftl::mmio::Reserved<1, 5>,
    SERQ_fields_::SAER,
    SERQ_fields_::NOP> {
  using eSAER = SERQ_fields_::eSAER;
  using eNOP = SERQ_fields_::eNOP;
  using value_ = SERQ_fields_::SERQ;
  using SAER = SERQ_fields_::SAER;
  using NOP = SERQ_fields_::NOP;
};

// Clear DONE Status Bit
struct CDNE_fields_ {
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
};  // struct CDNE_fields_

struct CDNE : ftl::mmio::Register<
    0x4007001Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CDNE_fields_::CDNE,
    ftl::mmio::Reserved<1, 5>,
    CDNE_fields_::CADN,
    CDNE_fields_::NOP> {
  using eCADN = CDNE_fields_::eCADN;
  using eNOP = CDNE_fields_::eNOP;
  using value_ = CDNE_fields_::CDNE;
  using CADN = CDNE_fields_::CADN;
  using NOP = CDNE_fields_::NOP;
};

// Set START Bit
struct SSRT_fields_ {
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
};  // struct SSRT_fields_

struct SSRT : ftl::mmio::Register<
    0x4007001Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    SSRT_fields_::SSRT,
    ftl::mmio::Reserved<1, 5>,
    SSRT_fields_::SAST,
    SSRT_fields_::NOP> {
  using eSAST = SSRT_fields_::eSAST;
  using eNOP = SSRT_fields_::eNOP;
  using value_ = SSRT_fields_::SSRT;
  using SAST = SSRT_fields_::SAST;
  using NOP = SSRT_fields_::NOP;
};

// Clear Error
struct CERR_fields_ {
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
};  // struct CERR_fields_

struct CERR : ftl::mmio::Register<
    0x4007001Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CERR_fields_::CERR,
    ftl::mmio::Reserved<1, 5>,
    CERR_fields_::CAEI,
    CERR_fields_::NOP> {
  using eCAEI = CERR_fields_::eCAEI;
  using eNOP = CERR_fields_::eNOP;
  using value_ = CERR_fields_::CERR;
  using CAEI = CERR_fields_::CAEI;
  using NOP = CERR_fields_::NOP;
};

// Clear Interrupt Request
struct CINT_fields_ {
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
};  // struct CINT_fields_

struct CINT : ftl::mmio::Register<
    0x4007001Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CINT_fields_::CINT,
    ftl::mmio::Reserved<1, 5>,
    CINT_fields_::CAIR,
    CINT_fields_::NOP> {
  using eCAIR = CINT_fields_::eCAIR;
  using eNOP = CINT_fields_::eNOP;
  using value_ = CINT_fields_::CINT;
  using CAIR = CINT_fields_::CAIR;
  using NOP = CINT_fields_::NOP;
};

// Interrupt Request
struct INT_fields_ {
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
};  // struct INT_fields_

struct INT : ftl::mmio::Register<
    0x40070024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INT_fields_::INT0,
    INT_fields_::INT1,
    INT_fields_::INT2,
    INT_fields_::INT3,
    INT_fields_::INT4,
    INT_fields_::INT5,
    INT_fields_::INT6,
    INT_fields_::INT7,
    INT_fields_::INT8,
    INT_fields_::INT9,
    INT_fields_::INT10,
    INT_fields_::INT11,
    INT_fields_::INT12,
    INT_fields_::INT13,
    INT_fields_::INT14,
    INT_fields_::INT15,
    INT_fields_::INT16,
    INT_fields_::INT17,
    INT_fields_::INT18,
    INT_fields_::INT19,
    INT_fields_::INT20,
    INT_fields_::INT21,
    INT_fields_::INT22,
    INT_fields_::INT23,
    INT_fields_::INT24,
    INT_fields_::INT25,
    INT_fields_::INT26,
    INT_fields_::INT27,
    INT_fields_::INT28,
    INT_fields_::INT29,
    INT_fields_::INT30,
    INT_fields_::INT31> {
  using eINT0 = INT_fields_::eINT0;
  using eINT1 = INT_fields_::eINT1;
  using eINT2 = INT_fields_::eINT2;
  using eINT3 = INT_fields_::eINT3;
  using eINT4 = INT_fields_::eINT4;
  using eINT5 = INT_fields_::eINT5;
  using eINT6 = INT_fields_::eINT6;
  using eINT7 = INT_fields_::eINT7;
  using eINT8 = INT_fields_::eINT8;
  using eINT9 = INT_fields_::eINT9;
  using eINT10 = INT_fields_::eINT10;
  using eINT11 = INT_fields_::eINT11;
  using eINT12 = INT_fields_::eINT12;
  using eINT13 = INT_fields_::eINT13;
  using eINT14 = INT_fields_::eINT14;
  using eINT15 = INT_fields_::eINT15;
  using eINT16 = INT_fields_::eINT16;
  using eINT17 = INT_fields_::eINT17;
  using eINT18 = INT_fields_::eINT18;
  using eINT19 = INT_fields_::eINT19;
  using eINT20 = INT_fields_::eINT20;
  using eINT21 = INT_fields_::eINT21;
  using eINT22 = INT_fields_::eINT22;
  using eINT23 = INT_fields_::eINT23;
  using eINT24 = INT_fields_::eINT24;
  using eINT25 = INT_fields_::eINT25;
  using eINT26 = INT_fields_::eINT26;
  using eINT27 = INT_fields_::eINT27;
  using eINT28 = INT_fields_::eINT28;
  using eINT29 = INT_fields_::eINT29;
  using eINT30 = INT_fields_::eINT30;
  using eINT31 = INT_fields_::eINT31;
  using INT0 = INT_fields_::INT0;
  using INT1 = INT_fields_::INT1;
  using INT2 = INT_fields_::INT2;
  using INT3 = INT_fields_::INT3;
  using INT4 = INT_fields_::INT4;
  using INT5 = INT_fields_::INT5;
  using INT6 = INT_fields_::INT6;
  using INT7 = INT_fields_::INT7;
  using INT8 = INT_fields_::INT8;
  using INT9 = INT_fields_::INT9;
  using INT10 = INT_fields_::INT10;
  using INT11 = INT_fields_::INT11;
  using INT12 = INT_fields_::INT12;
  using INT13 = INT_fields_::INT13;
  using INT14 = INT_fields_::INT14;
  using INT15 = INT_fields_::INT15;
  using INT16 = INT_fields_::INT16;
  using INT17 = INT_fields_::INT17;
  using INT18 = INT_fields_::INT18;
  using INT19 = INT_fields_::INT19;
  using INT20 = INT_fields_::INT20;
  using INT21 = INT_fields_::INT21;
  using INT22 = INT_fields_::INT22;
  using INT23 = INT_fields_::INT23;
  using INT24 = INT_fields_::INT24;
  using INT25 = INT_fields_::INT25;
  using INT26 = INT_fields_::INT26;
  using INT27 = INT_fields_::INT27;
  using INT28 = INT_fields_::INT28;
  using INT29 = INT_fields_::INT29;
  using INT30 = INT_fields_::INT30;
  using INT31 = INT_fields_::INT31;
};

// Error
struct ERR_fields_ {
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
};  // struct ERR_fields_

struct ERR : ftl::mmio::Register<
    0x4007002Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ERR_fields_::ERR0,
    ERR_fields_::ERR1,
    ERR_fields_::ERR2,
    ERR_fields_::ERR3,
    ERR_fields_::ERR4,
    ERR_fields_::ERR5,
    ERR_fields_::ERR6,
    ERR_fields_::ERR7,
    ERR_fields_::ERR8,
    ERR_fields_::ERR9,
    ERR_fields_::ERR10,
    ERR_fields_::ERR11,
    ERR_fields_::ERR12,
    ERR_fields_::ERR13,
    ERR_fields_::ERR14,
    ERR_fields_::ERR15,
    ERR_fields_::ERR16,
    ERR_fields_::ERR17,
    ERR_fields_::ERR18,
    ERR_fields_::ERR19,
    ERR_fields_::ERR20,
    ERR_fields_::ERR21,
    ERR_fields_::ERR22,
    ERR_fields_::ERR23,
    ERR_fields_::ERR24,
    ERR_fields_::ERR25,
    ERR_fields_::ERR26,
    ERR_fields_::ERR27,
    ERR_fields_::ERR28,
    ERR_fields_::ERR29,
    ERR_fields_::ERR30,
    ERR_fields_::ERR31> {
  using eERR0 = ERR_fields_::eERR0;
  using eERR1 = ERR_fields_::eERR1;
  using eERR2 = ERR_fields_::eERR2;
  using eERR3 = ERR_fields_::eERR3;
  using eERR4 = ERR_fields_::eERR4;
  using eERR5 = ERR_fields_::eERR5;
  using eERR6 = ERR_fields_::eERR6;
  using eERR7 = ERR_fields_::eERR7;
  using eERR8 = ERR_fields_::eERR8;
  using eERR9 = ERR_fields_::eERR9;
  using eERR10 = ERR_fields_::eERR10;
  using eERR11 = ERR_fields_::eERR11;
  using eERR12 = ERR_fields_::eERR12;
  using eERR13 = ERR_fields_::eERR13;
  using eERR14 = ERR_fields_::eERR14;
  using eERR15 = ERR_fields_::eERR15;
  using eERR16 = ERR_fields_::eERR16;
  using eERR17 = ERR_fields_::eERR17;
  using eERR18 = ERR_fields_::eERR18;
  using eERR19 = ERR_fields_::eERR19;
  using eERR20 = ERR_fields_::eERR20;
  using eERR21 = ERR_fields_::eERR21;
  using eERR22 = ERR_fields_::eERR22;
  using eERR23 = ERR_fields_::eERR23;
  using eERR24 = ERR_fields_::eERR24;
  using eERR25 = ERR_fields_::eERR25;
  using eERR26 = ERR_fields_::eERR26;
  using eERR27 = ERR_fields_::eERR27;
  using eERR28 = ERR_fields_::eERR28;
  using eERR29 = ERR_fields_::eERR29;
  using eERR30 = ERR_fields_::eERR30;
  using eERR31 = ERR_fields_::eERR31;
  using ERR0 = ERR_fields_::ERR0;
  using ERR1 = ERR_fields_::ERR1;
  using ERR2 = ERR_fields_::ERR2;
  using ERR3 = ERR_fields_::ERR3;
  using ERR4 = ERR_fields_::ERR4;
  using ERR5 = ERR_fields_::ERR5;
  using ERR6 = ERR_fields_::ERR6;
  using ERR7 = ERR_fields_::ERR7;
  using ERR8 = ERR_fields_::ERR8;
  using ERR9 = ERR_fields_::ERR9;
  using ERR10 = ERR_fields_::ERR10;
  using ERR11 = ERR_fields_::ERR11;
  using ERR12 = ERR_fields_::ERR12;
  using ERR13 = ERR_fields_::ERR13;
  using ERR14 = ERR_fields_::ERR14;
  using ERR15 = ERR_fields_::ERR15;
  using ERR16 = ERR_fields_::ERR16;
  using ERR17 = ERR_fields_::ERR17;
  using ERR18 = ERR_fields_::ERR18;
  using ERR19 = ERR_fields_::ERR19;
  using ERR20 = ERR_fields_::ERR20;
  using ERR21 = ERR_fields_::ERR21;
  using ERR22 = ERR_fields_::ERR22;
  using ERR23 = ERR_fields_::ERR23;
  using ERR24 = ERR_fields_::ERR24;
  using ERR25 = ERR_fields_::ERR25;
  using ERR26 = ERR_fields_::ERR26;
  using ERR27 = ERR_fields_::ERR27;
  using ERR28 = ERR_fields_::ERR28;
  using ERR29 = ERR_fields_::ERR29;
  using ERR30 = ERR_fields_::ERR30;
  using ERR31 = ERR_fields_::ERR31;
};

// Hardware Request Status
struct HRS_fields_ {
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
};  // struct HRS_fields_

struct HRS : ftl::mmio::Register<
    0x40070034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    HRS_fields_::HRS0,
    HRS_fields_::HRS1,
    HRS_fields_::HRS2,
    HRS_fields_::HRS3,
    HRS_fields_::HRS4,
    HRS_fields_::HRS5,
    HRS_fields_::HRS6,
    HRS_fields_::HRS7,
    HRS_fields_::HRS8,
    HRS_fields_::HRS9,
    HRS_fields_::HRS10,
    HRS_fields_::HRS11,
    HRS_fields_::HRS12,
    HRS_fields_::HRS13,
    HRS_fields_::HRS14,
    HRS_fields_::HRS15,
    HRS_fields_::HRS16,
    HRS_fields_::HRS17,
    HRS_fields_::HRS18,
    HRS_fields_::HRS19,
    HRS_fields_::HRS20,
    HRS_fields_::HRS21,
    HRS_fields_::HRS22,
    HRS_fields_::HRS23,
    HRS_fields_::HRS24,
    HRS_fields_::HRS25,
    HRS_fields_::HRS26,
    HRS_fields_::HRS27,
    HRS_fields_::HRS28,
    HRS_fields_::HRS29,
    HRS_fields_::HRS30,
    HRS_fields_::HRS31> {
  using eHRS0 = HRS_fields_::eHRS0;
  using eHRS1 = HRS_fields_::eHRS1;
  using eHRS2 = HRS_fields_::eHRS2;
  using eHRS3 = HRS_fields_::eHRS3;
  using eHRS4 = HRS_fields_::eHRS4;
  using eHRS5 = HRS_fields_::eHRS5;
  using eHRS6 = HRS_fields_::eHRS6;
  using eHRS7 = HRS_fields_::eHRS7;
  using eHRS8 = HRS_fields_::eHRS8;
  using eHRS9 = HRS_fields_::eHRS9;
  using eHRS10 = HRS_fields_::eHRS10;
  using eHRS11 = HRS_fields_::eHRS11;
  using eHRS12 = HRS_fields_::eHRS12;
  using eHRS13 = HRS_fields_::eHRS13;
  using eHRS14 = HRS_fields_::eHRS14;
  using eHRS15 = HRS_fields_::eHRS15;
  using eHRS16 = HRS_fields_::eHRS16;
  using eHRS17 = HRS_fields_::eHRS17;
  using eHRS18 = HRS_fields_::eHRS18;
  using eHRS19 = HRS_fields_::eHRS19;
  using eHRS20 = HRS_fields_::eHRS20;
  using eHRS21 = HRS_fields_::eHRS21;
  using eHRS22 = HRS_fields_::eHRS22;
  using eHRS23 = HRS_fields_::eHRS23;
  using eHRS24 = HRS_fields_::eHRS24;
  using eHRS25 = HRS_fields_::eHRS25;
  using eHRS26 = HRS_fields_::eHRS26;
  using eHRS27 = HRS_fields_::eHRS27;
  using eHRS28 = HRS_fields_::eHRS28;
  using eHRS29 = HRS_fields_::eHRS29;
  using eHRS30 = HRS_fields_::eHRS30;
  using eHRS31 = HRS_fields_::eHRS31;
  using HRS0 = HRS_fields_::HRS0;
  using HRS1 = HRS_fields_::HRS1;
  using HRS2 = HRS_fields_::HRS2;
  using HRS3 = HRS_fields_::HRS3;
  using HRS4 = HRS_fields_::HRS4;
  using HRS5 = HRS_fields_::HRS5;
  using HRS6 = HRS_fields_::HRS6;
  using HRS7 = HRS_fields_::HRS7;
  using HRS8 = HRS_fields_::HRS8;
  using HRS9 = HRS_fields_::HRS9;
  using HRS10 = HRS_fields_::HRS10;
  using HRS11 = HRS_fields_::HRS11;
  using HRS12 = HRS_fields_::HRS12;
  using HRS13 = HRS_fields_::HRS13;
  using HRS14 = HRS_fields_::HRS14;
  using HRS15 = HRS_fields_::HRS15;
  using HRS16 = HRS_fields_::HRS16;
  using HRS17 = HRS_fields_::HRS17;
  using HRS18 = HRS_fields_::HRS18;
  using HRS19 = HRS_fields_::HRS19;
  using HRS20 = HRS_fields_::HRS20;
  using HRS21 = HRS_fields_::HRS21;
  using HRS22 = HRS_fields_::HRS22;
  using HRS23 = HRS_fields_::HRS23;
  using HRS24 = HRS_fields_::HRS24;
  using HRS25 = HRS_fields_::HRS25;
  using HRS26 = HRS_fields_::HRS26;
  using HRS27 = HRS_fields_::HRS27;
  using HRS28 = HRS_fields_::HRS28;
  using HRS29 = HRS_fields_::HRS29;
  using HRS30 = HRS_fields_::HRS30;
  using HRS31 = HRS_fields_::HRS31;
};

// Enable Asynchronous Request in Stop
struct EARS_fields_ {
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
};  // struct EARS_fields_

struct EARS : ftl::mmio::Register<
    0x40070044u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EARS_fields_::EDREQ_0,
    EARS_fields_::EDREQ_1,
    EARS_fields_::EDREQ_2,
    EARS_fields_::EDREQ_3,
    EARS_fields_::EDREQ_4,
    EARS_fields_::EDREQ_5,
    EARS_fields_::EDREQ_6,
    EARS_fields_::EDREQ_7,
    EARS_fields_::EDREQ_8,
    EARS_fields_::EDREQ_9,
    EARS_fields_::EDREQ_10,
    EARS_fields_::EDREQ_11,
    EARS_fields_::EDREQ_12,
    EARS_fields_::EDREQ_13,
    EARS_fields_::EDREQ_14,
    EARS_fields_::EDREQ_15,
    EARS_fields_::EDREQ_16,
    EARS_fields_::EDREQ_17,
    EARS_fields_::EDREQ_18,
    EARS_fields_::EDREQ_19,
    EARS_fields_::EDREQ_20,
    EARS_fields_::EDREQ_21,
    EARS_fields_::EDREQ_22,
    EARS_fields_::EDREQ_23,
    EARS_fields_::EDREQ_24,
    EARS_fields_::EDREQ_25,
    EARS_fields_::EDREQ_26,
    EARS_fields_::EDREQ_27,
    EARS_fields_::EDREQ_28,
    EARS_fields_::EDREQ_29,
    EARS_fields_::EDREQ_30,
    EARS_fields_::EDREQ_31> {
  using eEDREQ_0 = EARS_fields_::eEDREQ_0;
  using eEDREQ_1 = EARS_fields_::eEDREQ_1;
  using eEDREQ_2 = EARS_fields_::eEDREQ_2;
  using eEDREQ_3 = EARS_fields_::eEDREQ_3;
  using eEDREQ_4 = EARS_fields_::eEDREQ_4;
  using eEDREQ_5 = EARS_fields_::eEDREQ_5;
  using eEDREQ_6 = EARS_fields_::eEDREQ_6;
  using eEDREQ_7 = EARS_fields_::eEDREQ_7;
  using eEDREQ_8 = EARS_fields_::eEDREQ_8;
  using eEDREQ_9 = EARS_fields_::eEDREQ_9;
  using eEDREQ_10 = EARS_fields_::eEDREQ_10;
  using eEDREQ_11 = EARS_fields_::eEDREQ_11;
  using eEDREQ_12 = EARS_fields_::eEDREQ_12;
  using eEDREQ_13 = EARS_fields_::eEDREQ_13;
  using eEDREQ_14 = EARS_fields_::eEDREQ_14;
  using eEDREQ_15 = EARS_fields_::eEDREQ_15;
  using eEDREQ_16 = EARS_fields_::eEDREQ_16;
  using eEDREQ_17 = EARS_fields_::eEDREQ_17;
  using eEDREQ_18 = EARS_fields_::eEDREQ_18;
  using eEDREQ_19 = EARS_fields_::eEDREQ_19;
  using eEDREQ_20 = EARS_fields_::eEDREQ_20;
  using eEDREQ_21 = EARS_fields_::eEDREQ_21;
  using eEDREQ_22 = EARS_fields_::eEDREQ_22;
  using eEDREQ_23 = EARS_fields_::eEDREQ_23;
  using eEDREQ_24 = EARS_fields_::eEDREQ_24;
  using eEDREQ_25 = EARS_fields_::eEDREQ_25;
  using eEDREQ_26 = EARS_fields_::eEDREQ_26;
  using eEDREQ_27 = EARS_fields_::eEDREQ_27;
  using eEDREQ_28 = EARS_fields_::eEDREQ_28;
  using eEDREQ_29 = EARS_fields_::eEDREQ_29;
  using eEDREQ_30 = EARS_fields_::eEDREQ_30;
  using eEDREQ_31 = EARS_fields_::eEDREQ_31;
  using EDREQ_0 = EARS_fields_::EDREQ_0;
  using EDREQ_1 = EARS_fields_::EDREQ_1;
  using EDREQ_2 = EARS_fields_::EDREQ_2;
  using EDREQ_3 = EARS_fields_::EDREQ_3;
  using EDREQ_4 = EARS_fields_::EDREQ_4;
  using EDREQ_5 = EARS_fields_::EDREQ_5;
  using EDREQ_6 = EARS_fields_::EDREQ_6;
  using EDREQ_7 = EARS_fields_::EDREQ_7;
  using EDREQ_8 = EARS_fields_::EDREQ_8;
  using EDREQ_9 = EARS_fields_::EDREQ_9;
  using EDREQ_10 = EARS_fields_::EDREQ_10;
  using EDREQ_11 = EARS_fields_::EDREQ_11;
  using EDREQ_12 = EARS_fields_::EDREQ_12;
  using EDREQ_13 = EARS_fields_::EDREQ_13;
  using EDREQ_14 = EARS_fields_::EDREQ_14;
  using EDREQ_15 = EARS_fields_::EDREQ_15;
  using EDREQ_16 = EARS_fields_::EDREQ_16;
  using EDREQ_17 = EARS_fields_::EDREQ_17;
  using EDREQ_18 = EARS_fields_::EDREQ_18;
  using EDREQ_19 = EARS_fields_::EDREQ_19;
  using EDREQ_20 = EARS_fields_::EDREQ_20;
  using EDREQ_21 = EARS_fields_::EDREQ_21;
  using EDREQ_22 = EARS_fields_::EDREQ_22;
  using EDREQ_23 = EARS_fields_::EDREQ_23;
  using EDREQ_24 = EARS_fields_::EDREQ_24;
  using EDREQ_25 = EARS_fields_::EDREQ_25;
  using EDREQ_26 = EARS_fields_::EDREQ_26;
  using EDREQ_27 = EARS_fields_::EDREQ_27;
  using EDREQ_28 = EARS_fields_::EDREQ_28;
  using EDREQ_29 = EARS_fields_::EDREQ_29;
  using EDREQ_30 = EARS_fields_::EDREQ_30;
  using EDREQ_31 = EARS_fields_::EDREQ_31;
};

// Channel Priority
struct DCHPRI3_fields_ {
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
};  // struct DCHPRI3_fields_

struct DCHPRI3 : ftl::mmio::Register<
    0x40070100u,
    std::uint8_t,
    0x03u,
    ftl::mmio::RW,
    DCHPRI3_fields_::CHPRI,
    DCHPRI3_fields_::GRPPRI,
    DCHPRI3_fields_::DPA,
    DCHPRI3_fields_::ECP> {
  using eDPA = DCHPRI3_fields_::eDPA;
  using eECP = DCHPRI3_fields_::eECP;
  using CHPRI = DCHPRI3_fields_::CHPRI;
  using GRPPRI = DCHPRI3_fields_::GRPPRI;
  using DPA = DCHPRI3_fields_::DPA;
  using ECP = DCHPRI3_fields_::ECP;
};

// Channel Priority
struct DCHPRI2_fields_ {
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
};  // struct DCHPRI2_fields_

struct DCHPRI2 : ftl::mmio::Register<
    0x40070101u,
    std::uint8_t,
    0x02u,
    ftl::mmio::RW,
    DCHPRI2_fields_::CHPRI,
    DCHPRI2_fields_::GRPPRI,
    DCHPRI2_fields_::DPA,
    DCHPRI2_fields_::ECP> {
  using eDPA = DCHPRI2_fields_::eDPA;
  using eECP = DCHPRI2_fields_::eECP;
  using CHPRI = DCHPRI2_fields_::CHPRI;
  using GRPPRI = DCHPRI2_fields_::GRPPRI;
  using DPA = DCHPRI2_fields_::DPA;
  using ECP = DCHPRI2_fields_::ECP;
};

// Channel Priority
struct DCHPRI1_fields_ {
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
};  // struct DCHPRI1_fields_

struct DCHPRI1 : ftl::mmio::Register<
    0x40070102u,
    std::uint8_t,
    0x01u,
    ftl::mmio::RW,
    DCHPRI1_fields_::CHPRI,
    DCHPRI1_fields_::GRPPRI,
    DCHPRI1_fields_::DPA,
    DCHPRI1_fields_::ECP> {
  using eDPA = DCHPRI1_fields_::eDPA;
  using eECP = DCHPRI1_fields_::eECP;
  using CHPRI = DCHPRI1_fields_::CHPRI;
  using GRPPRI = DCHPRI1_fields_::GRPPRI;
  using DPA = DCHPRI1_fields_::DPA;
  using ECP = DCHPRI1_fields_::ECP;
};

// Channel Priority
struct DCHPRI0_fields_ {
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
};  // struct DCHPRI0_fields_

struct DCHPRI0 : ftl::mmio::Register<
    0x40070103u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    DCHPRI0_fields_::CHPRI,
    DCHPRI0_fields_::GRPPRI,
    DCHPRI0_fields_::DPA,
    DCHPRI0_fields_::ECP> {
  using eDPA = DCHPRI0_fields_::eDPA;
  using eECP = DCHPRI0_fields_::eECP;
  using CHPRI = DCHPRI0_fields_::CHPRI;
  using GRPPRI = DCHPRI0_fields_::GRPPRI;
  using DPA = DCHPRI0_fields_::DPA;
  using ECP = DCHPRI0_fields_::ECP;
};

// Channel Priority
struct DCHPRI7_fields_ {
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
};  // struct DCHPRI7_fields_

struct DCHPRI7 : ftl::mmio::Register<
    0x40070104u,
    std::uint8_t,
    0x07u,
    ftl::mmio::RW,
    DCHPRI7_fields_::CHPRI,
    DCHPRI7_fields_::GRPPRI,
    DCHPRI7_fields_::DPA,
    DCHPRI7_fields_::ECP> {
  using eDPA = DCHPRI7_fields_::eDPA;
  using eECP = DCHPRI7_fields_::eECP;
  using CHPRI = DCHPRI7_fields_::CHPRI;
  using GRPPRI = DCHPRI7_fields_::GRPPRI;
  using DPA = DCHPRI7_fields_::DPA;
  using ECP = DCHPRI7_fields_::ECP;
};

// Channel Priority
struct DCHPRI6_fields_ {
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
};  // struct DCHPRI6_fields_

struct DCHPRI6 : ftl::mmio::Register<
    0x40070105u,
    std::uint8_t,
    0x06u,
    ftl::mmio::RW,
    DCHPRI6_fields_::CHPRI,
    DCHPRI6_fields_::GRPPRI,
    DCHPRI6_fields_::DPA,
    DCHPRI6_fields_::ECP> {
  using eDPA = DCHPRI6_fields_::eDPA;
  using eECP = DCHPRI6_fields_::eECP;
  using CHPRI = DCHPRI6_fields_::CHPRI;
  using GRPPRI = DCHPRI6_fields_::GRPPRI;
  using DPA = DCHPRI6_fields_::DPA;
  using ECP = DCHPRI6_fields_::ECP;
};

// Channel Priority
struct DCHPRI5_fields_ {
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
};  // struct DCHPRI5_fields_

struct DCHPRI5 : ftl::mmio::Register<
    0x40070106u,
    std::uint8_t,
    0x05u,
    ftl::mmio::RW,
    DCHPRI5_fields_::CHPRI,
    DCHPRI5_fields_::GRPPRI,
    DCHPRI5_fields_::DPA,
    DCHPRI5_fields_::ECP> {
  using eDPA = DCHPRI5_fields_::eDPA;
  using eECP = DCHPRI5_fields_::eECP;
  using CHPRI = DCHPRI5_fields_::CHPRI;
  using GRPPRI = DCHPRI5_fields_::GRPPRI;
  using DPA = DCHPRI5_fields_::DPA;
  using ECP = DCHPRI5_fields_::ECP;
};

// Channel Priority
struct DCHPRI4_fields_ {
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
};  // struct DCHPRI4_fields_

struct DCHPRI4 : ftl::mmio::Register<
    0x40070107u,
    std::uint8_t,
    0x04u,
    ftl::mmio::RW,
    DCHPRI4_fields_::CHPRI,
    DCHPRI4_fields_::GRPPRI,
    DCHPRI4_fields_::DPA,
    DCHPRI4_fields_::ECP> {
  using eDPA = DCHPRI4_fields_::eDPA;
  using eECP = DCHPRI4_fields_::eECP;
  using CHPRI = DCHPRI4_fields_::CHPRI;
  using GRPPRI = DCHPRI4_fields_::GRPPRI;
  using DPA = DCHPRI4_fields_::DPA;
  using ECP = DCHPRI4_fields_::ECP;
};

// Channel Priority
struct DCHPRI11_fields_ {
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
};  // struct DCHPRI11_fields_

struct DCHPRI11 : ftl::mmio::Register<
    0x40070108u,
    std::uint8_t,
    0x0Bu,
    ftl::mmio::RW,
    DCHPRI11_fields_::CHPRI,
    DCHPRI11_fields_::GRPPRI,
    DCHPRI11_fields_::DPA,
    DCHPRI11_fields_::ECP> {
  using eDPA = DCHPRI11_fields_::eDPA;
  using eECP = DCHPRI11_fields_::eECP;
  using CHPRI = DCHPRI11_fields_::CHPRI;
  using GRPPRI = DCHPRI11_fields_::GRPPRI;
  using DPA = DCHPRI11_fields_::DPA;
  using ECP = DCHPRI11_fields_::ECP;
};

// Channel Priority
struct DCHPRI10_fields_ {
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
};  // struct DCHPRI10_fields_

struct DCHPRI10 : ftl::mmio::Register<
    0x40070109u,
    std::uint8_t,
    0x0Au,
    ftl::mmio::RW,
    DCHPRI10_fields_::CHPRI,
    DCHPRI10_fields_::GRPPRI,
    DCHPRI10_fields_::DPA,
    DCHPRI10_fields_::ECP> {
  using eDPA = DCHPRI10_fields_::eDPA;
  using eECP = DCHPRI10_fields_::eECP;
  using CHPRI = DCHPRI10_fields_::CHPRI;
  using GRPPRI = DCHPRI10_fields_::GRPPRI;
  using DPA = DCHPRI10_fields_::DPA;
  using ECP = DCHPRI10_fields_::ECP;
};

// Channel Priority
struct DCHPRI9_fields_ {
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
};  // struct DCHPRI9_fields_

struct DCHPRI9 : ftl::mmio::Register<
    0x4007010Au,
    std::uint8_t,
    0x09u,
    ftl::mmio::RW,
    DCHPRI9_fields_::CHPRI,
    DCHPRI9_fields_::GRPPRI,
    DCHPRI9_fields_::DPA,
    DCHPRI9_fields_::ECP> {
  using eDPA = DCHPRI9_fields_::eDPA;
  using eECP = DCHPRI9_fields_::eECP;
  using CHPRI = DCHPRI9_fields_::CHPRI;
  using GRPPRI = DCHPRI9_fields_::GRPPRI;
  using DPA = DCHPRI9_fields_::DPA;
  using ECP = DCHPRI9_fields_::ECP;
};

// Channel Priority
struct DCHPRI8_fields_ {
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
};  // struct DCHPRI8_fields_

struct DCHPRI8 : ftl::mmio::Register<
    0x4007010Bu,
    std::uint8_t,
    0x08u,
    ftl::mmio::RW,
    DCHPRI8_fields_::CHPRI,
    DCHPRI8_fields_::GRPPRI,
    DCHPRI8_fields_::DPA,
    DCHPRI8_fields_::ECP> {
  using eDPA = DCHPRI8_fields_::eDPA;
  using eECP = DCHPRI8_fields_::eECP;
  using CHPRI = DCHPRI8_fields_::CHPRI;
  using GRPPRI = DCHPRI8_fields_::GRPPRI;
  using DPA = DCHPRI8_fields_::DPA;
  using ECP = DCHPRI8_fields_::ECP;
};

// Channel Priority
struct DCHPRI15_fields_ {
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
};  // struct DCHPRI15_fields_

struct DCHPRI15 : ftl::mmio::Register<
    0x4007010Cu,
    std::uint8_t,
    0x0Fu,
    ftl::mmio::RW,
    DCHPRI15_fields_::CHPRI,
    DCHPRI15_fields_::GRPPRI,
    DCHPRI15_fields_::DPA,
    DCHPRI15_fields_::ECP> {
  using eDPA = DCHPRI15_fields_::eDPA;
  using eECP = DCHPRI15_fields_::eECP;
  using CHPRI = DCHPRI15_fields_::CHPRI;
  using GRPPRI = DCHPRI15_fields_::GRPPRI;
  using DPA = DCHPRI15_fields_::DPA;
  using ECP = DCHPRI15_fields_::ECP;
};

// Channel Priority
struct DCHPRI14_fields_ {
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
};  // struct DCHPRI14_fields_

struct DCHPRI14 : ftl::mmio::Register<
    0x4007010Du,
    std::uint8_t,
    0x0Eu,
    ftl::mmio::RW,
    DCHPRI14_fields_::CHPRI,
    DCHPRI14_fields_::GRPPRI,
    DCHPRI14_fields_::DPA,
    DCHPRI14_fields_::ECP> {
  using eDPA = DCHPRI14_fields_::eDPA;
  using eECP = DCHPRI14_fields_::eECP;
  using CHPRI = DCHPRI14_fields_::CHPRI;
  using GRPPRI = DCHPRI14_fields_::GRPPRI;
  using DPA = DCHPRI14_fields_::DPA;
  using ECP = DCHPRI14_fields_::ECP;
};

// Channel Priority
struct DCHPRI13_fields_ {
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
};  // struct DCHPRI13_fields_

struct DCHPRI13 : ftl::mmio::Register<
    0x4007010Eu,
    std::uint8_t,
    0x0Du,
    ftl::mmio::RW,
    DCHPRI13_fields_::CHPRI,
    DCHPRI13_fields_::GRPPRI,
    DCHPRI13_fields_::DPA,
    DCHPRI13_fields_::ECP> {
  using eDPA = DCHPRI13_fields_::eDPA;
  using eECP = DCHPRI13_fields_::eECP;
  using CHPRI = DCHPRI13_fields_::CHPRI;
  using GRPPRI = DCHPRI13_fields_::GRPPRI;
  using DPA = DCHPRI13_fields_::DPA;
  using ECP = DCHPRI13_fields_::ECP;
};

// Channel Priority
struct DCHPRI12_fields_ {
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
};  // struct DCHPRI12_fields_

struct DCHPRI12 : ftl::mmio::Register<
    0x4007010Fu,
    std::uint8_t,
    0x0Cu,
    ftl::mmio::RW,
    DCHPRI12_fields_::CHPRI,
    DCHPRI12_fields_::GRPPRI,
    DCHPRI12_fields_::DPA,
    DCHPRI12_fields_::ECP> {
  using eDPA = DCHPRI12_fields_::eDPA;
  using eECP = DCHPRI12_fields_::eECP;
  using CHPRI = DCHPRI12_fields_::CHPRI;
  using GRPPRI = DCHPRI12_fields_::GRPPRI;
  using DPA = DCHPRI12_fields_::DPA;
  using ECP = DCHPRI12_fields_::ECP;
};

// Channel Priority
struct DCHPRI19_fields_ {
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
};  // struct DCHPRI19_fields_

struct DCHPRI19 : ftl::mmio::Register<
    0x40070110u,
    std::uint8_t,
    0x13u,
    ftl::mmio::RW,
    DCHPRI19_fields_::CHPRI,
    DCHPRI19_fields_::GRPPRI,
    DCHPRI19_fields_::DPA,
    DCHPRI19_fields_::ECP> {
  using eDPA = DCHPRI19_fields_::eDPA;
  using eECP = DCHPRI19_fields_::eECP;
  using CHPRI = DCHPRI19_fields_::CHPRI;
  using GRPPRI = DCHPRI19_fields_::GRPPRI;
  using DPA = DCHPRI19_fields_::DPA;
  using ECP = DCHPRI19_fields_::ECP;
};

// Channel Priority
struct DCHPRI18_fields_ {
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
};  // struct DCHPRI18_fields_

struct DCHPRI18 : ftl::mmio::Register<
    0x40070111u,
    std::uint8_t,
    0x12u,
    ftl::mmio::RW,
    DCHPRI18_fields_::CHPRI,
    DCHPRI18_fields_::GRPPRI,
    DCHPRI18_fields_::DPA,
    DCHPRI18_fields_::ECP> {
  using eDPA = DCHPRI18_fields_::eDPA;
  using eECP = DCHPRI18_fields_::eECP;
  using CHPRI = DCHPRI18_fields_::CHPRI;
  using GRPPRI = DCHPRI18_fields_::GRPPRI;
  using DPA = DCHPRI18_fields_::DPA;
  using ECP = DCHPRI18_fields_::ECP;
};

// Channel Priority
struct DCHPRI17_fields_ {
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
};  // struct DCHPRI17_fields_

struct DCHPRI17 : ftl::mmio::Register<
    0x40070112u,
    std::uint8_t,
    0x11u,
    ftl::mmio::RW,
    DCHPRI17_fields_::CHPRI,
    DCHPRI17_fields_::GRPPRI,
    DCHPRI17_fields_::DPA,
    DCHPRI17_fields_::ECP> {
  using eDPA = DCHPRI17_fields_::eDPA;
  using eECP = DCHPRI17_fields_::eECP;
  using CHPRI = DCHPRI17_fields_::CHPRI;
  using GRPPRI = DCHPRI17_fields_::GRPPRI;
  using DPA = DCHPRI17_fields_::DPA;
  using ECP = DCHPRI17_fields_::ECP;
};

// Channel Priority
struct DCHPRI16_fields_ {
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
};  // struct DCHPRI16_fields_

struct DCHPRI16 : ftl::mmio::Register<
    0x40070113u,
    std::uint8_t,
    0x10u,
    ftl::mmio::RW,
    DCHPRI16_fields_::CHPRI,
    DCHPRI16_fields_::GRPPRI,
    DCHPRI16_fields_::DPA,
    DCHPRI16_fields_::ECP> {
  using eDPA = DCHPRI16_fields_::eDPA;
  using eECP = DCHPRI16_fields_::eECP;
  using CHPRI = DCHPRI16_fields_::CHPRI;
  using GRPPRI = DCHPRI16_fields_::GRPPRI;
  using DPA = DCHPRI16_fields_::DPA;
  using ECP = DCHPRI16_fields_::ECP;
};

// Channel Priority
struct DCHPRI23_fields_ {
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
};  // struct DCHPRI23_fields_

struct DCHPRI23 : ftl::mmio::Register<
    0x40070114u,
    std::uint8_t,
    0x17u,
    ftl::mmio::RW,
    DCHPRI23_fields_::CHPRI,
    DCHPRI23_fields_::GRPPRI,
    DCHPRI23_fields_::DPA,
    DCHPRI23_fields_::ECP> {
  using eDPA = DCHPRI23_fields_::eDPA;
  using eECP = DCHPRI23_fields_::eECP;
  using CHPRI = DCHPRI23_fields_::CHPRI;
  using GRPPRI = DCHPRI23_fields_::GRPPRI;
  using DPA = DCHPRI23_fields_::DPA;
  using ECP = DCHPRI23_fields_::ECP;
};

// Channel Priority
struct DCHPRI22_fields_ {
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
};  // struct DCHPRI22_fields_

struct DCHPRI22 : ftl::mmio::Register<
    0x40070115u,
    std::uint8_t,
    0x16u,
    ftl::mmio::RW,
    DCHPRI22_fields_::CHPRI,
    DCHPRI22_fields_::GRPPRI,
    DCHPRI22_fields_::DPA,
    DCHPRI22_fields_::ECP> {
  using eDPA = DCHPRI22_fields_::eDPA;
  using eECP = DCHPRI22_fields_::eECP;
  using CHPRI = DCHPRI22_fields_::CHPRI;
  using GRPPRI = DCHPRI22_fields_::GRPPRI;
  using DPA = DCHPRI22_fields_::DPA;
  using ECP = DCHPRI22_fields_::ECP;
};

// Channel Priority
struct DCHPRI21_fields_ {
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
};  // struct DCHPRI21_fields_

struct DCHPRI21 : ftl::mmio::Register<
    0x40070116u,
    std::uint8_t,
    0x15u,
    ftl::mmio::RW,
    DCHPRI21_fields_::CHPRI,
    DCHPRI21_fields_::GRPPRI,
    DCHPRI21_fields_::DPA,
    DCHPRI21_fields_::ECP> {
  using eDPA = DCHPRI21_fields_::eDPA;
  using eECP = DCHPRI21_fields_::eECP;
  using CHPRI = DCHPRI21_fields_::CHPRI;
  using GRPPRI = DCHPRI21_fields_::GRPPRI;
  using DPA = DCHPRI21_fields_::DPA;
  using ECP = DCHPRI21_fields_::ECP;
};

// Channel Priority
struct DCHPRI20_fields_ {
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
};  // struct DCHPRI20_fields_

struct DCHPRI20 : ftl::mmio::Register<
    0x40070117u,
    std::uint8_t,
    0x14u,
    ftl::mmio::RW,
    DCHPRI20_fields_::CHPRI,
    DCHPRI20_fields_::GRPPRI,
    DCHPRI20_fields_::DPA,
    DCHPRI20_fields_::ECP> {
  using eDPA = DCHPRI20_fields_::eDPA;
  using eECP = DCHPRI20_fields_::eECP;
  using CHPRI = DCHPRI20_fields_::CHPRI;
  using GRPPRI = DCHPRI20_fields_::GRPPRI;
  using DPA = DCHPRI20_fields_::DPA;
  using ECP = DCHPRI20_fields_::ECP;
};

// Channel Priority
struct DCHPRI27_fields_ {
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
};  // struct DCHPRI27_fields_

struct DCHPRI27 : ftl::mmio::Register<
    0x40070118u,
    std::uint8_t,
    0x1Bu,
    ftl::mmio::RW,
    DCHPRI27_fields_::CHPRI,
    DCHPRI27_fields_::GRPPRI,
    DCHPRI27_fields_::DPA,
    DCHPRI27_fields_::ECP> {
  using eDPA = DCHPRI27_fields_::eDPA;
  using eECP = DCHPRI27_fields_::eECP;
  using CHPRI = DCHPRI27_fields_::CHPRI;
  using GRPPRI = DCHPRI27_fields_::GRPPRI;
  using DPA = DCHPRI27_fields_::DPA;
  using ECP = DCHPRI27_fields_::ECP;
};

// Channel Priority
struct DCHPRI26_fields_ {
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
};  // struct DCHPRI26_fields_

struct DCHPRI26 : ftl::mmio::Register<
    0x40070119u,
    std::uint8_t,
    0x1Au,
    ftl::mmio::RW,
    DCHPRI26_fields_::CHPRI,
    DCHPRI26_fields_::GRPPRI,
    DCHPRI26_fields_::DPA,
    DCHPRI26_fields_::ECP> {
  using eDPA = DCHPRI26_fields_::eDPA;
  using eECP = DCHPRI26_fields_::eECP;
  using CHPRI = DCHPRI26_fields_::CHPRI;
  using GRPPRI = DCHPRI26_fields_::GRPPRI;
  using DPA = DCHPRI26_fields_::DPA;
  using ECP = DCHPRI26_fields_::ECP;
};

// Channel Priority
struct DCHPRI25_fields_ {
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
};  // struct DCHPRI25_fields_

struct DCHPRI25 : ftl::mmio::Register<
    0x4007011Au,
    std::uint8_t,
    0x19u,
    ftl::mmio::RW,
    DCHPRI25_fields_::CHPRI,
    DCHPRI25_fields_::GRPPRI,
    DCHPRI25_fields_::DPA,
    DCHPRI25_fields_::ECP> {
  using eDPA = DCHPRI25_fields_::eDPA;
  using eECP = DCHPRI25_fields_::eECP;
  using CHPRI = DCHPRI25_fields_::CHPRI;
  using GRPPRI = DCHPRI25_fields_::GRPPRI;
  using DPA = DCHPRI25_fields_::DPA;
  using ECP = DCHPRI25_fields_::ECP;
};

// Channel Priority
struct DCHPRI24_fields_ {
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
};  // struct DCHPRI24_fields_

struct DCHPRI24 : ftl::mmio::Register<
    0x4007011Bu,
    std::uint8_t,
    0x18u,
    ftl::mmio::RW,
    DCHPRI24_fields_::CHPRI,
    DCHPRI24_fields_::GRPPRI,
    DCHPRI24_fields_::DPA,
    DCHPRI24_fields_::ECP> {
  using eDPA = DCHPRI24_fields_::eDPA;
  using eECP = DCHPRI24_fields_::eECP;
  using CHPRI = DCHPRI24_fields_::CHPRI;
  using GRPPRI = DCHPRI24_fields_::GRPPRI;
  using DPA = DCHPRI24_fields_::DPA;
  using ECP = DCHPRI24_fields_::ECP;
};

// Channel Priority
struct DCHPRI31_fields_ {
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
};  // struct DCHPRI31_fields_

struct DCHPRI31 : ftl::mmio::Register<
    0x4007011Cu,
    std::uint8_t,
    0x1Fu,
    ftl::mmio::RW,
    DCHPRI31_fields_::CHPRI,
    DCHPRI31_fields_::GRPPRI,
    DCHPRI31_fields_::DPA,
    DCHPRI31_fields_::ECP> {
  using eDPA = DCHPRI31_fields_::eDPA;
  using eECP = DCHPRI31_fields_::eECP;
  using CHPRI = DCHPRI31_fields_::CHPRI;
  using GRPPRI = DCHPRI31_fields_::GRPPRI;
  using DPA = DCHPRI31_fields_::DPA;
  using ECP = DCHPRI31_fields_::ECP;
};

// Channel Priority
struct DCHPRI30_fields_ {
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
};  // struct DCHPRI30_fields_

struct DCHPRI30 : ftl::mmio::Register<
    0x4007011Du,
    std::uint8_t,
    0x1Eu,
    ftl::mmio::RW,
    DCHPRI30_fields_::CHPRI,
    DCHPRI30_fields_::GRPPRI,
    DCHPRI30_fields_::DPA,
    DCHPRI30_fields_::ECP> {
  using eDPA = DCHPRI30_fields_::eDPA;
  using eECP = DCHPRI30_fields_::eECP;
  using CHPRI = DCHPRI30_fields_::CHPRI;
  using GRPPRI = DCHPRI30_fields_::GRPPRI;
  using DPA = DCHPRI30_fields_::DPA;
  using ECP = DCHPRI30_fields_::ECP;
};

// Channel Priority
struct DCHPRI29_fields_ {
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
};  // struct DCHPRI29_fields_

struct DCHPRI29 : ftl::mmio::Register<
    0x4007011Eu,
    std::uint8_t,
    0x1Du,
    ftl::mmio::RW,
    DCHPRI29_fields_::CHPRI,
    DCHPRI29_fields_::GRPPRI,
    DCHPRI29_fields_::DPA,
    DCHPRI29_fields_::ECP> {
  using eDPA = DCHPRI29_fields_::eDPA;
  using eECP = DCHPRI29_fields_::eECP;
  using CHPRI = DCHPRI29_fields_::CHPRI;
  using GRPPRI = DCHPRI29_fields_::GRPPRI;
  using DPA = DCHPRI29_fields_::DPA;
  using ECP = DCHPRI29_fields_::ECP;
};

// Channel Priority
struct DCHPRI28_fields_ {
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
};  // struct DCHPRI28_fields_

struct DCHPRI28 : ftl::mmio::Register<
    0x4007011Fu,
    std::uint8_t,
    0x1Cu,
    ftl::mmio::RW,
    DCHPRI28_fields_::CHPRI,
    DCHPRI28_fields_::GRPPRI,
    DCHPRI28_fields_::DPA,
    DCHPRI28_fields_::ECP> {
  using eDPA = DCHPRI28_fields_::eDPA;
  using eECP = DCHPRI28_fields_::eECP;
  using CHPRI = DCHPRI28_fields_::CHPRI;
  using GRPPRI = DCHPRI28_fields_::GRPPRI;
  using DPA = DCHPRI28_fields_::DPA;
  using ECP = DCHPRI28_fields_::ECP;
};

// TCD Source Address
struct TCD_SADDR_fields_ {
  // Source Address
  using SADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCD_SADDR_fields_

template<std::uint32_t ClusterIndex>
struct TCD_SADDR : ftl::mmio::Register<
    0x40071000u + (ClusterIndex * 0x20u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCD_SADDR_fields_::SADDR> {
  static_assert(ClusterIndex < 32u, "TCD_SADDR: ClusterIndex out of range");
  using SADDR = TCD_SADDR_fields_::SADDR;
};

// TCD Signed Source Address Offset
struct TCD_SOFF_fields_ {
  // Source address signed offset
  using SOFF = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCD_SOFF_fields_

template<std::uint32_t ClusterIndex>
struct TCD_SOFF : ftl::mmio::Register<
    0x40071004u + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_SOFF_fields_::SOFF> {
  static_assert(ClusterIndex < 32u, "TCD_SOFF: ClusterIndex out of range");
  using SOFF = TCD_SOFF_fields_::SOFF;
};

// TCD Transfer Attributes
struct TCD_ATTR_fields_ {
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
};  // struct TCD_ATTR_fields_

template<std::uint32_t ClusterIndex>
struct TCD_ATTR : ftl::mmio::Register<
    0x40071006u + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_ATTR_fields_::DSIZE,
    TCD_ATTR_fields_::DMOD,
    TCD_ATTR_fields_::SSIZE,
    TCD_ATTR_fields_::SMOD> {
  static_assert(ClusterIndex < 32u, "TCD_ATTR: ClusterIndex out of range");
  using eSSIZE = TCD_ATTR_fields_::eSSIZE;
  using eSMOD = TCD_ATTR_fields_::eSMOD;
  using DSIZE = TCD_ATTR_fields_::DSIZE;
  using DMOD = TCD_ATTR_fields_::DMOD;
  using SSIZE = TCD_ATTR_fields_::SSIZE;
  using SMOD = TCD_ATTR_fields_::SMOD;
};

// TCD Last Source Address Adjustment
struct TCD_SLAST_fields_ {
  // Last Source Address Adjustment
  using SLAST = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCD_SLAST_fields_

template<std::uint32_t ClusterIndex>
struct TCD_SLAST : ftl::mmio::Register<
    0x4007100Cu + (ClusterIndex * 0x20u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCD_SLAST_fields_::SLAST> {
  static_assert(ClusterIndex < 32u, "TCD_SLAST: ClusterIndex out of range");
  using SLAST = TCD_SLAST_fields_::SLAST;
};

// TCD Destination Address
struct TCD_DADDR_fields_ {
  // Destination Address
  using DADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCD_DADDR_fields_

template<std::uint32_t ClusterIndex>
struct TCD_DADDR : ftl::mmio::Register<
    0x40071010u + (ClusterIndex * 0x20u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCD_DADDR_fields_::DADDR> {
  static_assert(ClusterIndex < 32u, "TCD_DADDR: ClusterIndex out of range");
  using DADDR = TCD_DADDR_fields_::DADDR;
};

// TCD Signed Destination Address Offset
struct TCD_DOFF_fields_ {
  // Destination Address Signed Offset
  using DOFF = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCD_DOFF_fields_

template<std::uint32_t ClusterIndex>
struct TCD_DOFF : ftl::mmio::Register<
    0x40071014u + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_DOFF_fields_::DOFF> {
  static_assert(ClusterIndex < 32u, "TCD_DOFF: ClusterIndex out of range");
  using DOFF = TCD_DOFF_fields_::DOFF;
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
struct TCD_DLASTSGA_fields_ {
  // Destination last address adjustment, or next memory address TCD for channel (scatter/gather)
  using DLASTSGA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCD_DLASTSGA_fields_

template<std::uint32_t ClusterIndex>
struct TCD_DLASTSGA : ftl::mmio::Register<
    0x40071018u + (ClusterIndex * 0x20u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCD_DLASTSGA_fields_::DLASTSGA> {
  static_assert(ClusterIndex < 32u, "TCD_DLASTSGA: ClusterIndex out of range");
  using DLASTSGA = TCD_DLASTSGA_fields_::DLASTSGA;
};

// TCD Control and Status
struct TCD_CSR_fields_ {
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
};  // struct TCD_CSR_fields_

template<std::uint32_t ClusterIndex>
struct TCD_CSR : ftl::mmio::Register<
    0x4007101Cu + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_CSR_fields_::START,
    TCD_CSR_fields_::INTMAJOR,
    TCD_CSR_fields_::INTHALF,
    TCD_CSR_fields_::DREQ,
    TCD_CSR_fields_::ESG,
    TCD_CSR_fields_::MAJORELINK,
    TCD_CSR_fields_::ACTIVE,
    TCD_CSR_fields_::DONE,
    TCD_CSR_fields_::MAJORLINKCH,
    ftl::mmio::Reserved<1, 13>,
    TCD_CSR_fields_::BWC> {
  static_assert(ClusterIndex < 32u, "TCD_CSR: ClusterIndex out of range");
  using eSTART = TCD_CSR_fields_::eSTART;
  using eINTMAJOR = TCD_CSR_fields_::eINTMAJOR;
  using eINTHALF = TCD_CSR_fields_::eINTHALF;
  using eDREQ = TCD_CSR_fields_::eDREQ;
  using eESG = TCD_CSR_fields_::eESG;
  using eMAJORELINK = TCD_CSR_fields_::eMAJORELINK;
  using eBWC = TCD_CSR_fields_::eBWC;
  using START = TCD_CSR_fields_::START;
  using INTMAJOR = TCD_CSR_fields_::INTMAJOR;
  using INTHALF = TCD_CSR_fields_::INTHALF;
  using DREQ = TCD_CSR_fields_::DREQ;
  using ESG = TCD_CSR_fields_::ESG;
  using MAJORELINK = TCD_CSR_fields_::MAJORELINK;
  using ACTIVE = TCD_CSR_fields_::ACTIVE;
  using DONE = TCD_CSR_fields_::DONE;
  using MAJORLINKCH = TCD_CSR_fields_::MAJORLINKCH;
  using BWC = TCD_CSR_fields_::BWC;
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
struct TCD_NBYTES_MLNO_fields_ {
  // Minor Byte Transfer Count
  using NBYTES = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TCD_NBYTES_MLNO_fields_

template<std::uint32_t ClusterIndex>
struct TCD_NBYTES_MLNO : ftl::mmio::Register<
    0x40071008u + (ClusterIndex * 0x20u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCD_NBYTES_MLNO_fields_::NBYTES> {
  static_assert(ClusterIndex < 32u, "TCD_NBYTES_MLNO: ClusterIndex out of range");
  using NBYTES = TCD_NBYTES_MLNO_fields_::NBYTES;
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
struct TCD_NBYTES_MLOFFNO_fields_ {
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
};  // struct TCD_NBYTES_MLOFFNO_fields_

template<std::uint32_t ClusterIndex>
struct TCD_NBYTES_MLOFFNO : ftl::mmio::Register<
    0x40071008u + (ClusterIndex * 0x20u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCD_NBYTES_MLOFFNO_fields_::NBYTES,
    TCD_NBYTES_MLOFFNO_fields_::DMLOE,
    TCD_NBYTES_MLOFFNO_fields_::SMLOE> {
  static_assert(ClusterIndex < 32u, "TCD_NBYTES_MLOFFNO: ClusterIndex out of range");
  using eDMLOE = TCD_NBYTES_MLOFFNO_fields_::eDMLOE;
  using eSMLOE = TCD_NBYTES_MLOFFNO_fields_::eSMLOE;
  using NBYTES = TCD_NBYTES_MLOFFNO_fields_::NBYTES;
  using DMLOE = TCD_NBYTES_MLOFFNO_fields_::DMLOE;
  using SMLOE = TCD_NBYTES_MLOFFNO_fields_::SMLOE;
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
struct TCD_NBYTES_MLOFFYES_fields_ {
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
};  // struct TCD_NBYTES_MLOFFYES_fields_

template<std::uint32_t ClusterIndex>
struct TCD_NBYTES_MLOFFYES : ftl::mmio::Register<
    0x40071008u + (ClusterIndex * 0x20u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TCD_NBYTES_MLOFFYES_fields_::NBYTES,
    TCD_NBYTES_MLOFFYES_fields_::MLOFF,
    TCD_NBYTES_MLOFFYES_fields_::DMLOE,
    TCD_NBYTES_MLOFFYES_fields_::SMLOE> {
  static_assert(ClusterIndex < 32u, "TCD_NBYTES_MLOFFYES: ClusterIndex out of range");
  using eDMLOE = TCD_NBYTES_MLOFFYES_fields_::eDMLOE;
  using eSMLOE = TCD_NBYTES_MLOFFYES_fields_::eSMLOE;
  using NBYTES = TCD_NBYTES_MLOFFYES_fields_::NBYTES;
  using MLOFF = TCD_NBYTES_MLOFFYES_fields_::MLOFF;
  using DMLOE = TCD_NBYTES_MLOFFYES_fields_::DMLOE;
  using SMLOE = TCD_NBYTES_MLOFFYES_fields_::SMLOE;
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
struct TCD_CITER_ELINKNO_fields_ {
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
};  // struct TCD_CITER_ELINKNO_fields_

template<std::uint32_t ClusterIndex>
struct TCD_CITER_ELINKNO : ftl::mmio::Register<
    0x40071016u + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_CITER_ELINKNO_fields_::CITER,
    TCD_CITER_ELINKNO_fields_::ELINK> {
  static_assert(ClusterIndex < 32u, "TCD_CITER_ELINKNO: ClusterIndex out of range");
  using eELINK = TCD_CITER_ELINKNO_fields_::eELINK;
  using CITER = TCD_CITER_ELINKNO_fields_::CITER;
  using ELINK = TCD_CITER_ELINKNO_fields_::ELINK;
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
struct TCD_CITER_ELINKYES_fields_ {
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
};  // struct TCD_CITER_ELINKYES_fields_

template<std::uint32_t ClusterIndex>
struct TCD_CITER_ELINKYES : ftl::mmio::Register<
    0x40071016u + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_CITER_ELINKYES_fields_::CITER,
    TCD_CITER_ELINKYES_fields_::LINKCH,
    ftl::mmio::Reserved<1, 14>,
    TCD_CITER_ELINKYES_fields_::ELINK> {
  static_assert(ClusterIndex < 32u, "TCD_CITER_ELINKYES: ClusterIndex out of range");
  using eELINK = TCD_CITER_ELINKYES_fields_::eELINK;
  using CITER = TCD_CITER_ELINKYES_fields_::CITER;
  using LINKCH = TCD_CITER_ELINKYES_fields_::LINKCH;
  using ELINK = TCD_CITER_ELINKYES_fields_::ELINK;
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
struct TCD_BITER_ELINKNO_fields_ {
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
};  // struct TCD_BITER_ELINKNO_fields_

template<std::uint32_t ClusterIndex>
struct TCD_BITER_ELINKNO : ftl::mmio::Register<
    0x4007101Eu + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_BITER_ELINKNO_fields_::BITER,
    TCD_BITER_ELINKNO_fields_::ELINK> {
  static_assert(ClusterIndex < 32u, "TCD_BITER_ELINKNO: ClusterIndex out of range");
  using eELINK = TCD_BITER_ELINKNO_fields_::eELINK;
  using BITER = TCD_BITER_ELINKNO_fields_::BITER;
  using ELINK = TCD_BITER_ELINKNO_fields_::ELINK;
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
struct TCD_BITER_ELINKYES_fields_ {
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
};  // struct TCD_BITER_ELINKYES_fields_

template<std::uint32_t ClusterIndex>
struct TCD_BITER_ELINKYES : ftl::mmio::Register<
    0x4007101Eu + (ClusterIndex * 0x20u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    TCD_BITER_ELINKYES_fields_::BITER,
    TCD_BITER_ELINKYES_fields_::LINKCH,
    ftl::mmio::Reserved<1, 14>,
    TCD_BITER_ELINKYES_fields_::ELINK> {
  static_assert(ClusterIndex < 32u, "TCD_BITER_ELINKYES: ClusterIndex out of range");
  using eELINK = TCD_BITER_ELINKYES_fields_::eELINK;
  using BITER = TCD_BITER_ELINKYES_fields_::BITER;
  using LINKCH = TCD_BITER_ELINKYES_fields_::LINKCH;
  using ELINK = TCD_BITER_ELINKYES_fields_::ELINK;
};

}  // namespace regs::dma0