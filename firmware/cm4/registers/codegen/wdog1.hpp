#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// WDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nWDOG1 {


// Watchdog Control Register
union WCR {
  
  // WDZST
  enum class eWDZST : uint32_t {
    // Continue timer operation (Default).
    eWDZST_0 = 0,
    // Suspend the watchdog timer.
    eWDZST_1 = 1,
  };
  
  // WDBG
  enum class eWDBG : uint32_t {
    // Continue WDOG timer operation (Default).
    eWDBG_0 = 0,
    // Suspend the watchdog timer.
    eWDBG_1 = 1,
  };
  
  // WDE
  enum class eWDE : uint32_t {
    // Disable the Watchdog (Default).
    eWDE_0 = 0,
    // Enable the Watchdog.
    eWDE_1 = 1,
  };
  
  // WDT
  enum class eWDT : uint32_t {
    // No effect on WDOG_B (Default).
    eWDT_0 = 0,
    // Assert WDOG_B upon a Watchdog Time-out event.
    eWDT_1 = 1,
  };
  
  // SRS
  enum class eSRS : uint32_t {
    // Assert system reset signal.
    eSRS_0 = 0,
    // No effect on the system (Default).
    eSRS_1 = 1,
  };
  
  // WDA
  enum class eWDA : uint32_t {
    // Assert WDOG_B output.
    eWDA_0 = 0,
    // No effect on system (Default).
    eWDA_1 = 1,
  };
  
  // Software Reset Extension, an optional way to generate software reset
  enum class eSRE : uint32_t {
    // using original way to generate software reset (default)
    eSRE_0 = 0,
    // using new way to generate software reset.
    eSRE_1 = 1,
  };
  
  // WDW
  enum class eWDW : uint32_t {
    // Continue WDOG timer operation (Default).
    eWDW_0 = 0,
    // Suspend WDOG timer operation.
    eWDW_1 = 1,
  };
  
  // WT
  enum class eWT : uint32_t {
    // - 0.5 Seconds (Default).
    eWT_0 = 0,
    // - 1.0 Seconds.
    eWT_1 = 1,
    // - 1.5 Seconds.
    eWT_2 = 2,
    // - 2.0 Seconds.
    eWT_3 = 3,
    // - 128 Seconds.
    eWT_255 = 255,
  };
  
  // Bit field definition.
  struct {
    // read-write - WDZST
    eWDZST WDZST : 1;
    // read-write - WDBG
    eWDBG WDBG : 1;
    // read-write - WDE
    eWDE WDE : 1;
    // read-write - WDT
    eWDT WDT : 1;
    // read-write - SRS
    eSRS SRS : 1;
    // read-write - WDA
    eWDA WDA : 1;
    // read-write - Software Reset Extension, an optional way to generate software reset
    eSRE SRE : 1;
    // read-write - WDW
    eWDW WDW : 1;
    // read-write - WT
    eWT WT : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WCR() = delete;
  inline void Reset() volatile { this->value = 0x00000030; }
  static inline volatile WCR &ref() { return *reinterpret_cast<volatile WCR*>(0x40030000); }
};

// Watchdog Service Register
union WSR {
  
  // WSR
  enum class eWSR : uint32_t {
    // Write to the Watchdog Service Register (WDOG_WSR).
    eWSR_21845 = 21845,
    // Write to the Watchdog Service Register (WDOG_WSR).
    eWSR_43690 = 43690,
  };
  
  // Bit field definition.
  struct {
    // read-write - WSR
    eWSR WSR : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WSR &ref() { return *reinterpret_cast<volatile WSR*>(0x40030002); }
};

// Watchdog Reset Status Register
union WRSR {
  
  // SFTW
  enum class eSFTW : uint32_t {
    // Reset is not the result of a software reset.
    eSFTW_0 = 0,
    // Reset is the result of a software reset.
    eSFTW_1 = 1,
  };
  
  // TOUT
  enum class eTOUT : uint32_t {
    // Reset is not the result of a WDOG timeout.
    eTOUT_0 = 0,
    // Reset is the result of a WDOG timeout.
    eTOUT_1 = 1,
  };
  
  // POR
  enum class ePOR : uint32_t {
    // Reset is not the result of a power on reset.
    ePOR_0 = 0,
    // Reset is the result of a power on reset.
    ePOR_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - SFTW
    eSFTW SFTW : 1;
    // read-only - TOUT
    eTOUT TOUT : 1;
    uint32_t _reserved_0 : 2;
    // read-only - POR
    ePOR POR : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WRSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WRSR &ref() { return *reinterpret_cast<volatile WRSR*>(0x40030004); }
};

// Watchdog Interrupt Control Register
union WICR {
  
  // WICT
  enum class eWICT : uint32_t {
    // WICT[7:0] = Time duration between interrupt and time-out is 0 seconds.
    eWICT_0 = 0,
    // WICT[7:0] = Time duration between interrupt and time-out is 0.5 seconds.
    eWICT_1 = 1,
    // WICT[7:0] = Time duration between interrupt and time-out is 2 seconds (Default).
    eWICT_4 = 4,
    // WICT[7:0] = Time duration between interrupt and time-out is 127.5 seconds.
    eWICT_255 = 255,
  };
  
  // WTIS
  enum class eWTIS : uint32_t {
    // No interrupt has occurred (Default).
    eWTIS_0 = 0,
    // Interrupt has occurred
    eWTIS_1 = 1,
  };
  
  // WIE
  enum class eWIE : uint32_t {
    // Disable Interrupt (Default).
    eWIE_0 = 0,
    // Enable Interrupt.
    eWIE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - WICT
    eWICT WICT : 8;
    uint32_t _reserved_0 : 6;
    // read-write - WTIS
    eWTIS WTIS : 1;
    // read-write - WIE
    eWIE WIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WICR() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile WICR &ref() { return *reinterpret_cast<volatile WICR*>(0x40030006); }
};

// Watchdog Miscellaneous Control Register
union WMCR {
  
  // PDE
  enum class ePDE : uint32_t {
    // Power Down Counter of WDOG is disabled.
    ePDE_0 = 0,
    // Power Down Counter of WDOG is enabled (Default).
    ePDE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PDE
    ePDE PDE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WMCR() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile WMCR &ref() { return *reinterpret_cast<volatile WMCR*>(0x40030008); }
};


} // namespace nWDOG1