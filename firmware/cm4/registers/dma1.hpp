#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DMA
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nDMA1 {


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
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x40C14000); }
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
  static inline volatile ES &Instance() { return *reinterpret_cast<volatile ES*>(0x40C14004); }
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
  static inline volatile ERQ &Instance() { return *reinterpret_cast<volatile ERQ*>(0x40C1400C); }
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
  static inline volatile EEI &Instance() { return *reinterpret_cast<volatile EEI*>(0x40C14014); }
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
  static inline volatile CEEI &Instance() { return *reinterpret_cast<volatile CEEI*>(0x40C14018); }
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
  static inline volatile SEEI &Instance() { return *reinterpret_cast<volatile SEEI*>(0x40C14019); }
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
  static inline volatile CERQ &Instance() { return *reinterpret_cast<volatile CERQ*>(0x40C1401A); }
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
  static inline volatile SERQ &Instance() { return *reinterpret_cast<volatile SERQ*>(0x40C1401B); }
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
  static inline volatile CDNE &Instance() { return *reinterpret_cast<volatile CDNE*>(0x40C1401C); }
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
  static inline volatile SSRT &Instance() { return *reinterpret_cast<volatile SSRT*>(0x40C1401D); }
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
  static inline volatile CERR &Instance() { return *reinterpret_cast<volatile CERR*>(0x40C1401E); }
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
  static inline volatile CINT &Instance() { return *reinterpret_cast<volatile CINT*>(0x40C1401F); }
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
  static inline volatile INT &Instance() { return *reinterpret_cast<volatile INT*>(0x40C14024); }
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
  static inline volatile ERR &Instance() { return *reinterpret_cast<volatile ERR*>(0x40C1402C); }
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
  static inline volatile HRS &Instance() { return *reinterpret_cast<volatile HRS*>(0x40C14034); }
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
  static inline volatile EARS &Instance() { return *reinterpret_cast<volatile EARS*>(0x40C14044); }
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
  static inline volatile DCHPRI3 &Instance() { return *reinterpret_cast<volatile DCHPRI3*>(0x40C14100); }
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
  static inline volatile DCHPRI2 &Instance() { return *reinterpret_cast<volatile DCHPRI2*>(0x40C14101); }
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
  static inline volatile DCHPRI1 &Instance() { return *reinterpret_cast<volatile DCHPRI1*>(0x40C14102); }
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
  static inline volatile DCHPRI0 &Instance() { return *reinterpret_cast<volatile DCHPRI0*>(0x40C14103); }
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
  static inline volatile DCHPRI7 &Instance() { return *reinterpret_cast<volatile DCHPRI7*>(0x40C14104); }
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
  static inline volatile DCHPRI6 &Instance() { return *reinterpret_cast<volatile DCHPRI6*>(0x40C14105); }
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
  static inline volatile DCHPRI5 &Instance() { return *reinterpret_cast<volatile DCHPRI5*>(0x40C14106); }
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
  static inline volatile DCHPRI4 &Instance() { return *reinterpret_cast<volatile DCHPRI4*>(0x40C14107); }
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
  static inline volatile DCHPRI11 &Instance() { return *reinterpret_cast<volatile DCHPRI11*>(0x40C14108); }
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
  static inline volatile DCHPRI10 &Instance() { return *reinterpret_cast<volatile DCHPRI10*>(0x40C14109); }
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
  static inline volatile DCHPRI9 &Instance() { return *reinterpret_cast<volatile DCHPRI9*>(0x40C1410A); }
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
  static inline volatile DCHPRI8 &Instance() { return *reinterpret_cast<volatile DCHPRI8*>(0x40C1410B); }
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
  static inline volatile DCHPRI15 &Instance() { return *reinterpret_cast<volatile DCHPRI15*>(0x40C1410C); }
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
  static inline volatile DCHPRI14 &Instance() { return *reinterpret_cast<volatile DCHPRI14*>(0x40C1410D); }
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
  static inline volatile DCHPRI13 &Instance() { return *reinterpret_cast<volatile DCHPRI13*>(0x40C1410E); }
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
  static inline volatile DCHPRI12 &Instance() { return *reinterpret_cast<volatile DCHPRI12*>(0x40C1410F); }
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
  static inline volatile DCHPRI19 &Instance() { return *reinterpret_cast<volatile DCHPRI19*>(0x40C14110); }
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
  static inline volatile DCHPRI18 &Instance() { return *reinterpret_cast<volatile DCHPRI18*>(0x40C14111); }
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
  static inline volatile DCHPRI17 &Instance() { return *reinterpret_cast<volatile DCHPRI17*>(0x40C14112); }
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
  static inline volatile DCHPRI16 &Instance() { return *reinterpret_cast<volatile DCHPRI16*>(0x40C14113); }
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
  static inline volatile DCHPRI23 &Instance() { return *reinterpret_cast<volatile DCHPRI23*>(0x40C14114); }
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
  static inline volatile DCHPRI22 &Instance() { return *reinterpret_cast<volatile DCHPRI22*>(0x40C14115); }
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
  static inline volatile DCHPRI21 &Instance() { return *reinterpret_cast<volatile DCHPRI21*>(0x40C14116); }
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
  static inline volatile DCHPRI20 &Instance() { return *reinterpret_cast<volatile DCHPRI20*>(0x40C14117); }
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
  static inline volatile DCHPRI27 &Instance() { return *reinterpret_cast<volatile DCHPRI27*>(0x40C14118); }
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
  static inline volatile DCHPRI26 &Instance() { return *reinterpret_cast<volatile DCHPRI26*>(0x40C14119); }
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
  static inline volatile DCHPRI25 &Instance() { return *reinterpret_cast<volatile DCHPRI25*>(0x40C1411A); }
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
  static inline volatile DCHPRI24 &Instance() { return *reinterpret_cast<volatile DCHPRI24*>(0x40C1411B); }
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
  static inline volatile DCHPRI31 &Instance() { return *reinterpret_cast<volatile DCHPRI31*>(0x40C1411C); }
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
  static inline volatile DCHPRI30 &Instance() { return *reinterpret_cast<volatile DCHPRI30*>(0x40C1411D); }
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
  static inline volatile DCHPRI29 &Instance() { return *reinterpret_cast<volatile DCHPRI29*>(0x40C1411E); }
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
  static inline volatile DCHPRI28 &Instance() { return *reinterpret_cast<volatile DCHPRI28*>(0x40C1411F); }
};

// TCD Source Address
//
union TCD0_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_SADDR &Instance() { return *reinterpret_cast<volatile TCD0_SADDR*>(0x40C15000); }
};

// TCD Signed Source Address Offset
//
union TCD0_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_SOFF &Instance() { return *reinterpret_cast<volatile TCD0_SOFF*>(0x40C15004); }
};

// TCD Transfer Attributes
//
union TCD0_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_ATTR &Instance() { return *reinterpret_cast<volatile TCD0_ATTR*>(0x40C15006); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD0_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD0_NBYTES_MLNO*>(0x40C15008); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD0_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD0_NBYTES_MLOFFNO*>(0x40C15008); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD0_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD0_NBYTES_MLOFFYES*>(0x40C15008); }
};

// TCD Last Source Address Adjustment
//
union TCD0_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_SLAST &Instance() { return *reinterpret_cast<volatile TCD0_SLAST*>(0x40C1500C); }
};

// TCD Destination Address
//
union TCD0_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_DADDR &Instance() { return *reinterpret_cast<volatile TCD0_DADDR*>(0x40C15010); }
};

// TCD Signed Destination Address Offset
//
union TCD0_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_DOFF &Instance() { return *reinterpret_cast<volatile TCD0_DOFF*>(0x40C15014); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD0_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD0_CITER_ELINKNO*>(0x40C15016); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD0_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD0_CITER_ELINKYES*>(0x40C15016); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD0_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD0_DLASTSGA*>(0x40C15018); }
};

// TCD Control and Status
//
union TCD0_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_CSR &Instance() { return *reinterpret_cast<volatile TCD0_CSR*>(0x40C1501C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD0_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD0_BITER_ELINKNO*>(0x40C1501E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD0_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD0_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD0_BITER_ELINKYES*>(0x40C1501E); }
};

// TCD Source Address
//
union TCD1_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_SADDR &Instance() { return *reinterpret_cast<volatile TCD1_SADDR*>(0x40C15020); }
};

// TCD Signed Source Address Offset
//
union TCD1_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_SOFF &Instance() { return *reinterpret_cast<volatile TCD1_SOFF*>(0x40C15024); }
};

// TCD Transfer Attributes
//
union TCD1_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_ATTR &Instance() { return *reinterpret_cast<volatile TCD1_ATTR*>(0x40C15026); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD1_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD1_NBYTES_MLNO*>(0x40C15028); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD1_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD1_NBYTES_MLOFFNO*>(0x40C15028); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD1_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD1_NBYTES_MLOFFYES*>(0x40C15028); }
};

// TCD Last Source Address Adjustment
//
union TCD1_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_SLAST &Instance() { return *reinterpret_cast<volatile TCD1_SLAST*>(0x40C1502C); }
};

// TCD Destination Address
//
union TCD1_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_DADDR &Instance() { return *reinterpret_cast<volatile TCD1_DADDR*>(0x40C15030); }
};

// TCD Signed Destination Address Offset
//
union TCD1_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_DOFF &Instance() { return *reinterpret_cast<volatile TCD1_DOFF*>(0x40C15034); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD1_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD1_CITER_ELINKNO*>(0x40C15036); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD1_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD1_CITER_ELINKYES*>(0x40C15036); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD1_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD1_DLASTSGA*>(0x40C15038); }
};

// TCD Control and Status
//
union TCD1_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_CSR &Instance() { return *reinterpret_cast<volatile TCD1_CSR*>(0x40C1503C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD1_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD1_BITER_ELINKNO*>(0x40C1503E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD1_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD1_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD1_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD1_BITER_ELINKYES*>(0x40C1503E); }
};

// TCD Source Address
//
union TCD2_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_SADDR &Instance() { return *reinterpret_cast<volatile TCD2_SADDR*>(0x40C15040); }
};

// TCD Signed Source Address Offset
//
union TCD2_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_SOFF &Instance() { return *reinterpret_cast<volatile TCD2_SOFF*>(0x40C15044); }
};

// TCD Transfer Attributes
//
union TCD2_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_ATTR &Instance() { return *reinterpret_cast<volatile TCD2_ATTR*>(0x40C15046); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD2_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD2_NBYTES_MLNO*>(0x40C15048); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD2_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD2_NBYTES_MLOFFNO*>(0x40C15048); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD2_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD2_NBYTES_MLOFFYES*>(0x40C15048); }
};

// TCD Last Source Address Adjustment
//
union TCD2_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_SLAST &Instance() { return *reinterpret_cast<volatile TCD2_SLAST*>(0x40C1504C); }
};

// TCD Destination Address
//
union TCD2_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_DADDR &Instance() { return *reinterpret_cast<volatile TCD2_DADDR*>(0x40C15050); }
};

// TCD Signed Destination Address Offset
//
union TCD2_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_DOFF &Instance() { return *reinterpret_cast<volatile TCD2_DOFF*>(0x40C15054); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD2_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD2_CITER_ELINKNO*>(0x40C15056); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD2_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD2_CITER_ELINKYES*>(0x40C15056); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD2_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD2_DLASTSGA*>(0x40C15058); }
};

// TCD Control and Status
//
union TCD2_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_CSR &Instance() { return *reinterpret_cast<volatile TCD2_CSR*>(0x40C1505C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD2_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD2_BITER_ELINKNO*>(0x40C1505E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD2_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD2_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD2_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD2_BITER_ELINKYES*>(0x40C1505E); }
};

// TCD Source Address
//
union TCD3_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_SADDR &Instance() { return *reinterpret_cast<volatile TCD3_SADDR*>(0x40C15060); }
};

// TCD Signed Source Address Offset
//
union TCD3_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_SOFF &Instance() { return *reinterpret_cast<volatile TCD3_SOFF*>(0x40C15064); }
};

// TCD Transfer Attributes
//
union TCD3_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_ATTR &Instance() { return *reinterpret_cast<volatile TCD3_ATTR*>(0x40C15066); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD3_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD3_NBYTES_MLNO*>(0x40C15068); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD3_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD3_NBYTES_MLOFFNO*>(0x40C15068); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD3_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD3_NBYTES_MLOFFYES*>(0x40C15068); }
};

// TCD Last Source Address Adjustment
//
union TCD3_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_SLAST &Instance() { return *reinterpret_cast<volatile TCD3_SLAST*>(0x40C1506C); }
};

// TCD Destination Address
//
union TCD3_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_DADDR &Instance() { return *reinterpret_cast<volatile TCD3_DADDR*>(0x40C15070); }
};

// TCD Signed Destination Address Offset
//
union TCD3_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_DOFF &Instance() { return *reinterpret_cast<volatile TCD3_DOFF*>(0x40C15074); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD3_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD3_CITER_ELINKNO*>(0x40C15076); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD3_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD3_CITER_ELINKYES*>(0x40C15076); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD3_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD3_DLASTSGA*>(0x40C15078); }
};

// TCD Control and Status
//
union TCD3_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_CSR &Instance() { return *reinterpret_cast<volatile TCD3_CSR*>(0x40C1507C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD3_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD3_BITER_ELINKNO*>(0x40C1507E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD3_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD3_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD3_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD3_BITER_ELINKYES*>(0x40C1507E); }
};

// TCD Source Address
//
union TCD4_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_SADDR &Instance() { return *reinterpret_cast<volatile TCD4_SADDR*>(0x40C15080); }
};

// TCD Signed Source Address Offset
//
union TCD4_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_SOFF &Instance() { return *reinterpret_cast<volatile TCD4_SOFF*>(0x40C15084); }
};

// TCD Transfer Attributes
//
union TCD4_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_ATTR &Instance() { return *reinterpret_cast<volatile TCD4_ATTR*>(0x40C15086); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD4_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD4_NBYTES_MLNO*>(0x40C15088); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD4_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD4_NBYTES_MLOFFNO*>(0x40C15088); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD4_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD4_NBYTES_MLOFFYES*>(0x40C15088); }
};

// TCD Last Source Address Adjustment
//
union TCD4_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_SLAST &Instance() { return *reinterpret_cast<volatile TCD4_SLAST*>(0x40C1508C); }
};

// TCD Destination Address
//
union TCD4_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_DADDR &Instance() { return *reinterpret_cast<volatile TCD4_DADDR*>(0x40C15090); }
};

// TCD Signed Destination Address Offset
//
union TCD4_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_DOFF &Instance() { return *reinterpret_cast<volatile TCD4_DOFF*>(0x40C15094); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD4_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD4_CITER_ELINKNO*>(0x40C15096); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD4_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD4_CITER_ELINKYES*>(0x40C15096); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD4_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD4_DLASTSGA*>(0x40C15098); }
};

// TCD Control and Status
//
union TCD4_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_CSR &Instance() { return *reinterpret_cast<volatile TCD4_CSR*>(0x40C1509C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD4_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD4_BITER_ELINKNO*>(0x40C1509E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD4_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD4_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD4_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD4_BITER_ELINKYES*>(0x40C1509E); }
};

// TCD Source Address
//
union TCD5_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_SADDR &Instance() { return *reinterpret_cast<volatile TCD5_SADDR*>(0x40C150A0); }
};

// TCD Signed Source Address Offset
//
union TCD5_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_SOFF &Instance() { return *reinterpret_cast<volatile TCD5_SOFF*>(0x40C150A4); }
};

// TCD Transfer Attributes
//
union TCD5_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_ATTR &Instance() { return *reinterpret_cast<volatile TCD5_ATTR*>(0x40C150A6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD5_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD5_NBYTES_MLNO*>(0x40C150A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD5_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD5_NBYTES_MLOFFNO*>(0x40C150A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD5_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD5_NBYTES_MLOFFYES*>(0x40C150A8); }
};

// TCD Last Source Address Adjustment
//
union TCD5_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_SLAST &Instance() { return *reinterpret_cast<volatile TCD5_SLAST*>(0x40C150AC); }
};

// TCD Destination Address
//
union TCD5_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_DADDR &Instance() { return *reinterpret_cast<volatile TCD5_DADDR*>(0x40C150B0); }
};

// TCD Signed Destination Address Offset
//
union TCD5_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_DOFF &Instance() { return *reinterpret_cast<volatile TCD5_DOFF*>(0x40C150B4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD5_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD5_CITER_ELINKNO*>(0x40C150B6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD5_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD5_CITER_ELINKYES*>(0x40C150B6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD5_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD5_DLASTSGA*>(0x40C150B8); }
};

// TCD Control and Status
//
union TCD5_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_CSR &Instance() { return *reinterpret_cast<volatile TCD5_CSR*>(0x40C150BC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD5_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD5_BITER_ELINKNO*>(0x40C150BE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD5_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD5_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD5_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD5_BITER_ELINKYES*>(0x40C150BE); }
};

// TCD Source Address
//
union TCD6_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_SADDR &Instance() { return *reinterpret_cast<volatile TCD6_SADDR*>(0x40C150C0); }
};

// TCD Signed Source Address Offset
//
union TCD6_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_SOFF &Instance() { return *reinterpret_cast<volatile TCD6_SOFF*>(0x40C150C4); }
};

// TCD Transfer Attributes
//
union TCD6_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_ATTR &Instance() { return *reinterpret_cast<volatile TCD6_ATTR*>(0x40C150C6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD6_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD6_NBYTES_MLNO*>(0x40C150C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD6_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD6_NBYTES_MLOFFNO*>(0x40C150C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD6_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD6_NBYTES_MLOFFYES*>(0x40C150C8); }
};

// TCD Last Source Address Adjustment
//
union TCD6_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_SLAST &Instance() { return *reinterpret_cast<volatile TCD6_SLAST*>(0x40C150CC); }
};

// TCD Destination Address
//
union TCD6_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_DADDR &Instance() { return *reinterpret_cast<volatile TCD6_DADDR*>(0x40C150D0); }
};

// TCD Signed Destination Address Offset
//
union TCD6_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_DOFF &Instance() { return *reinterpret_cast<volatile TCD6_DOFF*>(0x40C150D4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD6_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD6_CITER_ELINKNO*>(0x40C150D6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD6_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD6_CITER_ELINKYES*>(0x40C150D6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD6_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD6_DLASTSGA*>(0x40C150D8); }
};

// TCD Control and Status
//
union TCD6_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_CSR &Instance() { return *reinterpret_cast<volatile TCD6_CSR*>(0x40C150DC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD6_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD6_BITER_ELINKNO*>(0x40C150DE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD6_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD6_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD6_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD6_BITER_ELINKYES*>(0x40C150DE); }
};

// TCD Source Address
//
union TCD7_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_SADDR &Instance() { return *reinterpret_cast<volatile TCD7_SADDR*>(0x40C150E0); }
};

// TCD Signed Source Address Offset
//
union TCD7_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_SOFF &Instance() { return *reinterpret_cast<volatile TCD7_SOFF*>(0x40C150E4); }
};

// TCD Transfer Attributes
//
union TCD7_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_ATTR &Instance() { return *reinterpret_cast<volatile TCD7_ATTR*>(0x40C150E6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD7_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD7_NBYTES_MLNO*>(0x40C150E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD7_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD7_NBYTES_MLOFFNO*>(0x40C150E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD7_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD7_NBYTES_MLOFFYES*>(0x40C150E8); }
};

// TCD Last Source Address Adjustment
//
union TCD7_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_SLAST &Instance() { return *reinterpret_cast<volatile TCD7_SLAST*>(0x40C150EC); }
};

// TCD Destination Address
//
union TCD7_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_DADDR &Instance() { return *reinterpret_cast<volatile TCD7_DADDR*>(0x40C150F0); }
};

// TCD Signed Destination Address Offset
//
union TCD7_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_DOFF &Instance() { return *reinterpret_cast<volatile TCD7_DOFF*>(0x40C150F4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD7_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD7_CITER_ELINKNO*>(0x40C150F6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD7_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD7_CITER_ELINKYES*>(0x40C150F6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD7_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD7_DLASTSGA*>(0x40C150F8); }
};

// TCD Control and Status
//
union TCD7_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_CSR &Instance() { return *reinterpret_cast<volatile TCD7_CSR*>(0x40C150FC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD7_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD7_BITER_ELINKNO*>(0x40C150FE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD7_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD7_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD7_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD7_BITER_ELINKYES*>(0x40C150FE); }
};

// TCD Source Address
//
union TCD8_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_SADDR &Instance() { return *reinterpret_cast<volatile TCD8_SADDR*>(0x40C15100); }
};

// TCD Signed Source Address Offset
//
union TCD8_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_SOFF &Instance() { return *reinterpret_cast<volatile TCD8_SOFF*>(0x40C15104); }
};

// TCD Transfer Attributes
//
union TCD8_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_ATTR &Instance() { return *reinterpret_cast<volatile TCD8_ATTR*>(0x40C15106); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD8_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD8_NBYTES_MLNO*>(0x40C15108); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD8_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD8_NBYTES_MLOFFNO*>(0x40C15108); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD8_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD8_NBYTES_MLOFFYES*>(0x40C15108); }
};

// TCD Last Source Address Adjustment
//
union TCD8_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_SLAST &Instance() { return *reinterpret_cast<volatile TCD8_SLAST*>(0x40C1510C); }
};

// TCD Destination Address
//
union TCD8_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_DADDR &Instance() { return *reinterpret_cast<volatile TCD8_DADDR*>(0x40C15110); }
};

// TCD Signed Destination Address Offset
//
union TCD8_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_DOFF &Instance() { return *reinterpret_cast<volatile TCD8_DOFF*>(0x40C15114); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD8_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD8_CITER_ELINKNO*>(0x40C15116); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD8_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD8_CITER_ELINKYES*>(0x40C15116); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD8_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD8_DLASTSGA*>(0x40C15118); }
};

// TCD Control and Status
//
union TCD8_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_CSR &Instance() { return *reinterpret_cast<volatile TCD8_CSR*>(0x40C1511C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD8_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD8_BITER_ELINKNO*>(0x40C1511E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD8_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD8_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD8_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD8_BITER_ELINKYES*>(0x40C1511E); }
};

// TCD Source Address
//
union TCD9_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_SADDR &Instance() { return *reinterpret_cast<volatile TCD9_SADDR*>(0x40C15120); }
};

// TCD Signed Source Address Offset
//
union TCD9_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_SOFF &Instance() { return *reinterpret_cast<volatile TCD9_SOFF*>(0x40C15124); }
};

// TCD Transfer Attributes
//
union TCD9_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_ATTR &Instance() { return *reinterpret_cast<volatile TCD9_ATTR*>(0x40C15126); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD9_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD9_NBYTES_MLNO*>(0x40C15128); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD9_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD9_NBYTES_MLOFFNO*>(0x40C15128); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD9_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD9_NBYTES_MLOFFYES*>(0x40C15128); }
};

// TCD Last Source Address Adjustment
//
union TCD9_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_SLAST &Instance() { return *reinterpret_cast<volatile TCD9_SLAST*>(0x40C1512C); }
};

// TCD Destination Address
//
union TCD9_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_DADDR &Instance() { return *reinterpret_cast<volatile TCD9_DADDR*>(0x40C15130); }
};

// TCD Signed Destination Address Offset
//
union TCD9_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_DOFF &Instance() { return *reinterpret_cast<volatile TCD9_DOFF*>(0x40C15134); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD9_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD9_CITER_ELINKNO*>(0x40C15136); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD9_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD9_CITER_ELINKYES*>(0x40C15136); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD9_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD9_DLASTSGA*>(0x40C15138); }
};

// TCD Control and Status
//
union TCD9_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_CSR &Instance() { return *reinterpret_cast<volatile TCD9_CSR*>(0x40C1513C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD9_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD9_BITER_ELINKNO*>(0x40C1513E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD9_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD9_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD9_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD9_BITER_ELINKYES*>(0x40C1513E); }
};

// TCD Source Address
//
union TCD10_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_SADDR &Instance() { return *reinterpret_cast<volatile TCD10_SADDR*>(0x40C15140); }
};

// TCD Signed Source Address Offset
//
union TCD10_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_SOFF &Instance() { return *reinterpret_cast<volatile TCD10_SOFF*>(0x40C15144); }
};

// TCD Transfer Attributes
//
union TCD10_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_ATTR &Instance() { return *reinterpret_cast<volatile TCD10_ATTR*>(0x40C15146); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD10_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD10_NBYTES_MLNO*>(0x40C15148); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD10_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD10_NBYTES_MLOFFNO*>(0x40C15148); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD10_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD10_NBYTES_MLOFFYES*>(0x40C15148); }
};

// TCD Last Source Address Adjustment
//
union TCD10_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_SLAST &Instance() { return *reinterpret_cast<volatile TCD10_SLAST*>(0x40C1514C); }
};

// TCD Destination Address
//
union TCD10_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_DADDR &Instance() { return *reinterpret_cast<volatile TCD10_DADDR*>(0x40C15150); }
};

// TCD Signed Destination Address Offset
//
union TCD10_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_DOFF &Instance() { return *reinterpret_cast<volatile TCD10_DOFF*>(0x40C15154); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD10_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD10_CITER_ELINKNO*>(0x40C15156); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD10_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD10_CITER_ELINKYES*>(0x40C15156); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD10_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD10_DLASTSGA*>(0x40C15158); }
};

// TCD Control and Status
//
union TCD10_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_CSR &Instance() { return *reinterpret_cast<volatile TCD10_CSR*>(0x40C1515C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD10_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD10_BITER_ELINKNO*>(0x40C1515E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD10_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD10_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD10_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD10_BITER_ELINKYES*>(0x40C1515E); }
};

// TCD Source Address
//
union TCD11_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_SADDR &Instance() { return *reinterpret_cast<volatile TCD11_SADDR*>(0x40C15160); }
};

// TCD Signed Source Address Offset
//
union TCD11_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_SOFF &Instance() { return *reinterpret_cast<volatile TCD11_SOFF*>(0x40C15164); }
};

// TCD Transfer Attributes
//
union TCD11_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_ATTR &Instance() { return *reinterpret_cast<volatile TCD11_ATTR*>(0x40C15166); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD11_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD11_NBYTES_MLNO*>(0x40C15168); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD11_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD11_NBYTES_MLOFFNO*>(0x40C15168); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD11_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD11_NBYTES_MLOFFYES*>(0x40C15168); }
};

// TCD Last Source Address Adjustment
//
union TCD11_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_SLAST &Instance() { return *reinterpret_cast<volatile TCD11_SLAST*>(0x40C1516C); }
};

// TCD Destination Address
//
union TCD11_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_DADDR &Instance() { return *reinterpret_cast<volatile TCD11_DADDR*>(0x40C15170); }
};

// TCD Signed Destination Address Offset
//
union TCD11_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_DOFF &Instance() { return *reinterpret_cast<volatile TCD11_DOFF*>(0x40C15174); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD11_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD11_CITER_ELINKNO*>(0x40C15176); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD11_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD11_CITER_ELINKYES*>(0x40C15176); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD11_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD11_DLASTSGA*>(0x40C15178); }
};

// TCD Control and Status
//
union TCD11_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_CSR &Instance() { return *reinterpret_cast<volatile TCD11_CSR*>(0x40C1517C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD11_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD11_BITER_ELINKNO*>(0x40C1517E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD11_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD11_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD11_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD11_BITER_ELINKYES*>(0x40C1517E); }
};

// TCD Source Address
//
union TCD12_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_SADDR &Instance() { return *reinterpret_cast<volatile TCD12_SADDR*>(0x40C15180); }
};

// TCD Signed Source Address Offset
//
union TCD12_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_SOFF &Instance() { return *reinterpret_cast<volatile TCD12_SOFF*>(0x40C15184); }
};

// TCD Transfer Attributes
//
union TCD12_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_ATTR &Instance() { return *reinterpret_cast<volatile TCD12_ATTR*>(0x40C15186); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD12_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD12_NBYTES_MLNO*>(0x40C15188); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD12_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD12_NBYTES_MLOFFNO*>(0x40C15188); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD12_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD12_NBYTES_MLOFFYES*>(0x40C15188); }
};

// TCD Last Source Address Adjustment
//
union TCD12_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_SLAST &Instance() { return *reinterpret_cast<volatile TCD12_SLAST*>(0x40C1518C); }
};

// TCD Destination Address
//
union TCD12_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_DADDR &Instance() { return *reinterpret_cast<volatile TCD12_DADDR*>(0x40C15190); }
};

// TCD Signed Destination Address Offset
//
union TCD12_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_DOFF &Instance() { return *reinterpret_cast<volatile TCD12_DOFF*>(0x40C15194); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD12_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD12_CITER_ELINKNO*>(0x40C15196); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD12_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD12_CITER_ELINKYES*>(0x40C15196); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD12_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD12_DLASTSGA*>(0x40C15198); }
};

// TCD Control and Status
//
union TCD12_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_CSR &Instance() { return *reinterpret_cast<volatile TCD12_CSR*>(0x40C1519C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD12_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD12_BITER_ELINKNO*>(0x40C1519E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD12_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD12_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD12_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD12_BITER_ELINKYES*>(0x40C1519E); }
};

// TCD Source Address
//
union TCD13_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_SADDR &Instance() { return *reinterpret_cast<volatile TCD13_SADDR*>(0x40C151A0); }
};

// TCD Signed Source Address Offset
//
union TCD13_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_SOFF &Instance() { return *reinterpret_cast<volatile TCD13_SOFF*>(0x40C151A4); }
};

// TCD Transfer Attributes
//
union TCD13_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_ATTR &Instance() { return *reinterpret_cast<volatile TCD13_ATTR*>(0x40C151A6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD13_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD13_NBYTES_MLNO*>(0x40C151A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD13_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD13_NBYTES_MLOFFNO*>(0x40C151A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD13_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD13_NBYTES_MLOFFYES*>(0x40C151A8); }
};

// TCD Last Source Address Adjustment
//
union TCD13_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_SLAST &Instance() { return *reinterpret_cast<volatile TCD13_SLAST*>(0x40C151AC); }
};

// TCD Destination Address
//
union TCD13_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_DADDR &Instance() { return *reinterpret_cast<volatile TCD13_DADDR*>(0x40C151B0); }
};

// TCD Signed Destination Address Offset
//
union TCD13_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_DOFF &Instance() { return *reinterpret_cast<volatile TCD13_DOFF*>(0x40C151B4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD13_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD13_CITER_ELINKNO*>(0x40C151B6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD13_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD13_CITER_ELINKYES*>(0x40C151B6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD13_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD13_DLASTSGA*>(0x40C151B8); }
};

// TCD Control and Status
//
union TCD13_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_CSR &Instance() { return *reinterpret_cast<volatile TCD13_CSR*>(0x40C151BC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD13_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD13_BITER_ELINKNO*>(0x40C151BE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD13_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD13_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD13_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD13_BITER_ELINKYES*>(0x40C151BE); }
};

// TCD Source Address
//
union TCD14_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_SADDR &Instance() { return *reinterpret_cast<volatile TCD14_SADDR*>(0x40C151C0); }
};

// TCD Signed Source Address Offset
//
union TCD14_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_SOFF &Instance() { return *reinterpret_cast<volatile TCD14_SOFF*>(0x40C151C4); }
};

// TCD Transfer Attributes
//
union TCD14_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_ATTR &Instance() { return *reinterpret_cast<volatile TCD14_ATTR*>(0x40C151C6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD14_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD14_NBYTES_MLNO*>(0x40C151C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD14_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD14_NBYTES_MLOFFNO*>(0x40C151C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD14_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD14_NBYTES_MLOFFYES*>(0x40C151C8); }
};

// TCD Last Source Address Adjustment
//
union TCD14_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_SLAST &Instance() { return *reinterpret_cast<volatile TCD14_SLAST*>(0x40C151CC); }
};

// TCD Destination Address
//
union TCD14_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_DADDR &Instance() { return *reinterpret_cast<volatile TCD14_DADDR*>(0x40C151D0); }
};

// TCD Signed Destination Address Offset
//
union TCD14_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_DOFF &Instance() { return *reinterpret_cast<volatile TCD14_DOFF*>(0x40C151D4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD14_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD14_CITER_ELINKNO*>(0x40C151D6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD14_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD14_CITER_ELINKYES*>(0x40C151D6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD14_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD14_DLASTSGA*>(0x40C151D8); }
};

// TCD Control and Status
//
union TCD14_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_CSR &Instance() { return *reinterpret_cast<volatile TCD14_CSR*>(0x40C151DC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD14_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD14_BITER_ELINKNO*>(0x40C151DE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD14_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD14_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD14_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD14_BITER_ELINKYES*>(0x40C151DE); }
};

// TCD Source Address
//
union TCD15_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_SADDR &Instance() { return *reinterpret_cast<volatile TCD15_SADDR*>(0x40C151E0); }
};

// TCD Signed Source Address Offset
//
union TCD15_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_SOFF &Instance() { return *reinterpret_cast<volatile TCD15_SOFF*>(0x40C151E4); }
};

// TCD Transfer Attributes
//
union TCD15_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_ATTR &Instance() { return *reinterpret_cast<volatile TCD15_ATTR*>(0x40C151E6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD15_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD15_NBYTES_MLNO*>(0x40C151E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD15_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD15_NBYTES_MLOFFNO*>(0x40C151E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD15_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD15_NBYTES_MLOFFYES*>(0x40C151E8); }
};

// TCD Last Source Address Adjustment
//
union TCD15_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_SLAST &Instance() { return *reinterpret_cast<volatile TCD15_SLAST*>(0x40C151EC); }
};

// TCD Destination Address
//
union TCD15_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_DADDR &Instance() { return *reinterpret_cast<volatile TCD15_DADDR*>(0x40C151F0); }
};

// TCD Signed Destination Address Offset
//
union TCD15_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_DOFF &Instance() { return *reinterpret_cast<volatile TCD15_DOFF*>(0x40C151F4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD15_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD15_CITER_ELINKNO*>(0x40C151F6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD15_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD15_CITER_ELINKYES*>(0x40C151F6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD15_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD15_DLASTSGA*>(0x40C151F8); }
};

// TCD Control and Status
//
union TCD15_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_CSR &Instance() { return *reinterpret_cast<volatile TCD15_CSR*>(0x40C151FC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD15_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD15_BITER_ELINKNO*>(0x40C151FE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD15_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD15_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD15_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD15_BITER_ELINKYES*>(0x40C151FE); }
};

// TCD Source Address
//
union TCD16_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_SADDR &Instance() { return *reinterpret_cast<volatile TCD16_SADDR*>(0x40C15200); }
};

// TCD Signed Source Address Offset
//
union TCD16_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_SOFF &Instance() { return *reinterpret_cast<volatile TCD16_SOFF*>(0x40C15204); }
};

// TCD Transfer Attributes
//
union TCD16_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_ATTR &Instance() { return *reinterpret_cast<volatile TCD16_ATTR*>(0x40C15206); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD16_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD16_NBYTES_MLNO*>(0x40C15208); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD16_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD16_NBYTES_MLOFFNO*>(0x40C15208); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD16_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD16_NBYTES_MLOFFYES*>(0x40C15208); }
};

// TCD Last Source Address Adjustment
//
union TCD16_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_SLAST &Instance() { return *reinterpret_cast<volatile TCD16_SLAST*>(0x40C1520C); }
};

// TCD Destination Address
//
union TCD16_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_DADDR &Instance() { return *reinterpret_cast<volatile TCD16_DADDR*>(0x40C15210); }
};

// TCD Signed Destination Address Offset
//
union TCD16_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_DOFF &Instance() { return *reinterpret_cast<volatile TCD16_DOFF*>(0x40C15214); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD16_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD16_CITER_ELINKNO*>(0x40C15216); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD16_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD16_CITER_ELINKYES*>(0x40C15216); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD16_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD16_DLASTSGA*>(0x40C15218); }
};

// TCD Control and Status
//
union TCD16_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_CSR &Instance() { return *reinterpret_cast<volatile TCD16_CSR*>(0x40C1521C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD16_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD16_BITER_ELINKNO*>(0x40C1521E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD16_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD16_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD16_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD16_BITER_ELINKYES*>(0x40C1521E); }
};

// TCD Source Address
//
union TCD17_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_SADDR &Instance() { return *reinterpret_cast<volatile TCD17_SADDR*>(0x40C15220); }
};

// TCD Signed Source Address Offset
//
union TCD17_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_SOFF &Instance() { return *reinterpret_cast<volatile TCD17_SOFF*>(0x40C15224); }
};

// TCD Transfer Attributes
//
union TCD17_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_ATTR &Instance() { return *reinterpret_cast<volatile TCD17_ATTR*>(0x40C15226); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD17_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD17_NBYTES_MLNO*>(0x40C15228); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD17_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD17_NBYTES_MLOFFNO*>(0x40C15228); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD17_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD17_NBYTES_MLOFFYES*>(0x40C15228); }
};

// TCD Last Source Address Adjustment
//
union TCD17_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_SLAST &Instance() { return *reinterpret_cast<volatile TCD17_SLAST*>(0x40C1522C); }
};

// TCD Destination Address
//
union TCD17_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_DADDR &Instance() { return *reinterpret_cast<volatile TCD17_DADDR*>(0x40C15230); }
};

// TCD Signed Destination Address Offset
//
union TCD17_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_DOFF &Instance() { return *reinterpret_cast<volatile TCD17_DOFF*>(0x40C15234); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD17_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD17_CITER_ELINKNO*>(0x40C15236); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD17_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD17_CITER_ELINKYES*>(0x40C15236); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD17_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD17_DLASTSGA*>(0x40C15238); }
};

// TCD Control and Status
//
union TCD17_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_CSR &Instance() { return *reinterpret_cast<volatile TCD17_CSR*>(0x40C1523C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD17_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD17_BITER_ELINKNO*>(0x40C1523E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD17_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD17_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD17_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD17_BITER_ELINKYES*>(0x40C1523E); }
};

// TCD Source Address
//
union TCD18_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_SADDR &Instance() { return *reinterpret_cast<volatile TCD18_SADDR*>(0x40C15240); }
};

// TCD Signed Source Address Offset
//
union TCD18_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_SOFF &Instance() { return *reinterpret_cast<volatile TCD18_SOFF*>(0x40C15244); }
};

// TCD Transfer Attributes
//
union TCD18_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_ATTR &Instance() { return *reinterpret_cast<volatile TCD18_ATTR*>(0x40C15246); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD18_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD18_NBYTES_MLNO*>(0x40C15248); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD18_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD18_NBYTES_MLOFFNO*>(0x40C15248); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD18_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD18_NBYTES_MLOFFYES*>(0x40C15248); }
};

// TCD Last Source Address Adjustment
//
union TCD18_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_SLAST &Instance() { return *reinterpret_cast<volatile TCD18_SLAST*>(0x40C1524C); }
};

// TCD Destination Address
//
union TCD18_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_DADDR &Instance() { return *reinterpret_cast<volatile TCD18_DADDR*>(0x40C15250); }
};

// TCD Signed Destination Address Offset
//
union TCD18_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_DOFF &Instance() { return *reinterpret_cast<volatile TCD18_DOFF*>(0x40C15254); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD18_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD18_CITER_ELINKNO*>(0x40C15256); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD18_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD18_CITER_ELINKYES*>(0x40C15256); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD18_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD18_DLASTSGA*>(0x40C15258); }
};

// TCD Control and Status
//
union TCD18_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_CSR &Instance() { return *reinterpret_cast<volatile TCD18_CSR*>(0x40C1525C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD18_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD18_BITER_ELINKNO*>(0x40C1525E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD18_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD18_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD18_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD18_BITER_ELINKYES*>(0x40C1525E); }
};

// TCD Source Address
//
union TCD19_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_SADDR &Instance() { return *reinterpret_cast<volatile TCD19_SADDR*>(0x40C15260); }
};

// TCD Signed Source Address Offset
//
union TCD19_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_SOFF &Instance() { return *reinterpret_cast<volatile TCD19_SOFF*>(0x40C15264); }
};

// TCD Transfer Attributes
//
union TCD19_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_ATTR &Instance() { return *reinterpret_cast<volatile TCD19_ATTR*>(0x40C15266); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD19_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD19_NBYTES_MLNO*>(0x40C15268); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD19_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD19_NBYTES_MLOFFNO*>(0x40C15268); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD19_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD19_NBYTES_MLOFFYES*>(0x40C15268); }
};

// TCD Last Source Address Adjustment
//
union TCD19_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_SLAST &Instance() { return *reinterpret_cast<volatile TCD19_SLAST*>(0x40C1526C); }
};

// TCD Destination Address
//
union TCD19_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_DADDR &Instance() { return *reinterpret_cast<volatile TCD19_DADDR*>(0x40C15270); }
};

// TCD Signed Destination Address Offset
//
union TCD19_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_DOFF &Instance() { return *reinterpret_cast<volatile TCD19_DOFF*>(0x40C15274); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD19_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD19_CITER_ELINKNO*>(0x40C15276); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD19_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD19_CITER_ELINKYES*>(0x40C15276); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD19_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD19_DLASTSGA*>(0x40C15278); }
};

// TCD Control and Status
//
union TCD19_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_CSR &Instance() { return *reinterpret_cast<volatile TCD19_CSR*>(0x40C1527C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD19_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD19_BITER_ELINKNO*>(0x40C1527E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD19_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD19_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD19_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD19_BITER_ELINKYES*>(0x40C1527E); }
};

// TCD Source Address
//
union TCD20_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_SADDR &Instance() { return *reinterpret_cast<volatile TCD20_SADDR*>(0x40C15280); }
};

// TCD Signed Source Address Offset
//
union TCD20_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_SOFF &Instance() { return *reinterpret_cast<volatile TCD20_SOFF*>(0x40C15284); }
};

// TCD Transfer Attributes
//
union TCD20_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_ATTR &Instance() { return *reinterpret_cast<volatile TCD20_ATTR*>(0x40C15286); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD20_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD20_NBYTES_MLNO*>(0x40C15288); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD20_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD20_NBYTES_MLOFFNO*>(0x40C15288); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD20_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD20_NBYTES_MLOFFYES*>(0x40C15288); }
};

// TCD Last Source Address Adjustment
//
union TCD20_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_SLAST &Instance() { return *reinterpret_cast<volatile TCD20_SLAST*>(0x40C1528C); }
};

// TCD Destination Address
//
union TCD20_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_DADDR &Instance() { return *reinterpret_cast<volatile TCD20_DADDR*>(0x40C15290); }
};

// TCD Signed Destination Address Offset
//
union TCD20_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_DOFF &Instance() { return *reinterpret_cast<volatile TCD20_DOFF*>(0x40C15294); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD20_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD20_CITER_ELINKNO*>(0x40C15296); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD20_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD20_CITER_ELINKYES*>(0x40C15296); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD20_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD20_DLASTSGA*>(0x40C15298); }
};

// TCD Control and Status
//
union TCD20_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_CSR &Instance() { return *reinterpret_cast<volatile TCD20_CSR*>(0x40C1529C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD20_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD20_BITER_ELINKNO*>(0x40C1529E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD20_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD20_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD20_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD20_BITER_ELINKYES*>(0x40C1529E); }
};

// TCD Source Address
//
union TCD21_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_SADDR &Instance() { return *reinterpret_cast<volatile TCD21_SADDR*>(0x40C152A0); }
};

// TCD Signed Source Address Offset
//
union TCD21_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_SOFF &Instance() { return *reinterpret_cast<volatile TCD21_SOFF*>(0x40C152A4); }
};

// TCD Transfer Attributes
//
union TCD21_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_ATTR &Instance() { return *reinterpret_cast<volatile TCD21_ATTR*>(0x40C152A6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD21_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD21_NBYTES_MLNO*>(0x40C152A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD21_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD21_NBYTES_MLOFFNO*>(0x40C152A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD21_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD21_NBYTES_MLOFFYES*>(0x40C152A8); }
};

// TCD Last Source Address Adjustment
//
union TCD21_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_SLAST &Instance() { return *reinterpret_cast<volatile TCD21_SLAST*>(0x40C152AC); }
};

// TCD Destination Address
//
union TCD21_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_DADDR &Instance() { return *reinterpret_cast<volatile TCD21_DADDR*>(0x40C152B0); }
};

// TCD Signed Destination Address Offset
//
union TCD21_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_DOFF &Instance() { return *reinterpret_cast<volatile TCD21_DOFF*>(0x40C152B4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD21_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD21_CITER_ELINKNO*>(0x40C152B6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD21_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD21_CITER_ELINKYES*>(0x40C152B6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD21_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD21_DLASTSGA*>(0x40C152B8); }
};

// TCD Control and Status
//
union TCD21_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_CSR &Instance() { return *reinterpret_cast<volatile TCD21_CSR*>(0x40C152BC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD21_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD21_BITER_ELINKNO*>(0x40C152BE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD21_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD21_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD21_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD21_BITER_ELINKYES*>(0x40C152BE); }
};

// TCD Source Address
//
union TCD22_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_SADDR &Instance() { return *reinterpret_cast<volatile TCD22_SADDR*>(0x40C152C0); }
};

// TCD Signed Source Address Offset
//
union TCD22_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_SOFF &Instance() { return *reinterpret_cast<volatile TCD22_SOFF*>(0x40C152C4); }
};

// TCD Transfer Attributes
//
union TCD22_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_ATTR &Instance() { return *reinterpret_cast<volatile TCD22_ATTR*>(0x40C152C6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD22_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD22_NBYTES_MLNO*>(0x40C152C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD22_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD22_NBYTES_MLOFFNO*>(0x40C152C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD22_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD22_NBYTES_MLOFFYES*>(0x40C152C8); }
};

// TCD Last Source Address Adjustment
//
union TCD22_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_SLAST &Instance() { return *reinterpret_cast<volatile TCD22_SLAST*>(0x40C152CC); }
};

// TCD Destination Address
//
union TCD22_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_DADDR &Instance() { return *reinterpret_cast<volatile TCD22_DADDR*>(0x40C152D0); }
};

// TCD Signed Destination Address Offset
//
union TCD22_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_DOFF &Instance() { return *reinterpret_cast<volatile TCD22_DOFF*>(0x40C152D4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD22_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD22_CITER_ELINKNO*>(0x40C152D6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD22_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD22_CITER_ELINKYES*>(0x40C152D6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD22_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD22_DLASTSGA*>(0x40C152D8); }
};

// TCD Control and Status
//
union TCD22_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_CSR &Instance() { return *reinterpret_cast<volatile TCD22_CSR*>(0x40C152DC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD22_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD22_BITER_ELINKNO*>(0x40C152DE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD22_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD22_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD22_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD22_BITER_ELINKYES*>(0x40C152DE); }
};

// TCD Source Address
//
union TCD23_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_SADDR &Instance() { return *reinterpret_cast<volatile TCD23_SADDR*>(0x40C152E0); }
};

// TCD Signed Source Address Offset
//
union TCD23_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_SOFF &Instance() { return *reinterpret_cast<volatile TCD23_SOFF*>(0x40C152E4); }
};

// TCD Transfer Attributes
//
union TCD23_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_ATTR &Instance() { return *reinterpret_cast<volatile TCD23_ATTR*>(0x40C152E6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD23_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD23_NBYTES_MLNO*>(0x40C152E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD23_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD23_NBYTES_MLOFFNO*>(0x40C152E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD23_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD23_NBYTES_MLOFFYES*>(0x40C152E8); }
};

// TCD Last Source Address Adjustment
//
union TCD23_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_SLAST &Instance() { return *reinterpret_cast<volatile TCD23_SLAST*>(0x40C152EC); }
};

// TCD Destination Address
//
union TCD23_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_DADDR &Instance() { return *reinterpret_cast<volatile TCD23_DADDR*>(0x40C152F0); }
};

// TCD Signed Destination Address Offset
//
union TCD23_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_DOFF &Instance() { return *reinterpret_cast<volatile TCD23_DOFF*>(0x40C152F4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD23_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD23_CITER_ELINKNO*>(0x40C152F6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD23_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD23_CITER_ELINKYES*>(0x40C152F6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD23_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD23_DLASTSGA*>(0x40C152F8); }
};

// TCD Control and Status
//
union TCD23_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_CSR &Instance() { return *reinterpret_cast<volatile TCD23_CSR*>(0x40C152FC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD23_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD23_BITER_ELINKNO*>(0x40C152FE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD23_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD23_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD23_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD23_BITER_ELINKYES*>(0x40C152FE); }
};

// TCD Source Address
//
union TCD24_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_SADDR &Instance() { return *reinterpret_cast<volatile TCD24_SADDR*>(0x40C15300); }
};

// TCD Signed Source Address Offset
//
union TCD24_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_SOFF &Instance() { return *reinterpret_cast<volatile TCD24_SOFF*>(0x40C15304); }
};

// TCD Transfer Attributes
//
union TCD24_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_ATTR &Instance() { return *reinterpret_cast<volatile TCD24_ATTR*>(0x40C15306); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD24_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD24_NBYTES_MLNO*>(0x40C15308); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD24_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD24_NBYTES_MLOFFNO*>(0x40C15308); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD24_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD24_NBYTES_MLOFFYES*>(0x40C15308); }
};

// TCD Last Source Address Adjustment
//
union TCD24_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_SLAST &Instance() { return *reinterpret_cast<volatile TCD24_SLAST*>(0x40C1530C); }
};

// TCD Destination Address
//
union TCD24_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_DADDR &Instance() { return *reinterpret_cast<volatile TCD24_DADDR*>(0x40C15310); }
};

// TCD Signed Destination Address Offset
//
union TCD24_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_DOFF &Instance() { return *reinterpret_cast<volatile TCD24_DOFF*>(0x40C15314); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD24_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD24_CITER_ELINKNO*>(0x40C15316); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD24_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD24_CITER_ELINKYES*>(0x40C15316); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD24_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD24_DLASTSGA*>(0x40C15318); }
};

// TCD Control and Status
//
union TCD24_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_CSR &Instance() { return *reinterpret_cast<volatile TCD24_CSR*>(0x40C1531C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD24_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD24_BITER_ELINKNO*>(0x40C1531E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD24_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD24_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD24_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD24_BITER_ELINKYES*>(0x40C1531E); }
};

// TCD Source Address
//
union TCD25_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_SADDR &Instance() { return *reinterpret_cast<volatile TCD25_SADDR*>(0x40C15320); }
};

// TCD Signed Source Address Offset
//
union TCD25_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_SOFF &Instance() { return *reinterpret_cast<volatile TCD25_SOFF*>(0x40C15324); }
};

// TCD Transfer Attributes
//
union TCD25_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_ATTR &Instance() { return *reinterpret_cast<volatile TCD25_ATTR*>(0x40C15326); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD25_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD25_NBYTES_MLNO*>(0x40C15328); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD25_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD25_NBYTES_MLOFFNO*>(0x40C15328); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD25_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD25_NBYTES_MLOFFYES*>(0x40C15328); }
};

// TCD Last Source Address Adjustment
//
union TCD25_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_SLAST &Instance() { return *reinterpret_cast<volatile TCD25_SLAST*>(0x40C1532C); }
};

// TCD Destination Address
//
union TCD25_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_DADDR &Instance() { return *reinterpret_cast<volatile TCD25_DADDR*>(0x40C15330); }
};

// TCD Signed Destination Address Offset
//
union TCD25_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_DOFF &Instance() { return *reinterpret_cast<volatile TCD25_DOFF*>(0x40C15334); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD25_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD25_CITER_ELINKNO*>(0x40C15336); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD25_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD25_CITER_ELINKYES*>(0x40C15336); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD25_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD25_DLASTSGA*>(0x40C15338); }
};

// TCD Control and Status
//
union TCD25_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_CSR &Instance() { return *reinterpret_cast<volatile TCD25_CSR*>(0x40C1533C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD25_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD25_BITER_ELINKNO*>(0x40C1533E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD25_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD25_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD25_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD25_BITER_ELINKYES*>(0x40C1533E); }
};

// TCD Source Address
//
union TCD26_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_SADDR &Instance() { return *reinterpret_cast<volatile TCD26_SADDR*>(0x40C15340); }
};

// TCD Signed Source Address Offset
//
union TCD26_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_SOFF &Instance() { return *reinterpret_cast<volatile TCD26_SOFF*>(0x40C15344); }
};

// TCD Transfer Attributes
//
union TCD26_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_ATTR &Instance() { return *reinterpret_cast<volatile TCD26_ATTR*>(0x40C15346); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD26_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD26_NBYTES_MLNO*>(0x40C15348); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD26_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD26_NBYTES_MLOFFNO*>(0x40C15348); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD26_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD26_NBYTES_MLOFFYES*>(0x40C15348); }
};

// TCD Last Source Address Adjustment
//
union TCD26_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_SLAST &Instance() { return *reinterpret_cast<volatile TCD26_SLAST*>(0x40C1534C); }
};

// TCD Destination Address
//
union TCD26_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_DADDR &Instance() { return *reinterpret_cast<volatile TCD26_DADDR*>(0x40C15350); }
};

// TCD Signed Destination Address Offset
//
union TCD26_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_DOFF &Instance() { return *reinterpret_cast<volatile TCD26_DOFF*>(0x40C15354); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD26_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD26_CITER_ELINKNO*>(0x40C15356); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD26_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD26_CITER_ELINKYES*>(0x40C15356); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD26_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD26_DLASTSGA*>(0x40C15358); }
};

// TCD Control and Status
//
union TCD26_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_CSR &Instance() { return *reinterpret_cast<volatile TCD26_CSR*>(0x40C1535C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD26_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD26_BITER_ELINKNO*>(0x40C1535E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD26_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD26_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD26_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD26_BITER_ELINKYES*>(0x40C1535E); }
};

// TCD Source Address
//
union TCD27_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_SADDR &Instance() { return *reinterpret_cast<volatile TCD27_SADDR*>(0x40C15360); }
};

// TCD Signed Source Address Offset
//
union TCD27_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_SOFF &Instance() { return *reinterpret_cast<volatile TCD27_SOFF*>(0x40C15364); }
};

// TCD Transfer Attributes
//
union TCD27_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_ATTR &Instance() { return *reinterpret_cast<volatile TCD27_ATTR*>(0x40C15366); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD27_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD27_NBYTES_MLNO*>(0x40C15368); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD27_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD27_NBYTES_MLOFFNO*>(0x40C15368); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD27_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD27_NBYTES_MLOFFYES*>(0x40C15368); }
};

// TCD Last Source Address Adjustment
//
union TCD27_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_SLAST &Instance() { return *reinterpret_cast<volatile TCD27_SLAST*>(0x40C1536C); }
};

// TCD Destination Address
//
union TCD27_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_DADDR &Instance() { return *reinterpret_cast<volatile TCD27_DADDR*>(0x40C15370); }
};

// TCD Signed Destination Address Offset
//
union TCD27_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_DOFF &Instance() { return *reinterpret_cast<volatile TCD27_DOFF*>(0x40C15374); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD27_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD27_CITER_ELINKNO*>(0x40C15376); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD27_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD27_CITER_ELINKYES*>(0x40C15376); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD27_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD27_DLASTSGA*>(0x40C15378); }
};

// TCD Control and Status
//
union TCD27_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_CSR &Instance() { return *reinterpret_cast<volatile TCD27_CSR*>(0x40C1537C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD27_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD27_BITER_ELINKNO*>(0x40C1537E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD27_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD27_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD27_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD27_BITER_ELINKYES*>(0x40C1537E); }
};

// TCD Source Address
//
union TCD28_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_SADDR &Instance() { return *reinterpret_cast<volatile TCD28_SADDR*>(0x40C15380); }
};

// TCD Signed Source Address Offset
//
union TCD28_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_SOFF &Instance() { return *reinterpret_cast<volatile TCD28_SOFF*>(0x40C15384); }
};

// TCD Transfer Attributes
//
union TCD28_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_ATTR &Instance() { return *reinterpret_cast<volatile TCD28_ATTR*>(0x40C15386); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD28_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD28_NBYTES_MLNO*>(0x40C15388); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD28_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD28_NBYTES_MLOFFNO*>(0x40C15388); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD28_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD28_NBYTES_MLOFFYES*>(0x40C15388); }
};

// TCD Last Source Address Adjustment
//
union TCD28_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_SLAST &Instance() { return *reinterpret_cast<volatile TCD28_SLAST*>(0x40C1538C); }
};

// TCD Destination Address
//
union TCD28_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_DADDR &Instance() { return *reinterpret_cast<volatile TCD28_DADDR*>(0x40C15390); }
};

// TCD Signed Destination Address Offset
//
union TCD28_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_DOFF &Instance() { return *reinterpret_cast<volatile TCD28_DOFF*>(0x40C15394); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD28_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD28_CITER_ELINKNO*>(0x40C15396); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD28_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD28_CITER_ELINKYES*>(0x40C15396); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD28_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD28_DLASTSGA*>(0x40C15398); }
};

// TCD Control and Status
//
union TCD28_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_CSR &Instance() { return *reinterpret_cast<volatile TCD28_CSR*>(0x40C1539C); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD28_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD28_BITER_ELINKNO*>(0x40C1539E); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD28_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD28_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD28_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD28_BITER_ELINKYES*>(0x40C1539E); }
};

// TCD Source Address
//
union TCD29_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_SADDR &Instance() { return *reinterpret_cast<volatile TCD29_SADDR*>(0x40C153A0); }
};

// TCD Signed Source Address Offset
//
union TCD29_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_SOFF &Instance() { return *reinterpret_cast<volatile TCD29_SOFF*>(0x40C153A4); }
};

// TCD Transfer Attributes
//
union TCD29_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_ATTR &Instance() { return *reinterpret_cast<volatile TCD29_ATTR*>(0x40C153A6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD29_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD29_NBYTES_MLNO*>(0x40C153A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD29_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD29_NBYTES_MLOFFNO*>(0x40C153A8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD29_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD29_NBYTES_MLOFFYES*>(0x40C153A8); }
};

// TCD Last Source Address Adjustment
//
union TCD29_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_SLAST &Instance() { return *reinterpret_cast<volatile TCD29_SLAST*>(0x40C153AC); }
};

// TCD Destination Address
//
union TCD29_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_DADDR &Instance() { return *reinterpret_cast<volatile TCD29_DADDR*>(0x40C153B0); }
};

// TCD Signed Destination Address Offset
//
union TCD29_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_DOFF &Instance() { return *reinterpret_cast<volatile TCD29_DOFF*>(0x40C153B4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD29_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD29_CITER_ELINKNO*>(0x40C153B6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD29_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD29_CITER_ELINKYES*>(0x40C153B6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD29_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD29_DLASTSGA*>(0x40C153B8); }
};

// TCD Control and Status
//
union TCD29_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_CSR &Instance() { return *reinterpret_cast<volatile TCD29_CSR*>(0x40C153BC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD29_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD29_BITER_ELINKNO*>(0x40C153BE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD29_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD29_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD29_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD29_BITER_ELINKYES*>(0x40C153BE); }
};

// TCD Source Address
//
union TCD30_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_SADDR &Instance() { return *reinterpret_cast<volatile TCD30_SADDR*>(0x40C153C0); }
};

// TCD Signed Source Address Offset
//
union TCD30_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_SOFF &Instance() { return *reinterpret_cast<volatile TCD30_SOFF*>(0x40C153C4); }
};

// TCD Transfer Attributes
//
union TCD30_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_ATTR &Instance() { return *reinterpret_cast<volatile TCD30_ATTR*>(0x40C153C6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD30_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD30_NBYTES_MLNO*>(0x40C153C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD30_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD30_NBYTES_MLOFFNO*>(0x40C153C8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD30_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD30_NBYTES_MLOFFYES*>(0x40C153C8); }
};

// TCD Last Source Address Adjustment
//
union TCD30_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_SLAST &Instance() { return *reinterpret_cast<volatile TCD30_SLAST*>(0x40C153CC); }
};

// TCD Destination Address
//
union TCD30_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_DADDR &Instance() { return *reinterpret_cast<volatile TCD30_DADDR*>(0x40C153D0); }
};

// TCD Signed Destination Address Offset
//
union TCD30_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_DOFF &Instance() { return *reinterpret_cast<volatile TCD30_DOFF*>(0x40C153D4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD30_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD30_CITER_ELINKNO*>(0x40C153D6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD30_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD30_CITER_ELINKYES*>(0x40C153D6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD30_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD30_DLASTSGA*>(0x40C153D8); }
};

// TCD Control and Status
//
union TCD30_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_CSR &Instance() { return *reinterpret_cast<volatile TCD30_CSR*>(0x40C153DC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD30_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD30_BITER_ELINKNO*>(0x40C153DE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD30_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD30_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD30_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD30_BITER_ELINKYES*>(0x40C153DE); }
};

// TCD Source Address
//
union TCD31_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_SADDR &Instance() { return *reinterpret_cast<volatile TCD31_SADDR*>(0x40C153E0); }
};

// TCD Signed Source Address Offset
//
union TCD31_SOFF {
  
  // Bit field definition.
  struct {
    uint32_t SOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_SOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_SOFF &Instance() { return *reinterpret_cast<volatile TCD31_SOFF*>(0x40C153E4); }
};

// TCD Transfer Attributes
//
union TCD31_ATTR {
  
  enum class eSSIZE : uint32_t {
    eEIGHT = 0, // 8-bit
    eSIXTEEN_BIT = 1, // 16-bit
    eTHIRTYTWO_BIT = 2, // 32-bit
    eSIXTYFOUR = 3, // 64-bit
    eTHIRTYTWO_BYTE = 5, // 32-byte burst (4 beats of 64 bits)
  };
  
  enum class eSMOD : uint32_t {
    eDISABLED = 0, // Source address modulo feature is disabled
    eENABLED = 1, // Value defines address range used to set up circular data queue
    eENABLED = 2, // Value defines address range used to set up circular data queue
    eENABLED = 3, // Value defines address range used to set up circular data queue
    eENABLED = 4, // Value defines address range used to set up circular data queue
    eENABLED = 5, // Value defines address range used to set up circular data queue
    eENABLED = 6, // Value defines address range used to set up circular data queue
    eENABLED = 7, // Value defines address range used to set up circular data queue
    eENABLED = 8, // Value defines address range used to set up circular data queue
    eENABLED = 9, // Value defines address range used to set up circular data queue
  };
  
  // Bit field definition.
  struct {
    uint32_t DSIZE : 3;
    uint32_t DMOD : 5;
    eSSIZE SSIZE : 3;
    eSMOD SMOD : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_ATTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_ATTR &Instance() { return *reinterpret_cast<volatile TCD31_ATTR*>(0x40C153E6); }
};

// TCD Minor Byte Count (Minor Loop Mapping Disabled)
//
union TCD31_NBYTES_MLNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_NBYTES_MLNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_NBYTES_MLNO &Instance() { return *reinterpret_cast<volatile TCD31_NBYTES_MLNO*>(0x40C153E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
//
union TCD31_NBYTES_MLOFFNO {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_NBYTES_MLOFFNO &Instance() { return *reinterpret_cast<volatile TCD31_NBYTES_MLOFFNO*>(0x40C153E8); }
};

// TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
//
union TCD31_NBYTES_MLOFFYES {
  
  enum class eDMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the DADDR
    eENABLED = 1, // The minor loop offset is applied to the DADDR
  };
  
  enum class eSMLOE : uint32_t {
    eDISABLED = 0, // The minor loop offset is not applied to the SADDR
    eENABLED = 1, // The minor loop offset is applied to the SADDR
  };
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 10;
    uint32_t MLOFF : 20;
    eDMLOE DMLOE : 1;
    eSMLOE SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_NBYTES_MLOFFYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_NBYTES_MLOFFYES &Instance() { return *reinterpret_cast<volatile TCD31_NBYTES_MLOFFYES*>(0x40C153E8); }
};

// TCD Last Source Address Adjustment
//
union TCD31_SLAST {
  
  // Bit field definition.
  struct {
    uint32_t SLAST : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_SLAST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_SLAST &Instance() { return *reinterpret_cast<volatile TCD31_SLAST*>(0x40C153EC); }
};

// TCD Destination Address
//
union TCD31_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t DADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_DADDR &Instance() { return *reinterpret_cast<volatile TCD31_DADDR*>(0x40C153F0); }
};

// TCD Signed Destination Address Offset
//
union TCD31_DOFF {
  
  // Bit field definition.
  struct {
    uint32_t DOFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_DOFF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_DOFF &Instance() { return *reinterpret_cast<volatile TCD31_DOFF*>(0x40C153F4); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD31_CITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_CITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_CITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD31_CITER_ELINKNO*>(0x40C153F6); }
};

// TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD31_CITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t CITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_CITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_CITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD31_CITER_ELINKYES*>(0x40C153F6); }
};

// TCD Last Destination Address Adjustment/Scatter Gather Address
//
union TCD31_DLASTSGA {
  
  // Bit field definition.
  struct {
    uint32_t DLASTSGA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_DLASTSGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_DLASTSGA &Instance() { return *reinterpret_cast<volatile TCD31_DLASTSGA*>(0x40C153F8); }
};

// TCD Control and Status
//
union TCD31_CSR {
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Channel is not explicitly started
    eSTART = 1, // Channel is explicitly started via a software initiated service request
  };
  
  enum class eINTMAJOR : uint32_t {
    eDISABLED = 0, // End of major loop interrupt is disabled
    eENABLED = 1, // End of major loop interrupt is enabled
  };
  
  enum class eINTHALF : uint32_t {
    eDISABLED = 0, // Half-point interrupt is disabled
    eENABLED = 1, // Half-point interrupt is enabled
  };
  
  enum class eDREQ : uint32_t {
    eNO_CLEAR = 0, // The channel's ERQ field is not affected
    eCLEAR = 1, // The channel's ERQ field value changes to 0 when the major loop is complete
  };
  
  enum class eESG : uint32_t {
    eNORMAL = 0, // The current channel's TCD is normal format
    eSCATTER = 1, // The current channel's TCD specifies a scatter gather format
  };
  
  enum class eMAJORELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  enum class eBWC : uint32_t {
    eDISABLED = 0, // No eDMA engine stalls
    eSTALL4 = 2, // eDMA engine stalls for 4 cycles after each R/W
    eSTALL8 = 3, // eDMA engine stalls for 8 cycles after each R/W
  };
  
  // Bit field definition.
  struct {
    eSTART START : 1;
    eINTMAJOR INTMAJOR : 1;
    eINTHALF INTHALF : 1;
    eDREQ DREQ : 1;
    eESG ESG : 1;
    eMAJORELINK MAJORELINK : 1;
    uint32_t ACTIVE : 1;
    uint32_t DONE : 1;
    uint32_t MAJORLINKCH : 5;
    uint32_t _reserved_0 : 1;
    eBWC BWC : 2;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_CSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_CSR &Instance() { return *reinterpret_cast<volatile TCD31_CSR*>(0x40C153FC); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
//
union TCD31_BITER_ELINKNO {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 15;
    eELINK ELINK : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_BITER_ELINKNO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_BITER_ELINKNO &Instance() { return *reinterpret_cast<volatile TCD31_BITER_ELINKNO*>(0x40C153FE); }
};

// TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
//
union TCD31_BITER_ELINKYES {
  
  enum class eELINK : uint32_t {
    eDISABLED = 0, // Channel-to-channel linking is disabled
    eENABLED = 1, // Channel-to-channel linking is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t BITER : 9;
    uint32_t LINKCH : 5;
    uint32_t _reserved_0 : 1;
    eELINK ELINK : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD31_BITER_ELINKYES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCD31_BITER_ELINKYES &Instance() { return *reinterpret_cast<volatile TCD31_BITER_ELINKYES*>(0x40C153FE); }
};


} // namespace nDMA1