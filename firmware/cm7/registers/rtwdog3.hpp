#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// WDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nRTWDOG3 {


// Watchdog Control and Status Register
//
union CS {
  
  enum class eSTOP : uint32_t {
    eSTOP_0 = 0, // Watchdog disabled in chip stop mode.
    eSTOP_1 = 1, // Watchdog enabled in chip stop mode.
  };
  
  enum class eWAIT : uint32_t {
    eWAIT_0 = 0, // Watchdog disabled in chip wait mode.
    eWAIT_1 = 1, // Watchdog enabled in chip wait mode.
  };
  
  enum class eDBG : uint32_t {
    eDBG_0 = 0, // Watchdog disabled in chip debug mode.
    eDBG_1 = 1, // Watchdog enabled in chip debug mode.
  };
  
  enum class eTST : uint32_t {
    eTST_0 = 0, // Watchdog test mode disabled.
    eTST_1 = 1, // Watchdog user mode enabled. (Watchdog test mode disabled.) After testing the watchdog, software should use this setting to indicate that the watchdog is functioning normally in user mode.
    eTST_2 = 2, // Watchdog test mode enabled, only the low byte is used. CNT[CNTLOW] is compared with TOVAL[TOVALLOW].
    eTST_3 = 3, // Watchdog test mode enabled, only the high byte is used. CNT[CNTHIGH] is compared with TOVAL[TOVALHIGH].
  };
  
  enum class eUPDATE : uint32_t {
    eUPDATE_0 = 0, // Updates not allowed. After the initial configuration, the watchdog cannot be later modified without forcing a reset.
    eUPDATE_1 = 1, // Updates allowed. Software can modify the watchdog configuration registers within 255 bus clocks after performing the unlock write sequence.
  };
  
  enum class eINT : uint32_t {
    eINT_0 = 0, // Watchdog interrupts are disabled. Watchdog resets are not delayed.
    eINT_1 = 1, // Watchdog interrupts are enabled. Watchdog resets are delayed by 255 bus clocks from the interrupt vector fetch.
  };
  
  enum class eEN : uint32_t {
    eEN_0 = 0, // Watchdog disabled.
    eEN_1 = 1, // Watchdog enabled.
  };
  
  enum class eRCS : uint32_t {
    eRCS_0 = 0, // Reconfiguring WDOG.
    eRCS_1 = 1, // Reconfiguration is successful.
  };
  
  enum class eULK : uint32_t {
    eULK_0 = 0, // WDOG is locked.
    eULK_1 = 1, // WDOG is unlocked.
  };
  
  enum class ePRES : uint32_t {
    ePRES_0 = 0, // 256 prescaler disabled.
    ePRES_1 = 1, // 256 prescaler enabled.
  };
  
  enum class eCMD32EN : uint32_t {
    eCMD32EN_0 = 0, // Disables support for 32-bit refresh/unlock command write words. Only 16-bit or 8-bit is supported.
    eCMD32EN_1 = 1, // Enables support for 32-bit refresh/unlock command write words. 16-bit or 8-bit is NOT supported.
  };
  
  enum class eFLG : uint32_t {
    eFLG_0 = 0, // No interrupt occurred.
    eFLG_1 = 1, // An interrupt occurred.
  };
  
  enum class eWIN : uint32_t {
    eWIN_0 = 0, // Window mode disabled.
    eWIN_1 = 1, // Window mode enabled.
  };
  
  // Bit field definition.
  struct {
    eSTOP STOP : 1;
    eWAIT WAIT : 1;
    eDBG DBG : 1;
    eTST TST : 2;
    eUPDATE UPDATE : 1;
    eINT INT : 1;
    eEN EN : 1;
    uint32_t CLK : 2;
    eRCS RCS : 1;
    eULK ULK : 1;
    ePRES PRES : 1;
    eCMD32EN CMD32EN : 1;
    eFLG FLG : 1;
    eWIN WIN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS() = delete;
  inline void Reset() volatile { this->value = 0x00002180; }
  static inline volatile CS &Instance() { return *reinterpret_cast<volatile CS*>(0x40038000); }
};

// Watchdog Counter Register
//
union CNT {
  
  // Bit field definition.
  struct {
    uint32_t CNTLOW : 8;
    uint32_t CNTHIGH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNT &Instance() { return *reinterpret_cast<volatile CNT*>(0x40038004); }
};

// Watchdog Timeout Value Register
//
union TOVAL {
  
  // Bit field definition.
  struct {
    uint32_t TOVALLOW : 8;
    uint32_t TOVALHIGH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TOVAL() = delete;
  inline void Reset() volatile { this->value = 0x00007D00; }
  static inline volatile TOVAL &Instance() { return *reinterpret_cast<volatile TOVAL*>(0x40038008); }
};

// Watchdog Window Register
//
union WIN {
  
  // Bit field definition.
  struct {
    uint32_t WINLOW : 8;
    uint32_t WINHIGH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WIN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WIN &Instance() { return *reinterpret_cast<volatile WIN*>(0x4003800C); }
};


} // namespace nRTWDOG3