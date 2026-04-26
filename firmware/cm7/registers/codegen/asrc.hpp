#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// ASRC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Asrc {
  // ASRC Control Register
  struct AsrctrFields {
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
  };  // struct AsrctrFields

  struct ASRCTR : ftl::mmio::Register<
      0x40414000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrctrFields::ASRCEN,
      AsrctrFields::ASREA,
      AsrctrFields::ASREB,
      AsrctrFields::ASREC,
      AsrctrFields::SRST,
      ftl::mmio::Reserved<8, 5>,
      AsrctrFields::IDRA,
      AsrctrFields::USRA,
      AsrctrFields::IDRB,
      AsrctrFields::USRB,
      AsrctrFields::IDRC,
      AsrctrFields::USRC,
      ftl::mmio::Reserved<1, 19>,
      AsrctrFields::ATSA,
      AsrctrFields::ATSB,
      AsrctrFields::ATSC,
      ftl::mmio::Reserved<9, 23>> {
    using eASRCEN = AsrctrFields::eASRCEN;
    using eASREA = AsrctrFields::eASREA;
    using eASREB = AsrctrFields::eASREB;
    using eASREC = AsrctrFields::eASREC;
    using eSRST = AsrctrFields::eSRST;
    using eIDRA = AsrctrFields::eIDRA;
    using eUSRA = AsrctrFields::eUSRA;
    using eIDRB = AsrctrFields::eIDRB;
    using eUSRB = AsrctrFields::eUSRB;
    using eIDRC = AsrctrFields::eIDRC;
    using eUSRC = AsrctrFields::eUSRC;
    using eATSA = AsrctrFields::eATSA;
    using eATSB = AsrctrFields::eATSB;
    using eATSC = AsrctrFields::eATSC;
    using ASRCEN = AsrctrFields::ASRCEN;
    using ASREA = AsrctrFields::ASREA;
    using ASREB = AsrctrFields::ASREB;
    using ASREC = AsrctrFields::ASREC;
    using SRST = AsrctrFields::SRST;
    using IDRA = AsrctrFields::IDRA;
    using USRA = AsrctrFields::USRA;
    using IDRB = AsrctrFields::IDRB;
    using USRB = AsrctrFields::USRB;
    using IDRC = AsrctrFields::IDRC;
    using USRC = AsrctrFields::USRC;
    using ATSA = AsrctrFields::ATSA;
    using ATSB = AsrctrFields::ATSB;
    using ATSC = AsrctrFields::ATSC;
  };

  // ASRC Interrupt Enable Register
  struct AsrierFields {
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
  };  // struct AsrierFields

  struct ASRIER : ftl::mmio::Register<
      0x40414004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrierFields::ADIEA,
      AsrierFields::ADIEB,
      AsrierFields::ADIEC,
      AsrierFields::ADOEA,
      AsrierFields::ADOEB,
      AsrierFields::ADOEC,
      AsrierFields::AOLIE,
      AsrierFields::AFPWE,
      ftl::mmio::Reserved<24, 8>> {
    using eADIEA = AsrierFields::eADIEA;
    using eADIEB = AsrierFields::eADIEB;
    using eADIEC = AsrierFields::eADIEC;
    using eADOEA = AsrierFields::eADOEA;
    using eADOEB = AsrierFields::eADOEB;
    using eADOEC = AsrierFields::eADOEC;
    using eAOLIE = AsrierFields::eAOLIE;
    using eAFPWE = AsrierFields::eAFPWE;
    using ADIEA = AsrierFields::ADIEA;
    using ADIEB = AsrierFields::ADIEB;
    using ADIEC = AsrierFields::ADIEC;
    using ADOEA = AsrierFields::ADOEA;
    using ADOEB = AsrierFields::ADOEB;
    using ADOEC = AsrierFields::ADOEC;
    using AOLIE = AsrierFields::AOLIE;
    using AFPWE = AsrierFields::AFPWE;
  };

  // ASRC Channel Number Configuration Register
  struct AsrcncrFields {
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
  };  // struct AsrcncrFields

  struct ASRCNCR : ftl::mmio::Register<
      0x4041400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrcncrFields::ANCA,
      AsrcncrFields::ANCB,
      AsrcncrFields::ANCC,
      ftl::mmio::Reserved<20, 12>> {
    using eANCA = AsrcncrFields::eANCA;
    using eANCB = AsrcncrFields::eANCB;
    using eANCC = AsrcncrFields::eANCC;
    using ANCA = AsrcncrFields::ANCA;
    using ANCB = AsrcncrFields::ANCB;
    using ANCC = AsrcncrFields::ANCC;
  };

  // ASRC Filter Configuration Status Register
  struct AsrcfgFields {
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
  };  // struct AsrcfgFields

  struct ASRCFG : ftl::mmio::Register<
      0x40414010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<6, 0>,
      AsrcfgFields::PREMODA,
      AsrcfgFields::POSTMODA,
      AsrcfgFields::PREMODB,
      AsrcfgFields::POSTMODB,
      AsrcfgFields::PREMODC,
      AsrcfgFields::POSTMODC,
      AsrcfgFields::NDPRA,
      AsrcfgFields::NDPRB,
      AsrcfgFields::NDPRC,
      AsrcfgFields::INIRQA,
      AsrcfgFields::INIRQB,
      AsrcfgFields::INIRQC,
      ftl::mmio::Reserved<8, 24>> {
    using ePREMODA = AsrcfgFields::ePREMODA;
    using ePOSTMODA = AsrcfgFields::ePOSTMODA;
    using ePREMODB = AsrcfgFields::ePREMODB;
    using ePOSTMODB = AsrcfgFields::ePOSTMODB;
    using ePREMODC = AsrcfgFields::ePREMODC;
    using ePOSTMODC = AsrcfgFields::ePOSTMODC;
    using eNDPRA = AsrcfgFields::eNDPRA;
    using eNDPRB = AsrcfgFields::eNDPRB;
    using eNDPRC = AsrcfgFields::eNDPRC;
    using eINIRQA = AsrcfgFields::eINIRQA;
    using eINIRQB = AsrcfgFields::eINIRQB;
    using eINIRQC = AsrcfgFields::eINIRQC;
    using PREMODA = AsrcfgFields::PREMODA;
    using POSTMODA = AsrcfgFields::POSTMODA;
    using PREMODB = AsrcfgFields::PREMODB;
    using POSTMODB = AsrcfgFields::POSTMODB;
    using PREMODC = AsrcfgFields::PREMODC;
    using POSTMODC = AsrcfgFields::POSTMODC;
    using NDPRA = AsrcfgFields::NDPRA;
    using NDPRB = AsrcfgFields::NDPRB;
    using NDPRC = AsrcfgFields::NDPRC;
    using INIRQA = AsrcfgFields::INIRQA;
    using INIRQB = AsrcfgFields::INIRQB;
    using INIRQC = AsrcfgFields::INIRQC;
  };

  // ASRC Clock Source Register
  struct AsrcsrFields {
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
  };  // struct AsrcsrFields

  struct ASRCSR : ftl::mmio::Register<
      0x40414014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrcsrFields::AICSA,
      AsrcsrFields::AICSB,
      AsrcsrFields::AICSC,
      AsrcsrFields::AOCSA,
      AsrcsrFields::AOCSB,
      AsrcsrFields::AOCSC,
      ftl::mmio::Reserved<8, 24>> {
    using eAICSA = AsrcsrFields::eAICSA;
    using eAICSB = AsrcsrFields::eAICSB;
    using eAICSC = AsrcsrFields::eAICSC;
    using eAOCSA = AsrcsrFields::eAOCSA;
    using eAOCSB = AsrcsrFields::eAOCSB;
    using eAOCSC = AsrcsrFields::eAOCSC;
    using AICSA = AsrcsrFields::AICSA;
    using AICSB = AsrcsrFields::AICSB;
    using AICSC = AsrcsrFields::AICSC;
    using AOCSA = AsrcsrFields::AOCSA;
    using AOCSB = AsrcsrFields::AOCSB;
    using AOCSC = AsrcsrFields::AOCSC;
  };

  // ASRC Clock Divider Register 1
  struct Asrcdr1Fields {
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
  };  // struct Asrcdr1Fields

  struct ASRCDR1 : ftl::mmio::Register<
      0x40414018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Asrcdr1Fields::AICPA,
      Asrcdr1Fields::AICDA,
      Asrcdr1Fields::AICPB,
      Asrcdr1Fields::AICDB,
      Asrcdr1Fields::AOCPA,
      Asrcdr1Fields::AOCDA,
      Asrcdr1Fields::AOCPB,
      Asrcdr1Fields::AOCDB,
      ftl::mmio::Reserved<8, 24>> {
    using AICPA = Asrcdr1Fields::AICPA;
    using AICDA = Asrcdr1Fields::AICDA;
    using AICPB = Asrcdr1Fields::AICPB;
    using AICDB = Asrcdr1Fields::AICDB;
    using AOCPA = Asrcdr1Fields::AOCPA;
    using AOCDA = Asrcdr1Fields::AOCDA;
    using AOCPB = Asrcdr1Fields::AOCPB;
    using AOCDB = Asrcdr1Fields::AOCDB;
  };

  // ASRC Clock Divider Register 2
  struct Asrcdr2Fields {
    // AICPC
    using AICPC = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AICDC
    using AICDC = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AOCPC
    using AOCPC = ftl::mmio::Field<3, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // AOCDC
    using AOCDC = ftl::mmio::Field<3, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Asrcdr2Fields

  struct ASRCDR2 : ftl::mmio::Register<
      0x4041401Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Asrcdr2Fields::AICPC,
      Asrcdr2Fields::AICDC,
      Asrcdr2Fields::AOCPC,
      Asrcdr2Fields::AOCDC,
      ftl::mmio::Reserved<20, 12>> {
    using AICPC = Asrcdr2Fields::AICPC;
    using AICDC = Asrcdr2Fields::AICDC;
    using AOCPC = Asrcdr2Fields::AOCPC;
    using AOCDC = Asrcdr2Fields::AOCDC;
  };

  // ASRC Status Register
  struct AsrstrFields {
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
  };  // struct AsrstrFields

  struct ASRSTR : ftl::mmio::Register<
      0x40414020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AsrstrFields::AIDEA,
      AsrstrFields::AIDEB,
      AsrstrFields::AIDEC,
      AsrstrFields::AODFA,
      AsrstrFields::AODFB,
      AsrstrFields::AODFC,
      AsrstrFields::AOLE,
      AsrstrFields::FPWT,
      AsrstrFields::AIDUA,
      AsrstrFields::AIDUB,
      AsrstrFields::AIDUC,
      AsrstrFields::AODOA,
      AsrstrFields::AODOB,
      AsrstrFields::AODOC,
      AsrstrFields::AIOLA,
      AsrstrFields::AIOLB,
      AsrstrFields::AIOLC,
      AsrstrFields::AOOLA,
      AsrstrFields::AOOLB,
      AsrstrFields::AOOLC,
      AsrstrFields::ATQOL,
      AsrstrFields::DSLCNT,
      ftl::mmio::Reserved<10, 22>> {
    using eAIDEA = AsrstrFields::eAIDEA;
    using eAIDEB = AsrstrFields::eAIDEB;
    using eAIDEC = AsrstrFields::eAIDEC;
    using eAODFA = AsrstrFields::eAODFA;
    using eAODFB = AsrstrFields::eAODFB;
    using eAODFC = AsrstrFields::eAODFC;
    using eAOLE = AsrstrFields::eAOLE;
    using eFPWT = AsrstrFields::eFPWT;
    using eAIDUA = AsrstrFields::eAIDUA;
    using eAIDUB = AsrstrFields::eAIDUB;
    using eAIDUC = AsrstrFields::eAIDUC;
    using eAODOA = AsrstrFields::eAODOA;
    using eAODOB = AsrstrFields::eAODOB;
    using eAODOC = AsrstrFields::eAODOC;
    using eAIOLA = AsrstrFields::eAIOLA;
    using eAIOLB = AsrstrFields::eAIOLB;
    using eAIOLC = AsrstrFields::eAIOLC;
    using eAOOLA = AsrstrFields::eAOOLA;
    using eAOOLB = AsrstrFields::eAOOLB;
    using eAOOLC = AsrstrFields::eAOOLC;
    using eATQOL = AsrstrFields::eATQOL;
    using eDSLCNT = AsrstrFields::eDSLCNT;
    using AIDEA = AsrstrFields::AIDEA;
    using AIDEB = AsrstrFields::AIDEB;
    using AIDEC = AsrstrFields::AIDEC;
    using AODFA = AsrstrFields::AODFA;
    using AODFB = AsrstrFields::AODFB;
    using AODFC = AsrstrFields::AODFC;
    using AOLE = AsrstrFields::AOLE;
    using FPWT = AsrstrFields::FPWT;
    using AIDUA = AsrstrFields::AIDUA;
    using AIDUB = AsrstrFields::AIDUB;
    using AIDUC = AsrstrFields::AIDUC;
    using AODOA = AsrstrFields::AODOA;
    using AODOB = AsrstrFields::AODOB;
    using AODOC = AsrstrFields::AODOC;
    using AIOLA = AsrstrFields::AIOLA;
    using AIOLB = AsrstrFields::AIOLB;
    using AIOLC = AsrstrFields::AIOLC;
    using AOOLA = AsrstrFields::AOOLA;
    using AOOLB = AsrstrFields::AOOLB;
    using AOOLC = AsrstrFields::AOOLC;
    using ATQOL = AsrstrFields::ATQOL;
    using DSLCNT = AsrstrFields::DSLCNT;
  };

  // ASRC Parameter Register n
  struct AsrpmFields {
    // PARAMETER_VALUE
    using PARAMETER_VALUE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsrpmFields

  template<std::uint32_t Index>
  struct ASRPM : ftl::mmio::Register<
      0x40414040u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrpmFields::PARAMETER_VALUE,
      ftl::mmio::Reserved<8, 24>> {
    static_assert(Index < 5u, "ASRPM: Index out of range");
    using PARAMETER_VALUE = AsrpmFields::PARAMETER_VALUE;
  };

  // ASRC Task Queue FIFO Register 1
  struct Asrtfr1Fields {
    // TF_BASE
    using TF_BASE = ftl::mmio::Field<7, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TF_FILL
    using TF_FILL = ftl::mmio::Field<7, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Asrtfr1Fields

  struct ASRTFR1 : ftl::mmio::Register<
      0x40414054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<6, 0>,
      Asrtfr1Fields::TF_BASE,
      Asrtfr1Fields::TF_FILL,
      ftl::mmio::Reserved<12, 20>> {
    using TF_BASE = Asrtfr1Fields::TF_BASE;
    using TF_FILL = Asrtfr1Fields::TF_FILL;
  };

  // ASRC Channel Counter Register
  struct AsrccrFields {
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
  };  // struct AsrccrFields

  struct ASRCCR : ftl::mmio::Register<
      0x4041405Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrccrFields::ACIA,
      AsrccrFields::ACIB,
      AsrccrFields::ACIC,
      AsrccrFields::ACOA,
      AsrccrFields::ACOB,
      AsrccrFields::ACOC,
      ftl::mmio::Reserved<8, 24>> {
    using ACIA = AsrccrFields::ACIA;
    using ACIB = AsrccrFields::ACIB;
    using ACIC = AsrccrFields::ACIC;
    using ACOA = AsrccrFields::ACOA;
    using ACOB = AsrccrFields::ACOB;
    using ACOC = AsrccrFields::ACOC;
  };

  // ASRC Data Input Register for Pair x
  struct AsrdiaFields {
    // DATA
    using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct AsrdiaFields

  struct ASRDIA : ftl::mmio::Register<
      0x40414060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      AsrdiaFields::DATA,
      ftl::mmio::Reserved<8, 24>> {
    using DATA = AsrdiaFields::DATA;
  };

  // ASRC Data Output Register for Pair x
  struct AsrdoaFields {
    // DATA
    using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AsrdoaFields

  struct ASRDOA : ftl::mmio::Register<
      0x40414064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AsrdoaFields::DATA,
      ftl::mmio::Reserved<8, 24>> {
    using DATA = AsrdoaFields::DATA;
  };

  // ASRC Data Input Register for Pair x
  struct AsrdibFields {
    // DATA
    using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct AsrdibFields

  struct ASRDIB : ftl::mmio::Register<
      0x40414068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      AsrdibFields::DATA,
      ftl::mmio::Reserved<8, 24>> {
    using DATA = AsrdibFields::DATA;
  };

  // ASRC Data Output Register for Pair x
  struct AsrdobFields {
    // DATA
    using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AsrdobFields

  struct ASRDOB : ftl::mmio::Register<
      0x4041406Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AsrdobFields::DATA,
      ftl::mmio::Reserved<8, 24>> {
    using DATA = AsrdobFields::DATA;
  };

  // ASRC Data Input Register for Pair x
  struct AsrdicFields {
    // DATA
    using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct AsrdicFields

  struct ASRDIC : ftl::mmio::Register<
      0x40414070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      AsrdicFields::DATA,
      ftl::mmio::Reserved<8, 24>> {
    using DATA = AsrdicFields::DATA;
  };

  // ASRC Data Output Register for Pair x
  struct AsrdocFields {
    // DATA
    using DATA = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AsrdocFields

  struct ASRDOC : ftl::mmio::Register<
      0x40414074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AsrdocFields::DATA,
      ftl::mmio::Reserved<8, 24>> {
    using DATA = AsrdocFields::DATA;
  };

  // ASRC Ideal Ratio for Pair A-High Part
  struct AsridrhaFields {
    // IDRATIOA_H
    using IDRATIOA_H = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsridrhaFields

  struct ASRIDRHA : ftl::mmio::Register<
      0x40414080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsridrhaFields::IDRATIOA_H,
      ftl::mmio::Reserved<24, 8>> {
    using IDRATIOA_H = AsridrhaFields::IDRATIOA_H;
  };

  // ASRC Ideal Ratio for Pair A -Low Part
  struct AsridrlaFields {
    // IDRATIOA_L
    using IDRATIOA_L = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsridrlaFields

  struct ASRIDRLA : ftl::mmio::Register<
      0x40414084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsridrlaFields::IDRATIOA_L,
      ftl::mmio::Reserved<8, 24>> {
    using IDRATIOA_L = AsridrlaFields::IDRATIOA_L;
  };

  // ASRC Ideal Ratio for Pair B-High Part
  struct AsridrhbFields {
    // IDRATIOB_H
    using IDRATIOB_H = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsridrhbFields

  struct ASRIDRHB : ftl::mmio::Register<
      0x40414088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsridrhbFields::IDRATIOB_H,
      ftl::mmio::Reserved<24, 8>> {
    using IDRATIOB_H = AsridrhbFields::IDRATIOB_H;
  };

  // ASRC Ideal Ratio for Pair B-Low Part
  struct AsridrlbFields {
    // IDRATIOB_L
    using IDRATIOB_L = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsridrlbFields

  struct ASRIDRLB : ftl::mmio::Register<
      0x4041408Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsridrlbFields::IDRATIOB_L,
      ftl::mmio::Reserved<8, 24>> {
    using IDRATIOB_L = AsridrlbFields::IDRATIOB_L;
  };

  // ASRC Ideal Ratio for Pair C-High Part
  struct AsridrhcFields {
    // IDRATIOC_H
    using IDRATIOC_H = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsridrhcFields

  struct ASRIDRHC : ftl::mmio::Register<
      0x40414090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsridrhcFields::IDRATIOC_H,
      ftl::mmio::Reserved<24, 8>> {
    using IDRATIOC_H = AsridrhcFields::IDRATIOC_H;
  };

  // ASRC Ideal Ratio for Pair C-Low Part
  struct AsridrlcFields {
    // IDRATIOC_L
    using IDRATIOC_L = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsridrlcFields

  struct ASRIDRLC : ftl::mmio::Register<
      0x40414094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsridrlcFields::IDRATIOC_L,
      ftl::mmio::Reserved<8, 24>> {
    using IDRATIOC_L = AsridrlcFields::IDRATIOC_L;
  };

  // ASRC 76 kHz Period in terms of ASRC processing clock
  struct Asr76kFields {
    // ASR76K
    using ASR76K = ftl::mmio::Field<17, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Asr76kFields

  struct ASR76K : ftl::mmio::Register<
      0x40414098u,
      std::uint32_t,
      0x00000A47u,
      ftl::mmio::RW,
      Asr76kFields::ASR76K,
      ftl::mmio::Reserved<15, 17>> {
    using VALUE = Asr76kFields::ASR76K;
  };

  // ASRC 56 kHz Period in terms of ASRC processing clock
  struct Asr56kFields {
    // ASR56K
    using ASR56K = ftl::mmio::Field<17, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Asr56kFields

  struct ASR56K : ftl::mmio::Register<
      0x4041409Cu,
      std::uint32_t,
      0x00000DF3u,
      ftl::mmio::RW,
      Asr56kFields::ASR56K,
      ftl::mmio::Reserved<15, 17>> {
    using VALUE = Asr56kFields::ASR56K;
  };

  // ASRC Misc Control Register for Pair A
  struct AsrmcraFields {
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
  };  // struct AsrmcraFields

  struct ASRMCRA : ftl::mmio::Register<
      0x404140A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrmcraFields::INFIFO_THRESHOLDA,
      ftl::mmio::Reserved<4, 6>,
      AsrmcraFields::RSYNOFA,
      AsrmcraFields::RSYNIFA,
      AsrmcraFields::OUTFIFO_THRESHOLDA,
      ftl::mmio::Reserved<2, 18>,
      AsrmcraFields::BYPASSPOLYA,
      AsrmcraFields::BUFSTALLA,
      AsrmcraFields::EXTTHRSHA,
      AsrmcraFields::ZEROBUFA,
      ftl::mmio::Reserved<8, 24>> {
    using eRSYNOFA = AsrmcraFields::eRSYNOFA;
    using eRSYNIFA = AsrmcraFields::eRSYNIFA;
    using eBYPASSPOLYA = AsrmcraFields::eBYPASSPOLYA;
    using eBUFSTALLA = AsrmcraFields::eBUFSTALLA;
    using eEXTTHRSHA = AsrmcraFields::eEXTTHRSHA;
    using eZEROBUFA = AsrmcraFields::eZEROBUFA;
    using INFIFO_THRESHOLDA = AsrmcraFields::INFIFO_THRESHOLDA;
    using RSYNOFA = AsrmcraFields::RSYNOFA;
    using RSYNIFA = AsrmcraFields::RSYNIFA;
    using OUTFIFO_THRESHOLDA = AsrmcraFields::OUTFIFO_THRESHOLDA;
    using BYPASSPOLYA = AsrmcraFields::BYPASSPOLYA;
    using BUFSTALLA = AsrmcraFields::BUFSTALLA;
    using EXTTHRSHA = AsrmcraFields::EXTTHRSHA;
    using ZEROBUFA = AsrmcraFields::ZEROBUFA;
  };

  // ASRC FIFO Status Register for Pair A
  struct AsrfstaFields {
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
  };  // struct AsrfstaFields

  struct ASRFSTA : ftl::mmio::Register<
      0x404140A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AsrfstaFields::INFIFO_FILLA,
      ftl::mmio::Reserved<4, 7>,
      AsrfstaFields::IAEA,
      AsrfstaFields::OUTFIFO_FILLA,
      ftl::mmio::Reserved<4, 19>,
      AsrfstaFields::OAFA,
      ftl::mmio::Reserved<8, 24>> {
    using eIAEA = AsrfstaFields::eIAEA;
    using eOAFA = AsrfstaFields::eOAFA;
    using INFIFO_FILLA = AsrfstaFields::INFIFO_FILLA;
    using IAEA = AsrfstaFields::IAEA;
    using OUTFIFO_FILLA = AsrfstaFields::OUTFIFO_FILLA;
    using OAFA = AsrfstaFields::OAFA;
  };

  // ASRC Misc Control Register for Pair B
  struct AsrmcrbFields {
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
  };  // struct AsrmcrbFields

  struct ASRMCRB : ftl::mmio::Register<
      0x404140A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrmcrbFields::INFIFO_THRESHOLDB,
      ftl::mmio::Reserved<4, 6>,
      AsrmcrbFields::RSYNOFB,
      AsrmcrbFields::RSYNIFB,
      AsrmcrbFields::OUTFIFO_THRESHOLDB,
      ftl::mmio::Reserved<2, 18>,
      AsrmcrbFields::BYPASSPOLYB,
      AsrmcrbFields::BUFSTALLB,
      AsrmcrbFields::EXTTHRSHB,
      AsrmcrbFields::ZEROBUFB,
      ftl::mmio::Reserved<8, 24>> {
    using eRSYNOFB = AsrmcrbFields::eRSYNOFB;
    using eRSYNIFB = AsrmcrbFields::eRSYNIFB;
    using eBYPASSPOLYB = AsrmcrbFields::eBYPASSPOLYB;
    using eBUFSTALLB = AsrmcrbFields::eBUFSTALLB;
    using eEXTTHRSHB = AsrmcrbFields::eEXTTHRSHB;
    using eZEROBUFB = AsrmcrbFields::eZEROBUFB;
    using INFIFO_THRESHOLDB = AsrmcrbFields::INFIFO_THRESHOLDB;
    using RSYNOFB = AsrmcrbFields::RSYNOFB;
    using RSYNIFB = AsrmcrbFields::RSYNIFB;
    using OUTFIFO_THRESHOLDB = AsrmcrbFields::OUTFIFO_THRESHOLDB;
    using BYPASSPOLYB = AsrmcrbFields::BYPASSPOLYB;
    using BUFSTALLB = AsrmcrbFields::BUFSTALLB;
    using EXTTHRSHB = AsrmcrbFields::EXTTHRSHB;
    using ZEROBUFB = AsrmcrbFields::ZEROBUFB;
  };

  // ASRC FIFO Status Register for Pair B
  struct AsrfstbFields {
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
  };  // struct AsrfstbFields

  struct ASRFSTB : ftl::mmio::Register<
      0x404140ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AsrfstbFields::INFIFO_FILLB,
      ftl::mmio::Reserved<4, 7>,
      AsrfstbFields::IAEB,
      AsrfstbFields::OUTFIFO_FILLB,
      ftl::mmio::Reserved<4, 19>,
      AsrfstbFields::OAFB,
      ftl::mmio::Reserved<8, 24>> {
    using eIAEB = AsrfstbFields::eIAEB;
    using eOAFB = AsrfstbFields::eOAFB;
    using INFIFO_FILLB = AsrfstbFields::INFIFO_FILLB;
    using IAEB = AsrfstbFields::IAEB;
    using OUTFIFO_FILLB = AsrfstbFields::OUTFIFO_FILLB;
    using OAFB = AsrfstbFields::OAFB;
  };

  // ASRC Misc Control Register for Pair C
  struct AsrmcrcFields {
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
  };  // struct AsrmcrcFields

  struct ASRMCRC : ftl::mmio::Register<
      0x404140B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AsrmcrcFields::INFIFO_THRESHOLDC,
      ftl::mmio::Reserved<4, 6>,
      AsrmcrcFields::RSYNOFC,
      AsrmcrcFields::RSYNIFC,
      AsrmcrcFields::OUTFIFO_THRESHOLDC,
      ftl::mmio::Reserved<2, 18>,
      AsrmcrcFields::BYPASSPOLYC,
      AsrmcrcFields::BUFSTALLC,
      AsrmcrcFields::EXTTHRSHC,
      AsrmcrcFields::ZEROBUFC,
      ftl::mmio::Reserved<8, 24>> {
    using eRSYNOFC = AsrmcrcFields::eRSYNOFC;
    using eRSYNIFC = AsrmcrcFields::eRSYNIFC;
    using eBYPASSPOLYC = AsrmcrcFields::eBYPASSPOLYC;
    using eBUFSTALLC = AsrmcrcFields::eBUFSTALLC;
    using eEXTTHRSHC = AsrmcrcFields::eEXTTHRSHC;
    using eZEROBUFC = AsrmcrcFields::eZEROBUFC;
    using INFIFO_THRESHOLDC = AsrmcrcFields::INFIFO_THRESHOLDC;
    using RSYNOFC = AsrmcrcFields::RSYNOFC;
    using RSYNIFC = AsrmcrcFields::RSYNIFC;
    using OUTFIFO_THRESHOLDC = AsrmcrcFields::OUTFIFO_THRESHOLDC;
    using BYPASSPOLYC = AsrmcrcFields::BYPASSPOLYC;
    using BUFSTALLC = AsrmcrcFields::BUFSTALLC;
    using EXTTHRSHC = AsrmcrcFields::EXTTHRSHC;
    using ZEROBUFC = AsrmcrcFields::ZEROBUFC;
  };

  // ASRC FIFO Status Register for Pair C
  struct AsrfstcFields {
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
  };  // struct AsrfstcFields

  struct ASRFSTC : ftl::mmio::Register<
      0x404140B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AsrfstcFields::INFIFO_FILLC,
      ftl::mmio::Reserved<4, 7>,
      AsrfstcFields::IAEC,
      AsrfstcFields::OUTFIFO_FILLC,
      ftl::mmio::Reserved<4, 19>,
      AsrfstcFields::OAFC,
      ftl::mmio::Reserved<8, 24>> {
    using eIAEC = AsrfstcFields::eIAEC;
    using eOAFC = AsrfstcFields::eOAFC;
    using INFIFO_FILLC = AsrfstcFields::INFIFO_FILLC;
    using IAEC = AsrfstcFields::IAEC;
    using OUTFIFO_FILLC = AsrfstcFields::OUTFIFO_FILLC;
    using OAFC = AsrfstcFields::OAFC;
  };

  // ASRC Misc Control Register 1 for Pair X
  struct Asrmcr1Fields {
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
  };  // struct Asrmcr1Fields

  template<std::uint32_t Index>
  struct ASRMCR1 : ftl::mmio::Register<
      0x404140C0u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Asrmcr1Fields::OW16,
      Asrmcr1Fields::OSGN,
      Asrmcr1Fields::OMSB,
      ftl::mmio::Reserved<5, 3>,
      Asrmcr1Fields::IMSB,
      Asrmcr1Fields::IWD,
      ftl::mmio::Reserved<21, 11>> {
    static_assert(Index < 3u, "ASRMCR1: Index out of range");
    using eOW16 = Asrmcr1Fields::eOW16;
    using eOSGN = Asrmcr1Fields::eOSGN;
    using eOMSB = Asrmcr1Fields::eOMSB;
    using eIMSB = Asrmcr1Fields::eIMSB;
    using eIWD = Asrmcr1Fields::eIWD;
    using OW16 = Asrmcr1Fields::OW16;
    using OSGN = Asrmcr1Fields::OSGN;
    using OMSB = Asrmcr1Fields::OMSB;
    using IMSB = Asrmcr1Fields::IMSB;
    using IWD = Asrmcr1Fields::IWD;
  };

};

}  // namespace regs