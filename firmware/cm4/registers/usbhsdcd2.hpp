#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// USBDCD
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nUSBHSDCD2 {


// Control register
//
union CONTROL {
  
  enum class eIACK : uint32_t {
    eINT_NOCLEAR = 0, // Do not clear the interrupt.
    eINT_CLEAR = 1, // Clear the IF bit (interrupt flag).
  };
  
  enum class eIF : uint32_t {
    eINT_PEND = 0, // No interrupt is pending.
    eINT_NOPEND = 1, // An interrupt is pending.
  };
  
  enum class eIE : uint32_t {
    eDIS_INT = 0, // Disable interrupts to the system.
    eEN_INT = 1, // Enable interrupts to the system.
  };
  
  enum class eBC12 : uint32_t {
    eBC11 = 0, // Compatible with BC1.1 (default)
    eBC12 = 1, // Compatible with BC1.2
  };
  
  enum class eSTART : uint32_t {
    eNO_START = 0, // Do not start the sequence. Writes of this value have no effect.
    eSTART = 1, // Initiate the charger detection sequence. If the sequence is already running, writes of this value have no effect.
  };
  
  enum class eSR : uint32_t {
    eNO_RESET = 0, // Do not perform a software reset.
    eSW_RESET = 1, // Perform a software reset.
  };
  
  // Bit field definition.
  struct {
    eIACK IACK : 1;
    uint32_t _reserved_0 : 7;
    eIF IF : 1;
    uint32_t _reserved_1 : 7;
    eIE IE : 1;
    eBC12 BC12 : 1;
    uint32_t _reserved_2 : 6;
    eSTART START : 1;
    eSR SR : 1;
    uint32_t _reserved_3 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile CONTROL &Instance() { return *reinterpret_cast<volatile CONTROL*>(0x40438800); }
};

// Clock register
//
union CLOCK {
  
  enum class eCLOCK_UNIT : uint32_t {
    eKHZ_CLK = 0, // kHz Speed (between 1 kHz and 1023 kHz)
    eMHZ_CLK = 1, // MHz Speed (between 1 MHz and 1023 MHz)
  };
  
  // Bit field definition.
  struct {
    eCLOCK_UNIT CLOCK_UNIT : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CLOCK_SPEED : 10;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLOCK() = delete;
  inline void Reset() volatile { this->value = 0x000000C1; }
  static inline volatile CLOCK &Instance() { return *reinterpret_cast<volatile CLOCK*>(0x40438804); }
};

// Status register
//
union STATUS {
  
  enum class eSEQ_RES : uint32_t {
    eNO_RESULT = 0, // No results to report.
    eCONN_SDP = 1, // Attached to an SDP. Must comply with USB 2.0 by drawing only 2.5 mA (max) until connected.
    eCONN_CP = 2, // Attached to a charging port. The exact meaning depends on bit 18 (value 0: Attached to either a CDP or a DCP. The charger type detection has not completed. value 1: Attached to a CDP. The charger type detection has completed.)
    eCONN_DCP = 3, // Attached to a DCP.
  };
  
  enum class eSEQ_STAT : uint32_t {
    eNO_DATA_PIN_CONN = 0, // The module is either not enabled, or the module is enabled but the data pins have not yet been detected.
    eDATA_PIN_CONN = 1, // Data pin contact detection is complete.
    eCP_DET_DONE = 2, // Charging port detection is complete.
    eCT_DET_DONE = 3, // Charger type detection is complete.
  };
  
  enum class eERR : uint32_t {
    eNO_SEQ_ERR = 0, // No sequence errors.
    eSEQ_ERR = 1, // Error in the detection sequence. See the SEQ_STAT field to determine the phase in which the error occurred.
  };
  
  enum class eTO : uint32_t {
    eNO_TIMEOUT = 0, // The detection sequence has not been running for over 1s.
    eTIMEOUT = 1, // It has been over 1 s since the data pin contact was detected and debounced.
  };
  
  enum class eACTIVE : uint32_t {
    eSEQ_NOT_RUNNING = 0, // The sequence is not running.
    eSEQ_RUNNING = 1, // The sequence is running.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    eSEQ_RES SEQ_RES : 2;
    eSEQ_STAT SEQ_STAT : 2;
    eERR ERR : 1;
    eTO TO : 1;
    eACTIVE ACTIVE : 1;
    uint32_t _reserved_1 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STATUS &Instance() { return *reinterpret_cast<volatile STATUS*>(0x40438808); }
};

// Signal Override Register
//
union SIGNAL_OVERRIDE {
  
  enum class ePS : uint32_t {
    eNO_OVERRIDE = 0, // No overrides. Bit field must remain at this value during normal USB data communication to prevent unexpected conditions on USB_DP and USB_DM pins. (Default)
    ePRI_DET_OVERRIDE = 2, // Enables VDP_SRC voltage source for the USB_DP pin and IDM_SINK current source for the USB_DM pin.
  };
  
  // Bit field definition.
  struct {
    ePS PS : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIGNAL_OVERRIDE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SIGNAL_OVERRIDE &Instance() { return *reinterpret_cast<volatile SIGNAL_OVERRIDE*>(0x4043880C); }
};

// TIMER0 register
//
union TIMER0 {
  
  enum class eTSEQ_INIT : uint32_t {
    eMS = 0, // 0ms - 1023ms
    eMS = 1, // 0ms - 1023ms
    eMS = 2, // 0ms - 1023ms
    eMS = 3, // 0ms - 1023ms
    eMS = 4, // 0ms - 1023ms
    eMS = 5, // 0ms - 1023ms
    eMS = 6, // 0ms - 1023ms
    eMS = 7, // 0ms - 1023ms
    eMS = 8, // 0ms - 1023ms
    eMS = 9, // 0ms - 1023ms
  };
  
  // Bit field definition.
  struct {
    uint32_t TUNITCON : 12;
    uint32_t _reserved_0 : 4;
    eTSEQ_INIT TSEQ_INIT : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER0() = delete;
  inline void Reset() volatile { this->value = 0x00100000; }
  static inline volatile TIMER0 &Instance() { return *reinterpret_cast<volatile TIMER0*>(0x40438810); }
};

// TIMER1 register
//
union TIMER1 {
  
  enum class eTVDPSRC_ON : uint32_t {
    eMS = 1, // 1ms - 1023ms
    eMS = 2, // 1ms - 1023ms
    eMS = 3, // 1ms - 1023ms
    eMS = 4, // 1ms - 1023ms
    eMS = 5, // 1ms - 1023ms
    eMS = 6, // 1ms - 1023ms
    eMS = 7, // 1ms - 1023ms
    eMS = 8, // 1ms - 1023ms
    eMS = 9, // 1ms - 1023ms
    eMS = 10, // 1ms - 1023ms
  };
  
  enum class eTDCD_DBNC : uint32_t {
    eMS = 1, // 1ms - 1023ms
    eMS = 2, // 1ms - 1023ms
    eMS = 3, // 1ms - 1023ms
    eMS = 4, // 1ms - 1023ms
    eMS = 5, // 1ms - 1023ms
    eMS = 6, // 1ms - 1023ms
    eMS = 7, // 1ms - 1023ms
    eMS = 8, // 1ms - 1023ms
    eMS = 9, // 1ms - 1023ms
    eMS = 10, // 1ms - 1023ms
  };
  
  // Bit field definition.
  struct {
    eTVDPSRC_ON TVDPSRC_ON : 10;
    uint32_t _reserved_0 : 6;
    eTDCD_DBNC TDCD_DBNC : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER1() = delete;
  inline void Reset() volatile { this->value = 0x000A0028; }
  static inline volatile TIMER1 &Instance() { return *reinterpret_cast<volatile TIMER1*>(0x40438814); }
};

// TIMER2_BC11 register
//
union TIMER2_BC11 {
  
  enum class eCHECK_DM : uint32_t {
    eMS = 1, // 1ms - 15ms
    eMS = 2, // 1ms - 15ms
    eMS = 3, // 1ms - 15ms
    eMS = 4, // 1ms - 15ms
    eMS = 5, // 1ms - 15ms
    eMS = 6, // 1ms - 15ms
    eMS = 7, // 1ms - 15ms
    eMS = 8, // 1ms - 15ms
    eMS = 9, // 1ms - 15ms
    eMS = 10, // 1ms - 15ms
  };
  
  enum class eTVDPSRC_CON : uint32_t {
    eMS = 1, // 1ms - 1023ms
    eMS = 2, // 1ms - 1023ms
    eMS = 3, // 1ms - 1023ms
    eMS = 4, // 1ms - 1023ms
    eMS = 5, // 1ms - 1023ms
    eMS = 6, // 1ms - 1023ms
    eMS = 7, // 1ms - 1023ms
    eMS = 8, // 1ms - 1023ms
    eMS = 9, // 1ms - 1023ms
    eMS = 10, // 1ms - 1023ms
  };
  
  // Bit field definition.
  struct {
    eCHECK_DM CHECK_DM : 4;
    uint32_t _reserved_0 : 12;
    eTVDPSRC_CON TVDPSRC_CON : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER2_BC11() = delete;
  inline void Reset() volatile { this->value = 0x00280001; }
  static inline volatile TIMER2_BC11 &Instance() { return *reinterpret_cast<volatile TIMER2_BC11*>(0x40438818); }
};

// TIMER2_BC12 register
//
union TIMER2_BC12 {
  
  enum class eTVDMSRC_ON : uint32_t {
    eMS = 0, // 0ms - 40ms
    eMS = 1, // 0ms - 40ms
    eMS = 2, // 0ms - 40ms
    eMS = 3, // 0ms - 40ms
    eMS = 4, // 0ms - 40ms
    eMS = 5, // 0ms - 40ms
    eMS = 6, // 0ms - 40ms
    eMS = 7, // 0ms - 40ms
    eMS = 8, // 0ms - 40ms
    eMS = 9, // 0ms - 40ms
  };
  
  enum class eTWAIT_AFTER_PRD : uint32_t {
    eMS = 1, // 1ms - 1023ms
    eMS = 2, // 1ms - 1023ms
    eMS = 3, // 1ms - 1023ms
    eMS = 4, // 1ms - 1023ms
    eMS = 5, // 1ms - 1023ms
    eMS = 6, // 1ms - 1023ms
    eMS = 7, // 1ms - 1023ms
    eMS = 8, // 1ms - 1023ms
    eMS = 9, // 1ms - 1023ms
    eMS = 10, // 1ms - 1023ms
  };
  
  // Bit field definition.
  struct {
    eTVDMSRC_ON TVDMSRC_ON : 10;
    uint32_t _reserved_0 : 6;
    eTWAIT_AFTER_PRD TWAIT_AFTER_PRD : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER2_BC12() = delete;
  inline void Reset() volatile { this->value = 0x00010028; }
  static inline volatile TIMER2_BC12 &Instance() { return *reinterpret_cast<volatile TIMER2_BC12*>(0x40438818); }
};


} // namespace nUSBHSDCD2