#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IEE
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IeeIeeRt1170 {
  // IEE Global Configuration
  struct GCFG_fields_ {
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
  };  // struct GCFG_fields_

  struct GCFG : ftl::mmio::Register<
      0x4006C000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GCFG_fields_::RL0,
      GCFG_fields_::RL1,
      GCFG_fields_::RL2,
      GCFG_fields_::RL3,
      GCFG_fields_::RL4,
      GCFG_fields_::RL5,
      GCFG_fields_::RL6,
      GCFG_fields_::RL7,
      ftl::mmio::Reserved<8, 8>,
      GCFG_fields_::TME,
      GCFG_fields_::TMD,
      ftl::mmio::Reserved<7, 18>,
      GCFG_fields_::KEY_RD_DIS,
      ftl::mmio::Reserved<2, 26>,
      GCFG_fields_::MON_EN,
      GCFG_fields_::CLR_MON,
      ftl::mmio::Reserved<1, 30>,
      GCFG_fields_::RST> {
    using eRL0 = GCFG_fields_::eRL0;
    using eRL1 = GCFG_fields_::eRL1;
    using eRL2 = GCFG_fields_::eRL2;
    using eRL3 = GCFG_fields_::eRL3;
    using eRL4 = GCFG_fields_::eRL4;
    using eRL5 = GCFG_fields_::eRL5;
    using eRL6 = GCFG_fields_::eRL6;
    using eRL7 = GCFG_fields_::eRL7;
    using eTME = GCFG_fields_::eTME;
    using eTMD = GCFG_fields_::eTMD;
    using eKEY_RD_DIS = GCFG_fields_::eKEY_RD_DIS;
    using eMON_EN = GCFG_fields_::eMON_EN;
    using eCLR_MON = GCFG_fields_::eCLR_MON;
    using eRST = GCFG_fields_::eRST;
    using RL0 = GCFG_fields_::RL0;
    using RL1 = GCFG_fields_::RL1;
    using RL2 = GCFG_fields_::RL2;
    using RL3 = GCFG_fields_::RL3;
    using RL4 = GCFG_fields_::RL4;
    using RL5 = GCFG_fields_::RL5;
    using RL6 = GCFG_fields_::RL6;
    using RL7 = GCFG_fields_::RL7;
    using TME = GCFG_fields_::TME;
    using TMD = GCFG_fields_::TMD;
    using KEY_RD_DIS = GCFG_fields_::KEY_RD_DIS;
    using MON_EN = GCFG_fields_::MON_EN;
    using CLR_MON = GCFG_fields_::CLR_MON;
    using RST = GCFG_fields_::RST;
  };

  // IEE Status
  struct STA_fields_ {
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
  };  // struct STA_fields_

  struct STA : ftl::mmio::Register<
      0x4006C004u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RO,
      STA_fields_::DSR,
      ftl::mmio::Reserved<3, 1>,
      STA_fields_::AFD,
      ftl::mmio::Reserved<27, 5>> {
    using eDSR = STA_fields_::eDSR;
    using eAFD = STA_fields_::eAFD;
    using DSR = STA_fields_::DSR;
    using AFD = STA_fields_::AFD;
  };

  // IEE Test Mode Register
  struct TSTMD_fields_ {
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
  };  // struct TSTMD_fields_

  struct TSTMD : ftl::mmio::Register<
      0x4006C008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TSTMD_fields_::TMRDY,
      TSTMD_fields_::TMR,
      TSTMD_fields_::TMENCR,
      TSTMD_fields_::TMCONT,
      TSTMD_fields_::TMDONE,
      ftl::mmio::Reserved<3, 5>,
      TSTMD_fields_::TMLEN,
      ftl::mmio::Reserved<20, 12>> {
    using eTMRDY = TSTMD_fields_::eTMRDY;
    using eTMR = TSTMD_fields_::eTMR;
    using eTMENCR = TSTMD_fields_::eTMENCR;
    using eTMCONT = TSTMD_fields_::eTMCONT;
    using eTMDONE = TSTMD_fields_::eTMDONE;
    using TMRDY = TSTMD_fields_::TMRDY;
    using TMR = TSTMD_fields_::TMR;
    using TMENCR = TSTMD_fields_::TMENCR;
    using TMCONT = TSTMD_fields_::TMCONT;
    using TMDONE = TSTMD_fields_::TMDONE;
    using TMLEN = TSTMD_fields_::TMLEN;
  };

  // AES Mask Generation Seed
  struct DPAMS_fields_ {
    // DPA mask seed
    using DPAMS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct DPAMS_fields_

  struct DPAMS : ftl::mmio::Register<
      0x4006C00Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      DPAMS_fields_::DPAMS> {
    using VALUE = DPAMS_fields_::DPAMS;
  };

  // Performance Counter, AES Slave Latency Threshold Value
  struct PC_S_LT_fields_ {
    // Slave write latency threshold in AXI clock cycles.
    using SW_LT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Slave read latency threshold in AXI clock cycles.
    using SR_LT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_S_LT_fields_

  struct PC_S_LT : ftl::mmio::Register<
      0x4006C020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_S_LT_fields_::SW_LT,
      PC_S_LT_fields_::SR_LT> {
    using SW_LT = PC_S_LT_fields_::SW_LT;
    using SR_LT = PC_S_LT_fields_::SR_LT;
  };

  // Performance Counter, AES Master Latency Threshold
  struct PC_M_LT_fields_ {
    // Master write latency threshold in AXI clock cycles.
    using MW_LT = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Master read latency threshold in AXI clock cycles.
    using MR_LT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_M_LT_fields_

  struct PC_M_LT : ftl::mmio::Register<
      0x4006C024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_M_LT_fields_::MW_LT,
      ftl::mmio::Reserved<4, 12>,
      PC_M_LT_fields_::MR_LT,
      ftl::mmio::Reserved<4, 28>> {
    using MW_LT = PC_M_LT_fields_::MW_LT;
    using MR_LT = PC_M_LT_fields_::MR_LT;
  };

  // Performance Counter, Number of AES Block Encryptions
  struct PC_BLK_ENC_fields_ {
    // Number of AES block encryptions. Does not roll over if value maxes out.
    using BLK_ENC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_BLK_ENC_fields_

  struct PC_BLK_ENC : ftl::mmio::Register<
      0x4006C040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_BLK_ENC_fields_::BLK_ENC> {
    using BLK_ENC = PC_BLK_ENC_fields_::BLK_ENC;
  };

  // Performance Counter, Number of AES Block Decryptions
  struct PC_BLK_DEC_fields_ {
    // Number of AES block decryptions. Does not roll over if value maxes out.
    using BLK_DEC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_BLK_DEC_fields_

  struct PC_BLK_DEC : ftl::mmio::Register<
      0x4006C044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_BLK_DEC_fields_::BLK_DEC> {
    using BLK_DEC = PC_BLK_DEC_fields_::BLK_DEC;
  };

  // Performance Counter, Number of AXI Slave Read Transactions
  struct PC_SR_TRANS_fields_ {
    // Number of slave read transactions.
    using SR_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TRANS_fields_

  struct PC_SR_TRANS : ftl::mmio::Register<
      0x4006C050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TRANS_fields_::SR_TRANS> {
    using SR_TRANS = PC_SR_TRANS_fields_::SR_TRANS;
  };

  // Performance Counter, Number of AXI Slave Write Transactions
  struct PC_SW_TRANS_fields_ {
    // Number of slave write transactions.
    using SW_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TRANS_fields_

  struct PC_SW_TRANS : ftl::mmio::Register<
      0x4006C054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TRANS_fields_::SW_TRANS> {
    using SW_TRANS = PC_SW_TRANS_fields_::SW_TRANS;
  };

  // Performance Counter, Number of AXI Master Read Transactions
  struct PC_MR_TRANS_fields_ {
    // Number of master read transactions.
    using MR_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MR_TRANS_fields_

  struct PC_MR_TRANS : ftl::mmio::Register<
      0x4006C058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MR_TRANS_fields_::MR_TRANS> {
    using MR_TRANS = PC_MR_TRANS_fields_::MR_TRANS;
  };

  // Performance Counter, Number of AXI Master Write Transactions
  struct PC_MW_TRANS_fields_ {
    // Number of master write transactions.
    using MW_TRANS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MW_TRANS_fields_

  struct PC_MW_TRANS : ftl::mmio::Register<
      0x4006C05Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MW_TRANS_fields_::MW_TRANS> {
    using MW_TRANS = PC_MW_TRANS_fields_::MW_TRANS;
  };

  // Performance Counter, Number of AXI Master Merge Buffer Read Transactions
  struct PC_M_MBR_fields_ {
    // Number of master merge buffer read transactions.
    using M_MBR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_M_MBR_fields_

  struct PC_M_MBR : ftl::mmio::Register<
      0x4006C064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_M_MBR_fields_::M_MBR> {
    using M_MBR = PC_M_MBR_fields_::M_MBR;
  };

  // Performance Counter, Upper Slave Read Transactions Byte Count
  struct PC_SR_TBC_U_fields_ {
    // Number of bytes in slave read transactions. Upper 16 bits of SR_TBC[47:0].
    using SR_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TBC_U_fields_

  struct PC_SR_TBC_U : ftl::mmio::Register<
      0x4006C070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TBC_U_fields_::SR_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using SR_TBC = PC_SR_TBC_U_fields_::SR_TBC;
  };

  // Performance Counter, Lower Slave Read Transactions Byte Count
  struct PC_SR_TBC_L_fields_ {
    // Number of bytes in slave read transactions. Lower 32 bits of SR_TBC[47:0].
    using SR_TBC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TBC_L_fields_

  struct PC_SR_TBC_L : ftl::mmio::Register<
      0x4006C074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TBC_L_fields_::SR_TBC> {
    using SR_TBC = PC_SR_TBC_L_fields_::SR_TBC;
  };

  // Performance Counter, Upper Slave Write Transactions Byte Count
  struct PC_SW_TBC_U_fields_ {
    // Number of bytes in slave write transactions. Upper 16 bits of SW_TBC[47:0].
    using SW_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TBC_U_fields_

  struct PC_SW_TBC_U : ftl::mmio::Register<
      0x4006C078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TBC_U_fields_::SW_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using SW_TBC = PC_SW_TBC_U_fields_::SW_TBC;
  };

  // Performance Counter, Lower Slave Write Transactions Byte Count
  struct PC_SW_TBC_L_fields_ {
    // Number of bytes in slave write transactions. Lower 32 bits of SW_TBC[47:0].
    using SW_TBC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TBC_L_fields_

  struct PC_SW_TBC_L : ftl::mmio::Register<
      0x4006C07Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TBC_L_fields_::SW_TBC> {
    using SW_TBC = PC_SW_TBC_L_fields_::SW_TBC;
  };

  // Performance Counter, Upper Master Read Transactions Byte Count
  struct PC_MR_TBC_U_fields_ {
    // Number of bytes in master read transactions. 44 MSBs. Upper 16 bits of MR_TBC[43:0].
    using MR_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MR_TBC_U_fields_

  struct PC_MR_TBC_U : ftl::mmio::Register<
      0x4006C080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MR_TBC_U_fields_::MR_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using MR_TBC = PC_MR_TBC_U_fields_::MR_TBC;
  };

  // Performance Counter, Lower Master Read Transactions Byte Count
  struct PC_MR_TBC_L_fields_ {
    // Number of bytes in master read transactions. 4 LSBs, always 0.
    using MR_TBC_LSB = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of bytes in master read transactions. 44 MSBs. Lower 28 bits of MR_TBC[43:0].
    using MR_TBC = ftl::mmio::Field<28, 4, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MR_TBC_L_fields_

  struct PC_MR_TBC_L : ftl::mmio::Register<
      0x4006C084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MR_TBC_L_fields_::MR_TBC_LSB,
      PC_MR_TBC_L_fields_::MR_TBC> {
    using MR_TBC_LSB = PC_MR_TBC_L_fields_::MR_TBC_LSB;
    using MR_TBC = PC_MR_TBC_L_fields_::MR_TBC;
  };

  // Performance Counter, Upper Master Write Transactions Byte Count
  struct PC_MW_TBC_U_fields_ {
    // Number of bytes in master write transactions. 44 MSBs. Upper 16 bits of MW_TBC[43:0].
    using MW_TBC = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MW_TBC_U_fields_

  struct PC_MW_TBC_U : ftl::mmio::Register<
      0x4006C088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MW_TBC_U_fields_::MW_TBC,
      ftl::mmio::Reserved<16, 16>> {
    using MW_TBC = PC_MW_TBC_U_fields_::MW_TBC;
  };

  // Performance Counter, Lower Master Write Transactions Byte Count
  struct PC_MW_TBC_L_fields_ {
    // Number of bytes in master write transactions. 4 LSBs, always 0.
    using MW_TBC_LSB = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of bytes in master write transactions. 44 MSBs. Lower 28 bits of MR_TBC[43:0].
    using MW_TBC = ftl::mmio::Field<28, 4, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MW_TBC_L_fields_

  struct PC_MW_TBC_L : ftl::mmio::Register<
      0x4006C08Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MW_TBC_L_fields_::MW_TBC_LSB,
      PC_MW_TBC_L_fields_::MW_TBC> {
    using MW_TBC_LSB = PC_MW_TBC_L_fields_::MW_TBC_LSB;
    using MW_TBC = PC_MW_TBC_L_fields_::MW_TBC;
  };

  // Performance Counter, Number of AXI Slave Read Transactions with Latency Greater than the
  // Threshold
  struct PC_SR_TLGTT_fields_ {
    // Number of slave read transactions with latency greater than the threshold.
    using SR_TLGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TLGTT_fields_

  struct PC_SR_TLGTT : ftl::mmio::Register<
      0x4006C090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TLGTT_fields_::SR_TLGTT> {
    using SR_TLGTT = PC_SR_TLGTT_fields_::SR_TLGTT;
  };

  // Performance Counter, Number of AXI Slave Write Transactions with Latency Greater than the
  // Threshold
  struct PC_SW_TLGTT_fields_ {
    // Number of slave write transactions with latency greater than the threshold.
    using SW_TLGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TLGTT_fields_

  struct PC_SW_TLGTT : ftl::mmio::Register<
      0x4006C094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TLGTT_fields_::SW_TLGTT> {
    using SW_TLGTT = PC_SW_TLGTT_fields_::SW_TLGTT;
  };

  // Performance Counter, Number of AXI Master Read Transactions with Latency Greater than the
  // Threshold
  struct PC_MR_TLGTT_fields_ {
    // Number of master read transactions with latency greater than the threshold.
    using MR_TLGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MR_TLGTT_fields_

  struct PC_MR_TLGTT : ftl::mmio::Register<
      0x4006C098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MR_TLGTT_fields_::MR_TLGTT> {
    using MR_TLGTT = PC_MR_TLGTT_fields_::MR_TLGTT;
  };

  // Performance Counter, Number of AXI Master Write Transactions with Latency Greater than the
  // Threshold
  struct PC_MW_TLGTT_fields_ {
    // Number of master write transactions with latency greater than the threshold.
    using MW_TGTT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MW_TLGTT_fields_

  struct PC_MW_TLGTT : ftl::mmio::Register<
      0x4006C09Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MW_TLGTT_fields_::MW_TGTT> {
    using MW_TGTT = PC_MW_TLGTT_fields_::MW_TGTT;
  };

  // Performance Counter, Upper Slave Read Latency Count
  struct PC_SR_TLAT_U_fields_ {
    // Total slave read latency in AXI clock cycles. Upper 16 bits of SR_TLAT[47:0].
    using SR_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TLAT_U_fields_

  struct PC_SR_TLAT_U : ftl::mmio::Register<
      0x4006C0A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TLAT_U_fields_::SR_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using SR_TLAT = PC_SR_TLAT_U_fields_::SR_TLAT;
  };

  // Performance Counter, Lower Slave Read Latency Count
  struct PC_SR_TLAT_L_fields_ {
    // Total slave read latency in AXI clock cycles. Lower 32 bits of SR_TLAT[47:0].
    using SR_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TLAT_L_fields_

  struct PC_SR_TLAT_L : ftl::mmio::Register<
      0x4006C0A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TLAT_L_fields_::SR_TLAT> {
    using SR_TLAT = PC_SR_TLAT_L_fields_::SR_TLAT;
  };

  // Performance Counter, Upper Slave Write Latency Count
  struct PC_SW_TLAT_U_fields_ {
    // Total slave write latency in AXI clock cycles. Upper 16 bits of SW_TLAT[47:0].
    using SW_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TLAT_U_fields_

  struct PC_SW_TLAT_U : ftl::mmio::Register<
      0x4006C0A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TLAT_U_fields_::SW_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using SW_TLAT = PC_SW_TLAT_U_fields_::SW_TLAT;
  };

  // Performance Counter, Lower Slave Write Latency Count
  struct PC_SW_TLAT_L_fields_ {
    // Total slave write latency in AXI clock cycles. Lower 32 bits of SW_TLAT[47:0].
    using SW_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TLAT_L_fields_

  struct PC_SW_TLAT_L : ftl::mmio::Register<
      0x4006C0ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TLAT_L_fields_::SW_TLAT> {
    using SW_TLAT = PC_SW_TLAT_L_fields_::SW_TLAT;
  };

  // Performance Counter, Upper Master Read Latency Count
  struct PC_MR_TLAT_U_fields_ {
    // Total master read latency in AXI clock cycles. Upper 16 bits of MR_TLAT[47:0].
    using MR_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MR_TLAT_U_fields_

  struct PC_MR_TLAT_U : ftl::mmio::Register<
      0x4006C0B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MR_TLAT_U_fields_::MR_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using MR_TLAT = PC_MR_TLAT_U_fields_::MR_TLAT;
  };

  // Performance Counter, Lower Master Read Latency Count
  struct PC_MR_TLAT_L_fields_ {
    // Total master read latency in AXI clock cycles. Lower 32 bits of MR_TLAT[47:0].
    using MR_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MR_TLAT_L_fields_

  struct PC_MR_TLAT_L : ftl::mmio::Register<
      0x4006C0B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MR_TLAT_L_fields_::MR_TLAT> {
    using MR_TLAT = PC_MR_TLAT_L_fields_::MR_TLAT;
  };

  // Performance Counter, Upper Master Write Latency Count
  struct PC_MW_TLAT_U_fields_ {
    // Total master write latency in AXI clock cycles. Upper 16 bits of MW_TLAT[47:0].
    using MW_TLAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MW_TLAT_U_fields_

  struct PC_MW_TLAT_U : ftl::mmio::Register<
      0x4006C0B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MW_TLAT_U_fields_::MW_TLAT,
      ftl::mmio::Reserved<16, 16>> {
    using MW_TLAT = PC_MW_TLAT_U_fields_::MW_TLAT;
  };

  // Performance Counter, Lower Master Write Latency Count
  struct PC_MW_TLAT_L_fields_ {
    // Total master write latency in AXI clock cycles. Lower 32 bits of MW_TLAT[47:0].
    using MW_TLAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_MW_TLAT_L_fields_

  struct PC_MW_TLAT_L : ftl::mmio::Register<
      0x4006C0BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_MW_TLAT_L_fields_::MW_TLAT> {
    using MW_TLAT = PC_MW_TLAT_L_fields_::MW_TLAT;
  };

  // Performance Counter, Upper Slave Read Total Non-Responding Time
  struct PC_SR_TNRT_U_fields_ {
    // Total slave read non-responding time in AXI clock cycles. Upper 16 bits of SR_TNRT[47:0].
    using SR_TNRT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TNRT_U_fields_

  struct PC_SR_TNRT_U : ftl::mmio::Register<
      0x4006C0C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TNRT_U_fields_::SR_TNRT,
      ftl::mmio::Reserved<16, 16>> {
    using SR_TNRT = PC_SR_TNRT_U_fields_::SR_TNRT;
  };

  // Performance Counter, Lower Slave Read Total Non-Responding Time
  struct PC_SR_TNRT_L_fields_ {
    // Total slave read non-responding time in AXI clock cycles. Lower 32 bits of SR_TNRT[47:0].
    using SR_TNRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SR_TNRT_L_fields_

  struct PC_SR_TNRT_L : ftl::mmio::Register<
      0x4006C0C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SR_TNRT_L_fields_::SR_TNRT> {
    using SR_TNRT = PC_SR_TNRT_L_fields_::SR_TNRT;
  };

  // Performance Counter, Upper Slave Write Total Non-Responding Time
  struct PC_SW_TNRT_U_fields_ {
    // Total slave write non-responding time in AXI clock cycles. Upper 16 bits of SW_TNRT[47:0].
    using SW_TNRT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TNRT_U_fields_

  struct PC_SW_TNRT_U : ftl::mmio::Register<
      0x4006C0C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TNRT_U_fields_::SW_TNRT,
      ftl::mmio::Reserved<16, 16>> {
    using SW_TNRT = PC_SW_TNRT_U_fields_::SW_TNRT;
  };

  // Performance Counter, Lower Slave Write Total Non-Responding Time
  struct PC_SW_TNRT_L_fields_ {
    // Total slave write non-responding time in AXI clock cycles. Lower 32 bits of SW_TNRT[47:0].
    using SW_TNRT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PC_SW_TNRT_L_fields_

  struct PC_SW_TNRT_L : ftl::mmio::Register<
      0x4006C0CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PC_SW_TNRT_L_fields_::SW_TNRT> {
    using SW_TNRT = PC_SW_TNRT_L_fields_::SW_TNRT;
  };

  // IEE Version ID Register 1
  struct VIDR1_fields_ {
    // Minor revision number for IEE.
    using MIN_REV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major revision number for IEE.
    using MAJ_REV = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ID for IEE.
    using IP_ID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VIDR1_fields_

  struct VIDR1 : ftl::mmio::Register<
      0x4006C0F0u,
      std::uint32_t,
      0x00340102u,
      ftl::mmio::RO,
      VIDR1_fields_::MIN_REV,
      VIDR1_fields_::MAJ_REV,
      VIDR1_fields_::IP_ID> {
    using MIN_REV = VIDR1_fields_::MIN_REV;
    using MAJ_REV = VIDR1_fields_::MAJ_REV;
    using IP_ID = VIDR1_fields_::IP_ID;
  };

  // IEE AES Version ID Register
  struct AESVID_fields_ {
    // AES revision number.
    using AESRN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // AES version ID.
    using AESVID = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AESVID_fields_

  struct AESVID : ftl::mmio::Register<
      0x4006C0F8u,
      std::uint32_t,
      0x00000020u,
      ftl::mmio::RO,
      AESVID_fields_::AESRN,
      AESVID_fields_::AESVID,
      ftl::mmio::Reserved<24, 8>> {
    using AESRN = AESVID_fields_::AESRN;
    using VALUE = AESVID_fields_::AESVID;
  };

  // IEE AES Test Mode Data Buffer
  struct AES_TST_DB_fields_ {
    // AES test mode data buffer.
    using AES_TST_DB0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AES_TST_DB_fields_

  template<std::uint32_t Index>
  struct AES_TST_DB : ftl::mmio::Register<
      0x4006CF00u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AES_TST_DB_fields_::AES_TST_DB0> {
    static_assert(Index < 32u, "AES_TST_DB: Index out of range");
    using AES_TST_DB0 = AES_TST_DB_fields_::AES_TST_DB0;
  };

  // IEE Region REGION Attribute Register.
  struct REGATTR_fields_ {
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
  };  // struct REGATTR_fields_

  template<std::uint32_t ClusterIndex>
  struct REGATTR : ftl::mmio::Register<
      0x4006C100u + (ClusterIndex * 0x100u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      REGATTR_fields_::KS,
      ftl::mmio::Reserved<3, 1>,
      REGATTR_fields_::MD,
      REGATTR_fields_::BYP,
      ftl::mmio::Reserved<24, 8>> {
    static_assert(ClusterIndex < 8u, "REGATTR: ClusterIndex out of range");
    using eKS = REGATTR_fields_::eKS;
    using eMD = REGATTR_fields_::eMD;
    using eBYP = REGATTR_fields_::eBYP;
    using KS = REGATTR_fields_::KS;
    using MD = REGATTR_fields_::MD;
    using BYP = REGATTR_fields_::BYP;
  };

  // IEE Region REGION Page Offset Register
  struct REGPO_fields_ {
    // This field represents a 4Kb page offset
    using PGOFF = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct REGPO_fields_

  template<std::uint32_t ClusterIndex>
  struct REGPO : ftl::mmio::Register<
      0x4006C108u + (ClusterIndex * 0x100u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      REGPO_fields_::PGOFF,
      ftl::mmio::Reserved<8, 24>> {
    static_assert(ClusterIndex < 8u, "REGPO: ClusterIndex out of range");
    using PGOFF = REGPO_fields_::PGOFF;
  };

  // IEE Region REGION Key 1 Register
  struct REGKEY1__fields_ {
    // Key 1.
    using KEY1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct REGKEY1__fields_

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct REGKEY1_ : ftl::mmio::Register<
      0x4006C140u + (ClusterIndex * 0x100u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      REGKEY1__fields_::KEY1> {
    static_assert(ClusterIndex < 8u, "REGKEY1_: ClusterIndex out of range");
    static_assert(ArrayIndex < 8u, "REGKEY1_: ArrayIndex out of range");
    using KEY1 = REGKEY1__fields_::KEY1;
  };

  // IEE Region REGION Key 2 Register
  struct REGKEY2__fields_ {
    // Key 2.
    using KEY2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct REGKEY2__fields_

  template<std::uint32_t ClusterIndex, std::uint32_t ArrayIndex>
  struct REGKEY2_ : ftl::mmio::Register<
      0x4006C180u + (ClusterIndex * 0x100u) + (ArrayIndex * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      REGKEY2__fields_::KEY2> {
    static_assert(ClusterIndex < 8u, "REGKEY2_: ClusterIndex out of range");
    static_assert(ArrayIndex < 8u, "REGKEY2_: ArrayIndex out of range");
    using KEY2 = REGKEY2__fields_::KEY2;
  };

};

}  // namespace regs