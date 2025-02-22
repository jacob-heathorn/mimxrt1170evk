#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // PDM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nPDM {


// PDM Control register 1
//
union CTRL_1 {
  
  enum class eERREN : uint32_t {
    edisabled = 0, // Error Interrupts disabled
    eenabled = 1, // Error Interrupts enabled
  };
  
  enum class eDISEL : uint32_t {
    eall_disabled = 0, // DMA and interrupt requests disabled
    edmareq_enabled = 1, // DMA requests enabled
    eintreq_enabled = 2, // Interrupt requests enabled
  };
  
  enum class eDBGE : uint32_t {
    edisabled = 0, // Disabled after completing the current frame
    eenabled = 1, // Enabled
  };
  
  enum class eSRES : uint32_t {
    eno_action = 0, // No action
    esw_reset = 1, // Software reset
  };
  
  enum class eDBG : uint32_t {
    enormal = 0, // Normal Mode
    edebug = 1, // Debug Mode
  };
  
  enum class ePDMIEN : uint32_t {
    estopped = 0, // PDM stopped
    estarted = 1, // PDM operation started
  };
  
  enum class eMDIS : uint32_t {
    enormal = 0, // Normal Mode
    elow_leakage = 1, // Disable/Low Leakage Mode
  };
  
  // Bit field definition.
  struct {
    uint32_t CH0EN : 1;
    uint32_t CH1EN : 1;
    uint32_t CH2EN : 1;
    uint32_t CH3EN : 1;
    uint32_t CH4EN : 1;
    uint32_t CH5EN : 1;
    uint32_t CH6EN : 1;
    uint32_t CH7EN : 1;
    uint32_t _reserved_8 : 15;
    eERREN ERREN : 1;
    eDISEL DISEL : 2;
    eDBGE DBGE : 1;
    eSRES SRES : 1;
    eDBG DBG : 1;
    ePDMIEN PDMIEN : 1;
    uint32_t DOZEN : 1;
    eMDIS MDIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_1 &Instance() { return *reinterpret_cast<volatile CTRL_1*>(0x40C20000); }
};

// PDM Control register 2
//
union CTRL_2 {
  
  enum class eQSEL : uint32_t {
    emq_mode = 0, // Medium quality mode
    ehq_mode = 1, // High quality mode
    evlq2_mode = 4, // Very low quality 2 mode
    evlq1_mode = 5, // Very low quality 1 mode
    evlq0_mode = 6, // Very low quality 0 mode
    elq_mode = 7, // Low quality mode
  };
  
  // Bit field definition.
  struct {
    uint32_t CLKDIV : 8;
    uint32_t _reserved_1 : 8;
    uint32_t CICOSR : 4;
    uint32_t _reserved_2 : 5;
    eQSEL QSEL : 3;
    uint32_t _reserved_end : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_2 &Instance() { return *reinterpret_cast<volatile CTRL_2*>(0x40C20004); }
};

// PDM Status register
//
union STAT {
  
  enum class eCH0F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eCH1F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eCH2F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eCH3F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eCH4F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eCH5F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eCH6F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eCH7F : uint32_t {
    ewm_notreached = 0, // Channel's FIFO did not reach the number of elements configured in watermark bit-field
    ewm_reached = 1, // Channel's FIFO reached the number of elements configured in watermark bit-field
  };
  
  enum class eLOWFREQF : uint32_t {
    eclkdiv_ok = 0, // CLKDIV value is OK
    eclkdiv_low = 1, // CLKDIV value is too low
  };
  
  enum class eFIR_RDY : uint32_t {
    enot_reliable = 0, // Filter data is not reliable
    ereliable = 1, // Filter data is reliable
  };
  
  enum class eBSY_FIL : uint32_t {
    estopped = 0, // PDM is stopped
    erunning = 1, // PDM is running
  };
  
  // Bit field definition.
  struct {
    eCH0F CH0F : 1;
    eCH1F CH1F : 1;
    eCH2F CH2F : 1;
    eCH3F CH3F : 1;
    eCH4F CH4F : 1;
    eCH5F CH5F : 1;
    eCH6F CH6F : 1;
    eCH7F CH7F : 1;
    uint32_t _reserved_8 : 21;
    eLOWFREQF LOWFREQF : 1;
    eFIR_RDY FIR_RDY : 1;
    eBSY_FIL BSY_FIL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT &Instance() { return *reinterpret_cast<volatile STAT*>(0x40C20008); }
};

// PDM FIFO Control register
//
union FIFO_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t FIFOWMK : 3;
    uint32_t _reserved_end : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FIFO_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000007; }
  static inline volatile FIFO_CTRL &Instance() { return *reinterpret_cast<volatile FIFO_CTRL*>(0x40C20010); }
};

// PDM FIFO Status register
//
union FIFO_STAT {
  
  enum class eFIFOOVF0 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOOVF1 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOOVF2 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOOVF3 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOOVF4 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOOVF5 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOOVF6 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOOVF7 : uint32_t {
    eno_exception = 0, // No exception by FIFO overflow
    eexception = 1, // Exception by FIFO overflow
  };
  
  enum class eFIFOUND0 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  enum class eFIFOUND1 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  enum class eFIFOUND2 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  enum class eFIFOUND3 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  enum class eFIFOUND4 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  enum class eFIFOUND5 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  enum class eFIFOUND6 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  enum class eFIFOUND7 : uint32_t {
    eno_exception = 0, // No exception by FIFO Underflow
    eexception = 1, // Exception by FIFO underflow
  };
  
  // Bit field definition.
  struct {
    eFIFOOVF0 FIFOOVF0 : 1;
    eFIFOOVF1 FIFOOVF1 : 1;
    eFIFOOVF2 FIFOOVF2 : 1;
    eFIFOOVF3 FIFOOVF3 : 1;
    eFIFOOVF4 FIFOOVF4 : 1;
    eFIFOOVF5 FIFOOVF5 : 1;
    eFIFOOVF6 FIFOOVF6 : 1;
    eFIFOOVF7 FIFOOVF7 : 1;
    eFIFOUND0 FIFOUND0 : 1;
    eFIFOUND1 FIFOUND1 : 1;
    eFIFOUND2 FIFOUND2 : 1;
    eFIFOUND3 FIFOUND3 : 1;
    eFIFOUND4 FIFOUND4 : 1;
    eFIFOUND5 FIFOUND5 : 1;
    eFIFOUND6 FIFOUND6 : 1;
    eFIFOUND7 FIFOUND7 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FIFO_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FIFO_STAT &Instance() { return *reinterpret_cast<volatile FIFO_STAT*>(0x40C20014); }
};

// PDM Output Result Register
//
union DATACH[0] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[0] &Instance() { return *reinterpret_cast<volatile DATACH[0]*>(0x40C20024); }
};
// PDM Output Result Register
//
union DATACH[1] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[1] &Instance() { return *reinterpret_cast<volatile DATACH[1]*>(0x40C20028); }
};
// PDM Output Result Register
//
union DATACH[2] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[2] &Instance() { return *reinterpret_cast<volatile DATACH[2]*>(0x40C2002C); }
};
// PDM Output Result Register
//
union DATACH[3] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[3] &Instance() { return *reinterpret_cast<volatile DATACH[3]*>(0x40C20030); }
};
// PDM Output Result Register
//
union DATACH[4] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[4] &Instance() { return *reinterpret_cast<volatile DATACH[4]*>(0x40C20034); }
};
// PDM Output Result Register
//
union DATACH[5] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[5] &Instance() { return *reinterpret_cast<volatile DATACH[5]*>(0x40C20038); }
};
// PDM Output Result Register
//
union DATACH[6] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[6] &Instance() { return *reinterpret_cast<volatile DATACH[6]*>(0x40C2003C); }
};
// PDM Output Result Register
//
union DATACH[7] {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATACH[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATACH[7] &Instance() { return *reinterpret_cast<volatile DATACH[7]*>(0x40C20040); }
};

// PDM DC Remover Control register
//
union DC_CTRL {
  
  enum class eDCCONFIG0 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  enum class eDCCONFIG1 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  enum class eDCCONFIG2 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  enum class eDCCONFIG3 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  enum class eDCCONFIG4 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  enum class eDCCONFIG5 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  enum class eDCCONFIG6 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  enum class eDCCONFIG7 : uint32_t {
    edc_rem_21Hz = 0, // DC Remover cut-off at 21Hz
    edc_rem_83Hz = 1, // DC Remover cut-off at 83Hz
    edc_rem_152Hz = 2, // DC Remover cut-off at 152Hz
    edc_rem_bypass = 3, // DC Remover is bypassed
  };
  
  // Bit field definition.
  struct {
    eDCCONFIG0 DCCONFIG0 : 2;
    eDCCONFIG1 DCCONFIG1 : 2;
    eDCCONFIG2 DCCONFIG2 : 2;
    eDCCONFIG3 DCCONFIG3 : 2;
    eDCCONFIG4 DCCONFIG4 : 2;
    eDCCONFIG5 DCCONFIG5 : 2;
    eDCCONFIG6 DCCONFIG6 : 2;
    eDCCONFIG7 DCCONFIG7 : 2;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DC_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DC_CTRL &Instance() { return *reinterpret_cast<volatile DC_CTRL*>(0x40C20064); }
};

// PDM Range Control register
//
union RANGE_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t RANGEADJ0 : 4;
    uint32_t RANGEADJ1 : 4;
    uint32_t RANGEADJ2 : 4;
    uint32_t RANGEADJ3 : 4;
    uint32_t RANGEADJ4 : 4;
    uint32_t RANGEADJ5 : 4;
    uint32_t RANGEADJ6 : 4;
    uint32_t RANGEADJ7 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE_CTRL &Instance() { return *reinterpret_cast<volatile RANGE_CTRL*>(0x40C20074); }
};

// PDM Range Status register
//
union RANGE_STAT {
  
  enum class eRANGEOVF0 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEOVF1 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEOVF2 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEOVF3 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEOVF4 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEOVF5 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEOVF6 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEOVF7 : uint32_t {
    eno_exception = 0, // No exception by range overflow
    eexception = 1, // Exception by range overflow
  };
  
  enum class eRANGEUNF0 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  enum class eRANGEUNF1 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  enum class eRANGEUNF2 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  enum class eRANGEUNF3 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  enum class eRANGEUNF4 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  enum class eRANGEUNF5 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  enum class eRANGEUNF6 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  enum class eRANGEUNF7 : uint32_t {
    eno_exception = 0, // No exception by range underflow
    eexception = 1, // Exception by range underflow
  };
  
  // Bit field definition.
  struct {
    eRANGEOVF0 RANGEOVF0 : 1;
    eRANGEOVF1 RANGEOVF1 : 1;
    eRANGEOVF2 RANGEOVF2 : 1;
    eRANGEOVF3 RANGEOVF3 : 1;
    eRANGEOVF4 RANGEOVF4 : 1;
    eRANGEOVF5 RANGEOVF5 : 1;
    eRANGEOVF6 RANGEOVF6 : 1;
    eRANGEOVF7 RANGEOVF7 : 1;
    uint32_t _reserved_8 : 8;
    eRANGEUNF0 RANGEUNF0 : 1;
    eRANGEUNF1 RANGEUNF1 : 1;
    eRANGEUNF2 RANGEUNF2 : 1;
    eRANGEUNF3 RANGEUNF3 : 1;
    eRANGEUNF4 RANGEUNF4 : 1;
    eRANGEUNF5 RANGEUNF5 : 1;
    eRANGEUNF6 RANGEUNF6 : 1;
    eRANGEUNF7 RANGEUNF7 : 1;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE_STAT &Instance() { return *reinterpret_cast<volatile RANGE_STAT*>(0x40C2007C); }
};

// Voice Activity Detector 0 Control register
//
union VAD0_CTRL_1 {
  
  enum class eVADEN : uint32_t {
    edisabled = 0, // The HWVAD is disabled
    eenabled = 1, // The HWVAD is enabled
  };
  
  enum class eVADIE : uint32_t {
    edisabled = 0, // HWVAD Interrupts disabled
    eenabled = 1, // HWVAD Interrupts enabled
  };
  
  enum class eVADERIE : uint32_t {
    edisabled = 0, // HWVAD Error Interrupts disabled
    eenabled = 1, // HWVAD Error Interrupts enabled
  };
  
  enum class eVADST10 : uint32_t {
    enormal_op = 0, // Normal operation.
    efilt_init = 1, // Filters are initialized.
  };
  
  // Bit field definition.
  struct {
    eVADEN VADEN : 1;
    uint32_t VADRST : 1;
    eVADIE VADIE : 1;
    eVADERIE VADERIE : 1;
    eVADST10 VADST10 : 1;
    uint32_t _reserved_5 : 3;
    uint32_t VADINITT : 5;
    uint32_t _reserved_6 : 3;
    uint32_t VADCICOSR : 4;
    uint32_t _reserved_7 : 4;
    uint32_t VADCHSEL : 3;
    uint32_t _reserved_end : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_CTRL_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VAD0_CTRL_1 &Instance() { return *reinterpret_cast<volatile VAD0_CTRL_1*>(0x40C20090); }
};

// Voice Activity Detector 0 Control register
//
union VAD0_CTRL_2 {
  
  enum class eVADHPF : uint32_t {
    efilt_bypass = 0, // Filter bypassed.
    ecutoff_1750Hz = 1, // Cut-off frequency at 1750Hz.
    ecutoff_215Hz = 2, // Cut-off frequency at 215Hz.
    ecutoff_102Hz = 3, // Cut-off frequency at 102Hz.
  };
  
  enum class eVADFOUTDIS : uint32_t {
    eout_enabled = 0, // Output is enabled.
    eout_disabled = 1, // Output is disabled.
  };
  
  enum class eVADPREFEN : uint32_t {
    ebypassed = 0, // Pre-filter is bypassed.
    eenabled = 1, // Pre-filter is enabled.
  };
  
  enum class eVADFRENDIS : uint32_t {
    eenabled = 0, // Frame energy calculus enabled.
    edisabled = 1, // Frame energy calculus disabled.
  };
  
  // Bit field definition.
  struct {
    eVADHPF VADHPF : 2;
    uint32_t _reserved_1 : 6;
    uint32_t VADINPGAIN : 4;
    uint32_t _reserved_2 : 4;
    uint32_t VADFRAMET : 6;
    uint32_t _reserved_3 : 6;
    eVADFOUTDIS VADFOUTDIS : 1;
    uint32_t _reserved_4 : 1;
    eVADPREFEN VADPREFEN : 1;
    eVADFRENDIS VADFRENDIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_CTRL_2() = delete;
  inline void Reset() volatile { this->value = 0x000A0000; }
  static inline volatile VAD0_CTRL_2 &Instance() { return *reinterpret_cast<volatile VAD0_CTRL_2*>(0x40C20094); }
};

// Voice Activity Detector 0 Status register
//
union VAD0_STAT {
  
  enum class eVADIF : uint32_t {
    eno_detect = 0, // Voice activity not detected
    edetect = 1, // Voice activity detected
  };
  
  enum class eVADEF : uint32_t {
    eno_detect = 0, // Voice activity not detected
    edetect = 1, // Voice activity detected
  };
  
  enum class eVADINSATF : uint32_t {
    eno_exception = 0, // No exception
    eexception = 1, // Exception
  };
  
  enum class eVADINITF : uint32_t {
    enot_init = 0, // HWVAD is not being initialized.
    einit = 1, // HWVAD is being initialized.
  };
  
  // Bit field definition.
  struct {
    eVADIF VADIF : 1;
    uint32_t _reserved_1 : 14;
    eVADEF VADEF : 1;
    eVADINSATF VADINSATF : 1;
    uint32_t _reserved_3 : 14;
    eVADINITF VADINITF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_STAT() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile VAD0_STAT &Instance() { return *reinterpret_cast<volatile VAD0_STAT*>(0x40C20098); }
};

// Voice Activity Detector 0 Signal Configuration
//
union VAD0_SCONFIG {
  
  enum class eVADSMAXEN : uint32_t {
    ebypassed = 0, // Maximum block is bypassed.
    eenabled = 1, // Maximum block is enabled.
  };
  
  enum class eVADSFILEN : uint32_t {
    edisabled = 0, // Signal filter is disabled.
    eenabled = 1, // Signal filter is enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t VADSGAIN : 4;
    uint32_t _reserved_1 : 26;
    eVADSMAXEN VADSMAXEN : 1;
    eVADSFILEN VADSFILEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_SCONFIG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VAD0_SCONFIG &Instance() { return *reinterpret_cast<volatile VAD0_SCONFIG*>(0x40C2009C); }
};

// Voice Activity Detector 0 Noise Configuration
//
union VAD0_NCONFIG {
  
  enum class eVADNOREN : uint32_t {
    enot_decimated = 0, // Noise input is not decimated.
    edecimated = 1, // Noise input is decimated.
  };
  
  enum class eVADNDECEN : uint32_t {
    enot_decimated = 0, // Noise input is not decimated.
    edecimated = 1, // Noise input is decimated.
  };
  
  enum class eVADNMINEN : uint32_t {
    ebypassed = 0, // Minimum block is bypassed.
    eenabled = 1, // Minimum block is enabled.
  };
  
  enum class eVADNFILAUTO : uint32_t {
    enf_always_en = 0, // Noise filter is always enabled.
    enf_cond_en = 1, // Noise filter is enabled/disabled based on voice activity information.
  };
  
  // Bit field definition.
  struct {
    uint32_t VADNGAIN : 4;
    uint32_t _reserved_1 : 4;
    uint32_t VADNFILADJ : 5;
    uint32_t _reserved_2 : 15;
    eVADNOREN VADNOREN : 1;
    eVADNDECEN VADNDECEN : 1;
    eVADNMINEN VADNMINEN : 1;
    eVADNFILAUTO VADNFILAUTO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_NCONFIG() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile VAD0_NCONFIG &Instance() { return *reinterpret_cast<volatile VAD0_NCONFIG*>(0x40C200A0); }
};

// Voice Activity Detector 0 Noise Data
//
union VAD0_NDATA {
  
  // Bit field definition.
  struct {
    uint32_t VADNDATA : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_NDATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VAD0_NDATA &Instance() { return *reinterpret_cast<volatile VAD0_NDATA*>(0x40C200A4); }
};

// Voice Activity Detector 0 Zero-Crossing Detector
//
union VAD0_ZCD {
  
  enum class eVADZCDEN : uint32_t {
    edisabled = 0, // The ZCD is disabled
    eenabled = 1, // The ZCD is enabled
  };
  
  enum class eVADZCDAUTO : uint32_t {
    enot_estimated = 0, // The ZCD threshold is not estimated automatically
    eestimated = 1, // The ZCD threshold is estimated automatically
  };
  
  enum class eVADZCDAND : uint32_t {
    eored = 0, // The ZCD result is OR'ed with the energy-based detection.
    eanded = 1, // The ZCD result is AND'ed with the energy-based detection.
  };
  
  // Bit field definition.
  struct {
    eVADZCDEN VADZCDEN : 1;
    uint32_t _reserved_1 : 1;
    eVADZCDAUTO VADZCDAUTO : 1;
    uint32_t _reserved_2 : 1;
    eVADZCDAND VADZCDAND : 1;
    uint32_t _reserved_3 : 3;
    uint32_t VADZCDADJ : 4;
    uint32_t _reserved_4 : 4;
    uint32_t VADZCDTH : 10;
    uint32_t _reserved_end : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VAD0_ZCD() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile VAD0_ZCD &Instance() { return *reinterpret_cast<volatile VAD0_ZCD*>(0x40C200A8); }
};


} // namespace nPDM