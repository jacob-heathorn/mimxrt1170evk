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
  struct CR_fields_ {
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
  };  // struct CR_fields_

  struct CR : ftl::mmio::Register<
      kBase + 0xC00u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename CR_fields_::FERR,
      ftl::mmio::Reserved<1, 2>,
      typename CR_fields_::FLDM,
      typename CR_fields_::KBSE,
      typename CR_fields_::KBPE,
      ftl::mmio::Reserved<1, 6>,
      typename CR_fields_::RRAE,
      ftl::mmio::Reserved<22, 8>,
      typename CR_fields_::SKBP,
      typename CR_fields_::GE> {
    using eFERR = typename CR_fields_::eFERR;
    using eFLDM = typename CR_fields_::eFLDM;
    using eKBSE = typename CR_fields_::eKBSE;
    using eKBPE = typename CR_fields_::eKBPE;
    using eRRAE = typename CR_fields_::eRRAE;
    using eSKBP = typename CR_fields_::eSKBP;
    using eGE = typename CR_fields_::eGE;
    using FERR = typename CR_fields_::FERR;
    using FLDM = typename CR_fields_::FLDM;
    using KBSE = typename CR_fields_::KBSE;
    using KBPE = typename CR_fields_::KBPE;
    using RRAE = typename CR_fields_::RRAE;
    using SKBP = typename CR_fields_::SKBP;
    using GE = typename CR_fields_::GE;
  };

  // Status Register
  struct SR_fields_ {
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
  };  // struct SR_fields_

  struct SR : ftl::mmio::Register<
      kBase + 0xC04u,
      std::uint32_t,
      0x00000040u,
      ftl::mmio::RW,
      typename SR_fields_::KBERR,
      typename SR_fields_::MDPCP,
      typename SR_fields_::MODE,
      typename SR_fields_::NCTX,
      typename SR_fields_::CTXER0,
      typename SR_fields_::CTXER1,
      typename SR_fields_::CTXER2,
      typename SR_fields_::CTXER3,
      ftl::mmio::Reserved<4, 12>,
      typename SR_fields_::CTXIE0,
      typename SR_fields_::CTXIE1,
      typename SR_fields_::CTXIE2,
      typename SR_fields_::CTXIE3,
      ftl::mmio::Reserved<4, 20>,
      typename SR_fields_::HRL,
      typename SR_fields_::RRAM,
      typename SR_fields_::GEM,
      typename SR_fields_::KBPE,
      typename SR_fields_::KBD> {
    using eKBERR = typename SR_fields_::eKBERR;
    using eMODE = typename SR_fields_::eMODE;
    using eCTXER0 = typename SR_fields_::eCTXER0;
    using eCTXER1 = typename SR_fields_::eCTXER1;
    using eCTXER2 = typename SR_fields_::eCTXER2;
    using eCTXER3 = typename SR_fields_::eCTXER3;
    using eCTXIE0 = typename SR_fields_::eCTXIE0;
    using eCTXIE1 = typename SR_fields_::eCTXIE1;
    using eCTXIE2 = typename SR_fields_::eCTXIE2;
    using eCTXIE3 = typename SR_fields_::eCTXIE3;
    using eRRAM = typename SR_fields_::eRRAM;
    using eGEM = typename SR_fields_::eGEM;
    using eKBPE = typename SR_fields_::eKBPE;
    using eKBD = typename SR_fields_::eKBD;
    using KBERR = typename SR_fields_::KBERR;
    using MDPCP = typename SR_fields_::MDPCP;
    using MODE = typename SR_fields_::MODE;
    using NCTX = typename SR_fields_::NCTX;
    using CTXER0 = typename SR_fields_::CTXER0;
    using CTXER1 = typename SR_fields_::CTXER1;
    using CTXER2 = typename SR_fields_::CTXER2;
    using CTXER3 = typename SR_fields_::CTXER3;
    using CTXIE0 = typename SR_fields_::CTXIE0;
    using CTXIE1 = typename SR_fields_::CTXIE1;
    using CTXIE2 = typename SR_fields_::CTXIE2;
    using CTXIE3 = typename SR_fields_::CTXIE3;
    using HRL = typename SR_fields_::HRL;
    using RRAM = typename SR_fields_::RRAM;
    using GEM = typename SR_fields_::GEM;
    using KBPE = typename SR_fields_::KBPE;
    using KBD = typename SR_fields_::KBD;
  };

  // AES Key Word
  struct CTX_KEY_fields_ {
    // AES Key
    using KEY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTX_KEY_fields_

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct CTX_KEY : ftl::mmio::Register<
      kBase + 0xD00u + (ClusterIndex * 0x40u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CTX_KEY_fields_::KEY> {
    static_assert(ClusterIndex < 4u, "CTX_KEY: ClusterIndex out of range");
    static_assert(ArrayIndex < 4u, "CTX_KEY: ArrayIndex out of range");
    using KEY = typename CTX_KEY_fields_::KEY;
  };

  // AES Counter Word
  struct CTX_CTR_fields_ {
    // AES Counter
    using CTR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTX_CTR_fields_

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct CTX_CTR : ftl::mmio::Register<
      kBase + 0xD10u + (ClusterIndex * 0x40u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CTX_CTR_fields_::CTR> {
    static_assert(ClusterIndex < 4u, "CTX_CTR: ClusterIndex out of range");
    static_assert(ArrayIndex < 2u, "CTX_CTR: ArrayIndex out of range");
    using CTR = typename CTX_CTR_fields_::CTR;
  };

  // AES Region Descriptor Word0
  struct CTX_RGD_W0_fields_ {
    // Start Address
    using SRTADDR = ftl::mmio::Field<22, 10, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTX_RGD_W0_fields_

  template<std::uint32_t ClusterIndex>
  struct CTX_RGD_W0 : ftl::mmio::Register<
      kBase + 0xD18u + (ClusterIndex * 0x40u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename CTX_RGD_W0_fields_::SRTADDR> {
    static_assert(ClusterIndex < 4u, "CTX_RGD_W0: ClusterIndex out of range");
    using SRTADDR = typename CTX_RGD_W0_fields_::SRTADDR;
  };

  // AES Region Descriptor Word1
  struct CTX_RGD_W1_fields_ {
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
  };  // struct CTX_RGD_W1_fields_

  template<std::uint32_t ClusterIndex>
  struct CTX_RGD_W1 : ftl::mmio::Register<
      kBase + 0xD1Cu + (ClusterIndex * 0x40u),
      std::uint32_t,
      0x000003F8u,
      ftl::mmio::RW,
      typename CTX_RGD_W1_fields_::VLD,
      typename CTX_RGD_W1_fields_::ADE,
      typename CTX_RGD_W1_fields_::RO,
      ftl::mmio::Reserved<7, 3>,
      typename CTX_RGD_W1_fields_::ENDADDR> {
    static_assert(ClusterIndex < 4u, "CTX_RGD_W1: ClusterIndex out of range");
    using eVLD = typename CTX_RGD_W1_fields_::eVLD;
    using eADE = typename CTX_RGD_W1_fields_::eADE;
    using eRO = typename CTX_RGD_W1_fields_::eRO;
    using VLD = typename CTX_RGD_W1_fields_::VLD;
    using ADE = typename CTX_RGD_W1_fields_::ADE;
    using RO = typename CTX_RGD_W1_fields_::RO;
    using ENDADDR = typename CTX_RGD_W1_fields_::ENDADDR;
  };

};

}  // namespace regs