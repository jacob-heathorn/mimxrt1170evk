#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// GPC_STBY
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nGPC_STBY_CTRL {


// Standby Authentication Control
union STBY_AUTHEN_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 20;
    // read-write - Configuration lock
    uint32_t LOCK_CFG : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STBY_AUTHEN_CTRL &ref() { return *reinterpret_cast<volatile STBY_AUTHEN_CTRL*>(0x40C02804); }
};

// STBY Misc
union STBY_MISC {
  
  // Bit field definition.
  struct {
    // read-write - Force CPU0 requesting standby mode
    uint32_t FORCE_CPU0_STBY : 1;
    // read-write - Force CPU0 requesting standby mode
    uint32_t FORCE_CPU1_STBY : 1;
    // read-write - Force CPU2 requesting standby mode
    uint32_t FORCE_CPU2_STBY : 1;
    // read-write - Force CPU3 requesting standby mode
    uint32_t FORCE_CPU3_STBY : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STBY_MISC &ref() { return *reinterpret_cast<volatile STBY_MISC*>(0x40C0280C); }
};

// STBY lpcg_in control
union STBY_LPCG_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_LPCG_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_LPCG_IN_CTRL*>(0x40C028F0); }
};

// STBY pll_in control
union STBY_PLL_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_PLL_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_PLL_IN_CTRL*>(0x40C02900); }
};

// STBY bias_in control
union STBY_BIAS_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_BIAS_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_BIAS_IN_CTRL*>(0x40C02910); }
};

// STBY pldo_in control
union STBY_PLDO_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_PLDO_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_PLDO_IN_CTRL*>(0x40C02920); }
};

// STBY bandgap_in control
union STBY_BANDGAP_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_BANDGAP_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_BANDGAP_IN_CTRL*>(0x40C02928); }
};

// STBY ldo_in control
union STBY_LDO_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_LDO_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_LDO_IN_CTRL*>(0x40C02930); }
};

// STBY dcdc_in control
union STBY_DCDC_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_DCDC_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_DCDC_IN_CTRL*>(0x40C02940); }
};

// STBY PMIC in control
union STBY_PMIC_IN_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_PMIC_IN_CTRL &ref() { return *reinterpret_cast<volatile STBY_PMIC_IN_CTRL*>(0x40C02950); }
};

// STBY PMIC out control
union STBY_PMIC_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_PMIC_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_PMIC_OUT_CTRL*>(0x40C02A00); }
};

// STBY DCDC out control
union STBY_DCDC_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_DCDC_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_DCDC_OUT_CTRL*>(0x40C02A10); }
};

// STBY LDO out control
union STBY_LDO_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_LDO_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_LDO_OUT_CTRL*>(0x40C02A20); }
};

// STBY bandgap out control
union STBY_BANDGAP_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_BANDGAP_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_BANDGAP_OUT_CTRL*>(0x40C02A30); }
};

// STBY pldo out control
union STBY_PLDO_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_PLDO_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_PLDO_OUT_CTRL*>(0x40C02A38); }
};

// STBY bias out control
union STBY_BIAS_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_BIAS_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_BIAS_OUT_CTRL*>(0x40C02A40); }
};

// STBY PLL out control
union STBY_PLL_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_PLL_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_PLL_OUT_CTRL*>(0x40C02A50); }
};

// STBY LPCG out control
union STBY_LPCG_OUT_CTRL {
  
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

  inline void Reset() volatile { this->value = 0x00000004; }
  static inline volatile STBY_LPCG_OUT_CTRL &ref() { return *reinterpret_cast<volatile STBY_LPCG_OUT_CTRL*>(0x40C02A60); }
};


} // namespace nGPC_STBY_CTRL