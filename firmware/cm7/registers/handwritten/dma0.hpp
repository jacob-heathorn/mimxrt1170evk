#include "registers/codegen/dma0.hpp"


// #define DMA0_TCD0_DOFF (*(volatile uint16_t*)(DMA0_BASE + 0x1014))
// #define DMA0_TCD0_SOFF (*(volatile int16_t*)(DMA0_BASE + 0x1004))
// #define DMA0_SERQ (*(volatile uint8_t*)(DMA0_BASE + 0x1B)) // 8-bit register
// #define DMA0_SSRT (*(volatile uint8_t*)(DMA0_BASE + 0x1D)) // 8-bit register

// TODO rename?
static constexpr uint32_t k_dma0_base = 0x40070000;

namespace nDMA0 {



// TCDn_CSR
template<uint32_t N>
union TCD_CSR {
  
  // Bit field definition.
  struct {
    uint16_t START : 1;
    uint16_t INTMAJOR : 1;
    uint16_t INTHALF : 1;
    uint16_t DREQ : 1;
    uint16_t ESG : 1;
    uint16_t MAJORELINK : 1;
    uint16_t ACTIVE : 1;
    uint16_t DONE : 1;
    uint16_t MAJORLINKCH : 5;
    uint16_t reserved_0 : 1;
    uint16_t BWC : 2;
  } bits;
  
  // Full 32-bit register value.
  uint16_t value;

  TCD_CSR() = delete;
  static inline volatile TCD_CSR &ref() {
    return *reinterpret_cast<volatile TCD_CSR*>(k_dma0_base + 0x101C + (N * 0x20));
  }
};

// TCDn_BITER_ELINKNO
template<uint32_t N>
union TCD_BITER_ELINKNO {
  
  // Bit field definition.
  struct {
    uint16_t BITER : 15;
    uint16_t ELINK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint16_t value;

  TCD_BITER_ELINKNO() = delete;
  static inline volatile TCD_BITER_ELINKNO &ref() {
    return *reinterpret_cast<volatile TCD_BITER_ELINKNO*>(k_dma0_base + 0x101E + (N * 0x20));
  }
};

// TCDn_CITER_ELINKNO
template<uint32_t N>
union TCD_CITER_ELINKNO {
  
  // Bit field definition.
  struct {
    uint16_t CITER : 15;
    uint16_t ELINK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint16_t value;

  TCD_CITER_ELINKNO() = delete;
  static inline volatile TCD_CITER_ELINKNO &ref() {
    return *reinterpret_cast<volatile TCD_CITER_ELINKNO*>(k_dma0_base + 0x1016 + (N * 0x20));
  }
};

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
