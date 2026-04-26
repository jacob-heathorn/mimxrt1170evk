#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// ASRC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::asrc {

// ASRC Control Register
struct ASRCTR_fields_ {
  enum class eASRCEN : std::uint32_t {
    // operation of ASRC disabled
    edisabled = 0,
    // operation ASRC is enabled
    eenabled = 1,
  };

  enum class eASREA : std::uint32_t {
    // operation of conversion A is disabled
    edisabled = 0,
    // operation of conversion A is enabled
    eenabled = 1,
  };

  enum class eASREB : std::uint32_t {
    // operation of conversion B is disabled
    edisabled = 0,
    // operation of conversion B is enabled
    eenabled = 1,
  };

  enum class eASREC : std::uint32_t {
    // operation of conversion C is disabled
    edisabled = 0,
    // operation of conversion C is enabled
    eenabled = 1,
  };

  enum class eSRST : std::uint32_t {
    // ASRC Software reset cleared
    ecleared = 0,
    // ASRC Software reset generated. NOTE: This is a self-clear bit
    ereset = 1,
  };

  enum class eIDRA : std::uint32_t {
    // ASRC internal measured ratio is used
    eidra_measured = 0,
    // Ideal ratio from the interface register ASRIDRHA, ASRIDRLA is used
    eidra_ideal = 1,
  };

  enum class eUSRA : std::uint32_t {
    // Do not use ratio as the input to ASRC for pair A
    euse_ratio_no = 0,
    // Use ratio as the input to ASRC for pair A
    euse_ratio = 1,
  };

  enum class eIDRB : std::uint32_t {
    // ASRC internal measured ratio is used
    eidra_measured = 0,
    // Ideal ratio from the interface register ASRIDRHB, ASRIDRLB is used
    eidra_ideal = 1,
  };

  enum class eUSRB : std::uint32_t {
    // Do not use ratio as the input to ASRC for pair B
    euse_ratio_no = 0,
    // Use ratio as the input to ASRC for pair B
    euse_ratio = 1,
  };

  enum class eIDRC : std::uint32_t {
    // ASRC internal measured ratio is used
    eidra_measured = 0,
    // Ideal ratio from the interface register ASRIDRHC, ASRIDRLC is used
    eidra_ideal = 1,
  };

  enum class eUSRC : std::uint32_t {
    // Do not use ratio as the input to ASRC for pair C
    euse_ratio_no = 0,
    // Use ratio as the input to ASRC for pair C
    euse_ratio = 1,
  };

  enum class eATSA : std::uint32_t {
    // Pair A does not automatically update its pre-processing and post-processing options
    eno_auto_select = 0,
    // Pair A automatically updates its pre-processing and post-processing options
    eauto_select = 1,
  };

  enum class eATSB : std::uint32_t {
    // Pair B does not automatically update its pre-processing and post-processing options
    eno_auto_select = 0,
    // Pair B automatically updates its pre-processing and post-processing options
    eauto_select = 1,
  };

  enum class eATSC : std::uint32_t {
    // Pair C does not automatically update its pre-processing and post-processing options
    eno_auto_select = 0,
    // Pair C automatically updates its pre-processing and post-processing options
    eauto_select = 1,
  };

  // ASRCEN
  using ASRCEN = ftl::mmio::Field<1, 0, eASRCEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASREA
  using ASREA = ftl::mmio::Field<1, 1, eASREA, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASREB
  using ASREB = ftl::mmio::Field<1, 2, eASREB, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASREC
  using ASREC = ftl::mmio::Field<1, 3, eASREC, ftl::mmio::RW, ftl::mmio::Normal>;
  // SRST
  using SRST = ftl::mmio::Field<1, 4, eSRST, ftl::mmio::WO, ftl::mmio::Normal>;
  // IDRA
  using IDRA = ftl::mmio::Field<1, 13, eIDRA, ftl::mmio::RW, ftl::mmio::Normal>;
  // USRA
  using USRA = ftl::mmio::Field<1, 14, eUSRA, ftl::mmio::RW, ftl::mmio::Normal>;
  // IDRB
  using IDRB = ftl::mmio::Field<1, 15, eIDRB, ftl::mmio::RW, ftl::mmio::Normal>;
  // USRB
  using USRB = ftl::mmio::Field<1, 16, eUSRB, ftl::mmio::RW, ftl::mmio::Normal>;
  // IDRC
  using IDRC = ftl::mmio::Field<1, 17, eIDRC, ftl::mmio::RW, ftl::mmio::Normal>;
  // USRC
  using USRC = ftl::mmio::Field<1, 18, eUSRC, ftl::mmio::RW, ftl::mmio::Normal>;
  // ATSA
  using ATSA = ftl::mmio::Field<1, 20, eATSA, ftl::mmio::RW, ftl::mmio::Normal>;
  // ATSB
  using ATSB = ftl::mmio::Field<1, 21, eATSB, ftl::mmio::RW, ftl::mmio::Normal>;
  // ATSC
  using ATSC = ftl::mmio::Field<1, 22, eATSC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRCTR_fields_

struct ASRCTR : ftl::mmio::Register<
    0x40414000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRCTR_fields_::ASRCEN,
    ASRCTR_fields_::ASREA,
    ASRCTR_fields_::ASREB,
    ASRCTR_fields_::ASREC,
    ASRCTR_fields_::SRST,
    ftl::mmio::Reserved<8, 5>,
    ASRCTR_fields_::IDRA,
    ASRCTR_fields_::USRA,
    ASRCTR_fields_::IDRB,
    ASRCTR_fields_::USRB,
    ASRCTR_fields_::IDRC,
    ASRCTR_fields_::USRC,
    ftl::mmio::Reserved<1, 19>,
    ASRCTR_fields_::ATSA,
    ASRCTR_fields_::ATSB,
    ASRCTR_fields_::ATSC,
    ftl::mmio::Reserved<9, 23>> {
  using eASRCEN = ASRCTR_fields_::eASRCEN;
  using eASREA = ASRCTR_fields_::eASREA;
  using eASREB = ASRCTR_fields_::eASREB;
  using eASREC = ASRCTR_fields_::eASREC;
  using eSRST = ASRCTR_fields_::eSRST;
  using eIDRA = ASRCTR_fields_::eIDRA;
  using eUSRA = ASRCTR_fields_::eUSRA;
  using eIDRB = ASRCTR_fields_::eIDRB;
  using eUSRB = ASRCTR_fields_::eUSRB;
  using eIDRC = ASRCTR_fields_::eIDRC;
  using eUSRC = ASRCTR_fields_::eUSRC;
  using eATSA = ASRCTR_fields_::eATSA;
  using eATSB = ASRCTR_fields_::eATSB;
  using eATSC = ASRCTR_fields_::eATSC;
  using ASRCEN = ASRCTR_fields_::ASRCEN;
  using ASREA = ASRCTR_fields_::ASREA;
  using ASREB = ASRCTR_fields_::ASREB;
  using ASREC = ASRCTR_fields_::ASREC;
  using SRST = ASRCTR_fields_::SRST;
  using IDRA = ASRCTR_fields_::IDRA;
  using USRA = ASRCTR_fields_::USRA;
  using IDRB = ASRCTR_fields_::IDRB;
  using USRB = ASRCTR_fields_::USRB;
  using IDRC = ASRCTR_fields_::IDRC;
  using USRC = ASRCTR_fields_::USRC;
  using ATSA = ASRCTR_fields_::ATSA;
  using ATSB = ASRCTR_fields_::ATSB;
  using ATSC = ASRCTR_fields_::ATSC;
};

// ASRC Interrupt Enable Register
struct ASRIER_fields_ {
  enum class eADIEA : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  enum class eADIEB : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  enum class eADIEC : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  enum class eADOEA : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  enum class eADOEB : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  enum class eADOEC : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  enum class eAOLIE : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  enum class eAFPWE : std::uint32_t {
    // interrupt disabled
    edisabled = 0,
    // interrupt enabled
    eenabled = 1,
  };

  // ADIEA
  using ADIEA = ftl::mmio::Field<1, 0, eADIEA, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADIEB
  using ADIEB = ftl::mmio::Field<1, 1, eADIEB, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADIEC
  using ADIEC = ftl::mmio::Field<1, 2, eADIEC, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADOEA
  using ADOEA = ftl::mmio::Field<1, 3, eADOEA, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADOEB
  using ADOEB = ftl::mmio::Field<1, 4, eADOEB, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADOEC
  using ADOEC = ftl::mmio::Field<1, 5, eADOEC, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOLIE
  using AOLIE = ftl::mmio::Field<1, 6, eAOLIE, ftl::mmio::RW, ftl::mmio::Normal>;
  // AFPWE
  using AFPWE = ftl::mmio::Field<1, 7, eAFPWE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRIER_fields_

struct ASRIER : ftl::mmio::Register<
    0x40414004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRIER_fields_::ADIEA,
    ASRIER_fields_::ADIEB,
    ASRIER_fields_::ADIEC,
    ASRIER_fields_::ADOEA,
    ASRIER_fields_::ADOEB,
    ASRIER_fields_::ADOEC,
    ASRIER_fields_::AOLIE,
    ASRIER_fields_::AFPWE,
    ftl::mmio::Reserved<24, 8>> {
  using eADIEA = ASRIER_fields_::eADIEA;
  using eADIEB = ASRIER_fields_::eADIEB;
  using eADIEC = ASRIER_fields_::eADIEC;
  using eADOEA = ASRIER_fields_::eADOEA;
  using eADOEB = ASRIER_fields_::eADOEB;
  using eADOEC = ASRIER_fields_::eADOEC;
  using eAOLIE = ASRIER_fields_::eAOLIE;
  using eAFPWE = ASRIER_fields_::eAFPWE;
  using ADIEA = ASRIER_fields_::ADIEA;
  using ADIEB = ASRIER_fields_::ADIEB;
  using ADIEC = ASRIER_fields_::ADIEC;
  using ADOEA = ASRIER_fields_::ADOEA;
  using ADOEB = ASRIER_fields_::ADOEB;
  using ADOEC = ASRIER_fields_::ADOEC;
  using AOLIE = ASRIER_fields_::AOLIE;
  using AFPWE = ASRIER_fields_::AFPWE;
};

// ASRC Channel Number Configuration Register
struct ASRCNCR_fields_ {
  enum class eANCA : std::uint32_t {
    // 0 channels in A (Pair A is disabled)
    ezero_chan = 0,
    // 1 channel in A
    eone_chan = 1,
    // 2 channels in A
    etwo_chan = 2,
    // 3 channels in A
    ethree_chan = 3,
    // 4 channels in A
    efour_chan = 4,
    // 5 channels in A
    efive_chan = 5,
    // 6 channels in A
    esix_chan = 6,
    // 7 channels in A
    eseven_chan = 7,
    // 8 channels in A
    eeight_chan = 8,
    // 9 channels in A
    enine_chan = 9,
    // 10 channels in A
    eten_chan = 10,
    // Should not be used.
    enot_used_11 = 11,
    // Should not be used.
    enot_used_12 = 12,
    // Should not be used.
    enot_used_13 = 13,
    // Should not be used.
    enot_used_14 = 14,
    // Should not be used.
    enot_used_15 = 15,
  };

  enum class eANCB : std::uint32_t {
    // 0 channels in B (Pair B is disabled)
    ezero_chan = 0,
    // 1 channel in B
    eone_chan = 1,
    // 2 channels in B
    etwo_chan = 2,
    // 3 channels in B
    ethree_chan = 3,
    // 4 channels in B
    efour_chan = 4,
    // 5 channels in B
    efive_chan = 5,
    // 6 channels in B
    esix_chan = 6,
    // 7 channels in B
    eseven_chan = 7,
    // 8 channels in B
    eeight_chan = 8,
    // 9 channels in B
    enine_chan = 9,
    // 10 channels in B
    eten_chan = 10,
    // Should not be used.
    enot_used_11 = 11,
    // Should not be used.
    enot_used_12 = 12,
    // Should not be used.
    enot_used_13 = 13,
    // Should not be used.
    enot_used_14 = 14,
    // Should not be used.
    enot_used_15 = 15,
  };

  enum class eANCC : std::uint32_t {
    // 0 channels in C (Pair C is disabled)
    ezero_chan = 0,
    // 1 channel in C
    eone_chan = 1,
    // 2 channels in C
    etwo_chan = 2,
    // 3 channels in C
    ethree_chan = 3,
    // 4 channels in C
    efour_chan = 4,
    // 5 channels in C
    efive_chan = 5,
    // 6 channels in C
    esix_chan = 6,
    // 7 channels in C
    eseven_chan = 7,
    // 8 channels in C
    eeight_chan = 8,
    // 9 channels in C
    enine_chan = 9,
    // 10 channels in C
    eten_chan = 10,
    // Should not be used.
    enot_used_11 = 11,
    // Should not be used.
    enot_used_12 = 12,
    // Should not be used.
    enot_used_13 = 13,
    // Should not be used.
    enot_used_14 = 14,
    // Should not be used.
    enot_used_15 = 15,
  };

  // ANCA
  using ANCA = ftl::mmio::Field<4, 0, eANCA, ftl::mmio::RW, ftl::mmio::Normal>;
  // ANCB
  using ANCB = ftl::mmio::Field<4, 4, eANCB, ftl::mmio::RW, ftl::mmio::Normal>;
  // ANCC
  using ANCC = ftl::mmio::Field<4, 8, eANCC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRCNCR_fields_

struct ASRCNCR : ftl::mmio::Register<
    0x4041400Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRCNCR_fields_::ANCA,
    ASRCNCR_fields_::ANCB,
    ASRCNCR_fields_::ANCC,
    ftl::mmio::Reserved<20, 12>> {
  using eANCA = ASRCNCR_fields_::eANCA;
  using eANCB = ASRCNCR_fields_::eANCB;
  using eANCC = ASRCNCR_fields_::eANCC;
  using ANCA = ASRCNCR_fields_::ANCA;
  using ANCB = ASRCNCR_fields_::ANCB;
  using ANCC = ASRCNCR_fields_::ANCC;
};

// ASRC Filter Configuration Status Register
struct ASRCFG_fields_ {
  enum class ePREMODA : std::uint32_t {
    // Select Upsampling-by-2
    eupsamp_2 = 0,
    // Select Direct-Connection
    edirect_connect = 1,
    // Select Downsampling-by-2
    edownsamp_2 = 2,
    // Select passthrough mode. In this case, POSTMODA[1:0] have no use.
    epassthru = 3,
  };

  enum class ePOSTMODA : std::uint32_t {
    // Select Upsampling-by-2
    eupsamp_2 = 0,
    // Select Direct-Connection
    edirect_connect = 1,
    // Select Downsampling-by-2
    edownsamp_2 = 2,
  };

  enum class ePREMODB : std::uint32_t {
    // Select Upsampling-by-2
    eupsamp_2 = 0,
    // Select Direct-Connection
    edirect_connect = 1,
    // Select Downsampling-by-2
    edownsamp_2 = 2,
    // Select passthrough mode. In this case, POSTMODB[1:0] have no use.
    epassthru = 3,
  };

  enum class ePOSTMODB : std::uint32_t {
    // Select Upsampling-by-2
    eupsamp_2 = 0,
    // Select Direct-Connection
    edirect_connect = 1,
    // Select Downsampling-by-2
    edownsamp_2 = 2,
  };

  enum class ePREMODC : std::uint32_t {
    // Select Upsampling-by-2
    eupsamp_2 = 0,
    // Select Direct-Connection
    edirect_connect = 1,
    // Select Downsampling-by-2
    edownsamp_2 = 2,
    // Select passthrough mode. In this case, POSTMODC[1:0] have no use.
    epassthru = 3,
  };

  enum class ePOSTMODC : std::uint32_t {
    // Select Upsampling-by-2 as defined in Signal Processing Flow.
    eupsamp_2 = 0,
    // Select Direct-Connection as defined in Signal Processing Flow.
    edirect_connect = 1,
    // Select Downsampling-by-2 as defined in Signal Processing Flow.
    edownsamp_2 = 2,
  };

  enum class eNDPRA : std::uint32_t {
    // Use default parameters for RAM-stored parameters. Override any parameters already in RAM.
    euse_default = 0,
    // Don't use default parameters for RAM-stored parameters. Use the parameters already stored in RAM.
    enot_default = 1,
  };

  enum class eNDPRB : std::uint32_t {
    // Use default parameters for RAM-stored parameters. Override any parameters already in RAM.
    euse_default = 0,
    // Don't use default parameters for RAM-stored parameter. Use the parameters already stored in RAM.
    enot_default = 1,
  };

  enum class eNDPRC : std::uint32_t {
    // Use default parameters for RAM-stored parameters. Override any parameters already in RAM.
    euse_default = 0,
    // Don't use default parameters for RAM-stored parameters. Use the parameters already stored in RAM.
    enot_default = 1,
  };

  enum class eINIRQA : std::uint32_t {
    // Initialization for Conversion Pair A not served
    einit_notserved = 0,
    // Initialization for Conversion Pair A served
    einit_served = 1,
  };

  enum class eINIRQB : std::uint32_t {
    // Initialization for Conversion Pair B not served
    einit_notserved = 0,
    // Initialization for Conversion Pair B served
    einit_served = 1,
  };

  enum class eINIRQC : std::uint32_t {
    // Initialization for Conversion Pair C not served
    einit_notserved = 0,
    // Initialization for Conversion Pair C served
    einit_served = 1,
  };

  // PREMODA
  using PREMODA = ftl::mmio::Field<2, 6, ePREMODA, ftl::mmio::RW, ftl::mmio::Normal>;
  // POSTMODA
  using POSTMODA = ftl::mmio::Field<2, 8, ePOSTMODA, ftl::mmio::RW, ftl::mmio::Normal>;
  // PREMODB
  using PREMODB = ftl::mmio::Field<2, 10, ePREMODB, ftl::mmio::RW, ftl::mmio::Normal>;
  // POSTMODB
  using POSTMODB = ftl::mmio::Field<2, 12, ePOSTMODB, ftl::mmio::RW, ftl::mmio::Normal>;
  // PREMODC
  using PREMODC = ftl::mmio::Field<2, 14, ePREMODC, ftl::mmio::RW, ftl::mmio::Normal>;
  // POSTMODC
  using POSTMODC = ftl::mmio::Field<2, 16, ePOSTMODC, ftl::mmio::RW, ftl::mmio::Normal>;
  // NDPRA
  using NDPRA = ftl::mmio::Field<1, 18, eNDPRA, ftl::mmio::RW, ftl::mmio::Normal>;
  // NDPRB
  using NDPRB = ftl::mmio::Field<1, 19, eNDPRB, ftl::mmio::RW, ftl::mmio::Normal>;
  // NDPRC
  using NDPRC = ftl::mmio::Field<1, 20, eNDPRC, ftl::mmio::RW, ftl::mmio::Normal>;
  // INIRQA
  using INIRQA = ftl::mmio::Field<1, 21, eINIRQA, ftl::mmio::RO, ftl::mmio::Normal>;
  // INIRQB
  using INIRQB = ftl::mmio::Field<1, 22, eINIRQB, ftl::mmio::RO, ftl::mmio::Normal>;
  // INIRQC
  using INIRQC = ftl::mmio::Field<1, 23, eINIRQC, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRCFG_fields_

struct ASRCFG : ftl::mmio::Register<
    0x40414010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<6, 0>,
    ASRCFG_fields_::PREMODA,
    ASRCFG_fields_::POSTMODA,
    ASRCFG_fields_::PREMODB,
    ASRCFG_fields_::POSTMODB,
    ASRCFG_fields_::PREMODC,
    ASRCFG_fields_::POSTMODC,
    ASRCFG_fields_::NDPRA,
    ASRCFG_fields_::NDPRB,
    ASRCFG_fields_::NDPRC,
    ASRCFG_fields_::INIRQA,
    ASRCFG_fields_::INIRQB,
    ASRCFG_fields_::INIRQC,
    ftl::mmio::Reserved<8, 24>> {
  using ePREMODA = ASRCFG_fields_::ePREMODA;
  using ePOSTMODA = ASRCFG_fields_::ePOSTMODA;
  using ePREMODB = ASRCFG_fields_::ePREMODB;
  using ePOSTMODB = ASRCFG_fields_::ePOSTMODB;
  using ePREMODC = ASRCFG_fields_::ePREMODC;
  using ePOSTMODC = ASRCFG_fields_::ePOSTMODC;
  using eNDPRA = ASRCFG_fields_::eNDPRA;
  using eNDPRB = ASRCFG_fields_::eNDPRB;
  using eNDPRC = ASRCFG_fields_::eNDPRC;
  using eINIRQA = ASRCFG_fields_::eINIRQA;
  using eINIRQB = ASRCFG_fields_::eINIRQB;
  using eINIRQC = ASRCFG_fields_::eINIRQC;
  using PREMODA = ASRCFG_fields_::PREMODA;
  using POSTMODA = ASRCFG_fields_::POSTMODA;
  using PREMODB = ASRCFG_fields_::PREMODB;
  using POSTMODB = ASRCFG_fields_::POSTMODB;
  using PREMODC = ASRCFG_fields_::PREMODC;
  using POSTMODC = ASRCFG_fields_::POSTMODC;
  using NDPRA = ASRCFG_fields_::NDPRA;
  using NDPRB = ASRCFG_fields_::NDPRB;
  using NDPRC = ASRCFG_fields_::NDPRC;
  using INIRQA = ASRCFG_fields_::INIRQA;
  using INIRQB = ASRCFG_fields_::INIRQB;
  using INIRQC = ASRCFG_fields_::INIRQC;
};

// ASRC Clock Source Register
struct ASRCSR_fields_ {
  enum class eAICSA : std::uint32_t {
    // bit clock 0
    ebitclk0 = 0,
    // bit clock 1
    ebitclk1 = 1,
    // bit clock 2
    ebitclk2 = 2,
    // bit clock 3
    ebitclk3 = 3,
    // bit clock 4
    ebitclk4 = 4,
    // bit clock 5
    ebitclk5 = 5,
    // bit clock 6
    ebitclk6 = 6,
    // bit clock 7
    ebitclk7 = 7,
    // bit clock 8
    ebitclk8 = 8,
    // bit clock 9
    ebitclk9 = 9,
    // bit clock A
    ebitclka = 10,
    // bit clock B
    ebitclkb = 11,
    // bit clock C
    ebitclkc = 12,
    // bit clock D
    ebitclkd = 13,
    // bit clock E
    ebitclke = 14,
    // clock disabled, connected to zero
    eclk_disabled = 15,
  };

  enum class eAICSB : std::uint32_t {
    // bit clock 0
    ebitclk0 = 0,
    // bit clock 1
    ebitclk1 = 1,
    // bit clock 2
    ebitclk2 = 2,
    // bit clock 3
    ebitclk3 = 3,
    // bit clock 4
    ebitclk4 = 4,
    // bit clock 5
    ebitclk5 = 5,
    // bit clock 6
    ebitclk6 = 6,
    // bit clock 7
    ebitclk7 = 7,
    // bit clock 8
    ebitclk8 = 8,
    // bit clock 9
    ebitclk9 = 9,
    // bit clock A
    ebitclka = 10,
    // bit clock B
    ebitclkb = 11,
    // bit clock C
    ebitclkc = 12,
    // bit clock D
    ebitclkd = 13,
    // bit clock E
    ebitclke = 14,
    // clock disabled, connected to zero
    eclk_disabled = 15,
  };

  enum class eAICSC : std::uint32_t {
    // bit clock 0
    ebitclk0 = 0,
    // bit clock 1
    ebitclk1 = 1,
    // bit clock 2
    ebitclk2 = 2,
    // bit clock 3
    ebitclk3 = 3,
    // bit clock 4
    ebitclk4 = 4,
    // bit clock 5
    ebitclk5 = 5,
    // bit clock 6
    ebitclk6 = 6,
    // bit clock 7
    ebitclk7 = 7,
    // bit clock 8
    ebitclk8 = 8,
    // bit clock 9
    ebitclk9 = 9,
    // bit clock A
    ebitclka = 10,
    // bit clock B
    ebitclkb = 11,
    // bit clock C
    ebitclkc = 12,
    // bit clock D
    ebitclkd = 13,
    // bit clock E
    ebitclke = 14,
    // clock disabled, connected to zero
    eclk_disabled = 15,
  };

  enum class eAOCSA : std::uint32_t {
    // bit clock 0
    ebitclk0 = 0,
    // bit clock 1
    ebitclk1 = 1,
    // bit clock 2
    ebitclk2 = 2,
    // bit clock 3
    ebitclk3 = 3,
    // bit clock 4
    ebitclk4 = 4,
    // bit clock 5
    ebitclk5 = 5,
    // bit clock 6
    ebitclk6 = 6,
    // bit clock 7
    ebitclk7 = 7,
    // bit clock 8
    ebitclk8 = 8,
    // bit clock 9
    ebitclk9 = 9,
    // bit clock A
    ebitclka = 10,
    // bit clock B
    ebitclkb = 11,
    // bit clock C
    ebitclkc = 12,
    // bit clock D
    ebitclkd = 13,
    // bit clock E
    ebitclke = 14,
    // clock disabled, connected to zero
    eclk_disabled = 15,
  };

  enum class eAOCSB : std::uint32_t {
    // bit clock 0
    ebitclk0 = 0,
    // bit clock 1
    ebitclk1 = 1,
    // bit clock 2
    ebitclk2 = 2,
    // bit clock 3
    ebitclk3 = 3,
    // bit clock 4
    ebitclk4 = 4,
    // bit clock 5
    ebitclk5 = 5,
    // bit clock 6
    ebitclk6 = 6,
    // bit clock 7
    ebitclk7 = 7,
    // bit clock 8
    ebitclk8 = 8,
    // bit clock 9
    ebitclk9 = 9,
    // bit clock A
    ebitclka = 10,
    // bit clock B
    ebitclkb = 11,
    // bit clock C
    ebitclkc = 12,
    // bit clock D
    ebitclkd = 13,
    // bit clock E
    ebitclke = 14,
    // clock disabled, connected to zero
    eclk_disabled = 15,
  };

  enum class eAOCSC : std::uint32_t {
    // bit clock 0
    ebitclk0 = 0,
    // bit clock 1
    ebitclk1 = 1,
    // bit clock 2
    ebitclk2 = 2,
    // bit clock 3
    ebitclk3 = 3,
    // bit clock 4
    ebitclk4 = 4,
    // bit clock 5
    ebitclk5 = 5,
    // bit clock 6
    ebitclk6 = 6,
    // bit clock 7
    ebitclk7 = 7,
    // bit clock 8
    ebitclk8 = 8,
    // bit clock 9
    ebitclk9 = 9,
    // bit clock A
    ebitclka = 10,
    // bit clock B
    ebitclkb = 11,
    // bit clock C
    ebitclkc = 12,
    // bit clock D
    ebitclkd = 13,
    // bit clock E
    ebitclke = 14,
    // clock disabled, connected to zero
    eclk_disabled = 15,
  };

  // AICSA
  using AICSA = ftl::mmio::Field<4, 0, eAICSA, ftl::mmio::RW, ftl::mmio::Normal>;
  // AICSB
  using AICSB = ftl::mmio::Field<4, 4, eAICSB, ftl::mmio::RW, ftl::mmio::Normal>;
  // AICSC
  using AICSC = ftl::mmio::Field<4, 8, eAICSC, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCSA
  using AOCSA = ftl::mmio::Field<4, 12, eAOCSA, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCSB
  using AOCSB = ftl::mmio::Field<4, 16, eAOCSB, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCSC
  using AOCSC = ftl::mmio::Field<4, 20, eAOCSC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRCSR_fields_

struct ASRCSR : ftl::mmio::Register<
    0x40414014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRCSR_fields_::AICSA,
    ASRCSR_fields_::AICSB,
    ASRCSR_fields_::AICSC,
    ASRCSR_fields_::AOCSA,
    ASRCSR_fields_::AOCSB,
    ASRCSR_fields_::AOCSC,
    ftl::mmio::Reserved<8, 24>> {
  using eAICSA = ASRCSR_fields_::eAICSA;
  using eAICSB = ASRCSR_fields_::eAICSB;
  using eAICSC = ASRCSR_fields_::eAICSC;
  using eAOCSA = ASRCSR_fields_::eAOCSA;
  using eAOCSB = ASRCSR_fields_::eAOCSB;
  using eAOCSC = ASRCSR_fields_::eAOCSC;
  using AICSA = ASRCSR_fields_::AICSA;
  using AICSB = ASRCSR_fields_::AICSB;
  using AICSC = ASRCSR_fields_::AICSC;
  using AOCSA = ASRCSR_fields_::AOCSA;
  using AOCSB = ASRCSR_fields_::AOCSB;
  using AOCSC = ASRCSR_fields_::AOCSC;
};

// ASRC Clock Divider Register 1
struct ASRCDR1_fields_ {
  // AICPA
  using AICPA = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AICDA
  using AICDA = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AICPB
  using AICPB = ftl::mmio::Field<3, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AICDB
  using AICDB = ftl::mmio::Field<3, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCPA
  using AOCPA = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCDA
  using AOCDA = ftl::mmio::Field<3, 15, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCPB
  using AOCPB = ftl::mmio::Field<3, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCDB
  using AOCDB = ftl::mmio::Field<3, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRCDR1_fields_

struct ASRCDR1 : ftl::mmio::Register<
    0x40414018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRCDR1_fields_::AICPA,
    ASRCDR1_fields_::AICDA,
    ASRCDR1_fields_::AICPB,
    ASRCDR1_fields_::AICDB,
    ASRCDR1_fields_::AOCPA,
    ASRCDR1_fields_::AOCDA,
    ASRCDR1_fields_::AOCPB,
    ASRCDR1_fields_::AOCDB,
    ftl::mmio::Reserved<8, 24>> {
  using AICPA = ASRCDR1_fields_::AICPA;
  using AICDA = ASRCDR1_fields_::AICDA;
  using AICPB = ASRCDR1_fields_::AICPB;
  using AICDB = ASRCDR1_fields_::AICDB;
  using AOCPA = ASRCDR1_fields_::AOCPA;
  using AOCDA = ASRCDR1_fields_::AOCDA;
  using AOCPB = ASRCDR1_fields_::AOCPB;
  using AOCDB = ASRCDR1_fields_::AOCDB;
};

// ASRC Clock Divider Register 2
struct ASRCDR2_fields_ {
  // AICPC
  using AICPC = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AICDC
  using AICDC = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCPC
  using AOCPC = ftl::mmio::Field<3, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // AOCDC
  using AOCDC = ftl::mmio::Field<3, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRCDR2_fields_

struct ASRCDR2 : ftl::mmio::Register<
    0x4041401Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRCDR2_fields_::AICPC,
    ASRCDR2_fields_::AICDC,
    ASRCDR2_fields_::AOCPC,
    ASRCDR2_fields_::AOCDC,
    ftl::mmio::Reserved<20, 12>> {
  using AICPC = ASRCDR2_fields_::AICPC;
  using AICDC = ASRCDR2_fields_::AICDC;
  using AOCPC = ASRCDR2_fields_::AOCPC;
  using AOCDC = ASRCDR2_fields_::AOCDC;
};

// ASRC Status Register
struct ASRSTR_fields_ {
  enum class eAIDEA : std::uint32_t {
    // The threshold has been met and no data input A interrupt is generated
    ethresh_met = 0,
    // When AIDEA is set, the ASRC generates data input A interrupt request to the processor if ASRIER[AIDEA] = 1
    elessthan_thresh = 1,
  };

  enum class eAIDEB : std::uint32_t {
    // The threshold has been met and no data input B interrupt is generated
    ethresh_met = 0,
    // When AIDEB is set, the ASRC generates data input B interrupt request to the processor if ASRIER[AIDEB] = 1
    elessthan_thresh = 1,
  };

  enum class eAIDEC : std::uint32_t {
    // The threshold has been met and no data input C interrupt is generated
    ethresh_met = 0,
    // When AIDEC is set, the ASRC generates data input C interrupt request to the processor if ASRIER[AIDEC] = 1
    elessthan_thresh = 1,
  };

  enum class eAODFA : std::uint32_t {
    // The threshold has not yet been met and no data output A interrupt is generated
    ethresh_notmet = 0,
    // When AODFA is set, the ASRC generates data output A interrupt request to the processor if ASRIER[ADOEA] = 1
    egreaterthan_thresh = 1,
  };

  enum class eAODFB : std::uint32_t {
    // The threshold has not yet been met and no data output B interrupt is generated
    ethresh_notmet = 0,
    // When AODFB is set, the ASRC generates data output B interrupt request to the processor if ASRIER[ADOEB] = 1
    egreaterthan_thresh = 1,
  };

  enum class eAODFC : std::uint32_t {
    // The threshold has not yet been met and no data output C interrupt is generated
    ethresh_notmet = 0,
    // When AODFC is set, the ASRC generates data output C interrupt request to the processor if ASRIER[ADOEC] = 1
    egreaterthan_thresh = 1,
  };

  enum class eAOLE : std::uint32_t {
    // No overload
    etask_ok = 0,
    // Task rate is too high
    etoo_high = 1,
  };

  enum class eFPWT : std::uint32_t {
    // ASRC is not in wait state
    eno_waitstate = 0,
    // ASRC is in wait state
    ewaitstate = 1,
  };

  enum class eAIDUA : std::uint32_t {
    // No Underflow in Input data buffer A
    eno_underflow = 0,
    // Underflow in Input data buffer A
    eunderflow = 1,
  };

  enum class eAIDUB : std::uint32_t {
    // No Underflow in Input data buffer B
    eno_underflow = 0,
    // Underflow in Input data buffer B
    eunderflow = 1,
  };

  enum class eAIDUC : std::uint32_t {
    // No Underflow in Input data buffer C
    eno_underflow = 0,
    // Underflow in Input data buffer C
    eunderflow = 1,
  };

  enum class eAODOA : std::uint32_t {
    // No Overflow in Output data buffer A
    eno_overflow = 0,
    // Overflow in Output data buffer A
    eoverflow = 1,
  };

  enum class eAODOB : std::uint32_t {
    // No Overflow in Output data buffer B
    eno_overflow = 0,
    // Overflow in Output data buffer B
    eoverflow = 1,
  };

  enum class eAODOC : std::uint32_t {
    // No Overflow in Output data buffer C
    eno_overflow = 0,
    // Overflow in Output data buffer C
    eoverflow = 1,
  };

  enum class eAIOLA : std::uint32_t {
    // Pair A input task is not oveloaded
    eno_overload = 0,
    // Pair A input task is oveloaded
    eoverload = 1,
  };

  enum class eAIOLB : std::uint32_t {
    // Pair B input task is not oveloaded
    eno_overload = 0,
    // Pair B input task is oveloaded
    eoverload = 1,
  };

  enum class eAIOLC : std::uint32_t {
    // Pair C input task is not oveloaded
    eno_overload = 0,
    // Pair C input task is oveloaded
    eoverload = 1,
  };

  enum class eAOOLA : std::uint32_t {
    // Pair A output task is not oveloaded
    eno_overload = 0,
    // Pair A output task is oveloaded
    eoverload = 1,
  };

  enum class eAOOLB : std::uint32_t {
    // Pair B output task is not oveloaded
    eno_overload = 0,
    // Pair B output task is oveloaded
    eoverload = 1,
  };

  enum class eAOOLC : std::uint32_t {
    // Pair C output task is not oveloaded
    eno_overload = 0,
    // Pair C output task is oveloaded
    eoverload = 1,
  };

  enum class eATQOL : std::uint32_t {
    // Task queue FIFO logic is not oveloaded
    eno_overload = 0,
    // Task queue FIFO logic is oveloaded
    eoverload = 1,
  };

  enum class eDSLCNT : std::uint32_t {
    // New DSL counter information is in the process of storage into the internal ASRC FIFO
    edslcnt_proc = 0,
    // New DSL counter information is stored in the internal ASRC FIFO
    edslcnt_stored = 1,
  };

  // AIDEA
  using AIDEA = ftl::mmio::Field<1, 0, eAIDEA, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIDEB
  using AIDEB = ftl::mmio::Field<1, 1, eAIDEB, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIDEC
  using AIDEC = ftl::mmio::Field<1, 2, eAIDEC, ftl::mmio::RO, ftl::mmio::Normal>;
  // AODFA
  using AODFA = ftl::mmio::Field<1, 3, eAODFA, ftl::mmio::RO, ftl::mmio::Normal>;
  // AODFB
  using AODFB = ftl::mmio::Field<1, 4, eAODFB, ftl::mmio::RO, ftl::mmio::Normal>;
  // AODFC
  using AODFC = ftl::mmio::Field<1, 5, eAODFC, ftl::mmio::RO, ftl::mmio::Normal>;
  // AOLE
  using AOLE = ftl::mmio::Field<1, 6, eAOLE, ftl::mmio::RO, ftl::mmio::Normal>;
  // FPWT
  using FPWT = ftl::mmio::Field<1, 7, eFPWT, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIDUA
  using AIDUA = ftl::mmio::Field<1, 8, eAIDUA, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIDUB
  using AIDUB = ftl::mmio::Field<1, 9, eAIDUB, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIDUC
  using AIDUC = ftl::mmio::Field<1, 10, eAIDUC, ftl::mmio::RO, ftl::mmio::Normal>;
  // AODOA
  using AODOA = ftl::mmio::Field<1, 11, eAODOA, ftl::mmio::RO, ftl::mmio::Normal>;
  // AODOB
  using AODOB = ftl::mmio::Field<1, 12, eAODOB, ftl::mmio::RO, ftl::mmio::Normal>;
  // AODOC
  using AODOC = ftl::mmio::Field<1, 13, eAODOC, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIOLA
  using AIOLA = ftl::mmio::Field<1, 14, eAIOLA, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIOLB
  using AIOLB = ftl::mmio::Field<1, 15, eAIOLB, ftl::mmio::RO, ftl::mmio::Normal>;
  // AIOLC
  using AIOLC = ftl::mmio::Field<1, 16, eAIOLC, ftl::mmio::RO, ftl::mmio::Normal>;
  // AOOLA
  using AOOLA = ftl::mmio::Field<1, 17, eAOOLA, ftl::mmio::RO, ftl::mmio::Normal>;
  // AOOLB
  using AOOLB = ftl::mmio::Field<1, 18, eAOOLB, ftl::mmio::RO, ftl::mmio::Normal>;
  // AOOLC
  using AOOLC = ftl::mmio::Field<1, 19, eAOOLC, ftl::mmio::RO, ftl::mmio::Normal>;
  // ATQOL
  using ATQOL = ftl::mmio::Field<1, 20, eATQOL, ftl::mmio::RO, ftl::mmio::Normal>;
  // DSLCNT
  using DSLCNT = ftl::mmio::Field<1, 21, eDSLCNT, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRSTR_fields_

struct ASRSTR : ftl::mmio::Register<
    0x40414020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ASRSTR_fields_::AIDEA,
    ASRSTR_fields_::AIDEB,
    ASRSTR_fields_::AIDEC,
    ASRSTR_fields_::AODFA,
    ASRSTR_fields_::AODFB,
    ASRSTR_fields_::AODFC,
    ASRSTR_fields_::AOLE,
    ASRSTR_fields_::FPWT,
    ASRSTR_fields_::AIDUA,
    ASRSTR_fields_::AIDUB,
    ASRSTR_fields_::AIDUC,
    ASRSTR_fields_::AODOA,
    ASRSTR_fields_::AODOB,
    ASRSTR_fields_::AODOC,
    ASRSTR_fields_::AIOLA,
    ASRSTR_fields_::AIOLB,
    ASRSTR_fields_::AIOLC,
    ASRSTR_fields_::AOOLA,
    ASRSTR_fields_::AOOLB,
    ASRSTR_fields_::AOOLC,
    ASRSTR_fields_::ATQOL,
    ASRSTR_fields_::DSLCNT,
    ftl::mmio::Reserved<10, 22>> {
  using eAIDEA = ASRSTR_fields_::eAIDEA;
  using eAIDEB = ASRSTR_fields_::eAIDEB;
  using eAIDEC = ASRSTR_fields_::eAIDEC;
  using eAODFA = ASRSTR_fields_::eAODFA;
  using eAODFB = ASRSTR_fields_::eAODFB;
  using eAODFC = ASRSTR_fields_::eAODFC;
  using eAOLE = ASRSTR_fields_::eAOLE;
  using eFPWT = ASRSTR_fields_::eFPWT;
  using eAIDUA = ASRSTR_fields_::eAIDUA;
  using eAIDUB = ASRSTR_fields_::eAIDUB;
  using eAIDUC = ASRSTR_fields_::eAIDUC;
  using eAODOA = ASRSTR_fields_::eAODOA;
  using eAODOB = ASRSTR_fields_::eAODOB;
  using eAODOC = ASRSTR_fields_::eAODOC;
  using eAIOLA = ASRSTR_fields_::eAIOLA;
  using eAIOLB = ASRSTR_fields_::eAIOLB;
  using eAIOLC = ASRSTR_fields_::eAIOLC;
  using eAOOLA = ASRSTR_fields_::eAOOLA;
  using eAOOLB = ASRSTR_fields_::eAOOLB;
  using eAOOLC = ASRSTR_fields_::eAOOLC;
  using eATQOL = ASRSTR_fields_::eATQOL;
  using eDSLCNT = ASRSTR_fields_::eDSLCNT;
  using AIDEA = ASRSTR_fields_::AIDEA;
  using AIDEB = ASRSTR_fields_::AIDEB;
  using AIDEC = ASRSTR_fields_::AIDEC;
  using AODFA = ASRSTR_fields_::AODFA;
  using AODFB = ASRSTR_fields_::AODFB;
  using AODFC = ASRSTR_fields_::AODFC;
  using AOLE = ASRSTR_fields_::AOLE;
  using FPWT = ASRSTR_fields_::FPWT;
  using AIDUA = ASRSTR_fields_::AIDUA;
  using AIDUB = ASRSTR_fields_::AIDUB;
  using AIDUC = ASRSTR_fields_::AIDUC;
  using AODOA = ASRSTR_fields_::AODOA;
  using AODOB = ASRSTR_fields_::AODOB;
  using AODOC = ASRSTR_fields_::AODOC;
  using AIOLA = ASRSTR_fields_::AIOLA;
  using AIOLB = ASRSTR_fields_::AIOLB;
  using AIOLC = ASRSTR_fields_::AIOLC;
  using AOOLA = ASRSTR_fields_::AOOLA;
  using AOOLB = ASRSTR_fields_::AOOLB;
  using AOOLC = ASRSTR_fields_::AOOLC;
  using ATQOL = ASRSTR_fields_::ATQOL;
  using DSLCNT = ASRSTR_fields_::DSLCNT;
};

// ASRC Parameter Register n
struct ASRPM_fields_ {
  // PARAMETER_VALUE
  using PARAMETER_VALUE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRPM_fields_

template<std::uint32_t Index>
struct ASRPM : ftl::mmio::Register<
    0x40414040u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRPM_fields_::PARAMETER_VALUE,
    ftl::mmio::Reserved<8, 24>> {
  static_assert(Index < 5u, "ASRPM: Index out of range");
  using PARAMETER_VALUE = ASRPM_fields_::PARAMETER_VALUE;
};

// ASRC Task Queue FIFO Register 1
struct ASRTFR1_fields_ {
  // TF_BASE
  using TF_BASE = ftl::mmio::Field<7, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TF_FILL
  using TF_FILL = ftl::mmio::Field<7, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRTFR1_fields_

struct ASRTFR1 : ftl::mmio::Register<
    0x40414054u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<6, 0>,
    ASRTFR1_fields_::TF_BASE,
    ASRTFR1_fields_::TF_FILL,
    ftl::mmio::Reserved<12, 20>> {
  using TF_BASE = ASRTFR1_fields_::TF_BASE;
  using TF_FILL = ASRTFR1_fields_::TF_FILL;
};

// ASRC Channel Counter Register
struct ASRCCR_fields_ {
  // ACIA
  using ACIA = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ACIB
  using ACIB = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ACIC
  using ACIC = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ACOA
  using ACOA = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ACOB
  using ACOB = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ACOC
  using ACOC = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRCCR_fields_

struct ASRCCR : ftl::mmio::Register<
    0x4041405Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRCCR_fields_::ACIA,
    ASRCCR_fields_::ACIB,
    ASRCCR_fields_::ACIC,
    ASRCCR_fields_::ACOA,
    ASRCCR_fields_::ACOB,
    ASRCCR_fields_::ACOC,
    ftl::mmio::Reserved<8, 24>> {
  using ACIA = ASRCCR_fields_::ACIA;
  using ACIB = ASRCCR_fields_::ACIB;
  using ACIC = ASRCCR_fields_::ACIC;
  using ACOA = ASRCCR_fields_::ACOA;
  using ACOB = ASRCCR_fields_::ACOB;
  using ACOC = ASRCCR_fields_::ACOC;
};

// ASRC Data Input Register for Pair x
struct ASRDIA_fields_ {
  // DATA
  using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct ASRDIA_fields_

struct ASRDIA : ftl::mmio::Register<
    0x40414060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    ASRDIA_fields_::DATA,
    ftl::mmio::Reserved<8, 24>> {
  using DATA = ASRDIA_fields_::DATA;
};

// ASRC Data Output Register for Pair x
struct ASRDOA_fields_ {
  // DATA
  using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRDOA_fields_

struct ASRDOA : ftl::mmio::Register<
    0x40414064u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ASRDOA_fields_::DATA,
    ftl::mmio::Reserved<8, 24>> {
  using DATA = ASRDOA_fields_::DATA;
};

// ASRC Data Input Register for Pair x
struct ASRDIB_fields_ {
  // DATA
  using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct ASRDIB_fields_

struct ASRDIB : ftl::mmio::Register<
    0x40414068u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    ASRDIB_fields_::DATA,
    ftl::mmio::Reserved<8, 24>> {
  using DATA = ASRDIB_fields_::DATA;
};

// ASRC Data Output Register for Pair x
struct ASRDOB_fields_ {
  // DATA
  using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRDOB_fields_

struct ASRDOB : ftl::mmio::Register<
    0x4041406Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ASRDOB_fields_::DATA,
    ftl::mmio::Reserved<8, 24>> {
  using DATA = ASRDOB_fields_::DATA;
};

// ASRC Data Input Register for Pair x
struct ASRDIC_fields_ {
  // DATA
  using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct ASRDIC_fields_

struct ASRDIC : ftl::mmio::Register<
    0x40414070u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    ASRDIC_fields_::DATA,
    ftl::mmio::Reserved<8, 24>> {
  using DATA = ASRDIC_fields_::DATA;
};

// ASRC Data Output Register for Pair x
struct ASRDOC_fields_ {
  // DATA
  using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRDOC_fields_

struct ASRDOC : ftl::mmio::Register<
    0x40414074u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ASRDOC_fields_::DATA,
    ftl::mmio::Reserved<8, 24>> {
  using DATA = ASRDOC_fields_::DATA;
};

// ASRC Ideal Ratio for Pair A-High Part
struct ASRIDRHA_fields_ {
  // IDRATIOA_H
  using IDRATIOA_H = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRIDRHA_fields_

struct ASRIDRHA : ftl::mmio::Register<
    0x40414080u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRIDRHA_fields_::IDRATIOA_H,
    ftl::mmio::Reserved<24, 8>> {
  using IDRATIOA_H = ASRIDRHA_fields_::IDRATIOA_H;
};

// ASRC Ideal Ratio for Pair A -Low Part
struct ASRIDRLA_fields_ {
  // IDRATIOA_L
  using IDRATIOA_L = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRIDRLA_fields_

struct ASRIDRLA : ftl::mmio::Register<
    0x40414084u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRIDRLA_fields_::IDRATIOA_L,
    ftl::mmio::Reserved<8, 24>> {
  using IDRATIOA_L = ASRIDRLA_fields_::IDRATIOA_L;
};

// ASRC Ideal Ratio for Pair B-High Part
struct ASRIDRHB_fields_ {
  // IDRATIOB_H
  using IDRATIOB_H = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRIDRHB_fields_

struct ASRIDRHB : ftl::mmio::Register<
    0x40414088u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRIDRHB_fields_::IDRATIOB_H,
    ftl::mmio::Reserved<24, 8>> {
  using IDRATIOB_H = ASRIDRHB_fields_::IDRATIOB_H;
};

// ASRC Ideal Ratio for Pair B-Low Part
struct ASRIDRLB_fields_ {
  // IDRATIOB_L
  using IDRATIOB_L = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRIDRLB_fields_

struct ASRIDRLB : ftl::mmio::Register<
    0x4041408Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRIDRLB_fields_::IDRATIOB_L,
    ftl::mmio::Reserved<8, 24>> {
  using IDRATIOB_L = ASRIDRLB_fields_::IDRATIOB_L;
};

// ASRC Ideal Ratio for Pair C-High Part
struct ASRIDRHC_fields_ {
  // IDRATIOC_H
  using IDRATIOC_H = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRIDRHC_fields_

struct ASRIDRHC : ftl::mmio::Register<
    0x40414090u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRIDRHC_fields_::IDRATIOC_H,
    ftl::mmio::Reserved<24, 8>> {
  using IDRATIOC_H = ASRIDRHC_fields_::IDRATIOC_H;
};

// ASRC Ideal Ratio for Pair C-Low Part
struct ASRIDRLC_fields_ {
  // IDRATIOC_L
  using IDRATIOC_L = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRIDRLC_fields_

struct ASRIDRLC : ftl::mmio::Register<
    0x40414094u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRIDRLC_fields_::IDRATIOC_L,
    ftl::mmio::Reserved<8, 24>> {
  using IDRATIOC_L = ASRIDRLC_fields_::IDRATIOC_L;
};

// ASRC 76 kHz Period in terms of ASRC processing clock
struct ASR76K_fields_ {
  // ASR76K
  using ASR76K = ftl::mmio::Field<17, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASR76K_fields_

struct ASR76K : ftl::mmio::Register<
    0x40414098u,
    std::uint32_t,
    0x00000A47u,
    ftl::mmio::RW,
    ASR76K_fields_::ASR76K,
    ftl::mmio::Reserved<15, 17>> {
  using value_ = ASR76K_fields_::ASR76K;
};

// ASRC 56 kHz Period in terms of ASRC processing clock
struct ASR56K_fields_ {
  // ASR56K
  using ASR56K = ftl::mmio::Field<17, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASR56K_fields_

struct ASR56K : ftl::mmio::Register<
    0x4041409Cu,
    std::uint32_t,
    0x00000DF3u,
    ftl::mmio::RW,
    ASR56K_fields_::ASR56K,
    ftl::mmio::Reserved<15, 17>> {
  using value_ = ASR56K_fields_::ASR56K;
};

// ASRC Misc Control Register for Pair A
struct ASRMCRA_fields_ {
  enum class eRSYNOFA : std::uint32_t {
    // Do not touch ASRCCR[ACOA]
    eno_resync = 0,
    // Force ASRCCR[ACOA]=0
    eresync = 1,
  };

  enum class eRSYNIFA : std::uint32_t {
    // Do not touch ASRCCR[ACIA]
    eno_resync = 0,
    // Force ASRCCR[ACIA]=0
    eresync = 1,
  };

  enum class eBYPASSPOLYA : std::uint32_t {
    // Don't bypass polyphase filtering.
    eno_bypass = 0,
    // Bypass polyphase filtering.
    ebypass = 1,
  };

  enum class eBUFSTALLA : std::uint32_t {
    // Don't stall Pair A conversion even in case of near empty/full FIFO conditions.
    eno_stall = 0,
    // Stall Pair A conversion in case of near empty/full FIFO conditions.
    estall = 1,
  };

  enum class eEXTTHRSHA : std::uint32_t {
    // Use default thresholds.
    euse_default_thresh = 0,
    // Use external defined thresholds.
    euse_ext_thresh = 1,
  };

  enum class eZEROBUFA : std::uint32_t {
    // Zeroize the buffer
    ezero_buf = 0,
    // Don't zeroize the buffer
    edo_not_zero_buf = 1,
  };

  // INFIFO_THRESHOLDA
  using INFIFO_THRESHOLDA = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RSYNOFA
  using RSYNOFA = ftl::mmio::Field<1, 10, eRSYNOFA, ftl::mmio::RW, ftl::mmio::Normal>;
  // RSYNIFA
  using RSYNIFA = ftl::mmio::Field<1, 11, eRSYNIFA, ftl::mmio::RW, ftl::mmio::Normal>;
  // OUTFIFO_THRESHOLDA
  using OUTFIFO_THRESHOLDA = ftl::mmio::Field<6, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASSPOLYA
  using BYPASSPOLYA = ftl::mmio::Field<1, 20, eBYPASSPOLYA, ftl::mmio::RW, ftl::mmio::Normal>;
  // BUFSTALLA
  using BUFSTALLA = ftl::mmio::Field<1, 21, eBUFSTALLA, ftl::mmio::RW, ftl::mmio::Normal>;
  // EXTTHRSHA
  using EXTTHRSHA = ftl::mmio::Field<1, 22, eEXTTHRSHA, ftl::mmio::RW, ftl::mmio::Normal>;
  // ZEROBUFA
  using ZEROBUFA = ftl::mmio::Field<1, 23, eZEROBUFA, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRMCRA_fields_

struct ASRMCRA : ftl::mmio::Register<
    0x404140A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRMCRA_fields_::INFIFO_THRESHOLDA,
    ftl::mmio::Reserved<4, 6>,
    ASRMCRA_fields_::RSYNOFA,
    ASRMCRA_fields_::RSYNIFA,
    ASRMCRA_fields_::OUTFIFO_THRESHOLDA,
    ftl::mmio::Reserved<2, 18>,
    ASRMCRA_fields_::BYPASSPOLYA,
    ASRMCRA_fields_::BUFSTALLA,
    ASRMCRA_fields_::EXTTHRSHA,
    ASRMCRA_fields_::ZEROBUFA,
    ftl::mmio::Reserved<8, 24>> {
  using eRSYNOFA = ASRMCRA_fields_::eRSYNOFA;
  using eRSYNIFA = ASRMCRA_fields_::eRSYNIFA;
  using eBYPASSPOLYA = ASRMCRA_fields_::eBYPASSPOLYA;
  using eBUFSTALLA = ASRMCRA_fields_::eBUFSTALLA;
  using eEXTTHRSHA = ASRMCRA_fields_::eEXTTHRSHA;
  using eZEROBUFA = ASRMCRA_fields_::eZEROBUFA;
  using INFIFO_THRESHOLDA = ASRMCRA_fields_::INFIFO_THRESHOLDA;
  using RSYNOFA = ASRMCRA_fields_::RSYNOFA;
  using RSYNIFA = ASRMCRA_fields_::RSYNIFA;
  using OUTFIFO_THRESHOLDA = ASRMCRA_fields_::OUTFIFO_THRESHOLDA;
  using BYPASSPOLYA = ASRMCRA_fields_::BYPASSPOLYA;
  using BUFSTALLA = ASRMCRA_fields_::BUFSTALLA;
  using EXTTHRSHA = ASRMCRA_fields_::EXTTHRSHA;
  using ZEROBUFA = ASRMCRA_fields_::ZEROBUFA;
};

// ASRC FIFO Status Register for Pair A
struct ASRFSTA_fields_ {
  enum class eIAEA : std::uint32_t {
    // Input FIFO is not near empty for Pair A
    enot_near_empty = 0,
    // Input FIFO is near empty for Pair A
    enear_empty = 1,
  };

  enum class eOAFA : std::uint32_t {
    // Output FIFO is not near full for Pair A
    enot_near_full = 0,
    // Output FIFO is near full for Pair A
    enear_full = 1,
  };

  // INFIFO_FILLA
  using INFIFO_FILLA = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // IAEA
  using IAEA = ftl::mmio::Field<1, 11, eIAEA, ftl::mmio::RO, ftl::mmio::Normal>;
  // OUTFIFO_FILLA
  using OUTFIFO_FILLA = ftl::mmio::Field<7, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // OAFA
  using OAFA = ftl::mmio::Field<1, 23, eOAFA, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRFSTA_fields_

struct ASRFSTA : ftl::mmio::Register<
    0x404140A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ASRFSTA_fields_::INFIFO_FILLA,
    ftl::mmio::Reserved<4, 7>,
    ASRFSTA_fields_::IAEA,
    ASRFSTA_fields_::OUTFIFO_FILLA,
    ftl::mmio::Reserved<4, 19>,
    ASRFSTA_fields_::OAFA,
    ftl::mmio::Reserved<8, 24>> {
  using eIAEA = ASRFSTA_fields_::eIAEA;
  using eOAFA = ASRFSTA_fields_::eOAFA;
  using INFIFO_FILLA = ASRFSTA_fields_::INFIFO_FILLA;
  using IAEA = ASRFSTA_fields_::IAEA;
  using OUTFIFO_FILLA = ASRFSTA_fields_::OUTFIFO_FILLA;
  using OAFA = ASRFSTA_fields_::OAFA;
};

// ASRC Misc Control Register for Pair B
struct ASRMCRB_fields_ {
  enum class eRSYNOFB : std::uint32_t {
    // Do not touch ASRCCR[ACOB]
    eno_resync = 0,
    // Force ASRCCR[ACOB]=0
    eresync = 1,
  };

  enum class eRSYNIFB : std::uint32_t {
    // Do not touch ASRCCR[ACIB]
    eno_resync = 0,
    // Force ASRCCR[ACIB]=0
    eresync = 1,
  };

  enum class eBYPASSPOLYB : std::uint32_t {
    // Don't bypass polyphase filtering.
    eno_bypass = 0,
    // Bypass polyphase filtering.
    ebypass = 1,
  };

  enum class eBUFSTALLB : std::uint32_t {
    // Don't stall Pair B conversion even in case of near empty/full FIFO conditions.
    eno_stall = 0,
    // Stall Pair B conversion in case of near empty/full FIFO conditions.
    estall = 1,
  };

  enum class eEXTTHRSHB : std::uint32_t {
    // Use default thresholds.
    euse_default_thresh = 0,
    // Use external defined thresholds.
    euse_ext_thresh = 1,
  };

  enum class eZEROBUFB : std::uint32_t {
    // Zeroize the buffer
    ezero_buf = 0,
    // Don't zeroize the buffer
    edo_not_zero_buf = 1,
  };

  // INFIFO_THRESHOLDB
  using INFIFO_THRESHOLDB = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RSYNOFB
  using RSYNOFB = ftl::mmio::Field<1, 10, eRSYNOFB, ftl::mmio::RW, ftl::mmio::Normal>;
  // RSYNIFB
  using RSYNIFB = ftl::mmio::Field<1, 11, eRSYNIFB, ftl::mmio::RW, ftl::mmio::Normal>;
  // OUTFIFO_THRESHOLDB
  using OUTFIFO_THRESHOLDB = ftl::mmio::Field<6, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASSPOLYB
  using BYPASSPOLYB = ftl::mmio::Field<1, 20, eBYPASSPOLYB, ftl::mmio::RW, ftl::mmio::Normal>;
  // BUFSTALLB
  using BUFSTALLB = ftl::mmio::Field<1, 21, eBUFSTALLB, ftl::mmio::RW, ftl::mmio::Normal>;
  // EXTTHRSHB
  using EXTTHRSHB = ftl::mmio::Field<1, 22, eEXTTHRSHB, ftl::mmio::RW, ftl::mmio::Normal>;
  // ZEROBUFB
  using ZEROBUFB = ftl::mmio::Field<1, 23, eZEROBUFB, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRMCRB_fields_

struct ASRMCRB : ftl::mmio::Register<
    0x404140A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRMCRB_fields_::INFIFO_THRESHOLDB,
    ftl::mmio::Reserved<4, 6>,
    ASRMCRB_fields_::RSYNOFB,
    ASRMCRB_fields_::RSYNIFB,
    ASRMCRB_fields_::OUTFIFO_THRESHOLDB,
    ftl::mmio::Reserved<2, 18>,
    ASRMCRB_fields_::BYPASSPOLYB,
    ASRMCRB_fields_::BUFSTALLB,
    ASRMCRB_fields_::EXTTHRSHB,
    ASRMCRB_fields_::ZEROBUFB,
    ftl::mmio::Reserved<8, 24>> {
  using eRSYNOFB = ASRMCRB_fields_::eRSYNOFB;
  using eRSYNIFB = ASRMCRB_fields_::eRSYNIFB;
  using eBYPASSPOLYB = ASRMCRB_fields_::eBYPASSPOLYB;
  using eBUFSTALLB = ASRMCRB_fields_::eBUFSTALLB;
  using eEXTTHRSHB = ASRMCRB_fields_::eEXTTHRSHB;
  using eZEROBUFB = ASRMCRB_fields_::eZEROBUFB;
  using INFIFO_THRESHOLDB = ASRMCRB_fields_::INFIFO_THRESHOLDB;
  using RSYNOFB = ASRMCRB_fields_::RSYNOFB;
  using RSYNIFB = ASRMCRB_fields_::RSYNIFB;
  using OUTFIFO_THRESHOLDB = ASRMCRB_fields_::OUTFIFO_THRESHOLDB;
  using BYPASSPOLYB = ASRMCRB_fields_::BYPASSPOLYB;
  using BUFSTALLB = ASRMCRB_fields_::BUFSTALLB;
  using EXTTHRSHB = ASRMCRB_fields_::EXTTHRSHB;
  using ZEROBUFB = ASRMCRB_fields_::ZEROBUFB;
};

// ASRC FIFO Status Register for Pair B
struct ASRFSTB_fields_ {
  enum class eIAEB : std::uint32_t {
    // Input FIFO is not near empty for Pair B
    enot_near_empty = 0,
    // Input FIFO is near empty for Pair B
    enear_empty = 1,
  };

  enum class eOAFB : std::uint32_t {
    // Output FIFO is not near full for Pair B
    enot_near_full = 0,
    // Output FIFO is near full for Pair B
    enear_full = 1,
  };

  // INFIFO_FILLB
  using INFIFO_FILLB = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // IAEB
  using IAEB = ftl::mmio::Field<1, 11, eIAEB, ftl::mmio::RO, ftl::mmio::Normal>;
  // OUTFIFO_FILLB
  using OUTFIFO_FILLB = ftl::mmio::Field<7, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // OAFB
  using OAFB = ftl::mmio::Field<1, 23, eOAFB, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRFSTB_fields_

struct ASRFSTB : ftl::mmio::Register<
    0x404140ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ASRFSTB_fields_::INFIFO_FILLB,
    ftl::mmio::Reserved<4, 7>,
    ASRFSTB_fields_::IAEB,
    ASRFSTB_fields_::OUTFIFO_FILLB,
    ftl::mmio::Reserved<4, 19>,
    ASRFSTB_fields_::OAFB,
    ftl::mmio::Reserved<8, 24>> {
  using eIAEB = ASRFSTB_fields_::eIAEB;
  using eOAFB = ASRFSTB_fields_::eOAFB;
  using INFIFO_FILLB = ASRFSTB_fields_::INFIFO_FILLB;
  using IAEB = ASRFSTB_fields_::IAEB;
  using OUTFIFO_FILLB = ASRFSTB_fields_::OUTFIFO_FILLB;
  using OAFB = ASRFSTB_fields_::OAFB;
};

// ASRC Misc Control Register for Pair C
struct ASRMCRC_fields_ {
  enum class eRSYNOFC : std::uint32_t {
    // Do not touch ASRCCR[ACOC]
    eno_resync = 0,
    // Force ASRCCR[ACOC]=0
    eresync = 1,
  };

  enum class eRSYNIFC : std::uint32_t {
    // Do not touch ASRCCR[ACIC]
    eno_resync = 0,
    // Force ASRCCR[ACIC]=0
    eresync = 1,
  };

  enum class eBYPASSPOLYC : std::uint32_t {
    // Don't bypass polyphase filtering.
    eno_bypass = 0,
    // Bypass polyphase filtering.
    ebypass = 1,
  };

  enum class eBUFSTALLC : std::uint32_t {
    // Don't stall Pair C conversion even in case of near empty/full FIFO conditions.
    eno_stall = 0,
    // Stall Pair C conversion in case of near empty/full FIFO conditions.
    estall = 1,
  };

  enum class eEXTTHRSHC : std::uint32_t {
    // Use default thresholds.
    euse_default_thresh = 0,
    // Use external defined thresholds.
    euse_ext_thresh = 1,
  };

  enum class eZEROBUFC : std::uint32_t {
    // Zeroize the buffer
    ezero_buf = 0,
    // Don't zeroize the buffer
    edo_not_zero_buf = 1,
  };

  // INFIFO_THRESHOLDC
  using INFIFO_THRESHOLDC = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RSYNOFC
  using RSYNOFC = ftl::mmio::Field<1, 10, eRSYNOFC, ftl::mmio::RW, ftl::mmio::Normal>;
  // RSYNIFC
  using RSYNIFC = ftl::mmio::Field<1, 11, eRSYNIFC, ftl::mmio::RW, ftl::mmio::Normal>;
  // OUTFIFO_THRESHOLDC
  using OUTFIFO_THRESHOLDC = ftl::mmio::Field<6, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASSPOLYC
  using BYPASSPOLYC = ftl::mmio::Field<1, 20, eBYPASSPOLYC, ftl::mmio::RW, ftl::mmio::Normal>;
  // BUFSTALLC
  using BUFSTALLC = ftl::mmio::Field<1, 21, eBUFSTALLC, ftl::mmio::RW, ftl::mmio::Normal>;
  // EXTTHRSHC
  using EXTTHRSHC = ftl::mmio::Field<1, 22, eEXTTHRSHC, ftl::mmio::RW, ftl::mmio::Normal>;
  // ZEROBUFC
  using ZEROBUFC = ftl::mmio::Field<1, 23, eZEROBUFC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRMCRC_fields_

struct ASRMCRC : ftl::mmio::Register<
    0x404140B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRMCRC_fields_::INFIFO_THRESHOLDC,
    ftl::mmio::Reserved<4, 6>,
    ASRMCRC_fields_::RSYNOFC,
    ASRMCRC_fields_::RSYNIFC,
    ASRMCRC_fields_::OUTFIFO_THRESHOLDC,
    ftl::mmio::Reserved<2, 18>,
    ASRMCRC_fields_::BYPASSPOLYC,
    ASRMCRC_fields_::BUFSTALLC,
    ASRMCRC_fields_::EXTTHRSHC,
    ASRMCRC_fields_::ZEROBUFC,
    ftl::mmio::Reserved<8, 24>> {
  using eRSYNOFC = ASRMCRC_fields_::eRSYNOFC;
  using eRSYNIFC = ASRMCRC_fields_::eRSYNIFC;
  using eBYPASSPOLYC = ASRMCRC_fields_::eBYPASSPOLYC;
  using eBUFSTALLC = ASRMCRC_fields_::eBUFSTALLC;
  using eEXTTHRSHC = ASRMCRC_fields_::eEXTTHRSHC;
  using eZEROBUFC = ASRMCRC_fields_::eZEROBUFC;
  using INFIFO_THRESHOLDC = ASRMCRC_fields_::INFIFO_THRESHOLDC;
  using RSYNOFC = ASRMCRC_fields_::RSYNOFC;
  using RSYNIFC = ASRMCRC_fields_::RSYNIFC;
  using OUTFIFO_THRESHOLDC = ASRMCRC_fields_::OUTFIFO_THRESHOLDC;
  using BYPASSPOLYC = ASRMCRC_fields_::BYPASSPOLYC;
  using BUFSTALLC = ASRMCRC_fields_::BUFSTALLC;
  using EXTTHRSHC = ASRMCRC_fields_::EXTTHRSHC;
  using ZEROBUFC = ASRMCRC_fields_::ZEROBUFC;
};

// ASRC FIFO Status Register for Pair C
struct ASRFSTC_fields_ {
  enum class eIAEC : std::uint32_t {
    // Input FIFO is not near empty for Pair C
    enot_near_empty = 0,
    // Input FIFO is near empty for Pair C
    enear_empty = 1,
  };

  enum class eOAFC : std::uint32_t {
    // Output FIFO is not near full for Pair C
    enot_near_full = 0,
    // Output FIFO is near full for Pair C
    enear_full = 1,
  };

  // INFIFO_FILLC
  using INFIFO_FILLC = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // IAEC
  using IAEC = ftl::mmio::Field<1, 11, eIAEC, ftl::mmio::RO, ftl::mmio::Normal>;
  // OUTFIFO_FILLC
  using OUTFIFO_FILLC = ftl::mmio::Field<7, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // OAFC
  using OAFC = ftl::mmio::Field<1, 23, eOAFC, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ASRFSTC_fields_

struct ASRFSTC : ftl::mmio::Register<
    0x404140B4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ASRFSTC_fields_::INFIFO_FILLC,
    ftl::mmio::Reserved<4, 7>,
    ASRFSTC_fields_::IAEC,
    ASRFSTC_fields_::OUTFIFO_FILLC,
    ftl::mmio::Reserved<4, 19>,
    ASRFSTC_fields_::OAFC,
    ftl::mmio::Reserved<8, 24>> {
  using eIAEC = ASRFSTC_fields_::eIAEC;
  using eOAFC = ASRFSTC_fields_::eOAFC;
  using INFIFO_FILLC = ASRFSTC_fields_::INFIFO_FILLC;
  using IAEC = ASRFSTC_fields_::IAEC;
  using OUTFIFO_FILLC = ASRFSTC_fields_::OUTFIFO_FILLC;
  using OAFC = ASRFSTC_fields_::OAFC;
};

// ASRC Misc Control Register 1 for Pair X
struct ASRMCR1_fields_ {
  enum class eOW16 : std::uint32_t {
    // 24-bit output data.
    eout_24bit = 0,
    // 16-bit output data
    eout_16bit = 1,
  };

  enum class eOSGN : std::uint32_t {
    // No sign extension.
    eno_sign_ext = 0,
    // Sign extension.
    esign_ext = 1,
  };

  enum class eOMSB : std::uint32_t {
    // LSB aligned.
    elsb_aligned = 0,
    // MSB aligned.
    emsb_aligned = 1,
  };

  enum class eIMSB : std::uint32_t {
    // LSB aligned.
    elsb_aligned = 0,
    // MSB aligned.
    emsb_aligned = 1,
  };

  enum class eIWD : std::uint32_t {
    // 24-bit audio data.
    eaudiodata_24bit = 0,
    // 16-bit audio data.
    eaudiodata_16bit = 1,
    // 8-bit audio data.
    eaudiodata_8bit = 2,
  };

  // OW16
  using OW16 = ftl::mmio::Field<1, 0, eOW16, ftl::mmio::RW, ftl::mmio::Normal>;
  // OSGN
  using OSGN = ftl::mmio::Field<1, 1, eOSGN, ftl::mmio::RW, ftl::mmio::Normal>;
  // OMSB
  using OMSB = ftl::mmio::Field<1, 2, eOMSB, ftl::mmio::RW, ftl::mmio::Normal>;
  // IMSB
  using IMSB = ftl::mmio::Field<1, 8, eIMSB, ftl::mmio::RW, ftl::mmio::Normal>;
  // IWD
  using IWD = ftl::mmio::Field<2, 9, eIWD, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASRMCR1_fields_

template<std::uint32_t Index>
struct ASRMCR1 : ftl::mmio::Register<
    0x404140C0u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ASRMCR1_fields_::OW16,
    ASRMCR1_fields_::OSGN,
    ASRMCR1_fields_::OMSB,
    ftl::mmio::Reserved<5, 3>,
    ASRMCR1_fields_::IMSB,
    ASRMCR1_fields_::IWD,
    ftl::mmio::Reserved<21, 11>> {
  static_assert(Index < 3u, "ASRMCR1: Index out of range");
  using eOW16 = ASRMCR1_fields_::eOW16;
  using eOSGN = ASRMCR1_fields_::eOSGN;
  using eOMSB = ASRMCR1_fields_::eOMSB;
  using eIMSB = ASRMCR1_fields_::eIMSB;
  using eIWD = ASRMCR1_fields_::eIWD;
  using OW16 = ASRMCR1_fields_::OW16;
  using OSGN = ASRMCR1_fields_::OSGN;
  using OMSB = ASRMCR1_fields_::OMSB;
  using IMSB = ASRMCR1_fields_::IMSB;
  using IWD = ASRMCR1_fields_::IWD;
};

}  // namespace regs::asrc