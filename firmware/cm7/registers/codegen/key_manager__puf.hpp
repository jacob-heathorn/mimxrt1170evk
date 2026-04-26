#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PUF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct KeyManagerPuf {
  // PUF Control Register
  struct CTRL_fields_ {
    enum class eZEROIZE : std::uint32_t {
      // No Zeroize operation in progress
      eUNSET = 0,
      // Zeroize operation in progress
      eSET = 1,
    };

    enum class eENROLL : std::uint32_t {
      // No Enroll operation in progress
      eUNSET = 0,
      // Enroll operation in progress
      eSET = 1,
    };

    enum class eSTART : std::uint32_t {
      // No Start operation in progress
      eUNSET = 0,
      // Start operation in progress
      eSET = 1,
    };

    enum class eGENERATEKEY : std::uint32_t {
      // No Set Intrinsic Key operation in progress
      eUNSET = 0,
      // Set Intrinsic Key operation in progress
      eSET = 1,
    };

    enum class eSETKEY : std::uint32_t {
      // No Set Key operation in progress
      eUNSET = 0,
      // Set Key operation in progress
      eSET = 1,
    };

    enum class eGETKEY : std::uint32_t {
      // No Get Key operation in progress
      eUNSET = 0,
      // Get Key operation in progress
      eSET = 1,
    };

    // Begin Zeroize operation for PUF and go to Error state
    using ZEROIZE = ftl::mmio::Field<1, 0, eZEROIZE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Begin Enroll operation
    using ENROLL = ftl::mmio::Field<1, 1, eENROLL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Begin Start operation
    using START = ftl::mmio::Field<1, 2, eSTART, ftl::mmio::RW, ftl::mmio::Normal>;
    // Begin Set Intrinsic Key operation
    using GENERATEKEY = ftl::mmio::Field<1, 3, eGENERATEKEY, ftl::mmio::RW, ftl::mmio::Normal>;
    // Begin Set User Key operation
    using SETKEY = ftl::mmio::Field<1, 4, eSETKEY, ftl::mmio::RW, ftl::mmio::Normal>;
    // Begin Get Key operation
    using GETKEY = ftl::mmio::Field<1, 6, eGETKEY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_fields_

  struct CTRL : ftl::mmio::Register<
      0x40C82000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_fields_::ZEROIZE,
      CTRL_fields_::ENROLL,
      CTRL_fields_::START,
      CTRL_fields_::GENERATEKEY,
      CTRL_fields_::SETKEY,
      ftl::mmio::Reserved<1, 5>,
      CTRL_fields_::GETKEY,
      ftl::mmio::Reserved<25, 7>> {
    using eZEROIZE = CTRL_fields_::eZEROIZE;
    using eENROLL = CTRL_fields_::eENROLL;
    using eSTART = CTRL_fields_::eSTART;
    using eGENERATEKEY = CTRL_fields_::eGENERATEKEY;
    using eSETKEY = CTRL_fields_::eSETKEY;
    using eGETKEY = CTRL_fields_::eGETKEY;
    using ZEROIZE = CTRL_fields_::ZEROIZE;
    using ENROLL = CTRL_fields_::ENROLL;
    using START = CTRL_fields_::START;
    using GENERATEKEY = CTRL_fields_::GENERATEKEY;
    using SETKEY = CTRL_fields_::SETKEY;
    using GETKEY = CTRL_fields_::GETKEY;
  };

  // PUF Key Index Register
  struct KEYINDEX_fields_ {
    enum class eKEYIDX : std::uint32_t {
      // USE INDEX0
      eINDEX0 = 0,
      // USE INDEX1
      eINDEX1 = 1,
      // USE INDEX2
      eINDEX2 = 2,
      // USE INDEX3
      eINDEX3 = 3,
      // USE INDEX4
      eINDEX4 = 4,
      // USE INDEX5
      eINDEX5 = 5,
      // USE INDEX6
      eINDEX6 = 6,
      // USE INDEX7
      eINDEX7 = 7,
      // USE INDEX8
      eINDEX8 = 8,
      // USE INDEX9
      eINDEX9 = 9,
      // USE INDEX10
      eINDEX10 = 10,
      // USE INDEX11
      eINDEX11 = 11,
      // USE INDEX12
      eINDEX12 = 12,
      // USE INDEX13
      eINDEX13 = 13,
      // USE INDEX14
      eINDEX14 = 14,
      // USE INDEX15
      eINDEX15 = 15,
    };

    // PUF Key Index
    using KEYIDX = ftl::mmio::Field<4, 0, eKEYIDX, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KEYINDEX_fields_

  struct KEYINDEX : ftl::mmio::Register<
      0x40C82004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KEYINDEX_fields_::KEYIDX,
      ftl::mmio::Reserved<28, 4>> {
    using eKEYIDX = KEYINDEX_fields_::eKEYIDX;
    using KEYIDX = KEYINDEX_fields_::KEYIDX;
  };

  // PUF Key Size Register
  struct KEYSIZE_fields_ {
    enum class eKEYSIZE : std::uint32_t {
      // Key Size is 512 Bytes and KC Size is 532 Bytes
      eSIZE64 = 0,
      // Key Size is 8 Bytes and KC Size is 52 Bytes
      eSIZE1 = 1,
      // Key Size is 16 Bytes and KC Size is 52 Bytes
      eSIZE2 = 2,
      // Key Size is 24 Bytes and KC Size is 52 Bytes
      eSIZE3 = 3,
      // Key Size is 32 Bytes and KC Size is 52 Bytes
      eSIZE4 = 4,
      // Key Size is 40 Bytes and KC Size is 84 Bytes
      eSIZE5 = 5,
      // Key Size is 48 Bytes and KC Size is 84 Bytes
      eSIZE6 = 6,
      // Key Size is 56 Bytes and KC Size is 84 Bytes
      eSIZE7 = 7,
      // Key Size is 64 Bytes and KC Size is 84 Bytes
      eSIZE8 = 8,
      // Key Size is 72 Bytes and KC Size is 116 Bytes
      eSIZE9 = 9,
      // Key Size is 80 Bytes and KC Size is 116 Bytes
      eSIZE10 = 10,
      // Key Size is 88 Bytes and KC Size is 116 Bytes
      eSIZE11 = 11,
      // Key Size is 96 Bytes and KC Size is 116 Bytes
      eSIZE12 = 12,
      // Key Size is 104 Bytes and KC Size is 148 Bytes
      eSIZE13 = 13,
      // Key Size is 112 Bytes and KC Size is 148 Bytes
      eSIZE14 = 14,
      // Key Size is 120 Bytes and KC Size is 148 Bytes
      eSIZE15 = 15,
      // Key Size is 128 Bytes and KC Size is 148 Bytes
      eSIZE16 = 16,
      // Key Size is 136 Bytes and KC Size is 180 Bytes
      eSIZE17 = 17,
      // Key Size is 144 Bytes and KC Size is 180 Bytes
      eSIZE18 = 18,
      // Key Size is 152 Bytes and KC Size is 180 Bytes
      eSIZE19 = 19,
      // Key Size is 160 Bytes and KC Size is 180 Bytes
      eSIZE20 = 20,
      // Key Size is 168 Bytes and KC Size is 212 Bytes
      eSIZE21 = 21,
      // Key Size is 176 Bytes and KC Size is 212 Bytes
      eSIZE22 = 22,
      // Key Size is 184 Bytes and KC Size is 212 Bytes
      eSIZE23 = 23,
      // Key Size is 192 Bytes and KC Size is 212 Bytes
      eSIZE24 = 24,
      // Key Size is 200 Bytes and KC Size is 244 Bytes
      eSIZE25 = 25,
      // Key Size is 208 Bytes and KC Size is 244 Bytes
      eSIZE26 = 26,
      // Key Size is 216 Bytes and KC Size is 244 Bytes
      eSIZE27 = 27,
      // Key Size is 224 Bytes and KC Size is 244 Bytes
      eSIZE28 = 28,
      // Key Size is 232 Bytes and KC Size is 276 Bytes
      eSIZE29 = 29,
      // Key Size is 240 Bytes and KC Size is 276 Bytes
      eSIZE30 = 30,
      // Key Size is 248 Bytes and KC Size is 276 Bytes
      eSIZE31 = 31,
      // Key Size is 256 Bytes and KC Size is 276 Bytes
      eSIZE32 = 32,
      // Key Size is 264 Bytes and KC Size is 308 Bytes
      eSIZE33 = 33,
      // Key Size is 272 Bytes and KC Size is 308 Bytes
      eSIZE34 = 34,
      // Key Size is 280 Bytes and KC Size is 308 Bytes
      eSIZE35 = 35,
      // Key Size is 288 Bytes and KC Size is 308 Bytes
      eSIZE36 = 36,
      // Key Size is 296 Bytes and KC Size is 340 Bytes
      eSIZE37 = 37,
      // Key Size is 304 Bytes and KC Size is 340 Bytes
      eSIZE38 = 38,
      // Key Size is 312 Bytes and KC Size is 340 Bytes
      eSIZE39 = 39,
      // Key Size is 320 Bytes and KC Size is 340 Bytes
      eSIZE40 = 40,
      // Key Size is 328 Bytes and KC Size is 372 Bytes
      eSIZE41 = 41,
      // Key Size is 336 Bytes and KC Size is 372 Bytes
      eSIZE42 = 42,
      // Key Size is 344 Bytes and KC Size is 372 Bytes
      eSIZE43 = 43,
      // Key Size is 352 Bytes and KC Size is 372 Bytes
      eSIZE44 = 44,
      // Key Size is 360 Bytes and KC Size is 404 Bytes
      eSIZE45 = 45,
      // Key Size is 368 Bytes and KC Size is 404 Bytes
      eSIZE46 = 46,
      // Key Size is 376 Bytes and KC Size is 404 Bytes
      eSIZE47 = 47,
      // Key Size is 384 Bytes and KC Size is 404 Bytes
      eSIZE48 = 48,
      // Key Size is 392 Bytes and KC Size is 436 Bytes
      eSIZE49 = 49,
      // Key Size is 400 Bytes and KC Size is 436 Bytes
      eSIZE50 = 50,
      // Key Size is 408 Bytes and KC Size is 436 Bytes
      eSIZE51 = 51,
      // Key Size is 416 Bytes and KC Size is 436 Bytes
      eSIZE52 = 52,
      // Key Size is 424 Bytes and KC Size is 468 Bytes
      eSIZE53 = 53,
      // Key Size is 432 Bytes and KC Size is 468 Bytes
      eSIZE54 = 54,
      // Key Size is 440 Bytes and KC Size is 468 Bytes
      eSIZE55 = 55,
      // Key Size is 448 Bytes and KC Size is 468 Bytes
      eSIZE56 = 56,
      // Key Size is 456 Bytes and KC Size is 500 Bytes
      eSIZE57 = 57,
      // Key Size is 464 Bytes and KC Size is 500 Bytes
      eSIZE58 = 58,
      // Key Size is 472 Bytes and KC Size is 500 Bytes
      eSIZE59 = 59,
      // Key Size is 480 Bytes and KC Size is 500 Bytes
      eSIZE60 = 60,
      // Key Size is 488 Bytes and KC Size is 532 Bytes
      eSIZE61 = 61,
      // Key Size is 496 Bytes and KC Size is 532 Bytes
      eSIZE62 = 62,
      // Key Size is 504 Bytes and KC Size is 532 Bytes
      eSIZE63 = 63,
    };

    // PUF Key Size
    using KEYSIZE = ftl::mmio::Field<6, 0, eKEYSIZE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KEYSIZE_fields_

  struct KEYSIZE : ftl::mmio::Register<
      0x40C82008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KEYSIZE_fields_::KEYSIZE,
      ftl::mmio::Reserved<26, 6>> {
    using eKEYSIZE = KEYSIZE_fields_::eKEYSIZE;
    using VALUE = KEYSIZE_fields_::KEYSIZE;
  };

  // PUF Status Register
  struct STAT_fields_ {
    enum class eBUSY : std::uint32_t {
      // IDLE
      eIDLE = 0,
      // BUSY
      eBUSY = 1,
    };

    enum class eSUCCESS : std::uint32_t {
      // Last operation was unsuccessful
      eNO = 0,
      // Last operation was successful
      eSUCCESSFUL = 1,
    };

    enum class eERROR : std::uint32_t {
      // PUF is not in the Error state
      eNO_IN_ERROR = 0,
      // PUF is in the Error state
      eIN_ERROR = 1,
    };

    enum class eKEYINREQ : std::uint32_t {
      // No request for next part of key
      eNOREQUEST = 0,
      // Request for next part of key in KEYINPUT register
      eREQUEST = 1,
    };

    enum class eKEYOUTAVAIL : std::uint32_t {
      // Next part of key is not available
      eNOAVAILABLE = 0,
      // Next part of key is available in KEYOUTPUT register
      eAVAILABLE = 1,
    };

    enum class eCODEINREQ : std::uint32_t {
      // No request for next part of Activation Code/Key Code
      eNOREQUEST = 0,
      // request for next part of Activation Code/Key Code in CODEINPUT register
      eREQUEST = 1,
    };

    enum class eCODEOUTAVAIL : std::uint32_t {
      // Next part of Activation Code/Key Code is not available
      eNOAVAILABLE = 0,
      // Next part of Activation Code/Key Code is available in CODEOUTPUT register
      eAVAILABLE = 1,
    };

    // puf_busy
    using BUSY = ftl::mmio::Field<1, 0, eBUSY, ftl::mmio::RO, ftl::mmio::Normal>;
    // puf_ok
    using SUCCESS = ftl::mmio::Field<1, 1, eSUCCESS, ftl::mmio::RO, ftl::mmio::Normal>;
    // puf_error
    using ERROR = ftl::mmio::Field<1, 2, eERROR, ftl::mmio::RO, ftl::mmio::Normal>;
    // KI_ir
    using KEYINREQ = ftl::mmio::Field<1, 4, eKEYINREQ, ftl::mmio::RO, ftl::mmio::Normal>;
    // KO_or
    using KEYOUTAVAIL = ftl::mmio::Field<1, 5, eKEYOUTAVAIL, ftl::mmio::RO, ftl::mmio::Normal>;
    // CI_ir
    using CODEINREQ = ftl::mmio::Field<1, 6, eCODEINREQ, ftl::mmio::RO, ftl::mmio::Normal>;
    // CO_or
    using CODEOUTAVAIL = ftl::mmio::Field<1, 7, eCODEOUTAVAIL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct STAT_fields_

  struct STAT : ftl::mmio::Register<
      0x40C82020u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RO,
      STAT_fields_::BUSY,
      STAT_fields_::SUCCESS,
      STAT_fields_::ERROR,
      ftl::mmio::Reserved<1, 3>,
      STAT_fields_::KEYINREQ,
      STAT_fields_::KEYOUTAVAIL,
      STAT_fields_::CODEINREQ,
      STAT_fields_::CODEOUTAVAIL,
      ftl::mmio::Reserved<24, 8>> {
    using eBUSY = STAT_fields_::eBUSY;
    using eSUCCESS = STAT_fields_::eSUCCESS;
    using eERROR = STAT_fields_::eERROR;
    using eKEYINREQ = STAT_fields_::eKEYINREQ;
    using eKEYOUTAVAIL = STAT_fields_::eKEYOUTAVAIL;
    using eCODEINREQ = STAT_fields_::eCODEINREQ;
    using eCODEOUTAVAIL = STAT_fields_::eCODEOUTAVAIL;
    using BUSY = STAT_fields_::BUSY;
    using SUCCESS = STAT_fields_::SUCCESS;
    using ERROR = STAT_fields_::ERROR;
    using KEYINREQ = STAT_fields_::KEYINREQ;
    using KEYOUTAVAIL = STAT_fields_::KEYOUTAVAIL;
    using CODEINREQ = STAT_fields_::CODEINREQ;
    using CODEOUTAVAIL = STAT_fields_::CODEOUTAVAIL;
  };

  // PUF Allow Register
  struct ALLOW_fields_ {
    enum class eALLOWENROLL : std::uint32_t {
      // Specified operation is not currently allowed
      eNOALLOW = 0,
      // Specified operation is allowed
      eALLOW = 1,
    };

    enum class eALLOWSTART : std::uint32_t {
      // Specified operation is not currently allowed
      eNOALLOW = 0,
      // Specified operation is allowed
      eALLOW = 1,
    };

    enum class eALLOWSETKEY : std::uint32_t {
      // Specified operation is not currently allowed
      eNOALLOW = 0,
      // Specified operation is allowed
      eALLOW = 1,
    };

    enum class eALLOWGETKEY : std::uint32_t {
      // Specified operation is not currently allowed
      eNOALLOW = 0,
      // Specified operation is allowed
      eALLOW = 1,
    };

    // Allow Enroll operation
    using ALLOWENROLL = ftl::mmio::Field<1, 0, eALLOWENROLL, ftl::mmio::RO, ftl::mmio::Normal>;
    // Allow Start operation
    using ALLOWSTART = ftl::mmio::Field<1, 1, eALLOWSTART, ftl::mmio::RO, ftl::mmio::Normal>;
    // Allow Set Key operations
    using ALLOWSETKEY = ftl::mmio::Field<1, 2, eALLOWSETKEY, ftl::mmio::RO, ftl::mmio::Normal>;
    // Allow Get Key operation
    using ALLOWGETKEY = ftl::mmio::Field<1, 3, eALLOWGETKEY, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ALLOW_fields_

  struct ALLOW : ftl::mmio::Register<
      0x40C82028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ALLOW_fields_::ALLOWENROLL,
      ALLOW_fields_::ALLOWSTART,
      ALLOW_fields_::ALLOWSETKEY,
      ALLOW_fields_::ALLOWGETKEY,
      ftl::mmio::Reserved<28, 4>> {
    using eALLOWENROLL = ALLOW_fields_::eALLOWENROLL;
    using eALLOWSTART = ALLOW_fields_::eALLOWSTART;
    using eALLOWSETKEY = ALLOW_fields_::eALLOWSETKEY;
    using eALLOWGETKEY = ALLOW_fields_::eALLOWGETKEY;
    using ALLOWENROLL = ALLOW_fields_::ALLOWENROLL;
    using ALLOWSTART = ALLOW_fields_::ALLOWSTART;
    using ALLOWSETKEY = ALLOW_fields_::ALLOWSETKEY;
    using ALLOWGETKEY = ALLOW_fields_::ALLOWGETKEY;
  };

  // PUF Key Input Register
  struct KEYINPUT_fields_ {
    // Key input data
    using KEYIN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct KEYINPUT_fields_

  struct KEYINPUT : ftl::mmio::Register<
      0x40C82040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      KEYINPUT_fields_::KEYIN> {
    using KEYIN = KEYINPUT_fields_::KEYIN;
  };

  // PUF Code Input Register
  struct CODEINPUT_fields_ {
    // AC/KC input data
    using CODEIN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct CODEINPUT_fields_

  struct CODEINPUT : ftl::mmio::Register<
      0x40C82044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      CODEINPUT_fields_::CODEIN> {
    using CODEIN = CODEINPUT_fields_::CODEIN;
  };

  // PUF Code Output Register
  struct CODEOUTPUT_fields_ {
    // AC/KC output data
    using CODEOUT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CODEOUTPUT_fields_

  struct CODEOUTPUT : ftl::mmio::Register<
      0x40C82048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      CODEOUTPUT_fields_::CODEOUT> {
    using CODEOUT = CODEOUTPUT_fields_::CODEOUT;
  };

  // PUF Key Output Index Register
  struct KEYOUTINDEX_fields_ {
    // Output Key index
    using KEYOUTIDX = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct KEYOUTINDEX_fields_

  struct KEYOUTINDEX : ftl::mmio::Register<
      0x40C82060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      KEYOUTINDEX_fields_::KEYOUTIDX> {
    using KEYOUTIDX = KEYOUTINDEX_fields_::KEYOUTIDX;
  };

  // PUF Key Output Register
  struct KEYOUTPUT_fields_ {
    // Key output data from a Get Key operation
    using KEYOUT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct KEYOUTPUT_fields_

  struct KEYOUTPUT : ftl::mmio::Register<
      0x40C82064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      KEYOUTPUT_fields_::KEYOUT> {
    using KEYOUT = KEYOUTPUT_fields_::KEYOUT;
  };

  // PUF Interface Status Register
  struct IFSTAT_fields_ {
    enum class eERROR : std::uint32_t {
      // NOERROR
      eNOERROR = 0,
      // ERROR
      eERROR = 1,
    };

    // APB error has occurred
    using ERROR = ftl::mmio::Field<1, 0, eERROR, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct IFSTAT_fields_

  struct IFSTAT : ftl::mmio::Register<
      0x40C820DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IFSTAT_fields_::ERROR,
      ftl::mmio::Reserved<31, 1>> {
    using eERROR = IFSTAT_fields_::eERROR;
    using ERROR = IFSTAT_fields_::ERROR;
  };

  // PUF Version Register
  struct VERSION_fields_ {
    // Version of PUF
    using VERSION = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VERSION_fields_

  struct VERSION : ftl::mmio::Register<
      0x40C820FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VERSION_fields_::VERSION> {
    using VALUE = VERSION_fields_::VERSION;
  };

  // PUF Interrupt Enable
  struct INTEN_fields_ {
    enum class eREADYEN : std::uint32_t {
      // PUF ready interrupt disabled
      eDISABLE = 0,
      // PUF ready interrupt enabled
      eENABLE = 1,
    };

    enum class eSUCCESSEN : std::uint32_t {
      // PUF successful interrupt disabled
      eDISABLE = 0,
      // PUF successful interrupt enabled
      eENABLE = 1,
    };

    enum class eERROREN : std::uint32_t {
      // PUF error interrupt disabled
      eDISABLE = 0,
      // PUF error interrupt enabled
      eENABLE = 1,
    };

    enum class eKEYINREQEN : std::uint32_t {
      // Key interrupt request disabled
      eDISABLE = 0,
      // Key interrupt request enabled
      eENABLE = 1,
    };

    enum class eKEYOUTAVAILEN : std::uint32_t {
      // Key available interrupt disabled
      eDISABLE = 0,
      // Key available interrupt enabled
      eENABLE = 1,
    };

    enum class eCODEINREQEN : std::uint32_t {
      // AC/KC interrupt request disabled
      eDISABLE = 0,
      // AC/KC interrupt request enabled
      eENABLE = 1,
    };

    enum class eCODEOUTAVAILEN : std::uint32_t {
      // AC/KC available interrupt disabled
      eDISABLE = 0,
      // AC/KC available interrupt enabled
      eENABLE = 1,
    };

    // PUF Ready Interrupt Enable
    using READYEN = ftl::mmio::Field<1, 0, eREADYEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF_OK Interrupt Enable
    using SUCCESSEN = ftl::mmio::Field<1, 1, eSUCCESSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF Error Interrupt Enable
    using ERROREN = ftl::mmio::Field<1, 2, eERROREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF Key Input Register Interrupt Enable
    using KEYINREQEN = ftl::mmio::Field<1, 4, eKEYINREQEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF Key Output Register Interrupt Enable
    using KEYOUTAVAILEN = ftl::mmio::Field<1, 5, eKEYOUTAVAILEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF Code Input Register Interrupt Enable
    using CODEINREQEN = ftl::mmio::Field<1, 6, eCODEINREQEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF Code Output Register Interrupt Enable
    using CODEOUTAVAILEN = ftl::mmio::Field<1, 7, eCODEOUTAVAILEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct INTEN_fields_

  struct INTEN : ftl::mmio::Register<
      0x40C82100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      INTEN_fields_::READYEN,
      INTEN_fields_::SUCCESSEN,
      INTEN_fields_::ERROREN,
      ftl::mmio::Reserved<1, 3>,
      INTEN_fields_::KEYINREQEN,
      INTEN_fields_::KEYOUTAVAILEN,
      INTEN_fields_::CODEINREQEN,
      INTEN_fields_::CODEOUTAVAILEN,
      ftl::mmio::Reserved<24, 8>> {
    using eREADYEN = INTEN_fields_::eREADYEN;
    using eSUCCESSEN = INTEN_fields_::eSUCCESSEN;
    using eERROREN = INTEN_fields_::eERROREN;
    using eKEYINREQEN = INTEN_fields_::eKEYINREQEN;
    using eKEYOUTAVAILEN = INTEN_fields_::eKEYOUTAVAILEN;
    using eCODEINREQEN = INTEN_fields_::eCODEINREQEN;
    using eCODEOUTAVAILEN = INTEN_fields_::eCODEOUTAVAILEN;
    using READYEN = INTEN_fields_::READYEN;
    using SUCCESSEN = INTEN_fields_::SUCCESSEN;
    using ERROREN = INTEN_fields_::ERROREN;
    using KEYINREQEN = INTEN_fields_::KEYINREQEN;
    using KEYOUTAVAILEN = INTEN_fields_::KEYOUTAVAILEN;
    using CODEINREQEN = INTEN_fields_::CODEINREQEN;
    using CODEOUTAVAILEN = INTEN_fields_::CODEOUTAVAILEN;
  };

  // PUF Interrupt Status
  struct INTSTAT_fields_ {
    enum class eREADY : std::uint32_t {
      // Indicates that last operation not finished
      eNOT_FINISHED = 0,
      // Indicates that last operation is finished
      eFINISHED = 1,
    };

    enum class eSUCCESS : std::uint32_t {
      // Indicates that last operation was not successful
      eUNSUCCESSFUL = 0,
      // Indicates that last operation was successful
      eSUCCESSFUL = 1,
    };

    enum class eERROR : std::uint32_t {
      // PUF is not in the Error state and operations can be performed
      eNO_ERROR = 0,
      // PUF is in the Error state and no operations can be performed
      eERROR = 1,
    };

    enum class eKEYINREQ : std::uint32_t {
      // No request for next part of key
      eNO_REQUEST = 0,
      // Request for next part of key
      eREQUEST = 1,
    };

    enum class eKEYOUTAVAIL : std::uint32_t {
      // Next part of key is not available
      eNOT_AVAILABLE = 0,
      // Next part of key is available
      eAVAILABLE = 1,
    };

    enum class eCODEINREQ : std::uint32_t {
      // No request for next part of AC/KC
      eNO_REQUEST = 0,
      // Request for next part of AC/KC
      eREQUEST = 1,
    };

    enum class eCODEOUTAVAIL : std::uint32_t {
      // Next part of AC/KC is not available
      eNOT_AVAILABLE = 0,
      // Next part of AC/KC is available
      eAVAILABLE = 1,
    };

    // PUF_FINISH Interrupt Status
    using READY = ftl::mmio::Field<1, 0, eREADY, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // PUF_OK Interrupt Status
    using SUCCESS = ftl::mmio::Field<1, 1, eSUCCESS, ftl::mmio::RO, ftl::mmio::Normal>;
    // PUF_ERROR Interrupt Status
    using ERROR = ftl::mmio::Field<1, 2, eERROR, ftl::mmio::RO, ftl::mmio::Normal>;
    // PUF Key Input Register Interrupt Status
    using KEYINREQ = ftl::mmio::Field<1, 4, eKEYINREQ, ftl::mmio::RO, ftl::mmio::Normal>;
    // PUF Key Output Register Interrupt Status
    using KEYOUTAVAIL = ftl::mmio::Field<1, 5, eKEYOUTAVAIL, ftl::mmio::RO, ftl::mmio::Normal>;
    // PUF Code Input Register Interrupt Status
    using CODEINREQ = ftl::mmio::Field<1, 6, eCODEINREQ, ftl::mmio::RO, ftl::mmio::Normal>;
    // PUF Code Output Register Interrupt Status
    using CODEOUTAVAIL = ftl::mmio::Field<1, 7, eCODEOUTAVAIL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct INTSTAT_fields_

  struct INTSTAT : ftl::mmio::Register<
      0x40C82104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      INTSTAT_fields_::READY,
      INTSTAT_fields_::SUCCESS,
      INTSTAT_fields_::ERROR,
      ftl::mmio::Reserved<1, 3>,
      INTSTAT_fields_::KEYINREQ,
      INTSTAT_fields_::KEYOUTAVAIL,
      INTSTAT_fields_::CODEINREQ,
      INTSTAT_fields_::CODEOUTAVAIL,
      ftl::mmio::Reserved<24, 8>> {
    using eREADY = INTSTAT_fields_::eREADY;
    using eSUCCESS = INTSTAT_fields_::eSUCCESS;
    using eERROR = INTSTAT_fields_::eERROR;
    using eKEYINREQ = INTSTAT_fields_::eKEYINREQ;
    using eKEYOUTAVAIL = INTSTAT_fields_::eKEYOUTAVAIL;
    using eCODEINREQ = INTSTAT_fields_::eCODEINREQ;
    using eCODEOUTAVAIL = INTSTAT_fields_::eCODEOUTAVAIL;
    using READY = INTSTAT_fields_::READY;
    using SUCCESS = INTSTAT_fields_::SUCCESS;
    using ERROR = INTSTAT_fields_::ERROR;
    using KEYINREQ = INTSTAT_fields_::KEYINREQ;
    using KEYOUTAVAIL = INTSTAT_fields_::KEYOUTAVAIL;
    using CODEINREQ = INTSTAT_fields_::CODEINREQ;
    using CODEOUTAVAIL = INTSTAT_fields_::CODEOUTAVAIL;
  };

  // PUF Power Control Of RAM
  struct PWRCTRL_fields_ {
    enum class eRAM_ON : std::uint32_t {
      // PUF RAM is in sleep mode (PUF operation disabled)
      eSLEEP = 0,
      // PUF RAM is awake (normal PUF operation enabled)
      eWAKE = 1,
    };

    enum class eCK_DIS : std::uint32_t {
      // PUF RAM is clocked (normal PUF operation enabled)
      eENABLE = 0,
      // PUF RAM clock is gated/disabled (PUF operation disabled)
      eDISABLE = 1,
    };

    enum class eRAM_INITN : std::uint32_t {
      // Reset the PUF RAM (PUF operation disabled)
      eRESET = 0,
      // Do not reset the PUF RAM (normal PUF operation enabled)
      eDO_NOT_RESET = 1,
    };

    // PUF RAM on
    using RAM_ON = ftl::mmio::Field<1, 0, eRAM_ON, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock disable
    using CK_DIS = ftl::mmio::Field<1, 2, eCK_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // RAM initialization
    using RAM_INITN = ftl::mmio::Field<1, 3, eRAM_INITN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF RAM power switches
    using RAM_PSW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PWRCTRL_fields_

  struct PWRCTRL : ftl::mmio::Register<
      0x40C82108u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      PWRCTRL_fields_::RAM_ON,
      ftl::mmio::Reserved<1, 1>,
      PWRCTRL_fields_::CK_DIS,
      PWRCTRL_fields_::RAM_INITN,
      PWRCTRL_fields_::RAM_PSW,
      ftl::mmio::Reserved<24, 8>> {
    using eRAM_ON = PWRCTRL_fields_::eRAM_ON;
    using eCK_DIS = PWRCTRL_fields_::eCK_DIS;
    using eRAM_INITN = PWRCTRL_fields_::eRAM_INITN;
    using RAM_ON = PWRCTRL_fields_::RAM_ON;
    using CK_DIS = PWRCTRL_fields_::CK_DIS;
    using RAM_INITN = PWRCTRL_fields_::RAM_INITN;
    using RAM_PSW = PWRCTRL_fields_::RAM_PSW;
  };

  // PUF Configuration Register
  struct CFG_fields_ {
    enum class ePUF_BLOCK_SET_KEY : std::uint32_t {
      // Enable the Set Key state
      eENABLE = 0,
      // Disable the Set Key state
      eDISABLE = 1,
    };

    enum class ePUF_BLOCK_ENROLL : std::uint32_t {
      // Enable the Enrollment state
      eENABLE = 0,
      // Disable the Enrollment state
      eDISABLE = 1,
    };

    // PUF Block Set Key Disable
    using PUF_BLOCK_SET_KEY = ftl::mmio::Field<1, 0, ePUF_BLOCK_SET_KEY, ftl::mmio::RW, ftl::mmio::Normal>;
    // PUF Block Enroll Disable
    using PUF_BLOCK_ENROLL = ftl::mmio::Field<1, 1, ePUF_BLOCK_ENROLL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CFG_fields_

  struct CFG : ftl::mmio::Register<
      0x40C8210Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_fields_::PUF_BLOCK_SET_KEY,
      CFG_fields_::PUF_BLOCK_ENROLL,
      ftl::mmio::Reserved<30, 2>> {
    using ePUF_BLOCK_SET_KEY = CFG_fields_::ePUF_BLOCK_SET_KEY;
    using ePUF_BLOCK_ENROLL = CFG_fields_::ePUF_BLOCK_ENROLL;
    using PUF_BLOCK_SET_KEY = CFG_fields_::PUF_BLOCK_SET_KEY;
    using PUF_BLOCK_ENROLL = CFG_fields_::PUF_BLOCK_ENROLL;
  };

  // PUF Key Manager Lock
  struct KEYLOCK_fields_ {
    enum class eLOCK0 : std::uint32_t {
      // SNVS Key block locked
      eLOCKED_00 = 0,
      // SNVS Key block locked
      eLOCKED_01 = 1,
      // SNVS Key block unlocked
      eUNLOCKED = 2,
      // SNVS Key block locked
      eLOCKED_11 = 3,
    };

    enum class eLOCK1 : std::uint32_t {
      // OTFAD Key block locked
      eLOCKED_00 = 0,
      // OTFAD Key block locked
      eLOCKED_01 = 1,
      // OTFAD Key block unlocked
      eUNLOCKED = 2,
      // OTFAD Key block locked
      eLOCKED_11 = 3,
    };

    // Lock Block 0
    using LOCK0 = ftl::mmio::Field<2, 0, eLOCK0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock Block 1
    using LOCK1 = ftl::mmio::Field<2, 2, eLOCK1, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KEYLOCK_fields_

  struct KEYLOCK : ftl::mmio::Register<
      0x40C82200u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      KEYLOCK_fields_::LOCK0,
      KEYLOCK_fields_::LOCK1,
      ftl::mmio::Reserved<28, 4>> {
    using eLOCK0 = KEYLOCK_fields_::eLOCK0;
    using eLOCK1 = KEYLOCK_fields_::eLOCK1;
    using LOCK0 = KEYLOCK_fields_::LOCK0;
    using LOCK1 = KEYLOCK_fields_::LOCK1;
  };

  // PUF Key Manager Enable
  struct KEYENABLE_fields_ {
    enum class eENABLE0 : std::uint32_t {
      // Key block 0 disabled
      eDISABLED_00 = 0,
      // Key block 0 disabled
      eDISABLED_01 = 1,
      // Key block 0 enabled
      eENABLED = 2,
      // Key block 0 disabled
      eDISABLED_11 = 3,
    };

    enum class eENABLE1 : std::uint32_t {
      // Key block 1 disabled
      eDISABLED_00 = 0,
      // Key block 1 disabled
      eDISABLED_01 = 1,
      // Key block 1 enabled
      eENABLED = 2,
      // Key block 1 disabled
      eDISABLED_11 = 3,
    };

    // Enable Block 0
    using ENABLE0 = ftl::mmio::Field<2, 0, eENABLE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Block 1
    using ENABLE1 = ftl::mmio::Field<2, 2, eENABLE1, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KEYENABLE_fields_

  struct KEYENABLE : ftl::mmio::Register<
      0x40C82204u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      KEYENABLE_fields_::ENABLE0,
      KEYENABLE_fields_::ENABLE1,
      ftl::mmio::Reserved<28, 4>> {
    using eENABLE0 = KEYENABLE_fields_::eENABLE0;
    using eENABLE1 = KEYENABLE_fields_::eENABLE1;
    using ENABLE0 = KEYENABLE_fields_::ENABLE0;
    using ENABLE1 = KEYENABLE_fields_::ENABLE1;
  };

  // PUF Key Manager Reset
  struct KEYRESET_fields_ {
    enum class eRESET0 : std::uint32_t {
      // Do not reset key block 0
      eNORESET_00 = 0,
      // Do not reset key block 0
      eNORESET_01 = 1,
      // Reset key block 0
      eRESET = 2,
      // Do not reset key block 0
      eNORESET_11 = 3,
    };

    enum class eRESET1 : std::uint32_t {
      // Do not reset key block 1
      eNORESET_00 = 0,
      // Do not reset key block 1
      eNORESET_01 = 1,
      // Reset key block 1
      eRESET = 2,
      // Do not reset key block 1
      eNORESET_11 = 3,
    };

    // Reset Block 0
    using RESET0 = ftl::mmio::Field<2, 0, eRESET0, ftl::mmio::WO, ftl::mmio::Normal>;
    // Reset Block 1
    using RESET1 = ftl::mmio::Field<2, 2, eRESET1, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct KEYRESET_fields_

  struct KEYRESET : ftl::mmio::Register<
      0x40C82208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      KEYRESET_fields_::RESET0,
      KEYRESET_fields_::RESET1,
      ftl::mmio::Reserved<28, 4>> {
    using eRESET0 = KEYRESET_fields_::eRESET0;
    using eRESET1 = KEYRESET_fields_::eRESET1;
    using RESET0 = KEYRESET_fields_::RESET0;
    using RESET1 = KEYRESET_fields_::RESET1;
  };

  // PUF Index Block Key Output
  struct IDXBLK_fields_ {
    // idxblk0
    using IDXBLK0 = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk1
    using IDXBLK1 = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk2
    using IDXBLK2 = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk3
    using IDXBLK3 = ftl::mmio::Field<2, 6, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk4
    using IDXBLK4 = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk5
    using IDXBLK5 = ftl::mmio::Field<2, 10, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk6
    using IDXBLK6 = ftl::mmio::Field<2, 12, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk7
    using IDXBLK7 = ftl::mmio::Field<2, 14, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk8
    using IDXBLK8 = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk9
    using IDXBLK9 = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk10
    using IDXBLK10 = ftl::mmio::Field<2, 20, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk11
    using IDXBLK11 = ftl::mmio::Field<2, 22, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk12
    using IDXBLK12 = ftl::mmio::Field<2, 24, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk13
    using IDXBLK13 = ftl::mmio::Field<2, 26, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk14
    using IDXBLK14 = ftl::mmio::Field<2, 28, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk15
    using IDXBLK15 = ftl::mmio::Field<2, 30, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct IDXBLK_fields_

  struct IDXBLK : ftl::mmio::Register<
      0x40C8220Cu,
      std::uint32_t,
      0xAAAAAAAAu,
      ftl::mmio::WO,
      IDXBLK_fields_::IDXBLK0,
      IDXBLK_fields_::IDXBLK1,
      IDXBLK_fields_::IDXBLK2,
      IDXBLK_fields_::IDXBLK3,
      IDXBLK_fields_::IDXBLK4,
      IDXBLK_fields_::IDXBLK5,
      IDXBLK_fields_::IDXBLK6,
      IDXBLK_fields_::IDXBLK7,
      IDXBLK_fields_::IDXBLK8,
      IDXBLK_fields_::IDXBLK9,
      IDXBLK_fields_::IDXBLK10,
      IDXBLK_fields_::IDXBLK11,
      IDXBLK_fields_::IDXBLK12,
      IDXBLK_fields_::IDXBLK13,
      IDXBLK_fields_::IDXBLK14,
      IDXBLK_fields_::IDXBLK15> {
    using IDXBLK0 = IDXBLK_fields_::IDXBLK0;
    using IDXBLK1 = IDXBLK_fields_::IDXBLK1;
    using IDXBLK2 = IDXBLK_fields_::IDXBLK2;
    using IDXBLK3 = IDXBLK_fields_::IDXBLK3;
    using IDXBLK4 = IDXBLK_fields_::IDXBLK4;
    using IDXBLK5 = IDXBLK_fields_::IDXBLK5;
    using IDXBLK6 = IDXBLK_fields_::IDXBLK6;
    using IDXBLK7 = IDXBLK_fields_::IDXBLK7;
    using IDXBLK8 = IDXBLK_fields_::IDXBLK8;
    using IDXBLK9 = IDXBLK_fields_::IDXBLK9;
    using IDXBLK10 = IDXBLK_fields_::IDXBLK10;
    using IDXBLK11 = IDXBLK_fields_::IDXBLK11;
    using IDXBLK12 = IDXBLK_fields_::IDXBLK12;
    using IDXBLK13 = IDXBLK_fields_::IDXBLK13;
    using IDXBLK14 = IDXBLK_fields_::IDXBLK14;
    using IDXBLK15 = IDXBLK_fields_::IDXBLK15;
  };

  // PUF Index Block Key Output
  struct IDXBLK_DP_fields_ {
    // idxblk_dp0
    using IDXBLK_DP0 = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp1
    using IDXBLK_DP1 = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp2
    using IDXBLK_DP2 = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp3
    using IDXBLK_DP3 = ftl::mmio::Field<2, 6, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp4
    using IDXBLK_DP4 = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp5
    using IDXBLK_DP5 = ftl::mmio::Field<2, 10, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp6
    using IDXBLK_DP6 = ftl::mmio::Field<2, 12, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp7
    using IDXBLK_DP7 = ftl::mmio::Field<2, 14, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp8
    using IDXBLK_DP8 = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp9
    using IDXBLK_DP9 = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp10
    using IDXBLK_DP10 = ftl::mmio::Field<2, 20, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp11
    using IDXBLK_DP11 = ftl::mmio::Field<2, 22, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp12
    using IDXBLK_DP12 = ftl::mmio::Field<2, 24, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp13
    using IDXBLK_DP13 = ftl::mmio::Field<2, 26, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp14
    using IDXBLK_DP14 = ftl::mmio::Field<2, 28, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // idxblk_dp15
    using IDXBLK_DP15 = ftl::mmio::Field<2, 30, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct IDXBLK_DP_fields_

  struct IDXBLK_DP : ftl::mmio::Register<
      0x40C82210u,
      std::uint32_t,
      0xAAAAAAAAu,
      ftl::mmio::WO,
      IDXBLK_DP_fields_::IDXBLK_DP0,
      IDXBLK_DP_fields_::IDXBLK_DP1,
      IDXBLK_DP_fields_::IDXBLK_DP2,
      IDXBLK_DP_fields_::IDXBLK_DP3,
      IDXBLK_DP_fields_::IDXBLK_DP4,
      IDXBLK_DP_fields_::IDXBLK_DP5,
      IDXBLK_DP_fields_::IDXBLK_DP6,
      IDXBLK_DP_fields_::IDXBLK_DP7,
      IDXBLK_DP_fields_::IDXBLK_DP8,
      IDXBLK_DP_fields_::IDXBLK_DP9,
      IDXBLK_DP_fields_::IDXBLK_DP10,
      IDXBLK_DP_fields_::IDXBLK_DP11,
      IDXBLK_DP_fields_::IDXBLK_DP12,
      IDXBLK_DP_fields_::IDXBLK_DP13,
      IDXBLK_DP_fields_::IDXBLK_DP14,
      IDXBLK_DP_fields_::IDXBLK_DP15> {
    using IDXBLK_DP0 = IDXBLK_DP_fields_::IDXBLK_DP0;
    using IDXBLK_DP1 = IDXBLK_DP_fields_::IDXBLK_DP1;
    using IDXBLK_DP2 = IDXBLK_DP_fields_::IDXBLK_DP2;
    using IDXBLK_DP3 = IDXBLK_DP_fields_::IDXBLK_DP3;
    using IDXBLK_DP4 = IDXBLK_DP_fields_::IDXBLK_DP4;
    using IDXBLK_DP5 = IDXBLK_DP_fields_::IDXBLK_DP5;
    using IDXBLK_DP6 = IDXBLK_DP_fields_::IDXBLK_DP6;
    using IDXBLK_DP7 = IDXBLK_DP_fields_::IDXBLK_DP7;
    using IDXBLK_DP8 = IDXBLK_DP_fields_::IDXBLK_DP8;
    using IDXBLK_DP9 = IDXBLK_DP_fields_::IDXBLK_DP9;
    using IDXBLK_DP10 = IDXBLK_DP_fields_::IDXBLK_DP10;
    using IDXBLK_DP11 = IDXBLK_DP_fields_::IDXBLK_DP11;
    using IDXBLK_DP12 = IDXBLK_DP_fields_::IDXBLK_DP12;
    using IDXBLK_DP13 = IDXBLK_DP_fields_::IDXBLK_DP13;
    using IDXBLK_DP14 = IDXBLK_DP_fields_::IDXBLK_DP14;
    using IDXBLK_DP15 = IDXBLK_DP_fields_::IDXBLK_DP15;
  };

  // PUF Key Block 0 Mask Enable
  struct KEYMASK0_fields_ {
    // KEYMASK0
    using KEYMASK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct KEYMASK0_fields_

  struct KEYMASK0 : ftl::mmio::Register<
      0x40C82214u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      KEYMASK0_fields_::KEYMASK> {
    using KEYMASK = KEYMASK0_fields_::KEYMASK;
  };

  // PUF Key Block 1 Mask Enable
  struct KEYMASK1_fields_ {
    // KEYMASK1
    using KEYMASK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct KEYMASK1_fields_

  struct KEYMASK1 : ftl::mmio::Register<
      0x40C82218u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      KEYMASK1_fields_::KEYMASK> {
    using KEYMASK = KEYMASK1_fields_::KEYMASK;
  };

  // PUF Index Block Setting Status Register
  struct IDXBLK_STATUS_fields_ {
    // idxblk_status0
    using IDXBLK_STATUS0 = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status1
    using IDXBLK_STATUS1 = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status2
    using IDXBLK_STATUS2 = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status3
    using IDXBLK_STATUS3 = ftl::mmio::Field<2, 6, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status4
    using IDXBLK_STATUS4 = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status5
    using IDXBLK_STATUS5 = ftl::mmio::Field<2, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status6
    using IDXBLK_STATUS6 = ftl::mmio::Field<2, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status7
    using IDXBLK_STATUS7 = ftl::mmio::Field<2, 14, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status8
    using IDXBLK_STATUS8 = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status9
    using IDXBLK_STATUS9 = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status10
    using IDXBLK_STATUS10 = ftl::mmio::Field<2, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status11
    using IDXBLK_STATUS11 = ftl::mmio::Field<2, 22, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status12
    using IDXBLK_STATUS12 = ftl::mmio::Field<2, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status13
    using IDXBLK_STATUS13 = ftl::mmio::Field<2, 26, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status14
    using IDXBLK_STATUS14 = ftl::mmio::Field<2, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // idxblk_status15
    using IDXBLK_STATUS15 = ftl::mmio::Field<2, 30, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IDXBLK_STATUS_fields_

  struct IDXBLK_STATUS : ftl::mmio::Register<
      0x40C82254u,
      std::uint32_t,
      0xAAAAAAAAu,
      ftl::mmio::RO,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS0,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS1,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS2,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS3,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS4,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS5,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS6,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS7,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS8,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS9,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS10,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS11,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS12,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS13,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS14,
      IDXBLK_STATUS_fields_::IDXBLK_STATUS15> {
    using IDXBLK_STATUS0 = IDXBLK_STATUS_fields_::IDXBLK_STATUS0;
    using IDXBLK_STATUS1 = IDXBLK_STATUS_fields_::IDXBLK_STATUS1;
    using IDXBLK_STATUS2 = IDXBLK_STATUS_fields_::IDXBLK_STATUS2;
    using IDXBLK_STATUS3 = IDXBLK_STATUS_fields_::IDXBLK_STATUS3;
    using IDXBLK_STATUS4 = IDXBLK_STATUS_fields_::IDXBLK_STATUS4;
    using IDXBLK_STATUS5 = IDXBLK_STATUS_fields_::IDXBLK_STATUS5;
    using IDXBLK_STATUS6 = IDXBLK_STATUS_fields_::IDXBLK_STATUS6;
    using IDXBLK_STATUS7 = IDXBLK_STATUS_fields_::IDXBLK_STATUS7;
    using IDXBLK_STATUS8 = IDXBLK_STATUS_fields_::IDXBLK_STATUS8;
    using IDXBLK_STATUS9 = IDXBLK_STATUS_fields_::IDXBLK_STATUS9;
    using IDXBLK_STATUS10 = IDXBLK_STATUS_fields_::IDXBLK_STATUS10;
    using IDXBLK_STATUS11 = IDXBLK_STATUS_fields_::IDXBLK_STATUS11;
    using IDXBLK_STATUS12 = IDXBLK_STATUS_fields_::IDXBLK_STATUS12;
    using IDXBLK_STATUS13 = IDXBLK_STATUS_fields_::IDXBLK_STATUS13;
    using IDXBLK_STATUS14 = IDXBLK_STATUS_fields_::IDXBLK_STATUS14;
    using IDXBLK_STATUS15 = IDXBLK_STATUS_fields_::IDXBLK_STATUS15;
  };

  // PUF Key Manager Shift Status
  struct IDXBLK_SHIFT_fields_ {
    // Index of key space in block 0
    using IND_KEY0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Index of key space in block 1
    using IND_KEY1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IDXBLK_SHIFT_fields_

  struct IDXBLK_SHIFT : ftl::mmio::Register<
      0x40C82258u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IDXBLK_SHIFT_fields_::IND_KEY0,
      IDXBLK_SHIFT_fields_::IND_KEY1,
      ftl::mmio::Reserved<24, 8>> {
    using IND_KEY0 = IDXBLK_SHIFT_fields_::IND_KEY0;
    using IND_KEY1 = IDXBLK_SHIFT_fields_::IND_KEY1;
  };

};

}  // namespace regs