#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// ADC_ETC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nADC_ETC {


// ADC_ETC Global Control Register
union CTRL {
  
  // TRIG enable register.
  enum class eTRIG_ENABLE : uint32_t {
    // disable all 8 external XBAR triggers.
    eTRIG_ENABLE_0 = 0,
    // enable external XBAR trigger0.
    eTRIG_ENABLE_1 = 1,
    // enable external XBAR trigger1.
    eTRIG_ENABLE_2 = 2,
    // enable external XBAR trigger0 and trigger1.
    eTRIG_ENABLE_3 = 3,
    // enable all 8 external XBAR triggers.
    eTRIG_ENABLE_255 = 255,
  };
  
  // Select the trigger type of the DMA_REQ.
  enum class eDMA_MODE_SEL : uint32_t {
    // Trig DMA_REQ with latched signal, REQ will be cleared when ACK and source request cleared.
    eDMA_MODE_SEL_0 = 0,
    // Trig DMA_REQ with pulsed signal, REQ will be cleared by ACK only.
    eDMA_MODE_SEL_1 = 1,
  };
  
  // Software synchronous reset, active high.
  enum class eSOFTRST : uint32_t {
    // ADC_ETC works normally.
    eSOFTRST_0 = 0,
    // All registers inside ADC_ETC will be reset to the default value.
    eSOFTRST_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TRIG enable register.
    eTRIG_ENABLE TRIG_ENABLE : 8;
    uint32_t _reserved_0 : 8;
    // read-write - Pre-divider for trig delay and interval
    uint32_t PRE_DIVIDER : 8;
    uint32_t _reserved_1 : 5;
    // read-write - Select the trigger type of the DMA_REQ.
    eDMA_MODE_SEL DMA_MODE_SEL : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Software synchronous reset, active high.
    eSOFTRST SOFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40048000); }
};

// ETC DONE0 and DONE1 IRQ State Register
union DONE0_1_IRQ {
  
  // TRIG0 done0 interrupt detection.
  enum class eTRIG0_DONE0 : uint32_t {
    // No TRIG0_DONE0 interrupt detected
    eTRIG0_DONE0_0 = 0,
    // TRIG0_DONE0 interrupt detected
    eTRIG0_DONE0_1 = 1,
  };
  
  // TRIG1 done0 interrupt detection.
  enum class eTRIG1_DONE0 : uint32_t {
    // No TRIG1_DONE0 interrupt detected
    eTRIG1_DONE0_0 = 0,
    // TRIG1_DONE0 interrupt detected
    eTRIG1_DONE0_1 = 1,
  };
  
  // TRIG2 done0 interrupt detection.
  enum class eTRIG2_DONE0 : uint32_t {
    // No TRIG2_DONE0 interrupt detected
    eTRIG2_DONE0_0 = 0,
    // TRIG2_DONE0 interrupt detected
    eTRIG2_DONE0_1 = 1,
  };
  
  // TRIG3 done0 interrupt detection.
  enum class eTRIG3_DONE0 : uint32_t {
    // No TRIG3_DONE0 interrupt detected
    eTRIG3_DONE0_0 = 0,
    // TRIG3_DONE0 interrupt detected
    eTRIG3_DONE0_1 = 1,
  };
  
  // TRIG4 done0 interrupt detection.
  enum class eTRIG4_DONE0 : uint32_t {
    // No TRIG4_DONE0 interrupt detected
    eTRIG4_DONE0_0 = 0,
    // TRIG4_DONE0 interrupt detected
    eTRIG4_DONE0_1 = 1,
  };
  
  // TRIG5 done0 interrupt detection.
  enum class eTRIG5_DONE0 : uint32_t {
    // No TRIG5_DONE0 interrupt detected
    eTRIG5_DONE0_0 = 0,
    // TRIG5_DONE0 interrupt detected
    eTRIG5_DONE0_1 = 1,
  };
  
  // TRIG6 done0 interrupt detection.
  enum class eTRIG6_DONE0 : uint32_t {
    // No TRIG6_DONE0 interrupt detected
    eTRIG6_DONE0_0 = 0,
    // TRIG6_DONE0 interrupt detected
    eTRIG6_DONE0_1 = 1,
  };
  
  // TRIG7 done0 interrupt detection.
  enum class eTRIG7_DONE0 : uint32_t {
    // No TRIG7_DONE0 interrupt detected
    eTRIG7_DONE0_0 = 0,
    // TRIG7_DONE0 interrupt detected
    eTRIG7_DONE0_1 = 1,
  };
  
  // TRIG0 done1 interrupt detection.
  enum class eTRIG0_DONE1 : uint32_t {
    // No TRIG0_DONE1 interrupt detected
    eTRIG0_DONE1_0 = 0,
    // TRIG0_DONE1 interrupt detected
    eTRIG0_DONE1_1 = 1,
  };
  
  // TRIG1 done1 interrupt detection.
  enum class eTRIG1_DONE1 : uint32_t {
    // No TRIG1_DONE1 interrupt detected
    eTRIG1_DONE1_0 = 0,
    // TRIG1_DONE1 interrupt detected
    eTRIG1_DONE1_1 = 1,
  };
  
  // TRIG2 done1 interrupt detection.
  enum class eTRIG2_DONE1 : uint32_t {
    // No TRIG2_DONE1 interrupt detected
    eTRIG2_DONE1_0 = 0,
    // TRIG2_DONE1 interrupt detected
    eTRIG2_DONE1_1 = 1,
  };
  
  // TRIG3 done1 interrupt detection.
  enum class eTRIG3_DONE1 : uint32_t {
    // No TRIG3_DONE1 interrupt detected
    eTRIG3_DONE1_0 = 0,
    // TRIG3_DONE1 interrupt detected
    eTRIG3_DONE1_1 = 1,
  };
  
  // TRIG4 done1 interrupt detection.
  enum class eTRIG4_DONE1 : uint32_t {
    // No TRIG4_DONE1 interrupt detected
    eTRIG4_DONE1_0 = 0,
    // TRIG4_DONE1 interrupt detected
    eTRIG4_DONE1_1 = 1,
  };
  
  // TRIG5 done1 interrupt detection.
  enum class eTRIG5_DONE1 : uint32_t {
    // No TRIG5_DONE1 interrupt detected
    eTRIG5_DONE1_0 = 0,
    // TRIG5_DONE1 interrupt detected
    eTRIG5_DONE1_1 = 1,
  };
  
  // TRIG6 done1 interrupt detection.
  enum class eTRIG6_DONE1 : uint32_t {
    // No TRIG6_DONE1 interrupt detected
    eTRIG6_DONE1_0 = 0,
    // TRIG6_DONE1 interrupt detected
    eTRIG6_DONE1_1 = 1,
  };
  
  // TRIG7 done1 interrupt detection.
  enum class eTRIG7_DONE1 : uint32_t {
    // No TRIG7_DONE1 interrupt detected
    eTRIG7_DONE1_0 = 0,
    // TRIG7_DONE1 interrupt detected
    eTRIG7_DONE1_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TRIG0 done0 interrupt detection.
    eTRIG0_DONE0 TRIG0_DONE0 : 1;
    // read-write - TRIG1 done0 interrupt detection.
    eTRIG1_DONE0 TRIG1_DONE0 : 1;
    // read-write - TRIG2 done0 interrupt detection.
    eTRIG2_DONE0 TRIG2_DONE0 : 1;
    // read-write - TRIG3 done0 interrupt detection.
    eTRIG3_DONE0 TRIG3_DONE0 : 1;
    // read-write - TRIG4 done0 interrupt detection.
    eTRIG4_DONE0 TRIG4_DONE0 : 1;
    // read-write - TRIG5 done0 interrupt detection.
    eTRIG5_DONE0 TRIG5_DONE0 : 1;
    // read-write - TRIG6 done0 interrupt detection.
    eTRIG6_DONE0 TRIG6_DONE0 : 1;
    // read-write - TRIG7 done0 interrupt detection.
    eTRIG7_DONE0 TRIG7_DONE0 : 1;
    uint32_t _reserved_0 : 8;
    // read-write - TRIG0 done1 interrupt detection.
    eTRIG0_DONE1 TRIG0_DONE1 : 1;
    // read-write - TRIG1 done1 interrupt detection.
    eTRIG1_DONE1 TRIG1_DONE1 : 1;
    // read-write - TRIG2 done1 interrupt detection.
    eTRIG2_DONE1 TRIG2_DONE1 : 1;
    // read-write - TRIG3 done1 interrupt detection.
    eTRIG3_DONE1 TRIG3_DONE1 : 1;
    // read-write - TRIG4 done1 interrupt detection.
    eTRIG4_DONE1 TRIG4_DONE1 : 1;
    // read-write - TRIG5 done1 interrupt detection.
    eTRIG5_DONE1 TRIG5_DONE1 : 1;
    // read-write - TRIG6 done1 interrupt detection.
    eTRIG6_DONE1 TRIG6_DONE1 : 1;
    // read-write - TRIG7 done1 interrupt detection.
    eTRIG7_DONE1 TRIG7_DONE1 : 1;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DONE0_1_IRQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DONE0_1_IRQ &Instance() { return *reinterpret_cast<volatile DONE0_1_IRQ*>(0x40048004); }
};

// ETC DONE_2, DONE_3 and DONE_ERR IRQ State Register
union DONE2_3_ERR_IRQ {
  
  // TRIG0 done2 interrupt detection.
  enum class eTRIG0_DONE2 : uint32_t {
    // No TRIG0_DONE2 interrupt detected
    eTRIG0_DONE2_0 = 0,
    // TRIG0_DONE2 interrupt detected
    eTRIG0_DONE2_1 = 1,
  };
  
  // TRIG1 done2 interrupt detection.
  enum class eTRIG1_DONE2 : uint32_t {
    // No TRIG1_DONE2 interrupt detected
    eTRIG1_DONE2_0 = 0,
    // TRIG1_DONE2 interrupt detected
    eTRIG1_DONE2_1 = 1,
  };
  
  // TRIG2 done2 interrupt detection.
  enum class eTRIG2_DONE2 : uint32_t {
    // No TRIG2_DONE2 interrupt detected
    eTRIG2_DONE2_0 = 0,
    // TRIG2_DONE2 interrupt detected
    eTRIG2_DONE2_1 = 1,
  };
  
  // TRIG3 done2 interrupt detection.
  enum class eTRIG3_DONE2 : uint32_t {
    // No TRIG3_DONE2 interrupt detected
    eTRIG3_DONE2_0 = 0,
    // TRIG3_DONE2 interrupt detected
    eTRIG3_DONE2_1 = 1,
  };
  
  // TRIG4 done2 interrupt detection.
  enum class eTRIG4_DONE2 : uint32_t {
    // No TRIG4_DONE2 interrupt detected
    eTRIG4_DONE2_0 = 0,
    // TRIG4_DONE2 interrupt detected
    eTRIG4_DONE2_1 = 1,
  };
  
  // TRIG5 done2 interrupt detection.
  enum class eTRIG5_DONE2 : uint32_t {
    // No TRIG5_DONE2 interrupt detected
    eTRIG5_DONE2_0 = 0,
    // TRIG5_DONE2 interrupt detected
    eTRIG5_DONE2_1 = 1,
  };
  
  // TRIG6 done2 interrupt detection.
  enum class eTRIG6_DONE2 : uint32_t {
    // No TRIG6_DONE2 interrupt detected
    eTRIG6_DONE2_0 = 0,
    // TRIG6_DONE2 interrupt detected
    eTRIG6_DONE2_1 = 1,
  };
  
  // TRIG7 done2 interrupt detection.
  enum class eTRIG7_DONE2 : uint32_t {
    // No TRIG7_DONE2 interrupt detected
    eTRIG7_DONE2_0 = 0,
    // TRIG7_DONE2 interrupt detected
    eTRIG7_DONE2_1 = 1,
  };
  
  // TRIG0 done3 interrupt detection.
  enum class eTRIG0_DONE3 : uint32_t {
    // No TRIG0_DONE3 interrupt detected
    eTRIG0_DONE3_0 = 0,
    // TRIG0_DONE3 interrupt detected
    eTRIG0_DONE3_1 = 1,
  };
  
  // TRIG1 done3 interrupt detection.
  enum class eTRIG1_DONE3 : uint32_t {
    // No TRIG1_DONE3 interrupt detected
    eTRIG1_DONE3_0 = 0,
    // TRIG1_DONE3 interrupt detected
    eTRIG1_DONE3_1 = 1,
  };
  
  // TRIG2 done3 interrupt detection.
  enum class eTRIG2_DONE3 : uint32_t {
    // No TRIG2_DONE3 interrupt detected
    eTRIG2_DONE3_0 = 0,
    // TRIG2_DONE3 interrupt detected
    eTRIG2_DONE3_1 = 1,
  };
  
  // TRIG3 done3 interrupt detection.
  enum class eTRIG3_DONE3 : uint32_t {
    // No TRIG3_DONE3 interrupt detected
    eTRIG3_DONE3_0 = 0,
    // TRIG3_DONE3 interrupt detected
    eTRIG3_DONE3_1 = 1,
  };
  
  // TRIG4 done3 interrupt detection.
  enum class eTRIG4_DONE3 : uint32_t {
    // No TRIG4_DONE3 interrupt detected
    eTRIG4_DONE3_0 = 0,
    // TRIG4_DONE3 interrupt detected
    eTRIG4_DONE3_1 = 1,
  };
  
  // TRIG5 done3 interrupt detection.
  enum class eTRIG5_DONE3 : uint32_t {
    // No TRIG5_DONE3 interrupt detected
    eTRIG5_DONE3_0 = 0,
    // TRIG5_DONE3 interrupt detected
    eTRIG5_DONE3_1 = 1,
  };
  
  // TRIG6 done3 interrupt detection.
  enum class eTRIG6_DONE3 : uint32_t {
    // No TRIG6_DONE3 interrupt detected
    eTRIG6_DONE3_0 = 0,
    // TRIG6_DONE3 interrupt detected
    eTRIG6_DONE3_1 = 1,
  };
  
  // TRIG7 done3 interrupt detection.
  enum class eTRIG7_DONE3 : uint32_t {
    // No TRIG7_DONE3 interrupt detected
    eTRIG7_DONE3_0 = 0,
    // TRIG7_DONE3 interrupt detected
    eTRIG7_DONE3_1 = 1,
  };
  
  // TRIG0 error interrupt detection.
  enum class eTRIG0_ERR : uint32_t {
    // No TRIG0_ERR interrupt detected
    eTRIG0_ERR_0 = 0,
    // TRIG0_ERR interrupt detected
    eTRIG0_ERR_1 = 1,
  };
  
  // TRIG1 error interrupt detection.
  enum class eTRIG1_ERR : uint32_t {
    // No TRIG1_ERR interrupt detected
    eTRIG1_ERR_0 = 0,
    // TRIG1_ERR interrupt detected
    eTRIG1_ERR_1 = 1,
  };
  
  // TRIG2 error interrupt detection.
  enum class eTRIG2_ERR : uint32_t {
    // No TRIG2_ERR interrupt detected
    eTRIG2_ERR_0 = 0,
    // TRIG2_ERR interrupt detected
    eTRIG2_ERR_1 = 1,
  };
  
  // TRIG3 error interrupt detection.
  enum class eTRIG3_ERR : uint32_t {
    // No TRIG3_ERR interrupt detected
    eTRIG3_ERR_0 = 0,
    // TRIG3_ERR interrupt detected
    eTRIG3_ERR_1 = 1,
  };
  
  // TRIG4 error interrupt detection.
  enum class eTRIG4_ERR : uint32_t {
    // No TRIG4_ERR interrupt detected
    eTRIG4_ERR_0 = 0,
    // TRIG4_ERR interrupt detected
    eTRIG4_ERR_1 = 1,
  };
  
  // TRIG5 error interrupt detection.
  enum class eTRIG5_ERR : uint32_t {
    // No TRIG5_ERR interrupt detected
    eTRIG5_ERR_0 = 0,
    // TRIG5_ERR interrupt detected
    eTRIG5_ERR_1 = 1,
  };
  
  // TRIG6 error interrupt detection.
  enum class eTRIG6_ERR : uint32_t {
    // No TRIG6_ERR interrupt detected
    eTRIG6_ERR_0 = 0,
    // TRIG6_ERR interrupt detected
    eTRIG6_ERR_1 = 1,
  };
  
  // TRIG7 error interrupt detection.
  enum class eTRIG7_ERR : uint32_t {
    // No TRIG7_ERR interrupt detected
    eTRIG7_ERR_0 = 0,
    // TRIG7_ERR interrupt detected
    eTRIG7_ERR_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TRIG0 done2 interrupt detection.
    eTRIG0_DONE2 TRIG0_DONE2 : 1;
    // read-write - TRIG1 done2 interrupt detection.
    eTRIG1_DONE2 TRIG1_DONE2 : 1;
    // read-write - TRIG2 done2 interrupt detection.
    eTRIG2_DONE2 TRIG2_DONE2 : 1;
    // read-write - TRIG3 done2 interrupt detection.
    eTRIG3_DONE2 TRIG3_DONE2 : 1;
    // read-write - TRIG4 done2 interrupt detection.
    eTRIG4_DONE2 TRIG4_DONE2 : 1;
    // read-write - TRIG5 done2 interrupt detection.
    eTRIG5_DONE2 TRIG5_DONE2 : 1;
    // read-write - TRIG6 done2 interrupt detection.
    eTRIG6_DONE2 TRIG6_DONE2 : 1;
    // read-write - TRIG7 done2 interrupt detection.
    eTRIG7_DONE2 TRIG7_DONE2 : 1;
    // read-write - TRIG0 done3 interrupt detection.
    eTRIG0_DONE3 TRIG0_DONE3 : 1;
    // read-write - TRIG1 done3 interrupt detection.
    eTRIG1_DONE3 TRIG1_DONE3 : 1;
    // read-write - TRIG2 done3 interrupt detection.
    eTRIG2_DONE3 TRIG2_DONE3 : 1;
    // read-write - TRIG3 done3 interrupt detection.
    eTRIG3_DONE3 TRIG3_DONE3 : 1;
    // read-write - TRIG4 done3 interrupt detection.
    eTRIG4_DONE3 TRIG4_DONE3 : 1;
    // read-write - TRIG5 done3 interrupt detection.
    eTRIG5_DONE3 TRIG5_DONE3 : 1;
    // read-write - TRIG6 done3 interrupt detection.
    eTRIG6_DONE3 TRIG6_DONE3 : 1;
    // read-write - TRIG7 done3 interrupt detection.
    eTRIG7_DONE3 TRIG7_DONE3 : 1;
    // read-write - TRIG0 error interrupt detection.
    eTRIG0_ERR TRIG0_ERR : 1;
    // read-write - TRIG1 error interrupt detection.
    eTRIG1_ERR TRIG1_ERR : 1;
    // read-write - TRIG2 error interrupt detection.
    eTRIG2_ERR TRIG2_ERR : 1;
    // read-write - TRIG3 error interrupt detection.
    eTRIG3_ERR TRIG3_ERR : 1;
    // read-write - TRIG4 error interrupt detection.
    eTRIG4_ERR TRIG4_ERR : 1;
    // read-write - TRIG5 error interrupt detection.
    eTRIG5_ERR TRIG5_ERR : 1;
    // read-write - TRIG6 error interrupt detection.
    eTRIG6_ERR TRIG6_ERR : 1;
    // read-write - TRIG7 error interrupt detection.
    eTRIG7_ERR TRIG7_ERR : 1;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DONE2_3_ERR_IRQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DONE2_3_ERR_IRQ &Instance() { return *reinterpret_cast<volatile DONE2_3_ERR_IRQ*>(0x40048008); }
};

// ETC DMA control Register
union DMA_CTRL {
  
  // Enable DMA request when TRIG0 done.
  enum class eTRIG0_ENABLE : uint32_t {
    // TRIG0 DMA request disabled.
    eTRIG0_ENABLE_0 = 0,
    // TRIG0 DMA request enabled.
    eTRIG0_ENABLE_1 = 1,
  };
  
  // Enable DMA request when TRIG1 done.
  enum class eTRIG1_ENABLE : uint32_t {
    // TRIG1 DMA request disabled.
    eTRIG1_ENABLE_0 = 0,
    // TRIG1 DMA request enabled.
    eTRIG1_ENABLE_1 = 1,
  };
  
  // Enable DMA request when TRIG2 done.
  enum class eTRIG2_ENABLE : uint32_t {
    // TRIG2 DMA request disabled.
    eTRIG2_ENABLE_0 = 0,
    // TRIG2 DMA request enabled.
    eTRIG2_ENABLE_1 = 1,
  };
  
  // Enable DMA request when TRIG3 done.
  enum class eTRIG3_ENABLE : uint32_t {
    // TRIG3 DMA request disabled.
    eTRIG3_ENABLE_0 = 0,
    // TRIG3 DMA request enabled.
    eTRIG3_ENABLE_1 = 1,
  };
  
  // Enable DMA request when TRIG4 done.
  enum class eTRIG4_ENABLE : uint32_t {
    // TRIG4 DMA request disabled.
    eTRIG4_ENABLE_0 = 0,
    // TRIG4 DMA request enabled.
    eTRIG4_ENABLE_1 = 1,
  };
  
  // Enable DMA request when TRIG5 done.
  enum class eTRIG5_ENABLE : uint32_t {
    // TRIG5 DMA request disabled.
    eTRIG5_ENABLE_0 = 0,
    // TRIG5 DMA request enabled.
    eTRIG5_ENABLE_1 = 1,
  };
  
  // Enable DMA request when TRIG6 done.
  enum class eTRIG6_ENABLE : uint32_t {
    // TRIG6 DMA request disabled.
    eTRIG6_ENABLE_0 = 0,
    // TRIG6 DMA request enabled.
    eTRIG6_ENABLE_1 = 1,
  };
  
  // Enable DMA request when TRIG7 done.
  enum class eTRIG7_ENABLE : uint32_t {
    // TRIG7 DMA request disabled.
    eTRIG7_ENABLE_0 = 0,
    // TRIG7 DMA request enabled.
    eTRIG7_ENABLE_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG0_REQ : uint32_t {
    // TRIG0_REQ not detected.
    eTRIG0_REQ_0 = 0,
    // TRIG0_REQ detected.
    eTRIG0_REQ_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG1_REQ : uint32_t {
    // TRIG1_REQ not detected.
    eTRIG1_REQ_0 = 0,
    // TRIG1_REQ detected.
    eTRIG1_REQ_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG2_REQ : uint32_t {
    // TRIG2_REQ not detected.
    eTRIG2_REQ_0 = 0,
    // TRIG2_REQ detected.
    eTRIG2_REQ_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG3_REQ : uint32_t {
    // TRIG3_REQ not detected.
    eTRIG3_REQ_0 = 0,
    // TRIG3_REQ detected.
    eTRIG3_REQ_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG4_REQ : uint32_t {
    // TRIG4_REQ not detected.
    eTRIG4_REQ_0 = 0,
    // TRIG4_REQ detected.
    eTRIG4_REQ_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG5_REQ : uint32_t {
    // TRIG5_REQ not detected.
    eTRIG5_REQ_0 = 0,
    // TRIG5_REQ detected.
    eTRIG5_REQ_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG6_REQ : uint32_t {
    // TRIG6_REQ not detected.
    eTRIG6_REQ_0 = 0,
    // TRIG6_REQ detected.
    eTRIG6_REQ_1 = 1,
  };
  
  // Flag bit for DMA request
  enum class eTRIG7_REQ : uint32_t {
    // TRIG7_REQ not detected.
    eTRIG7_REQ_0 = 0,
    // TRIG7_REQ detected.
    eTRIG7_REQ_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable DMA request when TRIG0 done.
    eTRIG0_ENABLE TRIG0_ENABLE : 1;
    // read-write - Enable DMA request when TRIG1 done.
    eTRIG1_ENABLE TRIG1_ENABLE : 1;
    // read-write - Enable DMA request when TRIG2 done.
    eTRIG2_ENABLE TRIG2_ENABLE : 1;
    // read-write - Enable DMA request when TRIG3 done.
    eTRIG3_ENABLE TRIG3_ENABLE : 1;
    // read-write - Enable DMA request when TRIG4 done.
    eTRIG4_ENABLE TRIG4_ENABLE : 1;
    // read-write - Enable DMA request when TRIG5 done.
    eTRIG5_ENABLE TRIG5_ENABLE : 1;
    // read-write - Enable DMA request when TRIG6 done.
    eTRIG6_ENABLE TRIG6_ENABLE : 1;
    // read-write - Enable DMA request when TRIG7 done.
    eTRIG7_ENABLE TRIG7_ENABLE : 1;
    uint32_t _reserved_0 : 8;
    // read-write - Flag bit for DMA request
    eTRIG0_REQ TRIG0_REQ : 1;
    // read-write - Flag bit for DMA request
    eTRIG1_REQ TRIG1_REQ : 1;
    // read-write - Flag bit for DMA request
    eTRIG2_REQ TRIG2_REQ : 1;
    // read-write - Flag bit for DMA request
    eTRIG3_REQ TRIG3_REQ : 1;
    // read-write - Flag bit for DMA request
    eTRIG4_REQ TRIG4_REQ : 1;
    // read-write - Flag bit for DMA request
    eTRIG5_REQ TRIG5_REQ : 1;
    // read-write - Flag bit for DMA request
    eTRIG6_REQ TRIG6_REQ : 1;
    // read-write - Flag bit for DMA request
    eTRIG7_REQ TRIG7_REQ : 1;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CTRL &Instance() { return *reinterpret_cast<volatile DMA_CTRL*>(0x4004800C); }
};

// ETC_TRIG Control Register
union TRIG0_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_CTRL &Instance() { return *reinterpret_cast<volatile TRIG0_CTRL*>(0x40048010); }
};

// ETC_TRIG Counter Register
union TRIG0_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG0_COUNTER*>(0x40048014); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG0_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG0_CHAIN_1_0*>(0x40048018); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG0_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG0_CHAIN_3_2*>(0x4004801C); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG0_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG0_CHAIN_5_4*>(0x40048020); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG0_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG0_CHAIN_7_6*>(0x40048024); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG0_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG0_RESULT_1_0*>(0x40048028); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG0_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG0_RESULT_3_2*>(0x4004802C); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG0_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG0_RESULT_5_4*>(0x40048030); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG0_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG0_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG0_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG0_RESULT_7_6*>(0x40048034); }
};

// ETC_TRIG Control Register
union TRIG1_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_CTRL &Instance() { return *reinterpret_cast<volatile TRIG1_CTRL*>(0x40048038); }
};

// ETC_TRIG Counter Register
union TRIG1_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG1_COUNTER*>(0x4004803C); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG1_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG1_CHAIN_1_0*>(0x40048040); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG1_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG1_CHAIN_3_2*>(0x40048044); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG1_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG1_CHAIN_5_4*>(0x40048048); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG1_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG1_CHAIN_7_6*>(0x4004804C); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG1_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG1_RESULT_1_0*>(0x40048050); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG1_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG1_RESULT_3_2*>(0x40048054); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG1_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG1_RESULT_5_4*>(0x40048058); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG1_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG1_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG1_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG1_RESULT_7_6*>(0x4004805C); }
};

// ETC_TRIG Control Register
union TRIG2_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_CTRL &Instance() { return *reinterpret_cast<volatile TRIG2_CTRL*>(0x40048060); }
};

// ETC_TRIG Counter Register
union TRIG2_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG2_COUNTER*>(0x40048064); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG2_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG2_CHAIN_1_0*>(0x40048068); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG2_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG2_CHAIN_3_2*>(0x4004806C); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG2_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG2_CHAIN_5_4*>(0x40048070); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG2_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG2_CHAIN_7_6*>(0x40048074); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG2_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG2_RESULT_1_0*>(0x40048078); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG2_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG2_RESULT_3_2*>(0x4004807C); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG2_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG2_RESULT_5_4*>(0x40048080); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG2_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG2_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG2_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG2_RESULT_7_6*>(0x40048084); }
};

// ETC_TRIG Control Register
union TRIG3_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_CTRL &Instance() { return *reinterpret_cast<volatile TRIG3_CTRL*>(0x40048088); }
};

// ETC_TRIG Counter Register
union TRIG3_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG3_COUNTER*>(0x4004808C); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG3_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG3_CHAIN_1_0*>(0x40048090); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG3_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG3_CHAIN_3_2*>(0x40048094); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG3_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG3_CHAIN_5_4*>(0x40048098); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG3_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG3_CHAIN_7_6*>(0x4004809C); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG3_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG3_RESULT_1_0*>(0x400480A0); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG3_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG3_RESULT_3_2*>(0x400480A4); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG3_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG3_RESULT_5_4*>(0x400480A8); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG3_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG3_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG3_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG3_RESULT_7_6*>(0x400480AC); }
};

// ETC_TRIG Control Register
union TRIG4_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_CTRL &Instance() { return *reinterpret_cast<volatile TRIG4_CTRL*>(0x400480B0); }
};

// ETC_TRIG Counter Register
union TRIG4_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG4_COUNTER*>(0x400480B4); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG4_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG4_CHAIN_1_0*>(0x400480B8); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG4_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG4_CHAIN_3_2*>(0x400480BC); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG4_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG4_CHAIN_5_4*>(0x400480C0); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG4_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG4_CHAIN_7_6*>(0x400480C4); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG4_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG4_RESULT_1_0*>(0x400480C8); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG4_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG4_RESULT_3_2*>(0x400480CC); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG4_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG4_RESULT_5_4*>(0x400480D0); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG4_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG4_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG4_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG4_RESULT_7_6*>(0x400480D4); }
};

// ETC_TRIG Control Register
union TRIG5_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_CTRL &Instance() { return *reinterpret_cast<volatile TRIG5_CTRL*>(0x400480D8); }
};

// ETC_TRIG Counter Register
union TRIG5_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG5_COUNTER*>(0x400480DC); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG5_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG5_CHAIN_1_0*>(0x400480E0); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG5_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG5_CHAIN_3_2*>(0x400480E4); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG5_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG5_CHAIN_5_4*>(0x400480E8); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG5_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG5_CHAIN_7_6*>(0x400480EC); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG5_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG5_RESULT_1_0*>(0x400480F0); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG5_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG5_RESULT_3_2*>(0x400480F4); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG5_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG5_RESULT_5_4*>(0x400480F8); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG5_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG5_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG5_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG5_RESULT_7_6*>(0x400480FC); }
};

// ETC_TRIG Control Register
union TRIG6_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_CTRL &Instance() { return *reinterpret_cast<volatile TRIG6_CTRL*>(0x40048100); }
};

// ETC_TRIG Counter Register
union TRIG6_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG6_COUNTER*>(0x40048104); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG6_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG6_CHAIN_1_0*>(0x40048108); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG6_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG6_CHAIN_3_2*>(0x4004810C); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG6_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG6_CHAIN_5_4*>(0x40048110); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG6_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG6_CHAIN_7_6*>(0x40048114); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG6_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG6_RESULT_1_0*>(0x40048118); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG6_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG6_RESULT_3_2*>(0x4004811C); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG6_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG6_RESULT_5_4*>(0x40048120); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG6_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG6_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG6_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG6_RESULT_7_6*>(0x40048124); }
};

// ETC_TRIG Control Register
union TRIG7_CTRL {
  
  // Software trigger. This field is self-clearing.
  enum class eSW_TRIG : uint32_t {
    // No software trigger event generated.
    eSW_TRIG_0 = 0,
    // Software trigger event generated.
    eSW_TRIG_1 = 1,
  };
  
  // Trigger mode selection.
  enum class eTRIG_MODE : uint32_t {
    // Hardware trigger. The softerware trigger will be ignored.
    eTRIG_MODE_0 = 0,
    // Software trigger. The hardware trigger will be ignored.
    eTRIG_MODE_1 = 1,
  };
  
  // The number of segments inside the trigger chain of TRIGa.
  enum class eTRIG_CHAIN : uint32_t {
    // Trigger chain length is 1
    eTRIG_CHAIN_0 = 0,
    // Trigger chain length is 2
    eTRIG_CHAIN_1 = 1,
    // Trigger chain length is 3
    eTRIG_CHAIN_2 = 2,
    // Trigger chain length is 4
    eTRIG_CHAIN_3 = 3,
    // Trigger chain length is 5
    eTRIG_CHAIN_4 = 4,
    // Trigger chain length is 6
    eTRIG_CHAIN_5 = 5,
    // Trigger chain length is 7
    eTRIG_CHAIN_6 = 6,
    // Trigger chain length is 8
    eTRIG_CHAIN_7 = 7,
  };
  
  // Trigger synchronization mode selection
  enum class eSYNC_MODE : uint32_t {
    // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
    eSYNC_MODE_0 = 0,
    // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
    eSYNC_MODE_1 = 1,
  };
  
  // Segment x done detection
  enum class eCHAINx_DONE : uint32_t {
    // segment x done not detected.
    eCHAINx_DONE_0 = 0,
    // segment x done detected.
    eCHAINx_DONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger. This field is self-clearing.
    eSW_TRIG SW_TRIG : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Trigger mode selection.
    eTRIG_MODE TRIG_MODE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - The number of segments inside the trigger chain of TRIGa.
    eTRIG_CHAIN TRIG_CHAIN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External trigger priority, 7 is highest priority, while 0 is lowest
    uint32_t TRIG_PRIORITY : 3;
    uint32_t _reserved_3 : 1;
    // read-write - Trigger synchronization mode selection
    eSYNC_MODE SYNC_MODE : 1;
    uint32_t _reserved_4 : 7;
    // read-write - Segment x done detection
    eCHAINx_DONE CHAINx_DONE : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_CTRL &Instance() { return *reinterpret_cast<volatile TRIG7_CTRL*>(0x40048128); }
};

// ETC_TRIG Counter Register
union TRIG7_COUNTER {
  
  // Bit field definition.
  struct {
    // read-write - TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    uint32_t INIT_DELAY : 16;
    // read-write - TRIGGER sampling interval counter
    uint32_t SAMPLE_INTERVAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_COUNTER &Instance() { return *reinterpret_cast<volatile TRIG7_COUNTER*>(0x4004812C); }
};

// ETC_TRIG Chain 0/1 Register
union TRIG7_CHAIN_1_0 {
  
  // ADC hardware trigger command selection
  enum class eCSEL0 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL0_0 = 0,
    // ADC CMD1 selected.
    eCSEL0_1 = 1,
    // ADC CMD2 selected.
    eCSEL0_2 = 2,
    // ADC CMD3 selected.
    eCSEL0_3 = 3,
    // ADC CMD4 selected.
    eCSEL0_4 = 4,
    // ADC CMD5 selected.
    eCSEL0_5 = 5,
    // ADC CMD6 selected.
    eCSEL0_6 = 6,
    // ADC CMD7 selected.
    eCSEL0_7 = 7,
    // ADC CMD8 selected.
    eCSEL0_8 = 8,
    // ADC CMD9 selected.
    eCSEL0_9 = 9,
    // ADC CMD10 selected.
    eCSEL0_10 = 10,
    // ADC CMD11 selected.
    eCSEL0_11 = 11,
    // ADC CMD12 selected.
    eCSEL0_12 = 12,
    // ADC CMD13 selected.
    eCSEL0_13 = 13,
    // ADC CMD14 selected.
    eCSEL0_14 = 14,
    // ADC CMD15 selected.
    eCSEL0_15 = 15,
  };
  
  // Segment 0 HWTS ADC hardware trigger selection
  enum class eHWTS0 : uint32_t {
    // no trigger selected
    eHWTS0_0 = 0,
    // ADC TRIG0 selected
    eHWTS0_1 = 1,
    // ADC TRIG1 selected
    eHWTS0_2 = 2,
    // ADC TRIG2 selected
    eHWTS0_4 = 4,
    // ADC TRIG3 selected
    eHWTS0_8 = 8,
    // ADC TRIG4 selected
    eHWTS0_16 = 16,
    // ADC TRIG5 selected
    eHWTS0_32 = 32,
    // ADC TRIG6 selected
    eHWTS0_64 = 64,
    // ADC TRIG7 selected
    eHWTS0_128 = 128,
  };
  
  // Segment 0 B2B
  enum class eB2B0 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B0_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B0_1 = 1,
  };
  
  // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
  enum class eIE0 : uint32_t {
    // Generate interrupt on Done0 when segment 0 finish.
    eIE0_0 = 0,
    // Generate interrupt on Done1 when segment 0 finish.
    eIE0_1 = 1,
    // Generate interrupt on Done2 when segment 0 finish.
    eIE0_2 = 2,
    // Generate interrupt on Done3 when segment 0 finish.
    eIE0_3 = 3,
  };
  
  // IRQ enable of segment 0.
  enum class eIE0_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE0_EN_0 = 0,
    // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
    eIE0_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL1 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL1_0 = 0,
    // ADC CMD1 selected.
    eCSEL1_1 = 1,
    // ADC CMD2 selected.
    eCSEL1_2 = 2,
    // ADC CMD3 selected.
    eCSEL1_3 = 3,
    // ADC CMD4 selected.
    eCSEL1_4 = 4,
    // ADC CMD5 selected.
    eCSEL1_5 = 5,
    // ADC CMD6 selected.
    eCSEL1_6 = 6,
    // ADC CMD7 selected.
    eCSEL1_7 = 7,
    // ADC CMD8 selected.
    eCSEL1_8 = 8,
    // ADC CMD9 selected.
    eCSEL1_9 = 9,
    // ADC CMD10 selected.
    eCSEL1_10 = 10,
    // ADC CMD11 selected.
    eCSEL1_11 = 11,
    // ADC CMD12 selected.
    eCSEL1_12 = 12,
    // ADC CMD13 selected.
    eCSEL1_13 = 13,
    // ADC CMD14 selected.
    eCSEL1_14 = 14,
    // ADC CMD15 selected.
    eCSEL1_15 = 15,
  };
  
  // Segment 1 HWTS ADC hardware trigger selection
  enum class eHWTS1 : uint32_t {
    // no trigger selected
    eHWTS1_0 = 0,
    // ADC TRIG0 selected
    eHWTS1_1 = 1,
    // ADC TRIG1 selected
    eHWTS1_2 = 2,
    // ADC TRIG2 selected
    eHWTS1_4 = 4,
    // ADC TRIG3 selected
    eHWTS1_8 = 8,
    // ADC TRIG4 selected
    eHWTS1_16 = 16,
    // ADC TRIG5 selected
    eHWTS1_32 = 32,
    // ADC TRIG6 selected
    eHWTS1_64 = 64,
    // ADC TRIG7 selected
    eHWTS1_128 = 128,
  };
  
  // Segment 1 B2B
  enum class eB2B1 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B1_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B1_1 = 1,
  };
  
  // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
  enum class eIE1 : uint32_t {
    // Generate interrupt on Done0 when Segment 1 finish.
    eIE1_0 = 0,
    // Generate interrupt on Done1 when Segment 1 finish.
    eIE1_1 = 1,
    // Generate interrupt on Done2 when Segment 1 finish.
    eIE1_2 = 2,
    // Generate interrupt on Done3 when Segment 1 finish.
    eIE1_3 = 3,
  };
  
  // IRQ enable of segment 1.
  enum class eIE1_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE1_EN_0 = 0,
    // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
    eIE1_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL0 CSEL0 : 4;
    // read-write - Segment 0 HWTS ADC hardware trigger selection
    eHWTS0 HWTS0 : 8;
    // read-write - Segment 0 B2B
    eB2B0 B2B0 : 1;
    // read-write - Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    eIE0 IE0 : 2;
    // read-write - IRQ enable of segment 0.
    eIE0_EN IE0_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL1 CSEL1 : 4;
    // read-write - Segment 1 HWTS ADC hardware trigger selection
    eHWTS1 HWTS1 : 8;
    // read-write - Segment 1 B2B
    eB2B1 B2B1 : 1;
    // read-write - Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    eIE1 IE1 : 2;
    // read-write - IRQ enable of segment 1.
    eIE1_EN IE1_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_CHAIN_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_CHAIN_1_0 &Instance() { return *reinterpret_cast<volatile TRIG7_CHAIN_1_0*>(0x40048130); }
};

// ETC_TRIG Chain 2/3 Register
union TRIG7_CHAIN_3_2 {
  
  // ADC hardware trigger command selection
  enum class eCSEL2 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL2_0 = 0,
    // ADC CMD1 selected.
    eCSEL2_1 = 1,
    // ADC CMD2 selected.
    eCSEL2_2 = 2,
    // ADC CMD3 selected.
    eCSEL2_3 = 3,
    // ADC CMD4 selected.
    eCSEL2_4 = 4,
    // ADC CMD5 selected.
    eCSEL2_5 = 5,
    // ADC CMD6 selected.
    eCSEL2_6 = 6,
    // ADC CMD7 selected.
    eCSEL2_7 = 7,
    // ADC CMD8 selected.
    eCSEL2_8 = 8,
    // ADC CMD9 selected.
    eCSEL2_9 = 9,
    // ADC CMD10 selected.
    eCSEL2_10 = 10,
    // ADC CMD11 selected.
    eCSEL2_11 = 11,
    // ADC CMD12 selected.
    eCSEL2_12 = 12,
    // ADC CMD13 selected.
    eCSEL2_13 = 13,
    // ADC CMD14 selected.
    eCSEL2_14 = 14,
    // ADC CMD15 selected.
    eCSEL2_15 = 15,
  };
  
  // Segment 2 HWTS ADC hardware trigger selection
  enum class eHWTS2 : uint32_t {
    // no trigger selected
    eHWTS2_0 = 0,
    // ADC TRIG0 selected
    eHWTS2_1 = 1,
    // ADC TRIG1 selected
    eHWTS2_2 = 2,
    // ADC TRIG2 selected
    eHWTS2_4 = 4,
    // ADC TRIG3 selected
    eHWTS2_8 = 8,
    // ADC TRIG4 selected
    eHWTS2_16 = 16,
    // ADC TRIG5 selected
    eHWTS2_32 = 32,
    // ADC TRIG6 selected
    eHWTS2_64 = 64,
    // ADC TRIG7 selected
    eHWTS2_128 = 128,
  };
  
  // Segment 2 B2B
  enum class eB2B2 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B2_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B2_1 = 1,
  };
  
  // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
  enum class eIE2 : uint32_t {
    // Generate interrupt on Done0 when segment 2 finish.
    eIE2_0 = 0,
    // Generate interrupt on Done1 when segment 2 finish.
    eIE2_1 = 1,
    // Generate interrupt on Done2 when segment 2 finish.
    eIE2_2 = 2,
    // Generate interrupt on Done3 when segment 2 finish.
    eIE2_3 = 3,
  };
  
  // IRQ enable of segment 2.
  enum class eIE2_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE2_EN_0 = 0,
    // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
    eIE2_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL3 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL3_0 = 0,
    // ADC CMD1 selected.
    eCSEL3_1 = 1,
    // ADC CMD2 selected.
    eCSEL3_2 = 2,
    // ADC CMD3 selected.
    eCSEL3_3 = 3,
    // ADC CMD4 selected.
    eCSEL3_4 = 4,
    // ADC CMD5 selected.
    eCSEL3_5 = 5,
    // ADC CMD6 selected.
    eCSEL3_6 = 6,
    // ADC CMD7 selected.
    eCSEL3_7 = 7,
    // ADC CMD8 selected.
    eCSEL3_8 = 8,
    // ADC CMD9 selected.
    eCSEL3_9 = 9,
    // ADC CMD10 selected.
    eCSEL3_10 = 10,
    // ADC CMD11 selected.
    eCSEL3_11 = 11,
    // ADC CMD12 selected.
    eCSEL3_12 = 12,
    // ADC CMD13 selected.
    eCSEL3_13 = 13,
    // ADC CMD14 selected.
    eCSEL3_14 = 14,
    // ADC CMD15 selected.
    eCSEL3_15 = 15,
  };
  
  // Segment 3 HWTS ADC hardware trigger selection
  enum class eHWTS3 : uint32_t {
    // no trigger selected
    eHWTS3_0 = 0,
    // ADC TRIG0 selected
    eHWTS3_1 = 1,
    // ADC TRIG1 selected
    eHWTS3_2 = 2,
    // ADC TRIG2 selected
    eHWTS3_4 = 4,
    // ADC TRIG3 selected
    eHWTS3_8 = 8,
    // ADC TRIG4 selected
    eHWTS3_16 = 16,
    // ADC TRIG5 selected
    eHWTS3_32 = 32,
    // ADC TRIG6 selected
    eHWTS3_64 = 64,
    // ADC TRIG7 selected
    eHWTS3_128 = 128,
  };
  
  // Segment 3 B2B
  enum class eB2B3 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B3_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B3_1 = 1,
  };
  
  // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
  enum class eIE3 : uint32_t {
    // Generate interrupt on Done0 when segment 3 finish.
    eIE3_0 = 0,
    // Generate interrupt on Done1 when segment 3 finish.
    eIE3_1 = 1,
    // Generate interrupt on Done2 when segment 3 finish.
    eIE3_2 = 2,
    // Generate interrupt on Done3 when segment 3 finish.
    eIE3_3 = 3,
  };
  
  // IRQ enable of segment 3.
  enum class eIE3_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE3_EN_0 = 0,
    // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
    eIE3_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL2 CSEL2 : 4;
    // read-write - Segment 2 HWTS ADC hardware trigger selection
    eHWTS2 HWTS2 : 8;
    // read-write - Segment 2 B2B
    eB2B2 B2B2 : 1;
    // read-write - Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    eIE2 IE2 : 2;
    // read-write - IRQ enable of segment 2.
    eIE2_EN IE2_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL3 CSEL3 : 4;
    // read-write - Segment 3 HWTS ADC hardware trigger selection
    eHWTS3 HWTS3 : 8;
    // read-write - Segment 3 B2B
    eB2B3 B2B3 : 1;
    // read-write - Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    eIE3 IE3 : 2;
    // read-write - IRQ enable of segment 3.
    eIE3_EN IE3_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_CHAIN_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_CHAIN_3_2 &Instance() { return *reinterpret_cast<volatile TRIG7_CHAIN_3_2*>(0x40048134); }
};

// ETC_TRIG Chain 4/5 Register
union TRIG7_CHAIN_5_4 {
  
  // ADC hardware trigger command selection
  enum class eCSEL4 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL4_0 = 0,
    // ADC CMD1 selected.
    eCSEL4_1 = 1,
    // ADC CMD2 selected.
    eCSEL4_2 = 2,
    // ADC CMD3 selected.
    eCSEL4_3 = 3,
    // ADC CMD4 selected.
    eCSEL4_4 = 4,
    // ADC CMD5 selected.
    eCSEL4_5 = 5,
    // ADC CMD6 selected.
    eCSEL4_6 = 6,
    // ADC CMD7 selected.
    eCSEL4_7 = 7,
    // ADC CMD8 selected.
    eCSEL4_8 = 8,
    // ADC CMD9 selected.
    eCSEL4_9 = 9,
    // ADC CMD10 selected.
    eCSEL4_10 = 10,
    // ADC CMD11 selected.
    eCSEL4_11 = 11,
    // ADC CMD12 selected.
    eCSEL4_12 = 12,
    // ADC CMD13 selected.
    eCSEL4_13 = 13,
    // ADC CMD14 selected.
    eCSEL4_14 = 14,
    // ADC CMD15 selected.
    eCSEL4_15 = 15,
  };
  
  // Segment 4 HWTS ADC hardware trigger selection
  enum class eHWTS4 : uint32_t {
    // no trigger selected
    eHWTS4_0 = 0,
    // ADC TRIG0 selected
    eHWTS4_1 = 1,
    // ADC TRIG1 selected
    eHWTS4_2 = 2,
    // ADC TRIG2 selected
    eHWTS4_4 = 4,
    // ADC TRIG3 selected
    eHWTS4_8 = 8,
    // ADC TRIG4 selected
    eHWTS4_16 = 16,
    // ADC TRIG5 selected
    eHWTS4_32 = 32,
    // ADC TRIG6 selected
    eHWTS4_64 = 64,
    // ADC TRIG7 selected
    eHWTS4_128 = 128,
  };
  
  // Segment 4 B2B
  enum class eB2B4 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B4_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B4_1 = 1,
  };
  
  // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
  enum class eIE4 : uint32_t {
    // Generate interrupt on Done0 when segment 4 finish.
    eIE4_0 = 0,
    // Generate interrupt on Done1 when segment 4 finish.
    eIE4_1 = 1,
    // Generate interrupt on Done2 when segment 4 finish.
    eIE4_2 = 2,
    // Generate interrupt on Done3 when segment 4 finish.
    eIE4_3 = 3,
  };
  
  // IRQ enable of segment 4.
  enum class eIE4_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE4_EN_0 = 0,
    // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
    eIE4_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL5 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL5_0 = 0,
    // ADC CMD1 selected.
    eCSEL5_1 = 1,
    // ADC CMD2 selected.
    eCSEL5_2 = 2,
    // ADC CMD3 selected.
    eCSEL5_3 = 3,
    // ADC CMD4 selected.
    eCSEL5_4 = 4,
    // ADC CMD5 selected.
    eCSEL5_5 = 5,
    // ADC CMD6 selected.
    eCSEL5_6 = 6,
    // ADC CMD7 selected.
    eCSEL5_7 = 7,
    // ADC CMD8 selected.
    eCSEL5_8 = 8,
    // ADC CMD9 selected.
    eCSEL5_9 = 9,
    // ADC CMD10 selected.
    eCSEL5_10 = 10,
    // ADC CMD11 selected.
    eCSEL5_11 = 11,
    // ADC CMD12 selected.
    eCSEL5_12 = 12,
    // ADC CMD13 selected.
    eCSEL5_13 = 13,
    // ADC CMD14 selected.
    eCSEL5_14 = 14,
    // ADC CMD15 selected.
    eCSEL5_15 = 15,
  };
  
  // Segment 5 HWTS ADC hardware trigger selection
  enum class eHWTS5 : uint32_t {
    // no trigger selected
    eHWTS5_0 = 0,
    // ADC TRIG0 selected
    eHWTS5_1 = 1,
    // ADC TRIG1 selected
    eHWTS5_2 = 2,
    // ADC TRIG2 selected
    eHWTS5_4 = 4,
    // ADC TRIG3 selected
    eHWTS5_8 = 8,
    // ADC TRIG4 selected
    eHWTS5_16 = 16,
    // ADC TRIG5 selected
    eHWTS5_32 = 32,
    // ADC TRIG6 selected
    eHWTS5_64 = 64,
    // ADC TRIG7 selected
    eHWTS5_128 = 128,
  };
  
  // Segment 5 B2B
  enum class eB2B5 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B5_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B5_1 = 1,
  };
  
  // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
  enum class eIE5 : uint32_t {
    // Generate interrupt on Done0 when segment 5 finish.
    eIE5_0 = 0,
    // Generate interrupt on Done1 when segment 5 finish.
    eIE5_1 = 1,
    // Generate interrupt on Done2 when segment 5 finish.
    eIE5_2 = 2,
    // Generate interrupt on Done3 when segment 5 finish.
    eIE5_3 = 3,
  };
  
  // IRQ enable of segment 5.
  enum class eIE5_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE5_EN_0 = 0,
    // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
    eIE5_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL4 CSEL4 : 4;
    // read-write - Segment 4 HWTS ADC hardware trigger selection
    eHWTS4 HWTS4 : 8;
    // read-write - Segment 4 B2B
    eB2B4 B2B4 : 1;
    // read-write - Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    eIE4 IE4 : 2;
    // read-write - IRQ enable of segment 4.
    eIE4_EN IE4_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL5 CSEL5 : 4;
    // read-write - Segment 5 HWTS ADC hardware trigger selection
    eHWTS5 HWTS5 : 8;
    // read-write - Segment 5 B2B
    eB2B5 B2B5 : 1;
    // read-write - Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    eIE5 IE5 : 2;
    // read-write - IRQ enable of segment 5.
    eIE5_EN IE5_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_CHAIN_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_CHAIN_5_4 &Instance() { return *reinterpret_cast<volatile TRIG7_CHAIN_5_4*>(0x40048138); }
};

// ETC_TRIG Chain 6/7 Register
union TRIG7_CHAIN_7_6 {
  
  // ADC hardware trigger command selection
  enum class eCSEL6 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL6_0 = 0,
    // ADC CMD1 selected.
    eCSEL6_1 = 1,
    // ADC CMD2 selected.
    eCSEL6_2 = 2,
    // ADC CMD3 selected.
    eCSEL6_3 = 3,
    // ADC CMD4 selected.
    eCSEL6_4 = 4,
    // ADC CMD5 selected.
    eCSEL6_5 = 5,
    // ADC CMD6 selected.
    eCSEL6_6 = 6,
    // ADC CMD7 selected.
    eCSEL6_7 = 7,
    // ADC CMD8 selected.
    eCSEL6_8 = 8,
    // ADC CMD9 selected.
    eCSEL6_9 = 9,
    // ADC CMD10 selected.
    eCSEL6_10 = 10,
    // ADC CMD11 selected.
    eCSEL6_11 = 11,
    // ADC CMD12 selected.
    eCSEL6_12 = 12,
    // ADC CMD13 selected.
    eCSEL6_13 = 13,
    // ADC CMD14 selected.
    eCSEL6_14 = 14,
    // ADC CMD15 selected.
    eCSEL6_15 = 15,
  };
  
  // Segment 6 HWTS ADC hardware trigger selection
  enum class eHWTS6 : uint32_t {
    // no trigger selected
    eHWTS6_0 = 0,
    // ADC TRIG0 selected
    eHWTS6_1 = 1,
    // ADC TRIG1 selected
    eHWTS6_2 = 2,
    // ADC TRIG2 selected
    eHWTS6_4 = 4,
    // ADC TRIG3 selected
    eHWTS6_8 = 8,
    // ADC TRIG4 selected
    eHWTS6_16 = 16,
    // ADC TRIG5 selected
    eHWTS6_32 = 32,
    // ADC TRIG6 selected
    eHWTS6_64 = 64,
    // ADC TRIG7 selected
    eHWTS6_128 = 128,
  };
  
  // Segment 6 B2B
  enum class eB2B6 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B6_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B6_1 = 1,
  };
  
  // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
  enum class eIE6 : uint32_t {
    // Generate interrupt on Done0 when segment 6 finish.
    eIE6_0 = 0,
    // Generate interrupt on Done1 when segment 6 finish.
    eIE6_1 = 1,
    // Generate interrupt on Done2 when segment 6 finish.
    eIE6_2 = 2,
    // Generate interrupt on Done3 when segment 6 finish.
    eIE6_3 = 3,
  };
  
  // IRQ enable of segment 6.
  enum class eIE6_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE6_EN_0 = 0,
    // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
    eIE6_EN_1 = 1,
  };
  
  // ADC hardware trigger command selection
  enum class eCSEL7 : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eCSEL7_0 = 0,
    // ADC CMD1 selected.
    eCSEL7_1 = 1,
    // ADC CMD2 selected.
    eCSEL7_2 = 2,
    // ADC CMD3 selected.
    eCSEL7_3 = 3,
    // ADC CMD4 selected.
    eCSEL7_4 = 4,
    // ADC CMD5 selected.
    eCSEL7_5 = 5,
    // ADC CMD6 selected.
    eCSEL7_6 = 6,
    // ADC CMD7 selected.
    eCSEL7_7 = 7,
    // ADC CMD8 selected.
    eCSEL7_8 = 8,
    // ADC CMD9 selected.
    eCSEL7_9 = 9,
    // ADC CMD10 selected.
    eCSEL7_10 = 10,
    // ADC CMD11 selected.
    eCSEL7_11 = 11,
    // ADC CMD12 selected.
    eCSEL7_12 = 12,
    // ADC CMD13 selected.
    eCSEL7_13 = 13,
    // ADC CMD14 selected.
    eCSEL7_14 = 14,
    // ADC CMD15 selected.
    eCSEL7_15 = 15,
  };
  
  // Segment 7 HWTS ADC hardware trigger selection
  enum class eHWTS7 : uint32_t {
    // no trigger selected
    eHWTS7_0 = 0,
    // ADC TRIG0 selected
    eHWTS7_1 = 1,
    // ADC TRIG1 selected
    eHWTS7_2 = 2,
    // ADC TRIG2 selected
    eHWTS7_4 = 4,
    // ADC TRIG3 selected
    eHWTS7_8 = 8,
    // ADC TRIG4 selected
    eHWTS7_16 = 16,
    // ADC TRIG5 selected
    eHWTS7_32 = 32,
    // ADC TRIG6 selected
    eHWTS7_64 = 64,
    // ADC TRIG7 selected
    eHWTS7_128 = 128,
  };
  
  // Segment 7 B2B
  enum class eB2B7 : uint32_t {
    // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
    eB2B7_0 = 0,
    // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
    eB2B7_1 = 1,
  };
  
  // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
  enum class eIE7 : uint32_t {
    // Generate interrupt on Done0 when segment 7 finish.
    eIE7_0 = 0,
    // Generate interrupt on Done1 when segment 7 finish.
    eIE7_1 = 1,
    // Generate interrupt on Done2 when segment 7 finish.
    eIE7_2 = 2,
    // Generate interrupt on Done3 when segment 7 finish.
    eIE7_3 = 3,
  };
  
  // IRQ enable of segment 7.
  enum class eIE7_EN : uint32_t {
    // Interrupt DONE disabled.
    eIE7_EN_0 = 0,
    // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
    eIE7_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC hardware trigger command selection
    eCSEL6 CSEL6 : 4;
    // read-write - Segment 6 HWTS ADC hardware trigger selection
    eHWTS6 HWTS6 : 8;
    // read-write - Segment 6 B2B
    eB2B6 B2B6 : 1;
    // read-write - Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    eIE6 IE6 : 2;
    // read-write - IRQ enable of segment 6.
    eIE6_EN IE6_EN : 1;
    // read-write - ADC hardware trigger command selection
    eCSEL7 CSEL7 : 4;
    // read-write - Segment 7 HWTS ADC hardware trigger selection
    eHWTS7 HWTS7 : 8;
    // read-write - Segment 7 B2B
    eB2B7 B2B7 : 1;
    // read-write - Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    eIE7 IE7 : 2;
    // read-write - IRQ enable of segment 7.
    eIE7_EN IE7_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_CHAIN_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_CHAIN_7_6 &Instance() { return *reinterpret_cast<volatile TRIG7_CHAIN_7_6*>(0x4004813C); }
};

// ETC_TRIG Result Data 1/0 Register
union TRIG7_RESULT_1_0 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA1 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_RESULT_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_RESULT_1_0 &Instance() { return *reinterpret_cast<volatile TRIG7_RESULT_1_0*>(0x40048140); }
};

// ETC_TRIG Result Data 3/2 Register
union TRIG7_RESULT_3_2 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA2 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA3 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_RESULT_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_RESULT_3_2 &Instance() { return *reinterpret_cast<volatile TRIG7_RESULT_3_2*>(0x40048144); }
};

// ETC_TRIG Result Data 5/4 Register
union TRIG7_RESULT_5_4 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA4 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA5 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_RESULT_5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_RESULT_5_4 &Instance() { return *reinterpret_cast<volatile TRIG7_RESULT_5_4*>(0x40048148); }
};

// ETC_TRIG Result Data 7/6 Register
union TRIG7_RESULT_7_6 {
  
  // Bit field definition.
  struct {
    // read-only - Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA6 : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    uint32_t DATA7 : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIG7_RESULT_7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TRIG7_RESULT_7_6 &Instance() { return *reinterpret_cast<volatile TRIG7_RESULT_7_6*>(0x4004814C); }
};


} // namespace nADC_ETC