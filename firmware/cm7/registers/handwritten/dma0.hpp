#include "registers/codegen/dma0.hpp"

// TODO rename?
static constexpr uint32_t k_dma0_base = 0x40070000;

namespace nDMA0 {

// TCDn_NBYTES_MLOFFNO
template<uint32_t N>
union TCD_NBYTES_MLOFFNO {
  
  // Bit field definition.
  struct {
    uint32_t NBYTES : 30;
    uint32_t DMLOE : 1;
    uint32_t SMLOE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD_NBYTES_MLOFFNO() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile TCD_NBYTES_MLOFFNO &ref() {
    return *reinterpret_cast<volatile TCD_NBYTES_MLOFFNO*>(k_dma0_base + 0x1008 + (N * 0x20));
  }
};

// TCDn_DADDR
template<uint32_t N>
union TCD_DADDR {
  
  // Bit field definition.
  struct {
    uint32_t SADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCD_DADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile TCD_DADDR &ref() {
    return *reinterpret_cast<volatile TCD_DADDR*>(k_dma0_base + 0x1010 + (N * 0x20));
  }
};

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
