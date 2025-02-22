#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // OTFAD
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nOTFAD1 {


// Control Register
//
union CR {
  
  enum class eFERR : uint32_t {
    eFERR_0 = 0, // No effect on the SR[KBERE] indicator.
    eFERR_1 = 1, // SR[KBERR] is immediately set after a write with this data bit set.
  };
  
  enum class eFLDM : uint32_t {
    eFLDM_0 = 0, // No effect on the operating mode.
    eFLDM_1 = 1, // Force entry into LDM after a write with this data bit set. SR[MODE] signals the operating mode.
  };
  
  enum class eKBSE : uint32_t {
    eKBSE_0 = 0, // Key blob KEK scrambling is disabled.
    eKBSE_1 = 1, // Key blob KEK scrambling is enabled.
  };
  
  enum class eKBPE : uint32_t {
    eKBPE_0 = 0, // Key blob processing is disabled.
    eKBPE_1 = 1, // Key blob processing is enabled.
  };
  
  enum class eRRAE : uint32_t {
    eRRAE_0 = 0, // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
    eRRAE_1 = 1, // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
  };
  
  enum class eSKBP : uint32_t {
    eSKBP_0 = 0, // Key blob processing is not initiated.
    eSKBP_1 = 1, // Properly-enabled key blob processing is initiated.
  };
  
  enum class eGE : uint32_t {
    eGE_0 = 0, // OTFAD has decryption disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
    eGE_1 = 1, // OTFAD has decryption enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eFERR FERR : 1;
    uint32_t _reserved_1 : 1;
    eFLDM FLDM : 1;
    eKBSE KBSE : 1;
    eKBPE KBPE : 1;
    uint32_t _reserved_4 : 1;
    eRRAE RRAE : 1;
    uint32_t _reserved_5 : 22;
    eSKBP SKBP : 1;
    eGE GE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x400CCC00); }
};

// Status Register
//
union SR {
  
  enum class eKBERR : uint32_t {
    eKBERR_0 = 0, // No key blob error detected.
    eKBERR_1 = 1, // One or more key blob errors has been detected.
  };
  
  enum class eMODE : uint32_t {
    eMODE_0 = 0, // Operating in Normal mode (NRM)
    eMODE_1 = 1, // Unused (reserved)
    eMODE_2 = 2, // Unused (reserved)
    eMODE_3 = 3, // Operating in Logically Disabled Mode (LDM)
  };
  
  enum class eCTXER0 : uint32_t {
    eNOERROR = 0, // No key blob error was detected for context "n".
    eERROR = 1, // A key blob integrity error might have been detected in context "n".
  };
  
  enum class eCTXER1 : uint32_t {
    eNOERROR = 0, // No key blob error was detected for context "n".
    eERROR = 1, // A key blob integrity error might have been detected in context "n".
  };
  
  enum class eCTXER2 : uint32_t {
    eNOERROR = 0, // No key blob error was detected for context "n".
    eERROR = 1, // A key blob integrity error might have been detected in context "n".
  };
  
  enum class eCTXER3 : uint32_t {
    eNOERROR = 0, // No key blob error was detected for context "n".
    eERROR = 1, // A key blob integrity error might have been detected in context "n".
  };
  
  enum class eCTXIE0 : uint32_t {
    eNOINTEGRITYERR = 0, // No key blob integrity error was detected for context "n".
    eINTEGRITYERR = 1, // A key blob integrity error was detected in context "n".
  };
  
  enum class eCTXIE1 : uint32_t {
    eNOINTEGRITYERR = 0, // No key blob integrity error was detected for context "n".
    eINTEGRITYERR = 1, // A key blob integrity error was detected in context "n".
  };
  
  enum class eCTXIE2 : uint32_t {
    eNOINTEGRITYERR = 0, // No key blob integrity error was detected for context "n".
    eINTEGRITYERR = 1, // A key blob integrity error was detected in context "n".
  };
  
  enum class eCTXIE3 : uint32_t {
    eNOINTEGRITYERR = 0, // No key blob integrity error was detected for context "n".
    eINTEGRITYERR = 1, // A key blob integrity error was detected in context "n".
  };
  
  enum class eRRAM : uint32_t {
    eRRAM_0 = 0, // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
    eRRAM_1 = 1, // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
  };
  
  enum class eGEM : uint32_t {
    eGEM_0 = 0, // OTFAD is disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
    eGEM_1 = 1, // OTFAD is enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
  };
  
  enum class eKBPE : uint32_t {
    eKBPE_0 = 0, // Key blob processing is not enabled.
    eKBPE_1 = 1, // Key blob processing is enabled.
  };
  
  enum class eKBD : uint32_t {
    eKBD_0 = 0, // Key blob processing was not enabled, or is not complete.
    eKBD_1 = 1, // Key blob processing was enabled and is complete.
  };
  
  // Bit field definition.
  struct {
    eKBERR KBERR : 1;
    uint32_t MDPCP : 1;
    eMODE MODE : 2;
    uint32_t NCTX : 4;
    eCTXER0 CTXER0 : 1;
    eCTXER1 CTXER1 : 1;
    eCTXER2 CTXER2 : 1;
    eCTXER3 CTXER3 : 1;
    uint32_t _reserved_8 : 4;
    eCTXIE0 CTXIE0 : 1;
    eCTXIE1 CTXIE1 : 1;
    eCTXIE2 CTXIE2 : 1;
    eCTXIE3 CTXIE3 : 1;
    uint32_t _reserved_12 : 4;
    uint32_t HRL : 4;
    eRRAM RRAM : 1;
    eGEM GEM : 1;
    eKBPE KBPE : 1;
    eKBD KBD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00000040; }
  static inline volatile SR &Instance() { return *reinterpret_cast<volatile SR*>(0x400CCC04); }
};



} // namespace nOTFAD1