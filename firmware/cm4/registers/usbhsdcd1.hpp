#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// USBDCD
namespace nUSBHSDCD1 {


// Control register
union CONTROL {
  
  // Interrupt Acknowledge
  enum class eIACK : uint32_t {
    // Do not clear the interrupt.
    eINT_NOCLEAR = 0,
    // Clear the IF bit (interrupt flag).
    eINT_CLEAR = 1,
  };
  
  // Interrupt Flag
  enum class eIF : uint32_t {
    // No interrupt is pending.
    eINT_PEND = 0,
    // An interrupt is pending.
    eINT_NOPEND = 1,
  };
  
  // Interrupt Enable
  enum class eIE : uint32_t {
    // Disable interrupts to the system.
    eDIS_INT = 0,
    // Enable interrupts to the system.
    eEN_INT = 1,
  };
  
  // BC12
  enum class eBC12 : uint32_t {
    // Compatible with BC1.1 (default)
    eBC11 = 0,
    // Compatible with BC1.2
    eBC12 = 1,
  };
  
  // Start Change Detection Sequence
  enum class eSTART : uint32_t {
    // Do not start the sequence. Writes of this value have no effect.
    eNO_START = 0,
    // Initiate the charger detection sequence. If the sequence is already running, writes of this value have no effect.
    eSTART = 1,
  };
  
  // Software Reset
  enum class eSR : uint32_t {
    // Do not perform a software reset.
    eNO_RESET = 0,
    // Perform a software reset.
    eSW_RESET = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt Acknowledge
    eIACK IACK : 1;
    uint32_t _reserved_0 : 7;
    // read-only - Interrupt Flag
    eIF IF : 1;
    uint32_t _reserved_1 : 7;
    // read-write - Interrupt Enable
    eIE IE : 1;
    // read-write - BC12
    eBC12 BC12 : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Start Change Detection Sequence
    eSTART START : 1;
    // read-write - Software Reset
    eSR SR : 1;
    uint32_t _reserved_3 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile CONTROL &Instance() { return *reinterpret_cast<volatile CONTROL*>(0x40434800); }
};

// Clock register
union CLOCK {
  
  // Unit of Measurement Encoding for Clock Speed
  enum class eCLOCK_UNIT : uint32_t {
    // kHz Speed (between 1 kHz and 1023 kHz)
    eKHZ_CLK = 0,
    // MHz Speed (between 1 MHz and 1023 MHz)
    eMHZ_CLK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Unit of Measurement Encoding for Clock Speed
    eCLOCK_UNIT CLOCK_UNIT : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Numerical Value of Clock Speed in Binary
    uint32_t CLOCK_SPEED : 10;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLOCK() = delete;
  inline void Reset() volatile { this->value = 0x000000C1; }
  static inline volatile CLOCK &Instance() { return *reinterpret_cast<volatile CLOCK*>(0x40434804); }
};

// Status register
union STATUS {
  
  // Charger Detection Sequence Results
  enum class eSEQ_RES : uint32_t {
    // No results to report.
    eNO_RESULT = 0,
    // Attached to an SDP. Must comply with USB 2.0 by drawing only 2.5 mA (max) until connected.
    eCONN_SDP = 1,
    // Attached to a charging port. The exact meaning depends on bit 18 (value 0: Attached to either a CDP or a DCP. The charger type detection has not completed. value 1: Attached to a CDP. The charger type detection has completed.)
    eCONN_CP = 2,
    // Attached to a DCP.
    eCONN_DCP = 3,
  };
  
  // Charger Detection Sequence Status
  enum class eSEQ_STAT : uint32_t {
    // The module is either not enabled, or the module is enabled but the data pins have not yet been detected.
    eNO_DATA_PIN_CONN = 0,
    // Data pin contact detection is complete.
    eDATA_PIN_CONN = 1,
    // Charging port detection is complete.
    eCP_DET_DONE = 2,
    // Charger type detection is complete.
    eCT_DET_DONE = 3,
  };
  
  // Error Flag
  enum class eERR : uint32_t {
    // No sequence errors.
    eNO_SEQ_ERR = 0,
    // Error in the detection sequence. See the SEQ_STAT field to determine the phase in which the error occurred.
    eSEQ_ERR = 1,
  };
  
  // Timeout Flag
  enum class eTO : uint32_t {
    // The detection sequence has not been running for over 1s.
    eNO_TIMEOUT = 0,
    // It has been over 1 s since the data pin contact was detected and debounced.
    eTIMEOUT = 1,
  };
  
  // Active Status Indicator
  enum class eACTIVE : uint32_t {
    // The sequence is not running.
    eSEQ_NOT_RUNNING = 0,
    // The sequence is running.
    eSEQ_RUNNING = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-only - Charger Detection Sequence Results
    eSEQ_RES SEQ_RES : 2;
    // read-only - Charger Detection Sequence Status
    eSEQ_STAT SEQ_STAT : 2;
    // read-only - Error Flag
    eERR ERR : 1;
    // read-only - Timeout Flag
    eTO TO : 1;
    // read-only - Active Status Indicator
    eACTIVE ACTIVE : 1;
    uint32_t _reserved_1 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STATUS &Instance() { return *reinterpret_cast<volatile STATUS*>(0x40434808); }
};

// Signal Override Register
union SIGNAL_OVERRIDE {
  
  // Phase Selection
  enum class ePS : uint32_t {
    // No overrides. Bit field must remain at this value during normal USB data communication to prevent unexpected conditions on USB_DP and USB_DM pins. (Default)
    eNO_OVERRIDE = 0,
    // Enables VDP_SRC voltage source for the USB_DP pin and IDM_SINK current source for the USB_DM pin.
    ePRI_DET_OVERRIDE = 2,
  };
  
  // Bit field definition.
  struct {
    // read-write - Phase Selection
    ePS PS : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SIGNAL_OVERRIDE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SIGNAL_OVERRIDE &Instance() { return *reinterpret_cast<volatile SIGNAL_OVERRIDE*>(0x4043480C); }
};

// TIMER0 register
union TIMER0 {
  
  // Sequence Initiation Time
  enum class eTSEQ_INIT : uint32_t {
    // 0ms - 1023ms
    eMS_0 = 0,
    // 0ms - 1023ms
    eMS_1 = 1,
    // 0ms - 1023ms
    eMS_2 = 2,
    // 0ms - 1023ms
    eMS_3 = 3,
    // 0ms - 1023ms
    eMS_4 = 4,
    // 0ms - 1023ms
    eMS_5 = 5,
    // 0ms - 1023ms
    eMS_6 = 6,
    // 0ms - 1023ms
    eMS_7 = 7,
    // 0ms - 1023ms
    eMS_8 = 8,
    // 0ms - 1023ms
    eMS_9 = 9,
  };
  
  // Bit field definition.
  struct {
    // read-only - Unit Connection Timer Elapse (in ms)
    uint32_t TUNITCON : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Sequence Initiation Time
    eTSEQ_INIT TSEQ_INIT : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER0() = delete;
  inline void Reset() volatile { this->value = 0x00100000; }
  static inline volatile TIMER0 &Instance() { return *reinterpret_cast<volatile TIMER0*>(0x40434810); }
};

// TIMER1 register
union TIMER1 {
  
  // Time Period Comparator Enabled
  enum class eTVDPSRC_ON : uint32_t {
    // 1ms - 1023ms
    eMS_1 = 1,
    // 1ms - 1023ms
    eMS_2 = 2,
    // 1ms - 1023ms
    eMS_3 = 3,
    // 1ms - 1023ms
    eMS_4 = 4,
    // 1ms - 1023ms
    eMS_5 = 5,
    // 1ms - 1023ms
    eMS_6 = 6,
    // 1ms - 1023ms
    eMS_7 = 7,
    // 1ms - 1023ms
    eMS_8 = 8,
    // 1ms - 1023ms
    eMS_9 = 9,
    // 1ms - 1023ms
    eMS_10 = 10,
  };
  
  // Time Period to Debounce D+ Signal
  enum class eTDCD_DBNC : uint32_t {
    // 1ms - 1023ms
    eMS_1 = 1,
    // 1ms - 1023ms
    eMS_2 = 2,
    // 1ms - 1023ms
    eMS_3 = 3,
    // 1ms - 1023ms
    eMS_4 = 4,
    // 1ms - 1023ms
    eMS_5 = 5,
    // 1ms - 1023ms
    eMS_6 = 6,
    // 1ms - 1023ms
    eMS_7 = 7,
    // 1ms - 1023ms
    eMS_8 = 8,
    // 1ms - 1023ms
    eMS_9 = 9,
    // 1ms - 1023ms
    eMS_10 = 10,
  };
  
  // Bit field definition.
  struct {
    // read-write - Time Period Comparator Enabled
    eTVDPSRC_ON TVDPSRC_ON : 10;
    uint32_t _reserved_0 : 6;
    // read-write - Time Period to Debounce D+ Signal
    eTDCD_DBNC TDCD_DBNC : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER1() = delete;
  inline void Reset() volatile { this->value = 0x000A0028; }
  static inline volatile TIMER1 &Instance() { return *reinterpret_cast<volatile TIMER1*>(0x40434814); }
};

// TIMER2_BC11 register
union TIMER2_BC11 {
  
  // Time Before Check of D- Line
  enum class eCHECK_DM : uint32_t {
    // 1ms - 15ms
    eMS_1 = 1,
    // 1ms - 15ms
    eMS_2 = 2,
    // 1ms - 15ms
    eMS_3 = 3,
    // 1ms - 15ms
    eMS_4 = 4,
    // 1ms - 15ms
    eMS_5 = 5,
    // 1ms - 15ms
    eMS_6 = 6,
    // 1ms - 15ms
    eMS_7 = 7,
    // 1ms - 15ms
    eMS_8 = 8,
    // 1ms - 15ms
    eMS_9 = 9,
    // 1ms - 15ms
    eMS_10 = 10,
  };
  
  // Time Period Before Enabling D+ Pullup
  enum class eTVDPSRC_CON : uint32_t {
    // 1ms - 1023ms
    eMS_1 = 1,
    // 1ms - 1023ms
    eMS_2 = 2,
    // 1ms - 1023ms
    eMS_3 = 3,
    // 1ms - 1023ms
    eMS_4 = 4,
    // 1ms - 1023ms
    eMS_5 = 5,
    // 1ms - 1023ms
    eMS_6 = 6,
    // 1ms - 1023ms
    eMS_7 = 7,
    // 1ms - 1023ms
    eMS_8 = 8,
    // 1ms - 1023ms
    eMS_9 = 9,
    // 1ms - 1023ms
    eMS_10 = 10,
  };
  
  // Bit field definition.
  struct {
    // read-write - Time Before Check of D- Line
    eCHECK_DM CHECK_DM : 4;
    uint32_t _reserved_0 : 12;
    // read-write - Time Period Before Enabling D+ Pullup
    eTVDPSRC_CON TVDPSRC_CON : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER2_BC11() = delete;
  inline void Reset() volatile { this->value = 0x00280001; }
  static inline volatile TIMER2_BC11 &Instance() { return *reinterpret_cast<volatile TIMER2_BC11*>(0x40434818); }
};

// TIMER2_BC12 register
union TIMER2_BC12 {
  
  // TVDMSRC_ON
  enum class eTVDMSRC_ON : uint32_t {
    // 0ms - 40ms
    eMS_0 = 0,
    // 0ms - 40ms
    eMS_1 = 1,
    // 0ms - 40ms
    eMS_2 = 2,
    // 0ms - 40ms
    eMS_3 = 3,
    // 0ms - 40ms
    eMS_4 = 4,
    // 0ms - 40ms
    eMS_5 = 5,
    // 0ms - 40ms
    eMS_6 = 6,
    // 0ms - 40ms
    eMS_7 = 7,
    // 0ms - 40ms
    eMS_8 = 8,
    // 0ms - 40ms
    eMS_9 = 9,
  };
  
  // TWAIT_AFTER_PRD
  enum class eTWAIT_AFTER_PRD : uint32_t {
    // 1ms - 1023ms
    eMS_1 = 1,
    // 1ms - 1023ms
    eMS_2 = 2,
    // 1ms - 1023ms
    eMS_3 = 3,
    // 1ms - 1023ms
    eMS_4 = 4,
    // 1ms - 1023ms
    eMS_5 = 5,
    // 1ms - 1023ms
    eMS_6 = 6,
    // 1ms - 1023ms
    eMS_7 = 7,
    // 1ms - 1023ms
    eMS_8 = 8,
    // 1ms - 1023ms
    eMS_9 = 9,
    // 1ms - 1023ms
    eMS_10 = 10,
  };
  
  // Bit field definition.
  struct {
    // read-write - TVDMSRC_ON
    eTVDMSRC_ON TVDMSRC_ON : 10;
    uint32_t _reserved_0 : 6;
    // read-write - TWAIT_AFTER_PRD
    eTWAIT_AFTER_PRD TWAIT_AFTER_PRD : 10;
    uint32_t _reserved_1 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER2_BC12() = delete;
  inline void Reset() volatile { this->value = 0x00010028; }
  static inline volatile TIMER2_BC12 &Instance() { return *reinterpret_cast<volatile TIMER2_BC12*>(0x40434818); }
};


} // namespace nUSBHSDCD1