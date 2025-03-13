#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// FLEXIO
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nFLEXIO2 {


// Version ID Register
union VERID {
  
  // Feature Specification Number
  enum class eFEATURE : uint32_t {
    // Standard features implemented.
    estandard = 0,
    // Supports state, logic and parallel modes.
    estate_logic_parallel = 1,
    // Supports pin control registers.
    epinctrl = 2,
    // Supports state, logic and parallel modes; plus pin control registers.
    estate_logic_parallel_pinctrl = 3,
  };
  
  // Bit field definition.
  struct {
    // read-only - Feature Specification Number
    eFEATURE FEATURE : 16;
    // read-only - Minor Version Number
    uint32_t MINOR : 8;
    // read-only - Major Version Number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x02000001; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x400B0000); }
};

// Parameter Register
union PARAM {
  
  // Bit field definition.
  struct {
    // read-only - Shifter Number
    uint32_t SHIFTER : 8;
    // read-only - Timer Number
    uint32_t TIMER : 8;
    // read-only - Pin Number
    uint32_t PIN : 8;
    // read-only - Trigger Number
    uint32_t TRIGGER : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x02200808; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x400B0004); }
};

// FlexIO Control Register
union CTRL {
  
  // FlexIO Enable
  enum class eFLEXEN : uint32_t {
    // FlexIO module is disabled.
    edisable = 0,
    // FlexIO module is enabled.
    eenable = 1,
  };
  
  // Software Reset
  enum class eSWRST : uint32_t {
    // Software reset is disabled
    edisable = 0,
    // Software reset is enabled, all FlexIO registers except the Control Register are reset.
    eenable = 1,
  };
  
  // Fast Access
  enum class eFASTACC : uint32_t {
    // Configures for normal register accesses to FlexIO
    enormal = 0,
    // Configures for fast register accesses to FlexIO
    efast = 1,
  };
  
  // Debug Enable
  enum class eDBGE : uint32_t {
    // FlexIO is disabled in debug modes.
    edisable = 0,
    // FlexIO is enabled in debug modes
    eemable = 1,
  };
  
  // Doze Enable
  enum class eDOZEN : uint32_t {
    // FlexIO enabled in Doze modes.
    eenable = 0,
    // FlexIO disabled in Doze modes.
    edisable = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - FlexIO Enable
    eFLEXEN FLEXEN : 1;
    // read-write - Software Reset
    eSWRST SWRST : 1;
    // read-write - Fast Access
    eFASTACC FASTACC : 1;
    uint32_t _reserved_0 : 27;
    // read-write - Debug Enable
    eDBGE DBGE : 1;
    // read-write - Doze Enable
    eDOZEN DOZEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x400B0008); }
};

// Pin State Register
union PIN {
  
  // Bit field definition.
  struct {
    // read-only - Pin Data Input
    uint32_t PDI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIN &Instance() { return *reinterpret_cast<volatile PIN*>(0x400B000C); }
};

// Shifter Status Register
union SHIFTSTAT {
  
  // Bit field definition.
  struct {
    // read-write - Shifter Status Flag
    uint32_t SSF : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSTAT &Instance() { return *reinterpret_cast<volatile SHIFTSTAT*>(0x400B0010); }
};

// Shifter Error Register
union SHIFTERR {
  
  // Bit field definition.
  struct {
    // read-write - Shifter Error Flags
    uint32_t SEF : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTERR &Instance() { return *reinterpret_cast<volatile SHIFTERR*>(0x400B0014); }
};

// Timer Status Register
union TIMSTAT {
  
  // Bit field definition.
  struct {
    // read-write - Timer Status Flags
    uint32_t TSF : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMSTAT &Instance() { return *reinterpret_cast<volatile TIMSTAT*>(0x400B0018); }
};

// Shifter Status Interrupt Enable
union SHIFTSIEN {
  
  // Bit field definition.
  struct {
    // read-write - Shifter Status Interrupt Enable
    uint32_t SSIE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSIEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSIEN &Instance() { return *reinterpret_cast<volatile SHIFTSIEN*>(0x400B0020); }
};

// Shifter Error Interrupt Enable
union SHIFTEIEN {
  
  // Bit field definition.
  struct {
    // read-write - Shifter Error Interrupt Enable
    uint32_t SEIE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTEIEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTEIEN &Instance() { return *reinterpret_cast<volatile SHIFTEIEN*>(0x400B0024); }
};

// Timer Interrupt Enable Register
union TIMIEN {
  
  // Bit field definition.
  struct {
    // read-write - Timer Status Interrupt Enable
    uint32_t TEIE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMIEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMIEN &Instance() { return *reinterpret_cast<volatile TIMIEN*>(0x400B0028); }
};

// Shifter Status DMA Enable
union SHIFTSDEN {
  
  // Bit field definition.
  struct {
    // read-write - Shifter Status DMA Enable
    uint32_t SSDE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSDEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSDEN &Instance() { return *reinterpret_cast<volatile SHIFTSDEN*>(0x400B0030); }
};

// Timer Status DMA Enable
union TIMERSDEN {
  
  // Bit field definition.
  struct {
    // read-write - Timer Status DMA Enable
    uint32_t TSDE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMERSDEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMERSDEN &Instance() { return *reinterpret_cast<volatile TIMERSDEN*>(0x400B0038); }
};

// Shifter State Register
union SHIFTSTATE {
  
  // Bit field definition.
  struct {
    // read-write - Current State Pointer
    uint32_t STATE : 3;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTSTATE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTSTATE &Instance() { return *reinterpret_cast<volatile SHIFTSTATE*>(0x400B0040); }
};

// Shifter Control N Register
union SHIFTCTL_0 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_0 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_0*>(0x400B0080); }
};
// Shifter Control N Register
union SHIFTCTL_1 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_1 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_1*>(0x400B0084); }
};
// Shifter Control N Register
union SHIFTCTL_2 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_2 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_2*>(0x400B0088); }
};
// Shifter Control N Register
union SHIFTCTL_3 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_3 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_3*>(0x400B008C); }
};
// Shifter Control N Register
union SHIFTCTL_4 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_4 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_4*>(0x400B0090); }
};
// Shifter Control N Register
union SHIFTCTL_5 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_5 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_5*>(0x400B0094); }
};
// Shifter Control N Register
union SHIFTCTL_6 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_6 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_6*>(0x400B0098); }
};
// Shifter Control N Register
union SHIFTCTL_7 {
  
  // Shifter Mode
  enum class eSMOD : uint32_t {
    // Disabled.
    edisable = 0,
    // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
    ereceive = 1,
    // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
    etransmit = 2,
    // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
    ematchstore = 4,
    // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
    ematchcont = 5,
    // State mode. SHIFTBUF contents are used for storing programmable state attributes.
    estate = 6,
    // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
    elogic = 7,
  };
  
  // Shifter Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Shifter Pin Configuration
  enum class ePINCFG : uint32_t {
    // Shifter pin output disabled
    edisable = 0,
    // Shifter pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Shifter pin bidirectional output data
    ebidir_outdata = 2,
    // Shifter pin output
    eoutput = 3,
  };
  
  // Timer Polarity
  enum class eTIMPOL : uint32_t {
    // Shift on posedge of Shift clock
    eposedge = 0,
    // Shift on negedge of Shift clock
    enegedge = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Mode
    eSMOD SMOD : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Shifter Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Shifter Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Shifter Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 5;
    // read-write - Timer Polarity
    eTIMPOL TIMPOL : 1;
    // read-write - Timer Select
    uint32_t TIMSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCTL_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCTL_7 &Instance() { return *reinterpret_cast<volatile SHIFTCTL_7*>(0x400B009C); }
};

// Shifter Configuration N Register
union SHIFTCFG_0 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_0 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_0*>(0x400B0100); }
};
// Shifter Configuration N Register
union SHIFTCFG_1 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_1 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_1*>(0x400B0104); }
};
// Shifter Configuration N Register
union SHIFTCFG_2 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_2 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_2*>(0x400B0108); }
};
// Shifter Configuration N Register
union SHIFTCFG_3 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_3 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_3*>(0x400B010C); }
};
// Shifter Configuration N Register
union SHIFTCFG_4 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_4 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_4*>(0x400B0110); }
};
// Shifter Configuration N Register
union SHIFTCFG_5 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_5 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_5*>(0x400B0114); }
};
// Shifter Configuration N Register
union SHIFTCFG_6 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_6 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_6*>(0x400B0118); }
};
// Shifter Configuration N Register
union SHIFTCFG_7 {
  
  // Shifter Start bit
  enum class eSSTART : uint32_t {
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
    evalue00 = 0,
    // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
    evalue01 = 1,
    // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
    evalue10 = 2,
    // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
    evalue11 = 3,
  };
  
  // Shifter Stop bit
  enum class eSSTOP : uint32_t {
    // Stop bit disabled for transmitter/receiver/match store
    evalue00 = 0,
    // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
    evalue10 = 2,
    // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
    evalue11 = 3,
  };
  
  // Input Source
  enum class eINSRC : uint32_t {
    // Pin
    epin = 0,
    // Shifter N+1 Output
    eshifter_nplus1 = 1,
  };
  
  // Late Store
  enum class eLATST : uint32_t {
    // Shift register stores the pre-shift register state.
    epreshift = 0,
    // Shift register stores the post-shift register state.
    epostshift = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shifter Start bit
    eSSTART SSTART : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Shifter Stop bit
    eSSTOP SSTOP : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Input Source
    eINSRC INSRC : 1;
    // read-write - Late Store
    eLATST LATST : 1;
    uint32_t _reserved_2 : 6;
    // read-write - Parallel Width
    uint32_t PWIDTH : 5;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTCFG_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTCFG_7 &Instance() { return *reinterpret_cast<volatile SHIFTCFG_7*>(0x400B011C); }
};

// Shifter Buffer N Register
union SHIFTBUF_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_0*>(0x400B0200); }
};
// Shifter Buffer N Register
union SHIFTBUF_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_1*>(0x400B0204); }
};
// Shifter Buffer N Register
union SHIFTBUF_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_2*>(0x400B0208); }
};
// Shifter Buffer N Register
union SHIFTBUF_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_3*>(0x400B020C); }
};
// Shifter Buffer N Register
union SHIFTBUF_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_4*>(0x400B0210); }
};
// Shifter Buffer N Register
union SHIFTBUF_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_5*>(0x400B0214); }
};
// Shifter Buffer N Register
union SHIFTBUF_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_6*>(0x400B0218); }
};
// Shifter Buffer N Register
union SHIFTBUF_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUF_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUF_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUF_7*>(0x400B021C); }
};

// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_0*>(0x400B0280); }
};
// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_1*>(0x400B0284); }
};
// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_2*>(0x400B0288); }
};
// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_3*>(0x400B028C); }
};
// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_4*>(0x400B0290); }
};
// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_5*>(0x400B0294); }
};
// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_6*>(0x400B0298); }
};
// Shifter Buffer N Bit Swapped Register
union SHIFTBUFBIS_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBIS_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBIS_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBIS_7*>(0x400B029C); }
};

// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_0*>(0x400B0300); }
};
// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_1*>(0x400B0304); }
};
// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_2*>(0x400B0308); }
};
// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_3*>(0x400B030C); }
};
// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_4*>(0x400B0310); }
};
// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_5*>(0x400B0314); }
};
// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_6*>(0x400B0318); }
};
// Shifter Buffer N Byte Swapped Register
union SHIFTBUFBYS_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBYS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBYS_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBYS_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBYS_7*>(0x400B031C); }
};

// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_0*>(0x400B0380); }
};
// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_1*>(0x400B0384); }
};
// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_2*>(0x400B0388); }
};
// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_3*>(0x400B038C); }
};
// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_4*>(0x400B0390); }
};
// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_5*>(0x400B0394); }
};
// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_6*>(0x400B0398); }
};
// Shifter Buffer N Bit Byte Swapped Register
union SHIFTBUFBBS_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFBBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFBBS_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFBBS_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFBBS_7*>(0x400B039C); }
};

// Timer Control N Register
union TIMCTL_0 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_0 &Instance() { return *reinterpret_cast<volatile TIMCTL_0*>(0x400B0400); }
};
// Timer Control N Register
union TIMCTL_1 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_1 &Instance() { return *reinterpret_cast<volatile TIMCTL_1*>(0x400B0404); }
};
// Timer Control N Register
union TIMCTL_2 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_2 &Instance() { return *reinterpret_cast<volatile TIMCTL_2*>(0x400B0408); }
};
// Timer Control N Register
union TIMCTL_3 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_3 &Instance() { return *reinterpret_cast<volatile TIMCTL_3*>(0x400B040C); }
};
// Timer Control N Register
union TIMCTL_4 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_4 &Instance() { return *reinterpret_cast<volatile TIMCTL_4*>(0x400B0410); }
};
// Timer Control N Register
union TIMCTL_5 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_5 &Instance() { return *reinterpret_cast<volatile TIMCTL_5*>(0x400B0414); }
};
// Timer Control N Register
union TIMCTL_6 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_6 &Instance() { return *reinterpret_cast<volatile TIMCTL_6*>(0x400B0418); }
};
// Timer Control N Register
union TIMCTL_7 {
  
  // Timer Mode
  enum class eTIMOD : uint32_t {
    // Timer Disabled.
    edisable = 0,
    // Dual 8-bit counters baud mode.
    edual8bit_baud = 1,
    // Dual 8-bit counters PWM high mode.
    edual8bit_pwm_h = 2,
    // Single 16-bit counter mode.
    esingle16bit = 3,
    // Single 16-bit counter disable mode.
    esingle16bit_disable = 4,
    // Dual 8-bit counters word mode.
    edual8bit_word = 5,
    // Dual 8-bit counters PWM low mode.
    edual8bit_pwm_l = 6,
    // Single 16-bit input capture mode.
    esingle16bit_in_capture = 7,
  };
  
  // Timer One Time Operation
  enum class eONETIM : uint32_t {
    // The timer enable event is generated as normal.
    enot_blocked = 0,
    // The timer enable event is blocked unless timer status flag is clear.
    eblocked = 1,
  };
  
  // Timer Pin Input Select
  enum class ePININS : uint32_t {
    // Timer pin input and output are selected by PINSEL.
    epinsel = 0,
    // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
    epinselplus1 = 1,
  };
  
  // Timer Pin Polarity
  enum class ePINPOL : uint32_t {
    // Pin is active high
    eactive_high = 0,
    // Pin is active low
    eactive_low = 1,
  };
  
  // Timer Pin Configuration
  enum class ePINCFG : uint32_t {
    // Timer pin output disabled
    eoutdisable = 0,
    // Timer pin open drain or bidirectional output enable
    eopend_bidirouten = 1,
    // Timer pin bidirectional output data
    ebidir_outdata = 2,
    // Timer pin output
    eoutput = 3,
  };
  
  // Trigger Source
  enum class eTRGSRC : uint32_t {
    // External trigger selected
    eext_trig = 0,
    // Internal trigger selected
    einternal_trig = 1,
  };
  
  // Trigger Polarity
  enum class eTRGPOL : uint32_t {
    // Trigger active high
    eactive_high = 0,
    // Trigger active low
    eactive_low = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Mode
    eTIMOD TIMOD : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Timer One Time Operation
    eONETIM ONETIM : 1;
    // read-write - Timer Pin Input Select
    ePININS PININS : 1;
    // read-write - Timer Pin Polarity
    ePINPOL PINPOL : 1;
    // read-write - Timer Pin Select
    uint32_t PINSEL : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Timer Pin Configuration
    ePINCFG PINCFG : 2;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger Source
    eTRGSRC TRGSRC : 1;
    // read-write - Trigger Polarity
    eTRGPOL TRGPOL : 1;
    // read-write - Trigger Select
    uint32_t TRGSEL : 6;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCTL_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCTL_7 &Instance() { return *reinterpret_cast<volatile TIMCTL_7*>(0x400B041C); }
};

// Timer Configuration N Register
union TIMCFG_0 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_0 &Instance() { return *reinterpret_cast<volatile TIMCFG_0*>(0x400B0480); }
};
// Timer Configuration N Register
union TIMCFG_1 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_1 &Instance() { return *reinterpret_cast<volatile TIMCFG_1*>(0x400B0484); }
};
// Timer Configuration N Register
union TIMCFG_2 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_2 &Instance() { return *reinterpret_cast<volatile TIMCFG_2*>(0x400B0488); }
};
// Timer Configuration N Register
union TIMCFG_3 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_3 &Instance() { return *reinterpret_cast<volatile TIMCFG_3*>(0x400B048C); }
};
// Timer Configuration N Register
union TIMCFG_4 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_4 &Instance() { return *reinterpret_cast<volatile TIMCFG_4*>(0x400B0490); }
};
// Timer Configuration N Register
union TIMCFG_5 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_5 &Instance() { return *reinterpret_cast<volatile TIMCFG_5*>(0x400B0494); }
};
// Timer Configuration N Register
union TIMCFG_6 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_6 &Instance() { return *reinterpret_cast<volatile TIMCFG_6*>(0x400B0498); }
};
// Timer Configuration N Register
union TIMCFG_7 {
  
  // Timer Start Bit
  enum class eTSTART : uint32_t {
    // Start bit disabled
    edisable = 0,
    // Start bit enabled
    eenable = 1,
  };
  
  // Timer Stop Bit
  enum class eTSTOP : uint32_t {
    // Stop bit disabled
    estop_disable = 0,
    // Stop bit is enabled on timer compare
    eenable_tmrcmp = 1,
    // Stop bit is enabled on timer disable
    eenable_tmrdisable = 2,
    // Stop bit is enabled on timer compare and timer disable
    eenable_tmr_cmp_dis = 3,
  };
  
  // Timer Enable
  enum class eTIMENA : uint32_t {
    // Timer always enabled
    eenable = 0,
    // Timer enabled on Timer N-1 enable
    etmr_nminus1_en = 1,
    // Timer enabled on Trigger high
    etmr_trighi_en = 2,
    // Timer enabled on Trigger high and Pin high
    etmr_trig_pin_hi_en = 3,
    // Timer enabled on Pin rising edge
    etmr_pinrise_en = 4,
    // Timer enabled on Pin rising edge and Trigger high
    etmr_pinrise_trighi_en = 5,
    // Timer enabled on Trigger rising edge
    etmr_trigrise_en = 6,
    // Timer enabled on Trigger rising or falling edge
    etmr_trigedge_en = 7,
  };
  
  // Timer Disable
  enum class eTIMDIS : uint32_t {
    // Timer never disabled
    enever = 0,
    // Timer disabled on Timer N-1 disable
    etmr_nminus1 = 1,
    // Timer disabled on Timer compare (upper 8-bits match and decrement)
    etmr_cmp = 2,
    // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
    etmr_cmp_triglow = 3,
    // Timer disabled on Pin rising or falling edge
    epin_edge = 4,
    // Timer disabled on Pin rising or falling edge provided Trigger is high
    epin_edge_trighi = 5,
    // Timer disabled on Trigger falling edge
    etrig_falledge = 6,
  };
  
  // Timer Reset
  enum class eTIMRST : uint32_t {
    // Timer never reset
    enever = 0,
    // Timer reset on Timer Output high.
    etmr_out_hi = 1,
    // Timer reset on Timer Pin equal to Timer Output
    epin_eq_tmr_out = 2,
    // Timer reset on Timer Trigger equal to Timer Output
    etrig_eq_tmr_out = 3,
    // Timer reset on Timer Pin rising edge
    epin_rise_edge = 4,
    // Timer reset on Trigger rising edge
    etrig_rise_edge = 6,
    // Timer reset on Trigger rising or falling edge
    etrig_edge = 7,
  };
  
  // Timer Decrement
  enum class eTIMDEC : uint32_t {
    // Decrement counter on FlexIO clock, Shift clock equals Timer output.
    eflexio_clk_shiftclk_tmr_out = 0,
    // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
    etrig_edge_shiftclk_tmr_out = 1,
    // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
    epin_edge_shiftclk_tmr_out = 2,
    // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
    etrig_edge_shiftclk_trig_in = 3,
    // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
    eflexio_clk_div16_shiftclk_tmr_out = 4,
    // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
    eflexio_clk_div256_shiftclk_tmr_out = 5,
    // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
    epin_rise_shiftclk_pin_in = 6,
    // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
    etrig_rise_shiftclk_trig_in = 7,
  };
  
  // Timer Output
  enum class eTIMOUT : uint32_t {
    // Timer output is logic one when enabled and is not affected by timer reset
    eone = 0,
    // Timer output is logic zero when enabled and is not affected by timer reset
    ezero = 1,
    // Timer output is logic one when enabled and on timer reset
    eone_tmrreset = 2,
    // Timer output is logic zero when enabled and on timer reset
    ezero_tmrreset = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Timer Start Bit
    eTSTART TSTART : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Timer Stop Bit
    eTSTOP TSTOP : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Timer Enable
    eTIMENA TIMENA : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Timer Disable
    eTIMDIS TIMDIS : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Timer Reset
    eTIMRST TIMRST : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Timer Decrement
    eTIMDEC TIMDEC : 3;
    uint32_t _reserved_6 : 1;
    // read-write - Timer Output
    eTIMOUT TIMOUT : 2;
    uint32_t _reserved_7 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCFG_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCFG_7 &Instance() { return *reinterpret_cast<volatile TIMCFG_7*>(0x400B049C); }
};

// Timer Compare N Register
union TIMCMP_0 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_0 &Instance() { return *reinterpret_cast<volatile TIMCMP_0*>(0x400B0500); }
};
// Timer Compare N Register
union TIMCMP_1 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_1 &Instance() { return *reinterpret_cast<volatile TIMCMP_1*>(0x400B0504); }
};
// Timer Compare N Register
union TIMCMP_2 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_2 &Instance() { return *reinterpret_cast<volatile TIMCMP_2*>(0x400B0508); }
};
// Timer Compare N Register
union TIMCMP_3 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_3 &Instance() { return *reinterpret_cast<volatile TIMCMP_3*>(0x400B050C); }
};
// Timer Compare N Register
union TIMCMP_4 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_4 &Instance() { return *reinterpret_cast<volatile TIMCMP_4*>(0x400B0510); }
};
// Timer Compare N Register
union TIMCMP_5 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_5 &Instance() { return *reinterpret_cast<volatile TIMCMP_5*>(0x400B0514); }
};
// Timer Compare N Register
union TIMCMP_6 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_6 &Instance() { return *reinterpret_cast<volatile TIMCMP_6*>(0x400B0518); }
};
// Timer Compare N Register
union TIMCMP_7 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Compare Value
    uint32_t CMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMCMP_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMCMP_7 &Instance() { return *reinterpret_cast<volatile TIMCMP_7*>(0x400B051C); }
};

// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_0*>(0x400B0680); }
};
// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_1*>(0x400B0684); }
};
// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_2*>(0x400B0688); }
};
// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_3*>(0x400B068C); }
};
// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_4*>(0x400B0690); }
};
// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_5*>(0x400B0694); }
};
// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_6*>(0x400B0698); }
};
// Shifter Buffer N Nibble Byte Swapped Register
union SHIFTBUFNBS_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNBS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNBS_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNBS_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNBS_7*>(0x400B069C); }
};

// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_0*>(0x400B0700); }
};
// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_1*>(0x400B0704); }
};
// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_2*>(0x400B0708); }
};
// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_3*>(0x400B070C); }
};
// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_4*>(0x400B0710); }
};
// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_5*>(0x400B0714); }
};
// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_6*>(0x400B0718); }
};
// Shifter Buffer N Half Word Swapped Register
union SHIFTBUFHWS_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFHWS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFHWS_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFHWS_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFHWS_7*>(0x400B071C); }
};

// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_0*>(0x400B0780); }
};
// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_1*>(0x400B0784); }
};
// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_2*>(0x400B0788); }
};
// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_3*>(0x400B078C); }
};
// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_4*>(0x400B0790); }
};
// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_5*>(0x400B0794); }
};
// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_6*>(0x400B0798); }
};
// Shifter Buffer N Nibble Swapped Register
union SHIFTBUFNIS_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFNIS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFNIS_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFNIS_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFNIS_7*>(0x400B079C); }
};

// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_0*>(0x400B0800); }
};
// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_1*>(0x400B0804); }
};
// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_2*>(0x400B0808); }
};
// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_3*>(0x400B080C); }
};
// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_4*>(0x400B0810); }
};
// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_5*>(0x400B0814); }
};
// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_6*>(0x400B0818); }
};
// Shifter Buffer N Odd Even Swapped Register
union SHIFTBUFOES_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFOES : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFOES_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFOES_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFOES_7*>(0x400B081C); }
};

// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_0 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_0 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_0*>(0x400B0880); }
};
// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_1 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_1 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_1*>(0x400B0884); }
};
// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_2 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_2 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_2*>(0x400B0888); }
};
// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_3 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_3 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_3*>(0x400B088C); }
};
// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_4 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_4 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_4*>(0x400B0890); }
};
// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_5 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_5 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_5*>(0x400B0894); }
};
// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_6 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_6 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_6*>(0x400B0898); }
};
// Shifter Buffer N Even Odd Swapped Register
union SHIFTBUFEOS_7 {
  
  // Bit field definition.
  struct {
    // read-write - Shift Buffer
    uint32_t SHIFTBUFEOS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SHIFTBUFEOS_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SHIFTBUFEOS_7 &Instance() { return *reinterpret_cast<volatile SHIFTBUFEOS_7*>(0x400B089C); }
};


} // namespace nFLEXIO2