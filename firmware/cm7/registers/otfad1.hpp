#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// OTFAD
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nOTFAD1 {


// Control Register
//
union CR {
  
  enum class eFERR : uint32_t {
    eNO_EFFECT = 0, // No effect on the SR[KBERE] indicator.
    eFORCE_ERROR = 1, // SR[KBERR] is immediately set after a write with this data bit set.
  };
  
  enum class eFLDM : uint32_t {
    eNO_EFFECT = 0, // No effect on the operating mode.
    eFORCE_LDM = 1, // Force entry into LDM after a write with this data bit set. SR[MODE] signals the operating mode.
  };
  
  enum class eKBSE : uint32_t {
    eDISABLE = 0, // Key blob KEK scrambling is disabled.
    eENABLE = 1, // Key blob KEK scrambling is enabled.
  };
  
  enum class eKBPE : uint32_t {
    eDISABLE = 0, // Key blob processing is disabled.
    eENABLE = 1, // Key blob processing is enabled.
  };
  
  enum class eRRAE : uint32_t {
    eNORMAL = 0, // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
    eRESTRICT = 1, // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
  };
  
  enum class eSKBP : uint32_t {
    eNO_EFFECT = 0, // Key blob processing is not initiated.
    eINIT_KB = 1, // Properly-enabled key blob processing is initiated.
  };
  
  enum class eGE : uint32_t {
    eDISABLE = 0, // OTFAD has decryption disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
    eENABLE = 1, // OTFAD has decryption enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Force Error
    eFERR FERR : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Force Logically Disabled Mode
    eFLDM FLDM : 1;
    /// read-write - Key Blob Scramble Enable
    eKBSE KBSE : 1;
    /// read-write - Key Blob Processing Enable
    eKBPE KBPE : 1;
    uint32_t _reserved_2 : 1;
    /// read-write - Restricted Register Access Enable
    eRRAE RRAE : 1;
    uint32_t _reserved_3 : 22;
    /// read-write - Start key blob processing
    eSKBP SKBP : 1;
    /// read-write - Global OTFAD Enable
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
    eNO_KB_ERR = 0, // No key blob error detected.
    eKB_ERR = 1, // One or more key blob errors has been detected.
  };
  
  enum class eMODE : uint32_t {
    eNORMAL = 0, // Operating in Normal mode (NRM)
    eRES_01 = 1, // Unused (reserved)
    eRES_10_SVM = 2, // Unused (reserved)
    eLDM = 3, // Operating in Logically Disabled Mode (LDM)
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
    eNORMAL = 0, // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
    eRESTRICTED = 1, // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
  };
  
  enum class eGEM : uint32_t {
    eDISABLED = 0, // OTFAD is disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
    eENABLED = 1, // OTFAD is enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
  };
  
  enum class eKBPE : uint32_t {
    eDISABLED = 0, // Key blob processing is not enabled.
    eENABLED = 1, // Key blob processing is enabled.
  };
  
  enum class eKBD : uint32_t {
    eNOT_DONE = 0, // Key blob processing was not enabled, or is not complete.
    eDONE = 1, // Key blob processing was enabled and is complete.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Key Blob Error
    eKBERR KBERR : 1;
    /// read-only - MDPC Present
    uint32_t MDPCP : 1;
    /// read-only - Operating Mode
    eMODE MODE : 2;
    /// read-only - Number of Contexts
    uint32_t NCTX : 4;
    /// read-only - Context Error
    eCTXER0 CTXER0 : 1;
    /// read-only - Context Error
    eCTXER1 CTXER1 : 1;
    /// read-only - Context Error
    eCTXER2 CTXER2 : 1;
    /// read-only - Context Error
    eCTXER3 CTXER3 : 1;
    uint32_t _reserved_0 : 4;
    /// read-only - Context Integrity Error
    eCTXIE0 CTXIE0 : 1;
    /// read-only - Context Integrity Error
    eCTXIE1 CTXIE1 : 1;
    /// read-only - Context Integrity Error
    eCTXIE2 CTXIE2 : 1;
    /// read-only - Context Integrity Error
    eCTXIE3 CTXIE3 : 1;
    uint32_t _reserved_1 : 4;
    /// read-only - Hardware Revision Level
    uint32_t HRL : 4;
    /// read-only - Restricted Register Access Mode
    eRRAM RRAM : 1;
    /// read-only - Global Enable Mode
    eGEM GEM : 1;
    /// read-only - Key Blob Processing Enable
    eKBPE KBPE : 1;
    /// read-only - Key Blob Processing Done
    eKBD KBD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00000040; }
  static inline volatile SR &Instance() { return *reinterpret_cast<volatile SR*>(0x400CCC04); }
};



} // namespace nOTFAD1