#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nANADIG_LDO_SNVS {


// PMU_LDO_LPSR_ANA_REGISTER
union PMU_LDO_LPSR_ANA {
  
  // LPSR_ANA_CONTROL_MODE
  enum class eLPSR_ANA_CONTROL_MODE : uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  
  // Track Mode Enable
  enum class eTRACK_MODE_EN : uint32_t {
    // Normal use
    eNORMAL = 0,
    // Switch preparation
    eSWITCH = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - reg_lp_en
    uint32_t REG_LP_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - reg_disable
    uint32_t REG_DISABLE : 1;
    // read-write - pull_down_2ma_en
    uint32_t PULL_DOWN_2MA_EN : 1;
    // read-write - LPSR_ANA_CONTROL_MODE
    eLPSR_ANA_CONTROL_MODE LPSR_ANA_CONTROL_MODE : 1;
    // read-write - bypass_mode_en
    uint32_t BYPASS_MODE_EN : 1;
    // read-write - standby_en
    uint32_t STANDBY_EN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - always_4ma_pulldown_en
    uint32_t ALWAYS_4MA_PULLDOWN_EN : 1;
    uint32_t _reserved_2 : 10;
    // read-write - Track Mode Enable
    eTRACK_MODE_EN TRACK_MODE_EN : 1;
    // read-write - pull_down_20ua_en
    uint32_t PULL_DOWN_20UA_EN : 1;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000108; }
  static inline volatile PMU_LDO_LPSR_ANA &ref() { return *reinterpret_cast<volatile PMU_LDO_LPSR_ANA*>(0x40C84510); }
};

// PMU_LDO_LPSR_DIG_2_REGISTER
union PMU_LDO_LPSR_DIG_2 {
  
  // Bit field definition.
  struct {
    // read-write - voltage_step_inc
    uint32_t VOLTAGE_STEP_INC : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile PMU_LDO_LPSR_DIG_2 &ref() { return *reinterpret_cast<volatile PMU_LDO_LPSR_DIG_2*>(0x40C84520); }
};

// PMU_LDO_LPSR_DIG_REGISTER
union PMU_LDO_LPSR_DIG {
  
  // LPSR_DIG_CONTROL_MODE
  enum class eLPSR_DIG_CONTROL_MODE : uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  
  // VOLTAGE_SELECT
  enum class eVOLTAGE_SELECT : uint32_t {
    // Stable Voltage (range)
    ebitval0 = 0,
    // Stable Voltage (range)
    ebitval1 = 1,
    // Stable Voltage (range)
    ebitval2 = 2,
    // Stable Voltage (range)
    ebitval3 = 3,
    // Stable Voltage (range)
    ebitval4 = 4,
    // Stable Voltage (range)
    ebitval5 = 5,
    // Stable Voltage (range)
    ebitval6 = 6,
    // Stable Voltage (range)
    ebitval7 = 7,
    // Stable Voltage (range)
    ebitval8 = 8,
    // Stable Voltage (range)
    ebitval9 = 9,
    // Stable Voltage (range)
    ebitval10 = 10,
    // Stable Voltage (range)
    ebitval11 = 11,
    // Stable Voltage (range)
    ebitval12 = 12,
    // Stable Voltage (range)
    ebitval13 = 13,
    // Stable Voltage (range)
    ebitval14 = 14,
    // Stable Voltage (range)
    ebitval15 = 15,
    // Stable Voltage (range)
    ebitval16 = 16,
    // Stable Voltage (range)
    ebitval17 = 17,
    // Stable Voltage (range)
    ebitval18 = 18,
    // Stable Voltage (range)
    ebitval19 = 19,
    // Stable Voltage (range)
    ebitval20 = 20,
    // Stable Voltage (range)
    ebitval21 = 21,
    // Stable Voltage (range)
    ebitval22 = 22,
    // Stable Voltage (range)
    ebitval23 = 23,
    // Stable Voltage (range)
    ebitval24 = 24,
    // Stable Voltage (range)
    ebitval25 = 25,
    // Stable Voltage (range)
    ebitval26 = 26,
    // Stable Voltage (range)
    ebitval27 = 27,
    // Stable Voltage (range)
    ebitval28 = 28,
    // Stable Voltage (range)
    ebitval29 = 29,
    // Stable Voltage (range)
    ebitval30 = 30,
    // Stable Voltage (range)
    ebitval31 = 31,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - ENABLE_ILIMIT
    uint32_t REG_EN : 1;
    uint32_t _reserved_1 : 2;
    // read-write - LPSR_DIG_CONTROL_MODE
    eLPSR_DIG_CONTROL_MODE LPSR_DIG_CONTROL_MODE : 1;
    // read-write - standby_en
    uint32_t STANDBY_EN : 1;
    uint32_t _reserved_2 : 10;
    // read-write - tracking_mode
    uint32_t TRACKING_MODE : 1;
    // read-write - bypass_mode
    uint32_t BYPASS_MODE : 1;
    uint32_t _reserved_3 : 1;
    // read-write - VOLTAGE_SELECT
    eVOLTAGE_SELECT VOLTAGE_SELECT : 5;
    uint32_t _reserved_4 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x01301C05; }
  static inline volatile PMU_LDO_LPSR_DIG &ref() { return *reinterpret_cast<volatile PMU_LDO_LPSR_DIG*>(0x40C84530); }
};


} // namespace nANADIG_LDO_SNVS