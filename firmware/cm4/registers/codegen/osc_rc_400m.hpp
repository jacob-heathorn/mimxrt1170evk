#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nOSC_RC_400M {


// Control Register 0
union CTRL0 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - Divide value for ref_clk to generate slow_clk (used inside this IP)
    uint32_t REF_CLK_DIV : 6;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0 &ref() { return *reinterpret_cast<volatile CTRL0*>(0x00000000); }
};

// Control Register 0
union CTRL0_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - Divide value for ref_clk to generate slow_clk (used inside this IP)
    uint32_t REF_CLK_DIV : 6;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_SET &ref() { return *reinterpret_cast<volatile CTRL0_SET*>(0x00000004); }
};

// Control Register 0
union CTRL0_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - Divide value for ref_clk to generate slow_clk (used inside this IP)
    uint32_t REF_CLK_DIV : 6;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_CLR &ref() { return *reinterpret_cast<volatile CTRL0_CLR*>(0x00000008); }
};

// Control Register 0
union CTRL0_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - Divide value for ref_clk to generate slow_clk (used inside this IP)
    uint32_t REF_CLK_DIV : 6;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_TOG &ref() { return *reinterpret_cast<volatile CTRL0_TOG*>(0x0000000C); }
};

// Control Register 1
union CTRL1 {
  
  // Bit field definition.
  struct {
    // read-write - Negative hysteresis value for the tuned clock
    uint32_t HYST_MINUS : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Positive hysteresis value for the tuned clock
    uint32_t HYST_PLUS : 4;
    uint32_t _reserved_1 : 4;
    // read-write - Target count for the fast clock
    uint32_t TARGET_COUNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1 &ref() { return *reinterpret_cast<volatile CTRL1*>(0x00000010); }
};

// Control Register 1
union CTRL1_SET {
  
  // Bit field definition.
  struct {
    // read-write - Negative hysteresis value for the tuned clock
    uint32_t HYST_MINUS : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Positive hysteresis value for the tuned clock
    uint32_t HYST_PLUS : 4;
    uint32_t _reserved_1 : 4;
    // read-write - Target count for the fast clock
    uint32_t TARGET_COUNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1_SET &ref() { return *reinterpret_cast<volatile CTRL1_SET*>(0x00000014); }
};

// Control Register 1
union CTRL1_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Negative hysteresis value for the tuned clock
    uint32_t HYST_MINUS : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Positive hysteresis value for the tuned clock
    uint32_t HYST_PLUS : 4;
    uint32_t _reserved_1 : 4;
    // read-write - Target count for the fast clock
    uint32_t TARGET_COUNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1_CLR &ref() { return *reinterpret_cast<volatile CTRL1_CLR*>(0x00000018); }
};

// Control Register 1
union CTRL1_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Negative hysteresis value for the tuned clock
    uint32_t HYST_MINUS : 4;
    uint32_t _reserved_0 : 4;
    // read-write - Positive hysteresis value for the tuned clock
    uint32_t HYST_PLUS : 4;
    uint32_t _reserved_1 : 4;
    // read-write - Target count for the fast clock
    uint32_t TARGET_COUNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1_TOG &ref() { return *reinterpret_cast<volatile CTRL1_TOG*>(0x0000001C); }
};

// Control Register 2
union CTRL2 {
  
  // Bypass the tuning logic
  enum class eTUNE_BYP : uint32_t {
    // Use the output of tuning logic to run the oscillator
    eTUNE_BYP_0 = 0,
    // Bypass the tuning logic and use the programmed OSC_TUNE_VAL to run the oscillator
    eTUNE_BYP_1 = 1,
  };
  
  // Freeze/Unfreeze the tuning value
  enum class eTUNE_EN : uint32_t {
    // Freezes the tuning at the current tuned value. Oscillator runs at the frozen tuning value
    eTUNE_EN_0 = 0,
    // Unfreezes and continues the tuning operation
    eTUNE_EN_1 = 1,
  };
  
  // Start/Stop tuning
  enum class eTUNE_START : uint32_t {
    // Stop tuning and reset the tuning logic. Oscillator runs using programmed OSC_TUNE_VAL
    eTUNE_START_0 = 0,
    // Start tuning
    eTUNE_START_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - Bypass the tuning logic
    eTUNE_BYP TUNE_BYP : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Freeze/Unfreeze the tuning value
    eTUNE_EN TUNE_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Start/Stop tuning
    eTUNE_START TUNE_START : 1;
    uint32_t _reserved_3 : 9;
    // read-write - Program the oscillator frequency
    uint32_t OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2 &ref() { return *reinterpret_cast<volatile CTRL2*>(0x00000020); }
};

// Control Register 2
union CTRL2_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - Bypass the tuning logic
    uint32_t TUNE_BYP : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Freeze/Unfreeze the tuning value
    uint32_t TUNE_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Start/Stop tuning
    uint32_t TUNE_START : 1;
    uint32_t _reserved_3 : 9;
    // read-write - Program the oscillator frequency
    uint32_t OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2_SET &ref() { return *reinterpret_cast<volatile CTRL2_SET*>(0x00000024); }
};

// Control Register 2
union CTRL2_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - Bypass the tuning logic
    uint32_t TUNE_BYP : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Freeze/Unfreeze the tuning value
    uint32_t TUNE_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Start/Stop tuning
    uint32_t TUNE_START : 1;
    uint32_t _reserved_3 : 9;
    // read-write - Program the oscillator frequency
    uint32_t OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2_CLR &ref() { return *reinterpret_cast<volatile CTRL2_CLR*>(0x00000028); }
};

// Control Register 2
union CTRL2_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - Bypass the tuning logic
    uint32_t TUNE_BYP : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Freeze/Unfreeze the tuning value
    uint32_t TUNE_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Start/Stop tuning
    uint32_t TUNE_START : 1;
    uint32_t _reserved_3 : 9;
    // read-write - Program the oscillator frequency
    uint32_t OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2_TOG &ref() { return *reinterpret_cast<volatile CTRL2_TOG*>(0x0000002C); }
};

// Control Register 3
union CTRL3 {
  
  // Clear the error flag CLK1M_ERR
  enum class eCLR_ERR : uint32_t {
    // No effect
    eCLR_ERR_0 = 0,
    // Clears the error flag CLK1M_ERR in status register STAT0
    eCLR_ERR_1 = 1,
  };
  
  // Enable 1MHz output Clock
  enum class eEN_1M_CLK : uint32_t {
    // Enable the output (clk_1m_out)
    eEN_1M_CLK_0 = 0,
    // Disable the output (clk_1m_out)
    eEN_1M_CLK_1 = 1,
  };
  
  // Select free/locked 1MHz output
  enum class eMUX_1M_CLK : uint32_t {
    // Select free-running 1MHz to be put out on clk_1m_out
    eMUX_1M_CLK_0 = 0,
    // Select locked 1MHz to be put out on clk_1m_out
    eMUX_1M_CLK_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clear the error flag CLK1M_ERR
    eCLR_ERR CLR_ERR : 1;
    uint32_t _reserved_0 : 7;
    // read-write - Enable 1MHz output Clock
    eEN_1M_CLK EN_1M_CLK : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Select free/locked 1MHz output
    eMUX_1M_CLK MUX_1M_CLK : 1;
    uint32_t _reserved_2 : 5;
    // read-write - Count for the locked clk_1m_out
    uint32_t COUNT_1M_CLK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3 &ref() { return *reinterpret_cast<volatile CTRL3*>(0x00000030); }
};

// Control Register 3
union CTRL3_SET {
  
  // Bit field definition.
  struct {
    // read-write - Clear the error flag CLK1M_ERR
    uint32_t CLR_ERR : 1;
    uint32_t _reserved_0 : 7;
    // read-write - Enable 1MHz output Clock
    uint32_t EN_1M_CLK : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Select free/locked 1MHz output
    uint32_t MUX_1M_CLK : 1;
    uint32_t _reserved_2 : 5;
    // read-write - Count for the locked clk_1m_out
    uint32_t COUNT_1M_CLK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3_SET &ref() { return *reinterpret_cast<volatile CTRL3_SET*>(0x00000034); }
};

// Control Register 3
union CTRL3_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Clear the error flag CLK1M_ERR
    uint32_t CLR_ERR : 1;
    uint32_t _reserved_0 : 7;
    // read-write - Enable 1MHz output Clock
    uint32_t EN_1M_CLK : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Select free/locked 1MHz output
    uint32_t MUX_1M_CLK : 1;
    uint32_t _reserved_2 : 5;
    // read-write - Count for the locked clk_1m_out
    uint32_t COUNT_1M_CLK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3_CLR &ref() { return *reinterpret_cast<volatile CTRL3_CLR*>(0x00000038); }
};

// Control Register 3
union CTRL3_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Clear the error flag CLK1M_ERR
    uint32_t CLR_ERR : 1;
    uint32_t _reserved_0 : 7;
    // read-write - Enable 1MHz output Clock
    uint32_t EN_1M_CLK : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Select free/locked 1MHz output
    uint32_t MUX_1M_CLK : 1;
    uint32_t _reserved_2 : 5;
    // read-write - Count for the locked clk_1m_out
    uint32_t COUNT_1M_CLK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3_TOG &ref() { return *reinterpret_cast<volatile CTRL3_TOG*>(0x0000003C); }
};

// Status Register 0
union STAT0 {
  
  // Error flag for clk_1m_locked
  enum class eCLK1M_ERR : uint32_t {
    // No effect
    eCLK1M_ERR_0 = 0,
    // The count value has been reached within one divided ref_clk period
    eCLK1M_ERR_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Error flag for clk_1m_locked
    eCLK1M_ERR CLK1M_ERR : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0 &ref() { return *reinterpret_cast<volatile STAT0*>(0x00000050); }
};

// Status Register 0
union STAT0_SET {
  
  // Bit field definition.
  struct {
    // read-only - Error flag for clk_1m_locked
    uint32_t CLK1M_ERR : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_SET &ref() { return *reinterpret_cast<volatile STAT0_SET*>(0x00000054); }
};

// Status Register 0
union STAT0_CLR {
  
  // Bit field definition.
  struct {
    // read-only - Error flag for clk_1m_locked
    uint32_t CLK1M_ERR : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_CLR &ref() { return *reinterpret_cast<volatile STAT0_CLR*>(0x00000058); }
};

// Status Register 0
union STAT0_TOG {
  
  // Bit field definition.
  struct {
    // read-only - Error flag for clk_1m_locked
    uint32_t CLK1M_ERR : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_TOG &ref() { return *reinterpret_cast<volatile STAT0_TOG*>(0x0000005C); }
};

// Status Register 1
union STAT1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-only - Current count for the fast clock
    uint32_t CURR_COUNT_VAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT1 &ref() { return *reinterpret_cast<volatile STAT1*>(0x00000060); }
};

// Status Register 1
union STAT1_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-only - Current count for the fast clock
    uint32_t CURR_COUNT_VAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT1_SET &ref() { return *reinterpret_cast<volatile STAT1_SET*>(0x00000064); }
};

// Status Register 1
union STAT1_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-only - Current count for the fast clock
    uint32_t CURR_COUNT_VAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT1_CLR &ref() { return *reinterpret_cast<volatile STAT1_CLR*>(0x00000068); }
};

// Status Register 1
union STAT1_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-only - Current count for the fast clock
    uint32_t CURR_COUNT_VAL : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT1_TOG &ref() { return *reinterpret_cast<volatile STAT1_TOG*>(0x0000006C); }
};

// Status Register 2
union STAT2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-only - Current tuning value used by oscillator
    uint32_t CURR_OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT2 &ref() { return *reinterpret_cast<volatile STAT2*>(0x00000070); }
};

// Status Register 2
union STAT2_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-only - Current tuning value used by oscillator
    uint32_t CURR_OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT2_SET &ref() { return *reinterpret_cast<volatile STAT2_SET*>(0x00000074); }
};

// Status Register 2
union STAT2_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-only - Current tuning value used by oscillator
    uint32_t CURR_OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT2_CLR &ref() { return *reinterpret_cast<volatile STAT2_CLR*>(0x00000078); }
};

// Status Register 2
union STAT2_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-only - Current tuning value used by oscillator
    uint32_t CURR_OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT2_TOG &ref() { return *reinterpret_cast<volatile STAT2_TOG*>(0x0000007C); }
};


} // namespace nOSC_RC_400M