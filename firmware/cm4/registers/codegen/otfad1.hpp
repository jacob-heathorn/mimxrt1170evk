#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// OTFAD
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nOTFAD1 {


// Control Register
union CR {
  
  // Force Error
  enum class eFERR : uint32_t {
    // No effect on the SR[KBERE] indicator.
    eNO_EFFECT = 0,
    // SR[KBERR] is immediately set after a write with this data bit set.
    eFORCE_ERROR = 1,
  };
  
  // Force Logically Disabled Mode
  enum class eFLDM : uint32_t {
    // No effect on the operating mode.
    eNO_EFFECT = 0,
    // Force entry into LDM after a write with this data bit set. SR[MODE] signals the operating mode.
    eFORCE_LDM = 1,
  };
  
  // Key Blob Scramble Enable
  enum class eKBSE : uint32_t {
    // Key blob KEK scrambling is disabled.
    eDISABLE = 0,
    // Key blob KEK scrambling is enabled.
    eENABLE = 1,
  };
  
  // Key Blob Processing Enable
  enum class eKBPE : uint32_t {
    // Key blob processing is disabled.
    eDISABLE = 0,
    // Key blob processing is enabled.
    eENABLE = 1,
  };
  
  // Restricted Register Access Enable
  enum class eRRAE : uint32_t {
    // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
    eNORMAL = 0,
    // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
    eRESTRICT = 1,
  };
  
  // Start key blob processing
  enum class eSKBP : uint32_t {
    // Key blob processing is not initiated.
    eNO_EFFECT = 0,
    // Properly-enabled key blob processing is initiated.
    eINIT_KB = 1,
  };
  
  // Global OTFAD Enable
  enum class eGE : uint32_t {
    // OTFAD has decryption disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
    eDISABLE = 0,
    // OTFAD has decryption enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Force Error
    eFERR FERR : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Force Logically Disabled Mode
    eFLDM FLDM : 1;
    // read-write - Key Blob Scramble Enable
    eKBSE KBSE : 1;
    // read-write - Key Blob Processing Enable
    eKBPE KBPE : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Restricted Register Access Enable
    eRRAE RRAE : 1;
    uint32_t _reserved_3 : 22;
    // read-write - Start key blob processing
    eSKBP SKBP : 1;
    // read-write - Global OTFAD Enable
    eGE GE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &ref() { return *reinterpret_cast<volatile CR*>(0x400CCC00); }
};

// Status Register
union SR {
  
  // Key Blob Error
  enum class eKBERR : uint32_t {
    // No key blob error detected.
    eNO_KB_ERR = 0,
    // One or more key blob errors has been detected.
    eKB_ERR = 1,
  };
  
  // Operating Mode
  enum class eMODE : uint32_t {
    // Operating in Normal mode (NRM)
    eNORMAL = 0,
    // Unused (reserved)
    eRES_01 = 1,
    // Unused (reserved)
    eRES_10_SVM = 2,
    // Operating in Logically Disabled Mode (LDM)
    eLDM = 3,
  };
  
  // Context Error
  enum class eCTXER0 : uint32_t {
    // No key blob error was detected for context "n".
    eNOERROR = 0,
    // A key blob integrity error might have been detected in context "n".
    eERROR = 1,
  };
  
  // Context Error
  enum class eCTXER1 : uint32_t {
    // No key blob error was detected for context "n".
    eNOERROR = 0,
    // A key blob integrity error might have been detected in context "n".
    eERROR = 1,
  };
  
  // Context Error
  enum class eCTXER2 : uint32_t {
    // No key blob error was detected for context "n".
    eNOERROR = 0,
    // A key blob integrity error might have been detected in context "n".
    eERROR = 1,
  };
  
  // Context Error
  enum class eCTXER3 : uint32_t {
    // No key blob error was detected for context "n".
    eNOERROR = 0,
    // A key blob integrity error might have been detected in context "n".
    eERROR = 1,
  };
  
  // Context Integrity Error
  enum class eCTXIE0 : uint32_t {
    // No key blob integrity error was detected for context "n".
    eNOINTEGRITYERR = 0,
    // A key blob integrity error was detected in context "n".
    eINTEGRITYERR = 1,
  };
  
  // Context Integrity Error
  enum class eCTXIE1 : uint32_t {
    // No key blob integrity error was detected for context "n".
    eNOINTEGRITYERR = 0,
    // A key blob integrity error was detected in context "n".
    eINTEGRITYERR = 1,
  };
  
  // Context Integrity Error
  enum class eCTXIE2 : uint32_t {
    // No key blob integrity error was detected for context "n".
    eNOINTEGRITYERR = 0,
    // A key blob integrity error was detected in context "n".
    eINTEGRITYERR = 1,
  };
  
  // Context Integrity Error
  enum class eCTXIE3 : uint32_t {
    // No key blob integrity error was detected for context "n".
    eNOINTEGRITYERR = 0,
    // A key blob integrity error was detected in context "n".
    eINTEGRITYERR = 1,
  };
  
  // Restricted Register Access Mode
  enum class eRRAM : uint32_t {
    // Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
    eNORMAL = 0,
    // Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
    eRESTRICTED = 1,
  };
  
  // Global Enable Mode
  enum class eGEM : uint32_t {
    // OTFAD is disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
    eDISABLED = 0,
    // OTFAD is enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
    eENABLED = 1,
  };
  
  // Key Blob Processing Enable
  enum class eKBPE : uint32_t {
    // Key blob processing is not enabled.
    eDISABLED = 0,
    // Key blob processing is enabled.
    eENABLED = 1,
  };
  
  // Key Blob Processing Done
  enum class eKBD : uint32_t {
    // Key blob processing was not enabled, or is not complete.
    eNOT_DONE = 0,
    // Key blob processing was enabled and is complete.
    eDONE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Key Blob Error
    eKBERR KBERR : 1;
    // read-only - MDPC Present
    uint32_t MDPCP : 1;
    // read-only - Operating Mode
    eMODE MODE : 2;
    // read-only - Number of Contexts
    uint32_t NCTX : 4;
    // read-only - Context Error
    eCTXER0 CTXER0 : 1;
    // read-only - Context Error
    eCTXER1 CTXER1 : 1;
    // read-only - Context Error
    eCTXER2 CTXER2 : 1;
    // read-only - Context Error
    eCTXER3 CTXER3 : 1;
    uint32_t _reserved_0 : 4;
    // read-only - Context Integrity Error
    eCTXIE0 CTXIE0 : 1;
    // read-only - Context Integrity Error
    eCTXIE1 CTXIE1 : 1;
    // read-only - Context Integrity Error
    eCTXIE2 CTXIE2 : 1;
    // read-only - Context Integrity Error
    eCTXIE3 CTXIE3 : 1;
    uint32_t _reserved_1 : 4;
    // read-only - Hardware Revision Level
    uint32_t HRL : 4;
    // read-only - Restricted Register Access Mode
    eRRAM RRAM : 1;
    // read-only - Global Enable Mode
    eGEM GEM : 1;
    // read-only - Key Blob Processing Enable
    eKBPE KBPE : 1;
    // read-only - Key Blob Processing Done
    eKBD KBD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000040; }
  static inline volatile SR &ref() { return *reinterpret_cast<volatile SR*>(0x400CCC04); }
};



} // namespace nOTFAD1