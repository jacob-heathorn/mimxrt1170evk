#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// USBPHY
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Usbphy {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Usbphy: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40434000u :
      Instance == 2u ? 0x40438000u :
      0u;

  // USB PHY Power-Down Register
  struct PwdFields {
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
  };  // struct PwdFields

  struct PWD : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x001E1C00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename PwdFields::TXPWDFS,
      typename PwdFields::TXPWDIBIAS,
      typename PwdFields::TXPWDV2I,
      ftl::mmio::Reserved<4, 13>,
      typename PwdFields::RXPWDENV,
      typename PwdFields::RXPWD1PT1,
      typename PwdFields::RXPWDDIFF,
      typename PwdFields::RXPWDRX,
      ftl::mmio::Reserved<11, 21>> {
    using eTXPWDFS = typename PwdFields::eTXPWDFS;
    using eTXPWDIBIAS = typename PwdFields::eTXPWDIBIAS;
    using eTXPWDV2I = typename PwdFields::eTXPWDV2I;
    using eRXPWDENV = typename PwdFields::eRXPWDENV;
    using eRXPWD1PT1 = typename PwdFields::eRXPWD1PT1;
    using eRXPWDDIFF = typename PwdFields::eRXPWDDIFF;
    using eRXPWDRX = typename PwdFields::eRXPWDRX;
    using TXPWDFS = typename PwdFields::TXPWDFS;
    using TXPWDIBIAS = typename PwdFields::TXPWDIBIAS;
    using TXPWDV2I = typename PwdFields::TXPWDV2I;
    using RXPWDENV = typename PwdFields::RXPWDENV;
    using RXPWD1PT1 = typename PwdFields::RXPWD1PT1;
    using RXPWDDIFF = typename PwdFields::RXPWDDIFF;
    using RXPWDRX = typename PwdFields::RXPWDRX;
  };

  // USB PHY Power-Down Register
  struct PwdSetFields {
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
  };  // struct PwdSetFields

  struct PWD_SET : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x001E1C00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename PwdSetFields::TXPWDFS,
      typename PwdSetFields::TXPWDIBIAS,
      typename PwdSetFields::TXPWDV2I,
      ftl::mmio::Reserved<4, 13>,
      typename PwdSetFields::RXPWDENV,
      typename PwdSetFields::RXPWD1PT1,
      typename PwdSetFields::RXPWDDIFF,
      typename PwdSetFields::RXPWDRX,
      ftl::mmio::Reserved<11, 21>> {
    using TXPWDFS = typename PwdSetFields::TXPWDFS;
    using TXPWDIBIAS = typename PwdSetFields::TXPWDIBIAS;
    using TXPWDV2I = typename PwdSetFields::TXPWDV2I;
    using RXPWDENV = typename PwdSetFields::RXPWDENV;
    using RXPWD1PT1 = typename PwdSetFields::RXPWD1PT1;
    using RXPWDDIFF = typename PwdSetFields::RXPWDDIFF;
    using RXPWDRX = typename PwdSetFields::RXPWDRX;
  };

  // USB PHY Power-Down Register
  struct PwdClrFields {
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
  };  // struct PwdClrFields

  struct PWD_CLR : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x001E1C00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename PwdClrFields::TXPWDFS,
      typename PwdClrFields::TXPWDIBIAS,
      typename PwdClrFields::TXPWDV2I,
      ftl::mmio::Reserved<4, 13>,
      typename PwdClrFields::RXPWDENV,
      typename PwdClrFields::RXPWD1PT1,
      typename PwdClrFields::RXPWDDIFF,
      typename PwdClrFields::RXPWDRX,
      ftl::mmio::Reserved<11, 21>> {
    using TXPWDFS = typename PwdClrFields::TXPWDFS;
    using TXPWDIBIAS = typename PwdClrFields::TXPWDIBIAS;
    using TXPWDV2I = typename PwdClrFields::TXPWDV2I;
    using RXPWDENV = typename PwdClrFields::RXPWDENV;
    using RXPWD1PT1 = typename PwdClrFields::RXPWD1PT1;
    using RXPWDDIFF = typename PwdClrFields::RXPWDDIFF;
    using RXPWDRX = typename PwdClrFields::RXPWDRX;
  };

  // USB PHY Power-Down Register
  struct PwdTogFields {
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
  };  // struct PwdTogFields

  struct PWD_TOG : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x001E1C00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename PwdTogFields::TXPWDFS,
      typename PwdTogFields::TXPWDIBIAS,
      typename PwdTogFields::TXPWDV2I,
      ftl::mmio::Reserved<4, 13>,
      typename PwdTogFields::RXPWDENV,
      typename PwdTogFields::RXPWD1PT1,
      typename PwdTogFields::RXPWDDIFF,
      typename PwdTogFields::RXPWDRX,
      ftl::mmio::Reserved<11, 21>> {
    using TXPWDFS = typename PwdTogFields::TXPWDFS;
    using TXPWDIBIAS = typename PwdTogFields::TXPWDIBIAS;
    using TXPWDV2I = typename PwdTogFields::TXPWDV2I;
    using RXPWDENV = typename PwdTogFields::RXPWDENV;
    using RXPWD1PT1 = typename PwdTogFields::RXPWD1PT1;
    using RXPWDDIFF = typename PwdTogFields::RXPWDDIFF;
    using RXPWDRX = typename PwdTogFields::RXPWDRX;
  };

  // USB PHY Transmitter Control Register
  struct TxFields {
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
  };  // struct TxFields

  struct TX : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x10060607u,
      ftl::mmio::RW,
      typename TxFields::D_CAL,
      ftl::mmio::Reserved<4, 4>,
      typename TxFields::TXCAL45DN,
      ftl::mmio::Reserved<4, 12>,
      typename TxFields::TXCAL45DP,
      ftl::mmio::Reserved<12, 20>> {
    using eD_CAL = typename TxFields::eD_CAL;
    using D_CAL = typename TxFields::D_CAL;
    using TXCAL45DN = typename TxFields::TXCAL45DN;
    using TXCAL45DP = typename TxFields::TXCAL45DP;
  };

  // USB PHY Transmitter Control Register
  struct TxSetFields {
    // D_CAL
    using D_CAL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // TXCAL45DN
    using TXCAL45DN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // TXCAL45DP
    using TXCAL45DP = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct TxSetFields

  struct TX_SET : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x10060607u,
      ftl::mmio::RW,
      typename TxSetFields::D_CAL,
      ftl::mmio::Reserved<4, 4>,
      typename TxSetFields::TXCAL45DN,
      ftl::mmio::Reserved<4, 12>,
      typename TxSetFields::TXCAL45DP,
      ftl::mmio::Reserved<12, 20>> {
    using D_CAL = typename TxSetFields::D_CAL;
    using TXCAL45DN = typename TxSetFields::TXCAL45DN;
    using TXCAL45DP = typename TxSetFields::TXCAL45DP;
  };

  // USB PHY Transmitter Control Register
  struct TxClrFields {
    // D_CAL
    using D_CAL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TXCAL45DN
    using TXCAL45DN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TXCAL45DP
    using TXCAL45DP = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct TxClrFields

  struct TX_CLR : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x10060607u,
      ftl::mmio::RW,
      typename TxClrFields::D_CAL,
      ftl::mmio::Reserved<4, 4>,
      typename TxClrFields::TXCAL45DN,
      ftl::mmio::Reserved<4, 12>,
      typename TxClrFields::TXCAL45DP,
      ftl::mmio::Reserved<12, 20>> {
    using D_CAL = typename TxClrFields::D_CAL;
    using TXCAL45DN = typename TxClrFields::TXCAL45DN;
    using TXCAL45DP = typename TxClrFields::TXCAL45DP;
  };

  // USB PHY Transmitter Control Register
  struct TxTogFields {
    // D_CAL
    using D_CAL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // TXCAL45DN
    using TXCAL45DN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // TXCAL45DP
    using TXCAL45DP = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct TxTogFields

  struct TX_TOG : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x10060607u,
      ftl::mmio::RW,
      typename TxTogFields::D_CAL,
      ftl::mmio::Reserved<4, 4>,
      typename TxTogFields::TXCAL45DN,
      ftl::mmio::Reserved<4, 12>,
      typename TxTogFields::TXCAL45DP,
      ftl::mmio::Reserved<12, 20>> {
    using D_CAL = typename TxTogFields::D_CAL;
    using TXCAL45DN = typename TxTogFields::TXCAL45DN;
    using TXCAL45DP = typename TxTogFields::TXCAL45DP;
  };

  // USB PHY Receiver Control Register
  struct RxFields {
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
  };  // struct RxFields

  struct RX : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RxFields::ENVADJ,
      ftl::mmio::Reserved<1, 3>,
      typename RxFields::DISCONADJ,
      ftl::mmio::Reserved<15, 7>,
      typename RxFields::RXDBYPASS,
      ftl::mmio::Reserved<9, 23>> {
    using eENVADJ = typename RxFields::eENVADJ;
    using eDISCONADJ = typename RxFields::eDISCONADJ;
    using eRXDBYPASS = typename RxFields::eRXDBYPASS;
    using ENVADJ = typename RxFields::ENVADJ;
    using DISCONADJ = typename RxFields::DISCONADJ;
    using RXDBYPASS = typename RxFields::RXDBYPASS;
  };

  // USB PHY Receiver Control Register
  struct RxSetFields {
    // ENVADJ
    using ENVADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // DISCONADJ
    using DISCONADJ = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // RXDBYPASS
    using RXDBYPASS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct RxSetFields

  struct RX_SET : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RxSetFields::ENVADJ,
      ftl::mmio::Reserved<1, 3>,
      typename RxSetFields::DISCONADJ,
      ftl::mmio::Reserved<15, 7>,
      typename RxSetFields::RXDBYPASS,
      ftl::mmio::Reserved<9, 23>> {
    using ENVADJ = typename RxSetFields::ENVADJ;
    using DISCONADJ = typename RxSetFields::DISCONADJ;
    using RXDBYPASS = typename RxSetFields::RXDBYPASS;
  };

  // USB PHY Receiver Control Register
  struct RxClrFields {
    // ENVADJ
    using ENVADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // DISCONADJ
    using DISCONADJ = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // RXDBYPASS
    using RXDBYPASS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct RxClrFields

  struct RX_CLR : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RxClrFields::ENVADJ,
      ftl::mmio::Reserved<1, 3>,
      typename RxClrFields::DISCONADJ,
      ftl::mmio::Reserved<15, 7>,
      typename RxClrFields::RXDBYPASS,
      ftl::mmio::Reserved<9, 23>> {
    using ENVADJ = typename RxClrFields::ENVADJ;
    using DISCONADJ = typename RxClrFields::DISCONADJ;
    using RXDBYPASS = typename RxClrFields::RXDBYPASS;
  };

  // USB PHY Receiver Control Register
  struct RxTogFields {
    // ENVADJ
    using ENVADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // DISCONADJ
    using DISCONADJ = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // RXDBYPASS
    using RXDBYPASS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct RxTogFields

  struct RX_TOG : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename RxTogFields::ENVADJ,
      ftl::mmio::Reserved<1, 3>,
      typename RxTogFields::DISCONADJ,
      ftl::mmio::Reserved<15, 7>,
      typename RxTogFields::RXDBYPASS,
      ftl::mmio::Reserved<9, 23>> {
    using ENVADJ = typename RxTogFields::ENVADJ;
    using DISCONADJ = typename RxTogFields::DISCONADJ;
    using RXDBYPASS = typename RxTogFields::RXDBYPASS;
  };

  // USB PHY General Control Register
  struct CtrlFields {
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
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x88000000u,
      ftl::mmio::RW,
      typename CtrlFields::ENOTG_ID_CHG_IRQ,
      typename CtrlFields::ENHOSTDISCONDETECT,
      typename CtrlFields::ENIRQHOSTDISCON,
      typename CtrlFields::HOSTDISCONDETECT_IRQ,
      typename CtrlFields::ENDEVPLUGINDETECT,
      typename CtrlFields::DEVPLUGIN_POLARITY,
      typename CtrlFields::OTG_ID_CHG_IRQ,
      typename CtrlFields::ENOTGIDDETECT,
      typename CtrlFields::RESUMEIRQSTICKY,
      typename CtrlFields::ENIRQRESUMEDETECT,
      typename CtrlFields::RESUME_IRQ,
      typename CtrlFields::ENIRQDEVPLUGIN,
      typename CtrlFields::DEVPLUGIN_IRQ,
      ftl::mmio::Reserved<1, 13>,
      typename CtrlFields::ENUTMILEVEL2,
      typename CtrlFields::ENUTMILEVEL3,
      typename CtrlFields::ENIRQWAKEUP,
      typename CtrlFields::WAKEUP_IRQ,
      typename CtrlFields::AUTORESUME_EN,
      typename CtrlFields::ENAUTOCLR_CLKGATE,
      typename CtrlFields::ENAUTOCLR_PHY_PWD,
      typename CtrlFields::ENDPDMCHG_WKUP,
      typename CtrlFields::ENIDCHG_WKUP,
      typename CtrlFields::ENVBUSCHG_WKUP,
      typename CtrlFields::FSDLL_RST_EN,
      ftl::mmio::Reserved<2, 25>,
      typename CtrlFields::OTG_ID_VALUE,
      typename CtrlFields::HOST_FORCE_LS_SE0,
      typename CtrlFields::UTMI_SUSPENDM,
      typename CtrlFields::CLKGATE,
      typename CtrlFields::SFTRST> {
    using eENDEVPLUGINDETECT = typename CtrlFields::eENDEVPLUGINDETECT;
    using ENOTG_ID_CHG_IRQ = typename CtrlFields::ENOTG_ID_CHG_IRQ;
    using ENHOSTDISCONDETECT = typename CtrlFields::ENHOSTDISCONDETECT;
    using ENIRQHOSTDISCON = typename CtrlFields::ENIRQHOSTDISCON;
    using HOSTDISCONDETECT_IRQ = typename CtrlFields::HOSTDISCONDETECT_IRQ;
    using ENDEVPLUGINDETECT = typename CtrlFields::ENDEVPLUGINDETECT;
    using DEVPLUGIN_POLARITY = typename CtrlFields::DEVPLUGIN_POLARITY;
    using OTG_ID_CHG_IRQ = typename CtrlFields::OTG_ID_CHG_IRQ;
    using ENOTGIDDETECT = typename CtrlFields::ENOTGIDDETECT;
    using RESUMEIRQSTICKY = typename CtrlFields::RESUMEIRQSTICKY;
    using ENIRQRESUMEDETECT = typename CtrlFields::ENIRQRESUMEDETECT;
    using RESUME_IRQ = typename CtrlFields::RESUME_IRQ;
    using ENIRQDEVPLUGIN = typename CtrlFields::ENIRQDEVPLUGIN;
    using DEVPLUGIN_IRQ = typename CtrlFields::DEVPLUGIN_IRQ;
    using ENUTMILEVEL2 = typename CtrlFields::ENUTMILEVEL2;
    using ENUTMILEVEL3 = typename CtrlFields::ENUTMILEVEL3;
    using ENIRQWAKEUP = typename CtrlFields::ENIRQWAKEUP;
    using WAKEUP_IRQ = typename CtrlFields::WAKEUP_IRQ;
    using AUTORESUME_EN = typename CtrlFields::AUTORESUME_EN;
    using ENAUTOCLR_CLKGATE = typename CtrlFields::ENAUTOCLR_CLKGATE;
    using ENAUTOCLR_PHY_PWD = typename CtrlFields::ENAUTOCLR_PHY_PWD;
    using ENDPDMCHG_WKUP = typename CtrlFields::ENDPDMCHG_WKUP;
    using ENIDCHG_WKUP = typename CtrlFields::ENIDCHG_WKUP;
    using ENVBUSCHG_WKUP = typename CtrlFields::ENVBUSCHG_WKUP;
    using FSDLL_RST_EN = typename CtrlFields::FSDLL_RST_EN;
    using OTG_ID_VALUE = typename CtrlFields::OTG_ID_VALUE;
    using HOST_FORCE_LS_SE0 = typename CtrlFields::HOST_FORCE_LS_SE0;
    using UTMI_SUSPENDM = typename CtrlFields::UTMI_SUSPENDM;
    using CLKGATE = typename CtrlFields::CLKGATE;
    using SFTRST = typename CtrlFields::SFTRST;
  };

  // USB PHY General Control Register
  struct CtrlSetFields {
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
  };  // struct CtrlSetFields

  struct CTRL_SET : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x88000000u,
      ftl::mmio::RW,
      typename CtrlSetFields::ENOTG_ID_CHG_IRQ,
      typename CtrlSetFields::ENHOSTDISCONDETECT,
      typename CtrlSetFields::ENIRQHOSTDISCON,
      typename CtrlSetFields::HOSTDISCONDETECT_IRQ,
      typename CtrlSetFields::ENDEVPLUGINDETECT,
      typename CtrlSetFields::DEVPLUGIN_POLARITY,
      typename CtrlSetFields::OTG_ID_CHG_IRQ,
      typename CtrlSetFields::ENOTGIDDETECT,
      typename CtrlSetFields::RESUMEIRQSTICKY,
      typename CtrlSetFields::ENIRQRESUMEDETECT,
      typename CtrlSetFields::RESUME_IRQ,
      typename CtrlSetFields::ENIRQDEVPLUGIN,
      typename CtrlSetFields::DEVPLUGIN_IRQ,
      ftl::mmio::Reserved<1, 13>,
      typename CtrlSetFields::ENUTMILEVEL2,
      typename CtrlSetFields::ENUTMILEVEL3,
      typename CtrlSetFields::ENIRQWAKEUP,
      typename CtrlSetFields::WAKEUP_IRQ,
      typename CtrlSetFields::AUTORESUME_EN,
      typename CtrlSetFields::ENAUTOCLR_CLKGATE,
      typename CtrlSetFields::ENAUTOCLR_PHY_PWD,
      typename CtrlSetFields::ENDPDMCHG_WKUP,
      typename CtrlSetFields::ENIDCHG_WKUP,
      typename CtrlSetFields::ENVBUSCHG_WKUP,
      typename CtrlSetFields::FSDLL_RST_EN,
      ftl::mmio::Reserved<2, 25>,
      typename CtrlSetFields::OTG_ID_VALUE,
      typename CtrlSetFields::HOST_FORCE_LS_SE0,
      typename CtrlSetFields::UTMI_SUSPENDM,
      typename CtrlSetFields::CLKGATE,
      typename CtrlSetFields::SFTRST> {
    using ENOTG_ID_CHG_IRQ = typename CtrlSetFields::ENOTG_ID_CHG_IRQ;
    using ENHOSTDISCONDETECT = typename CtrlSetFields::ENHOSTDISCONDETECT;
    using ENIRQHOSTDISCON = typename CtrlSetFields::ENIRQHOSTDISCON;
    using HOSTDISCONDETECT_IRQ = typename CtrlSetFields::HOSTDISCONDETECT_IRQ;
    using ENDEVPLUGINDETECT = typename CtrlSetFields::ENDEVPLUGINDETECT;
    using DEVPLUGIN_POLARITY = typename CtrlSetFields::DEVPLUGIN_POLARITY;
    using OTG_ID_CHG_IRQ = typename CtrlSetFields::OTG_ID_CHG_IRQ;
    using ENOTGIDDETECT = typename CtrlSetFields::ENOTGIDDETECT;
    using RESUMEIRQSTICKY = typename CtrlSetFields::RESUMEIRQSTICKY;
    using ENIRQRESUMEDETECT = typename CtrlSetFields::ENIRQRESUMEDETECT;
    using RESUME_IRQ = typename CtrlSetFields::RESUME_IRQ;
    using ENIRQDEVPLUGIN = typename CtrlSetFields::ENIRQDEVPLUGIN;
    using DEVPLUGIN_IRQ = typename CtrlSetFields::DEVPLUGIN_IRQ;
    using ENUTMILEVEL2 = typename CtrlSetFields::ENUTMILEVEL2;
    using ENUTMILEVEL3 = typename CtrlSetFields::ENUTMILEVEL3;
    using ENIRQWAKEUP = typename CtrlSetFields::ENIRQWAKEUP;
    using WAKEUP_IRQ = typename CtrlSetFields::WAKEUP_IRQ;
    using AUTORESUME_EN = typename CtrlSetFields::AUTORESUME_EN;
    using ENAUTOCLR_CLKGATE = typename CtrlSetFields::ENAUTOCLR_CLKGATE;
    using ENAUTOCLR_PHY_PWD = typename CtrlSetFields::ENAUTOCLR_PHY_PWD;
    using ENDPDMCHG_WKUP = typename CtrlSetFields::ENDPDMCHG_WKUP;
    using ENIDCHG_WKUP = typename CtrlSetFields::ENIDCHG_WKUP;
    using ENVBUSCHG_WKUP = typename CtrlSetFields::ENVBUSCHG_WKUP;
    using FSDLL_RST_EN = typename CtrlSetFields::FSDLL_RST_EN;
    using OTG_ID_VALUE = typename CtrlSetFields::OTG_ID_VALUE;
    using HOST_FORCE_LS_SE0 = typename CtrlSetFields::HOST_FORCE_LS_SE0;
    using UTMI_SUSPENDM = typename CtrlSetFields::UTMI_SUSPENDM;
    using CLKGATE = typename CtrlSetFields::CLKGATE;
    using SFTRST = typename CtrlSetFields::SFTRST;
  };

  // USB PHY General Control Register
  struct CtrlClrFields {
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
  };  // struct CtrlClrFields

  struct CTRL_CLR : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x88000000u,
      ftl::mmio::RW,
      typename CtrlClrFields::ENOTG_ID_CHG_IRQ,
      typename CtrlClrFields::ENHOSTDISCONDETECT,
      typename CtrlClrFields::ENIRQHOSTDISCON,
      typename CtrlClrFields::HOSTDISCONDETECT_IRQ,
      typename CtrlClrFields::ENDEVPLUGINDETECT,
      typename CtrlClrFields::DEVPLUGIN_POLARITY,
      typename CtrlClrFields::OTG_ID_CHG_IRQ,
      typename CtrlClrFields::ENOTGIDDETECT,
      typename CtrlClrFields::RESUMEIRQSTICKY,
      typename CtrlClrFields::ENIRQRESUMEDETECT,
      typename CtrlClrFields::RESUME_IRQ,
      typename CtrlClrFields::ENIRQDEVPLUGIN,
      typename CtrlClrFields::DEVPLUGIN_IRQ,
      ftl::mmio::Reserved<1, 13>,
      typename CtrlClrFields::ENUTMILEVEL2,
      typename CtrlClrFields::ENUTMILEVEL3,
      typename CtrlClrFields::ENIRQWAKEUP,
      typename CtrlClrFields::WAKEUP_IRQ,
      typename CtrlClrFields::AUTORESUME_EN,
      typename CtrlClrFields::ENAUTOCLR_CLKGATE,
      typename CtrlClrFields::ENAUTOCLR_PHY_PWD,
      typename CtrlClrFields::ENDPDMCHG_WKUP,
      typename CtrlClrFields::ENIDCHG_WKUP,
      typename CtrlClrFields::ENVBUSCHG_WKUP,
      typename CtrlClrFields::FSDLL_RST_EN,
      ftl::mmio::Reserved<2, 25>,
      typename CtrlClrFields::OTG_ID_VALUE,
      typename CtrlClrFields::HOST_FORCE_LS_SE0,
      typename CtrlClrFields::UTMI_SUSPENDM,
      typename CtrlClrFields::CLKGATE,
      typename CtrlClrFields::SFTRST> {
    using ENOTG_ID_CHG_IRQ = typename CtrlClrFields::ENOTG_ID_CHG_IRQ;
    using ENHOSTDISCONDETECT = typename CtrlClrFields::ENHOSTDISCONDETECT;
    using ENIRQHOSTDISCON = typename CtrlClrFields::ENIRQHOSTDISCON;
    using HOSTDISCONDETECT_IRQ = typename CtrlClrFields::HOSTDISCONDETECT_IRQ;
    using ENDEVPLUGINDETECT = typename CtrlClrFields::ENDEVPLUGINDETECT;
    using DEVPLUGIN_POLARITY = typename CtrlClrFields::DEVPLUGIN_POLARITY;
    using OTG_ID_CHG_IRQ = typename CtrlClrFields::OTG_ID_CHG_IRQ;
    using ENOTGIDDETECT = typename CtrlClrFields::ENOTGIDDETECT;
    using RESUMEIRQSTICKY = typename CtrlClrFields::RESUMEIRQSTICKY;
    using ENIRQRESUMEDETECT = typename CtrlClrFields::ENIRQRESUMEDETECT;
    using RESUME_IRQ = typename CtrlClrFields::RESUME_IRQ;
    using ENIRQDEVPLUGIN = typename CtrlClrFields::ENIRQDEVPLUGIN;
    using DEVPLUGIN_IRQ = typename CtrlClrFields::DEVPLUGIN_IRQ;
    using ENUTMILEVEL2 = typename CtrlClrFields::ENUTMILEVEL2;
    using ENUTMILEVEL3 = typename CtrlClrFields::ENUTMILEVEL3;
    using ENIRQWAKEUP = typename CtrlClrFields::ENIRQWAKEUP;
    using WAKEUP_IRQ = typename CtrlClrFields::WAKEUP_IRQ;
    using AUTORESUME_EN = typename CtrlClrFields::AUTORESUME_EN;
    using ENAUTOCLR_CLKGATE = typename CtrlClrFields::ENAUTOCLR_CLKGATE;
    using ENAUTOCLR_PHY_PWD = typename CtrlClrFields::ENAUTOCLR_PHY_PWD;
    using ENDPDMCHG_WKUP = typename CtrlClrFields::ENDPDMCHG_WKUP;
    using ENIDCHG_WKUP = typename CtrlClrFields::ENIDCHG_WKUP;
    using ENVBUSCHG_WKUP = typename CtrlClrFields::ENVBUSCHG_WKUP;
    using FSDLL_RST_EN = typename CtrlClrFields::FSDLL_RST_EN;
    using OTG_ID_VALUE = typename CtrlClrFields::OTG_ID_VALUE;
    using HOST_FORCE_LS_SE0 = typename CtrlClrFields::HOST_FORCE_LS_SE0;
    using UTMI_SUSPENDM = typename CtrlClrFields::UTMI_SUSPENDM;
    using CLKGATE = typename CtrlClrFields::CLKGATE;
    using SFTRST = typename CtrlClrFields::SFTRST;
  };

  // USB PHY General Control Register
  struct CtrlTogFields {
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
  };  // struct CtrlTogFields

  struct CTRL_TOG : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0x88000000u,
      ftl::mmio::RW,
      typename CtrlTogFields::ENOTG_ID_CHG_IRQ,
      typename CtrlTogFields::ENHOSTDISCONDETECT,
      typename CtrlTogFields::ENIRQHOSTDISCON,
      typename CtrlTogFields::HOSTDISCONDETECT_IRQ,
      typename CtrlTogFields::ENDEVPLUGINDETECT,
      typename CtrlTogFields::DEVPLUGIN_POLARITY,
      typename CtrlTogFields::OTG_ID_CHG_IRQ,
      typename CtrlTogFields::ENOTGIDDETECT,
      typename CtrlTogFields::RESUMEIRQSTICKY,
      typename CtrlTogFields::ENIRQRESUMEDETECT,
      typename CtrlTogFields::RESUME_IRQ,
      typename CtrlTogFields::ENIRQDEVPLUGIN,
      typename CtrlTogFields::DEVPLUGIN_IRQ,
      ftl::mmio::Reserved<1, 13>,
      typename CtrlTogFields::ENUTMILEVEL2,
      typename CtrlTogFields::ENUTMILEVEL3,
      typename CtrlTogFields::ENIRQWAKEUP,
      typename CtrlTogFields::WAKEUP_IRQ,
      typename CtrlTogFields::AUTORESUME_EN,
      typename CtrlTogFields::ENAUTOCLR_CLKGATE,
      typename CtrlTogFields::ENAUTOCLR_PHY_PWD,
      typename CtrlTogFields::ENDPDMCHG_WKUP,
      typename CtrlTogFields::ENIDCHG_WKUP,
      typename CtrlTogFields::ENVBUSCHG_WKUP,
      typename CtrlTogFields::FSDLL_RST_EN,
      ftl::mmio::Reserved<2, 25>,
      typename CtrlTogFields::OTG_ID_VALUE,
      typename CtrlTogFields::HOST_FORCE_LS_SE0,
      typename CtrlTogFields::UTMI_SUSPENDM,
      typename CtrlTogFields::CLKGATE,
      typename CtrlTogFields::SFTRST> {
    using ENOTG_ID_CHG_IRQ = typename CtrlTogFields::ENOTG_ID_CHG_IRQ;
    using ENHOSTDISCONDETECT = typename CtrlTogFields::ENHOSTDISCONDETECT;
    using ENIRQHOSTDISCON = typename CtrlTogFields::ENIRQHOSTDISCON;
    using HOSTDISCONDETECT_IRQ = typename CtrlTogFields::HOSTDISCONDETECT_IRQ;
    using ENDEVPLUGINDETECT = typename CtrlTogFields::ENDEVPLUGINDETECT;
    using DEVPLUGIN_POLARITY = typename CtrlTogFields::DEVPLUGIN_POLARITY;
    using OTG_ID_CHG_IRQ = typename CtrlTogFields::OTG_ID_CHG_IRQ;
    using ENOTGIDDETECT = typename CtrlTogFields::ENOTGIDDETECT;
    using RESUMEIRQSTICKY = typename CtrlTogFields::RESUMEIRQSTICKY;
    using ENIRQRESUMEDETECT = typename CtrlTogFields::ENIRQRESUMEDETECT;
    using RESUME_IRQ = typename CtrlTogFields::RESUME_IRQ;
    using ENIRQDEVPLUGIN = typename CtrlTogFields::ENIRQDEVPLUGIN;
    using DEVPLUGIN_IRQ = typename CtrlTogFields::DEVPLUGIN_IRQ;
    using ENUTMILEVEL2 = typename CtrlTogFields::ENUTMILEVEL2;
    using ENUTMILEVEL3 = typename CtrlTogFields::ENUTMILEVEL3;
    using ENIRQWAKEUP = typename CtrlTogFields::ENIRQWAKEUP;
    using WAKEUP_IRQ = typename CtrlTogFields::WAKEUP_IRQ;
    using AUTORESUME_EN = typename CtrlTogFields::AUTORESUME_EN;
    using ENAUTOCLR_CLKGATE = typename CtrlTogFields::ENAUTOCLR_CLKGATE;
    using ENAUTOCLR_PHY_PWD = typename CtrlTogFields::ENAUTOCLR_PHY_PWD;
    using ENDPDMCHG_WKUP = typename CtrlTogFields::ENDPDMCHG_WKUP;
    using ENIDCHG_WKUP = typename CtrlTogFields::ENIDCHG_WKUP;
    using ENVBUSCHG_WKUP = typename CtrlTogFields::ENVBUSCHG_WKUP;
    using FSDLL_RST_EN = typename CtrlTogFields::FSDLL_RST_EN;
    using OTG_ID_VALUE = typename CtrlTogFields::OTG_ID_VALUE;
    using HOST_FORCE_LS_SE0 = typename CtrlTogFields::HOST_FORCE_LS_SE0;
    using UTMI_SUSPENDM = typename CtrlTogFields::UTMI_SUSPENDM;
    using CLKGATE = typename CtrlTogFields::CLKGATE;
    using SFTRST = typename CtrlTogFields::SFTRST;
  };

  // USB PHY Status Register
  struct StatusFields {
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
  };  // struct StatusFields

  struct STATUS : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      typename StatusFields::HOSTDISCONDETECT_STATUS,
      ftl::mmio::Reserved<2, 4>,
      typename StatusFields::DEVPLUGIN_STATUS,
      ftl::mmio::Reserved<1, 7>,
      typename StatusFields::OTGID_STATUS,
      ftl::mmio::Reserved<1, 9>,
      typename StatusFields::RESUME_STATUS,
      ftl::mmio::Reserved<21, 11>> {
    using eHOSTDISCONDETECT_STATUS = typename StatusFields::eHOSTDISCONDETECT_STATUS;
    using eDEVPLUGIN_STATUS = typename StatusFields::eDEVPLUGIN_STATUS;
    using HOSTDISCONDETECT_STATUS = typename StatusFields::HOSTDISCONDETECT_STATUS;
    using DEVPLUGIN_STATUS = typename StatusFields::DEVPLUGIN_STATUS;
    using OTGID_STATUS = typename StatusFields::OTGID_STATUS;
    using RESUME_STATUS = typename StatusFields::RESUME_STATUS;
  };

  // USB PHY Debug Register
  struct DebugFields {
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
  };  // struct DebugFields

  struct DEBUG : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x7F180000u,
      ftl::mmio::RW,
      typename DebugFields::OTGIDPIOLOCK,
      typename DebugFields::DEBUG_INTERFACE_HOLD,
      typename DebugFields::HSTPULLDOWN,
      typename DebugFields::ENHSTPULLDOWN,
      ftl::mmio::Reserved<2, 6>,
      typename DebugFields::TX2RXCOUNT,
      typename DebugFields::ENTX2RXCOUNT,
      ftl::mmio::Reserved<3, 13>,
      typename DebugFields::SQUELCHRESETCOUNT,
      ftl::mmio::Reserved<3, 21>,
      typename DebugFields::ENSQUELCHRESET,
      typename DebugFields::SQUELCHRESETLENGTH,
      typename DebugFields::HOST_RESUME_DEBUG,
      typename DebugFields::CLKGATE,
      ftl::mmio::Reserved<1, 31>> {
    using OTGIDPIOLOCK = typename DebugFields::OTGIDPIOLOCK;
    using DEBUG_INTERFACE_HOLD = typename DebugFields::DEBUG_INTERFACE_HOLD;
    using HSTPULLDOWN = typename DebugFields::HSTPULLDOWN;
    using ENHSTPULLDOWN = typename DebugFields::ENHSTPULLDOWN;
    using TX2RXCOUNT = typename DebugFields::TX2RXCOUNT;
    using ENTX2RXCOUNT = typename DebugFields::ENTX2RXCOUNT;
    using SQUELCHRESETCOUNT = typename DebugFields::SQUELCHRESETCOUNT;
    using ENSQUELCHRESET = typename DebugFields::ENSQUELCHRESET;
    using SQUELCHRESETLENGTH = typename DebugFields::SQUELCHRESETLENGTH;
    using HOST_RESUME_DEBUG = typename DebugFields::HOST_RESUME_DEBUG;
    using CLKGATE = typename DebugFields::CLKGATE;
  };

  // USB PHY Debug Register
  struct DebugSetFields {
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
  };  // struct DebugSetFields

  struct DEBUG_SET : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint32_t,
      0x7F180000u,
      ftl::mmio::RW,
      typename DebugSetFields::OTGIDPIOLOCK,
      typename DebugSetFields::DEBUG_INTERFACE_HOLD,
      typename DebugSetFields::HSTPULLDOWN,
      typename DebugSetFields::ENHSTPULLDOWN,
      ftl::mmio::Reserved<2, 6>,
      typename DebugSetFields::TX2RXCOUNT,
      typename DebugSetFields::ENTX2RXCOUNT,
      ftl::mmio::Reserved<3, 13>,
      typename DebugSetFields::SQUELCHRESETCOUNT,
      ftl::mmio::Reserved<3, 21>,
      typename DebugSetFields::ENSQUELCHRESET,
      typename DebugSetFields::SQUELCHRESETLENGTH,
      typename DebugSetFields::HOST_RESUME_DEBUG,
      typename DebugSetFields::CLKGATE,
      ftl::mmio::Reserved<1, 31>> {
    using OTGIDPIOLOCK = typename DebugSetFields::OTGIDPIOLOCK;
    using DEBUG_INTERFACE_HOLD = typename DebugSetFields::DEBUG_INTERFACE_HOLD;
    using HSTPULLDOWN = typename DebugSetFields::HSTPULLDOWN;
    using ENHSTPULLDOWN = typename DebugSetFields::ENHSTPULLDOWN;
    using TX2RXCOUNT = typename DebugSetFields::TX2RXCOUNT;
    using ENTX2RXCOUNT = typename DebugSetFields::ENTX2RXCOUNT;
    using SQUELCHRESETCOUNT = typename DebugSetFields::SQUELCHRESETCOUNT;
    using ENSQUELCHRESET = typename DebugSetFields::ENSQUELCHRESET;
    using SQUELCHRESETLENGTH = typename DebugSetFields::SQUELCHRESETLENGTH;
    using HOST_RESUME_DEBUG = typename DebugSetFields::HOST_RESUME_DEBUG;
    using CLKGATE = typename DebugSetFields::CLKGATE;
  };

  // USB PHY Debug Register
  struct DebugClrFields {
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
  };  // struct DebugClrFields

  struct DEBUG_CLR : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x7F180000u,
      ftl::mmio::RW,
      typename DebugClrFields::OTGIDPIOLOCK,
      typename DebugClrFields::DEBUG_INTERFACE_HOLD,
      typename DebugClrFields::HSTPULLDOWN,
      typename DebugClrFields::ENHSTPULLDOWN,
      ftl::mmio::Reserved<2, 6>,
      typename DebugClrFields::TX2RXCOUNT,
      typename DebugClrFields::ENTX2RXCOUNT,
      ftl::mmio::Reserved<3, 13>,
      typename DebugClrFields::SQUELCHRESETCOUNT,
      ftl::mmio::Reserved<3, 21>,
      typename DebugClrFields::ENSQUELCHRESET,
      typename DebugClrFields::SQUELCHRESETLENGTH,
      typename DebugClrFields::HOST_RESUME_DEBUG,
      typename DebugClrFields::CLKGATE,
      ftl::mmio::Reserved<1, 31>> {
    using OTGIDPIOLOCK = typename DebugClrFields::OTGIDPIOLOCK;
    using DEBUG_INTERFACE_HOLD = typename DebugClrFields::DEBUG_INTERFACE_HOLD;
    using HSTPULLDOWN = typename DebugClrFields::HSTPULLDOWN;
    using ENHSTPULLDOWN = typename DebugClrFields::ENHSTPULLDOWN;
    using TX2RXCOUNT = typename DebugClrFields::TX2RXCOUNT;
    using ENTX2RXCOUNT = typename DebugClrFields::ENTX2RXCOUNT;
    using SQUELCHRESETCOUNT = typename DebugClrFields::SQUELCHRESETCOUNT;
    using ENSQUELCHRESET = typename DebugClrFields::ENSQUELCHRESET;
    using SQUELCHRESETLENGTH = typename DebugClrFields::SQUELCHRESETLENGTH;
    using HOST_RESUME_DEBUG = typename DebugClrFields::HOST_RESUME_DEBUG;
    using CLKGATE = typename DebugClrFields::CLKGATE;
  };

  // USB PHY Debug Register
  struct DebugTogFields {
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
  };  // struct DebugTogFields

  struct DEBUG_TOG : ftl::mmio::Register<
      kBase + 0x5Cu,
      std::uint32_t,
      0x7F180000u,
      ftl::mmio::RW,
      typename DebugTogFields::OTGIDPIOLOCK,
      typename DebugTogFields::DEBUG_INTERFACE_HOLD,
      typename DebugTogFields::HSTPULLDOWN,
      typename DebugTogFields::ENHSTPULLDOWN,
      ftl::mmio::Reserved<2, 6>,
      typename DebugTogFields::TX2RXCOUNT,
      typename DebugTogFields::ENTX2RXCOUNT,
      ftl::mmio::Reserved<3, 13>,
      typename DebugTogFields::SQUELCHRESETCOUNT,
      ftl::mmio::Reserved<3, 21>,
      typename DebugTogFields::ENSQUELCHRESET,
      typename DebugTogFields::SQUELCHRESETLENGTH,
      typename DebugTogFields::HOST_RESUME_DEBUG,
      typename DebugTogFields::CLKGATE,
      ftl::mmio::Reserved<1, 31>> {
    using OTGIDPIOLOCK = typename DebugTogFields::OTGIDPIOLOCK;
    using DEBUG_INTERFACE_HOLD = typename DebugTogFields::DEBUG_INTERFACE_HOLD;
    using HSTPULLDOWN = typename DebugTogFields::HSTPULLDOWN;
    using ENHSTPULLDOWN = typename DebugTogFields::ENHSTPULLDOWN;
    using TX2RXCOUNT = typename DebugTogFields::TX2RXCOUNT;
    using ENTX2RXCOUNT = typename DebugTogFields::ENTX2RXCOUNT;
    using SQUELCHRESETCOUNT = typename DebugTogFields::SQUELCHRESETCOUNT;
    using ENSQUELCHRESET = typename DebugTogFields::ENSQUELCHRESET;
    using SQUELCHRESETLENGTH = typename DebugTogFields::SQUELCHRESETLENGTH;
    using HOST_RESUME_DEBUG = typename DebugTogFields::HOST_RESUME_DEBUG;
    using CLKGATE = typename DebugTogFields::CLKGATE;
  };

  // UTMI Debug Status Register 0
  struct Debug0StatusFields {
    // LOOP_BACK_FAIL_COUNT
    using LOOP_BACK_FAIL_COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // UTMI_RXERROR_FAIL_COUNT
    using UTMI_RXERROR_FAIL_COUNT = ftl::mmio::Field<10, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // SQUELCH_COUNT
    using SQUELCH_COUNT = ftl::mmio::Field<6, 26, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Debug0StatusFields

  struct DEBUG0_STATUS : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Debug0StatusFields::LOOP_BACK_FAIL_COUNT,
      typename Debug0StatusFields::UTMI_RXERROR_FAIL_COUNT,
      typename Debug0StatusFields::SQUELCH_COUNT> {
    using LOOP_BACK_FAIL_COUNT = typename Debug0StatusFields::LOOP_BACK_FAIL_COUNT;
    using UTMI_RXERROR_FAIL_COUNT = typename Debug0StatusFields::UTMI_RXERROR_FAIL_COUNT;
    using SQUELCH_COUNT = typename Debug0StatusFields::SQUELCH_COUNT;
  };

  // UTMI Debug Status Register 1
  struct Debug1Fields {
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
  };  // struct Debug1Fields

  struct DEBUG1 : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00001000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<13, 0>,
      typename Debug1Fields::ENTAILADJVD,
      typename Debug1Fields::USB2_REFBIAS_SELFBIASOFF,
      typename Debug1Fields::USB2_REFBIAS_PWDVBGUP,
      typename Debug1Fields::USB2_REFBIAS_LOWPWR,
      typename Debug1Fields::USB2_REFBIAS_VBGADJ,
      typename Debug1Fields::USB2_REFBIAS_TST,
      ftl::mmio::Reserved<9, 23>> {
    using eENTAILADJVD = typename Debug1Fields::eENTAILADJVD;
    using ENTAILADJVD = typename Debug1Fields::ENTAILADJVD;
    using USB2_REFBIAS_SELFBIASOFF = typename Debug1Fields::USB2_REFBIAS_SELFBIASOFF;
    using USB2_REFBIAS_PWDVBGUP = typename Debug1Fields::USB2_REFBIAS_PWDVBGUP;
    using USB2_REFBIAS_LOWPWR = typename Debug1Fields::USB2_REFBIAS_LOWPWR;
    using USB2_REFBIAS_VBGADJ = typename Debug1Fields::USB2_REFBIAS_VBGADJ;
    using USB2_REFBIAS_TST = typename Debug1Fields::USB2_REFBIAS_TST;
  };

  // UTMI Debug Status Register 1
  struct Debug1SetFields {
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
  };  // struct Debug1SetFields

  struct DEBUG1_SET : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint32_t,
      0x00001000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<13, 0>,
      typename Debug1SetFields::ENTAILADJVD,
      typename Debug1SetFields::USB2_REFBIAS_SELFBIASOFF,
      typename Debug1SetFields::USB2_REFBIAS_PWDVBGUP,
      typename Debug1SetFields::USB2_REFBIAS_LOWPWR,
      typename Debug1SetFields::USB2_REFBIAS_VBGADJ,
      typename Debug1SetFields::USB2_REFBIAS_TST,
      ftl::mmio::Reserved<9, 23>> {
    using ENTAILADJVD = typename Debug1SetFields::ENTAILADJVD;
    using USB2_REFBIAS_SELFBIASOFF = typename Debug1SetFields::USB2_REFBIAS_SELFBIASOFF;
    using USB2_REFBIAS_PWDVBGUP = typename Debug1SetFields::USB2_REFBIAS_PWDVBGUP;
    using USB2_REFBIAS_LOWPWR = typename Debug1SetFields::USB2_REFBIAS_LOWPWR;
    using USB2_REFBIAS_VBGADJ = typename Debug1SetFields::USB2_REFBIAS_VBGADJ;
    using USB2_REFBIAS_TST = typename Debug1SetFields::USB2_REFBIAS_TST;
  };

  // UTMI Debug Status Register 1
  struct Debug1ClrFields {
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
  };  // struct Debug1ClrFields

  struct DEBUG1_CLR : ftl::mmio::Register<
      kBase + 0x78u,
      std::uint32_t,
      0x00001000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<13, 0>,
      typename Debug1ClrFields::ENTAILADJVD,
      typename Debug1ClrFields::USB2_REFBIAS_SELFBIASOFF,
      typename Debug1ClrFields::USB2_REFBIAS_PWDVBGUP,
      typename Debug1ClrFields::USB2_REFBIAS_LOWPWR,
      typename Debug1ClrFields::USB2_REFBIAS_VBGADJ,
      typename Debug1ClrFields::USB2_REFBIAS_TST,
      ftl::mmio::Reserved<9, 23>> {
    using ENTAILADJVD = typename Debug1ClrFields::ENTAILADJVD;
    using USB2_REFBIAS_SELFBIASOFF = typename Debug1ClrFields::USB2_REFBIAS_SELFBIASOFF;
    using USB2_REFBIAS_PWDVBGUP = typename Debug1ClrFields::USB2_REFBIAS_PWDVBGUP;
    using USB2_REFBIAS_LOWPWR = typename Debug1ClrFields::USB2_REFBIAS_LOWPWR;
    using USB2_REFBIAS_VBGADJ = typename Debug1ClrFields::USB2_REFBIAS_VBGADJ;
    using USB2_REFBIAS_TST = typename Debug1ClrFields::USB2_REFBIAS_TST;
  };

  // UTMI Debug Status Register 1
  struct Debug1TogFields {
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
  };  // struct Debug1TogFields

  struct DEBUG1_TOG : ftl::mmio::Register<
      kBase + 0x7Cu,
      std::uint32_t,
      0x00001000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<13, 0>,
      typename Debug1TogFields::ENTAILADJVD,
      typename Debug1TogFields::USB2_REFBIAS_SELFBIASOFF,
      typename Debug1TogFields::USB2_REFBIAS_PWDVBGUP,
      typename Debug1TogFields::USB2_REFBIAS_LOWPWR,
      typename Debug1TogFields::USB2_REFBIAS_VBGADJ,
      typename Debug1TogFields::USB2_REFBIAS_TST,
      ftl::mmio::Reserved<9, 23>> {
    using ENTAILADJVD = typename Debug1TogFields::ENTAILADJVD;
    using USB2_REFBIAS_SELFBIASOFF = typename Debug1TogFields::USB2_REFBIAS_SELFBIASOFF;
    using USB2_REFBIAS_PWDVBGUP = typename Debug1TogFields::USB2_REFBIAS_PWDVBGUP;
    using USB2_REFBIAS_LOWPWR = typename Debug1TogFields::USB2_REFBIAS_LOWPWR;
    using USB2_REFBIAS_VBGADJ = typename Debug1TogFields::USB2_REFBIAS_VBGADJ;
    using USB2_REFBIAS_TST = typename Debug1TogFields::USB2_REFBIAS_TST;
  };

  // UTMI RTL Version
  struct VersionFields {
    // STEP
    using STEP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // MINOR
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // MAJOR
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VersionFields

  struct VERSION : ftl::mmio::Register<
      kBase + 0x80u,
      std::uint32_t,
      0x04030000u,
      ftl::mmio::RO,
      typename VersionFields::STEP,
      typename VersionFields::MINOR,
      typename VersionFields::MAJOR> {
    using STEP = typename VersionFields::STEP;
    using MINOR = typename VersionFields::MINOR;
    using MAJOR = typename VersionFields::MAJOR;
  };

  // USB PHY PLL Control/Status Register
  struct PllSicFields {
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
  };  // struct PllSicFields

  struct PLL_SIC : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint32_t,
      0x00D12000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename PllSicFields::PLL_POSTDIV,
      ftl::mmio::Reserved<1, 5>,
      typename PllSicFields::PLL_EN_USB_CLKS,
      ftl::mmio::Reserved<5, 7>,
      typename PllSicFields::PLL_POWER,
      typename PllSicFields::PLL_ENABLE,
      ftl::mmio::Reserved<2, 14>,
      typename PllSicFields::PLL_BYPASS,
      ftl::mmio::Reserved<2, 17>,
      typename PllSicFields::REFBIAS_PWD_SEL,
      typename PllSicFields::REFBIAS_PWD,
      typename PllSicFields::PLL_REG_ENABLE,
      typename PllSicFields::PLL_DIV_SEL,
      ftl::mmio::Reserved<6, 25>,
      typename PllSicFields::PLL_LOCK> {
    using eREFBIAS_PWD_SEL = typename PllSicFields::eREFBIAS_PWD_SEL;
    using ePLL_DIV_SEL = typename PllSicFields::ePLL_DIV_SEL;
    using ePLL_LOCK = typename PllSicFields::ePLL_LOCK;
    using PLL_POSTDIV = typename PllSicFields::PLL_POSTDIV;
    using PLL_EN_USB_CLKS = typename PllSicFields::PLL_EN_USB_CLKS;
    using PLL_POWER = typename PllSicFields::PLL_POWER;
    using PLL_ENABLE = typename PllSicFields::PLL_ENABLE;
    using PLL_BYPASS = typename PllSicFields::PLL_BYPASS;
    using REFBIAS_PWD_SEL = typename PllSicFields::REFBIAS_PWD_SEL;
    using REFBIAS_PWD = typename PllSicFields::REFBIAS_PWD;
    using PLL_REG_ENABLE = typename PllSicFields::PLL_REG_ENABLE;
    using PLL_DIV_SEL = typename PllSicFields::PLL_DIV_SEL;
    using PLL_LOCK = typename PllSicFields::PLL_LOCK;
  };

  // USB PHY PLL Control/Status Register
  struct PllSicSetFields {
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
  };  // struct PllSicSetFields

  struct PLL_SIC_SET : ftl::mmio::Register<
      kBase + 0xA4u,
      std::uint32_t,
      0x00D12000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename PllSicSetFields::PLL_POSTDIV,
      ftl::mmio::Reserved<1, 5>,
      typename PllSicSetFields::PLL_EN_USB_CLKS,
      ftl::mmio::Reserved<5, 7>,
      typename PllSicSetFields::PLL_POWER,
      typename PllSicSetFields::PLL_ENABLE,
      ftl::mmio::Reserved<2, 14>,
      typename PllSicSetFields::PLL_BYPASS,
      ftl::mmio::Reserved<2, 17>,
      typename PllSicSetFields::REFBIAS_PWD_SEL,
      typename PllSicSetFields::REFBIAS_PWD,
      typename PllSicSetFields::PLL_REG_ENABLE,
      typename PllSicSetFields::PLL_DIV_SEL,
      ftl::mmio::Reserved<6, 25>,
      typename PllSicSetFields::PLL_LOCK> {
    using PLL_POSTDIV = typename PllSicSetFields::PLL_POSTDIV;
    using PLL_EN_USB_CLKS = typename PllSicSetFields::PLL_EN_USB_CLKS;
    using PLL_POWER = typename PllSicSetFields::PLL_POWER;
    using PLL_ENABLE = typename PllSicSetFields::PLL_ENABLE;
    using PLL_BYPASS = typename PllSicSetFields::PLL_BYPASS;
    using REFBIAS_PWD_SEL = typename PllSicSetFields::REFBIAS_PWD_SEL;
    using REFBIAS_PWD = typename PllSicSetFields::REFBIAS_PWD;
    using PLL_REG_ENABLE = typename PllSicSetFields::PLL_REG_ENABLE;
    using PLL_DIV_SEL = typename PllSicSetFields::PLL_DIV_SEL;
    using PLL_LOCK = typename PllSicSetFields::PLL_LOCK;
  };

  // USB PHY PLL Control/Status Register
  struct PllSicClrFields {
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
  };  // struct PllSicClrFields

  struct PLL_SIC_CLR : ftl::mmio::Register<
      kBase + 0xA8u,
      std::uint32_t,
      0x00D12000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename PllSicClrFields::PLL_POSTDIV,
      ftl::mmio::Reserved<1, 5>,
      typename PllSicClrFields::PLL_EN_USB_CLKS,
      ftl::mmio::Reserved<5, 7>,
      typename PllSicClrFields::PLL_POWER,
      typename PllSicClrFields::PLL_ENABLE,
      ftl::mmio::Reserved<2, 14>,
      typename PllSicClrFields::PLL_BYPASS,
      ftl::mmio::Reserved<2, 17>,
      typename PllSicClrFields::REFBIAS_PWD_SEL,
      typename PllSicClrFields::REFBIAS_PWD,
      typename PllSicClrFields::PLL_REG_ENABLE,
      typename PllSicClrFields::PLL_DIV_SEL,
      ftl::mmio::Reserved<6, 25>,
      typename PllSicClrFields::PLL_LOCK> {
    using PLL_POSTDIV = typename PllSicClrFields::PLL_POSTDIV;
    using PLL_EN_USB_CLKS = typename PllSicClrFields::PLL_EN_USB_CLKS;
    using PLL_POWER = typename PllSicClrFields::PLL_POWER;
    using PLL_ENABLE = typename PllSicClrFields::PLL_ENABLE;
    using PLL_BYPASS = typename PllSicClrFields::PLL_BYPASS;
    using REFBIAS_PWD_SEL = typename PllSicClrFields::REFBIAS_PWD_SEL;
    using REFBIAS_PWD = typename PllSicClrFields::REFBIAS_PWD;
    using PLL_REG_ENABLE = typename PllSicClrFields::PLL_REG_ENABLE;
    using PLL_DIV_SEL = typename PllSicClrFields::PLL_DIV_SEL;
    using PLL_LOCK = typename PllSicClrFields::PLL_LOCK;
  };

  // USB PHY PLL Control/Status Register
  struct PllSicTogFields {
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
  };  // struct PllSicTogFields

  struct PLL_SIC_TOG : ftl::mmio::Register<
      kBase + 0xACu,
      std::uint32_t,
      0x00D12000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename PllSicTogFields::PLL_POSTDIV,
      ftl::mmio::Reserved<1, 5>,
      typename PllSicTogFields::PLL_EN_USB_CLKS,
      ftl::mmio::Reserved<5, 7>,
      typename PllSicTogFields::PLL_POWER,
      typename PllSicTogFields::PLL_ENABLE,
      ftl::mmio::Reserved<2, 14>,
      typename PllSicTogFields::PLL_BYPASS,
      ftl::mmio::Reserved<2, 17>,
      typename PllSicTogFields::REFBIAS_PWD_SEL,
      typename PllSicTogFields::REFBIAS_PWD,
      typename PllSicTogFields::PLL_REG_ENABLE,
      typename PllSicTogFields::PLL_DIV_SEL,
      ftl::mmio::Reserved<6, 25>,
      typename PllSicTogFields::PLL_LOCK> {
    using PLL_POSTDIV = typename PllSicTogFields::PLL_POSTDIV;
    using PLL_EN_USB_CLKS = typename PllSicTogFields::PLL_EN_USB_CLKS;
    using PLL_POWER = typename PllSicTogFields::PLL_POWER;
    using PLL_ENABLE = typename PllSicTogFields::PLL_ENABLE;
    using PLL_BYPASS = typename PllSicTogFields::PLL_BYPASS;
    using REFBIAS_PWD_SEL = typename PllSicTogFields::REFBIAS_PWD_SEL;
    using REFBIAS_PWD = typename PllSicTogFields::REFBIAS_PWD;
    using PLL_REG_ENABLE = typename PllSicTogFields::PLL_REG_ENABLE;
    using PLL_DIV_SEL = typename PllSicTogFields::PLL_DIV_SEL;
    using PLL_LOCK = typename PllSicTogFields::PLL_LOCK;
  };

  // USB PHY VBUS Detect Control Register
  struct Usb1VbusDetectFields {
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
  };  // struct Usb1VbusDetectFields

  struct USB1_VBUS_DETECT : ftl::mmio::Register<
      kBase + 0xC0u,
      std::uint32_t,
      0x00700004u,
      ftl::mmio::RW,
      typename Usb1VbusDetectFields::VBUSVALID_THRESH,
      typename Usb1VbusDetectFields::VBUS_OVERRIDE_EN,
      typename Usb1VbusDetectFields::SESSEND_OVERRIDE,
      typename Usb1VbusDetectFields::BVALID_OVERRIDE,
      typename Usb1VbusDetectFields::AVALID_OVERRIDE,
      typename Usb1VbusDetectFields::VBUSVALID_OVERRIDE,
      typename Usb1VbusDetectFields::VBUSVALID_SEL,
      typename Usb1VbusDetectFields::VBUS_SOURCE_SEL,
      typename Usb1VbusDetectFields::ID_OVERRIDE_EN,
      typename Usb1VbusDetectFields::ID_OVERRIDE,
      ftl::mmio::Reserved<5, 13>,
      typename Usb1VbusDetectFields::VBUSVALID_TO_SESSVALID,
      ftl::mmio::Reserved<1, 19>,
      typename Usb1VbusDetectFields::PWRUP_CMPS,
      ftl::mmio::Reserved<3, 23>,
      typename Usb1VbusDetectFields::DISCHARGE_VBUS,
      ftl::mmio::Reserved<4, 27>,
      typename Usb1VbusDetectFields::EN_CHARGER_RESISTOR> {
    using eVBUSVALID_THRESH = typename Usb1VbusDetectFields::eVBUSVALID_THRESH;
    using eVBUS_OVERRIDE_EN = typename Usb1VbusDetectFields::eVBUS_OVERRIDE_EN;
    using eVBUSVALID_SEL = typename Usb1VbusDetectFields::eVBUSVALID_SEL;
    using eVBUS_SOURCE_SEL = typename Usb1VbusDetectFields::eVBUS_SOURCE_SEL;
    using eVBUSVALID_TO_SESSVALID = typename Usb1VbusDetectFields::eVBUSVALID_TO_SESSVALID;
    using ePWRUP_CMPS = typename Usb1VbusDetectFields::ePWRUP_CMPS;
    using eDISCHARGE_VBUS = typename Usb1VbusDetectFields::eDISCHARGE_VBUS;
    using eEN_CHARGER_RESISTOR = typename Usb1VbusDetectFields::eEN_CHARGER_RESISTOR;
    using VBUSVALID_THRESH = typename Usb1VbusDetectFields::VBUSVALID_THRESH;
    using VBUS_OVERRIDE_EN = typename Usb1VbusDetectFields::VBUS_OVERRIDE_EN;
    using SESSEND_OVERRIDE = typename Usb1VbusDetectFields::SESSEND_OVERRIDE;
    using BVALID_OVERRIDE = typename Usb1VbusDetectFields::BVALID_OVERRIDE;
    using AVALID_OVERRIDE = typename Usb1VbusDetectFields::AVALID_OVERRIDE;
    using VBUSVALID_OVERRIDE = typename Usb1VbusDetectFields::VBUSVALID_OVERRIDE;
    using VBUSVALID_SEL = typename Usb1VbusDetectFields::VBUSVALID_SEL;
    using VBUS_SOURCE_SEL = typename Usb1VbusDetectFields::VBUS_SOURCE_SEL;
    using ID_OVERRIDE_EN = typename Usb1VbusDetectFields::ID_OVERRIDE_EN;
    using ID_OVERRIDE = typename Usb1VbusDetectFields::ID_OVERRIDE;
    using VBUSVALID_TO_SESSVALID = typename Usb1VbusDetectFields::VBUSVALID_TO_SESSVALID;
    using PWRUP_CMPS = typename Usb1VbusDetectFields::PWRUP_CMPS;
    using DISCHARGE_VBUS = typename Usb1VbusDetectFields::DISCHARGE_VBUS;
    using EN_CHARGER_RESISTOR = typename Usb1VbusDetectFields::EN_CHARGER_RESISTOR;
  };

  // USB PHY VBUS Detect Control Register
  struct Usb1VbusDetectSetFields {
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
  };  // struct Usb1VbusDetectSetFields

  struct USB1_VBUS_DETECT_SET : ftl::mmio::Register<
      kBase + 0xC4u,
      std::uint32_t,
      0x00700004u,
      ftl::mmio::RW,
      typename Usb1VbusDetectSetFields::VBUSVALID_THRESH,
      typename Usb1VbusDetectSetFields::VBUS_OVERRIDE_EN,
      typename Usb1VbusDetectSetFields::SESSEND_OVERRIDE,
      typename Usb1VbusDetectSetFields::BVALID_OVERRIDE,
      typename Usb1VbusDetectSetFields::AVALID_OVERRIDE,
      typename Usb1VbusDetectSetFields::VBUSVALID_OVERRIDE,
      typename Usb1VbusDetectSetFields::VBUSVALID_SEL,
      typename Usb1VbusDetectSetFields::VBUS_SOURCE_SEL,
      typename Usb1VbusDetectSetFields::ID_OVERRIDE_EN,
      typename Usb1VbusDetectSetFields::ID_OVERRIDE,
      ftl::mmio::Reserved<5, 13>,
      typename Usb1VbusDetectSetFields::VBUSVALID_TO_SESSVALID,
      ftl::mmio::Reserved<1, 19>,
      typename Usb1VbusDetectSetFields::PWRUP_CMPS,
      ftl::mmio::Reserved<3, 23>,
      typename Usb1VbusDetectSetFields::DISCHARGE_VBUS,
      ftl::mmio::Reserved<4, 27>,
      typename Usb1VbusDetectSetFields::EN_CHARGER_RESISTOR> {
    using VBUSVALID_THRESH = typename Usb1VbusDetectSetFields::VBUSVALID_THRESH;
    using VBUS_OVERRIDE_EN = typename Usb1VbusDetectSetFields::VBUS_OVERRIDE_EN;
    using SESSEND_OVERRIDE = typename Usb1VbusDetectSetFields::SESSEND_OVERRIDE;
    using BVALID_OVERRIDE = typename Usb1VbusDetectSetFields::BVALID_OVERRIDE;
    using AVALID_OVERRIDE = typename Usb1VbusDetectSetFields::AVALID_OVERRIDE;
    using VBUSVALID_OVERRIDE = typename Usb1VbusDetectSetFields::VBUSVALID_OVERRIDE;
    using VBUSVALID_SEL = typename Usb1VbusDetectSetFields::VBUSVALID_SEL;
    using VBUS_SOURCE_SEL = typename Usb1VbusDetectSetFields::VBUS_SOURCE_SEL;
    using ID_OVERRIDE_EN = typename Usb1VbusDetectSetFields::ID_OVERRIDE_EN;
    using ID_OVERRIDE = typename Usb1VbusDetectSetFields::ID_OVERRIDE;
    using VBUSVALID_TO_SESSVALID = typename Usb1VbusDetectSetFields::VBUSVALID_TO_SESSVALID;
    using PWRUP_CMPS = typename Usb1VbusDetectSetFields::PWRUP_CMPS;
    using DISCHARGE_VBUS = typename Usb1VbusDetectSetFields::DISCHARGE_VBUS;
    using EN_CHARGER_RESISTOR = typename Usb1VbusDetectSetFields::EN_CHARGER_RESISTOR;
  };

  // USB PHY VBUS Detect Control Register
  struct Usb1VbusDetectClrFields {
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
  };  // struct Usb1VbusDetectClrFields

  struct USB1_VBUS_DETECT_CLR : ftl::mmio::Register<
      kBase + 0xC8u,
      std::uint32_t,
      0x00700004u,
      ftl::mmio::RW,
      typename Usb1VbusDetectClrFields::VBUSVALID_THRESH,
      typename Usb1VbusDetectClrFields::VBUS_OVERRIDE_EN,
      typename Usb1VbusDetectClrFields::SESSEND_OVERRIDE,
      typename Usb1VbusDetectClrFields::BVALID_OVERRIDE,
      typename Usb1VbusDetectClrFields::AVALID_OVERRIDE,
      typename Usb1VbusDetectClrFields::VBUSVALID_OVERRIDE,
      typename Usb1VbusDetectClrFields::VBUSVALID_SEL,
      typename Usb1VbusDetectClrFields::VBUS_SOURCE_SEL,
      typename Usb1VbusDetectClrFields::ID_OVERRIDE_EN,
      typename Usb1VbusDetectClrFields::ID_OVERRIDE,
      ftl::mmio::Reserved<5, 13>,
      typename Usb1VbusDetectClrFields::VBUSVALID_TO_SESSVALID,
      ftl::mmio::Reserved<1, 19>,
      typename Usb1VbusDetectClrFields::PWRUP_CMPS,
      ftl::mmio::Reserved<3, 23>,
      typename Usb1VbusDetectClrFields::DISCHARGE_VBUS,
      ftl::mmio::Reserved<4, 27>,
      typename Usb1VbusDetectClrFields::EN_CHARGER_RESISTOR> {
    using VBUSVALID_THRESH = typename Usb1VbusDetectClrFields::VBUSVALID_THRESH;
    using VBUS_OVERRIDE_EN = typename Usb1VbusDetectClrFields::VBUS_OVERRIDE_EN;
    using SESSEND_OVERRIDE = typename Usb1VbusDetectClrFields::SESSEND_OVERRIDE;
    using BVALID_OVERRIDE = typename Usb1VbusDetectClrFields::BVALID_OVERRIDE;
    using AVALID_OVERRIDE = typename Usb1VbusDetectClrFields::AVALID_OVERRIDE;
    using VBUSVALID_OVERRIDE = typename Usb1VbusDetectClrFields::VBUSVALID_OVERRIDE;
    using VBUSVALID_SEL = typename Usb1VbusDetectClrFields::VBUSVALID_SEL;
    using VBUS_SOURCE_SEL = typename Usb1VbusDetectClrFields::VBUS_SOURCE_SEL;
    using ID_OVERRIDE_EN = typename Usb1VbusDetectClrFields::ID_OVERRIDE_EN;
    using ID_OVERRIDE = typename Usb1VbusDetectClrFields::ID_OVERRIDE;
    using VBUSVALID_TO_SESSVALID = typename Usb1VbusDetectClrFields::VBUSVALID_TO_SESSVALID;
    using PWRUP_CMPS = typename Usb1VbusDetectClrFields::PWRUP_CMPS;
    using DISCHARGE_VBUS = typename Usb1VbusDetectClrFields::DISCHARGE_VBUS;
    using EN_CHARGER_RESISTOR = typename Usb1VbusDetectClrFields::EN_CHARGER_RESISTOR;
  };

  // USB PHY VBUS Detect Control Register
  struct Usb1VbusDetectTogFields {
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
  };  // struct Usb1VbusDetectTogFields

  struct USB1_VBUS_DETECT_TOG : ftl::mmio::Register<
      kBase + 0xCCu,
      std::uint32_t,
      0x00700004u,
      ftl::mmio::RW,
      typename Usb1VbusDetectTogFields::VBUSVALID_THRESH,
      typename Usb1VbusDetectTogFields::VBUS_OVERRIDE_EN,
      typename Usb1VbusDetectTogFields::SESSEND_OVERRIDE,
      typename Usb1VbusDetectTogFields::BVALID_OVERRIDE,
      typename Usb1VbusDetectTogFields::AVALID_OVERRIDE,
      typename Usb1VbusDetectTogFields::VBUSVALID_OVERRIDE,
      typename Usb1VbusDetectTogFields::VBUSVALID_SEL,
      typename Usb1VbusDetectTogFields::VBUS_SOURCE_SEL,
      typename Usb1VbusDetectTogFields::ID_OVERRIDE_EN,
      typename Usb1VbusDetectTogFields::ID_OVERRIDE,
      ftl::mmio::Reserved<5, 13>,
      typename Usb1VbusDetectTogFields::VBUSVALID_TO_SESSVALID,
      ftl::mmio::Reserved<1, 19>,
      typename Usb1VbusDetectTogFields::PWRUP_CMPS,
      ftl::mmio::Reserved<3, 23>,
      typename Usb1VbusDetectTogFields::DISCHARGE_VBUS,
      ftl::mmio::Reserved<4, 27>,
      typename Usb1VbusDetectTogFields::EN_CHARGER_RESISTOR> {
    using VBUSVALID_THRESH = typename Usb1VbusDetectTogFields::VBUSVALID_THRESH;
    using VBUS_OVERRIDE_EN = typename Usb1VbusDetectTogFields::VBUS_OVERRIDE_EN;
    using SESSEND_OVERRIDE = typename Usb1VbusDetectTogFields::SESSEND_OVERRIDE;
    using BVALID_OVERRIDE = typename Usb1VbusDetectTogFields::BVALID_OVERRIDE;
    using AVALID_OVERRIDE = typename Usb1VbusDetectTogFields::AVALID_OVERRIDE;
    using VBUSVALID_OVERRIDE = typename Usb1VbusDetectTogFields::VBUSVALID_OVERRIDE;
    using VBUSVALID_SEL = typename Usb1VbusDetectTogFields::VBUSVALID_SEL;
    using VBUS_SOURCE_SEL = typename Usb1VbusDetectTogFields::VBUS_SOURCE_SEL;
    using ID_OVERRIDE_EN = typename Usb1VbusDetectTogFields::ID_OVERRIDE_EN;
    using ID_OVERRIDE = typename Usb1VbusDetectTogFields::ID_OVERRIDE;
    using VBUSVALID_TO_SESSVALID = typename Usb1VbusDetectTogFields::VBUSVALID_TO_SESSVALID;
    using PWRUP_CMPS = typename Usb1VbusDetectTogFields::PWRUP_CMPS;
    using DISCHARGE_VBUS = typename Usb1VbusDetectTogFields::DISCHARGE_VBUS;
    using EN_CHARGER_RESISTOR = typename Usb1VbusDetectTogFields::EN_CHARGER_RESISTOR;
  };

  // USB PHY VBUS Detector Status Register
  struct Usb1VbusDetStatFields {
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
  };  // struct Usb1VbusDetStatFields

  struct USB1_VBUS_DET_STAT : ftl::mmio::Register<
      kBase + 0xD0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Usb1VbusDetStatFields::SESSEND,
      typename Usb1VbusDetStatFields::BVALID,
      typename Usb1VbusDetStatFields::AVALID,
      typename Usb1VbusDetStatFields::VBUS_VALID,
      typename Usb1VbusDetStatFields::VBUS_VALID_3V,
      ftl::mmio::Reserved<27, 5>> {
    using eSESSEND = typename Usb1VbusDetStatFields::eSESSEND;
    using eBVALID = typename Usb1VbusDetStatFields::eBVALID;
    using eAVALID = typename Usb1VbusDetStatFields::eAVALID;
    using eVBUS_VALID = typename Usb1VbusDetStatFields::eVBUS_VALID;
    using eVBUS_VALID_3V = typename Usb1VbusDetStatFields::eVBUS_VALID_3V;
    using SESSEND = typename Usb1VbusDetStatFields::SESSEND;
    using BVALID = typename Usb1VbusDetStatFields::BVALID;
    using AVALID = typename Usb1VbusDetStatFields::AVALID;
    using VBUS_VALID = typename Usb1VbusDetStatFields::VBUS_VALID;
    using VBUS_VALID_3V = typename Usb1VbusDetStatFields::VBUS_VALID_3V;
  };

  // USB PHY Charger Detect Control Register
  struct Usb1ChrgDetectFields {
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
  };  // struct Usb1ChrgDetectFields

  struct USB1_CHRG_DETECT : ftl::mmio::Register<
      kBase + 0xE0u,
      std::uint32_t,
      0x80180000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename Usb1ChrgDetectFields::PULLUP_DP,
      ftl::mmio::Reserved<20, 3>,
      typename Usb1ChrgDetectFields::BGR_BIAS,
      ftl::mmio::Reserved<8, 24>> {
    using eBGR_BIAS = typename Usb1ChrgDetectFields::eBGR_BIAS;
    using PULLUP_DP = typename Usb1ChrgDetectFields::PULLUP_DP;
    using BGR_BIAS = typename Usb1ChrgDetectFields::BGR_BIAS;
  };

  // USB PHY Charger Detect Control Register
  struct Usb1ChrgDetectSetFields {
    // PULLUP_DP
    using PULLUP_DP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // BGR_BIAS
    using BGR_BIAS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Usb1ChrgDetectSetFields

  struct USB1_CHRG_DETECT_SET : ftl::mmio::Register<
      kBase + 0xE4u,
      std::uint32_t,
      0x80180000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename Usb1ChrgDetectSetFields::PULLUP_DP,
      ftl::mmio::Reserved<20, 3>,
      typename Usb1ChrgDetectSetFields::BGR_BIAS,
      ftl::mmio::Reserved<8, 24>> {
    using PULLUP_DP = typename Usb1ChrgDetectSetFields::PULLUP_DP;
    using BGR_BIAS = typename Usb1ChrgDetectSetFields::BGR_BIAS;
  };

  // USB PHY Charger Detect Control Register
  struct Usb1ChrgDetectClrFields {
    // PULLUP_DP
    using PULLUP_DP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // BGR_BIAS
    using BGR_BIAS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Usb1ChrgDetectClrFields

  struct USB1_CHRG_DETECT_CLR : ftl::mmio::Register<
      kBase + 0xE8u,
      std::uint32_t,
      0x80180000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename Usb1ChrgDetectClrFields::PULLUP_DP,
      ftl::mmio::Reserved<20, 3>,
      typename Usb1ChrgDetectClrFields::BGR_BIAS,
      ftl::mmio::Reserved<8, 24>> {
    using PULLUP_DP = typename Usb1ChrgDetectClrFields::PULLUP_DP;
    using BGR_BIAS = typename Usb1ChrgDetectClrFields::BGR_BIAS;
  };

  // USB PHY Charger Detect Control Register
  struct Usb1ChrgDetectTogFields {
    // PULLUP_DP
    using PULLUP_DP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // BGR_BIAS
    using BGR_BIAS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Usb1ChrgDetectTogFields

  struct USB1_CHRG_DETECT_TOG : ftl::mmio::Register<
      kBase + 0xECu,
      std::uint32_t,
      0x80180000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename Usb1ChrgDetectTogFields::PULLUP_DP,
      ftl::mmio::Reserved<20, 3>,
      typename Usb1ChrgDetectTogFields::BGR_BIAS,
      ftl::mmio::Reserved<8, 24>> {
    using PULLUP_DP = typename Usb1ChrgDetectTogFields::PULLUP_DP;
    using BGR_BIAS = typename Usb1ChrgDetectTogFields::BGR_BIAS;
  };

  // USB PHY Charger Detect Status Register
  struct Usb1ChrgDetStatFields {
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
  };  // struct Usb1ChrgDetStatFields

  struct USB1_CHRG_DET_STAT : ftl::mmio::Register<
      kBase + 0xF0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Usb1ChrgDetStatFields::PLUG_CONTACT,
      typename Usb1ChrgDetStatFields::CHRG_DETECTED,
      typename Usb1ChrgDetStatFields::DN_STATE,
      typename Usb1ChrgDetStatFields::DP_STATE,
      typename Usb1ChrgDetStatFields::SECDET_DCP,
      ftl::mmio::Reserved<27, 5>> {
    using ePLUG_CONTACT = typename Usb1ChrgDetStatFields::ePLUG_CONTACT;
    using eCHRG_DETECTED = typename Usb1ChrgDetStatFields::eCHRG_DETECTED;
    using eDN_STATE = typename Usb1ChrgDetStatFields::eDN_STATE;
    using eDP_STATE = typename Usb1ChrgDetStatFields::eDP_STATE;
    using eSECDET_DCP = typename Usb1ChrgDetStatFields::eSECDET_DCP;
    using PLUG_CONTACT = typename Usb1ChrgDetStatFields::PLUG_CONTACT;
    using CHRG_DETECTED = typename Usb1ChrgDetStatFields::CHRG_DETECTED;
    using DN_STATE = typename Usb1ChrgDetStatFields::DN_STATE;
    using DP_STATE = typename Usb1ChrgDetStatFields::DP_STATE;
    using SECDET_DCP = typename Usb1ChrgDetStatFields::SECDET_DCP;
  };

  // USB PHY Analog Control Register
  struct AnactrlFields {
    enum class eDEV_PULLDOWN : std::uint32_t {
      // The 15kohm nominal pulldowns on the DP and DN pinsare disabled in device mode.
      eDISABLE = 0,
      // The 15kohm nominal pulldowns on the DP and DN pinsare enabled in device mode.
      eENABLE = 1,
    };

    // DEV_PULLDOWN
    using DEV_PULLDOWN = ftl::mmio::Field<1, 10, eDEV_PULLDOWN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AnactrlFields

  struct ANACTRL : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint32_t,
      0x00000402u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename AnactrlFields::DEV_PULLDOWN,
      ftl::mmio::Reserved<21, 11>> {
    using eDEV_PULLDOWN = typename AnactrlFields::eDEV_PULLDOWN;
    using DEV_PULLDOWN = typename AnactrlFields::DEV_PULLDOWN;
  };

  // USB PHY Analog Control Register
  struct AnactrlSetFields {
    // DEV_PULLDOWN
    using DEV_PULLDOWN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct AnactrlSetFields

  struct ANACTRL_SET : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint32_t,
      0x00000402u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename AnactrlSetFields::DEV_PULLDOWN,
      ftl::mmio::Reserved<21, 11>> {
    using DEV_PULLDOWN = typename AnactrlSetFields::DEV_PULLDOWN;
  };

  // USB PHY Analog Control Register
  struct AnactrlClrFields {
    // DEV_PULLDOWN
    using DEV_PULLDOWN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct AnactrlClrFields

  struct ANACTRL_CLR : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint32_t,
      0x00000402u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename AnactrlClrFields::DEV_PULLDOWN,
      ftl::mmio::Reserved<21, 11>> {
    using DEV_PULLDOWN = typename AnactrlClrFields::DEV_PULLDOWN;
  };

  // USB PHY Analog Control Register
  struct AnactrlTogFields {
    // DEV_PULLDOWN
    using DEV_PULLDOWN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct AnactrlTogFields

  struct ANACTRL_TOG : ftl::mmio::Register<
      kBase + 0x10Cu,
      std::uint32_t,
      0x00000402u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      typename AnactrlTogFields::DEV_PULLDOWN,
      ftl::mmio::Reserved<21, 11>> {
    using DEV_PULLDOWN = typename AnactrlTogFields::DEV_PULLDOWN;
  };

  // USB PHY Loopback Control/Status Register
  struct Usb1LoopbackFields {
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
  };  // struct Usb1LoopbackFields

  struct USB1_LOOPBACK : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint32_t,
      0x00550000u,
      ftl::mmio::RW,
      typename Usb1LoopbackFields::UTMI_TESTSTART,
      typename Usb1LoopbackFields::UTMI_DIG_TST0,
      typename Usb1LoopbackFields::UTMI_DIG_TST1,
      typename Usb1LoopbackFields::TSTI_TX_HS_MODE,
      typename Usb1LoopbackFields::TSTI_TX_LS_MODE,
      typename Usb1LoopbackFields::TSTI_TX_EN,
      typename Usb1LoopbackFields::TSTI_TX_HIZ,
      typename Usb1LoopbackFields::UTMO_DIG_TST0,
      typename Usb1LoopbackFields::UTMO_DIG_TST1,
      ftl::mmio::Reserved<6, 9>,
      typename Usb1LoopbackFields::TSTI_HSFS_MODE_EN,
      typename Usb1LoopbackFields::TSTPKT,
      ftl::mmio::Reserved<8, 24>> {
    using UTMI_TESTSTART = typename Usb1LoopbackFields::UTMI_TESTSTART;
    using UTMI_DIG_TST0 = typename Usb1LoopbackFields::UTMI_DIG_TST0;
    using UTMI_DIG_TST1 = typename Usb1LoopbackFields::UTMI_DIG_TST1;
    using TSTI_TX_HS_MODE = typename Usb1LoopbackFields::TSTI_TX_HS_MODE;
    using TSTI_TX_LS_MODE = typename Usb1LoopbackFields::TSTI_TX_LS_MODE;
    using TSTI_TX_EN = typename Usb1LoopbackFields::TSTI_TX_EN;
    using TSTI_TX_HIZ = typename Usb1LoopbackFields::TSTI_TX_HIZ;
    using UTMO_DIG_TST0 = typename Usb1LoopbackFields::UTMO_DIG_TST0;
    using UTMO_DIG_TST1 = typename Usb1LoopbackFields::UTMO_DIG_TST1;
    using TSTI_HSFS_MODE_EN = typename Usb1LoopbackFields::TSTI_HSFS_MODE_EN;
    using TSTPKT = typename Usb1LoopbackFields::TSTPKT;
  };

  // USB PHY Loopback Control/Status Register
  struct Usb1LoopbackSetFields {
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
  };  // struct Usb1LoopbackSetFields

  struct USB1_LOOPBACK_SET : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint32_t,
      0x00550000u,
      ftl::mmio::RW,
      typename Usb1LoopbackSetFields::UTMI_TESTSTART,
      typename Usb1LoopbackSetFields::UTMI_DIG_TST0,
      typename Usb1LoopbackSetFields::UTMI_DIG_TST1,
      typename Usb1LoopbackSetFields::TSTI_TX_HS_MODE,
      typename Usb1LoopbackSetFields::TSTI_TX_LS_MODE,
      typename Usb1LoopbackSetFields::TSTI_TX_EN,
      typename Usb1LoopbackSetFields::TSTI_TX_HIZ,
      typename Usb1LoopbackSetFields::UTMO_DIG_TST0,
      typename Usb1LoopbackSetFields::UTMO_DIG_TST1,
      ftl::mmio::Reserved<6, 9>,
      typename Usb1LoopbackSetFields::TSTI_HSFS_MODE_EN,
      typename Usb1LoopbackSetFields::TSTPKT,
      ftl::mmio::Reserved<8, 24>> {
    using UTMI_TESTSTART = typename Usb1LoopbackSetFields::UTMI_TESTSTART;
    using UTMI_DIG_TST0 = typename Usb1LoopbackSetFields::UTMI_DIG_TST0;
    using UTMI_DIG_TST1 = typename Usb1LoopbackSetFields::UTMI_DIG_TST1;
    using TSTI_TX_HS_MODE = typename Usb1LoopbackSetFields::TSTI_TX_HS_MODE;
    using TSTI_TX_LS_MODE = typename Usb1LoopbackSetFields::TSTI_TX_LS_MODE;
    using TSTI_TX_EN = typename Usb1LoopbackSetFields::TSTI_TX_EN;
    using TSTI_TX_HIZ = typename Usb1LoopbackSetFields::TSTI_TX_HIZ;
    using UTMO_DIG_TST0 = typename Usb1LoopbackSetFields::UTMO_DIG_TST0;
    using UTMO_DIG_TST1 = typename Usb1LoopbackSetFields::UTMO_DIG_TST1;
    using TSTI_HSFS_MODE_EN = typename Usb1LoopbackSetFields::TSTI_HSFS_MODE_EN;
    using TSTPKT = typename Usb1LoopbackSetFields::TSTPKT;
  };

  // USB PHY Loopback Control/Status Register
  struct Usb1LoopbackClrFields {
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
  };  // struct Usb1LoopbackClrFields

  struct USB1_LOOPBACK_CLR : ftl::mmio::Register<
      kBase + 0x118u,
      std::uint32_t,
      0x00550000u,
      ftl::mmio::RW,
      typename Usb1LoopbackClrFields::UTMI_TESTSTART,
      typename Usb1LoopbackClrFields::UTMI_DIG_TST0,
      typename Usb1LoopbackClrFields::UTMI_DIG_TST1,
      typename Usb1LoopbackClrFields::TSTI_TX_HS_MODE,
      typename Usb1LoopbackClrFields::TSTI_TX_LS_MODE,
      typename Usb1LoopbackClrFields::TSTI_TX_EN,
      typename Usb1LoopbackClrFields::TSTI_TX_HIZ,
      typename Usb1LoopbackClrFields::UTMO_DIG_TST0,
      typename Usb1LoopbackClrFields::UTMO_DIG_TST1,
      ftl::mmio::Reserved<6, 9>,
      typename Usb1LoopbackClrFields::TSTI_HSFS_MODE_EN,
      typename Usb1LoopbackClrFields::TSTPKT,
      ftl::mmio::Reserved<8, 24>> {
    using UTMI_TESTSTART = typename Usb1LoopbackClrFields::UTMI_TESTSTART;
    using UTMI_DIG_TST0 = typename Usb1LoopbackClrFields::UTMI_DIG_TST0;
    using UTMI_DIG_TST1 = typename Usb1LoopbackClrFields::UTMI_DIG_TST1;
    using TSTI_TX_HS_MODE = typename Usb1LoopbackClrFields::TSTI_TX_HS_MODE;
    using TSTI_TX_LS_MODE = typename Usb1LoopbackClrFields::TSTI_TX_LS_MODE;
    using TSTI_TX_EN = typename Usb1LoopbackClrFields::TSTI_TX_EN;
    using TSTI_TX_HIZ = typename Usb1LoopbackClrFields::TSTI_TX_HIZ;
    using UTMO_DIG_TST0 = typename Usb1LoopbackClrFields::UTMO_DIG_TST0;
    using UTMO_DIG_TST1 = typename Usb1LoopbackClrFields::UTMO_DIG_TST1;
    using TSTI_HSFS_MODE_EN = typename Usb1LoopbackClrFields::TSTI_HSFS_MODE_EN;
    using TSTPKT = typename Usb1LoopbackClrFields::TSTPKT;
  };

  // USB PHY Loopback Control/Status Register
  struct Usb1LoopbackTogFields {
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
  };  // struct Usb1LoopbackTogFields

  struct USB1_LOOPBACK_TOG : ftl::mmio::Register<
      kBase + 0x11Cu,
      std::uint32_t,
      0x00550000u,
      ftl::mmio::RW,
      typename Usb1LoopbackTogFields::UTMI_TESTSTART,
      typename Usb1LoopbackTogFields::UTMI_DIG_TST0,
      typename Usb1LoopbackTogFields::UTMI_DIG_TST1,
      typename Usb1LoopbackTogFields::TSTI_TX_HS_MODE,
      typename Usb1LoopbackTogFields::TSTI_TX_LS_MODE,
      typename Usb1LoopbackTogFields::TSTI_TX_EN,
      typename Usb1LoopbackTogFields::TSTI_TX_HIZ,
      typename Usb1LoopbackTogFields::UTMO_DIG_TST0,
      typename Usb1LoopbackTogFields::UTMO_DIG_TST1,
      ftl::mmio::Reserved<6, 9>,
      typename Usb1LoopbackTogFields::TSTI_HSFS_MODE_EN,
      typename Usb1LoopbackTogFields::TSTPKT,
      ftl::mmio::Reserved<8, 24>> {
    using UTMI_TESTSTART = typename Usb1LoopbackTogFields::UTMI_TESTSTART;
    using UTMI_DIG_TST0 = typename Usb1LoopbackTogFields::UTMI_DIG_TST0;
    using UTMI_DIG_TST1 = typename Usb1LoopbackTogFields::UTMI_DIG_TST1;
    using TSTI_TX_HS_MODE = typename Usb1LoopbackTogFields::TSTI_TX_HS_MODE;
    using TSTI_TX_LS_MODE = typename Usb1LoopbackTogFields::TSTI_TX_LS_MODE;
    using TSTI_TX_EN = typename Usb1LoopbackTogFields::TSTI_TX_EN;
    using TSTI_TX_HIZ = typename Usb1LoopbackTogFields::TSTI_TX_HIZ;
    using UTMO_DIG_TST0 = typename Usb1LoopbackTogFields::UTMO_DIG_TST0;
    using UTMO_DIG_TST1 = typename Usb1LoopbackTogFields::UTMO_DIG_TST1;
    using TSTI_HSFS_MODE_EN = typename Usb1LoopbackTogFields::TSTI_HSFS_MODE_EN;
    using TSTPKT = typename Usb1LoopbackTogFields::TSTPKT;
  };

  // USB PHY Loopback Packet Number Select Register
  struct Usb1LoopbackHsfscntFields {
    // TSTI_HS_NUMBER
    using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TSTI_FS_NUMBER
    using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Usb1LoopbackHsfscntFields

  struct USB1_LOOPBACK_HSFSCNT : ftl::mmio::Register<
      kBase + 0x120u,
      std::uint32_t,
      0x00040010u,
      ftl::mmio::RW,
      typename Usb1LoopbackHsfscntFields::TSTI_HS_NUMBER,
      typename Usb1LoopbackHsfscntFields::TSTI_FS_NUMBER> {
    using TSTI_HS_NUMBER = typename Usb1LoopbackHsfscntFields::TSTI_HS_NUMBER;
    using TSTI_FS_NUMBER = typename Usb1LoopbackHsfscntFields::TSTI_FS_NUMBER;
  };

  // USB PHY Loopback Packet Number Select Register
  struct Usb1LoopbackHsfscntSetFields {
    // TSTI_HS_NUMBER
    using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // TSTI_FS_NUMBER
    using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Usb1LoopbackHsfscntSetFields

  struct USB1_LOOPBACK_HSFSCNT_SET : ftl::mmio::Register<
      kBase + 0x124u,
      std::uint32_t,
      0x00040010u,
      ftl::mmio::RW,
      typename Usb1LoopbackHsfscntSetFields::TSTI_HS_NUMBER,
      typename Usb1LoopbackHsfscntSetFields::TSTI_FS_NUMBER> {
    using TSTI_HS_NUMBER = typename Usb1LoopbackHsfscntSetFields::TSTI_HS_NUMBER;
    using TSTI_FS_NUMBER = typename Usb1LoopbackHsfscntSetFields::TSTI_FS_NUMBER;
  };

  // USB PHY Loopback Packet Number Select Register
  struct Usb1LoopbackHsfscntClrFields {
    // TSTI_HS_NUMBER
    using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TSTI_FS_NUMBER
    using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Usb1LoopbackHsfscntClrFields

  struct USB1_LOOPBACK_HSFSCNT_CLR : ftl::mmio::Register<
      kBase + 0x128u,
      std::uint32_t,
      0x00040010u,
      ftl::mmio::RW,
      typename Usb1LoopbackHsfscntClrFields::TSTI_HS_NUMBER,
      typename Usb1LoopbackHsfscntClrFields::TSTI_FS_NUMBER> {
    using TSTI_HS_NUMBER = typename Usb1LoopbackHsfscntClrFields::TSTI_HS_NUMBER;
    using TSTI_FS_NUMBER = typename Usb1LoopbackHsfscntClrFields::TSTI_FS_NUMBER;
  };

  // USB PHY Loopback Packet Number Select Register
  struct Usb1LoopbackHsfscntTogFields {
    // TSTI_HS_NUMBER
    using TSTI_HS_NUMBER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // TSTI_FS_NUMBER
    using TSTI_FS_NUMBER = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Usb1LoopbackHsfscntTogFields

  struct USB1_LOOPBACK_HSFSCNT_TOG : ftl::mmio::Register<
      kBase + 0x12Cu,
      std::uint32_t,
      0x00040010u,
      ftl::mmio::RW,
      typename Usb1LoopbackHsfscntTogFields::TSTI_HS_NUMBER,
      typename Usb1LoopbackHsfscntTogFields::TSTI_FS_NUMBER> {
    using TSTI_HS_NUMBER = typename Usb1LoopbackHsfscntTogFields::TSTI_HS_NUMBER;
    using TSTI_FS_NUMBER = typename Usb1LoopbackHsfscntTogFields::TSTI_FS_NUMBER;
  };

  // USB PHY Trim Override Enable Register
  struct TrimOverrideEnFields {
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
  };  // struct TrimOverrideEnFields

  struct TRIM_OVERRIDE_EN : ftl::mmio::Register<
      kBase + 0x130u,
      std::uint32_t,
      0x0000007Fu,
      ftl::mmio::RW,
      typename TrimOverrideEnFields::TRIM_DIV_SEL_OVERRIDE,
      typename TrimOverrideEnFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
      typename TrimOverrideEnFields::TRIM_TX_D_CAL_OVERRIDE,
      typename TrimOverrideEnFields::TRIM_TX_CAL45DP_OVERRIDE,
      typename TrimOverrideEnFields::TRIM_TX_CAL45DN_OVERRIDE,
      typename TrimOverrideEnFields::TRIM_REFBIAS_VBGADJ_OVERRIDE,
      typename TrimOverrideEnFields::TRIM_REFBIAS_TST_OVERRIDE,
      ftl::mmio::Reserved<3, 7>,
      typename TrimOverrideEnFields::TRIM_USB2_REFBIAS_VBGADJ,
      typename TrimOverrideEnFields::TRIM_USB2_REFBIAS_TST,
      typename TrimOverrideEnFields::TRIM_PLL_CTRL0_DIV_SEL,
      typename TrimOverrideEnFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
      typename TrimOverrideEnFields::TRIM_USBPHY_TX_D_CAL,
      typename TrimOverrideEnFields::TRIM_USBPHY_TX_CAL45DP,
      typename TrimOverrideEnFields::TRIM_USBPHY_TX_CAL45DN> {
    using TRIM_DIV_SEL_OVERRIDE = typename TrimOverrideEnFields::TRIM_DIV_SEL_OVERRIDE;
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TrimOverrideEnFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
    using TRIM_TX_D_CAL_OVERRIDE = typename TrimOverrideEnFields::TRIM_TX_D_CAL_OVERRIDE;
    using TRIM_TX_CAL45DP_OVERRIDE = typename TrimOverrideEnFields::TRIM_TX_CAL45DP_OVERRIDE;
    using TRIM_TX_CAL45DN_OVERRIDE = typename TrimOverrideEnFields::TRIM_TX_CAL45DN_OVERRIDE;
    using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TrimOverrideEnFields::TRIM_REFBIAS_VBGADJ_OVERRIDE;
    using TRIM_REFBIAS_TST_OVERRIDE = typename TrimOverrideEnFields::TRIM_REFBIAS_TST_OVERRIDE;
    using TRIM_USB2_REFBIAS_VBGADJ = typename TrimOverrideEnFields::TRIM_USB2_REFBIAS_VBGADJ;
    using TRIM_USB2_REFBIAS_TST = typename TrimOverrideEnFields::TRIM_USB2_REFBIAS_TST;
    using TRIM_PLL_CTRL0_DIV_SEL = typename TrimOverrideEnFields::TRIM_PLL_CTRL0_DIV_SEL;
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TrimOverrideEnFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
    using TRIM_USBPHY_TX_D_CAL = typename TrimOverrideEnFields::TRIM_USBPHY_TX_D_CAL;
    using TRIM_USBPHY_TX_CAL45DP = typename TrimOverrideEnFields::TRIM_USBPHY_TX_CAL45DP;
    using TRIM_USBPHY_TX_CAL45DN = typename TrimOverrideEnFields::TRIM_USBPHY_TX_CAL45DN;
  };

  // USB PHY Trim Override Enable Register
  struct TrimOverrideEnSetFields {
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
  };  // struct TrimOverrideEnSetFields

  struct TRIM_OVERRIDE_EN_SET : ftl::mmio::Register<
      kBase + 0x134u,
      std::uint32_t,
      0x0000007Fu,
      ftl::mmio::RW,
      typename TrimOverrideEnSetFields::TRIM_DIV_SEL_OVERRIDE,
      typename TrimOverrideEnSetFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
      typename TrimOverrideEnSetFields::TRIM_TX_D_CAL_OVERRIDE,
      typename TrimOverrideEnSetFields::TRIM_TX_CAL45DP_OVERRIDE,
      typename TrimOverrideEnSetFields::TRIM_TX_CAL45DN_OVERRIDE,
      typename TrimOverrideEnSetFields::TRIM_REFBIAS_VBGADJ_OVERRIDE,
      typename TrimOverrideEnSetFields::TRIM_REFBIAS_TST_OVERRIDE,
      ftl::mmio::Reserved<3, 7>,
      typename TrimOverrideEnSetFields::TRIM_USB2_REFBIAS_VBGADJ,
      typename TrimOverrideEnSetFields::TRIM_USB2_REFBIAS_TST,
      typename TrimOverrideEnSetFields::TRIM_PLL_CTRL0_DIV_SEL,
      typename TrimOverrideEnSetFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
      typename TrimOverrideEnSetFields::TRIM_USBPHY_TX_D_CAL,
      typename TrimOverrideEnSetFields::TRIM_USBPHY_TX_CAL45DP,
      typename TrimOverrideEnSetFields::TRIM_USBPHY_TX_CAL45DN> {
    using TRIM_DIV_SEL_OVERRIDE = typename TrimOverrideEnSetFields::TRIM_DIV_SEL_OVERRIDE;
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TrimOverrideEnSetFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
    using TRIM_TX_D_CAL_OVERRIDE = typename TrimOverrideEnSetFields::TRIM_TX_D_CAL_OVERRIDE;
    using TRIM_TX_CAL45DP_OVERRIDE = typename TrimOverrideEnSetFields::TRIM_TX_CAL45DP_OVERRIDE;
    using TRIM_TX_CAL45DN_OVERRIDE = typename TrimOverrideEnSetFields::TRIM_TX_CAL45DN_OVERRIDE;
    using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TrimOverrideEnSetFields::TRIM_REFBIAS_VBGADJ_OVERRIDE;
    using TRIM_REFBIAS_TST_OVERRIDE = typename TrimOverrideEnSetFields::TRIM_REFBIAS_TST_OVERRIDE;
    using TRIM_USB2_REFBIAS_VBGADJ = typename TrimOverrideEnSetFields::TRIM_USB2_REFBIAS_VBGADJ;
    using TRIM_USB2_REFBIAS_TST = typename TrimOverrideEnSetFields::TRIM_USB2_REFBIAS_TST;
    using TRIM_PLL_CTRL0_DIV_SEL = typename TrimOverrideEnSetFields::TRIM_PLL_CTRL0_DIV_SEL;
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TrimOverrideEnSetFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
    using TRIM_USBPHY_TX_D_CAL = typename TrimOverrideEnSetFields::TRIM_USBPHY_TX_D_CAL;
    using TRIM_USBPHY_TX_CAL45DP = typename TrimOverrideEnSetFields::TRIM_USBPHY_TX_CAL45DP;
    using TRIM_USBPHY_TX_CAL45DN = typename TrimOverrideEnSetFields::TRIM_USBPHY_TX_CAL45DN;
  };

  // USB PHY Trim Override Enable Register
  struct TrimOverrideEnClrFields {
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
  };  // struct TrimOverrideEnClrFields

  struct TRIM_OVERRIDE_EN_CLR : ftl::mmio::Register<
      kBase + 0x138u,
      std::uint32_t,
      0x0000007Fu,
      ftl::mmio::RW,
      typename TrimOverrideEnClrFields::TRIM_DIV_SEL_OVERRIDE,
      typename TrimOverrideEnClrFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
      typename TrimOverrideEnClrFields::TRIM_TX_D_CAL_OVERRIDE,
      typename TrimOverrideEnClrFields::TRIM_TX_CAL45DP_OVERRIDE,
      typename TrimOverrideEnClrFields::TRIM_TX_CAL45DN_OVERRIDE,
      typename TrimOverrideEnClrFields::TRIM_REFBIAS_VBGADJ_OVERRIDE,
      typename TrimOverrideEnClrFields::TRIM_REFBIAS_TST_OVERRIDE,
      ftl::mmio::Reserved<3, 7>,
      typename TrimOverrideEnClrFields::TRIM_USB2_REFBIAS_VBGADJ,
      typename TrimOverrideEnClrFields::TRIM_USB2_REFBIAS_TST,
      typename TrimOverrideEnClrFields::TRIM_PLL_CTRL0_DIV_SEL,
      typename TrimOverrideEnClrFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
      typename TrimOverrideEnClrFields::TRIM_USBPHY_TX_D_CAL,
      typename TrimOverrideEnClrFields::TRIM_USBPHY_TX_CAL45DP,
      typename TrimOverrideEnClrFields::TRIM_USBPHY_TX_CAL45DN> {
    using TRIM_DIV_SEL_OVERRIDE = typename TrimOverrideEnClrFields::TRIM_DIV_SEL_OVERRIDE;
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TrimOverrideEnClrFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
    using TRIM_TX_D_CAL_OVERRIDE = typename TrimOverrideEnClrFields::TRIM_TX_D_CAL_OVERRIDE;
    using TRIM_TX_CAL45DP_OVERRIDE = typename TrimOverrideEnClrFields::TRIM_TX_CAL45DP_OVERRIDE;
    using TRIM_TX_CAL45DN_OVERRIDE = typename TrimOverrideEnClrFields::TRIM_TX_CAL45DN_OVERRIDE;
    using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TrimOverrideEnClrFields::TRIM_REFBIAS_VBGADJ_OVERRIDE;
    using TRIM_REFBIAS_TST_OVERRIDE = typename TrimOverrideEnClrFields::TRIM_REFBIAS_TST_OVERRIDE;
    using TRIM_USB2_REFBIAS_VBGADJ = typename TrimOverrideEnClrFields::TRIM_USB2_REFBIAS_VBGADJ;
    using TRIM_USB2_REFBIAS_TST = typename TrimOverrideEnClrFields::TRIM_USB2_REFBIAS_TST;
    using TRIM_PLL_CTRL0_DIV_SEL = typename TrimOverrideEnClrFields::TRIM_PLL_CTRL0_DIV_SEL;
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TrimOverrideEnClrFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
    using TRIM_USBPHY_TX_D_CAL = typename TrimOverrideEnClrFields::TRIM_USBPHY_TX_D_CAL;
    using TRIM_USBPHY_TX_CAL45DP = typename TrimOverrideEnClrFields::TRIM_USBPHY_TX_CAL45DP;
    using TRIM_USBPHY_TX_CAL45DN = typename TrimOverrideEnClrFields::TRIM_USBPHY_TX_CAL45DN;
  };

  // USB PHY Trim Override Enable Register
  struct TrimOverrideEnTogFields {
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
  };  // struct TrimOverrideEnTogFields

  struct TRIM_OVERRIDE_EN_TOG : ftl::mmio::Register<
      kBase + 0x13Cu,
      std::uint32_t,
      0x0000007Fu,
      ftl::mmio::RW,
      typename TrimOverrideEnTogFields::TRIM_DIV_SEL_OVERRIDE,
      typename TrimOverrideEnTogFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE,
      typename TrimOverrideEnTogFields::TRIM_TX_D_CAL_OVERRIDE,
      typename TrimOverrideEnTogFields::TRIM_TX_CAL45DP_OVERRIDE,
      typename TrimOverrideEnTogFields::TRIM_TX_CAL45DN_OVERRIDE,
      typename TrimOverrideEnTogFields::TRIM_REFBIAS_VBGADJ_OVERRIDE,
      typename TrimOverrideEnTogFields::TRIM_REFBIAS_TST_OVERRIDE,
      ftl::mmio::Reserved<3, 7>,
      typename TrimOverrideEnTogFields::TRIM_USB2_REFBIAS_VBGADJ,
      typename TrimOverrideEnTogFields::TRIM_USB2_REFBIAS_TST,
      typename TrimOverrideEnTogFields::TRIM_PLL_CTRL0_DIV_SEL,
      typename TrimOverrideEnTogFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD,
      typename TrimOverrideEnTogFields::TRIM_USBPHY_TX_D_CAL,
      typename TrimOverrideEnTogFields::TRIM_USBPHY_TX_CAL45DP,
      typename TrimOverrideEnTogFields::TRIM_USBPHY_TX_CAL45DN> {
    using TRIM_DIV_SEL_OVERRIDE = typename TrimOverrideEnTogFields::TRIM_DIV_SEL_OVERRIDE;
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE = typename TrimOverrideEnTogFields::TRIM_ENV_TAIL_ADJ_VD_OVERRIDE;
    using TRIM_TX_D_CAL_OVERRIDE = typename TrimOverrideEnTogFields::TRIM_TX_D_CAL_OVERRIDE;
    using TRIM_TX_CAL45DP_OVERRIDE = typename TrimOverrideEnTogFields::TRIM_TX_CAL45DP_OVERRIDE;
    using TRIM_TX_CAL45DN_OVERRIDE = typename TrimOverrideEnTogFields::TRIM_TX_CAL45DN_OVERRIDE;
    using TRIM_REFBIAS_VBGADJ_OVERRIDE = typename TrimOverrideEnTogFields::TRIM_REFBIAS_VBGADJ_OVERRIDE;
    using TRIM_REFBIAS_TST_OVERRIDE = typename TrimOverrideEnTogFields::TRIM_REFBIAS_TST_OVERRIDE;
    using TRIM_USB2_REFBIAS_VBGADJ = typename TrimOverrideEnTogFields::TRIM_USB2_REFBIAS_VBGADJ;
    using TRIM_USB2_REFBIAS_TST = typename TrimOverrideEnTogFields::TRIM_USB2_REFBIAS_TST;
    using TRIM_PLL_CTRL0_DIV_SEL = typename TrimOverrideEnTogFields::TRIM_PLL_CTRL0_DIV_SEL;
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD = typename TrimOverrideEnTogFields::TRIM_USB_REG_ENV_TAIL_ADJ_VD;
    using TRIM_USBPHY_TX_D_CAL = typename TrimOverrideEnTogFields::TRIM_USBPHY_TX_D_CAL;
    using TRIM_USBPHY_TX_CAL45DP = typename TrimOverrideEnTogFields::TRIM_USBPHY_TX_CAL45DP;
    using TRIM_USBPHY_TX_CAL45DN = typename TrimOverrideEnTogFields::TRIM_USBPHY_TX_CAL45DN;
  };

};

}  // namespace regs