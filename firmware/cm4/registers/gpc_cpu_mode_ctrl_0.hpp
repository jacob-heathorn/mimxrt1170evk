#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // GPC_CPU
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nGPC_CPU_MODE_CTRL_0 {


// CM Authentication Control
//
union CM_AUTHEN_CTRL {
  
  enum class eUSER : uint32_t {
    eb0 = 0, // Allow only privilege mode to access CPU mode control registers
    eb1 = 1, // Allow both privilege and user mode to access CPU mode control registers
  };
  
  enum class eNONSECURE : uint32_t {
    eb0 = 0, // Allow only secure mode to access CPU mode control registers
    eb1 = 1, // Allow both secure and non-secure mode to access CPU mode control registers
  };
  
  // Bit field definition.
  struct {
    eUSER USER : 1;
    eNONSECURE NONSECURE : 1;
    uint32_t _reserved_2 : 2;
    uint32_t LOCK_SETTING : 1;
    uint32_t _reserved_3 : 3;
    uint32_t WHITE_LIST : 4;
    uint32_t LOCK_LIST : 1;
    uint32_t _reserved_5 : 7;
    uint32_t LOCK_CFG : 1;
    uint32_t _reserved_end : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_AUTHEN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000F00; }
  static inline volatile CM_AUTHEN_CTRL &Instance() { return *reinterpret_cast<volatile CM_AUTHEN_CTRL*>(0x40C00004); }
};

// CM Interrupt Control
//
union CM_INT_CTRL {
  
  enum class eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN : uint32_t {
    eb0 = 0, // Interrupt disable
    eb1 = 1, // Interrupt enable
  };
  
  enum class eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN : uint32_t {
    eb0 = 0, // Interrupt disable
    eb1 = 1, // Interrupt enable
  };
  
  enum class eSP_REQ_NOT_ALLOWED_SOFT_INT_EN : uint32_t {
    eb0 = 0, // Interrupt disable
    eb1 = 1, // Interrupt enable
  };
  
  // Bit field definition.
  struct {
    eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN SP_REQ_NOT_ALLOWED_SLEEP_INT_EN : 1;
    eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN : 1;
    eSP_REQ_NOT_ALLOWED_SOFT_INT_EN SP_REQ_NOT_ALLOWED_SOFT_INT_EN : 1;
    uint32_t _reserved_3 : 13;
    uint32_t SP_REQ_NOT_ALLOWED_SLEEP_INT : 1;
    uint32_t SP_REQ_NOT_ALLOWED_WAKEUP_INT : 1;
    uint32_t SP_REQ_NOT_ALLOWED_SOFT_INT : 1;
    uint32_t _reserved_end : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_INT_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000007; }
  static inline volatile CM_INT_CTRL &Instance() { return *reinterpret_cast<volatile CM_INT_CTRL*>(0x40C00008); }
};

// Miscellaneous
//
union CM_MISC {
  
  enum class eNMI_STAT : uint32_t {
    eb0 = 0, // NMI is not asserting
    eb1 = 1, // NMI is asserting
  };
  
  enum class eSLEEP_HOLD_EN : uint32_t {
    eb0 = 0, // Disable cpu_sleep_hold_req
    eb1 = 1, // Allow cpu_sleep_hold_req assert during CPU low power status
  };
  
  // Bit field definition.
  struct {
    eNMI_STAT NMI_STAT : 1;
    eSLEEP_HOLD_EN SLEEP_HOLD_EN : 1;
    uint32_t SLEEP_HOLD_STAT : 1;
    uint32_t _reserved_3 : 1;
    uint32_t MASTER_CPU : 1;
    uint32_t _reserved_end : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_MISC() = delete;
  inline void Reset() volatile { this->value = 0x00000006; }
  static inline volatile CM_MISC &Instance() { return *reinterpret_cast<volatile CM_MISC*>(0x40C0000C); }
};

// CPU mode control
//
union CM_MODE_CTRL {
  
  enum class eCPU_MODE_TARGET : uint32_t {
    eb0 = 0, // Stay in RUN mode
    eb1 = 1, // Transit to WAIT mode
    eb2 = 2, // Transit to STOP mode
    eb3 = 3, // Transit to SUSPEND mode
  };
  
  enum class eWFE_EN : uint32_t {
    eb0 = 0, // WFE assertion can not trigger low power
    eb1 = 1, // WFE assertion can trigger low power
  };
  
  // Bit field definition.
  struct {
    eCPU_MODE_TARGET CPU_MODE_TARGET : 2;
    uint32_t _reserved_1 : 2;
    eWFE_EN WFE_EN : 1;
    uint32_t _reserved_end : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_MODE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_MODE_CTRL &Instance() { return *reinterpret_cast<volatile CM_MODE_CTRL*>(0x40C00010); }
};

// CM CPU mode Status
//
union CM_MODE_STAT {
  
  enum class eCPU_MODE_CURRENT : uint32_t {
    eRUN = 0, // CPU is currently in RUN mode
    eWAIT = 1, // CPU is currently in WAIT mode
    eSTOP = 2, // CPU is currently in STOP mode
    eSUSPEND = 3, // CPU is currently in SUSPEND mode
  };
  
  enum class eCPU_MODE_PREVIOUS : uint32_t {
    eRUN = 0, // CPU was previously in RUN mode
    eWAIT = 1, // CPU was previously in WAIT mode
    eSTOP = 2, // CPU was previously in STOP mode
    eSUSPEND = 3, // CPU was previously in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU_MODE_CURRENT CPU_MODE_CURRENT : 2;
    eCPU_MODE_PREVIOUS CPU_MODE_PREVIOUS : 2;
    uint32_t _reserved_end : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_MODE_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_MODE_STAT &Instance() { return *reinterpret_cast<volatile CM_MODE_STAT*>(0x40C00014); }
};

// CM IRQ0~31 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_0 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_0_31 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_0 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_0*>(0x40C00100); }
};

// CM IRQ32~63 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_1 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_32_63 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_1 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_1*>(0x40C00104); }
};

// CM IRQ64~95 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_2 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_64_95 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_2 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_2*>(0x40C00108); }
};

// CM IRQ96~127 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_3 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_96_127 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_3 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_3*>(0x40C0010C); }
};

// CM IRQ128~159 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_4 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_128_159 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_4 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_4*>(0x40C00110); }
};

// CM IRQ160~191 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_5 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_160_191 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_5 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_5*>(0x40C00114); }
};

// CM IRQ192~223 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_6 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_192_223 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_6 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_6*>(0x40C00118); }
};

// CM IRQ224~255 wakeup mask
//
union CM_IRQ_WAKEUP_MASK_7 {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_WAKEUP_MASK_224_255 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_MASK_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_MASK_7 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_MASK_7*>(0x40C0011C); }
};

// CM non-irq wakeup mask
//
union CM_NON_IRQ_WAKEUP_MASK {
  
  enum class eEVENT_WAKEUP_MASK : uint32_t {
    eb1 = 1, // The event cannot wakeup CPU platform
  };
  
  // Bit field definition.
  struct {
    eEVENT_WAKEUP_MASK EVENT_WAKEUP_MASK : 1;
    uint32_t DEBUG_WAKEUP_MASK : 1;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_NON_IRQ_WAKEUP_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile CM_NON_IRQ_WAKEUP_MASK &Instance() { return *reinterpret_cast<volatile CM_NON_IRQ_WAKEUP_MASK*>(0x40C00140); }
};

// CM IRQ0~31 wakeup status
//
union CM_IRQ_WAKEUP_STAT_0 {
  
  enum class eIRQ_WAKEUP_STAT_0_31 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_STAT_0_31 IRQ_WAKEUP_STAT_0_31 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_0 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_0*>(0x40C00150); }
};

// CM IRQ32~63 wakeup status
//
union CM_IRQ_WAKEUP_STAT_1 {
  
  enum class eIRQ_WAKEUP_STAT_32_63 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_STAT_32_63 IRQ_WAKEUP_STAT_32_63 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_1 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_1*>(0x40C00154); }
};

// CM IRQ64~95 wakeup status
//
union CM_IRQ_WAKEUP_STAT_2 {
  
  enum class eIRQ_WAKEUP_STAT_64_95 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_STAT_64_95 IRQ_WAKEUP_STAT_64_95 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_2 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_2*>(0x40C00158); }
};

// CM IRQ96~127 wakeup status
//
union CM_IRQ_WAKEUP_STAT_3 {
  
  enum class eIRQ_WAKEUP_STAT_96_127 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_STAT_96_127 IRQ_WAKEUP_STAT_96_127 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_3 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_3*>(0x40C0015C); }
};

// CM IRQ128~159 wakeup status
//
union CM_IRQ_WAKEUP_STAT_4 {
  
  enum class eIRQ_WAKEUP_STAT_128_159 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_STAT_128_159 IRQ_WAKEUP_STAT_128_159 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_4 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_4*>(0x40C00160); }
};

// CM IRQ160~191 wakeup status
//
union CM_IRQ_WAKEUP_STAT_5 {
  
  enum class eIRQ_WAKEUP_STAT_160_191 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_STAT_160_191 IRQ_WAKEUP_STAT_160_191 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_5 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_5*>(0x40C00164); }
};

// CM IRQ192~223 wakeup status
//
union CM_IRQ_WAKEUP_STAT_6 {
  
  enum class eIRQ_WAKEUP_STAT_192_223 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_STAT_192_223 IRQ_WAKEUP_STAT_192_223 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_6 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_6*>(0x40C00168); }
};

// CM IRQ224~255 wakeup status
//
union CM_IRQ_WAKEUP_STAT_7 {
  
  enum class eIRQ_WAKEUP_MASK_224_255 : uint32_t {
    eb0 = 0, // None
    eb1 = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    eIRQ_WAKEUP_MASK_224_255 IRQ_WAKEUP_MASK_224_255 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_IRQ_WAKEUP_STAT_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_IRQ_WAKEUP_STAT_7 &Instance() { return *reinterpret_cast<volatile CM_IRQ_WAKEUP_STAT_7*>(0x40C0016C); }
};

// CM non-irq wakeup status
//
union CM_NON_IRQ_WAKEUP_STAT {
  
  enum class eEVENT_WAKEUP_STAT : uint32_t {
    eb1 = 1, // Interrupt is asserting (pending)
  };
  
  // Bit field definition.
  struct {
    eEVENT_WAKEUP_STAT EVENT_WAKEUP_STAT : 1;
    uint32_t DEBUG_WAKEUP_STAT : 1;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_NON_IRQ_WAKEUP_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_NON_IRQ_WAKEUP_STAT &Instance() { return *reinterpret_cast<volatile CM_NON_IRQ_WAKEUP_STAT*>(0x40C00190); }
};

// CM sleep SSAR control
//
union CM_SLEEP_SSAR_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SLEEP_SSAR_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_SLEEP_SSAR_CTRL &Instance() { return *reinterpret_cast<volatile CM_SLEEP_SSAR_CTRL*>(0x40C00200); }
};

// CM sleep LPCG control
//
union CM_SLEEP_LPCG_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SLEEP_LPCG_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_SLEEP_LPCG_CTRL &Instance() { return *reinterpret_cast<volatile CM_SLEEP_LPCG_CTRL*>(0x40C00208); }
};

// CM sleep PLL control
//
union CM_SLEEP_PLL_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SLEEP_PLL_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_SLEEP_PLL_CTRL &Instance() { return *reinterpret_cast<volatile CM_SLEEP_PLL_CTRL*>(0x40C00210); }
};

// CM sleep isolation control
//
union CM_SLEEP_ISO_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SLEEP_ISO_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_SLEEP_ISO_CTRL &Instance() { return *reinterpret_cast<volatile CM_SLEEP_ISO_CTRL*>(0x40C00218); }
};

// CM sleep reset control
//
union CM_SLEEP_RESET_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SLEEP_RESET_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_SLEEP_RESET_CTRL &Instance() { return *reinterpret_cast<volatile CM_SLEEP_RESET_CTRL*>(0x40C00220); }
};

// CM sleep power control
//
union CM_SLEEP_POWER_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SLEEP_POWER_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_SLEEP_POWER_CTRL &Instance() { return *reinterpret_cast<volatile CM_SLEEP_POWER_CTRL*>(0x40C00228); }
};

// CM wakeup power control
//
union CM_WAKEUP_POWER_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_WAKEUP_POWER_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_WAKEUP_POWER_CTRL &Instance() { return *reinterpret_cast<volatile CM_WAKEUP_POWER_CTRL*>(0x40C00290); }
};

// CM wakeup reset control
//
union CM_WAKEUP_RESET_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_WAKEUP_RESET_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_WAKEUP_RESET_CTRL &Instance() { return *reinterpret_cast<volatile CM_WAKEUP_RESET_CTRL*>(0x40C00298); }
};

// CM wakeup isolation control
//
union CM_WAKEUP_ISO_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_WAKEUP_ISO_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_WAKEUP_ISO_CTRL &Instance() { return *reinterpret_cast<volatile CM_WAKEUP_ISO_CTRL*>(0x40C002A0); }
};

// CM wakeup PLL control
//
union CM_WAKEUP_PLL_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_WAKEUP_PLL_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_WAKEUP_PLL_CTRL &Instance() { return *reinterpret_cast<volatile CM_WAKEUP_PLL_CTRL*>(0x40C002A8); }
};

// CM wakeup LPCG control
//
union CM_WAKEUP_LPCG_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_WAKEUP_LPCG_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_WAKEUP_LPCG_CTRL &Instance() { return *reinterpret_cast<volatile CM_WAKEUP_LPCG_CTRL*>(0x40C002B0); }
};

// CM wakeup SSAR control
//
union CM_WAKEUP_SSAR_CTRL {
  
  enum class eCNT_MODE : uint32_t {
    eb0 = 0, // Counter disable mode: not use step counter, step completes once receiving step_done
    eb1 = 1, // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb2 = 2, // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb3 = 3, // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
  };
  
  // Bit field definition.
  struct {
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_1 : 12;
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_WAKEUP_SSAR_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile CM_WAKEUP_SSAR_CTRL &Instance() { return *reinterpret_cast<volatile CM_WAKEUP_SSAR_CTRL*>(0x40C002B8); }
};

// CM Setpoint Control
//
union CM_SP_CTRL {
  
  enum class eCPU_SP_WAKEUP_SEL : uint32_t {
    eb0 = 0, // Request SP transition to CPU_SP_WAKEUP
    eb1 = 1, // Request SP transition to the Setpoint when the sleep event happens, which is captured in CPU_SP_PREVIOUS
  };
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP_RUN_EN : 1;
    uint32_t CPU_SP_RUN : 4;
    uint32_t CPU_SP_SLEEP_EN : 1;
    uint32_t CPU_SP_SLEEP : 4;
    uint32_t CPU_SP_WAKEUP_EN : 1;
    uint32_t CPU_SP_WAKEUP : 4;
    eCPU_SP_WAKEUP_SEL CPU_SP_WAKEUP_SEL : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_SP_CTRL &Instance() { return *reinterpret_cast<volatile CM_SP_CTRL*>(0x40C00300); }
};

// CM Setpoint Status
//
union CM_SP_STAT {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP_CURRENT : 4;
    uint32_t CPU_SP_PREVIOUS : 4;
    uint32_t CPU_SP_TARGET : 4;
    uint32_t _reserved_end : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_SP_STAT &Instance() { return *reinterpret_cast<volatile CM_SP_STAT*>(0x40C00304); }
};

// CM Run Mode Setpoint Allowed
//
union CM_RUN_MODE_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_RUN_MODE_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_RUN_MODE_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_RUN_MODE_MAPPING &Instance() { return *reinterpret_cast<volatile CM_RUN_MODE_MAPPING*>(0x40C00310); }
};

// CM Wait Mode Setpoint Allowed
//
union CM_WAIT_MODE_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_WAIT_MODE_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_WAIT_MODE_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_WAIT_MODE_MAPPING &Instance() { return *reinterpret_cast<volatile CM_WAIT_MODE_MAPPING*>(0x40C00314); }
};

// CM Stop Mode Setpoint Allowed
//
union CM_STOP_MODE_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_STOP_MODE_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_STOP_MODE_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_STOP_MODE_MAPPING &Instance() { return *reinterpret_cast<volatile CM_STOP_MODE_MAPPING*>(0x40C00318); }
};

// CM Suspend Mode Setpoint Allowed
//
union CM_SUSPEND_MODE_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SUSPEND_MODE_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SUSPEND_MODE_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SUSPEND_MODE_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SUSPEND_MODE_MAPPING*>(0x40C0031C); }
};

// CM Setpoint 0 Mapping
//
union CM_SP0_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP0_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP0_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP0_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP0_MAPPING*>(0x40C00320); }
};

// CM Setpoint 1 Mapping
//
union CM_SP1_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP1_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP1_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP1_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP1_MAPPING*>(0x40C00324); }
};

// CM Setpoint 2 Mapping
//
union CM_SP2_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP2_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP2_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP2_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP2_MAPPING*>(0x40C00328); }
};

// CM Setpoint 3 Mapping
//
union CM_SP3_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP3_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP3_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP3_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP3_MAPPING*>(0x40C0032C); }
};

// CM Setpoint 4 Mapping
//
union CM_SP4_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP4_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP4_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP4_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP4_MAPPING*>(0x40C00330); }
};

// CM Setpoint 5 Mapping
//
union CM_SP5_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP5_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP5_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP5_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP5_MAPPING*>(0x40C00334); }
};

// CM Setpoint 6 Mapping
//
union CM_SP6_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP6_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP6_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP6_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP6_MAPPING*>(0x40C00338); }
};

// CM Setpoint 7 Mapping
//
union CM_SP7_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP7_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP7_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP7_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP7_MAPPING*>(0x40C0033C); }
};

// CM Setpoint 8 Mapping
//
union CM_SP8_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP8_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP8_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP8_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP8_MAPPING*>(0x40C00340); }
};

// CM Setpoint 9 Mapping
//
union CM_SP9_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP9_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP9_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP9_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP9_MAPPING*>(0x40C00344); }
};

// CM Setpoint 10 Mapping
//
union CM_SP10_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP10_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP10_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP10_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP10_MAPPING*>(0x40C00348); }
};

// CM Setpoint 11 Mapping
//
union CM_SP11_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP11_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP11_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP11_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP11_MAPPING*>(0x40C0034C); }
};

// CM Setpoint 12 Mapping
//
union CM_SP12_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP12_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP12_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP12_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP12_MAPPING*>(0x40C00350); }
};

// CM Setpoint 13 Mapping
//
union CM_SP13_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP13_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP13_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP13_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP13_MAPPING*>(0x40C00354); }
};

// CM Setpoint 14 Mapping
//
union CM_SP14_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP14_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP14_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP14_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP14_MAPPING*>(0x40C00358); }
};

// CM Setpoint 15 Mapping
//
union CM_SP15_MAPPING {
  
  // Bit field definition.
  struct {
    uint32_t CPU_SP15_MAPPING : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_SP15_MAPPING() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile CM_SP15_MAPPING &Instance() { return *reinterpret_cast<volatile CM_SP15_MAPPING*>(0x40C0035C); }
};

// CM standby control
//
union CM_STBY_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t STBY_WAIT : 1;
    uint32_t STBY_STOP : 1;
    uint32_t STBY_SUSPEND : 1;
    uint32_t _reserved_3 : 13;
    uint32_t STBY_SLEEP_BUSY : 1;
    uint32_t STBY_WAKEUP_BUSY : 1;
    uint32_t _reserved_end : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM_STBY_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM_STBY_CTRL &Instance() { return *reinterpret_cast<volatile CM_STBY_CTRL*>(0x40C00380); }
};


} // namespace nGPC_CPU_MODE_CTRL_0