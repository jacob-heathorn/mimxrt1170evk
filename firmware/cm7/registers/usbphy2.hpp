#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// USBPHY
namespace nUSBPHY2 {


// USB PHY Power-Down Register
union PWD {
  
  // TXPWDFS
  enum class eTXPWDFS : uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB full-speed drivers. This turns off the current starvation sources and puts the drivers into high-impedance output
    ePWR_DOWN = 1,
  };
  
  // TXPWDIBIAS
  enum class eTXPWDIBIAS : uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Power-down the USB PHY current bias block for the transmitter. This bit should be set only when the USB is in suspend mode. This effectively powers down the entire USB transmit path
    ePWR_DOWN = 1,
  };
  
  // TXPWDV2I
  enum class eTXPWDV2I : uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB PHY transmit V-to-I converter and the current mirror
    ePWR_DOWN = 1,
  };
  
  // RXPWDENV
  enum class eRXPWDENV : uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB high-speed receiver envelope detector (squelch signal)
    ePWR_DOWN = 1,
  };
  
  // RXPWD1PT1
  enum class eRXPWD1PT1 : uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Power-down the USB full-speed differential receiver.
    ePWR_DOWN = 1,
  };
  
  // RXPWDDIFF
  enum class eRXPWDDIFF : uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Power-down the USB high-speed differential receiver
    ePWR_DOWN = 1,
  };
  
  // RXPWDRX
  enum class eRXPWDRX : uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Power-down the entire USB PHY receiver block except for the full-speed differential receiver
    ePWR_DOWN = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - TXPWDFS
    eTXPWDFS TXPWDFS : 1;
    // read-write - TXPWDIBIAS
    eTXPWDIBIAS TXPWDIBIAS : 1;
    // read-write - TXPWDV2I
    eTXPWDV2I TXPWDV2I : 1;
    uint32_t _reserved_1 : 4;
    // read-write - RXPWDENV
    eRXPWDENV RXPWDENV : 1;
    // read-write - RXPWD1PT1
    eRXPWD1PT1 RXPWD1PT1 : 1;
    // read-write - RXPWDDIFF
    eRXPWDDIFF RXPWDDIFF : 1;
    // read-write - RXPWDRX
    eRXPWDRX RXPWDRX : 1;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PWD() = delete;
  inline void Reset() volatile { this->value = 0x001E1C00; }
  static inline volatile PWD &Instance() { return *reinterpret_cast<volatile PWD*>(0x40438000); }
};

// USB PHY Power-Down Register
union PWD_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - TXPWDFS
    uint32_t TXPWDFS : 1;
    // read-write - TXPWDIBIAS
    uint32_t TXPWDIBIAS : 1;
    // read-write - TXPWDV2I
    uint32_t TXPWDV2I : 1;
    uint32_t _reserved_1 : 4;
    // read-write - RXPWDENV
    uint32_t RXPWDENV : 1;
    // read-write - RXPWD1PT1
    uint32_t RXPWD1PT1 : 1;
    // read-write - RXPWDDIFF
    uint32_t RXPWDDIFF : 1;
    // read-write - RXPWDRX
    uint32_t RXPWDRX : 1;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PWD_SET() = delete;
  inline void Reset() volatile { this->value = 0x001E1C00; }
  static inline volatile PWD_SET &Instance() { return *reinterpret_cast<volatile PWD_SET*>(0x40438004); }
};

// USB PHY Power-Down Register
union PWD_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - TXPWDFS
    uint32_t TXPWDFS : 1;
    // read-write - TXPWDIBIAS
    uint32_t TXPWDIBIAS : 1;
    // read-write - TXPWDV2I
    uint32_t TXPWDV2I : 1;
    uint32_t _reserved_1 : 4;
    // read-write - RXPWDENV
    uint32_t RXPWDENV : 1;
    // read-write - RXPWD1PT1
    uint32_t RXPWD1PT1 : 1;
    // read-write - RXPWDDIFF
    uint32_t RXPWDDIFF : 1;
    // read-write - RXPWDRX
    uint32_t RXPWDRX : 1;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PWD_CLR() = delete;
  inline void Reset() volatile { this->value = 0x001E1C00; }
  static inline volatile PWD_CLR &Instance() { return *reinterpret_cast<volatile PWD_CLR*>(0x40438008); }
};

// USB PHY Power-Down Register
union PWD_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - TXPWDFS
    uint32_t TXPWDFS : 1;
    // read-write - TXPWDIBIAS
    uint32_t TXPWDIBIAS : 1;
    // read-write - TXPWDV2I
    uint32_t TXPWDV2I : 1;
    uint32_t _reserved_1 : 4;
    // read-write - RXPWDENV
    uint32_t RXPWDENV : 1;
    // read-write - RXPWD1PT1
    uint32_t RXPWD1PT1 : 1;
    // read-write - RXPWDDIFF
    uint32_t RXPWDDIFF : 1;
    // read-write - RXPWDRX
    uint32_t RXPWDRX : 1;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PWD_TOG() = delete;
  inline void Reset() volatile { this->value = 0x001E1C00; }
  static inline volatile PWD_TOG &Instance() { return *reinterpret_cast<volatile PWD_TOG*>(0x4043800C); }
};

// USB PHY Transmitter Control Register
union TX {
  
  // D_CAL
  enum class eD_CAL : uint32_t {
    // Maximum current, approximately 19% above nominal.
    eMAX = 0,
    // Nominal
    eNOMINAL = 7,
    // Minimum current, approximately 19% below nominal.
    eMIN = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - D_CAL
    eD_CAL D_CAL : 4;
    uint32_t _reserved_0 : 4;
    // read-write - TXCAL45DN
    uint32_t TXCAL45DN : 4;
    uint32_t _reserved_1 : 4;
    // read-write - TXCAL45DP
    uint32_t TXCAL45DP : 4;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX() = delete;
  inline void Reset() volatile { this->value = 0x10060607; }
  static inline volatile TX &Instance() { return *reinterpret_cast<volatile TX*>(0x40438010); }
};

// USB PHY Transmitter Control Register
union TX_SET {
  
  // Bit field definition.
  struct {
    // read-write - D_CAL
    uint32_t D_CAL : 4;
    uint32_t _reserved_0 : 4;
    // read-write - TXCAL45DN
    uint32_t TXCAL45DN : 4;
    uint32_t _reserved_1 : 4;
    // read-write - TXCAL45DP
    uint32_t TXCAL45DP : 4;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_SET() = delete;
  inline void Reset() volatile { this->value = 0x10060607; }
  static inline volatile TX_SET &Instance() { return *reinterpret_cast<volatile TX_SET*>(0x40438014); }
};

// USB PHY Transmitter Control Register
union TX_CLR {
  
  // Bit field definition.
  struct {
    // read-write - D_CAL
    uint32_t D_CAL : 4;
    uint32_t _reserved_0 : 4;
    // read-write - TXCAL45DN
    uint32_t TXCAL45DN : 4;
    uint32_t _reserved_1 : 4;
    // read-write - TXCAL45DP
    uint32_t TXCAL45DP : 4;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_CLR() = delete;
  inline void Reset() volatile { this->value = 0x10060607; }
  static inline volatile TX_CLR &Instance() { return *reinterpret_cast<volatile TX_CLR*>(0x40438018); }
};

// USB PHY Transmitter Control Register
union TX_TOG {
  
  // Bit field definition.
  struct {
    // read-write - D_CAL
    uint32_t D_CAL : 4;
    uint32_t _reserved_0 : 4;
    // read-write - TXCAL45DN
    uint32_t TXCAL45DN : 4;
    uint32_t _reserved_1 : 4;
    // read-write - TXCAL45DP
    uint32_t TXCAL45DP : 4;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_TOG() = delete;
  inline void Reset() volatile { this->value = 0x10060607; }
  static inline volatile TX_TOG &Instance() { return *reinterpret_cast<volatile TX_TOG*>(0x4043801C); }
};

// USB PHY Receiver Control Register
union RX {
  
  // ENVADJ
  enum class eENVADJ : uint32_t {
    // Trip-Level Voltage is 0.1000 V
    eLVL_P1 = 0,
    // Trip-Level Voltage is 0.1125 V
    eLVL_P1125 = 1,
    // Trip-Level Voltage is 0.1250 V
    eLVL_P1250 = 2,
    // Trip-Level Voltage is 0.0875 V
    eLVL_P0875 = 3,
  };
  
  // DISCONADJ
  enum class eDISCONADJ : uint32_t {
    // Trip-Level Voltage is 0.56875 V
    eLVL_P56875 = 0,
    // Trip-Level Voltage is 0.55000 V
    eLVL_P55 = 1,
    // Trip-Level Voltage is 0.58125 V
    eLVL_P58125 = 2,
    // Trip-Level Voltage is 0.60000 V
    eLVL_P6 = 3,
  };
  
  // RXDBYPASS
  enum class eRXDBYPASS : uint32_t {
    // Normal operation.
    eNORMAL = 0,
    // Use the output of the USB_DP single-ended receiver in place of the full-speed differential receiver
    eOUT_SINGLE_END = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ENVADJ
    eENVADJ ENVADJ : 3;
    uint32_t _reserved_0 : 1;
    // read-write - DISCONADJ
    eDISCONADJ DISCONADJ : 3;
    uint32_t _reserved_1 : 15;
    // read-write - RXDBYPASS
    eRXDBYPASS RXDBYPASS : 1;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX &Instance() { return *reinterpret_cast<volatile RX*>(0x40438020); }
};

// USB PHY Receiver Control Register
union RX_SET {
  
  // Bit field definition.
  struct {
    // read-write - ENVADJ
    uint32_t ENVADJ : 3;
    uint32_t _reserved_0 : 1;
    // read-write - DISCONADJ
    uint32_t DISCONADJ : 3;
    uint32_t _reserved_1 : 15;
    // read-write - RXDBYPASS
    uint32_t RXDBYPASS : 1;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_SET &Instance() { return *reinterpret_cast<volatile RX_SET*>(0x40438024); }
};

// USB PHY Receiver Control Register
union RX_CLR {
  
  // Bit field definition.
  struct {
    // read-write - ENVADJ
    uint32_t ENVADJ : 3;
    uint32_t _reserved_0 : 1;
    // read-write - DISCONADJ
    uint32_t DISCONADJ : 3;
    uint32_t _reserved_1 : 15;
    // read-write - RXDBYPASS
    uint32_t RXDBYPASS : 1;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_CLR &Instance() { return *reinterpret_cast<volatile RX_CLR*>(0x40438028); }
};

// USB PHY Receiver Control Register
union RX_TOG {
  
  // Bit field definition.
  struct {
    // read-write - ENVADJ
    uint32_t ENVADJ : 3;
    uint32_t _reserved_0 : 1;
    // read-write - DISCONADJ
    uint32_t DISCONADJ : 3;
    uint32_t _reserved_1 : 15;
    // read-write - RXDBYPASS
    uint32_t RXDBYPASS : 1;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_TOG &Instance() { return *reinterpret_cast<volatile RX_TOG*>(0x4043802C); }
};

// USB PHY General Control Register
union CTRL {
  
  // Enables non-standard resistive plugged-in detection
  enum class eENDEVPLUGINDETECT : uint32_t {
    // Disables 200kohm pullup resistors on DP and DN pins
    eDISABLE = 0,
    // Enables 200kohm pullup resistors on DP and DN pins
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ENOTG_ID_CHG_IRQ
    uint32_t ENOTG_ID_CHG_IRQ : 1;
    // read-write - ENHOSTDISCONDETECT
    uint32_t ENHOSTDISCONDETECT : 1;
    // read-write - ENIRQHOSTDISCON
    uint32_t ENIRQHOSTDISCON : 1;
    // read-write - HOSTDISCONDETECT_IRQ
    uint32_t HOSTDISCONDETECT_IRQ : 1;
    // read-write - Enables non-standard resistive plugged-in detection
    eENDEVPLUGINDETECT ENDEVPLUGINDETECT : 1;
    // read-write - DEVPLUGIN_POLARITY
    uint32_t DEVPLUGIN_POLARITY : 1;
    // read-write - OTG_ID_CHG_IRQ
    uint32_t OTG_ID_CHG_IRQ : 1;
    // read-write - ENOTGIDDETECT
    uint32_t ENOTGIDDETECT : 1;
    // read-write - RESUMEIRQSTICKY
    uint32_t RESUMEIRQSTICKY : 1;
    // read-write - ENIRQRESUMEDETECT
    uint32_t ENIRQRESUMEDETECT : 1;
    // read-write - RESUME_IRQ
    uint32_t RESUME_IRQ : 1;
    // read-write - ENIRQDEVPLUGIN
    uint32_t ENIRQDEVPLUGIN : 1;
    // read-write - DEVPLUGIN_IRQ
    uint32_t DEVPLUGIN_IRQ : 1;
    uint32_t _reserved_0 : 1;
    // read-write - ENUTMILEVEL2
    uint32_t ENUTMILEVEL2 : 1;
    // read-write - ENUTMILEVEL3
    uint32_t ENUTMILEVEL3 : 1;
    // read-write - ENIRQWAKEUP
    uint32_t ENIRQWAKEUP : 1;
    // read-write - WAKEUP_IRQ
    uint32_t WAKEUP_IRQ : 1;
    // read-write - AUTORESUME_EN
    uint32_t AUTORESUME_EN : 1;
    // read-write - ENAUTOCLR_CLKGATE
    uint32_t ENAUTOCLR_CLKGATE : 1;
    // read-write - ENAUTOCLR_PHY_PWD
    uint32_t ENAUTOCLR_PHY_PWD : 1;
    // read-write - ENDPDMCHG_WKUP
    uint32_t ENDPDMCHG_WKUP : 1;
    // read-write - ENIDCHG_WKUP
    uint32_t ENIDCHG_WKUP : 1;
    // read-write - ENVBUSCHG_WKUP
    uint32_t ENVBUSCHG_WKUP : 1;
    // read-write - FSDLL_RST_EN
    uint32_t FSDLL_RST_EN : 1;
    uint32_t _reserved_1 : 2;
    // read-only - OTG_ID_VALUE
    uint32_t OTG_ID_VALUE : 1;
    // read-write - HOST_FORCE_LS_SE0
    uint32_t HOST_FORCE_LS_SE0 : 1;
    // read-only - UTMI_SUSPENDM
    uint32_t UTMI_SUSPENDM : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    // read-write - SFTRST
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x88000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40438030); }
};

// USB PHY General Control Register
union CTRL_SET {
  
  // Bit field definition.
  struct {
    // read-write - ENOTG_ID_CHG_IRQ
    uint32_t ENOTG_ID_CHG_IRQ : 1;
    // read-write - ENHOSTDISCONDETECT
    uint32_t ENHOSTDISCONDETECT : 1;
    // read-write - ENIRQHOSTDISCON
    uint32_t ENIRQHOSTDISCON : 1;
    // read-write - HOSTDISCONDETECT_IRQ
    uint32_t HOSTDISCONDETECT_IRQ : 1;
    // read-write - Enables non-standard resistive plugged-in detection
    uint32_t ENDEVPLUGINDETECT : 1;
    // read-write - DEVPLUGIN_POLARITY
    uint32_t DEVPLUGIN_POLARITY : 1;
    // read-write - OTG_ID_CHG_IRQ
    uint32_t OTG_ID_CHG_IRQ : 1;
    // read-write - ENOTGIDDETECT
    uint32_t ENOTGIDDETECT : 1;
    // read-write - RESUMEIRQSTICKY
    uint32_t RESUMEIRQSTICKY : 1;
    // read-write - ENIRQRESUMEDETECT
    uint32_t ENIRQRESUMEDETECT : 1;
    // read-write - RESUME_IRQ
    uint32_t RESUME_IRQ : 1;
    // read-write - ENIRQDEVPLUGIN
    uint32_t ENIRQDEVPLUGIN : 1;
    // read-write - DEVPLUGIN_IRQ
    uint32_t DEVPLUGIN_IRQ : 1;
    uint32_t _reserved_0 : 1;
    // read-write - ENUTMILEVEL2
    uint32_t ENUTMILEVEL2 : 1;
    // read-write - ENUTMILEVEL3
    uint32_t ENUTMILEVEL3 : 1;
    // read-write - ENIRQWAKEUP
    uint32_t ENIRQWAKEUP : 1;
    // read-write - WAKEUP_IRQ
    uint32_t WAKEUP_IRQ : 1;
    // read-write - AUTORESUME_EN
    uint32_t AUTORESUME_EN : 1;
    // read-write - ENAUTOCLR_CLKGATE
    uint32_t ENAUTOCLR_CLKGATE : 1;
    // read-write - ENAUTOCLR_PHY_PWD
    uint32_t ENAUTOCLR_PHY_PWD : 1;
    // read-write - ENDPDMCHG_WKUP
    uint32_t ENDPDMCHG_WKUP : 1;
    // read-write - ENIDCHG_WKUP
    uint32_t ENIDCHG_WKUP : 1;
    // read-write - ENVBUSCHG_WKUP
    uint32_t ENVBUSCHG_WKUP : 1;
    // read-write - FSDLL_RST_EN
    uint32_t FSDLL_RST_EN : 1;
    uint32_t _reserved_1 : 2;
    // read-only - OTG_ID_VALUE
    uint32_t OTG_ID_VALUE : 1;
    // read-write - HOST_FORCE_LS_SE0
    uint32_t HOST_FORCE_LS_SE0 : 1;
    // read-only - UTMI_SUSPENDM
    uint32_t UTMI_SUSPENDM : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    // read-write - SFTRST
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x88000000; }
  static inline volatile CTRL_SET &Instance() { return *reinterpret_cast<volatile CTRL_SET*>(0x40438034); }
};

// USB PHY General Control Register
union CTRL_CLR {
  
  // Bit field definition.
  struct {
    // read-write - ENOTG_ID_CHG_IRQ
    uint32_t ENOTG_ID_CHG_IRQ : 1;
    // read-write - ENHOSTDISCONDETECT
    uint32_t ENHOSTDISCONDETECT : 1;
    // read-write - ENIRQHOSTDISCON
    uint32_t ENIRQHOSTDISCON : 1;
    // read-write - HOSTDISCONDETECT_IRQ
    uint32_t HOSTDISCONDETECT_IRQ : 1;
    // read-write - Enables non-standard resistive plugged-in detection
    uint32_t ENDEVPLUGINDETECT : 1;
    // read-write - DEVPLUGIN_POLARITY
    uint32_t DEVPLUGIN_POLARITY : 1;
    // read-write - OTG_ID_CHG_IRQ
    uint32_t OTG_ID_CHG_IRQ : 1;
    // read-write - ENOTGIDDETECT
    uint32_t ENOTGIDDETECT : 1;
    // read-write - RESUMEIRQSTICKY
    uint32_t RESUMEIRQSTICKY : 1;
    // read-write - ENIRQRESUMEDETECT
    uint32_t ENIRQRESUMEDETECT : 1;
    // read-write - RESUME_IRQ
    uint32_t RESUME_IRQ : 1;
    // read-write - ENIRQDEVPLUGIN
    uint32_t ENIRQDEVPLUGIN : 1;
    // read-write - DEVPLUGIN_IRQ
    uint32_t DEVPLUGIN_IRQ : 1;
    uint32_t _reserved_0 : 1;
    // read-write - ENUTMILEVEL2
    uint32_t ENUTMILEVEL2 : 1;
    // read-write - ENUTMILEVEL3
    uint32_t ENUTMILEVEL3 : 1;
    // read-write - ENIRQWAKEUP
    uint32_t ENIRQWAKEUP : 1;
    // read-write - WAKEUP_IRQ
    uint32_t WAKEUP_IRQ : 1;
    // read-write - AUTORESUME_EN
    uint32_t AUTORESUME_EN : 1;
    // read-write - ENAUTOCLR_CLKGATE
    uint32_t ENAUTOCLR_CLKGATE : 1;
    // read-write - ENAUTOCLR_PHY_PWD
    uint32_t ENAUTOCLR_PHY_PWD : 1;
    // read-write - ENDPDMCHG_WKUP
    uint32_t ENDPDMCHG_WKUP : 1;
    // read-write - ENIDCHG_WKUP
    uint32_t ENIDCHG_WKUP : 1;
    // read-write - ENVBUSCHG_WKUP
    uint32_t ENVBUSCHG_WKUP : 1;
    // read-write - FSDLL_RST_EN
    uint32_t FSDLL_RST_EN : 1;
    uint32_t _reserved_1 : 2;
    // read-only - OTG_ID_VALUE
    uint32_t OTG_ID_VALUE : 1;
    // read-write - HOST_FORCE_LS_SE0
    uint32_t HOST_FORCE_LS_SE0 : 1;
    // read-only - UTMI_SUSPENDM
    uint32_t UTMI_SUSPENDM : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    // read-write - SFTRST
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x88000000; }
  static inline volatile CTRL_CLR &Instance() { return *reinterpret_cast<volatile CTRL_CLR*>(0x40438038); }
};

// USB PHY General Control Register
union CTRL_TOG {
  
  // Bit field definition.
  struct {
    // read-write - ENOTG_ID_CHG_IRQ
    uint32_t ENOTG_ID_CHG_IRQ : 1;
    // read-write - ENHOSTDISCONDETECT
    uint32_t ENHOSTDISCONDETECT : 1;
    // read-write - ENIRQHOSTDISCON
    uint32_t ENIRQHOSTDISCON : 1;
    // read-write - HOSTDISCONDETECT_IRQ
    uint32_t HOSTDISCONDETECT_IRQ : 1;
    // read-write - Enables non-standard resistive plugged-in detection
    uint32_t ENDEVPLUGINDETECT : 1;
    // read-write - DEVPLUGIN_POLARITY
    uint32_t DEVPLUGIN_POLARITY : 1;
    // read-write - OTG_ID_CHG_IRQ
    uint32_t OTG_ID_CHG_IRQ : 1;
    // read-write - ENOTGIDDETECT
    uint32_t ENOTGIDDETECT : 1;
    // read-write - RESUMEIRQSTICKY
    uint32_t RESUMEIRQSTICKY : 1;
    // read-write - ENIRQRESUMEDETECT
    uint32_t ENIRQRESUMEDETECT : 1;
    // read-write - RESUME_IRQ
    uint32_t RESUME_IRQ : 1;
    // read-write - ENIRQDEVPLUGIN
    uint32_t ENIRQDEVPLUGIN : 1;
    // read-write - DEVPLUGIN_IRQ
    uint32_t DEVPLUGIN_IRQ : 1;
    uint32_t _reserved_0 : 1;
    // read-write - ENUTMILEVEL2
    uint32_t ENUTMILEVEL2 : 1;
    // read-write - ENUTMILEVEL3
    uint32_t ENUTMILEVEL3 : 1;
    // read-write - ENIRQWAKEUP
    uint32_t ENIRQWAKEUP : 1;
    // read-write - WAKEUP_IRQ
    uint32_t WAKEUP_IRQ : 1;
    // read-write - AUTORESUME_EN
    uint32_t AUTORESUME_EN : 1;
    // read-write - ENAUTOCLR_CLKGATE
    uint32_t ENAUTOCLR_CLKGATE : 1;
    // read-write - ENAUTOCLR_PHY_PWD
    uint32_t ENAUTOCLR_PHY_PWD : 1;
    // read-write - ENDPDMCHG_WKUP
    uint32_t ENDPDMCHG_WKUP : 1;
    // read-write - ENIDCHG_WKUP
    uint32_t ENIDCHG_WKUP : 1;
    // read-write - ENVBUSCHG_WKUP
    uint32_t ENVBUSCHG_WKUP : 1;
    // read-write - FSDLL_RST_EN
    uint32_t FSDLL_RST_EN : 1;
    uint32_t _reserved_1 : 2;
    // read-only - OTG_ID_VALUE
    uint32_t OTG_ID_VALUE : 1;
    // read-write - HOST_FORCE_LS_SE0
    uint32_t HOST_FORCE_LS_SE0 : 1;
    // read-only - UTMI_SUSPENDM
    uint32_t UTMI_SUSPENDM : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    // read-write - SFTRST
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x88000000; }
  static inline volatile CTRL_TOG &Instance() { return *reinterpret_cast<volatile CTRL_TOG*>(0x4043803C); }
};

// USB PHY Status Register
union STATUS {
  
  // HOSTDISCONDETECT_STATUS
  enum class eHOSTDISCONDETECT_STATUS : uint32_t {
    // USB cable disconnect has not been detected at the local host
    eNOT_DET = 0,
    // USB cable disconnect has been detected at the local host
    eDET = 1,
  };
  
  // Status indicator for non-standard resistive plugged-in detection
  enum class eDEVPLUGIN_STATUS : uint32_t {
    // No attachment to a USB host is detected
    eNO_ATTACH = 0,
    // Cable attachment to a USB host is detected
    eATTACH = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-only - HOSTDISCONDETECT_STATUS
    eHOSTDISCONDETECT_STATUS HOSTDISCONDETECT_STATUS : 1;
    uint32_t _reserved_1 : 2;
    // read-only - Status indicator for non-standard resistive plugged-in detection
    eDEVPLUGIN_STATUS DEVPLUGIN_STATUS : 1;
    uint32_t _reserved_2 : 1;
    // read-write - OTGID_STATUS
    uint32_t OTGID_STATUS : 1;
    uint32_t _reserved_3 : 1;
    // read-only - RESUME_STATUS
    uint32_t RESUME_STATUS : 1;
    uint32_t _reserved_4 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STATUS &Instance() { return *reinterpret_cast<volatile STATUS*>(0x40438040); }
};

// USB PHY Debug Register
union DEBUG {
  
  // Bit field definition.
  struct {
    // read-write - OTGIDPIOLOCK
    uint32_t OTGIDPIOLOCK : 1;
    // read-write - DEBUG_INTERFACE_HOLD
    uint32_t DEBUG_INTERFACE_HOLD : 1;
    // read-write - HSTPULLDOWN
    uint32_t HSTPULLDOWN : 2;
    // read-write - ENHSTPULLDOWN
    uint32_t ENHSTPULLDOWN : 2;
    uint32_t _reserved_0 : 2;
    // read-write - TX2RXCOUNT
    uint32_t TX2RXCOUNT : 4;
    // read-write - ENTX2RXCOUNT
    uint32_t ENTX2RXCOUNT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - SQUELCHRESETCOUNT
    uint32_t SQUELCHRESETCOUNT : 5;
    uint32_t _reserved_2 : 3;
    // read-write - ENSQUELCHRESET
    uint32_t ENSQUELCHRESET : 1;
    // read-write - SQUELCHRESETLENGTH
    uint32_t SQUELCHRESETLENGTH : 4;
    // read-write - HOST_RESUME_DEBUG
    uint32_t HOST_RESUME_DEBUG : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x7F180000; }
  static inline volatile DEBUG &Instance() { return *reinterpret_cast<volatile DEBUG*>(0x40438050); }
};

// USB PHY Debug Register
union DEBUG_SET {
  
  // Bit field definition.
  struct {
    // read-write - OTGIDPIOLOCK
    uint32_t OTGIDPIOLOCK : 1;
    // read-write - DEBUG_INTERFACE_HOLD
    uint32_t DEBUG_INTERFACE_HOLD : 1;
    // read-write - HSTPULLDOWN
    uint32_t HSTPULLDOWN : 2;
    // read-write - ENHSTPULLDOWN
    uint32_t ENHSTPULLDOWN : 2;
    uint32_t _reserved_0 : 2;
    // read-write - TX2RXCOUNT
    uint32_t TX2RXCOUNT : 4;
    // read-write - ENTX2RXCOUNT
    uint32_t ENTX2RXCOUNT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - SQUELCHRESETCOUNT
    uint32_t SQUELCHRESETCOUNT : 5;
    uint32_t _reserved_2 : 3;
    // read-write - ENSQUELCHRESET
    uint32_t ENSQUELCHRESET : 1;
    // read-write - SQUELCHRESETLENGTH
    uint32_t SQUELCHRESETLENGTH : 4;
    // read-write - HOST_RESUME_DEBUG
    uint32_t HOST_RESUME_DEBUG : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG_SET() = delete;
  inline void Reset() volatile { this->value = 0x7F180000; }
  static inline volatile DEBUG_SET &Instance() { return *reinterpret_cast<volatile DEBUG_SET*>(0x40438054); }
};

// USB PHY Debug Register
union DEBUG_CLR {
  
  // Bit field definition.
  struct {
    // read-write - OTGIDPIOLOCK
    uint32_t OTGIDPIOLOCK : 1;
    // read-write - DEBUG_INTERFACE_HOLD
    uint32_t DEBUG_INTERFACE_HOLD : 1;
    // read-write - HSTPULLDOWN
    uint32_t HSTPULLDOWN : 2;
    // read-write - ENHSTPULLDOWN
    uint32_t ENHSTPULLDOWN : 2;
    uint32_t _reserved_0 : 2;
    // read-write - TX2RXCOUNT
    uint32_t TX2RXCOUNT : 4;
    // read-write - ENTX2RXCOUNT
    uint32_t ENTX2RXCOUNT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - SQUELCHRESETCOUNT
    uint32_t SQUELCHRESETCOUNT : 5;
    uint32_t _reserved_2 : 3;
    // read-write - ENSQUELCHRESET
    uint32_t ENSQUELCHRESET : 1;
    // read-write - SQUELCHRESETLENGTH
    uint32_t SQUELCHRESETLENGTH : 4;
    // read-write - HOST_RESUME_DEBUG
    uint32_t HOST_RESUME_DEBUG : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG_CLR() = delete;
  inline void Reset() volatile { this->value = 0x7F180000; }
  static inline volatile DEBUG_CLR &Instance() { return *reinterpret_cast<volatile DEBUG_CLR*>(0x40438058); }
};

// USB PHY Debug Register
union DEBUG_TOG {
  
  // Bit field definition.
  struct {
    // read-write - OTGIDPIOLOCK
    uint32_t OTGIDPIOLOCK : 1;
    // read-write - DEBUG_INTERFACE_HOLD
    uint32_t DEBUG_INTERFACE_HOLD : 1;
    // read-write - HSTPULLDOWN
    uint32_t HSTPULLDOWN : 2;
    // read-write - ENHSTPULLDOWN
    uint32_t ENHSTPULLDOWN : 2;
    uint32_t _reserved_0 : 2;
    // read-write - TX2RXCOUNT
    uint32_t TX2RXCOUNT : 4;
    // read-write - ENTX2RXCOUNT
    uint32_t ENTX2RXCOUNT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - SQUELCHRESETCOUNT
    uint32_t SQUELCHRESETCOUNT : 5;
    uint32_t _reserved_2 : 3;
    // read-write - ENSQUELCHRESET
    uint32_t ENSQUELCHRESET : 1;
    // read-write - SQUELCHRESETLENGTH
    uint32_t SQUELCHRESETLENGTH : 4;
    // read-write - HOST_RESUME_DEBUG
    uint32_t HOST_RESUME_DEBUG : 1;
    // read-write - CLKGATE
    uint32_t CLKGATE : 1;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG_TOG() = delete;
  inline void Reset() volatile { this->value = 0x7F180000; }
  static inline volatile DEBUG_TOG &Instance() { return *reinterpret_cast<volatile DEBUG_TOG*>(0x4043805C); }
};

// UTMI Debug Status Register 0
union DEBUG0_STATUS {
  
  // Bit field definition.
  struct {
    // read-only - LOOP_BACK_FAIL_COUNT
    uint32_t LOOP_BACK_FAIL_COUNT : 16;
    // read-only - UTMI_RXERROR_FAIL_COUNT
    uint32_t UTMI_RXERROR_FAIL_COUNT : 10;
    // read-only - SQUELCH_COUNT
    uint32_t SQUELCH_COUNT : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG0_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DEBUG0_STATUS &Instance() { return *reinterpret_cast<volatile DEBUG0_STATUS*>(0x40438060); }
};

// UTMI Debug Status Register 1
union DEBUG1 {
  
  // ENTAILADJVD
  enum class eENTAILADJVD : uint32_t {
    // Delay is nominal
    eNOM_DELAY = 0,
    // Delay is +20%
    eDELAY_20_P = 1,
    // Delay is -20%
    eDELAY_20_N = 2,
    // Delay is -40%
    eDELAY_40_N = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    // read-write - ENTAILADJVD
    eENTAILADJVD ENTAILADJVD : 2;
    // read-write - Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
    uint32_t USB2_REFBIAS_SELFBIASOFF : 1;
    // read-write - Powers down the bandgap detect logic, will affect vbgup on misc1 register.
    uint32_t USB2_REFBIAS_PWDVBGUP : 1;
    // read-write - to be added
    uint32_t USB2_REFBIAS_LOWPWR : 1;
    // read-write - Adjustment bits on bandgap
    uint32_t USB2_REFBIAS_VBGADJ : 3;
    // read-write - Bias current control for usb2_phy
    uint32_t USB2_REFBIAS_TST : 2;
    uint32_t _reserved_1 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG1() = delete;
  inline void Reset() volatile { this->value = 0x00001000; }
  static inline volatile DEBUG1 &Instance() { return *reinterpret_cast<volatile DEBUG1*>(0x40438070); }
};

// UTMI Debug Status Register 1
union DEBUG1_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    // read-write - ENTAILADJVD
    uint32_t ENTAILADJVD : 2;
    // read-write - Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
    uint32_t USB2_REFBIAS_SELFBIASOFF : 1;
    // read-write - Powers down the bandgap detect logic, will affect vbgup on misc1 register.
    uint32_t USB2_REFBIAS_PWDVBGUP : 1;
    // read-write - to be added
    uint32_t USB2_REFBIAS_LOWPWR : 1;
    // read-write - Adjustment bits on bandgap
    uint32_t USB2_REFBIAS_VBGADJ : 3;
    // read-write - Bias current control for usb2_phy
    uint32_t USB2_REFBIAS_TST : 2;
    uint32_t _reserved_1 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG1_SET() = delete;
  inline void Reset() volatile { this->value = 0x00001000; }
  static inline volatile DEBUG1_SET &Instance() { return *reinterpret_cast<volatile DEBUG1_SET*>(0x40438074); }
};

// UTMI Debug Status Register 1
union DEBUG1_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    // read-write - ENTAILADJVD
    uint32_t ENTAILADJVD : 2;
    // read-write - Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
    uint32_t USB2_REFBIAS_SELFBIASOFF : 1;
    // read-write - Powers down the bandgap detect logic, will affect vbgup on misc1 register.
    uint32_t USB2_REFBIAS_PWDVBGUP : 1;
    // read-write - to be added
    uint32_t USB2_REFBIAS_LOWPWR : 1;
    // read-write - Adjustment bits on bandgap
    uint32_t USB2_REFBIAS_VBGADJ : 3;
    // read-write - Bias current control for usb2_phy
    uint32_t USB2_REFBIAS_TST : 2;
    uint32_t _reserved_1 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG1_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00001000; }
  static inline volatile DEBUG1_CLR &Instance() { return *reinterpret_cast<volatile DEBUG1_CLR*>(0x40438078); }
};

// UTMI Debug Status Register 1
union DEBUG1_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    // read-write - ENTAILADJVD
    uint32_t ENTAILADJVD : 2;
    // read-write - Set to 1 to disable self bias, 100 us after power up refbias(usb2_refbias_pwd).This can reduce noise on power.
    uint32_t USB2_REFBIAS_SELFBIASOFF : 1;
    // read-write - Powers down the bandgap detect logic, will affect vbgup on misc1 register.
    uint32_t USB2_REFBIAS_PWDVBGUP : 1;
    // read-write - to be added
    uint32_t USB2_REFBIAS_LOWPWR : 1;
    // read-write - Adjustment bits on bandgap
    uint32_t USB2_REFBIAS_VBGADJ : 3;
    // read-write - Bias current control for usb2_phy
    uint32_t USB2_REFBIAS_TST : 2;
    uint32_t _reserved_1 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DEBUG1_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00001000; }
  static inline volatile DEBUG1_TOG &Instance() { return *reinterpret_cast<volatile DEBUG1_TOG*>(0x4043807C); }
};

// UTMI RTL Version
union VERSION {
  
  // Bit field definition.
  struct {
    // read-only - STEP
    uint32_t STEP : 16;
    // read-only - MINOR
    uint32_t MINOR : 8;
    // read-only - MAJOR
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERSION() = delete;
  inline void Reset() volatile { this->value = 0x04030000; }
  static inline volatile VERSION &Instance() { return *reinterpret_cast<volatile VERSION*>(0x40438080); }
};

// USB PHY PLL Control/Status Register
union PLL_SIC {
  
  // REFBIAS_PWD_SEL
  enum class eREFBIAS_PWD_SEL : uint32_t {
    // Selects PLL_POWER to control the reference bias
    ePLL_PWR = 0,
    // Selects REFBIAS_PWD to control the reference bias.
    eREFBIAS_PWD = 1,
  };
  
  // PLL_DIV_SEL
  enum class ePLL_DIV_SEL : uint32_t {
    // Divide by 13
    eDIV_BY_13 = 0,
    // Divide by 15
    eDIV_BY_15 = 1,
    // Divide by 16
    eDIV_BY_16 = 2,
    // Divide by 20
    eDIV_BY_20 = 3,
    // Divide by 22
    eDIV_BY_22 = 4,
    // Divide by 25
    eDIV_BY_25 = 5,
    // Divide by 30
    eDIV_BY_30 = 6,
    // Divide by 240
    eDIV_BY_240 = 7,
  };
  
  // PLL_LOCK
  enum class ePLL_LOCK : uint32_t {
    // PLL is not currently locked
    eNOT_LOCKED = 0,
    // PLL is currently locked
    eLOCKED = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PLL_POSTDIV
    uint32_t PLL_POSTDIV : 3;
    uint32_t _reserved_1 : 1;
    // read-write - PLL_EN_USB_CLKS
    uint32_t PLL_EN_USB_CLKS : 1;
    uint32_t _reserved_2 : 5;
    // read-write - PLL_POWER
    uint32_t PLL_POWER : 1;
    // read-write - PLL_ENABLE
    uint32_t PLL_ENABLE : 1;
    uint32_t _reserved_3 : 2;
    // read-write - PLL_BYPASS
    uint32_t PLL_BYPASS : 1;
    uint32_t _reserved_4 : 2;
    // read-write - REFBIAS_PWD_SEL
    eREFBIAS_PWD_SEL REFBIAS_PWD_SEL : 1;
    // read-write - Power down the reference bias
    uint32_t REFBIAS_PWD : 1;
    // read-write - PLL_REG_ENABLE
    uint32_t PLL_REG_ENABLE : 1;
    // read-write - PLL_DIV_SEL
    ePLL_DIV_SEL PLL_DIV_SEL : 3;
    uint32_t _reserved_5 : 6;
    // read-only - PLL_LOCK
    ePLL_LOCK PLL_LOCK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_SIC() = delete;
  inline void Reset() volatile { this->value = 0x00D12000; }
  static inline volatile PLL_SIC &Instance() { return *reinterpret_cast<volatile PLL_SIC*>(0x404380A0); }
};

// USB PHY PLL Control/Status Register
union PLL_SIC_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PLL_POSTDIV
    uint32_t PLL_POSTDIV : 3;
    uint32_t _reserved_1 : 1;
    // read-write - PLL_EN_USB_CLKS
    uint32_t PLL_EN_USB_CLKS : 1;
    uint32_t _reserved_2 : 5;
    // read-write - PLL_POWER
    uint32_t PLL_POWER : 1;
    // read-write - PLL_ENABLE
    uint32_t PLL_ENABLE : 1;
    uint32_t _reserved_3 : 2;
    // read-write - PLL_BYPASS
    uint32_t PLL_BYPASS : 1;
    uint32_t _reserved_4 : 2;
    // read-write - REFBIAS_PWD_SEL
    uint32_t REFBIAS_PWD_SEL : 1;
    // read-write - Power down the reference bias
    uint32_t REFBIAS_PWD : 1;
    // read-write - PLL_REG_ENABLE
    uint32_t PLL_REG_ENABLE : 1;
    // read-write - PLL_DIV_SEL
    uint32_t PLL_DIV_SEL : 3;
    uint32_t _reserved_5 : 6;
    // read-only - PLL_LOCK
    uint32_t PLL_LOCK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_SIC_SET() = delete;
  inline void Reset() volatile { this->value = 0x00D12000; }
  static inline volatile PLL_SIC_SET &Instance() { return *reinterpret_cast<volatile PLL_SIC_SET*>(0x404380A4); }
};

// USB PHY PLL Control/Status Register
union PLL_SIC_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PLL_POSTDIV
    uint32_t PLL_POSTDIV : 3;
    uint32_t _reserved_1 : 1;
    // read-write - PLL_EN_USB_CLKS
    uint32_t PLL_EN_USB_CLKS : 1;
    uint32_t _reserved_2 : 5;
    // read-write - PLL_POWER
    uint32_t PLL_POWER : 1;
    // read-write - PLL_ENABLE
    uint32_t PLL_ENABLE : 1;
    uint32_t _reserved_3 : 2;
    // read-write - PLL_BYPASS
    uint32_t PLL_BYPASS : 1;
    uint32_t _reserved_4 : 2;
    // read-write - REFBIAS_PWD_SEL
    uint32_t REFBIAS_PWD_SEL : 1;
    // read-write - Power down the reference bias
    uint32_t REFBIAS_PWD : 1;
    // read-write - PLL_REG_ENABLE
    uint32_t PLL_REG_ENABLE : 1;
    // read-write - PLL_DIV_SEL
    uint32_t PLL_DIV_SEL : 3;
    uint32_t _reserved_5 : 6;
    // read-only - PLL_LOCK
    uint32_t PLL_LOCK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_SIC_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00D12000; }
  static inline volatile PLL_SIC_CLR &Instance() { return *reinterpret_cast<volatile PLL_SIC_CLR*>(0x404380A8); }
};

// USB PHY PLL Control/Status Register
union PLL_SIC_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PLL_POSTDIV
    uint32_t PLL_POSTDIV : 3;
    uint32_t _reserved_1 : 1;
    // read-write - PLL_EN_USB_CLKS
    uint32_t PLL_EN_USB_CLKS : 1;
    uint32_t _reserved_2 : 5;
    // read-write - PLL_POWER
    uint32_t PLL_POWER : 1;
    // read-write - PLL_ENABLE
    uint32_t PLL_ENABLE : 1;
    uint32_t _reserved_3 : 2;
    // read-write - PLL_BYPASS
    uint32_t PLL_BYPASS : 1;
    uint32_t _reserved_4 : 2;
    // read-write - REFBIAS_PWD_SEL
    uint32_t REFBIAS_PWD_SEL : 1;
    // read-write - Power down the reference bias
    uint32_t REFBIAS_PWD : 1;
    // read-write - PLL_REG_ENABLE
    uint32_t PLL_REG_ENABLE : 1;
    // read-write - PLL_DIV_SEL
    uint32_t PLL_DIV_SEL : 3;
    uint32_t _reserved_5 : 6;
    // read-only - PLL_LOCK
    uint32_t PLL_LOCK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_SIC_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00D12000; }
  static inline volatile PLL_SIC_TOG &Instance() { return *reinterpret_cast<volatile PLL_SIC_TOG*>(0x404380AC); }
};

// USB PHY VBUS Detect Control Register
union USB1_VBUS_DETECT {
  
  // VBUSVALID_THRESH
  enum class eVBUSVALID_THRESH : uint32_t {
    // 4.0 V
    eVOLT_4 = 0,
    // 4.1 V
    eVOLT_4P1 = 1,
    // 4.2 V
    eVOLT_4P2 = 2,
    // 4.3 V
    eVOLT_4P3 = 3,
    // 4.4 V (Default)
    eVOLT_4P4 = 4,
    // 4.5 V
    eVOLT_4P5 = 5,
    // 4.6 V
    eVOLT_4P6 = 6,
    // 4.7 V
    eVOLT_4P7 = 7,
  };
  
  // VBUS detect signal override enable
  enum class eVBUS_OVERRIDE_EN : uint32_t {
    // Use the results of the internal VBUS_VALID and Session Valid comparators for VBUS_VALID, AVALID, BVALID, and SESSEND (Default)
    eINTERNAL = 0,
    // Use the override values for VBUS_VALID, AVALID, BVALID, and SESSEND
    eOVERRIDE = 1,
  };
  
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  enum class eVBUSVALID_SEL : uint32_t {
    // Use the VBUS_VALID comparator results for signal reported to the USB controller (Default)
    eCOMP = 0,
    // Use the VBUS_VALID_3V detector results for signal reported to the USB controller
    eDET_3V = 1,
  };
  
  // Selects the source of the VBUS_VALID signal reported to the USB controller
  enum class eVBUS_SOURCE_SEL : uint32_t {
    // Use the VBUS_VALID comparator results for signal reported to the USB controller (Default)
    eVBUS_VALID_COMP = 0,
    // Use the Session Valid comparator results for signal reported to the USB controller
    eSESSION_VALID_COMP = 1,
    // Use the Session Valid comparator results for signal reported to the USB controller
    eSESSION_VALID_COMP_1 = 2,
  };
  
  // Selects the comparator used for VBUS_VALID
  enum class eVBUSVALID_TO_SESSVALID : uint32_t {
    // Use the VBUS_VALID comparator for VBUS_VALID results
    eVBUS_VALID = 0,
    // Use the Session End comparator for VBUS_VALID results. The Session End threshold is >0.8V and <4.0V.
    eSESSION_VALID = 1,
  };
  
  // Enables the VBUS_VALID comparator
  enum class ePWRUP_CMPS : uint32_t {
    // Powers down the VBUS_VALID comparator
    eDISABLE = 0,
    // Enables the SESS_VALID comparator (default)
    eENABLE = 1,
    // Enables the 3Vdetect (default)
    eVDETECT = 2,
  };
  
  // Controls VBUS discharge resistor
  enum class eDISCHARGE_VBUS : uint32_t {
    // VBUS discharge resistor is disabled (Default)
    eDISABLE = 0,
    // VBUS discharge resistor is enabled
    eENABLE = 1,
  };
  
  // Enables resistors used for an older method of resistive battery charger detection
  enum class eEN_CHARGER_RESISTOR : uint32_t {
    // Disable resistive charger detection resistors on DP and DP
    eDISABLE = 0,
    // Enable resistive charger detection resistors on DP and DP
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - VBUSVALID_THRESH
    eVBUSVALID_THRESH VBUSVALID_THRESH : 3;
    // read-write - VBUS detect signal override enable
    eVBUS_OVERRIDE_EN VBUS_OVERRIDE_EN : 1;
    // read-write - Override value for SESSEND
    uint32_t SESSEND_OVERRIDE : 1;
    // read-write - Override value for B-Device Session Valid
    uint32_t BVALID_OVERRIDE : 1;
    // read-write - Override value for A-Device Session Valid
    uint32_t AVALID_OVERRIDE : 1;
    // read-write - Override value for VBUS_VALID signal sent to USB controller
    uint32_t VBUSVALID_OVERRIDE : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    eVBUSVALID_SEL VBUSVALID_SEL : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    eVBUS_SOURCE_SEL VBUS_SOURCE_SEL : 2;
    // read-write - TBA
    uint32_t ID_OVERRIDE_EN : 1;
    // read-write - TBA
    uint32_t ID_OVERRIDE : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Selects the comparator used for VBUS_VALID
    eVBUSVALID_TO_SESSVALID VBUSVALID_TO_SESSVALID : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Enables the VBUS_VALID comparator
    ePWRUP_CMPS PWRUP_CMPS : 3;
    uint32_t _reserved_2 : 3;
    // read-write - Controls VBUS discharge resistor
    eDISCHARGE_VBUS DISCHARGE_VBUS : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enables resistors used for an older method of resistive battery charger detection
    eEN_CHARGER_RESISTOR EN_CHARGER_RESISTOR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_VBUS_DETECT() = delete;
  inline void Reset() volatile { this->value = 0x00700004; }
  static inline volatile USB1_VBUS_DETECT &Instance() { return *reinterpret_cast<volatile USB1_VBUS_DETECT*>(0x404380C0); }
};

// USB PHY VBUS Detect Control Register
union USB1_VBUS_DETECT_SET {
  
  // Bit field definition.
  struct {
    // read-write - VBUSVALID_THRESH
    uint32_t VBUSVALID_THRESH : 3;
    // read-write - VBUS detect signal override enable
    uint32_t VBUS_OVERRIDE_EN : 1;
    // read-write - Override value for SESSEND
    uint32_t SESSEND_OVERRIDE : 1;
    // read-write - Override value for B-Device Session Valid
    uint32_t BVALID_OVERRIDE : 1;
    // read-write - Override value for A-Device Session Valid
    uint32_t AVALID_OVERRIDE : 1;
    // read-write - Override value for VBUS_VALID signal sent to USB controller
    uint32_t VBUSVALID_OVERRIDE : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    uint32_t VBUSVALID_SEL : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    uint32_t VBUS_SOURCE_SEL : 2;
    // read-write - TBA
    uint32_t ID_OVERRIDE_EN : 1;
    // read-write - TBA
    uint32_t ID_OVERRIDE : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Selects the comparator used for VBUS_VALID
    uint32_t VBUSVALID_TO_SESSVALID : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Enables the VBUS_VALID comparator
    uint32_t PWRUP_CMPS : 3;
    uint32_t _reserved_2 : 3;
    // read-write - Controls VBUS discharge resistor
    uint32_t DISCHARGE_VBUS : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enables resistors used for an older method of resistive battery charger detection
    uint32_t EN_CHARGER_RESISTOR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_VBUS_DETECT_SET() = delete;
  inline void Reset() volatile { this->value = 0x00700004; }
  static inline volatile USB1_VBUS_DETECT_SET &Instance() { return *reinterpret_cast<volatile USB1_VBUS_DETECT_SET*>(0x404380C4); }
};

// USB PHY VBUS Detect Control Register
union USB1_VBUS_DETECT_CLR {
  
  // Bit field definition.
  struct {
    // read-write - VBUSVALID_THRESH
    uint32_t VBUSVALID_THRESH : 3;
    // read-write - VBUS detect signal override enable
    uint32_t VBUS_OVERRIDE_EN : 1;
    // read-write - Override value for SESSEND
    uint32_t SESSEND_OVERRIDE : 1;
    // read-write - Override value for B-Device Session Valid
    uint32_t BVALID_OVERRIDE : 1;
    // read-write - Override value for A-Device Session Valid
    uint32_t AVALID_OVERRIDE : 1;
    // read-write - Override value for VBUS_VALID signal sent to USB controller
    uint32_t VBUSVALID_OVERRIDE : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    uint32_t VBUSVALID_SEL : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    uint32_t VBUS_SOURCE_SEL : 2;
    // read-write - TBA
    uint32_t ID_OVERRIDE_EN : 1;
    // read-write - TBA
    uint32_t ID_OVERRIDE : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Selects the comparator used for VBUS_VALID
    uint32_t VBUSVALID_TO_SESSVALID : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Enables the VBUS_VALID comparator
    uint32_t PWRUP_CMPS : 3;
    uint32_t _reserved_2 : 3;
    // read-write - Controls VBUS discharge resistor
    uint32_t DISCHARGE_VBUS : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enables resistors used for an older method of resistive battery charger detection
    uint32_t EN_CHARGER_RESISTOR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_VBUS_DETECT_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00700004; }
  static inline volatile USB1_VBUS_DETECT_CLR &Instance() { return *reinterpret_cast<volatile USB1_VBUS_DETECT_CLR*>(0x404380C8); }
};

// USB PHY VBUS Detect Control Register
union USB1_VBUS_DETECT_TOG {
  
  // Bit field definition.
  struct {
    // read-write - VBUSVALID_THRESH
    uint32_t VBUSVALID_THRESH : 3;
    // read-write - VBUS detect signal override enable
    uint32_t VBUS_OVERRIDE_EN : 1;
    // read-write - Override value for SESSEND
    uint32_t SESSEND_OVERRIDE : 1;
    // read-write - Override value for B-Device Session Valid
    uint32_t BVALID_OVERRIDE : 1;
    // read-write - Override value for A-Device Session Valid
    uint32_t AVALID_OVERRIDE : 1;
    // read-write - Override value for VBUS_VALID signal sent to USB controller
    uint32_t VBUSVALID_OVERRIDE : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    uint32_t VBUSVALID_SEL : 1;
    // read-write - Selects the source of the VBUS_VALID signal reported to the USB controller
    uint32_t VBUS_SOURCE_SEL : 2;
    // read-write - TBA
    uint32_t ID_OVERRIDE_EN : 1;
    // read-write - TBA
    uint32_t ID_OVERRIDE : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Selects the comparator used for VBUS_VALID
    uint32_t VBUSVALID_TO_SESSVALID : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Enables the VBUS_VALID comparator
    uint32_t PWRUP_CMPS : 3;
    uint32_t _reserved_2 : 3;
    // read-write - Controls VBUS discharge resistor
    uint32_t DISCHARGE_VBUS : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enables resistors used for an older method of resistive battery charger detection
    uint32_t EN_CHARGER_RESISTOR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_VBUS_DETECT_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00700004; }
  static inline volatile USB1_VBUS_DETECT_TOG &Instance() { return *reinterpret_cast<volatile USB1_VBUS_DETECT_TOG*>(0x404380CC); }
};

// USB PHY VBUS Detector Status Register
union USB1_VBUS_DET_STAT {
  
  // Session End indicator
  enum class eSESSEND : uint32_t {
    // The VBUS voltage is above the Session Valid threshold
    eABOVE = 0,
    // The VBUS voltage is below the Session Valid threshold
    eBELOW = 1,
  };
  
  // B-Device Session Valid status
  enum class eBVALID : uint32_t {
    // The VBUS voltage is below the Session Valid threshold
    eBELOW = 0,
    // The VBUS voltage is above the Session Valid threshold
    eABOVE = 1,
  };
  
  // A-Device Session Valid status
  enum class eAVALID : uint32_t {
    // The VBUS voltage is below the Session Valid threshold
    eBELOW = 0,
    // The VBUS voltage is above the Session Valid threshold
    eABOVE = 1,
  };
  
  // VBUS voltage status
  enum class eVBUS_VALID : uint32_t {
    // VBUS is below the comparator threshold
    eBELOW = 0,
    // VBUS is above the comparator threshold
    eABOVE = 1,
  };
  
  // VBUS_VALID_3V detector status
  enum class eVBUS_VALID_3V : uint32_t {
    // VBUS voltage is below VBUS_VALID_3V threshold
    eBELOW = 0,
    // VBUS voltage is above VBUS_VALID_3V threshold
    eABOVE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Session End indicator
    eSESSEND SESSEND : 1;
    // read-only - B-Device Session Valid status
    eBVALID BVALID : 1;
    // read-only - A-Device Session Valid status
    eAVALID AVALID : 1;
    // read-only - VBUS voltage status
    eVBUS_VALID VBUS_VALID : 1;
    // read-only - VBUS_VALID_3V detector status
    eVBUS_VALID_3V VBUS_VALID_3V : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_VBUS_DET_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile USB1_VBUS_DET_STAT &Instance() { return *reinterpret_cast<volatile USB1_VBUS_DET_STAT*>(0x404380D0); }
};

// USB PHY Charger Detect Control Register
union USB1_CHRG_DETECT {
  
  // BGR_BIAS
  enum class eBGR_BIAS : uint32_t {
    // Use local bias powered from USB1_VBUS for 10uA reference (Default)
    eLOCAL_BIAS = 0,
    // Use bandgap bias powered from VREGIN0/VREGIN1 for 10uA reference
    eBANDGAP = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PULLUP_DP
    uint32_t PULLUP_DP : 1;
    uint32_t _reserved_1 : 20;
    // read-write - BGR_BIAS
    eBGR_BIAS BGR_BIAS : 1;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_CHRG_DETECT() = delete;
  inline void Reset() volatile { this->value = 0x80180000; }
  static inline volatile USB1_CHRG_DETECT &Instance() { return *reinterpret_cast<volatile USB1_CHRG_DETECT*>(0x404380E0); }
};

// USB PHY Charger Detect Control Register
union USB1_CHRG_DETECT_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PULLUP_DP
    uint32_t PULLUP_DP : 1;
    uint32_t _reserved_1 : 20;
    // read-write - BGR_BIAS
    uint32_t BGR_BIAS : 1;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_CHRG_DETECT_SET() = delete;
  inline void Reset() volatile { this->value = 0x80180000; }
  static inline volatile USB1_CHRG_DETECT_SET &Instance() { return *reinterpret_cast<volatile USB1_CHRG_DETECT_SET*>(0x404380E4); }
};

// USB PHY Charger Detect Control Register
union USB1_CHRG_DETECT_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PULLUP_DP
    uint32_t PULLUP_DP : 1;
    uint32_t _reserved_1 : 20;
    // read-write - BGR_BIAS
    uint32_t BGR_BIAS : 1;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_CHRG_DETECT_CLR() = delete;
  inline void Reset() volatile { this->value = 0x80180000; }
  static inline volatile USB1_CHRG_DETECT_CLR &Instance() { return *reinterpret_cast<volatile USB1_CHRG_DETECT_CLR*>(0x404380E8); }
};

// USB PHY Charger Detect Control Register
union USB1_CHRG_DETECT_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - PULLUP_DP
    uint32_t PULLUP_DP : 1;
    uint32_t _reserved_1 : 20;
    // read-write - BGR_BIAS
    uint32_t BGR_BIAS : 1;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_CHRG_DETECT_TOG() = delete;
  inline void Reset() volatile { this->value = 0x80180000; }
  static inline volatile USB1_CHRG_DETECT_TOG &Instance() { return *reinterpret_cast<volatile USB1_CHRG_DETECT_TOG*>(0x404380EC); }
};

// USB PHY Charger Detect Status Register
union USB1_CHRG_DET_STAT {
  
  // Battery Charging Data Contact Detection phase output
  enum class ePLUG_CONTACT : uint32_t {
    // No USB cable attachment has been detected
    eNO_ATTACH = 0,
    // A USB cable attachment between the device and host has been detected
    eATTACH = 1,
  };
  
  // Battery Charging Primary Detection phase output
  enum class eCHRG_DETECTED : uint32_t {
    // Standard Downstream Port (SDP) has been detected
    eSDP = 0,
    // Charging Port has been detected
    eCHRG_PORT = 1,
  };
  
  // DN_STATE
  enum class eDN_STATE : uint32_t {
    // DN pin voltage is < 0.8V
    eBELOW_P8 = 0,
    // DN pin voltage is > 2.0V
    eABOVE_2 = 1,
  };
  
  // DP_STATE
  enum class eDP_STATE : uint32_t {
    // DP pin voltage is < 0.8V
    eBELOW_P8 = 0,
    // DP pin voltage is > 2.0V
    eABOVE_2 = 1,
  };
  
  // Battery Charging Secondary Detection phase output
  enum class eSECDET_DCP : uint32_t {
    // Charging Downstream Port (CDP) has been detected
    eCDP = 0,
    // Downstream Charging Port (DCP) has been detected
    eDCP = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Battery Charging Data Contact Detection phase output
    ePLUG_CONTACT PLUG_CONTACT : 1;
    // read-only - Battery Charging Primary Detection phase output
    eCHRG_DETECTED CHRG_DETECTED : 1;
    // read-only - DN_STATE
    eDN_STATE DN_STATE : 1;
    // read-only - DP_STATE
    eDP_STATE DP_STATE : 1;
    // read-only - Battery Charging Secondary Detection phase output
    eSECDET_DCP SECDET_DCP : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_CHRG_DET_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile USB1_CHRG_DET_STAT &Instance() { return *reinterpret_cast<volatile USB1_CHRG_DET_STAT*>(0x404380F0); }
};

// USB PHY Analog Control Register
union ANACTRL {
  
  // DEV_PULLDOWN
  enum class eDEV_PULLDOWN : uint32_t {
    // The 15kohm nominal pulldowns on the DP and DN pinsare disabled in device mode.
    eDISABLE = 0,
    // The 15kohm nominal pulldowns on the DP and DN pinsare enabled in device mode.
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - DEV_PULLDOWN
    eDEV_PULLDOWN DEV_PULLDOWN : 1;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ANACTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000402; }
  static inline volatile ANACTRL &Instance() { return *reinterpret_cast<volatile ANACTRL*>(0x40438100); }
};

// USB PHY Analog Control Register
union ANACTRL_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - DEV_PULLDOWN
    uint32_t DEV_PULLDOWN : 1;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ANACTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000402; }
  static inline volatile ANACTRL_SET &Instance() { return *reinterpret_cast<volatile ANACTRL_SET*>(0x40438104); }
};

// USB PHY Analog Control Register
union ANACTRL_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - DEV_PULLDOWN
    uint32_t DEV_PULLDOWN : 1;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ANACTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000402; }
  static inline volatile ANACTRL_CLR &Instance() { return *reinterpret_cast<volatile ANACTRL_CLR*>(0x40438108); }
};

// USB PHY Analog Control Register
union ANACTRL_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-write - DEV_PULLDOWN
    uint32_t DEV_PULLDOWN : 1;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ANACTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000402; }
  static inline volatile ANACTRL_TOG &Instance() { return *reinterpret_cast<volatile ANACTRL_TOG*>(0x4043810C); }
};

// USB PHY Loopback Control/Status Register
union USB1_LOOPBACK {
  
  // Bit field definition.
  struct {
    // read-write - UTMI_TESTSTART
    uint32_t UTMI_TESTSTART : 1;
    // read-write - UTMI_DIG_TST0
    uint32_t UTMI_DIG_TST0 : 1;
    // read-write - UTMI_DIG_TST1
    uint32_t UTMI_DIG_TST1 : 1;
    // read-write - TSTI_TX_HS_MODE
    uint32_t TSTI_TX_HS_MODE : 1;
    // read-write - TSTI_TX_LS_MODE
    uint32_t TSTI_TX_LS_MODE : 1;
    // read-write - TSTI_TX_EN
    uint32_t TSTI_TX_EN : 1;
    // read-write - TSTI_TX_HIZ
    uint32_t TSTI_TX_HIZ : 1;
    // read-only - UTMO_DIG_TST0
    uint32_t UTMO_DIG_TST0 : 1;
    // read-only - UTMO_DIG_TST1
    uint32_t UTMO_DIG_TST1 : 1;
    uint32_t _reserved_0 : 6;
    // read-write - TSTI_HSFS_MODE_EN
    uint32_t TSTI_HSFS_MODE_EN : 1;
    // read-write - TSTPKT
    uint32_t TSTPKT : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK() = delete;
  inline void Reset() volatile { this->value = 0x00550000; }
  static inline volatile USB1_LOOPBACK &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK*>(0x40438110); }
};

// USB PHY Loopback Control/Status Register
union USB1_LOOPBACK_SET {
  
  // Bit field definition.
  struct {
    // read-write - UTMI_TESTSTART
    uint32_t UTMI_TESTSTART : 1;
    // read-write - UTMI_DIG_TST0
    uint32_t UTMI_DIG_TST0 : 1;
    // read-write - UTMI_DIG_TST1
    uint32_t UTMI_DIG_TST1 : 1;
    // read-write - TSTI_TX_HS_MODE
    uint32_t TSTI_TX_HS_MODE : 1;
    // read-write - TSTI_TX_LS_MODE
    uint32_t TSTI_TX_LS_MODE : 1;
    // read-write - TSTI_TX_EN
    uint32_t TSTI_TX_EN : 1;
    // read-write - TSTI_TX_HIZ
    uint32_t TSTI_TX_HIZ : 1;
    // read-only - UTMO_DIG_TST0
    uint32_t UTMO_DIG_TST0 : 1;
    // read-only - UTMO_DIG_TST1
    uint32_t UTMO_DIG_TST1 : 1;
    uint32_t _reserved_0 : 6;
    // read-write - TSTI_HSFS_MODE_EN
    uint32_t TSTI_HSFS_MODE_EN : 1;
    // read-write - TSTPKT
    uint32_t TSTPKT : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK_SET() = delete;
  inline void Reset() volatile { this->value = 0x00550000; }
  static inline volatile USB1_LOOPBACK_SET &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK_SET*>(0x40438114); }
};

// USB PHY Loopback Control/Status Register
union USB1_LOOPBACK_CLR {
  
  // Bit field definition.
  struct {
    // read-write - UTMI_TESTSTART
    uint32_t UTMI_TESTSTART : 1;
    // read-write - UTMI_DIG_TST0
    uint32_t UTMI_DIG_TST0 : 1;
    // read-write - UTMI_DIG_TST1
    uint32_t UTMI_DIG_TST1 : 1;
    // read-write - TSTI_TX_HS_MODE
    uint32_t TSTI_TX_HS_MODE : 1;
    // read-write - TSTI_TX_LS_MODE
    uint32_t TSTI_TX_LS_MODE : 1;
    // read-write - TSTI_TX_EN
    uint32_t TSTI_TX_EN : 1;
    // read-write - TSTI_TX_HIZ
    uint32_t TSTI_TX_HIZ : 1;
    // read-only - UTMO_DIG_TST0
    uint32_t UTMO_DIG_TST0 : 1;
    // read-only - UTMO_DIG_TST1
    uint32_t UTMO_DIG_TST1 : 1;
    uint32_t _reserved_0 : 6;
    // read-write - TSTI_HSFS_MODE_EN
    uint32_t TSTI_HSFS_MODE_EN : 1;
    // read-write - TSTPKT
    uint32_t TSTPKT : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00550000; }
  static inline volatile USB1_LOOPBACK_CLR &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK_CLR*>(0x40438118); }
};

// USB PHY Loopback Control/Status Register
union USB1_LOOPBACK_TOG {
  
  // Bit field definition.
  struct {
    // read-write - UTMI_TESTSTART
    uint32_t UTMI_TESTSTART : 1;
    // read-write - UTMI_DIG_TST0
    uint32_t UTMI_DIG_TST0 : 1;
    // read-write - UTMI_DIG_TST1
    uint32_t UTMI_DIG_TST1 : 1;
    // read-write - TSTI_TX_HS_MODE
    uint32_t TSTI_TX_HS_MODE : 1;
    // read-write - TSTI_TX_LS_MODE
    uint32_t TSTI_TX_LS_MODE : 1;
    // read-write - TSTI_TX_EN
    uint32_t TSTI_TX_EN : 1;
    // read-write - TSTI_TX_HIZ
    uint32_t TSTI_TX_HIZ : 1;
    // read-only - UTMO_DIG_TST0
    uint32_t UTMO_DIG_TST0 : 1;
    // read-only - UTMO_DIG_TST1
    uint32_t UTMO_DIG_TST1 : 1;
    uint32_t _reserved_0 : 6;
    // read-write - TSTI_HSFS_MODE_EN
    uint32_t TSTI_HSFS_MODE_EN : 1;
    // read-write - TSTPKT
    uint32_t TSTPKT : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00550000; }
  static inline volatile USB1_LOOPBACK_TOG &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK_TOG*>(0x4043811C); }
};

// USB PHY Loopback Packet Number Select Register
union USB1_LOOPBACK_HSFSCNT {
  
  // Bit field definition.
  struct {
    // read-write - TSTI_HS_NUMBER
    uint32_t TSTI_HS_NUMBER : 16;
    // read-write - TSTI_FS_NUMBER
    uint32_t TSTI_FS_NUMBER : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK_HSFSCNT() = delete;
  inline void Reset() volatile { this->value = 0x00040010; }
  static inline volatile USB1_LOOPBACK_HSFSCNT &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK_HSFSCNT*>(0x40438120); }
};

// USB PHY Loopback Packet Number Select Register
union USB1_LOOPBACK_HSFSCNT_SET {
  
  // Bit field definition.
  struct {
    // read-write - TSTI_HS_NUMBER
    uint32_t TSTI_HS_NUMBER : 16;
    // read-write - TSTI_FS_NUMBER
    uint32_t TSTI_FS_NUMBER : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK_HSFSCNT_SET() = delete;
  inline void Reset() volatile { this->value = 0x00040010; }
  static inline volatile USB1_LOOPBACK_HSFSCNT_SET &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK_HSFSCNT_SET*>(0x40438124); }
};

// USB PHY Loopback Packet Number Select Register
union USB1_LOOPBACK_HSFSCNT_CLR {
  
  // Bit field definition.
  struct {
    // read-write - TSTI_HS_NUMBER
    uint32_t TSTI_HS_NUMBER : 16;
    // read-write - TSTI_FS_NUMBER
    uint32_t TSTI_FS_NUMBER : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK_HSFSCNT_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00040010; }
  static inline volatile USB1_LOOPBACK_HSFSCNT_CLR &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK_HSFSCNT_CLR*>(0x40438128); }
};

// USB PHY Loopback Packet Number Select Register
union USB1_LOOPBACK_HSFSCNT_TOG {
  
  // Bit field definition.
  struct {
    // read-write - TSTI_HS_NUMBER
    uint32_t TSTI_HS_NUMBER : 16;
    // read-write - TSTI_FS_NUMBER
    uint32_t TSTI_FS_NUMBER : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USB1_LOOPBACK_HSFSCNT_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00040010; }
  static inline volatile USB1_LOOPBACK_HSFSCNT_TOG &Instance() { return *reinterpret_cast<volatile USB1_LOOPBACK_HSFSCNT_TOG*>(0x4043812C); }
};

// USB PHY Trim Override Enable Register
union TRIM_OVERRIDE_EN {
  
  // Bit field definition.
  struct {
    // read-write - TRIM_DIV_SEL_OVERRIDE
    uint32_t TRIM_DIV_SEL_OVERRIDE : 1;
    // read-write - TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
    uint32_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE : 1;
    // read-write - TRIM_TX_D_CAL_OVERRIDE
    uint32_t TRIM_TX_D_CAL_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DP_OVERRIDE
    uint32_t TRIM_TX_CAL45DP_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DN_OVERRIDE
    uint32_t TRIM_TX_CAL45DN_OVERRIDE : 1;
    // read-write - Override enable for bandgap adjustment.
    uint32_t TRIM_REFBIAS_VBGADJ_OVERRIDE : 1;
    // read-write - Override enable for bias current control
    uint32_t TRIM_REFBIAS_TST_OVERRIDE : 1;
    uint32_t _reserved_0 : 3;
    // read-only - TRIM_USB2_REFBIAS_VBGADJ
    uint32_t TRIM_USB2_REFBIAS_VBGADJ : 3;
    // read-only - TRIM_USB2_REFBIAS_TST
    uint32_t TRIM_USB2_REFBIAS_TST : 2;
    // read-only - TRIM_PLL_CTRL0_DIV_SEL
    uint32_t TRIM_PLL_CTRL0_DIV_SEL : 3;
    // read-only - TRIM_USB_REG_ENV_TAIL_ADJ_VD
    uint32_t TRIM_USB_REG_ENV_TAIL_ADJ_VD : 2;
    // read-only - TRIM_USBPHY_TX_D_CAL
    uint32_t TRIM_USBPHY_TX_D_CAL : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DP
    uint32_t TRIM_USBPHY_TX_CAL45DP : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DN
    uint32_t TRIM_USBPHY_TX_CAL45DN : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIM_OVERRIDE_EN() = delete;
  inline void Reset() volatile { this->value = 0x0000007F; }
  static inline volatile TRIM_OVERRIDE_EN &Instance() { return *reinterpret_cast<volatile TRIM_OVERRIDE_EN*>(0x40438130); }
};

// USB PHY Trim Override Enable Register
union TRIM_OVERRIDE_EN_SET {
  
  // Bit field definition.
  struct {
    // read-write - TRIM_DIV_SEL_OVERRIDE
    uint32_t TRIM_DIV_SEL_OVERRIDE : 1;
    // read-write - TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
    uint32_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE : 1;
    // read-write - TRIM_TX_D_CAL_OVERRIDE
    uint32_t TRIM_TX_D_CAL_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DP_OVERRIDE
    uint32_t TRIM_TX_CAL45DP_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DN_OVERRIDE
    uint32_t TRIM_TX_CAL45DN_OVERRIDE : 1;
    // read-write - Override enable for bandgap adjustment.
    uint32_t TRIM_REFBIAS_VBGADJ_OVERRIDE : 1;
    // read-write - Override enable for bias current control
    uint32_t TRIM_REFBIAS_TST_OVERRIDE : 1;
    uint32_t _reserved_0 : 3;
    // read-only - TRIM_USB2_REFBIAS_VBGADJ
    uint32_t TRIM_USB2_REFBIAS_VBGADJ : 3;
    // read-only - TRIM_USB2_REFBIAS_TST
    uint32_t TRIM_USB2_REFBIAS_TST : 2;
    // read-only - TRIM_PLL_CTRL0_DIV_SEL
    uint32_t TRIM_PLL_CTRL0_DIV_SEL : 3;
    // read-only - TRIM_USB_REG_ENV_TAIL_ADJ_VD
    uint32_t TRIM_USB_REG_ENV_TAIL_ADJ_VD : 2;
    // read-only - TRIM_USBPHY_TX_D_CAL
    uint32_t TRIM_USBPHY_TX_D_CAL : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DP
    uint32_t TRIM_USBPHY_TX_CAL45DP : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DN
    uint32_t TRIM_USBPHY_TX_CAL45DN : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIM_OVERRIDE_EN_SET() = delete;
  inline void Reset() volatile { this->value = 0x0000007F; }
  static inline volatile TRIM_OVERRIDE_EN_SET &Instance() { return *reinterpret_cast<volatile TRIM_OVERRIDE_EN_SET*>(0x40438134); }
};

// USB PHY Trim Override Enable Register
union TRIM_OVERRIDE_EN_CLR {
  
  // Bit field definition.
  struct {
    // read-write - TRIM_DIV_SEL_OVERRIDE
    uint32_t TRIM_DIV_SEL_OVERRIDE : 1;
    // read-write - TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
    uint32_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE : 1;
    // read-write - TRIM_TX_D_CAL_OVERRIDE
    uint32_t TRIM_TX_D_CAL_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DP_OVERRIDE
    uint32_t TRIM_TX_CAL45DP_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DN_OVERRIDE
    uint32_t TRIM_TX_CAL45DN_OVERRIDE : 1;
    // read-write - Override enable for bandgap adjustment.
    uint32_t TRIM_REFBIAS_VBGADJ_OVERRIDE : 1;
    // read-write - Override enable for bias current control
    uint32_t TRIM_REFBIAS_TST_OVERRIDE : 1;
    uint32_t _reserved_0 : 3;
    // read-only - TRIM_USB2_REFBIAS_VBGADJ
    uint32_t TRIM_USB2_REFBIAS_VBGADJ : 3;
    // read-only - TRIM_USB2_REFBIAS_TST
    uint32_t TRIM_USB2_REFBIAS_TST : 2;
    // read-only - TRIM_PLL_CTRL0_DIV_SEL
    uint32_t TRIM_PLL_CTRL0_DIV_SEL : 3;
    // read-only - TRIM_USB_REG_ENV_TAIL_ADJ_VD
    uint32_t TRIM_USB_REG_ENV_TAIL_ADJ_VD : 2;
    // read-only - TRIM_USBPHY_TX_D_CAL
    uint32_t TRIM_USBPHY_TX_D_CAL : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DP
    uint32_t TRIM_USBPHY_TX_CAL45DP : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DN
    uint32_t TRIM_USBPHY_TX_CAL45DN : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIM_OVERRIDE_EN_CLR() = delete;
  inline void Reset() volatile { this->value = 0x0000007F; }
  static inline volatile TRIM_OVERRIDE_EN_CLR &Instance() { return *reinterpret_cast<volatile TRIM_OVERRIDE_EN_CLR*>(0x40438138); }
};

// USB PHY Trim Override Enable Register
union TRIM_OVERRIDE_EN_TOG {
  
  // Bit field definition.
  struct {
    // read-write - TRIM_DIV_SEL_OVERRIDE
    uint32_t TRIM_DIV_SEL_OVERRIDE : 1;
    // read-write - TRIM_ENV_TAIL_ADJ_VD_OVERRIDE
    uint32_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE : 1;
    // read-write - TRIM_TX_D_CAL_OVERRIDE
    uint32_t TRIM_TX_D_CAL_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DP_OVERRIDE
    uint32_t TRIM_TX_CAL45DP_OVERRIDE : 1;
    // read-write - TRIM_TX_CAL45DN_OVERRIDE
    uint32_t TRIM_TX_CAL45DN_OVERRIDE : 1;
    // read-write - Override enable for bandgap adjustment.
    uint32_t TRIM_REFBIAS_VBGADJ_OVERRIDE : 1;
    // read-write - Override enable for bias current control
    uint32_t TRIM_REFBIAS_TST_OVERRIDE : 1;
    uint32_t _reserved_0 : 3;
    // read-only - TRIM_USB2_REFBIAS_VBGADJ
    uint32_t TRIM_USB2_REFBIAS_VBGADJ : 3;
    // read-only - TRIM_USB2_REFBIAS_TST
    uint32_t TRIM_USB2_REFBIAS_TST : 2;
    // read-only - TRIM_PLL_CTRL0_DIV_SEL
    uint32_t TRIM_PLL_CTRL0_DIV_SEL : 3;
    // read-only - TRIM_USB_REG_ENV_TAIL_ADJ_VD
    uint32_t TRIM_USB_REG_ENV_TAIL_ADJ_VD : 2;
    // read-only - TRIM_USBPHY_TX_D_CAL
    uint32_t TRIM_USBPHY_TX_D_CAL : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DP
    uint32_t TRIM_USBPHY_TX_CAL45DP : 4;
    // read-only - TRIM_USBPHY_TX_CAL45DN
    uint32_t TRIM_USBPHY_TX_CAL45DN : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TRIM_OVERRIDE_EN_TOG() = delete;
  inline void Reset() volatile { this->value = 0x0000007F; }
  static inline volatile TRIM_OVERRIDE_EN_TOG &Instance() { return *reinterpret_cast<volatile TRIM_OVERRIDE_EN_TOG*>(0x4043813C); }
};


} // namespace nUSBPHY2