#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

#include "register32.hpp"

// Register definitions for GPIO9
//
// GPIO
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nGPIO9 {

// GPIO data register
struct DR_t : public Register {
  DR_t() : Register(0x40c64000) {}

  
  // DR data bits
  //
  uint32_t GetDR() const { return GetBits<32>(0).to_ulong(); }
  void WaitForDR(uint32_t value) { WaitForBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO direction register
struct GDIR_t : public Register {
  GDIR_t() : Register(0x40c64004) {}

  
  // GPIO direction bits
  //
  uint32_t GetGDIR() const { return GetBits<32>(0).to_ulong(); }
  void WaitForGDIR(uint32_t value) { WaitForBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO pad status register
struct PSR_t : public Register {
  PSR_t() : Register(0x40c64008) {}

  
  // GPIO pad status bits
  //
  uint32_t GetPSR() const { return GetBits<32>(0).to_ulong(); }
  void WaitForPSR(uint32_t value) { WaitForBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO interrupt configuration register1
struct ICR1_t : public Register {
  ICR1_t() : Register(0x40c6400c) {}

  
  // Interrupt configuration field for GPIO interrupt 0
  //
  enum class eICR0 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 0 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 0 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 0 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 0 is falling-edge sensitive.
  };
  eICR0 GetICR0() const { return static_cast<eICR0>(GetBits<2>(0).to_ulong()); }
  void WaitForICR0(eICR0 value) { WaitForBits<2>(0, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 1
  //
  enum class eICR1 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 1 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 1 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 1 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 1 is falling-edge sensitive.
  };
  eICR1 GetICR1() const { return static_cast<eICR1>(GetBits<2>(2).to_ulong()); }
  void WaitForICR1(eICR1 value) { WaitForBits<2>(2, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 2
  //
  enum class eICR2 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 2 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 2 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 2 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 2 is falling-edge sensitive.
  };
  eICR2 GetICR2() const { return static_cast<eICR2>(GetBits<2>(4).to_ulong()); }
  void WaitForICR2(eICR2 value) { WaitForBits<2>(4, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 3
  //
  enum class eICR3 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 3 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 3 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 3 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 3 is falling-edge sensitive.
  };
  eICR3 GetICR3() const { return static_cast<eICR3>(GetBits<2>(6).to_ulong()); }
  void WaitForICR3(eICR3 value) { WaitForBits<2>(6, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 4
  //
  enum class eICR4 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 4 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 4 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 4 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 4 is falling-edge sensitive.
  };
  eICR4 GetICR4() const { return static_cast<eICR4>(GetBits<2>(8).to_ulong()); }
  void WaitForICR4(eICR4 value) { WaitForBits<2>(8, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 5
  //
  enum class eICR5 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 5 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 5 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 5 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 5 is falling-edge sensitive.
  };
  eICR5 GetICR5() const { return static_cast<eICR5>(GetBits<2>(10).to_ulong()); }
  void WaitForICR5(eICR5 value) { WaitForBits<2>(10, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 6
  //
  enum class eICR6 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 6 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 6 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 6 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 6 is falling-edge sensitive.
  };
  eICR6 GetICR6() const { return static_cast<eICR6>(GetBits<2>(12).to_ulong()); }
  void WaitForICR6(eICR6 value) { WaitForBits<2>(12, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 7
  //
  enum class eICR7 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 7 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 7 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 7 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 7 is falling-edge sensitive.
  };
  eICR7 GetICR7() const { return static_cast<eICR7>(GetBits<2>(14).to_ulong()); }
  void WaitForICR7(eICR7 value) { WaitForBits<2>(14, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 8
  //
  enum class eICR8 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 8 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 8 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 8 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 8 is falling-edge sensitive.
  };
  eICR8 GetICR8() const { return static_cast<eICR8>(GetBits<2>(16).to_ulong()); }
  void WaitForICR8(eICR8 value) { WaitForBits<2>(16, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 9
  //
  enum class eICR9 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 9 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 9 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 9 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 9 is falling-edge sensitive.
  };
  eICR9 GetICR9() const { return static_cast<eICR9>(GetBits<2>(18).to_ulong()); }
  void WaitForICR9(eICR9 value) { WaitForBits<2>(18, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 10
  //
  enum class eICR10 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 10 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 10 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 10 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 10 is falling-edge sensitive.
  };
  eICR10 GetICR10() const { return static_cast<eICR10>(GetBits<2>(20).to_ulong()); }
  void WaitForICR10(eICR10 value) { WaitForBits<2>(20, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 11
  //
  enum class eICR11 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 11 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 11 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 11 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 11 is falling-edge sensitive.
  };
  eICR11 GetICR11() const { return static_cast<eICR11>(GetBits<2>(22).to_ulong()); }
  void WaitForICR11(eICR11 value) { WaitForBits<2>(22, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 12
  //
  enum class eICR12 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 12 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 12 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 12 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 12 is falling-edge sensitive.
  };
  eICR12 GetICR12() const { return static_cast<eICR12>(GetBits<2>(24).to_ulong()); }
  void WaitForICR12(eICR12 value) { WaitForBits<2>(24, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 13
  //
  enum class eICR13 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 13 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 13 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 13 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 13 is falling-edge sensitive.
  };
  eICR13 GetICR13() const { return static_cast<eICR13>(GetBits<2>(26).to_ulong()); }
  void WaitForICR13(eICR13 value) { WaitForBits<2>(26, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 14
  //
  enum class eICR14 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 14 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 14 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 14 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 14 is falling-edge sensitive.
  };
  eICR14 GetICR14() const { return static_cast<eICR14>(GetBits<2>(28).to_ulong()); }
  void WaitForICR14(eICR14 value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 15
  //
  enum class eICR15 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 15 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 15 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 15 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 15 is falling-edge sensitive.
  };
  eICR15 GetICR15() const { return static_cast<eICR15>(GetBits<2>(30).to_ulong()); }
  void WaitForICR15(eICR15 value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO interrupt configuration register2
struct ICR2_t : public Register {
  ICR2_t() : Register(0x40c64010) {}

  
  // Interrupt configuration field for GPIO interrupt 16
  //
  enum class eICR16 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 16 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 16 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 16 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 16 is falling-edge sensitive.
  };
  eICR16 GetICR16() const { return static_cast<eICR16>(GetBits<2>(0).to_ulong()); }
  void WaitForICR16(eICR16 value) { WaitForBits<2>(0, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 17
  //
  enum class eICR17 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 17 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 17 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 17 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 17 is falling-edge sensitive.
  };
  eICR17 GetICR17() const { return static_cast<eICR17>(GetBits<2>(2).to_ulong()); }
  void WaitForICR17(eICR17 value) { WaitForBits<2>(2, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 18
  //
  enum class eICR18 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 18 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 18 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 18 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 18 is falling-edge sensitive.
  };
  eICR18 GetICR18() const { return static_cast<eICR18>(GetBits<2>(4).to_ulong()); }
  void WaitForICR18(eICR18 value) { WaitForBits<2>(4, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 19
  //
  enum class eICR19 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 19 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 19 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 19 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 19 is falling-edge sensitive.
  };
  eICR19 GetICR19() const { return static_cast<eICR19>(GetBits<2>(6).to_ulong()); }
  void WaitForICR19(eICR19 value) { WaitForBits<2>(6, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 20
  //
  enum class eICR20 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 20 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 20 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 20 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 20 is falling-edge sensitive.
  };
  eICR20 GetICR20() const { return static_cast<eICR20>(GetBits<2>(8).to_ulong()); }
  void WaitForICR20(eICR20 value) { WaitForBits<2>(8, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 21
  //
  enum class eICR21 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 21 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 21 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 21 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 21 is falling-edge sensitive.
  };
  eICR21 GetICR21() const { return static_cast<eICR21>(GetBits<2>(10).to_ulong()); }
  void WaitForICR21(eICR21 value) { WaitForBits<2>(10, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 22
  //
  enum class eICR22 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 22 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 22 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 22 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 22 is falling-edge sensitive.
  };
  eICR22 GetICR22() const { return static_cast<eICR22>(GetBits<2>(12).to_ulong()); }
  void WaitForICR22(eICR22 value) { WaitForBits<2>(12, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 23
  //
  enum class eICR23 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 23 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 23 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 23 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 23 is falling-edge sensitive.
  };
  eICR23 GetICR23() const { return static_cast<eICR23>(GetBits<2>(14).to_ulong()); }
  void WaitForICR23(eICR23 value) { WaitForBits<2>(14, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 24
  //
  enum class eICR24 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 24 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 24 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 24 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 24 is falling-edge sensitive.
  };
  eICR24 GetICR24() const { return static_cast<eICR24>(GetBits<2>(16).to_ulong()); }
  void WaitForICR24(eICR24 value) { WaitForBits<2>(16, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 25
  //
  enum class eICR25 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 25 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 25 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 25 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 25 is falling-edge sensitive.
  };
  eICR25 GetICR25() const { return static_cast<eICR25>(GetBits<2>(18).to_ulong()); }
  void WaitForICR25(eICR25 value) { WaitForBits<2>(18, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 26
  //
  enum class eICR26 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 26 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 26 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 26 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 26 is falling-edge sensitive.
  };
  eICR26 GetICR26() const { return static_cast<eICR26>(GetBits<2>(20).to_ulong()); }
  void WaitForICR26(eICR26 value) { WaitForBits<2>(20, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 27
  //
  enum class eICR27 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 27 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 27 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 27 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 27 is falling-edge sensitive.
  };
  eICR27 GetICR27() const { return static_cast<eICR27>(GetBits<2>(22).to_ulong()); }
  void WaitForICR27(eICR27 value) { WaitForBits<2>(22, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 28
  //
  enum class eICR28 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 28 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 28 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 28 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 28 is falling-edge sensitive.
  };
  eICR28 GetICR28() const { return static_cast<eICR28>(GetBits<2>(24).to_ulong()); }
  void WaitForICR28(eICR28 value) { WaitForBits<2>(24, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 29
  //
  enum class eICR29 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 29 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 29 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 29 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 29 is falling-edge sensitive.
  };
  eICR29 GetICR29() const { return static_cast<eICR29>(GetBits<2>(26).to_ulong()); }
  void WaitForICR29(eICR29 value) { WaitForBits<2>(26, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 30
  //
  enum class eICR30 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 30 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 30 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 30 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 30 is falling-edge sensitive.
  };
  eICR30 GetICR30() const { return static_cast<eICR30>(GetBits<2>(28).to_ulong()); }
  void WaitForICR30(eICR30 value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Interrupt configuration field for GPIO interrupt 31
  //
  enum class eICR31 : uint32_t {
    eLOW_LEVEL=0, // Interrupt 31 is low-level sensitive.
    eHIGH_LEVEL=1, // Interrupt 31 is high-level sensitive.
    eRISING_EDGE=2, // Interrupt 31 is rising-edge sensitive.
    eFALLING_EDGE=3, // Interrupt 31 is falling-edge sensitive.
  };
  eICR31 GetICR31() const { return static_cast<eICR31>(GetBits<2>(30).to_ulong()); }
  void WaitForICR31(eICR31 value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO interrupt mask register
struct IMR_t : public Register {
  IMR_t() : Register(0x40c64014) {}

  
  // Interrupt Mask bits
  //
  uint32_t GetIMR() const { return GetBits<32>(0).to_ulong(); }
  void WaitForIMR(uint32_t value) { WaitForBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO interrupt status register
struct ISR_t : public Register {
  ISR_t() : Register(0x40c64018) {}

  
  // Interrupt status bits
  //
  uint32_t GetISR() const { return GetBits<32>(0).to_ulong(); }
  void WaitForISR(uint32_t value) { WaitForBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO edge select register
struct EDGE_SEL_t : public Register {
  EDGE_SEL_t() : Register(0x40c6401c) {}

  
  // Edge select
  //
  uint32_t GetGPIO_EDGE_SEL() const { return GetBits<32>(0).to_ulong(); }
  void WaitForGPIO_EDGE_SEL(uint32_t value) { WaitForBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO data register SET
struct DR_SET_t : public Register {
  DR_SET_t() : Register(0x40c64084) {}

  
  // Set
  //
  void SetDR_SET(uint32_t value) { SetBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO data register CLEAR
struct DR_CLEAR_t : public Register {
  DR_CLEAR_t() : Register(0x40c64088) {}

  
  // Clear
  //
  void SetDR_CLEAR(uint32_t value) { SetBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPIO data register TOGGLE
struct DR_TOGGLE_t : public Register {
  DR_TOGGLE_t() : Register(0x40c6408c) {}

  
  // Toggle
  //
  void SetDR_TOGGLE(uint32_t value) { SetBits<32>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};


struct Registers {
  DR_t DR{};
  GDIR_t GDIR{};
  PSR_t PSR{};
  ICR1_t ICR1{};
  ICR2_t ICR2{};
  IMR_t IMR{};
  ISR_t ISR{};
  EDGE_SEL_t EDGE_SEL{};
  DR_SET_t DR_SET{};
  DR_CLEAR_t DR_CLEAR{};
  DR_TOGGLE_t DR_TOGGLE{};
};

} // namespace GPIO9