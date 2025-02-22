#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DMAMUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nDMAMUX1 {


// Channel index Configuration Register
union CHCFG[0] {
  
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

  CHCFG[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[0] &Instance() { return *reinterpret_cast<volatile CHCFG[0]*>(0x40C18000); }
};
// Channel index Configuration Register
union CHCFG[1] {
  
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

  CHCFG[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[1] &Instance() { return *reinterpret_cast<volatile CHCFG[1]*>(0x40C18004); }
};
// Channel index Configuration Register
union CHCFG[2] {
  
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

  CHCFG[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[2] &Instance() { return *reinterpret_cast<volatile CHCFG[2]*>(0x40C18008); }
};
// Channel index Configuration Register
union CHCFG[3] {
  
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

  CHCFG[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[3] &Instance() { return *reinterpret_cast<volatile CHCFG[3]*>(0x40C1800C); }
};
// Channel index Configuration Register
union CHCFG[4] {
  
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

  CHCFG[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[4] &Instance() { return *reinterpret_cast<volatile CHCFG[4]*>(0x40C18010); }
};
// Channel index Configuration Register
union CHCFG[5] {
  
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

  CHCFG[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[5] &Instance() { return *reinterpret_cast<volatile CHCFG[5]*>(0x40C18014); }
};
// Channel index Configuration Register
union CHCFG[6] {
  
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

  CHCFG[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[6] &Instance() { return *reinterpret_cast<volatile CHCFG[6]*>(0x40C18018); }
};
// Channel index Configuration Register
union CHCFG[7] {
  
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

  CHCFG[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[7] &Instance() { return *reinterpret_cast<volatile CHCFG[7]*>(0x40C1801C); }
};
// Channel index Configuration Register
union CHCFG[8] {
  
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

  CHCFG[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[8] &Instance() { return *reinterpret_cast<volatile CHCFG[8]*>(0x40C18020); }
};
// Channel index Configuration Register
union CHCFG[9] {
  
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

  CHCFG[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[9] &Instance() { return *reinterpret_cast<volatile CHCFG[9]*>(0x40C18024); }
};
// Channel index Configuration Register
union CHCFG[10] {
  
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

  CHCFG[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[10] &Instance() { return *reinterpret_cast<volatile CHCFG[10]*>(0x40C18028); }
};
// Channel index Configuration Register
union CHCFG[11] {
  
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

  CHCFG[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[11] &Instance() { return *reinterpret_cast<volatile CHCFG[11]*>(0x40C1802C); }
};
// Channel index Configuration Register
union CHCFG[12] {
  
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

  CHCFG[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[12] &Instance() { return *reinterpret_cast<volatile CHCFG[12]*>(0x40C18030); }
};
// Channel index Configuration Register
union CHCFG[13] {
  
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

  CHCFG[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[13] &Instance() { return *reinterpret_cast<volatile CHCFG[13]*>(0x40C18034); }
};
// Channel index Configuration Register
union CHCFG[14] {
  
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

  CHCFG[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[14] &Instance() { return *reinterpret_cast<volatile CHCFG[14]*>(0x40C18038); }
};
// Channel index Configuration Register
union CHCFG[15] {
  
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

  CHCFG[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[15] &Instance() { return *reinterpret_cast<volatile CHCFG[15]*>(0x40C1803C); }
};
// Channel index Configuration Register
union CHCFG[16] {
  
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

  CHCFG[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[16] &Instance() { return *reinterpret_cast<volatile CHCFG[16]*>(0x40C18040); }
};
// Channel index Configuration Register
union CHCFG[17] {
  
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

  CHCFG[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[17] &Instance() { return *reinterpret_cast<volatile CHCFG[17]*>(0x40C18044); }
};
// Channel index Configuration Register
union CHCFG[18] {
  
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

  CHCFG[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[18] &Instance() { return *reinterpret_cast<volatile CHCFG[18]*>(0x40C18048); }
};
// Channel index Configuration Register
union CHCFG[19] {
  
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

  CHCFG[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[19] &Instance() { return *reinterpret_cast<volatile CHCFG[19]*>(0x40C1804C); }
};
// Channel index Configuration Register
union CHCFG[20] {
  
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

  CHCFG[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[20] &Instance() { return *reinterpret_cast<volatile CHCFG[20]*>(0x40C18050); }
};
// Channel index Configuration Register
union CHCFG[21] {
  
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

  CHCFG[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[21] &Instance() { return *reinterpret_cast<volatile CHCFG[21]*>(0x40C18054); }
};
// Channel index Configuration Register
union CHCFG[22] {
  
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

  CHCFG[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[22] &Instance() { return *reinterpret_cast<volatile CHCFG[22]*>(0x40C18058); }
};
// Channel index Configuration Register
union CHCFG[23] {
  
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

  CHCFG[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[23] &Instance() { return *reinterpret_cast<volatile CHCFG[23]*>(0x40C1805C); }
};
// Channel index Configuration Register
union CHCFG[24] {
  
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

  CHCFG[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[24] &Instance() { return *reinterpret_cast<volatile CHCFG[24]*>(0x40C18060); }
};
// Channel index Configuration Register
union CHCFG[25] {
  
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

  CHCFG[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[25] &Instance() { return *reinterpret_cast<volatile CHCFG[25]*>(0x40C18064); }
};
// Channel index Configuration Register
union CHCFG[26] {
  
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

  CHCFG[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[26] &Instance() { return *reinterpret_cast<volatile CHCFG[26]*>(0x40C18068); }
};
// Channel index Configuration Register
union CHCFG[27] {
  
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

  CHCFG[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[27] &Instance() { return *reinterpret_cast<volatile CHCFG[27]*>(0x40C1806C); }
};
// Channel index Configuration Register
union CHCFG[28] {
  
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

  CHCFG[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[28] &Instance() { return *reinterpret_cast<volatile CHCFG[28]*>(0x40C18070); }
};
// Channel index Configuration Register
union CHCFG[29] {
  
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

  CHCFG[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[29] &Instance() { return *reinterpret_cast<volatile CHCFG[29]*>(0x40C18074); }
};
// Channel index Configuration Register
union CHCFG[30] {
  
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

  CHCFG[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[30] &Instance() { return *reinterpret_cast<volatile CHCFG[30]*>(0x40C18078); }
};
// Channel index Configuration Register
union CHCFG[31] {
  
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

  CHCFG[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CHCFG[31] &Instance() { return *reinterpret_cast<volatile CHCFG[31]*>(0x40C1807C); }
};


} // namespace nDMAMUX1