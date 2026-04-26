#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// OTFAD
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Otfad {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Otfad: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x400CC000u :
      Instance == 2u ? 0x400D0000u :
      0u;

  // Control Register
  struct CrFields {
    enum class eFERR : std::uint32_t {
      // No effect on the SR[KBERE] indicator.
      eNO_EFFECT = 0,
      // SR[KBERR] is immediately set after a write with this data bit set.
      eFORCE_ERROR = 1,
    };

    enum class eFLDM : std::uint32_t {
      // No effect on the operating mode.
      eNO_EFFECT = 0,
      // Force entry into LDM after a write with this data bit set. SR[MODE] signals the operating mode.
      eFORCE_LDM = 1,
    };

    enum class eKBSE : std::uint32_t {
      // Key blob KEK scrambling is disabled.
      eDISABLE = 0,
      // Key blob KEK scrambling is enabled.
      eENABLE = 1,
    };

    enum class eKBPE : std::uint32_t {
      // Key blob processing is disabled.
      eDISABLE = 0,
      // Key blob processing is enabled.
      eENABLE = 1,
    };

    enum class eRRAE : std::uint32_t {
      // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
      eNORMAL = 0,
      // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
      eRESTRICT = 1,
    };

    enum class eSKBP : std::uint32_t {
      // Key blob processing is not initiated.
      eNO_EFFECT = 0,
      // Properly-enabled key blob processing is initiated.
      eINIT_KB = 1,
    };

    enum class eGE : std::uint32_t {
      // OTFAD has decryption disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
      eDISABLE = 0,
      // OTFAD has decryption enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
      eENABLE = 1,
    };

    // Force Error
    using FERR = ftl::mmio::Field<1, 1, eFERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Logically Disabled Mode
    using FLDM = ftl::mmio::Field<1, 3, eFLDM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Key Blob Scramble Enable
    using KBSE = ftl::mmio::Field<1, 4, eKBSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Key Blob Processing Enable
    using KBPE = ftl::mmio::Field<1, 5, eKBPE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restricted Register Access Enable
    using RRAE = ftl::mmio::Field<1, 7, eRRAE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Start key blob processing
    using SKBP = ftl::mmio::Field<1, 30, eSKBP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Global OTFAD Enable
    using GE = ftl::mmio::Field<1, 31, eGE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CrFields

  struct CR : ftl::mmio::Register<
      kBase + 0xC00u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename CrFields::FERR,
      ftl::mmio::Reserved<1, 2>,
      typename CrFields::FLDM,
      typename CrFields::KBSE,
      typename CrFields::KBPE,
      ftl::mmio::Reserved<1, 6>,
      typename CrFields::RRAE,
      ftl::mmio::Reserved<22, 8>,
      typename CrFields::SKBP,
      typename CrFields::GE> {
    using eFERR = typename CrFields::eFERR;
    using eFLDM = typename CrFields::eFLDM;
    using eKBSE = typename CrFields::eKBSE;
    using eKBPE = typename CrFields::eKBPE;
    using eRRAE = typename CrFields::eRRAE;
    using eSKBP = typename CrFields::eSKBP;
    using eGE = typename CrFields::eGE;
    using FERR = typename CrFields::FERR;
    using FLDM = typename CrFields::FLDM;
    using KBSE = typename CrFields::KBSE;
    using KBPE = typename CrFields::KBPE;
    using RRAE = typename CrFields::RRAE;
    using SKBP = typename CrFields::SKBP;
    using GE = typename CrFields::GE;
  };

  // Status Register
  struct SrFields {
    enum class eKBERR : std::uint32_t {
      // No key blob error detected.
      eNO_KB_ERR = 0,
      // One or more key blob errors has been detected.
      eKB_ERR = 1,
    };

    enum class eMODE : std::uint32_t {
      // Operating in Normal mode (NRM)
      eNORMAL = 0,
      // Unused (reserved)
      eRES_01 = 1,
      // Unused (reserved)
      eRES_10_SVM = 2,
      // Operating in Logically Disabled Mode (LDM)
      eLDM = 3,
    };

    enum class eCTXER0 : std::uint32_t {
      // No key blob error was detected for context "n".
      eNOERROR = 0,
      // A key blob integrity error might have been detected in context "n".
      eERROR = 1,
    };

    enum class eCTXER1 : std::uint32_t {
      // No key blob error was detected for context "n".
      eNOERROR = 0,
      // A key blob integrity error might have been detected in context "n".
      eERROR = 1,
    };

    enum class eCTXER2 : std::uint32_t {
      // No key blob error was detected for context "n".
      eNOERROR = 0,
      // A key blob integrity error might have been detected in context "n".
      eERROR = 1,
    };

    enum class eCTXER3 : std::uint32_t {
      // No key blob error was detected for context "n".
      eNOERROR = 0,
      // A key blob integrity error might have been detected in context "n".
      eERROR = 1,
    };

    enum class eCTXIE0 : std::uint32_t {
      // No key blob integrity error was detected for context "n".
      eNOINTEGRITYERR = 0,
      // A key blob integrity error was detected in context "n".
      eINTEGRITYERR = 1,
    };

    enum class eCTXIE1 : std::uint32_t {
      // No key blob integrity error was detected for context "n".
      eNOINTEGRITYERR = 0,
      // A key blob integrity error was detected in context "n".
      eINTEGRITYERR = 1,
    };

    enum class eCTXIE2 : std::uint32_t {
      // No key blob integrity error was detected for context "n".
      eNOINTEGRITYERR = 0,
      // A key blob integrity error was detected in context "n".
      eINTEGRITYERR = 1,
    };

    enum class eCTXIE3 : std::uint32_t {
      // No key blob integrity error was detected for context "n".
      eNOINTEGRITYERR = 0,
      // A key blob integrity error was detected in context "n".
      eINTEGRITYERR = 1,
    };

    enum class eRRAM : std::uint32_t {
      // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
      eNORMAL = 0,
      // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
      eRESTRICTED = 1,
    };

    enum class eGEM : std::uint32_t {
      // OTFAD is disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
      eDISABLED = 0,
      // OTFAD is enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
      eENABLED = 1,
    };

    enum class eKBPE : std::uint32_t {
      // Key blob processing is not enabled.
      eDISABLED = 0,
      // Key blob processing is enabled.
      eENABLED = 1,
    };

    enum class eKBD : std::uint32_t {
      // Key blob processing was not enabled, or is not complete.
      eNOT_DONE = 0,
      // Key blob processing was enabled and is complete.
      eDONE = 1,
    };

    // Key Blob Error
    using KBERR = ftl::mmio::Field<1, 0, eKBERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // MDPC Present
    using MDPCP = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Operating Mode
    using MODE = ftl::mmio::Field<2, 2, eMODE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of Contexts
    using NCTX = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Error
    using CTXER0 = ftl::mmio::Field<1, 8, eCTXER0, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Error
    using CTXER1 = ftl::mmio::Field<1, 9, eCTXER1, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Error
    using CTXER2 = ftl::mmio::Field<1, 10, eCTXER2, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Error
    using CTXER3 = ftl::mmio::Field<1, 11, eCTXER3, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Integrity Error
    using CTXIE0 = ftl::mmio::Field<1, 16, eCTXIE0, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Integrity Error
    using CTXIE1 = ftl::mmio::Field<1, 17, eCTXIE1, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Integrity Error
    using CTXIE2 = ftl::mmio::Field<1, 18, eCTXIE2, ftl::mmio::RO, ftl::mmio::Normal>;
    // Context Integrity Error
    using CTXIE3 = ftl::mmio::Field<1, 19, eCTXIE3, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Revision Level
    using HRL = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Restricted Register Access Mode
    using RRAM = ftl::mmio::Field<1, 28, eRRAM, ftl::mmio::RO, ftl::mmio::Normal>;
    // Global Enable Mode
    using GEM = ftl::mmio::Field<1, 29, eGEM, ftl::mmio::RO, ftl::mmio::Normal>;
    // Key Blob Processing Enable
    using KBPE = ftl::mmio::Field<1, 30, eKBPE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Key Blob Processing Done
    using KBD = ftl::mmio::Field<1, 31, eKBD, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrFields

  struct SR : ftl::mmio::Register<
      kBase + 0xC04u,
      std::uint32_t,
      0x00000040u,
      ftl::mmio::RW,
      typename SrFields::KBERR,
      typename SrFields::MDPCP,
      typename SrFields::MODE,
      typename SrFields::NCTX,
      typename SrFields::CTXER0,
      typename SrFields::CTXER1,
      typename SrFields::CTXER2,
      typename SrFields::CTXER3,
      ftl::mmio::Reserved<4, 12>,
      typename SrFields::CTXIE0,
      typename SrFields::CTXIE1,
      typename SrFields::CTXIE2,
      typename SrFields::CTXIE3,
      ftl::mmio::Reserved<4, 20>,
      typename SrFields::HRL,
      typename SrFields::RRAM,
      typename SrFields::GEM,
      typename SrFields::KBPE,
      typename SrFields::KBD> {
    using eKBERR = typename SrFields::eKBERR;
    using eMODE = typename SrFields::eMODE;
    using eCTXER0 = typename SrFields::eCTXER0;
    using eCTXER1 = typename SrFields::eCTXER1;
    using eCTXER2 = typename SrFields::eCTXER2;
    using eCTXER3 = typename SrFields::eCTXER3;
    using eCTXIE0 = typename SrFields::eCTXIE0;
    using eCTXIE1 = typename SrFields::eCTXIE1;
    using eCTXIE2 = typename SrFields::eCTXIE2;
    using eCTXIE3 = typename SrFields::eCTXIE3;
    using eRRAM = typename SrFields::eRRAM;
    using eGEM = typename SrFields::eGEM;
    using eKBPE = typename SrFields::eKBPE;
    using eKBD = typename SrFields::eKBD;
    using KBERR = typename SrFields::KBERR;
    using MDPCP = typename SrFields::MDPCP;
    using MODE = typename SrFields::MODE;
    using NCTX = typename SrFields::NCTX;
    using CTXER0 = typename SrFields::CTXER0;
    using CTXER1 = typename SrFields::CTXER1;
    using CTXER2 = typename SrFields::CTXER2;
    using CTXER3 = typename SrFields::CTXER3;
    using CTXIE0 = typename SrFields::CTXIE0;
    using CTXIE1 = typename SrFields::CTXIE1;
    using CTXIE2 = typename SrFields::CTXIE2;
    using CTXIE3 = typename SrFields::CTXIE3;
    using HRL = typename SrFields::HRL;
    using RRAM = typename SrFields::RRAM;
    using GEM = typename SrFields::GEM;
    using KBPE = typename SrFields::KBPE;
    using KBD = typename SrFields::KBD;
  };

  // AES Key Word
  struct CtxKeyFields {
    // AES Key
    using KEY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtxKeyFields

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct CTX_KEY : ftl::mmio::Register<
      kBase + 0xD00u + (ClusterIndex * 0x40u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CtxKeyFields::KEY> {
    static_assert(ClusterIndex < 4u, "CTX_KEY: ClusterIndex out of range");
    static_assert(ArrayIndex < 4u, "CTX_KEY: ArrayIndex out of range");
    using KEY = typename CtxKeyFields::KEY;
  };

  // AES Counter Word
  struct CtxCtrFields {
    // AES Counter
    using CTR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtxCtrFields

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct CTX_CTR : ftl::mmio::Register<
      kBase + 0xD10u + (ClusterIndex * 0x40u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CtxCtrFields::CTR> {
    static_assert(ClusterIndex < 4u, "CTX_CTR: ClusterIndex out of range");
    static_assert(ArrayIndex < 2u, "CTX_CTR: ArrayIndex out of range");
    using CTR = typename CtxCtrFields::CTR;
  };

  // AES Region Descriptor Word0
  struct CtxRgdW0Fields {
    // Start Address
    using SRTADDR = ftl::mmio::Field<22, 10, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtxRgdW0Fields

  template<std::uint32_t ClusterIndex>
  struct CTX_RGD_W0 : ftl::mmio::Register<
      kBase + 0xD18u + (ClusterIndex * 0x40u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename CtxRgdW0Fields::SRTADDR> {
    static_assert(ClusterIndex < 4u, "CTX_RGD_W0: ClusterIndex out of range");
    using SRTADDR = typename CtxRgdW0Fields::SRTADDR;
  };

  // AES Region Descriptor Word1
  struct CtxRgdW1Fields {
    enum class eVLD : std::uint32_t {
      // Context is invalid.
      eNOT_VALID = 0,
      // Context is valid.
      eVALID = 1,
    };

    enum class eADE : std::uint32_t {
      // Bypass the fetched data.
      eBYPASS = 0,
      // Perform the CTR-AES128 mode decryption on the fetched data.
      eDECRYPT = 1,
    };

    enum class eRO : std::uint32_t {
      // The context registers can be accessed normally (as defined by SR[RRAM]).
      eNORMAL = 0,
      // The context registers are read-only and accesses may be further restricted based on SR[RRAM].
      eRESTRICT = 1,
    };

    // Valid
    using VLD = ftl::mmio::Field<1, 0, eVLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // AES Decryption Enable.
    using ADE = ftl::mmio::Field<1, 1, eADE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read-Only
    using RO = ftl::mmio::Field<1, 2, eRO, ftl::mmio::RW, ftl::mmio::Normal>;
    // End Address
    using ENDADDR = ftl::mmio::Field<22, 10, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtxRgdW1Fields

  template<std::uint32_t ClusterIndex>
  struct CTX_RGD_W1 : ftl::mmio::Register<
      kBase + 0xD1Cu + (ClusterIndex * 0x40u),
      std::uint32_t,
      0x000003F8u,
      ftl::mmio::RW,
      typename CtxRgdW1Fields::VLD,
      typename CtxRgdW1Fields::ADE,
      typename CtxRgdW1Fields::RO,
      ftl::mmio::Reserved<7, 3>,
      typename CtxRgdW1Fields::ENDADDR> {
    static_assert(ClusterIndex < 4u, "CTX_RGD_W1: ClusterIndex out of range");
    using eVLD = typename CtxRgdW1Fields::eVLD;
    using eADE = typename CtxRgdW1Fields::eADE;
    using eRO = typename CtxRgdW1Fields::eRO;
    using VLD = typename CtxRgdW1Fields::VLD;
    using ADE = typename CtxRgdW1Fields::ADE;
    using RO = typename CtxRgdW1Fields::RO;
    using ENDADDR = typename CtxRgdW1Fields::ENDADDR;
  };

};

}  // namespace regs