#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DMA
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nDMA0 {


// Control
//
union CR {
  
  enum class eEDBG : uint32_t {
    eDISABLED = 0, // When the chip is in Debug mode, the eDMA continues to operate.
    eENABLED = 1, // When the chip is in debug mode, the DMA stalls the start of a new channel. Executing channels are allowed to complete.
  };
  
  enum class eERCA : uint32_t {
    eDISABLED = 0, // Fixed priority arbitration within each group
    eENABLED = 1, // Round robin arbitration within each group
  };
  
  enum class eERGA : uint32_t {
    eDISABLED = 0, // Fixed priority arbitration
    eENABLED = 1, // Round robin arbitration
  };
  
  enum class eHOE : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eHALT_ON_ERROR = 1, // Error causes HALT field to be automatically set to 1
  };
  
  enum class eHALT : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eHALT_DMA = 1, // eDMA operations halted
  };
  
  enum class eCLM : uint32_t {
    eCLM_OFF = 0, // Continuous link mode is off
    eCLM_ON = 1, // Continuous link mode is on
  };
  
  enum class eEMLM : uint32_t {
    eDISABLED = 0, // Disabled
    eENABLED = 1, // Enabled
  };
  
  enum class eECX : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eCANCEL = 1, // Cancel the remaining data transfer
  };
  
  enum class eCX : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eCANCEL = 1, // Cancel the remaining data transfer
  };
  
  enum class eACTIVE : uint32_t {
    eIDLE = 0, // eDMA is idle
    eACTIVE = 1, // eDMA is executing a channel
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eEDBG EDBG : 1;
    eERCA ERCA : 1;
    eERGA ERGA : 1;
    eHOE HOE : 1;
    eHALT HALT : 1;
    eCLM CLM : 1;
    eEMLM EMLM : 1;
    uint32_t GRP0PRI : 1;
    uint32_t _reserved_1 : 1;
    uint32_t GRP1PRI : 1;
    uint32_t _reserved_2 : 5;
    eECX ECX : 1;
    eCX CX : 1;
    uint32_t _reserved_3 : 6;
    uint32_t VERSION : 7;
    eACTIVE ACTIVE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x40070000); }
};

// Error Status
//
union ES {
  
  enum class eDBE : uint32_t {
    eNO_ERROR = 0, // No destination bus error.
    eERROR = 1, // The most-recently recorded error was a bus error on a destination write.
  };
  
  enum class eSBE : uint32_t {
    eNO_ERROR = 0, // No source bus error.
    eERROR = 1, // The most-recently recorded error was a bus error on a source read.
  };
  
  enum class eSGE : uint32_t {
    eNO_ERROR = 0, // No scatter/gather configuration error.
    eERROR = 1, // The most-recently recorded error was a configuration error detected in the TCDn_DLASTSGA field.
  };
  
  enum class eNCE : uint32_t {
    eNO_ERROR = 0, // No NBYTES/CITER configuration error.
    eERROR = 1, // The most-recently recorded error was a configuration error detected in the TCDn_NBYTES or TCDn_CITER fields. TCDn_NBYTES is not a multiple of TCDn_ATTR[SSIZE] and TCDn_ATTR[DSIZE], or TCDn_CITER[CITER] = 0, or TCDn_CITER[ELINK] is not equal to TCDn_BITER[ELINK].
  };
  
  enum class eDOE : uint32_t {
    eNO_ERROR = 0, // No destination offset configuration error.
    eERROR = 1, // The most-recently recorded error was a configuration error detected in the TCDn_DOFF field. TCDn_DOFF is inconsistent with TCDn_ATTR[DSIZE].
  };
  
  enum class eDAE : uint32_t {
    eNO_ERROR = 0, // No destination address configuration error.
    eERROR = 1, // The most-recently recorded error was a configuration error detected in the TCDn_DADDR field. TCDn_DADDR is inconsistent with TCDn_ATTR[DSIZE].
  };
  
  enum class eSOE : uint32_t {
    eNO_ERROR = 0, // No source offset configuration error.
    eERROR = 1, // The most-recently recorded error was a configuration error detected in the TCDn_SOFF field. TCDn_SOFF is inconsistent with TCDn_ATTR[SSIZE].
  };
  
  enum class eSAE : uint32_t {
    eNO_ERROR = 0, // No source address configuration error.
    eERROR = 1, // The most-recently recorded error was a configuration error detected in the TCDn_SADDR field. TCDn_SADDR is inconsistent with TCDn_ATTR[SSIZE].
  };
  
  enum class eCPE : uint32_t {
    eNO_ERROR = 0, // No channel priority error.
    eERROR = 1, // The most-recently recorded error was a configuration error in the channel priorities within a group. Channel priorities within a group are not unique.
  };
  
  enum class eGPE : uint32_t {
    eNO_ERROR = 0, // No group priority error.
    eERROR = 1, // The most-recently recorded error was a configuration error among the group priorities. All group priorities are not unique.
  };
  
  enum class eECX : uint32_t {
    eNO_CANCELS = 0, // No canceled transfers
    eCANCELED = 1, // The most-recently recorded entry was a canceled transfer initiated by the error cancel transfer field
  };
  
  enum class eVLD : uint32_t {
    eNO_ERROR = 0, // No ERR fields are 1
    eERROR = 1, // At least one ERR field has a value of 1, indicating a valid error exists that has not been cleared
  };
  
  // Bit field definition.
  struct {
    eDBE DBE : 1;
    eSBE SBE : 1;
    eSGE SGE : 1;
    eNCE NCE : 1;
    eDOE DOE : 1;
    eDAE DAE : 1;
    eSOE SOE : 1;
    eSAE SAE : 1;
    uint32_t ERRCHN : 5;
    uint32_t _reserved_0 : 1;
    eCPE CPE : 1;
    eGPE GPE : 1;
    eECX ECX : 1;
    uint32_t _reserved_1 : 14;
    eVLD VLD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ES &Instance() { return *reinterpret_cast<volatile ES*>(0x40070004); }
};

// Enable Request
//
union ERQ {
  
  enum class eERQ0 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 0 is disabled
    eENABLE = 1, // The DMA request signal for channel 0 is enabled
  };
  
  enum class eERQ1 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 1 is disabled
    eENABLE = 1, // The DMA request signal for channel 1 is enabled
  };
  
  enum class eERQ2 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 2 is disabled
    eENABLE = 1, // The DMA request signal for channel 2 is enabled
  };
  
  enum class eERQ3 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 3 is disabled
    eENABLE = 1, // The DMA request signal for channel 3 is enabled
  };
  
  enum class eERQ4 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 4 is disabled
    eENABLE = 1, // The DMA request signal for channel 4 is enabled
  };
  
  enum class eERQ5 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 5 is disabled
    eENABLE = 1, // The DMA request signal for channel 5 is enabled
  };
  
  enum class eERQ6 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 6 is disabled
    eENABLE = 1, // The DMA request signal for channel 6 is enabled
  };
  
  enum class eERQ7 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 7 is disabled
    eENABLE = 1, // The DMA request signal for channel 7 is enabled
  };
  
  enum class eERQ8 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 8 is disabled
    eENABLE = 1, // The DMA request signal for channel 8 is enabled
  };
  
  enum class eERQ9 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 9 is disabled
    eENABLE = 1, // The DMA request signal for channel 9 is enabled
  };
  
  enum class eERQ10 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 10 is disabled
    eENABLE = 1, // The DMA request signal for channel 10 is enabled
  };
  
  enum class eERQ11 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 11 is disabled
    eENABLE = 1, // The DMA request signal for channel 11 is enabled
  };
  
  enum class eERQ12 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 12 is disabled
    eENABLE = 1, // The DMA request signal for channel 12 is enabled
  };
  
  enum class eERQ13 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 13 is disabled
    eENABLE = 1, // The DMA request signal for channel 13 is enabled
  };
  
  enum class eERQ14 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 14 is disabled
    eENABLE = 1, // The DMA request signal for channel 14 is enabled
  };
  
  enum class eERQ15 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 15 is disabled
    eENABLE = 1, // The DMA request signal for channel 15 is enabled
  };
  
  enum class eERQ16 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 16 is disabled
    eENABLE = 1, // The DMA request signal for channel 16 is enabled
  };
  
  enum class eERQ17 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 17 is disabled
    eENABLE = 1, // The DMA request signal for channel 17 is enabled
  };
  
  enum class eERQ18 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 18 is disabled
    eENABLE = 1, // The DMA request signal for channel 18 is enabled
  };
  
  enum class eERQ19 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 19 is disabled
    eENABLE = 1, // The DMA request signal for channel 19 is enabled
  };
  
  enum class eERQ20 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 20 is disabled
    eENABLE = 1, // The DMA request signal for channel 20 is enabled
  };
  
  enum class eERQ21 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 21 is disabled
    eENABLE = 1, // The DMA request signal for channel 21 is enabled
  };
  
  enum class eERQ22 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 22 is disabled
    eENABLE = 1, // The DMA request signal for channel 22 is enabled
  };
  
  enum class eERQ23 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 23 is disabled
    eENABLE = 1, // The DMA request signal for channel 23 is enabled
  };
  
  enum class eERQ24 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 24 is disabled
    eENABLE = 1, // The DMA request signal for channel 24 is enabled
  };
  
  enum class eERQ25 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 25 is disabled
    eENABLE = 1, // The DMA request signal for channel 25 is enabled
  };
  
  enum class eERQ26 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 26 is disabled
    eENABLE = 1, // The DMA request signal for channel 26 is enabled
  };
  
  enum class eERQ27 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 27 is disabled
    eENABLE = 1, // The DMA request signal for channel 27 is enabled
  };
  
  enum class eERQ28 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 28 is disabled
    eENABLE = 1, // The DMA request signal for channel 28 is enabled
  };
  
  enum class eERQ29 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 29 is disabled
    eENABLE = 1, // The DMA request signal for channel 29 is enabled
  };
  
  enum class eERQ30 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 30 is disabled
    eENABLE = 1, // The DMA request signal for channel 30 is enabled
  };
  
  enum class eERQ31 : uint32_t {
    eDISABLE = 0, // The DMA request signal for channel 31 is disabled
    eENABLE = 1, // The DMA request signal for channel 31 is enabled
  };
  
  // Bit field definition.
  struct {
    eERQ0 ERQ0 : 1;
    eERQ1 ERQ1 : 1;
    eERQ2 ERQ2 : 1;
    eERQ3 ERQ3 : 1;
    eERQ4 ERQ4 : 1;
    eERQ5 ERQ5 : 1;
    eERQ6 ERQ6 : 1;
    eERQ7 ERQ7 : 1;
    eERQ8 ERQ8 : 1;
    eERQ9 ERQ9 : 1;
    eERQ10 ERQ10 : 1;
    eERQ11 ERQ11 : 1;
    eERQ12 ERQ12 : 1;
    eERQ13 ERQ13 : 1;
    eERQ14 ERQ14 : 1;
    eERQ15 ERQ15 : 1;
    eERQ16 ERQ16 : 1;
    eERQ17 ERQ17 : 1;
    eERQ18 ERQ18 : 1;
    eERQ19 ERQ19 : 1;
    eERQ20 ERQ20 : 1;
    eERQ21 ERQ21 : 1;
    eERQ22 ERQ22 : 1;
    eERQ23 ERQ23 : 1;
    eERQ24 ERQ24 : 1;
    eERQ25 ERQ25 : 1;
    eERQ26 ERQ26 : 1;
    eERQ27 ERQ27 : 1;
    eERQ28 ERQ28 : 1;
    eERQ29 ERQ29 : 1;
    eERQ30 ERQ30 : 1;
    eERQ31 ERQ31 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERQ &Instance() { return *reinterpret_cast<volatile ERQ*>(0x4007000C); }
};

// Enable Error Interrupt
//
union EEI {
  
  enum class eEEI0 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 0 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 0 generates an error interrupt request
  };
  
  enum class eEEI1 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 1 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 1 generates an error interrupt request
  };
  
  enum class eEEI2 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 2 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 2 generates an error interrupt request
  };
  
  enum class eEEI3 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 3 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 3 generates an error interrupt request
  };
  
  enum class eEEI4 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 4 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 4 generates an error interrupt request
  };
  
  enum class eEEI5 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 5 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 5 generates an error interrupt request
  };
  
  enum class eEEI6 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 6 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 6 generates an error interrupt request
  };
  
  enum class eEEI7 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 7 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 7 generates an error interrupt request
  };
  
  enum class eEEI8 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 8 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 8 generates an error interrupt request
  };
  
  enum class eEEI9 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 9 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 9 generates an error interrupt request
  };
  
  enum class eEEI10 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 10 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 10 generates an error interrupt request
  };
  
  enum class eEEI11 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 11 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 11 generates an error interrupt request
  };
  
  enum class eEEI12 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 12 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 12 generates an error interrupt request
  };
  
  enum class eEEI13 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 13 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 13 generates an error interrupt request
  };
  
  enum class eEEI14 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 14 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 14 generates an error interrupt request
  };
  
  enum class eEEI15 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 15 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 15 generates an error interrupt request
  };
  
  enum class eEEI16 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 16 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 16 generates an error interrupt request
  };
  
  enum class eEEI17 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 17 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 17 generates an error interrupt request
  };
  
  enum class eEEI18 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 18 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 18 generates an error interrupt request
  };
  
  enum class eEEI19 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 19 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 19 generates an error interrupt request
  };
  
  enum class eEEI20 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 20 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 20 generates an error interrupt request
  };
  
  enum class eEEI21 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 21 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 21 generates an error interrupt request
  };
  
  enum class eEEI22 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 22 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 22 generates an error interrupt request
  };
  
  enum class eEEI23 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 23 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 23 generates an error interrupt request
  };
  
  enum class eEEI24 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 24 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 24 generates an error interrupt request
  };
  
  enum class eEEI25 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 25 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 25 generates an error interrupt request
  };
  
  enum class eEEI26 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 26 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 26 generates an error interrupt request
  };
  
  enum class eEEI27 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 27 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 27 generates an error interrupt request
  };
  
  enum class eEEI28 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 28 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 28 generates an error interrupt request
  };
  
  enum class eEEI29 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 29 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 29 generates an error interrupt request
  };
  
  enum class eEEI30 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 30 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 30 generates an error interrupt request
  };
  
  enum class eEEI31 : uint32_t {
    eNO_INTERRUPT = 0, // An error on channel 31 does not generate an error interrupt
    eINTERRUPT = 1, // An error on channel 31 generates an error interrupt request
  };
  
  // Bit field definition.
  struct {
    eEEI0 EEI0 : 1;
    eEEI1 EEI1 : 1;
    eEEI2 EEI2 : 1;
    eEEI3 EEI3 : 1;
    eEEI4 EEI4 : 1;
    eEEI5 EEI5 : 1;
    eEEI6 EEI6 : 1;
    eEEI7 EEI7 : 1;
    eEEI8 EEI8 : 1;
    eEEI9 EEI9 : 1;
    eEEI10 EEI10 : 1;
    eEEI11 EEI11 : 1;
    eEEI12 EEI12 : 1;
    eEEI13 EEI13 : 1;
    eEEI14 EEI14 : 1;
    eEEI15 EEI15 : 1;
    eEEI16 EEI16 : 1;
    eEEI17 EEI17 : 1;
    eEEI18 EEI18 : 1;
    eEEI19 EEI19 : 1;
    eEEI20 EEI20 : 1;
    eEEI21 EEI21 : 1;
    eEEI22 EEI22 : 1;
    eEEI23 EEI23 : 1;
    eEEI24 EEI24 : 1;
    eEEI25 EEI25 : 1;
    eEEI26 EEI26 : 1;
    eEEI27 EEI27 : 1;
    eEEI28 EEI28 : 1;
    eEEI29 EEI29 : 1;
    eEEI30 EEI30 : 1;
    eEEI31 EEI31 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  EEI() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile EEI &Instance() { return *reinterpret_cast<volatile EEI*>(0x40070014); }
};

// Clear Enable Error Interrupt
//
union CEEI {
  
  enum class eCAEE : uint32_t {
    eCLEAR_EEI = 0, // Write 0 only to the EEI field specified in the CEEI field
    eCLEAR_ALL = 1, // Write 0 to all fields in EEI
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation, ignore the other fields in this register
  };
  
  // Bit field definition.
  struct {
    uint32_t CEEI : 5;
    uint32_t _reserved_0 : 1;
    eCAEE CAEE : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CEEI() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CEEI &Instance() { return *reinterpret_cast<volatile CEEI*>(0x40070018); }
};

// Set Enable Error Interrupt
//
union SEEI {
  
  enum class eSAEE : uint32_t {
    eSET_EEI = 0, // Write 1 only to the EEI field specified in the SEEI field
    eSET_ALL = 1, // Writes 1 to all fields in EEI
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation, ignore the other fields in this register
  };
  
  // Bit field definition.
  struct {
    uint32_t SEEI : 5;
    uint32_t _reserved_0 : 1;
    eSAEE SAEE : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEEI() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEEI &Instance() { return *reinterpret_cast<volatile SEEI*>(0x40070019); }
};

// Clear Enable Request
//
union CERQ {
  
  enum class eCAER : uint32_t {
    eCLEAR_ERQ = 0, // Write 0 to only the ERQ field specified in the CERQ field
    eCLEAR_ALL = 1, // Write 0 to all fields in ERQ
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation, ignore the other fields in this register
  };
  
  // Bit field definition.
  struct {
    uint32_t CERQ : 5;
    uint32_t _reserved_0 : 1;
    eCAER CAER : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CERQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CERQ &Instance() { return *reinterpret_cast<volatile CERQ*>(0x4007001A); }
};

// Set Enable Request
//
union SERQ {
  
  enum class eSAER : uint32_t {
    eSET_ERQ = 0, // Write 1 to only the ERQ field specified in the SERQ field
    eSET_ALL = 1, // Write 1 to all fields in ERQ
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation, ignore the other fields in this register
  };
  
  // Bit field definition.
  struct {
    uint32_t SERQ : 5;
    uint32_t _reserved_0 : 1;
    eSAER SAER : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SERQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SERQ &Instance() { return *reinterpret_cast<volatile SERQ*>(0x4007001B); }
};

// Clear DONE Status Bit
//
union CDNE {
  
  enum class eCADN : uint32_t {
    eCLEAR_DONE = 0, // Writes 0 to only the TCDn_CSR[DONE] field specified in the CDNE field
    eCLEAR_ALL = 1, // Writes 0 to all bits in TCDn_CSR[DONE]
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation; all other fields in this register are ignored.
  };
  
  // Bit field definition.
  struct {
    uint32_t CDNE : 5;
    uint32_t _reserved_0 : 1;
    eCADN CADN : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CDNE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CDNE &Instance() { return *reinterpret_cast<volatile CDNE*>(0x4007001C); }
};

// Set START Bit
//
union SSRT {
  
  enum class eSAST : uint32_t {
    eSET_START = 0, // Write 1 to only the TCDn_CSR[START] field specified in the SSRT field
    eSET_ALL = 1, // Write 1 to all bits in TCDn_CSR[START]
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation; all other fields in this register are ignored.
  };
  
  // Bit field definition.
  struct {
    uint32_t SSRT : 5;
    uint32_t _reserved_0 : 1;
    eSAST SAST : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SSRT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SSRT &Instance() { return *reinterpret_cast<volatile SSRT*>(0x4007001D); }
};

// Clear Error
//
union CERR {
  
  enum class eCAEI : uint32_t {
    eCLEAR_ERR = 0, // Write 0 to only the ERR field specified in the CERR field
    eCLEAR_ALL = 1, // Write 0 to all fields in ERR
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation; all other fields in this register are ignored.
  };
  
  // Bit field definition.
  struct {
    uint32_t CERR : 5;
    uint32_t _reserved_0 : 1;
    eCAEI CAEI : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CERR &Instance() { return *reinterpret_cast<volatile CERR*>(0x4007001E); }
};

// Clear Interrupt Request
//
union CINT {
  
  enum class eCAIR : uint32_t {
    eCLEAR_INT = 0, // Clear only the INT field specified in the CINT field
    eCLEAR_ALL = 1, // Clear all bits in INT
  };
  
  enum class eNOP : uint32_t {
    eNORMAL_OPS = 0, // Normal operation
    eNO_OPS = 1, // No operation; all other fields in this register are ignored.
  };
  
  // Bit field definition.
  struct {
    uint32_t CINT : 5;
    uint32_t _reserved_0 : 1;
    eCAIR CAIR : 1;
    eNOP NOP : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CINT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CINT &Instance() { return *reinterpret_cast<volatile CINT*>(0x4007001F); }
};

// Interrupt Request
//
union INT {
  
  enum class eINT0 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 0 is cleared
    eACTIVE = 1, // The interrupt request for channel 0 is active
  };
  
  enum class eINT1 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 1 is cleared
    eACTIVE = 1, // The interrupt request for channel 1 is active
  };
  
  enum class eINT2 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 2 is cleared
    eACTIVE = 1, // The interrupt request for channel 2 is active
  };
  
  enum class eINT3 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 3 is cleared
    eACTIVE = 1, // The interrupt request for channel 3 is active
  };
  
  enum class eINT4 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 4 is cleared
    eACTIVE = 1, // The interrupt request for channel 4 is active
  };
  
  enum class eINT5 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 5 is cleared
    eACTIVE = 1, // The interrupt request for channel 5 is active
  };
  
  enum class eINT6 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 6 is cleared
    eCTIVE = 1, // The interrupt request for channel 6 is active
  };
  
  enum class eINT7 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 7 is cleared
    eACTIVE = 1, // The interrupt request for channel 7 is active
  };
  
  enum class eINT8 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 8 is cleared
    eACTIVE = 1, // The interrupt request for channel 8 is active
  };
  
  enum class eINT9 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 9 is cleared
    eACTIVE = 1, // The interrupt request for channel 9 is active
  };
  
  enum class eINT10 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 10 is cleared
    eACTIVE = 1, // The interrupt request for channel 10 is active
  };
  
  enum class eINT11 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 11 is cleared
    eACTIVE = 1, // The interrupt request for channel 11 is active
  };
  
  enum class eINT12 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 12 is cleared
    eACTIVE = 1, // The interrupt request for channel 12 is active
  };
  
  enum class eINT13 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 13 is cleared
    eACTIVE = 1, // The interrupt request for channel 13 is active
  };
  
  enum class eINT14 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 14 is cleared
    eACTIVE = 1, // The interrupt request for channel 14 is active
  };
  
  enum class eINT15 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 15 is cleared
    eACTIVE = 1, // The interrupt request for channel 15 is active
  };
  
  enum class eINT16 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 16 is cleared
    eACTIVE = 1, // The interrupt request for channel 16 is active
  };
  
  enum class eINT17 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 17 is cleared
    eACTIVE = 1, // The interrupt request for channel 17 is active
  };
  
  enum class eINT18 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 18 is cleared
    eACTIVE = 1, // The interrupt request for channel 18 is active
  };
  
  enum class eINT19 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 19 is cleared
    eACTIVE = 1, // The interrupt request for channel 19 is active
  };
  
  enum class eINT20 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 20 is cleared
    eACTIVE = 1, // The interrupt request for channel 20 is active
  };
  
  enum class eINT21 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 21 is cleared
    eACTIVE = 1, // The interrupt request for channel 21 is active
  };
  
  enum class eINT22 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 22 is cleared
    eACTIVE = 1, // The interrupt request for channel 22 is active
  };
  
  enum class eINT23 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 23 is cleared
    eACTIVE = 1, // The interrupt request for channel 23 is active
  };
  
  enum class eINT24 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 24 is cleared
    eACTIVE = 1, // The interrupt request for channel 24 is active
  };
  
  enum class eINT25 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 25 is cleared
    eACTIVE = 1, // The interrupt request for channel 25 is active
  };
  
  enum class eINT26 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 26 is cleared
    eACTIVE = 1, // The interrupt request for channel 26 is active
  };
  
  enum class eINT27 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 27 is cleared
    eACTIVE = 1, // The interrupt request for channel 27 is active
  };
  
  enum class eINT28 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 28 is cleared
    eACTIVE = 1, // The interrupt request for channel 28 is active
  };
  
  enum class eINT29 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 29 is cleared
    eACTIVE = 1, // The interrupt request for channel 29 is active
  };
  
  enum class eINT30 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 30 is cleared
    eACTIVE = 1, // The interrupt request for channel 30 is active
  };
  
  enum class eINT31 : uint32_t {
    eNOT_ACTIVE = 0, // The interrupt request for channel 31 is cleared
    eACTIVE = 1, // The interrupt request for channel 31 is active
  };
  
  // Bit field definition.
  struct {
    eINT0 INT0 : 1;
    eINT1 INT1 : 1;
    eINT2 INT2 : 1;
    eINT3 INT3 : 1;
    eINT4 INT4 : 1;
    eINT5 INT5 : 1;
    eINT6 INT6 : 1;
    eINT7 INT7 : 1;
    eINT8 INT8 : 1;
    eINT9 INT9 : 1;
    eINT10 INT10 : 1;
    eINT11 INT11 : 1;
    eINT12 INT12 : 1;
    eINT13 INT13 : 1;
    eINT14 INT14 : 1;
    eINT15 INT15 : 1;
    eINT16 INT16 : 1;
    eINT17 INT17 : 1;
    eINT18 INT18 : 1;
    eINT19 INT19 : 1;
    eINT20 INT20 : 1;
    eINT21 INT21 : 1;
    eINT22 INT22 : 1;
    eINT23 INT23 : 1;
    eINT24 INT24 : 1;
    eINT25 INT25 : 1;
    eINT26 INT26 : 1;
    eINT27 INT27 : 1;
    eINT28 INT28 : 1;
    eINT29 INT29 : 1;
    eINT30 INT30 : 1;
    eINT31 INT31 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT &Instance() { return *reinterpret_cast<volatile INT*>(0x40070024); }
};

// Error
//
union ERR {
  
  enum class eERR0 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR1 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR2 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR3 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR4 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR5 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR6 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR7 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR8 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR9 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR10 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR11 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR12 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR13 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR14 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR15 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR16 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR17 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR18 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR19 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR20 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR21 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR22 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR23 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR24 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR25 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR26 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR27 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR28 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR29 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR30 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  enum class eERR31 : uint32_t {
    eNO_ERR = 0, // No error in this channel has occurred
    eERR = 1, // An error in this channel has occurred
  };
  
  // Bit field definition.
  struct {
    eERR0 ERR0 : 1;
    eERR1 ERR1 : 1;
    eERR2 ERR2 : 1;
    eERR3 ERR3 : 1;
    eERR4 ERR4 : 1;
    eERR5 ERR5 : 1;
    eERR6 ERR6 : 1;
    eERR7 ERR7 : 1;
    eERR8 ERR8 : 1;
    eERR9 ERR9 : 1;
    eERR10 ERR10 : 1;
    eERR11 ERR11 : 1;
    eERR12 ERR12 : 1;
    eERR13 ERR13 : 1;
    eERR14 ERR14 : 1;
    eERR15 ERR15 : 1;
    eERR16 ERR16 : 1;
    eERR17 ERR17 : 1;
    eERR18 ERR18 : 1;
    eERR19 ERR19 : 1;
    eERR20 ERR20 : 1;
    eERR21 ERR21 : 1;
    eERR22 ERR22 : 1;
    eERR23 ERR23 : 1;
    eERR24 ERR24 : 1;
    eERR25 ERR25 : 1;
    eERR26 ERR26 : 1;
    eERR27 ERR27 : 1;
    eERR28 ERR28 : 1;
    eERR29 ERR29 : 1;
    eERR30 ERR30 : 1;
    eERR31 ERR31 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR &Instance() { return *reinterpret_cast<volatile ERR*>(0x4007002C); }
};

// Hardware Request Status
//
union HRS {
  
  enum class eHRS0 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 0 is not present
    eHWRQST = 1, // A hardware service request for channel 0 is present
  };
  
  enum class eHRS1 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 1 is not present
    eHWRQST = 1, // A hardware service request for channel 1 is present
  };
  
  enum class eHRS2 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 2 is not present
    eHWRQST = 1, // A hardware service request for channel 2 is present
  };
  
  enum class eHRS3 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 3 is not present
    eHWRQST = 1, // A hardware service request for channel 3 is present
  };
  
  enum class eHRS4 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 4 is not present
    eHWRQST = 1, // A hardware service request for channel 4 is present
  };
  
  enum class eHRS5 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 5 is not present
    eHWRQST = 1, // A hardware service request for channel 5 is present
  };
  
  enum class eHRS6 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 6 is not present
    eHWRQST = 1, // A hardware service request for channel 6 is present
  };
  
  enum class eHRS7 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 7 is not present
    eHWRQST = 1, // A hardware service request for channel 7 is present
  };
  
  enum class eHRS8 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 8 is not present
    eHWRQST = 1, // A hardware service request for channel 8 is present
  };
  
  enum class eHRS9 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 9 is not present
    eHWRQST = 1, // A hardware service request for channel 9 is present
  };
  
  enum class eHRS10 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 10 is not present
    eHWRQST = 1, // A hardware service request for channel 10 is present
  };
  
  enum class eHRS11 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 11 is not present
    eHWRQST = 1, // A hardware service request for channel 11 is present
  };
  
  enum class eHRS12 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 12 is not present
    eHWRQST = 1, // A hardware service request for channel 12 is present
  };
  
  enum class eHRS13 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 13 is not present
    eHWRQST = 1, // A hardware service request for channel 13 is present
  };
  
  enum class eHRS14 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 14 is not present
    eHWRQST = 1, // A hardware service request for channel 14 is present
  };
  
  enum class eHRS15 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 15 is not present
    eHWRQST = 1, // A hardware service request for channel 15 is present
  };
  
  enum class eHRS16 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 16 is not present
    eHWRQST = 1, // A hardware service request for channel 16 is present
  };
  
  enum class eHRS17 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 17 is not present
    eHWRQST = 1, // A hardware service request for channel 17 is present
  };
  
  enum class eHRS18 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 18 is not present
    eHWRQST = 1, // A hardware service request for channel 18 is present
  };
  
  enum class eHRS19 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 19 is not present
    eHWRQST = 1, // A hardware service request for channel 19 is present
  };
  
  enum class eHRS20 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 20 is not present
    eHWRQST = 1, // A hardware service request for channel 20 is present
  };
  
  enum class eHRS21 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 21 is not present
    eHWRQST = 1, // A hardware service request for channel 21 is present
  };
  
  enum class eHRS22 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 22 is not present
    eHWRQST = 1, // A hardware service request for channel 22 is present
  };
  
  enum class eHRS23 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 23 is not present
    eHWRQST = 1, // A hardware service request for channel 23 is present
  };
  
  enum class eHRS24 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 24 is not present
    eHWRQST = 1, // A hardware service request for channel 24 is present
  };
  
  enum class eHRS25 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 25 is not present
    eHWRQST = 1, // A hardware service request for channel 25 is present
  };
  
  enum class eHRS26 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 26 is not present
    eHWRQST = 1, // A hardware service request for channel 26 is present
  };
  
  enum class eHRS27 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 27 is not present
    eHWRQST = 1, // A hardware service request for channel 27 is present
  };
  
  enum class eHRS28 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 28 is not present
    eHWRQST = 1, // A hardware service request for channel 28 is present
  };
  
  enum class eHRS29 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 29 is not preset
    eHWRQST = 1, // A hardware service request for channel 29 is present
  };
  
  enum class eHRS30 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 30 is not present
    eHWRQST = 1, // A hardware service request for channel 30 is present
  };
  
  enum class eHRS31 : uint32_t {
    eNO_HWRQST = 0, // A hardware service request for channel 31 is not present
    eHWRQST = 1, // A hardware service request for channel 31 is present
  };
  
  // Bit field definition.
  struct {
    eHRS0 HRS0 : 1;
    eHRS1 HRS1 : 1;
    eHRS2 HRS2 : 1;
    eHRS3 HRS3 : 1;
    eHRS4 HRS4 : 1;
    eHRS5 HRS5 : 1;
    eHRS6 HRS6 : 1;
    eHRS7 HRS7 : 1;
    eHRS8 HRS8 : 1;
    eHRS9 HRS9 : 1;
    eHRS10 HRS10 : 1;
    eHRS11 HRS11 : 1;
    eHRS12 HRS12 : 1;
    eHRS13 HRS13 : 1;
    eHRS14 HRS14 : 1;
    eHRS15 HRS15 : 1;
    eHRS16 HRS16 : 1;
    eHRS17 HRS17 : 1;
    eHRS18 HRS18 : 1;
    eHRS19 HRS19 : 1;
    eHRS20 HRS20 : 1;
    eHRS21 HRS21 : 1;
    eHRS22 HRS22 : 1;
    eHRS23 HRS23 : 1;
    eHRS24 HRS24 : 1;
    eHRS25 HRS25 : 1;
    eHRS26 HRS26 : 1;
    eHRS27 HRS27 : 1;
    eHRS28 HRS28 : 1;
    eHRS29 HRS29 : 1;
    eHRS30 HRS30 : 1;
    eHRS31 HRS31 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HRS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HRS &Instance() { return *reinterpret_cast<volatile HRS*>(0x40070034); }
};

// Enable Asynchronous Request in Stop
//
union EARS {
  
  enum class eEDREQ_0 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 0
    eENABLE = 1, // Enable asynchronous DMA request for channel 0
  };
  
  enum class eEDREQ_1 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 1
    eENABLE = 1, // Enable asynchronous DMA request for channel 1
  };
  
  enum class eEDREQ_2 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 2
    eENABLE = 1, // Enable asynchronous DMA request for channel 2
  };
  
  enum class eEDREQ_3 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 3
    eENABLE = 1, // Enable asynchronous DMA request for channel 3
  };
  
  enum class eEDREQ_4 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 4
    eENABLE = 1, // Enable asynchronous DMA request for channel 4
  };
  
  enum class eEDREQ_5 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 5
    eENABLE = 1, // Enable asynchronous DMA request for channel 5
  };
  
  enum class eEDREQ_6 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 6
    eENABLE = 1, // Enable asynchronous DMA request for channel 6
  };
  
  enum class eEDREQ_7 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 7
    eENABLE = 1, // Enable asynchronous DMA request for channel 7
  };
  
  enum class eEDREQ_8 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 8
    eENABLE = 1, // Enable asynchronous DMA request for channel 8
  };
  
  enum class eEDREQ_9 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 9
    eENABLE = 1, // Enable asynchronous DMA request for channel 9
  };
  
  enum class eEDREQ_10 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 10
    eENABLE = 1, // Enable asynchronous DMA request for channel 10
  };
  
  enum class eEDREQ_11 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 11
    eENABLE = 1, // Enable asynchronous DMA request for channel 11
  };
  
  enum class eEDREQ_12 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 12
    eENABLE = 1, // Enable asynchronous DMA request for channel 12
  };
  
  enum class eEDREQ_13 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 13
    eENABLE = 1, // Enable asynchronous DMA request for channel 13
  };
  
  enum class eEDREQ_14 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 14
    eENABLE = 1, // Enable asynchronous DMA request for channel 14
  };
  
  enum class eEDREQ_15 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 15
    eENABLE = 1, // Enable asynchronous DMA request for channel 15
  };
  
  enum class eEDREQ_16 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 16
    eENABLE = 1, // Enable asynchronous DMA request for channel 16
  };
  
  enum class eEDREQ_17 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 17
    eENABLE = 1, // Enable asynchronous DMA request for channel 17
  };
  
  enum class eEDREQ_18 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 18
    eENABLE = 1, // Enable asynchronous DMA request for channel 18
  };
  
  enum class eEDREQ_19 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 19
    eENABLE = 1, // Enable asynchronous DMA request for channel 19
  };
  
  enum class eEDREQ_20 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 20
    eENABLE = 1, // Enable asynchronous DMA request for channel 20
  };
  
  enum class eEDREQ_21 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 21
    eENABLE = 1, // Enable asynchronous DMA request for channel 21
  };
  
  enum class eEDREQ_22 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 22
    eENABLE = 1, // Enable asynchronous DMA request for channel 22
  };
  
  enum class eEDREQ_23 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 23
    eENABLE = 1, // Enable asynchronous DMA request for channel 23
  };
  
  enum class eEDREQ_24 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 24
    eENABLE = 1, // Enable asynchronous DMA request for channel 24
  };
  
  enum class eEDREQ_25 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 25
    eENABLE = 1, // Enable asynchronous DMA request for channel 25
  };
  
  enum class eEDREQ_26 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 26
    eENABLE = 1, // Enable asynchronous DMA request for channel 26
  };
  
  enum class eEDREQ_27 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 27
    eENABLE = 1, // Enable asynchronous DMA request for channel 27
  };
  
  enum class eEDREQ_28 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 28
    eENABLE = 1, // Enable asynchronous DMA request for channel 28
  };
  
  enum class eEDREQ_29 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 29
    eENABLE = 1, // Enable asynchronous DMA request for channel 29
  };
  
  enum class eEDREQ_30 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 30
    eENABLE = 1, // Enable asynchronous DMA request for channel 30
  };
  
  enum class eEDREQ_31 : uint32_t {
    eDISABLE = 0, // Disable asynchronous DMA request for channel 31
    eENABLE = 1, // Enable asynchronous DMA request for channel 31
  };
  
  // Bit field definition.
  struct {
    eEDREQ_0 EDREQ_0 : 1;
    eEDREQ_1 EDREQ_1 : 1;
    eEDREQ_2 EDREQ_2 : 1;
    eEDREQ_3 EDREQ_3 : 1;
    eEDREQ_4 EDREQ_4 : 1;
    eEDREQ_5 EDREQ_5 : 1;
    eEDREQ_6 EDREQ_6 : 1;
    eEDREQ_7 EDREQ_7 : 1;
    eEDREQ_8 EDREQ_8 : 1;
    eEDREQ_9 EDREQ_9 : 1;
    eEDREQ_10 EDREQ_10 : 1;
    eEDREQ_11 EDREQ_11 : 1;
    eEDREQ_12 EDREQ_12 : 1;
    eEDREQ_13 EDREQ_13 : 1;
    eEDREQ_14 EDREQ_14 : 1;
    eEDREQ_15 EDREQ_15 : 1;
    eEDREQ_16 EDREQ_16 : 1;
    eEDREQ_17 EDREQ_17 : 1;
    eEDREQ_18 EDREQ_18 : 1;
    eEDREQ_19 EDREQ_19 : 1;
    eEDREQ_20 EDREQ_20 : 1;
    eEDREQ_21 EDREQ_21 : 1;
    eEDREQ_22 EDREQ_22 : 1;
    eEDREQ_23 EDREQ_23 : 1;
    eEDREQ_24 EDREQ_24 : 1;
    eEDREQ_25 EDREQ_25 : 1;
    eEDREQ_26 EDREQ_26 : 1;
    eEDREQ_27 EDREQ_27 : 1;
    eEDREQ_28 EDREQ_28 : 1;
    eEDREQ_29 EDREQ_29 : 1;
    eEDREQ_30 EDREQ_30 : 1;
    eEDREQ_31 EDREQ_31 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  EARS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile EARS &Instance() { return *reinterpret_cast<volatile EARS*>(0x40070044); }
};

// Channel Priority
//
union DCHPRI3 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI3() = delete;
  inline void Reset() volatile { this->value = 0x00000003; }
  static inline volatile DCHPRI3 &Instance() { return *reinterpret_cast<volatile DCHPRI3*>(0x40070100); }
};

// Channel Priority
//
union DCHPRI2 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI2() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile DCHPRI2 &Instance() { return *reinterpret_cast<volatile DCHPRI2*>(0x40070101); }
};

// Channel Priority
//
union DCHPRI1 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI1() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile DCHPRI1 &Instance() { return *reinterpret_cast<volatile DCHPRI1*>(0x40070102); }
};

// Channel Priority
//
union DCHPRI0 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCHPRI0 &Instance() { return *reinterpret_cast<volatile DCHPRI0*>(0x40070103); }
};

// Channel Priority
//
union DCHPRI7 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI7() = delete;
  inline void Reset() volatile { this->value = 0x00000007; }
  static inline volatile DCHPRI7 &Instance() { return *reinterpret_cast<volatile DCHPRI7*>(0x40070104); }
};

// Channel Priority
//
union DCHPRI6 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI6() = delete;
  inline void Reset() volatile { this->value = 0x00000006; }
  static inline volatile DCHPRI6 &Instance() { return *reinterpret_cast<volatile DCHPRI6*>(0x40070105); }
};

// Channel Priority
//
union DCHPRI5 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI5() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile DCHPRI5 &Instance() { return *reinterpret_cast<volatile DCHPRI5*>(0x40070106); }
};

// Channel Priority
//
union DCHPRI4 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI4() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile DCHPRI4 &Instance() { return *reinterpret_cast<volatile DCHPRI4*>(0x40070107); }
};

// Channel Priority
//
union DCHPRI11 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI11() = delete;
  inline void Reset() volatile { this->value = 0x0000000B; }
  static inline volatile DCHPRI11 &Instance() { return *reinterpret_cast<volatile DCHPRI11*>(0x40070108); }
};

// Channel Priority
//
union DCHPRI10 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI10() = delete;
  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile DCHPRI10 &Instance() { return *reinterpret_cast<volatile DCHPRI10*>(0x40070109); }
};

// Channel Priority
//
union DCHPRI9 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI9() = delete;
  inline void Reset() volatile { this->value = 0x00000009; }
  static inline volatile DCHPRI9 &Instance() { return *reinterpret_cast<volatile DCHPRI9*>(0x4007010A); }
};

// Channel Priority
//
union DCHPRI8 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI8() = delete;
  inline void Reset() volatile { this->value = 0x00000008; }
  static inline volatile DCHPRI8 &Instance() { return *reinterpret_cast<volatile DCHPRI8*>(0x4007010B); }
};

// Channel Priority
//
union DCHPRI15 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI15() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile DCHPRI15 &Instance() { return *reinterpret_cast<volatile DCHPRI15*>(0x4007010C); }
};

// Channel Priority
//
union DCHPRI14 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI14() = delete;
  inline void Reset() volatile { this->value = 0x0000000E; }
  static inline volatile DCHPRI14 &Instance() { return *reinterpret_cast<volatile DCHPRI14*>(0x4007010D); }
};

// Channel Priority
//
union DCHPRI13 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI13() = delete;
  inline void Reset() volatile { this->value = 0x0000000D; }
  static inline volatile DCHPRI13 &Instance() { return *reinterpret_cast<volatile DCHPRI13*>(0x4007010E); }
};

// Channel Priority
//
union DCHPRI12 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI12() = delete;
  inline void Reset() volatile { this->value = 0x0000000C; }
  static inline volatile DCHPRI12 &Instance() { return *reinterpret_cast<volatile DCHPRI12*>(0x4007010F); }
};

// Channel Priority
//
union DCHPRI19 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI19() = delete;
  inline void Reset() volatile { this->value = 0x00000013; }
  static inline volatile DCHPRI19 &Instance() { return *reinterpret_cast<volatile DCHPRI19*>(0x40070110); }
};

// Channel Priority
//
union DCHPRI18 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI18() = delete;
  inline void Reset() volatile { this->value = 0x00000012; }
  static inline volatile DCHPRI18 &Instance() { return *reinterpret_cast<volatile DCHPRI18*>(0x40070111); }
};

// Channel Priority
//
union DCHPRI17 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI17() = delete;
  inline void Reset() volatile { this->value = 0x00000011; }
  static inline volatile DCHPRI17 &Instance() { return *reinterpret_cast<volatile DCHPRI17*>(0x40070112); }
};

// Channel Priority
//
union DCHPRI16 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI16() = delete;
  inline void Reset() volatile { this->value = 0x00000010; }
  static inline volatile DCHPRI16 &Instance() { return *reinterpret_cast<volatile DCHPRI16*>(0x40070113); }
};

// Channel Priority
//
union DCHPRI23 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI23() = delete;
  inline void Reset() volatile { this->value = 0x00000017; }
  static inline volatile DCHPRI23 &Instance() { return *reinterpret_cast<volatile DCHPRI23*>(0x40070114); }
};

// Channel Priority
//
union DCHPRI22 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI22() = delete;
  inline void Reset() volatile { this->value = 0x00000016; }
  static inline volatile DCHPRI22 &Instance() { return *reinterpret_cast<volatile DCHPRI22*>(0x40070115); }
};

// Channel Priority
//
union DCHPRI21 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI21() = delete;
  inline void Reset() volatile { this->value = 0x00000015; }
  static inline volatile DCHPRI21 &Instance() { return *reinterpret_cast<volatile DCHPRI21*>(0x40070116); }
};

// Channel Priority
//
union DCHPRI20 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI20() = delete;
  inline void Reset() volatile { this->value = 0x00000014; }
  static inline volatile DCHPRI20 &Instance() { return *reinterpret_cast<volatile DCHPRI20*>(0x40070117); }
};

// Channel Priority
//
union DCHPRI27 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI27() = delete;
  inline void Reset() volatile { this->value = 0x0000001B; }
  static inline volatile DCHPRI27 &Instance() { return *reinterpret_cast<volatile DCHPRI27*>(0x40070118); }
};

// Channel Priority
//
union DCHPRI26 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI26() = delete;
  inline void Reset() volatile { this->value = 0x0000001A; }
  static inline volatile DCHPRI26 &Instance() { return *reinterpret_cast<volatile DCHPRI26*>(0x40070119); }
};

// Channel Priority
//
union DCHPRI25 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI25() = delete;
  inline void Reset() volatile { this->value = 0x00000019; }
  static inline volatile DCHPRI25 &Instance() { return *reinterpret_cast<volatile DCHPRI25*>(0x4007011A); }
};

// Channel Priority
//
union DCHPRI24 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI24() = delete;
  inline void Reset() volatile { this->value = 0x00000018; }
  static inline volatile DCHPRI24 &Instance() { return *reinterpret_cast<volatile DCHPRI24*>(0x4007011B); }
};

// Channel Priority
//
union DCHPRI31 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI31() = delete;
  inline void Reset() volatile { this->value = 0x0000001F; }
  static inline volatile DCHPRI31 &Instance() { return *reinterpret_cast<volatile DCHPRI31*>(0x4007011C); }
};

// Channel Priority
//
union DCHPRI30 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI30() = delete;
  inline void Reset() volatile { this->value = 0x0000001E; }
  static inline volatile DCHPRI30 &Instance() { return *reinterpret_cast<volatile DCHPRI30*>(0x4007011D); }
};

// Channel Priority
//
union DCHPRI29 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI29() = delete;
  inline void Reset() volatile { this->value = 0x0000001D; }
  static inline volatile DCHPRI29 &Instance() { return *reinterpret_cast<volatile DCHPRI29*>(0x4007011E); }
};

// Channel Priority
//
union DCHPRI28 {
  
  enum class eDPA : uint32_t {
    eENABLED = 0, // Channel n can suspend a lower priority channel
    eDISABLED = 1, // Channel n cannot suspend any channel, regardless of channel priority
  };
  
  enum class eECP : uint32_t {
    eDISABLED = 0, // Channel n cannot be suspended by a higher priority channel's service request
    eENABLED = 1, // Channel n can be temporarily suspended by the service request of a higher priority channel
  };
  
  // Bit field definition.
  struct {
    uint32_t CHPRI : 4;
    uint32_t GRPPRI : 2;
    eDPA DPA : 1;
    eECP ECP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCHPRI28() = delete;
  inline void Reset() volatile { this->value = 0x0000001C; }
  static inline volatile DCHPRI28 &Instance() { return *reinterpret_cast<volatile DCHPRI28*>(0x4007011F); }
};



} // namespace nDMA0