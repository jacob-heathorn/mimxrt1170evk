#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// WDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nWDOG1 {


// Watchdog Control Register
//
union WCR {
  
  enum class eWDZST : uint32_t {
    eWDZST_0 = 0, // Continue timer operation (Default).
    eWDZST_1 = 1, // Suspend the watchdog timer.
  };
  
  enum class eWDBG : uint32_t {
    eWDBG_0 = 0, // Continue WDOG timer operation (Default).
    eWDBG_1 = 1, // Suspend the watchdog timer.
  };
  
  enum class eWDE : uint32_t {
    eWDE_0 = 0, // Disable the Watchdog (Default).
    eWDE_1 = 1, // Enable the Watchdog.
  };
  
  enum class eWDT : uint32_t {
    eWDT_0 = 0, // No effect on WDOG_B (Default).
    eWDT_1 = 1, // Assert WDOG_B upon a Watchdog Time-out event.
  };
  
  enum class eSRS : uint32_t {
    eSRS_0 = 0, // Assert system reset signal.
    eSRS_1 = 1, // No effect on the system (Default).
  };
  
  enum class eWDA : uint32_t {
    eWDA_0 = 0, // Assert WDOG_B output.
    eWDA_1 = 1, // No effect on system (Default).
  };
  
  enum class eSRE : uint32_t {
    eSRE_0 = 0, // using original way to generate software reset (default)
    eSRE_1 = 1, // using new way to generate software reset.
  };
  
  enum class eWDW : uint32_t {
    eWDW_0 = 0, // Continue WDOG timer operation (Default).
    eWDW_1 = 1, // Suspend WDOG timer operation.
  };
  
  enum class eWT : uint32_t {
    eWT_0 = 0, // - 0.5 Seconds (Default).
    eWT_1 = 1, // - 1.0 Seconds.
    eWT_2 = 2, // - 1.5 Seconds.
    eWT_3 = 3, // - 2.0 Seconds.
    eWT_255 = 255, // - 128 Seconds.
  };
  
  // Bit field definition.
  struct {
    /// read-write - WDZST
    eWDZST WDZST : 1;
    /// read-write - WDBG
    eWDBG WDBG : 1;
    /// read-write - WDE
    eWDE WDE : 1;
    /// read-write - WDT
    eWDT WDT : 1;
    /// read-write - SRS
    eSRS SRS : 1;
    /// read-write - WDA
    eWDA WDA : 1;
    /// read-write - Software Reset Extension, an optional way to generate software reset
    eSRE SRE : 1;
    /// read-write - WDW
    eWDW WDW : 1;
    /// read-write - WT
    eWT WT : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WCR() = delete;
  inline void Reset() volatile { this->value = 0x00000030; }
  static inline volatile WCR &Instance() { return *reinterpret_cast<volatile WCR*>(0x40030000); }
};

// Watchdog Service Register
//
union WSR {
  
  enum class eWSR : uint32_t {
    eWSR_21845 = 21845, // Write to the Watchdog Service Register (WDOG_WSR).
    eWSR_43690 = 43690, // Write to the Watchdog Service Register (WDOG_WSR).
  };
  
  // Bit field definition.
  struct {
    /// read-write - WSR
    eWSR WSR : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WSR &Instance() { return *reinterpret_cast<volatile WSR*>(0x40030002); }
};

// Watchdog Reset Status Register
//
union WRSR {
  
  enum class eSFTW : uint32_t {
    eSFTW_0 = 0, // Reset is not the result of a software reset.
    eSFTW_1 = 1, // Reset is the result of a software reset.
  };
  
  enum class eTOUT : uint32_t {
    eTOUT_0 = 0, // Reset is not the result of a WDOG timeout.
    eTOUT_1 = 1, // Reset is the result of a WDOG timeout.
  };
  
  enum class ePOR : uint32_t {
    ePOR_0 = 0, // Reset is not the result of a power on reset.
    ePOR_1 = 1, // Reset is the result of a power on reset.
  };
  
  // Bit field definition.
  struct {
    /// read-only - SFTW
    eSFTW SFTW : 1;
    /// read-only - TOUT
    eTOUT TOUT : 1;
    uint32_t _reserved_0 : 2;
    /// read-only - POR
    ePOR POR : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WRSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WRSR &Instance() { return *reinterpret_cast<volatile WRSR*>(0x40030004); }
};

// Watchdog Interrupt Control Register
//
union WICR {
  
  enum class eWICT : uint32_t {
    eWICT_0 = 0, // WICT[7:0] = Time duration between interrupt and time-out is 0 seconds.
    eWICT_1 = 1, // WICT[7:0] = Time duration between interrupt and time-out is 0.5 seconds.
    eWICT_4 = 4, // WICT[7:0] = Time duration between interrupt and time-out is 2 seconds (Default).
    eWICT_255 = 255, // WICT[7:0] = Time duration between interrupt and time-out is 127.5 seconds.
  };
  
  enum class eWTIS : uint32_t {
    eWTIS_0 = 0, // No interrupt has occurred (Default).
    eWTIS_1 = 1, // Interrupt has occurred
  };
  
  enum class eWIE : uint32_t {
    eWIE_0 = 0, // Disable Interrupt (Default).
    eWIE_1 = 1, // Enable Interrupt.
  };
  
  // Bit field definition.
  struct {
    /// read-write - WICT
    eWICT WICT : 8;
    uint32_t _reserved_0 : 6;
    /// read-write - WTIS
    eWTIS WTIS : 1;
    /// read-write - WIE
    eWIE WIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WICR() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile WICR &Instance() { return *reinterpret_cast<volatile WICR*>(0x40030006); }
};

// Watchdog Miscellaneous Control Register
//
union WMCR {
  
  enum class ePDE : uint32_t {
    ePDE_0 = 0, // Power Down Counter of WDOG is disabled.
    ePDE_1 = 1, // Power Down Counter of WDOG is enabled (Default).
  };
  
  // Bit field definition.
  struct {
    /// read-write - PDE
    ePDE PDE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WMCR() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile WMCR &Instance() { return *reinterpret_cast<volatile WMCR*>(0x40030008); }
};


} // namespace nWDOG1