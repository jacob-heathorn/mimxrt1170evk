#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LMEM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Lmem {
  // PC bus Cache control register
  struct PCCCR_fields_ {
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
  };  // struct PCCCR_fields_

  struct PCCCR : ftl::mmio::Register<
      0xE0082000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PCCCR_fields_::ENCACHE,
      PCCCR_fields_::ENWRBUF,
      PCCCR_fields_::PCCR2,
      PCCCR_fields_::PCCR3,
      ftl::mmio::Reserved<20, 4>,
      PCCCR_fields_::INVW0,
      PCCCR_fields_::PUSHW0,
      PCCCR_fields_::INVW1,
      PCCCR_fields_::PUSHW1,
      ftl::mmio::Reserved<3, 28>,
      PCCCR_fields_::GO> {
    using eENCACHE = PCCCR_fields_::eENCACHE;
    using eENWRBUF = PCCCR_fields_::eENWRBUF;
    using ePCCR2 = PCCCR_fields_::ePCCR2;
    using ePCCR3 = PCCCR_fields_::ePCCR3;
    using eINVW0 = PCCCR_fields_::eINVW0;
    using ePUSHW0 = PCCCR_fields_::ePUSHW0;
    using eINVW1 = PCCCR_fields_::eINVW1;
    using ePUSHW1 = PCCCR_fields_::ePUSHW1;
    using eGO = PCCCR_fields_::eGO;
    using ENCACHE = PCCCR_fields_::ENCACHE;
    using ENWRBUF = PCCCR_fields_::ENWRBUF;
    using PCCR2 = PCCCR_fields_::PCCR2;
    using PCCR3 = PCCCR_fields_::PCCR3;
    using INVW0 = PCCCR_fields_::INVW0;
    using PUSHW0 = PCCCR_fields_::PUSHW0;
    using INVW1 = PCCCR_fields_::INVW1;
    using PUSHW1 = PCCCR_fields_::PUSHW1;
    using GO = PCCCR_fields_::GO;
  };

  // PC bus Cache line control register
  struct PCCLCR_fields_ {
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
  };  // struct PCCLCR_fields_

  struct PCCLCR : ftl::mmio::Register<
      0xE0082004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PCCLCR_fields_::LGO,
      ftl::mmio::Reserved<1, 1>,
      PCCLCR_fields_::CACHEADDR,
      PCCLCR_fields_::WSEL,
      ftl::mmio::Reserved<1, 15>,
      PCCLCR_fields_::TDSEL,
      ftl::mmio::Reserved<3, 17>,
      PCCLCR_fields_::LCIVB,
      PCCLCR_fields_::LCIMB,
      PCCLCR_fields_::LCWAY,
      ftl::mmio::Reserved<1, 23>,
      PCCLCR_fields_::LCMD,
      PCCLCR_fields_::LADSEL,
      PCCLCR_fields_::LACC,
      ftl::mmio::Reserved<4, 28>> {
    using eLGO = PCCLCR_fields_::eLGO;
    using eWSEL = PCCLCR_fields_::eWSEL;
    using eTDSEL = PCCLCR_fields_::eTDSEL;
    using eLCMD = PCCLCR_fields_::eLCMD;
    using eLADSEL = PCCLCR_fields_::eLADSEL;
    using eLACC = PCCLCR_fields_::eLACC;
    using LGO = PCCLCR_fields_::LGO;
    using CACHEADDR = PCCLCR_fields_::CACHEADDR;
    using WSEL = PCCLCR_fields_::WSEL;
    using TDSEL = PCCLCR_fields_::TDSEL;
    using LCIVB = PCCLCR_fields_::LCIVB;
    using LCIMB = PCCLCR_fields_::LCIMB;
    using LCWAY = PCCLCR_fields_::LCWAY;
    using LCMD = PCCLCR_fields_::LCMD;
    using LADSEL = PCCLCR_fields_::LADSEL;
    using LACC = PCCLCR_fields_::LACC;
  };

  // PC bus Cache search address register
  struct PCCSAR_fields_ {
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
  };  // struct PCCSAR_fields_

  struct PCCSAR : ftl::mmio::Register<
      0xE0082008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PCCSAR_fields_::LGO,
      PCCSAR_fields_::PHYADDR> {
    using eLGO = PCCSAR_fields_::eLGO;
    using LGO = PCCSAR_fields_::LGO;
    using PHYADDR = PCCSAR_fields_::PHYADDR;
  };

  // PC bus Cache read/write value register
  struct PCCCVR_fields_ {
    // Cache read/write Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PCCCVR_fields_

  struct PCCCVR : ftl::mmio::Register<
      0xE008200Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PCCCVR_fields_::DATA> {
    using DATA = PCCCVR_fields_::DATA;
  };

  // PS bus Cache control register
  struct PSCCR_fields_ {
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
  };  // struct PSCCR_fields_

  struct PSCCR : ftl::mmio::Register<
      0xE0082800u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PSCCR_fields_::ENCACHE,
      PSCCR_fields_::ENWRBUF,
      PSCCR_fields_::PSCR2,
      PSCCR_fields_::PSCR3,
      ftl::mmio::Reserved<20, 4>,
      PSCCR_fields_::INVW0,
      PSCCR_fields_::PUSHW0,
      PSCCR_fields_::INVW1,
      PSCCR_fields_::PUSHW1,
      ftl::mmio::Reserved<3, 28>,
      PSCCR_fields_::GO> {
    using eENCACHE = PSCCR_fields_::eENCACHE;
    using eENWRBUF = PSCCR_fields_::eENWRBUF;
    using ePSCR2 = PSCCR_fields_::ePSCR2;
    using ePSCR3 = PSCCR_fields_::ePSCR3;
    using eINVW0 = PSCCR_fields_::eINVW0;
    using ePUSHW0 = PSCCR_fields_::ePUSHW0;
    using eINVW1 = PSCCR_fields_::eINVW1;
    using ePUSHW1 = PSCCR_fields_::ePUSHW1;
    using eGO = PSCCR_fields_::eGO;
    using ENCACHE = PSCCR_fields_::ENCACHE;
    using ENWRBUF = PSCCR_fields_::ENWRBUF;
    using PSCR2 = PSCCR_fields_::PSCR2;
    using PSCR3 = PSCCR_fields_::PSCR3;
    using INVW0 = PSCCR_fields_::INVW0;
    using PUSHW0 = PSCCR_fields_::PUSHW0;
    using INVW1 = PSCCR_fields_::INVW1;
    using PUSHW1 = PSCCR_fields_::PUSHW1;
    using GO = PSCCR_fields_::GO;
  };

  // PS bus Cache line control register
  struct PSCLCR_fields_ {
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
  };  // struct PSCLCR_fields_

  struct PSCLCR : ftl::mmio::Register<
      0xE0082804u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PSCLCR_fields_::LGO,
      ftl::mmio::Reserved<1, 1>,
      PSCLCR_fields_::CACHEADDR,
      PSCLCR_fields_::WSEL,
      ftl::mmio::Reserved<1, 15>,
      PSCLCR_fields_::TDSEL,
      ftl::mmio::Reserved<3, 17>,
      PSCLCR_fields_::LCIVB,
      PSCLCR_fields_::LCIMB,
      PSCLCR_fields_::LCWAY,
      ftl::mmio::Reserved<1, 23>,
      PSCLCR_fields_::LCMD,
      PSCLCR_fields_::LADSEL,
      PSCLCR_fields_::LACC,
      ftl::mmio::Reserved<4, 28>> {
    using eLGO = PSCLCR_fields_::eLGO;
    using eWSEL = PSCLCR_fields_::eWSEL;
    using eTDSEL = PSCLCR_fields_::eTDSEL;
    using eLCMD = PSCLCR_fields_::eLCMD;
    using eLADSEL = PSCLCR_fields_::eLADSEL;
    using eLACC = PSCLCR_fields_::eLACC;
    using LGO = PSCLCR_fields_::LGO;
    using CACHEADDR = PSCLCR_fields_::CACHEADDR;
    using WSEL = PSCLCR_fields_::WSEL;
    using TDSEL = PSCLCR_fields_::TDSEL;
    using LCIVB = PSCLCR_fields_::LCIVB;
    using LCIMB = PSCLCR_fields_::LCIMB;
    using LCWAY = PSCLCR_fields_::LCWAY;
    using LCMD = PSCLCR_fields_::LCMD;
    using LADSEL = PSCLCR_fields_::LADSEL;
    using LACC = PSCLCR_fields_::LACC;
  };

  // PS bus Cache search address register
  struct PSCSAR_fields_ {
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
  };  // struct PSCSAR_fields_

  struct PSCSAR : ftl::mmio::Register<
      0xE0082808u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PSCSAR_fields_::LGO,
      PSCSAR_fields_::PHYADDR> {
    using eLGO = PSCSAR_fields_::eLGO;
    using LGO = PSCSAR_fields_::LGO;
    using PHYADDR = PSCSAR_fields_::PHYADDR;
  };

  // PS bus Cache read/write value register
  struct PSCCVR_fields_ {
    // Cache read/write Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PSCCVR_fields_

  struct PSCCVR : ftl::mmio::Register<
      0xE008280Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PSCCVR_fields_::DATA> {
    using DATA = PSCCVR_fields_::DATA;
  };

};

}  // namespace regs