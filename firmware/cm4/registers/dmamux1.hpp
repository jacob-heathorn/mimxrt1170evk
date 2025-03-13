#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DMAMUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nDMAMUX1 {


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
  static inline volatile CHCFG_0 &Instance() { return *reinterpret_cast<volatile CHCFG_0*>(0x40C18000); }
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
  static inline volatile CHCFG_1 &Instance() { return *reinterpret_cast<volatile CHCFG_1*>(0x40C18004); }
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
  static inline volatile CHCFG_2 &Instance() { return *reinterpret_cast<volatile CHCFG_2*>(0x40C18008); }
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
  static inline volatile CHCFG_3 &Instance() { return *reinterpret_cast<volatile CHCFG_3*>(0x40C1800C); }
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
  static inline volatile CHCFG_4 &Instance() { return *reinterpret_cast<volatile CHCFG_4*>(0x40C18010); }
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
  static inline volatile CHCFG_5 &Instance() { return *reinterpret_cast<volatile CHCFG_5*>(0x40C18014); }
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
  static inline volatile CHCFG_6 &Instance() { return *reinterpret_cast<volatile CHCFG_6*>(0x40C18018); }
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
  static inline volatile CHCFG_7 &Instance() { return *reinterpret_cast<volatile CHCFG_7*>(0x40C1801C); }
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
  static inline volatile CHCFG_8 &Instance() { return *reinterpret_cast<volatile CHCFG_8*>(0x40C18020); }
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
  static inline volatile CHCFG_9 &Instance() { return *reinterpret_cast<volatile CHCFG_9*>(0x40C18024); }
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
  static inline volatile CHCFG_10 &Instance() { return *reinterpret_cast<volatile CHCFG_10*>(0x40C18028); }
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
  static inline volatile CHCFG_11 &Instance() { return *reinterpret_cast<volatile CHCFG_11*>(0x40C1802C); }
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
  static inline volatile CHCFG_12 &Instance() { return *reinterpret_cast<volatile CHCFG_12*>(0x40C18030); }
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
  static inline volatile CHCFG_13 &Instance() { return *reinterpret_cast<volatile CHCFG_13*>(0x40C18034); }
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
  static inline volatile CHCFG_14 &Instance() { return *reinterpret_cast<volatile CHCFG_14*>(0x40C18038); }
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
  static inline volatile CHCFG_15 &Instance() { return *reinterpret_cast<volatile CHCFG_15*>(0x40C1803C); }
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
  static inline volatile CHCFG_16 &Instance() { return *reinterpret_cast<volatile CHCFG_16*>(0x40C18040); }
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
  static inline volatile CHCFG_17 &Instance() { return *reinterpret_cast<volatile CHCFG_17*>(0x40C18044); }
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
  static inline volatile CHCFG_18 &Instance() { return *reinterpret_cast<volatile CHCFG_18*>(0x40C18048); }
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
  static inline volatile CHCFG_19 &Instance() { return *reinterpret_cast<volatile CHCFG_19*>(0x40C1804C); }
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
  static inline volatile CHCFG_20 &Instance() { return *reinterpret_cast<volatile CHCFG_20*>(0x40C18050); }
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
  static inline volatile CHCFG_21 &Instance() { return *reinterpret_cast<volatile CHCFG_21*>(0x40C18054); }
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
  static inline volatile CHCFG_22 &Instance() { return *reinterpret_cast<volatile CHCFG_22*>(0x40C18058); }
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
  static inline volatile CHCFG_23 &Instance() { return *reinterpret_cast<volatile CHCFG_23*>(0x40C1805C); }
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
  static inline volatile CHCFG_24 &Instance() { return *reinterpret_cast<volatile CHCFG_24*>(0x40C18060); }
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
  static inline volatile CHCFG_25 &Instance() { return *reinterpret_cast<volatile CHCFG_25*>(0x40C18064); }
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
  static inline volatile CHCFG_26 &Instance() { return *reinterpret_cast<volatile CHCFG_26*>(0x40C18068); }
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
  static inline volatile CHCFG_27 &Instance() { return *reinterpret_cast<volatile CHCFG_27*>(0x40C1806C); }
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
  static inline volatile CHCFG_28 &Instance() { return *reinterpret_cast<volatile CHCFG_28*>(0x40C18070); }
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
  static inline volatile CHCFG_29 &Instance() { return *reinterpret_cast<volatile CHCFG_29*>(0x40C18074); }
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
  static inline volatile CHCFG_30 &Instance() { return *reinterpret_cast<volatile CHCFG_30*>(0x40C18078); }
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
  static inline volatile CHCFG_31 &Instance() { return *reinterpret_cast<volatile CHCFG_31*>(0x40C1807C); }
};


} // namespace nDMAMUX1