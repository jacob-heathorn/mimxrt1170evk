#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// USBPHY
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Usbphy {
  static_assert( Instance == 1u || Instance == 2u,
      "Usbphy: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40434000u :
      Instance == 2u ? 0x40438000u :
      0u;

  
// USB PHY Power-Down Register
struct PWD_fields_ {

  enum class eTXPWDFS : std::uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
    ePWR_DOWN = 1,
  };

  enum class eTXPWDIBIAS : std::uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
    ePWR_DOWN = 1,
  };

  enum class eTXPWDV2I : std::uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB PHY transmit V-to-I converter and the current mirror
    ePWR_DOWN = 1,
  };

  enum class eRXPWDENV : std::uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB high-speed receiver envelope detector (squelch signal)
    ePWR_DOWN = 1,
  };

  enum class eRXPWD1PT1 : std::uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Power-down the USB full-speed differential receiver.
    ePWR_DOWN = 1,
  };

  enum class eRXPWDDIFF : std::uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB high-speed differential receiver
    ePWR_DOWN = 1,
  };

  enum class eRXPWDRX : std::uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Power-down the entire USB PHY receiver block except for the full-speed differential receiver
    ePWR_DOWN = 1,
  };
  // TXPWDFS
  using TXPWDFS = ftl::mmio::Field<1, 10, eTXPWDFS, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXPWDIBIAS
  using TXPWDIBIAS = ftl::mmio::Field<1, 11, eTXPWDIBIAS, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXPWDV2I
  using TXPWDV2I = ftl::mmio::Field<1, 12, eTXPWDV2I, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXPWDENV
  using RXPWDENV = ftl::mmio::Field<1, 17, eRXPWDENV, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXPWD1PT1
  using RXPWD1PT1 = ftl::mmio::Field<1, 18, eRXPWD1PT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXPWDDIFF
  using RXPWDDIFF = ftl::mmio::Field<1, 19, eRXPWDDIFF, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXPWDRX
  using RXPWDRX = ftl::mmio::Field<1, 20, eRXPWDRX, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PWD_fields_

struct PWD : ftl::mmio::Register<
    kBase + 0x0u,
    std::uint32_t,
    0x001E1C00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename PWD_fields_::TXPWDFS,
    typename PWD_fields_::TXPWDIBIAS,
    typename PWD_fields_::TXPWDV2I,
    ftl::mmio::Reserved<4, 13>,
    typename PWD_fields_::RXPWDENV,
    typename PWD_fields_::RXPWD1PT1,
    typename PWD_fields_::RXPWDDIFF,
    typename PWD_fields_::RXPWDRX,
    ftl::mmio::Reserved<11, 21>> {
  using eTXPWDFS = typename PWD_fields_::eTXPWDFS;
  using eTXPWDIBIAS = typename PWD_fields_::eTXPWDIBIAS;
  using eTXPWDV2I = typename PWD_fields_::eTXPWDV2I;
  using eRXPWDENV = typename PWD_fields_::eRXPWDENV;
  using eRXPWD1PT1 = typename PWD_fields_::eRXPWD1PT1;
  using eRXPWDDIFF = typename PWD_fields_::eRXPWDDIFF;
  using eRXPWDRX = typename PWD_fields_::eRXPWDRX;
  using TXPWDFS = typename PWD_fields_::TXPWDFS;
  using TXPWDIBIAS = typename PWD_fields_::TXPWDIBIAS;
  using TXPWDV2I = typename PWD_fields_::TXPWDV2I;
  using RXPWDENV = typename PWD_fields_::RXPWDENV;
  using RXPWD1PT1 = typename PWD_fields_::RXPWD1PT1;
  using RXPWDDIFF = typename PWD_fields_::RXPWDDIFF;
  using RXPWDRX = typename PWD_fields_::RXPWDRX;
};

  
// USB PHY Power-Down Register
struct PWD_SET_fields_ {
  // TXPWDFS
  using TXPWDFS = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TXPWDIBIAS
  using TXPWDIBIAS = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TXPWDV2I
  using TXPWDV2I = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // RXPWDENV
  using RXPWDENV = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // RXPWD1PT1
  using RXPWD1PT1 = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // RXPWDDIFF
  using RXPWDDIFF = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // RXPWDRX
  using RXPWDRX = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct PWD_SET_fields_

struct PWD_SET : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint32_t,
    0x001E1C00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename PWD_SET_fields_::TXPWDFS,
    typename PWD_SET_fields_::TXPWDIBIAS,
    typename PWD_SET_fields_::TXPWDV2I,
    ftl::mmio::Reserved<4, 13>,
    typename PWD_SET_fields_::RXPWDENV,
    typename PWD_SET_fields_::RXPWD1PT1,
    typename PWD_SET_fields_::RXPWDDIFF,
    typename PWD_SET_fields_::RXPWDRX,
    ftl::mmio::Reserved<11, 21>> {
  using TXPWDFS = typename PWD_SET_fields_::TXPWDFS;
  using TXPWDIBIAS = typename PWD_SET_fields_::TXPWDIBIAS;
  using TXPWDV2I = typename PWD_SET_fields_::TXPWDV2I;
  using RXPWDENV = typename PWD_SET_fields_::RXPWDENV;
  using RXPWD1PT1 = typename PWD_SET_fields_::RXPWD1PT1;
  using RXPWDDIFF = typename PWD_SET_fields_::RXPWDDIFF;
  using RXPWDRX = typename PWD_SET_fields_::RXPWDRX;
};

  
// USB PHY Power-Down Register
struct PWD_CLR_fields_ {
  // TXPWDFS
  using TXPWDFS = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TXPWDIBIAS
  using TXPWDIBIAS = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TXPWDV2I
  using TXPWDV2I = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RXPWDENV
  using RXPWDENV = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RXPWD1PT1
  using RXPWD1PT1 = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RXPWDDIFF
  using RXPWDDIFF = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RXPWDRX
  using RXPWDRX = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct PWD_CLR_fields_

struct PWD_CLR : ftl::mmio::Register<
    kBase + 0x8u,
    std::uint32_t,
    0x001E1C00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename PWD_CLR_fields_::TXPWDFS,
    typename PWD_CLR_fields_::TXPWDIBIAS,
    typename PWD_CLR_fields_::TXPWDV2I,
    ftl::mmio::Reserved<4, 13>,
    typename PWD_CLR_fields_::RXPWDENV,
    typename PWD_CLR_fields_::RXPWD1PT1,
    typename PWD_CLR_fields_::RXPWDDIFF,
    typename PWD_CLR_fields_::RXPWDRX,
    ftl::mmio::Reserved<11, 21>> {
  using TXPWDFS = typename PWD_CLR_fields_::TXPWDFS;
  using TXPWDIBIAS = typename PWD_CLR_fields_::TXPWDIBIAS;
  using TXPWDV2I = typename PWD_CLR_fields_::TXPWDV2I;
  using RXPWDENV = typename PWD_CLR_fields_::RXPWDENV;
  using RXPWD1PT1 = typename PWD_CLR_fields_::RXPWD1PT1;
  using RXPWDDIFF = typename PWD_CLR_fields_::RXPWDDIFF;
  using RXPWDRX = typename PWD_CLR_fields_::RXPWDRX;
};

  
// USB PHY Power-Down Register
struct PWD_TOG_fields_ {
  // TXPWDFS
  using TXPWDFS = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TXPWDIBIAS
  using TXPWDIBIAS = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TXPWDV2I
  using TXPWDV2I = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // RXPWDENV
  using RXPWDENV = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // RXPWD1PT1
  using RXPWD1PT1 = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // RXPWDDIFF
  using RXPWDDIFF = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // RXPWDRX
  using RXPWDRX = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct PWD_TOG_fields_

struct PWD_TOG : ftl::mmio::Register<
    kBase + 0xCu,
    std::uint32_t,
    0x001E1C00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename PWD_TOG_fields_::TXPWDFS,
    typename PWD_TOG_fields_::TXPWDIBIAS,
    typename PWD_TOG_fields_::TXPWDV2I,
    ftl::mmio::Reserved<4, 13>,
    typename PWD_TOG_fields_::RXPWDENV,
    typename PWD_TOG_fields_::RXPWD1PT1,
    typename PWD_TOG_fields_::RXPWDDIFF,
    typename PWD_TOG_fields_::RXPWDRX,
    ftl::mmio::Reserved<11, 21>> {
  using TXPWDFS = typename PWD_TOG_fields_::TXPWDFS;
  using TXPWDIBIAS = typename PWD_TOG_fields_::TXPWDIBIAS;
  using TXPWDV2I = typename PWD_TOG_fields_::TXPWDV2I;
  using RXPWDENV = typename PWD_TOG_fields_::RXPWDENV;
  using RXPWD1PT1 = typename PWD_TOG_fields_::RXPWD1PT1;
  using RXPWDDIFF = typename PWD_TOG_fields_::RXPWDDIFF;
  using RXPWDRX = typename PWD_TOG_fields_::RXPWDRX;
};

  
// USB PHY Transmitter Control Register
struct TX_fields_ {

  enum class eD_CAL : std::uint32_t {
    // Maximum current, approximately 19% above nominal.
    eMAX = 0,
    // Nominal
    eNOMINAL = 7,
    // Minimum current, approximately 19% below nominal.
    eMIN = 15,
  };
  // D_CAL
  using D_CAL = ftl::mmio::Field<4, 0, eD_CAL, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXCAL45DN
  using TXCAL45DN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXCAL45DP
  using TXCAL45DP = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TX_fields_

struct TX : ftl::mmio::Register<
    kBase + 0x10u,
    std::uint32_t,
    0x10060607u,
    ftl::mmio::RW,
    typename TX_fields_::D_CAL,
    ftl::mmio::Reserved<4, 4>,
    typename TX_fields_::TXCAL45DN,
    ftl::mmio::Reserved<4, 12>,
    typename TX_fields_::TXCAL45DP,
    ftl::mmio::Reserved<12, 20>> {
  using eD_CAL = typename TX_fields_::eD_CAL;
  using D_CAL = typename TX_fields_::D_CAL;
  using TXCAL45DN = typename TX_fields_::TXCAL45DN;
  using TXCAL45DP = typename TX_fields_::TXCAL45DP;
};

  
// USB PHY Transmitter Control Register
struct TX_SET_fields_ {
  // D_CAL
  using D_CAL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TXCAL45DN
  using TXCAL45DN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TXCAL45DP
  using TXCAL45DP = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct TX_SET_fields_

struct TX_SET : ftl::mmio::Register<
    kBase + 0x14u,
    std::uint32_t,
    0x10060607u,
    ftl::mmio::RW,
    typename TX_SET_fields_::D_CAL,
    ftl::mmio::Reserved<4, 4>,
    typename TX_SET_fields_::TXCAL45DN,
    ftl::mmio::Reserved<4, 12>,
    typename TX_SET_fields_::TXCAL45DP,
    ftl::mmio::Reserved<12, 20>> {
  using D_CAL = typename TX_SET_fields_::D_CAL;
  using TXCAL45DN = typename TX_SET_fields_::TXCAL45DN;
  using TXCAL45DP = typename TX_SET_fields_::TXCAL45DP;
};

  
// USB PHY Transmitter Control Register
struct TX_CLR_fields_ {
  // D_CAL
  using D_CAL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TXCAL45DN
  using TXCAL45DN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TXCAL45DP
  using TXCAL45DP = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct TX_CLR_fields_

struct TX_CLR : ftl::mmio::Register<
    kBase + 0x18u,
    std::uint32_t,
    0x10060607u,
    ftl::mmio::RW,
    typename TX_CLR_fields_::D_CAL,
    ftl::mmio::Reserved<4, 4>,
    typename TX_CLR_fields_::TXCAL45DN,
    ftl::mmio::Reserved<4, 12>,
    typename TX_CLR_fields_::TXCAL45DP,
    ftl::mmio::Reserved<12, 20>> {
  using D_CAL = typename TX_CLR_fields_::D_CAL;
  using TXCAL45DN = typename TX_CLR_fields_::TXCAL45DN;
  using TXCAL45DP = typename TX_CLR_fields_::TXCAL45DP;
};

  
// USB PHY Transmitter Control Register
struct TX_TOG_fields_ {
  // D_CAL
  using D_CAL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TXCAL45DN
  using TXCAL45DN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TXCAL45DP
  using TXCAL45DP = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct TX_TOG_fields_

struct TX_TOG : ftl::mmio::Register<
    kBase + 0x1Cu,
    std::uint32_t,
    0x10060607u,
    ftl::mmio::RW,
    typename TX_TOG_fields_::D_CAL,
    ftl::mmio::Reserved<4, 4>,
    typename TX_TOG_fields_::TXCAL45DN,
    ftl::mmio::Reserved<4, 12>,
    typename TX_TOG_fields_::TXCAL45DP,
    ftl::mmio::Reserved<12, 20>> {
  using D_CAL = typename TX_TOG_fields_::D_CAL;
  using TXCAL45DN = typename TX_TOG_fields_::TXCAL45DN;
  using TXCAL45DP = typename TX_TOG_fields_::TXCAL45DP;
};

  
// USB PHY Receiver Control Register
struct RX_fields_ {

  enum class eENVADJ : std::uint32_t {
    // Trip-Level Voltage is 0.1000 V
    eLVL_P1 = 0,
    // Trip-Level Voltage is 0.1125 V
    eLVL_P1125 = 1,
    // Trip-Level Voltage is 0.1250 V
    eLVL_P1250 = 2,
    // Trip-Level Voltage is 0.0875 V
    eLVL_P0875 = 3,
  };

  enum class eDISCONADJ : std::uint32_t {
    // Trip-Level Voltage is 0.56875 V
    eLVL_P56875 = 0,
    // Trip-Level Voltage is 0.55000 V
    eLVL_P55 = 1,
    // Trip-Level Voltage is 0.58125 V
    eLVL_P58125 = 2,
    // Trip-Level Voltage is 0.60000 V
    eLVL_P6 = 3,
  };

  enum class eRXDBYPASS : std::uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
    eOUT_SINGLE_END = 1,
  };
  // ENVADJ
  using ENVADJ = ftl::mmio::Field<3, 0, eENVADJ, ftl::mmio::RW, ftl::mmio::Normal>;
  // DISCONADJ
  using DISCONADJ = ftl::mmio::Field<3, 4, eDISCONADJ, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXDBYPASS
  using RXDBYPASS = ftl::mmio::Field<1, 22, eRXDBYPASS, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RX_fields_

struct RX : ftl::mmio::Register<
    kBase + 0x20u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename RX_fields_::ENVADJ,
    ftl::mmio::Reserved<1, 3>,
    typename RX_fields_::DISCONADJ,
    ftl::mmio::Reserved<15, 7>,
    typename RX_fields_::RXDBYPASS,
    ftl::mmio::Reserved<9, 23>> {
  using eENVADJ = typename RX_fields_::eENVADJ;
  using eDISCONADJ = typename RX_fields_::eDISCONADJ;
  using eRXDBYPASS = typename RX_fields_::eRXDBYPASS;
  using ENVADJ = typename RX_fields_::ENVADJ;
  using DISCONADJ = typename RX_fields_::DISCONADJ;
  using RXDBYPASS = typename RX_fields_::RXDBYPASS;
};

  
// USB PHY Receiver Control Register
struct RX_SET_fields_ {
  // ENVADJ
  using ENVADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // DISCONADJ
  using DISCONADJ = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // RXDBYPASS
  using RXDBYPASS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct RX_SET_fields_

struct RX_SET : ftl::mmio::Register<
    kBase + 0x24u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename RX_SET_fields_::ENVADJ,
    ftl::mmio::Reserved<1, 3>,
    typename RX_SET_fields_::DISCONADJ,
    ftl::mmio::Reserved<15, 7>,
    typename RX_SET_fields_::RXDBYPASS,
    ftl::mmio::Reserved<9, 23>> {
  using ENVADJ = typename RX_SET_fields_::ENVADJ;
  using DISCONADJ = typename RX_SET_fields_::DISCONADJ;
  using RXDBYPASS = typename RX_SET_fields_::RXDBYPASS;
};

  
// USB PHY Receiver Control Register
struct RX_CLR_fields_ {
  // ENVADJ
  using ENVADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // DISCONADJ
  using DISCONADJ = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RXDBYPASS
  using RXDBYPASS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct RX_CLR_fields_

struct RX_CLR : ftl::mmio::Register<
    kBase + 0x28u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename RX_CLR_fields_::ENVADJ,
    ftl::mmio::Reserved<1, 3>,
    typename RX_CLR_fields_::DISCONADJ,
    ftl::mmio::Reserved<15, 7>,
    typename RX_CLR_fields_::RXDBYPASS,
    ftl::mmio::Reserved<9, 23>> {
  using ENVADJ = typename RX_CLR_fields_::ENVADJ;
  using DISCONADJ = typename RX_CLR_fields_::DISCONADJ;
  using RXDBYPASS = typename RX_CLR_fields_::RXDBYPASS;
};

  
// USB PHY Receiver Control Register
struct RX_TOG_fields_ {
  // ENVADJ
  using ENVADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // DISCONADJ
  using DISCONADJ = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // RXDBYPASS
  using RXDBYPASS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct RX_TOG_fields_

struct RX_TOG : ftl::mmio::Register<
    kBase + 0x2Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename RX_TOG_fields_::ENVADJ,
    ftl::mmio::Reserved<1, 3>,
    typename RX_TOG_fields_::DISCONADJ,
    ftl::mmio::Reserved<15, 7>,
    typename RX_TOG_fields_::RXDBYPASS,
    ftl::mmio::Reserved<9, 23>> {
  using ENVADJ = typename RX_TOG_fields_::ENVADJ;
  using DISCONADJ = typename RX_TOG_fields_::DISCONADJ;
  using RXDBYPASS = typename RX_TOG_fields_::RXDBYPASS;
};

  
// USB PHY General Control Register
struct CTRL_fields_ {

  enum class eENDEVPLUGINDETECT : std::uint32_t {
    // Disables 200kohm pullup resistors on DP and DN pins
    eDISABLE = 0,
    // Enables 200kohm pullup resistors on DP and DN pins
    eENABLE = 1,
  };
  // ENOTG_ID_CHG_IRQ
  using ENOTG_ID_CHG_IRQ = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENHOSTDISCONDETECT
  using ENHOSTDISCONDETECT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENIRQHOSTDISCON
  using ENIRQHOSTDISCON = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // HOSTDISCONDETECT_IRQ
  using HOSTDISCONDETECT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables non-standard resistive plugged-in detection
  using ENDEVPLUGINDETECT = ftl::mmio::Field<1, 4, eENDEVPLUGINDETECT, ftl::mmio::RW, ftl::mmio::Normal>;
  // DEVPLUGIN_POLARITY
  using DEVPLUGIN_POLARITY = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // OTG_ID_CHG_IRQ
  using OTG_ID_CHG_IRQ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENOTGIDDETECT
  using ENOTGIDDETECT = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RESUMEIRQSTICKY
  using RESUMEIRQSTICKY = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENIRQRESUMEDETECT
  using ENIRQRESUMEDETECT = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RESUME_IRQ
  using RESUME_IRQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENIRQDEVPLUGIN
  using ENIRQDEVPLUGIN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // DEVPLUGIN_IRQ
  using DEVPLUGIN_IRQ = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENUTMILEVEL2
  using ENUTMILEVEL2 = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENUTMILEVEL3
  using ENUTMILEVEL3 = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENIRQWAKEUP
  using ENIRQWAKEUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // WAKEUP_IRQ
  using WAKEUP_IRQ = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // AUTORESUME_EN
  using AUTORESUME_EN = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENAUTOCLR_CLKGATE
  using ENAUTOCLR_CLKGATE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENAUTOCLR_PHY_PWD
  using ENAUTOCLR_PHY_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENDPDMCHG_WKUP
  using ENDPDMCHG_WKUP = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENIDCHG_WKUP
  using ENIDCHG_WKUP = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENVBUSCHG_WKUP
  using ENVBUSCHG_WKUP = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // FSDLL_RST_EN
  using FSDLL_RST_EN = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // OTG_ID_VALUE
  using OTG_ID_VALUE = ftl::mmio::Field<1, 27, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // HOST_FORCE_LS_SE0
  using HOST_FORCE_LS_SE0 = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UTMI_SUSPENDM
  using UTMI_SUSPENDM = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SFTRST
  using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL_fields_

struct CTRL : ftl::mmio::Register<
    kBase + 0x30u,
    std::uint32_t,
    0x88000000u,
    ftl::mmio::RW,
    typename CTRL_fields_::ENOTG_ID_CHG_IRQ,
    typename CTRL_fields_::ENHOSTDISCONDETECT,
    typename CTRL_fields_::ENIRQHOSTDISCON,
    typename CTRL_fields_::HOSTDISCONDETECT_IRQ,
    typename CTRL_fields_::ENDEVPLUGINDETECT,
    typename CTRL_fields_::DEVPLUGIN_POLARITY,
    typename CTRL_fields_::OTG_ID_CHG_IRQ,
    typename CTRL_fields_::ENOTGIDDETECT,
    typename CTRL_fields_::RESUMEIRQSTICKY,
    typename CTRL_fields_::ENIRQRESUMEDETECT,
    typename CTRL_fields_::RESUME_IRQ,
    typename CTRL_fields_::ENIRQDEVPLUGIN,
    typename CTRL_fields_::DEVPLUGIN_IRQ,
    ftl::mmio::Reserved<1, 13>,
    typename CTRL_fields_::ENUTMILEVEL2,
    typename CTRL_fields_::ENUTMILEVEL3,
    typename CTRL_fields_::ENIRQWAKEUP,
    typename CTRL_fields_::WAKEUP_IRQ,
    typename CTRL_fields_::AUTORESUME_EN,
    typename CTRL_fields_::ENAUTOCLR_CLKGATE,
    typename CTRL_fields_::ENAUTOCLR_PHY_PWD,
    typename CTRL_fields_::ENDPDMCHG_WKUP,
    typename CTRL_fields_::ENIDCHG_WKUP,
    typename CTRL_fields_::ENVBUSCHG_WKUP,
    typename CTRL_fields_::FSDLL_RST_EN,
    ftl::mmio::Reserved<2, 25>,
    typename CTRL_fields_::OTG_ID_VALUE,
    typename CTRL_fields_::HOST_FORCE_LS_SE0,
    typename CTRL_fields_::UTMI_SUSPENDM,
    typename CTRL_fields_::CLKGATE,
    typename CTRL_fields_::SFTRST> {
  using eENDEVPLUGINDETECT = typename CTRL_fields_::eENDEVPLUGINDETECT;
  using ENOTG_ID_CHG_IRQ = typename CTRL_fields_::ENOTG_ID_CHG_IRQ;
  using ENHOSTDISCONDETECT = typename CTRL_fields_::ENHOSTDISCONDETECT;
  using ENIRQHOSTDISCON = typename CTRL_fields_::ENIRQHOSTDISCON;
  using HOSTDISCONDETECT_IRQ = typename CTRL_fields_::HOSTDISCONDETECT_IRQ;
  using ENDEVPLUGINDETECT = typename CTRL_fields_::ENDEVPLUGINDETECT;
  using DEVPLUGIN_POLARITY = typename CTRL_fields_::DEVPLUGIN_POLARITY;
  using OTG_ID_CHG_IRQ = typename CTRL_fields_::OTG_ID_CHG_IRQ;
  using ENOTGIDDETECT = typename CTRL_fields_::ENOTGIDDETECT;
  using RESUMEIRQSTICKY = typename CTRL_fields_::RESUMEIRQSTICKY;
  using ENIRQRESUMEDETECT = typename CTRL_fields_::ENIRQRESUMEDETECT;
  using RESUME_IRQ = typename CTRL_fields_::RESUME_IRQ;
  using ENIRQDEVPLUGIN = typename CTRL_fields_::ENIRQDEVPLUGIN;
  using DEVPLUGIN_IRQ = typename CTRL_fields_::DEVPLUGIN_IRQ;
  using ENUTMILEVEL2 = typename CTRL_fields_::ENUTMILEVEL2;
  using ENUTMILEVEL3 = typename CTRL_fields_::ENUTMILEVEL3;
  using ENIRQWAKEUP = typename CTRL_fields_::ENIRQWAKEUP;
  using WAKEUP_IRQ = typename CTRL_fields_::WAKEUP_IRQ;
  using AUTORESUME_EN = typename CTRL_fields_::AUTORESUME_EN;
  using ENAUTOCLR_CLKGATE = typename CTRL_fields_::ENAUTOCLR_CLKGATE;
  using ENAUTOCLR_PHY_PWD = typename CTRL_fields_::ENAUTOCLR_PHY_PWD;
  using ENDPDMCHG_WKUP = typename CTRL_fields_::ENDPDMCHG_WKUP;
  using ENIDCHG_WKUP = typename CTRL_fields_::ENIDCHG_WKUP;
  using ENVBUSCHG_WKUP = typename CTRL_fields_::ENVBUSCHG_WKUP;
  using FSDLL_RST_EN = typename CTRL_fields_::FSDLL_RST_EN;
  using OTG_ID_VALUE = typename CTRL_fields_::OTG_ID_VALUE;
  using HOST_FORCE_LS_SE0 = typename CTRL_fields_::HOST_FORCE_LS_SE0;
  using UTMI_SUSPENDM = typename CTRL_fields_::UTMI_SUSPENDM;
  using CLKGATE = typename CTRL_fields_::CLKGATE;
  using SFTRST = typename CTRL_fields_::SFTRST;
};

  
// USB PHY General Control Register
struct CTRL_SET_fields_ {
  // ENOTG_ID_CHG_IRQ
  using ENOTG_ID_CHG_IRQ = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENHOSTDISCONDETECT
  using ENHOSTDISCONDETECT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENIRQHOSTDISCON
  using ENIRQHOSTDISCON = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // HOSTDISCONDETECT_IRQ
  using HOSTDISCONDETECT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Enables non-standard resistive plugged-in detection
  using ENDEVPLUGINDETECT = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // DEVPLUGIN_POLARITY
  using DEVPLUGIN_POLARITY = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // OTG_ID_CHG_IRQ
  using OTG_ID_CHG_IRQ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENOTGIDDETECT
  using ENOTGIDDETECT = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // RESUMEIRQSTICKY
  using RESUMEIRQSTICKY = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENIRQRESUMEDETECT
  using ENIRQRESUMEDETECT = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // RESUME_IRQ
  using RESUME_IRQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENIRQDEVPLUGIN
  using ENIRQDEVPLUGIN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // DEVPLUGIN_IRQ
  using DEVPLUGIN_IRQ = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENUTMILEVEL2
  using ENUTMILEVEL2 = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENUTMILEVEL3
  using ENUTMILEVEL3 = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENIRQWAKEUP
  using ENIRQWAKEUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // WAKEUP_IRQ
  using WAKEUP_IRQ = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // AUTORESUME_EN
  using AUTORESUME_EN = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENAUTOCLR_CLKGATE
  using ENAUTOCLR_CLKGATE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENAUTOCLR_PHY_PWD
  using ENAUTOCLR_PHY_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENDPDMCHG_WKUP
  using ENDPDMCHG_WKUP = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENIDCHG_WKUP
  using ENIDCHG_WKUP = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENVBUSCHG_WKUP
  using ENVBUSCHG_WKUP = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // FSDLL_RST_EN
  using FSDLL_RST_EN = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // OTG_ID_VALUE
  using OTG_ID_VALUE = ftl::mmio::Field<1, 27, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // HOST_FORCE_LS_SE0
  using HOST_FORCE_LS_SE0 = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // UTMI_SUSPENDM
  using UTMI_SUSPENDM = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // SFTRST
  using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL_SET_fields_

struct CTRL_SET : ftl::mmio::Register<
    kBase + 0x34u,
    std::uint32_t,
    0x88000000u,
    ftl::mmio::RW,
    typename CTRL_SET_fields_::ENOTG_ID_CHG_IRQ,
    typename CTRL_SET_fields_::ENHOSTDISCONDETECT,
    typename CTRL_SET_fields_::ENIRQHOSTDISCON,
    typename CTRL_SET_fields_::HOSTDISCONDETECT_IRQ,
    typename CTRL_SET_fields_::ENDEVPLUGINDETECT,
    typename CTRL_SET_fields_::DEVPLUGIN_POLARITY,
    typename CTRL_SET_fields_::OTG_ID_CHG_IRQ,
    typename CTRL_SET_fields_::ENOTGIDDETECT,
    typename CTRL_SET_fields_::RESUMEIRQSTICKY,
    typename CTRL_SET_fields_::ENIRQRESUMEDETECT,
    typename CTRL_SET_fields_::RESUME_IRQ,
    typename CTRL_SET_fields_::ENIRQDEVPLUGIN,
    typename CTRL_SET_fields_::DEVPLUGIN_IRQ,
    ftl::mmio::Reserved<1, 13>,
    typename CTRL_SET_fields_::ENUTMILEVEL2,
    typename CTRL_SET_fields_::ENUTMILEVEL3,
    typename CTRL_SET_fields_::ENIRQWAKEUP,
    typename CTRL_SET_fields_::WAKEUP_IRQ,
    typename CTRL_SET_fields_::AUTORESUME_EN,
    typename CTRL_SET_fields_::ENAUTOCLR_CLKGATE,
    typename CTRL_SET_fields_::ENAUTOCLR_PHY_PWD,
    typename CTRL_SET_fields_::ENDPDMCHG_WKUP,
    typename CTRL_SET_fields_::ENIDCHG_WKUP,
    typename CTRL_SET_fields_::ENVBUSCHG_WKUP,
    typename CTRL_SET_fields_::FSDLL_RST_EN,
    ftl::mmio::Reserved<2, 25>,
    typename CTRL_SET_fields_::OTG_ID_VALUE,
    typename CTRL_SET_fields_::HOST_FORCE_LS_SE0,
    typename CTRL_SET_fields_::UTMI_SUSPENDM,
    typename CTRL_SET_fields_::CLKGATE,
    typename CTRL_SET_fields_::SFTRST> {
  using ENOTG_ID_CHG_IRQ = typename CTRL_SET_fields_::ENOTG_ID_CHG_IRQ;
  using ENHOSTDISCONDETECT = typename CTRL_SET_fields_::ENHOSTDISCONDETECT;
  using ENIRQHOSTDISCON = typename CTRL_SET_fields_::ENIRQHOSTDISCON;
  using HOSTDISCONDETECT_IRQ = typename CTRL_SET_fields_::HOSTDISCONDETECT_IRQ;
  using ENDEVPLUGINDETECT = typename CTRL_SET_fields_::ENDEVPLUGINDETECT;
  using DEVPLUGIN_POLARITY = typename CTRL_SET_fields_::DEVPLUGIN_POLARITY;
  using OTG_ID_CHG_IRQ = typename CTRL_SET_fields_::OTG_ID_CHG_IRQ;
  using ENOTGIDDETECT = typename CTRL_SET_fields_::ENOTGIDDETECT;
  using RESUMEIRQSTICKY = typename CTRL_SET_fields_::RESUMEIRQSTICKY;
  using ENIRQRESUMEDETECT = typename CTRL_SET_fields_::ENIRQRESUMEDETECT;
  using RESUME_IRQ = typename CTRL_SET_fields_::RESUME_IRQ;
  using ENIRQDEVPLUGIN = typename CTRL_SET_fields_::ENIRQDEVPLUGIN;
  using DEVPLUGIN_IRQ = typename CTRL_SET_fields_::DEVPLUGIN_IRQ;
  using ENUTMILEVEL2 = typename CTRL_SET_fields_::ENUTMILEVEL2;
  using ENUTMILEVEL3 = typename CTRL_SET_fields_::ENUTMILEVEL3;
  using ENIRQWAKEUP = typename CTRL_SET_fields_::ENIRQWAKEUP;
  using WAKEUP_IRQ = typename CTRL_SET_fields_::WAKEUP_IRQ;
  using AUTORESUME_EN = typename CTRL_SET_fields_::AUTORESUME_EN;
  using ENAUTOCLR_CLKGATE = typename CTRL_SET_fields_::ENAUTOCLR_CLKGATE;
  using ENAUTOCLR_PHY_PWD = typename CTRL_SET_fields_::ENAUTOCLR_PHY_PWD;
  using ENDPDMCHG_WKUP = typename CTRL_SET_fields_::ENDPDMCHG_WKUP;
  using ENIDCHG_WKUP = typename CTRL_SET_fields_::ENIDCHG_WKUP;
  using ENVBUSCHG_WKUP = typename CTRL_SET_fields_::ENVBUSCHG_WKUP;
  using FSDLL_RST_EN = typename CTRL_SET_fields_::FSDLL_RST_EN;
  using OTG_ID_VALUE = typename CTRL_SET_fields_::OTG_ID_VALUE;
  using HOST_FORCE_LS_SE0 = typename CTRL_SET_fields_::HOST_FORCE_LS_SE0;
  using UTMI_SUSPENDM = typename CTRL_SET_fields_::UTMI_SUSPENDM;
  using CLKGATE = typename CTRL_SET_fields_::CLKGATE;
  using SFTRST = typename CTRL_SET_fields_::SFTRST;
};

  
// USB PHY General Control Register
struct CTRL_CLR_fields_ {
  // ENOTG_ID_CHG_IRQ
  using ENOTG_ID_CHG_IRQ = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENHOSTDISCONDETECT
  using ENHOSTDISCONDETECT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENIRQHOSTDISCON
  using ENIRQHOSTDISCON = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // HOSTDISCONDETECT_IRQ
  using HOSTDISCONDETECT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Enables non-standard resistive plugged-in detection
  using ENDEVPLUGINDETECT = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // DEVPLUGIN_POLARITY
  using DEVPLUGIN_POLARITY = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // OTG_ID_CHG_IRQ
  using OTG_ID_CHG_IRQ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENOTGIDDETECT
  using ENOTGIDDETECT = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RESUMEIRQSTICKY
  using RESUMEIRQSTICKY = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENIRQRESUMEDETECT
  using ENIRQRESUMEDETECT = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // RESUME_IRQ
  using RESUME_IRQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENIRQDEVPLUGIN
  using ENIRQDEVPLUGIN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // DEVPLUGIN_IRQ
  using DEVPLUGIN_IRQ = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENUTMILEVEL2
  using ENUTMILEVEL2 = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENUTMILEVEL3
  using ENUTMILEVEL3 = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENIRQWAKEUP
  using ENIRQWAKEUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // WAKEUP_IRQ
  using WAKEUP_IRQ = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // AUTORESUME_EN
  using AUTORESUME_EN = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENAUTOCLR_CLKGATE
  using ENAUTOCLR_CLKGATE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENAUTOCLR_PHY_PWD
  using ENAUTOCLR_PHY_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENDPDMCHG_WKUP
  using ENDPDMCHG_WKUP = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENIDCHG_WKUP
  using ENIDCHG_WKUP = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENVBUSCHG_WKUP
  using ENVBUSCHG_WKUP = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // FSDLL_RST_EN
  using FSDLL_RST_EN = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // OTG_ID_VALUE
  using OTG_ID_VALUE = ftl::mmio::Field<1, 27, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // HOST_FORCE_LS_SE0
  using HOST_FORCE_LS_SE0 = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // UTMI_SUSPENDM
  using UTMI_SUSPENDM = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // SFTRST
  using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL_CLR_fields_

struct CTRL_CLR : ftl::mmio::Register<
    kBase + 0x38u,
    std::uint32_t,
    0x88000000u,
    ftl::mmio::RW,
    typename CTRL_CLR_fields_::ENOTG_ID_CHG_IRQ,
    typename CTRL_CLR_fields_::ENHOSTDISCONDETECT,
    typename CTRL_CLR_fields_::ENIRQHOSTDISCON,
    typename CTRL_CLR_fields_::HOSTDISCONDETECT_IRQ,
    typename CTRL_CLR_fields_::ENDEVPLUGINDETECT,
    typename CTRL_CLR_fields_::DEVPLUGIN_POLARITY,
    typename CTRL_CLR_fields_::OTG_ID_CHG_IRQ,
    typename CTRL_CLR_fields_::ENOTGIDDETECT,
    typename CTRL_CLR_fields_::RESUMEIRQSTICKY,
    typename CTRL_CLR_fields_::ENIRQRESUMEDETECT,
    typename CTRL_CLR_fields_::RESUME_IRQ,
    typename CTRL_CLR_fields_::ENIRQDEVPLUGIN,
    typename CTRL_CLR_fields_::DEVPLUGIN_IRQ,
    ftl::mmio::Reserved<1, 13>,
    typename CTRL_CLR_fields_::ENUTMILEVEL2,
    typename CTRL_CLR_fields_::ENUTMILEVEL3,
    typename CTRL_CLR_fields_::ENIRQWAKEUP,
    typename CTRL_CLR_fields_::WAKEUP_IRQ,
    typename CTRL_CLR_fields_::AUTORESUME_EN,
    typename CTRL_CLR_fields_::ENAUTOCLR_CLKGATE,
    typename CTRL_CLR_fields_::ENAUTOCLR_PHY_PWD,
    typename CTRL_CLR_fields_::ENDPDMCHG_WKUP,
    typename CTRL_CLR_fields_::ENIDCHG_WKUP,
    typename CTRL_CLR_fields_::ENVBUSCHG_WKUP,
    typename CTRL_CLR_fields_::FSDLL_RST_EN,
    ftl::mmio::Reserved<2, 25>,
    typename CTRL_CLR_fields_::OTG_ID_VALUE,
    typename CTRL_CLR_fields_::HOST_FORCE_LS_SE0,
    typename CTRL_CLR_fields_::UTMI_SUSPENDM,
    typename CTRL_CLR_fields_::CLKGATE,
    typename CTRL_CLR_fields_::SFTRST> {
  using ENOTG_ID_CHG_IRQ = typename CTRL_CLR_fields_::ENOTG_ID_CHG_IRQ;
  using ENHOSTDISCONDETECT = typename CTRL_CLR_fields_::ENHOSTDISCONDETECT;
  using ENIRQHOSTDISCON = typename CTRL_CLR_fields_::ENIRQHOSTDISCON;
  using HOSTDISCONDETECT_IRQ = typename CTRL_CLR_fields_::HOSTDISCONDETECT_IRQ;
  using ENDEVPLUGINDETECT = typename CTRL_CLR_fields_::ENDEVPLUGINDETECT;
  using DEVPLUGIN_POLARITY = typename CTRL_CLR_fields_::DEVPLUGIN_POLARITY;
  using OTG_ID_CHG_IRQ = typename CTRL_CLR_fields_::OTG_ID_CHG_IRQ;
  using ENOTGIDDETECT = typename CTRL_CLR_fields_::ENOTGIDDETECT;
  using RESUMEIRQSTICKY = typename CTRL_CLR_fields_::RESUMEIRQSTICKY;
  using ENIRQRESUMEDETECT = typename CTRL_CLR_fields_::ENIRQRESUMEDETECT;
  using RESUME_IRQ = typename CTRL_CLR_fields_::RESUME_IRQ;
  using ENIRQDEVPLUGIN = typename CTRL_CLR_fields_::ENIRQDEVPLUGIN;
  using DEVPLUGIN_IRQ = typename CTRL_CLR_fields_::DEVPLUGIN_IRQ;
  using ENUTMILEVEL2 = typename CTRL_CLR_fields_::ENUTMILEVEL2;
  using ENUTMILEVEL3 = typename CTRL_CLR_fields_::ENUTMILEVEL3;
  using ENIRQWAKEUP = typename CTRL_CLR_fields_::ENIRQWAKEUP;
  using WAKEUP_IRQ = typename CTRL_CLR_fields_::WAKEUP_IRQ;
  using AUTORESUME_EN = typename CTRL_CLR_fields_::AUTORESUME_EN;
  using ENAUTOCLR_CLKGATE = typename CTRL_CLR_fields_::ENAUTOCLR_CLKGATE;
  using ENAUTOCLR_PHY_PWD = typename CTRL_CLR_fields_::ENAUTOCLR_PHY_PWD;
  using ENDPDMCHG_WKUP = typename CTRL_CLR_fields_::ENDPDMCHG_WKUP;
  using ENIDCHG_WKUP = typename CTRL_CLR_fields_::ENIDCHG_WKUP;
  using ENVBUSCHG_WKUP = typename CTRL_CLR_fields_::ENVBUSCHG_WKUP;
  using FSDLL_RST_EN = typename CTRL_CLR_fields_::FSDLL_RST_EN;
  using OTG_ID_VALUE = typename CTRL_CLR_fields_::OTG_ID_VALUE;
  using HOST_FORCE_LS_SE0 = typename CTRL_CLR_fields_::HOST_FORCE_LS_SE0;
  using UTMI_SUSPENDM = typename CTRL_CLR_fields_::UTMI_SUSPENDM;
  using CLKGATE = typename CTRL_CLR_fields_::CLKGATE;
  using SFTRST = typename CTRL_CLR_fields_::SFTRST;
};

  
// USB PHY General Control Register
struct CTRL_TOG_fields_ {
  // ENOTG_ID_CHG_IRQ
  using ENOTG_ID_CHG_IRQ = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENHOSTDISCONDETECT
  using ENHOSTDISCONDETECT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENIRQHOSTDISCON
  using ENIRQHOSTDISCON = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // HOSTDISCONDETECT_IRQ
  using HOSTDISCONDETECT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Enables non-standard resistive plugged-in detection
  using ENDEVPLUGINDETECT = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // DEVPLUGIN_POLARITY
  using DEVPLUGIN_POLARITY = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // OTG_ID_CHG_IRQ
  using OTG_ID_CHG_IRQ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENOTGIDDETECT
  using ENOTGIDDETECT = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // RESUMEIRQSTICKY
  using RESUMEIRQSTICKY = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENIRQRESUMEDETECT
  using ENIRQRESUMEDETECT = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // RESUME_IRQ
  using RESUME_IRQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENIRQDEVPLUGIN
  using ENIRQDEVPLUGIN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // DEVPLUGIN_IRQ
  using DEVPLUGIN_IRQ = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENUTMILEVEL2
  using ENUTMILEVEL2 = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENUTMILEVEL3
  using ENUTMILEVEL3 = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENIRQWAKEUP
  using ENIRQWAKEUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // WAKEUP_IRQ
  using WAKEUP_IRQ = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // AUTORESUME_EN
  using AUTORESUME_EN = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENAUTOCLR_CLKGATE
  using ENAUTOCLR_CLKGATE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENAUTOCLR_PHY_PWD
  using ENAUTOCLR_PHY_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENDPDMCHG_WKUP
  using ENDPDMCHG_WKUP = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENIDCHG_WKUP
  using ENIDCHG_WKUP = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENVBUSCHG_WKUP
  using ENVBUSCHG_WKUP = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // FSDLL_RST_EN
  using FSDLL_RST_EN = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // OTG_ID_VALUE
  using OTG_ID_VALUE = ftl::mmio::Field<1, 27, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // HOST_FORCE_LS_SE0
  using HOST_FORCE_LS_SE0 = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // UTMI_SUSPENDM
  using UTMI_SUSPENDM = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // SFTRST
  using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL_TOG_fields_

struct CTRL_TOG : ftl::mmio::Register<
    kBase + 0x3Cu,
    std::uint32_t,
    0x88000000u,
    ftl::mmio::RW,
    typename CTRL_TOG_fields_::ENOTG_ID_CHG_IRQ,
    typename CTRL_TOG_fields_::ENHOSTDISCONDETECT,
    typename CTRL_TOG_fields_::ENIRQHOSTDISCON,
    typename CTRL_TOG_fields_::HOSTDISCONDETECT_IRQ,
    typename CTRL_TOG_fields_::ENDEVPLUGINDETECT,
    typename CTRL_TOG_fields_::DEVPLUGIN_POLARITY,
    typename CTRL_TOG_fields_::OTG_ID_CHG_IRQ,
    typename CTRL_TOG_fields_::ENOTGIDDETECT,
    typename CTRL_TOG_fields_::RESUMEIRQSTICKY,
    typename CTRL_TOG_fields_::ENIRQRESUMEDETECT,
    typename CTRL_TOG_fields_::RESUME_IRQ,
    typename CTRL_TOG_fields_::ENIRQDEVPLUGIN,
    typename CTRL_TOG_fields_::DEVPLUGIN_IRQ,
    ftl::mmio::Reserved<1, 13>,
    typename CTRL_TOG_fields_::ENUTMILEVEL2,
    typename CTRL_TOG_fields_::ENUTMILEVEL3,
    typename CTRL_TOG_fields_::ENIRQWAKEUP,
    typename CTRL_TOG_fields_::WAKEUP_IRQ,
    typename CTRL_TOG_fields_::AUTORESUME_EN,
    typename CTRL_TOG_fields_::ENAUTOCLR_CLKGATE,
    typename CTRL_TOG_fields_::ENAUTOCLR_PHY_PWD,
    typename CTRL_TOG_fields_::ENDPDMCHG_WKUP,
    typename CTRL_TOG_fields_::ENIDCHG_WKUP,
    typename CTRL_TOG_fields_::ENVBUSCHG_WKUP,
    typename CTRL_TOG_fields_::FSDLL_RST_EN,
    ftl::mmio::Reserved<2, 25>,
    typename CTRL_TOG_fields_::OTG_ID_VALUE,
    typename CTRL_TOG_fields_::HOST_FORCE_LS_SE0,
    typename CTRL_TOG_fields_::UTMI_SUSPENDM,
    typename CTRL_TOG_fields_::CLKGATE,
    typename CTRL_TOG_fields_::SFTRST> {
  using ENOTG_ID_CHG_IRQ = typename CTRL_TOG_fields_::ENOTG_ID_CHG_IRQ;
  using ENHOSTDISCONDETECT = typename CTRL_TOG_fields_::ENHOSTDISCONDETECT;
  using ENIRQHOSTDISCON = typename CTRL_TOG_fields_::ENIRQHOSTDISCON;
  using HOSTDISCONDETECT_IRQ = typename CTRL_TOG_fields_::HOSTDISCONDETECT_IRQ;
  using ENDEVPLUGINDETECT = typename CTRL_TOG_fields_::ENDEVPLUGINDETECT;
  using DEVPLUGIN_POLARITY = typename CTRL_TOG_fields_::DEVPLUGIN_POLARITY;
  using OTG_ID_CHG_IRQ = typename CTRL_TOG_fields_::OTG_ID_CHG_IRQ;
  using ENOTGIDDETECT = typename CTRL_TOG_fields_::ENOTGIDDETECT;
  using RESUMEIRQSTICKY = typename CTRL_TOG_fields_::RESUMEIRQSTICKY;
  using ENIRQRESUMEDETECT = typename CTRL_TOG_fields_::ENIRQRESUMEDETECT;
  using RESUME_IRQ = typename CTRL_TOG_fields_::RESUME_IRQ;
  using ENIRQDEVPLUGIN = typename CTRL_TOG_fields_::ENIRQDEVPLUGIN;
  using DEVPLUGIN_IRQ = typename CTRL_TOG_fields_::DEVPLUGIN_IRQ;
  using ENUTMILEVEL2 = typename CTRL_TOG_fields_::ENUTMILEVEL2;
  using ENUTMILEVEL3 = typename CTRL_TOG_fields_::ENUTMILEVEL3;
  using ENIRQWAKEUP = typename CTRL_TOG_fields_::ENIRQWAKEUP;
  using WAKEUP_IRQ = typename CTRL_TOG_fields_::WAKEUP_IRQ;
  using AUTORESUME_EN = typename CTRL_TOG_fields_::AUTORESUME_EN;
  using ENAUTOCLR_CLKGATE = typename CTRL_TOG_fields_::ENAUTOCLR_CLKGATE;
  using ENAUTOCLR_PHY_PWD = typename CTRL_TOG_fields_::ENAUTOCLR_PHY_PWD;
  using ENDPDMCHG_WKUP = typename CTRL_TOG_fields_::ENDPDMCHG_WKUP;
  using ENIDCHG_WKUP = typename CTRL_TOG_fields_::ENIDCHG_WKUP;
  using ENVBUSCHG_WKUP = typename CTRL_TOG_fields_::ENVBUSCHG_WKUP;
  using FSDLL_RST_EN = typename CTRL_TOG_fields_::FSDLL_RST_EN;
  using OTG_ID_VALUE = typename CTRL_TOG_fields_::OTG_ID_VALUE;
  using HOST_FORCE_LS_SE0 = typename CTRL_TOG_fields_::HOST_FORCE_LS_SE0;
  using UTMI_SUSPENDM = typename CTRL_TOG_fields_::UTMI_SUSPENDM;
  using CLKGATE = typename CTRL_TOG_fields_::CLKGATE;
  using SFTRST = typename CTRL_TOG_fields_::SFTRST;
};

  
// USB PHY Status Register
struct STATUS_fields_ {

  enum class eHOSTDISCONDETECT_STATUS : std::uint32_t {
    // USB cable disconnect has not been detected at the local host
    eNOT_DET = 0,
    // USB cable disconnect has been detected at the local host
    eDET = 1,
  };

  enum class eDEVPLUGIN_STATUS : std::uint32_t {
    // No attachment to a USB host is detected
    eNO_ATTACH = 0,
    // Cable attachment to a USB host is detected
    eATTACH = 1,
  };
  // HOSTDISCONDETECT_STATUS
  using HOSTDISCONDETECT_STATUS = ftl::mmio::Field<1, 3, eHOSTDISCONDETECT_STATUS, ftl::mmio::RO, ftl::mmio::Normal>;
  // Status indicator for non-standard resistive plugged-in detection
  using DEVPLUGIN_STATUS = ftl::mmio::Field<1, 6, eDEVPLUGIN_STATUS, ftl::mmio::RO, ftl::mmio::Normal>;
  // OTGID_STATUS
  using OTGID_STATUS = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RESUME_STATUS
  using RESUME_STATUS = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STATUS_fields_

struct STATUS : ftl::mmio::Register<
    kBase + 0x40u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    typename STATUS_fields_::HOSTDISCONDETECT_STATUS,
    ftl::mmio::Reserved<2, 4>,
    typename STATUS_fields_::DEVPLUGIN_STATUS,
    ftl::mmio::Reserved<1, 7>,
    typename STATUS_fields_::OTGID_STATUS,
    ftl::mmio::Reserved<1, 9>,
    typename STATUS_fields_::RESUME_STATUS,
    ftl::mmio::Reserved<21, 11>> {
  using eHOSTDISCONDETECT_STATUS = typename STATUS_fields_::eHOSTDISCONDETECT_STATUS;
  using eDEVPLUGIN_STATUS = typename STATUS_fields_::eDEVPLUGIN_STATUS;
  using HOSTDISCONDETECT_STATUS = typename STATUS_fields_::HOSTDISCONDETECT_STATUS;
  using DEVPLUGIN_STATUS = typename STATUS_fields_::DEVPLUGIN_STATUS;
  using OTGID_STATUS = typename STATUS_fields_::OTGID_STATUS;
  using RESUME_STATUS = typename STATUS_fields_::RESUME_STATUS;
};

  
// USB PHY Debug Register
struct DEBUG_fields_ {
  // OTGIDPIOLOCK
  using OTGIDPIOLOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // DEBUG_INTERFACE_HOLD
  using DEBUG_INTERFACE_HOLD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // HSTPULLDOWN
  using HSTPULLDOWN = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENHSTPULLDOWN
  using ENHSTPULLDOWN = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TX2RXCOUNT
  using TX2RXCOUNT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENTX2RXCOUNT
  using ENTX2RXCOUNT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SQUELCHRESETCOUNT
  using SQUELCHRESETCOUNT = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENSQUELCHRESET
  using ENSQUELCHRESET = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SQUELCHRESETLENGTH
  using SQUELCHRESETLENGTH = ftl::mmio::Field<4, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // HOST_RESUME_DEBUG
  using HOST_RESUME_DEBUG = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DEBUG_fields_

struct DEBUG : ftl::mmio::Register<
    kBase + 0x50u,
    std::uint32_t,
    0x7F180000u,
    ftl::mmio::RW,
    typename DEBUG_fields_::OTGIDPIOLOCK,
    typename DEBUG_fields_::DEBUG_INTERFACE_HOLD,
    typename DEBUG_fields_::HSTPULLDOWN,
    typename DEBUG_fields_::ENHSTPULLDOWN,
    ftl::mmio::Reserved<2, 6>,
    typename DEBUG_fields_::TX2RXCOUNT,
    typename DEBUG_fields_::ENTX2RXCOUNT,
    ftl::mmio::Reserved<3, 13>,
    typename DEBUG_fields_::SQUELCHRESETCOUNT,
    ftl::mmio::Reserved<3, 21>,
    typename DEBUG_fields_::ENSQUELCHRESET,
    typename DEBUG_fields_::SQUELCHRESETLENGTH,
    typename DEBUG_fields_::HOST_RESUME_DEBUG,
    typename DEBUG_fields_::CLKGATE,
    ftl::mmio::Reserved<1, 31>> {
  using OTGIDPIOLOCK = typename DEBUG_fields_::OTGIDPIOLOCK;
  using DEBUG_INTERFACE_HOLD = typename DEBUG_fields_::DEBUG_INTERFACE_HOLD;
  using HSTPULLDOWN = typename DEBUG_fields_::HSTPULLDOWN;
  using ENHSTPULLDOWN = typename DEBUG_fields_::ENHSTPULLDOWN;
  using TX2RXCOUNT = typename DEBUG_fields_::TX2RXCOUNT;
  using ENTX2RXCOUNT = typename DEBUG_fields_::ENTX2RXCOUNT;
  using SQUELCHRESETCOUNT = typename DEBUG_fields_::SQUELCHRESETCOUNT;
  using ENSQUELCHRESET = typename DEBUG_fields_::ENSQUELCHRESET;
  using SQUELCHRESETLENGTH = typename DEBUG_fields_::SQUELCHRESETLENGTH;
  using HOST_RESUME_DEBUG = typename DEBUG_fields_::HOST_RESUME_DEBUG;
  using CLKGATE = typename DEBUG_fields_::CLKGATE;
};

  
// USB PHY Debug Register
struct DEBUG_SET_fields_ {
  // OTGIDPIOLOCK
  using OTGIDPIOLOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // DEBUG_INTERFACE_HOLD
  using DEBUG_INTERFACE_HOLD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // HSTPULLDOWN
  using HSTPULLDOWN = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENHSTPULLDOWN
  using ENHSTPULLDOWN = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TX2RXCOUNT
  using TX2RXCOUNT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENTX2RXCOUNT
  using ENTX2RXCOUNT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // SQUELCHRESETCOUNT
  using SQUELCHRESETCOUNT = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // ENSQUELCHRESET
  using ENSQUELCHRESET = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // SQUELCHRESETLENGTH
  using SQUELCHRESETLENGTH = ftl::mmio::Field<4, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // HOST_RESUME_DEBUG
  using HOST_RESUME_DEBUG = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct DEBUG_SET_fields_

struct DEBUG_SET : ftl::mmio::Register<
    kBase + 0x54u,
    std::uint32_t,
    0x7F180000u,
    ftl::mmio::RW,
    typename DEBUG_SET_fields_::OTGIDPIOLOCK,
    typename DEBUG_SET_fields_::DEBUG_INTERFACE_HOLD,
    typename DEBUG_SET_fields_::HSTPULLDOWN,
    typename DEBUG_SET_fields_::ENHSTPULLDOWN,
    ftl::mmio::Reserved<2, 6>,
    typename DEBUG_SET_fields_::TX2RXCOUNT,
    typename DEBUG_SET_fields_::ENTX2RXCOUNT,
    ftl::mmio::Reserved<3, 13>,
    typename DEBUG_SET_fields_::SQUELCHRESETCOUNT,
    ftl::mmio::Reserved<3, 21>,
    typename DEBUG_SET_fields_::ENSQUELCHRESET,
    typename DEBUG_SET_fields_::SQUELCHRESETLENGTH,
    typename DEBUG_SET_fields_::HOST_RESUME_DEBUG,
    typename DEBUG_SET_fields_::CLKGATE,
    ftl::mmio::Reserved<1, 31>> {
  using OTGIDPIOLOCK = typename DEBUG_SET_fields_::OTGIDPIOLOCK;
  using DEBUG_INTERFACE_HOLD = typename DEBUG_SET_fields_::DEBUG_INTERFACE_HOLD;
  using HSTPULLDOWN = typename DEBUG_SET_fields_::HSTPULLDOWN;
  using ENHSTPULLDOWN = typename DEBUG_SET_fields_::ENHSTPULLDOWN;
  using TX2RXCOUNT = typename DEBUG_SET_fields_::TX2RXCOUNT;
  using ENTX2RXCOUNT = typename DEBUG_SET_fields_::ENTX2RXCOUNT;
  using SQUELCHRESETCOUNT = typename DEBUG_SET_fields_::SQUELCHRESETCOUNT;
  using ENSQUELCHRESET = typename DEBUG_SET_fields_::ENSQUELCHRESET;
  using SQUELCHRESETLENGTH = typename DEBUG_SET_fields_::SQUELCHRESETLENGTH;
  using HOST_RESUME_DEBUG = typename DEBUG_SET_fields_::HOST_RESUME_DEBUG;
  using CLKGATE = typename DEBUG_SET_fields_::CLKGATE;
};

  
// USB PHY Debug Register
struct DEBUG_CLR_fields_ {
  // OTGIDPIOLOCK
  using OTGIDPIOLOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // DEBUG_INTERFACE_HOLD
  using DEBUG_INTERFACE_HOLD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // HSTPULLDOWN
  using HSTPULLDOWN = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENHSTPULLDOWN
  using ENHSTPULLDOWN = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TX2RXCOUNT
  using TX2RXCOUNT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENTX2RXCOUNT
  using ENTX2RXCOUNT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // SQUELCHRESETCOUNT
  using SQUELCHRESETCOUNT = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // ENSQUELCHRESET
  using ENSQUELCHRESET = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // SQUELCHRESETLENGTH
  using SQUELCHRESETLENGTH = ftl::mmio::Field<4, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // HOST_RESUME_DEBUG
  using HOST_RESUME_DEBUG = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct DEBUG_CLR_fields_

struct DEBUG_CLR : ftl::mmio::Register<
    kBase + 0x58u,
    std::uint32_t,
    0x7F180000u,
    ftl::mmio::RW,
    typename DEBUG_CLR_fields_::OTGIDPIOLOCK,
    typename DEBUG_CLR_fields_::DEBUG_INTERFACE_HOLD,
    typename DEBUG_CLR_fields_::HSTPULLDOWN,
    typename DEBUG_CLR_fields_::ENHSTPULLDOWN,
    ftl::mmio::Reserved<2, 6>,
    typename DEBUG_CLR_fields_::TX2RXCOUNT,
    typename DEBUG_CLR_fields_::ENTX2RXCOUNT,
    ftl::mmio::Reserved<3, 13>,
    typename DEBUG_CLR_fields_::SQUELCHRESETCOUNT,
    ftl::mmio::Reserved<3, 21>,
    typename DEBUG_CLR_fields_::ENSQUELCHRESET,
    typename DEBUG_CLR_fields_::SQUELCHRESETLENGTH,
    typename DEBUG_CLR_fields_::HOST_RESUME_DEBUG,
    typename DEBUG_CLR_fields_::CLKGATE,
    ftl::mmio::Reserved<1, 31>> {
  using OTGIDPIOLOCK = typename DEBUG_CLR_fields_::OTGIDPIOLOCK;
  using DEBUG_INTERFACE_HOLD = typename DEBUG_CLR_fields_::DEBUG_INTERFACE_HOLD;
  using HSTPULLDOWN = typename DEBUG_CLR_fields_::HSTPULLDOWN;
  using ENHSTPULLDOWN = typename DEBUG_CLR_fields_::ENHSTPULLDOWN;
  using TX2RXCOUNT = typename DEBUG_CLR_fields_::TX2RXCOUNT;
  using ENTX2RXCOUNT = typename DEBUG_CLR_fields_::ENTX2RXCOUNT;
  using SQUELCHRESETCOUNT = typename DEBUG_CLR_fields_::SQUELCHRESETCOUNT;
  using ENSQUELCHRESET = typename DEBUG_CLR_fields_::ENSQUELCHRESET;
  using SQUELCHRESETLENGTH = typename DEBUG_CLR_fields_::SQUELCHRESETLENGTH;
  using HOST_RESUME_DEBUG = typename DEBUG_CLR_fields_::HOST_RESUME_DEBUG;
  using CLKGATE = typename DEBUG_CLR_fields_::CLKGATE;
};

  
// USB PHY Debug Register
struct DEBUG_TOG_fields_ {
  // OTGIDPIOLOCK
  using OTGIDPIOLOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // DEBUG_INTERFACE_HOLD
  using DEBUG_INTERFACE_HOLD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // HSTPULLDOWN
  using HSTPULLDOWN = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENHSTPULLDOWN
  using ENHSTPULLDOWN = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TX2RXCOUNT
  using TX2RXCOUNT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENTX2RXCOUNT
  using ENTX2RXCOUNT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // SQUELCHRESETCOUNT
  using SQUELCHRESETCOUNT = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // ENSQUELCHRESET
  using ENSQUELCHRESET = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // SQUELCHRESETLENGTH
  using SQUELCHRESETLENGTH = ftl::mmio::Field<4, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // HOST_RESUME_DEBUG
  using HOST_RESUME_DEBUG = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // CLKGATE
  using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct DEBUG_TOG_fields_

struct DEBUG_TOG : ftl::mmio::Register<
    kBase + 0x5Cu,
    std::uint32_t,
    0x7F180000u,
    ftl::mmio::RW,
    typename DEBUG_TOG_fields_::OTGIDPIOLOCK,
    typename DEBUG_TOG_fields_::DEBUG_INTERFACE_HOLD,
    typename DEBUG_TOG_fields_::HSTPULLDOWN,
    typename DEBUG_TOG_fields_::ENHSTPULLDOWN,
    ftl::mmio::Reserved<2, 6>,
    typename DEBUG_TOG_fields_::TX2RXCOUNT,
    typename DEBUG_TOG_fields_::ENTX2RXCOUNT,
    ftl::mmio::Reserved<3, 13>,
    typename DEBUG_TOG_fields_::SQUELCHRESETCOUNT,
    ftl::mmio::Reserved<3, 21>,
    typename DEBUG_TOG_fields_::ENSQUELCHRESET,
    typename DEBUG_TOG_fields_::SQUELCHRESETLENGTH,
    typename DEBUG_TOG_fields_::HOST_RESUME_DEBUG,
    typename DEBUG_TOG_fields_::CLKGATE,
    ftl::mmio::Reserved<1, 31>> {
  using OTGIDPIOLOCK = typename DEBUG_TOG_fields_::OTGIDPIOLOCK;
  using DEBUG_INTERFACE_HOLD = typename DEBUG_TOG_fields_::DEBUG_INTERFACE_HOLD;
  using HSTPULLDOWN = typename DEBUG_TOG_fields_::HSTPULLDOWN;
  using ENHSTPULLDOWN = typename DEBUG_TOG_fields_::ENHSTPULLDOWN;
  using TX2RXCOUNT = typename DEBUG_TOG_fields_::TX2RXCOUNT;
  using ENTX2RXCOUNT = typename DEBUG_TOG_fields_::ENTX2RXCOUNT;
  using SQUELCHRESETCOUNT = typename DEBUG_TOG_fields_::SQUELCHRESETCOUNT;
  using ENSQUELCHRESET = typename DEBUG_TOG_fields_::ENSQUELCHRESET;
  using SQUELCHRESETLENGTH = typename DEBUG_TOG_fields_::SQUELCHRESETLENGTH;
  using HOST_RESUME_DEBUG = typename DEBUG_TOG_fields_::HOST_RESUME_DEBUG;
  using CLKGATE = typename DEBUG_TOG_fields_::CLKGATE;
};

  
// UTMI Debug Status Register 0
struct DEBUG0_STATUS_fields_ {
  // LOOP_BACK_FAIL_COUNT
  using LOOP_BACK_FAIL_COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // UTMI_RXERROR_FAIL_COUNT
  using UTMI_RXERROR_FAIL_COUNT = ftl::mmio::Field<10, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // SQUELCH_COUNT
  using SQUELCH_COUNT = ftl::mmio::Field<6, 26, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct DEBUG0_STATUS_fields_

struct DEBUG0_STATUS : ftl::mmio::Register<
    kBase + 0x60u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    typename DEBUG0_STATUS_fields_::LOOP_BACK_FAIL_COUNT,
    typename DEBUG0_STATUS_fields_::UTMI_RXERROR_FAIL_COUNT,
    typename DEBUG0_STATUS_fields_::SQUELCH_COUNT> {
  using LOOP_BACK_FAIL_COUNT = typename DEBUG0_STATUS_fields_::LOOP_BACK_FAIL_COUNT;
  using UTMI_RXERROR_FAIL_COUNT = typename DEBUG0_STATUS_fields_::UTMI_RXERROR_FAIL_COUNT;
  using SQUELCH_COUNT = typename DEBUG0_STATUS_fields_::SQUELCH_COUNT;
};

  
// UTMI Debug Status Register 1
struct DEBUG1_fields_ {

  enum class eENTAILADJVD : std::uint32_t {
    // Delay is nominal
    eNOM_DELAY = 0,
    // Delay is +20%
    eDELAY_20_P = 1,
    // Delay is -20%
    eDELAY_20_N = 2,
    // Delay is -40%
    eDELAY_40_N = 3,
  };
  // ENTAILADJVD
  using ENTAILADJVD = ftl::mmio::Field<2, 13, eENTAILADJVD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
  using USB2_REFBIAS_SELFBIASOFF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Powers down the bandgap detect logic, will affect vbgup on misc1 register.
  using USB2_REFBIAS_PWDVBGUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // to be added
  using USB2_REFBIAS_LOWPWR = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Adjustment bits on bandgap
  using USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bias current control for usb2_phy
  using USB2_REFBIAS_TST = ftl::mmio::Field<2, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DEBUG1_fields_

struct DEBUG1 : ftl::mmio::Register<
    kBase + 0x70u,
    std::uint32_t,
    0x00001000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<13, 0>,
    typename DEBUG1_fields_::ENTAILADJVD,
    typename DEBUG1_fields_::USB2_REFBIAS_SELFBIASOFF,
    typename DEBUG1_fields_::USB2_REFBIAS_PWDVBGUP,
    typename DEBUG1_fields_::USB2_REFBIAS_LOWPWR,
    typename DEBUG1_fields_::USB2_REFBIAS_VBGADJ,
    typename DEBUG1_fields_::USB2_REFBIAS_TST,
    ftl::mmio::Reserved<9, 23>> {
  using eENTAILADJVD = typename DEBUG1_fields_::eENTAILADJVD;
  using ENTAILADJVD = typename DEBUG1_fields_::ENTAILADJVD;
  using USB2_REFBIAS_SELFBIASOFF = typename DEBUG1_fields_::USB2_REFBIAS_SELFBIASOFF;
  using USB2_REFBIAS_PWDVBGUP = typename DEBUG1_fields_::USB2_REFBIAS_PWDVBGUP;
  using USB2_REFBIAS_LOWPWR = typename DEBUG1_fields_::USB2_REFBIAS_LOWPWR;
  using USB2_REFBIAS_VBGADJ = typename DEBUG1_fields_::USB2_REFBIAS_VBGADJ;
  using USB2_REFBIAS_TST = typename DEBUG1_fields_::USB2_REFBIAS_TST;
};

  
// UTMI Debug Status Register 1
struct DEBUG1_SET_fields_ {
  // ENTAILADJVD
  using ENTAILADJVD = ftl::mmio::Field<2, 13, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
  using USB2_REFBIAS_SELFBIASOFF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Powers down the bandgap detect logic, will affect vbgup on misc1 register.
  using USB2_REFBIAS_PWDVBGUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // to be added
  using USB2_REFBIAS_LOWPWR = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Adjustment bits on bandgap
  using USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Bias current control for usb2_phy
  using USB2_REFBIAS_TST = ftl::mmio::Field<2, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct DEBUG1_SET_fields_

struct DEBUG1_SET : ftl::mmio::Register<
    kBase + 0x74u,
    std::uint32_t,
    0x00001000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<13, 0>,
    typename DEBUG1_SET_fields_::ENTAILADJVD,
    typename DEBUG1_SET_fields_::USB2_REFBIAS_SELFBIASOFF,
    typename DEBUG1_SET_fields_::USB2_REFBIAS_PWDVBGUP,
    typename DEBUG1_SET_fields_::USB2_REFBIAS_LOWPWR,
    typename DEBUG1_SET_fields_::USB2_REFBIAS_VBGADJ,
    typename DEBUG1_SET_fields_::USB2_REFBIAS_TST,
    ftl::mmio::Reserved<9, 23>> {
  using ENTAILADJVD = typename DEBUG1_SET_fields_::ENTAILADJVD;
  using USB2_REFBIAS_SELFBIASOFF = typename DEBUG1_SET_fields_::USB2_REFBIAS_SELFBIASOFF;
  using USB2_REFBIAS_PWDVBGUP = typename DEBUG1_SET_fields_::USB2_REFBIAS_PWDVBGUP;
  using USB2_REFBIAS_LOWPWR = typename DEBUG1_SET_fields_::USB2_REFBIAS_LOWPWR;
  using USB2_REFBIAS_VBGADJ = typename DEBUG1_SET_fields_::USB2_REFBIAS_VBGADJ;
  using USB2_REFBIAS_TST = typename DEBUG1_SET_fields_::USB2_REFBIAS_TST;
};

  
// UTMI Debug Status Register 1
struct DEBUG1_CLR_fields_ {
  // ENTAILADJVD
  using ENTAILADJVD = ftl::mmio::Field<2, 13, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
  using USB2_REFBIAS_SELFBIASOFF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Powers down the bandgap detect logic, will affect vbgup on misc1 register.
  using USB2_REFBIAS_PWDVBGUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // to be added
  using USB2_REFBIAS_LOWPWR = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Adjustment bits on bandgap
  using USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Bias current control for usb2_phy
  using USB2_REFBIAS_TST = ftl::mmio::Field<2, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct DEBUG1_CLR_fields_

struct DEBUG1_CLR : ftl::mmio::Register<
    kBase + 0x78u,
    std::uint32_t,
    0x00001000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<13, 0>,
    typename DEBUG1_CLR_fields_::ENTAILADJVD,
    typename DEBUG1_CLR_fields_::USB2_REFBIAS_SELFBIASOFF,
    typename DEBUG1_CLR_fields_::USB2_REFBIAS_PWDVBGUP,
    typename DEBUG1_CLR_fields_::USB2_REFBIAS_LOWPWR,
    typename DEBUG1_CLR_fields_::USB2_REFBIAS_VBGADJ,
    typename DEBUG1_CLR_fields_::USB2_REFBIAS_TST,
    ftl::mmio::Reserved<9, 23>> {
  using ENTAILADJVD = typename DEBUG1_CLR_fields_::ENTAILADJVD;
  using USB2_REFBIAS_SELFBIASOFF = typename DEBUG1_CLR_fields_::USB2_REFBIAS_SELFBIASOFF;
  using USB2_REFBIAS_PWDVBGUP = typename DEBUG1_CLR_fields_::USB2_REFBIAS_PWDVBGUP;
  using USB2_REFBIAS_LOWPWR = typename DEBUG1_CLR_fields_::USB2_REFBIAS_LOWPWR;
  using USB2_REFBIAS_VBGADJ = typename DEBUG1_CLR_fields_::USB2_REFBIAS_VBGADJ;
  using USB2_REFBIAS_TST = typename DEBUG1_CLR_fields_::USB2_REFBIAS_TST;
};

  
// UTMI Debug Status Register 1
struct DEBUG1_TOG_fields_ {
  // ENTAILADJVD
  using ENTAILADJVD = ftl::mmio::Field<2, 13, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
  using USB2_REFBIAS_SELFBIASOFF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Powers down the bandgap detect logic, will affect vbgup on misc1 register.
  using USB2_REFBIAS_PWDVBGUP = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // to be added
  using USB2_REFBIAS_LOWPWR = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Adjustment bits on bandgap
  using USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Bias current control for usb2_phy
  using USB2_REFBIAS_TST = ftl::mmio::Field<2, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct DEBUG1_TOG_fields_

struct DEBUG1_TOG : ftl::mmio::Register<
    kBase + 0x7Cu,
    std::uint32_t,
    0x00001000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<13, 0>,
    typename DEBUG1_TOG_fields_::ENTAILADJVD,
    typename DEBUG1_TOG_fields_::USB2_REFBIAS_SELFBIASOFF,
    typename DEBUG1_TOG_fields_::USB2_REFBIAS_PWDVBGUP,
    typename DEBUG1_TOG_fields_::USB2_REFBIAS_LOWPWR,
    typename DEBUG1_TOG_fields_::USB2_REFBIAS_VBGADJ,
    typename DEBUG1_TOG_fields_::USB2_REFBIAS_TST,
    ftl::mmio::Reserved<9, 23>> {
  using ENTAILADJVD = typename DEBUG1_TOG_fields_::ENTAILADJVD;
  using USB2_REFBIAS_SELFBIASOFF = typename DEBUG1_TOG_fields_::USB2_REFBIAS_SELFBIASOFF;
  using USB2_REFBIAS_PWDVBGUP = typename DEBUG1_TOG_fields_::USB2_REFBIAS_PWDVBGUP;
  using USB2_REFBIAS_LOWPWR = typename DEBUG1_TOG_fields_::USB2_REFBIAS_LOWPWR;
  using USB2_REFBIAS_VBGADJ = typename DEBUG1_TOG_fields_::USB2_REFBIAS_VBGADJ;
  using USB2_REFBIAS_TST = typename DEBUG1_TOG_fields_::USB2_REFBIAS_TST;
};

  
// UTMI RTL Version
struct VERSION_fields_ {
  // STEP
  using STEP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // MINOR
  using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // MAJOR
  using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct VERSION_fields_

struct VERSION : ftl::mmio::Register<
    kBase + 0x80u,
    std::uint32_t,
    0x04030000u,
    ftl::mmio::RO,
    typename VERSION_fields_::STEP,
    typename VERSION_fields_::MINOR,
    typename VERSION_fields_::MAJOR> {
  using STEP = typename VERSION_fields_::STEP;
  using MINOR = typename VERSION_fields_::MINOR;
  using MAJOR = typename VERSION_fields_::MAJOR;
};

  
// USB PHY PLL Control/Status Register
struct PLL_SIC_fields_ {

  enum class eREFBIAS_PWD_SEL : std::uint32_t {
    // Selects PLL_POWER to control the reference bias
    ePLL_PWR = 0,
    // Selects REFBIAS_PWD to control the reference bias.
    eREFBIAS_PWD = 1,
  };

  enum class ePLL_DIV_SEL : std::uint32_t {
    // Divide by 13
    eDIV_BY_13 = 0,
    // Divide by 15
    eDIV_BY_15 = 1,
    // Divide by 16
    eDIV_BY_16 = 2,
    // Divide by 20
    eDIV_BY_20 = 3,
    // Divide by 22
    eDIV_BY_22 = 4,
    // Divide by 25
    eDIV_BY_25 = 5,
    // Divide by 30
    eDIV_BY_30 = 6,
    // Divide by 240
    eDIV_BY_240 = 7,
  };

  enum class ePLL_LOCK : std::uint32_t {
    // PLL is not currently locked
    eNOT_LOCKED = 0,
    // PLL is currently locked
    eLOCKED = 1,
  };
  // PLL_POSTDIV
  using PLL_POSTDIV = ftl::mmio::Field<3, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLL_EN_USB_CLKS
  using PLL_EN_USB_CLKS = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLL_POWER
  using PLL_POWER = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLL_ENABLE
  using PLL_ENABLE = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLL_BYPASS
  using PLL_BYPASS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // REFBIAS_PWD_SEL
  using REFBIAS_PWD_SEL = ftl::mmio::Field<1, 19, eREFBIAS_PWD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Power down the reference bias
  using REFBIAS_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLL_REG_ENABLE
  using PLL_REG_ENABLE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLL_DIV_SEL
  using PLL_DIV_SEL = ftl::mmio::Field<3, 22, ePLL_DIV_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // PLL_LOCK
  using PLL_LOCK = ftl::mmio::Field<1, 31, ePLL_LOCK, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PLL_SIC_fields_

struct PLL_SIC : ftl::mmio::Register<
    kBase + 0xA0u,
    std::uint32_t,
    0x00D12000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename PLL_SIC_fields_::PLL_POSTDIV,
    ftl::mmio::Reserved<1, 5>,
    typename PLL_SIC_fields_::PLL_EN_USB_CLKS,
    ftl::mmio::Reserved<5, 7>,
    typename PLL_SIC_fields_::PLL_POWER,
    typename PLL_SIC_fields_::PLL_ENABLE,
    ftl::mmio::Reserved<2, 14>,
    typename PLL_SIC_fields_::PLL_BYPASS,
    ftl::mmio::Reserved<2, 17>,
    typename PLL_SIC_fields_::REFBIAS_PWD_SEL,
    typename PLL_SIC_fields_::REFBIAS_PWD,
    typename PLL_SIC_fields_::PLL_REG_ENABLE,
    typename PLL_SIC_fields_::PLL_DIV_SEL,
    ftl::mmio::Reserved<6, 25>,
    typename PLL_SIC_fields_::PLL_LOCK> {
  using eREFBIAS_PWD_SEL = typename PLL_SIC_fields_::eREFBIAS_PWD_SEL;
  using ePLL_DIV_SEL = typename PLL_SIC_fields_::ePLL_DIV_SEL;
  using ePLL_LOCK = typename PLL_SIC_fields_::ePLL_LOCK;
  using PLL_POSTDIV = typename PLL_SIC_fields_::PLL_POSTDIV;
  using PLL_EN_USB_CLKS = typename PLL_SIC_fields_::PLL_EN_USB_CLKS;
  using PLL_POWER = typename PLL_SIC_fields_::PLL_POWER;
  using PLL_ENABLE = typename PLL_SIC_fields_::PLL_ENABLE;
  using PLL_BYPASS = typename PLL_SIC_fields_::PLL_BYPASS;
  using REFBIAS_PWD_SEL = typename PLL_SIC_fields_::REFBIAS_PWD_SEL;
  using REFBIAS_PWD = typename PLL_SIC_fields_::REFBIAS_PWD;
  using PLL_REG_ENABLE = typename PLL_SIC_fields_::PLL_REG_ENABLE;
  using PLL_DIV_SEL = typename PLL_SIC_fields_::PLL_DIV_SEL;
  using PLL_LOCK = typename PLL_SIC_fields_::PLL_LOCK;
};

  
// USB PHY PLL Control/Status Register
struct PLL_SIC_SET_fields_ {
  // PLL_POSTDIV
  using PLL_POSTDIV = ftl::mmio::Field<3, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // PLL_EN_USB_CLKS
  using PLL_EN_USB_CLKS = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // PLL_POWER
  using PLL_POWER = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // PLL_ENABLE
  using PLL_ENABLE = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // PLL_BYPASS
  using PLL_BYPASS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // REFBIAS_PWD_SEL
  using REFBIAS_PWD_SEL = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Power down the reference bias
  using REFBIAS_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // PLL_REG_ENABLE
  using PLL_REG_ENABLE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // PLL_DIV_SEL
  using PLL_DIV_SEL = ftl::mmio::Field<3, 22, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // PLL_LOCK
  using PLL_LOCK = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
};  // struct PLL_SIC_SET_fields_

struct PLL_SIC_SET : ftl::mmio::Register<
    kBase + 0xA4u,
    std::uint32_t,
    0x00D12000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename PLL_SIC_SET_fields_::PLL_POSTDIV,
    ftl::mmio::Reserved<1, 5>,
    typename PLL_SIC_SET_fields_::PLL_EN_USB_CLKS,
    ftl::mmio::Reserved<5, 7>,
    typename PLL_SIC_SET_fields_::PLL_POWER,
    typename PLL_SIC_SET_fields_::PLL_ENABLE,
    ftl::mmio::Reserved<2, 14>,
    typename PLL_SIC_SET_fields_::PLL_BYPASS,
    ftl::mmio::Reserved<2, 17>,
    typename PLL_SIC_SET_fields_::REFBIAS_PWD_SEL,
    typename PLL_SIC_SET_fields_::REFBIAS_PWD,
    typename PLL_SIC_SET_fields_::PLL_REG_ENABLE,
    typename PLL_SIC_SET_fields_::PLL_DIV_SEL,
    ftl::mmio::Reserved<6, 25>,
    typename PLL_SIC_SET_fields_::PLL_LOCK> {
  using PLL_POSTDIV = typename PLL_SIC_SET_fields_::PLL_POSTDIV;
  using PLL_EN_USB_CLKS = typename PLL_SIC_SET_fields_::PLL_EN_USB_CLKS;
  using PLL_POWER = typename PLL_SIC_SET_fields_::PLL_POWER;
  using PLL_ENABLE = typename PLL_SIC_SET_fields_::PLL_ENABLE;
  using PLL_BYPASS = typename PLL_SIC_SET_fields_::PLL_BYPASS;
  using REFBIAS_PWD_SEL = typename PLL_SIC_SET_fields_::REFBIAS_PWD_SEL;
  using REFBIAS_PWD = typename PLL_SIC_SET_fields_::REFBIAS_PWD;
  using PLL_REG_ENABLE = typename PLL_SIC_SET_fields_::PLL_REG_ENABLE;
  using PLL_DIV_SEL = typename PLL_SIC_SET_fields_::PLL_DIV_SEL;
  using PLL_LOCK = typename PLL_SIC_SET_fields_::PLL_LOCK;
};

  
// USB PHY PLL Control/Status Register
struct PLL_SIC_CLR_fields_ {
  // PLL_POSTDIV
  using PLL_POSTDIV = ftl::mmio::Field<3, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // PLL_EN_USB_CLKS
  using PLL_EN_USB_CLKS = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // PLL_POWER
  using PLL_POWER = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // PLL_ENABLE
  using PLL_ENABLE = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // PLL_BYPASS
  using PLL_BYPASS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // REFBIAS_PWD_SEL
  using REFBIAS_PWD_SEL = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Power down the reference bias
  using REFBIAS_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // PLL_REG_ENABLE
  using PLL_REG_ENABLE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // PLL_DIV_SEL
  using PLL_DIV_SEL = ftl::mmio::Field<3, 22, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // PLL_LOCK
  using PLL_LOCK = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
};  // struct PLL_SIC_CLR_fields_

struct PLL_SIC_CLR : ftl::mmio::Register<
    kBase + 0xA8u,
    std::uint32_t,
    0x00D12000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename PLL_SIC_CLR_fields_::PLL_POSTDIV,
    ftl::mmio::Reserved<1, 5>,
    typename PLL_SIC_CLR_fields_::PLL_EN_USB_CLKS,
    ftl::mmio::Reserved<5, 7>,
    typename PLL_SIC_CLR_fields_::PLL_POWER,
    typename PLL_SIC_CLR_fields_::PLL_ENABLE,
    ftl::mmio::Reserved<2, 14>,
    typename PLL_SIC_CLR_fields_::PLL_BYPASS,
    ftl::mmio::Reserved<2, 17>,
    typename PLL_SIC_CLR_fields_::REFBIAS_PWD_SEL,
    typename PLL_SIC_CLR_fields_::REFBIAS_PWD,
    typename PLL_SIC_CLR_fields_::PLL_REG_ENABLE,
    typename PLL_SIC_CLR_fields_::PLL_DIV_SEL,
    ftl::mmio::Reserved<6, 25>,
    typename PLL_SIC_CLR_fields_::PLL_LOCK> {
  using PLL_POSTDIV = typename PLL_SIC_CLR_fields_::PLL_POSTDIV;
  using PLL_EN_USB_CLKS = typename PLL_SIC_CLR_fields_::PLL_EN_USB_CLKS;
  using PLL_POWER = typename PLL_SIC_CLR_fields_::PLL_POWER;
  using PLL_ENABLE = typename PLL_SIC_CLR_fields_::PLL_ENABLE;
  using PLL_BYPASS = typename PLL_SIC_CLR_fields_::PLL_BYPASS;
  using REFBIAS_PWD_SEL = typename PLL_SIC_CLR_fields_::REFBIAS_PWD_SEL;
  using REFBIAS_PWD = typename PLL_SIC_CLR_fields_::REFBIAS_PWD;
  using PLL_REG_ENABLE = typename PLL_SIC_CLR_fields_::PLL_REG_ENABLE;
  using PLL_DIV_SEL = typename PLL_SIC_CLR_fields_::PLL_DIV_SEL;
  using PLL_LOCK = typename PLL_SIC_CLR_fields_::PLL_LOCK;
};

  
// USB PHY PLL Control/Status Register
struct PLL_SIC_TOG_fields_ {
  // PLL_POSTDIV
  using PLL_POSTDIV = ftl::mmio::Field<3, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // PLL_EN_USB_CLKS
  using PLL_EN_USB_CLKS = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // PLL_POWER
  using PLL_POWER = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // PLL_ENABLE
  using PLL_ENABLE = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // PLL_BYPASS
  using PLL_BYPASS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // REFBIAS_PWD_SEL
  using REFBIAS_PWD_SEL = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Power down the reference bias
  using REFBIAS_PWD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // PLL_REG_ENABLE
  using PLL_REG_ENABLE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // PLL_DIV_SEL
  using PLL_DIV_SEL = ftl::mmio::Field<3, 22, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // PLL_LOCK
  using PLL_LOCK = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
};  // struct PLL_SIC_TOG_fields_

struct PLL_SIC_TOG : ftl::mmio::Register<
    kBase + 0xACu,
    std::uint32_t,
    0x00D12000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename PLL_SIC_TOG_fields_::PLL_POSTDIV,
    ftl::mmio::Reserved<1, 5>,
    typename PLL_SIC_TOG_fields_::PLL_EN_USB_CLKS,
    ftl::mmio::Reserved<5, 7>,
    typename PLL_SIC_TOG_fields_::PLL_POWER,
    typename PLL_SIC_TOG_fields_::PLL_ENABLE,
    ftl::mmio::Reserved<2, 14>,
    typename PLL_SIC_TOG_fields_::PLL_BYPASS,
    ftl::mmio::Reserved<2, 17>,
    typename PLL_SIC_TOG_fields_::REFBIAS_PWD_SEL,
    typename PLL_SIC_TOG_fields_::REFBIAS_PWD,
    typename PLL_SIC_TOG_fields_::PLL_REG_ENABLE,
    typename PLL_SIC_TOG_fields_::PLL_DIV_SEL,
    ftl::mmio::Reserved<6, 25>,
    typename PLL_SIC_TOG_fields_::PLL_LOCK> {
  using PLL_POSTDIV = typename PLL_SIC_TOG_fields_::PLL_POSTDIV;
  using PLL_EN_USB_CLKS = typename PLL_SIC_TOG_fields_::PLL_EN_USB_CLKS;
  using PLL_POWER = typename PLL_SIC_TOG_fields_::PLL_POWER;
  using PLL_ENABLE = typename PLL_SIC_TOG_fields_::PLL_ENABLE;
  using PLL_BYPASS = typename PLL_SIC_TOG_fields_::PLL_BYPASS;
  using REFBIAS_PWD_SEL = typename PLL_SIC_TOG_fields_::REFBIAS_PWD_SEL;
  using REFBIAS_PWD = typename PLL_SIC_TOG_fields_::REFBIAS_PWD;
  using PLL_REG_ENABLE = typename PLL_SIC_TOG_fields_::PLL_REG_ENABLE;
  using PLL_DIV_SEL = typename PLL_SIC_TOG_fields_::PLL_DIV_SEL;
  using PLL_LOCK = typename PLL_SIC_TOG_fields_::PLL_LOCK;
};

  
// USB PHY VBUS Detect Control Register
struct USB1_VBUS_DETECT_fields_ {

  enum class eVBUSVALID_THRESH : std::uint32_t {
    // 4.0 V
    eVOLT_4 = 0,
    // 4.1 V
    eVOLT_4P1 = 1,
    // 4.2 V
    eVOLT_4P2 = 2,
    // 4.3 V
    eVOLT_4P3 = 3,
    // 4.4 V (Default)
    eVOLT_4P4 = 4,
    // 4.5 V
    eVOLT_4P5 = 5,
    // 4.6 V
    eVOLT_4P6 = 6,
    // 4.7 V
    eVOLT_4P7 = 7,
  };

  enum class eVBUS_OVERRIDE_EN : std::uint32_t {
    // Use the results of the internal VBUS_VALID and Session Valid comparators for VBUS_VALID, AVALID, BVALID, and SESSEND (Default)
    eINTERNAL = 0,
    // Use the override values for VBUS_VALID, AVALID, BVALID, and SESSEND
    eOVERRIDE = 1,
  };

  enum class eVBUSVALID_SEL : std::uint32_t {
    // Use the VBUS_VALID comparator results for signal reported to the USB controller (Default)
    eCOMP = 0,
    // Use the VBUS_VALID_3V detector results for signal reported to the USB controller
    eDET_3V = 1,
  };

  enum class eVBUS_SOURCE_SEL : std::uint32_t {
    // Use the VBUS_VALID comparator results for signal reported to the USB controller (Default)
    eVBUS_VALID_COMP = 0,
    // Use the Session Valid comparator results for signal reported to the USB controller
    eSESSION_VALID_COMP = 1,
    // Use the Session Valid comparator results for signal reported to the USB controller
    eSESSION_VALID_COMP_1 = 2,
  };

  enum class eVBUSVALID_TO_SESSVALID : std::uint32_t {
    // Use the VBUS_VALID comparator for VBUS_VALID results
    eVBUS_VALID = 0,
    // Use the Session End comparator for VBUS_VALID results. The Session End threshold is >0.8V and <4.0V.
    eSESSION_VALID = 1,
  };

  enum class ePWRUP_CMPS : std::uint32_t {
    // Powers down the VBUS_VALID comparator
    eDISABLE = 0,
    // Enables the SESS_VALID comparator (default)
    eENABLE = 1,
    // Enables the 3Vdetect (default)
    eVDETECT = 2,
  };

  enum class eDISCHARGE_VBUS : std::uint32_t {
    // VBUS discharge resistor is disabled (Default)
    eDISABLE = 0,
    // VBUS discharge resistor is enabled
    eENABLE = 1,
  };

  enum class eEN_CHARGER_RESISTOR : std::uint32_t {
    // Disable resistive charger detection resistors on DP and DP
    eDISABLE = 0,
    // Enable resistive charger detection resistors on DP and DP
    eENABLE = 1,
  };
  // VBUSVALID_THRESH
  using VBUSVALID_THRESH = ftl::mmio::Field<3, 0, eVBUSVALID_THRESH, ftl::mmio::RW, ftl::mmio::Normal>;
  // VBUS detect signal override enable
  using VBUS_OVERRIDE_EN = ftl::mmio::Field<1, 3, eVBUS_OVERRIDE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Override value for SESSEND
  using SESSEND_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Override value for B-Device Session Valid
  using BVALID_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Override value for A-Device Session Valid
  using AVALID_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Override value for VBUS_VALID signal sent to USB controller
  using VBUSVALID_OVERRIDE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUSVALID_SEL = ftl::mmio::Field<1, 8, eVBUSVALID_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUS_SOURCE_SEL = ftl::mmio::Field<2, 9, eVBUS_SOURCE_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // TBA
  using ID_OVERRIDE_EN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TBA
  using ID_OVERRIDE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Selects the comparator used for VBUS_VALID
  using VBUSVALID_TO_SESSVALID = ftl::mmio::Field<1, 18, eVBUSVALID_TO_SESSVALID, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables the VBUS_VALID comparator
  using PWRUP_CMPS = ftl::mmio::Field<3, 20, ePWRUP_CMPS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Controls VBUS discharge resistor
  using DISCHARGE_VBUS = ftl::mmio::Field<1, 26, eDISCHARGE_VBUS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables resistors used for an older method of resistive battery charger detection
  using EN_CHARGER_RESISTOR = ftl::mmio::Field<1, 31, eEN_CHARGER_RESISTOR, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USB1_VBUS_DETECT_fields_

struct USB1_VBUS_DETECT : ftl::mmio::Register<
    kBase + 0xC0u,
    std::uint32_t,
    0x00700004u,
    ftl::mmio::RW,
    typename USB1_VBUS_DETECT_fields_::VBUSVALID_THRESH,
    typename USB1_VBUS_DETECT_fields_::VBUS_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_fields_::SESSEND_OVERRIDE,
    typename USB1_VBUS_DETECT_fields_::BVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_fields_::AVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_fields_::VBUSVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_fields_::VBUSVALID_SEL,
    typename USB1_VBUS_DETECT_fields_::VBUS_SOURCE_SEL,
    typename USB1_VBUS_DETECT_fields_::ID_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_fields_::ID_OVERRIDE,
    ftl::mmio::Reserved<5, 13>,
    typename USB1_VBUS_DETECT_fields_::VBUSVALID_TO_SESSVALID,
    ftl::mmio::Reserved<1, 19>,
    typename USB1_VBUS_DETECT_fields_::PWRUP_CMPS,
    ftl::mmio::Reserved<3, 23>,
    typename USB1_VBUS_DETECT_fields_::DISCHARGE_VBUS,
    ftl::mmio::Reserved<4, 27>,
    typename USB1_VBUS_DETECT_fields_::EN_CHARGER_RESISTOR> {
  using eVBUSVALID_THRESH = typename USB1_VBUS_DETECT_fields_::eVBUSVALID_THRESH;
  using eVBUS_OVERRIDE_EN = typename USB1_VBUS_DETECT_fields_::eVBUS_OVERRIDE_EN;
  using eVBUSVALID_SEL = typename USB1_VBUS_DETECT_fields_::eVBUSVALID_SEL;
  using eVBUS_SOURCE_SEL = typename USB1_VBUS_DETECT_fields_::eVBUS_SOURCE_SEL;
  using eVBUSVALID_TO_SESSVALID = typename USB1_VBUS_DETECT_fields_::eVBUSVALID_TO_SESSVALID;
  using ePWRUP_CMPS = typename USB1_VBUS_DETECT_fields_::ePWRUP_CMPS;
  using eDISCHARGE_VBUS = typename USB1_VBUS_DETECT_fields_::eDISCHARGE_VBUS;
  using eEN_CHARGER_RESISTOR = typename USB1_VBUS_DETECT_fields_::eEN_CHARGER_RESISTOR;
  using VBUSVALID_THRESH = typename USB1_VBUS_DETECT_fields_::VBUSVALID_THRESH;
  using VBUS_OVERRIDE_EN = typename USB1_VBUS_DETECT_fields_::VBUS_OVERRIDE_EN;
  using SESSEND_OVERRIDE = typename USB1_VBUS_DETECT_fields_::SESSEND_OVERRIDE;
  using BVALID_OVERRIDE = typename USB1_VBUS_DETECT_fields_::BVALID_OVERRIDE;
  using AVALID_OVERRIDE = typename USB1_VBUS_DETECT_fields_::AVALID_OVERRIDE;
  using VBUSVALID_OVERRIDE = typename USB1_VBUS_DETECT_fields_::VBUSVALID_OVERRIDE;
  using VBUSVALID_SEL = typename USB1_VBUS_DETECT_fields_::VBUSVALID_SEL;
  using VBUS_SOURCE_SEL = typename USB1_VBUS_DETECT_fields_::VBUS_SOURCE_SEL;
  using ID_OVERRIDE_EN = typename USB1_VBUS_DETECT_fields_::ID_OVERRIDE_EN;
  using ID_OVERRIDE = typename USB1_VBUS_DETECT_fields_::ID_OVERRIDE;
  using VBUSVALID_TO_SESSVALID = typename USB1_VBUS_DETECT_fields_::VBUSVALID_TO_SESSVALID;
  using PWRUP_CMPS = typename USB1_VBUS_DETECT_fields_::PWRUP_CMPS;
  using DISCHARGE_VBUS = typename USB1_VBUS_DETECT_fields_::DISCHARGE_VBUS;
  using EN_CHARGER_RESISTOR = typename USB1_VBUS_DETECT_fields_::EN_CHARGER_RESISTOR;
};

  
// USB PHY VBUS Detect Control Register
struct USB1_VBUS_DETECT_SET_fields_ {
  // VBUSVALID_THRESH
  using VBUSVALID_THRESH = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // VBUS detect signal override enable
  using VBUS_OVERRIDE_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Override value for SESSEND
  using SESSEND_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Override value for B-Device Session Valid
  using BVALID_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Override value for A-Device Session Valid
  using AVALID_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Override value for VBUS_VALID signal sent to USB controller
  using VBUSVALID_OVERRIDE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUSVALID_SEL = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUS_SOURCE_SEL = ftl::mmio::Field<2, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TBA
  using ID_OVERRIDE_EN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TBA
  using ID_OVERRIDE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Selects the comparator used for VBUS_VALID
  using VBUSVALID_TO_SESSVALID = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Enables the VBUS_VALID comparator
  using PWRUP_CMPS = ftl::mmio::Field<3, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Controls VBUS discharge resistor
  using DISCHARGE_VBUS = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Enables resistors used for an older method of resistive battery charger detection
  using EN_CHARGER_RESISTOR = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct USB1_VBUS_DETECT_SET_fields_

struct USB1_VBUS_DETECT_SET : ftl::mmio::Register<
    kBase + 0xC4u,
    std::uint32_t,
    0x00700004u,
    ftl::mmio::RW,
    typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_THRESH,
    typename USB1_VBUS_DETECT_SET_fields_::VBUS_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_SET_fields_::SESSEND_OVERRIDE,
    typename USB1_VBUS_DETECT_SET_fields_::BVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_SET_fields_::AVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_SEL,
    typename USB1_VBUS_DETECT_SET_fields_::VBUS_SOURCE_SEL,
    typename USB1_VBUS_DETECT_SET_fields_::ID_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_SET_fields_::ID_OVERRIDE,
    ftl::mmio::Reserved<5, 13>,
    typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_TO_SESSVALID,
    ftl::mmio::Reserved<1, 19>,
    typename USB1_VBUS_DETECT_SET_fields_::PWRUP_CMPS,
    ftl::mmio::Reserved<3, 23>,
    typename USB1_VBUS_DETECT_SET_fields_::DISCHARGE_VBUS,
    ftl::mmio::Reserved<4, 27>,
    typename USB1_VBUS_DETECT_SET_fields_::EN_CHARGER_RESISTOR> {
  using VBUSVALID_THRESH = typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_THRESH;
  using VBUS_OVERRIDE_EN = typename USB1_VBUS_DETECT_SET_fields_::VBUS_OVERRIDE_EN;
  using SESSEND_OVERRIDE = typename USB1_VBUS_DETECT_SET_fields_::SESSEND_OVERRIDE;
  using BVALID_OVERRIDE = typename USB1_VBUS_DETECT_SET_fields_::BVALID_OVERRIDE;
  using AVALID_OVERRIDE = typename USB1_VBUS_DETECT_SET_fields_::AVALID_OVERRIDE;
  using VBUSVALID_OVERRIDE = typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_OVERRIDE;
  using VBUSVALID_SEL = typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_SEL;
  using VBUS_SOURCE_SEL = typename USB1_VBUS_DETECT_SET_fields_::VBUS_SOURCE_SEL;
  using ID_OVERRIDE_EN = typename USB1_VBUS_DETECT_SET_fields_::ID_OVERRIDE_EN;
  using ID_OVERRIDE = typename USB1_VBUS_DETECT_SET_fields_::ID_OVERRIDE;
  using VBUSVALID_TO_SESSVALID = typename USB1_VBUS_DETECT_SET_fields_::VBUSVALID_TO_SESSVALID;
  using PWRUP_CMPS = typename USB1_VBUS_DETECT_SET_fields_::PWRUP_CMPS;
  using DISCHARGE_VBUS = typename USB1_VBUS_DETECT_SET_fields_::DISCHARGE_VBUS;
  using EN_CHARGER_RESISTOR = typename USB1_VBUS_DETECT_SET_fields_::EN_CHARGER_RESISTOR;
};

  
// USB PHY VBUS Detect Control Register
struct USB1_VBUS_DETECT_CLR_fields_ {
  // VBUSVALID_THRESH
  using VBUSVALID_THRESH = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // VBUS detect signal override enable
  using VBUS_OVERRIDE_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Override value for SESSEND
  using SESSEND_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Override value for B-Device Session Valid
  using BVALID_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Override value for A-Device Session Valid
  using AVALID_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Override value for VBUS_VALID signal sent to USB controller
  using VBUSVALID_OVERRIDE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUSVALID_SEL = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUS_SOURCE_SEL = ftl::mmio::Field<2, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TBA
  using ID_OVERRIDE_EN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TBA
  using ID_OVERRIDE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Selects the comparator used for VBUS_VALID
  using VBUSVALID_TO_SESSVALID = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Enables the VBUS_VALID comparator
  using PWRUP_CMPS = ftl::mmio::Field<3, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Controls VBUS discharge resistor
  using DISCHARGE_VBUS = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Enables resistors used for an older method of resistive battery charger detection
  using EN_CHARGER_RESISTOR = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct USB1_VBUS_DETECT_CLR_fields_

struct USB1_VBUS_DETECT_CLR : ftl::mmio::Register<
    kBase + 0xC8u,
    std::uint32_t,
    0x00700004u,
    ftl::mmio::RW,
    typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_THRESH,
    typename USB1_VBUS_DETECT_CLR_fields_::VBUS_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_CLR_fields_::SESSEND_OVERRIDE,
    typename USB1_VBUS_DETECT_CLR_fields_::BVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_CLR_fields_::AVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_SEL,
    typename USB1_VBUS_DETECT_CLR_fields_::VBUS_SOURCE_SEL,
    typename USB1_VBUS_DETECT_CLR_fields_::ID_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_CLR_fields_::ID_OVERRIDE,
    ftl::mmio::Reserved<5, 13>,
    typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_TO_SESSVALID,
    ftl::mmio::Reserved<1, 19>,
    typename USB1_VBUS_DETECT_CLR_fields_::PWRUP_CMPS,
    ftl::mmio::Reserved<3, 23>,
    typename USB1_VBUS_DETECT_CLR_fields_::DISCHARGE_VBUS,
    ftl::mmio::Reserved<4, 27>,
    typename USB1_VBUS_DETECT_CLR_fields_::EN_CHARGER_RESISTOR> {
  using VBUSVALID_THRESH = typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_THRESH;
  using VBUS_OVERRIDE_EN = typename USB1_VBUS_DETECT_CLR_fields_::VBUS_OVERRIDE_EN;
  using SESSEND_OVERRIDE = typename USB1_VBUS_DETECT_CLR_fields_::SESSEND_OVERRIDE;
  using BVALID_OVERRIDE = typename USB1_VBUS_DETECT_CLR_fields_::BVALID_OVERRIDE;
  using AVALID_OVERRIDE = typename USB1_VBUS_DETECT_CLR_fields_::AVALID_OVERRIDE;
  using VBUSVALID_OVERRIDE = typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_OVERRIDE;
  using VBUSVALID_SEL = typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_SEL;
  using VBUS_SOURCE_SEL = typename USB1_VBUS_DETECT_CLR_fields_::VBUS_SOURCE_SEL;
  using ID_OVERRIDE_EN = typename USB1_VBUS_DETECT_CLR_fields_::ID_OVERRIDE_EN;
  using ID_OVERRIDE = typename USB1_VBUS_DETECT_CLR_fields_::ID_OVERRIDE;
  using VBUSVALID_TO_SESSVALID = typename USB1_VBUS_DETECT_CLR_fields_::VBUSVALID_TO_SESSVALID;
  using PWRUP_CMPS = typename USB1_VBUS_DETECT_CLR_fields_::PWRUP_CMPS;
  using DISCHARGE_VBUS = typename USB1_VBUS_DETECT_CLR_fields_::DISCHARGE_VBUS;
  using EN_CHARGER_RESISTOR = typename USB1_VBUS_DETECT_CLR_fields_::EN_CHARGER_RESISTOR;
};

  
// USB PHY VBUS Detect Control Register
struct USB1_VBUS_DETECT_TOG_fields_ {
  // VBUSVALID_THRESH
  using VBUSVALID_THRESH = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // VBUS detect signal override enable
  using VBUS_OVERRIDE_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Override value for SESSEND
  using SESSEND_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Override value for B-Device Session Valid
  using BVALID_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Override value for A-Device Session Valid
  using AVALID_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Override value for VBUS_VALID signal sent to USB controller
  using VBUSVALID_OVERRIDE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUSVALID_SEL = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  using VBUS_SOURCE_SEL = ftl::mmio::Field<2, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TBA
  using ID_OVERRIDE_EN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TBA
  using ID_OVERRIDE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Selects the comparator used for VBUS_VALID
  using VBUSVALID_TO_SESSVALID = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Enables the VBUS_VALID comparator
  using PWRUP_CMPS = ftl::mmio::Field<3, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Controls VBUS discharge resistor
  using DISCHARGE_VBUS = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Enables resistors used for an older method of resistive battery charger detection
  using EN_CHARGER_RESISTOR = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct USB1_VBUS_DETECT_TOG_fields_

struct USB1_VBUS_DETECT_TOG : ftl::mmio::Register<
    kBase + 0xCCu,
    std::uint32_t,
    0x00700004u,
    ftl::mmio::RW,
    typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_THRESH,
    typename USB1_VBUS_DETECT_TOG_fields_::VBUS_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_TOG_fields_::SESSEND_OVERRIDE,
    typename USB1_VBUS_DETECT_TOG_fields_::BVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_TOG_fields_::AVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_OVERRIDE,
    typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_SEL,
    typename USB1_VBUS_DETECT_TOG_fields_::VBUS_SOURCE_SEL,
    typename USB1_VBUS_DETECT_TOG_fields_::ID_OVERRIDE_EN,
    typename USB1_VBUS_DETECT_TOG_fields_::ID_OVERRIDE,
    ftl::mmio::Reserved<5, 13>,
    typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_TO_SESSVALID,
    ftl::mmio::Reserved<1, 19>,
    typename USB1_VBUS_DETECT_TOG_fields_::PWRUP_CMPS,
    ftl::mmio::Reserved<3, 23>,
    typename USB1_VBUS_DETECT_TOG_fields_::DISCHARGE_VBUS,
    ftl::mmio::Reserved<4, 27>,
    typename USB1_VBUS_DETECT_TOG_fields_::EN_CHARGER_RESISTOR> {
  using VBUSVALID_THRESH = typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_THRESH;
  using VBUS_OVERRIDE_EN = typename USB1_VBUS_DETECT_TOG_fields_::VBUS_OVERRIDE_EN;
  using SESSEND_OVERRIDE = typename USB1_VBUS_DETECT_TOG_fields_::SESSEND_OVERRIDE;
  using BVALID_OVERRIDE = typename USB1_VBUS_DETECT_TOG_fields_::BVALID_OVERRIDE;
  using AVALID_OVERRIDE = typename USB1_VBUS_DETECT_TOG_fields_::AVALID_OVERRIDE;
  using VBUSVALID_OVERRIDE = typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_OVERRIDE;
  using VBUSVALID_SEL = typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_SEL;
  using VBUS_SOURCE_SEL = typename USB1_VBUS_DETECT_TOG_fields_::VBUS_SOURCE_SEL;
  using ID_OVERRIDE_EN = typename USB1_VBUS_DETECT_TOG_fields_::ID_OVERRIDE_EN;
  using ID_OVERRIDE = typename USB1_VBUS_DETECT_TOG_fields_::ID_OVERRIDE;
  using VBUSVALID_TO_SESSVALID = typename USB1_VBUS_DETECT_TOG_fields_::VBUSVALID_TO_SESSVALID;
  using PWRUP_CMPS = typename USB1_VBUS_DETECT_TOG_fields_::PWRUP_CMPS;
  using DISCHARGE_VBUS = typename USB1_VBUS_DETECT_TOG_fields_::DISCHARGE_VBUS;
  using EN_CHARGER_RESISTOR = typename USB1_VBUS_DETECT_TOG_fields_::EN_CHARGER_RESISTOR;
};

  
// USB PHY VBUS Detector Status Register
struct USB1_VBUS_DET_STAT_fields_ {

  enum class eSESSEND : std::uint32_t {
    // The VBUS voltage is above the Session Valid threshold
    eABOVE = 0,
    // The VBUS voltage is below the Session Valid threshold
    eBELOW = 1,
  };

  enum class eBVALID : std::uint32_t {
    // The VBUS voltage is below the Session Valid threshold
    eBELOW = 0,
    // The VBUS voltage is above the Session Valid threshold
    eABOVE = 1,
  };

  enum class eAVALID : std::uint32_t {
    // The VBUS voltage is below the Session Valid threshold
    eBELOW = 0,
    // The VBUS voltage is above the Session Valid threshold
    eABOVE = 1,
  };

  enum class eVBUS_VALID : std::uint32_t {
    // VBUS is below the comparator threshold
    eBELOW = 0,
    // VBUS is above the comparator threshold
    eABOVE = 1,
  };

  enum class eVBUS_VALID_3V : std::uint32_t {
    // VBUS voltage is below VBUS_VALID_3V threshold
    eBELOW = 0,
    // VBUS voltage is above VBUS_VALID_3V threshold
    eABOVE = 1,
  };
  // Session End indicator
  using SESSEND = ftl::mmio::Field<1, 0, eSESSEND, ftl::mmio::RO, ftl::mmio::Normal>;
  // B-Device Session Valid status
  using BVALID = ftl::mmio::Field<1, 1, eBVALID, ftl::mmio::RO, ftl::mmio::Normal>;
  // A-Device Session Valid status
  using AVALID = ftl::mmio::Field<1, 2, eAVALID, ftl::mmio::RO, ftl::mmio::Normal>;
  // VBUS voltage status
  using VBUS_VALID = ftl::mmio::Field<1, 3, eVBUS_VALID, ftl::mmio::RO, ftl::mmio::Normal>;
  // VBUS_VALID_3V detector status
  using VBUS_VALID_3V = ftl::mmio::Field<1, 4, eVBUS_VALID_3V, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct USB1_VBUS_DET_STAT_fields_

struct USB1_VBUS_DET_STAT : ftl::mmio::Register<
    kBase + 0xD0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    typename USB1_VBUS_DET_STAT_fields_::SESSEND,
    typename USB1_VBUS_DET_STAT_fields_::BVALID,
    typename USB1_VBUS_DET_STAT_fields_::AVALID,
    typename USB1_VBUS_DET_STAT_fields_::VBUS_VALID,
    typename USB1_VBUS_DET_STAT_fields_::VBUS_VALID_3V,
    ftl::mmio::Reserved<27, 5>> {
  using eSESSEND = typename USB1_VBUS_DET_STAT_fields_::eSESSEND;
  using eBVALID = typename USB1_VBUS_DET_STAT_fields_::eBVALID;
  using eAVALID = typename USB1_VBUS_DET_STAT_fields_::eAVALID;
  using eVBUS_VALID = typename USB1_VBUS_DET_STAT_fields_::eVBUS_VALID;
  using eVBUS_VALID_3V = typename USB1_VBUS_DET_STAT_fields_::eVBUS_VALID_3V;
  using SESSEND = typename USB1_VBUS_DET_STAT_fields_::SESSEND;
  using BVALID = typename USB1_VBUS_DET_STAT_fields_::BVALID;
  using AVALID = typename USB1_VBUS_DET_STAT_fields_::AVALID;
  using VBUS_VALID = typename USB1_VBUS_DET_STAT_fields_::VBUS_VALID;
  using VBUS_VALID_3V = typename USB1_VBUS_DET_STAT_fields_::VBUS_VALID_3V;
};

  
// USB PHY Charger Detect Control Register
struct USB1_CHRG_DETECT_fields_ {

  enum class eBGR_BIAS : std::uint32_t {
    // Use local bias powered from USB1_VBUS for 10uA reference (Default)
    eLOCAL_BIAS = 0,
    // Use bandgap bias powered from VREGIN0/VREGIN1 for 10uA reference
    eBANDGAP = 1,
  };
  // PULLUP_DP
  using PULLUP_DP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // BGR_BIAS
  using BGR_BIAS = ftl::mmio::Field<1, 23, eBGR_BIAS, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USB1_CHRG_DETECT_fields_

struct USB1_CHRG_DETECT : ftl::mmio::Register<
    kBase + 0xE0u,
    std::uint32_t,
    0x80180000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename USB1_CHRG_DETECT_fields_::PULLUP_DP,
    ftl::mmio::Reserved<20, 3>,
    typename USB1_CHRG_DETECT_fields_::BGR_BIAS,
    ftl::mmio::Reserved<8, 24>> {
  using eBGR_BIAS = typename USB1_CHRG_DETECT_fields_::eBGR_BIAS;
  using PULLUP_DP = typename USB1_CHRG_DETECT_fields_::PULLUP_DP;
  using BGR_BIAS = typename USB1_CHRG_DETECT_fields_::BGR_BIAS;
};

  
// USB PHY Charger Detect Control Register
struct USB1_CHRG_DETECT_SET_fields_ {
  // PULLUP_DP
  using PULLUP_DP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // BGR_BIAS
  using BGR_BIAS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct USB1_CHRG_DETECT_SET_fields_

struct USB1_CHRG_DETECT_SET : ftl::mmio::Register<
    kBase + 0xE4u,
    std::uint32_t,
    0x80180000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename USB1_CHRG_DETECT_SET_fields_::PULLUP_DP,
    ftl::mmio::Reserved<20, 3>,
    typename USB1_CHRG_DETECT_SET_fields_::BGR_BIAS,
    ftl::mmio::Reserved<8, 24>> {
  using PULLUP_DP = typename USB1_CHRG_DETECT_SET_fields_::PULLUP_DP;
  using BGR_BIAS = typename USB1_CHRG_DETECT_SET_fields_::BGR_BIAS;
};

  
// USB PHY Charger Detect Control Register
struct USB1_CHRG_DETECT_CLR_fields_ {
  // PULLUP_DP
  using PULLUP_DP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // BGR_BIAS
  using BGR_BIAS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct USB1_CHRG_DETECT_CLR_fields_

struct USB1_CHRG_DETECT_CLR : ftl::mmio::Register<
    kBase + 0xE8u,
    std::uint32_t,
    0x80180000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename USB1_CHRG_DETECT_CLR_fields_::PULLUP_DP,
    ftl::mmio::Reserved<20, 3>,
    typename USB1_CHRG_DETECT_CLR_fields_::BGR_BIAS,
    ftl::mmio::Reserved<8, 24>> {
  using PULLUP_DP = typename USB1_CHRG_DETECT_CLR_fields_::PULLUP_DP;
  using BGR_BIAS = typename USB1_CHRG_DETECT_CLR_fields_::BGR_BIAS;
};

  
// USB PHY Charger Detect Control Register
struct USB1_CHRG_DETECT_TOG_fields_ {
  // PULLUP_DP
  using PULLUP_DP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // BGR_BIAS
  using BGR_BIAS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct USB1_CHRG_DETECT_TOG_fields_

struct USB1_CHRG_DETECT_TOG : ftl::mmio::Register<
    kBase + 0xECu,
    std::uint32_t,
    0x80180000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    typename USB1_CHRG_DETECT_TOG_fields_::PULLUP_DP,
    ftl::mmio::Reserved<20, 3>,
    typename USB1_CHRG_DETECT_TOG_fields_::BGR_BIAS,
    ftl::mmio::Reserved<8, 24>> {
  using PULLUP_DP = typename USB1_CHRG_DETECT_TOG_fields_::PULLUP_DP;
  using BGR_BIAS = typename USB1_CHRG_DETECT_TOG_fields_::BGR_BIAS;
};

  
// USB PHY Charger Detect Status Register
struct USB1_CHRG_DET_STAT_fields_ {

  enum class ePLUG_CONTACT : std::uint32_t {
    // No USB cable attachment has been detected
    eNO_ATTACH = 0,
    // A USB cable attachment between the device and host has been detected
    eATTACH = 1,
  };

  enum class eCHRG_DETECTED : std::uint32_t {
    // Standard Downstream Port (SDP) has been detected
    eSDP = 0,
    // Charging Port has been detected
    eCHRG_PORT = 1,
  };

  enum class eDN_STATE : std::uint32_t {
    // DN pin voltage is < 0.8V
    eBELOW_P8 = 0,
    // DN pin voltage is > 2.0V
    eABOVE_2 = 1,
  };

  enum class eDP_STATE : std::uint32_t {
    // DP pin voltage is < 0.8V
    eBELOW_P8 = 0,
    // DP pin voltage is > 2.0V
    eABOVE_2 = 1,
  };

  enum class eSECDET_DCP : std::uint32_t {
    // Charging Downstream Port (CDP) has been detected
    eCDP = 0,
    // Downstream Charging Port (DCP) has been detected
    eDCP = 1,
  };
  // Battery Charging Data Contact Detection phase output
  using PLUG_CONTACT = ftl::mmio::Field<1, 0, ePLUG_CONTACT, ftl::mmio::RO, ftl::mmio::Normal>;
  // Battery Charging Primary Detection phase output
  using CHRG_DETECTED = ftl::mmio::Field<1, 1, eCHRG_DETECTED, ftl::mmio::RO, ftl::mmio::Normal>;
  // DN_STATE
  using DN_STATE = ftl::mmio::Field<1, 2, eDN_STATE, ftl::mmio::RO, ftl::mmio::Normal>;
  // DP_STATE
  using DP_STATE = ftl::mmio::Field<1, 3, eDP_STATE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Battery Charging Secondary Detection phase output
  using SECDET_DCP = ftl::mmio::Field<1, 4, eSECDET_DCP, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct USB1_CHRG_DET_STAT_fields_

struct USB1_CHRG_DET_STAT : ftl::mmio::Register<
    kBase + 0xF0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    typename USB1_CHRG_DET_STAT_fields_::PLUG_CONTACT,
    typename USB1_CHRG_DET_STAT_fields_::CHRG_DETECTED,
    typename USB1_CHRG_DET_STAT_fields_::DN_STATE,
    typename USB1_CHRG_DET_STAT_fields_::DP_STATE,
    typename USB1_CHRG_DET_STAT_fields_::SECDET_DCP,
    ftl::mmio::Reserved<27, 5>> {
  using ePLUG_CONTACT = typename USB1_CHRG_DET_STAT_fields_::ePLUG_CONTACT;
  using eCHRG_DETECTED = typename USB1_CHRG_DET_STAT_fields_::eCHRG_DETECTED;
  using eDN_STATE = typename USB1_CHRG_DET_STAT_fields_::eDN_STATE;
  using eDP_STATE = typename USB1_CHRG_DET_STAT_fields_::eDP_STATE;
  using eSECDET_DCP = typename USB1_CHRG_DET_STAT_fields_::eSECDET_DCP;
  using PLUG_CONTACT = typename USB1_CHRG_DET_STAT_fields_::PLUG_CONTACT;
  using CHRG_DETECTED = typename USB1_CHRG_DET_STAT_fields_::CHRG_DETECTED;
  using DN_STATE = typename USB1_CHRG_DET_STAT_fields_::DN_STATE;
  using DP_STATE = typename USB1_CHRG_DET_STAT_fields_::DP_STATE;
  using SECDET_DCP = typename USB1_CHRG_DET_STAT_fields_::SECDET_DCP;
};

  
// USB PHY Analog Control Register
struct ANACTRL_fields_ {

  enum class eDEV_PULLDOWN : std::uint32_t {
    // The 15kohm nominal pulldowns on the DP and DN pinsare disabled in device mode.
    eDISABLE = 0,
    // The 15kohm nominal pulldowns on the DP and DN pinsare enabled in device mode.
    eENABLE = 1,
  };
  // DEV_PULLDOWN
  using DEV_PULLDOWN = ftl::mmio::Field<1, 10, eDEV_PULLDOWN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ANACTRL_fields_

struct ANACTRL : ftl::mmio::Register<
    kBase + 0x100u,
    std::uint32_t,
    0x00000402u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename ANACTRL_fields_::DEV_PULLDOWN,
    ftl::mmio::Reserved<21, 11>> {
  using eDEV_PULLDOWN = typename ANACTRL_fields_::eDEV_PULLDOWN;
  using DEV_PULLDOWN = typename ANACTRL_fields_::DEV_PULLDOWN;
};

  
// USB PHY Analog Control Register
struct ANACTRL_SET_fields_ {
  // DEV_PULLDOWN
  using DEV_PULLDOWN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct ANACTRL_SET_fields_

struct ANACTRL_SET : ftl::mmio::Register<
    kBase + 0x104u,
    std::uint32_t,
    0x00000402u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename ANACTRL_SET_fields_::DEV_PULLDOWN,
    ftl::mmio::Reserved<21, 11>> {
  using DEV_PULLDOWN = typename ANACTRL_SET_fields_::DEV_PULLDOWN;
};

  
// USB PHY Analog Control Register
struct ANACTRL_CLR_fields_ {
  // DEV_PULLDOWN
  using DEV_PULLDOWN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct ANACTRL_CLR_fields_

struct ANACTRL_CLR : ftl::mmio::Register<
    kBase + 0x108u,
    std::uint32_t,
    0x00000402u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename ANACTRL_CLR_fields_::DEV_PULLDOWN,
    ftl::mmio::Reserved<21, 11>> {
  using DEV_PULLDOWN = typename ANACTRL_CLR_fields_::DEV_PULLDOWN;
};

  
// USB PHY Analog Control Register
struct ANACTRL_TOG_fields_ {
  // DEV_PULLDOWN
  using DEV_PULLDOWN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct ANACTRL_TOG_fields_

struct ANACTRL_TOG : ftl::mmio::Register<
    kBase + 0x10Cu,
    std::uint32_t,
    0x00000402u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    typename ANACTRL_TOG_fields_::DEV_PULLDOWN,
    ftl::mmio::Reserved<21, 11>> {
  using DEV_PULLDOWN = typename ANACTRL_TOG_fields_::DEV_PULLDOWN;
};

  
// USB PHY Loopback Control/Status Register
struct USB1_LOOPBACK_fields_ {
  // UTMI_TESTSTART
  using UTMI_TESTSTART = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UTMI_DIG_TST0
  using UTMI_DIG_TST0 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UTMI_DIG_TST1
  using UTMI_DIG_TST1 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TSTI_TX_HS_MODE
  using TSTI_TX_HS_MODE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TSTI_TX_LS_MODE
  using TSTI_TX_LS_MODE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TSTI_TX_EN
  using TSTI_TX_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TSTI_TX_HIZ
  using TSTI_TX_HIZ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UTMO_DIG_TST0
  using UTMO_DIG_TST0 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // UTMO_DIG_TST1
  using UTMO_DIG_TST1 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // TSTI_HSFS_MODE_EN
  using TSTI_HSFS_MODE_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TSTPKT
  using TSTPKT = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USB1_LOOPBACK_fields_

struct USB1_LOOPBACK : ftl::mmio::Register<
    kBase + 0x110u,
    std::uint32_t,
    0x00550000u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_fields_::UTMI_TESTSTART,
    typename USB1_LOOPBACK_fields_::UTMI_DIG_TST0,
    typename USB1_LOOPBACK_fields_::UTMI_DIG_TST1,
    typename USB1_LOOPBACK_fields_::TSTI_TX_HS_MODE,
    typename USB1_LOOPBACK_fields_::TSTI_TX_LS_MODE,
    typename USB1_LOOPBACK_fields_::TSTI_TX_EN,
    typename USB1_LOOPBACK_fields_::TSTI_TX_HIZ,
    typename USB1_LOOPBACK_fields_::UTMO_DIG_TST0,
    typename USB1_LOOPBACK_fields_::UTMO_DIG_TST1,
    ftl::mmio::Reserved<6, 9>,
    typename USB1_LOOPBACK_fields_::TSTI_HSFS_MODE_EN,
    typename USB1_LOOPBACK_fields_::TSTPKT,
    ftl::mmio::Reserved<8, 24>> {
  using UTMI_TESTSTART = typename USB1_LOOPBACK_fields_::UTMI_TESTSTART;
  using UTMI_DIG_TST0 = typename USB1_LOOPBACK_fields_::UTMI_DIG_TST0;
  using UTMI_DIG_TST1 = typename USB1_LOOPBACK_fields_::UTMI_DIG_TST1;
  using TSTI_TX_HS_MODE = typename USB1_LOOPBACK_fields_::TSTI_TX_HS_MODE;
  using TSTI_TX_LS_MODE = typename USB1_LOOPBACK_fields_::TSTI_TX_LS_MODE;
  using TSTI_TX_EN = typename USB1_LOOPBACK_fields_::TSTI_TX_EN;
  using TSTI_TX_HIZ = typename USB1_LOOPBACK_fields_::TSTI_TX_HIZ;
  using UTMO_DIG_TST0 = typename USB1_LOOPBACK_fields_::UTMO_DIG_TST0;
  using UTMO_DIG_TST1 = typename USB1_LOOPBACK_fields_::UTMO_DIG_TST1;
  using TSTI_HSFS_MODE_EN = typename USB1_LOOPBACK_fields_::TSTI_HSFS_MODE_EN;
  using TSTPKT = typename USB1_LOOPBACK_fields_::TSTPKT;
};

  
// USB PHY Loopback Control/Status Register
struct USB1_LOOPBACK_SET_fields_ {
  // UTMI_TESTSTART
  using UTMI_TESTSTART = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // UTMI_DIG_TST0
  using UTMI_DIG_TST0 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // UTMI_DIG_TST1
  using UTMI_DIG_TST1 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TSTI_TX_HS_MODE
  using TSTI_TX_HS_MODE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TSTI_TX_LS_MODE
  using TSTI_TX_LS_MODE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TSTI_TX_EN
  using TSTI_TX_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TSTI_TX_HIZ
  using TSTI_TX_HIZ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // UTMO_DIG_TST0
  using UTMO_DIG_TST0 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // UTMO_DIG_TST1
  using UTMO_DIG_TST1 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // TSTI_HSFS_MODE_EN
  using TSTI_HSFS_MODE_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TSTPKT
  using TSTPKT = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct USB1_LOOPBACK_SET_fields_

struct USB1_LOOPBACK_SET : ftl::mmio::Register<
    kBase + 0x114u,
    std::uint32_t,
    0x00550000u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_SET_fields_::UTMI_TESTSTART,
    typename USB1_LOOPBACK_SET_fields_::UTMI_DIG_TST0,
    typename USB1_LOOPBACK_SET_fields_::UTMI_DIG_TST1,
    typename USB1_LOOPBACK_SET_fields_::TSTI_TX_HS_MODE,
    typename USB1_LOOPBACK_SET_fields_::TSTI_TX_LS_MODE,
    typename USB1_LOOPBACK_SET_fields_::TSTI_TX_EN,
    typename USB1_LOOPBACK_SET_fields_::TSTI_TX_HIZ,
    typename USB1_LOOPBACK_SET_fields_::UTMO_DIG_TST0,
    typename USB1_LOOPBACK_SET_fields_::UTMO_DIG_TST1,
    ftl::mmio::Reserved<6, 9>,
    typename USB1_LOOPBACK_SET_fields_::TSTI_HSFS_MODE_EN,
    typename USB1_LOOPBACK_SET_fields_::TSTPKT,
    ftl::mmio::Reserved<8, 24>> {
  using UTMI_TESTSTART = typename USB1_LOOPBACK_SET_fields_::UTMI_TESTSTART;
  using UTMI_DIG_TST0 = typename USB1_LOOPBACK_SET_fields_::UTMI_DIG_TST0;
  using UTMI_DIG_TST1 = typename USB1_LOOPBACK_SET_fields_::UTMI_DIG_TST1;
  using TSTI_TX_HS_MODE = typename USB1_LOOPBACK_SET_fields_::TSTI_TX_HS_MODE;
  using TSTI_TX_LS_MODE = typename USB1_LOOPBACK_SET_fields_::TSTI_TX_LS_MODE;
  using TSTI_TX_EN = typename USB1_LOOPBACK_SET_fields_::TSTI_TX_EN;
  using TSTI_TX_HIZ = typename USB1_LOOPBACK_SET_fields_::TSTI_TX_HIZ;
  using UTMO_DIG_TST0 = typename USB1_LOOPBACK_SET_fields_::UTMO_DIG_TST0;
  using UTMO_DIG_TST1 = typename USB1_LOOPBACK_SET_fields_::UTMO_DIG_TST1;
  using TSTI_HSFS_MODE_EN = typename USB1_LOOPBACK_SET_fields_::TSTI_HSFS_MODE_EN;
  using TSTPKT = typename USB1_LOOPBACK_SET_fields_::TSTPKT;
};

  
// USB PHY Loopback Control/Status Register
struct USB1_LOOPBACK_CLR_fields_ {
  // UTMI_TESTSTART
  using UTMI_TESTSTART = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // UTMI_DIG_TST0
  using UTMI_DIG_TST0 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // UTMI_DIG_TST1
  using UTMI_DIG_TST1 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TSTI_TX_HS_MODE
  using TSTI_TX_HS_MODE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TSTI_TX_LS_MODE
  using TSTI_TX_LS_MODE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TSTI_TX_EN
  using TSTI_TX_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TSTI_TX_HIZ
  using TSTI_TX_HIZ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // UTMO_DIG_TST0
  using UTMO_DIG_TST0 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // UTMO_DIG_TST1
  using UTMO_DIG_TST1 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // TSTI_HSFS_MODE_EN
  using TSTI_HSFS_MODE_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TSTPKT
  using TSTPKT = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct USB1_LOOPBACK_CLR_fields_

struct USB1_LOOPBACK_CLR : ftl::mmio::Register<
    kBase + 0x118u,
    std::uint32_t,
    0x00550000u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_CLR_fields_::UTMI_TESTSTART,
    typename USB1_LOOPBACK_CLR_fields_::UTMI_DIG_TST0,
    typename USB1_LOOPBACK_CLR_fields_::UTMI_DIG_TST1,
    typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_HS_MODE,
    typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_LS_MODE,
    typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_EN,
    typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_HIZ,
    typename USB1_LOOPBACK_CLR_fields_::UTMO_DIG_TST0,
    typename USB1_LOOPBACK_CLR_fields_::UTMO_DIG_TST1,
    ftl::mmio::Reserved<6, 9>,
    typename USB1_LOOPBACK_CLR_fields_::TSTI_HSFS_MODE_EN,
    typename USB1_LOOPBACK_CLR_fields_::TSTPKT,
    ftl::mmio::Reserved<8, 24>> {
  using UTMI_TESTSTART = typename USB1_LOOPBACK_CLR_fields_::UTMI_TESTSTART;
  using UTMI_DIG_TST0 = typename USB1_LOOPBACK_CLR_fields_::UTMI_DIG_TST0;
  using UTMI_DIG_TST1 = typename USB1_LOOPBACK_CLR_fields_::UTMI_DIG_TST1;
  using TSTI_TX_HS_MODE = typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_HS_MODE;
  using TSTI_TX_LS_MODE = typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_LS_MODE;
  using TSTI_TX_EN = typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_EN;
  using TSTI_TX_HIZ = typename USB1_LOOPBACK_CLR_fields_::TSTI_TX_HIZ;
  using UTMO_DIG_TST0 = typename USB1_LOOPBACK_CLR_fields_::UTMO_DIG_TST0;
  using UTMO_DIG_TST1 = typename USB1_LOOPBACK_CLR_fields_::UTMO_DIG_TST1;
  using TSTI_HSFS_MODE_EN = typename USB1_LOOPBACK_CLR_fields_::TSTI_HSFS_MODE_EN;
  using TSTPKT = typename USB1_LOOPBACK_CLR_fields_::TSTPKT;
};

  
// USB PHY Loopback Control/Status Register
struct USB1_LOOPBACK_TOG_fields_ {
  // UTMI_TESTSTART
  using UTMI_TESTSTART = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // UTMI_DIG_TST0
  using UTMI_DIG_TST0 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // UTMI_DIG_TST1
  using UTMI_DIG_TST1 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TSTI_TX_HS_MODE
  using TSTI_TX_HS_MODE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TSTI_TX_LS_MODE
  using TSTI_TX_LS_MODE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TSTI_TX_EN
  using TSTI_TX_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TSTI_TX_HIZ
  using TSTI_TX_HIZ = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // UTMO_DIG_TST0
  using UTMO_DIG_TST0 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // UTMO_DIG_TST1
  using UTMO_DIG_TST1 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // TSTI_HSFS_MODE_EN
  using TSTI_HSFS_MODE_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TSTPKT
  using TSTPKT = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct USB1_LOOPBACK_TOG_fields_

struct USB1_LOOPBACK_TOG : ftl::mmio::Register<
    kBase + 0x11Cu,
    std::uint32_t,
    0x00550000u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_TOG_fields_::UTMI_TESTSTART,
    typename USB1_LOOPBACK_TOG_fields_::UTMI_DIG_TST0,
    typename USB1_LOOPBACK_TOG_fields_::UTMI_DIG_TST1,
    typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_HS_MODE,
    typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_LS_MODE,
    typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_EN,
    typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_HIZ,
    typename USB1_LOOPBACK_TOG_fields_::UTMO_DIG_TST0,
    typename USB1_LOOPBACK_TOG_fields_::UTMO_DIG_TST1,
    ftl::mmio::Reserved<6, 9>,
    typename USB1_LOOPBACK_TOG_fields_::TSTI_HSFS_MODE_EN,
    typename USB1_LOOPBACK_TOG_fields_::TSTPKT,
    ftl::mmio::Reserved<8, 24>> {
  using UTMI_TESTSTART = typename USB1_LOOPBACK_TOG_fields_::UTMI_TESTSTART;
  using UTMI_DIG_TST0 = typename USB1_LOOPBACK_TOG_fields_::UTMI_DIG_TST0;
  using UTMI_DIG_TST1 = typename USB1_LOOPBACK_TOG_fields_::UTMI_DIG_TST1;
  using TSTI_TX_HS_MODE = typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_HS_MODE;
  using TSTI_TX_LS_MODE = typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_LS_MODE;
  using TSTI_TX_EN = typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_EN;
  using TSTI_TX_HIZ = typename USB1_LOOPBACK_TOG_fields_::TSTI_TX_HIZ;
  using UTMO_DIG_TST0 = typename USB1_LOOPBACK_TOG_fields_::UTMO_DIG_TST0;
  using UTMO_DIG_TST1 = typename USB1_LOOPBACK_TOG_fields_::UTMO_DIG_TST1;
  using TSTI_HSFS_MODE_EN = typename USB1_LOOPBACK_TOG_fields_::TSTI_HSFS_MODE_EN;
  using TSTPKT = typename USB1_LOOPBACK_TOG_fields_::TSTPKT;
};

  
// USB PHY Loopback Packet Number Select Register
struct USB1_LOOPBACK_HSFSCNT_fields_ {
  // TSTI_HS_NUMBER
  using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TSTI_FS_NUMBER
  using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USB1_LOOPBACK_HSFSCNT_fields_

struct USB1_LOOPBACK_HSFSCNT : ftl::mmio::Register<
    kBase + 0x120u,
    std::uint32_t,
    0x00040010u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_HSFSCNT_fields_::TSTI_HS_NUMBER,
    typename USB1_LOOPBACK_HSFSCNT_fields_::TSTI_FS_NUMBER> {
  using TSTI_HS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_fields_::TSTI_HS_NUMBER;
  using TSTI_FS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_fields_::TSTI_FS_NUMBER;
};

  
// USB PHY Loopback Packet Number Select Register
struct USB1_LOOPBACK_HSFSCNT_SET_fields_ {
  // TSTI_HS_NUMBER
  using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TSTI_FS_NUMBER
  using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct USB1_LOOPBACK_HSFSCNT_SET_fields_

struct USB1_LOOPBACK_HSFSCNT_SET : ftl::mmio::Register<
    kBase + 0x124u,
    std::uint32_t,
    0x00040010u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_HSFSCNT_SET_fields_::TSTI_HS_NUMBER,
    typename USB1_LOOPBACK_HSFSCNT_SET_fields_::TSTI_FS_NUMBER> {
  using TSTI_HS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_SET_fields_::TSTI_HS_NUMBER;
  using TSTI_FS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_SET_fields_::TSTI_FS_NUMBER;
};

  
// USB PHY Loopback Packet Number Select Register
struct USB1_LOOPBACK_HSFSCNT_CLR_fields_ {
  // TSTI_HS_NUMBER
  using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TSTI_FS_NUMBER
  using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct USB1_LOOPBACK_HSFSCNT_CLR_fields_

struct USB1_LOOPBACK_HSFSCNT_CLR : ftl::mmio::Register<
    kBase + 0x128u,
    std::uint32_t,
    0x00040010u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_HSFSCNT_CLR_fields_::TSTI_HS_NUMBER,
    typename USB1_LOOPBACK_HSFSCNT_CLR_fields_::TSTI_FS_NUMBER> {
  using TSTI_HS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_CLR_fields_::TSTI_HS_NUMBER;
  using TSTI_FS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_CLR_fields_::TSTI_FS_NUMBER;
};

  
// USB PHY Loopback Packet Number Select Register
struct USB1_LOOPBACK_HSFSCNT_TOG_fields_ {
  // TSTI_HS_NUMBER
  using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TSTI_FS_NUMBER
  using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct USB1_LOOPBACK_HSFSCNT_TOG_fields_

struct USB1_LOOPBACK_HSFSCNT_TOG : ftl::mmio::Register<
    kBase + 0x12Cu,
    std::uint32_t,
    0x00040010u,
    ftl::mmio::RW,
    typename USB1_LOOPBACK_HSFSCNT_TOG_fields_::TSTI_HS_NUMBER,
    typename USB1_LOOPBACK_HSFSCNT_TOG_fields_::TSTI_FS_NUMBER> {
  using TSTI_HS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_TOG_fields_::TSTI_HS_NUMBER;
  using TSTI_FS_NUMBER = typename USB1_LOOPBACK_HSFSCNT_TOG_fields_::TSTI_FS_NUMBER;
};

  
// USB PHY Trim Override Enable Register
struct TRIM_OVERRIDE_EN_fields_ {
  // TRIM_DIV_SEL_OVERRIDE
  using TRIM_DIV_SEL_OVERRIDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRIM_TX_D_CAL_OVERRIDE
  using TRIM_TX_D_CAL_OVERRIDE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRIM_TX_CAL45DP_OVERRIDE
  using TRIM_TX_CAL45DP_OVERRIDE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRIM_TX_CAL45DN_OVERRIDE
  using TRIM_TX_CAL45DN_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Override enable for bandgap adjustment.
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Override enable for bias current control
  using TRIM_REFBIAS_TST_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRIM_USB2_REFBIAS_VBGADJ
  using TRIM_USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // TRIM_USB2_REFBIAS_TST
  using TRIM_USB2_REFBIAS_TST = ftl::mmio::Field<2, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // TRIM_PLL_CTRL0_DIV_SEL
  using TRIM_PLL_CTRL0_DIV_SEL = ftl::mmio::Field<3, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // TRIM_USB_REG_ENV_TAIL_ADJ_VD
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // TRIM_USBPHY_TX_D_CAL
  using TRIM_USBPHY_TX_D_CAL = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // TRIM_USBPHY_TX_CAL45DP
  using TRIM_USBPHY_TX_CAL45DP = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // TRIM_USBPHY_TX_CAL45DN
  using TRIM_USBPHY_TX_CAL45DN = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct TRIM_OVERRIDE_EN_fields_

struct TRIM_OVERRIDE_EN : ftl::mmio::Register<
    kBase + 0x130u,
    std::uint32_t,
    0x0000007Fu,
    ftl::mmio::RW,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_DIV_SEL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_TX_D_CAL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_TX_CAL45DP_OVERRIDE,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_TX_CAL45DN_OVERRIDE,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_REFBIAS_TST_OVERRIDE,
    ftl::mmio::Reserved<3, 7>,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_USB2_REFBIAS_VBGADJ,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_USB2_REFBIAS_TST,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_PLL_CTRL0_DIV_SEL,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_USBPHY_TX_D_CAL,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_USBPHY_TX_CAL45DP,
    typename TRIM_OVERRIDE_EN_fields_::TRIM_USBPHY_TX_CAL45DN> {
  using TRIM_DIV_SEL_OVERRIDE = typename TRIM_OVERRIDE_EN_fields_::TRIM_DIV_SEL_OVERRIDE;
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TRIM_OVERRIDE_EN_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
  using TRIM_TX_D_CAL_OVERRIDE = typename TRIM_OVERRIDE_EN_fields_::TRIM_TX_D_CAL_OVERRIDE;
  using TRIM_TX_CAL45DP_OVERRIDE = typename TRIM_OVERRIDE_EN_fields_::TRIM_TX_CAL45DP_OVERRIDE;
  using TRIM_TX_CAL45DN_OVERRIDE = typename TRIM_OVERRIDE_EN_fields_::TRIM_TX_CAL45DN_OVERRIDE;
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TRIM_OVERRIDE_EN_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE;
  using TRIM_REFBIAS_TST_OVERRIDE = typename TRIM_OVERRIDE_EN_fields_::TRIM_REFBIAS_TST_OVERRIDE;
  using TRIM_USB2_REFBIAS_VBGADJ = typename TRIM_OVERRIDE_EN_fields_::TRIM_USB2_REFBIAS_VBGADJ;
  using TRIM_USB2_REFBIAS_TST = typename TRIM_OVERRIDE_EN_fields_::TRIM_USB2_REFBIAS_TST;
  using TRIM_PLL_CTRL0_DIV_SEL = typename TRIM_OVERRIDE_EN_fields_::TRIM_PLL_CTRL0_DIV_SEL;
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TRIM_OVERRIDE_EN_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
  using TRIM_USBPHY_TX_D_CAL = typename TRIM_OVERRIDE_EN_fields_::TRIM_USBPHY_TX_D_CAL;
  using TRIM_USBPHY_TX_CAL45DP = typename TRIM_OVERRIDE_EN_fields_::TRIM_USBPHY_TX_CAL45DP;
  using TRIM_USBPHY_TX_CAL45DN = typename TRIM_OVERRIDE_EN_fields_::TRIM_USBPHY_TX_CAL45DN;
};

  
// USB PHY Trim Override Enable Register
struct TRIM_OVERRIDE_EN_SET_fields_ {
  // TRIM_DIV_SEL_OVERRIDE
  using TRIM_DIV_SEL_OVERRIDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TRIM_TX_D_CAL_OVERRIDE
  using TRIM_TX_D_CAL_OVERRIDE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TRIM_TX_CAL45DP_OVERRIDE
  using TRIM_TX_CAL45DP_OVERRIDE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TRIM_TX_CAL45DN_OVERRIDE
  using TRIM_TX_CAL45DN_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Override enable for bandgap adjustment.
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Override enable for bias current control
  using TRIM_REFBIAS_TST_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // TRIM_USB2_REFBIAS_VBGADJ
  using TRIM_USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // TRIM_USB2_REFBIAS_TST
  using TRIM_USB2_REFBIAS_TST = ftl::mmio::Field<2, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // TRIM_PLL_CTRL0_DIV_SEL
  using TRIM_PLL_CTRL0_DIV_SEL = ftl::mmio::Field<3, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // TRIM_USB_REG_ENV_TAIL_ADJ_VD
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // TRIM_USBPHY_TX_D_CAL
  using TRIM_USBPHY_TX_D_CAL = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // TRIM_USBPHY_TX_CAL45DP
  using TRIM_USBPHY_TX_CAL45DP = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  // TRIM_USBPHY_TX_CAL45DN
  using TRIM_USBPHY_TX_CAL45DN = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
};  // struct TRIM_OVERRIDE_EN_SET_fields_

struct TRIM_OVERRIDE_EN_SET : ftl::mmio::Register<
    kBase + 0x134u,
    std::uint32_t,
    0x0000007Fu,
    ftl::mmio::RW,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_DIV_SEL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_TX_D_CAL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_TX_CAL45DP_OVERRIDE,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_TX_CAL45DN_OVERRIDE,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_REFBIAS_TST_OVERRIDE,
    ftl::mmio::Reserved<3, 7>,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USB2_REFBIAS_VBGADJ,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USB2_REFBIAS_TST,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_PLL_CTRL0_DIV_SEL,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USBPHY_TX_D_CAL,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USBPHY_TX_CAL45DP,
    typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USBPHY_TX_CAL45DN> {
  using TRIM_DIV_SEL_OVERRIDE = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_DIV_SEL_OVERRIDE;
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
  using TRIM_TX_D_CAL_OVERRIDE = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_TX_D_CAL_OVERRIDE;
  using TRIM_TX_CAL45DP_OVERRIDE = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_TX_CAL45DP_OVERRIDE;
  using TRIM_TX_CAL45DN_OVERRIDE = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_TX_CAL45DN_OVERRIDE;
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE;
  using TRIM_REFBIAS_TST_OVERRIDE = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_REFBIAS_TST_OVERRIDE;
  using TRIM_USB2_REFBIAS_VBGADJ = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USB2_REFBIAS_VBGADJ;
  using TRIM_USB2_REFBIAS_TST = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USB2_REFBIAS_TST;
  using TRIM_PLL_CTRL0_DIV_SEL = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_PLL_CTRL0_DIV_SEL;
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
  using TRIM_USBPHY_TX_D_CAL = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USBPHY_TX_D_CAL;
  using TRIM_USBPHY_TX_CAL45DP = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USBPHY_TX_CAL45DP;
  using TRIM_USBPHY_TX_CAL45DN = typename TRIM_OVERRIDE_EN_SET_fields_::TRIM_USBPHY_TX_CAL45DN;
};

  
// USB PHY Trim Override Enable Register
struct TRIM_OVERRIDE_EN_CLR_fields_ {
  // TRIM_DIV_SEL_OVERRIDE
  using TRIM_DIV_SEL_OVERRIDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TRIM_TX_D_CAL_OVERRIDE
  using TRIM_TX_D_CAL_OVERRIDE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TRIM_TX_CAL45DP_OVERRIDE
  using TRIM_TX_CAL45DP_OVERRIDE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TRIM_TX_CAL45DN_OVERRIDE
  using TRIM_TX_CAL45DN_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Override enable for bandgap adjustment.
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Override enable for bias current control
  using TRIM_REFBIAS_TST_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // TRIM_USB2_REFBIAS_VBGADJ
  using TRIM_USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // TRIM_USB2_REFBIAS_TST
  using TRIM_USB2_REFBIAS_TST = ftl::mmio::Field<2, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // TRIM_PLL_CTRL0_DIV_SEL
  using TRIM_PLL_CTRL0_DIV_SEL = ftl::mmio::Field<3, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // TRIM_USB_REG_ENV_TAIL_ADJ_VD
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // TRIM_USBPHY_TX_D_CAL
  using TRIM_USBPHY_TX_D_CAL = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // TRIM_USBPHY_TX_CAL45DP
  using TRIM_USBPHY_TX_CAL45DP = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  // TRIM_USBPHY_TX_CAL45DN
  using TRIM_USBPHY_TX_CAL45DN = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
};  // struct TRIM_OVERRIDE_EN_CLR_fields_

struct TRIM_OVERRIDE_EN_CLR : ftl::mmio::Register<
    kBase + 0x138u,
    std::uint32_t,
    0x0000007Fu,
    ftl::mmio::RW,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_DIV_SEL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_TX_D_CAL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_TX_CAL45DP_OVERRIDE,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_TX_CAL45DN_OVERRIDE,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_REFBIAS_TST_OVERRIDE,
    ftl::mmio::Reserved<3, 7>,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USB2_REFBIAS_VBGADJ,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USB2_REFBIAS_TST,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_PLL_CTRL0_DIV_SEL,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USBPHY_TX_D_CAL,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USBPHY_TX_CAL45DP,
    typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USBPHY_TX_CAL45DN> {
  using TRIM_DIV_SEL_OVERRIDE = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_DIV_SEL_OVERRIDE;
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
  using TRIM_TX_D_CAL_OVERRIDE = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_TX_D_CAL_OVERRIDE;
  using TRIM_TX_CAL45DP_OVERRIDE = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_TX_CAL45DP_OVERRIDE;
  using TRIM_TX_CAL45DN_OVERRIDE = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_TX_CAL45DN_OVERRIDE;
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE;
  using TRIM_REFBIAS_TST_OVERRIDE = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_REFBIAS_TST_OVERRIDE;
  using TRIM_USB2_REFBIAS_VBGADJ = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USB2_REFBIAS_VBGADJ;
  using TRIM_USB2_REFBIAS_TST = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USB2_REFBIAS_TST;
  using TRIM_PLL_CTRL0_DIV_SEL = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_PLL_CTRL0_DIV_SEL;
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
  using TRIM_USBPHY_TX_D_CAL = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USBPHY_TX_D_CAL;
  using TRIM_USBPHY_TX_CAL45DP = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USBPHY_TX_CAL45DP;
  using TRIM_USBPHY_TX_CAL45DN = typename TRIM_OVERRIDE_EN_CLR_fields_::TRIM_USBPHY_TX_CAL45DN;
};

  
// USB PHY Trim Override Enable Register
struct TRIM_OVERRIDE_EN_TOG_fields_ {
  // TRIM_DIV_SEL_OVERRIDE
  using TRIM_DIV_SEL_OVERRIDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TRIM_TX_D_CAL_OVERRIDE
  using TRIM_TX_D_CAL_OVERRIDE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TRIM_TX_CAL45DP_OVERRIDE
  using TRIM_TX_CAL45DP_OVERRIDE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TRIM_TX_CAL45DN_OVERRIDE
  using TRIM_TX_CAL45DN_OVERRIDE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Override enable for bandgap adjustment.
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Override enable for bias current control
  using TRIM_REFBIAS_TST_OVERRIDE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // TRIM_USB2_REFBIAS_VBGADJ
  using TRIM_USB2_REFBIAS_VBGADJ = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // TRIM_USB2_REFBIAS_TST
  using TRIM_USB2_REFBIAS_TST = ftl::mmio::Field<2, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // TRIM_PLL_CTRL0_DIV_SEL
  using TRIM_PLL_CTRL0_DIV_SEL = ftl::mmio::Field<3, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // TRIM_USB_REG_ENV_TAIL_ADJ_VD
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // TRIM_USBPHY_TX_D_CAL
  using TRIM_USBPHY_TX_D_CAL = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // TRIM_USBPHY_TX_CAL45DP
  using TRIM_USBPHY_TX_CAL45DP = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  // TRIM_USBPHY_TX_CAL45DN
  using TRIM_USBPHY_TX_CAL45DN = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
};  // struct TRIM_OVERRIDE_EN_TOG_fields_

struct TRIM_OVERRIDE_EN_TOG : ftl::mmio::Register<
    kBase + 0x13Cu,
    std::uint32_t,
    0x0000007Fu,
    ftl::mmio::RW,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_DIV_SEL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_TX_D_CAL_OVERRIDE,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_TX_CAL45DP_OVERRIDE,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_TX_CAL45DN_OVERRIDE,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_REFBIAS_TST_OVERRIDE,
    ftl::mmio::Reserved<3, 7>,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USB2_REFBIAS_VBGADJ,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USB2_REFBIAS_TST,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_PLL_CTRL0_DIV_SEL,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USBPHY_TX_D_CAL,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USBPHY_TX_CAL45DP,
    typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USBPHY_TX_CAL45DN> {
  using TRIM_DIV_SEL_OVERRIDE = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_DIV_SEL_OVERRIDE;
  using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
  using TRIM_TX_D_CAL_OVERRIDE = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_TX_D_CAL_OVERRIDE;
  using TRIM_TX_CAL45DP_OVERRIDE = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_TX_CAL45DP_OVERRIDE;
  using TRIM_TX_CAL45DN_OVERRIDE = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_TX_CAL45DN_OVERRIDE;
  using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_REFBIAS_VBGADJ_OVERRIDE;
  using TRIM_REFBIAS_TST_OVERRIDE = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_REFBIAS_TST_OVERRIDE;
  using TRIM_USB2_REFBIAS_VBGADJ = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USB2_REFBIAS_VBGADJ;
  using TRIM_USB2_REFBIAS_TST = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USB2_REFBIAS_TST;
  using TRIM_PLL_CTRL0_DIV_SEL = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_PLL_CTRL0_DIV_SEL;
  using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
  using TRIM_USBPHY_TX_D_CAL = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USBPHY_TX_D_CAL;
  using TRIM_USBPHY_TX_CAL45DP = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USBPHY_TX_CAL45DP;
  using TRIM_USBPHY_TX_CAL45DN = typename TRIM_OVERRIDE_EN_TOG_fields_::TRIM_USBPHY_TX_CAL45DN;
};
};

}  // namespace regs