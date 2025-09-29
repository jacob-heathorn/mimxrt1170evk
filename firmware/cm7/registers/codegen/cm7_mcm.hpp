#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// CM7_MCM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nCM7_MCM {


// Interrupt Status and Control Register
union ISCR {
  
  // Write Abort on Slave
  enum class eWABS : uint32_t {
    // No abort
    enoabort = 0,
    // Abort
    eabort = 1,
  };
  
  // Write Abort on Slave Overrun
  enum class eWABSO : uint32_t {
    // No write abort overrun
    eno = 0,
    // Write abort overrun occurred
    eyes = 1,
  };
  
  // FPU Invalid Operation interrupt Status
  enum class eFIOC : uint32_t {
    // No interrupt
    eNo = 0,
    // Interrupt occured
    eYes = 1,
  };
  
  // FPU Divide-by-Zero Interrupt Status
  enum class eFDZC : uint32_t {
    // No interrupt
    eNo = 0,
    // Interrupt occured
    eYes = 1,
  };
  
  // FPU Overflow interrupt status
  enum class eFOFC : uint32_t {
    // No interrupt
    eNo = 0,
    // Interrupt occured
    eYes = 1,
  };
  
  // FPU Underflow Interrupt Status
  enum class eFUFC : uint32_t {
    // No interrupt
    eNo = 0,
    // Interrupt occured
    eYes = 1,
  };
  
  // FPU Inexact Interrupt Status
  enum class eFIXC : uint32_t {
    // No interrupt
    eNo = 0,
    // Interrupt occured
    eYes = 1,
  };
  
  // FPU Input Denormal Interrupt Status
  enum class eFIDC : uint32_t {
    // No interrupt
    eNo = 0,
    // Interrupt occured
    eYes = 1,
  };
  
  // TCM Write Abort Interrupt enable
  enum class eWABE : uint32_t {
    // Disable interrupt
    eDISABLE = 0,
    // Enable interrupt
    eENABLE = 1,
  };
  
  // FPU Invalid Operation Interrupt Enable
  enum class eFIOCE : uint32_t {
    // Disable interrupt
    eDISABLE = 0,
    // Enable interrupt
    eENABLE = 1,
  };
  
  // FPU Divide-by-Zero Interrupt Enable
  enum class eFDZCE : uint32_t {
    // Disable interrupt
    eDISABLE = 0,
    // Enable interrupt
    eENABLE = 1,
  };
  
  // FPU Overflow Interrupt Enable
  enum class eFOFCE : uint32_t {
    // Disable interrupt
    eDISABLE = 0,
    // Enable interrupt
    eENABLE = 1,
  };
  
  // FPU Underflow Interrupt Enable
  enum class eFUFCE : uint32_t {
    // Disable interrupt
    eDISABLE = 0,
    // Enable interrupt
    eENABLE = 1,
  };
  
  // FPU Inexact Interrupt Enable
  enum class eFIXCE : uint32_t {
    // Disable interrupt
    eDISABLE = 0,
    // Enable interrupt
    eENABLE = 1,
  };
  
  // FPU Input Denormal Interrupt Enable
  enum class eFIDCE : uint32_t {
    // Disable interrupt
    eDISABLE = 0,
    // Enable interrupt
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 5;
    // read-write - Write Abort on Slave
    eWABS WABS : 1;
    // read-only - Write Abort on Slave Overrun
    eWABSO WABSO : 1;
    uint32_t _reserved_1 : 1;
    // read-only - FPU Invalid Operation interrupt Status
    eFIOC FIOC : 1;
    // read-only - FPU Divide-by-Zero Interrupt Status
    eFDZC FDZC : 1;
    // read-only - FPU Overflow interrupt status
    eFOFC FOFC : 1;
    // read-only - FPU Underflow Interrupt Status
    eFUFC FUFC : 1;
    // read-only - FPU Inexact Interrupt Status
    eFIXC FIXC : 1;
    uint32_t _reserved_2 : 2;
    // read-only - FPU Input Denormal Interrupt Status
    eFIDC FIDC : 1;
    uint32_t _reserved_3 : 5;
    // read-write - TCM Write Abort Interrupt enable
    eWABE WABE : 1;
    uint32_t _reserved_4 : 2;
    // read-write - FPU Invalid Operation Interrupt Enable
    eFIOCE FIOCE : 1;
    // read-write - FPU Divide-by-Zero Interrupt Enable
    eFDZCE FDZCE : 1;
    // read-write - FPU Overflow Interrupt Enable
    eFOFCE FOFCE : 1;
    // read-write - FPU Underflow Interrupt Enable
    eFUFCE FUFCE : 1;
    // read-write - FPU Inexact Interrupt Enable
    eFIXCE FIXCE : 1;
    uint32_t _reserved_5 : 2;
    // read-write - FPU Input Denormal Interrupt Enable
    eFIDCE FIDCE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ISCR &ref() { return *reinterpret_cast<volatile ISCR*>(0xE0080010); }
};


} // namespace nCM7_MCM