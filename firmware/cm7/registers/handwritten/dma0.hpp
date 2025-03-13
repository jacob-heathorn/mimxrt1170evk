#include "registers/codegen/dma0.hpp"

#define dma0_base 0x40070000 // TODO static_constexpr?
// #define DMA0_TCD0_SADDR  (*(volatile uint32_t*)(DMA0_BASE + 0x1000))

namespace nDMA0 {

// TCDn_SADDR register.
union TCD0_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD0_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile TCD0_SADDR &ref() { return *reinterpret_cast<volatile TCD0_SADDR*>(dma0_base + 0x1000); }
};

}
