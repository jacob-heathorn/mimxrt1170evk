#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// RDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Rdc {
  // Version Information
  struct RdcVirFields {
    // Number of Domains
    using NDID = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of Masters
    using NMSTR = ftl::mmio::Field<8, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of Peripherals
    using NPER = ftl::mmio::Field<8, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of Memory Regions
    using NRGN = ftl::mmio::Field<8, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RdcVirFields

  struct RDC_VIR : ftl::mmio::Register<
      0x40C78000u,
      std::uint32_t,
      0x03B800C2u,
      ftl::mmio::RO,
      RdcVirFields::NDID,
      RdcVirFields::NMSTR,
      RdcVirFields::NPER,
      RdcVirFields::NRGN,
      ftl::mmio::Reserved<4, 28>> {
    using NDID = RdcVirFields::NDID;
    using NMSTR = RdcVirFields::NMSTR;
    using NPER = RdcVirFields::NPER;
    using NRGN = RdcVirFields::NRGN;
  };

  // Status
  struct RdcStatFields {
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
  };  // struct RdcStatFields

  struct RDC_STAT : ftl::mmio::Register<
      0x40C78024u,
      std::uint32_t,
      0x00000100u,
      ftl::mmio::RW,
      RdcStatFields::DID,
      ftl::mmio::Reserved<4, 4>,
      RdcStatFields::PDS,
      ftl::mmio::Reserved<23, 9>> {
    using ePDS = RdcStatFields::ePDS;
    using DID = RdcStatFields::DID;
    using PDS = RdcStatFields::PDS;
  };

  // Interrupt and Control
  struct RdcIntctrlFields {
    enum class eRCI_EN : std::uint32_t {
      // Interrupt Disabled
      eRCI_EN_0 = 0,
      // Interrupt Enabled
      eRCI_EN_1 = 1,
    };

    // Restoration Complete Interrupt
    using RCI_EN = ftl::mmio::Field<1, 0, eRCI_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RdcIntctrlFields

  struct RDC_INTCTRL : ftl::mmio::Register<
      0x40C78028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RdcIntctrlFields::RCI_EN,
      ftl::mmio::Reserved<31, 1>> {
    using eRCI_EN = RdcIntctrlFields::eRCI_EN;
    using RCI_EN = RdcIntctrlFields::RCI_EN;
  };

  // Interrupt Status
  struct RdcIntstatFields {
    enum class eINT : std::uint32_t {
      // No Interrupt Pending
      eINT_0 = 0,
      // Interrupt Pending
      eINT_1 = 1,
    };

    // Interrupt Status
    using INT = ftl::mmio::Field<1, 0, eINT, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct RdcIntstatFields

  struct RDC_INTSTAT : ftl::mmio::Register<
      0x40C7802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RdcIntstatFields::INT,
      ftl::mmio::Reserved<31, 1>> {
    using eINT = RdcIntstatFields::eINT;
    using INT = RdcIntstatFields::INT;
  };

  // Master Domain Assignment
  struct MdaFields {
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
  };  // struct MdaFields

  template<std::uint32_t Index>
  struct MDA : ftl::mmio::Register<
      0x40C78200u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MdaFields::DID,
      ftl::mmio::Reserved<29, 2>,
      MdaFields::LCK> {
    static_assert(Index < 12u, "MDA: Index out of range");
    using eDID = MdaFields::eDID;
    using eLCK = MdaFields::eLCK;
    using DID = MdaFields::DID;
    using LCK = MdaFields::LCK;
  };

  // Peripheral Domain Access Permissions
  struct PdapFields {
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
  };  // struct PdapFields

  template<std::uint32_t Index>
  struct PDAP : ftl::mmio::Register<
      0x40C78400u + (Index * 0x4u),
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      PdapFields::D0W,
      PdapFields::D0R,
      PdapFields::D1W,
      PdapFields::D1R,
      ftl::mmio::Reserved<26, 4>,
      PdapFields::SREQ,
      PdapFields::LCK> {
    static_assert(Index < 128u, "PDAP: Index out of range");
    using eD0W = PdapFields::eD0W;
    using eD0R = PdapFields::eD0R;
    using eD1W = PdapFields::eD1W;
    using eD1R = PdapFields::eD1R;
    using eSREQ = PdapFields::eSREQ;
    using eLCK = PdapFields::eLCK;
    using D0W = PdapFields::D0W;
    using D0R = PdapFields::D0R;
    using D1W = PdapFields::D1W;
    using D1R = PdapFields::D1R;
    using SREQ = PdapFields::SREQ;
    using LCK = PdapFields::LCK;
  };

  // Memory Region Start Address
  struct MrsaFields {
    // Start address for memory region
    using SADR = ftl::mmio::Field<25, 7, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MrsaFields

  template<std::uint32_t Index>
  struct MRSA : ftl::mmio::Register<
      0x40C78800u + (Index * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      MrsaFields::SADR> {
    static_assert(Index < 59u, "MRSA: Index out of range");
    using SADR = MrsaFields::SADR;
  };

  // Memory Region End Address
  struct MreaFields {
    // Upper bound for memory region
    using EADR = ftl::mmio::Field<25, 7, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MreaFields

  template<std::uint32_t Index>
  struct MREA : ftl::mmio::Register<
      0x40C78804u + (Index * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      MreaFields::EADR> {
    static_assert(Index < 59u, "MREA: Index out of range");
    using EADR = MreaFields::EADR;
  };

  // Memory Region Control
  struct MrcFields {
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
  };  // struct MrcFields

  template<std::uint32_t Index>
  struct MRC : ftl::mmio::Register<
      0x40C78808u + (Index * 0x10u),
      std::uint32_t,
      0x000000FFu,
      ftl::mmio::RW,
      MrcFields::D0W,
      MrcFields::D0R,
      MrcFields::D1W,
      MrcFields::D1R,
      ftl::mmio::Reserved<26, 4>,
      MrcFields::ENA,
      MrcFields::LCK> {
    static_assert(Index < 59u, "MRC: Index out of range");
    using eD0W = MrcFields::eD0W;
    using eD0R = MrcFields::eD0R;
    using eD1W = MrcFields::eD1W;
    using eD1R = MrcFields::eD1R;
    using eENA = MrcFields::eENA;
    using eLCK = MrcFields::eLCK;
    using D0W = MrcFields::D0W;
    using D0R = MrcFields::D0R;
    using D1W = MrcFields::D1W;
    using D1R = MrcFields::D1R;
    using ENA = MrcFields::ENA;
    using LCK = MrcFields::LCK;
  };

  // Memory Region Violation Status
  struct MrvsFields {
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
  };  // struct MrvsFields

  template<std::uint32_t Index>
  struct MRVS : ftl::mmio::Register<
      0x40C7880Cu + (Index * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MrvsFields::VDID,
      ftl::mmio::Reserved<2, 2>,
      MrvsFields::AD,
      MrvsFields::VADR> {
    static_assert(Index < 59u, "MRVS: Index out of range");
    using eVDID = MrvsFields::eVDID;
    using VDID = MrvsFields::VDID;
    using AD = MrvsFields::AD;
    using VADR = MrvsFields::VADR;
  };

};

}  // namespace regs