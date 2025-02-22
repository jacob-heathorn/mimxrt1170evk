#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PDM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nPDM {


// PDM Control register 1
union CTRL_1 {
  
  // Error Interruption Enable
  enum class eERREN : uint32_t {
    // Error Interrupts disabled
    edisabled = 0,
    // Error Interrupts enabled
    eenabled = 1,
  };
  
  // DMA Interrupt Selection
  enum class eDISEL : uint32_t {
    // DMA and interrupt requests disabled
    eall_disabled = 0,
    // DMA requests enabled
    edmareq_enabled = 1,
    // Interrupt requests enabled
    eintreq_enabled = 2,
  };
  
  // Module Enable in Debug
  enum class eDBGE : uint32_t {
    // Disabled after completing the current frame
    edisabled = 0,
    // Enabled
    eenabled = 1,
  };
  
  // Software-reset bit
  enum class eSRES : uint32_t {
    // No action
    eno_action = 0,
    // Software reset
    esw_reset = 1,
  };
  
  // Debug Mode
  enum class eDBG : uint32_t {
    // Normal Mode
    enormal = 0,
    // Debug Mode
    edebug = 1,
  };
  
  // PDM Enable
  enum class ePDMIEN : uint32_t {
    // PDM stopped
    estopped = 0,
    // PDM operation started
    estarted = 1,
  };
  
  // Module Disable
  enum class eMDIS : uint32_t {
    // Normal Mode
    enormal = 0,
    // Disable/Low Leakage Mode
    elow_leakage = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Channel 0 Enable
    uint32_t CH0EN : 1;
    // read-write - Channel 1 Enable
    uint32_t CH1EN : 1;
    // read-write - Channel 2 Enable
    uint32_t CH2EN : 1;
    // read-write - Channel 3 Enable
    uint32_t CH3EN : 1;
    // read-write - Channel 4 Enable
    uint32_t CH4EN : 1;
    // read-write - Channel 5 Enable
    uint32_t CH5EN : 1;
    // read-write - Channel 6 Enable
    uint32_t CH6EN : 1;
    // read-write - Channel 7 Enable
    uint32_t CH7EN : 1;
    uint32_t _reserved_0 : 15;
    // read-write - Error Interruption Enable
    eERREN ERREN : 1;
    // read-write - DMA Interrupt Selection
    eDISEL DISEL : 2;
    // read-write - Module Enable in Debug
    eDBGE DBGE : 1;
    // read-write - Software-reset bit
    eSRES SRES : 1;
    // read-write - Debug Mode
    eDBG DBG : 1;
    // read-write - PDM Enable
    ePDMIEN PDMIEN : 1;
    // read-write - DOZE enable
    uint32_t DOZEN : 1;
    // read-write - Module Disable
    eMDIS MDIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_1 &Instance() { return *reinterpret_cast<volatile CTRL_1*>(0x40C20000); }
};

// PDM Control register 2
union CTRL_2 {
  
  // Quality Mode
  enum class eQSEL : uint32_t {
    // Medium quality mode
    emq_mode = 0,
    // High quality mode
    ehq_mode = 1,
    // Very low quality 2 mode
    evlq2_mode = 4,
    // Very low quality 1 mode
    evlq1_mode = 5,
    // Very low quality 0 mode
    evlq0_mode = 6,
    // Low quality mode
    elq_mode = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clock Divider
    uint32_t CLKDIV : 8;
    uint32_t _reserved_0 : 8;
    // read-write - CIC Decimation Rate
    uint32_t CICOSR : 4;
    uint32_t _reserved_1 : 5;
    // read-write - Quality Mode
    eQSEL QSEL : 3;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_2 &Instance() { return *reinterpret_cast<volatile CTRL_2*>(0x40C20004); }
};

// PDM Status register
union STAT {
  
  // Channel 0 Output Data Flag
  enum class eCH0F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Channel 1 Output Data Flag
  enum class eCH1F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Channel 2 Output Data Flag
  enum class eCH2F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Channel 3 Output Data Flag
  enum class eCH3F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Channel 4 Output Data Flag
  enum class eCH4F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Channel 5 Output Data Flag
  enum class eCH5F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Channel 6 Output Data Flag
  enum class eCH6F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Channel 7 Output Data Flag
  enum class eCH7F : uint32_t {
    // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_notreached = 0,
    // Channel's FIFO reached the number of elements configured in watermark bit-field
    ewm_reached = 1,
  };
  
  // Low Frequency Flag
  enum class eLOWFREQF : uint32_t {
    // CLKDIV value is OK
    eclkdiv_ok = 0,
    // CLKDIV value is too low
    eclkdiv_low = 1,
  };
  
  // Filter Data Ready
  enum class eFIR_RDY : uint32_t {
    // Filter data is not reliable
    enot_reliable = 0,
    // Filter data is reliable
    ereliable = 1,
  };
  
  // Busy Flag
  enum class eBSY_FIL : uint32_t {
    // PDM is stopped
    estopped = 0,
    // PDM is running
    erunning = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Channel 0 Output Data Flag
    eCH0F CH0F : 1;
    // read-write - Channel 1 Output Data Flag
    eCH1F CH1F : 1;
    // read-write - Channel 2 Output Data Flag
    eCH2F CH2F : 1;
    // read-write - Channel 3 Output Data Flag
    eCH3F CH3F : 1;
    // read-write - Channel 4 Output Data Flag
    eCH4F CH4F : 1;
    // read-write - Channel 5 Output Data Flag
    eCH5F CH5F : 1;
    // read-write - Channel 6 Output Data Flag
    eCH6F CH6F : 1;
    // read-write - Channel 7 Output Data Flag
    eCH7F CH7F : 1;
    uint32_t _reserved_0 : 21;
    // read-write - Low Frequency Flag
    eLOWFREQF LOWFREQF : 1;
    // read-only - Filter Data Ready
    eFIR_RDY FIR_RDY : 1;
    // read-only - Busy Flag
    eBSY_FIL BSY_FIL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT &Instance() { return *reinterpret_cast<volatile STAT*>(0x40C20008); }
};

// PDM FIFO Control register
union FIFO_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - FIFO Watermark Control
    uint32_t FIFOWMK : 3;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FIFO_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000007; }
  static inline volatile FIFO_CTRL &Instance() { return *reinterpret_cast<volatile FIFO_CTRL*>(0x40C20010); }
};

// PDM FIFO Status register
union FIFO_STAT {
  
  // FIFO Overflow Exception flag for Channel 0
  enum class eFIFOOVF0 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Overflow Exception flag for Channel 1
  enum class eFIFOOVF1 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Overflow Exception flag for Channel 2
  enum class eFIFOOVF2 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Overflow Exception flag for Channel 3
  enum class eFIFOOVF3 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Overflow Exception flag for Channel 4
  enum class eFIFOOVF4 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Overflow Exception flag for Channel 5
  enum class eFIFOOVF5 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Overflow Exception flag for Channel 6
  enum class eFIFOOVF6 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Overflow Exception flag for Channel 7
  enum class eFIFOOVF7 : uint32_t {
    // No exception by FIFO overflow
    eno_exception = 0,
    // Exception by FIFO overflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 0
  enum class eFIFOUND0 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 1
  enum class eFIFOUND1 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 2
  enum class eFIFOUND2 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 3
  enum class eFIFOUND3 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 4
  enum class eFIFOUND4 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 5
  enum class eFIFOUND5 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 6
  enum class eFIFOUND6 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // FIFO Underflow Exception flag for Channel 7
  enum class eFIFOUND7 : uint32_t {
    // No exception by FIFO Underflow
    eno_exception = 0,
    // Exception by FIFO underflow
    eexception = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - FIFO Overflow Exception flag for Channel 0
    eFIFOOVF0 FIFOOVF0 : 1;
    // read-write - FIFO Overflow Exception flag for Channel 1
    eFIFOOVF1 FIFOOVF1 : 1;
    // read-write - FIFO Overflow Exception flag for Channel 2
    eFIFOOVF2 FIFOOVF2 : 1;
    // read-write - FIFO Overflow Exception flag for Channel 3
    eFIFOOVF3 FIFOOVF3 : 1;
    // read-write - FIFO Overflow Exception flag for Channel 4
    eFIFOOVF4 FIFOOVF4 : 1;
    // read-write - FIFO Overflow Exception flag for Channel 5
    eFIFOOVF5 FIFOOVF5 : 1;
    // read-write - FIFO Overflow Exception flag for Channel 6
    eFIFOOVF6 FIFOOVF6 : 1;
    // read-write - FIFO Overflow Exception flag for Channel 7
    eFIFOOVF7 FIFOOVF7 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 0
    eFIFOUND0 FIFOUND0 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 1
    eFIFOUND1 FIFOUND1 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 2
    eFIFOUND2 FIFOUND2 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 3
    eFIFOUND3 FIFOUND3 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 4
    eFIFOUND4 FIFOUND4 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 5
    eFIFOUND5 FIFOUND5 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 6
    eFIFOUND6 FIFOUND6 : 1;
    // read-write - FIFO Underflow Exception flag for Channel 7
    eFIFOUND7 FIFOUND7 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FIFO_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FIFO_STAT &Instance() { return *reinterpret_cast<volatile FIFO_STAT*>(0x40C20014); }
};

// PDM Output Result Register
union DATACH[0] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[0] &Instance() { return *reinterpret_cast<volatile DATACH[0]*>(0x40C20024); }
};
// PDM Output Result Register
union DATACH[1] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[1] &Instance() { return *reinterpret_cast<volatile DATACH[1]*>(0x40C20028); }
};
// PDM Output Result Register
union DATACH[2] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[2] &Instance() { return *reinterpret_cast<volatile DATACH[2]*>(0x40C2002C); }
};
// PDM Output Result Register
union DATACH[3] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[3] &Instance() { return *reinterpret_cast<volatile DATACH[3]*>(0x40C20030); }
};
// PDM Output Result Register
union DATACH[4] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[4] &Instance() { return *reinterpret_cast<volatile DATACH[4]*>(0x40C20034); }
};
// PDM Output Result Register
union DATACH[5] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[5] &Instance() { return *reinterpret_cast<volatile DATACH[5]*>(0x40C20038); }
};
// PDM Output Result Register
union DATACH[6] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[6] &Instance() { return *reinterpret_cast<volatile DATACH[6]*>(0x40C2003C); }
};
// PDM Output Result Register
union DATACH[7] {
  
  // Bit field definition.
  struct {
    // read-only - Channel n Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[7] &Instance() { return *reinterpret_cast<volatile DATACH[7]*>(0x40C20040); }
};

// PDM DC Remover Control register
union DC_CTRL {
  
  // Channel 0 DC Remover Configuration
  enum class eDCCONFIG0 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Channel 1 DC Remover Configuration
  enum class eDCCONFIG1 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Channel 2 DC Remover Configuration
  enum class eDCCONFIG2 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Channel 3 DC Remover Configuration
  enum class eDCCONFIG3 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Channel 4 DC Remover Configuration
  enum class eDCCONFIG4 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Channel 5 DC Remover Configuration
  enum class eDCCONFIG5 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Channel 6 DC Remover Configuration
  enum class eDCCONFIG6 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Channel 7 DC Remover Configuration
  enum class eDCCONFIG7 : uint32_t {
    // DC Remover cut-off at 21Hz
    edc_rem_21Hz = 0,
    // DC Remover cut-off at 83Hz
    edc_rem_83Hz = 1,
    // DC Remover cut-off at 152Hz
    edc_rem_152Hz = 2,
    // DC Remover is bypassed
    edc_rem_bypass = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Channel 0 DC Remover Configuration
    eDCCONFIG0 DCCONFIG0 : 2;
    // read-write - Channel 1 DC Remover Configuration
    eDCCONFIG1 DCCONFIG1 : 2;
    // read-write - Channel 2 DC Remover Configuration
    eDCCONFIG2 DCCONFIG2 : 2;
    // read-write - Channel 3 DC Remover Configuration
    eDCCONFIG3 DCCONFIG3 : 2;
    // read-write - Channel 4 DC Remover Configuration
    eDCCONFIG4 DCCONFIG4 : 2;
    // read-write - Channel 5 DC Remover Configuration
    eDCCONFIG5 DCCONFIG5 : 2;
    // read-write - Channel 6 DC Remover Configuration
    eDCCONFIG6 DCCONFIG6 : 2;
    // read-write - Channel 7 DC Remover Configuration
    eDCCONFIG7 DCCONFIG7 : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DC_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DC_CTRL &Instance() { return *reinterpret_cast<volatile DC_CTRL*>(0x40C20064); }
};

// PDM Range Control register
union RANGE_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Channel 0 Range Adjustment
    uint32_t RANGEADJ0 : 4;
    // read-write - Channel 1 Range Adjustment
    uint32_t RANGEADJ1 : 4;
    // read-write - Channel 2 Range Adjustment
    uint32_t RANGEADJ2 : 4;
    // read-write - Channel 3 Range Adjustment
    uint32_t RANGEADJ3 : 4;
    // read-write - Channel 4 Range Adjustment
    uint32_t RANGEADJ4 : 4;
    // read-write - Channel 5 Range Adjustment
    uint32_t RANGEADJ5 : 4;
    // read-write - Channel 6 Range Adjustment
    uint32_t RANGEADJ6 : 4;
    // read-write - Channel 7 Range Adjustment
    uint32_t RANGEADJ7 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE_CTRL &Instance() { return *reinterpret_cast<volatile RANGE_CTRL*>(0x40C20074); }
};

// PDM Range Status register
union RANGE_STAT {
  
  // Channel 0 Range Overflow Error Flag
  enum class eRANGEOVF0 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 1 Range Overflow Error Flag
  enum class eRANGEOVF1 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 2 Range Overflow Error Flag
  enum class eRANGEOVF2 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 3 Range Overflow Error Flag
  enum class eRANGEOVF3 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 4 Range Overflow Error Flag
  enum class eRANGEOVF4 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 5 Range Overflow Error Flag
  enum class eRANGEOVF5 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 6 Range Overflow Error Flag
  enum class eRANGEOVF6 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 7 Range Overflow Error Flag
  enum class eRANGEOVF7 : uint32_t {
    // No exception by range overflow
    eno_exception = 0,
    // Exception by range overflow
    eexception = 1,
  };
  
  // Channel 0 Range Underflow Error Flag
  enum class eRANGEUNF0 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Channel 1 Range Underflow Error Flag
  enum class eRANGEUNF1 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Channel 2 Range Underflow Error Flag
  enum class eRANGEUNF2 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Channel 3 Range Underflow Error Flag
  enum class eRANGEUNF3 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Channel 4 Range Underflow Error Flag
  enum class eRANGEUNF4 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Channel 5 Range Underflow Error Flag
  enum class eRANGEUNF5 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Channel 6 Range Underflow Error Flag
  enum class eRANGEUNF6 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Channel 7 Range Underflow Error Flag
  enum class eRANGEUNF7 : uint32_t {
    // No exception by range underflow
    eno_exception = 0,
    // Exception by range underflow
    eexception = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Channel 0 Range Overflow Error Flag
    eRANGEOVF0 RANGEOVF0 : 1;
    // read-write - Channel 1 Range Overflow Error Flag
    eRANGEOVF1 RANGEOVF1 : 1;
    // read-write - Channel 2 Range Overflow Error Flag
    eRANGEOVF2 RANGEOVF2 : 1;
    // read-write - Channel 3 Range Overflow Error Flag
    eRANGEOVF3 RANGEOVF3 : 1;
    // read-write - Channel 4 Range Overflow Error Flag
    eRANGEOVF4 RANGEOVF4 : 1;
    // read-write - Channel 5 Range Overflow Error Flag
    eRANGEOVF5 RANGEOVF5 : 1;
    // read-write - Channel 6 Range Overflow Error Flag
    eRANGEOVF6 RANGEOVF6 : 1;
    // read-write - Channel 7 Range Overflow Error Flag
    eRANGEOVF7 RANGEOVF7 : 1;
    uint32_t _reserved_0 : 8;
    // read-write - Channel 0 Range Underflow Error Flag
    eRANGEUNF0 RANGEUNF0 : 1;
    // read-write - Channel 1 Range Underflow Error Flag
    eRANGEUNF1 RANGEUNF1 : 1;
    // read-write - Channel 2 Range Underflow Error Flag
    eRANGEUNF2 RANGEUNF2 : 1;
    // read-write - Channel 3 Range Underflow Error Flag
    eRANGEUNF3 RANGEUNF3 : 1;
    // read-write - Channel 4 Range Underflow Error Flag
    eRANGEUNF4 RANGEUNF4 : 1;
    // read-write - Channel 5 Range Underflow Error Flag
    eRANGEUNF5 RANGEUNF5 : 1;
    // read-write - Channel 6 Range Underflow Error Flag
    eRANGEUNF6 RANGEUNF6 : 1;
    // read-write - Channel 7 Range Underflow Error Flag
    eRANGEUNF7 RANGEUNF7 : 1;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE_STAT &Instance() { return *reinterpret_cast<volatile RANGE_STAT*>(0x40C2007C); }
};

// Voice Activity Detector 0 Control register
union VAD0_CTRL_1 {
  
  // Voice Activity Detector Enable
  enum class eVADEN : uint32_t {
    // The HWVAD is disabled
    edisabled = 0,
    // The HWVAD is enabled
    eenabled = 1,
  };
  
  // Voice Activity Detector Interruption Enable
  enum class eVADIE : uint32_t {
    // HWVAD Interrupts disabled
    edisabled = 0,
    // HWVAD Interrupts enabled
    eenabled = 1,
  };
  
  // Voice Activity Detector Error Interruption Enable
  enum class eVADERIE : uint32_t {
    // HWVAD Error Interrupts disabled
    edisabled = 0,
    // HWVAD Error Interrupts enabled
    eenabled = 1,
  };
  
  // Voice Activity Detector Internal Filters Initialization
  enum class eVADST10 : uint32_t {
    // Normal operation.
    enormal_op = 0,
    // Filters are initialized.
    efilt_init = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Voice Activity Detector Enable
    eVADEN VADEN : 1;
    // read-write - Voice Activity Detector Reset
    uint32_t VADRST : 1;
    // read-write - Voice Activity Detector Interruption Enable
    eVADIE VADIE : 1;
    // read-write - Voice Activity Detector Error Interruption Enable
    eVADERIE VADERIE : 1;
    // read-write - Voice Activity Detector Internal Filters Initialization
    eVADST10 VADST10 : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Voice Activity Detector Initialization Time
    uint32_t VADINITT : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Voice Activity Detector CIC Oversampling Rate
    uint32_t VADCICOSR : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Voice Activity Detector Channel Selector
    uint32_t VADCHSEL : 3;
    uint32_t _reserved_3 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_CTRL_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VAD0_CTRL_1 &Instance() { return *reinterpret_cast<volatile VAD0_CTRL_1*>(0x40C20090); }
};

// Voice Activity Detector 0 Control register
union VAD0_CTRL_2 {
  
  // Voice Activity Detector High-Pass Filter
  enum class eVADHPF : uint32_t {
    // Filter bypassed.
    efilt_bypass = 0,
    // Cut-off frequency at 1750Hz.
    ecutoff_1750Hz = 1,
    // Cut-off frequency at 215Hz.
    ecutoff_215Hz = 2,
    // Cut-off frequency at 102Hz.
    ecutoff_102Hz = 3,
  };
  
  // Voice Activity Detector Force Output Disable
  enum class eVADFOUTDIS : uint32_t {
    // Output is enabled.
    eout_enabled = 0,
    // Output is disabled.
    eout_disabled = 1,
  };
  
  // Voice Activity Detector Pre Filter Enable
  enum class eVADPREFEN : uint32_t {
    // Pre-filter is bypassed.
    ebypassed = 0,
    // Pre-filter is enabled.
    eenabled = 1,
  };
  
  // Voice Activity Detector Frame Energy Disable
  enum class eVADFRENDIS : uint32_t {
    // Frame energy calculus enabled.
    eenabled = 0,
    // Frame energy calculus disabled.
    edisabled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Voice Activity Detector High-Pass Filter
    eVADHPF VADHPF : 2;
    uint32_t _reserved_0 : 6;
    // read-write - Voice Activity Detector Input Gain
    uint32_t VADINPGAIN : 4;
    uint32_t _reserved_1 : 4;
    // read-write - Voice Activity Detector Frame Time
    uint32_t VADFRAMET : 6;
    uint32_t _reserved_2 : 6;
    // read-write - Voice Activity Detector Force Output Disable
    eVADFOUTDIS VADFOUTDIS : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Voice Activity Detector Pre Filter Enable
    eVADPREFEN VADPREFEN : 1;
    // read-write - Voice Activity Detector Frame Energy Disable
    eVADFRENDIS VADFRENDIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_CTRL_2() = delete;
  inline void Reset() volatile { this->value = 0x000A0000; }
  static inline volatile VAD0_CTRL_2 &Instance() { return *reinterpret_cast<volatile VAD0_CTRL_2*>(0x40C20094); }
};

// Voice Activity Detector 0 Status register
union VAD0_STAT {
  
  // Voice Activity Detector Interrupt Flag
  enum class eVADIF : uint32_t {
    // Voice activity not detected
    eno_detect = 0,
    // Voice activity detected
    edetect = 1,
  };
  
  // Voice Activity Detector Event Flag
  enum class eVADEF : uint32_t {
    // Voice activity not detected
    eno_detect = 0,
    // Voice activity detected
    edetect = 1,
  };
  
  // Voice Activity Detector Input Saturation Flag
  enum class eVADINSATF : uint32_t {
    // No exception
    eno_exception = 0,
    // Exception
    eexception = 1,
  };
  
  // Voice Activity Detector Initialization Flag
  enum class eVADINITF : uint32_t {
    // HWVAD is not being initialized.
    enot_init = 0,
    // HWVAD is being initialized.
    einit = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Voice Activity Detector Interrupt Flag
    eVADIF VADIF : 1;
    uint32_t _reserved_0 : 14;
    // read-only - Voice Activity Detector Event Flag
    eVADEF VADEF : 1;
    // read-write - Voice Activity Detector Input Saturation Flag
    eVADINSATF VADINSATF : 1;
    uint32_t _reserved_1 : 14;
    // read-only - Voice Activity Detector Initialization Flag
    eVADINITF VADINITF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_STAT() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile VAD0_STAT &Instance() { return *reinterpret_cast<volatile VAD0_STAT*>(0x40C20098); }
};

// Voice Activity Detector 0 Signal Configuration
union VAD0_SCONFIG {
  
  // Voice Activity Detector Signal Maximum Enable
  enum class eVADSMAXEN : uint32_t {
    // Maximum block is bypassed.
    ebypassed = 0,
    // Maximum block is enabled.
    eenabled = 1,
  };
  
  // Voice Activity Detector Signal Filter Enable
  enum class eVADSFILEN : uint32_t {
    // Signal filter is disabled.
    edisabled = 0,
    // Signal filter is enabled.
    eenabled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Voice Activity Detector Signal Gain
    uint32_t VADSGAIN : 4;
    uint32_t _reserved_0 : 26;
    // read-write - Voice Activity Detector Signal Maximum Enable
    eVADSMAXEN VADSMAXEN : 1;
    // read-write - Voice Activity Detector Signal Filter Enable
    eVADSFILEN VADSFILEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_SCONFIG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VAD0_SCONFIG &Instance() { return *reinterpret_cast<volatile VAD0_SCONFIG*>(0x40C2009C); }
};

// Voice Activity Detector 0 Noise Configuration
union VAD0_NCONFIG {
  
  // Voice Activity Detector Noise OR Enable
  enum class eVADNOREN : uint32_t {
    // Noise input is not decimated.
    enot_decimated = 0,
    // Noise input is decimated.
    edecimated = 1,
  };
  
  // Voice Activity Detector Noise Decimation Enable
  enum class eVADNDECEN : uint32_t {
    // Noise input is not decimated.
    enot_decimated = 0,
    // Noise input is decimated.
    edecimated = 1,
  };
  
  // Voice Activity Detector Noise Minimum Enable
  enum class eVADNMINEN : uint32_t {
    // Minimum block is bypassed.
    ebypassed = 0,
    // Minimum block is enabled.
    eenabled = 1,
  };
  
  // Voice Activity Detector Noise Filter Auto
  enum class eVADNFILAUTO : uint32_t {
    // Noise filter is always enabled.
    enf_always_en = 0,
    // Noise filter is enabled/disabled based on voice activity information.
    enf_cond_en = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Voice Activity Detector Noise Gain
    uint32_t VADNGAIN : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Voice Activity Detector Noise Filter Adjustment
    uint32_t VADNFILADJ : 5;
    uint32_t _reserved_1 : 15;
    // read-write - Voice Activity Detector Noise OR Enable
    eVADNOREN VADNOREN : 1;
    // read-write - Voice Activity Detector Noise Decimation Enable
    eVADNDECEN VADNDECEN : 1;
    // read-write - Voice Activity Detector Noise Minimum Enable
    eVADNMINEN VADNMINEN : 1;
    // read-write - Voice Activity Detector Noise Filter Auto
    eVADNFILAUTO VADNFILAUTO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_NCONFIG() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile VAD0_NCONFIG &Instance() { return *reinterpret_cast<volatile VAD0_NCONFIG*>(0x40C200A0); }
};

// Voice Activity Detector 0 Noise Data
union VAD0_NDATA {
  
  // Bit field definition.
  struct {
    // read-only - Voice Activity Detector Noise Data
    uint32_t VADNDATA : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_NDATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VAD0_NDATA &Instance() { return *reinterpret_cast<volatile VAD0_NDATA*>(0x40C200A4); }
};

// Voice Activity Detector 0 Zero-Crossing Detector
union VAD0_ZCD {
  
  // Zero-Crossing Detector Enable
  enum class eVADZCDEN : uint32_t {
    // The ZCD is disabled
    edisabled = 0,
    // The ZCD is enabled
    eenabled = 1,
  };
  
  // Zero-Crossing Detector Automatic Threshold
  enum class eVADZCDAUTO : uint32_t {
    // The ZCD threshold is not estimated automatically
    enot_estimated = 0,
    // The ZCD threshold is estimated automatically
    eestimated = 1,
  };
  
  // Zero-Crossing Detector AND Behavior
  enum class eVADZCDAND : uint32_t {
    // The ZCD result is OR'ed with the energy-based detection.
    eored = 0,
    // The ZCD result is AND'ed with the energy-based detection.
    eanded = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Zero-Crossing Detector Enable
    eVADZCDEN VADZCDEN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Zero-Crossing Detector Automatic Threshold
    eVADZCDAUTO VADZCDAUTO : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Zero-Crossing Detector AND Behavior
    eVADZCDAND VADZCDAND : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Zero-Crossing Detector Adjustment
    uint32_t VADZCDADJ : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Zero-Crossing Detector Threshold
    uint32_t VADZCDTH : 10;
    uint32_t _reserved_4 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_ZCD() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile VAD0_ZCD &Instance() { return *reinterpret_cast<volatile VAD0_ZCD*>(0x40C200A8); }
};


} // namespace nPDM