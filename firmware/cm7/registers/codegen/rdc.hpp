#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// RDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::rdc {


// Version Information
struct RDC_VIR_fields_ {
  // Number of Domains
  using NDID = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of Masters
  using NMSTR = ftl::mmio::Field<8, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of Peripherals
  using NPER = ftl::mmio::Field<8, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of Memory Regions
  using NRGN = ftl::mmio::Field<8, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RDC_VIR_fields_

struct RDC_VIR : ftl::mmio::Register<
    0x40C78000u,
    std::uint32_t,
    0x03B800C2u,
    ftl::mmio::RO,
    RDC_VIR_fields_::NDID,
    RDC_VIR_fields_::NMSTR,
    RDC_VIR_fields_::NPER,
    RDC_VIR_fields_::NRGN,
    ftl::mmio::Reserved<4, 28>> {
  using NDID = RDC_VIR_fields_::NDID;
  using NMSTR = RDC_VIR_fields_::NMSTR;
  using NPER = RDC_VIR_fields_::NPER;
  using NRGN = RDC_VIR_fields_::NRGN;
};


// Status
struct RDC_STAT_fields_ {

  enum class ePDS : std::uint32_t {
    // Power Down Domain is OFF
    ePDS_0 = 0,
    // Power Down Domain is ON
    ePDS_1 = 1,
  };
  // Domain ID
  using DID = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Power Domain Status
  using PDS = ftl::mmio::Field<1, 8, ePDS, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDC_STAT_fields_

struct RDC_STAT : ftl::mmio::Register<
    0x40C78024u,
    std::uint32_t,
    0x00000100u,
    ftl::mmio::RW,
    RDC_STAT_fields_::DID,
    ftl::mmio::Reserved<4, 4>,
    RDC_STAT_fields_::PDS,
    ftl::mmio::Reserved<23, 9>> {
  using ePDS = RDC_STAT_fields_::ePDS;
  using DID = RDC_STAT_fields_::DID;
  using PDS = RDC_STAT_fields_::PDS;
};


// Interrupt and Control
struct RDC_INTCTRL_fields_ {

  enum class eRCI_EN : std::uint32_t {
    // Interrupt Disabled
    eRCI_EN_0 = 0,
    // Interrupt Enabled
    eRCI_EN_1 = 1,
  };
  // Restoration Complete Interrupt
  using RCI_EN = ftl::mmio::Field<1, 0, eRCI_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RDC_INTCTRL_fields_

struct RDC_INTCTRL : ftl::mmio::Register<
    0x40C78028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RDC_INTCTRL_fields_::RCI_EN,
    ftl::mmio::Reserved<31, 1>> {
  using eRCI_EN = RDC_INTCTRL_fields_::eRCI_EN;
  using RCI_EN = RDC_INTCTRL_fields_::RCI_EN;
};


// Interrupt Status
struct RDC_INTSTAT_fields_ {

  enum class eINT : std::uint32_t {
    // No Interrupt Pending
    eINT_0 = 0,
    // Interrupt Pending
    eINT_1 = 1,
  };
  // Interrupt Status
  using INT = ftl::mmio::Field<1, 0, eINT, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct RDC_INTSTAT_fields_

struct RDC_INTSTAT : ftl::mmio::Register<
    0x40C7802Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RDC_INTSTAT_fields_::INT,
    ftl::mmio::Reserved<31, 1>> {
  using eINT = RDC_INTSTAT_fields_::eINT;
  using INT = RDC_INTSTAT_fields_::INT;
};


// Master Domain Assignment
struct MDA_fields_ {

  enum class eDID : std::uint32_t {
    // Master assigned to Processing Domain 0
    eDID_0 = 0,
    // Master assigned to Processing Domain 1
    eDID_1 = 1,
  };

  enum class eLCK : std::uint32_t {
    // Not Locked
    eLCK_0 = 0,
    // Locked
    eLCK_1 = 1,
  };
  // Domain ID
  using DID = ftl::mmio::Field<2, 0, eDID, ftl::mmio::RW, ftl::mmio::Normal>;
  // Assignment Lock
  using LCK = ftl::mmio::Field<1, 31, eLCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MDA_fields_

template<std::uint32_t Index>
struct MDA : ftl::mmio::Register<
    0x40C78200u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MDA_fields_::DID,
    ftl::mmio::Reserved<29, 2>,
    MDA_fields_::LCK> {
  static_assert(Index < 12u, "MDA: Index out of range");
  using eDID = MDA_fields_::eDID;
  using eLCK = MDA_fields_::eLCK;
  using DID = MDA_fields_::DID;
  using LCK = MDA_fields_::LCK;
};


// Peripheral Domain Access Permissions
struct PDAP_fields_ {

  enum class eD0W : std::uint32_t {
    // No Write Access
    eD0W_0 = 0,
    // Write Access Allowed
    eD0W_1 = 1,
  };

  enum class eD0R : std::uint32_t {
    // No Read Access
    eD0R_0 = 0,
    // Read Access Allowed
    eD0R_1 = 1,
  };

  enum class eD1W : std::uint32_t {
    // No Write Access
    eD1W_0 = 0,
    // Write Access Allowed
    eD1W_1 = 1,
  };

  enum class eD1R : std::uint32_t {
    // No Read Access
    eD1R_0 = 0,
    // Read Access Allowed
    eD1R_1 = 1,
  };

  enum class eSREQ : std::uint32_t {
    // Semaphores have no effect
    eSREQ_0 = 0,
    // Semaphores are enforced
    eSREQ_1 = 1,
  };

  enum class eLCK : std::uint32_t {
    // Not Locked
    eLCK_0 = 0,
    // Locked
    eLCK_1 = 1,
  };
  // Domain 0 Write Access
  using D0W = ftl::mmio::Field<1, 0, eD0W, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain 0 Read Access
  using D0R = ftl::mmio::Field<1, 1, eD0R, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain 1 Write Access
  using D1W = ftl::mmio::Field<1, 2, eD1W, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain 1 Read Access
  using D1R = ftl::mmio::Field<1, 3, eD1R, ftl::mmio::RW, ftl::mmio::Normal>;
  // Semaphore Required
  using SREQ = ftl::mmio::Field<1, 30, eSREQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Peripheral Permissions Lock
  using LCK = ftl::mmio::Field<1, 31, eLCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PDAP_fields_

template<std::uint32_t Index>
struct PDAP : ftl::mmio::Register<
    0x40C78400u + (Index * 0x4u),
    std::uint32_t,
    0x0000000Fu,
    ftl::mmio::RW,
    PDAP_fields_::D0W,
    PDAP_fields_::D0R,
    PDAP_fields_::D1W,
    PDAP_fields_::D1R,
    ftl::mmio::Reserved<26, 4>,
    PDAP_fields_::SREQ,
    PDAP_fields_::LCK> {
  static_assert(Index < 128u, "PDAP: Index out of range");
  using eD0W = PDAP_fields_::eD0W;
  using eD0R = PDAP_fields_::eD0R;
  using eD1W = PDAP_fields_::eD1W;
  using eD1R = PDAP_fields_::eD1R;
  using eSREQ = PDAP_fields_::eSREQ;
  using eLCK = PDAP_fields_::eLCK;
  using D0W = PDAP_fields_::D0W;
  using D0R = PDAP_fields_::D0R;
  using D1W = PDAP_fields_::D1W;
  using D1R = PDAP_fields_::D1R;
  using SREQ = PDAP_fields_::SREQ;
  using LCK = PDAP_fields_::LCK;
};


// Memory Region Start Address
struct MRSA_fields_ {
  // Start address for memory region
  using SADR = ftl::mmio::Field<25, 7, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MRSA_fields_

template<std::uint32_t Index>
struct MRSA : ftl::mmio::Register<
    0x40C78800u + (Index * 0x10u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<7, 0>,
    MRSA_fields_::SADR> {
  static_assert(Index < 59u, "MRSA: Index out of range");
  using SADR = MRSA_fields_::SADR;
};


// Memory Region End Address
struct MREA_fields_ {
  // Upper bound for memory region
  using EADR = ftl::mmio::Field<25, 7, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MREA_fields_

template<std::uint32_t Index>
struct MREA : ftl::mmio::Register<
    0x40C78804u + (Index * 0x10u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<7, 0>,
    MREA_fields_::EADR> {
  static_assert(Index < 59u, "MREA: Index out of range");
  using EADR = MREA_fields_::EADR;
};


// Memory Region Control
struct MRC_fields_ {

  enum class eD0W : std::uint32_t {
    // Processing Domain 0 does not have Write access to the memory region
    eD0W_0 = 0,
    // Processing Domain 0 has Write access to the memory region
    eD0W_1 = 1,
  };

  enum class eD0R : std::uint32_t {
    // Processing Domain 0 does not have Read access to the memory region
    eD0R_0 = 0,
    // Processing Domain 0 has Read access to the memory region
    eD0R_1 = 1,
  };

  enum class eD1W : std::uint32_t {
    // Processing Domain 1 does not have Write access to the memory region
    eD1W_0 = 0,
    // Processing Domain 1 has Write access to the memory region
    eD1W_1 = 1,
  };

  enum class eD1R : std::uint32_t {
    // Processing Domain 1 does not have Read access to the memory region
    eD1R_0 = 0,
    // Processing Domain 1 has Read access to the memory region
    eD1R_1 = 1,
  };

  enum class eENA : std::uint32_t {
    // Memory region is not defined or restricted.
    eENA_0 = 0,
    // Memory boundaries, domain permissions and controls are in effect.
    eENA_1 = 1,
  };

  enum class eLCK : std::uint32_t {
    // No Lock. All fields in this register may be modified.
    eLCK_0 = 0,
    // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
    eLCK_1 = 1,
  };
  // Domain 0 Write Access to Region
  using D0W = ftl::mmio::Field<1, 0, eD0W, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain 0 Read Access to Region
  using D0R = ftl::mmio::Field<1, 1, eD0R, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain 1 Write Access to Region
  using D1W = ftl::mmio::Field<1, 2, eD1W, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain 1 Read Access to Region
  using D1R = ftl::mmio::Field<1, 3, eD1R, ftl::mmio::RW, ftl::mmio::Normal>;
  // Region Enable
  using ENA = ftl::mmio::Field<1, 30, eENA, ftl::mmio::RW, ftl::mmio::Normal>;
  // Region Lock
  using LCK = ftl::mmio::Field<1, 31, eLCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MRC_fields_

template<std::uint32_t Index>
struct MRC : ftl::mmio::Register<
    0x40C78808u + (Index * 0x10u),
    std::uint32_t,
    0x000000FFu,
    ftl::mmio::RW,
    MRC_fields_::D0W,
    MRC_fields_::D0R,
    MRC_fields_::D1W,
    MRC_fields_::D1R,
    ftl::mmio::Reserved<26, 4>,
    MRC_fields_::ENA,
    MRC_fields_::LCK> {
  static_assert(Index < 59u, "MRC: Index out of range");
  using eD0W = MRC_fields_::eD0W;
  using eD0R = MRC_fields_::eD0R;
  using eD1W = MRC_fields_::eD1W;
  using eD1R = MRC_fields_::eD1R;
  using eENA = MRC_fields_::eENA;
  using eLCK = MRC_fields_::eLCK;
  using D0W = MRC_fields_::D0W;
  using D0R = MRC_fields_::D0R;
  using D1W = MRC_fields_::D1W;
  using D1R = MRC_fields_::D1R;
  using ENA = MRC_fields_::ENA;
  using LCK = MRC_fields_::LCK;
};


// Memory Region Violation Status
struct MRVS_fields_ {

  enum class eVDID : std::uint32_t {
    // Processing Domain 0
    eVDID_0 = 0,
    // Processing Domain 1
    eVDID_1 = 1,
  };
  // Violating Domain ID
  using VDID = ftl::mmio::Field<2, 0, eVDID, ftl::mmio::RO, ftl::mmio::Normal>;
  // Access Denied
  using AD = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Violating Address
  using VADR = ftl::mmio::Field<27, 5, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct MRVS_fields_

template<std::uint32_t Index>
struct MRVS : ftl::mmio::Register<
    0x40C7880Cu + (Index * 0x10u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MRVS_fields_::VDID,
    ftl::mmio::Reserved<2, 2>,
    MRVS_fields_::AD,
    MRVS_fields_::VADR> {
  static_assert(Index < 59u, "MRVS: Index out of range");
  using eVDID = MRVS_fields_::eVDID;
  using VDID = MRVS_fields_::VDID;
  using AD = MRVS_fields_::AD;
  using VADR = MRVS_fields_::VADR;
};

}  // namespace regs::rdc