#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SRC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSRC {


// SRC Control Register
//
union SCR {
  
  enum class eBT_RELEASE_M4 : uint32_t {
    eBT_RELEASE_M4_0 = 0, // cm4 core reset is asserted
    eBT_RELEASE_M4_1 = 1, // cm4 core reset is released
  };
  
  enum class eBT_RELEASE_M7 : uint32_t {
    eBT_RELEASE_M7_0 = 0, // cm7 core reset is asserted
    eBT_RELEASE_M7_1 = 1, // cm7 core reset is released
  };
  
  // Bit field definition.
  struct {
    eBT_RELEASE_M4 BT_RELEASE_M4 : 1;
    eBT_RELEASE_M7 BT_RELEASE_M7 : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCR &Instance() { return *reinterpret_cast<volatile SCR*>(0x40C04000); }
};

// SRC Reset Mode Register
//
union SRMR {
  
  enum class eWDOG_RESET_MODE : uint32_t {
    eWDOG_RESET_MODE_0 = 0, // reset system
    eWDOG_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eWDOG3_RESET_MODE : uint32_t {
    eWDOG3_RESET_MODE_0 = 0, // reset system
    eWDOG3_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eWDOG4_RESET_MODE : uint32_t {
    eWDOG4_RESET_MODE_0 = 0, // reset system
    eWDOG4_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eM4LOCKUP_RESET_MODE : uint32_t {
    eM4LOCKUP_RESET_MODE_0 = 0, // reset system
    eM4LOCKUP_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eM7LOCKUP_RESET_MODE : uint32_t {
    eM7LOCKUP_RESET_MODE_0 = 0, // reset system
    eM7LOCKUP_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eM4REQ_RESET_MODE : uint32_t {
    eM4REQ_RESET_MODE_0 = 0, // reset system
    eM4REQ_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eM7REQ_RESET_MODE : uint32_t {
    eM7REQ_RESET_MODE_0 = 0, // reset system
    eM7REQ_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eTEMPSENSE_RESET_MODE : uint32_t {
    eTEMPSENSE_RESET_MODE_0 = 0, // reset system
    eTEMPSENSE_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eCSU_RESET_MODE : uint32_t {
    eCSU_RESET_MODE_0 = 0, // reset system
    eCSU_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eJTAGSW_RESET_MODE : uint32_t {
    eJTAGSW_RESET_MODE_0 = 0, // reset system
    eJTAGSW_RESET_MODE_3 = 3, // do not reset anything
  };
  
  enum class eOVERVOLT_RESET_MODE : uint32_t {
    eOVERVOLT_RESET_MODE_0 = 0, // reset system
    eOVERVOLT_RESET_MODE_3 = 3, // do not reset anything
  };
  
  // Bit field definition.
  struct {
    eWDOG_RESET_MODE WDOG_RESET_MODE : 2;
    eWDOG3_RESET_MODE WDOG3_RESET_MODE : 2;
    eWDOG4_RESET_MODE WDOG4_RESET_MODE : 2;
    eM4LOCKUP_RESET_MODE M4LOCKUP_RESET_MODE : 2;
    eM7LOCKUP_RESET_MODE M7LOCKUP_RESET_MODE : 2;
    eM4REQ_RESET_MODE M4REQ_RESET_MODE : 2;
    eM7REQ_RESET_MODE M7REQ_RESET_MODE : 2;
    eTEMPSENSE_RESET_MODE TEMPSENSE_RESET_MODE : 2;
    eCSU_RESET_MODE CSU_RESET_MODE : 2;
    eJTAGSW_RESET_MODE JTAGSW_RESET_MODE : 2;
    eOVERVOLT_RESET_MODE OVERVOLT_RESET_MODE : 2;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRMR &Instance() { return *reinterpret_cast<volatile SRMR*>(0x40C04004); }
};

// SRC Boot Mode Register 1
//
union SBMR1 {
  
  // Bit field definition.
  struct {
    uint32_t BOOT_CFG1 : 8;
    uint32_t BOOT_CFG2 : 8;
    uint32_t BOOT_CFG3 : 8;
    uint32_t BOOT_CFG4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SBMR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SBMR1 &Instance() { return *reinterpret_cast<volatile SBMR1*>(0x40C04008); }
};

// SRC Boot Mode Register 2
//
union SBMR2 {
  
  // Bit field definition.
  struct {
    uint32_t SEC_CONFIG : 2;
    uint32_t _reserved_0 : 2;
    uint32_t BT_FUSE_SEL : 1;
    uint32_t _reserved_1 : 19;
    uint32_t BMOD : 2;
    uint32_t _reserved_2 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SBMR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SBMR2 &Instance() { return *reinterpret_cast<volatile SBMR2*>(0x40C0400C); }
};

// SRC Reset Status Register
//
union SRSR {
  
  enum class eIPP_RESET_B_M7 : uint32_t {
    eIPP_RESET_B_M7_0 = 0, // Reset is not a result of ipp_reset_b pin.
    eIPP_RESET_B_M7_1 = 1, // Reset is a result of ipp_reset_b pin.
  };
  
  enum class eM7_REQUEST_M7 : uint32_t {
    eM7_REQUEST_M7_0 = 0, // Reset is not a result of m7 reset request.
    eM7_REQUEST_M7_1 = 1, // Reset is a result of m7 reset request.
  };
  
  enum class eM7_LOCKUP_M7 : uint32_t {
    eM7_LOCKUP_M7_0 = 0, // Reset is not a result of the mentioned case.
    eM7_LOCKUP_M7_1 = 1, // Reset is a result of the mentioned case.
  };
  
  enum class eCSU_RESET_B_M7 : uint32_t {
    eCSU_RESET_B_M7_0 = 0, // Reset is not a result of the csu_reset_b event.
    eCSU_RESET_B_M7_1 = 1, // Reset is a result of the csu_reset_b event.
  };
  
  enum class eIPP_USER_RESET_B_M7 : uint32_t {
    eIPP_USER_RESET_B_M7_0 = 0, // Reset is not a result of the ipp_user_reset_b qualified as COLD reset event.
    eIPP_USER_RESET_B_M7_1 = 1, // Reset is a result of the ipp_user_reset_b qualified as COLD reset event.
  };
  
  enum class eWDOG_RST_B_M7 : uint32_t {
    eWDOG_RST_B_M7_0 = 0, // Reset is not a result of the watchdog time-out event.
    eWDOG_RST_B_M7_1 = 1, // Reset is a result of the watchdog time-out event.
  };
  
  enum class eJTAG_RST_B_M7 : uint32_t {
    eJTAG_RST_B_M7_0 = 0, // Reset is not a result of HIGH-Z reset from JTAG.
    eJTAG_RST_B_M7_1 = 1, // Reset is a result of HIGH-Z reset from JTAG.
  };
  
  enum class eJTAG_SW_RST_M7 : uint32_t {
    eJTAG_SW_RST_M7_0 = 0, // Reset is not a result of software reset from JTAG.
    eJTAG_SW_RST_M7_1 = 1, // Reset is a result of software reset from JTAG.
  };
  
  enum class eWDOG3_RST_B_M7 : uint32_t {
    eWDOG3_RST_B_M7_0 = 0, // Reset is not a result of the watchdog3 time-out event.
    eWDOG3_RST_B_M7_1 = 1, // Reset is a result of the watchdog3 time-out event.
  };
  
  enum class eWDOG4_RST_B_M7 : uint32_t {
    eWDOG4_RST_B_M7_0 = 0, // Reset is not a result of the watchdog4 time-out event.
    eWDOG4_RST_B_M7_1 = 1, // Reset is a result of the watchdog4 time-out event.
  };
  
  enum class eTEMPSENSE_RST_B_M7 : uint32_t {
    eTEMPSENSE_RST_B_M7_0 = 0, // Reset is not a result of software reset from Temperature Sensor.
    eTEMPSENSE_RST_B_M7_1 = 1, // Reset is a result of software reset from Temperature Sensor.
  };
  
  enum class eM4_REQUEST_M7 : uint32_t {
    eM4_REQUEST_M7_0 = 0, // Reset is not a result of m4 reset request.
    eM4_REQUEST_M7_1 = 1, // Reset is a result of m4 reset request.
  };
  
  enum class eM4_LOCKUP_M7 : uint32_t {
    eM4_LOCKUP_M7_0 = 0, // Reset is not a result of the mentioned case.
    eM4_LOCKUP_M7_1 = 1, // Reset is a result of the mentioned case.
  };
  
  enum class eOVERVOLT_RST_M7 : uint32_t {
    eOVERVOLT_RST_M7_0 = 0, // Reset is not a result of the mentioned case.
    eOVERVOLT_RST_M7_1 = 1, // Reset is a result of the mentioned case.
  };
  
  enum class eCDOG_RST_M7 : uint32_t {
    eCDOG_RST_M7_0 = 0, // Reset is not a result of the mentioned case.
    eCDOG_RST_M7_1 = 1, // Reset is a result of the mentioned case.
  };
  
  enum class eIPP_RESET_B_M4 : uint32_t {
    eIPP_RESET_B_M4_0 = 0, // Reset is not a result of ipp_reset_b pin.
    eIPP_RESET_B_M4_1 = 1, // Reset is a result of ipp_reset_b pin.
  };
  
  enum class eM4_REQUEST_M4 : uint32_t {
    eM4_REQUEST_M4_0 = 0, // Reset is not a result of m4 reset request.
    eM4_REQUEST_M4_1 = 1, // Reset is a result of m4 reset request.
  };
  
  enum class eM4_LOCKUP_M4 : uint32_t {
    eM4_LOCKUP_M4_0 = 0, // Reset is not a result of the mentioned case.
    eM4_LOCKUP_M4_1 = 1, // Reset is a result of the mentioned case.
  };
  
  enum class eCSU_RESET_B_M4 : uint32_t {
    eCSU_RESET_B_M4_0 = 0, // Reset is not a result of the csu_reset_b event.
    eCSU_RESET_B_M4_1 = 1, // Reset is a result of the csu_reset_b event.
  };
  
  enum class eIPP_USER_RESET_B_M4 : uint32_t {
    eIPP_USER_RESET_B_M4_0 = 0, // Reset is not a result of the ipp_user_reset_b qualified as COLD reset event.
    eIPP_USER_RESET_B_M4_1 = 1, // Reset is a result of the ipp_user_reset_b qualified as COLD reset event.
  };
  
  enum class eWDOG_RST_B_M4 : uint32_t {
    eWDOG_RST_B_M4_0 = 0, // Reset is not a result of the watchdog time-out event.
    eWDOG_RST_B_M4_1 = 1, // Reset is a result of the watchdog time-out event.
  };
  
  enum class eJTAG_RST_B_M4 : uint32_t {
    eJTAG_RST_B_M4_0 = 0, // Reset is not a result of HIGH-Z reset from JTAG.
    eJTAG_RST_B_M4_1 = 1, // Reset is a result of HIGH-Z reset from JTAG.
  };
  
  enum class eJTAG_SW_RST_M4 : uint32_t {
    eJTAG_SW_RST_M4_0 = 0, // Reset is not a result of software reset from JTAG.
    eJTAG_SW_RST_M4_1 = 1, // Reset is a result of software reset from JTAG.
  };
  
  enum class eWDOG3_RST_B_M4 : uint32_t {
    eWDOG3_RST_B_M4_0 = 0, // Reset is not a result of the watchdog3 time-out event.
    eWDOG3_RST_B_M4_1 = 1, // Reset is a result of the watchdog3 time-out event.
  };
  
  enum class eWDOG4_RST_B_M4 : uint32_t {
    eWDOG4_RST_B_M4_0 = 0, // Reset is not a result of the watchdog4 time-out event.
    eWDOG4_RST_B_M4_1 = 1, // Reset is a result of the watchdog4 time-out event.
  };
  
  enum class eTEMPSENSE_RST_B_M4 : uint32_t {
    eTEMPSENSE_RST_B_M4_0 = 0, // Reset is not a result of software reset from Temperature Sensor.
    eTEMPSENSE_RST_B_M4_1 = 1, // Reset is a result of software reset from Temperature Sensor.
  };
  
  enum class eM7_REQUEST_M4 : uint32_t {
    eM7_REQUEST_M4_0 = 0, // Reset is not a result of m7 reset request.
    eM7_REQUEST_M4_1 = 1, // Reset is a result of m7 reset request.
  };
  
  enum class eM7_LOCKUP_M4 : uint32_t {
    eM7_LOCKUP_M4_0 = 0, // Reset is not a result of the mentioned case.
    eM7_LOCKUP_M4_1 = 1, // Reset is a result of the mentioned case.
  };
  
  enum class eOVERVOLT_RST_M4 : uint32_t {
    eOVERVOLT_RST_M4_0 = 0, // Reset is not a result of the mentioned case.
    eOVERVOLT_RST_M4_1 = 1, // Reset is a result of the mentioned case.
  };
  
  enum class eCDOG_RST_M4 : uint32_t {
    eCDOG_RST_M4_0 = 0, // Reset is not a result of the mentioned case.
    eCDOG_RST_M4_1 = 1, // Reset is a result of the mentioned case.
  };
  
  // Bit field definition.
  struct {
    eIPP_RESET_B_M7 IPP_RESET_B_M7 : 1;
    eM7_REQUEST_M7 M7_REQUEST_M7 : 1;
    eM7_LOCKUP_M7 M7_LOCKUP_M7 : 1;
    eCSU_RESET_B_M7 CSU_RESET_B_M7 : 1;
    eIPP_USER_RESET_B_M7 IPP_USER_RESET_B_M7 : 1;
    eWDOG_RST_B_M7 WDOG_RST_B_M7 : 1;
    eJTAG_RST_B_M7 JTAG_RST_B_M7 : 1;
    eJTAG_SW_RST_M7 JTAG_SW_RST_M7 : 1;
    eWDOG3_RST_B_M7 WDOG3_RST_B_M7 : 1;
    eWDOG4_RST_B_M7 WDOG4_RST_B_M7 : 1;
    eTEMPSENSE_RST_B_M7 TEMPSENSE_RST_B_M7 : 1;
    eM4_REQUEST_M7 M4_REQUEST_M7 : 1;
    eM4_LOCKUP_M7 M4_LOCKUP_M7 : 1;
    eOVERVOLT_RST_M7 OVERVOLT_RST_M7 : 1;
    eCDOG_RST_M7 CDOG_RST_M7 : 1;
    uint32_t _reserved_0 : 1;
    eIPP_RESET_B_M4 IPP_RESET_B_M4 : 1;
    eM4_REQUEST_M4 M4_REQUEST_M4 : 1;
    eM4_LOCKUP_M4 M4_LOCKUP_M4 : 1;
    eCSU_RESET_B_M4 CSU_RESET_B_M4 : 1;
    eIPP_USER_RESET_B_M4 IPP_USER_RESET_B_M4 : 1;
    eWDOG_RST_B_M4 WDOG_RST_B_M4 : 1;
    eJTAG_RST_B_M4 JTAG_RST_B_M4 : 1;
    eJTAG_SW_RST_M4 JTAG_SW_RST_M4 : 1;
    eWDOG3_RST_B_M4 WDOG3_RST_B_M4 : 1;
    eWDOG4_RST_B_M4 WDOG4_RST_B_M4 : 1;
    eTEMPSENSE_RST_B_M4 TEMPSENSE_RST_B_M4 : 1;
    eM7_REQUEST_M4 M7_REQUEST_M4 : 1;
    eM7_LOCKUP_M4 M7_LOCKUP_M4 : 1;
    eOVERVOLT_RST_M4 OVERVOLT_RST_M4 : 1;
    eCDOG_RST_M4 CDOG_RST_M4 : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRSR &Instance() { return *reinterpret_cast<volatile SRSR*>(0x40C04010); }
};

// SRC General Purpose Register
//
union GPR1 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR1 &Instance() { return *reinterpret_cast<volatile GPR1*>(0x40C04014); }
};
// SRC General Purpose Register
//
union GPR2 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR2 &Instance() { return *reinterpret_cast<volatile GPR2*>(0x40C04018); }
};
// SRC General Purpose Register
//
union GPR3 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR3 &Instance() { return *reinterpret_cast<volatile GPR3*>(0x40C0401C); }
};
// SRC General Purpose Register
//
union GPR4 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR4 &Instance() { return *reinterpret_cast<volatile GPR4*>(0x40C04020); }
};
// SRC General Purpose Register
//
union GPR5 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR5 &Instance() { return *reinterpret_cast<volatile GPR5*>(0x40C04024); }
};
// SRC General Purpose Register
//
union GPR6 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR6 &Instance() { return *reinterpret_cast<volatile GPR6*>(0x40C04028); }
};
// SRC General Purpose Register
//
union GPR7 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR7 &Instance() { return *reinterpret_cast<volatile GPR7*>(0x40C0402C); }
};
// SRC General Purpose Register
//
union GPR8 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR8 &Instance() { return *reinterpret_cast<volatile GPR8*>(0x40C04030); }
};
// SRC General Purpose Register
//
union GPR9 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR9 &Instance() { return *reinterpret_cast<volatile GPR9*>(0x40C04034); }
};
// SRC General Purpose Register
//
union GPR10 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR10 &Instance() { return *reinterpret_cast<volatile GPR10*>(0x40C04038); }
};
// SRC General Purpose Register
//
union GPR11 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR11 &Instance() { return *reinterpret_cast<volatile GPR11*>(0x40C0403C); }
};
// SRC General Purpose Register
//
union GPR12 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR12 &Instance() { return *reinterpret_cast<volatile GPR12*>(0x40C04040); }
};
// SRC General Purpose Register
//
union GPR13 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR13 &Instance() { return *reinterpret_cast<volatile GPR13*>(0x40C04044); }
};
// SRC General Purpose Register
//
union GPR14 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR14 &Instance() { return *reinterpret_cast<volatile GPR14*>(0x40C04048); }
};
// SRC General Purpose Register
//
union GPR15 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR15 &Instance() { return *reinterpret_cast<volatile GPR15*>(0x40C0404C); }
};
// SRC General Purpose Register
//
union GPR16 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR16 &Instance() { return *reinterpret_cast<volatile GPR16*>(0x40C04050); }
};
// SRC General Purpose Register
//
union GPR17 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR17 &Instance() { return *reinterpret_cast<volatile GPR17*>(0x40C04054); }
};
// SRC General Purpose Register
//
union GPR18 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR18 &Instance() { return *reinterpret_cast<volatile GPR18*>(0x40C04058); }
};
// SRC General Purpose Register
//
union GPR19 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR19 &Instance() { return *reinterpret_cast<volatile GPR19*>(0x40C0405C); }
};
// SRC General Purpose Register
//
union GPR20 {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR20 &Instance() { return *reinterpret_cast<volatile GPR20*>(0x40C04060); }
};

// Slice Authentication Register
//
union AUTHEN_MEGA {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_MEGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_MEGA &Instance() { return *reinterpret_cast<volatile AUTHEN_MEGA*>(0x40C04200); }
};

// Slice Control Register
//
union CTRL_MEGA {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_MEGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_MEGA &Instance() { return *reinterpret_cast<volatile CTRL_MEGA*>(0x40C04204); }
};

// Slice Setpoint Config Register
//
union SETPOINT_MEGA {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_MEGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_MEGA &Instance() { return *reinterpret_cast<volatile SETPOINT_MEGA*>(0x40C04208); }
};

// Slice Domain Config Register
//
union DOMAIN_MEGA {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_MEGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_MEGA &Instance() { return *reinterpret_cast<volatile DOMAIN_MEGA*>(0x40C0420C); }
};

// Slice Status Register
//
union STAT_MEGA {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_MEGA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_MEGA &Instance() { return *reinterpret_cast<volatile STAT_MEGA*>(0x40C04210); }
};

// Slice Authentication Register
//
union AUTHEN_DISPLAY {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_DISPLAY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_DISPLAY &Instance() { return *reinterpret_cast<volatile AUTHEN_DISPLAY*>(0x40C04220); }
};

// Slice Control Register
//
union CTRL_DISPLAY {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_DISPLAY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_DISPLAY &Instance() { return *reinterpret_cast<volatile CTRL_DISPLAY*>(0x40C04224); }
};

// Slice Setpoint Config Register
//
union SETPOINT_DISPLAY {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_DISPLAY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_DISPLAY &Instance() { return *reinterpret_cast<volatile SETPOINT_DISPLAY*>(0x40C04228); }
};

// Slice Domain Config Register
//
union DOMAIN_DISPLAY {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_DISPLAY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_DISPLAY &Instance() { return *reinterpret_cast<volatile DOMAIN_DISPLAY*>(0x40C0422C); }
};

// Slice Status Register
//
union STAT_DISPLAY {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_DISPLAY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_DISPLAY &Instance() { return *reinterpret_cast<volatile STAT_DISPLAY*>(0x40C04230); }
};

// Slice Authentication Register
//
union AUTHEN_WAKEUP {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_WAKEUP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_WAKEUP &Instance() { return *reinterpret_cast<volatile AUTHEN_WAKEUP*>(0x40C04240); }
};

// Slice Control Register
//
union CTRL_WAKEUP {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_WAKEUP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_WAKEUP &Instance() { return *reinterpret_cast<volatile CTRL_WAKEUP*>(0x40C04244); }
};

// Slice Setpoint Config Register
//
union SETPOINT_WAKEUP {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_WAKEUP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_WAKEUP &Instance() { return *reinterpret_cast<volatile SETPOINT_WAKEUP*>(0x40C04248); }
};

// Slice Domain Config Register
//
union DOMAIN_WAKEUP {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_WAKEUP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_WAKEUP &Instance() { return *reinterpret_cast<volatile DOMAIN_WAKEUP*>(0x40C0424C); }
};

// Slice Status Register
//
union STAT_WAKEUP {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_WAKEUP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_WAKEUP &Instance() { return *reinterpret_cast<volatile STAT_WAKEUP*>(0x40C04250); }
};

// Slice Authentication Register
//
union AUTHEN_M4CORE {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_M4CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_M4CORE &Instance() { return *reinterpret_cast<volatile AUTHEN_M4CORE*>(0x40C04280); }
};

// Slice Control Register
//
union CTRL_M4CORE {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_M4CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_M4CORE &Instance() { return *reinterpret_cast<volatile CTRL_M4CORE*>(0x40C04284); }
};

// Slice Setpoint Config Register
//
union SETPOINT_M4CORE {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_M4CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_M4CORE &Instance() { return *reinterpret_cast<volatile SETPOINT_M4CORE*>(0x40C04288); }
};

// Slice Domain Config Register
//
union DOMAIN_M4CORE {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_M4CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_M4CORE &Instance() { return *reinterpret_cast<volatile DOMAIN_M4CORE*>(0x40C0428C); }
};

// Slice Status Register
//
union STAT_M4CORE {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_M4CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_M4CORE &Instance() { return *reinterpret_cast<volatile STAT_M4CORE*>(0x40C04290); }
};

// Slice Authentication Register
//
union AUTHEN_M7CORE {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_M7CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_M7CORE &Instance() { return *reinterpret_cast<volatile AUTHEN_M7CORE*>(0x40C042A0); }
};

// Slice Control Register
//
union CTRL_M7CORE {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_M7CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_M7CORE &Instance() { return *reinterpret_cast<volatile CTRL_M7CORE*>(0x40C042A4); }
};

// Slice Setpoint Config Register
//
union SETPOINT_M7CORE {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_M7CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_M7CORE &Instance() { return *reinterpret_cast<volatile SETPOINT_M7CORE*>(0x40C042A8); }
};

// Slice Domain Config Register
//
union DOMAIN_M7CORE {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_M7CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_M7CORE &Instance() { return *reinterpret_cast<volatile DOMAIN_M7CORE*>(0x40C042AC); }
};

// Slice Status Register
//
union STAT_M7CORE {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_M7CORE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_M7CORE &Instance() { return *reinterpret_cast<volatile STAT_M7CORE*>(0x40C042B0); }
};

// Slice Authentication Register
//
union AUTHEN_M4DEBUG {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_M4DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_M4DEBUG &Instance() { return *reinterpret_cast<volatile AUTHEN_M4DEBUG*>(0x40C042C0); }
};

// Slice Control Register
//
union CTRL_M4DEBUG {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_M4DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_M4DEBUG &Instance() { return *reinterpret_cast<volatile CTRL_M4DEBUG*>(0x40C042C4); }
};

// Slice Setpoint Config Register
//
union SETPOINT_M4DEBUG {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_M4DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_M4DEBUG &Instance() { return *reinterpret_cast<volatile SETPOINT_M4DEBUG*>(0x40C042C8); }
};

// Slice Domain Config Register
//
union DOMAIN_M4DEBUG {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_M4DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_M4DEBUG &Instance() { return *reinterpret_cast<volatile DOMAIN_M4DEBUG*>(0x40C042CC); }
};

// Slice Status Register
//
union STAT_M4DEBUG {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_M4DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_M4DEBUG &Instance() { return *reinterpret_cast<volatile STAT_M4DEBUG*>(0x40C042D0); }
};

// Slice Authentication Register
//
union AUTHEN_M7DEBUG {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_M7DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_M7DEBUG &Instance() { return *reinterpret_cast<volatile AUTHEN_M7DEBUG*>(0x40C042E0); }
};

// Slice Control Register
//
union CTRL_M7DEBUG {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_M7DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_M7DEBUG &Instance() { return *reinterpret_cast<volatile CTRL_M7DEBUG*>(0x40C042E4); }
};

// Slice Setpoint Config Register
//
union SETPOINT_M7DEBUG {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_M7DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_M7DEBUG &Instance() { return *reinterpret_cast<volatile SETPOINT_M7DEBUG*>(0x40C042E8); }
};

// Slice Domain Config Register
//
union DOMAIN_M7DEBUG {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_M7DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_M7DEBUG &Instance() { return *reinterpret_cast<volatile DOMAIN_M7DEBUG*>(0x40C042EC); }
};

// Slice Status Register
//
union STAT_M7DEBUG {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_M7DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_M7DEBUG &Instance() { return *reinterpret_cast<volatile STAT_M7DEBUG*>(0x40C042F0); }
};

// Slice Authentication Register
//
union AUTHEN_USBPHY1 {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_USBPHY1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_USBPHY1 &Instance() { return *reinterpret_cast<volatile AUTHEN_USBPHY1*>(0x40C04300); }
};

// Slice Control Register
//
union CTRL_USBPHY1 {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_USBPHY1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_USBPHY1 &Instance() { return *reinterpret_cast<volatile CTRL_USBPHY1*>(0x40C04304); }
};

// Slice Setpoint Config Register
//
union SETPOINT_USBPHY1 {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_USBPHY1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_USBPHY1 &Instance() { return *reinterpret_cast<volatile SETPOINT_USBPHY1*>(0x40C04308); }
};

// Slice Domain Config Register
//
union DOMAIN_USBPHY1 {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_USBPHY1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_USBPHY1 &Instance() { return *reinterpret_cast<volatile DOMAIN_USBPHY1*>(0x40C0430C); }
};

// Slice Status Register
//
union STAT_USBPHY1 {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_USBPHY1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_USBPHY1 &Instance() { return *reinterpret_cast<volatile STAT_USBPHY1*>(0x40C04310); }
};

// Slice Authentication Register
//
union AUTHEN_USBPHY2 {
  
  enum class eDOMAIN_MODE : uint32_t {
    eDOMAIN_MODE_0 = 0, // slice hardware reset will NOT be triggered by CPU power mode transition
    eDOMAIN_MODE_1 = 1, // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
  };
  
  enum class eSETPOINT_MODE : uint32_t {
    eSETPOINT_MODE_0 = 0, // slice hardware reset will NOT be triggered by Setpoint transition
    eSETPOINT_MODE_1 = 1, // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
  };
  
  // Bit field definition.
  struct {
    eDOMAIN_MODE DOMAIN_MODE : 1;
    eSETPOINT_MODE SETPOINT_MODE : 1;
    uint32_t _reserved_0 : 5;
    uint32_t LOCK_MODE : 1;
    uint32_t ASSIGN_LIST : 4;
    uint32_t _reserved_1 : 3;
    uint32_t LOCK_ASSIGN : 1;
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_2 : 3;
    uint32_t LOCK_LIST : 1;
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_3 : 5;
    uint32_t LOCK_SETTING : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTHEN_USBPHY2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTHEN_USBPHY2 &Instance() { return *reinterpret_cast<volatile AUTHEN_USBPHY2*>(0x40C04320); }
};

// Slice Control Register
//
union CTRL_USBPHY2 {
  
  enum class eSW_RESET : uint32_t {
    eSW_RESET_0 = 0, // do not assert slice software reset
    eSW_RESET_1 = 1, // assert slice software reset
  };
  
  // Bit field definition.
  struct {
    eSW_RESET SW_RESET : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_USBPHY2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_USBPHY2 &Instance() { return *reinterpret_cast<volatile CTRL_USBPHY2*>(0x40C04324); }
};

// Slice Setpoint Config Register
//
union SETPOINT_USBPHY2 {
  
  enum class eSETPOINT0 : uint32_t {
    eSETPOINT0_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT0_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT1 : uint32_t {
    eSETPOINT1_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT1_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT2 : uint32_t {
    eSETPOINT2_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT2_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT3 : uint32_t {
    eSETPOINT3_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT3_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT4 : uint32_t {
    eSETPOINT4_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT4_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT5 : uint32_t {
    eSETPOINT5_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT5_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT6 : uint32_t {
    eSETPOINT6_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT6_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT7 : uint32_t {
    eSETPOINT7_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT7_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT8 : uint32_t {
    eSETPOINT8_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT8_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT9 : uint32_t {
    eSETPOINT9_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT9_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT10 : uint32_t {
    eSETPOINT10_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT10_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT11 : uint32_t {
    eSETPOINT11_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT11_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT12 : uint32_t {
    eSETPOINT12_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT12_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT13 : uint32_t {
    eSETPOINT13_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT13_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT14 : uint32_t {
    eSETPOINT14_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT14_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  enum class eSETPOINT15 : uint32_t {
    eSETPOINT15_0 = 0, // Slice reset will be de-asserted when system in Setpoint n
    eSETPOINT15_1 = 1, // Slice reset will be asserted when system in Setpoint n
  };
  
  // Bit field definition.
  struct {
    eSETPOINT0 SETPOINT0 : 1;
    eSETPOINT1 SETPOINT1 : 1;
    eSETPOINT2 SETPOINT2 : 1;
    eSETPOINT3 SETPOINT3 : 1;
    eSETPOINT4 SETPOINT4 : 1;
    eSETPOINT5 SETPOINT5 : 1;
    eSETPOINT6 SETPOINT6 : 1;
    eSETPOINT7 SETPOINT7 : 1;
    eSETPOINT8 SETPOINT8 : 1;
    eSETPOINT9 SETPOINT9 : 1;
    eSETPOINT10 SETPOINT10 : 1;
    eSETPOINT11 SETPOINT11 : 1;
    eSETPOINT12 SETPOINT12 : 1;
    eSETPOINT13 SETPOINT13 : 1;
    eSETPOINT14 SETPOINT14 : 1;
    eSETPOINT15 SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SETPOINT_USBPHY2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SETPOINT_USBPHY2 &Instance() { return *reinterpret_cast<volatile SETPOINT_USBPHY2*>(0x40C04328); }
};

// Slice Domain Config Register
//
union DOMAIN_USBPHY2 {
  
  enum class eCPU0_RUN : uint32_t {
    eCPU0_RUN_0 = 0, // Slice reset will be de-asserted when CPU0 in RUN mode
    eCPU0_RUN_1 = 1, // Slice reset will be asserted when CPU0 in RUN mode
  };
  
  enum class eCPU0_WAIT : uint32_t {
    eCPU0_WAIT_0 = 0, // Slice reset will be de-asserted when CPU0 in WAIT mode
    eCPU0_WAIT_1 = 1, // Slice reset will be asserted when CPU0 in WAIT mode
  };
  
  enum class eCPU0_STOP : uint32_t {
    eCPU0_STOP_0 = 0, // Slice reset will be de-asserted when CPU0 in STOP mode
    eCPU0_STOP_1 = 1, // Slice reset will be asserted when CPU0 in STOP mode
  };
  
  enum class eCPU0_SUSP : uint32_t {
    eCPU0_SUSP_0 = 0, // Slice reset will be de-asserted when CPU0 in SUSPEND mode
    eCPU0_SUSP_1 = 1, // Slice reset will be asserted when CPU0 in SUSPEND mode
  };
  
  enum class eCPU1_RUN : uint32_t {
    eCPU1_RUN_0 = 0, // Slice reset will be de-asserted when CPU1 in RUN mode
    eCPU1_RUN_1 = 1, // Slice reset will be asserted when CPU1 in RUN mode
  };
  
  enum class eCPU1_WAIT : uint32_t {
    eCPU1_WAIT_0 = 0, // Slice reset will be de-asserted when CPU1 in WAIT mode
    eCPU1_WAIT_1 = 1, // Slice reset will be asserted when CPU1 in WAIT mode
  };
  
  enum class eCPU1_STOP : uint32_t {
    eCPU1_STOP_0 = 0, // Slice reset will be de-asserted when CPU1 in STOP mode
    eCPU1_STOP_1 = 1, // Slice reset will be asserted when CPU1 in STOP mode
  };
  
  enum class eCPU1_SUSP : uint32_t {
    eCPU1_SUSP_0 = 0, // Slice reset will be de-asserted when CPU1 in SUSPEND mode
    eCPU1_SUSP_1 = 1, // Slice reset will be asserted when CPU1 in SUSPEND mode
  };
  
  // Bit field definition.
  struct {
    eCPU0_RUN CPU0_RUN : 1;
    eCPU0_WAIT CPU0_WAIT : 1;
    eCPU0_STOP CPU0_STOP : 1;
    eCPU0_SUSP CPU0_SUSP : 1;
    eCPU1_RUN CPU1_RUN : 1;
    eCPU1_WAIT CPU1_WAIT : 1;
    eCPU1_STOP CPU1_STOP : 1;
    eCPU1_SUSP CPU1_SUSP : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DOMAIN_USBPHY2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DOMAIN_USBPHY2 &Instance() { return *reinterpret_cast<volatile DOMAIN_USBPHY2*>(0x40C0432C); }
};

// Slice Status Register
//
union STAT_USBPHY2 {
  
  enum class eUNDER_RST : uint32_t {
    eUNDER_RST_0 = 0, // the reset is finished
    eUNDER_RST_1 = 1, // the reset is in process
  };
  
  enum class eRST_BY_HW : uint32_t {
    eRST_BY_HW_0 = 0, // the reset is not caused by the power mode transfer
    eRST_BY_HW_1 = 1, // the reset is caused by the power mode transfer
  };
  
  enum class eRST_BY_SW : uint32_t {
    eRST_BY_SW_0 = 0, // the reset is not caused by software setting
    eRST_BY_SW_1 = 1, // the reset is caused by software setting
  };
  
  // Bit field definition.
  struct {
    eUNDER_RST UNDER_RST : 1;
    uint32_t _reserved_0 : 1;
    eRST_BY_HW RST_BY_HW : 1;
    eRST_BY_SW RST_BY_SW : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT_USBPHY2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT_USBPHY2 &Instance() { return *reinterpret_cast<volatile STAT_USBPHY2*>(0x40C04330); }
};


} // namespace nSRC