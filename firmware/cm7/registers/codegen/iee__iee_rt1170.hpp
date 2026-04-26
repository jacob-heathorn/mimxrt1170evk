#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IEE
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IeeIeeRt1170 {
  // IEE Global Configuration
  struct GcfgFields {
    enum class eRL0 : std::uint32_t {
      // Unlocked.
      eRL0_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL0_1 = 1,
    };

    enum class eRL1 : std::uint32_t {
      // Unlocked.
      eRL1_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL1_1 = 1,
    };

    enum class eRL2 : std::uint32_t {
      // Unlocked.
      eRL2_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL2_1 = 1,
    };

    enum class eRL3 : std::uint32_t {
      // Unlocked.
      eRL3_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL3_1 = 1,
    };

    enum class eRL4 : std::uint32_t {
      // Unlocked.
      eRL4_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL4_1 = 1,
    };

    enum class eRL5 : std::uint32_t {
      // Unlocked.
      eRL5_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL5_1 = 1,
    };

    enum class eRL6 : std::uint32_t {
      // Unlocked.
      eRL6_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL6_1 = 1,
    };

    enum class eRL7 : std::uint32_t {
      // Unlocked.
      eRL7_0 = 0,
      // Key, Offset and Attribute registers are locked.
      eRL7_1 = 1,
    };

    enum class eTME : std::uint32_t {
      // Disabled.
      eTME_0 = 0,
      // Enabled.
      eTME_1 = 1,
    };

    enum class eTMD : std::uint32_t {
      // Test mode is usable.
      eTMD_0 = 0,
      // Test mode is disabled.
      eTMD_1 = 1,
    };

    enum class eKEY_RD_DIS : std::uint32_t {
      // Key read enabled. Reading the key registers is allowed.
      eKEY_RD_DIS_0 = 0,
      // Key read disabled. Reading the key registers is disabled.
      eKEY_RD_DIS_1 = 1,
    };

    enum class eMON_EN : std::uint32_t {
      // Performance monitoring disabled. Writing of the performance counter registers is enabled.
      eMON_EN_0 = 0,
      // Performance monitoring enabled. Writing of the performance counter registers is disabled.
      eMON_EN_1 = 1,
    };

    enum class eCLR_MON : std::uint32_t {
      // Do not reset.
      eCLR_MON_0 = 0,
      // Reset performance counters.
      eCLR_MON_1 = 1,
    };

    enum class eRST : std::uint32_t {
      // Do Not Reset.
      eRST_0 = 0,
      // Reset IEE.
      eRST_1 = 1,
    };

    // Region lock 0 bit
    using RL0 = ftl::mmio::Field<1, 0, eRL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Region lock 1 bit
    using RL1 = ftl::mmio::Field<1, 1, eRL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Region lock 2 bit
    using RL2 = ftl::mmio::Field<1, 2, eRL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Region lock 3 bit
    using RL3 = ftl::mmio::Field<1, 3, eRL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Region lock 4 bit
    using RL4 = ftl::mmio::Field<1, 4, eRL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Region lock 5 bit
    using RL5 = ftl::mmio::Field<1, 5, eRL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Region lock 6 bit
    using RL6 = ftl::mmio::Field<1, 6, eRL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Region lock 7 bit
    using RL7 = ftl::mmio::Field<1, 7, eRL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test mode enable bit
    using TME = ftl::mmio::Field<1, 16, eTME, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test mode disable bit
    using TMD = ftl::mmio::Field<1, 17, eTMD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Key read disable bit
    using KEY_RD_DIS = ftl::mmio::Field<1, 25, eKEY_RD_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Monitor enable bit
    using MON_EN = ftl::mmio::Field<1, 28, eMON_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clear monitor bit
    using CLR_MON = ftl::mmio::Field<1, 29, eCLR_MON, ftl::mmio::WO, ftl::mmio::Normal>;
    // Reset bit
    using RST = ftl::mmio::Field<1, 31, eRST, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct GcfgFields

  struct GCFG : ftl::mmio::Register<
      0x4006C000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GcfgFields::RL0,
      GcfgFields::RL1,
      GcfgFields::RL2,
      GcfgFields::RL3,
      GcfgFields::RL4,
      GcfgFields::RL5,
      GcfgFields::RL6,
      GcfgFields::RL7,
      ftl::mmio::Reserved<8, 8>,
      GcfgFields::TME,
      GcfgFields::TMD,
      ftl::mmio::Reserved<7, 18>,
      GcfgFields::KEY_RD_DIS,
      ftl::mmio::Reserved<2, 26>,
      GcfgFields::MON_EN,
      GcfgFields::CLR_MON,
      ftl::mmio::Reserved<1, 30>,
      GcfgFields::RST> {
    using eRL0 = GcfgFields::eRL0;
    using eRL1 = GcfgFields::eRL1;
    using eRL2 = GcfgFields::eRL2;
    using eRL3 = GcfgFields::eRL3;
    using eRL4 = GcfgFields::eRL4;
    using eRL5 = GcfgFields::eRL5;
    using eRL6 = GcfgFields::eRL6;
    using eRL7 = GcfgFields::eRL7;
    using eTME = GcfgFields::eTME;
    using eTMD = GcfgFields::eTMD;
    using eKEY_RD_DIS = GcfgFields::eKEY_RD_DIS;
    using eMON_EN = GcfgFields::eMON_EN;
    using eCLR_MON = GcfgFields::eCLR_MON;
    using eRST = GcfgFields::eRST;
    using RL0 = GcfgFields::RL0;
    using RL1 = GcfgFields::RL1;
    using RL2 = GcfgFields::RL2;
    using RL3 = GcfgFields::RL3;
    using RL4 = GcfgFields::RL4;
    using RL5 = GcfgFields::RL5;
    using RL6 = GcfgFields::RL6;
    using RL7 = GcfgFields::RL7;
    using TME = GcfgFields::TME;
    using TMD = GcfgFields::TMD;
    using KEY_RD_DIS = GcfgFields::KEY_RD_DIS;
    using MON_EN = GcfgFields::MON_EN;
    using CLR_MON = GcfgFields::CLR_MON;
    using RST = GcfgFields::RST;
  };

  // IEE Status
  struct StaFields {
    enum class eDSR : std::uint32_t {
      // No seed request present
      eDSR_0 = 0,
      // Seed request present
      eDSR_1 = 1,
    };

    enum class eAFD : std::uint32_t {
      // No fault detected
      eAFD_0 = 0,
      // Fault detected
      eAFD_1 = 1,
    };

    // DPA seed request bit
    using DSR = ftl::mmio::Field<1, 0, eDSR, ftl::mmio::RO, ftl::mmio::Normal>;
    // AES fault detected bit
    using AFD = ftl::mmio::Field<1, 4, eAFD, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct StaFields

  struct STA : ftl::mmio::Register<
      0x4006C004u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RO,
      StaFields::DSR,
      ftl::mmio::Reserved<3, 1>,
      StaFields::AFD,
      ftl::mmio::Reserved<27, 5>> {
    using eDSR = StaFields::eDSR;
    using eAFD = StaFields::eAFD;
    using DSR = StaFields::DSR;
    using AFD = StaFields::AFD;
  };

  // IEE Test Mode Register
  struct TstmdFields {
    enum class eTMRDY : std::uint32_t {
      // Not Ready.
      eTMRDY_0 = 0,
      // Ready.
      eTMRDY_1 = 1,
    };

    enum class eTMR : std::uint32_t {
      // Not running. May be written if IEE_GCFG[TME] = 1
      eTMR_0 = 0,
      // Run AES Test until TMDONE is indicated.
      eTMR_1 = 1,
    };

    enum class eTMENCR : std::uint32_t {
      // AES Test mode will do decryption.
      eTMENCR_0 = 0,
      // AES Test mode will do encryption.
      eTMENCR_1 = 1,
    };

    enum class eTMCONT : std::uint32_t {
      // Do not continue. This is the last block of data for AES.
      eTMCONT_0 = 0,
      // Continue. Do not initialize AES after this block.
      eTMCONT_1 = 1,
    };

    enum class eTMDONE : std::uint32_t {
      // Not Done.
      eTMDONE_0 = 0,
      // Test Done.
      eTMDONE_1 = 1,
    };

    // Test mode ready bit. All AXI transactions have stopped and test can begin.
    using TMRDY = ftl::mmio::Field<1, 0, eTMRDY, ftl::mmio::RO, ftl::mmio::Normal>;
    // Test mode run bit
    using TMR = ftl::mmio::Field<1, 1, eTMR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test mode encrypt/decrypt bit.
    using TMENCR = ftl::mmio::Field<1, 2, eTMENCR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test mode continue bit. Set to indicate that operation will be followed by more data.
    using TMCONT = ftl::mmio::Field<1, 3, eTMCONT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test mode done bit
    using TMDONE = ftl::mmio::Field<1, 4, eTMDONE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Test mode length field
    using TMLEN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TstmdFields

  struct TSTMD : ftl::mmio::Register<
      0x4006C008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TstmdFields::TMRDY,
      TstmdFields::TMR,
      TstmdFields::TMENCR,
      TstmdFields::TMCONT,
      TstmdFields::TMDONE,
      ftl::mmio::Reserved<3, 5>,
      TstmdFields::TMLEN,
      ftl::mmio::Reserved<20, 12>> {
    using eTMRDY = TstmdFields::eTMRDY;
    using eTMR = TstmdFields::eTMR;
    using eTMENCR = TstmdFields::eTMENCR;
    using eTMCONT = TstmdFields::eTMCONT;
    using eTMDONE = TstmdFields::eTMDONE;
    using TMRDY = TstmdFields::TMRDY;
    using TMR = TstmdFields::TMR;
    using TMENCR = TstmdFields::TMENCR;
    using TMCONT = TstmdFields::TMCONT;
    using TMDONE = TstmdFields::TMDONE;
    using TMLEN = TstmdFields::TMLEN;
  };

  // AES Mask Generation Seed
  struct DpamsFields {
    // DPA mask seed
    using DPAMS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct DpamsFields

  struct DPAMS : ftl::mmio::Register<
      0x4006C00Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      DpamsFields::DPAMS> {
    using VALUE = DpamsFields::DPAMS;
  };

  // Performance Counter, AES Slave Latency Threshold Value
  struct PcSLtFields {
    // Slave write latency threshold in AXI clock cycles.
    using SW_LT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Slave read latency threshold in AXI clock cycles.
    using SR_LT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSLtFields

  struct PC_S_LT : ftl::mmio::Register<
      0x4006C020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSLtFields::SW_LT,
      PcSLtFields::SR_LT> {
    using SW_LT = PcSLtFields::SW_LT;
    using SR_LT = PcSLtFields::SR_LT;
  };

  // Performance Counter, AES Master Latency Threshold
  struct PcMLtFields {
    // Master write latency threshold in AXI clock cycles.
    using MW_LT = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Master read latency threshold in AXI clock cycles.
    using MR_LT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMLtFields

  struct PC_M_LT : ftl::mmio::Register<
      0x4006C024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMLtFields::MW_LT,
      ftl::mmio::Reserved<4, 12>,
      PcMLtFields::MR_LT,
      ftl::mmio::Reserved<4, 28>> {
    using MW_LT = PcMLtFields::MW_LT;
    using MR_LT = PcMLtFields::MR_LT;
  };

  // Performance Counter, Number of AES Block Encryptions
  struct PcBlkEncFields {
    // Number of AES block encryptions. Does not roll over if value maxes out.
    using BLK_ENC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcBlkEncFields

  struct PC_BLK_ENC : ftl::mmio::Register<
      0x4006C040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcBlkEncFields::BLK_ENC> {
    using BLK_ENC = PcBlkEncFields::BLK_ENC;
  };

  // Performance Counter, Number of AES Block Decryptions
  struct PcBlkDecFields {
    // Number of AES block decryptions. Does not roll over if value maxes out.
    using BLK_DEC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcBlkDecFields

  struct PC_BLK_DEC : ftl::mmio::Register<
      0x4006C044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcBlkDecFields::BLK_DEC> {
    using BLK_DEC = PcBlkDecFields::BLK_DEC;
  };

  // Performance Counter, Number of AXI Slave Read Transactions
  struct PcSrTransFields {
    // Number of slave read transactions.
    using SR_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTransFields

  struct PC_SR_TRANS : ftl::mmio::Register<
      0x4006C050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTransFields::SR_TRANS> {
    using SR_TRANS = PcSrTransFields::SR_TRANS;
  };

  // Performance Counter, Number of AXI Slave Write Transactions
  struct PcSwTransFields {
    // Number of slave write transactions.
    using SW_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTransFields

  struct PC_SW_TRANS : ftl::mmio::Register<
      0x4006C054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTransFields::SW_TRANS> {
    using SW_TRANS = PcSwTransFields::SW_TRANS;
  };

  // Performance Counter, Number of AXI Master Read Transactions
  struct PcMrTransFields {
    // Number of master read transactions.
    using MR_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMrTransFields

  struct PC_MR_TRANS : ftl::mmio::Register<
      0x4006C058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMrTransFields::MR_TRANS> {
    using MR_TRANS = PcMrTransFields::MR_TRANS;
  };

  // Performance Counter, Number of AXI Master Write Transactions
  struct PcMwTransFields {
    // Number of master write transactions.
    using MW_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMwTransFields

  struct PC_MW_TRANS : ftl::mmio::Register<
      0x4006C05Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMwTransFields::MW_TRANS> {
    using MW_TRANS = PcMwTransFields::MW_TRANS;
  };

  // Performance Counter, Number of AXI Master Merge Buffer Read Transactions
  struct PcMMbrFields {
    // Number of master merge buffer read transactions.
    using M_MBR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMMbrFields

  struct PC_M_MBR : ftl::mmio::Register<
      0x4006C064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMMbrFields::M_MBR> {
    using M_MBR = PcMMbrFields::M_MBR;
  };

  // Performance Counter, Upper Slave Read Transactions Byte Count
  struct PcSrTbcUFields {
    // Number of bytes in slave read transactions. Upper 16 bits of SR_TBC[47:0].
    using SR_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTbcUFields

  struct PC_SR_TBC_U : ftl::mmio::Register<
      0x4006C070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTbcUFields::SR_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using SR_TBC = PcSrTbcUFields::SR_TBC;
  };

  // Performance Counter, Lower Slave Read Transactions Byte Count
  struct PcSrTbcLFields {
    // Number of bytes in slave read transactions. Lower 32 bits of SR_TBC[47:0].
    using SR_TBC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTbcLFields

  struct PC_SR_TBC_L : ftl::mmio::Register<
      0x4006C074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTbcLFields::SR_TBC> {
    using SR_TBC = PcSrTbcLFields::SR_TBC;
  };

  // Performance Counter, Upper Slave Write Transactions Byte Count
  struct PcSwTbcUFields {
    // Number of bytes in slave write transactions. Upper 16 bits of SW_TBC[47:0].
    using SW_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTbcUFields

  struct PC_SW_TBC_U : ftl::mmio::Register<
      0x4006C078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTbcUFields::SW_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using SW_TBC = PcSwTbcUFields::SW_TBC;
  };

  // Performance Counter, Lower Slave Write Transactions Byte Count
  struct PcSwTbcLFields {
    // Number of bytes in slave write transactions. Lower 32 bits of SW_TBC[47:0].
    using SW_TBC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTbcLFields

  struct PC_SW_TBC_L : ftl::mmio::Register<
      0x4006C07Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTbcLFields::SW_TBC> {
    using SW_TBC = PcSwTbcLFields::SW_TBC;
  };

  // Performance Counter, Upper Master Read Transactions Byte Count
  struct PcMrTbcUFields {
    // Number of bytes in master read transactions. 44 MSBs. Upper 16 bits of MR_TBC[43:0].
    using MR_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMrTbcUFields

  struct PC_MR_TBC_U : ftl::mmio::Register<
      0x4006C080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMrTbcUFields::MR_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using MR_TBC = PcMrTbcUFields::MR_TBC;
  };

  // Performance Counter, Lower Master Read Transactions Byte Count
  struct PcMrTbcLFields {
    // Number of bytes in master read transactions. 4 LSBs, always 0.
    using MR_TBC_LSB = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of bytes in master read transactions. 44 MSBs. Lower 28 bits of MR_TBC[43:0].
    using MR_TBC = ftl::mmio::Field<28, 4, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMrTbcLFields

  struct PC_MR_TBC_L : ftl::mmio::Register<
      0x4006C084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMrTbcLFields::MR_TBC_LSB,
      PcMrTbcLFields::MR_TBC> {
    using MR_TBC_LSB = PcMrTbcLFields::MR_TBC_LSB;
    using MR_TBC = PcMrTbcLFields::MR_TBC;
  };

  // Performance Counter, Upper Master Write Transactions Byte Count
  struct PcMwTbcUFields {
    // Number of bytes in master write transactions. 44 MSBs. Upper 16 bits of MW_TBC[43:0].
    using MW_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMwTbcUFields

  struct PC_MW_TBC_U : ftl::mmio::Register<
      0x4006C088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMwTbcUFields::MW_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using MW_TBC = PcMwTbcUFields::MW_TBC;
  };

  // Performance Counter, Lower Master Write Transactions Byte Count
  struct PcMwTbcLFields {
    // Number of bytes in master write transactions. 4 LSBs, always 0.
    using MW_TBC_LSB = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of bytes in master write transactions. 44 MSBs. Lower 28 bits of MR_TBC[43:0].
    using MW_TBC = ftl::mmio::Field<28, 4, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMwTbcLFields

  struct PC_MW_TBC_L : ftl::mmio::Register<
      0x4006C08Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMwTbcLFields::MW_TBC_LSB,
      PcMwTbcLFields::MW_TBC> {
    using MW_TBC_LSB = PcMwTbcLFields::MW_TBC_LSB;
    using MW_TBC = PcMwTbcLFields::MW_TBC;
  };

  // Performance Counter, Number of AXI Slave Read Transactions with Latency Greater than the
  // Threshold
  struct PcSrTlgttFields {
    // Number of slave read transactions with latency greater than the threshold.
    using SR_TLGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTlgttFields

  struct PC_SR_TLGTT : ftl::mmio::Register<
      0x4006C090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTlgttFields::SR_TLGTT> {
    using SR_TLGTT = PcSrTlgttFields::SR_TLGTT;
  };

  // Performance Counter, Number of AXI Slave Write Transactions with Latency Greater than the
  // Threshold
  struct PcSwTlgttFields {
    // Number of slave write transactions with latency greater than the threshold.
    using SW_TLGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTlgttFields

  struct PC_SW_TLGTT : ftl::mmio::Register<
      0x4006C094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTlgttFields::SW_TLGTT> {
    using SW_TLGTT = PcSwTlgttFields::SW_TLGTT;
  };

  // Performance Counter, Number of AXI Master Read Transactions with Latency Greater than the
  // Threshold
  struct PcMrTlgttFields {
    // Number of master read transactions with latency greater than the threshold.
    using MR_TLGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMrTlgttFields

  struct PC_MR_TLGTT : ftl::mmio::Register<
      0x4006C098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMrTlgttFields::MR_TLGTT> {
    using MR_TLGTT = PcMrTlgttFields::MR_TLGTT;
  };

  // Performance Counter, Number of AXI Master Write Transactions with Latency Greater than the
  // Threshold
  struct PcMwTlgttFields {
    // Number of master write transactions with latency greater than the threshold.
    using MW_TGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMwTlgttFields

  struct PC_MW_TLGTT : ftl::mmio::Register<
      0x4006C09Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMwTlgttFields::MW_TGTT> {
    using MW_TGTT = PcMwTlgttFields::MW_TGTT;
  };

  // Performance Counter, Upper Slave Read Latency Count
  struct PcSrTlatUFields {
    // Total slave read latency in AXI clock cycles. Upper 16 bits of SR_TLAT[47:0].
    using SR_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTlatUFields

  struct PC_SR_TLAT_U : ftl::mmio::Register<
      0x4006C0A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTlatUFields::SR_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using SR_TLAT = PcSrTlatUFields::SR_TLAT;
  };

  // Performance Counter, Lower Slave Read Latency Count
  struct PcSrTlatLFields {
    // Total slave read latency in AXI clock cycles. Lower 32 bits of SR_TLAT[47:0].
    using SR_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTlatLFields

  struct PC_SR_TLAT_L : ftl::mmio::Register<
      0x4006C0A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTlatLFields::SR_TLAT> {
    using SR_TLAT = PcSrTlatLFields::SR_TLAT;
  };

  // Performance Counter, Upper Slave Write Latency Count
  struct PcSwTlatUFields {
    // Total slave write latency in AXI clock cycles. Upper 16 bits of SW_TLAT[47:0].
    using SW_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTlatUFields

  struct PC_SW_TLAT_U : ftl::mmio::Register<
      0x4006C0A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTlatUFields::SW_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using SW_TLAT = PcSwTlatUFields::SW_TLAT;
  };

  // Performance Counter, Lower Slave Write Latency Count
  struct PcSwTlatLFields {
    // Total slave write latency in AXI clock cycles. Lower 32 bits of SW_TLAT[47:0].
    using SW_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTlatLFields

  struct PC_SW_TLAT_L : ftl::mmio::Register<
      0x4006C0ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTlatLFields::SW_TLAT> {
    using SW_TLAT = PcSwTlatLFields::SW_TLAT;
  };

  // Performance Counter, Upper Master Read Latency Count
  struct PcMrTlatUFields {
    // Total master read latency in AXI clock cycles. Upper 16 bits of MR_TLAT[47:0].
    using MR_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMrTlatUFields

  struct PC_MR_TLAT_U : ftl::mmio::Register<
      0x4006C0B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMrTlatUFields::MR_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using MR_TLAT = PcMrTlatUFields::MR_TLAT;
  };

  // Performance Counter, Lower Master Read Latency Count
  struct PcMrTlatLFields {
    // Total master read latency in AXI clock cycles. Lower 32 bits of MR_TLAT[47:0].
    using MR_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMrTlatLFields

  struct PC_MR_TLAT_L : ftl::mmio::Register<
      0x4006C0B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMrTlatLFields::MR_TLAT> {
    using MR_TLAT = PcMrTlatLFields::MR_TLAT;
  };

  // Performance Counter, Upper Master Write Latency Count
  struct PcMwTlatUFields {
    // Total master write latency in AXI clock cycles. Upper 16 bits of MW_TLAT[47:0].
    using MW_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMwTlatUFields

  struct PC_MW_TLAT_U : ftl::mmio::Register<
      0x4006C0B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMwTlatUFields::MW_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using MW_TLAT = PcMwTlatUFields::MW_TLAT;
  };

  // Performance Counter, Lower Master Write Latency Count
  struct PcMwTlatLFields {
    // Total master write latency in AXI clock cycles. Lower 32 bits of MW_TLAT[47:0].
    using MW_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcMwTlatLFields

  struct PC_MW_TLAT_L : ftl::mmio::Register<
      0x4006C0BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcMwTlatLFields::MW_TLAT> {
    using MW_TLAT = PcMwTlatLFields::MW_TLAT;
  };

  // Performance Counter, Upper Slave Read Total Non-Responding Time
  struct PcSrTnrtUFields {
    // Total slave read non-responding time in AXI clock cycles. Upper 16 bits of SR_TNRT[47:0].
    using SR_TNRT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTnrtUFields

  struct PC_SR_TNRT_U : ftl::mmio::Register<
      0x4006C0C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTnrtUFields::SR_TNRT,
      ftl::mmio::Reserved<16, 16>> {
    using SR_TNRT = PcSrTnrtUFields::SR_TNRT;
  };

  // Performance Counter, Lower Slave Read Total Non-Responding Time
  struct PcSrTnrtLFields {
    // Total slave read non-responding time in AXI clock cycles. Lower 32 bits of SR_TNRT[47:0].
    using SR_TNRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSrTnrtLFields

  struct PC_SR_TNRT_L : ftl::mmio::Register<
      0x4006C0C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSrTnrtLFields::SR_TNRT> {
    using SR_TNRT = PcSrTnrtLFields::SR_TNRT;
  };

  // Performance Counter, Upper Slave Write Total Non-Responding Time
  struct PcSwTnrtUFields {
    // Total slave write non-responding time in AXI clock cycles. Upper 16 bits of SW_TNRT[47:0].
    using SW_TNRT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTnrtUFields

  struct PC_SW_TNRT_U : ftl::mmio::Register<
      0x4006C0C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTnrtUFields::SW_TNRT,
      ftl::mmio::Reserved<16, 16>> {
    using SW_TNRT = PcSwTnrtUFields::SW_TNRT;
  };

  // Performance Counter, Lower Slave Write Total Non-Responding Time
  struct PcSwTnrtLFields {
    // Total slave write non-responding time in AXI clock cycles. Lower 32 bits of SW_TNRT[47:0].
    using SW_TNRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcSwTnrtLFields

  struct PC_SW_TNRT_L : ftl::mmio::Register<
      0x4006C0CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcSwTnrtLFields::SW_TNRT> {
    using SW_TNRT = PcSwTnrtLFields::SW_TNRT;
  };

  // IEE Version ID Register 1
  struct Vidr1Fields {
    // Minor revision number for IEE.
    using MIN_REV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major revision number for IEE.
    using MAJ_REV = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ID for IEE.
    using IP_ID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Vidr1Fields

  struct VIDR1 : ftl::mmio::Register<
      0x4006C0F0u,
      std::uint32_t,
      0x00340102u,
      ftl::mmio::RO,
      Vidr1Fields::MIN_REV,
      Vidr1Fields::MAJ_REV,
      Vidr1Fields::IP_ID> {
    using MIN_REV = Vidr1Fields::MIN_REV;
    using MAJ_REV = Vidr1Fields::MAJ_REV;
    using IP_ID = Vidr1Fields::IP_ID;
  };

  // IEE AES Version ID Register
  struct AesvidFields {
    // AES revision number.
    using AESRN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // AES version ID.
    using AESVID = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AesvidFields

  struct AESVID : ftl::mmio::Register<
      0x4006C0F8u,
      std::uint32_t,
      0x00000020u,
      ftl::mmio::RO,
      AesvidFields::AESRN,
      AesvidFields::AESVID,
      ftl::mmio::Reserved<24, 8>> {
    using AESRN = AesvidFields::AESRN;
    using VALUE = AesvidFields::AESVID;
  };

  // IEE AES Test Mode Data Buffer
  struct AesTstDbFields {
    // AES test mode data buffer.
    using AES_TST_DB0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AesTstDbFields

  template<std::uint32_t Index>
  struct AES_TST_DB : ftl::mmio::Register<
      0x4006CF00u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AesTstDbFields::AES_TST_DB0> {
    static_assert(Index < 32u, "AES_TST_DB: Index out of range");
    using AES_TST_DB0 = AesTstDbFields::AES_TST_DB0;
  };

  // IEE Region REGION Attribute Register.
  struct RegattrFields {
    enum class eKS : std::uint32_t {
      // 128 bits (CTR), 256 bits (XTS).
      eKS_0 = 0,
      // 256 bits (CTR), 512 bits (XTS).
      eKS_1 = 1,
    };

    enum class eMD : std::uint32_t {
      // None (AXI error if accessed)
      eMD_0 = 0,
      // XTS
      eMD_1 = 1,
      // CTR w/ address binding
      eMD_2 = 2,
      // CTR w/o address binding
      eMD_3 = 3,
      // CTR keystream only
      eMD_4 = 4,
      // Undefined, AXI error if used
      eMD_5 = 5,
      // Undefined, AXI error if used
      eMD_6 = 6,
      // Undefined, AXI error if used
      eMD_7 = 7,
    };

    enum class eBYP : std::uint32_t {
      // use MD field
      eBYP_0 = 0,
      // Bypass AES, no encrypt/decrypt
      eBYP_1 = 1,
    };

    // AES key size.
    using KS = ftl::mmio::Field<1, 0, eKS, ftl::mmio::RW, ftl::mmio::Normal>;
    // AES Mode.
    using MD = ftl::mmio::Field<3, 4, eMD, ftl::mmio::RW, ftl::mmio::Normal>;
    // AES Bypass.
    using BYP = ftl::mmio::Field<1, 7, eBYP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RegattrFields

  template<std::uint32_t ClusterIndex>
  struct REGATTR : ftl::mmio::Register<
      0x4006C100u + (ClusterIndex * 0x100u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RegattrFields::KS,
      ftl::mmio::Reserved<3, 1>,
      RegattrFields::MD,
      RegattrFields::BYP,
      ftl::mmio::Reserved<24, 8>> {
    static_assert(ClusterIndex < 8u, "REGATTR: ClusterIndex out of range");
    using eKS = RegattrFields::eKS;
    using eMD = RegattrFields::eMD;
    using eBYP = RegattrFields::eBYP;
    using KS = RegattrFields::KS;
    using MD = RegattrFields::MD;
    using BYP = RegattrFields::BYP;
  };

  // IEE Region REGION Page Offset Register
  struct RegpoFields {
    // This field represents a 4Kb page offset
    using PGOFF = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RegpoFields

  template<std::uint32_t ClusterIndex>
  struct REGPO : ftl::mmio::Register<
      0x4006C108u + (ClusterIndex * 0x100u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RegpoFields::PGOFF,
      ftl::mmio::Reserved<8, 24>> {
    static_assert(ClusterIndex < 8u, "REGPO: ClusterIndex out of range");
    using PGOFF = RegpoFields::PGOFF;
  };

  // IEE Region REGION Key 1 Register
  struct Regkey1Fields {
    // Key 1.
    using KEY1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Regkey1Fields

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct REGKEY1_ : ftl::mmio::Register<
      0x4006C140u + (ClusterIndex * 0x100u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Regkey1Fields::KEY1> {
    static_assert(ClusterIndex < 8u, "REGKEY1_: ClusterIndex out of range");
    static_assert(ArrayIndex < 8u, "REGKEY1_: ArrayIndex out of range");
    using KEY1 = Regkey1Fields::KEY1;
  };

  // IEE Region REGION Key 2 Register
  struct Regkey2Fields {
    // Key 2.
    using KEY2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Regkey2Fields

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct REGKEY2_ : ftl::mmio::Register<
      0x4006C180u + (ClusterIndex * 0x100u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Regkey2Fields::KEY2> {
    static_assert(ClusterIndex < 8u, "REGKEY2_: ClusterIndex out of range");
    static_assert(ArrayIndex < 8u, "REGKEY2_: ArrayIndex out of range");
    using KEY2 = Regkey2Fields::KEY2;
  };

};

}  // namespace regs