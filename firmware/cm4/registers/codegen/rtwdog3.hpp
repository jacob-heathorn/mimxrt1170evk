#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// WDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nRTWDOG3 {


// Watchdog Control and Status Register
union CS {
  
  // Stop Enable
  enum class eSTOP : uint32_t {
    // Watchdog disabled in chip stop mode.
    eSTOP_0 = 0,
    // Watchdog enabled in chip stop mode.
    eSTOP_1 = 1,
  };
  
  // Wait Enable
  enum class eWAIT : uint32_t {
    // Watchdog disabled in chip wait mode.
    eWAIT_0 = 0,
    // Watchdog enabled in chip wait mode.
    eWAIT_1 = 1,
  };
  
  // Debug Enable
  enum class eDBG : uint32_t {
    // Watchdog disabled in chip debug mode.
    eDBG_0 = 0,
    // Watchdog enabled in chip debug mode.
    eDBG_1 = 1,
  };
  
  // Watchdog Test
  enum class eTST : uint32_t {
    // Watchdog test mode disabled.
    eTST_0 = 0,
    // Watchdog user mode enabled. (Watchdog test mode disabled.) After testing the watchdog, software should use this setting to indicate that the watchdog is functioning normally in user mode.
    eTST_1 = 1,
    // Watchdog test mode enabled, only the low byte is used. CNT[CNTLOW] is compared with TOVAL[TOVALLOW].
    eTST_2 = 2,
    // Watchdog test mode enabled, only the high byte is used. CNT[CNTHIGH] is compared with TOVAL[TOVALHIGH].
    eTST_3 = 3,
  };
  
  // Allow updates
  enum class eUPDATE : uint32_t {
    // Updates not allowed. After the initial configuration, the watchdog cannot be later modified without forcing a reset.
    eUPDATE_0 = 0,
    // Updates allowed. Software can modify the watchdog configuration registers within 255 bus clocks after performing the unlock write sequence.
    eUPDATE_1 = 1,
  };
  
  // Watchdog Interrupt
  enum class eINT : uint32_t {
    // Watchdog interrupts are disabled. Watchdog resets are not delayed.
    eINT_0 = 0,
    // Watchdog interrupts are enabled. Watchdog resets are delayed by 255 bus clocks from the interrupt vector fetch.
    eINT_1 = 1,
  };
  
  // Watchdog Enable
  enum class eEN : uint32_t {
    // Watchdog disabled.
    eEN_0 = 0,
    // Watchdog enabled.
    eEN_1 = 1,
  };
  
  // Reconfiguration Success
  enum class eRCS : uint32_t {
    // Reconfiguring WDOG.
    eRCS_0 = 0,
    // Reconfiguration is successful.
    eRCS_1 = 1,
  };
  
  // Unlock status
  enum class eULK : uint32_t {
    // WDOG is locked.
    eULK_0 = 0,
    // WDOG is unlocked.
    eULK_1 = 1,
  };
  
  // Watchdog prescaler
  enum class ePRES : uint32_t {
    // 256 prescaler disabled.
    ePRES_0 = 0,
    // 256 prescaler enabled.
    ePRES_1 = 1,
  };
  
  // Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit) refresh/unlock command write words
  enum class eCMD32EN : uint32_t {
    // Disables support for 32-bit refresh/unlock command write words. Only 16-bit or 8-bit is supported.
    eCMD32EN_0 = 0,
    // Enables support for 32-bit refresh/unlock command write words. 16-bit or 8-bit is NOT supported.
    eCMD32EN_1 = 1,
  };
  
  // Watchdog Interrupt Flag
  enum class eFLG : uint32_t {
    // No interrupt occurred.
    eFLG_0 = 0,
    // An interrupt occurred.
    eFLG_1 = 1,
  };
  
  // Watchdog Window
  enum class eWIN : uint32_t {
    // Window mode disabled.
    eWIN_0 = 0,
    // Window mode enabled.
    eWIN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Stop Enable
    eSTOP STOP : 1;
    // read-write - Wait Enable
    eWAIT WAIT : 1;
    // read-write - Debug Enable
    eDBG DBG : 1;
    // read-write - Watchdog Test
    eTST TST : 2;
    // read-write - Allow updates
    eUPDATE UPDATE : 1;
    // read-write - Watchdog Interrupt
    eINT INT : 1;
    // read-write - Watchdog Enable
    eEN EN : 1;
    // read-write - Watchdog Clock
    uint32_t CLK : 2;
    // read-only - Reconfiguration Success
    eRCS RCS : 1;
    // read-only - Unlock status
    eULK ULK : 1;
    // read-write - Watchdog prescaler
    ePRES PRES : 1;
    // read-write - Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit) refresh/unlock command write words
    eCMD32EN CMD32EN : 1;
    // read-write - Watchdog Interrupt Flag
    eFLG FLG : 1;
    // read-write - Watchdog Window
    eWIN WIN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS() = delete;
  inline void Reset() volatile { this->value = 0x00002180; }
  static inline volatile CS &ref() { return *reinterpret_cast<volatile CS*>(0x40038000); }
};

// Watchdog Counter Register
union CNT {
  
  // Bit field definition.
  struct {
    // read-write - Low byte of the Watchdog Counter
    uint32_t CNTLOW : 8;
    // read-write - High byte of the Watchdog Counter
    uint32_t CNTHIGH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNT &ref() { return *reinterpret_cast<volatile CNT*>(0x40038004); }
};

// Watchdog Timeout Value Register
union TOVAL {
  
  // Bit field definition.
  struct {
    // read-write - Low byte of the timeout value
    uint32_t TOVALLOW : 8;
    // read-write - High byte of the timeout value
    uint32_t TOVALHIGH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TOVAL() = delete;
  inline void Reset() volatile { this->value = 0x00007D00; }
  static inline volatile TOVAL &ref() { return *reinterpret_cast<volatile TOVAL*>(0x40038008); }
};

// Watchdog Window Register
union WIN {
  
  // Bit field definition.
  struct {
    // read-write - Low byte of Watchdog Window
    uint32_t WINLOW : 8;
    // read-write - High byte of Watchdog Window
    uint32_t WINHIGH : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WIN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WIN &ref() { return *reinterpret_cast<volatile WIN*>(0x4003800C); }
};


} // namespace nRTWDOG3