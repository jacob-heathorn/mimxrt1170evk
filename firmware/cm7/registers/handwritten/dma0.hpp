#include "registers/codegen/dma0.hpp"

// TODO rename?
static constexpr uint32_t k_dma0_base = 0x40070000;

namespace nDMA0 {

// TCDn_ATTR
template<uint16_t N>
union TCD_ATTR {
  
  // Bit field definition.
  struct {
    uint16_t DSIZE : 3;
    uint16_t DMOD : 5;
    uint16_t SSIZE : 3;
    uint16_t SMOD : 5;
  } bits;
  
  // Full 32-bit register value.
  uint16_t value;

  TCD_ATTR() = delete;
  static inline volatile TCD_ATTR &ref() {
    return *reinterpret_cast<volatile TCD_ATTR*>(k_dma0_base + 0x1006 + (N * 0x20));
  }
};

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
  static inline volatile TCD_SADDR &ref() {
    return *reinterpret_cast<volatile TCD_SADDR*>(k_dma0_base + 0x1000 + (N * 0x20));
  }
};

}
