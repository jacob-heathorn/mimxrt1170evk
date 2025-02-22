#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// IEE
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nIEE__IEE_RT1170 {


// IEE Global Configuration
//
union GCFG {
  
  enum class eRL0 : uint32_t {
    eRL0_0 = 0, // Unlocked.
    eRL0_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eRL1 : uint32_t {
    eRL1_0 = 0, // Unlocked.
    eRL1_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eRL2 : uint32_t {
    eRL2_0 = 0, // Unlocked.
    eRL2_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eRL3 : uint32_t {
    eRL3_0 = 0, // Unlocked.
    eRL3_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eRL4 : uint32_t {
    eRL4_0 = 0, // Unlocked.
    eRL4_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eRL5 : uint32_t {
    eRL5_0 = 0, // Unlocked.
    eRL5_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eRL6 : uint32_t {
    eRL6_0 = 0, // Unlocked.
    eRL6_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eRL7 : uint32_t {
    eRL7_0 = 0, // Unlocked.
    eRL7_1 = 1, // Key, Offset and Attribute registers are locked.
  };
  
  enum class eTME : uint32_t {
    eTME_0 = 0, // Disabled.
    eTME_1 = 1, // Enabled.
  };
  
  enum class eTMD : uint32_t {
    eTMD_0 = 0, // Test mode is usable.
    eTMD_1 = 1, // Test mode is disabled.
  };
  
  enum class eKEY_RD_DIS : uint32_t {
    eKEY_RD_DIS_0 = 0, // Key read enabled. Reading the key registers is allowed.
    eKEY_RD_DIS_1 = 1, // Key read disabled. Reading the key registers is disabled.
  };
  
  enum class eMON_EN : uint32_t {
    eMON_EN_0 = 0, // Performance monitoring disabled. Writing of the performance counter registers is enabled.
    eMON_EN_1 = 1, // Performance monitoring enabled. Writing of the performance counter registers is disabled.
  };
  
  enum class eCLR_MON : uint32_t {
    eCLR_MON_0 = 0, // Do not reset.
    eCLR_MON_1 = 1, // Reset performance counters.
  };
  
  enum class eRST : uint32_t {
    eRST_0 = 0, // Do Not Reset.
    eRST_1 = 1, // Reset IEE.
  };
  
  // Bit field definition.
  struct {
    eRL0 RL0 : 1;
    eRL1 RL1 : 1;
    eRL2 RL2 : 1;
    eRL3 RL3 : 1;
    eRL4 RL4 : 1;
    eRL5 RL5 : 1;
    eRL6 RL6 : 1;
    eRL7 RL7 : 1;
    uint32_t _reserved_0 : 8;
    eTME TME : 1;
    eTMD TMD : 1;
    uint32_t _reserved_1 : 7;
    eKEY_RD_DIS KEY_RD_DIS : 1;
    uint32_t _reserved_2 : 2;
    eMON_EN MON_EN : 1;
    eCLR_MON CLR_MON : 1;
    uint32_t _reserved_3 : 1;
    eRST RST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GCFG &Instance() { return *reinterpret_cast<volatile GCFG*>(0x4006C000); }
};

// IEE Status
//
union STA {
  
  enum class eDSR : uint32_t {
    eDSR_0 = 0, // No seed request present
    eDSR_1 = 1, // Seed request present
  };
  
  enum class eAFD : uint32_t {
    eAFD_0 = 0, // No fault detected
    eAFD_1 = 1, // Fault detected
  };
  
  // Bit field definition.
  struct {
    eDSR DSR : 1;
    uint32_t _reserved_0 : 3;
    eAFD AFD : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STA() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile STA &Instance() { return *reinterpret_cast<volatile STA*>(0x4006C004); }
};

// IEE Test Mode Register
//
union TSTMD {
  
  enum class eTMRDY : uint32_t {
    eTMRDY_0 = 0, // Not Ready.
    eTMRDY_1 = 1, // Ready.
  };
  
  enum class eTMR : uint32_t {
    eTMR_0 = 0, // Not running. May be written if IEE_GCFG[TME] = 1
    eTMR_1 = 1, // Run AES Test until TMDONE is indicated.
  };
  
  enum class eTMENCR : uint32_t {
    eTMENCR_0 = 0, // AES Test mode will do decryption.
    eTMENCR_1 = 1, // AES Test mode will do encryption.
  };
  
  enum class eTMCONT : uint32_t {
    eTMCONT_0 = 0, // Do not continue. This is the last block of data for AES.
    eTMCONT_1 = 1, // Continue. Do not initialize AES after this block.
  };
  
  enum class eTMDONE : uint32_t {
    eTMDONE_0 = 0, // Not Done.
    eTMDONE_1 = 1, // Test Done.
  };
  
  // Bit field definition.
  struct {
    eTMRDY TMRDY : 1;
    eTMR TMR : 1;
    eTMENCR TMENCR : 1;
    eTMCONT TMCONT : 1;
    eTMDONE TMDONE : 1;
    uint32_t _reserved_0 : 3;
    uint32_t TMLEN : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TSTMD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TSTMD &Instance() { return *reinterpret_cast<volatile TSTMD*>(0x4006C008); }
};

// AES Mask Generation Seed
//
union DPAMS {
  
  // Bit field definition.
  struct {
    uint32_t DPAMS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DPAMS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DPAMS &Instance() { return *reinterpret_cast<volatile DPAMS*>(0x4006C00C); }
};

// Performance Counter, AES Slave Latency Threshold Value
//
union PC_S_LT {
  
  // Bit field definition.
  struct {
    uint32_t SW_LT : 16;
    uint32_t SR_LT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_S_LT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_S_LT &Instance() { return *reinterpret_cast<volatile PC_S_LT*>(0x4006C020); }
};

// Performance Counter, AES Master Latency Threshold
//
union PC_M_LT {
  
  // Bit field definition.
  struct {
    uint32_t MW_LT : 12;
    uint32_t _reserved_0 : 4;
    uint32_t MR_LT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_M_LT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_M_LT &Instance() { return *reinterpret_cast<volatile PC_M_LT*>(0x4006C024); }
};

// Performance Counter, Number of AES Block Encryptions
//
union PC_BLK_ENC {
  
  // Bit field definition.
  struct {
    uint32_t BLK_ENC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_BLK_ENC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_BLK_ENC &Instance() { return *reinterpret_cast<volatile PC_BLK_ENC*>(0x4006C040); }
};

// Performance Counter, Number of AES Block Decryptions
//
union PC_BLK_DEC {
  
  // Bit field definition.
  struct {
    uint32_t BLK_DEC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_BLK_DEC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_BLK_DEC &Instance() { return *reinterpret_cast<volatile PC_BLK_DEC*>(0x4006C044); }
};

// Performance Counter, Number of AXI Slave Read Transactions
//
union PC_SR_TRANS {
  
  // Bit field definition.
  struct {
    uint32_t SR_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TRANS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TRANS &Instance() { return *reinterpret_cast<volatile PC_SR_TRANS*>(0x4006C050); }
};

// Performance Counter, Number of AXI Slave Write Transactions
//
union PC_SW_TRANS {
  
  // Bit field definition.
  struct {
    uint32_t SW_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TRANS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TRANS &Instance() { return *reinterpret_cast<volatile PC_SW_TRANS*>(0x4006C054); }
};

// Performance Counter, Number of AXI Master Read Transactions
//
union PC_MR_TRANS {
  
  // Bit field definition.
  struct {
    uint32_t MR_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MR_TRANS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TRANS &Instance() { return *reinterpret_cast<volatile PC_MR_TRANS*>(0x4006C058); }
};

// Performance Counter, Number of AXI Master Write Transactions
//
union PC_MW_TRANS {
  
  // Bit field definition.
  struct {
    uint32_t MW_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MW_TRANS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TRANS &Instance() { return *reinterpret_cast<volatile PC_MW_TRANS*>(0x4006C05C); }
};

// Performance Counter, Number of AXI Master Merge Buffer Read Transactions
//
union PC_M_MBR {
  
  // Bit field definition.
  struct {
    uint32_t M_MBR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_M_MBR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_M_MBR &Instance() { return *reinterpret_cast<volatile PC_M_MBR*>(0x4006C064); }
};

// Performance Counter, Upper Slave Read Transactions Byte Count
//
union PC_SR_TBC_U {
  
  // Bit field definition.
  struct {
    uint32_t SR_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TBC_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TBC_U &Instance() { return *reinterpret_cast<volatile PC_SR_TBC_U*>(0x4006C070); }
};

// Performance Counter, Lower Slave Read Transactions Byte Count
//
union PC_SR_TBC_L {
  
  // Bit field definition.
  struct {
    uint32_t SR_TBC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TBC_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TBC_L &Instance() { return *reinterpret_cast<volatile PC_SR_TBC_L*>(0x4006C074); }
};

// Performance Counter, Upper Slave Write Transactions Byte Count
//
union PC_SW_TBC_U {
  
  // Bit field definition.
  struct {
    uint32_t SW_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TBC_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TBC_U &Instance() { return *reinterpret_cast<volatile PC_SW_TBC_U*>(0x4006C078); }
};

// Performance Counter, Lower Slave Write Transactions Byte Count
//
union PC_SW_TBC_L {
  
  // Bit field definition.
  struct {
    uint32_t SW_TBC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TBC_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TBC_L &Instance() { return *reinterpret_cast<volatile PC_SW_TBC_L*>(0x4006C07C); }
};

// Performance Counter, Upper Master Read Transactions Byte Count
//
union PC_MR_TBC_U {
  
  // Bit field definition.
  struct {
    uint32_t MR_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MR_TBC_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TBC_U &Instance() { return *reinterpret_cast<volatile PC_MR_TBC_U*>(0x4006C080); }
};

// Performance Counter, Lower Master Read Transactions Byte Count
//
union PC_MR_TBC_L {
  
  // Bit field definition.
  struct {
    uint32_t MR_TBC_LSB : 4;
    uint32_t MR_TBC : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MR_TBC_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TBC_L &Instance() { return *reinterpret_cast<volatile PC_MR_TBC_L*>(0x4006C084); }
};

// Performance Counter, Upper Master Write Transactions Byte Count
//
union PC_MW_TBC_U {
  
  // Bit field definition.
  struct {
    uint32_t MW_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MW_TBC_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TBC_U &Instance() { return *reinterpret_cast<volatile PC_MW_TBC_U*>(0x4006C088); }
};

// Performance Counter, Lower Master Write Transactions Byte Count
//
union PC_MW_TBC_L {
  
  // Bit field definition.
  struct {
    uint32_t MW_TBC_LSB : 4;
    uint32_t MW_TBC : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MW_TBC_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TBC_L &Instance() { return *reinterpret_cast<volatile PC_MW_TBC_L*>(0x4006C08C); }
};

// Performance Counter, Number of AXI Slave Read Transactions with Latency Greater than the
// Threshold
//
union PC_SR_TLGTT {
  
  // Bit field definition.
  struct {
    uint32_t SR_TLGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TLGTT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TLGTT &Instance() { return *reinterpret_cast<volatile PC_SR_TLGTT*>(0x4006C090); }
};

// Performance Counter, Number of AXI Slave Write Transactions with Latency Greater than the
// Threshold
//
union PC_SW_TLGTT {
  
  // Bit field definition.
  struct {
    uint32_t SW_TLGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TLGTT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TLGTT &Instance() { return *reinterpret_cast<volatile PC_SW_TLGTT*>(0x4006C094); }
};

// Performance Counter, Number of AXI Master Read Transactions with Latency Greater than the
// Threshold
//
union PC_MR_TLGTT {
  
  // Bit field definition.
  struct {
    uint32_t MR_TLGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MR_TLGTT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TLGTT &Instance() { return *reinterpret_cast<volatile PC_MR_TLGTT*>(0x4006C098); }
};

// Performance Counter, Number of AXI Master Write Transactions with Latency Greater than the
// Threshold
//
union PC_MW_TLGTT {
  
  // Bit field definition.
  struct {
    uint32_t MW_TGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MW_TLGTT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TLGTT &Instance() { return *reinterpret_cast<volatile PC_MW_TLGTT*>(0x4006C09C); }
};

// Performance Counter, Upper Slave Read Latency Count
//
union PC_SR_TLAT_U {
  
  // Bit field definition.
  struct {
    uint32_t SR_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TLAT_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TLAT_U &Instance() { return *reinterpret_cast<volatile PC_SR_TLAT_U*>(0x4006C0A0); }
};

// Performance Counter, Lower Slave Read Latency Count
//
union PC_SR_TLAT_L {
  
  // Bit field definition.
  struct {
    uint32_t SR_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TLAT_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TLAT_L &Instance() { return *reinterpret_cast<volatile PC_SR_TLAT_L*>(0x4006C0A4); }
};

// Performance Counter, Upper Slave Write Latency Count
//
union PC_SW_TLAT_U {
  
  // Bit field definition.
  struct {
    uint32_t SW_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TLAT_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TLAT_U &Instance() { return *reinterpret_cast<volatile PC_SW_TLAT_U*>(0x4006C0A8); }
};

// Performance Counter, Lower Slave Write Latency Count
//
union PC_SW_TLAT_L {
  
  // Bit field definition.
  struct {
    uint32_t SW_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TLAT_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TLAT_L &Instance() { return *reinterpret_cast<volatile PC_SW_TLAT_L*>(0x4006C0AC); }
};

// Performance Counter, Upper Master Read Latency Count
//
union PC_MR_TLAT_U {
  
  // Bit field definition.
  struct {
    uint32_t MR_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MR_TLAT_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TLAT_U &Instance() { return *reinterpret_cast<volatile PC_MR_TLAT_U*>(0x4006C0B0); }
};

// Performance Counter, Lower Master Read Latency Count
//
union PC_MR_TLAT_L {
  
  // Bit field definition.
  struct {
    uint32_t MR_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MR_TLAT_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TLAT_L &Instance() { return *reinterpret_cast<volatile PC_MR_TLAT_L*>(0x4006C0B4); }
};

// Performance Counter, Upper Master Write Latency Count
//
union PC_MW_TLAT_U {
  
  // Bit field definition.
  struct {
    uint32_t MW_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MW_TLAT_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TLAT_U &Instance() { return *reinterpret_cast<volatile PC_MW_TLAT_U*>(0x4006C0B8); }
};

// Performance Counter, Lower Master Write Latency Count
//
union PC_MW_TLAT_L {
  
  // Bit field definition.
  struct {
    uint32_t MW_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_MW_TLAT_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TLAT_L &Instance() { return *reinterpret_cast<volatile PC_MW_TLAT_L*>(0x4006C0BC); }
};

// Performance Counter, Upper Slave Read Total Non-Responding Time
//
union PC_SR_TNRT_U {
  
  // Bit field definition.
  struct {
    uint32_t SR_TNRT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TNRT_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TNRT_U &Instance() { return *reinterpret_cast<volatile PC_SR_TNRT_U*>(0x4006C0C0); }
};

// Performance Counter, Lower Slave Read Total Non-Responding Time
//
union PC_SR_TNRT_L {
  
  // Bit field definition.
  struct {
    uint32_t SR_TNRT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SR_TNRT_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TNRT_L &Instance() { return *reinterpret_cast<volatile PC_SR_TNRT_L*>(0x4006C0C4); }
};

// Performance Counter, Upper Slave Write Total Non-Responding Time
//
union PC_SW_TNRT_U {
  
  // Bit field definition.
  struct {
    uint32_t SW_TNRT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TNRT_U() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TNRT_U &Instance() { return *reinterpret_cast<volatile PC_SW_TNRT_U*>(0x4006C0C8); }
};

// Performance Counter, Lower Slave Write Total Non-Responding Time
//
union PC_SW_TNRT_L {
  
  // Bit field definition.
  struct {
    uint32_t SW_TNRT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PC_SW_TNRT_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TNRT_L &Instance() { return *reinterpret_cast<volatile PC_SW_TNRT_L*>(0x4006C0CC); }
};

// IEE Version ID Register 1
//
union VIDR1 {
  
  // Bit field definition.
  struct {
    uint32_t MIN_REV : 8;
    uint32_t MAJ_REV : 8;
    uint32_t IP_ID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VIDR1() = delete;
  inline void Reset() volatile { this->value = 0x00340102; }
  static inline volatile VIDR1 &Instance() { return *reinterpret_cast<volatile VIDR1*>(0x4006C0F0); }
};

// IEE AES Version ID Register
//
union AESVID {
  
  // Bit field definition.
  struct {
    uint32_t AESRN : 4;
    uint32_t AESVID : 4;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AESVID() = delete;
  inline void Reset() volatile { this->value = 0x00000020; }
  static inline volatile AESVID &Instance() { return *reinterpret_cast<volatile AESVID*>(0x4006C0F8); }
};

// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[0] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[0] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[0]*>(0x4006CF00); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[1] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[1] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[1]*>(0x4006CF04); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[2] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[2] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[2]*>(0x4006CF08); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[3] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[3] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[3]*>(0x4006CF0C); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[4] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[4] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[4]*>(0x4006CF10); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[5] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[5] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[5]*>(0x4006CF14); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[6] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[6] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[6]*>(0x4006CF18); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[7] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[7] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[7]*>(0x4006CF1C); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[8] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[8] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[8]*>(0x4006CF20); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[9] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[9] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[9]*>(0x4006CF24); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[10] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[10] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[10]*>(0x4006CF28); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[11] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[11] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[11]*>(0x4006CF2C); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[12] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[12] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[12]*>(0x4006CF30); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[13] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[13] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[13]*>(0x4006CF34); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[14] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[14] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[14]*>(0x4006CF38); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[15] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[15] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[15]*>(0x4006CF3C); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[16] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[16] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[16]*>(0x4006CF40); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[17] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[17] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[17]*>(0x4006CF44); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[18] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[18] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[18]*>(0x4006CF48); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[19] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[19] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[19]*>(0x4006CF4C); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[20] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[20] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[20]*>(0x4006CF50); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[21] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[21] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[21]*>(0x4006CF54); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[22] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[22] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[22]*>(0x4006CF58); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[23] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[23] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[23]*>(0x4006CF5C); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[24] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[24] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[24]*>(0x4006CF60); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[25] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[25] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[25]*>(0x4006CF64); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[26] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[26] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[26]*>(0x4006CF68); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[27] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[27] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[27]*>(0x4006CF6C); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[28] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[28] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[28]*>(0x4006CF70); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[29] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[29] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[29]*>(0x4006CF74); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[30] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[30] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[30]*>(0x4006CF78); }
};
// IEE AES Test Mode Data Buffer
//
union AES_TST_DB[31] {
  
  // Bit field definition.
  struct {
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AES_TST_DB[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB[31] &Instance() { return *reinterpret_cast<volatile AES_TST_DB[31]*>(0x4006CF7C); }
};



} // namespace nIEE__IEE_RT1170