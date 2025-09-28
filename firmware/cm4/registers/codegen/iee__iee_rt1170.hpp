#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// IEE
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nIEE__IEE_RT1170 {


// IEE Global Configuration
union GCFG {
  
  // Region lock 0 bit
  enum class eRL0 : uint32_t {
    // Unlocked.
    eRL0_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL0_1 = 1,
  };
  
  // Region lock 1 bit
  enum class eRL1 : uint32_t {
    // Unlocked.
    eRL1_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL1_1 = 1,
  };
  
  // Region lock 2 bit
  enum class eRL2 : uint32_t {
    // Unlocked.
    eRL2_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL2_1 = 1,
  };
  
  // Region lock 3 bit
  enum class eRL3 : uint32_t {
    // Unlocked.
    eRL3_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL3_1 = 1,
  };
  
  // Region lock 4 bit
  enum class eRL4 : uint32_t {
    // Unlocked.
    eRL4_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL4_1 = 1,
  };
  
  // Region lock 5 bit
  enum class eRL5 : uint32_t {
    // Unlocked.
    eRL5_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL5_1 = 1,
  };
  
  // Region lock 6 bit
  enum class eRL6 : uint32_t {
    // Unlocked.
    eRL6_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL6_1 = 1,
  };
  
  // Region lock 7 bit
  enum class eRL7 : uint32_t {
    // Unlocked.
    eRL7_0 = 0,
    // Key, Offset and Attribute registers are locked.
    eRL7_1 = 1,
  };
  
  // Test mode enable bit
  enum class eTME : uint32_t {
    // Disabled.
    eTME_0 = 0,
    // Enabled.
    eTME_1 = 1,
  };
  
  // Test mode disable bit
  enum class eTMD : uint32_t {
    // Test mode is usable.
    eTMD_0 = 0,
    // Test mode is disabled.
    eTMD_1 = 1,
  };
  
  // Key read disable bit
  enum class eKEY_RD_DIS : uint32_t {
    // Key read enabled. Reading the key registers is allowed.
    eKEY_RD_DIS_0 = 0,
    // Key read disabled. Reading the key registers is disabled.
    eKEY_RD_DIS_1 = 1,
  };
  
  // Monitor enable bit
  enum class eMON_EN : uint32_t {
    // Performance monitoring disabled. Writing of the performance counter registers is enabled.
    eMON_EN_0 = 0,
    // Performance monitoring enabled. Writing of the performance counter registers is disabled.
    eMON_EN_1 = 1,
  };
  
  // Clear monitor bit
  enum class eCLR_MON : uint32_t {
    // Do not reset.
    eCLR_MON_0 = 0,
    // Reset performance counters.
    eCLR_MON_1 = 1,
  };
  
  // Reset bit
  enum class eRST : uint32_t {
    // Do Not Reset.
    eRST_0 = 0,
    // Reset IEE.
    eRST_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Region lock 0 bit
    eRL0 RL0 : 1;
    // read-write - Region lock 1 bit
    eRL1 RL1 : 1;
    // read-write - Region lock 2 bit
    eRL2 RL2 : 1;
    // read-write - Region lock 3 bit
    eRL3 RL3 : 1;
    // read-write - Region lock 4 bit
    eRL4 RL4 : 1;
    // read-write - Region lock 5 bit
    eRL5 RL5 : 1;
    // read-write - Region lock 6 bit
    eRL6 RL6 : 1;
    // read-write - Region lock 7 bit
    eRL7 RL7 : 1;
    uint32_t _reserved_0 : 8;
    // read-write - Test mode enable bit
    eTME TME : 1;
    // read-write - Test mode disable bit
    eTMD TMD : 1;
    uint32_t _reserved_1 : 7;
    // read-write - Key read disable bit
    eKEY_RD_DIS KEY_RD_DIS : 1;
    uint32_t _reserved_2 : 2;
    // read-write - Monitor enable bit
    eMON_EN MON_EN : 1;
    // write-only - Clear monitor bit
    eCLR_MON CLR_MON : 1;
    uint32_t _reserved_3 : 1;
    // write-only - Reset bit
    eRST RST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GCFG &ref() { return *reinterpret_cast<volatile GCFG*>(0x4006C000); }
};

// IEE Status
union STA {
  
  // DPA seed request bit
  enum class eDSR : uint32_t {
    // No seed request present
    eDSR_0 = 0,
    // Seed request present
    eDSR_1 = 1,
  };
  
  // AES fault detected bit
  enum class eAFD : uint32_t {
    // No fault detected
    eAFD_0 = 0,
    // Fault detected
    eAFD_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - DPA seed request bit
    eDSR DSR : 1;
    uint32_t _reserved_0 : 3;
    // read-only - AES fault detected bit
    eAFD AFD : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile STA &ref() { return *reinterpret_cast<volatile STA*>(0x4006C004); }
};

// IEE Test Mode Register
union TSTMD {
  
  // Test mode ready bit. All AXI transactions have stopped and test can begin.
  enum class eTMRDY : uint32_t {
    // Not Ready.
    eTMRDY_0 = 0,
    // Ready.
    eTMRDY_1 = 1,
  };
  
  // Test mode run bit
  enum class eTMR : uint32_t {
    // Not running. May be written if IEE_GCFG[TME] = 1
    eTMR_0 = 0,
    // Run AES Test until TMDONE is indicated.
    eTMR_1 = 1,
  };
  
  // Test mode encrypt/decrypt bit.
  enum class eTMENCR : uint32_t {
    // AES Test mode will do decryption.
    eTMENCR_0 = 0,
    // AES Test mode will do encryption.
    eTMENCR_1 = 1,
  };
  
  // Test mode continue bit. Set to indicate that operation will be followed by more data.
  enum class eTMCONT : uint32_t {
    // Do not continue. This is the last block of data for AES.
    eTMCONT_0 = 0,
    // Continue. Do not initialize AES after this block.
    eTMCONT_1 = 1,
  };
  
  // Test mode done bit
  enum class eTMDONE : uint32_t {
    // Not Done.
    eTMDONE_0 = 0,
    // Test Done.
    eTMDONE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Test mode ready bit. All AXI transactions have stopped and test can begin.
    eTMRDY TMRDY : 1;
    // read-write - Test mode run bit
    eTMR TMR : 1;
    // read-write - Test mode encrypt/decrypt bit.
    eTMENCR TMENCR : 1;
    // read-write - Test mode continue bit. Set to indicate that operation will be followed by more data.
    eTMCONT TMCONT : 1;
    // read-only - Test mode done bit
    eTMDONE TMDONE : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Test mode length field
    uint32_t TMLEN : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TSTMD &ref() { return *reinterpret_cast<volatile TSTMD*>(0x4006C008); }
};

// AES Mask Generation Seed
union DPAMS {
  
  // Bit field definition.
  struct {
    // write-only - DPA mask seed
    uint32_t DPAMS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DPAMS &ref() { return *reinterpret_cast<volatile DPAMS*>(0x4006C00C); }
};

// Performance Counter, AES Slave Latency Threshold Value
union PC_S_LT {
  
  // Bit field definition.
  struct {
    // read-write - Slave write latency threshold in AXI clock cycles.
    uint32_t SW_LT : 16;
    // read-write - Slave read latency threshold in AXI clock cycles.
    uint32_t SR_LT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_S_LT &ref() { return *reinterpret_cast<volatile PC_S_LT*>(0x4006C020); }
};

// Performance Counter, AES Master Latency Threshold
union PC_M_LT {
  
  // Bit field definition.
  struct {
    // read-write - Master write latency threshold in AXI clock cycles.
    uint32_t MW_LT : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Master read latency threshold in AXI clock cycles.
    uint32_t MR_LT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_M_LT &ref() { return *reinterpret_cast<volatile PC_M_LT*>(0x4006C024); }
};

// Performance Counter, Number of AES Block Encryptions
union PC_BLK_ENC {
  
  // Bit field definition.
  struct {
    // read-write - Number of AES block encryptions. Does not roll over if value maxes out.
    uint32_t BLK_ENC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_BLK_ENC &ref() { return *reinterpret_cast<volatile PC_BLK_ENC*>(0x4006C040); }
};

// Performance Counter, Number of AES Block Decryptions
union PC_BLK_DEC {
  
  // Bit field definition.
  struct {
    // read-write - Number of AES block decryptions. Does not roll over if value maxes out.
    uint32_t BLK_DEC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_BLK_DEC &ref() { return *reinterpret_cast<volatile PC_BLK_DEC*>(0x4006C044); }
};

// Performance Counter, Number of AXI Slave Read Transactions
union PC_SR_TRANS {
  
  // Bit field definition.
  struct {
    // read-write - Number of slave read transactions.
    uint32_t SR_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TRANS &ref() { return *reinterpret_cast<volatile PC_SR_TRANS*>(0x4006C050); }
};

// Performance Counter, Number of AXI Slave Write Transactions
union PC_SW_TRANS {
  
  // Bit field definition.
  struct {
    // read-write - Number of slave write transactions.
    uint32_t SW_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TRANS &ref() { return *reinterpret_cast<volatile PC_SW_TRANS*>(0x4006C054); }
};

// Performance Counter, Number of AXI Master Read Transactions
union PC_MR_TRANS {
  
  // Bit field definition.
  struct {
    // read-write - Number of master read transactions.
    uint32_t MR_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TRANS &ref() { return *reinterpret_cast<volatile PC_MR_TRANS*>(0x4006C058); }
};

// Performance Counter, Number of AXI Master Write Transactions
union PC_MW_TRANS {
  
  // Bit field definition.
  struct {
    // read-write - Number of master write transactions.
    uint32_t MW_TRANS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TRANS &ref() { return *reinterpret_cast<volatile PC_MW_TRANS*>(0x4006C05C); }
};

// Performance Counter, Number of AXI Master Merge Buffer Read Transactions
union PC_M_MBR {
  
  // Bit field definition.
  struct {
    // read-write - Number of master merge buffer read transactions.
    uint32_t M_MBR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_M_MBR &ref() { return *reinterpret_cast<volatile PC_M_MBR*>(0x4006C064); }
};

// Performance Counter, Upper Slave Read Transactions Byte Count
union PC_SR_TBC_U {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes in slave read transactions. Upper 16 bits of SR_TBC[47:0].
    uint32_t SR_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TBC_U &ref() { return *reinterpret_cast<volatile PC_SR_TBC_U*>(0x4006C070); }
};

// Performance Counter, Lower Slave Read Transactions Byte Count
union PC_SR_TBC_L {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes in slave read transactions. Lower 32 bits of SR_TBC[47:0].
    uint32_t SR_TBC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TBC_L &ref() { return *reinterpret_cast<volatile PC_SR_TBC_L*>(0x4006C074); }
};

// Performance Counter, Upper Slave Write Transactions Byte Count
union PC_SW_TBC_U {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes in slave write transactions. Upper 16 bits of SW_TBC[47:0].
    uint32_t SW_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TBC_U &ref() { return *reinterpret_cast<volatile PC_SW_TBC_U*>(0x4006C078); }
};

// Performance Counter, Lower Slave Write Transactions Byte Count
union PC_SW_TBC_L {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes in slave write transactions. Lower 32 bits of SW_TBC[47:0].
    uint32_t SW_TBC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TBC_L &ref() { return *reinterpret_cast<volatile PC_SW_TBC_L*>(0x4006C07C); }
};

// Performance Counter, Upper Master Read Transactions Byte Count
union PC_MR_TBC_U {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes in master read transactions. 44 MSBs. Upper 16 bits of MR_TBC[43:0].
    uint32_t MR_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TBC_U &ref() { return *reinterpret_cast<volatile PC_MR_TBC_U*>(0x4006C080); }
};

// Performance Counter, Lower Master Read Transactions Byte Count
union PC_MR_TBC_L {
  
  // Bit field definition.
  struct {
    // read-only - Number of bytes in master read transactions. 4 LSBs, always 0.
    uint32_t MR_TBC_LSB : 4;
    // read-write - Number of bytes in master read transactions. 44 MSBs. Lower 28 bits of MR_TBC[43:0].
    uint32_t MR_TBC : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TBC_L &ref() { return *reinterpret_cast<volatile PC_MR_TBC_L*>(0x4006C084); }
};

// Performance Counter, Upper Master Write Transactions Byte Count
union PC_MW_TBC_U {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes in master write transactions. 44 MSBs. Upper 16 bits of MW_TBC[43:0].
    uint32_t MW_TBC : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TBC_U &ref() { return *reinterpret_cast<volatile PC_MW_TBC_U*>(0x4006C088); }
};

// Performance Counter, Lower Master Write Transactions Byte Count
union PC_MW_TBC_L {
  
  // Bit field definition.
  struct {
    // read-only - Number of bytes in master write transactions. 4 LSBs, always 0.
    uint32_t MW_TBC_LSB : 4;
    // read-write - Number of bytes in master write transactions. 44 MSBs. Lower 28 bits of MR_TBC[43:0].
    uint32_t MW_TBC : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TBC_L &ref() { return *reinterpret_cast<volatile PC_MW_TBC_L*>(0x4006C08C); }
};

// Performance Counter, Number of AXI Slave Read Transactions with Latency Greater than the
// Threshold
union PC_SR_TLGTT {
  
  // Bit field definition.
  struct {
    // read-write - Number of slave read transactions with latency greater than the threshold.
    uint32_t SR_TLGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TLGTT &ref() { return *reinterpret_cast<volatile PC_SR_TLGTT*>(0x4006C090); }
};

// Performance Counter, Number of AXI Slave Write Transactions with Latency Greater than the
// Threshold
union PC_SW_TLGTT {
  
  // Bit field definition.
  struct {
    // read-write - Number of slave write transactions with latency greater than the threshold.
    uint32_t SW_TLGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TLGTT &ref() { return *reinterpret_cast<volatile PC_SW_TLGTT*>(0x4006C094); }
};

// Performance Counter, Number of AXI Master Read Transactions with Latency Greater than the
// Threshold
union PC_MR_TLGTT {
  
  // Bit field definition.
  struct {
    // read-write - Number of master read transactions with latency greater than the threshold.
    uint32_t MR_TLGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TLGTT &ref() { return *reinterpret_cast<volatile PC_MR_TLGTT*>(0x4006C098); }
};

// Performance Counter, Number of AXI Master Write Transactions with Latency Greater than the
// Threshold
union PC_MW_TLGTT {
  
  // Bit field definition.
  struct {
    // read-write - Number of master write transactions with latency greater than the threshold.
    uint32_t MW_TGTT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TLGTT &ref() { return *reinterpret_cast<volatile PC_MW_TLGTT*>(0x4006C09C); }
};

// Performance Counter, Upper Slave Read Latency Count
union PC_SR_TLAT_U {
  
  // Bit field definition.
  struct {
    // read-write - Total slave read latency in AXI clock cycles. Upper 16 bits of SR_TLAT[47:0].
    uint32_t SR_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TLAT_U &ref() { return *reinterpret_cast<volatile PC_SR_TLAT_U*>(0x4006C0A0); }
};

// Performance Counter, Lower Slave Read Latency Count
union PC_SR_TLAT_L {
  
  // Bit field definition.
  struct {
    // read-write - Total slave read latency in AXI clock cycles. Lower 32 bits of SR_TLAT[47:0].
    uint32_t SR_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TLAT_L &ref() { return *reinterpret_cast<volatile PC_SR_TLAT_L*>(0x4006C0A4); }
};

// Performance Counter, Upper Slave Write Latency Count
union PC_SW_TLAT_U {
  
  // Bit field definition.
  struct {
    // read-write - Total slave write latency in AXI clock cycles. Upper 16 bits of SW_TLAT[47:0].
    uint32_t SW_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TLAT_U &ref() { return *reinterpret_cast<volatile PC_SW_TLAT_U*>(0x4006C0A8); }
};

// Performance Counter, Lower Slave Write Latency Count
union PC_SW_TLAT_L {
  
  // Bit field definition.
  struct {
    // read-write - Total slave write latency in AXI clock cycles. Lower 32 bits of SW_TLAT[47:0].
    uint32_t SW_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TLAT_L &ref() { return *reinterpret_cast<volatile PC_SW_TLAT_L*>(0x4006C0AC); }
};

// Performance Counter, Upper Master Read Latency Count
union PC_MR_TLAT_U {
  
  // Bit field definition.
  struct {
    // read-write - Total master read latency in AXI clock cycles. Upper 16 bits of MR_TLAT[47:0].
    uint32_t MR_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TLAT_U &ref() { return *reinterpret_cast<volatile PC_MR_TLAT_U*>(0x4006C0B0); }
};

// Performance Counter, Lower Master Read Latency Count
union PC_MR_TLAT_L {
  
  // Bit field definition.
  struct {
    // read-write - Total master read latency in AXI clock cycles. Lower 32 bits of MR_TLAT[47:0].
    uint32_t MR_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MR_TLAT_L &ref() { return *reinterpret_cast<volatile PC_MR_TLAT_L*>(0x4006C0B4); }
};

// Performance Counter, Upper Master Write Latency Count
union PC_MW_TLAT_U {
  
  // Bit field definition.
  struct {
    // read-write - Total master write latency in AXI clock cycles. Upper 16 bits of MW_TLAT[47:0].
    uint32_t MW_TLAT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TLAT_U &ref() { return *reinterpret_cast<volatile PC_MW_TLAT_U*>(0x4006C0B8); }
};

// Performance Counter, Lower Master Write Latency Count
union PC_MW_TLAT_L {
  
  // Bit field definition.
  struct {
    // read-write - Total master write latency in AXI clock cycles. Lower 32 bits of MW_TLAT[47:0].
    uint32_t MW_TLAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_MW_TLAT_L &ref() { return *reinterpret_cast<volatile PC_MW_TLAT_L*>(0x4006C0BC); }
};

// Performance Counter, Upper Slave Read Total Non-Responding Time
union PC_SR_TNRT_U {
  
  // Bit field definition.
  struct {
    // read-write - Total slave read non-responding time in AXI clock cycles. Upper 16 bits of SR_TNRT[47:0].
    uint32_t SR_TNRT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TNRT_U &ref() { return *reinterpret_cast<volatile PC_SR_TNRT_U*>(0x4006C0C0); }
};

// Performance Counter, Lower Slave Read Total Non-Responding Time
union PC_SR_TNRT_L {
  
  // Bit field definition.
  struct {
    // read-write - Total slave read non-responding time in AXI clock cycles. Lower 32 bits of SR_TNRT[47:0].
    uint32_t SR_TNRT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SR_TNRT_L &ref() { return *reinterpret_cast<volatile PC_SR_TNRT_L*>(0x4006C0C4); }
};

// Performance Counter, Upper Slave Write Total Non-Responding Time
union PC_SW_TNRT_U {
  
  // Bit field definition.
  struct {
    // read-write - Total slave write non-responding time in AXI clock cycles. Upper 16 bits of SW_TNRT[47:0].
    uint32_t SW_TNRT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TNRT_U &ref() { return *reinterpret_cast<volatile PC_SW_TNRT_U*>(0x4006C0C8); }
};

// Performance Counter, Lower Slave Write Total Non-Responding Time
union PC_SW_TNRT_L {
  
  // Bit field definition.
  struct {
    // read-write - Total slave write non-responding time in AXI clock cycles. Lower 32 bits of SW_TNRT[47:0].
    uint32_t SW_TNRT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PC_SW_TNRT_L &ref() { return *reinterpret_cast<volatile PC_SW_TNRT_L*>(0x4006C0CC); }
};

// IEE Version ID Register 1
union VIDR1 {
  
  // Bit field definition.
  struct {
    // read-only - Minor revision number for IEE.
    uint32_t MIN_REV : 8;
    // read-only - Major revision number for IEE.
    uint32_t MAJ_REV : 8;
    // read-only - ID for IEE.
    uint32_t IP_ID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00340102; }
  static inline volatile VIDR1 &ref() { return *reinterpret_cast<volatile VIDR1*>(0x4006C0F0); }
};

// IEE AES Version ID Register
union AESVID {
  
  // Bit field definition.
  struct {
    // read-only - AES revision number.
    uint32_t AESRN : 4;
    // read-only - AES version ID.
    uint32_t AESVID : 4;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000020; }
  static inline volatile AESVID &ref() { return *reinterpret_cast<volatile AESVID*>(0x4006C0F8); }
};

// IEE AES Test Mode Data Buffer
union AES_TST_DB_0 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_0 &ref() { return *reinterpret_cast<volatile AES_TST_DB_0*>(0x4006CF00); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_1 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_1 &ref() { return *reinterpret_cast<volatile AES_TST_DB_1*>(0x4006CF04); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_2 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_2 &ref() { return *reinterpret_cast<volatile AES_TST_DB_2*>(0x4006CF08); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_3 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_3 &ref() { return *reinterpret_cast<volatile AES_TST_DB_3*>(0x4006CF0C); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_4 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_4 &ref() { return *reinterpret_cast<volatile AES_TST_DB_4*>(0x4006CF10); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_5 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_5 &ref() { return *reinterpret_cast<volatile AES_TST_DB_5*>(0x4006CF14); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_6 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_6 &ref() { return *reinterpret_cast<volatile AES_TST_DB_6*>(0x4006CF18); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_7 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_7 &ref() { return *reinterpret_cast<volatile AES_TST_DB_7*>(0x4006CF1C); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_8 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_8 &ref() { return *reinterpret_cast<volatile AES_TST_DB_8*>(0x4006CF20); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_9 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_9 &ref() { return *reinterpret_cast<volatile AES_TST_DB_9*>(0x4006CF24); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_10 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_10 &ref() { return *reinterpret_cast<volatile AES_TST_DB_10*>(0x4006CF28); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_11 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_11 &ref() { return *reinterpret_cast<volatile AES_TST_DB_11*>(0x4006CF2C); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_12 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_12 &ref() { return *reinterpret_cast<volatile AES_TST_DB_12*>(0x4006CF30); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_13 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_13 &ref() { return *reinterpret_cast<volatile AES_TST_DB_13*>(0x4006CF34); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_14 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_14 &ref() { return *reinterpret_cast<volatile AES_TST_DB_14*>(0x4006CF38); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_15 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_15 &ref() { return *reinterpret_cast<volatile AES_TST_DB_15*>(0x4006CF3C); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_16 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_16 &ref() { return *reinterpret_cast<volatile AES_TST_DB_16*>(0x4006CF40); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_17 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_17 &ref() { return *reinterpret_cast<volatile AES_TST_DB_17*>(0x4006CF44); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_18 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_18 &ref() { return *reinterpret_cast<volatile AES_TST_DB_18*>(0x4006CF48); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_19 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_19 &ref() { return *reinterpret_cast<volatile AES_TST_DB_19*>(0x4006CF4C); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_20 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_20 &ref() { return *reinterpret_cast<volatile AES_TST_DB_20*>(0x4006CF50); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_21 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_21 &ref() { return *reinterpret_cast<volatile AES_TST_DB_21*>(0x4006CF54); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_22 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_22 &ref() { return *reinterpret_cast<volatile AES_TST_DB_22*>(0x4006CF58); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_23 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_23 &ref() { return *reinterpret_cast<volatile AES_TST_DB_23*>(0x4006CF5C); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_24 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_24 &ref() { return *reinterpret_cast<volatile AES_TST_DB_24*>(0x4006CF60); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_25 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_25 &ref() { return *reinterpret_cast<volatile AES_TST_DB_25*>(0x4006CF64); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_26 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_26 &ref() { return *reinterpret_cast<volatile AES_TST_DB_26*>(0x4006CF68); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_27 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_27 &ref() { return *reinterpret_cast<volatile AES_TST_DB_27*>(0x4006CF6C); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_28 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_28 &ref() { return *reinterpret_cast<volatile AES_TST_DB_28*>(0x4006CF70); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_29 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_29 &ref() { return *reinterpret_cast<volatile AES_TST_DB_29*>(0x4006CF74); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_30 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_30 &ref() { return *reinterpret_cast<volatile AES_TST_DB_30*>(0x4006CF78); }
};
// IEE AES Test Mode Data Buffer
union AES_TST_DB_31 {
  
  // Bit field definition.
  struct {
    // read-write - AES test mode data buffer.
    uint32_t AES_TST_DB0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AES_TST_DB_31 &ref() { return *reinterpret_cast<volatile AES_TST_DB_31*>(0x4006CF7C); }
};



} // namespace nIEE__IEE_RT1170