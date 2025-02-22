#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PUF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nKEY_MANAGER__PUF {


// PUF Control Register
union CTRL {
  
  // Begin Zeroize operation for PUF and go to Error state
  enum class eZEROIZE : uint32_t {
    // No Zeroize operation in progress
    eUNSET = 0,
    // Zeroize operation in progress
    eSET = 1,
  };
  
  // Begin Enroll operation
  enum class eENROLL : uint32_t {
    // No Enroll operation in progress
    eUNSET = 0,
    // Enroll operation in progress
    eSET = 1,
  };
  
  // Begin Start operation
  enum class eSTART : uint32_t {
    // No Start operation in progress
    eUNSET = 0,
    // Start operation in progress
    eSET = 1,
  };
  
  // Begin Set Intrinsic Key operation
  enum class eGENERATEKEY : uint32_t {
    // No Set Intrinsic Key operation in progress
    eUNSET = 0,
    // Set Intrinsic Key operation in progress
    eSET = 1,
  };
  
  // Begin Set User Key operation
  enum class eSETKEY : uint32_t {
    // No Set Key operation in progress
    eUNSET = 0,
    // Set Key operation in progress
    eSET = 1,
  };
  
  // Begin Get Key operation
  enum class eGETKEY : uint32_t {
    // No Get Key operation in progress
    eUNSET = 0,
    // Get Key operation in progress
    eSET = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Begin Zeroize operation for PUF and go to Error state
    eZEROIZE ZEROIZE : 1;
    // read-write - Begin Enroll operation
    eENROLL ENROLL : 1;
    // read-write - Begin Start operation
    eSTART START : 1;
    // read-write - Begin Set Intrinsic Key operation
    eGENERATEKEY GENERATEKEY : 1;
    // read-write - Begin Set User Key operation
    eSETKEY SETKEY : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Begin Get Key operation
    eGETKEY GETKEY : 1;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40C82000); }
};

// PUF Key Index Register
union KEYINDEX {
  
  // PUF Key Index
  enum class eKEYIDX : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - PUF Key Index
    eKEYIDX KEYIDX : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYINDEX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYINDEX &Instance() { return *reinterpret_cast<volatile KEYINDEX*>(0x40C82004); }
};

// PUF Key Size Register
union KEYSIZE {
  
  // PUF Key Size
  enum class eKEYSIZE : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - PUF Key Size
    eKEYSIZE KEYSIZE : 6;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYSIZE &Instance() { return *reinterpret_cast<volatile KEYSIZE*>(0x40C82008); }
};

// PUF Status Register
union STAT {
  
  // puf_busy
  enum class eBUSY : uint32_t {
    // IDLE
    eIDLE = 0,
    // BUSY
    eBUSY = 1,
  };
  
  // puf_ok
  enum class eSUCCESS : uint32_t {
    // Last operation was unsuccessful
    eNO = 0,
    // Last operation was successful
    eSUCCESSFUL = 1,
  };
  
  // puf_error
  enum class eERROR : uint32_t {
    // PUF is not in the Error state
    eNO_IN_ERROR = 0,
    // PUF is in the Error state
    eIN_ERROR = 1,
  };
  
  // KI_ir
  enum class eKEYINREQ : uint32_t {
    // No request for next part of key
    eNOREQUEST = 0,
    // Request for next part of key in KEYINPUT register
    eREQUEST = 1,
  };
  
  // KO_or
  enum class eKEYOUTAVAIL : uint32_t {
    // Next part of key is not available
    eNOAVAILABLE = 0,
    // Next part of key is available in KEYOUTPUT register
    eAVAILABLE = 1,
  };
  
  // CI_ir
  enum class eCODEINREQ : uint32_t {
    // No request for next part of Activation Code/Key Code
    eNOREQUEST = 0,
    // request for next part of Activation Code/Key Code in CODEINPUT register
    eREQUEST = 1,
  };
  
  // CO_or
  enum class eCODEOUTAVAIL : uint32_t {
    // Next part of Activation Code/Key Code is not available
    eNOAVAILABLE = 0,
    // Next part of Activation Code/Key Code is available in CODEOUTPUT register
    eAVAILABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - puf_busy
    eBUSY BUSY : 1;
    // read-only - puf_ok
    eSUCCESS SUCCESS : 1;
    // read-only - puf_error
    eERROR ERROR : 1;
    uint32_t _reserved_0 : 1;
    // read-only - KI_ir
    eKEYINREQ KEYINREQ : 1;
    // read-only - KO_or
    eKEYOUTAVAIL KEYOUTAVAIL : 1;
    // read-only - CI_ir
    eCODEINREQ CODEINREQ : 1;
    // read-only - CO_or
    eCODEOUTAVAIL CODEOUTAVAIL : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile STAT &Instance() { return *reinterpret_cast<volatile STAT*>(0x40C82020); }
};

// PUF Allow Register
union ALLOW {
  
  // Allow Enroll operation
  enum class eALLOWENROLL : uint32_t {
    // Specified operation is not currently allowed
    eNOALLOW = 0,
    // Specified operation is allowed
    eALLOW = 1,
  };
  
  // Allow Start operation
  enum class eALLOWSTART : uint32_t {
    // Specified operation is not currently allowed
    eNOALLOW = 0,
    // Specified operation is allowed
    eALLOW = 1,
  };
  
  // Allow Set Key operations
  enum class eALLOWSETKEY : uint32_t {
    // Specified operation is not currently allowed
    eNOALLOW = 0,
    // Specified operation is allowed
    eALLOW = 1,
  };
  
  // Allow Get Key operation
  enum class eALLOWGETKEY : uint32_t {
    // Specified operation is not currently allowed
    eNOALLOW = 0,
    // Specified operation is allowed
    eALLOW = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Allow Enroll operation
    eALLOWENROLL ALLOWENROLL : 1;
    // read-only - Allow Start operation
    eALLOWSTART ALLOWSTART : 1;
    // read-only - Allow Set Key operations
    eALLOWSETKEY ALLOWSETKEY : 1;
    // read-only - Allow Get Key operation
    eALLOWGETKEY ALLOWGETKEY : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ALLOW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ALLOW &Instance() { return *reinterpret_cast<volatile ALLOW*>(0x40C82028); }
};

// PUF Key Input Register
union KEYINPUT {
  
  // Bit field definition.
  struct {
    // write-only - Key input data
    uint32_t KEYIN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYINPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYINPUT &Instance() { return *reinterpret_cast<volatile KEYINPUT*>(0x40C82040); }
};

// PUF Code Input Register
union CODEINPUT {
  
  // Bit field definition.
  struct {
    // write-only - AC/KC input data
    uint32_t CODEIN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CODEINPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CODEINPUT &Instance() { return *reinterpret_cast<volatile CODEINPUT*>(0x40C82044); }
};

// PUF Code Output Register
union CODEOUTPUT {
  
  // Bit field definition.
  struct {
    // read-only - AC/KC output data
    uint32_t CODEOUT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CODEOUTPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CODEOUTPUT &Instance() { return *reinterpret_cast<volatile CODEOUTPUT*>(0x40C82048); }
};

// PUF Key Output Index Register
union KEYOUTINDEX {
  
  // Bit field definition.
  struct {
    // read-only - Output Key index
    uint32_t KEYOUTIDX : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYOUTINDEX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYOUTINDEX &Instance() { return *reinterpret_cast<volatile KEYOUTINDEX*>(0x40C82060); }
};

// PUF Key Output Register
union KEYOUTPUT {
  
  // Bit field definition.
  struct {
    // read-only - Key output data from a Get Key operation
    uint32_t KEYOUT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYOUTPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYOUTPUT &Instance() { return *reinterpret_cast<volatile KEYOUTPUT*>(0x40C82064); }
};

// PUF Interface Status Register
union IFSTAT {
  
  // APB error has occurred
  enum class eERROR : uint32_t {
    // NOERROR
    eNOERROR = 0,
    // ERROR
    eERROR = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - APB error has occurred
    eERROR ERROR : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IFSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IFSTAT &Instance() { return *reinterpret_cast<volatile IFSTAT*>(0x40C820DC); }
};

// PUF Version Register
union VERSION {
  
  // Bit field definition.
  struct {
    // read-only - Version of PUF
    uint32_t VERSION : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERSION() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VERSION &Instance() { return *reinterpret_cast<volatile VERSION*>(0x40C820FC); }
};

// PUF Interrupt Enable
union INTEN {
  
  // PUF Ready Interrupt Enable
  enum class eREADYEN : uint32_t {
    // PUF ready interrupt disabled
    eDISABLE = 0,
    // PUF ready interrupt enabled
    eENABLE = 1,
  };
  
  // PUF_OK Interrupt Enable
  enum class eSUCCESSEN : uint32_t {
    // PUF successful interrupt disabled
    eDISABLE = 0,
    // PUF successful interrupt enabled
    eENABLE = 1,
  };
  
  // PUF Error Interrupt Enable
  enum class eERROREN : uint32_t {
    // PUF error interrupt disabled
    eDISABLE = 0,
    // PUF error interrupt enabled
    eENABLE = 1,
  };
  
  // PUF Key Input Register Interrupt Enable
  enum class eKEYINREQEN : uint32_t {
    // Key interrupt request disabled
    eDISABLE = 0,
    // Key interrupt request enabled
    eENABLE = 1,
  };
  
  // PUF Key Output Register Interrupt Enable
  enum class eKEYOUTAVAILEN : uint32_t {
    // Key available interrupt disabled
    eDISABLE = 0,
    // Key available interrupt enabled
    eENABLE = 1,
  };
  
  // PUF Code Input Register Interrupt Enable
  enum class eCODEINREQEN : uint32_t {
    // AC/KC interrupt request disabled
    eDISABLE = 0,
    // AC/KC interrupt request enabled
    eENABLE = 1,
  };
  
  // PUF Code Output Register Interrupt Enable
  enum class eCODEOUTAVAILEN : uint32_t {
    // AC/KC available interrupt disabled
    eDISABLE = 0,
    // AC/KC available interrupt enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PUF Ready Interrupt Enable
    eREADYEN READYEN : 1;
    // read-write - PUF_OK Interrupt Enable
    eSUCCESSEN SUCCESSEN : 1;
    // read-write - PUF Error Interrupt Enable
    eERROREN ERROREN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - PUF Key Input Register Interrupt Enable
    eKEYINREQEN KEYINREQEN : 1;
    // read-write - PUF Key Output Register Interrupt Enable
    eKEYOUTAVAILEN KEYOUTAVAILEN : 1;
    // read-write - PUF Code Input Register Interrupt Enable
    eCODEINREQEN CODEINREQEN : 1;
    // read-write - PUF Code Output Register Interrupt Enable
    eCODEOUTAVAILEN CODEOUTAVAILEN : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTEN &Instance() { return *reinterpret_cast<volatile INTEN*>(0x40C82100); }
};

// PUF Interrupt Status
union INTSTAT {
  
  // PUF_FINISH Interrupt Status
  enum class eREADY : uint32_t {
    // Indicates that last operation not finished
    eNOT_FINISHED = 0,
    // Indicates that last operation is finished
    eFINISHED = 1,
  };
  
  // PUF_OK Interrupt Status
  enum class eSUCCESS : uint32_t {
    // Indicates that last operation was not successful
    eUNSUCCESSFUL = 0,
    // Indicates that last operation was successful
    eSUCCESSFUL = 1,
  };
  
  // PUF_ERROR Interrupt Status
  enum class eERROR : uint32_t {
    // PUF is not in the Error state and operations can be performed
    eNO_ERROR = 0,
    // PUF is in the Error state and no operations can be performed
    eERROR = 1,
  };
  
  // PUF Key Input Register Interrupt Status
  enum class eKEYINREQ : uint32_t {
    // No request for next part of key
    eNO_REQUEST = 0,
    // Request for next part of key
    eREQUEST = 1,
  };
  
  // PUF Key Output Register Interrupt Status
  enum class eKEYOUTAVAIL : uint32_t {
    // Next part of key is not available
    eNOT_AVAILABLE = 0,
    // Next part of key is available
    eAVAILABLE = 1,
  };
  
  // PUF Code Input Register Interrupt Status
  enum class eCODEINREQ : uint32_t {
    // No request for next part of AC/KC
    eNO_REQUEST = 0,
    // Request for next part of AC/KC
    eREQUEST = 1,
  };
  
  // PUF Code Output Register Interrupt Status
  enum class eCODEOUTAVAIL : uint32_t {
    // Next part of AC/KC is not available
    eNOT_AVAILABLE = 0,
    // Next part of AC/KC is available
    eAVAILABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PUF_FINISH Interrupt Status
    eREADY READY : 1;
    // read-only - PUF_OK Interrupt Status
    eSUCCESS SUCCESS : 1;
    // read-only - PUF_ERROR Interrupt Status
    eERROR ERROR : 1;
    uint32_t _reserved_0 : 1;
    // read-only - PUF Key Input Register Interrupt Status
    eKEYINREQ KEYINREQ : 1;
    // read-only - PUF Key Output Register Interrupt Status
    eKEYOUTAVAIL KEYOUTAVAIL : 1;
    // read-only - PUF Code Input Register Interrupt Status
    eCODEINREQ CODEINREQ : 1;
    // read-only - PUF Code Output Register Interrupt Status
    eCODEOUTAVAIL CODEOUTAVAIL : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTSTAT &Instance() { return *reinterpret_cast<volatile INTSTAT*>(0x40C82104); }
};

// PUF Power Control Of RAM
union PWRCTRL {
  
  // PUF RAM on
  enum class eRAM_ON : uint32_t {
    // PUF RAM is in sleep mode (PUF operation disabled)
    eSLEEP = 0,
    // PUF RAM is awake (normal PUF operation enabled)
    eWAKE = 1,
  };
  
  // Clock disable
  enum class eCK_DIS : uint32_t {
    // PUF RAM is clocked (normal PUF operation enabled)
    eENABLE = 0,
    // PUF RAM clock is gated/disabled (PUF operation disabled)
    eDISABLE = 1,
  };
  
  // RAM initialization
  enum class eRAM_INITN : uint32_t {
    // Reset the PUF RAM (PUF operation disabled)
    eRESET = 0,
    // Do not reset the PUF RAM (normal PUF operation enabled)
    eDO_NOT_RESET = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PUF RAM on
    eRAM_ON RAM_ON : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Clock disable
    eCK_DIS CK_DIS : 1;
    // read-write - RAM initialization
    eRAM_INITN RAM_INITN : 1;
    // read-write - PUF RAM power switches
    uint32_t RAM_PSW : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PWRCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile PWRCTRL &Instance() { return *reinterpret_cast<volatile PWRCTRL*>(0x40C82108); }
};

// PUF Configuration Register
union CFG {
  
  // PUF Block Set Key Disable
  enum class ePUF_BLOCK_SET_KEY : uint32_t {
    // Enable the Set Key state
    eENABLE = 0,
    // Disable the Set Key state
    eDISABLE = 1,
  };
  
  // PUF Block Enroll Disable
  enum class ePUF_BLOCK_ENROLL : uint32_t {
    // Enable the Enrollment state
    eENABLE = 0,
    // Disable the Enrollment state
    eDISABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - PUF Block Set Key Disable
    ePUF_BLOCK_SET_KEY PUF_BLOCK_SET_KEY : 1;
    // read-writeOnce - PUF Block Enroll Disable
    ePUF_BLOCK_ENROLL PUF_BLOCK_ENROLL : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG &Instance() { return *reinterpret_cast<volatile CFG*>(0x40C8210C); }
};

// PUF Key Manager Lock
union KEYLOCK {
  
  // Lock Block 0
  enum class eLOCK0 : uint32_t {
    // SNVS Key block locked
    eLOCKED_00 = 0,
    // SNVS Key block locked
    eLOCKED_01 = 1,
    // SNVS Key block unlocked
    eUNLOCKED = 2,
    // SNVS Key block locked
    eLOCKED_11 = 3,
  };
  
  // Lock Block 1
  enum class eLOCK1 : uint32_t {
    // OTFAD Key block locked
    eLOCKED_00 = 0,
    // OTFAD Key block locked
    eLOCKED_01 = 1,
    // OTFAD Key block unlocked
    eUNLOCKED = 2,
    // OTFAD Key block locked
    eLOCKED_11 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock Block 0
    eLOCK0 LOCK0 : 2;
    // read-writeOnce - Lock Block 1
    eLOCK1 LOCK1 : 2;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYLOCK() = delete;
  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile KEYLOCK &Instance() { return *reinterpret_cast<volatile KEYLOCK*>(0x40C82200); }
};

// PUF Key Manager Enable
union KEYENABLE {
  
  // Enable Block 0
  enum class eENABLE0 : uint32_t {
    // Key block 0 disabled
    eDISABLED_00 = 0,
    // Key block 0 disabled
    eDISABLED_01 = 1,
    // Key block 0 enabled
    eENABLED = 2,
    // Key block 0 disabled
    eDISABLED_11 = 3,
  };
  
  // Enable Block 1
  enum class eENABLE1 : uint32_t {
    // Key block 1 disabled
    eDISABLED_00 = 0,
    // Key block 1 disabled
    eDISABLED_01 = 1,
    // Key block 1 enabled
    eENABLED = 2,
    // Key block 1 disabled
    eDISABLED_11 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable Block 0
    eENABLE0 ENABLE0 : 2;
    // read-write - Enable Block 1
    eENABLE1 ENABLE1 : 2;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile KEYENABLE &Instance() { return *reinterpret_cast<volatile KEYENABLE*>(0x40C82204); }
};

// PUF Key Manager Reset
union KEYRESET {
  
  // Reset Block 0
  enum class eRESET0 : uint32_t {
    // Do not reset key block 0
    eNORESET_00 = 0,
    // Do not reset key block 0
    eNORESET_01 = 1,
    // Reset key block 0
    eRESET = 2,
    // Do not reset key block 0
    eNORESET_11 = 3,
  };
  
  // Reset Block 1
  enum class eRESET1 : uint32_t {
    // Do not reset key block 1
    eNORESET_00 = 0,
    // Do not reset key block 1
    eNORESET_01 = 1,
    // Reset key block 1
    eRESET = 2,
    // Do not reset key block 1
    eNORESET_11 = 3,
  };
  
  // Bit field definition.
  struct {
    // write-only - Reset Block 0
    eRESET0 RESET0 : 2;
    // write-only - Reset Block 1
    eRESET1 RESET1 : 2;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYRESET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYRESET &Instance() { return *reinterpret_cast<volatile KEYRESET*>(0x40C82208); }
};

// PUF Index Block Key Output
union IDXBLK {
  
  // Bit field definition.
  struct {
    // write-only - idxblk0
    uint32_t IDXBLK0 : 2;
    // write-only - idxblk1
    uint32_t IDXBLK1 : 2;
    // write-only - idxblk2
    uint32_t IDXBLK2 : 2;
    // write-only - idxblk3
    uint32_t IDXBLK3 : 2;
    // write-only - idxblk4
    uint32_t IDXBLK4 : 2;
    // write-only - idxblk5
    uint32_t IDXBLK5 : 2;
    // write-only - idxblk6
    uint32_t IDXBLK6 : 2;
    // write-only - idxblk7
    uint32_t IDXBLK7 : 2;
    // write-only - idxblk8
    uint32_t IDXBLK8 : 2;
    // write-only - idxblk9
    uint32_t IDXBLK9 : 2;
    // write-only - idxblk10
    uint32_t IDXBLK10 : 2;
    // write-only - idxblk11
    uint32_t IDXBLK11 : 2;
    // write-only - idxblk12
    uint32_t IDXBLK12 : 2;
    // write-only - idxblk13
    uint32_t IDXBLK13 : 2;
    // write-only - idxblk14
    uint32_t IDXBLK14 : 2;
    // write-only - idxblk15
    uint32_t IDXBLK15 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK() = delete;
  inline void Reset() volatile { this->value = 0xAAAAAAAA; }
  static inline volatile IDXBLK &Instance() { return *reinterpret_cast<volatile IDXBLK*>(0x40C8220C); }
};

// PUF Index Block Key Output
union IDXBLK_DP {
  
  // Bit field definition.
  struct {
    // write-only - idxblk_dp0
    uint32_t IDXBLK_DP0 : 2;
    // write-only - idxblk_dp1
    uint32_t IDXBLK_DP1 : 2;
    // write-only - idxblk_dp2
    uint32_t IDXBLK_DP2 : 2;
    // write-only - idxblk_dp3
    uint32_t IDXBLK_DP3 : 2;
    // write-only - idxblk_dp4
    uint32_t IDXBLK_DP4 : 2;
    // write-only - idxblk_dp5
    uint32_t IDXBLK_DP5 : 2;
    // write-only - idxblk_dp6
    uint32_t IDXBLK_DP6 : 2;
    // write-only - idxblk_dp7
    uint32_t IDXBLK_DP7 : 2;
    // write-only - idxblk_dp8
    uint32_t IDXBLK_DP8 : 2;
    // write-only - idxblk_dp9
    uint32_t IDXBLK_DP9 : 2;
    // write-only - idxblk_dp10
    uint32_t IDXBLK_DP10 : 2;
    // write-only - idxblk_dp11
    uint32_t IDXBLK_DP11 : 2;
    // write-only - idxblk_dp12
    uint32_t IDXBLK_DP12 : 2;
    // write-only - idxblk_dp13
    uint32_t IDXBLK_DP13 : 2;
    // write-only - idxblk_dp14
    uint32_t IDXBLK_DP14 : 2;
    // write-only - idxblk_dp15
    uint32_t IDXBLK_DP15 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK_DP() = delete;
  inline void Reset() volatile { this->value = 0xAAAAAAAA; }
  static inline volatile IDXBLK_DP &Instance() { return *reinterpret_cast<volatile IDXBLK_DP*>(0x40C82210); }
};

// PUF Key Block 0 Mask Enable
union KEYMASK0 {
  
  // Bit field definition.
  struct {
    // write-only - KEYMASK0
    uint32_t KEYMASK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYMASK0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYMASK0 &Instance() { return *reinterpret_cast<volatile KEYMASK0*>(0x40C82214); }
};

// PUF Key Block 1 Mask Enable
union KEYMASK1 {
  
  // Bit field definition.
  struct {
    // write-only - KEYMASK1
    uint32_t KEYMASK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KEYMASK1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYMASK1 &Instance() { return *reinterpret_cast<volatile KEYMASK1*>(0x40C82218); }
};

// PUF Index Block Setting Status Register
union IDXBLK_STATUS {
  
  // Bit field definition.
  struct {
    // read-only - idxblk_status0
    uint32_t IDXBLK_STATUS0 : 2;
    // read-only - idxblk_status1
    uint32_t IDXBLK_STATUS1 : 2;
    // read-only - idxblk_status2
    uint32_t IDXBLK_STATUS2 : 2;
    // read-only - idxblk_status3
    uint32_t IDXBLK_STATUS3 : 2;
    // read-only - idxblk_status4
    uint32_t IDXBLK_STATUS4 : 2;
    // read-only - idxblk_status5
    uint32_t IDXBLK_STATUS5 : 2;
    // read-only - idxblk_status6
    uint32_t IDXBLK_STATUS6 : 2;
    // read-only - idxblk_status7
    uint32_t IDXBLK_STATUS7 : 2;
    // read-only - idxblk_status8
    uint32_t IDXBLK_STATUS8 : 2;
    // read-only - idxblk_status9
    uint32_t IDXBLK_STATUS9 : 2;
    // read-only - idxblk_status10
    uint32_t IDXBLK_STATUS10 : 2;
    // read-only - idxblk_status11
    uint32_t IDXBLK_STATUS11 : 2;
    // read-only - idxblk_status12
    uint32_t IDXBLK_STATUS12 : 2;
    // read-only - idxblk_status13
    uint32_t IDXBLK_STATUS13 : 2;
    // read-only - idxblk_status14
    uint32_t IDXBLK_STATUS14 : 2;
    // read-only - idxblk_status15
    uint32_t IDXBLK_STATUS15 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK_STATUS() = delete;
  inline void Reset() volatile { this->value = 0xAAAAAAAA; }
  static inline volatile IDXBLK_STATUS &Instance() { return *reinterpret_cast<volatile IDXBLK_STATUS*>(0x40C82254); }
};

// PUF Key Manager Shift Status
union IDXBLK_SHIFT {
  
  // Bit field definition.
  struct {
    // read-only - Index of key space in block 0
    uint32_t IND_KEY0 : 4;
    // read-only - Index of key space in block 1
    uint32_t IND_KEY1 : 4;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK_SHIFT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IDXBLK_SHIFT &Instance() { return *reinterpret_cast<volatile IDXBLK_SHIFT*>(0x40C82258); }
};


} // namespace nKEY_MANAGER__PUF