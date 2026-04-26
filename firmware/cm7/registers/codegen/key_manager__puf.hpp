#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PUF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct KeyManagerPuf {
  // PUF Control Register
  struct CtrlFields {
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
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      0x40C82000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlFields::ZEROIZE,
      CtrlFields::ENROLL,
      CtrlFields::START,
      CtrlFields::GENERATEKEY,
      CtrlFields::SETKEY,
      ftl::mmio::Reserved<1, 5>,
      CtrlFields::GETKEY,
      ftl::mmio::Reserved<25, 7>> {
    using eZEROIZE = CtrlFields::eZEROIZE;
    using eENROLL = CtrlFields::eENROLL;
    using eSTART = CtrlFields::eSTART;
    using eGENERATEKEY = CtrlFields::eGENERATEKEY;
    using eSETKEY = CtrlFields::eSETKEY;
    using eGETKEY = CtrlFields::eGETKEY;
    using ZEROIZE = CtrlFields::ZEROIZE;
    using ENROLL = CtrlFields::ENROLL;
    using START = CtrlFields::START;
    using GENERATEKEY = CtrlFields::GENERATEKEY;
    using SETKEY = CtrlFields::SETKEY;
    using GETKEY = CtrlFields::GETKEY;
  };

  // PUF Key Index Register
  struct KeyindexFields {
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
  };  // struct KeyindexFields

  struct KEYINDEX : ftl::mmio::Register<
      0x40C82004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KeyindexFields::KEYIDX,
      ftl::mmio::Reserved<28, 4>> {
    using eKEYIDX = KeyindexFields::eKEYIDX;
    using KEYIDX = KeyindexFields::KEYIDX;
  };

  // PUF Key Size Register
  struct KeysizeFields {
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
  };  // struct KeysizeFields

  struct KEYSIZE : ftl::mmio::Register<
      0x40C82008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KeysizeFields::KEYSIZE,
      ftl::mmio::Reserved<26, 6>> {
    using eKEYSIZE = KeysizeFields::eKEYSIZE;
    using VALUE = KeysizeFields::KEYSIZE;
  };

  // PUF Status Register
  struct StatFields {
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
  };  // struct StatFields

  struct STAT : ftl::mmio::Register<
      0x40C82020u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RO,
      StatFields::BUSY,
      StatFields::SUCCESS,
      StatFields::ERROR,
      ftl::mmio::Reserved<1, 3>,
      StatFields::KEYINREQ,
      StatFields::KEYOUTAVAIL,
      StatFields::CODEINREQ,
      StatFields::CODEOUTAVAIL,
      ftl::mmio::Reserved<24, 8>> {
    using eBUSY = StatFields::eBUSY;
    using eSUCCESS = StatFields::eSUCCESS;
    using eERROR = StatFields::eERROR;
    using eKEYINREQ = StatFields::eKEYINREQ;
    using eKEYOUTAVAIL = StatFields::eKEYOUTAVAIL;
    using eCODEINREQ = StatFields::eCODEINREQ;
    using eCODEOUTAVAIL = StatFields::eCODEOUTAVAIL;
    using BUSY = StatFields::BUSY;
    using SUCCESS = StatFields::SUCCESS;
    using ERROR = StatFields::ERROR;
    using KEYINREQ = StatFields::KEYINREQ;
    using KEYOUTAVAIL = StatFields::KEYOUTAVAIL;
    using CODEINREQ = StatFields::CODEINREQ;
    using CODEOUTAVAIL = StatFields::CODEOUTAVAIL;
  };

  // PUF Allow Register
  struct AllowFields {
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
  };  // struct AllowFields

  struct ALLOW : ftl::mmio::Register<
      0x40C82028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      AllowFields::ALLOWENROLL,
      AllowFields::ALLOWSTART,
      AllowFields::ALLOWSETKEY,
      AllowFields::ALLOWGETKEY,
      ftl::mmio::Reserved<28, 4>> {
    using eALLOWENROLL = AllowFields::eALLOWENROLL;
    using eALLOWSTART = AllowFields::eALLOWSTART;
    using eALLOWSETKEY = AllowFields::eALLOWSETKEY;
    using eALLOWGETKEY = AllowFields::eALLOWGETKEY;
    using ALLOWENROLL = AllowFields::ALLOWENROLL;
    using ALLOWSTART = AllowFields::ALLOWSTART;
    using ALLOWSETKEY = AllowFields::ALLOWSETKEY;
    using ALLOWGETKEY = AllowFields::ALLOWGETKEY;
  };

  // PUF Key Input Register
  struct KeyinputFields {
    // Key input data
    using KEYIN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct KeyinputFields

  struct KEYINPUT : ftl::mmio::Register<
      0x40C82040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      KeyinputFields::KEYIN> {
    using KEYIN = KeyinputFields::KEYIN;
  };

  // PUF Code Input Register
  struct CodeinputFields {
    // AC/KC input data
    using CODEIN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct CodeinputFields

  struct CODEINPUT : ftl::mmio::Register<
      0x40C82044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      CodeinputFields::CODEIN> {
    using CODEIN = CodeinputFields::CODEIN;
  };

  // PUF Code Output Register
  struct CodeoutputFields {
    // AC/KC output data
    using CODEOUT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CodeoutputFields

  struct CODEOUTPUT : ftl::mmio::Register<
      0x40C82048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      CodeoutputFields::CODEOUT> {
    using CODEOUT = CodeoutputFields::CODEOUT;
  };

  // PUF Key Output Index Register
  struct KeyoutindexFields {
    // Output Key index
    using KEYOUTIDX = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct KeyoutindexFields

  struct KEYOUTINDEX : ftl::mmio::Register<
      0x40C82060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      KeyoutindexFields::KEYOUTIDX> {
    using KEYOUTIDX = KeyoutindexFields::KEYOUTIDX;
  };

  // PUF Key Output Register
  struct KeyoutputFields {
    // Key output data from a Get Key operation
    using KEYOUT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct KeyoutputFields

  struct KEYOUTPUT : ftl::mmio::Register<
      0x40C82064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      KeyoutputFields::KEYOUT> {
    using KEYOUT = KeyoutputFields::KEYOUT;
  };

  // PUF Interface Status Register
  struct IfstatFields {
    enum class eERROR : std::uint32_t {
      // NOERROR
      eNOERROR = 0,
      // ERROR
      eERROR = 1,
    };

    // APB error has occurred
    using ERROR = ftl::mmio::Field<1, 0, eERROR, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct IfstatFields

  struct IFSTAT : ftl::mmio::Register<
      0x40C820DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IfstatFields::ERROR,
      ftl::mmio::Reserved<31, 1>> {
    using eERROR = IfstatFields::eERROR;
    using ERROR = IfstatFields::ERROR;
  };

  // PUF Version Register
  struct VersionFields {
    // Version of PUF
    using VERSION = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VersionFields

  struct VERSION : ftl::mmio::Register<
      0x40C820FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VersionFields::VERSION> {
    using VALUE = VersionFields::VERSION;
  };

  // PUF Interrupt Enable
  struct IntenFields {
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
  };  // struct IntenFields

  struct INTEN : ftl::mmio::Register<
      0x40C82100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntenFields::READYEN,
      IntenFields::SUCCESSEN,
      IntenFields::ERROREN,
      ftl::mmio::Reserved<1, 3>,
      IntenFields::KEYINREQEN,
      IntenFields::KEYOUTAVAILEN,
      IntenFields::CODEINREQEN,
      IntenFields::CODEOUTAVAILEN,
      ftl::mmio::Reserved<24, 8>> {
    using eREADYEN = IntenFields::eREADYEN;
    using eSUCCESSEN = IntenFields::eSUCCESSEN;
    using eERROREN = IntenFields::eERROREN;
    using eKEYINREQEN = IntenFields::eKEYINREQEN;
    using eKEYOUTAVAILEN = IntenFields::eKEYOUTAVAILEN;
    using eCODEINREQEN = IntenFields::eCODEINREQEN;
    using eCODEOUTAVAILEN = IntenFields::eCODEOUTAVAILEN;
    using READYEN = IntenFields::READYEN;
    using SUCCESSEN = IntenFields::SUCCESSEN;
    using ERROREN = IntenFields::ERROREN;
    using KEYINREQEN = IntenFields::KEYINREQEN;
    using KEYOUTAVAILEN = IntenFields::KEYOUTAVAILEN;
    using CODEINREQEN = IntenFields::CODEINREQEN;
    using CODEOUTAVAILEN = IntenFields::CODEOUTAVAILEN;
  };

  // PUF Interrupt Status
  struct IntstatFields {
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
  };  // struct IntstatFields

  struct INTSTAT : ftl::mmio::Register<
      0x40C82104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntstatFields::READY,
      IntstatFields::SUCCESS,
      IntstatFields::ERROR,
      ftl::mmio::Reserved<1, 3>,
      IntstatFields::KEYINREQ,
      IntstatFields::KEYOUTAVAIL,
      IntstatFields::CODEINREQ,
      IntstatFields::CODEOUTAVAIL,
      ftl::mmio::Reserved<24, 8>> {
    using eREADY = IntstatFields::eREADY;
    using eSUCCESS = IntstatFields::eSUCCESS;
    using eERROR = IntstatFields::eERROR;
    using eKEYINREQ = IntstatFields::eKEYINREQ;
    using eKEYOUTAVAIL = IntstatFields::eKEYOUTAVAIL;
    using eCODEINREQ = IntstatFields::eCODEINREQ;
    using eCODEOUTAVAIL = IntstatFields::eCODEOUTAVAIL;
    using READY = IntstatFields::READY;
    using SUCCESS = IntstatFields::SUCCESS;
    using ERROR = IntstatFields::ERROR;
    using KEYINREQ = IntstatFields::KEYINREQ;
    using KEYOUTAVAIL = IntstatFields::KEYOUTAVAIL;
    using CODEINREQ = IntstatFields::CODEINREQ;
    using CODEOUTAVAIL = IntstatFields::CODEOUTAVAIL;
  };

  // PUF Power Control Of RAM
  struct PwrctrlFields {
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
  };  // struct PwrctrlFields

  struct PWRCTRL : ftl::mmio::Register<
      0x40C82108u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      PwrctrlFields::RAM_ON,
      ftl::mmio::Reserved<1, 1>,
      PwrctrlFields::CK_DIS,
      PwrctrlFields::RAM_INITN,
      PwrctrlFields::RAM_PSW,
      ftl::mmio::Reserved<24, 8>> {
    using eRAM_ON = PwrctrlFields::eRAM_ON;
    using eCK_DIS = PwrctrlFields::eCK_DIS;
    using eRAM_INITN = PwrctrlFields::eRAM_INITN;
    using RAM_ON = PwrctrlFields::RAM_ON;
    using CK_DIS = PwrctrlFields::CK_DIS;
    using RAM_INITN = PwrctrlFields::RAM_INITN;
    using RAM_PSW = PwrctrlFields::RAM_PSW;
  };

  // PUF Configuration Register
  struct CfgFields {
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
  };  // struct CfgFields

  struct CFG : ftl::mmio::Register<
      0x40C8210Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgFields::PUF_BLOCK_SET_KEY,
      CfgFields::PUF_BLOCK_ENROLL,
      ftl::mmio::Reserved<30, 2>> {
    using ePUF_BLOCK_SET_KEY = CfgFields::ePUF_BLOCK_SET_KEY;
    using ePUF_BLOCK_ENROLL = CfgFields::ePUF_BLOCK_ENROLL;
    using PUF_BLOCK_SET_KEY = CfgFields::PUF_BLOCK_SET_KEY;
    using PUF_BLOCK_ENROLL = CfgFields::PUF_BLOCK_ENROLL;
  };

  // PUF Key Manager Lock
  struct KeylockFields {
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
  };  // struct KeylockFields

  struct KEYLOCK : ftl::mmio::Register<
      0x40C82200u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      KeylockFields::LOCK0,
      KeylockFields::LOCK1,
      ftl::mmio::Reserved<28, 4>> {
    using eLOCK0 = KeylockFields::eLOCK0;
    using eLOCK1 = KeylockFields::eLOCK1;
    using LOCK0 = KeylockFields::LOCK0;
    using LOCK1 = KeylockFields::LOCK1;
  };

  // PUF Key Manager Enable
  struct KeyenableFields {
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
  };  // struct KeyenableFields

  struct KEYENABLE : ftl::mmio::Register<
      0x40C82204u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      KeyenableFields::ENABLE0,
      KeyenableFields::ENABLE1,
      ftl::mmio::Reserved<28, 4>> {
    using eENABLE0 = KeyenableFields::eENABLE0;
    using eENABLE1 = KeyenableFields::eENABLE1;
    using ENABLE0 = KeyenableFields::ENABLE0;
    using ENABLE1 = KeyenableFields::ENABLE1;
  };

  // PUF Key Manager Reset
  struct KeyresetFields {
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
  };  // struct KeyresetFields

  struct KEYRESET : ftl::mmio::Register<
      0x40C82208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      KeyresetFields::RESET0,
      KeyresetFields::RESET1,
      ftl::mmio::Reserved<28, 4>> {
    using eRESET0 = KeyresetFields::eRESET0;
    using eRESET1 = KeyresetFields::eRESET1;
    using RESET0 = KeyresetFields::RESET0;
    using RESET1 = KeyresetFields::RESET1;
  };

  // PUF Index Block Key Output
  struct IdxblkFields {
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
  };  // struct IdxblkFields

  struct IDXBLK : ftl::mmio::Register<
      0x40C8220Cu,
      std::uint32_t,
      0xAAAAAAAAu,
      ftl::mmio::WO,
      IdxblkFields::IDXBLK0,
      IdxblkFields::IDXBLK1,
      IdxblkFields::IDXBLK2,
      IdxblkFields::IDXBLK3,
      IdxblkFields::IDXBLK4,
      IdxblkFields::IDXBLK5,
      IdxblkFields::IDXBLK6,
      IdxblkFields::IDXBLK7,
      IdxblkFields::IDXBLK8,
      IdxblkFields::IDXBLK9,
      IdxblkFields::IDXBLK10,
      IdxblkFields::IDXBLK11,
      IdxblkFields::IDXBLK12,
      IdxblkFields::IDXBLK13,
      IdxblkFields::IDXBLK14,
      IdxblkFields::IDXBLK15> {
    using IDXBLK0 = IdxblkFields::IDXBLK0;
    using IDXBLK1 = IdxblkFields::IDXBLK1;
    using IDXBLK2 = IdxblkFields::IDXBLK2;
    using IDXBLK3 = IdxblkFields::IDXBLK3;
    using IDXBLK4 = IdxblkFields::IDXBLK4;
    using IDXBLK5 = IdxblkFields::IDXBLK5;
    using IDXBLK6 = IdxblkFields::IDXBLK6;
    using IDXBLK7 = IdxblkFields::IDXBLK7;
    using IDXBLK8 = IdxblkFields::IDXBLK8;
    using IDXBLK9 = IdxblkFields::IDXBLK9;
    using IDXBLK10 = IdxblkFields::IDXBLK10;
    using IDXBLK11 = IdxblkFields::IDXBLK11;
    using IDXBLK12 = IdxblkFields::IDXBLK12;
    using IDXBLK13 = IdxblkFields::IDXBLK13;
    using IDXBLK14 = IdxblkFields::IDXBLK14;
    using IDXBLK15 = IdxblkFields::IDXBLK15;
  };

  // PUF Index Block Key Output
  struct IdxblkDpFields {
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
  };  // struct IdxblkDpFields

  struct IDXBLK_DP : ftl::mmio::Register<
      0x40C82210u,
      std::uint32_t,
      0xAAAAAAAAu,
      ftl::mmio::WO,
      IdxblkDpFields::IDXBLK_DP0,
      IdxblkDpFields::IDXBLK_DP1,
      IdxblkDpFields::IDXBLK_DP2,
      IdxblkDpFields::IDXBLK_DP3,
      IdxblkDpFields::IDXBLK_DP4,
      IdxblkDpFields::IDXBLK_DP5,
      IdxblkDpFields::IDXBLK_DP6,
      IdxblkDpFields::IDXBLK_DP7,
      IdxblkDpFields::IDXBLK_DP8,
      IdxblkDpFields::IDXBLK_DP9,
      IdxblkDpFields::IDXBLK_DP10,
      IdxblkDpFields::IDXBLK_DP11,
      IdxblkDpFields::IDXBLK_DP12,
      IdxblkDpFields::IDXBLK_DP13,
      IdxblkDpFields::IDXBLK_DP14,
      IdxblkDpFields::IDXBLK_DP15> {
    using IDXBLK_DP0 = IdxblkDpFields::IDXBLK_DP0;
    using IDXBLK_DP1 = IdxblkDpFields::IDXBLK_DP1;
    using IDXBLK_DP2 = IdxblkDpFields::IDXBLK_DP2;
    using IDXBLK_DP3 = IdxblkDpFields::IDXBLK_DP3;
    using IDXBLK_DP4 = IdxblkDpFields::IDXBLK_DP4;
    using IDXBLK_DP5 = IdxblkDpFields::IDXBLK_DP5;
    using IDXBLK_DP6 = IdxblkDpFields::IDXBLK_DP6;
    using IDXBLK_DP7 = IdxblkDpFields::IDXBLK_DP7;
    using IDXBLK_DP8 = IdxblkDpFields::IDXBLK_DP8;
    using IDXBLK_DP9 = IdxblkDpFields::IDXBLK_DP9;
    using IDXBLK_DP10 = IdxblkDpFields::IDXBLK_DP10;
    using IDXBLK_DP11 = IdxblkDpFields::IDXBLK_DP11;
    using IDXBLK_DP12 = IdxblkDpFields::IDXBLK_DP12;
    using IDXBLK_DP13 = IdxblkDpFields::IDXBLK_DP13;
    using IDXBLK_DP14 = IdxblkDpFields::IDXBLK_DP14;
    using IDXBLK_DP15 = IdxblkDpFields::IDXBLK_DP15;
  };

  // PUF Key Block 0 Mask Enable
  struct Keymask0Fields {
    // KEYMASK0
    using KEYMASK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Keymask0Fields

  struct KEYMASK0 : ftl::mmio::Register<
      0x40C82214u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Keymask0Fields::KEYMASK> {
    using KEYMASK = Keymask0Fields::KEYMASK;
  };

  // PUF Key Block 1 Mask Enable
  struct Keymask1Fields {
    // KEYMASK1
    using KEYMASK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Keymask1Fields

  struct KEYMASK1 : ftl::mmio::Register<
      0x40C82218u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Keymask1Fields::KEYMASK> {
    using KEYMASK = Keymask1Fields::KEYMASK;
  };

  // PUF Index Block Setting Status Register
  struct IdxblkStatusFields {
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
  };  // struct IdxblkStatusFields

  struct IDXBLK_STATUS : ftl::mmio::Register<
      0x40C82254u,
      std::uint32_t,
      0xAAAAAAAAu,
      ftl::mmio::RO,
      IdxblkStatusFields::IDXBLK_STATUS0,
      IdxblkStatusFields::IDXBLK_STATUS1,
      IdxblkStatusFields::IDXBLK_STATUS2,
      IdxblkStatusFields::IDXBLK_STATUS3,
      IdxblkStatusFields::IDXBLK_STATUS4,
      IdxblkStatusFields::IDXBLK_STATUS5,
      IdxblkStatusFields::IDXBLK_STATUS6,
      IdxblkStatusFields::IDXBLK_STATUS7,
      IdxblkStatusFields::IDXBLK_STATUS8,
      IdxblkStatusFields::IDXBLK_STATUS9,
      IdxblkStatusFields::IDXBLK_STATUS10,
      IdxblkStatusFields::IDXBLK_STATUS11,
      IdxblkStatusFields::IDXBLK_STATUS12,
      IdxblkStatusFields::IDXBLK_STATUS13,
      IdxblkStatusFields::IDXBLK_STATUS14,
      IdxblkStatusFields::IDXBLK_STATUS15> {
    using IDXBLK_STATUS0 = IdxblkStatusFields::IDXBLK_STATUS0;
    using IDXBLK_STATUS1 = IdxblkStatusFields::IDXBLK_STATUS1;
    using IDXBLK_STATUS2 = IdxblkStatusFields::IDXBLK_STATUS2;
    using IDXBLK_STATUS3 = IdxblkStatusFields::IDXBLK_STATUS3;
    using IDXBLK_STATUS4 = IdxblkStatusFields::IDXBLK_STATUS4;
    using IDXBLK_STATUS5 = IdxblkStatusFields::IDXBLK_STATUS5;
    using IDXBLK_STATUS6 = IdxblkStatusFields::IDXBLK_STATUS6;
    using IDXBLK_STATUS7 = IdxblkStatusFields::IDXBLK_STATUS7;
    using IDXBLK_STATUS8 = IdxblkStatusFields::IDXBLK_STATUS8;
    using IDXBLK_STATUS9 = IdxblkStatusFields::IDXBLK_STATUS9;
    using IDXBLK_STATUS10 = IdxblkStatusFields::IDXBLK_STATUS10;
    using IDXBLK_STATUS11 = IdxblkStatusFields::IDXBLK_STATUS11;
    using IDXBLK_STATUS12 = IdxblkStatusFields::IDXBLK_STATUS12;
    using IDXBLK_STATUS13 = IdxblkStatusFields::IDXBLK_STATUS13;
    using IDXBLK_STATUS14 = IdxblkStatusFields::IDXBLK_STATUS14;
    using IDXBLK_STATUS15 = IdxblkStatusFields::IDXBLK_STATUS15;
  };

  // PUF Key Manager Shift Status
  struct IdxblkShiftFields {
    // Index of key space in block 0
    using IND_KEY0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Index of key space in block 1
    using IND_KEY1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IdxblkShiftFields

  struct IDXBLK_SHIFT : ftl::mmio::Register<
      0x40C82258u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IdxblkShiftFields::IND_KEY0,
      IdxblkShiftFields::IND_KEY1,
      ftl::mmio::Reserved<24, 8>> {
    using IND_KEY0 = IdxblkShiftFields::IND_KEY0;
    using IND_KEY1 = IdxblkShiftFields::IND_KEY1;
  };

};

}  // namespace regs