#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DMAMUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nDMAMUX0 {


// Channel index Configuration Register
union CHCFG_0 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_0 &ref() { return *reinterpret_cast<volatile CHCFG_0*>(0x40074000); }
};
// Channel index Configuration Register
union CHCFG_1 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_1 &ref() { return *reinterpret_cast<volatile CHCFG_1*>(0x40074004); }
};
// Channel index Configuration Register
union CHCFG_2 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_2 &ref() { return *reinterpret_cast<volatile CHCFG_2*>(0x40074008); }
};
// Channel index Configuration Register
union CHCFG_3 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_3 &ref() { return *reinterpret_cast<volatile CHCFG_3*>(0x4007400C); }
};
// Channel index Configuration Register
union CHCFG_4 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_4 &ref() { return *reinterpret_cast<volatile CHCFG_4*>(0x40074010); }
};
// Channel index Configuration Register
union CHCFG_5 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_5 &ref() { return *reinterpret_cast<volatile CHCFG_5*>(0x40074014); }
};
// Channel index Configuration Register
union CHCFG_6 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_6 &ref() { return *reinterpret_cast<volatile CHCFG_6*>(0x40074018); }
};
// Channel index Configuration Register
union CHCFG_7 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_7 &ref() { return *reinterpret_cast<volatile CHCFG_7*>(0x4007401C); }
};
// Channel index Configuration Register
union CHCFG_8 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_8 &ref() { return *reinterpret_cast<volatile CHCFG_8*>(0x40074020); }
};
// Channel index Configuration Register
union CHCFG_9 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_9 &ref() { return *reinterpret_cast<volatile CHCFG_9*>(0x40074024); }
};
// Channel index Configuration Register
union CHCFG_10 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_10 &ref() { return *reinterpret_cast<volatile CHCFG_10*>(0x40074028); }
};
// Channel index Configuration Register
union CHCFG_11 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_11 &ref() { return *reinterpret_cast<volatile CHCFG_11*>(0x4007402C); }
};
// Channel index Configuration Register
union CHCFG_12 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_12 &ref() { return *reinterpret_cast<volatile CHCFG_12*>(0x40074030); }
};
// Channel index Configuration Register
union CHCFG_13 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_13 &ref() { return *reinterpret_cast<volatile CHCFG_13*>(0x40074034); }
};
// Channel index Configuration Register
union CHCFG_14 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_14 &ref() { return *reinterpret_cast<volatile CHCFG_14*>(0x40074038); }
};
// Channel index Configuration Register
union CHCFG_15 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_15 &ref() { return *reinterpret_cast<volatile CHCFG_15*>(0x4007403C); }
};
// Channel index Configuration Register
union CHCFG_16 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_16 &ref() { return *reinterpret_cast<volatile CHCFG_16*>(0x40074040); }
};
// Channel index Configuration Register
union CHCFG_17 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_17 &ref() { return *reinterpret_cast<volatile CHCFG_17*>(0x40074044); }
};
// Channel index Configuration Register
union CHCFG_18 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_18 &ref() { return *reinterpret_cast<volatile CHCFG_18*>(0x40074048); }
};
// Channel index Configuration Register
union CHCFG_19 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_19 &ref() { return *reinterpret_cast<volatile CHCFG_19*>(0x4007404C); }
};
// Channel index Configuration Register
union CHCFG_20 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_20 &ref() { return *reinterpret_cast<volatile CHCFG_20*>(0x40074050); }
};
// Channel index Configuration Register
union CHCFG_21 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_21 &ref() { return *reinterpret_cast<volatile CHCFG_21*>(0x40074054); }
};
// Channel index Configuration Register
union CHCFG_22 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_22 &ref() { return *reinterpret_cast<volatile CHCFG_22*>(0x40074058); }
};
// Channel index Configuration Register
union CHCFG_23 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_23 &ref() { return *reinterpret_cast<volatile CHCFG_23*>(0x4007405C); }
};
// Channel index Configuration Register
union CHCFG_24 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_24 &ref() { return *reinterpret_cast<volatile CHCFG_24*>(0x40074060); }
};
// Channel index Configuration Register
union CHCFG_25 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_25 &ref() { return *reinterpret_cast<volatile CHCFG_25*>(0x40074064); }
};
// Channel index Configuration Register
union CHCFG_26 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_26 &ref() { return *reinterpret_cast<volatile CHCFG_26*>(0x40074068); }
};
// Channel index Configuration Register
union CHCFG_27 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_27 &ref() { return *reinterpret_cast<volatile CHCFG_27*>(0x4007406C); }
};
// Channel index Configuration Register
union CHCFG_28 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_28 &ref() { return *reinterpret_cast<volatile CHCFG_28*>(0x40074070); }
};
// Channel index Configuration Register
union CHCFG_29 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_29 &ref() { return *reinterpret_cast<volatile CHCFG_29*>(0x40074074); }
};
// Channel index Configuration Register
union CHCFG_30 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_30 &ref() { return *reinterpret_cast<volatile CHCFG_30*>(0x40074078); }
};
// Channel index Configuration Register
union CHCFG_31 {
  
  // DMA Channel Always Enable
  enum class eA_ON : uint32_t {
    // DMA Channel Always ON function is disabled
    eA_ON_0 = 0,
    // DMA Channel Always ON function is enabled
    eA_ON_1 = 1,
  };
  
  // DMA Channel Trigger Enable
  enum class eTRIG : uint32_t {
    // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
    eTRIG_0 = 0,
    // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
    eTRIG_1 = 1,
  };
  
  // DMA Mux Channel Enable
  enum class eENBL : uint32_t {
    // DMA Mux channel is disabled
    eENBL_0 = 0,
    // DMA Mux channel is enabled
    eENBL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Channel Source (Slot Number)
    uint32_t SOURCE : 8;
    uint32_t _reserved_0 : 21;
    // read-write - DMA Channel Always Enable
    eA_ON A_ON : 1;
    // read-write - DMA Channel Trigger Enable
    eTRIG TRIG : 1;
    // read-write - DMA Mux Channel Enable
    eENBL ENBL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CHCFG_31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG_31 &ref() { return *reinterpret_cast<volatile CHCFG_31*>(0x4007407C); }
};


} // namespace nDMAMUX0