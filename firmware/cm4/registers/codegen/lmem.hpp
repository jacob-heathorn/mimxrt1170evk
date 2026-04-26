#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LMEM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Lmem {
  // PC bus Cache control register
  struct PcccrFields {
    enum class eENCACHE : std::uint32_t {
      // Cache disabled
      edisabled = 0,
      // Cache enabled
      eenabled = 1,
    };

    enum class eENWRBUF : std::uint32_t {
      // Write buffer disabled
      edisabled = 0,
      // Write buffer enabled
      eenabled = 1,
    };

    enum class ePCCR2 : std::uint32_t {
      // Does NOT force all cacheable spaces to write through
      ePCCR2_0 = 0,
      // Forces all cacheable spaces to write through
      ePCCR2_1 = 1,
    };

    enum class ePCCR3 : std::uint32_t {
      // Allocation on cache misses
      ePCCR3_0 = 0,
      // Forces no allocation on cache misses (must also have PCCR2 asserted)
      ePCCR3_1 = 1,
    };

    enum class eINVW0 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, invalidate all lines in way 0.
      einvw0 = 1,
    };

    enum class ePUSHW0 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, push all modified lines in way 0
      epushw0 = 1,
    };

    enum class eINVW1 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, invalidate all lines in way 1
      einvw1 = 1,
    };

    enum class ePUSHW1 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, push all modified lines in way 1
      epushw1 = 1,
    };

    enum class eGO : std::uint32_t {
      // Write: no effect. Read: no cache command active.
      eno_effect = 0,
      // Write: initiate command indicated by bits 27-24. Read: cache command active.
      einit_cmd = 1,
    };

    // Cache enable
    using ENCACHE = ftl::mmio::Field<1, 0, eENCACHE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Write Buffer
    using ENWRBUF = ftl::mmio::Field<1, 1, eENWRBUF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forces all cacheable spaces to write through
    using PCCR2 = ftl::mmio::Field<1, 2, ePCCR2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forces no allocation on cache misses
    using PCCR3 = ftl::mmio::Field<1, 3, ePCCR3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invalidate Way 0
    using INVW0 = ftl::mmio::Field<1, 24, eINVW0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Push Way 0
    using PUSHW0 = ftl::mmio::Field<1, 25, ePUSHW0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invalidate Way 1
    using INVW1 = ftl::mmio::Field<1, 26, eINVW1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Push Way 1
    using PUSHW1 = ftl::mmio::Field<1, 27, ePUSHW1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initiate Cache Command
    using GO = ftl::mmio::Field<1, 31, eGO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcccrFields

  struct PCCCR : ftl::mmio::Register<
      0xE0082000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcccrFields::ENCACHE,
      PcccrFields::ENWRBUF,
      PcccrFields::PCCR2,
      PcccrFields::PCCR3,
      ftl::mmio::Reserved<20, 4>,
      PcccrFields::INVW0,
      PcccrFields::PUSHW0,
      PcccrFields::INVW1,
      PcccrFields::PUSHW1,
      ftl::mmio::Reserved<3, 28>,
      PcccrFields::GO> {
    using eENCACHE = PcccrFields::eENCACHE;
    using eENWRBUF = PcccrFields::eENWRBUF;
    using ePCCR2 = PcccrFields::ePCCR2;
    using ePCCR3 = PcccrFields::ePCCR3;
    using eINVW0 = PcccrFields::eINVW0;
    using ePUSHW0 = PcccrFields::ePUSHW0;
    using eINVW1 = PcccrFields::eINVW1;
    using ePUSHW1 = PcccrFields::ePUSHW1;
    using eGO = PcccrFields::eGO;
    using ENCACHE = PcccrFields::ENCACHE;
    using ENWRBUF = PcccrFields::ENWRBUF;
    using PCCR2 = PcccrFields::PCCR2;
    using PCCR3 = PcccrFields::PCCR3;
    using INVW0 = PcccrFields::INVW0;
    using PUSHW0 = PcccrFields::PUSHW0;
    using INVW1 = PcccrFields::INVW1;
    using PUSHW1 = PcccrFields::PUSHW1;
    using GO = PcccrFields::GO;
  };

  // PC bus Cache line control register
  struct PcclcrFields {
    enum class eLGO : std::uint32_t {
      // Write: no effect. Read: no line command active.
      eno_effect = 0,
      // Write: initiate line command indicated by bits 27-24. Read: line command active.
      einit_cmd = 1,
    };

    enum class eWSEL : std::uint32_t {
      // Way 0
      eway0 = 0,
      // Way 1
      eway1 = 1,
    };

    enum class eTDSEL : std::uint32_t {
      // Data
      edata = 0,
      // Tag
      etag = 1,
    };

    enum class eLCMD : std::uint32_t {
      // Search and read or write
      esearch_rw = 0,
      // Invalidate
      einvalidate = 1,
      // Push
      epush = 2,
      // Clear
      eclear = 3,
    };

    enum class eLADSEL : std::uint32_t {
      // Cache address
      ecache_addr = 0,
      // Physical address
      ephys_addr = 1,
    };

    enum class eLACC : std::uint32_t {
      // Read
      eread = 0,
      // Write
      ewrite = 1,
    };

    // Initiate Cache Line Command
    using LGO = ftl::mmio::Field<1, 0, eLGO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Cache address
    using CACHEADDR = ftl::mmio::Field<12, 2, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Way select
    using WSEL = ftl::mmio::Field<1, 14, eWSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tag/Data Select
    using TDSEL = ftl::mmio::Field<1, 16, eTDSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command Initial Valid Bit
    using LCIVB = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command Initial Modified Bit
    using LCIMB = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command Way
    using LCWAY = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command
    using LCMD = ftl::mmio::Field<2, 24, eLCMD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Address Select
    using LADSEL = ftl::mmio::Field<1, 26, eLADSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line access type
    using LACC = ftl::mmio::Field<1, 27, eLACC, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcclcrFields

  struct PCCLCR : ftl::mmio::Register<
      0xE0082004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcclcrFields::LGO,
      ftl::mmio::Reserved<1, 1>,
      PcclcrFields::CACHEADDR,
      PcclcrFields::WSEL,
      ftl::mmio::Reserved<1, 15>,
      PcclcrFields::TDSEL,
      ftl::mmio::Reserved<3, 17>,
      PcclcrFields::LCIVB,
      PcclcrFields::LCIMB,
      PcclcrFields::LCWAY,
      ftl::mmio::Reserved<1, 23>,
      PcclcrFields::LCMD,
      PcclcrFields::LADSEL,
      PcclcrFields::LACC,
      ftl::mmio::Reserved<4, 28>> {
    using eLGO = PcclcrFields::eLGO;
    using eWSEL = PcclcrFields::eWSEL;
    using eTDSEL = PcclcrFields::eTDSEL;
    using eLCMD = PcclcrFields::eLCMD;
    using eLADSEL = PcclcrFields::eLADSEL;
    using eLACC = PcclcrFields::eLACC;
    using LGO = PcclcrFields::LGO;
    using CACHEADDR = PcclcrFields::CACHEADDR;
    using WSEL = PcclcrFields::WSEL;
    using TDSEL = PcclcrFields::TDSEL;
    using LCIVB = PcclcrFields::LCIVB;
    using LCIMB = PcclcrFields::LCIMB;
    using LCWAY = PcclcrFields::LCWAY;
    using LCMD = PcclcrFields::LCMD;
    using LADSEL = PcclcrFields::LADSEL;
    using LACC = PcclcrFields::LACC;
  };

  // PC bus Cache search address register
  struct PccsarFields {
    enum class eLGO : std::uint32_t {
      // Write: no effect. Read: no line command active.
      eno_effect = 0,
      // Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
      einit_cmd = 1,
    };

    // Initiate Cache Line Command
    using LGO = ftl::mmio::Field<1, 0, eLGO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Physical Address
    using PHYADDR = ftl::mmio::Field<31, 1, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PccsarFields

  struct PCCSAR : ftl::mmio::Register<
      0xE0082008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PccsarFields::LGO,
      PccsarFields::PHYADDR> {
    using eLGO = PccsarFields::eLGO;
    using LGO = PccsarFields::LGO;
    using PHYADDR = PccsarFields::PHYADDR;
  };

  // PC bus Cache read/write value register
  struct PcccvrFields {
    // Cache read/write Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PcccvrFields

  struct PCCCVR : ftl::mmio::Register<
      0xE008200Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PcccvrFields::DATA> {
    using DATA = PcccvrFields::DATA;
  };

  // PS bus Cache control register
  struct PsccrFields {
    enum class eENCACHE : std::uint32_t {
      // Cache disabled
      edisabled = 0,
      // Cache enabled
      eenabled = 1,
    };

    enum class eENWRBUF : std::uint32_t {
      // Write buffer disabled
      edisabled = 0,
      // Write buffer enabled
      eenabled = 1,
    };

    enum class ePSCR2 : std::uint32_t {
      // Does NOT force all cacheable spaces to write through
      ePSCR2_0 = 0,
      // Forces all cacheable spaces to write through
      ePSCR2_1 = 1,
    };

    enum class ePSCR3 : std::uint32_t {
      // Allocation on cache misses
      ePSCR3_0 = 0,
      // Forces no allocation on cache misses (must also have PSCR2 asserted)
      ePSCR3_1 = 1,
    };

    enum class eINVW0 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, invalidate all lines in way 0.
      einvw0 = 1,
    };

    enum class ePUSHW0 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, push all modified lines in way 0
      epushw0 = 1,
    };

    enum class eINVW1 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, invalidate all lines in way 1
      einvw1 = 1,
    };

    enum class ePUSHW1 : std::uint32_t {
      // No operation
      eno_operation = 0,
      // When setting the GO bit, push all modified lines in way 1
      epushw1 = 1,
    };

    enum class eGO : std::uint32_t {
      // Write: no effect. Read: no cache command active.
      eno_effect = 0,
      // Write: initiate command indicated by bits 27-24. Read: cache command active.
      einit_cmd = 1,
    };

    // Cache enable
    using ENCACHE = ftl::mmio::Field<1, 0, eENCACHE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Write Buffer
    using ENWRBUF = ftl::mmio::Field<1, 1, eENWRBUF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forces all cacheable spaces to write through
    using PSCR2 = ftl::mmio::Field<1, 2, ePSCR2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forces no allocation on cache misses
    using PSCR3 = ftl::mmio::Field<1, 3, ePSCR3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invalidate Way 0
    using INVW0 = ftl::mmio::Field<1, 24, eINVW0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Push Way 0
    using PUSHW0 = ftl::mmio::Field<1, 25, ePUSHW0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invalidate Way 1
    using INVW1 = ftl::mmio::Field<1, 26, eINVW1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Push Way 1
    using PUSHW1 = ftl::mmio::Field<1, 27, ePUSHW1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initiate Cache Command
    using GO = ftl::mmio::Field<1, 31, eGO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PsccrFields

  struct PSCCR : ftl::mmio::Register<
      0xE0082800u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PsccrFields::ENCACHE,
      PsccrFields::ENWRBUF,
      PsccrFields::PSCR2,
      PsccrFields::PSCR3,
      ftl::mmio::Reserved<20, 4>,
      PsccrFields::INVW0,
      PsccrFields::PUSHW0,
      PsccrFields::INVW1,
      PsccrFields::PUSHW1,
      ftl::mmio::Reserved<3, 28>,
      PsccrFields::GO> {
    using eENCACHE = PsccrFields::eENCACHE;
    using eENWRBUF = PsccrFields::eENWRBUF;
    using ePSCR2 = PsccrFields::ePSCR2;
    using ePSCR3 = PsccrFields::ePSCR3;
    using eINVW0 = PsccrFields::eINVW0;
    using ePUSHW0 = PsccrFields::ePUSHW0;
    using eINVW1 = PsccrFields::eINVW1;
    using ePUSHW1 = PsccrFields::ePUSHW1;
    using eGO = PsccrFields::eGO;
    using ENCACHE = PsccrFields::ENCACHE;
    using ENWRBUF = PsccrFields::ENWRBUF;
    using PSCR2 = PsccrFields::PSCR2;
    using PSCR3 = PsccrFields::PSCR3;
    using INVW0 = PsccrFields::INVW0;
    using PUSHW0 = PsccrFields::PUSHW0;
    using INVW1 = PsccrFields::INVW1;
    using PUSHW1 = PsccrFields::PUSHW1;
    using GO = PsccrFields::GO;
  };

  // PS bus Cache line control register
  struct PsclcrFields {
    enum class eLGO : std::uint32_t {
      // Write: no effect. Read: no line command active.
      eno_effect = 0,
      // Write: initiate line command indicated by bits 27-24. Read: line command active.
      einit_cmd = 1,
    };

    enum class eWSEL : std::uint32_t {
      // Way 0
      eway0 = 0,
      // Way 1
      eway1 = 1,
    };

    enum class eTDSEL : std::uint32_t {
      // Data
      edata = 0,
      // Tag
      etag = 1,
    };

    enum class eLCMD : std::uint32_t {
      // Search and read or write
      esearch_rw = 0,
      // Invalidate
      einvalidate = 1,
      // Push
      epush = 2,
      // Clear
      eclear = 3,
    };

    enum class eLADSEL : std::uint32_t {
      // Cache address
      ecache_addr = 0,
      // Physical address
      ephys_addr = 1,
    };

    enum class eLACC : std::uint32_t {
      // Read
      eread = 0,
      // Write
      ewrite = 1,
    };

    // Initiate Cache Line Command
    using LGO = ftl::mmio::Field<1, 0, eLGO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Cache address
    using CACHEADDR = ftl::mmio::Field<12, 2, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Way select
    using WSEL = ftl::mmio::Field<1, 14, eWSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tag/Data Select
    using TDSEL = ftl::mmio::Field<1, 16, eTDSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command Initial Valid Bit
    using LCIVB = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command Initial Modified Bit
    using LCIMB = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command Way
    using LCWAY = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Command
    using LCMD = ftl::mmio::Field<2, 24, eLCMD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line Address Select
    using LADSEL = ftl::mmio::Field<1, 26, eLADSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Line access type
    using LACC = ftl::mmio::Field<1, 27, eLACC, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PsclcrFields

  struct PSCLCR : ftl::mmio::Register<
      0xE0082804u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PsclcrFields::LGO,
      ftl::mmio::Reserved<1, 1>,
      PsclcrFields::CACHEADDR,
      PsclcrFields::WSEL,
      ftl::mmio::Reserved<1, 15>,
      PsclcrFields::TDSEL,
      ftl::mmio::Reserved<3, 17>,
      PsclcrFields::LCIVB,
      PsclcrFields::LCIMB,
      PsclcrFields::LCWAY,
      ftl::mmio::Reserved<1, 23>,
      PsclcrFields::LCMD,
      PsclcrFields::LADSEL,
      PsclcrFields::LACC,
      ftl::mmio::Reserved<4, 28>> {
    using eLGO = PsclcrFields::eLGO;
    using eWSEL = PsclcrFields::eWSEL;
    using eTDSEL = PsclcrFields::eTDSEL;
    using eLCMD = PsclcrFields::eLCMD;
    using eLADSEL = PsclcrFields::eLADSEL;
    using eLACC = PsclcrFields::eLACC;
    using LGO = PsclcrFields::LGO;
    using CACHEADDR = PsclcrFields::CACHEADDR;
    using WSEL = PsclcrFields::WSEL;
    using TDSEL = PsclcrFields::TDSEL;
    using LCIVB = PsclcrFields::LCIVB;
    using LCIMB = PsclcrFields::LCIMB;
    using LCWAY = PsclcrFields::LCWAY;
    using LCMD = PsclcrFields::LCMD;
    using LADSEL = PsclcrFields::LADSEL;
    using LACC = PsclcrFields::LACC;
  };

  // PS bus Cache search address register
  struct PscsarFields {
    enum class eLGO : std::uint32_t {
      // Write: no effect. Read: no line command active.
      eno_effect = 0,
      // Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
      einit_cmd = 1,
    };

    // Initiate Cache Line Command
    using LGO = ftl::mmio::Field<1, 0, eLGO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Physical Address
    using PHYADDR = ftl::mmio::Field<31, 1, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PscsarFields

  struct PSCSAR : ftl::mmio::Register<
      0xE0082808u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PscsarFields::LGO,
      PscsarFields::PHYADDR> {
    using eLGO = PscsarFields::eLGO;
    using LGO = PscsarFields::LGO;
    using PHYADDR = PscsarFields::PHYADDR;
  };

  // PS bus Cache read/write value register
  struct PsccvrFields {
    // Cache read/write Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PsccvrFields

  struct PSCCVR : ftl::mmio::Register<
      0xE008280Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PsccvrFields::DATA> {
    using DATA = PsccvrFields::DATA;
  };

};

}  // namespace regs