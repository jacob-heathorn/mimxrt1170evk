#include "registers/codegen/dma0.hpp"

// TODO rename?
static constexpr uint32_t k_dma0_base = 0x40070000;

namespace nDMA0 {

// TCDn_SADDR
template<uint32_t N>
union TCD_SADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD_SADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile TCD_SADDR &ref() {
    return *reinterpret_cast<volatile TCD_SADDR*>(k_dma0_base + 0x1000 + (N * 0x20));
  }
};

}
