#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // PUF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nKEY_MANAGER__PUF {


// PUF Control Register
//
union CTRL {
  
  // Enum definitions.
  enum class eZEROIZE : uint32_t {
    eUNSET = 0, // No Zeroize operation in progress
    eSET = 1, // Zeroize operation in progress
  };
  enum class eENROLL : uint32_t {
    eUNSET = 0, // No Enroll operation in progress
    eSET = 1, // Enroll operation in progress
  };
  enum class eSTART : uint32_t {
    eUNSET = 0, // No Start operation in progress
    eSET = 1, // Start operation in progress
  };
  enum class eGENERATEKEY : uint32_t {
    eUNSET = 0, // No Set Intrinsic Key operation in progress
    eSET = 1, // Set Intrinsic Key operation in progress
  };
  enum class eSETKEY : uint32_t {
    eUNSET = 0, // No Set Key operation in progress
    eSET = 1, // Set Key operation in progress
  };
  enum class eGETKEY : uint32_t {
    eUNSET = 0, // No Get Key operation in progress
    eSET = 1, // Get Key operation in progress
  };
  
  // Bit field definition.
  struct {
    eZEROIZE ZEROIZE : 1;
    eENROLL ENROLL : 1;
    eSTART START : 1;
    eGENERATEKEY GENERATEKEY : 1;
    eSETKEY SETKEY : 1;
    uint32_t _reserved_5 : 1;
    eGETKEY GETKEY : 1;
    uint32_t _reserved_end : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40C82000); }
};

// PUF Key Index Register
//
union KEYINDEX {
  
  // Enum definitions.
  enum class eKEYIDX : uint32_t {
    eINDEX0 = 0, // USE INDEX0
    eINDEX1 = 1, // USE INDEX1
    eINDEX2 = 2, // USE INDEX2
    eINDEX3 = 3, // USE INDEX3
    eINDEX4 = 4, // USE INDEX4
    eINDEX5 = 5, // USE INDEX5
    eINDEX6 = 6, // USE INDEX6
    eINDEX7 = 7, // USE INDEX7
    eINDEX8 = 8, // USE INDEX8
    eINDEX9 = 9, // USE INDEX9
    eINDEX10 = 10, // USE INDEX10
    eINDEX11 = 11, // USE INDEX11
    eINDEX12 = 12, // USE INDEX12
    eINDEX13 = 13, // USE INDEX13
    eINDEX14 = 14, // USE INDEX14
    eINDEX15 = 15, // USE INDEX15
  };
  
  // Bit field definition.
  struct {
    eKEYIDX KEYIDX : 4;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYINDEX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYINDEX &Instance() { return *reinterpret_cast<volatile KEYINDEX*>(0x40C82004); }
};

// PUF Key Size Register
//
union KEYSIZE {
  
  // Enum definitions.
  enum class eKEYSIZE : uint32_t {
    eSIZE64 = 0, // Key Size is 512 Bytes and KC Size is 532 Bytes
    eSIZE1 = 1, // Key Size is 8 Bytes and KC Size is 52 Bytes
    eSIZE2 = 2, // Key Size is 16 Bytes and KC Size is 52 Bytes
    eSIZE3 = 3, // Key Size is 24 Bytes and KC Size is 52 Bytes
    eSIZE4 = 4, // Key Size is 32 Bytes and KC Size is 52 Bytes
    eSIZE5 = 5, // Key Size is 40 Bytes and KC Size is 84 Bytes
    eSIZE6 = 6, // Key Size is 48 Bytes and KC Size is 84 Bytes
    eSIZE7 = 7, // Key Size is 56 Bytes and KC Size is 84 Bytes
    eSIZE8 = 8, // Key Size is 64 Bytes and KC Size is 84 Bytes
    eSIZE9 = 9, // Key Size is 72 Bytes and KC Size is 116 Bytes
    eSIZE10 = 10, // Key Size is 80 Bytes and KC Size is 116 Bytes
    eSIZE11 = 11, // Key Size is 88 Bytes and KC Size is 116 Bytes
    eSIZE12 = 12, // Key Size is 96 Bytes and KC Size is 116 Bytes
    eSIZE13 = 13, // Key Size is 104 Bytes and KC Size is 148 Bytes
    eSIZE14 = 14, // Key Size is 112 Bytes and KC Size is 148 Bytes
    eSIZE15 = 15, // Key Size is 120 Bytes and KC Size is 148 Bytes
    eSIZE16 = 16, // Key Size is 128 Bytes and KC Size is 148 Bytes
    eSIZE17 = 17, // Key Size is 136 Bytes and KC Size is 180 Bytes
    eSIZE18 = 18, // Key Size is 144 Bytes and KC Size is 180 Bytes
    eSIZE19 = 19, // Key Size is 152 Bytes and KC Size is 180 Bytes
    eSIZE20 = 20, // Key Size is 160 Bytes and KC Size is 180 Bytes
    eSIZE21 = 21, // Key Size is 168 Bytes and KC Size is 212 Bytes
    eSIZE22 = 22, // Key Size is 176 Bytes and KC Size is 212 Bytes
    eSIZE23 = 23, // Key Size is 184 Bytes and KC Size is 212 Bytes
    eSIZE24 = 24, // Key Size is 192 Bytes and KC Size is 212 Bytes
    eSIZE25 = 25, // Key Size is 200 Bytes and KC Size is 244 Bytes
    eSIZE26 = 26, // Key Size is 208 Bytes and KC Size is 244 Bytes
    eSIZE27 = 27, // Key Size is 216 Bytes and KC Size is 244 Bytes
    eSIZE28 = 28, // Key Size is 224 Bytes and KC Size is 244 Bytes
    eSIZE29 = 29, // Key Size is 232 Bytes and KC Size is 276 Bytes
    eSIZE30 = 30, // Key Size is 240 Bytes and KC Size is 276 Bytes
    eSIZE31 = 31, // Key Size is 248 Bytes and KC Size is 276 Bytes
    eSIZE32 = 32, // Key Size is 256 Bytes and KC Size is 276 Bytes
    eSIZE33 = 33, // Key Size is 264 Bytes and KC Size is 308 Bytes
    eSIZE34 = 34, // Key Size is 272 Bytes and KC Size is 308 Bytes
    eSIZE35 = 35, // Key Size is 280 Bytes and KC Size is 308 Bytes
    eSIZE36 = 36, // Key Size is 288 Bytes and KC Size is 308 Bytes
    eSIZE37 = 37, // Key Size is 296 Bytes and KC Size is 340 Bytes
    eSIZE38 = 38, // Key Size is 304 Bytes and KC Size is 340 Bytes
    eSIZE39 = 39, // Key Size is 312 Bytes and KC Size is 340 Bytes
    eSIZE40 = 40, // Key Size is 320 Bytes and KC Size is 340 Bytes
    eSIZE41 = 41, // Key Size is 328 Bytes and KC Size is 372 Bytes
    eSIZE42 = 42, // Key Size is 336 Bytes and KC Size is 372 Bytes
    eSIZE43 = 43, // Key Size is 344 Bytes and KC Size is 372 Bytes
    eSIZE44 = 44, // Key Size is 352 Bytes and KC Size is 372 Bytes
    eSIZE45 = 45, // Key Size is 360 Bytes and KC Size is 404 Bytes
    eSIZE46 = 46, // Key Size is 368 Bytes and KC Size is 404 Bytes
    eSIZE47 = 47, // Key Size is 376 Bytes and KC Size is 404 Bytes
    eSIZE48 = 48, // Key Size is 384 Bytes and KC Size is 404 Bytes
    eSIZE49 = 49, // Key Size is 392 Bytes and KC Size is 436 Bytes
    eSIZE50 = 50, // Key Size is 400 Bytes and KC Size is 436 Bytes
    eSIZE51 = 51, // Key Size is 408 Bytes and KC Size is 436 Bytes
    eSIZE52 = 52, // Key Size is 416 Bytes and KC Size is 436 Bytes
    eSIZE53 = 53, // Key Size is 424 Bytes and KC Size is 468 Bytes
    eSIZE54 = 54, // Key Size is 432 Bytes and KC Size is 468 Bytes
    eSIZE55 = 55, // Key Size is 440 Bytes and KC Size is 468 Bytes
    eSIZE56 = 56, // Key Size is 448 Bytes and KC Size is 468 Bytes
    eSIZE57 = 57, // Key Size is 456 Bytes and KC Size is 500 Bytes
    eSIZE58 = 58, // Key Size is 464 Bytes and KC Size is 500 Bytes
    eSIZE59 = 59, // Key Size is 472 Bytes and KC Size is 500 Bytes
    eSIZE60 = 60, // Key Size is 480 Bytes and KC Size is 500 Bytes
    eSIZE61 = 61, // Key Size is 488 Bytes and KC Size is 532 Bytes
    eSIZE62 = 62, // Key Size is 496 Bytes and KC Size is 532 Bytes
    eSIZE63 = 63, // Key Size is 504 Bytes and KC Size is 532 Bytes
  };
  
  // Bit field definition.
  struct {
    eKEYSIZE KEYSIZE : 6;
    uint32_t _reserved_end : 26;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYSIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYSIZE &Instance() { return *reinterpret_cast<volatile KEYSIZE*>(0x40C82008); }
};

// PUF Status Register
//
union STAT {
  
  // Enum definitions.
  enum class eBUSY : uint32_t {
    eIDLE = 0, // IDLE
    eBUSY = 1, // BUSY
  };
  enum class eSUCCESS : uint32_t {
    eNO = 0, // Last operation was unsuccessful
    eSUCCESSFUL = 1, // Last operation was successful
  };
  enum class eERROR : uint32_t {
    eNO_IN_ERROR = 0, // PUF is not in the Error state
    eIN_ERROR = 1, // PUF is in the Error state
  };
  enum class eKEYINREQ : uint32_t {
    eNOREQUEST = 0, // No request for next part of key
    eREQUEST = 1, // Request for next part of key in KEYINPUT register
  };
  enum class eKEYOUTAVAIL : uint32_t {
    eNOAVAILABLE = 0, // Next part of key is not available
    eAVAILABLE = 1, // Next part of key is available in KEYOUTPUT register
  };
  enum class eCODEINREQ : uint32_t {
    eNOREQUEST = 0, // No request for next part of Activation Code/Key Code
    eREQUEST = 1, // request for next part of Activation Code/Key Code in CODEINPUT register
  };
  enum class eCODEOUTAVAIL : uint32_t {
    eNOAVAILABLE = 0, // Next part of Activation Code/Key Code is not available
    eAVAILABLE = 1, // Next part of Activation Code/Key Code is available in CODEOUTPUT register
  };
  
  // Bit field definition.
  struct {
    eBUSY BUSY : 1;
    eSUCCESS SUCCESS : 1;
    eERROR ERROR : 1;
    uint32_t _reserved_3 : 1;
    eKEYINREQ KEYINREQ : 1;
    eKEYOUTAVAIL KEYOUTAVAIL : 1;
    eCODEINREQ CODEINREQ : 1;
    eCODEOUTAVAIL CODEOUTAVAIL : 1;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile STAT &Instance() { return *reinterpret_cast<volatile STAT*>(0x40C82020); }
};

// PUF Allow Register
//
union ALLOW {
  
  // Enum definitions.
  enum class eALLOWENROLL : uint32_t {
    eNOALLOW = 0, // Specified operation is not currently allowed
    eALLOW = 1, // Specified operation is allowed
  };
  enum class eALLOWSTART : uint32_t {
    eNOALLOW = 0, // Specified operation is not currently allowed
    eALLOW = 1, // Specified operation is allowed
  };
  enum class eALLOWSETKEY : uint32_t {
    eNOALLOW = 0, // Specified operation is not currently allowed
    eALLOW = 1, // Specified operation is allowed
  };
  enum class eALLOWGETKEY : uint32_t {
    eNOALLOW = 0, // Specified operation is not currently allowed
    eALLOW = 1, // Specified operation is allowed
  };
  
  // Bit field definition.
  struct {
    eALLOWENROLL ALLOWENROLL : 1;
    eALLOWSTART ALLOWSTART : 1;
    eALLOWSETKEY ALLOWSETKEY : 1;
    eALLOWGETKEY ALLOWGETKEY : 1;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ALLOW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ALLOW &Instance() { return *reinterpret_cast<volatile ALLOW*>(0x40C82028); }
};

// PUF Key Input Register
//
union KEYINPUT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t KEYIN : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYINPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYINPUT &Instance() { return *reinterpret_cast<volatile KEYINPUT*>(0x40C82040); }
};

// PUF Code Input Register
//
union CODEINPUT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CODEIN : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CODEINPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CODEINPUT &Instance() { return *reinterpret_cast<volatile CODEINPUT*>(0x40C82044); }
};

// PUF Code Output Register
//
union CODEOUTPUT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CODEOUT : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CODEOUTPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CODEOUTPUT &Instance() { return *reinterpret_cast<volatile CODEOUTPUT*>(0x40C82048); }
};

// PUF Key Output Index Register
//
union KEYOUTINDEX {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t KEYOUTIDX : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYOUTINDEX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYOUTINDEX &Instance() { return *reinterpret_cast<volatile KEYOUTINDEX*>(0x40C82060); }
};

// PUF Key Output Register
//
union KEYOUTPUT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t KEYOUT : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYOUTPUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYOUTPUT &Instance() { return *reinterpret_cast<volatile KEYOUTPUT*>(0x40C82064); }
};

// PUF Interface Status Register
//
union IFSTAT {
  
  // Enum definitions.
  enum class eERROR : uint32_t {
    eNOERROR = 0, // NOERROR
    eERROR = 1, // ERROR
  };
  
  // Bit field definition.
  struct {
    eERROR ERROR : 1;
    uint32_t _reserved_end : 31;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IFSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IFSTAT &Instance() { return *reinterpret_cast<volatile IFSTAT*>(0x40C820DC); }
};

// PUF Version Register
//
union VERSION {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VERSION : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VERSION() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VERSION &Instance() { return *reinterpret_cast<volatile VERSION*>(0x40C820FC); }
};

// PUF Interrupt Enable
//
union INTEN {
  
  // Enum definitions.
  enum class eREADYEN : uint32_t {
    eDISABLE = 0, // PUF ready interrupt disabled
    eENABLE = 1, // PUF ready interrupt enabled
  };
  enum class eSUCCESSEN : uint32_t {
    eDISABLE = 0, // PUF successful interrupt disabled
    eENABLE = 1, // PUF successful interrupt enabled
  };
  enum class eERROREN : uint32_t {
    eDISABLE = 0, // PUF error interrupt disabled
    eENABLE = 1, // PUF error interrupt enabled
  };
  enum class eKEYINREQEN : uint32_t {
    eDISABLE = 0, // Key interrupt request disabled
    eENABLE = 1, // Key interrupt request enabled
  };
  enum class eKEYOUTAVAILEN : uint32_t {
    eDISABLE = 0, // Key available interrupt disabled
    eENABLE = 1, // Key available interrupt enabled
  };
  enum class eCODEINREQEN : uint32_t {
    eDISABLE = 0, // AC/KC interrupt request disabled
    eENABLE = 1, // AC/KC interrupt request enabled
  };
  enum class eCODEOUTAVAILEN : uint32_t {
    eDISABLE = 0, // AC/KC available interrupt disabled
    eENABLE = 1, // AC/KC available interrupt enabled
  };
  
  // Bit field definition.
  struct {
    eREADYEN READYEN : 1;
    eSUCCESSEN SUCCESSEN : 1;
    eERROREN ERROREN : 1;
    uint32_t _reserved_3 : 1;
    eKEYINREQEN KEYINREQEN : 1;
    eKEYOUTAVAILEN KEYOUTAVAILEN : 1;
    eCODEINREQEN CODEINREQEN : 1;
    eCODEOUTAVAILEN CODEOUTAVAILEN : 1;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTEN &Instance() { return *reinterpret_cast<volatile INTEN*>(0x40C82100); }
};

// PUF Interrupt Status
//
union INTSTAT {
  
  // Enum definitions.
  enum class eREADY : uint32_t {
    eNOT_FINISHED = 0, // Indicates that last operation not finished
    eFINISHED = 1, // Indicates that last operation is finished
  };
  enum class eSUCCESS : uint32_t {
    eUNSUCCESSFUL = 0, // Indicates that last operation was not successful
    eSUCCESSFUL = 1, // Indicates that last operation was successful
  };
  enum class eERROR : uint32_t {
    eNO_ERROR = 0, // PUF is not in the Error state and operations can be performed
    eERROR = 1, // PUF is in the Error state and no operations can be performed
  };
  enum class eKEYINREQ : uint32_t {
    eNO_REQUEST = 0, // No request for next part of key
    eREQUEST = 1, // Request for next part of key
  };
  enum class eKEYOUTAVAIL : uint32_t {
    eNOT_AVAILABLE = 0, // Next part of key is not available
    eAVAILABLE = 1, // Next part of key is available
  };
  enum class eCODEINREQ : uint32_t {
    eNO_REQUEST = 0, // No request for next part of AC/KC
    eREQUEST = 1, // Request for next part of AC/KC
  };
  enum class eCODEOUTAVAIL : uint32_t {
    eNOT_AVAILABLE = 0, // Next part of AC/KC is not available
    eAVAILABLE = 1, // Next part of AC/KC is available
  };
  
  // Bit field definition.
  struct {
    eREADY READY : 1;
    eSUCCESS SUCCESS : 1;
    eERROR ERROR : 1;
    uint32_t _reserved_3 : 1;
    eKEYINREQ KEYINREQ : 1;
    eKEYOUTAVAIL KEYOUTAVAIL : 1;
    eCODEINREQ CODEINREQ : 1;
    eCODEOUTAVAIL CODEOUTAVAIL : 1;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  INTSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTSTAT &Instance() { return *reinterpret_cast<volatile INTSTAT*>(0x40C82104); }
};

// PUF Power Control Of RAM
//
union PWRCTRL {
  
  // Enum definitions.
  enum class eRAM_ON : uint32_t {
    eSLEEP = 0, // PUF RAM is in sleep mode (PUF operation disabled)
    eWAKE = 1, // PUF RAM is awake (normal PUF operation enabled)
  };
  enum class eCK_DIS : uint32_t {
    eENABLE = 0, // PUF RAM is clocked (normal PUF operation enabled)
    eDISABLE = 1, // PUF RAM clock is gated/disabled (PUF operation disabled)
  };
  enum class eRAM_INITN : uint32_t {
    eRESET = 0, // Reset the PUF RAM (PUF operation disabled)
    eDO_NOT_RESET = 1, // Do not reset the PUF RAM (normal PUF operation enabled)
  };
  
  // Bit field definition.
  struct {
    eRAM_ON RAM_ON : 1;
    uint32_t _reserved_1 : 1;
    eCK_DIS CK_DIS : 1;
    eRAM_INITN RAM_INITN : 1;
    uint32_t RAM_PSW : 4;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PWRCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile PWRCTRL &Instance() { return *reinterpret_cast<volatile PWRCTRL*>(0x40C82108); }
};

// PUF Configuration Register
//
union CFG {
  
  // Enum definitions.
  enum class ePUF_BLOCK_SET_KEY : uint32_t {
    eENABLE = 0, // Enable the Set Key state
    eDISABLE = 1, // Disable the Set Key state
  };
  enum class ePUF_BLOCK_ENROLL : uint32_t {
    eENABLE = 0, // Enable the Enrollment state
    eDISABLE = 1, // Disable the Enrollment state
  };
  
  // Bit field definition.
  struct {
    ePUF_BLOCK_SET_KEY PUF_BLOCK_SET_KEY : 1;
    ePUF_BLOCK_ENROLL PUF_BLOCK_ENROLL : 1;
    uint32_t _reserved_end : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG &Instance() { return *reinterpret_cast<volatile CFG*>(0x40C8210C); }
};

// PUF Key Manager Lock
//
union KEYLOCK {
  
  // Enum definitions.
  enum class eLOCK0 : uint32_t {
    eLOCKED_00 = 0, // SNVS Key block locked
    eLOCKED_01 = 1, // SNVS Key block locked
    eUNLOCKED = 2, // SNVS Key block unlocked
    eLOCKED_11 = 3, // SNVS Key block locked
  };
  enum class eLOCK1 : uint32_t {
    eLOCKED_00 = 0, // OTFAD Key block locked
    eLOCKED_01 = 1, // OTFAD Key block locked
    eUNLOCKED = 2, // OTFAD Key block unlocked
    eLOCKED_11 = 3, // OTFAD Key block locked
  };
  
  // Bit field definition.
  struct {
    eLOCK0 LOCK0 : 2;
    eLOCK1 LOCK1 : 2;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYLOCK() = delete;
  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile KEYLOCK &Instance() { return *reinterpret_cast<volatile KEYLOCK*>(0x40C82200); }
};

// PUF Key Manager Enable
//
union KEYENABLE {
  
  // Enum definitions.
  enum class eENABLE0 : uint32_t {
    eDISABLED_00 = 0, // Key block 0 disabled
    eDISABLED_01 = 1, // Key block 0 disabled
    eENABLED = 2, // Key block 0 enabled
    eDISABLED_11 = 3, // Key block 0 disabled
  };
  enum class eENABLE1 : uint32_t {
    eDISABLED_00 = 0, // Key block 1 disabled
    eDISABLED_01 = 1, // Key block 1 disabled
    eENABLED = 2, // Key block 1 enabled
    eDISABLED_11 = 3, // Key block 1 disabled
  };
  
  // Bit field definition.
  struct {
    eENABLE0 ENABLE0 : 2;
    eENABLE1 ENABLE1 : 2;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile KEYENABLE &Instance() { return *reinterpret_cast<volatile KEYENABLE*>(0x40C82204); }
};

// PUF Key Manager Reset
//
union KEYRESET {
  
  // Enum definitions.
  enum class eRESET0 : uint32_t {
    eNORESET_00 = 0, // Do not reset key block 0
    eNORESET_01 = 1, // Do not reset key block 0
    eRESET = 2, // Reset key block 0
    eNORESET_11 = 3, // Do not reset key block 0
  };
  enum class eRESET1 : uint32_t {
    eNORESET_00 = 0, // Do not reset key block 1
    eNORESET_01 = 1, // Do not reset key block 1
    eRESET = 2, // Reset key block 1
    eNORESET_11 = 3, // Do not reset key block 1
  };
  
  // Bit field definition.
  struct {
    eRESET0 RESET0 : 2;
    eRESET1 RESET1 : 2;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYRESET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYRESET &Instance() { return *reinterpret_cast<volatile KEYRESET*>(0x40C82208); }
};

// PUF Index Block Key Output
//
union IDXBLK {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDXBLK0 : 2;
    uint32_t IDXBLK1 : 2;
    uint32_t IDXBLK2 : 2;
    uint32_t IDXBLK3 : 2;
    uint32_t IDXBLK4 : 2;
    uint32_t IDXBLK5 : 2;
    uint32_t IDXBLK6 : 2;
    uint32_t IDXBLK7 : 2;
    uint32_t IDXBLK8 : 2;
    uint32_t IDXBLK9 : 2;
    uint32_t IDXBLK10 : 2;
    uint32_t IDXBLK11 : 2;
    uint32_t IDXBLK12 : 2;
    uint32_t IDXBLK13 : 2;
    uint32_t IDXBLK14 : 2;
    uint32_t IDXBLK15 : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK() = delete;
  inline void Reset() volatile { this->value = 0xAAAAAAAA; }
  static inline volatile IDXBLK &Instance() { return *reinterpret_cast<volatile IDXBLK*>(0x40C8220C); }
};

// PUF Index Block Key Output
//
union IDXBLK_DP {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDXBLK_DP0 : 2;
    uint32_t IDXBLK_DP1 : 2;
    uint32_t IDXBLK_DP2 : 2;
    uint32_t IDXBLK_DP3 : 2;
    uint32_t IDXBLK_DP4 : 2;
    uint32_t IDXBLK_DP5 : 2;
    uint32_t IDXBLK_DP6 : 2;
    uint32_t IDXBLK_DP7 : 2;
    uint32_t IDXBLK_DP8 : 2;
    uint32_t IDXBLK_DP9 : 2;
    uint32_t IDXBLK_DP10 : 2;
    uint32_t IDXBLK_DP11 : 2;
    uint32_t IDXBLK_DP12 : 2;
    uint32_t IDXBLK_DP13 : 2;
    uint32_t IDXBLK_DP14 : 2;
    uint32_t IDXBLK_DP15 : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK_DP() = delete;
  inline void Reset() volatile { this->value = 0xAAAAAAAA; }
  static inline volatile IDXBLK_DP &Instance() { return *reinterpret_cast<volatile IDXBLK_DP*>(0x40C82210); }
};

// PUF Key Block 0 Mask Enable
//
union KEYMASK0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t KEYMASK : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYMASK0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYMASK0 &Instance() { return *reinterpret_cast<volatile KEYMASK0*>(0x40C82214); }
};

// PUF Key Block 1 Mask Enable
//
union KEYMASK1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t KEYMASK : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  KEYMASK1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KEYMASK1 &Instance() { return *reinterpret_cast<volatile KEYMASK1*>(0x40C82218); }
};

// PUF Index Block Setting Status Register
//
union IDXBLK_STATUS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDXBLK_STATUS0 : 2;
    uint32_t IDXBLK_STATUS1 : 2;
    uint32_t IDXBLK_STATUS2 : 2;
    uint32_t IDXBLK_STATUS3 : 2;
    uint32_t IDXBLK_STATUS4 : 2;
    uint32_t IDXBLK_STATUS5 : 2;
    uint32_t IDXBLK_STATUS6 : 2;
    uint32_t IDXBLK_STATUS7 : 2;
    uint32_t IDXBLK_STATUS8 : 2;
    uint32_t IDXBLK_STATUS9 : 2;
    uint32_t IDXBLK_STATUS10 : 2;
    uint32_t IDXBLK_STATUS11 : 2;
    uint32_t IDXBLK_STATUS12 : 2;
    uint32_t IDXBLK_STATUS13 : 2;
    uint32_t IDXBLK_STATUS14 : 2;
    uint32_t IDXBLK_STATUS15 : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK_STATUS() = delete;
  inline void Reset() volatile { this->value = 0xAAAAAAAA; }
  static inline volatile IDXBLK_STATUS &Instance() { return *reinterpret_cast<volatile IDXBLK_STATUS*>(0x40C82254); }
};

// PUF Key Manager Shift Status
//
union IDXBLK_SHIFT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IND_KEY0 : 4;
    uint32_t IND_KEY1 : 4;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IDXBLK_SHIFT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IDXBLK_SHIFT &Instance() { return *reinterpret_cast<volatile IDXBLK_SHIFT*>(0x40C82258); }
};


} // namespace nKEY_MANAGER__PUF