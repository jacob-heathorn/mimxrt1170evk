#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

#include "register32.hpp"

// Register definitions for IOMUXC_GPR
//
// IOMUXC GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nIOMUXC_GPR {

// GPR0 General Purpose Register
struct GPR0_t : public Register {
  GPR0_t() : Register(0x400e4000) {}

  
  // SAI1 MCLK1 source select
  //
  void SetSAI1_MCLK1_SEL(uint32_t value) { SetBits<3>(0, value); }
  uint32_t GetSAI1_MCLK1_SEL() const { return GetBits<3>(0).to_ulong(); }
  void WaitForSAI1_MCLK1_SEL(uint32_t value) { WaitForBits<3>(0, value); }
  
  // SAI1 MCLK2 source select
  //
  void SetSAI1_MCLK2_SEL(uint32_t value) { SetBits<3>(3, value); }
  uint32_t GetSAI1_MCLK2_SEL() const { return GetBits<3>(3).to_ulong(); }
  void WaitForSAI1_MCLK2_SEL(uint32_t value) { WaitForBits<3>(3, value); }
  
  // SAI1 MCLK3 source select
  //
  void SetSAI1_MCLK3_SEL(uint32_t value) { SetBits<2>(6, value); }
  uint32_t GetSAI1_MCLK3_SEL() const { return GetBits<2>(6).to_ulong(); }
  void WaitForSAI1_MCLK3_SEL(uint32_t value) { WaitForBits<2>(6, value); }
  
  // SAI1_MCLK signal direction control
  //
  void SetSAI1_MCLK_DIR(bool value) { SetBit(8, value); }
  bool GetSAI1_MCLK_DIR() const { return GetBit(8); }
  void WaitForSAI1_MCLK_DIR(bool value) { WaitForBit(8, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000018); }
};

// GPR1 General Purpose Register
struct GPR1_t : public Register {
  GPR1_t() : Register(0x400e4004) {}

  
  // SAI2 MCLK3 source select
  //
  void SetSAI2_MCLK3_SEL(uint32_t value) { SetBits<2>(0, value); }
  uint32_t GetSAI2_MCLK3_SEL() const { return GetBits<2>(0).to_ulong(); }
  void WaitForSAI2_MCLK3_SEL(uint32_t value) { WaitForBits<2>(0, value); }
  
  // SAI2_MCLK signal direction control
  //
  void SetSAI2_MCLK_DIR(bool value) { SetBit(8, value); }
  bool GetSAI2_MCLK_DIR() const { return GetBit(8); }
  void WaitForSAI2_MCLK_DIR(bool value) { WaitForBit(8, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR2 General Purpose Register
struct GPR2_t : public Register {
  GPR2_t() : Register(0x400e4008) {}

  
  // SAI3 MCLK3 source select
  //
  void SetSAI3_MCLK3_SEL(uint32_t value) { SetBits<2>(0, value); }
  uint32_t GetSAI3_MCLK3_SEL() const { return GetBits<2>(0).to_ulong(); }
  void WaitForSAI3_MCLK3_SEL(uint32_t value) { WaitForBits<2>(0, value); }
  
  // SAI3_MCLK signal direction control
  //
  void SetSAI3_MCLK_DIR(bool value) { SetBit(8, value); }
  bool GetSAI3_MCLK_DIR() const { return GetBit(8); }
  void WaitForSAI3_MCLK_DIR(bool value) { WaitForBit(8, value); }
  
  // SAI4_MCLK signal direction control
  //
  void SetSAI4_MCLK_DIR(bool value) { SetBit(9, value); }
  bool GetSAI4_MCLK_DIR() const { return GetBit(9); }
  void WaitForSAI4_MCLK_DIR(bool value) { WaitForBit(9, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR3 General Purpose Register
struct GPR3_t : public Register {
  GPR3_t() : Register(0x400e400c) {}

  
  // Divider ratio control for mclk from hmclk.
  //
  void SetMQS_CLK_DIV(uint32_t value) { SetBits<8>(0, value); }
  uint32_t GetMQS_CLK_DIV() const { return GetBits<8>(0).to_ulong(); }
  void WaitForMQS_CLK_DIV(uint32_t value) { WaitForBits<8>(0, value); }
  
  // MQS software reset
  //
  void SetMQS_SW_RST(bool value) { SetBit(8, value); }
  bool GetMQS_SW_RST() const { return GetBit(8); }
  void WaitForMQS_SW_RST(bool value) { WaitForBit(8, value); }
  
  // MQS enable
  //
  void SetMQS_EN(bool value) { SetBit(9, value); }
  bool GetMQS_EN() const { return GetBit(9); }
  void WaitForMQS_EN(bool value) { WaitForBit(9, value); }
  
  // Medium Quality Sound (MQS) Oversample
  //
  void SetMQS_OVERSAMPLE(bool value) { SetBit(10, value); }
  bool GetMQS_OVERSAMPLE() const { return GetBit(10); }
  void WaitForMQS_OVERSAMPLE(bool value) { WaitForBit(10, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR4 General Purpose Register
struct GPR4_t : public Register {
  GPR4_t() : Register(0x400e4010) {}

  
  // ENET TX_CLK select
  //
  void SetENET_TX_CLK_SEL(bool value) { SetBit(0, value); }
  bool GetENET_TX_CLK_SEL() const { return GetBit(0); }
  void WaitForENET_TX_CLK_SEL(bool value) { WaitForBit(0, value); }
  
  // ENET_REF_CLK direction control
  //
  void SetENET_REF_CLK_DIR(bool value) { SetBit(1, value); }
  bool GetENET_REF_CLK_DIR() const { return GetBit(1); }
  void WaitForENET_REF_CLK_DIR(bool value) { WaitForBit(1, value); }
  
  // ENET master timer source select
  //
  void SetENET_TIME_SEL(bool value) { SetBit(2, value); }
  bool GetENET_TIME_SEL() const { return GetBit(2); }
  void WaitForENET_TIME_SEL(bool value) { WaitForBit(2, value); }
  
  // ENET ENET_1588_EVENT0_IN source select
  //
  void SetENET_EVENT0IN_SEL(bool value) { SetBit(3, value); }
  bool GetENET_EVENT0IN_SEL() const { return GetBit(3); }
  void WaitForENET_EVENT0IN_SEL(bool value) { WaitForBit(3, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR5 General Purpose Register
struct GPR5_t : public Register {
  GPR5_t() : Register(0x400e4014) {}

  
  // ENET1G TX_CLK select
  //
  void SetENET1G_TX_CLK_SEL(bool value) { SetBit(0, value); }
  bool GetENET1G_TX_CLK_SEL() const { return GetBit(0); }
  void WaitForENET1G_TX_CLK_SEL(bool value) { WaitForBit(0, value); }
  
  // ENET1G_REF_CLK direction control
  //
  void SetENET1G_REF_CLK_DIR(bool value) { SetBit(1, value); }
  bool GetENET1G_REF_CLK_DIR() const { return GetBit(1); }
  void WaitForENET1G_REF_CLK_DIR(bool value) { WaitForBit(1, value); }
  
  // ENET1G RGMII TX clock output enable
  //
  void SetENET1G_RGMII_EN(bool value) { SetBit(2, value); }
  bool GetENET1G_RGMII_EN() const { return GetBit(2); }
  void WaitForENET1G_RGMII_EN(bool value) { WaitForBit(2, value); }
  
  // ENET1G master timer source select
  //
  void SetENET1G_TIME_SEL(bool value) { SetBit(3, value); }
  bool GetENET1G_TIME_SEL() const { return GetBit(3); }
  void WaitForENET1G_TIME_SEL(bool value) { WaitForBit(3, value); }
  
  // ENET1G ENET_1588_EVENT0_IN source select
  //
  void SetENET1G_EVENT0IN_SEL(bool value) { SetBit(4, value); }
  bool GetENET1G_EVENT0IN_SEL() const { return GetBit(4); }
  void WaitForENET1G_EVENT0IN_SEL(bool value) { WaitForBit(4, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR6 General Purpose Register
struct GPR6_t : public Register {
  GPR6_t() : Register(0x400e4018) {}

  
  // ENET_QOS_REF_CLK direction control
  //
  void SetENET_QOS_REF_CLK_DIR(bool value) { SetBit(0, value); }
  bool GetENET_QOS_REF_CLK_DIR() const { return GetBit(0); }
  void WaitForENET_QOS_REF_CLK_DIR(bool value) { WaitForBit(0, value); }
  
  // ENET_QOS RGMII TX clock output enable
  //
  void SetENET_QOS_RGMII_EN(bool value) { SetBit(1, value); }
  bool GetENET_QOS_RGMII_EN() const { return GetBit(1); }
  void WaitForENET_QOS_RGMII_EN(bool value) { WaitForBit(1, value); }
  
  // ENET_QOS master timer source select
  //
  void SetENET_QOS_TIME_SEL(bool value) { SetBit(2, value); }
  bool GetENET_QOS_TIME_SEL() const { return GetBit(2); }
  void WaitForENET_QOS_TIME_SEL(bool value) { WaitForBit(2, value); }
  
  // ENET_QOS PHY Interface Select
  //
  void SetENET_QOS_INTF_SEL(uint32_t value) { SetBits<3>(3, value); }
  uint32_t GetENET_QOS_INTF_SEL() const { return GetBits<3>(3).to_ulong(); }
  void WaitForENET_QOS_INTF_SEL(uint32_t value) { WaitForBits<3>(3, value); }
  
  // ENET_QOS clock generator enable
  //
  void SetENET_QOS_CLKGEN_EN(bool value) { SetBit(6, value); }
  bool GetENET_QOS_CLKGEN_EN() const { return GetBit(6); }
  void WaitForENET_QOS_CLKGEN_EN(bool value) { WaitForBit(6, value); }
  
  // ENET_QOS ENET_1588_EVENT0_IN source select
  //
  void SetENET_QOS_EVENT0IN_SEL(bool value) { SetBit(7, value); }
  bool GetENET_QOS_EVENT0IN_SEL() const { return GetBit(7); }
  void WaitForENET_QOS_EVENT0IN_SEL(bool value) { WaitForBit(7, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR7 General Purpose Register
struct GPR7_t : public Register {
  GPR7_t() : Register(0x400e401c) {}

  
  // Global interrupt
  //
  void SetGINT(bool value) { SetBit(0, value); }
  bool GetGINT() const { return GetBit(0); }
  void WaitForGINT(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR8 General Purpose Register
struct GPR8_t : public Register {
  GPR8_t() : Register(0x400e4020) {}

  
  // WDOG1 timeout mask for WDOG_ANY
  //
  void SetWDOG1_MASK(bool value) { SetBit(0, value); }
  bool GetWDOG1_MASK() const { return GetBit(0); }
  void WaitForWDOG1_MASK(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR9 General Purpose Register
struct GPR9_t : public Register {
  GPR9_t() : Register(0x400e4024) {}

  
  // WDOG2 timeout mask for WDOG_ANY
  //
  void SetWDOG2_MASK(bool value) { SetBit(0, value); }
  bool GetWDOG2_MASK() const { return GetBit(0); }
  void WaitForWDOG2_MASK(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR10 General Purpose Register
struct GPR10_t : public Register {
  GPR10_t() : Register(0x400e4028) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR11 General Purpose Register
struct GPR11_t : public Register {
  GPR11_t() : Register(0x400e402c) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR12 General Purpose Register
struct GPR12_t : public Register {
  GPR12_t() : Register(0x400e4030) {}

  
  // QTIMER1 timer counter freeze
  //
  void SetQTIMER1_TMR_CNTS_FREEZE(bool value) { SetBit(0, value); }
  bool GetQTIMER1_TMR_CNTS_FREEZE() const { return GetBit(0); }
  void WaitForQTIMER1_TMR_CNTS_FREEZE(bool value) { WaitForBit(0, value); }
  
  // QTIMER1 TMR0 input select
  //
  void SetQTIMER1_TRM0_INPUT_SEL(bool value) { SetBit(8, value); }
  bool GetQTIMER1_TRM0_INPUT_SEL() const { return GetBit(8); }
  void WaitForQTIMER1_TRM0_INPUT_SEL(bool value) { WaitForBit(8, value); }
  
  // QTIMER1 TMR1 input select
  //
  void SetQTIMER1_TRM1_INPUT_SEL(bool value) { SetBit(9, value); }
  bool GetQTIMER1_TRM1_INPUT_SEL() const { return GetBit(9); }
  void WaitForQTIMER1_TRM1_INPUT_SEL(bool value) { WaitForBit(9, value); }
  
  // QTIMER1 TMR2 input select
  //
  void SetQTIMER1_TRM2_INPUT_SEL(bool value) { SetBit(10, value); }
  bool GetQTIMER1_TRM2_INPUT_SEL() const { return GetBit(10); }
  void WaitForQTIMER1_TRM2_INPUT_SEL(bool value) { WaitForBit(10, value); }
  
  // QTIMER1 TMR3 input select
  //
  void SetQTIMER1_TRM3_INPUT_SEL(bool value) { SetBit(11, value); }
  bool GetQTIMER1_TRM3_INPUT_SEL() const { return GetBit(11); }
  void WaitForQTIMER1_TRM3_INPUT_SEL(bool value) { WaitForBit(11, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR13 General Purpose Register
struct GPR13_t : public Register {
  GPR13_t() : Register(0x400e4034) {}

  
  // QTIMER2 timer counter freeze
  //
  void SetQTIMER2_TMR_CNTS_FREEZE(bool value) { SetBit(0, value); }
  bool GetQTIMER2_TMR_CNTS_FREEZE() const { return GetBit(0); }
  void WaitForQTIMER2_TMR_CNTS_FREEZE(bool value) { WaitForBit(0, value); }
  
  // QTIMER2 TMR0 input select
  //
  void SetQTIMER2_TRM0_INPUT_SEL(bool value) { SetBit(8, value); }
  bool GetQTIMER2_TRM0_INPUT_SEL() const { return GetBit(8); }
  void WaitForQTIMER2_TRM0_INPUT_SEL(bool value) { WaitForBit(8, value); }
  
  // QTIMER2 TMR1 input select
  //
  void SetQTIMER2_TRM1_INPUT_SEL(bool value) { SetBit(9, value); }
  bool GetQTIMER2_TRM1_INPUT_SEL() const { return GetBit(9); }
  void WaitForQTIMER2_TRM1_INPUT_SEL(bool value) { WaitForBit(9, value); }
  
  // QTIMER2 TMR2 input select
  //
  void SetQTIMER2_TRM2_INPUT_SEL(bool value) { SetBit(10, value); }
  bool GetQTIMER2_TRM2_INPUT_SEL() const { return GetBit(10); }
  void WaitForQTIMER2_TRM2_INPUT_SEL(bool value) { WaitForBit(10, value); }
  
  // QTIMER2 TMR3 input select
  //
  void SetQTIMER2_TRM3_INPUT_SEL(bool value) { SetBit(11, value); }
  bool GetQTIMER2_TRM3_INPUT_SEL() const { return GetBit(11); }
  void WaitForQTIMER2_TRM3_INPUT_SEL(bool value) { WaitForBit(11, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR14 General Purpose Register
struct GPR14_t : public Register {
  GPR14_t() : Register(0x400e4038) {}

  
  // QTIMER3 timer counter freeze
  //
  void SetQTIMER3_TMR_CNTS_FREEZE(bool value) { SetBit(0, value); }
  bool GetQTIMER3_TMR_CNTS_FREEZE() const { return GetBit(0); }
  void WaitForQTIMER3_TMR_CNTS_FREEZE(bool value) { WaitForBit(0, value); }
  
  // QTIMER3 TMR0 input select
  //
  void SetQTIMER3_TRM0_INPUT_SEL(bool value) { SetBit(8, value); }
  bool GetQTIMER3_TRM0_INPUT_SEL() const { return GetBit(8); }
  void WaitForQTIMER3_TRM0_INPUT_SEL(bool value) { WaitForBit(8, value); }
  
  // QTIMER3 TMR1 input select
  //
  void SetQTIMER3_TRM1_INPUT_SEL(bool value) { SetBit(9, value); }
  bool GetQTIMER3_TRM1_INPUT_SEL() const { return GetBit(9); }
  void WaitForQTIMER3_TRM1_INPUT_SEL(bool value) { WaitForBit(9, value); }
  
  // QTIMER3 TMR2 input select
  //
  void SetQTIMER3_TRM2_INPUT_SEL(bool value) { SetBit(10, value); }
  bool GetQTIMER3_TRM2_INPUT_SEL() const { return GetBit(10); }
  void WaitForQTIMER3_TRM2_INPUT_SEL(bool value) { WaitForBit(10, value); }
  
  // QTIMER3 TMR3 input select
  //
  void SetQTIMER3_TRM3_INPUT_SEL(bool value) { SetBit(11, value); }
  bool GetQTIMER3_TRM3_INPUT_SEL() const { return GetBit(11); }
  void WaitForQTIMER3_TRM3_INPUT_SEL(bool value) { WaitForBit(11, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR15 General Purpose Register
struct GPR15_t : public Register {
  GPR15_t() : Register(0x400e403c) {}

  
  // QTIMER4 timer counter freeze
  //
  void SetQTIMER4_TMR_CNTS_FREEZE(bool value) { SetBit(0, value); }
  bool GetQTIMER4_TMR_CNTS_FREEZE() const { return GetBit(0); }
  void WaitForQTIMER4_TMR_CNTS_FREEZE(bool value) { WaitForBit(0, value); }
  
  // QTIMER4 TMR0 input select
  //
  void SetQTIMER4_TRM0_INPUT_SEL(bool value) { SetBit(8, value); }
  bool GetQTIMER4_TRM0_INPUT_SEL() const { return GetBit(8); }
  void WaitForQTIMER4_TRM0_INPUT_SEL(bool value) { WaitForBit(8, value); }
  
  // QTIMER4 TMR1 input select
  //
  void SetQTIMER4_TRM1_INPUT_SEL(bool value) { SetBit(9, value); }
  bool GetQTIMER4_TRM1_INPUT_SEL() const { return GetBit(9); }
  void WaitForQTIMER4_TRM1_INPUT_SEL(bool value) { WaitForBit(9, value); }
  
  // QTIMER4 TMR2 input select
  //
  void SetQTIMER4_TRM2_INPUT_SEL(bool value) { SetBit(10, value); }
  bool GetQTIMER4_TRM2_INPUT_SEL() const { return GetBit(10); }
  void WaitForQTIMER4_TRM2_INPUT_SEL(bool value) { WaitForBit(10, value); }
  
  // QTIMER4 TMR3 input select
  //
  void SetQTIMER4_TRM3_INPUT_SEL(bool value) { SetBit(11, value); }
  bool GetQTIMER4_TRM3_INPUT_SEL() const { return GetBit(11); }
  void WaitForQTIMER4_TRM3_INPUT_SEL(bool value) { WaitForBit(11, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR16 General Purpose Register
struct GPR16_t : public Register {
  GPR16_t() : Register(0x400e4040) {}

  
  // FlexRAM bank config source select
  //
  void SetFLEXRAM_BANK_CFG_SEL(bool value) { SetBit(2, value); }
  bool GetFLEXRAM_BANK_CFG_SEL() const { return GetBit(2); }
  void WaitForFLEXRAM_BANK_CFG_SEL(bool value) { WaitForBit(2, value); }
  
  // CM7 platform AHB clock enable
  //
  void SetCM7_FORCE_HCLK_EN(bool value) { SetBit(3, value); }
  bool GetCM7_FORCE_HCLK_EN() const { return GetBit(3); }
  void WaitForCM7_FORCE_HCLK_EN(bool value) { WaitForBit(3, value); }
  
  // CM7 sleep request selection
  //
  void SetM7_GPC_SLEEP_SEL(bool value) { SetBit(5, value); }
  bool GetM7_GPC_SLEEP_SEL() const { return GetBit(5); }
  void WaitForM7_GPC_SLEEP_SEL(bool value) { WaitForBit(5, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x0000aa03); }
};

// GPR17 General Purpose Register
struct GPR17_t : public Register {
  GPR17_t() : Register(0x400e4044) {}

  
  // FlexRAM bank config value
  //
  void SetFLEXRAM_BANK_CFG_LOW(uint32_t value) { SetBits<16>(0, value); }
  uint32_t GetFLEXRAM_BANK_CFG_LOW() const { return GetBits<16>(0).to_ulong(); }
  void WaitForFLEXRAM_BANK_CFG_LOW(uint32_t value) { WaitForBits<16>(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR18 General Purpose Register
struct GPR18_t : public Register {
  GPR18_t() : Register(0x400e4048) {}

  
  // FlexRAM bank config value
  //
  void SetFLEXRAM_BANK_CFG_HIGH(uint32_t value) { SetBits<16>(0, value); }
  uint32_t GetFLEXRAM_BANK_CFG_HIGH() const { return GetBits<16>(0).to_ulong(); }
  void WaitForFLEXRAM_BANK_CFG_HIGH(uint32_t value) { WaitForBits<16>(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR20 General Purpose Register
struct GPR20_t : public Register {
  GPR20_t() : Register(0x400e4050) {}

  
  // IOMUXC XBAR_INOUT4 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_4(bool value) { SetBit(0, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_4() const { return GetBit(0); }
  void WaitForIOMUXC_XBAR_DIR_SEL_4(bool value) { WaitForBit(0, value); }
  
  // IOMUXC XBAR_INOUT5 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_5(bool value) { SetBit(1, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_5() const { return GetBit(1); }
  void WaitForIOMUXC_XBAR_DIR_SEL_5(bool value) { WaitForBit(1, value); }
  
  // IOMUXC XBAR_INOUT6 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_6(bool value) { SetBit(2, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_6() const { return GetBit(2); }
  void WaitForIOMUXC_XBAR_DIR_SEL_6(bool value) { WaitForBit(2, value); }
  
  // IOMUXC XBAR_INOUT7 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_7(bool value) { SetBit(3, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_7() const { return GetBit(3); }
  void WaitForIOMUXC_XBAR_DIR_SEL_7(bool value) { WaitForBit(3, value); }
  
  // IOMUXC XBAR_INOUT8 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_8(bool value) { SetBit(4, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_8() const { return GetBit(4); }
  void WaitForIOMUXC_XBAR_DIR_SEL_8(bool value) { WaitForBit(4, value); }
  
  // IOMUXC XBAR_INOUT9 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_9(bool value) { SetBit(5, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_9() const { return GetBit(5); }
  void WaitForIOMUXC_XBAR_DIR_SEL_9(bool value) { WaitForBit(5, value); }
  
  // IOMUXC XBAR_INOUT10 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_10(bool value) { SetBit(6, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_10() const { return GetBit(6); }
  void WaitForIOMUXC_XBAR_DIR_SEL_10(bool value) { WaitForBit(6, value); }
  
  // IOMUXC XBAR_INOUT11 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_11(bool value) { SetBit(7, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_11() const { return GetBit(7); }
  void WaitForIOMUXC_XBAR_DIR_SEL_11(bool value) { WaitForBit(7, value); }
  
  // IOMUXC XBAR_INOUT12 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_12(bool value) { SetBit(8, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_12() const { return GetBit(8); }
  void WaitForIOMUXC_XBAR_DIR_SEL_12(bool value) { WaitForBit(8, value); }
  
  // IOMUXC XBAR_INOUT13 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_13(bool value) { SetBit(9, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_13() const { return GetBit(9); }
  void WaitForIOMUXC_XBAR_DIR_SEL_13(bool value) { WaitForBit(9, value); }
  
  // IOMUXC XBAR_INOUT14 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_14(bool value) { SetBit(10, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_14() const { return GetBit(10); }
  void WaitForIOMUXC_XBAR_DIR_SEL_14(bool value) { WaitForBit(10, value); }
  
  // IOMUXC XBAR_INOUT15 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_15(bool value) { SetBit(11, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_15() const { return GetBit(11); }
  void WaitForIOMUXC_XBAR_DIR_SEL_15(bool value) { WaitForBit(11, value); }
  
  // IOMUXC XBAR_INOUT16 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_16(bool value) { SetBit(12, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_16() const { return GetBit(12); }
  void WaitForIOMUXC_XBAR_DIR_SEL_16(bool value) { WaitForBit(12, value); }
  
  // IOMUXC XBAR_INOUT17 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_17(bool value) { SetBit(13, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_17() const { return GetBit(13); }
  void WaitForIOMUXC_XBAR_DIR_SEL_17(bool value) { WaitForBit(13, value); }
  
  // IOMUXC XBAR_INOUT18 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_18(bool value) { SetBit(14, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_18() const { return GetBit(14); }
  void WaitForIOMUXC_XBAR_DIR_SEL_18(bool value) { WaitForBit(14, value); }
  
  // IOMUXC XBAR_INOUT19 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_19(bool value) { SetBit(15, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_19() const { return GetBit(15); }
  void WaitForIOMUXC_XBAR_DIR_SEL_19(bool value) { WaitForBit(15, value); }
  
  // IOMUXC XBAR_INOUT20 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_20(bool value) { SetBit(16, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_20() const { return GetBit(16); }
  void WaitForIOMUXC_XBAR_DIR_SEL_20(bool value) { WaitForBit(16, value); }
  
  // IOMUXC XBAR_INOUT21 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_21(bool value) { SetBit(17, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_21() const { return GetBit(17); }
  void WaitForIOMUXC_XBAR_DIR_SEL_21(bool value) { WaitForBit(17, value); }
  
  // IOMUXC XBAR_INOUT22 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_22(bool value) { SetBit(18, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_22() const { return GetBit(18); }
  void WaitForIOMUXC_XBAR_DIR_SEL_22(bool value) { WaitForBit(18, value); }
  
  // IOMUXC XBAR_INOUT23 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_23(bool value) { SetBit(19, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_23() const { return GetBit(19); }
  void WaitForIOMUXC_XBAR_DIR_SEL_23(bool value) { WaitForBit(19, value); }
  
  // IOMUXC XBAR_INOUT24 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_24(bool value) { SetBit(20, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_24() const { return GetBit(20); }
  void WaitForIOMUXC_XBAR_DIR_SEL_24(bool value) { WaitForBit(20, value); }
  
  // IOMUXC XBAR_INOUT25 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_25(bool value) { SetBit(21, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_25() const { return GetBit(21); }
  void WaitForIOMUXC_XBAR_DIR_SEL_25(bool value) { WaitForBit(21, value); }
  
  // IOMUXC XBAR_INOUT26 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_26(bool value) { SetBit(22, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_26() const { return GetBit(22); }
  void WaitForIOMUXC_XBAR_DIR_SEL_26(bool value) { WaitForBit(22, value); }
  
  // IOMUXC XBAR_INOUT27 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_27(bool value) { SetBit(23, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_27() const { return GetBit(23); }
  void WaitForIOMUXC_XBAR_DIR_SEL_27(bool value) { WaitForBit(23, value); }
  
  // IOMUXC XBAR_INOUT28 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_28(bool value) { SetBit(24, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_28() const { return GetBit(24); }
  void WaitForIOMUXC_XBAR_DIR_SEL_28(bool value) { WaitForBit(24, value); }
  
  // IOMUXC XBAR_INOUT29 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_29(bool value) { SetBit(25, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_29() const { return GetBit(25); }
  void WaitForIOMUXC_XBAR_DIR_SEL_29(bool value) { WaitForBit(25, value); }
  
  // IOMUXC XBAR_INOUT30 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_30(bool value) { SetBit(26, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_30() const { return GetBit(26); }
  void WaitForIOMUXC_XBAR_DIR_SEL_30(bool value) { WaitForBit(26, value); }
  
  // IOMUXC XBAR_INOUT31 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_31(bool value) { SetBit(27, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_31() const { return GetBit(27); }
  void WaitForIOMUXC_XBAR_DIR_SEL_31(bool value) { WaitForBit(27, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR21 General Purpose Register
struct GPR21_t : public Register {
  GPR21_t() : Register(0x400e4054) {}

  
  // IOMUXC XBAR_INOUT32 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_32(bool value) { SetBit(0, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_32() const { return GetBit(0); }
  void WaitForIOMUXC_XBAR_DIR_SEL_32(bool value) { WaitForBit(0, value); }
  
  // IOMUXC XBAR_INOUT33 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_33(bool value) { SetBit(1, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_33() const { return GetBit(1); }
  void WaitForIOMUXC_XBAR_DIR_SEL_33(bool value) { WaitForBit(1, value); }
  
  // IOMUXC XBAR_INOUT34 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_34(bool value) { SetBit(2, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_34() const { return GetBit(2); }
  void WaitForIOMUXC_XBAR_DIR_SEL_34(bool value) { WaitForBit(2, value); }
  
  // IOMUXC XBAR_INOUT35 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_35(bool value) { SetBit(3, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_35() const { return GetBit(3); }
  void WaitForIOMUXC_XBAR_DIR_SEL_35(bool value) { WaitForBit(3, value); }
  
  // IOMUXC XBAR_INOUT36 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_36(bool value) { SetBit(4, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_36() const { return GetBit(4); }
  void WaitForIOMUXC_XBAR_DIR_SEL_36(bool value) { WaitForBit(4, value); }
  
  // IOMUXC XBAR_INOUT37 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_37(bool value) { SetBit(5, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_37() const { return GetBit(5); }
  void WaitForIOMUXC_XBAR_DIR_SEL_37(bool value) { WaitForBit(5, value); }
  
  // IOMUXC XBAR_INOUT38 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_38(bool value) { SetBit(6, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_38() const { return GetBit(6); }
  void WaitForIOMUXC_XBAR_DIR_SEL_38(bool value) { WaitForBit(6, value); }
  
  // IOMUXC XBAR_INOUT39 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_39(bool value) { SetBit(7, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_39() const { return GetBit(7); }
  void WaitForIOMUXC_XBAR_DIR_SEL_39(bool value) { WaitForBit(7, value); }
  
  // IOMUXC XBAR_INOUT40 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_40(bool value) { SetBit(8, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_40() const { return GetBit(8); }
  void WaitForIOMUXC_XBAR_DIR_SEL_40(bool value) { WaitForBit(8, value); }
  
  // IOMUXC XBAR_INOUT41 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_41(bool value) { SetBit(9, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_41() const { return GetBit(9); }
  void WaitForIOMUXC_XBAR_DIR_SEL_41(bool value) { WaitForBit(9, value); }
  
  // IOMUXC XBAR_INOUT42 function direction select
  //
  void SetIOMUXC_XBAR_DIR_SEL_42(bool value) { SetBit(10, value); }
  bool GetIOMUXC_XBAR_DIR_SEL_42() const { return GetBit(10); }
  void WaitForIOMUXC_XBAR_DIR_SEL_42(bool value) { WaitForBit(10, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR22 General Purpose Register
struct GPR22_t : public Register {
  GPR22_t() : Register(0x400e4058) {}

  
  // GPT1 1 MHz clock source select
  //
  void SetREF_1M_CLK_GPT1(bool value) { SetBit(0, value); }
  bool GetREF_1M_CLK_GPT1() const { return GetBit(0); }
  void WaitForREF_1M_CLK_GPT1(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR23 General Purpose Register
struct GPR23_t : public Register {
  GPR23_t() : Register(0x400e405c) {}

  
  // GPT2 1 MHz clock source select
  //
  void SetREF_1M_CLK_GPT2(bool value) { SetBit(0, value); }
  bool GetREF_1M_CLK_GPT2() const { return GetBit(0); }
  void WaitForREF_1M_CLK_GPT2(bool value) { WaitForBit(0, value); }
  
  // GPT2 input capture channel 1 source select
  //
  void SetGPT2_CAPIN1_SEL(bool value) { SetBit(1, value); }
  bool GetGPT2_CAPIN1_SEL() const { return GetBit(1); }
  void WaitForGPT2_CAPIN1_SEL(bool value) { WaitForBit(1, value); }
  
  // GPT2 input capture channel 2 source select
  //
  void SetGPT2_CAPIN2_SEL(bool value) { SetBit(2, value); }
  bool GetGPT2_CAPIN2_SEL() const { return GetBit(2); }
  void WaitForGPT2_CAPIN2_SEL(bool value) { WaitForBit(2, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR24 General Purpose Register
struct GPR24_t : public Register {
  GPR24_t() : Register(0x400e4060) {}

  
  // GPT3 1 MHz clock source select
  //
  void SetREF_1M_CLK_GPT3(bool value) { SetBit(0, value); }
  bool GetREF_1M_CLK_GPT3() const { return GetBit(0); }
  void WaitForREF_1M_CLK_GPT3(bool value) { WaitForBit(0, value); }
  
  // GPT3 input capture channel 1 source select
  //
  void SetGPT3_CAPIN1_SEL(bool value) { SetBit(1, value); }
  bool GetGPT3_CAPIN1_SEL() const { return GetBit(1); }
  void WaitForGPT3_CAPIN1_SEL(bool value) { WaitForBit(1, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR25 General Purpose Register
struct GPR25_t : public Register {
  GPR25_t() : Register(0x400e4064) {}

  
  // GPT4 1 MHz clock source select
  //
  void SetREF_1M_CLK_GPT4(bool value) { SetBit(0, value); }
  bool GetREF_1M_CLK_GPT4() const { return GetBit(0); }
  void WaitForREF_1M_CLK_GPT4(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR26 General Purpose Register
struct GPR26_t : public Register {
  GPR26_t() : Register(0x400e4068) {}

  
  // GPT5 1 MHz clock source select
  //
  void SetREF_1M_CLK_GPT5(bool value) { SetBit(0, value); }
  bool GetREF_1M_CLK_GPT5() const { return GetBit(0); }
  void WaitForREF_1M_CLK_GPT5(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR27 General Purpose Register
struct GPR27_t : public Register {
  GPR27_t() : Register(0x400e406c) {}

  
  // GPT6 1 MHz clock source select
  //
  void SetREF_1M_CLK_GPT6(bool value) { SetBit(0, value); }
  bool GetREF_1M_CLK_GPT6() const { return GetBit(0); }
  void WaitForREF_1M_CLK_GPT6(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR28 General Purpose Register
struct GPR28_t : public Register {
  GPR28_t() : Register(0x400e4070) {}

  
  // uSDHC block cacheable attribute value of AXI read transactions
  //
  void SetARCACHE_USDHC(bool value) { SetBit(0, value); }
  bool GetARCACHE_USDHC() const { return GetBit(0); }
  void WaitForARCACHE_USDHC(bool value) { WaitForBit(0, value); }
  
  // uSDHC block cacheable attribute value of AXI write transactions
  //
  void SetAWCACHE_USDHC(bool value) { SetBit(1, value); }
  bool GetAWCACHE_USDHC() const { return GetBit(1); }
  void WaitForAWCACHE_USDHC(bool value) { WaitForBit(1, value); }
  
  // no description available
  //
  void SetCACHE_ENET1G(bool value) { SetBit(5, value); }
  bool GetCACHE_ENET1G() const { return GetBit(5); }
  void WaitForCACHE_ENET1G(bool value) { WaitForBit(5, value); }
  
  // ENET block cacheable attribute value of AXI transactions
  //
  void SetCACHE_ENET(bool value) { SetBit(7, value); }
  bool GetCACHE_ENET() const { return GetBit(7); }
  void WaitForCACHE_ENET(bool value) { WaitForBit(7, value); }
  
  // USB block cacheable attribute value of AXI transactions
  //
  void SetCACHE_USB(bool value) { SetBit(13, value); }
  bool GetCACHE_USB() const { return GetBit(13); }
  void WaitForCACHE_USB(bool value) { WaitForBit(13, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR29 General Purpose Register
struct GPR29_t : public Register {
  GPR29_t() : Register(0x400e4074) {}

  
  // USBPHY1 register access clock enable
  //
  void SetUSBPHY1_IPG_CLK_ACTIVE(bool value) { SetBit(0, value); }
  bool GetUSBPHY1_IPG_CLK_ACTIVE() const { return GetBit(0); }
  void WaitForUSBPHY1_IPG_CLK_ACTIVE(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000001); }
};

// GPR30 General Purpose Register
struct GPR30_t : public Register {
  GPR30_t() : Register(0x400e4078) {}

  
  // USBPHY2 register access clock enable
  //
  void SetUSBPHY2_IPG_CLK_ACTIVE(bool value) { SetBit(0, value); }
  bool GetUSBPHY2_IPG_CLK_ACTIVE() const { return GetBit(0); }
  void WaitForUSBPHY2_IPG_CLK_ACTIVE(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000001); }
};

// GPR31 General Purpose Register
struct GPR31_t : public Register {
  GPR31_t() : Register(0x400e407c) {}

  
  // OCRAM M7 RMW wait enable
  //
  void SetRMW2_WAIT_BVALID_CPL(bool value) { SetBit(0, value); }
  bool GetRMW2_WAIT_BVALID_CPL() const { return GetBit(0); }
  void WaitForRMW2_WAIT_BVALID_CPL(bool value) { WaitForBit(0, value); }
  
  // OCRAM M7 clock gating enable
  //
  void SetOCRAM_M7_CLK_GATING(bool value) { SetBit(2, value); }
  bool GetOCRAM_M7_CLK_GATING() const { return GetBit(2); }
  void WaitForOCRAM_M7_CLK_GATING(bool value) { WaitForBit(2, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000012); }
};

// GPR32 General Purpose Register
struct GPR32_t : public Register {
  GPR32_t() : Register(0x400e4080) {}

  
  // OCRAM1 RMW wait enable
  //
  void SetRMW1_WAIT_BVALID_CPL(bool value) { SetBit(0, value); }
  bool GetRMW1_WAIT_BVALID_CPL() const { return GetBit(0); }
  void WaitForRMW1_WAIT_BVALID_CPL(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR33 General Purpose Register
struct GPR33_t : public Register {
  GPR33_t() : Register(0x400e4084) {}

  
  // OCRAM2 RMW wait enable
  //
  void SetRMW2_WAIT_BVALID_CPL(bool value) { SetBit(0, value); }
  bool GetRMW2_WAIT_BVALID_CPL() const { return GetBit(0); }
  void WaitForRMW2_WAIT_BVALID_CPL(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR34 General Purpose Register
struct GPR34_t : public Register {
  GPR34_t() : Register(0x400e4088) {}

  
  // XECC_FLEXSPI1 RMW wait enable
  //
  void SetXECC_FLEXSPI1_WAIT_BVALID_CPL(bool value) { SetBit(0, value); }
  bool GetXECC_FLEXSPI1_WAIT_BVALID_CPL() const { return GetBit(0); }
  void WaitForXECC_FLEXSPI1_WAIT_BVALID_CPL(bool value) { WaitForBit(0, value); }
  
  // FlexSPI1 OTFAD enable
  //
  void SetFLEXSPI1_OTFAD_EN(bool value) { SetBit(1, value); }
  bool GetFLEXSPI1_OTFAD_EN() const { return GetBit(1); }
  void WaitForFLEXSPI1_OTFAD_EN(bool value) { WaitForBit(1, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR35 General Purpose Register
struct GPR35_t : public Register {
  GPR35_t() : Register(0x400e408c) {}

  
  // XECC_FLEXSPI2 RMW wait enable
  //
  void SetXECC_FLEXSPI2_WAIT_BVALID_CPL(bool value) { SetBit(0, value); }
  bool GetXECC_FLEXSPI2_WAIT_BVALID_CPL() const { return GetBit(0); }
  void WaitForXECC_FLEXSPI2_WAIT_BVALID_CPL(bool value) { WaitForBit(0, value); }
  
  // FlexSPI2 OTFAD enable
  //
  void SetFLEXSPI2_OTFAD_EN(bool value) { SetBit(1, value); }
  bool GetFLEXSPI2_OTFAD_EN() const { return GetBit(1); }
  void WaitForFLEXSPI2_OTFAD_EN(bool value) { WaitForBit(1, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR36 General Purpose Register
struct GPR36_t : public Register {
  GPR36_t() : Register(0x400e4090) {}

  
  // XECC_SEMC RMW wait enable
  //
  void SetXECC_SEMC_WAIT_BVALID_CPL(bool value) { SetBit(0, value); }
  bool GetXECC_SEMC_WAIT_BVALID_CPL() const { return GetBit(0); }
  void WaitForXECC_SEMC_WAIT_BVALID_CPL(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR37 General Purpose Register
struct GPR37_t : public Register {
  GPR37_t() : Register(0x400e4094) {}

  
  // ARM non-secure (non-invasive) debug enable
  //
  void SetNIDEN(bool value) { SetBit(0, value); }
  bool GetNIDEN() const { return GetBit(0); }
  void WaitForNIDEN(bool value) { WaitForBit(0, value); }
  
  // ARM invasive debug enable
  //
  void SetDBG_EN(bool value) { SetBit(1, value); }
  bool GetDBG_EN() const { return GetBit(1); }
  void WaitForDBG_EN(bool value) { WaitForBit(1, value); }
  
  // Exclusive monitor response select of illegal command
  //
  void SetEXC_MON(bool value) { SetBit(3, value); }
  bool GetEXC_MON() const { return GetBit(3); }
  void WaitForEXC_MON(bool value) { WaitForBit(3, value); }
  
  // CM7 debug halt mask
  //
  void SetM7_DBG_ACK_MASK(bool value) { SetBit(5, value); }
  bool GetM7_DBG_ACK_MASK() const { return GetBit(5); }
  void WaitForM7_DBG_ACK_MASK(bool value) { WaitForBit(5, value); }
  
  // CM4 debug halt mask
  //
  void SetM4_DBG_ACK_MASK(bool value) { SetBit(6, value); }
  bool GetM4_DBG_ACK_MASK() const { return GetBit(6); }
  void WaitForM4_DBG_ACK_MASK(bool value) { WaitForBit(6, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000017); }
};

// GPR38 General Purpose Register
struct GPR38_t : public Register {
  GPR38_t() : Register(0x400e4098) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR39 General Purpose Register
struct GPR39_t : public Register {
  GPR39_t() : Register(0x400e409c) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR40 General Purpose Register
struct GPR40_t : public Register {
  GPR40_t() : Register(0x400e40a0) {}

  
  // GPIO2 and CM7_GPIO2 share same IO MUX function, GPIO_MUX2 selects one GPIO function.
  //
  void SetGPIO_MUX2_GPIO_SEL_LOW(uint32_t value) { SetBits<16>(0, value); }
  uint32_t GetGPIO_MUX2_GPIO_SEL_LOW() const { return GetBits<16>(0).to_ulong(); }
  void WaitForGPIO_MUX2_GPIO_SEL_LOW(uint32_t value) { WaitForBits<16>(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR41 General Purpose Register
struct GPR41_t : public Register {
  GPR41_t() : Register(0x400e40a4) {}

  
  // GPIO2 and CM7_GPIO2 share same IO MUX function, GPIO_MUX2 selects one GPIO function.
  //
  void SetGPIO_MUX2_GPIO_SEL_HIGH(uint32_t value) { SetBits<16>(0, value); }
  uint32_t GetGPIO_MUX2_GPIO_SEL_HIGH() const { return GetBits<16>(0).to_ulong(); }
  void WaitForGPIO_MUX2_GPIO_SEL_HIGH(uint32_t value) { WaitForBits<16>(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR42 General Purpose Register
struct GPR42_t : public Register {
  GPR42_t() : Register(0x400e40a8) {}

  
  // GPIO3 and CM7_GPIO3 share same IO MUX function, GPIO_MUX3 selects one GPIO function.
  //
  void SetGPIO_MUX3_GPIO_SEL_LOW(uint32_t value) { SetBits<16>(0, value); }
  uint32_t GetGPIO_MUX3_GPIO_SEL_LOW() const { return GetBits<16>(0).to_ulong(); }
  void WaitForGPIO_MUX3_GPIO_SEL_LOW(uint32_t value) { WaitForBits<16>(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR43 General Purpose Register
struct GPR43_t : public Register {
  GPR43_t() : Register(0x400e40ac) {}

  
  // GPIO3 and CM7_GPIO3 share same IO MUX function, GPIO_MUX3 selects one GPIO function.
  //
  void SetGPIO_MUX3_GPIO_SEL_HIGH(uint32_t value) { SetBits<16>(0, value); }
  uint32_t GetGPIO_MUX3_GPIO_SEL_HIGH() const { return GetBits<16>(0).to_ulong(); }
  void WaitForGPIO_MUX3_GPIO_SEL_HIGH(uint32_t value) { WaitForBits<16>(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR44 General Purpose Register
struct GPR44_t : public Register {
  GPR44_t() : Register(0x400e40b0) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR45 General Purpose Register
struct GPR45_t : public Register {
  GPR45_t() : Register(0x400e40b4) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR46 General Purpose Register
struct GPR46_t : public Register {
  GPR46_t() : Register(0x400e40b8) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR47 General Purpose Register
struct GPR47_t : public Register {
  GPR47_t() : Register(0x400e40bc) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR48 General Purpose Register
struct GPR48_t : public Register {
  GPR48_t() : Register(0x400e40c0) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR49 General Purpose Register
struct GPR49_t : public Register {
  GPR49_t() : Register(0x400e40c4) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR50 General Purpose Register
struct GPR50_t : public Register {
  GPR50_t() : Register(0x400e40c8) {}

  
  // CAAM manager processor identifier
  //
  void SetCAAM_IPS_MGR(uint32_t value) { SetBits<5>(0, value); }
  uint32_t GetCAAM_IPS_MGR() const { return GetBits<5>(0).to_ulong(); }
  void WaitForCAAM_IPS_MGR(uint32_t value) { WaitForBits<5>(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR51 General Purpose Register
struct GPR51_t : public Register {
  GPR51_t() : Register(0x400e40cc) {}

  
  // Clear CM7 NMI holding register
  //
  void SetM7_NMI_CLEAR(bool value) { SetBit(0, value); }
  bool GetM7_NMI_CLEAR() const { return GetBit(0); }
  void WaitForM7_NMI_CLEAR(bool value) { WaitForBit(0, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR52 General Purpose Register
struct GPR52_t : public Register {
  GPR52_t() : Register(0x400e40d0) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR53 General Purpose Register
struct GPR53_t : public Register {
  GPR53_t() : Register(0x400e40d4) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR54 General Purpose Register
struct GPR54_t : public Register {
  GPR54_t() : Register(0x400e40d8) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR55 General Purpose Register
struct GPR55_t : public Register {
  GPR55_t() : Register(0x400e40dc) {}

  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR59 General Purpose Register
struct GPR59_t : public Register {
  GPR59_t() : Register(0x400e40ec) {}

  
  // Powers down inactive lanes reported by CSI2X_CFG_NUM_LANES.
  //
  void SetMIPI_CSI_AUTO_PD_EN(bool value) { SetBit(0, value); }
  bool GetMIPI_CSI_AUTO_PD_EN() const { return GetBit(0); }
  void WaitForMIPI_CSI_AUTO_PD_EN(bool value) { WaitForBit(0, value); }
  
  // MIPI CSI APB clock domain and User interface clock domain software reset bit
  //
  enum class eMIPI_CSI_SOFT_RST_N : uint32_t {
    eASSERT=0, // Assert reset
    eDEAST=1, // De-assert reset
  };
  void SetMIPI_CSI_SOFT_RST_N(eMIPI_CSI_SOFT_RST_N value) { SetBit(1, static_cast<uint32_t>(value)); }
  eMIPI_CSI_SOFT_RST_N GetMIPI_CSI_SOFT_RST_N() const { return static_cast<eMIPI_CSI_SOFT_RST_N>(GetBit(1)); }
  void WaitForMIPI_CSI_SOFT_RST_N(eMIPI_CSI_SOFT_RST_N value) { WaitForBit(1, static_cast<uint32_t>(value)); }
  
  // Enables the slave clock lane feature to maintain HS reception state during continuous clock
  // mode operation, despite line glitches.
  //
  void SetMIPI_CSI_CONT_CLK_MODE(bool value) { SetBit(2, value); }
  bool GetMIPI_CSI_CONT_CLK_MODE() const { return GetBit(2); }
  void WaitForMIPI_CSI_CONT_CLK_MODE(bool value) { WaitForBit(2, value); }
  
  // When high, enables received DDR clock on CLK_DRXHS
  //
  void SetMIPI_CSI_DDRCLK_EN(bool value) { SetBit(3, value); }
  bool GetMIPI_CSI_DDRCLK_EN() const { return GetBit(3); }
  void WaitForMIPI_CSI_DDRCLK_EN(bool value) { WaitForBit(3, value); }
  
  // Power Down input for MIPI CSI PHY.
  //
  void SetMIPI_CSI_PD_RX(bool value) { SetBit(4, value); }
  bool GetMIPI_CSI_PD_RX() const { return GetBit(4); }
  void WaitForMIPI_CSI_PD_RX(bool value) { WaitForBit(4, value); }
  
  // Assert to enable MIPI CSI Receive Enable
  //
  void SetMIPI_CSI_RX_ENABLE(bool value) { SetBit(5, value); }
  bool GetMIPI_CSI_RX_ENABLE() const { return GetBit(5); }
  void WaitForMIPI_CSI_RX_ENABLE(bool value) { WaitForBit(5, value); }
  
  // MIPI CSI PHY on-chip termination control bits
  //
  void SetMIPI_CSI_RX_RCAL(uint32_t value) { SetBits<2>(6, value); }
  uint32_t GetMIPI_CSI_RX_RCAL() const { return GetBits<2>(6).to_ulong(); }
  void WaitForMIPI_CSI_RX_RCAL(uint32_t value) { WaitForBits<2>(6, value); }
  
  // Programming bits that adjust the threshold voltage of LP-CD, default setting 2'b01
  //
  enum class eMIPI_CSI_RXCDRP : uint32_t {
    eVAL0=0, // 344mV
    eVAL01=1, // 325mV (Default)
    eVAL10=2, // 307mV
    eVAL11=3, // Invalid
  };
  void SetMIPI_CSI_RXCDRP(eMIPI_CSI_RXCDRP value) { SetBits<2>(8, static_cast<uint32_t>(value)); }
  eMIPI_CSI_RXCDRP GetMIPI_CSI_RXCDRP() const { return static_cast<eMIPI_CSI_RXCDRP>(GetBits<2>(8).to_ulong()); }
  void WaitForMIPI_CSI_RXCDRP(eMIPI_CSI_RXCDRP value) { WaitForBits<2>(8, static_cast<uint32_t>(value)); }
  
  // Programming bits that adjust the threshold voltage of LP-RX, default setting 2'b01
  //
  void SetMIPI_CSI_RXLPRP(uint32_t value) { SetBits<2>(10, value); }
  uint32_t GetMIPI_CSI_RXLPRP() const { return GetBits<2>(10).to_ulong(); }
  void WaitForMIPI_CSI_RXLPRP(uint32_t value) { WaitForBits<2>(10, value); }
  
  // Bits used to program T_HS_SETTLE.
  //
  void SetMIPI_CSI_S_PRG_RXHS_SETTLE(uint32_t value) { SetBits<6>(12, value); }
  uint32_t GetMIPI_CSI_S_PRG_RXHS_SETTLE() const { return GetBits<6>(12).to_ulong(); }
  void WaitForMIPI_CSI_S_PRG_RXHS_SETTLE(uint32_t value) { WaitForBits<6>(12, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000550); }
};

// GPR62 General Purpose Register
struct GPR62_t : public Register {
  GPR62_t() : Register(0x400e40f8) {}

  
  // MIPI DSI Clock Lane triming bits
  //
  void SetMIPI_DSI_CLK_TM(uint32_t value) { SetBits<3>(0, value); }
  uint32_t GetMIPI_DSI_CLK_TM() const { return GetBits<3>(0).to_ulong(); }
  void WaitForMIPI_DSI_CLK_TM(uint32_t value) { WaitForBits<3>(0, value); }
  
  // MIPI DSI Data Lane 0 triming bits
  //
  void SetMIPI_DSI_D0_TM(uint32_t value) { SetBits<3>(3, value); }
  uint32_t GetMIPI_DSI_D0_TM() const { return GetBits<3>(3).to_ulong(); }
  void WaitForMIPI_DSI_D0_TM(uint32_t value) { WaitForBits<3>(3, value); }
  
  // MIPI DSI Data Lane 1 triming bits
  //
  void SetMIPI_DSI_D1_TM(uint32_t value) { SetBits<3>(6, value); }
  uint32_t GetMIPI_DSI_D1_TM() const { return GetBits<3>(6).to_ulong(); }
  void WaitForMIPI_DSI_D1_TM(uint32_t value) { WaitForBits<3>(6, value); }
  
  // MIPI DSI PHY on-chip termination control bits
  //
  void SetMIPI_DSI_TX_RCAL(uint32_t value) { SetBits<2>(9, value); }
  uint32_t GetMIPI_DSI_TX_RCAL() const { return GetBits<2>(9).to_ulong(); }
  void WaitForMIPI_DSI_TX_RCAL(uint32_t value) { WaitForBits<2>(9, value); }
  
  // DSI transmit ULPS mode enable
  //
  void SetMIPI_DSI_TX_ULPS_ENABLE(uint32_t value) { SetBits<3>(11, value); }
  uint32_t GetMIPI_DSI_TX_ULPS_ENABLE() const { return GetBits<3>(11).to_ulong(); }
  void WaitForMIPI_DSI_TX_ULPS_ENABLE(uint32_t value) { WaitForBits<3>(11, value); }
  
  // MIPI DSI APB clock domain software reset bit
  //
  enum class eMIPI_DSI_PCLK_SOFT_RESET_N : uint32_t {
    eASSERT=0, // Assert reset
    eDEASSERT=1, // De-assert reset
  };
  void SetMIPI_DSI_PCLK_SOFT_RESET_N(eMIPI_DSI_PCLK_SOFT_RESET_N value) { SetBit(16, static_cast<uint32_t>(value)); }
  eMIPI_DSI_PCLK_SOFT_RESET_N GetMIPI_DSI_PCLK_SOFT_RESET_N() const { return static_cast<eMIPI_DSI_PCLK_SOFT_RESET_N>(GetBit(16)); }
  void WaitForMIPI_DSI_PCLK_SOFT_RESET_N(eMIPI_DSI_PCLK_SOFT_RESET_N value) { WaitForBit(16, static_cast<uint32_t>(value)); }
  
  // MIPI DSI Byte clock domain software reset bit
  //
  enum class eMIPI_DSI_BYTE_SOFT_RESET_N : uint32_t {
    eASSERT=0, // Assert reset
    eDEASSERT=1, // De-assert reset
  };
  void SetMIPI_DSI_BYTE_SOFT_RESET_N(eMIPI_DSI_BYTE_SOFT_RESET_N value) { SetBit(17, static_cast<uint32_t>(value)); }
  eMIPI_DSI_BYTE_SOFT_RESET_N GetMIPI_DSI_BYTE_SOFT_RESET_N() const { return static_cast<eMIPI_DSI_BYTE_SOFT_RESET_N>(GetBit(17)); }
  void WaitForMIPI_DSI_BYTE_SOFT_RESET_N(eMIPI_DSI_BYTE_SOFT_RESET_N value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // MIPI DSI Pixel clock domain software reset bit
  //
  enum class eMIPI_DSI_DPI_SOFT_RESET_N : uint32_t {
    eASSERT=0, // Assert reset
    eDEASSERT=1, // De-assert reset
  };
  void SetMIPI_DSI_DPI_SOFT_RESET_N(eMIPI_DSI_DPI_SOFT_RESET_N value) { SetBit(18, static_cast<uint32_t>(value)); }
  eMIPI_DSI_DPI_SOFT_RESET_N GetMIPI_DSI_DPI_SOFT_RESET_N() const { return static_cast<eMIPI_DSI_DPI_SOFT_RESET_N>(GetBit(18)); }
  void WaitForMIPI_DSI_DPI_SOFT_RESET_N(eMIPI_DSI_DPI_SOFT_RESET_N value) { WaitForBit(18, static_cast<uint32_t>(value)); }
  
  // MIPI DSI Escape clock domain software reset bit
  //
  enum class eMIPI_DSI_ESC_SOFT_RESET_N : uint32_t {
    eASSERT=0, // Assert reset
    eDEASSERT=1, // De-assert reset
  };
  void SetMIPI_DSI_ESC_SOFT_RESET_N(eMIPI_DSI_ESC_SOFT_RESET_N value) { SetBit(19, static_cast<uint32_t>(value)); }
  eMIPI_DSI_ESC_SOFT_RESET_N GetMIPI_DSI_ESC_SOFT_RESET_N() const { return static_cast<eMIPI_DSI_ESC_SOFT_RESET_N>(GetBit(19)); }
  void WaitForMIPI_DSI_ESC_SOFT_RESET_N(eMIPI_DSI_ESC_SOFT_RESET_N value) { WaitForBit(19, static_cast<uint32_t>(value)); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x000002db); }
};

// GPR63 General Purpose Register
struct GPR63_t : public Register {
  GPR63_t() : Register(0x400e40fc) {}

  
  // DSI transmit ULPS mode active flag
  //
  uint32_t GetMIPI_DSI_TX_ULPS_ACTIVE() const { return GetBits<3>(0).to_ulong(); }
  void WaitForMIPI_DSI_TX_ULPS_ACTIVE(uint32_t value) { WaitForBits<3>(0, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR64 General Purpose Register
struct GPR64_t : public Register {
  GPR64_t() : Register(0x400e4100) {}

  
  // Compensation code freeze
  //
  void SetGPIO_DISP1_FREEZE(bool value) { SetBit(0, value); }
  bool GetGPIO_DISP1_FREEZE() const { return GetBit(0); }
  void WaitForGPIO_DISP1_FREEZE(bool value) { WaitForBit(0, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_DISP1_COMPTQ(bool value) { SetBit(1, value); }
  bool GetGPIO_DISP1_COMPTQ() const { return GetBit(1); }
  void WaitForGPIO_DISP1_COMPTQ(bool value) { WaitForBit(1, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_DISP1_COMPEN(bool value) { SetBit(2, value); }
  bool GetGPIO_DISP1_COMPEN() const { return GetBit(2); }
  void WaitForGPIO_DISP1_COMPEN(bool value) { WaitForBit(2, value); }
  
  // Compensation code fast freeze
  //
  void SetGPIO_DISP1_FASTFRZ_EN(bool value) { SetBit(3, value); }
  bool GetGPIO_DISP1_FASTFRZ_EN() const { return GetBit(3); }
  void WaitForGPIO_DISP1_FASTFRZ_EN(bool value) { WaitForBit(3, value); }
  
  // GPIO_DISP_B1 IO bank's 4-bit PMOS compensation codes from core
  //
  void SetGPIO_DISP1_RASRCP(uint32_t value) { SetBits<4>(4, value); }
  uint32_t GetGPIO_DISP1_RASRCP() const { return GetBits<4>(4).to_ulong(); }
  void WaitForGPIO_DISP1_RASRCP(uint32_t value) { WaitForBits<4>(4, value); }
  
  // GPIO_DISP_B1 IO bank's 4-bit NMOS compensation codes from core
  //
  void SetGPIO_DISP1_RASRCN(uint32_t value) { SetBits<4>(8, value); }
  uint32_t GetGPIO_DISP1_RASRCN() const { return GetBits<4>(8).to_ulong(); }
  void WaitForGPIO_DISP1_RASRCN(uint32_t value) { WaitForBits<4>(8, value); }
  
  // GPIO_DISP1_NASRC selection
  //
  void SetGPIO_DISP1_SELECT_NASRC(bool value) { SetBit(12, value); }
  bool GetGPIO_DISP1_SELECT_NASRC() const { return GetBit(12); }
  void WaitForGPIO_DISP1_SELECT_NASRC(bool value) { WaitForBit(12, value); }
  
  // GPIO_DISP_B1 IO bank reference voltage generator cell sleep enable
  //
  void SetGPIO_DISP1_REFGEN_SLEEP(bool value) { SetBit(13, value); }
  bool GetGPIO_DISP1_REFGEN_SLEEP() const { return GetBit(13); }
  void WaitForGPIO_DISP1_REFGEN_SLEEP(bool value) { WaitForBit(13, value); }
  
  // GPIO_DISP_B1 IO bank power supply mode latch enable
  //
  void SetGPIO_DISP1_SUPLYDET_LATCH(bool value) { SetBit(14, value); }
  bool GetGPIO_DISP1_SUPLYDET_LATCH() const { return GetBit(14); }
  void WaitForGPIO_DISP1_SUPLYDET_LATCH(bool value) { WaitForBit(14, value); }
  
  // GPIO_DISP_B1 IO bank compensation OK flag
  //
  bool GetGPIO_DISP1_COMPOK() const { return GetBit(20); }
  void WaitForGPIO_DISP1_COMPOK(bool value) { WaitForBit(20, value); }
  
  // GPIO_DISP_B1 IO bank compensation codes
  //
  uint32_t GetGPIO_DISP1_NASRC() const { return GetBits<4>(21).to_ulong(); }
  void WaitForGPIO_DISP1_NASRC(uint32_t value) { WaitForBits<4>(21, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00004000); }
};

// GPR65 General Purpose Register
struct GPR65_t : public Register {
  GPR65_t() : Register(0x400e4104) {}

  
  // Compensation code freeze
  //
  void SetGPIO_EMC1_FREEZE(bool value) { SetBit(0, value); }
  bool GetGPIO_EMC1_FREEZE() const { return GetBit(0); }
  void WaitForGPIO_EMC1_FREEZE(bool value) { WaitForBit(0, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_EMC1_COMPTQ(bool value) { SetBit(1, value); }
  bool GetGPIO_EMC1_COMPTQ() const { return GetBit(1); }
  void WaitForGPIO_EMC1_COMPTQ(bool value) { WaitForBit(1, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_EMC1_COMPEN(bool value) { SetBit(2, value); }
  bool GetGPIO_EMC1_COMPEN() const { return GetBit(2); }
  void WaitForGPIO_EMC1_COMPEN(bool value) { WaitForBit(2, value); }
  
  // Compensation code fast freeze
  //
  void SetGPIO_EMC1_FASTFRZ_EN(bool value) { SetBit(3, value); }
  bool GetGPIO_EMC1_FASTFRZ_EN() const { return GetBit(3); }
  void WaitForGPIO_EMC1_FASTFRZ_EN(bool value) { WaitForBit(3, value); }
  
  // GPIO_EMC_B1 IO bank's 4-bit PMOS compensation codes from core
  //
  void SetGPIO_EMC1_RASRCP(uint32_t value) { SetBits<4>(4, value); }
  uint32_t GetGPIO_EMC1_RASRCP() const { return GetBits<4>(4).to_ulong(); }
  void WaitForGPIO_EMC1_RASRCP(uint32_t value) { WaitForBits<4>(4, value); }
  
  // GPIO_EMC_B1 IO bank's 4-bit NMOS compensation codes from core
  //
  void SetGPIO_EMC1_RASRCN(uint32_t value) { SetBits<4>(8, value); }
  uint32_t GetGPIO_EMC1_RASRCN() const { return GetBits<4>(8).to_ulong(); }
  void WaitForGPIO_EMC1_RASRCN(uint32_t value) { WaitForBits<4>(8, value); }
  
  // GPIO_EMC1_NASRC selection
  //
  void SetGPIO_EMC1_SELECT_NASRC(bool value) { SetBit(12, value); }
  bool GetGPIO_EMC1_SELECT_NASRC() const { return GetBit(12); }
  void WaitForGPIO_EMC1_SELECT_NASRC(bool value) { WaitForBit(12, value); }
  
  // GPIO_EMC_B1 IO bank reference voltage generator cell sleep enable
  //
  void SetGPIO_EMC1_REFGEN_SLEEP(bool value) { SetBit(13, value); }
  bool GetGPIO_EMC1_REFGEN_SLEEP() const { return GetBit(13); }
  void WaitForGPIO_EMC1_REFGEN_SLEEP(bool value) { WaitForBit(13, value); }
  
  // GPIO_EMC_B1 IO bank power supply mode latch enable
  //
  void SetGPIO_EMC1_SUPLYDET_LATCH(bool value) { SetBit(14, value); }
  bool GetGPIO_EMC1_SUPLYDET_LATCH() const { return GetBit(14); }
  void WaitForGPIO_EMC1_SUPLYDET_LATCH(bool value) { WaitForBit(14, value); }
  
  // GPIO_EMC_B1 IO bank compensation OK flag
  //
  bool GetGPIO_EMC1_COMPOK() const { return GetBit(20); }
  void WaitForGPIO_EMC1_COMPOK(bool value) { WaitForBit(20, value); }
  
  // GPIO_EMC_B1 IO bank compensation codes
  //
  uint32_t GetGPIO_EMC1_NASRC() const { return GetBits<4>(21).to_ulong(); }
  void WaitForGPIO_EMC1_NASRC(uint32_t value) { WaitForBits<4>(21, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00004000); }
};

// GPR66 General Purpose Register
struct GPR66_t : public Register {
  GPR66_t() : Register(0x400e4108) {}

  
  // Compensation code freeze
  //
  void SetGPIO_EMC2_FREEZE(bool value) { SetBit(0, value); }
  bool GetGPIO_EMC2_FREEZE() const { return GetBit(0); }
  void WaitForGPIO_EMC2_FREEZE(bool value) { WaitForBit(0, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_EMC2_COMPTQ(bool value) { SetBit(1, value); }
  bool GetGPIO_EMC2_COMPTQ() const { return GetBit(1); }
  void WaitForGPIO_EMC2_COMPTQ(bool value) { WaitForBit(1, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_EMC2_COMPEN(bool value) { SetBit(2, value); }
  bool GetGPIO_EMC2_COMPEN() const { return GetBit(2); }
  void WaitForGPIO_EMC2_COMPEN(bool value) { WaitForBit(2, value); }
  
  // Compensation code fast freeze
  //
  void SetGPIO_EMC2_FASTFRZ_EN(bool value) { SetBit(3, value); }
  bool GetGPIO_EMC2_FASTFRZ_EN() const { return GetBit(3); }
  void WaitForGPIO_EMC2_FASTFRZ_EN(bool value) { WaitForBit(3, value); }
  
  // GPIO_EMC_B2 IO bank's 4-bit PMOS compensation codes from core
  //
  void SetGPIO_EMC2_RASRCP(uint32_t value) { SetBits<4>(4, value); }
  uint32_t GetGPIO_EMC2_RASRCP() const { return GetBits<4>(4).to_ulong(); }
  void WaitForGPIO_EMC2_RASRCP(uint32_t value) { WaitForBits<4>(4, value); }
  
  // GPIO_EMC_B2 IO bank's 4-bit NMOS compensation codes from core
  //
  void SetGPIO_EMC2_RASRCN(uint32_t value) { SetBits<4>(8, value); }
  uint32_t GetGPIO_EMC2_RASRCN() const { return GetBits<4>(8).to_ulong(); }
  void WaitForGPIO_EMC2_RASRCN(uint32_t value) { WaitForBits<4>(8, value); }
  
  // GPIO_EMC2_NASRC selection
  //
  void SetGPIO_EMC2_SELECT_NASRC(bool value) { SetBit(12, value); }
  bool GetGPIO_EMC2_SELECT_NASRC() const { return GetBit(12); }
  void WaitForGPIO_EMC2_SELECT_NASRC(bool value) { WaitForBit(12, value); }
  
  // GPIO_EMC_B2 IO bank reference voltage generator cell sleep enable
  //
  void SetGPIO_EMC2_REFGEN_SLEEP(bool value) { SetBit(13, value); }
  bool GetGPIO_EMC2_REFGEN_SLEEP() const { return GetBit(13); }
  void WaitForGPIO_EMC2_REFGEN_SLEEP(bool value) { WaitForBit(13, value); }
  
  // GPIO_EMC_B2 IO bank power supply mode latch enable
  //
  void SetGPIO_EMC2_SUPLYDET_LATCH(bool value) { SetBit(14, value); }
  bool GetGPIO_EMC2_SUPLYDET_LATCH() const { return GetBit(14); }
  void WaitForGPIO_EMC2_SUPLYDET_LATCH(bool value) { WaitForBit(14, value); }
  
  // GPIO_EMC_B2 IO bank compensation OK flag
  //
  bool GetGPIO_EMC2_COMPOK() const { return GetBit(20); }
  void WaitForGPIO_EMC2_COMPOK(bool value) { WaitForBit(20, value); }
  
  // GPIO_EMC_B2 IO bank compensation codes
  //
  uint32_t GetGPIO_EMC2_NASRC() const { return GetBits<4>(21).to_ulong(); }
  void WaitForGPIO_EMC2_NASRC(uint32_t value) { WaitForBits<4>(21, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00004000); }
};

// GPR67 General Purpose Register
struct GPR67_t : public Register {
  GPR67_t() : Register(0x400e410c) {}

  
  // Compensation code freeze
  //
  void SetGPIO_SD1_FREEZE(bool value) { SetBit(0, value); }
  bool GetGPIO_SD1_FREEZE() const { return GetBit(0); }
  void WaitForGPIO_SD1_FREEZE(bool value) { WaitForBit(0, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_SD1_COMPTQ(bool value) { SetBit(1, value); }
  bool GetGPIO_SD1_COMPTQ() const { return GetBit(1); }
  void WaitForGPIO_SD1_COMPTQ(bool value) { WaitForBit(1, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_SD1_COMPEN(bool value) { SetBit(2, value); }
  bool GetGPIO_SD1_COMPEN() const { return GetBit(2); }
  void WaitForGPIO_SD1_COMPEN(bool value) { WaitForBit(2, value); }
  
  // Compensation code fast freeze
  //
  void SetGPIO_SD1_FASTFRZ_EN(bool value) { SetBit(3, value); }
  bool GetGPIO_SD1_FASTFRZ_EN() const { return GetBit(3); }
  void WaitForGPIO_SD1_FASTFRZ_EN(bool value) { WaitForBit(3, value); }
  
  // GPIO_SD_B1 IO bank's 4-bit PMOS compensation codes from core
  //
  void SetGPIO_SD1_RASRCP(uint32_t value) { SetBits<4>(4, value); }
  uint32_t GetGPIO_SD1_RASRCP() const { return GetBits<4>(4).to_ulong(); }
  void WaitForGPIO_SD1_RASRCP(uint32_t value) { WaitForBits<4>(4, value); }
  
  // GPIO_SD_B1 IO bank's 4-bit NMOS compensation codes from core
  //
  void SetGPIO_SD1_RASRCN(uint32_t value) { SetBits<4>(8, value); }
  uint32_t GetGPIO_SD1_RASRCN() const { return GetBits<4>(8).to_ulong(); }
  void WaitForGPIO_SD1_RASRCN(uint32_t value) { WaitForBits<4>(8, value); }
  
  // GPIO_SD1_NASRC selection
  //
  void SetGPIO_SD1_SELECT_NASRC(bool value) { SetBit(12, value); }
  bool GetGPIO_SD1_SELECT_NASRC() const { return GetBit(12); }
  void WaitForGPIO_SD1_SELECT_NASRC(bool value) { WaitForBit(12, value); }
  
  // GPIO_SD_B1 IO bank reference voltage generator cell sleep enable
  //
  void SetGPIO_SD1_REFGEN_SLEEP(bool value) { SetBit(13, value); }
  bool GetGPIO_SD1_REFGEN_SLEEP() const { return GetBit(13); }
  void WaitForGPIO_SD1_REFGEN_SLEEP(bool value) { WaitForBit(13, value); }
  
  // GPIO_SD_B1 IO bank power supply mode latch enable
  //
  void SetGPIO_SD1_SUPLYDET_LATCH(bool value) { SetBit(14, value); }
  bool GetGPIO_SD1_SUPLYDET_LATCH() const { return GetBit(14); }
  void WaitForGPIO_SD1_SUPLYDET_LATCH(bool value) { WaitForBit(14, value); }
  
  // GPIO_SD_B1 IO bank compensation OK flag
  //
  bool GetGPIO_SD1_COMPOK() const { return GetBit(20); }
  void WaitForGPIO_SD1_COMPOK(bool value) { WaitForBit(20, value); }
  
  // GPIO_SD_B1 IO bank compensation codes
  //
  uint32_t GetGPIO_SD1_NASRC() const { return GetBits<4>(21).to_ulong(); }
  void WaitForGPIO_SD1_NASRC(uint32_t value) { WaitForBits<4>(21, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00004000); }
};

// GPR68 General Purpose Register
struct GPR68_t : public Register {
  GPR68_t() : Register(0x400e4110) {}

  
  // Compensation code freeze
  //
  void SetGPIO_SD2_FREEZE(bool value) { SetBit(0, value); }
  bool GetGPIO_SD2_FREEZE() const { return GetBit(0); }
  void WaitForGPIO_SD2_FREEZE(bool value) { WaitForBit(0, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_SD2_COMPTQ(bool value) { SetBit(1, value); }
  bool GetGPIO_SD2_COMPTQ() const { return GetBit(1); }
  void WaitForGPIO_SD2_COMPTQ(bool value) { WaitForBit(1, value); }
  
  // COMPEN and COMPTQ control the operating modes of the compensation cell
  //
  void SetGPIO_SD2_COMPEN(bool value) { SetBit(2, value); }
  bool GetGPIO_SD2_COMPEN() const { return GetBit(2); }
  void WaitForGPIO_SD2_COMPEN(bool value) { WaitForBit(2, value); }
  
  // Compensation code fast freeze
  //
  void SetGPIO_SD2_FASTFRZ_EN(bool value) { SetBit(3, value); }
  bool GetGPIO_SD2_FASTFRZ_EN() const { return GetBit(3); }
  void WaitForGPIO_SD2_FASTFRZ_EN(bool value) { WaitForBit(3, value); }
  
  // GPIO_SD_B2 IO bank's 4-bit PMOS compensation codes from core
  //
  void SetGPIO_SD2_RASRCP(uint32_t value) { SetBits<4>(4, value); }
  uint32_t GetGPIO_SD2_RASRCP() const { return GetBits<4>(4).to_ulong(); }
  void WaitForGPIO_SD2_RASRCP(uint32_t value) { WaitForBits<4>(4, value); }
  
  // GPIO_SD_B2 IO bank's 4-bit NMOS compensation codes from core
  //
  void SetGPIO_SD2_RASRCN(uint32_t value) { SetBits<4>(8, value); }
  uint32_t GetGPIO_SD2_RASRCN() const { return GetBits<4>(8).to_ulong(); }
  void WaitForGPIO_SD2_RASRCN(uint32_t value) { WaitForBits<4>(8, value); }
  
  // GPIO_SD2_NASRC selection
  //
  void SetGPIO_SD2_SELECT_NASRC(bool value) { SetBit(12, value); }
  bool GetGPIO_SD2_SELECT_NASRC() const { return GetBit(12); }
  void WaitForGPIO_SD2_SELECT_NASRC(bool value) { WaitForBit(12, value); }
  
  // GPIO_SD_B2 IO bank reference voltage generator cell sleep enable
  //
  void SetGPIO_SD2_REFGEN_SLEEP(bool value) { SetBit(13, value); }
  bool GetGPIO_SD2_REFGEN_SLEEP() const { return GetBit(13); }
  void WaitForGPIO_SD2_REFGEN_SLEEP(bool value) { WaitForBit(13, value); }
  
  // GPIO_SD_B2 IO bank power supply mode latch enable
  //
  void SetGPIO_SD2_SUPLYDET_LATCH(bool value) { SetBit(14, value); }
  bool GetGPIO_SD2_SUPLYDET_LATCH() const { return GetBit(14); }
  void WaitForGPIO_SD2_SUPLYDET_LATCH(bool value) { WaitForBit(14, value); }
  
  // GPIO_SD_B2 IO bank compensation OK flag
  //
  bool GetGPIO_SD2_COMPOK() const { return GetBit(20); }
  void WaitForGPIO_SD2_COMPOK(bool value) { WaitForBit(20, value); }
  
  // GPIO_SD_B2 IO bank compensation codes
  //
  uint32_t GetGPIO_SD2_NASRC() const { return GetBits<4>(21).to_ulong(); }
  void WaitForGPIO_SD2_NASRC(uint32_t value) { WaitForBits<4>(21, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00004000); }
};

// GPR69 General Purpose Register
struct GPR69_t : public Register {
  GPR69_t() : Register(0x400e4114) {}

  
  // GPIO_DISP_B2 IO bank supply voltage range selection
  //
  void SetGPIO_DISP2_HIGH_RANGE(bool value) { SetBit(1, value); }
  bool GetGPIO_DISP2_HIGH_RANGE() const { return GetBit(1); }
  void WaitForGPIO_DISP2_HIGH_RANGE(bool value) { WaitForBit(1, value); }
  
  // GPIO_DISP_B2 IO bank supply voltage range selection
  //
  void SetGPIO_DISP2_LOW_RANGE(bool value) { SetBit(2, value); }
  bool GetGPIO_DISP2_LOW_RANGE() const { return GetBit(2); }
  void WaitForGPIO_DISP2_LOW_RANGE(bool value) { WaitForBit(2, value); }
  
  // GPIO_AD IO bank supply voltage range selection for GPIO_AD_00 to GPIO_AD_17
  //
  void SetGPIO_AD0_HIGH_RANGE(bool value) { SetBit(4, value); }
  bool GetGPIO_AD0_HIGH_RANGE() const { return GetBit(4); }
  void WaitForGPIO_AD0_HIGH_RANGE(bool value) { WaitForBit(4, value); }
  
  // GPIO_AD IO bank supply voltage range selection for GPIO_AD_00 to GPIO_AD_17
  //
  void SetGPIO_AD0_LOW_RANGE(bool value) { SetBit(5, value); }
  bool GetGPIO_AD0_LOW_RANGE() const { return GetBit(5); }
  void WaitForGPIO_AD0_LOW_RANGE(bool value) { WaitForBit(5, value); }
  
  // GPIO_LPSR IO bank supply voltage range selection for GPIO_AD_18 to GPIO_AD_35
  //
  void SetGPIO_AD1_HIGH_RANGE(bool value) { SetBit(7, value); }
  bool GetGPIO_AD1_HIGH_RANGE() const { return GetBit(7); }
  void WaitForGPIO_AD1_HIGH_RANGE(bool value) { WaitForBit(7, value); }
  
  // GPIO_LPSR IO bank supply voltage range selection for GPIO_AD_18 to GPIO_AD_35
  //
  void SetGPIO_AD1_LOW_RANGE(bool value) { SetBit(8, value); }
  bool GetGPIO_AD1_LOW_RANGE() const { return GetBit(8); }
  void WaitForGPIO_AD1_LOW_RANGE(bool value) { WaitForBit(8, value); }
  
  // GPIO_DISP_B1 IO bank supply voltage detector sleep mode enable
  //
  void SetSUPLYDET_DISP1_SLEEP(bool value) { SetBit(9, value); }
  bool GetSUPLYDET_DISP1_SLEEP() const { return GetBit(9); }
  void WaitForSUPLYDET_DISP1_SLEEP(bool value) { WaitForBit(9, value); }
  
  // GPIO_EMC_B1 IO bank supply voltage detector sleep mode enable
  //
  void SetSUPLYDET_EMC1_SLEEP(bool value) { SetBit(10, value); }
  bool GetSUPLYDET_EMC1_SLEEP() const { return GetBit(10); }
  void WaitForSUPLYDET_EMC1_SLEEP(bool value) { WaitForBit(10, value); }
  
  // GPIO_EMC_B2 IO bank supply voltage detector sleep mode enable
  //
  void SetSUPLYDET_EMC2_SLEEP(bool value) { SetBit(11, value); }
  bool GetSUPLYDET_EMC2_SLEEP() const { return GetBit(11); }
  void WaitForSUPLYDET_EMC2_SLEEP(bool value) { WaitForBit(11, value); }
  
  // GPIO_SD_B1 IO bank supply voltage detector sleep mode enable
  //
  void SetSUPLYDET_SD1_SLEEP(bool value) { SetBit(12, value); }
  bool GetSUPLYDET_SD1_SLEEP() const { return GetBit(12); }
  void WaitForSUPLYDET_SD1_SLEEP(bool value) { WaitForBit(12, value); }
  
  // GPIO_SD_B2 IO bank supply voltage detector sleep mode enable
  //
  void SetSUPLYDET_SD2_SLEEP(bool value) { SetBit(13, value); }
  bool GetSUPLYDET_SD2_SLEEP() const { return GetBit(13); }
  void WaitForSUPLYDET_SD2_SLEEP(bool value) { WaitForBit(13, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR70 General Purpose Register
struct GPR70_t : public Register {
  GPR70_t() : Register(0x400e4118) {}

  
  // ADC1 doze mode
  //
  void SetADC1_IPG_DOZE(bool value) { SetBit(0, value); }
  bool GetADC1_IPG_DOZE() const { return GetBit(0); }
  void WaitForADC1_IPG_DOZE(bool value) { WaitForBit(0, value); }
  
  // ADC1 stop request
  //
  void SetADC1_STOP_REQ(bool value) { SetBit(1, value); }
  bool GetADC1_STOP_REQ() const { return GetBit(1); }
  void WaitForADC1_STOP_REQ(bool value) { WaitForBit(1, value); }
  
  // ADC1 stop mode selection, cannot change when ADC1_STOP_REQ is asserted.
  //
  enum class eADC1_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetADC1_IPG_STOP_MODE(eADC1_IPG_STOP_MODE value) { SetBit(2, static_cast<uint32_t>(value)); }
  eADC1_IPG_STOP_MODE GetADC1_IPG_STOP_MODE() const { return static_cast<eADC1_IPG_STOP_MODE>(GetBit(2)); }
  void WaitForADC1_IPG_STOP_MODE(eADC1_IPG_STOP_MODE value) { WaitForBit(2, static_cast<uint32_t>(value)); }
  
  // ADC2 doze mode
  //
  void SetADC2_IPG_DOZE(bool value) { SetBit(3, value); }
  bool GetADC2_IPG_DOZE() const { return GetBit(3); }
  void WaitForADC2_IPG_DOZE(bool value) { WaitForBit(3, value); }
  
  // ADC2 stop request
  //
  void SetADC2_STOP_REQ(bool value) { SetBit(4, value); }
  bool GetADC2_STOP_REQ() const { return GetBit(4); }
  void WaitForADC2_STOP_REQ(bool value) { WaitForBit(4, value); }
  
  // ADC2 stop mode selection, cannot change when ADC2_STOP_REQ is asserted.
  //
  enum class eADC2_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetADC2_IPG_STOP_MODE(eADC2_IPG_STOP_MODE value) { SetBit(5, static_cast<uint32_t>(value)); }
  eADC2_IPG_STOP_MODE GetADC2_IPG_STOP_MODE() const { return static_cast<eADC2_IPG_STOP_MODE>(GetBit(5)); }
  void WaitForADC2_IPG_STOP_MODE(eADC2_IPG_STOP_MODE value) { WaitForBit(5, static_cast<uint32_t>(value)); }
  
  // CAN3 doze mode
  //
  void SetCAAM_IPG_DOZE(bool value) { SetBit(6, value); }
  bool GetCAAM_IPG_DOZE() const { return GetBit(6); }
  void WaitForCAAM_IPG_DOZE(bool value) { WaitForBit(6, value); }
  
  // CAAM stop request
  //
  void SetCAAM_STOP_REQ(bool value) { SetBit(7, value); }
  bool GetCAAM_STOP_REQ() const { return GetBit(7); }
  void WaitForCAAM_STOP_REQ(bool value) { WaitForBit(7, value); }
  
  // CAN1 doze mode
  //
  void SetCAN1_IPG_DOZE(bool value) { SetBit(8, value); }
  bool GetCAN1_IPG_DOZE() const { return GetBit(8); }
  void WaitForCAN1_IPG_DOZE(bool value) { WaitForBit(8, value); }
  
  // CAN1 stop request
  //
  void SetCAN1_STOP_REQ(bool value) { SetBit(9, value); }
  bool GetCAN1_STOP_REQ() const { return GetBit(9); }
  void WaitForCAN1_STOP_REQ(bool value) { WaitForBit(9, value); }
  
  // CAN2 doze mode
  //
  void SetCAN2_IPG_DOZE(bool value) { SetBit(10, value); }
  bool GetCAN2_IPG_DOZE() const { return GetBit(10); }
  void WaitForCAN2_IPG_DOZE(bool value) { WaitForBit(10, value); }
  
  // CAN2 stop request
  //
  void SetCAN2_STOP_REQ(bool value) { SetBit(11, value); }
  bool GetCAN2_STOP_REQ() const { return GetBit(11); }
  void WaitForCAN2_STOP_REQ(bool value) { WaitForBit(11, value); }
  
  // CAN3 doze mode
  //
  void SetCAN3_IPG_DOZE(bool value) { SetBit(12, value); }
  bool GetCAN3_IPG_DOZE() const { return GetBit(12); }
  void WaitForCAN3_IPG_DOZE(bool value) { WaitForBit(12, value); }
  
  // CAN3 stop request
  //
  void SetCAN3_STOP_REQ(bool value) { SetBit(13, value); }
  bool GetCAN3_STOP_REQ() const { return GetBit(13); }
  void WaitForCAN3_STOP_REQ(bool value) { WaitForBit(13, value); }
  
  // EDMA stop request
  //
  void SetEDMA_STOP_REQ(bool value) { SetBit(15, value); }
  bool GetEDMA_STOP_REQ() const { return GetBit(15); }
  void WaitForEDMA_STOP_REQ(bool value) { WaitForBit(15, value); }
  
  // EDMA_LPSR stop request
  //
  void SetEDMA_LPSR_STOP_REQ(bool value) { SetBit(16, value); }
  bool GetEDMA_LPSR_STOP_REQ() const { return GetBit(16); }
  void WaitForEDMA_LPSR_STOP_REQ(bool value) { WaitForBit(16, value); }
  
  // ENET doze mode
  //
  void SetENET_IPG_DOZE(bool value) { SetBit(17, value); }
  bool GetENET_IPG_DOZE() const { return GetBit(17); }
  void WaitForENET_IPG_DOZE(bool value) { WaitForBit(17, value); }
  
  // ENET stop request
  //
  void SetENET_STOP_REQ(bool value) { SetBit(18, value); }
  bool GetENET_STOP_REQ() const { return GetBit(18); }
  void WaitForENET_STOP_REQ(bool value) { WaitForBit(18, value); }
  
  // ENET1G doze mode
  //
  void SetENET1G_IPG_DOZE(bool value) { SetBit(19, value); }
  bool GetENET1G_IPG_DOZE() const { return GetBit(19); }
  void WaitForENET1G_IPG_DOZE(bool value) { WaitForBit(19, value); }
  
  // ENET1G stop request
  //
  void SetENET1G_STOP_REQ(bool value) { SetBit(20, value); }
  bool GetENET1G_STOP_REQ() const { return GetBit(20); }
  void WaitForENET1G_STOP_REQ(bool value) { WaitForBit(20, value); }
  
  // FLEXIO2 doze mode
  //
  void SetFLEXIO1_IPG_DOZE(bool value) { SetBit(21, value); }
  bool GetFLEXIO1_IPG_DOZE() const { return GetBit(21); }
  void WaitForFLEXIO1_IPG_DOZE(bool value) { WaitForBit(21, value); }
  
  // FLEXIO2 doze mode
  //
  void SetFLEXIO2_IPG_DOZE(bool value) { SetBit(22, value); }
  bool GetFLEXIO2_IPG_DOZE() const { return GetBit(22); }
  void WaitForFLEXIO2_IPG_DOZE(bool value) { WaitForBit(22, value); }
  
  // FLEXSPI1 doze mode
  //
  void SetFLEXSPI1_IPG_DOZE(bool value) { SetBit(23, value); }
  bool GetFLEXSPI1_IPG_DOZE() const { return GetBit(23); }
  void WaitForFLEXSPI1_IPG_DOZE(bool value) { WaitForBit(23, value); }
  
  // FLEXSPI1 stop request
  //
  void SetFLEXSPI1_STOP_REQ(bool value) { SetBit(24, value); }
  bool GetFLEXSPI1_STOP_REQ() const { return GetBit(24); }
  void WaitForFLEXSPI1_STOP_REQ(bool value) { WaitForBit(24, value); }
  
  // FLEXSPI2 doze mode
  //
  void SetFLEXSPI2_IPG_DOZE(bool value) { SetBit(25, value); }
  bool GetFLEXSPI2_IPG_DOZE() const { return GetBit(25); }
  void WaitForFLEXSPI2_IPG_DOZE(bool value) { WaitForBit(25, value); }
  
  // FLEXSPI2 stop request
  //
  void SetFLEXSPI2_STOP_REQ(bool value) { SetBit(26, value); }
  bool GetFLEXSPI2_STOP_REQ() const { return GetBit(26); }
  void WaitForFLEXSPI2_STOP_REQ(bool value) { WaitForBit(26, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR71 General Purpose Register
struct GPR71_t : public Register {
  GPR71_t() : Register(0x400e411c) {}

  
  // GPT1 doze mode
  //
  void SetGPT1_IPG_DOZE(bool value) { SetBit(0, value); }
  bool GetGPT1_IPG_DOZE() const { return GetBit(0); }
  void WaitForGPT1_IPG_DOZE(bool value) { WaitForBit(0, value); }
  
  // GPT2 doze mode
  //
  void SetGPT2_IPG_DOZE(bool value) { SetBit(1, value); }
  bool GetGPT2_IPG_DOZE() const { return GetBit(1); }
  void WaitForGPT2_IPG_DOZE(bool value) { WaitForBit(1, value); }
  
  // GPT3 doze mode
  //
  void SetGPT3_IPG_DOZE(bool value) { SetBit(2, value); }
  bool GetGPT3_IPG_DOZE() const { return GetBit(2); }
  void WaitForGPT3_IPG_DOZE(bool value) { WaitForBit(2, value); }
  
  // GPT4 doze mode
  //
  void SetGPT4_IPG_DOZE(bool value) { SetBit(3, value); }
  bool GetGPT4_IPG_DOZE() const { return GetBit(3); }
  void WaitForGPT4_IPG_DOZE(bool value) { WaitForBit(3, value); }
  
  // GPT5 doze mode
  //
  void SetGPT5_IPG_DOZE(bool value) { SetBit(4, value); }
  bool GetGPT5_IPG_DOZE() const { return GetBit(4); }
  void WaitForGPT5_IPG_DOZE(bool value) { WaitForBit(4, value); }
  
  // GPT6 doze mode
  //
  void SetGPT6_IPG_DOZE(bool value) { SetBit(5, value); }
  bool GetGPT6_IPG_DOZE() const { return GetBit(5); }
  void WaitForGPT6_IPG_DOZE(bool value) { WaitForBit(5, value); }
  
  // LPI2C1 doze mode
  //
  void SetLPI2C1_IPG_DOZE(bool value) { SetBit(6, value); }
  bool GetLPI2C1_IPG_DOZE() const { return GetBit(6); }
  void WaitForLPI2C1_IPG_DOZE(bool value) { WaitForBit(6, value); }
  
  // LPI2C1 stop request
  //
  void SetLPI2C1_STOP_REQ(bool value) { SetBit(7, value); }
  bool GetLPI2C1_STOP_REQ() const { return GetBit(7); }
  void WaitForLPI2C1_STOP_REQ(bool value) { WaitForBit(7, value); }
  
  // LPI2C1 stop mode selection, cannot change when LPI2C1_STOP_REQ is asserted.
  //
  enum class eLPI2C1_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPI2C1_IPG_STOP_MODE(eLPI2C1_IPG_STOP_MODE value) { SetBit(8, static_cast<uint32_t>(value)); }
  eLPI2C1_IPG_STOP_MODE GetLPI2C1_IPG_STOP_MODE() const { return static_cast<eLPI2C1_IPG_STOP_MODE>(GetBit(8)); }
  void WaitForLPI2C1_IPG_STOP_MODE(eLPI2C1_IPG_STOP_MODE value) { WaitForBit(8, static_cast<uint32_t>(value)); }
  
  // LPI2C2 doze mode
  //
  void SetLPI2C2_IPG_DOZE(bool value) { SetBit(9, value); }
  bool GetLPI2C2_IPG_DOZE() const { return GetBit(9); }
  void WaitForLPI2C2_IPG_DOZE(bool value) { WaitForBit(9, value); }
  
  // LPI2C2 stop request
  //
  void SetLPI2C2_STOP_REQ(bool value) { SetBit(10, value); }
  bool GetLPI2C2_STOP_REQ() const { return GetBit(10); }
  void WaitForLPI2C2_STOP_REQ(bool value) { WaitForBit(10, value); }
  
  // LPI2C2 stop mode selection, cannot change when LPI2C2_STOP_REQ is asserted.
  //
  enum class eLPI2C2_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPI2C2_IPG_STOP_MODE(eLPI2C2_IPG_STOP_MODE value) { SetBit(11, static_cast<uint32_t>(value)); }
  eLPI2C2_IPG_STOP_MODE GetLPI2C2_IPG_STOP_MODE() const { return static_cast<eLPI2C2_IPG_STOP_MODE>(GetBit(11)); }
  void WaitForLPI2C2_IPG_STOP_MODE(eLPI2C2_IPG_STOP_MODE value) { WaitForBit(11, static_cast<uint32_t>(value)); }
  
  // LPI2C3 doze mode
  //
  void SetLPI2C3_IPG_DOZE(bool value) { SetBit(12, value); }
  bool GetLPI2C3_IPG_DOZE() const { return GetBit(12); }
  void WaitForLPI2C3_IPG_DOZE(bool value) { WaitForBit(12, value); }
  
  // LPI2C3 stop request
  //
  void SetLPI2C3_STOP_REQ(bool value) { SetBit(13, value); }
  bool GetLPI2C3_STOP_REQ() const { return GetBit(13); }
  void WaitForLPI2C3_STOP_REQ(bool value) { WaitForBit(13, value); }
  
  // LPI2C3 stop mode selection, cannot change when LPI2C3_STOP_REQ is asserted.
  //
  enum class eLPI2C3_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPI2C3_IPG_STOP_MODE(eLPI2C3_IPG_STOP_MODE value) { SetBit(14, static_cast<uint32_t>(value)); }
  eLPI2C3_IPG_STOP_MODE GetLPI2C3_IPG_STOP_MODE() const { return static_cast<eLPI2C3_IPG_STOP_MODE>(GetBit(14)); }
  void WaitForLPI2C3_IPG_STOP_MODE(eLPI2C3_IPG_STOP_MODE value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // LPI2C4 doze mode
  //
  void SetLPI2C4_IPG_DOZE(bool value) { SetBit(15, value); }
  bool GetLPI2C4_IPG_DOZE() const { return GetBit(15); }
  void WaitForLPI2C4_IPG_DOZE(bool value) { WaitForBit(15, value); }
  
  // LPI2C4 stop request
  //
  void SetLPI2C4_STOP_REQ(bool value) { SetBit(16, value); }
  bool GetLPI2C4_STOP_REQ() const { return GetBit(16); }
  void WaitForLPI2C4_STOP_REQ(bool value) { WaitForBit(16, value); }
  
  // LPI2C4 stop mode selection, cannot change when LPI2C4_STOP_REQ is asserted.
  //
  enum class eLPI2C4_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPI2C4_IPG_STOP_MODE(eLPI2C4_IPG_STOP_MODE value) { SetBit(17, static_cast<uint32_t>(value)); }
  eLPI2C4_IPG_STOP_MODE GetLPI2C4_IPG_STOP_MODE() const { return static_cast<eLPI2C4_IPG_STOP_MODE>(GetBit(17)); }
  void WaitForLPI2C4_IPG_STOP_MODE(eLPI2C4_IPG_STOP_MODE value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // LPI2C5 doze mode
  //
  void SetLPI2C5_IPG_DOZE(bool value) { SetBit(18, value); }
  bool GetLPI2C5_IPG_DOZE() const { return GetBit(18); }
  void WaitForLPI2C5_IPG_DOZE(bool value) { WaitForBit(18, value); }
  
  // LPI2C5 stop request
  //
  void SetLPI2C5_STOP_REQ(bool value) { SetBit(19, value); }
  bool GetLPI2C5_STOP_REQ() const { return GetBit(19); }
  void WaitForLPI2C5_STOP_REQ(bool value) { WaitForBit(19, value); }
  
  // LPI2C5 stop mode selection, cannot change when LPI2C5_STOP_REQ is asserted.
  //
  enum class eLPI2C5_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPI2C5_IPG_STOP_MODE(eLPI2C5_IPG_STOP_MODE value) { SetBit(20, static_cast<uint32_t>(value)); }
  eLPI2C5_IPG_STOP_MODE GetLPI2C5_IPG_STOP_MODE() const { return static_cast<eLPI2C5_IPG_STOP_MODE>(GetBit(20)); }
  void WaitForLPI2C5_IPG_STOP_MODE(eLPI2C5_IPG_STOP_MODE value) { WaitForBit(20, static_cast<uint32_t>(value)); }
  
  // LPI2C6 doze mode
  //
  void SetLPI2C6_IPG_DOZE(bool value) { SetBit(21, value); }
  bool GetLPI2C6_IPG_DOZE() const { return GetBit(21); }
  void WaitForLPI2C6_IPG_DOZE(bool value) { WaitForBit(21, value); }
  
  // LPI2C6 stop request
  //
  void SetLPI2C6_STOP_REQ(bool value) { SetBit(22, value); }
  bool GetLPI2C6_STOP_REQ() const { return GetBit(22); }
  void WaitForLPI2C6_STOP_REQ(bool value) { WaitForBit(22, value); }
  
  // LPI2C6 stop mode selection, cannot change when LPI2C6_STOP_REQ is asserted.
  //
  enum class eLPI2C6_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPI2C6_IPG_STOP_MODE(eLPI2C6_IPG_STOP_MODE value) { SetBit(23, static_cast<uint32_t>(value)); }
  eLPI2C6_IPG_STOP_MODE GetLPI2C6_IPG_STOP_MODE() const { return static_cast<eLPI2C6_IPG_STOP_MODE>(GetBit(23)); }
  void WaitForLPI2C6_IPG_STOP_MODE(eLPI2C6_IPG_STOP_MODE value) { WaitForBit(23, static_cast<uint32_t>(value)); }
  
  // LPSPI1 doze mode
  //
  void SetLPSPI1_IPG_DOZE(bool value) { SetBit(24, value); }
  bool GetLPSPI1_IPG_DOZE() const { return GetBit(24); }
  void WaitForLPSPI1_IPG_DOZE(bool value) { WaitForBit(24, value); }
  
  // LPSPI1 stop request
  //
  void SetLPSPI1_STOP_REQ(bool value) { SetBit(25, value); }
  bool GetLPSPI1_STOP_REQ() const { return GetBit(25); }
  void WaitForLPSPI1_STOP_REQ(bool value) { WaitForBit(25, value); }
  
  // LPSPI1 stop mode selection, cannot change when LPSPI1_STOP_REQ is asserted.
  //
  enum class eLPSPI1_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPSPI1_IPG_STOP_MODE(eLPSPI1_IPG_STOP_MODE value) { SetBit(26, static_cast<uint32_t>(value)); }
  eLPSPI1_IPG_STOP_MODE GetLPSPI1_IPG_STOP_MODE() const { return static_cast<eLPSPI1_IPG_STOP_MODE>(GetBit(26)); }
  void WaitForLPSPI1_IPG_STOP_MODE(eLPSPI1_IPG_STOP_MODE value) { WaitForBit(26, static_cast<uint32_t>(value)); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR72 General Purpose Register
struct GPR72_t : public Register {
  GPR72_t() : Register(0x400e4120) {}

  
  // LPSPI2 doze mode
  //
  void SetLPSPI2_IPG_DOZE(bool value) { SetBit(0, value); }
  bool GetLPSPI2_IPG_DOZE() const { return GetBit(0); }
  void WaitForLPSPI2_IPG_DOZE(bool value) { WaitForBit(0, value); }
  
  // LPSPI2 stop request
  //
  void SetLPSPI2_STOP_REQ(bool value) { SetBit(1, value); }
  bool GetLPSPI2_STOP_REQ() const { return GetBit(1); }
  void WaitForLPSPI2_STOP_REQ(bool value) { WaitForBit(1, value); }
  
  // LPSPI2 stop mode selection, cannot change when LPSPI2_STOP_REQ is asserted.
  //
  enum class eLPSPI2_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPSPI2_IPG_STOP_MODE(eLPSPI2_IPG_STOP_MODE value) { SetBit(2, static_cast<uint32_t>(value)); }
  eLPSPI2_IPG_STOP_MODE GetLPSPI2_IPG_STOP_MODE() const { return static_cast<eLPSPI2_IPG_STOP_MODE>(GetBit(2)); }
  void WaitForLPSPI2_IPG_STOP_MODE(eLPSPI2_IPG_STOP_MODE value) { WaitForBit(2, static_cast<uint32_t>(value)); }
  
  // LPSPI3 doze mode
  //
  void SetLPSPI3_IPG_DOZE(bool value) { SetBit(3, value); }
  bool GetLPSPI3_IPG_DOZE() const { return GetBit(3); }
  void WaitForLPSPI3_IPG_DOZE(bool value) { WaitForBit(3, value); }
  
  // LPSPI3 stop request
  //
  void SetLPSPI3_STOP_REQ(bool value) { SetBit(4, value); }
  bool GetLPSPI3_STOP_REQ() const { return GetBit(4); }
  void WaitForLPSPI3_STOP_REQ(bool value) { WaitForBit(4, value); }
  
  // LPSPI3 stop mode selection, cannot change when LPSPI3_STOP_REQ is asserted.
  //
  enum class eLPSPI3_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPSPI3_IPG_STOP_MODE(eLPSPI3_IPG_STOP_MODE value) { SetBit(5, static_cast<uint32_t>(value)); }
  eLPSPI3_IPG_STOP_MODE GetLPSPI3_IPG_STOP_MODE() const { return static_cast<eLPSPI3_IPG_STOP_MODE>(GetBit(5)); }
  void WaitForLPSPI3_IPG_STOP_MODE(eLPSPI3_IPG_STOP_MODE value) { WaitForBit(5, static_cast<uint32_t>(value)); }
  
  // LPSPI4 doze mode
  //
  void SetLPSPI4_IPG_DOZE(bool value) { SetBit(6, value); }
  bool GetLPSPI4_IPG_DOZE() const { return GetBit(6); }
  void WaitForLPSPI4_IPG_DOZE(bool value) { WaitForBit(6, value); }
  
  // LPSPI4 stop request
  //
  void SetLPSPI4_STOP_REQ(bool value) { SetBit(7, value); }
  bool GetLPSPI4_STOP_REQ() const { return GetBit(7); }
  void WaitForLPSPI4_STOP_REQ(bool value) { WaitForBit(7, value); }
  
  // LPSPI4 stop mode selection, cannot change when LPSPI4_STOP_REQ is asserted.
  //
  enum class eLPSPI4_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPSPI4_IPG_STOP_MODE(eLPSPI4_IPG_STOP_MODE value) { SetBit(8, static_cast<uint32_t>(value)); }
  eLPSPI4_IPG_STOP_MODE GetLPSPI4_IPG_STOP_MODE() const { return static_cast<eLPSPI4_IPG_STOP_MODE>(GetBit(8)); }
  void WaitForLPSPI4_IPG_STOP_MODE(eLPSPI4_IPG_STOP_MODE value) { WaitForBit(8, static_cast<uint32_t>(value)); }
  
  // LPSPI5 doze mode
  //
  void SetLPSPI5_IPG_DOZE(bool value) { SetBit(9, value); }
  bool GetLPSPI5_IPG_DOZE() const { return GetBit(9); }
  void WaitForLPSPI5_IPG_DOZE(bool value) { WaitForBit(9, value); }
  
  // LPSPI5 stop request
  //
  void SetLPSPI5_STOP_REQ(bool value) { SetBit(10, value); }
  bool GetLPSPI5_STOP_REQ() const { return GetBit(10); }
  void WaitForLPSPI5_STOP_REQ(bool value) { WaitForBit(10, value); }
  
  // LPSPI5 stop mode selection, cannot change when LPSPI5_STOP_REQ is asserted.
  //
  enum class eLPSPI5_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPSPI5_IPG_STOP_MODE(eLPSPI5_IPG_STOP_MODE value) { SetBit(11, static_cast<uint32_t>(value)); }
  eLPSPI5_IPG_STOP_MODE GetLPSPI5_IPG_STOP_MODE() const { return static_cast<eLPSPI5_IPG_STOP_MODE>(GetBit(11)); }
  void WaitForLPSPI5_IPG_STOP_MODE(eLPSPI5_IPG_STOP_MODE value) { WaitForBit(11, static_cast<uint32_t>(value)); }
  
  // LPSPI6 doze mode
  //
  void SetLPSPI6_IPG_DOZE(bool value) { SetBit(12, value); }
  bool GetLPSPI6_IPG_DOZE() const { return GetBit(12); }
  void WaitForLPSPI6_IPG_DOZE(bool value) { WaitForBit(12, value); }
  
  // LPSPI6 stop request
  //
  void SetLPSPI6_STOP_REQ(bool value) { SetBit(13, value); }
  bool GetLPSPI6_STOP_REQ() const { return GetBit(13); }
  void WaitForLPSPI6_STOP_REQ(bool value) { WaitForBit(13, value); }
  
  // LPSPI6 stop mode selection, cannot change when LPSPI6_STOP_REQ is asserted.
  //
  enum class eLPSPI6_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPSPI6_IPG_STOP_MODE(eLPSPI6_IPG_STOP_MODE value) { SetBit(14, static_cast<uint32_t>(value)); }
  eLPSPI6_IPG_STOP_MODE GetLPSPI6_IPG_STOP_MODE() const { return static_cast<eLPSPI6_IPG_STOP_MODE>(GetBit(14)); }
  void WaitForLPSPI6_IPG_STOP_MODE(eLPSPI6_IPG_STOP_MODE value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // LPUART1 doze mode
  //
  void SetLPUART1_IPG_DOZE(bool value) { SetBit(15, value); }
  bool GetLPUART1_IPG_DOZE() const { return GetBit(15); }
  void WaitForLPUART1_IPG_DOZE(bool value) { WaitForBit(15, value); }
  
  // LPUART1 stop request
  //
  void SetLPUART1_STOP_REQ(bool value) { SetBit(16, value); }
  bool GetLPUART1_STOP_REQ() const { return GetBit(16); }
  void WaitForLPUART1_STOP_REQ(bool value) { WaitForBit(16, value); }
  
  // LPUART1 stop mode selection, cannot change when LPUART1_STOP_REQ is asserted.
  //
  enum class eLPUART1_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART1_IPG_STOP_MODE(eLPUART1_IPG_STOP_MODE value) { SetBit(17, static_cast<uint32_t>(value)); }
  eLPUART1_IPG_STOP_MODE GetLPUART1_IPG_STOP_MODE() const { return static_cast<eLPUART1_IPG_STOP_MODE>(GetBit(17)); }
  void WaitForLPUART1_IPG_STOP_MODE(eLPUART1_IPG_STOP_MODE value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // LPUART2 doze mode
  //
  void SetLPUART2_IPG_DOZE(bool value) { SetBit(18, value); }
  bool GetLPUART2_IPG_DOZE() const { return GetBit(18); }
  void WaitForLPUART2_IPG_DOZE(bool value) { WaitForBit(18, value); }
  
  // LPUART2 stop request
  //
  void SetLPUART2_STOP_REQ(bool value) { SetBit(19, value); }
  bool GetLPUART2_STOP_REQ() const { return GetBit(19); }
  void WaitForLPUART2_STOP_REQ(bool value) { WaitForBit(19, value); }
  
  // LPUART2 stop mode selection, cannot change when LPUART2_STOP_REQ is asserted.
  //
  enum class eLPUART2_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART2_IPG_STOP_MODE(eLPUART2_IPG_STOP_MODE value) { SetBit(20, static_cast<uint32_t>(value)); }
  eLPUART2_IPG_STOP_MODE GetLPUART2_IPG_STOP_MODE() const { return static_cast<eLPUART2_IPG_STOP_MODE>(GetBit(20)); }
  void WaitForLPUART2_IPG_STOP_MODE(eLPUART2_IPG_STOP_MODE value) { WaitForBit(20, static_cast<uint32_t>(value)); }
  
  // LPUART3 doze mode
  //
  void SetLPUART3_IPG_DOZE(bool value) { SetBit(21, value); }
  bool GetLPUART3_IPG_DOZE() const { return GetBit(21); }
  void WaitForLPUART3_IPG_DOZE(bool value) { WaitForBit(21, value); }
  
  // LPUART3 stop request
  //
  void SetLPUART3_STOP_REQ(bool value) { SetBit(22, value); }
  bool GetLPUART3_STOP_REQ() const { return GetBit(22); }
  void WaitForLPUART3_STOP_REQ(bool value) { WaitForBit(22, value); }
  
  // LPUART3 stop mode selection, cannot change when LPUART3_STOP_REQ is asserted.
  //
  enum class eLPUART3_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART3_IPG_STOP_MODE(eLPUART3_IPG_STOP_MODE value) { SetBit(23, static_cast<uint32_t>(value)); }
  eLPUART3_IPG_STOP_MODE GetLPUART3_IPG_STOP_MODE() const { return static_cast<eLPUART3_IPG_STOP_MODE>(GetBit(23)); }
  void WaitForLPUART3_IPG_STOP_MODE(eLPUART3_IPG_STOP_MODE value) { WaitForBit(23, static_cast<uint32_t>(value)); }
  
  // LPUART4 doze mode
  //
  void SetLPUART4_IPG_DOZE(bool value) { SetBit(24, value); }
  bool GetLPUART4_IPG_DOZE() const { return GetBit(24); }
  void WaitForLPUART4_IPG_DOZE(bool value) { WaitForBit(24, value); }
  
  // LPUART4 stop request
  //
  void SetLPUART4_STOP_REQ(bool value) { SetBit(25, value); }
  bool GetLPUART4_STOP_REQ() const { return GetBit(25); }
  void WaitForLPUART4_STOP_REQ(bool value) { WaitForBit(25, value); }
  
  // LPUART4 stop mode selection, cannot change when LPUART4_STOP_REQ is asserted.
  //
  enum class eLPUART4_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART4_IPG_STOP_MODE(eLPUART4_IPG_STOP_MODE value) { SetBit(26, static_cast<uint32_t>(value)); }
  eLPUART4_IPG_STOP_MODE GetLPUART4_IPG_STOP_MODE() const { return static_cast<eLPUART4_IPG_STOP_MODE>(GetBit(26)); }
  void WaitForLPUART4_IPG_STOP_MODE(eLPUART4_IPG_STOP_MODE value) { WaitForBit(26, static_cast<uint32_t>(value)); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR73 General Purpose Register
struct GPR73_t : public Register {
  GPR73_t() : Register(0x400e4124) {}

  
  // LPUART5 doze mode
  //
  void SetLPUART5_IPG_DOZE(bool value) { SetBit(0, value); }
  bool GetLPUART5_IPG_DOZE() const { return GetBit(0); }
  void WaitForLPUART5_IPG_DOZE(bool value) { WaitForBit(0, value); }
  
  // LPUART5 stop request
  //
  void SetLPUART5_STOP_REQ(bool value) { SetBit(1, value); }
  bool GetLPUART5_STOP_REQ() const { return GetBit(1); }
  void WaitForLPUART5_STOP_REQ(bool value) { WaitForBit(1, value); }
  
  // LPUART5 stop mode selection, cannot change when LPUART5_STOP_REQ is asserted.
  //
  enum class eLPUART5_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART5_IPG_STOP_MODE(eLPUART5_IPG_STOP_MODE value) { SetBit(2, static_cast<uint32_t>(value)); }
  eLPUART5_IPG_STOP_MODE GetLPUART5_IPG_STOP_MODE() const { return static_cast<eLPUART5_IPG_STOP_MODE>(GetBit(2)); }
  void WaitForLPUART5_IPG_STOP_MODE(eLPUART5_IPG_STOP_MODE value) { WaitForBit(2, static_cast<uint32_t>(value)); }
  
  // LPUART6 doze mode
  //
  void SetLPUART6_IPG_DOZE(bool value) { SetBit(3, value); }
  bool GetLPUART6_IPG_DOZE() const { return GetBit(3); }
  void WaitForLPUART6_IPG_DOZE(bool value) { WaitForBit(3, value); }
  
  // LPUART6 stop request
  //
  void SetLPUART6_STOP_REQ(bool value) { SetBit(4, value); }
  bool GetLPUART6_STOP_REQ() const { return GetBit(4); }
  void WaitForLPUART6_STOP_REQ(bool value) { WaitForBit(4, value); }
  
  // LPUART6 stop mode selection, cannot change when LPUART6_STOP_REQ is asserted.
  //
  enum class eLPUART6_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART6_IPG_STOP_MODE(eLPUART6_IPG_STOP_MODE value) { SetBit(5, static_cast<uint32_t>(value)); }
  eLPUART6_IPG_STOP_MODE GetLPUART6_IPG_STOP_MODE() const { return static_cast<eLPUART6_IPG_STOP_MODE>(GetBit(5)); }
  void WaitForLPUART6_IPG_STOP_MODE(eLPUART6_IPG_STOP_MODE value) { WaitForBit(5, static_cast<uint32_t>(value)); }
  
  // LPUART7 doze mode
  //
  void SetLPUART7_IPG_DOZE(bool value) { SetBit(6, value); }
  bool GetLPUART7_IPG_DOZE() const { return GetBit(6); }
  void WaitForLPUART7_IPG_DOZE(bool value) { WaitForBit(6, value); }
  
  // LPUART7 stop request
  //
  void SetLPUART7_STOP_REQ(bool value) { SetBit(7, value); }
  bool GetLPUART7_STOP_REQ() const { return GetBit(7); }
  void WaitForLPUART7_STOP_REQ(bool value) { WaitForBit(7, value); }
  
  // LPUART7 stop mode selection, cannot change when LPUART7_STOP_REQ is asserted.
  //
  enum class eLPUART7_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART7_IPG_STOP_MODE(eLPUART7_IPG_STOP_MODE value) { SetBit(8, static_cast<uint32_t>(value)); }
  eLPUART7_IPG_STOP_MODE GetLPUART7_IPG_STOP_MODE() const { return static_cast<eLPUART7_IPG_STOP_MODE>(GetBit(8)); }
  void WaitForLPUART7_IPG_STOP_MODE(eLPUART7_IPG_STOP_MODE value) { WaitForBit(8, static_cast<uint32_t>(value)); }
  
  // LPUART8 doze mode
  //
  void SetLPUART8_IPG_DOZE(bool value) { SetBit(9, value); }
  bool GetLPUART8_IPG_DOZE() const { return GetBit(9); }
  void WaitForLPUART8_IPG_DOZE(bool value) { WaitForBit(9, value); }
  
  // LPUART8 stop request
  //
  void SetLPUART8_STOP_REQ(bool value) { SetBit(10, value); }
  bool GetLPUART8_STOP_REQ() const { return GetBit(10); }
  void WaitForLPUART8_STOP_REQ(bool value) { WaitForBit(10, value); }
  
  // LPUART8 stop mode selection, cannot change when LPUART8_STOP_REQ is asserted.
  //
  enum class eLPUART8_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART8_IPG_STOP_MODE(eLPUART8_IPG_STOP_MODE value) { SetBit(11, static_cast<uint32_t>(value)); }
  eLPUART8_IPG_STOP_MODE GetLPUART8_IPG_STOP_MODE() const { return static_cast<eLPUART8_IPG_STOP_MODE>(GetBit(11)); }
  void WaitForLPUART8_IPG_STOP_MODE(eLPUART8_IPG_STOP_MODE value) { WaitForBit(11, static_cast<uint32_t>(value)); }
  
  // LPUART9 doze mode
  //
  void SetLPUART9_IPG_DOZE(bool value) { SetBit(12, value); }
  bool GetLPUART9_IPG_DOZE() const { return GetBit(12); }
  void WaitForLPUART9_IPG_DOZE(bool value) { WaitForBit(12, value); }
  
  // LPUART9 stop request
  //
  void SetLPUART9_STOP_REQ(bool value) { SetBit(13, value); }
  bool GetLPUART9_STOP_REQ() const { return GetBit(13); }
  void WaitForLPUART9_STOP_REQ(bool value) { WaitForBit(13, value); }
  
  // LPUART9 stop mode selection, cannot change when LPUART9_STOP_REQ is asserted.
  //
  enum class eLPUART9_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART9_IPG_STOP_MODE(eLPUART9_IPG_STOP_MODE value) { SetBit(14, static_cast<uint32_t>(value)); }
  eLPUART9_IPG_STOP_MODE GetLPUART9_IPG_STOP_MODE() const { return static_cast<eLPUART9_IPG_STOP_MODE>(GetBit(14)); }
  void WaitForLPUART9_IPG_STOP_MODE(eLPUART9_IPG_STOP_MODE value) { WaitForBit(14, static_cast<uint32_t>(value)); }
  
  // LPUART10 doze mode
  //
  void SetLPUART10_IPG_DOZE(bool value) { SetBit(15, value); }
  bool GetLPUART10_IPG_DOZE() const { return GetBit(15); }
  void WaitForLPUART10_IPG_DOZE(bool value) { WaitForBit(15, value); }
  
  // LPUART10 stop request
  //
  void SetLPUART10_STOP_REQ(bool value) { SetBit(16, value); }
  bool GetLPUART10_STOP_REQ() const { return GetBit(16); }
  void WaitForLPUART10_STOP_REQ(bool value) { WaitForBit(16, value); }
  
  // LPUART10 stop mode selection, cannot change when LPUART10_STOP_REQ is asserted.
  //
  enum class eLPUART10_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART10_IPG_STOP_MODE(eLPUART10_IPG_STOP_MODE value) { SetBit(17, static_cast<uint32_t>(value)); }
  eLPUART10_IPG_STOP_MODE GetLPUART10_IPG_STOP_MODE() const { return static_cast<eLPUART10_IPG_STOP_MODE>(GetBit(17)); }
  void WaitForLPUART10_IPG_STOP_MODE(eLPUART10_IPG_STOP_MODE value) { WaitForBit(17, static_cast<uint32_t>(value)); }
  
  // LPUART11 doze mode
  //
  void SetLPUART11_IPG_DOZE(bool value) { SetBit(18, value); }
  bool GetLPUART11_IPG_DOZE() const { return GetBit(18); }
  void WaitForLPUART11_IPG_DOZE(bool value) { WaitForBit(18, value); }
  
  // LPUART11 stop request
  //
  void SetLPUART11_STOP_REQ(bool value) { SetBit(19, value); }
  bool GetLPUART11_STOP_REQ() const { return GetBit(19); }
  void WaitForLPUART11_STOP_REQ(bool value) { WaitForBit(19, value); }
  
  // LPUART11 stop mode selection, cannot change when LPUART11_STOP_REQ is asserted.
  //
  enum class eLPUART11_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART11_IPG_STOP_MODE(eLPUART11_IPG_STOP_MODE value) { SetBit(20, static_cast<uint32_t>(value)); }
  eLPUART11_IPG_STOP_MODE GetLPUART11_IPG_STOP_MODE() const { return static_cast<eLPUART11_IPG_STOP_MODE>(GetBit(20)); }
  void WaitForLPUART11_IPG_STOP_MODE(eLPUART11_IPG_STOP_MODE value) { WaitForBit(20, static_cast<uint32_t>(value)); }
  
  // LPUART12 doze mode
  //
  void SetLPUART12_IPG_DOZE(bool value) { SetBit(21, value); }
  bool GetLPUART12_IPG_DOZE() const { return GetBit(21); }
  void WaitForLPUART12_IPG_DOZE(bool value) { WaitForBit(21, value); }
  
  // LPUART12 stop request
  //
  void SetLPUART12_STOP_REQ(bool value) { SetBit(22, value); }
  bool GetLPUART12_STOP_REQ() const { return GetBit(22); }
  void WaitForLPUART12_STOP_REQ(bool value) { WaitForBit(22, value); }
  
  // LPUART12 stop mode selection, cannot change when LPUART12_STOP_REQ is asserted.
  //
  enum class eLPUART12_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetLPUART12_IPG_STOP_MODE(eLPUART12_IPG_STOP_MODE value) { SetBit(23, static_cast<uint32_t>(value)); }
  eLPUART12_IPG_STOP_MODE GetLPUART12_IPG_STOP_MODE() const { return static_cast<eLPUART12_IPG_STOP_MODE>(GetBit(23)); }
  void WaitForLPUART12_IPG_STOP_MODE(eLPUART12_IPG_STOP_MODE value) { WaitForBit(23, static_cast<uint32_t>(value)); }
  
  // MIC doze mode
  //
  void SetMIC_IPG_DOZE(bool value) { SetBit(24, value); }
  bool GetMIC_IPG_DOZE() const { return GetBit(24); }
  void WaitForMIC_IPG_DOZE(bool value) { WaitForBit(24, value); }
  
  // MIC stop request
  //
  void SetMIC_STOP_REQ(bool value) { SetBit(25, value); }
  bool GetMIC_STOP_REQ() const { return GetBit(25); }
  void WaitForMIC_STOP_REQ(bool value) { WaitForBit(25, value); }
  
  // MIC stop mode selection, cannot change when MIC_STOP_REQ is asserted.
  //
  enum class eMIC_IPG_STOP_MODE : uint32_t {
    eFUNC=0, // This module is functional in Stop Mode
    eNONFUNC=1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  void SetMIC_IPG_STOP_MODE(eMIC_IPG_STOP_MODE value) { SetBit(26, static_cast<uint32_t>(value)); }
  eMIC_IPG_STOP_MODE GetMIC_IPG_STOP_MODE() const { return static_cast<eMIC_IPG_STOP_MODE>(GetBit(26)); }
  void WaitForMIC_IPG_STOP_MODE(eMIC_IPG_STOP_MODE value) { WaitForBit(26, static_cast<uint32_t>(value)); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR74 General Purpose Register
struct GPR74_t : public Register {
  GPR74_t() : Register(0x400e4128) {}

  
  // PIT1 stop request
  //
  void SetPIT1_STOP_REQ(bool value) { SetBit(1, value); }
  bool GetPIT1_STOP_REQ() const { return GetBit(1); }
  void WaitForPIT1_STOP_REQ(bool value) { WaitForBit(1, value); }
  
  // PIT2 stop request
  //
  void SetPIT2_STOP_REQ(bool value) { SetBit(2, value); }
  bool GetPIT2_STOP_REQ() const { return GetBit(2); }
  void WaitForPIT2_STOP_REQ(bool value) { WaitForBit(2, value); }
  
  // SEMC stop request
  //
  void SetSEMC_STOP_REQ(bool value) { SetBit(3, value); }
  bool GetSEMC_STOP_REQ() const { return GetBit(3); }
  void WaitForSEMC_STOP_REQ(bool value) { WaitForBit(3, value); }
  
  // SIM1 doze mode
  //
  void SetSIM1_IPG_DOZE(bool value) { SetBit(4, value); }
  bool GetSIM1_IPG_DOZE() const { return GetBit(4); }
  void WaitForSIM1_IPG_DOZE(bool value) { WaitForBit(4, value); }
  
  // SIM2 doze mode
  //
  void SetSIM2_IPG_DOZE(bool value) { SetBit(5, value); }
  bool GetSIM2_IPG_DOZE() const { return GetBit(5); }
  void WaitForSIM2_IPG_DOZE(bool value) { WaitForBit(5, value); }
  
  // SNVS_HP doze mode
  //
  void SetSNVS_HP_IPG_DOZE(bool value) { SetBit(6, value); }
  bool GetSNVS_HP_IPG_DOZE() const { return GetBit(6); }
  void WaitForSNVS_HP_IPG_DOZE(bool value) { WaitForBit(6, value); }
  
  // SNVS_HP stop request
  //
  void SetSNVS_HP_STOP_REQ(bool value) { SetBit(7, value); }
  bool GetSNVS_HP_STOP_REQ() const { return GetBit(7); }
  void WaitForSNVS_HP_STOP_REQ(bool value) { WaitForBit(7, value); }
  
  // WDOG1 doze mode
  //
  void SetWDOG1_IPG_DOZE(bool value) { SetBit(8, value); }
  bool GetWDOG1_IPG_DOZE() const { return GetBit(8); }
  void WaitForWDOG1_IPG_DOZE(bool value) { WaitForBit(8, value); }
  
  // WDOG2 doze mode
  //
  void SetWDOG2_IPG_DOZE(bool value) { SetBit(9, value); }
  bool GetWDOG2_IPG_DOZE() const { return GetBit(9); }
  void WaitForWDOG2_IPG_DOZE(bool value) { WaitForBit(9, value); }
  
  // SAI1 stop request
  //
  void SetSAI1_STOP_REQ(bool value) { SetBit(10, value); }
  bool GetSAI1_STOP_REQ() const { return GetBit(10); }
  void WaitForSAI1_STOP_REQ(bool value) { WaitForBit(10, value); }
  
  // SAI2 stop request
  //
  void SetSAI2_STOP_REQ(bool value) { SetBit(11, value); }
  bool GetSAI2_STOP_REQ() const { return GetBit(11); }
  void WaitForSAI2_STOP_REQ(bool value) { WaitForBit(11, value); }
  
  // SAI3 stop request
  //
  void SetSAI3_STOP_REQ(bool value) { SetBit(12, value); }
  bool GetSAI3_STOP_REQ() const { return GetBit(12); }
  void WaitForSAI3_STOP_REQ(bool value) { WaitForBit(12, value); }
  
  // SAI4 stop request
  //
  void SetSAI4_STOP_REQ(bool value) { SetBit(13, value); }
  bool GetSAI4_STOP_REQ() const { return GetBit(13); }
  void WaitForSAI4_STOP_REQ(bool value) { WaitForBit(13, value); }
  
  // FLEXIO1 bus clock domain stop request
  //
  void SetFLEXIO1_STOP_REQ_BUS(bool value) { SetBit(14, value); }
  bool GetFLEXIO1_STOP_REQ_BUS() const { return GetBit(14); }
  void WaitForFLEXIO1_STOP_REQ_BUS(bool value) { WaitForBit(14, value); }
  
  // FLEXIO1 peripheral clock domain stop request
  //
  void SetFLEXIO1_STOP_REQ_PER(bool value) { SetBit(15, value); }
  bool GetFLEXIO1_STOP_REQ_PER() const { return GetBit(15); }
  void WaitForFLEXIO1_STOP_REQ_PER(bool value) { WaitForBit(15, value); }
  
  // FLEXIO2 bus clock domain stop request
  //
  void SetFLEXIO2_STOP_REQ_BUS(bool value) { SetBit(16, value); }
  bool GetFLEXIO2_STOP_REQ_BUS() const { return GetBit(16); }
  void WaitForFLEXIO2_STOP_REQ_BUS(bool value) { WaitForBit(16, value); }
  
  // FLEXIO2 peripheral clock domain stop request
  //
  void SetFLEXIO2_STOP_REQ_PER(bool value) { SetBit(17, value); }
  bool GetFLEXIO2_STOP_REQ_PER() const { return GetBit(17); }
  void WaitForFLEXIO2_STOP_REQ_PER(bool value) { WaitForBit(17, value); }
  
  // Domain write protection
  //
  enum class eDWP : uint32_t {
    eforbid_none=0, // Both cores are allowed
    eforbid_CM7=1, // CM7 is forbidden
    eforbid_CM4=2, // CM4 is forbidden
    eforbid_both=3, // Both cores are forbidden
  };
  void SetDWP(eDWP value) { SetBits<2>(28, static_cast<uint32_t>(value)); }
  eDWP GetDWP() const { return static_cast<eDWP>(GetBits<2>(28).to_ulong()); }
  void WaitForDWP(eDWP value) { WaitForBits<2>(28, static_cast<uint32_t>(value)); }
  
  // Domain write protection lock
  //
  enum class eDWP_LOCK : uint32_t {
    elock_none=0, // Neither of DWP bits is locked
    elock_low=1, // The lower DWP bit is locked
    elock_high=2, // The higher DWP bit is locked
    elock_both=3, // Both DWP bits are locked
  };
  void SetDWP_LOCK(eDWP_LOCK value) { SetBits<2>(30, static_cast<uint32_t>(value)); }
  eDWP_LOCK GetDWP_LOCK() const { return static_cast<eDWP_LOCK>(GetBits<2>(30).to_ulong()); }
  void WaitForDWP_LOCK(eDWP_LOCK value) { WaitForBits<2>(30, static_cast<uint32_t>(value)); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR75 General Purpose Register
struct GPR75_t : public Register {
  GPR75_t() : Register(0x400e412c) {}

  
  // ADC1 stop acknowledge
  //
  bool GetADC1_STOP_ACK() const { return GetBit(0); }
  void WaitForADC1_STOP_ACK(bool value) { WaitForBit(0, value); }
  
  // ADC2 stop acknowledge
  //
  bool GetADC2_STOP_ACK() const { return GetBit(1); }
  void WaitForADC2_STOP_ACK(bool value) { WaitForBit(1, value); }
  
  // CAAM stop acknowledge
  //
  bool GetCAAM_STOP_ACK() const { return GetBit(2); }
  void WaitForCAAM_STOP_ACK(bool value) { WaitForBit(2, value); }
  
  // CAN1 stop acknowledge
  //
  bool GetCAN1_STOP_ACK() const { return GetBit(3); }
  void WaitForCAN1_STOP_ACK(bool value) { WaitForBit(3, value); }
  
  // CAN2 stop acknowledge
  //
  bool GetCAN2_STOP_ACK() const { return GetBit(4); }
  void WaitForCAN2_STOP_ACK(bool value) { WaitForBit(4, value); }
  
  // CAN3 stop acknowledge
  //
  bool GetCAN3_STOP_ACK() const { return GetBit(5); }
  void WaitForCAN3_STOP_ACK(bool value) { WaitForBit(5, value); }
  
  // EDMA stop acknowledge
  //
  bool GetEDMA_STOP_ACK() const { return GetBit(6); }
  void WaitForEDMA_STOP_ACK(bool value) { WaitForBit(6, value); }
  
  // EDMA_LPSR stop acknowledge
  //
  bool GetEDMA_LPSR_STOP_ACK() const { return GetBit(7); }
  void WaitForEDMA_LPSR_STOP_ACK(bool value) { WaitForBit(7, value); }
  
  // ENET stop acknowledge
  //
  bool GetENET_STOP_ACK() const { return GetBit(8); }
  void WaitForENET_STOP_ACK(bool value) { WaitForBit(8, value); }
  
  // ENET1G stop acknowledge
  //
  bool GetENET1G_STOP_ACK() const { return GetBit(9); }
  void WaitForENET1G_STOP_ACK(bool value) { WaitForBit(9, value); }
  
  // FLEXSPI1 stop acknowledge
  //
  bool GetFLEXSPI1_STOP_ACK() const { return GetBit(10); }
  void WaitForFLEXSPI1_STOP_ACK(bool value) { WaitForBit(10, value); }
  
  // FLEXSPI2 stop acknowledge
  //
  bool GetFLEXSPI2_STOP_ACK() const { return GetBit(11); }
  void WaitForFLEXSPI2_STOP_ACK(bool value) { WaitForBit(11, value); }
  
  // LPI2C1 stop acknowledge
  //
  bool GetLPI2C1_STOP_ACK() const { return GetBit(12); }
  void WaitForLPI2C1_STOP_ACK(bool value) { WaitForBit(12, value); }
  
  // LPI2C2 stop acknowledge
  //
  bool GetLPI2C2_STOP_ACK() const { return GetBit(13); }
  void WaitForLPI2C2_STOP_ACK(bool value) { WaitForBit(13, value); }
  
  // LPI2C3 stop acknowledge
  //
  bool GetLPI2C3_STOP_ACK() const { return GetBit(14); }
  void WaitForLPI2C3_STOP_ACK(bool value) { WaitForBit(14, value); }
  
  // LPI2C4 stop acknowledge
  //
  bool GetLPI2C4_STOP_ACK() const { return GetBit(15); }
  void WaitForLPI2C4_STOP_ACK(bool value) { WaitForBit(15, value); }
  
  // LPI2C5 stop acknowledge
  //
  bool GetLPI2C5_STOP_ACK() const { return GetBit(16); }
  void WaitForLPI2C5_STOP_ACK(bool value) { WaitForBit(16, value); }
  
  // LPI2C6 stop acknowledge
  //
  bool GetLPI2C6_STOP_ACK() const { return GetBit(17); }
  void WaitForLPI2C6_STOP_ACK(bool value) { WaitForBit(17, value); }
  
  // LPSPI1 stop acknowledge
  //
  bool GetLPSPI1_STOP_ACK() const { return GetBit(18); }
  void WaitForLPSPI1_STOP_ACK(bool value) { WaitForBit(18, value); }
  
  // LPSPI2 stop acknowledge
  //
  bool GetLPSPI2_STOP_ACK() const { return GetBit(19); }
  void WaitForLPSPI2_STOP_ACK(bool value) { WaitForBit(19, value); }
  
  // LPSPI3 stop acknowledge
  //
  bool GetLPSPI3_STOP_ACK() const { return GetBit(20); }
  void WaitForLPSPI3_STOP_ACK(bool value) { WaitForBit(20, value); }
  
  // LPSPI4 stop acknowledge
  //
  bool GetLPSPI4_STOP_ACK() const { return GetBit(21); }
  void WaitForLPSPI4_STOP_ACK(bool value) { WaitForBit(21, value); }
  
  // LPSPI5 stop acknowledge
  //
  bool GetLPSPI5_STOP_ACK() const { return GetBit(22); }
  void WaitForLPSPI5_STOP_ACK(bool value) { WaitForBit(22, value); }
  
  // LPSPI6 stop acknowledge
  //
  bool GetLPSPI6_STOP_ACK() const { return GetBit(23); }
  void WaitForLPSPI6_STOP_ACK(bool value) { WaitForBit(23, value); }
  
  // LPUART1 stop acknowledge
  //
  bool GetLPUART1_STOP_ACK() const { return GetBit(24); }
  void WaitForLPUART1_STOP_ACK(bool value) { WaitForBit(24, value); }
  
  // LPUART2 stop acknowledge
  //
  bool GetLPUART2_STOP_ACK() const { return GetBit(25); }
  void WaitForLPUART2_STOP_ACK(bool value) { WaitForBit(25, value); }
  
  // LPUART3 stop acknowledge
  //
  bool GetLPUART3_STOP_ACK() const { return GetBit(26); }
  void WaitForLPUART3_STOP_ACK(bool value) { WaitForBit(26, value); }
  
  // LPUART4 stop acknowledge
  //
  bool GetLPUART4_STOP_ACK() const { return GetBit(27); }
  void WaitForLPUART4_STOP_ACK(bool value) { WaitForBit(27, value); }
  
  // LPUART5 stop acknowledge
  //
  bool GetLPUART5_STOP_ACK() const { return GetBit(28); }
  void WaitForLPUART5_STOP_ACK(bool value) { WaitForBit(28, value); }
  
  // LPUART6 stop acknowledge
  //
  bool GetLPUART6_STOP_ACK() const { return GetBit(29); }
  void WaitForLPUART6_STOP_ACK(bool value) { WaitForBit(29, value); }
  
  // LPUART7 stop acknowledge
  //
  bool GetLPUART7_STOP_ACK() const { return GetBit(30); }
  void WaitForLPUART7_STOP_ACK(bool value) { WaitForBit(30, value); }
  
  // LPUART8 stop acknowledge
  //
  bool GetLPUART8_STOP_ACK() const { return GetBit(31); }
  void WaitForLPUART8_STOP_ACK(bool value) { WaitForBit(31, value); }
  
  void Reset() { this->Set(0x00000000); }
};

// GPR76 General Purpose Register
struct GPR76_t : public Register {
  GPR76_t() : Register(0x400e4130) {}

  
  // LPUART9 stop acknowledge
  //
  bool GetLPUART9_STOP_ACK() const { return GetBit(0); }
  void WaitForLPUART9_STOP_ACK(bool value) { WaitForBit(0, value); }
  
  // LPUART10 stop acknowledge
  //
  bool GetLPUART10_STOP_ACK() const { return GetBit(1); }
  void WaitForLPUART10_STOP_ACK(bool value) { WaitForBit(1, value); }
  
  // LPUART11 stop acknowledge
  //
  bool GetLPUART11_STOP_ACK() const { return GetBit(2); }
  void WaitForLPUART11_STOP_ACK(bool value) { WaitForBit(2, value); }
  
  // LPUART12 stop acknowledge
  //
  bool GetLPUART12_STOP_ACK() const { return GetBit(3); }
  void WaitForLPUART12_STOP_ACK(bool value) { WaitForBit(3, value); }
  
  // MIC stop acknowledge
  //
  bool GetMIC_STOP_ACK() const { return GetBit(4); }
  void WaitForMIC_STOP_ACK(bool value) { WaitForBit(4, value); }
  
  // PIT1 stop acknowledge
  //
  bool GetPIT1_STOP_ACK() const { return GetBit(5); }
  void WaitForPIT1_STOP_ACK(bool value) { WaitForBit(5, value); }
  
  // PIT2 stop acknowledge
  //
  bool GetPIT2_STOP_ACK() const { return GetBit(6); }
  void WaitForPIT2_STOP_ACK(bool value) { WaitForBit(6, value); }
  
  // SEMC stop acknowledge
  //
  bool GetSEMC_STOP_ACK() const { return GetBit(7); }
  void WaitForSEMC_STOP_ACK(bool value) { WaitForBit(7, value); }
  
  // SNVS_HP stop acknowledge
  //
  bool GetSNVS_HP_STOP_ACK() const { return GetBit(8); }
  void WaitForSNVS_HP_STOP_ACK(bool value) { WaitForBit(8, value); }
  
  // SAI1 stop acknowledge
  //
  bool GetSAI1_STOP_ACK() const { return GetBit(9); }
  void WaitForSAI1_STOP_ACK(bool value) { WaitForBit(9, value); }
  
  // SAI2 stop acknowledge
  //
  bool GetSAI2_STOP_ACK() const { return GetBit(10); }
  void WaitForSAI2_STOP_ACK(bool value) { WaitForBit(10, value); }
  
  // SAI3 stop acknowledge
  //
  bool GetSAI3_STOP_ACK() const { return GetBit(11); }
  void WaitForSAI3_STOP_ACK(bool value) { WaitForBit(11, value); }
  
  // SAI4 stop acknowledge
  //
  bool GetSAI4_STOP_ACK() const { return GetBit(12); }
  void WaitForSAI4_STOP_ACK(bool value) { WaitForBit(12, value); }
  
  // FLEXIO1 stop acknowledge of bus clock domain
  //
  bool GetFLEXIO1_STOP_ACK_BUS() const { return GetBit(13); }
  void WaitForFLEXIO1_STOP_ACK_BUS(bool value) { WaitForBit(13, value); }
  
  // FLEXIO1 stop acknowledge of peripheral clock domain
  //
  bool GetFLEXIO1_STOP_ACK_PER() const { return GetBit(14); }
  void WaitForFLEXIO1_STOP_ACK_PER(bool value) { WaitForBit(14, value); }
  
  // FLEXIO2 stop acknowledge of bus clock domain
  //
  bool GetFLEXIO2_STOP_ACK_BUS() const { return GetBit(15); }
  void WaitForFLEXIO2_STOP_ACK_BUS(bool value) { WaitForBit(15, value); }
  
  // FLEXIO2 stop acknowledge of peripheral clock domain
  //
  bool GetFLEXIO2_STOP_ACK_PER() const { return GetBit(16); }
  void WaitForFLEXIO2_STOP_ACK_PER(bool value) { WaitForBit(16, value); }
  
  void Reset() { this->Set(0x00000000); }
};


struct Registers {
  GPR0_t GPR0{};
  GPR1_t GPR1{};
  GPR2_t GPR2{};
  GPR3_t GPR3{};
  GPR4_t GPR4{};
  GPR5_t GPR5{};
  GPR6_t GPR6{};
  GPR7_t GPR7{};
  GPR8_t GPR8{};
  GPR9_t GPR9{};
  GPR10_t GPR10{};
  GPR11_t GPR11{};
  GPR12_t GPR12{};
  GPR13_t GPR13{};
  GPR14_t GPR14{};
  GPR15_t GPR15{};
  GPR16_t GPR16{};
  GPR17_t GPR17{};
  GPR18_t GPR18{};
  GPR20_t GPR20{};
  GPR21_t GPR21{};
  GPR22_t GPR22{};
  GPR23_t GPR23{};
  GPR24_t GPR24{};
  GPR25_t GPR25{};
  GPR26_t GPR26{};
  GPR27_t GPR27{};
  GPR28_t GPR28{};
  GPR29_t GPR29{};
  GPR30_t GPR30{};
  GPR31_t GPR31{};
  GPR32_t GPR32{};
  GPR33_t GPR33{};
  GPR34_t GPR34{};
  GPR35_t GPR35{};
  GPR36_t GPR36{};
  GPR37_t GPR37{};
  GPR38_t GPR38{};
  GPR39_t GPR39{};
  GPR40_t GPR40{};
  GPR41_t GPR41{};
  GPR42_t GPR42{};
  GPR43_t GPR43{};
  GPR44_t GPR44{};
  GPR45_t GPR45{};
  GPR46_t GPR46{};
  GPR47_t GPR47{};
  GPR48_t GPR48{};
  GPR49_t GPR49{};
  GPR50_t GPR50{};
  GPR51_t GPR51{};
  GPR52_t GPR52{};
  GPR53_t GPR53{};
  GPR54_t GPR54{};
  GPR55_t GPR55{};
  GPR59_t GPR59{};
  GPR62_t GPR62{};
  GPR63_t GPR63{};
  GPR64_t GPR64{};
  GPR65_t GPR65{};
  GPR66_t GPR66{};
  GPR67_t GPR67{};
  GPR68_t GPR68{};
  GPR69_t GPR69{};
  GPR70_t GPR70{};
  GPR71_t GPR71{};
  GPR72_t GPR72{};
  GPR73_t GPR73{};
  GPR74_t GPR74{};
  GPR75_t GPR75{};
  GPR76_t GPR76{};
};

} // namespace IOMUXC_GPR