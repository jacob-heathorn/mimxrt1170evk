#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// AOI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nAOI1 {


// Boolean Function Term 0 and 1 Configuration Register for EVENTn
//
union BFCRT010 {
  
  enum class ePT1_DC : uint32_t {
    ePT1_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT1_DC_1 = 1, // Pass the D input in this product term
    ePT1_DC_2 = 2, // Complement the D input in this product term
    ePT1_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT1_CC : uint32_t {
    ePT1_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT1_CC_1 = 1, // Pass the C input in this product term
    ePT1_CC_2 = 2, // Complement the C input in this product term
    ePT1_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT1_BC : uint32_t {
    ePT1_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT1_BC_1 = 1, // Pass the B input in this product term
    ePT1_BC_2 = 2, // Complement the B input in this product term
    ePT1_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT1_AC : uint32_t {
    ePT1_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT1_AC_1 = 1, // Pass the A input in this product term
    ePT1_AC_2 = 2, // Complement the A input in this product term
    ePT1_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT0_DC : uint32_t {
    ePT0_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT0_DC_1 = 1, // Pass the D input in this product term
    ePT0_DC_2 = 2, // Complement the D input in this product term
    ePT0_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT0_CC : uint32_t {
    ePT0_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT0_CC_1 = 1, // Pass the C input in this product term
    ePT0_CC_2 = 2, // Complement the C input in this product term
    ePT0_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT0_BC : uint32_t {
    ePT0_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT0_BC_1 = 1, // Pass the B input in this product term
    ePT0_BC_2 = 2, // Complement the B input in this product term
    ePT0_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT0_AC : uint32_t {
    ePT0_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT0_AC_1 = 1, // Pass the A input in this product term
    ePT0_AC_2 = 2, // Complement the A input in this product term
    ePT0_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT1_DC PT1_DC : 2;
    ePT1_CC PT1_CC : 2;
    ePT1_BC PT1_BC : 2;
    ePT1_AC PT1_AC : 2;
    ePT0_DC PT0_DC : 2;
    ePT0_CC PT0_CC : 2;
    ePT0_BC PT0_BC : 2;
    ePT0_AC PT0_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT010() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT010 &Instance() { return *reinterpret_cast<volatile BFCRT010*>(0x400B8000); }
};

// Boolean Function Term 2 and 3 Configuration Register for EVENTn
//
union BFCRT230 {
  
  enum class ePT3_DC : uint32_t {
    ePT3_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT3_DC_1 = 1, // Pass the D input in this product term
    ePT3_DC_2 = 2, // Complement the D input in this product term
    ePT3_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT3_CC : uint32_t {
    ePT3_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT3_CC_1 = 1, // Pass the C input in this product term
    ePT3_CC_2 = 2, // Complement the C input in this product term
    ePT3_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT3_BC : uint32_t {
    ePT3_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT3_BC_1 = 1, // Pass the B input in this product term
    ePT3_BC_2 = 2, // Complement the B input in this product term
    ePT3_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT3_AC : uint32_t {
    ePT3_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT3_AC_1 = 1, // Pass the A input in this product term
    ePT3_AC_2 = 2, // Complement the A input in this product term
    ePT3_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT2_DC : uint32_t {
    ePT2_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT2_DC_1 = 1, // Pass the D input in this product term
    ePT2_DC_2 = 2, // Complement the D input in this product term
    ePT2_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT2_CC : uint32_t {
    ePT2_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT2_CC_1 = 1, // Pass the C input in this product term
    ePT2_CC_2 = 2, // Complement the C input in this product term
    ePT2_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT2_BC : uint32_t {
    ePT2_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT2_BC_1 = 1, // Pass the B input in this product term
    ePT2_BC_2 = 2, // Complement the B input in this product term
    ePT2_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT2_AC : uint32_t {
    ePT2_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT2_AC_1 = 1, // Pass the A input in this product term
    ePT2_AC_2 = 2, // Complement the A input in this product term
    ePT2_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT3_DC PT3_DC : 2;
    ePT3_CC PT3_CC : 2;
    ePT3_BC PT3_BC : 2;
    ePT3_AC PT3_AC : 2;
    ePT2_DC PT2_DC : 2;
    ePT2_CC PT2_CC : 2;
    ePT2_BC PT2_BC : 2;
    ePT2_AC PT2_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT230() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT230 &Instance() { return *reinterpret_cast<volatile BFCRT230*>(0x400B8002); }
};

// Boolean Function Term 0 and 1 Configuration Register for EVENTn
//
union BFCRT011 {
  
  enum class ePT1_DC : uint32_t {
    ePT1_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT1_DC_1 = 1, // Pass the D input in this product term
    ePT1_DC_2 = 2, // Complement the D input in this product term
    ePT1_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT1_CC : uint32_t {
    ePT1_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT1_CC_1 = 1, // Pass the C input in this product term
    ePT1_CC_2 = 2, // Complement the C input in this product term
    ePT1_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT1_BC : uint32_t {
    ePT1_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT1_BC_1 = 1, // Pass the B input in this product term
    ePT1_BC_2 = 2, // Complement the B input in this product term
    ePT1_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT1_AC : uint32_t {
    ePT1_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT1_AC_1 = 1, // Pass the A input in this product term
    ePT1_AC_2 = 2, // Complement the A input in this product term
    ePT1_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT0_DC : uint32_t {
    ePT0_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT0_DC_1 = 1, // Pass the D input in this product term
    ePT0_DC_2 = 2, // Complement the D input in this product term
    ePT0_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT0_CC : uint32_t {
    ePT0_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT0_CC_1 = 1, // Pass the C input in this product term
    ePT0_CC_2 = 2, // Complement the C input in this product term
    ePT0_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT0_BC : uint32_t {
    ePT0_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT0_BC_1 = 1, // Pass the B input in this product term
    ePT0_BC_2 = 2, // Complement the B input in this product term
    ePT0_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT0_AC : uint32_t {
    ePT0_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT0_AC_1 = 1, // Pass the A input in this product term
    ePT0_AC_2 = 2, // Complement the A input in this product term
    ePT0_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT1_DC PT1_DC : 2;
    ePT1_CC PT1_CC : 2;
    ePT1_BC PT1_BC : 2;
    ePT1_AC PT1_AC : 2;
    ePT0_DC PT0_DC : 2;
    ePT0_CC PT0_CC : 2;
    ePT0_BC PT0_BC : 2;
    ePT0_AC PT0_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT011() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT011 &Instance() { return *reinterpret_cast<volatile BFCRT011*>(0x400B8004); }
};

// Boolean Function Term 2 and 3 Configuration Register for EVENTn
//
union BFCRT231 {
  
  enum class ePT3_DC : uint32_t {
    ePT3_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT3_DC_1 = 1, // Pass the D input in this product term
    ePT3_DC_2 = 2, // Complement the D input in this product term
    ePT3_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT3_CC : uint32_t {
    ePT3_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT3_CC_1 = 1, // Pass the C input in this product term
    ePT3_CC_2 = 2, // Complement the C input in this product term
    ePT3_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT3_BC : uint32_t {
    ePT3_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT3_BC_1 = 1, // Pass the B input in this product term
    ePT3_BC_2 = 2, // Complement the B input in this product term
    ePT3_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT3_AC : uint32_t {
    ePT3_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT3_AC_1 = 1, // Pass the A input in this product term
    ePT3_AC_2 = 2, // Complement the A input in this product term
    ePT3_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT2_DC : uint32_t {
    ePT2_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT2_DC_1 = 1, // Pass the D input in this product term
    ePT2_DC_2 = 2, // Complement the D input in this product term
    ePT2_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT2_CC : uint32_t {
    ePT2_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT2_CC_1 = 1, // Pass the C input in this product term
    ePT2_CC_2 = 2, // Complement the C input in this product term
    ePT2_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT2_BC : uint32_t {
    ePT2_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT2_BC_1 = 1, // Pass the B input in this product term
    ePT2_BC_2 = 2, // Complement the B input in this product term
    ePT2_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT2_AC : uint32_t {
    ePT2_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT2_AC_1 = 1, // Pass the A input in this product term
    ePT2_AC_2 = 2, // Complement the A input in this product term
    ePT2_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT3_DC PT3_DC : 2;
    ePT3_CC PT3_CC : 2;
    ePT3_BC PT3_BC : 2;
    ePT3_AC PT3_AC : 2;
    ePT2_DC PT2_DC : 2;
    ePT2_CC PT2_CC : 2;
    ePT2_BC PT2_BC : 2;
    ePT2_AC PT2_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT231() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT231 &Instance() { return *reinterpret_cast<volatile BFCRT231*>(0x400B8006); }
};

// Boolean Function Term 0 and 1 Configuration Register for EVENTn
//
union BFCRT012 {
  
  enum class ePT1_DC : uint32_t {
    ePT1_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT1_DC_1 = 1, // Pass the D input in this product term
    ePT1_DC_2 = 2, // Complement the D input in this product term
    ePT1_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT1_CC : uint32_t {
    ePT1_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT1_CC_1 = 1, // Pass the C input in this product term
    ePT1_CC_2 = 2, // Complement the C input in this product term
    ePT1_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT1_BC : uint32_t {
    ePT1_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT1_BC_1 = 1, // Pass the B input in this product term
    ePT1_BC_2 = 2, // Complement the B input in this product term
    ePT1_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT1_AC : uint32_t {
    ePT1_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT1_AC_1 = 1, // Pass the A input in this product term
    ePT1_AC_2 = 2, // Complement the A input in this product term
    ePT1_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT0_DC : uint32_t {
    ePT0_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT0_DC_1 = 1, // Pass the D input in this product term
    ePT0_DC_2 = 2, // Complement the D input in this product term
    ePT0_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT0_CC : uint32_t {
    ePT0_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT0_CC_1 = 1, // Pass the C input in this product term
    ePT0_CC_2 = 2, // Complement the C input in this product term
    ePT0_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT0_BC : uint32_t {
    ePT0_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT0_BC_1 = 1, // Pass the B input in this product term
    ePT0_BC_2 = 2, // Complement the B input in this product term
    ePT0_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT0_AC : uint32_t {
    ePT0_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT0_AC_1 = 1, // Pass the A input in this product term
    ePT0_AC_2 = 2, // Complement the A input in this product term
    ePT0_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT1_DC PT1_DC : 2;
    ePT1_CC PT1_CC : 2;
    ePT1_BC PT1_BC : 2;
    ePT1_AC PT1_AC : 2;
    ePT0_DC PT0_DC : 2;
    ePT0_CC PT0_CC : 2;
    ePT0_BC PT0_BC : 2;
    ePT0_AC PT0_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT012() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT012 &Instance() { return *reinterpret_cast<volatile BFCRT012*>(0x400B8008); }
};

// Boolean Function Term 2 and 3 Configuration Register for EVENTn
//
union BFCRT232 {
  
  enum class ePT3_DC : uint32_t {
    ePT3_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT3_DC_1 = 1, // Pass the D input in this product term
    ePT3_DC_2 = 2, // Complement the D input in this product term
    ePT3_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT3_CC : uint32_t {
    ePT3_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT3_CC_1 = 1, // Pass the C input in this product term
    ePT3_CC_2 = 2, // Complement the C input in this product term
    ePT3_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT3_BC : uint32_t {
    ePT3_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT3_BC_1 = 1, // Pass the B input in this product term
    ePT3_BC_2 = 2, // Complement the B input in this product term
    ePT3_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT3_AC : uint32_t {
    ePT3_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT3_AC_1 = 1, // Pass the A input in this product term
    ePT3_AC_2 = 2, // Complement the A input in this product term
    ePT3_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT2_DC : uint32_t {
    ePT2_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT2_DC_1 = 1, // Pass the D input in this product term
    ePT2_DC_2 = 2, // Complement the D input in this product term
    ePT2_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT2_CC : uint32_t {
    ePT2_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT2_CC_1 = 1, // Pass the C input in this product term
    ePT2_CC_2 = 2, // Complement the C input in this product term
    ePT2_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT2_BC : uint32_t {
    ePT2_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT2_BC_1 = 1, // Pass the B input in this product term
    ePT2_BC_2 = 2, // Complement the B input in this product term
    ePT2_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT2_AC : uint32_t {
    ePT2_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT2_AC_1 = 1, // Pass the A input in this product term
    ePT2_AC_2 = 2, // Complement the A input in this product term
    ePT2_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT3_DC PT3_DC : 2;
    ePT3_CC PT3_CC : 2;
    ePT3_BC PT3_BC : 2;
    ePT3_AC PT3_AC : 2;
    ePT2_DC PT2_DC : 2;
    ePT2_CC PT2_CC : 2;
    ePT2_BC PT2_BC : 2;
    ePT2_AC PT2_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT232() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT232 &Instance() { return *reinterpret_cast<volatile BFCRT232*>(0x400B800A); }
};

// Boolean Function Term 0 and 1 Configuration Register for EVENTn
//
union BFCRT013 {
  
  enum class ePT1_DC : uint32_t {
    ePT1_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT1_DC_1 = 1, // Pass the D input in this product term
    ePT1_DC_2 = 2, // Complement the D input in this product term
    ePT1_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT1_CC : uint32_t {
    ePT1_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT1_CC_1 = 1, // Pass the C input in this product term
    ePT1_CC_2 = 2, // Complement the C input in this product term
    ePT1_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT1_BC : uint32_t {
    ePT1_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT1_BC_1 = 1, // Pass the B input in this product term
    ePT1_BC_2 = 2, // Complement the B input in this product term
    ePT1_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT1_AC : uint32_t {
    ePT1_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT1_AC_1 = 1, // Pass the A input in this product term
    ePT1_AC_2 = 2, // Complement the A input in this product term
    ePT1_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT0_DC : uint32_t {
    ePT0_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT0_DC_1 = 1, // Pass the D input in this product term
    ePT0_DC_2 = 2, // Complement the D input in this product term
    ePT0_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT0_CC : uint32_t {
    ePT0_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT0_CC_1 = 1, // Pass the C input in this product term
    ePT0_CC_2 = 2, // Complement the C input in this product term
    ePT0_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT0_BC : uint32_t {
    ePT0_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT0_BC_1 = 1, // Pass the B input in this product term
    ePT0_BC_2 = 2, // Complement the B input in this product term
    ePT0_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT0_AC : uint32_t {
    ePT0_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT0_AC_1 = 1, // Pass the A input in this product term
    ePT0_AC_2 = 2, // Complement the A input in this product term
    ePT0_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT1_DC PT1_DC : 2;
    ePT1_CC PT1_CC : 2;
    ePT1_BC PT1_BC : 2;
    ePT1_AC PT1_AC : 2;
    ePT0_DC PT0_DC : 2;
    ePT0_CC PT0_CC : 2;
    ePT0_BC PT0_BC : 2;
    ePT0_AC PT0_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT013() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT013 &Instance() { return *reinterpret_cast<volatile BFCRT013*>(0x400B800C); }
};

// Boolean Function Term 2 and 3 Configuration Register for EVENTn
//
union BFCRT233 {
  
  enum class ePT3_DC : uint32_t {
    ePT3_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT3_DC_1 = 1, // Pass the D input in this product term
    ePT3_DC_2 = 2, // Complement the D input in this product term
    ePT3_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT3_CC : uint32_t {
    ePT3_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT3_CC_1 = 1, // Pass the C input in this product term
    ePT3_CC_2 = 2, // Complement the C input in this product term
    ePT3_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT3_BC : uint32_t {
    ePT3_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT3_BC_1 = 1, // Pass the B input in this product term
    ePT3_BC_2 = 2, // Complement the B input in this product term
    ePT3_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT3_AC : uint32_t {
    ePT3_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT3_AC_1 = 1, // Pass the A input in this product term
    ePT3_AC_2 = 2, // Complement the A input in this product term
    ePT3_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  enum class ePT2_DC : uint32_t {
    ePT2_DC_0 = 0, // Force the D input in this product term to a logical zero
    ePT2_DC_1 = 1, // Pass the D input in this product term
    ePT2_DC_2 = 2, // Complement the D input in this product term
    ePT2_DC_3 = 3, // Force the D input in this product term to a logical one
  };
  
  enum class ePT2_CC : uint32_t {
    ePT2_CC_0 = 0, // Force the C input in this product term to a logical zero
    ePT2_CC_1 = 1, // Pass the C input in this product term
    ePT2_CC_2 = 2, // Complement the C input in this product term
    ePT2_CC_3 = 3, // Force the C input in this product term to a logical one
  };
  
  enum class ePT2_BC : uint32_t {
    ePT2_BC_0 = 0, // Force the B input in this product term to a logical zero
    ePT2_BC_1 = 1, // Pass the B input in this product term
    ePT2_BC_2 = 2, // Complement the B input in this product term
    ePT2_BC_3 = 3, // Force the B input in this product term to a logical one
  };
  
  enum class ePT2_AC : uint32_t {
    ePT2_AC_0 = 0, // Force the A input in this product term to a logical zero
    ePT2_AC_1 = 1, // Pass the A input in this product term
    ePT2_AC_2 = 2, // Complement the A input in this product term
    ePT2_AC_3 = 3, // Force the A input in this product term to a logical one
  };
  
  // Bit field definition.
  struct {
    ePT3_DC PT3_DC : 2;
    ePT3_CC PT3_CC : 2;
    ePT3_BC PT3_BC : 2;
    ePT3_AC PT3_AC : 2;
    ePT2_DC PT2_DC : 2;
    ePT2_CC PT2_CC : 2;
    ePT2_BC PT2_BC : 2;
    ePT2_AC PT2_AC : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BFCRT233() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BFCRT233 &Instance() { return *reinterpret_cast<volatile BFCRT233*>(0x400B800E); }
};


} // namespace nAOI1