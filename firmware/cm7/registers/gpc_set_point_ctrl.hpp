#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// GPC_SP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nGPC_SET_POINT_CTRL {


// SP Authentication Control
union SP_AUTHEN_CTRL {
  
  // Allow user mode access
  enum class eUSER : uint32_t {
    // Allow only privilege mode to access setpoint control registers
    eb0 = 0,
    // Allow both privilege and user mode to access setpoint control registers
    eb1 = 1,
  };
  
  // Allow non-secure mode access
  enum class eNONSECURE : uint32_t {
    // Allow only secure mode to access setpoint control registers
    eb0 = 0,
    // Allow both secure and non-secure mode to access setpoint control registers
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Allow user mode access
    eUSER USER : 1;
    // read-write - Allow non-secure mode access
    eNONSECURE NONSECURE : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Lock NONSECURE and USER
    uint32_t LOCK_SETTING : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Domain ID white list
    uint32_t WHITE_LIST : 4;
    // read-write - White list lock
    uint32_t LOCK_LIST : 1;
    uint32_t _reserved_2 : 7;
    // read-write - Configuration lock
    uint32_t LOCK_CFG : 1;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_AUTHEN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000F00; }
  static inline volatile SP_AUTHEN_CTRL &Instance() { return *reinterpret_cast<volatile SP_AUTHEN_CTRL*>(0x40C02004); }
};

// SP Interrupt Control
union SP_INT_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - no_allowed_set_point interrupt enable
    uint32_t NO_ALLOWED_SP_INT_EN : 1;
    // read-write - no_allowed_set_point interrupt
    uint32_t NO_ALLOWED_SP_INT : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_INT_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile SP_INT_CTRL &Instance() { return *reinterpret_cast<volatile SP_INT_CTRL*>(0x40C02008); }
};

// CPU SP Request
union SP_CPU_REQ {
  
  // Bit field definition.
  struct {
    // read-only - Setpoint requested by CPU0
    uint32_t SP_REQ_CPU0 : 4;
    // read-only - Setpoint requested by CPU1
    uint32_t SP_REQ_CPU1 : 4;
    // read-only - Setpoint requested by CPU2
    uint32_t SP_REQ_CPU2 : 4;
    // read-only - Setpoint requested by CPU3
    uint32_t SP_REQ_CPU3 : 4;
    // read-only - CPU0 Setpoint accepted by SP controller
    uint32_t SP_ACCEPTED_CPU0 : 4;
    // read-only - CPU1 Setpoint accepted by SP controller
    uint32_t SP_ACCEPTED_CPU1 : 4;
    // read-only - CPU2 Setpoint accepted by SP controller
    uint32_t SP_ACCEPTED_CPU2 : 4;
    // read-only - CPU3 Setpoint accepted by SP controller
    uint32_t SP_ACCEPTED_CPU3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_CPU_REQ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SP_CPU_REQ &Instance() { return *reinterpret_cast<volatile SP_CPU_REQ*>(0x40C02010); }
};

// SP System Status
union SP_SYS_STAT {
  
  // Bit field definition.
  struct {
    // read-only - Allowed Setpoints by all current CPU Setpoint requests
    uint32_t SYS_SP_ALLOWED : 16;
    // read-only - The Setpoint chosen as the target setpoint
    uint32_t SYS_SP_TARGET : 4;
    // read-only - Current Setpoint, only valid when not SP trans busy
    uint32_t SYS_SP_CURRENT : 4;
    // read-only - Previous Setpoint, only valid when not SP trans busy
    uint32_t SYS_SP_PREVIOUS : 4;
    uint32_t _reserved_0 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_SYS_STAT() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile SP_SYS_STAT &Instance() { return *reinterpret_cast<volatile SP_SYS_STAT*>(0x40C02014); }
};

// SP ROSC Control
union SP_ROSC_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Allow shutting off the ROSC
    uint32_t SP_ALLOW_ROSC_OFF : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_ROSC_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SP_ROSC_CTRL &Instance() { return *reinterpret_cast<volatile SP_ROSC_CTRL*>(0x40C0201C); }
};

// SP0~7 Priority
union SP_PRIORITY_0_7 {
  
  // Bit field definition.
  struct {
    // read-write - priority of Setpoint 0
    uint32_t SYS_SP0_PRIORITY : 4;
    // read-write - priority of Setpoint 1
    uint32_t SYS_SP1_PRIORITY : 4;
    // read-write - priority of Setpoint 2
    uint32_t SYS_SP2_PRIORITY : 4;
    // read-write - priority of Setpoint 3
    uint32_t SYS_SP3_PRIORITY : 4;
    // read-write - priority of Setpoint 4
    uint32_t SYS_SP4_PRIORITY : 4;
    // read-write - priority of Setpoint 5
    uint32_t SYS_SP5_PRIORITY : 4;
    // read-write - priority of Setpoint 6
    uint32_t SYS_SP6_PRIORITY : 4;
    // read-write - priority of Setpoint 7
    uint32_t SYS_SP7_PRIORITY : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_PRIORITY_0_7() = delete;
  inline void Reset() volatile { this->value = 0x76543210; }
  static inline volatile SP_PRIORITY_0_7 &Instance() { return *reinterpret_cast<volatile SP_PRIORITY_0_7*>(0x40C02040); }
};

// SP8~15 Priority
union SP_PRIORITY_8_15 {
  
  // Bit field definition.
  struct {
    // read-write - priority of Setpoint 8
    uint32_t SYS_SP8_PRIORITY : 4;
    // read-write - priority of Setpoint 9
    uint32_t SYS_SP9_PRIORITY : 4;
    // read-write - priority of Setpoint 10
    uint32_t SYS_SP10_PRIORITY : 4;
    // read-write - priority of Setpoint 11
    uint32_t SYS_SP11_PRIORITY : 4;
    // read-write - priority of Setpoint 12
    uint32_t SYS_SP12_PRIORITY : 4;
    // read-write - priority of Setpoint 13
    uint32_t SYS_SP13_PRIORITY : 4;
    // read-write - priority of Setpoint 14
    uint32_t SYS_SP14_PRIORITY : 4;
    // read-write - priority of Setpoint 15
    uint32_t SYS_SP15_PRIORITY : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_PRIORITY_8_15() = delete;
  inline void Reset() volatile { this->value = 0xFEDCBA98; }
  static inline volatile SP_PRIORITY_8_15 &Instance() { return *reinterpret_cast<volatile SP_PRIORITY_8_15*>(0x40C02044); }
};

// SP SSAR save control
union SP_SSAR_SAVE_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_SSAR_SAVE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_SSAR_SAVE_CTRL &Instance() { return *reinterpret_cast<volatile SP_SSAR_SAVE_CTRL*>(0x40C02100); }
};

// SP LPCG off control
union SP_LPCG_OFF_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_LPCG_OFF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_LPCG_OFF_CTRL &Instance() { return *reinterpret_cast<volatile SP_LPCG_OFF_CTRL*>(0x40C02110); }
};

// SP group down control
union SP_GROUP_DOWN_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_GROUP_DOWN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_GROUP_DOWN_CTRL &Instance() { return *reinterpret_cast<volatile SP_GROUP_DOWN_CTRL*>(0x40C02120); }
};

// SP root down control
union SP_ROOT_DOWN_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_ROOT_DOWN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_ROOT_DOWN_CTRL &Instance() { return *reinterpret_cast<volatile SP_ROOT_DOWN_CTRL*>(0x40C02130); }
};

// SP PLL off control
union SP_PLL_OFF_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_PLL_OFF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_PLL_OFF_CTRL &Instance() { return *reinterpret_cast<volatile SP_PLL_OFF_CTRL*>(0x40C02140); }
};

// SP ISO on control
union SP_ISO_ON_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_ISO_ON_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_ISO_ON_CTRL &Instance() { return *reinterpret_cast<volatile SP_ISO_ON_CTRL*>(0x40C02150); }
};

// SP reset early control
union SP_RESET_EARLY_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_RESET_EARLY_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_RESET_EARLY_CTRL &Instance() { return *reinterpret_cast<volatile SP_RESET_EARLY_CTRL*>(0x40C02160); }
};

// SP power off control
union SP_POWER_OFF_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_POWER_OFF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_POWER_OFF_CTRL &Instance() { return *reinterpret_cast<volatile SP_POWER_OFF_CTRL*>(0x40C02170); }
};

// SP bias off control
union SP_BIAS_OFF_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_BIAS_OFF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_BIAS_OFF_CTRL &Instance() { return *reinterpret_cast<volatile SP_BIAS_OFF_CTRL*>(0x40C02180); }
};

// SP bandgap and PLL_LDO off control
union SP_BG_PLDO_OFF_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_BG_PLDO_OFF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_BG_PLDO_OFF_CTRL &Instance() { return *reinterpret_cast<volatile SP_BG_PLDO_OFF_CTRL*>(0x40C02190); }
};

// SP LDO pre control
union SP_LDO_PRE_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_LDO_PRE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_LDO_PRE_CTRL &Instance() { return *reinterpret_cast<volatile SP_LDO_PRE_CTRL*>(0x40C021A0); }
};

// SP DCDC down control
union SP_DCDC_DOWN_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_DCDC_DOWN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_DCDC_DOWN_CTRL &Instance() { return *reinterpret_cast<volatile SP_DCDC_DOWN_CTRL*>(0x40C021B0); }
};

// SP DCDC up control
union SP_DCDC_UP_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_DCDC_UP_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_DCDC_UP_CTRL &Instance() { return *reinterpret_cast<volatile SP_DCDC_UP_CTRL*>(0x40C02200); }
};

// SP LDO post control
union SP_LDO_POST_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_LDO_POST_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_LDO_POST_CTRL &Instance() { return *reinterpret_cast<volatile SP_LDO_POST_CTRL*>(0x40C02210); }
};

// SP bandgap and PLL_LDO on control
union SP_BG_PLDO_ON_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_BG_PLDO_ON_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_BG_PLDO_ON_CTRL &Instance() { return *reinterpret_cast<volatile SP_BG_PLDO_ON_CTRL*>(0x40C02220); }
};

// SP bias on control
union SP_BIAS_ON_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_BIAS_ON_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_BIAS_ON_CTRL &Instance() { return *reinterpret_cast<volatile SP_BIAS_ON_CTRL*>(0x40C02230); }
};

// SP power on control
union SP_POWER_ON_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_POWER_ON_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_POWER_ON_CTRL &Instance() { return *reinterpret_cast<volatile SP_POWER_ON_CTRL*>(0x40C02240); }
};

// SP reset late control
union SP_RESET_LATE_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_RESET_LATE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_RESET_LATE_CTRL &Instance() { return *reinterpret_cast<volatile SP_RESET_LATE_CTRL*>(0x40C02250); }
};

// SP ISO off control
union SP_ISO_OFF_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_ISO_OFF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_ISO_OFF_CTRL &Instance() { return *reinterpret_cast<volatile SP_ISO_OFF_CTRL*>(0x40C02260); }
};

// SP PLL on control
union SP_PLL_ON_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_PLL_ON_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_PLL_ON_CTRL &Instance() { return *reinterpret_cast<volatile SP_PLL_ON_CTRL*>(0x40C02270); }
};

// SP root up control
union SP_ROOT_UP_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_ROOT_UP_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_ROOT_UP_CTRL &Instance() { return *reinterpret_cast<volatile SP_ROOT_UP_CTRL*>(0x40C02280); }
};

// SP group up control
union SP_GROUP_UP_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_GROUP_UP_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_GROUP_UP_CTRL &Instance() { return *reinterpret_cast<volatile SP_GROUP_UP_CTRL*>(0x40C02290); }
};

// SP LPCG on control
union SP_LPCG_ON_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_LPCG_ON_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_LPCG_ON_CTRL &Instance() { return *reinterpret_cast<volatile SP_LPCG_ON_CTRL*>(0x40C022A0); }
};

// SP SSAR restore control
union SP_SSAR_RESTORE_CTRL {
  
  // Count mode
  enum class eCNT_MODE : uint32_t {
    // Counter disable mode: not use step counter, step completes once receiving step_done
    eb0 = 0,
    // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
    eb1 = 1,
    // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
    eb2 = 2,
    // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
    eb3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Step count, useage is depending on CNT_MODE
    uint32_t STEP_CNT : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Count mode
    eCNT_MODE CNT_MODE : 2;
    uint32_t _reserved_1 : 1;
    // read-write - Disable this step
    uint32_t DISABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SP_SSAR_RESTORE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile SP_SSAR_RESTORE_CTRL &Instance() { return *reinterpret_cast<volatile SP_SSAR_RESTORE_CTRL*>(0x40C022B0); }
};


} // namespace nGPC_SET_POINT_CTRL