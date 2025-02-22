#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// CDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nCDOG {


// Control
//
union CONTROL {
  
  enum class eLOCK_CTRL : uint32_t {
    eLOCKED = 1, // Locked
    eUNLOCKED = 2, // Unlocked
  };
  
  enum class eTIMEOUT_CTRL : uint32_t {
    eENABLE_RESET = 1, // Enable reset
    eENABLE_INTERRUPT = 2, // Enable interrupt
    eDISABLE_BOTH = 4, // Disable both reset and interrupt
  };
  
  enum class eMISCOMPARE_CTRL : uint32_t {
    eENABLE_RESET = 1, // Enable reset
    eENABLE_INTERRUPT = 2, // Enable interrupt
    eDISABLE_BOTH = 4, // Disable both reset and interrupt
  };
  
  enum class eSEQUENCE_CTRL : uint32_t {
    eENABLE_RESET = 1, // Enable reset
    eENABLE_INTERRUPT = 2, // Enable interrupt
    eDISABLE_BOTH = 4, // Disable both reset and interrupt
  };
  
  enum class eCONTROL_CTRL : uint32_t {
    eENABLE_RESET = 1, // Enable reset
    eDISABLE_BOTH = 4, // Disable reset
  };
  
  enum class eSTATE_CTRL : uint32_t {
    eENABLE_RESET = 1, // Enable reset
    eENABLE_INTERRUPT = 2, // Enable interrupt
    eDISABLE_BOTH = 4, // Disable both reset and interrupt
  };
  
  enum class eADDRESS_CTRL : uint32_t {
    eENABLE_RESET = 1, // Enable reset
    eENABLE_INTERRUPT = 2, // Enable interrupt
    eDISABLE_BOTH = 4, // Disable both reset and interrupt
  };
  
  enum class eIRQ_PAUSE : uint32_t {
    eRUN_TIMER = 1, // Keep the timer running
    ePAUSE_TIMER = 2, // Stop the timer
  };
  
  enum class eDEBUG_HALT_CTRL : uint32_t {
    eRUN_TIMER = 1, // Keep the timer running
    ePAUSE_TIMER = 2, // Stop the timer
  };
  
  // Bit field definition.
  struct {
    eLOCK_CTRL LOCK_CTRL : 2;
    eTIMEOUT_CTRL TIMEOUT_CTRL : 3;
    eMISCOMPARE_CTRL MISCOMPARE_CTRL : 3;
    eSEQUENCE_CTRL SEQUENCE_CTRL : 3;
    eCONTROL_CTRL CONTROL_CTRL : 3;
    eSTATE_CTRL STATE_CTRL : 3;
    eADDRESS_CTRL ADDRESS_CTRL : 3;
    uint32_t _reserved_0 : 8;
    eIRQ_PAUSE IRQ_PAUSE : 2;
    eDEBUG_HALT_CTRL DEBUG_HALT_CTRL : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x50092492; }
  static inline volatile CONTROL &Instance() { return *reinterpret_cast<volatile CONTROL*>(0x41900000); }
};

// Instruction Timer reload
//
union RELOAD {
  
  // Bit field definition.
  struct {
    uint32_t RLOAD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RELOAD() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile RELOAD &Instance() { return *reinterpret_cast<volatile RELOAD*>(0x41900004); }
};

// Instruction Timer
//
union INSTRUCTION_TIMER {
  
  // Bit field definition.
  struct {
    uint32_t INSTIM : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INSTRUCTION_TIMER() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile INSTRUCTION_TIMER &Instance() { return *reinterpret_cast<volatile INSTRUCTION_TIMER*>(0x41900008); }
};

// Secure Counter
//
union SECURE_COUNTER {
  
  // Bit field definition.
  struct {
    uint32_t SECCNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SECURE_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SECURE_COUNTER &Instance() { return *reinterpret_cast<volatile SECURE_COUNTER*>(0x4190000C); }
};

// Status 1
//
union STATUS {
  
  // Bit field definition.
  struct {
    uint32_t NUMTOF : 8;
    uint32_t NUMMISCOMPF : 8;
    uint32_t NUMILSEQF : 8;
    uint32_t _reserved_0 : 4;
    uint32_t CURST : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STATUS() = delete;
  inline void Reset() volatile { this->value = 0x50000000; }
  static inline volatile STATUS &Instance() { return *reinterpret_cast<volatile STATUS*>(0x41900010); }
};

// Status 2
//
union STATUS2 {
  
  // Bit field definition.
  struct {
    uint32_t NUMCNTF : 8;
    uint32_t NUMILLSTF : 8;
    uint32_t NUMILLA : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STATUS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STATUS2 &Instance() { return *reinterpret_cast<volatile STATUS2*>(0x41900014); }
};

// Flags
//
union FLAGS {
  
  enum class eTO_FLAG : uint32_t {
    eNO_FLAG = 0, // A TIMEOUT fault has not occurred
    eFLAG = 1, // A TIMEOUT fault has occurred
  };
  
  enum class eMISCOM_FLAG : uint32_t {
    eNO_FLAG = 0, // A MISCOMPARE fault has not occurred
    eFLAG = 1, // A MISCOMPARE fault has occurred
  };
  
  enum class eSEQ_FLAG : uint32_t {
    eNO_FLAG = 0, // A SEQUENCE fault has not occurred
    eFLAG = 1, // A SEQUENCE fault has occurred
  };
  
  enum class eCNT_FLAG : uint32_t {
    eNO_FLAG = 0, // A CONTROL fault has not occurred
    eFLAG = 1, // A CONTROL fault has occurred
  };
  
  enum class eSTATE_FLAG : uint32_t {
    eNO_FLAG = 0, // A STATE fault has not occurred
    eFLAG = 1, // A STATE fault has occurred
  };
  
  enum class eADDR_FLAG : uint32_t {
    eNO_FLAG = 0, // An ADDRESS fault has not occurred
    eFLAG = 1, // An ADDRESS fault has occurred
  };
  
  enum class ePOR_FLAG : uint32_t {
    eNO_FLAG = 0, // A Power-on reset event has not occurred
    eFLAG = 1, // A Power-on reset event has occurred
  };
  
  // Bit field definition.
  struct {
    eTO_FLAG TO_FLAG : 1;
    eMISCOM_FLAG MISCOM_FLAG : 1;
    eSEQ_FLAG SEQ_FLAG : 1;
    eCNT_FLAG CNT_FLAG : 1;
    eSTATE_FLAG STATE_FLAG : 1;
    eADDR_FLAG ADDR_FLAG : 1;
    uint32_t _reserved_0 : 10;
    ePOR_FLAG POR_FLAG : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLAGS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLAGS &Instance() { return *reinterpret_cast<volatile FLAGS*>(0x41900018); }
};

// Persistent Data Storage
//
union PERSISTENT {
  
  // Bit field definition.
  struct {
    uint32_t PERSIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PERSISTENT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PERSISTENT &Instance() { return *reinterpret_cast<volatile PERSISTENT*>(0x4190001C); }
};

// START Command
//
union START {
  
  // Bit field definition.
  struct {
    uint32_t STRT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  START() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile START &Instance() { return *reinterpret_cast<volatile START*>(0x41900020); }
};

// STOP Command
//
union STOP {
  
  // Bit field definition.
  struct {
    uint32_t STP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STOP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STOP &Instance() { return *reinterpret_cast<volatile STOP*>(0x41900024); }
};

// RESTART Command
//
union RESTART {
  
  // Bit field definition.
  struct {
    uint32_t RSTRT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RESTART() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RESTART &Instance() { return *reinterpret_cast<volatile RESTART*>(0x41900028); }
};

// ADD Command
//
union ADD {
  
  // Bit field definition.
  struct {
    uint32_t AD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADD &Instance() { return *reinterpret_cast<volatile ADD*>(0x4190002C); }
};

// ADD1 Command
//
union ADD1 {
  
  // Bit field definition.
  struct {
    uint32_t AD1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADD1 &Instance() { return *reinterpret_cast<volatile ADD1*>(0x41900030); }
};

// ADD16 Command
//
union ADD16 {
  
  // Bit field definition.
  struct {
    uint32_t AD16 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADD16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADD16 &Instance() { return *reinterpret_cast<volatile ADD16*>(0x41900034); }
};

// ADD256 Command
//
union ADD256 {
  
  // Bit field definition.
  struct {
    uint32_t AD256 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ADD256() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ADD256 &Instance() { return *reinterpret_cast<volatile ADD256*>(0x41900038); }
};

// SUB Command
//
union SUB {
  
  // Bit field definition.
  struct {
    uint32_t S0B : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SUB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SUB &Instance() { return *reinterpret_cast<volatile SUB*>(0x4190003C); }
};

// SUB1 Command
//
union SUB1 {
  
  // Bit field definition.
  struct {
    uint32_t S1B : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SUB1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SUB1 &Instance() { return *reinterpret_cast<volatile SUB1*>(0x41900040); }
};

// SUB16 Command
//
union SUB16 {
  
  // Bit field definition.
  struct {
    uint32_t SB16 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SUB16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SUB16 &Instance() { return *reinterpret_cast<volatile SUB16*>(0x41900044); }
};

// SUB256 Command
//
union SUB256 {
  
  // Bit field definition.
  struct {
    uint32_t SB256 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SUB256() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SUB256 &Instance() { return *reinterpret_cast<volatile SUB256*>(0x41900048); }
};


} // namespace nCDOG