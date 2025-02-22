#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// FLEXIO
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nFLEXIO1 {


// Version ID Register
//
union VERID {
  
  enum class eFEATURE : uint32_t {
    estandard = 0, // Standard features implemented.
    estate_logic_parallel = 1, // Supports state, logic and parallel modes.
    epinctrl = 2, // Supports pin control registers.
    estate_logic_parallel_pinctrl = 3, // Supports state, logic and parallel modes; plus pin control registers.
  };
  
  // Bit field definition.
  struct {
    /// read-only - Feature Specification Number
    eFEATURE FEATURE : 16;
    /// read-only - Minor Version Number
    uint32_t MINOR : 8;
    /// read-only - Major Version Number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x02000001; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x400AC000); }
};

// Parameter Register
//
union PARAM {
  
  // Bit field definition.
  struct {
    /// read-only - Shifter Number
    uint32_t SHIFTER : 8;
    /// read-only - Timer Number
    uint32_t TIMER : 8;
    /// read-only - Pin Number
    uint32_t PIN : 8;
    /// read-only - Trigger Number
    uint32_t TRIGGER : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x02200808; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x400AC004); }
};

// FlexIO Control Register
//
union CTRL {
  
  enum class eFLEXEN : uint32_t {
    edisable = 0, // FlexIO module is disabled.
    eenable = 1, // FlexIO module is enabled.
  };
  
  enum class eSWRST : uint32_t {
    edisable = 0, // Software reset is disabled
    eenable = 1, // Software reset is enabled, all FlexIO registers except the Control Register are reset.
  };
  
  enum class eFASTACC : uint32_t {
    enormal = 0, // Configures for normal register accesses to FlexIO
    efast = 1, // Configures for fast register accesses to FlexIO
  };
  
  enum class eDBGE : uint32_t {
    edisable = 0, // FlexIO is disabled in debug modes.
    eemable = 1, // FlexIO is enabled in debug modes
  };
  
  enum class eDOZEN : uint32_t {
    eenable = 0, // FlexIO enabled in Doze modes.
    edisable = 1, // FlexIO disabled in Doze modes.
  };
  
  // Bit field definition.
  struct {
    /// read-write - FlexIO Enable
    eFLEXEN FLEXEN : 1;
    /// read-write - Software Reset
    eSWRST SWRST : 1;
    /// read-write - Fast Access
    eFASTACC FASTACC : 1;
    uint32_t _reserved_0 : 27;
    /// read-write - Debug Enable
    eDBGE DBGE : 1;
    /// read-write - Doze Enable
    eDOZEN DOZEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x400AC008); }
};

// Pin State Register
//
union PIN {
  
  // Bit field definition.
  struct {
    /// read-only - Pin Data Input
    uint32_t PDI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIN &Instance() { return *reinterpret_cast<volatile PIN*>(0x400AC00C); }
};

// Shifter Status Register
//
union SHIFTSTAT {
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Status Flag
    uint32_t SSF : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSTAT &Instance() { return *reinterpret_cast<volatile SHIFTSTAT*>(0x400AC010); }
};

// Shifter Error Register
//
union SHIFTERR {
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Error Flags
    uint32_t SEF : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTERR &Instance() { return *reinterpret_cast<volatile SHIFTERR*>(0x400AC014); }
};

// Timer Status Register
//
union TIMSTAT {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Status Flags
    uint32_t TSF : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMSTAT &Instance() { return *reinterpret_cast<volatile TIMSTAT*>(0x400AC018); }
};

// Shifter Status Interrupt Enable
//
union SHIFTSIEN {
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Status Interrupt Enable
    uint32_t SSIE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSIEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSIEN &Instance() { return *reinterpret_cast<volatile SHIFTSIEN*>(0x400AC020); }
};

// Shifter Error Interrupt Enable
//
union SHIFTEIEN {
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Error Interrupt Enable
    uint32_t SEIE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTEIEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTEIEN &Instance() { return *reinterpret_cast<volatile SHIFTEIEN*>(0x400AC024); }
};

// Timer Interrupt Enable Register
//
union TIMIEN {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Status Interrupt Enable
    uint32_t TEIE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMIEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMIEN &Instance() { return *reinterpret_cast<volatile TIMIEN*>(0x400AC028); }
};

// Shifter Status DMA Enable
//
union SHIFTSDEN {
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Status DMA Enable
    uint32_t SSDE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSDEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSDEN &Instance() { return *reinterpret_cast<volatile SHIFTSDEN*>(0x400AC030); }
};

// Timer Status DMA Enable
//
union TIMERSDEN {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Status DMA Enable
    uint32_t TSDE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMERSDEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMERSDEN &Instance() { return *reinterpret_cast<volatile TIMERSDEN*>(0x400AC038); }
};

// Shifter State Register
//
union SHIFTSTATE {
  
  // Bit field definition.
  struct {
    /// read-write - Current State Pointer
    uint32_t STATE : 3;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSTATE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSTATE &Instance() { return *reinterpret_cast<volatile SHIFTSTATE*>(0x400AC040); }
};

// Shifter Control N Register
//
union SHIFTCTL[0] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[0] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[0]*>(0x400AC080); }
};
// Shifter Control N Register
//
union SHIFTCTL[1] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[1] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[1]*>(0x400AC084); }
};
// Shifter Control N Register
//
union SHIFTCTL[2] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[2] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[2]*>(0x400AC088); }
};
// Shifter Control N Register
//
union SHIFTCTL[3] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[3] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[3]*>(0x400AC08C); }
};
// Shifter Control N Register
//
union SHIFTCTL[4] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[4] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[4]*>(0x400AC090); }
};
// Shifter Control N Register
//
union SHIFTCTL[5] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[5] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[5]*>(0x400AC094); }
};
// Shifter Control N Register
//
union SHIFTCTL[6] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[6] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[6]*>(0x400AC098); }
};
// Shifter Control N Register
//
union SHIFTCTL[7] {
  
  enum class eSMOD : uint32_t {
    edisable = 0, // Disabled.
    ereceive = 1, // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    etransmit = 2, // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    ematchstore = 4, // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchcont = 5, // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    estate = 6, // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    elogic = 7, // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    edisable = 0, // Shifter pin output disabled
    eopend_bidirouten = 1, // Shifter pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Shifter pin bidirectional output data
    eoutput = 3, // Shifter pin output
  };
  
  enum class eTIMPOL : uint32_t {
    eposedge = 0, // Shift on posedge of Shift clock
    enegedge = 1, // Shift on negedge of Shift clock
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    /// read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    /// read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL[7] &Instance() { return *reinterpret_cast<volatile SHIFTCTL[7]*>(0x400AC09C); }
};

// Shifter Configuration N Register
//
union SHIFTCFG[0] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[0] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[0]*>(0x400AC100); }
};
// Shifter Configuration N Register
//
union SHIFTCFG[1] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[1] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[1]*>(0x400AC104); }
};
// Shifter Configuration N Register
//
union SHIFTCFG[2] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[2] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[2]*>(0x400AC108); }
};
// Shifter Configuration N Register
//
union SHIFTCFG[3] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[3] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[3]*>(0x400AC10C); }
};
// Shifter Configuration N Register
//
union SHIFTCFG[4] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[4] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[4]*>(0x400AC110); }
};
// Shifter Configuration N Register
//
union SHIFTCFG[5] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[5] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[5]*>(0x400AC114); }
};
// Shifter Configuration N Register
//
union SHIFTCFG[6] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[6] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[6]*>(0x400AC118); }
};
// Shifter Configuration N Register
//
union SHIFTCFG[7] {
  
  enum class eSSTART : uint32_t {
    evalue00 = 0, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue01 = 1, // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue10 = 2, // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue11 = 3, // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
  };
  
  enum class eSSTOP : uint32_t {
    evalue00 = 0, // Stop bit disabled for transmitter/receiver/match store
    evalue10 = 2, // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue11 = 3, // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
  };
  
  enum class eINSRC : uint32_t {
    epin = 0, // Pin
    eshifter_nplus1 = 1, // Shifter N+1 Output
  };
  
  enum class eLATST : uint32_t {
    epreshift = 0, // Shift register stores the pre-shift register state.
    epostshift = 1, // Shift register stores the post-shift register state.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    /// read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    /// read-write - Input Source
    eINSRC INSRC : 1;
    /// read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    /// read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG[7] &Instance() { return *reinterpret_cast<volatile SHIFTCFG[7]*>(0x400AC11C); }
};

// Shifter Buffer N Register
//
union SHIFTBUF[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[0]*>(0x400AC200); }
};
// Shifter Buffer N Register
//
union SHIFTBUF[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[1]*>(0x400AC204); }
};
// Shifter Buffer N Register
//
union SHIFTBUF[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[2]*>(0x400AC208); }
};
// Shifter Buffer N Register
//
union SHIFTBUF[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[3]*>(0x400AC20C); }
};
// Shifter Buffer N Register
//
union SHIFTBUF[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[4]*>(0x400AC210); }
};
// Shifter Buffer N Register
//
union SHIFTBUF[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[5]*>(0x400AC214); }
};
// Shifter Buffer N Register
//
union SHIFTBUF[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[6]*>(0x400AC218); }
};
// Shifter Buffer N Register
//
union SHIFTBUF[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUF[7]*>(0x400AC21C); }
};

// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[0]*>(0x400AC280); }
};
// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[1]*>(0x400AC284); }
};
// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[2]*>(0x400AC288); }
};
// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[3]*>(0x400AC28C); }
};
// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[4]*>(0x400AC290); }
};
// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[5]*>(0x400AC294); }
};
// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[6]*>(0x400AC298); }
};
// Shifter Buffer N Bit Swapped Register
//
union SHIFTBUFBIS[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS[7]*>(0x400AC29C); }
};

// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[0]*>(0x400AC300); }
};
// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[1]*>(0x400AC304); }
};
// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[2]*>(0x400AC308); }
};
// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[3]*>(0x400AC30C); }
};
// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[4]*>(0x400AC310); }
};
// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[5]*>(0x400AC314); }
};
// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[6]*>(0x400AC318); }
};
// Shifter Buffer N Byte Swapped Register
//
union SHIFTBUFBYS[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS[7]*>(0x400AC31C); }
};

// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[0]*>(0x400AC380); }
};
// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[1]*>(0x400AC384); }
};
// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[2]*>(0x400AC388); }
};
// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[3]*>(0x400AC38C); }
};
// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[4]*>(0x400AC390); }
};
// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[5]*>(0x400AC394); }
};
// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[6]*>(0x400AC398); }
};
// Shifter Buffer N Bit Byte Swapped Register
//
union SHIFTBUFBBS[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS[7]*>(0x400AC39C); }
};

// Timer Control N Register
//
union TIMCTL[0] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[0] &Instance() { return *reinterpret_cast<volatile TIMCTL[0]*>(0x400AC400); }
};
// Timer Control N Register
//
union TIMCTL[1] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[1] &Instance() { return *reinterpret_cast<volatile TIMCTL[1]*>(0x400AC404); }
};
// Timer Control N Register
//
union TIMCTL[2] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[2] &Instance() { return *reinterpret_cast<volatile TIMCTL[2]*>(0x400AC408); }
};
// Timer Control N Register
//
union TIMCTL[3] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[3] &Instance() { return *reinterpret_cast<volatile TIMCTL[3]*>(0x400AC40C); }
};
// Timer Control N Register
//
union TIMCTL[4] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[4] &Instance() { return *reinterpret_cast<volatile TIMCTL[4]*>(0x400AC410); }
};
// Timer Control N Register
//
union TIMCTL[5] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[5] &Instance() { return *reinterpret_cast<volatile TIMCTL[5]*>(0x400AC414); }
};
// Timer Control N Register
//
union TIMCTL[6] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[6] &Instance() { return *reinterpret_cast<volatile TIMCTL[6]*>(0x400AC418); }
};
// Timer Control N Register
//
union TIMCTL[7] {
  
  enum class eTIMOD : uint32_t {
    edisable = 0, // Timer Disabled.
    edual8bit_baud = 1, // Dual 8-bit counters baud mode.
    edual8bit_pwm_h = 2, // Dual 8-bit counters PWM high mode.
    esingle16bit = 3, // Single 16-bit counter mode.
    esingle16bit_disable = 4, // Single 16-bit counter disable mode.
    edual8bit_word = 5, // Dual 8-bit counters word mode.
    edual8bit_pwm_l = 6, // Dual 8-bit counters PWM low mode.
    esingle16bit_in_capture = 7, // Single 16-bit input capture mode.
  };
  
  enum class eONETIM : uint32_t {
    enot_blocked = 0, // The timer enable event is generated as normal.
    eblocked = 1, // The timer enable event is blocked unless timer status flag is clear.
  };
  
  enum class ePININS : uint32_t {
    epinsel = 0, // Timer pin input and output are selected by PINSEL.
    epinselplus1 = 1, // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
  };
  
  enum class ePINPOL : uint32_t {
    eactive_high = 0, // Pin is active high
    eactive_low = 1, // Pin is active low
  };
  
  enum class ePINCFG : uint32_t {
    eoutdisable = 0, // Timer pin output disabled
    eopend_bidirouten = 1, // Timer pin open drain or bidirectional output enable
    ebidir_outdata = 2, // Timer pin bidirectional output data
    eoutput = 3, // Timer pin output
  };
  
  enum class eTRGSRC : uint32_t {
    eext_trig = 0, // External trigger selected
    einternal_trig = 1, // Internal trigger selected
  };
  
  enum class eTRGPOL : uint32_t {
    eactive_high = 0, // Trigger active high
    eactive_low = 1, // Trigger active low
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    /// read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    /// read-write - Timer Pin Input Select
    ePININS PININS : 1;
    /// read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    /// read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    /// read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    /// read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    /// read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    /// read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL[7] &Instance() { return *reinterpret_cast<volatile TIMCTL[7]*>(0x400AC41C); }
};

// Timer Configuration N Register
//
union TIMCFG[0] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[0] &Instance() { return *reinterpret_cast<volatile TIMCFG[0]*>(0x400AC480); }
};
// Timer Configuration N Register
//
union TIMCFG[1] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[1] &Instance() { return *reinterpret_cast<volatile TIMCFG[1]*>(0x400AC484); }
};
// Timer Configuration N Register
//
union TIMCFG[2] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[2] &Instance() { return *reinterpret_cast<volatile TIMCFG[2]*>(0x400AC488); }
};
// Timer Configuration N Register
//
union TIMCFG[3] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[3] &Instance() { return *reinterpret_cast<volatile TIMCFG[3]*>(0x400AC48C); }
};
// Timer Configuration N Register
//
union TIMCFG[4] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[4] &Instance() { return *reinterpret_cast<volatile TIMCFG[4]*>(0x400AC490); }
};
// Timer Configuration N Register
//
union TIMCFG[5] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[5] &Instance() { return *reinterpret_cast<volatile TIMCFG[5]*>(0x400AC494); }
};
// Timer Configuration N Register
//
union TIMCFG[6] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[6] &Instance() { return *reinterpret_cast<volatile TIMCFG[6]*>(0x400AC498); }
};
// Timer Configuration N Register
//
union TIMCFG[7] {
  
  enum class eTSTART : uint32_t {
    edisable = 0, // Start bit disabled
    eenable = 1, // Start bit enabled
  };
  
  enum class eTSTOP : uint32_t {
    estop_disable = 0, // Stop bit disabled
    eenable_tmrcmp = 1, // Stop bit is enabled on timer compare
    eenable_tmrdisable = 2, // Stop bit is enabled on timer disable
    eenable_tmr_cmp_dis = 3, // Stop bit is enabled on timer compare and timer disable
  };
  
  enum class eTIMENA : uint32_t {
    eenable = 0, // Timer always enabled
    etmr_nminus1_en = 1, // Timer enabled on Timer N-1 enable
    etmr_trighi_en = 2, // Timer enabled on Trigger high
    etmr_trig_pin_hi_en = 3, // Timer enabled on Trigger high and Pin high
    etmr_pinrise_en = 4, // Timer enabled on Pin rising edge
    etmr_pinrise_trighi_en = 5, // Timer enabled on Pin rising edge and Trigger high
    etmr_trigrise_en = 6, // Timer enabled on Trigger rising edge
    etmr_trigedge_en = 7, // Timer enabled on Trigger rising or falling edge
  };
  
  enum class eTIMDIS : uint32_t {
    enever = 0, // Timer never disabled
    etmr_nminus1 = 1, // Timer disabled on Timer N-1 disable
    etmr_cmp = 2, // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp_triglow = 3, // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    epin_edge = 4, // Timer disabled on Pin rising or falling edge
    epin_edge_trighi = 5, // Timer disabled on Pin rising or falling edge provided Trigger is high
    etrig_falledge = 6, // Timer disabled on Trigger falling edge
  };
  
  enum class eTIMRST : uint32_t {
    enever = 0, // Timer never reset
    etmr_out_hi = 1, // Timer reset on Timer Output high.
    epin_eq_tmr_out = 2, // Timer reset on Timer Pin equal to Timer Output
    etrig_eq_tmr_out = 3, // Timer reset on Timer Trigger equal to Timer Output
    epin_rise_edge = 4, // Timer reset on Timer Pin rising edge
    etrig_rise_edge = 6, // Timer reset on Trigger rising edge
    etrig_edge = 7, // Timer reset on Trigger rising or falling edge
  };
  
  enum class eTIMDEC : uint32_t {
    eflexio_clk_shiftclk_tmr_out = 0, // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1, // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    epin_edge_shiftclk_tmr_out = 2, // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    etrig_edge_shiftclk_trig_in = 3, // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    eflexio_clk_div16_shiftclk_tmr_out = 4, // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5, // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    epin_rise_shiftclk_pin_in = 6, // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    etrig_rise_shiftclk_trig_in = 7, // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
  };
  
  enum class eTIMOUT : uint32_t {
    eone = 0, // Timer output is logic one when enabled and is not affected by timer reset
    ezero = 1, // Timer output is logic zero when enabled and is not affected by timer reset
    eone_tmrreset = 2, // Timer output is logic one when enabled and on timer reset
    ezero_tmrreset = 3, // Timer output is logic zero when enabled and on timer reset
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    /// read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    /// read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG[7] &Instance() { return *reinterpret_cast<volatile TIMCFG[7]*>(0x400AC49C); }
};

// Timer Compare N Register
//
union TIMCMP[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[0] &Instance() { return *reinterpret_cast<volatile TIMCMP[0]*>(0x400AC500); }
};
// Timer Compare N Register
//
union TIMCMP[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[1] &Instance() { return *reinterpret_cast<volatile TIMCMP[1]*>(0x400AC504); }
};
// Timer Compare N Register
//
union TIMCMP[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[2] &Instance() { return *reinterpret_cast<volatile TIMCMP[2]*>(0x400AC508); }
};
// Timer Compare N Register
//
union TIMCMP[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[3] &Instance() { return *reinterpret_cast<volatile TIMCMP[3]*>(0x400AC50C); }
};
// Timer Compare N Register
//
union TIMCMP[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[4] &Instance() { return *reinterpret_cast<volatile TIMCMP[4]*>(0x400AC510); }
};
// Timer Compare N Register
//
union TIMCMP[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[5] &Instance() { return *reinterpret_cast<volatile TIMCMP[5]*>(0x400AC514); }
};
// Timer Compare N Register
//
union TIMCMP[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[6] &Instance() { return *reinterpret_cast<volatile TIMCMP[6]*>(0x400AC518); }
};
// Timer Compare N Register
//
union TIMCMP[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP[7] &Instance() { return *reinterpret_cast<volatile TIMCMP[7]*>(0x400AC51C); }
};

// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[0]*>(0x400AC680); }
};
// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[1]*>(0x400AC684); }
};
// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[2]*>(0x400AC688); }
};
// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[3]*>(0x400AC68C); }
};
// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[4]*>(0x400AC690); }
};
// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[5]*>(0x400AC694); }
};
// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[6]*>(0x400AC698); }
};
// Shifter Buffer N Nibble Byte Swapped Register
//
union SHIFTBUFNBS[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS[7]*>(0x400AC69C); }
};

// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[0]*>(0x400AC700); }
};
// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[1]*>(0x400AC704); }
};
// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[2]*>(0x400AC708); }
};
// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[3]*>(0x400AC70C); }
};
// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[4]*>(0x400AC710); }
};
// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[5]*>(0x400AC714); }
};
// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[6]*>(0x400AC718); }
};
// Shifter Buffer N Half Word Swapped Register
//
union SHIFTBUFHWS[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS[7]*>(0x400AC71C); }
};

// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[0]*>(0x400AC780); }
};
// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[1]*>(0x400AC784); }
};
// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[2]*>(0x400AC788); }
};
// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[3]*>(0x400AC78C); }
};
// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[4]*>(0x400AC790); }
};
// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[5]*>(0x400AC794); }
};
// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[6]*>(0x400AC798); }
};
// Shifter Buffer N Nibble Swapped Register
//
union SHIFTBUFNIS[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS[7]*>(0x400AC79C); }
};

// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[0]*>(0x400AC800); }
};
// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[1]*>(0x400AC804); }
};
// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[2]*>(0x400AC808); }
};
// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[3]*>(0x400AC80C); }
};
// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[4]*>(0x400AC810); }
};
// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[5]*>(0x400AC814); }
};
// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[6]*>(0x400AC818); }
};
// Shifter Buffer N Odd Even Swapped Register
//
union SHIFTBUFOES[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES[7]*>(0x400AC81C); }
};

// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[0] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[0] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[0]*>(0x400AC880); }
};
// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[1] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[1] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[1]*>(0x400AC884); }
};
// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[2] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[2] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[2]*>(0x400AC888); }
};
// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[3] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[3] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[3]*>(0x400AC88C); }
};
// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[4] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[4] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[4]*>(0x400AC890); }
};
// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[5] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[5] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[5]*>(0x400AC894); }
};
// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[6] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[6] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[6]*>(0x400AC898); }
};
// Shifter Buffer N Even Odd Swapped Register
//
union SHIFTBUFEOS[7] {
  
  // Bit field definition.
  struct {
    /// read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS[7] &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS[7]*>(0x400AC89C); }
};


} // namespace nFLEXIO1