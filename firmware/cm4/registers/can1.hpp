#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // CAN
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nCAN1 {


// Module Configuration register
//
union MCR {
  
  // Enum definitions.
  enum class eIDAM : uint32_t {
    eone_full_ID = 0, // Format A: One full ID (standard and extended) per ID filter table element.
    etwo_full_ID = 1, // Format B: Two full standard IDs or two partial 14-bit (standard and extended) IDs per ID filter table element.
    efour_partial_ID = 2, // Format C: Four partial 8-bit standard IDs per ID filter table element.
    eall_frames_rejected = 3, // Format D: All frames rejected.
  };
  enum class eFDEN : uint32_t {
    eCAN_FD_disabled = 0, // CAN FD is disabled. FlexCAN is able to receive and transmit messages in CAN 2.0 format.
    eCAN_FD_enabled = 1, // CAN FD is enabled. FlexCAN is able to receive and transmit messages in both CAN FD and CAN 2.0 formats.
  };
  enum class eAEN : uint32_t {
    eabort_disabled = 0, // Abort disabled.
    eabort_enabled = 1, // Abort enabled.
  };
  enum class eLPRIOEN : uint32_t {
    elocal_priority_disabled = 0, // Local Priority disabled.
    elocal_priority_enabled = 1, // Local Priority enabled.
  };
  enum class eDMA : uint32_t {
    eid2 = 0, // DMA feature for RX FIFO disabled.
    eid4 = 1, // DMA feature for RX FIFO enabled.
  };
  enum class eIRMQ : uint32_t {
    eindividual_rx_masking_disabled = 0, // Individual Rx masking and queue feature are disabled. For backward compatibility with legacy applications, the reading of C/S word locks the MB even if it is EMPTY.
    eindividual_rx_masking_enabled = 1, // Individual Rx masking and queue feature are enabled.
  };
  enum class eSRXDIS : uint32_t {
    eself_reception_enabled = 0, // Self-reception enabled.
    eself_reception_disabled = 1, // Self-reception disabled.
  };
  enum class eDOZE : uint32_t {
    elow_power_doze_disabled = 0, // FlexCAN is not enabled to enter low-power mode when Doze mode is requested.
    elow_power_doze_enabled = 1, // FlexCAN is enabled to enter low-power mode when Doze mode is requested.
  };
  enum class eWAKSRC : uint32_t {
    eunfiltered_rx_input = 0, // FlexCAN uses the unfiltered Rx input to detect recessive to dominant edges on the CAN bus.
    efiltered_rx_input = 1, // FlexCAN uses the filtered Rx input to detect recessive to dominant edges on the CAN bus.
  };
  enum class eLPMACK : uint32_t {
    elow_power_no = 0, // FlexCAN is not in a low-power mode.
    elow_power_yes = 1, // FlexCAN is in a low-power mode.
  };
  enum class eWRNEN : uint32_t {
    eTWRNINT_RWRNINT_inactive = 0, // TWRNINT and RWRNINT bits are zero, independent of the values in the error counters.
    eTWRNINT_RWRNINT_active = 1, // TWRNINT and RWRNINT bits are set when the respective error counter transitions from less than 96 to greater than or equal to 96.
  };
  enum class eSLFWAK : uint32_t {
    eself_wakeup_disabled = 0, // FlexCAN Self Wake Up feature is disabled.
    eself_wakeup_enabled = 1, // FlexCAN Self Wake Up feature is enabled.
  };
  enum class eSUPV : uint32_t {
    eid2 = 0, // FlexCAN is in User mode. Affected registers allow both Supervisor and Unrestricted accesses.
    eid4 = 1, // FlexCAN is in Supervisor mode. Affected registers allow only Supervisor access. Unrestricted access behaves as though the access was done to an unimplemented register location.
  };
  enum class eFRZACK : uint32_t {
    efreeze_mode_no = 0, // FlexCAN not in Freeze mode, prescaler running.
    efreeze_mode_yes = 1, // FlexCAN in Freeze mode, prescaler stopped.
  };
  enum class eSOFTRST : uint32_t {
    eSOFTRST_no_reset_request = 0, // No reset request.
    eSOFTRST_reset_registers = 1, // Resets the registers affected by soft reset.
  };
  enum class eWAKMSK : uint32_t {
    ewakeup_interrupt_disabled = 0, // Wake Up interrupt is disabled.
    ewakeup_interrupt_enabled = 1, // Wake Up interrupt is enabled.
  };
  enum class eNOTRDY : uint32_t {
    eid1 = 0, // FlexCAN module is either in Normal mode, Listen-Only mode, or Loop-Back mode.
    eid2 = 1, // FlexCAN module is either in Disable mode, Doze mode, Stop mode, or Freeze mode.
  };
  enum class eHALT : uint32_t {
    eHALT_disable = 0, // No Freeze mode request.
    eHALT_enable = 1, // Enters Freeze mode if the FRZ bit is asserted.
  };
  enum class eRFEN : uint32_t {
    eid2 = 0, // Rx FIFO not enabled.
    eid4 = 1, // Rx FIFO enabled.
  };
  enum class eFRZ : uint32_t {
    efreeze_mode_disabled = 0, // Not enabled to enter Freeze mode.
    efreeze_mode_enabled = 1, // Enabled to enter Freeze mode.
  };
  enum class eMDIS : uint32_t {
    eflexcan_enabled = 0, // Enable the FlexCAN module.
    eflexcan_disabled = 1, // Disable the FlexCAN module.
  };
  
  // Bit field definition.
  struct {
    uint32_t MAXMB : 7;
    uint32_t _reserved_1 : 1;
    eIDAM IDAM : 2;
    uint32_t _reserved_2 : 1;
    eFDEN FDEN : 1;
    eAEN AEN : 1;
    eLPRIOEN LPRIOEN : 1;
    uint32_t _reserved_5 : 1;
    eDMA DMA : 1;
    eIRMQ IRMQ : 1;
    eSRXDIS SRXDIS : 1;
    eDOZE DOZE : 1;
    eWAKSRC WAKSRC : 1;
    eLPMACK LPMACK : 1;
    eWRNEN WRNEN : 1;
    eSLFWAK SLFWAK : 1;
    eSUPV SUPV : 1;
    eFRZACK FRZACK : 1;
    eSOFTRST SOFTRST : 1;
    eWAKMSK WAKMSK : 1;
    eNOTRDY NOTRDY : 1;
    eHALT HALT : 1;
    eRFEN RFEN : 1;
    eFRZ FRZ : 1;
    eMDIS MDIS : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MCR() = delete;
  inline void Reset() volatile { this->value = 0x5980000F; }
  static inline volatile MCR &Instance() { return *reinterpret_cast<volatile MCR*>(0x400C4000); }
};

// Control 1 register
//
union CTRL1 {
  
  // Enum definitions.
  enum class eLOM : uint32_t {
    elisten_only_mode_disabled = 0, // Listen-Only mode is deactivated.
    elisten_only_mode_enabled = 1, // FlexCAN module operates in Listen-Only mode.
  };
  enum class eLBUF : uint32_t {
    ehighest_buffer_first = 0, // Buffer with highest priority is transmitted first.
    elowest_buffer_first = 1, // Lowest number buffer is transmitted first.
  };
  enum class eTSYN : uint32_t {
    etimer_sync_disabled = 0, // Timer sync feature disabled
    etimer_sync_enabled = 1, // Timer sync feature enabled
  };
  enum class eBOFFREC : uint32_t {
    eauto_recover_enabled = 0, // Automatic recovering from Bus Off state enabled.
    eauto_recover_disabled = 1, // Automatic recovering from Bus Off state disabled.
  };
  enum class eSMP : uint32_t {
    eone_sample = 0, // Just one sample is used to determine the bit value.
    ethree_sample = 1, // Three samples are used to determine the value of the received bit: the regular one (sample point) and two preceding samples; a majority rule is used.
  };
  enum class eRWRNMSK : uint32_t {
    erx_warning_int_disabled = 0, // Rx Warning interrupt disabled.
    erx_warning_int_enabled = 1, // Rx Warning interrupt enabled.
  };
  enum class eTWRNMSK : uint32_t {
    etx_warning_int_disabled = 0, // Tx Warning interrupt disabled.
    etx_warning_int_enabled = 1, // Tx Warning interrupt enabled.
  };
  enum class eLPB : uint32_t {
    eloopback_disabled = 0, // Loop Back disabled.
    eloopback_enabled = 1, // Loop Back enabled.
  };
  enum class eCLKSRC : uint32_t {
    eoscillator_clock = 0, // The CAN engine clock source is the oscillator clock. Under this condition, the oscillator clock frequency must be lower than the bus clock.
    eperipheral_clock = 1, // The CAN engine clock source is the peripheral clock.
  };
  enum class eERRMSK : uint32_t {
    eerror_int_disabled = 0, // Error interrupt disabled.
    eerror_int_enabled = 1, // Error interrupt enabled.
  };
  enum class eBOFFMSK : uint32_t {
    ebus_off_int_disabled = 0, // Bus Off interrupt disabled.
    ebus_off_int_enabled = 1, // Bus Off interrupt enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t PROPSEG : 3;
    eLOM LOM : 1;
    eLBUF LBUF : 1;
    eTSYN TSYN : 1;
    eBOFFREC BOFFREC : 1;
    eSMP SMP : 1;
    uint32_t _reserved_6 : 2;
    eRWRNMSK RWRNMSK : 1;
    eTWRNMSK TWRNMSK : 1;
    eLPB LPB : 1;
    eCLKSRC CLKSRC : 1;
    eERRMSK ERRMSK : 1;
    eBOFFMSK BOFFMSK : 1;
    uint32_t PSEG2 : 3;
    uint32_t PSEG1 : 3;
    uint32_t RJW : 2;
    uint32_t PRESDIV : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1 &Instance() { return *reinterpret_cast<volatile CTRL1*>(0x400C4004); }
};

// Free Running Timer
//
union TIMER {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIMER : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMER &Instance() { return *reinterpret_cast<volatile TIMER*>(0x400C4008); }
};

// Rx Mailboxes Global Mask register
//
union RXMGMASK {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MG : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXMGMASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXMGMASK &Instance() { return *reinterpret_cast<volatile RXMGMASK*>(0x400C4010); }
};

// Rx 14 Mask register
//
union RX14MASK {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RX14M : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RX14MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX14MASK &Instance() { return *reinterpret_cast<volatile RX14MASK*>(0x400C4014); }
};

// Rx 15 Mask register
//
union RX15MASK {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RX15M : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RX15MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX15MASK &Instance() { return *reinterpret_cast<volatile RX15MASK*>(0x400C4018); }
};

// Error Counter
//
union ECR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TXERRCNT : 8;
    uint32_t RXERRCNT : 8;
    uint32_t TXERRCNT_FAST : 8;
    uint32_t RXERRCNT_FAST : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECR &Instance() { return *reinterpret_cast<volatile ECR*>(0x400C401C); }
};

// Error and Status 1 register
//
union ESR1 {
  
  // Enum definitions.
  enum class eWAKINT : uint32_t {
    eDISABLE = 0, // No such occurrence.
    eENABLE = 1, // Indicates a recessive to dominant transition was received on the CAN bus.
  };
  enum class eERRINT : uint32_t {
    eDISABLE = 0, // No such occurrence.
    eENABLE = 1, // Indicates setting of any error bit in the Error and Status register.
  };
  enum class eBOFFINT : uint32_t {
    eDISABLE = 0, // No such occurrence.
    eENABLE = 1, // FlexCAN module entered Bus Off state.
  };
  enum class eRX : uint32_t {
    eDISABLE = 0, // FlexCAN is not receiving a message.
    eENABLE = 1, // FlexCAN is receiving a message.
  };
  enum class eFLTCONF : uint32_t {
    eerror_active = 0, // Error Active
    eerror_passive = 1, // Error Passive
    ebus_off = 2, // Bus Off
  };
  enum class eTX : uint32_t {
    etransmit_message_no = 0, // FlexCAN is not transmitting a message.
    etransmit_message_yes = 1, // FlexCAN is transmitting a message.
  };
  enum class eIDLE : uint32_t {
    ecan_bus_not_idle = 0, // No such occurrence.
    ecan_bus_idle = 1, // CAN bus is now IDLE.
  };
  enum class eRXWRN : uint32_t {
    eRXERRCNT_LT_96 = 0, // No such occurrence.
    eRXERRCNT_GTE_96 = 1, // RXERRCNT is greater than or equal to 96.
  };
  enum class eTXWRN : uint32_t {
    eTXERRCNT_LT_96 = 0, // No such occurrence.
    eTXERRCNT_GTE_96 = 1, // TXERRCNT is greater than or equal to 96.
  };
  enum class eSTFERR : uint32_t {
    estuffing_error_no = 0, // No such occurrence.
    estuffing_error_yes = 1, // A stuffing error occurred since last read of this register.
  };
  enum class eFRMERR : uint32_t {
    eform_error_no = 0, // No such occurrence.
    eform_error_yes = 1, // A Form Error occurred since last read of this register.
  };
  enum class eCRCERR : uint32_t {
    eCRC_error_no = 0, // No such occurrence.
    eCRC_error_yes = 1, // A CRC error occurred since last read of this register.
  };
  enum class eACKERR : uint32_t {
    eACK_error_no = 0, // No such occurrence.
    eACK_error_yes = 1, // An ACK error occurred since last read of this register.
  };
  enum class eBIT0ERR : uint32_t {
    ebit0_error_no = 0, // No such occurrence.
    ebit0_error_yes = 1, // At least one bit sent as dominant is received as recessive.
  };
  enum class eBIT1ERR : uint32_t {
    ebit1_error_no = 0, // No such occurrence.
    ebit1_error_yes = 1, // At least one bit sent as recessive is received as dominant.
  };
  enum class eRWRNINT : uint32_t {
    eRx_warning_int_no = 0, // No such occurrence.
    eRx_warning_int_yes = 1, // The Rx error counter transitioned from less than 96 to greater than or equal to 96.
  };
  enum class eTWRNINT : uint32_t {
    eTx_warning_int_no = 0, // No such occurrence.
    eTx_warning_int_yes = 1, // The Tx error counter transitioned from less than 96 to greater than or equal to 96.
  };
  enum class eSYNCH : uint32_t {
    eCAN_bus_sync_no = 0, // FlexCAN is not synchronized to the CAN bus.
    eCAN_bus_sync_yes = 1, // FlexCAN is synchronized to the CAN bus.
  };
  enum class eBOFFDONEINT : uint32_t {
    ebus_off_not_done = 0, // No such occurrence.
    ebus_off_done = 1, // FlexCAN module has completed Bus Off process.
  };
  enum class eERRINT_FAST : uint32_t {
    eerrors_data_phase_no = 0, // No such occurrence.
    eerrors_data_phase_yes = 1, // Indicates setting of any error bit detected in the data phase of CAN FD frames with the BRS bit set.
  };
  enum class eERROVR : uint32_t {
    eoverrun_not_occurred = 0, // Overrun has not occurred.
    eoverrun_occurred = 1, // Overrun has occurred.
  };
  enum class eSTFERR_FAST : uint32_t {
    estuffing_error_no = 0, // No such occurrence.
    estuffing_error_yes = 1, // A stuffing error occurred since last read of this register.
  };
  enum class eFRMERR_FAST : uint32_t {
    eform_error_no = 0, // No such occurrence.
    eform_error_yes = 1, // A form error occurred since last read of this register.
  };
  enum class eCRCERR_FAST : uint32_t {
    eCRC_error_no = 0, // No such occurrence.
    eCRC_error_yes = 1, // A CRC error occurred since last read of this register.
  };
  enum class eBIT0ERR_FAST : uint32_t {
    ebit0_error_no = 0, // No such occurrence.
    ebit0_error_yes = 1, // At least one bit sent as dominant is received as recessive.
  };
  enum class eBIT1ERR_FAST : uint32_t {
    ebit1_error_no = 0, // No such occurrence.
    ebit1_error_yes = 1, // At least one bit sent as recessive is received as dominant.
  };
  
  // Bit field definition.
  struct {
    eWAKINT WAKINT : 1;
    eERRINT ERRINT : 1;
    eBOFFINT BOFFINT : 1;
    eRX RX : 1;
    eFLTCONF FLTCONF : 2;
    eTX TX : 1;
    eIDLE IDLE : 1;
    eRXWRN RXWRN : 1;
    eTXWRN TXWRN : 1;
    eSTFERR STFERR : 1;
    eFRMERR FRMERR : 1;
    eCRCERR CRCERR : 1;
    eACKERR ACKERR : 1;
    eBIT0ERR BIT0ERR : 1;
    eBIT1ERR BIT1ERR : 1;
    eRWRNINT RWRNINT : 1;
    eTWRNINT TWRNINT : 1;
    eSYNCH SYNCH : 1;
    eBOFFDONEINT BOFFDONEINT : 1;
    eERRINT_FAST ERRINT_FAST : 1;
    eERROVR ERROVR : 1;
    uint32_t _reserved_21 : 4;
    eSTFERR_FAST STFERR_FAST : 1;
    eFRMERR_FAST FRMERR_FAST : 1;
    eCRCERR_FAST CRCERR_FAST : 1;
    uint32_t _reserved_24 : 1;
    eBIT0ERR_FAST BIT0ERR_FAST : 1;
    eBIT1ERR_FAST BIT1ERR_FAST : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ESR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ESR1 &Instance() { return *reinterpret_cast<volatile ESR1*>(0x400C4020); }
};

// Interrupt Masks 2 register
//
union IMASK2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t BUF63TO32M : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IMASK2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IMASK2 &Instance() { return *reinterpret_cast<volatile IMASK2*>(0x400C4024); }
};

// Interrupt Masks 1 register
//
union IMASK1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t BUF31TO0M : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IMASK1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IMASK1 &Instance() { return *reinterpret_cast<volatile IMASK1*>(0x400C4028); }
};

// Interrupt Flags 2 register
//
union IFLAG2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t BUF63TO32I : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IFLAG2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IFLAG2 &Instance() { return *reinterpret_cast<volatile IFLAG2*>(0x400C402C); }
};

// Interrupt Flags 1 register
//
union IFLAG1 {
  
  // Enum definitions.
  enum class eBUF0I : uint32_t {
    ebuffer_Tx_Rx_not_complete = 0, // The corresponding buffer has no occurrence of successfully completed transmission or reception when MCR[RFEN]=0.
    ebuffer_Tx_Rx_complete = 1, // The corresponding buffer has successfully completed transmission or reception when MCR[RFEN]=0.
  };
  enum class eBUF5I : uint32_t {
    eid2 = 0, // No occurrence of MB5 completing transmission/reception when MCR[RFEN]=0, or of frame(s) available in the FIFO, when MCR[RFEN]=1
    eid4 = 1, // MB5 completed transmission/reception when MCR[RFEN]=0, or frame(s) available in the Rx FIFO when MCR[RFEN]=1. It generates a DMA request in case of MCR[RFEN] and MCR[DMA] are enabled.
  };
  enum class eBUF6I : uint32_t {
    eid2 = 0, // No occurrence of MB6 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO almost full when MCR[RFEN]=1
    eid4 = 1, // MB6 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO almost full when MCR[RFEN]=1
  };
  enum class eBUF7I : uint32_t {
    eid2 = 0, // No occurrence of MB7 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO overflow when MCR[RFEN]=1
    eid4 = 1, // MB7 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO overflow when MCR[RFEN]=1
  };
  
  // Bit field definition.
  struct {
    eBUF0I BUF0I : 1;
    uint32_t BUF4TO1I : 4;
    eBUF5I BUF5I : 1;
    eBUF6I BUF6I : 1;
    eBUF7I BUF7I : 1;
    uint32_t BUF31TO8I : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IFLAG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IFLAG1 &Instance() { return *reinterpret_cast<volatile IFLAG1*>(0x400C4030); }
};

// Control 2 register
//
union CTRL2 {
  
  // Enum definitions.
  enum class eEDFLTDIS : uint32_t {
    eENABLE = 0, // Edge filter is enabled
    eDISABLE = 1, // Edge filter is disabled
  };
  enum class eISOCANFDEN : uint32_t {
    enon_ISO = 0, // FlexCAN operates using the non-ISO CAN FD protocol.
    eISO = 1, // FlexCAN operates using the ISO CAN FD protocol (ISO 11898-1).
  };
  enum class ePREXCEN : uint32_t {
    eDISABLE = 0, // Protocol exception is disabled.
    eENABLE = 1, // Protocol exception is enabled.
  };
  enum class eTIMER_SRC : uint32_t {
    eCAN_bit_clock = 0, // The free running timer is clocked by the CAN bit clock, which defines the baud rate on the CAN bus.
    eexternal_clock = 1, // The free running timer is clocked by an external time tick. The period can be either adjusted to be equal to the baud rate on the CAN bus, or a different value as required. See the device-specific section for details about the external time tick.
  };
  enum class eEACEN : uint32_t {
    eRTR_compare_no = 0, // Rx mailbox filter's IDE bit is always compared and RTR is never compared despite mask bits.
    eRTR_compare_yes = 1, // Enables the comparison of both Rx mailbox filter's IDE and RTR bit with their corresponding bits within the incoming frame. Mask bits do apply.
  };
  enum class eRRS : uint32_t {
    eremote_response_frame_not_generated = 0, // Remote response frame is generated.
    eremote_response_frame_generated = 1, // Remote request frame is stored.
  };
  enum class eMRP : uint32_t {
    eid2 = 0, // Matching starts from Rx FIFO and continues on mailboxes.
    eid4 = 1, // Matching starts from mailboxes and continues on Rx FIFO.
  };
  enum class eWRMFRZ : uint32_t {
    eDISABLE = 0, // Maintain the write access restrictions.
    eENABLE = 1, // Enable unrestricted write access to FlexCAN memory.
  };
  enum class eECRWRE : uint32_t {
    eDISABLE = 0, // Disable update.
    eENABLE = 1, // Enable update.
  };
  enum class eBOFFDONEMSK : uint32_t {
    eDISABLE = 0, // Bus off done interrupt disabled.
    eENABLE = 1, // Bus off done interrupt enabled.
  };
  enum class eERRMSK_FAST : uint32_t {
    eDISABLE = 0, // ERRINT_FAST error interrupt disabled.
    eENABLE = 1, // ERRINT_FAST error interrupt enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    eEDFLTDIS EDFLTDIS : 1;
    eISOCANFDEN ISOCANFDEN : 1;
    uint32_t _reserved_2 : 1;
    ePREXCEN PREXCEN : 1;
    eTIMER_SRC TIMER_SRC : 1;
    eEACEN EACEN : 1;
    eRRS RRS : 1;
    eMRP MRP : 1;
    uint32_t TASD : 5;
    uint32_t RFFN : 4;
    eWRMFRZ WRMFRZ : 1;
    eECRWRE ECRWRE : 1;
    eBOFFDONEMSK BOFFDONEMSK : 1;
    eERRMSK_FAST ERRMSK_FAST : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CTRL2 &Instance() { return *reinterpret_cast<volatile CTRL2*>(0x400C4034); }
};

// Error and Status 2 register
//
union ESR2 {
  
  // Enum definitions.
  enum class eIMB : uint32_t {
    einactive_mailbox_no = 0, // If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive mailbox.
    einactive_mailbox_yes = 1, // If ESR2[VPS] is asserted, there is at least one inactive mailbox. LPTM content is the number of the first one.
  };
  enum class eVPS : uint32_t {
    einvalid = 0, // Contents of IMB and LPTM are invalid.
    evalid = 1, // Contents of IMB and LPTM are valid.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    eIMB IMB : 1;
    eVPS VPS : 1;
    uint32_t _reserved_2 : 1;
    uint32_t LPTM : 7;
    uint32_t _reserved_end : 9;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ESR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ESR2 &Instance() { return *reinterpret_cast<volatile ESR2*>(0x400C4038); }
};

// CRC register
//
union CRCR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TXCRC : 15;
    uint32_t _reserved_1 : 1;
    uint32_t MBCRC : 7;
    uint32_t _reserved_end : 9;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CRCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CRCR &Instance() { return *reinterpret_cast<volatile CRCR*>(0x400C4044); }
};

// Rx FIFO Global Mask register
//
union RXFGMASK {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t FGM : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXFGMASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXFGMASK &Instance() { return *reinterpret_cast<volatile RXFGMASK*>(0x400C4048); }
};

// Rx FIFO Information register
//
union RXFIR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDHIT : 9;
    uint32_t _reserved_end : 23;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXFIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXFIR &Instance() { return *reinterpret_cast<volatile RXFIR*>(0x400C404C); }
};

// CAN Bit Timing register
//
union CBT {
  
  // Enum definitions.
  enum class eBTF : uint32_t {
    eDISABLE = 0, // Extended bit time definitions disabled.
    eENABLE = 1, // Extended bit time definitions enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t EPSEG2 : 5;
    uint32_t EPSEG1 : 5;
    uint32_t EPROPSEG : 6;
    uint32_t ERJW : 5;
    uint32_t EPRESDIV : 10;
    eBTF BTF : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CBT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CBT &Instance() { return *reinterpret_cast<volatile CBT*>(0x400C4050); }
};

// Message Buffer 0 CS Register
//
union CS0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS0 &Instance() { return *reinterpret_cast<volatile CS0*>(0x400C4080); }
};

// Message Buffer 0 CS Register
//
union MB0_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB0_16B_CS_L*>(0x400C4080); }
};

// Message Buffer 0 CS Register
//
union MB0_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB0_32B_CS_L*>(0x400C4080); }
};

// Message Buffer 0 CS Register
//
union MB0_64B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB0_64B_CS_L*>(0x400C4080); }
};

// Message Buffer 0 CS Register
//
union MB0_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_CS &Instance() { return *reinterpret_cast<volatile MB0_8B_CS*>(0x400C4080); }
};

// Message Buffer 0 ID Register
//
union ID0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID0 &Instance() { return *reinterpret_cast<volatile ID0*>(0x400C4084); }
};

// Message Buffer 0 ID Register
//
union MB0_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB0_16B_ID_L*>(0x400C4084); }
};

// Message Buffer 0 ID Register
//
union MB0_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB0_32B_ID_L*>(0x400C4084); }
};

// Message Buffer 0 ID Register
//
union MB0_64B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB0_64B_ID_L*>(0x400C4084); }
};

// Message Buffer 0 ID Register
//
union MB0_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_ID &Instance() { return *reinterpret_cast<volatile MB0_8B_ID*>(0x400C4084); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD0_L*>(0x400C4088); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD0_L*>(0x400C4088); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD0_L*>(0x400C4088); }
};

// Message Buffer 0 WORD_8B Register
//
union MB0_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB0_8B_WORD0*>(0x400C4088); }
};

// Message Buffer 0 WORD0 Register
//
union WORD00 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD00() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD00 &Instance() { return *reinterpret_cast<volatile WORD00*>(0x400C4088); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD1_L*>(0x400C408C); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD1_L*>(0x400C408C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD1_L*>(0x400C408C); }
};

// Message Buffer 0 WORD_8B Register
//
union MB0_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB0_8B_WORD1*>(0x400C408C); }
};

// Message Buffer 0 WORD1 Register
//
union WORD10 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD10 &Instance() { return *reinterpret_cast<volatile WORD10*>(0x400C408C); }
};

// Message Buffer 1 CS Register
//
union CS1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS1 &Instance() { return *reinterpret_cast<volatile CS1*>(0x400C4090); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD2_L*>(0x400C4090); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD2_L*>(0x400C4090); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD2_L*>(0x400C4090); }
};

// Message Buffer 1 CS Register
//
union MB1_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_CS &Instance() { return *reinterpret_cast<volatile MB1_8B_CS*>(0x400C4090); }
};

// Message Buffer 1 ID Register
//
union ID1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID1 &Instance() { return *reinterpret_cast<volatile ID1*>(0x400C4094); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD3_L*>(0x400C4094); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD3_L*>(0x400C4094); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD3_L*>(0x400C4094); }
};

// Message Buffer 1 ID Register
//
union MB1_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_ID &Instance() { return *reinterpret_cast<volatile MB1_8B_ID*>(0x400C4094); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD4_L*>(0x400C4098); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD4_L*>(0x400C4098); }
};

// Message Buffer 1 CS Register
//
union MB1_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB1_16B_CS_L*>(0x400C4098); }
};

// Message Buffer 1 WORD_8B Register
//
union MB1_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB1_8B_WORD0*>(0x400C4098); }
};

// Message Buffer 1 WORD0 Register
//
union WORD01 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD01() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD01 &Instance() { return *reinterpret_cast<volatile WORD01*>(0x400C4098); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD5_L*>(0x400C409C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD5_L*>(0x400C409C); }
};

// Message Buffer 1 ID Register
//
union MB1_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB1_16B_ID_L*>(0x400C409C); }
};

// Message Buffer 1 WORD_8B Register
//
union MB1_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB1_8B_WORD1*>(0x400C409C); }
};

// Message Buffer 1 WORD1 Register
//
union WORD11 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD11 &Instance() { return *reinterpret_cast<volatile WORD11*>(0x400C409C); }
};

// Message Buffer 2 CS Register
//
union CS2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS2 &Instance() { return *reinterpret_cast<volatile CS2*>(0x400C40A0); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD6_L*>(0x400C40A0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD6_L*>(0x400C40A0); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD0_L*>(0x400C40A0); }
};

// Message Buffer 2 CS Register
//
union MB2_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_CS &Instance() { return *reinterpret_cast<volatile MB2_8B_CS*>(0x400C40A0); }
};

// Message Buffer 2 ID Register
//
union ID2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID2 &Instance() { return *reinterpret_cast<volatile ID2*>(0x400C40A4); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD7_L*>(0x400C40A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD7_L*>(0x400C40A4); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD1_L*>(0x400C40A4); }
};

// Message Buffer 2 ID Register
//
union MB2_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_ID &Instance() { return *reinterpret_cast<volatile MB2_8B_ID*>(0x400C40A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD8_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD8_L*>(0x400C40A8); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD2_L*>(0x400C40A8); }
};

// Message Buffer 1 CS Register
//
union MB1_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB1_32B_CS_L*>(0x400C40A8); }
};

// Message Buffer 2 WORD_8B Register
//
union MB2_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB2_8B_WORD0*>(0x400C40A8); }
};

// Message Buffer 2 WORD0 Register
//
union WORD02 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD02() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD02 &Instance() { return *reinterpret_cast<volatile WORD02*>(0x400C40A8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD9_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD9_L*>(0x400C40AC); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD3_L*>(0x400C40AC); }
};

// Message Buffer 1 ID Register
//
union MB1_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB1_32B_ID_L*>(0x400C40AC); }
};

// Message Buffer 2 WORD_8B Register
//
union MB2_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB2_8B_WORD1*>(0x400C40AC); }
};

// Message Buffer 2 WORD1 Register
//
union WORD12 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD12 &Instance() { return *reinterpret_cast<volatile WORD12*>(0x400C40AC); }
};

// Message Buffer 3 CS Register
//
union CS3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS3 &Instance() { return *reinterpret_cast<volatile CS3*>(0x400C40B0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD10_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD10_L*>(0x400C40B0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD0_L*>(0x400C40B0); }
};

// Message Buffer 2 CS Register
//
union MB2_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB2_16B_CS_L*>(0x400C40B0); }
};

// Message Buffer 3 CS Register
//
union MB3_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_CS &Instance() { return *reinterpret_cast<volatile MB3_8B_CS*>(0x400C40B0); }
};

// Message Buffer 3 ID Register
//
union ID3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID3 &Instance() { return *reinterpret_cast<volatile ID3*>(0x400C40B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD11_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD11_L*>(0x400C40B4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD1_L*>(0x400C40B4); }
};

// Message Buffer 2 ID Register
//
union MB2_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB2_16B_ID_L*>(0x400C40B4); }
};

// Message Buffer 3 ID Register
//
union MB3_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_ID &Instance() { return *reinterpret_cast<volatile MB3_8B_ID*>(0x400C40B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD12_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD12_L*>(0x400C40B8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD2_L*>(0x400C40B8); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD0_L*>(0x400C40B8); }
};

// Message Buffer 3 WORD_8B Register
//
union MB3_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB3_8B_WORD0*>(0x400C40B8); }
};

// Message Buffer 3 WORD0 Register
//
union WORD03 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD03() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD03 &Instance() { return *reinterpret_cast<volatile WORD03*>(0x400C40B8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD13_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD13_L*>(0x400C40BC); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD3_L*>(0x400C40BC); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD1_L*>(0x400C40BC); }
};

// Message Buffer 3 WORD_8B Register
//
union MB3_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB3_8B_WORD1*>(0x400C40BC); }
};

// Message Buffer 3 WORD1 Register
//
union WORD13 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD13 &Instance() { return *reinterpret_cast<volatile WORD13*>(0x400C40BC); }
};

// Message Buffer 4 CS Register
//
union CS4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS4 &Instance() { return *reinterpret_cast<volatile CS4*>(0x400C40C0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD14_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD14_L*>(0x400C40C0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD4_L*>(0x400C40C0); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD2_L*>(0x400C40C0); }
};

// Message Buffer 4 CS Register
//
union MB4_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_CS &Instance() { return *reinterpret_cast<volatile MB4_8B_CS*>(0x400C40C0); }
};

// Message Buffer 4 ID Register
//
union ID4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID4 &Instance() { return *reinterpret_cast<volatile ID4*>(0x400C40C4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD15_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD15_L*>(0x400C40C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD5_L*>(0x400C40C4); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD3_L*>(0x400C40C4); }
};

// Message Buffer 4 ID Register
//
union MB4_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_ID &Instance() { return *reinterpret_cast<volatile MB4_8B_ID*>(0x400C40C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD6_L*>(0x400C40C8); }
};

// Message Buffer 1 CS Register
//
union MB1_64B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB1_64B_CS_L*>(0x400C40C8); }
};

// Message Buffer 3 CS Register
//
union MB3_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB3_16B_CS_L*>(0x400C40C8); }
};

// Message Buffer 4 WORD_8B Register
//
union MB4_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB4_8B_WORD0*>(0x400C40C8); }
};

// Message Buffer 4 WORD0 Register
//
union WORD04 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD04() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD04 &Instance() { return *reinterpret_cast<volatile WORD04*>(0x400C40C8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD7_L*>(0x400C40CC); }
};

// Message Buffer 1 ID Register
//
union MB1_64B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB1_64B_ID_L*>(0x400C40CC); }
};

// Message Buffer 3 ID Register
//
union MB3_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB3_16B_ID_L*>(0x400C40CC); }
};

// Message Buffer 4 WORD_8B Register
//
union MB4_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB4_8B_WORD1*>(0x400C40CC); }
};

// Message Buffer 4 WORD1 Register
//
union WORD14 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD14 &Instance() { return *reinterpret_cast<volatile WORD14*>(0x400C40CC); }
};

// Message Buffer 5 CS Register
//
union CS5 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS5 &Instance() { return *reinterpret_cast<volatile CS5*>(0x400C40D0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD0_L*>(0x400C40D0); }
};

// Message Buffer 2 CS Register
//
union MB2_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB2_32B_CS_L*>(0x400C40D0); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD0_L*>(0x400C40D0); }
};

// Message Buffer 5 CS Register
//
union MB5_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_CS &Instance() { return *reinterpret_cast<volatile MB5_8B_CS*>(0x400C40D0); }
};

// Message Buffer 5 ID Register
//
union ID5 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID5 &Instance() { return *reinterpret_cast<volatile ID5*>(0x400C40D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD1_L*>(0x400C40D4); }
};

// Message Buffer 2 ID Register
//
union MB2_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB2_32B_ID_L*>(0x400C40D4); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD1_L*>(0x400C40D4); }
};

// Message Buffer 5 ID Register
//
union MB5_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_ID &Instance() { return *reinterpret_cast<volatile MB5_8B_ID*>(0x400C40D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD2_L*>(0x400C40D8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD0_L*>(0x400C40D8); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD2_L*>(0x400C40D8); }
};

// Message Buffer 5 WORD_8B Register
//
union MB5_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB5_8B_WORD0*>(0x400C40D8); }
};

// Message Buffer 5 WORD0 Register
//
union WORD05 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD05() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD05 &Instance() { return *reinterpret_cast<volatile WORD05*>(0x400C40D8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD3_L*>(0x400C40DC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD1_L*>(0x400C40DC); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD3_L*>(0x400C40DC); }
};

// Message Buffer 5 WORD_8B Register
//
union MB5_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB5_8B_WORD1*>(0x400C40DC); }
};

// Message Buffer 5 WORD1 Register
//
union WORD15 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD15 &Instance() { return *reinterpret_cast<volatile WORD15*>(0x400C40DC); }
};

// Message Buffer 6 CS Register
//
union CS6 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS6 &Instance() { return *reinterpret_cast<volatile CS6*>(0x400C40E0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD4_L*>(0x400C40E0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD2_L*>(0x400C40E0); }
};

// Message Buffer 4 CS Register
//
union MB4_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB4_16B_CS_L*>(0x400C40E0); }
};

// Message Buffer 6 CS Register
//
union MB6_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_CS &Instance() { return *reinterpret_cast<volatile MB6_8B_CS*>(0x400C40E0); }
};

// Message Buffer 6 ID Register
//
union ID6 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID6 &Instance() { return *reinterpret_cast<volatile ID6*>(0x400C40E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD5_L*>(0x400C40E4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD3_L*>(0x400C40E4); }
};

// Message Buffer 4 ID Register
//
union MB4_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB4_16B_ID_L*>(0x400C40E4); }
};

// Message Buffer 6 ID Register
//
union MB6_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_ID &Instance() { return *reinterpret_cast<volatile MB6_8B_ID*>(0x400C40E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD6_L*>(0x400C40E8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD4_L*>(0x400C40E8); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD0_L*>(0x400C40E8); }
};

// Message Buffer 6 WORD_8B Register
//
union MB6_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB6_8B_WORD0*>(0x400C40E8); }
};

// Message Buffer 6 WORD0 Register
//
union WORD06 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD06() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD06 &Instance() { return *reinterpret_cast<volatile WORD06*>(0x400C40E8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD7_L*>(0x400C40EC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD5_L*>(0x400C40EC); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD1_L*>(0x400C40EC); }
};

// Message Buffer 6 WORD_8B Register
//
union MB6_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB6_8B_WORD1*>(0x400C40EC); }
};

// Message Buffer 6 WORD1 Register
//
union WORD16 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD16 &Instance() { return *reinterpret_cast<volatile WORD16*>(0x400C40EC); }
};

// Message Buffer 7 CS Register
//
union CS7 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS7 &Instance() { return *reinterpret_cast<volatile CS7*>(0x400C40F0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD8_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD8_L*>(0x400C40F0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD6_L*>(0x400C40F0); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD2_L*>(0x400C40F0); }
};

// Message Buffer 7 CS Register
//
union MB7_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_CS &Instance() { return *reinterpret_cast<volatile MB7_8B_CS*>(0x400C40F0); }
};

// Message Buffer 7 ID Register
//
union ID7 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID7 &Instance() { return *reinterpret_cast<volatile ID7*>(0x400C40F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD9_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD9_L*>(0x400C40F4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD7_L*>(0x400C40F4); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD3_L*>(0x400C40F4); }
};

// Message Buffer 7 ID Register
//
union MB7_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_ID &Instance() { return *reinterpret_cast<volatile MB7_8B_ID*>(0x400C40F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD10_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD10_L*>(0x400C40F8); }
};

// Message Buffer 3 CS Register
//
union MB3_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB3_32B_CS_L*>(0x400C40F8); }
};

// Message Buffer 5 CS Register
//
union MB5_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB5_16B_CS_L*>(0x400C40F8); }
};

// Message Buffer 7 WORD_8B Register
//
union MB7_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB7_8B_WORD0*>(0x400C40F8); }
};

// Message Buffer 7 WORD0 Register
//
union WORD07 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD07() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD07 &Instance() { return *reinterpret_cast<volatile WORD07*>(0x400C40F8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD11_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD11_L*>(0x400C40FC); }
};

// Message Buffer 3 ID Register
//
union MB3_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB3_32B_ID_L*>(0x400C40FC); }
};

// Message Buffer 5 ID Register
//
union MB5_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB5_16B_ID_L*>(0x400C40FC); }
};

// Message Buffer 7 WORD_8B Register
//
union MB7_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB7_8B_WORD1*>(0x400C40FC); }
};

// Message Buffer 7 WORD1 Register
//
union WORD17 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD17 &Instance() { return *reinterpret_cast<volatile WORD17*>(0x400C40FC); }
};

// Message Buffer 8 CS Register
//
union CS8 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS8 &Instance() { return *reinterpret_cast<volatile CS8*>(0x400C4100); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD12_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD12_L*>(0x400C4100); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD0_L*>(0x400C4100); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD0_L*>(0x400C4100); }
};

// Message Buffer 8 CS Register
//
union MB8_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_CS &Instance() { return *reinterpret_cast<volatile MB8_8B_CS*>(0x400C4100); }
};

// Message Buffer 8 ID Register
//
union ID8 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID8 &Instance() { return *reinterpret_cast<volatile ID8*>(0x400C4104); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD13_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD13_L*>(0x400C4104); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD1_L*>(0x400C4104); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD1_L*>(0x400C4104); }
};

// Message Buffer 8 ID Register
//
union MB8_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_ID &Instance() { return *reinterpret_cast<volatile MB8_8B_ID*>(0x400C4104); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD14_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD14_L*>(0x400C4108); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD2_L*>(0x400C4108); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD2_L*>(0x400C4108); }
};

// Message Buffer 8 WORD_8B Register
//
union MB8_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB8_8B_WORD0*>(0x400C4108); }
};

// Message Buffer 8 WORD0 Register
//
union WORD08 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD08() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD08 &Instance() { return *reinterpret_cast<volatile WORD08*>(0x400C4108); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD15_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD15_L*>(0x400C410C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD3_L*>(0x400C410C); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD3_L*>(0x400C410C); }
};

// Message Buffer 8 WORD_8B Register
//
union MB8_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB8_8B_WORD1*>(0x400C410C); }
};

// Message Buffer 8 WORD1 Register
//
union WORD18 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD18 &Instance() { return *reinterpret_cast<volatile WORD18*>(0x400C410C); }
};

// Message Buffer 9 CS Register
//
union CS9 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS9 &Instance() { return *reinterpret_cast<volatile CS9*>(0x400C4110); }
};

// Message Buffer 2 CS Register
//
union MB2_64B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB2_64B_CS_L*>(0x400C4110); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD4_L*>(0x400C4110); }
};

// Message Buffer 6 CS Register
//
union MB6_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB6_16B_CS_L*>(0x400C4110); }
};

// Message Buffer 9 CS Register
//
union MB9_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_CS &Instance() { return *reinterpret_cast<volatile MB9_8B_CS*>(0x400C4110); }
};

// Message Buffer 9 ID Register
//
union ID9 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID9 &Instance() { return *reinterpret_cast<volatile ID9*>(0x400C4114); }
};

// Message Buffer 2 ID Register
//
union MB2_64B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB2_64B_ID_L*>(0x400C4114); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD5_L*>(0x400C4114); }
};

// Message Buffer 6 ID Register
//
union MB6_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB6_16B_ID_L*>(0x400C4114); }
};

// Message Buffer 9 ID Register
//
union MB9_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_ID &Instance() { return *reinterpret_cast<volatile MB9_8B_ID*>(0x400C4114); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD0_L*>(0x400C4118); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD6_L*>(0x400C4118); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD0_L*>(0x400C4118); }
};

// Message Buffer 9 WORD_8B Register
//
union MB9_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB9_8B_WORD0*>(0x400C4118); }
};

// Message Buffer 9 WORD0 Register
//
union WORD09 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD09() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD09 &Instance() { return *reinterpret_cast<volatile WORD09*>(0x400C4118); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD1_L*>(0x400C411C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD7_L*>(0x400C411C); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD1_L*>(0x400C411C); }
};

// Message Buffer 9 WORD_8B Register
//
union MB9_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB9_8B_WORD1*>(0x400C411C); }
};

// Message Buffer 9 WORD1 Register
//
union WORD19 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD19 &Instance() { return *reinterpret_cast<volatile WORD19*>(0x400C411C); }
};

// Message Buffer 10 CS Register
//
union CS10 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS10 &Instance() { return *reinterpret_cast<volatile CS10*>(0x400C4120); }
};

// Message Buffer 10 CS Register
//
union MB10_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_CS &Instance() { return *reinterpret_cast<volatile MB10_8B_CS*>(0x400C4120); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD2_L*>(0x400C4120); }
};

// Message Buffer 4 CS Register
//
union MB4_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB4_32B_CS_L*>(0x400C4120); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD2_L*>(0x400C4120); }
};

// Message Buffer 10 ID Register
//
union ID10 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID10 &Instance() { return *reinterpret_cast<volatile ID10*>(0x400C4124); }
};

// Message Buffer 10 ID Register
//
union MB10_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_ID &Instance() { return *reinterpret_cast<volatile MB10_8B_ID*>(0x400C4124); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD3_L*>(0x400C4124); }
};

// Message Buffer 4 ID Register
//
union MB4_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB4_32B_ID_L*>(0x400C4124); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD3_L*>(0x400C4124); }
};

// Message Buffer 10 WORD_8B Register
//
union MB10_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB10_8B_WORD0*>(0x400C4128); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD4_L*>(0x400C4128); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD0_L*>(0x400C4128); }
};

// Message Buffer 7 CS Register
//
union MB7_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB7_16B_CS_L*>(0x400C4128); }
};

// Message Buffer 10 WORD0 Register
//
union WORD010 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD010() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD010 &Instance() { return *reinterpret_cast<volatile WORD010*>(0x400C4128); }
};

// Message Buffer 10 WORD_8B Register
//
union MB10_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB10_8B_WORD1*>(0x400C412C); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD5_L*>(0x400C412C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD1_L*>(0x400C412C); }
};

// Message Buffer 7 ID Register
//
union MB7_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB7_16B_ID_L*>(0x400C412C); }
};

// Message Buffer 10 WORD1 Register
//
union WORD110 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD110() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD110 &Instance() { return *reinterpret_cast<volatile WORD110*>(0x400C412C); }
};

// Message Buffer 11 CS Register
//
union CS11 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS11 &Instance() { return *reinterpret_cast<volatile CS11*>(0x400C4130); }
};

// Message Buffer 11 CS Register
//
union MB11_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_CS &Instance() { return *reinterpret_cast<volatile MB11_8B_CS*>(0x400C4130); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD6_L*>(0x400C4130); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD2_L*>(0x400C4130); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD0_L*>(0x400C4130); }
};

// Message Buffer 11 ID Register
//
union ID11 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID11 &Instance() { return *reinterpret_cast<volatile ID11*>(0x400C4134); }
};

// Message Buffer 11 ID Register
//
union MB11_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_ID &Instance() { return *reinterpret_cast<volatile MB11_8B_ID*>(0x400C4134); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD7_L*>(0x400C4134); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD3_L*>(0x400C4134); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD1_L*>(0x400C4134); }
};

// Message Buffer 11 WORD_8B Register
//
union MB11_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB11_8B_WORD0*>(0x400C4138); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD8_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD8_L*>(0x400C4138); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD4_L*>(0x400C4138); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD2_L*>(0x400C4138); }
};

// Message Buffer 11 WORD0 Register
//
union WORD011 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD011() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD011 &Instance() { return *reinterpret_cast<volatile WORD011*>(0x400C4138); }
};

// Message Buffer 11 WORD_8B Register
//
union MB11_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB11_8B_WORD1*>(0x400C413C); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD9_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD9_L*>(0x400C413C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD5_L*>(0x400C413C); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD3_L*>(0x400C413C); }
};

// Message Buffer 11 WORD1 Register
//
union WORD111 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD111() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD111 &Instance() { return *reinterpret_cast<volatile WORD111*>(0x400C413C); }
};

// Message Buffer 12 CS Register
//
union CS12 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS12 &Instance() { return *reinterpret_cast<volatile CS12*>(0x400C4140); }
};

// Message Buffer 12 CS Register
//
union MB12_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_CS &Instance() { return *reinterpret_cast<volatile MB12_8B_CS*>(0x400C4140); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD10_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD10_L*>(0x400C4140); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD6_L*>(0x400C4140); }
};

// Message Buffer 8 CS Register
//
union MB8_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB8_16B_CS_L*>(0x400C4140); }
};

// Message Buffer 12 ID Register
//
union ID12 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID12 &Instance() { return *reinterpret_cast<volatile ID12*>(0x400C4144); }
};

// Message Buffer 12 ID Register
//
union MB12_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_ID &Instance() { return *reinterpret_cast<volatile MB12_8B_ID*>(0x400C4144); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD11_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD11_L*>(0x400C4144); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD7_L*>(0x400C4144); }
};

// Message Buffer 8 ID Register
//
union MB8_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB8_16B_ID_L*>(0x400C4144); }
};

// Message Buffer 12 WORD_8B Register
//
union MB12_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB12_8B_WORD0*>(0x400C4148); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD12_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD12_L*>(0x400C4148); }
};

// Message Buffer 5 CS Register
//
union MB5_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB5_32B_CS_L*>(0x400C4148); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD0_L*>(0x400C4148); }
};

// Message Buffer 12 WORD0 Register
//
union WORD012 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD012() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD012 &Instance() { return *reinterpret_cast<volatile WORD012*>(0x400C4148); }
};

// Message Buffer 12 WORD_8B Register
//
union MB12_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB12_8B_WORD1*>(0x400C414C); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD13_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD13_L*>(0x400C414C); }
};

// Message Buffer 5 ID Register
//
union MB5_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB5_32B_ID_L*>(0x400C414C); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD1_L*>(0x400C414C); }
};

// Message Buffer 12 WORD1 Register
//
union WORD112 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD112() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD112 &Instance() { return *reinterpret_cast<volatile WORD112*>(0x400C414C); }
};

// Message Buffer 13 CS Register
//
union CS13 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS13 &Instance() { return *reinterpret_cast<volatile CS13*>(0x400C4150); }
};

// Message Buffer 13 CS Register
//
union MB13_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_CS &Instance() { return *reinterpret_cast<volatile MB13_8B_CS*>(0x400C4150); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD14_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD14_L*>(0x400C4150); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD0_L*>(0x400C4150); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD2_L*>(0x400C4150); }
};

// Message Buffer 13 ID Register
//
union ID13 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID13 &Instance() { return *reinterpret_cast<volatile ID13*>(0x400C4154); }
};

// Message Buffer 13 ID Register
//
union MB13_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_ID &Instance() { return *reinterpret_cast<volatile MB13_8B_ID*>(0x400C4154); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD15_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD15_L*>(0x400C4154); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD1_L*>(0x400C4154); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD3_L*>(0x400C4154); }
};

// Message Buffer 13 WORD_8B Register
//
union MB13_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB13_8B_WORD0*>(0x400C4158); }
};

// Message Buffer 3 CS Register
//
union MB3_64B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB3_64B_CS_L*>(0x400C4158); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD2_L*>(0x400C4158); }
};

// Message Buffer 9 CS Register
//
union MB9_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB9_16B_CS_L*>(0x400C4158); }
};

// Message Buffer 13 WORD0 Register
//
union WORD013 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD013() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD013 &Instance() { return *reinterpret_cast<volatile WORD013*>(0x400C4158); }
};

// Message Buffer 13 WORD_8B Register
//
union MB13_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB13_8B_WORD1*>(0x400C415C); }
};

// Message Buffer 3 ID Register
//
union MB3_64B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB3_64B_ID_L*>(0x400C415C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD3_L*>(0x400C415C); }
};

// Message Buffer 9 ID Register
//
union MB9_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB9_16B_ID_L*>(0x400C415C); }
};

// Message Buffer 13 WORD1 Register
//
union WORD113 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD113() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD113 &Instance() { return *reinterpret_cast<volatile WORD113*>(0x400C415C); }
};

// Message Buffer 14 CS Register
//
union CS14 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS14 &Instance() { return *reinterpret_cast<volatile CS14*>(0x400C4160); }
};

// Message Buffer 14 CS Register
//
union MB14_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_CS &Instance() { return *reinterpret_cast<volatile MB14_8B_CS*>(0x400C4160); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD0_L*>(0x400C4160); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD4_L*>(0x400C4160); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD0_L*>(0x400C4160); }
};

// Message Buffer 14 ID Register
//
union ID14 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID14 &Instance() { return *reinterpret_cast<volatile ID14*>(0x400C4164); }
};

// Message Buffer 14 ID Register
//
union MB14_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_ID &Instance() { return *reinterpret_cast<volatile MB14_8B_ID*>(0x400C4164); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD1_L*>(0x400C4164); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD5_L*>(0x400C4164); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD1_L*>(0x400C4164); }
};

// Message Buffer 14 WORD_8B Register
//
union MB14_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB14_8B_WORD0*>(0x400C4168); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD2_L*>(0x400C4168); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD6_L*>(0x400C4168); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD2_L*>(0x400C4168); }
};

// Message Buffer 14 WORD0 Register
//
union WORD014 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD014() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD014 &Instance() { return *reinterpret_cast<volatile WORD014*>(0x400C4168); }
};

// Message Buffer 14 WORD_8B Register
//
union MB14_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB14_8B_WORD1*>(0x400C416C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD3_L*>(0x400C416C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD7_L*>(0x400C416C); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD3_L*>(0x400C416C); }
};

// Message Buffer 14 WORD1 Register
//
union WORD114 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD114() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD114 &Instance() { return *reinterpret_cast<volatile WORD114*>(0x400C416C); }
};

// Message Buffer 15 CS Register
//
union CS15 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS15 &Instance() { return *reinterpret_cast<volatile CS15*>(0x400C4170); }
};

// Message Buffer 10 CS Register
//
union MB10_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB10_16B_CS_L*>(0x400C4170); }
};

// Message Buffer 15 CS Register
//
union MB15_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_CS &Instance() { return *reinterpret_cast<volatile MB15_8B_CS*>(0x400C4170); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD4_L*>(0x400C4170); }
};

// Message Buffer 6 CS Register
//
union MB6_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB6_32B_CS_L*>(0x400C4170); }
};

// Message Buffer 15 ID Register
//
union ID15 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID15 &Instance() { return *reinterpret_cast<volatile ID15*>(0x400C4174); }
};

// Message Buffer 10 ID Register
//
union MB10_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB10_16B_ID_L*>(0x400C4174); }
};

// Message Buffer 15 ID Register
//
union MB15_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_ID &Instance() { return *reinterpret_cast<volatile MB15_8B_ID*>(0x400C4174); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD5_L*>(0x400C4174); }
};

// Message Buffer 6 ID Register
//
union MB6_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB6_32B_ID_L*>(0x400C4174); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD0_L*>(0x400C4178); }
};

// Message Buffer 15 WORD_8B Register
//
union MB15_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB15_8B_WORD0*>(0x400C4178); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD6_L*>(0x400C4178); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD0_L*>(0x400C4178); }
};

// Message Buffer 15 WORD0 Register
//
union WORD015 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD015() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD015 &Instance() { return *reinterpret_cast<volatile WORD015*>(0x400C4178); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD1_L*>(0x400C417C); }
};

// Message Buffer 15 WORD_8B Register
//
union MB15_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB15_8B_WORD1*>(0x400C417C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD7_L*>(0x400C417C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD1_L*>(0x400C417C); }
};

// Message Buffer 15 WORD1 Register
//
union WORD115 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD115() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD115 &Instance() { return *reinterpret_cast<volatile WORD115*>(0x400C417C); }
};

// Message Buffer 16 CS Register
//
union CS16 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS16 &Instance() { return *reinterpret_cast<volatile CS16*>(0x400C4180); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD2_L*>(0x400C4180); }
};

// Message Buffer 16 CS Register
//
union MB16_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_CS &Instance() { return *reinterpret_cast<volatile MB16_8B_CS*>(0x400C4180); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD8_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD8_L*>(0x400C4180); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD2_L*>(0x400C4180); }
};

// Message Buffer 16 ID Register
//
union ID16 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID16 &Instance() { return *reinterpret_cast<volatile ID16*>(0x400C4184); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD3_L*>(0x400C4184); }
};

// Message Buffer 16 ID Register
//
union MB16_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_ID &Instance() { return *reinterpret_cast<volatile MB16_8B_ID*>(0x400C4184); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD9_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD9_L*>(0x400C4184); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD3_L*>(0x400C4184); }
};

// Message Buffer 11 CS Register
//
union MB11_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB11_16B_CS_L*>(0x400C4188); }
};

// Message Buffer 16 WORD_8B Register
//
union MB16_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB16_8B_WORD0*>(0x400C4188); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD10_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD10_L*>(0x400C4188); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD4_L*>(0x400C4188); }
};

// Message Buffer 16 WORD0 Register
//
union WORD016 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD016() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD016 &Instance() { return *reinterpret_cast<volatile WORD016*>(0x400C4188); }
};

// Message Buffer 11 ID Register
//
union MB11_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB11_16B_ID_L*>(0x400C418C); }
};

// Message Buffer 16 WORD_8B Register
//
union MB16_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB16_8B_WORD1*>(0x400C418C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD11_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD11_L*>(0x400C418C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD5_L*>(0x400C418C); }
};

// Message Buffer 16 WORD1 Register
//
union WORD116 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD116() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD116 &Instance() { return *reinterpret_cast<volatile WORD116*>(0x400C418C); }
};

// Message Buffer 17 CS Register
//
union CS17 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS17 &Instance() { return *reinterpret_cast<volatile CS17*>(0x400C4190); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD0_L*>(0x400C4190); }
};

// Message Buffer 17 CS Register
//
union MB17_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_CS &Instance() { return *reinterpret_cast<volatile MB17_8B_CS*>(0x400C4190); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD12_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD12_L*>(0x400C4190); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD6_L*>(0x400C4190); }
};

// Message Buffer 17 ID Register
//
union ID17 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID17 &Instance() { return *reinterpret_cast<volatile ID17*>(0x400C4194); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD1_L*>(0x400C4194); }
};

// Message Buffer 17 ID Register
//
union MB17_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_ID &Instance() { return *reinterpret_cast<volatile MB17_8B_ID*>(0x400C4194); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD13_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD13_L*>(0x400C4194); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD7_L*>(0x400C4194); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD2_L*>(0x400C4198); }
};

// Message Buffer 17 WORD_8B Register
//
union MB17_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB17_8B_WORD0*>(0x400C4198); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD14_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD14_L*>(0x400C4198); }
};

// Message Buffer 7 CS Register
//
union MB7_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB7_32B_CS_L*>(0x400C4198); }
};

// Message Buffer 17 WORD0 Register
//
union WORD017 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD017() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD017 &Instance() { return *reinterpret_cast<volatile WORD017*>(0x400C4198); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD3_L*>(0x400C419C); }
};

// Message Buffer 17 WORD_8B Register
//
union MB17_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB17_8B_WORD1*>(0x400C419C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD15_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD15_L*>(0x400C419C); }
};

// Message Buffer 7 ID Register
//
union MB7_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB7_32B_ID_L*>(0x400C419C); }
};

// Message Buffer 17 WORD1 Register
//
union WORD117 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD117() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD117 &Instance() { return *reinterpret_cast<volatile WORD117*>(0x400C419C); }
};

// Message Buffer 18 CS Register
//
union CS18 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS18 &Instance() { return *reinterpret_cast<volatile CS18*>(0x400C41A0); }
};

// Message Buffer 12 CS Register
//
union MB12_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB12_16B_CS_L*>(0x400C41A0); }
};

// Message Buffer 18 CS Register
//
union MB18_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_CS &Instance() { return *reinterpret_cast<volatile MB18_8B_CS*>(0x400C41A0); }
};

// Message Buffer 4 CS Register
//
union MB4_64B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB4_64B_CS_L*>(0x400C41A0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD0_L*>(0x400C41A0); }
};

// Message Buffer 18 ID Register
//
union ID18 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID18 &Instance() { return *reinterpret_cast<volatile ID18*>(0x400C41A4); }
};

// Message Buffer 12 ID Register
//
union MB12_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB12_16B_ID_L*>(0x400C41A4); }
};

// Message Buffer 18 ID Register
//
union MB18_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_ID &Instance() { return *reinterpret_cast<volatile MB18_8B_ID*>(0x400C41A4); }
};

// Message Buffer 4 ID Register
//
union MB4_64B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB4_64B_ID_L*>(0x400C41A4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD1_L*>(0x400C41A4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD0_L*>(0x400C41A8); }
};

// Message Buffer 18 WORD_8B Register
//
union MB18_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB18_8B_WORD0*>(0x400C41A8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD0_L*>(0x400C41A8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD2_L*>(0x400C41A8); }
};

// Message Buffer 18 WORD0 Register
//
union WORD018 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD018() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD018 &Instance() { return *reinterpret_cast<volatile WORD018*>(0x400C41A8); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD1_L*>(0x400C41AC); }
};

// Message Buffer 18 WORD_8B Register
//
union MB18_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB18_8B_WORD1*>(0x400C41AC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD1_L*>(0x400C41AC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD3_L*>(0x400C41AC); }
};

// Message Buffer 18 WORD1 Register
//
union WORD118 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD118() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD118 &Instance() { return *reinterpret_cast<volatile WORD118*>(0x400C41AC); }
};

// Message Buffer 19 CS Register
//
union CS19 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS19 &Instance() { return *reinterpret_cast<volatile CS19*>(0x400C41B0); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD2_L*>(0x400C41B0); }
};

// Message Buffer 19 CS Register
//
union MB19_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_CS &Instance() { return *reinterpret_cast<volatile MB19_8B_CS*>(0x400C41B0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD2_L*>(0x400C41B0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD4_L*>(0x400C41B0); }
};

// Message Buffer 19 ID Register
//
union ID19 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID19 &Instance() { return *reinterpret_cast<volatile ID19*>(0x400C41B4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD3_L*>(0x400C41B4); }
};

// Message Buffer 19 ID Register
//
union MB19_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_ID &Instance() { return *reinterpret_cast<volatile MB19_8B_ID*>(0x400C41B4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD3_L*>(0x400C41B4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD5_L*>(0x400C41B4); }
};

// Message Buffer 13 CS Register
//
union MB13_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB13_16B_CS_L*>(0x400C41B8); }
};

// Message Buffer 19 WORD_8B Register
//
union MB19_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB19_8B_WORD0*>(0x400C41B8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD4_L*>(0x400C41B8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD6_L*>(0x400C41B8); }
};

// Message Buffer 19 WORD0 Register
//
union WORD019 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD019() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD019 &Instance() { return *reinterpret_cast<volatile WORD019*>(0x400C41B8); }
};

// Message Buffer 13 ID Register
//
union MB13_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB13_16B_ID_L*>(0x400C41BC); }
};

// Message Buffer 19 WORD_8B Register
//
union MB19_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB19_8B_WORD1*>(0x400C41BC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD5_L*>(0x400C41BC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD7_L*>(0x400C41BC); }
};

// Message Buffer 19 WORD1 Register
//
union WORD119 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD119() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD119 &Instance() { return *reinterpret_cast<volatile WORD119*>(0x400C41BC); }
};

// Message Buffer 20 CS Register
//
union CS20 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS20 &Instance() { return *reinterpret_cast<volatile CS20*>(0x400C41C0); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD0_L*>(0x400C41C0); }
};

// Message Buffer 20 CS Register
//
union MB20_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_CS &Instance() { return *reinterpret_cast<volatile MB20_8B_CS*>(0x400C41C0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD6_L*>(0x400C41C0); }
};

// Message Buffer 8 CS Register
//
union MB8_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB8_32B_CS_L*>(0x400C41C0); }
};

// Message Buffer 20 ID Register
//
union ID20 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID20 &Instance() { return *reinterpret_cast<volatile ID20*>(0x400C41C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD1_L*>(0x400C41C4); }
};

// Message Buffer 20 ID Register
//
union MB20_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_ID &Instance() { return *reinterpret_cast<volatile MB20_8B_ID*>(0x400C41C4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD7_L*>(0x400C41C4); }
};

// Message Buffer 8 ID Register
//
union MB8_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB8_32B_ID_L*>(0x400C41C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD2_L*>(0x400C41C8); }
};

// Message Buffer 20 WORD_8B Register
//
union MB20_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB20_8B_WORD0*>(0x400C41C8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD8_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD8_L*>(0x400C41C8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD0_L*>(0x400C41C8); }
};

// Message Buffer 20 WORD0 Register
//
union WORD020 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD020() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD020 &Instance() { return *reinterpret_cast<volatile WORD020*>(0x400C41C8); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD3_L*>(0x400C41CC); }
};

// Message Buffer 20 WORD_8B Register
//
union MB20_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB20_8B_WORD1*>(0x400C41CC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD9_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD9_L*>(0x400C41CC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD1_L*>(0x400C41CC); }
};

// Message Buffer 20 WORD1 Register
//
union WORD120 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD120() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD120 &Instance() { return *reinterpret_cast<volatile WORD120*>(0x400C41CC); }
};

// Message Buffer 21 CS Register
//
union CS21 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS21 &Instance() { return *reinterpret_cast<volatile CS21*>(0x400C41D0); }
};

// Message Buffer 14 CS Register
//
union MB14_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB14_16B_CS_L*>(0x400C41D0); }
};

// Message Buffer 21 CS Register
//
union MB21_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_CS &Instance() { return *reinterpret_cast<volatile MB21_8B_CS*>(0x400C41D0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD10_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD10_L*>(0x400C41D0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD2_L*>(0x400C41D0); }
};

// Message Buffer 21 ID Register
//
union ID21 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID21 &Instance() { return *reinterpret_cast<volatile ID21*>(0x400C41D4); }
};

// Message Buffer 14 ID Register
//
union MB14_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB14_16B_ID_L*>(0x400C41D4); }
};

// Message Buffer 21 ID Register
//
union MB21_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_ID &Instance() { return *reinterpret_cast<volatile MB21_8B_ID*>(0x400C41D4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD11_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD11_L*>(0x400C41D4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD3_L*>(0x400C41D4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD0_L*>(0x400C41D8); }
};

// Message Buffer 21 WORD_8B Register
//
union MB21_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB21_8B_WORD0*>(0x400C41D8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD12_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD12_L*>(0x400C41D8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD4_L*>(0x400C41D8); }
};

// Message Buffer 21 WORD0 Register
//
union WORD021 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD021() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD021 &Instance() { return *reinterpret_cast<volatile WORD021*>(0x400C41D8); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD1_L*>(0x400C41DC); }
};

// Message Buffer 21 WORD_8B Register
//
union MB21_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB21_8B_WORD1*>(0x400C41DC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD13_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD13_L*>(0x400C41DC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD5_L*>(0x400C41DC); }
};

// Message Buffer 21 WORD1 Register
//
union WORD121 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD121() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD121 &Instance() { return *reinterpret_cast<volatile WORD121*>(0x400C41DC); }
};

// Message Buffer 22 CS Register
//
union CS22 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS22 &Instance() { return *reinterpret_cast<volatile CS22*>(0x400C41E0); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD2_L*>(0x400C41E0); }
};

// Message Buffer 22 CS Register
//
union MB22_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_CS &Instance() { return *reinterpret_cast<volatile MB22_8B_CS*>(0x400C41E0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD14_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD14_L*>(0x400C41E0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD6_L*>(0x400C41E0); }
};

// Message Buffer 22 ID Register
//
union ID22 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID22 &Instance() { return *reinterpret_cast<volatile ID22*>(0x400C41E4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD3_L*>(0x400C41E4); }
};

// Message Buffer 22 ID Register
//
union MB22_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_ID &Instance() { return *reinterpret_cast<volatile MB22_8B_ID*>(0x400C41E4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD15_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD15_L*>(0x400C41E4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD7_L*>(0x400C41E4); }
};

// Message Buffer 15 CS Register
//
union MB15_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB15_16B_CS_L*>(0x400C41E8); }
};

// Message Buffer 22 WORD_8B Register
//
union MB22_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB22_8B_WORD0*>(0x400C41E8); }
};

// Message Buffer 5 CS Register
//
union MB5_64B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB5_64B_CS_L*>(0x400C41E8); }
};

// Message Buffer 9 CS Register
//
union MB9_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB9_32B_CS_L*>(0x400C41E8); }
};

// Message Buffer 22 WORD0 Register
//
union WORD022 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD022() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD022 &Instance() { return *reinterpret_cast<volatile WORD022*>(0x400C41E8); }
};

// Message Buffer 15 ID Register
//
union MB15_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB15_16B_ID_L*>(0x400C41EC); }
};

// Message Buffer 22 WORD_8B Register
//
union MB22_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB22_8B_WORD1*>(0x400C41EC); }
};

// Message Buffer 5 ID Register
//
union MB5_64B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB5_64B_ID_L*>(0x400C41EC); }
};

// Message Buffer 9 ID Register
//
union MB9_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB9_32B_ID_L*>(0x400C41EC); }
};

// Message Buffer 22 WORD1 Register
//
union WORD122 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD122() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD122 &Instance() { return *reinterpret_cast<volatile WORD122*>(0x400C41EC); }
};

// Message Buffer 23 CS Register
//
union CS23 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS23 &Instance() { return *reinterpret_cast<volatile CS23*>(0x400C41F0); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD0_L*>(0x400C41F0); }
};

// Message Buffer 23 CS Register
//
union MB23_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_CS &Instance() { return *reinterpret_cast<volatile MB23_8B_CS*>(0x400C41F0); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD0_L*>(0x400C41F0); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD0_L*>(0x400C41F0); }
};

// Message Buffer 23 ID Register
//
union ID23 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID23 &Instance() { return *reinterpret_cast<volatile ID23*>(0x400C41F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD1_L*>(0x400C41F4); }
};

// Message Buffer 23 ID Register
//
union MB23_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_ID &Instance() { return *reinterpret_cast<volatile MB23_8B_ID*>(0x400C41F4); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD1_L*>(0x400C41F4); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD1_L*>(0x400C41F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD2_L*>(0x400C41F8); }
};

// Message Buffer 23 WORD_8B Register
//
union MB23_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB23_8B_WORD0*>(0x400C41F8); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD2_L*>(0x400C41F8); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD2_L*>(0x400C41F8); }
};

// Message Buffer 23 WORD0 Register
//
union WORD023 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD023() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD023 &Instance() { return *reinterpret_cast<volatile WORD023*>(0x400C41F8); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD3_L*>(0x400C41FC); }
};

// Message Buffer 23 WORD_8B Register
//
union MB23_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB23_8B_WORD1*>(0x400C41FC); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD3_L*>(0x400C41FC); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD3_L*>(0x400C41FC); }
};

// Message Buffer 23 WORD1 Register
//
union WORD123 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD123() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD123 &Instance() { return *reinterpret_cast<volatile WORD123*>(0x400C41FC); }
};

// Message Buffer 24 CS Register
//
union CS24 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS24 &Instance() { return *reinterpret_cast<volatile CS24*>(0x400C4200); }
};

// Message Buffer 16 CS Register
//
union MB16_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB16_16B_CS_L*>(0x400C4200); }
};

// Message Buffer 24 CS Register
//
union MB24_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_CS &Instance() { return *reinterpret_cast<volatile MB24_8B_CS*>(0x400C4200); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD4_L*>(0x400C4200); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD4_L*>(0x400C4200); }
};

// Message Buffer 24 ID Register
//
union ID24 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID24 &Instance() { return *reinterpret_cast<volatile ID24*>(0x400C4204); }
};

// Message Buffer 16 ID Register
//
union MB16_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB16_16B_ID_L*>(0x400C4204); }
};

// Message Buffer 24 ID Register
//
union MB24_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_ID &Instance() { return *reinterpret_cast<volatile MB24_8B_ID*>(0x400C4204); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD5_L*>(0x400C4204); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD5_L*>(0x400C4204); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD0_L*>(0x400C4208); }
};

// Message Buffer 24 WORD_8B Register
//
union MB24_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB24_8B_WORD0*>(0x400C4208); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD6_L*>(0x400C4208); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD6_L*>(0x400C4208); }
};

// Message Buffer 24 WORD0 Register
//
union WORD024 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD024() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD024 &Instance() { return *reinterpret_cast<volatile WORD024*>(0x400C4208); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD1_L*>(0x400C420C); }
};

// Message Buffer 24 WORD_8B Register
//
union MB24_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB24_8B_WORD1*>(0x400C420C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD7_L*>(0x400C420C); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD7_L*>(0x400C420C); }
};

// Message Buffer 24 WORD1 Register
//
union WORD124 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD124() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD124 &Instance() { return *reinterpret_cast<volatile WORD124*>(0x400C420C); }
};

// Message Buffer 25 CS Register
//
union CS25 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS25 &Instance() { return *reinterpret_cast<volatile CS25*>(0x400C4210); }
};

// Message Buffer 10 CS Register
//
union MB10_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB10_32B_CS_L*>(0x400C4210); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD2_L*>(0x400C4210); }
};

// Message Buffer 25 CS Register
//
union MB25_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_CS &Instance() { return *reinterpret_cast<volatile MB25_8B_CS*>(0x400C4210); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD8_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD8_L*>(0x400C4210); }
};

// Message Buffer 25 ID Register
//
union ID25 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID25 &Instance() { return *reinterpret_cast<volatile ID25*>(0x400C4214); }
};

// Message Buffer 10 ID Register
//
union MB10_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB10_32B_ID_L*>(0x400C4214); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD3_L*>(0x400C4214); }
};

// Message Buffer 25 ID Register
//
union MB25_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_ID &Instance() { return *reinterpret_cast<volatile MB25_8B_ID*>(0x400C4214); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD9_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD9_L*>(0x400C4214); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD0_L*>(0x400C4218); }
};

// Message Buffer 17 CS Register
//
union MB17_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB17_16B_CS_L*>(0x400C4218); }
};

// Message Buffer 25 WORD_8B Register
//
union MB25_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB25_8B_WORD0*>(0x400C4218); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD10_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD10_L*>(0x400C4218); }
};

// Message Buffer 25 WORD0 Register
//
union WORD025 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD025() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD025 &Instance() { return *reinterpret_cast<volatile WORD025*>(0x400C4218); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD1_L*>(0x400C421C); }
};

// Message Buffer 17 ID Register
//
union MB17_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB17_16B_ID_L*>(0x400C421C); }
};

// Message Buffer 25 WORD_8B Register
//
union MB25_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB25_8B_WORD1*>(0x400C421C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD11_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD11_L*>(0x400C421C); }
};

// Message Buffer 25 WORD1 Register
//
union WORD125 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD125() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD125 &Instance() { return *reinterpret_cast<volatile WORD125*>(0x400C421C); }
};

// Message Buffer 26 CS Register
//
union CS26 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS26 &Instance() { return *reinterpret_cast<volatile CS26*>(0x400C4220); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD2_L*>(0x400C4220); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD0_L*>(0x400C4220); }
};

// Message Buffer 26 CS Register
//
union MB26_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_CS &Instance() { return *reinterpret_cast<volatile MB26_8B_CS*>(0x400C4220); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD12_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD12_L*>(0x400C4220); }
};

// Message Buffer 26 ID Register
//
union ID26 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID26 &Instance() { return *reinterpret_cast<volatile ID26*>(0x400C4224); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD3_L*>(0x400C4224); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD1_L*>(0x400C4224); }
};

// Message Buffer 26 ID Register
//
union MB26_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_ID &Instance() { return *reinterpret_cast<volatile MB26_8B_ID*>(0x400C4224); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD13_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD13_L*>(0x400C4224); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD4_L*>(0x400C4228); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD2_L*>(0x400C4228); }
};

// Message Buffer 26 WORD_8B Register
//
union MB26_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB26_8B_WORD0*>(0x400C4228); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD14_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD14_L*>(0x400C4228); }
};

// Message Buffer 26 WORD0 Register
//
union WORD026 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD026() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD026 &Instance() { return *reinterpret_cast<volatile WORD026*>(0x400C4228); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD5_L*>(0x400C422C); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD3_L*>(0x400C422C); }
};

// Message Buffer 26 WORD_8B Register
//
union MB26_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB26_8B_WORD1*>(0x400C422C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD15_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD15_L*>(0x400C422C); }
};

// Message Buffer 26 WORD1 Register
//
union WORD126 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD126() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD126 &Instance() { return *reinterpret_cast<volatile WORD126*>(0x400C422C); }
};

// Message Buffer 27 CS Register
//
union CS27 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS27 &Instance() { return *reinterpret_cast<volatile CS27*>(0x400C4230); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD6_L*>(0x400C4230); }
};

// Message Buffer 18 CS Register
//
union MB18_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB18_16B_CS_L*>(0x400C4230); }
};

// Message Buffer 27 CS Register
//
union MB27_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_CS &Instance() { return *reinterpret_cast<volatile MB27_8B_CS*>(0x400C4230); }
};

// Message Buffer 6 CS Register
//
union MB6_64B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB6_64B_CS_L*>(0x400C4230); }
};

// Message Buffer 27 ID Register
//
union ID27 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID27 &Instance() { return *reinterpret_cast<volatile ID27*>(0x400C4234); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD7_L*>(0x400C4234); }
};

// Message Buffer 18 ID Register
//
union MB18_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB18_16B_ID_L*>(0x400C4234); }
};

// Message Buffer 27 ID Register
//
union MB27_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_ID &Instance() { return *reinterpret_cast<volatile MB27_8B_ID*>(0x400C4234); }
};

// Message Buffer 6 ID Register
//
union MB6_64B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB6_64B_ID_L*>(0x400C4234); }
};

// Message Buffer 11 CS Register
//
union MB11_32B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB11_32B_CS_L*>(0x400C4238); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD0_L*>(0x400C4238); }
};

// Message Buffer 27 WORD_8B Register
//
union MB27_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB27_8B_WORD0*>(0x400C4238); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD0_L*>(0x400C4238); }
};

// Message Buffer 27 WORD0 Register
//
union WORD027 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD027() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD027 &Instance() { return *reinterpret_cast<volatile WORD027*>(0x400C4238); }
};

// Message Buffer 11 ID Register
//
union MB11_32B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB11_32B_ID_L*>(0x400C423C); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD1_L*>(0x400C423C); }
};

// Message Buffer 27 WORD_8B Register
//
union MB27_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB27_8B_WORD1*>(0x400C423C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD1_L*>(0x400C423C); }
};

// Message Buffer 27 WORD1 Register
//
union WORD127 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD127 &Instance() { return *reinterpret_cast<volatile WORD127*>(0x400C423C); }
};

// Message Buffer 28 CS Register
//
union CS28 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS28 &Instance() { return *reinterpret_cast<volatile CS28*>(0x400C4240); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD0_L*>(0x400C4240); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD2_L*>(0x400C4240); }
};

// Message Buffer 28 CS Register
//
union MB28_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_CS &Instance() { return *reinterpret_cast<volatile MB28_8B_CS*>(0x400C4240); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD2_L*>(0x400C4240); }
};

// Message Buffer 28 ID Register
//
union ID28 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID28 &Instance() { return *reinterpret_cast<volatile ID28*>(0x400C4244); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD1_L*>(0x400C4244); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD3_L*>(0x400C4244); }
};

// Message Buffer 28 ID Register
//
union MB28_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_ID &Instance() { return *reinterpret_cast<volatile MB28_8B_ID*>(0x400C4244); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD3_L*>(0x400C4244); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD2_L*>(0x400C4248); }
};

// Message Buffer 19 CS Register
//
union MB19_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB19_16B_CS_L*>(0x400C4248); }
};

// Message Buffer 28 WORD_8B Register
//
union MB28_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB28_8B_WORD0*>(0x400C4248); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD4_L*>(0x400C4248); }
};

// Message Buffer 28 WORD0 Register
//
union WORD028 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD028() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD028 &Instance() { return *reinterpret_cast<volatile WORD028*>(0x400C4248); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD3_L*>(0x400C424C); }
};

// Message Buffer 19 ID Register
//
union MB19_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB19_16B_ID_L*>(0x400C424C); }
};

// Message Buffer 28 WORD_8B Register
//
union MB28_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB28_8B_WORD1*>(0x400C424C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD5_L*>(0x400C424C); }
};

// Message Buffer 28 WORD1 Register
//
union WORD128 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD128() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD128 &Instance() { return *reinterpret_cast<volatile WORD128*>(0x400C424C); }
};

// Message Buffer 29 CS Register
//
union CS29 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS29 &Instance() { return *reinterpret_cast<volatile CS29*>(0x400C4250); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD4_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD4_L*>(0x400C4250); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD0_L*>(0x400C4250); }
};

// Message Buffer 29 CS Register
//
union MB29_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_CS &Instance() { return *reinterpret_cast<volatile MB29_8B_CS*>(0x400C4250); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD6_L*>(0x400C4250); }
};

// Message Buffer 29 ID Register
//
union ID29 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID29 &Instance() { return *reinterpret_cast<volatile ID29*>(0x400C4254); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD5_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD5_L*>(0x400C4254); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD1_L*>(0x400C4254); }
};

// Message Buffer 29 ID Register
//
union MB29_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_ID &Instance() { return *reinterpret_cast<volatile MB29_8B_ID*>(0x400C4254); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD7_L*>(0x400C4254); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD6_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD6_L*>(0x400C4258); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD2_L*>(0x400C4258); }
};

// Message Buffer 29 WORD_8B Register
//
union MB29_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB29_8B_WORD0*>(0x400C4258); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD8_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD8_L*>(0x400C4258); }
};

// Message Buffer 29 WORD0 Register
//
union WORD029 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD029() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD029 &Instance() { return *reinterpret_cast<volatile WORD029*>(0x400C4258); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD7_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD7_L*>(0x400C425C); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD3_L*>(0x400C425C); }
};

// Message Buffer 29 WORD_8B Register
//
union MB29_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB29_8B_WORD1*>(0x400C425C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD9_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD9_L*>(0x400C425C); }
};

// Message Buffer 29 WORD1 Register
//
union WORD129 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD129() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD129 &Instance() { return *reinterpret_cast<volatile WORD129*>(0x400C425C); }
};

// Message Buffer 30 CS Register
//
union CS30 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS30 &Instance() { return *reinterpret_cast<volatile CS30*>(0x400C4260); }
};

// Message Buffer 20 CS Register
//
union MB20_16B_CS_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB20_16B_CS_L*>(0x400C4260); }
};

// Message Buffer 30 CS Register
//
union MB30_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_CS &Instance() { return *reinterpret_cast<volatile MB30_8B_CS*>(0x400C4260); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD10_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD10_L*>(0x400C4260); }
};

// Message Buffer 30 ID Register
//
union ID30 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID30 &Instance() { return *reinterpret_cast<volatile ID30*>(0x400C4264); }
};

// Message Buffer 20 ID Register
//
union MB20_16B_ID_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB20_16B_ID_L*>(0x400C4264); }
};

// Message Buffer 30 ID Register
//
union MB30_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_ID &Instance() { return *reinterpret_cast<volatile MB30_8B_ID*>(0x400C4264); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD11_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD11_L*>(0x400C4264); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD0_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD0_L*>(0x400C4268); }
};

// Message Buffer 30 WORD_8B Register
//
union MB30_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB30_8B_WORD0*>(0x400C4268); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD12_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD12_L*>(0x400C4268); }
};

// Message Buffer 30 WORD0 Register
//
union WORD030 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD030() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD030 &Instance() { return *reinterpret_cast<volatile WORD030*>(0x400C4268); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD1_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD1_L*>(0x400C426C); }
};

// Message Buffer 30 WORD_8B Register
//
union MB30_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB30_8B_WORD1*>(0x400C426C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD13_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD13_L*>(0x400C426C); }
};

// Message Buffer 30 WORD1 Register
//
union WORD130 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD130() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD130 &Instance() { return *reinterpret_cast<volatile WORD130*>(0x400C426C); }
};

// Message Buffer 31 CS Register
//
union CS31 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS31 &Instance() { return *reinterpret_cast<volatile CS31*>(0x400C4270); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD2_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD2_L*>(0x400C4270); }
};

// Message Buffer 31 CS Register
//
union MB31_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_CS &Instance() { return *reinterpret_cast<volatile MB31_8B_CS*>(0x400C4270); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD14_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD14_L*>(0x400C4270); }
};

// Message Buffer 31 ID Register
//
union ID31 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID31 &Instance() { return *reinterpret_cast<volatile ID31*>(0x400C4274); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD3_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD3_L*>(0x400C4274); }
};

// Message Buffer 31 ID Register
//
union MB31_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_ID &Instance() { return *reinterpret_cast<volatile MB31_8B_ID*>(0x400C4274); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD15_L {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD15_L*>(0x400C4274); }
};

// Message Buffer 31 WORD_8B Register
//
union MB31_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB31_8B_WORD0*>(0x400C4278); }
};

// Message Buffer 31 WORD0 Register
//
union WORD031 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD031() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD031 &Instance() { return *reinterpret_cast<volatile WORD031*>(0x400C4278); }
};

// Message Buffer 31 WORD_8B Register
//
union MB31_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB31_8B_WORD1*>(0x400C427C); }
};

// Message Buffer 31 WORD1 Register
//
union WORD131 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD131() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD131 &Instance() { return *reinterpret_cast<volatile WORD131*>(0x400C427C); }
};

// Message Buffer 32 CS Register
//
union CS32 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS32 &Instance() { return *reinterpret_cast<volatile CS32*>(0x400C4280); }
};

// Message Buffer 0 CS Register
//
union MB0_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB0_16B_CS_H*>(0x400C4280); }
};

// Message Buffer 0 CS Register
//
union MB0_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB0_32B_CS_H*>(0x400C4280); }
};

// Message Buffer 0 CS Register
//
union MB0_64B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB0_64B_CS_H*>(0x400C4280); }
};

// Message Buffer 32 CS Register
//
union MB32_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_CS &Instance() { return *reinterpret_cast<volatile MB32_8B_CS*>(0x400C4280); }
};

// Message Buffer 32 ID Register
//
union ID32 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID32 &Instance() { return *reinterpret_cast<volatile ID32*>(0x400C4284); }
};

// Message Buffer 0 ID Register
//
union MB0_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB0_16B_ID_H*>(0x400C4284); }
};

// Message Buffer 0 ID Register
//
union MB0_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB0_32B_ID_H*>(0x400C4284); }
};

// Message Buffer 0 ID Register
//
union MB0_64B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB0_64B_ID_H*>(0x400C4284); }
};

// Message Buffer 32 ID Register
//
union MB32_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_ID &Instance() { return *reinterpret_cast<volatile MB32_8B_ID*>(0x400C4284); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD0_H*>(0x400C4288); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD0_H*>(0x400C4288); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD0_H*>(0x400C4288); }
};

// Message Buffer 32 WORD_8B Register
//
union MB32_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB32_8B_WORD0*>(0x400C4288); }
};

// Message Buffer 32 WORD0 Register
//
union WORD032 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD032() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD032 &Instance() { return *reinterpret_cast<volatile WORD032*>(0x400C4288); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD1_H*>(0x400C428C); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD1_H*>(0x400C428C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD1_H*>(0x400C428C); }
};

// Message Buffer 32 WORD_8B Register
//
union MB32_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB32_8B_WORD1*>(0x400C428C); }
};

// Message Buffer 32 WORD1 Register
//
union WORD132 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD132() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD132 &Instance() { return *reinterpret_cast<volatile WORD132*>(0x400C428C); }
};

// Message Buffer 33 CS Register
//
union CS33 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS33 &Instance() { return *reinterpret_cast<volatile CS33*>(0x400C4290); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD2_H*>(0x400C4290); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD2_H*>(0x400C4290); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD2_H*>(0x400C4290); }
};

// Message Buffer 33 CS Register
//
union MB33_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_CS &Instance() { return *reinterpret_cast<volatile MB33_8B_CS*>(0x400C4290); }
};

// Message Buffer 33 ID Register
//
union ID33 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID33 &Instance() { return *reinterpret_cast<volatile ID33*>(0x400C4294); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD3_H*>(0x400C4294); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD3_H*>(0x400C4294); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD3_H*>(0x400C4294); }
};

// Message Buffer 33 ID Register
//
union MB33_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_ID &Instance() { return *reinterpret_cast<volatile MB33_8B_ID*>(0x400C4294); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD4_H*>(0x400C4298); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD4_H*>(0x400C4298); }
};

// Message Buffer 1 CS Register
//
union MB1_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB1_16B_CS_H*>(0x400C4298); }
};

// Message Buffer 33 WORD_8B Register
//
union MB33_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB33_8B_WORD0*>(0x400C4298); }
};

// Message Buffer 33 WORD0 Register
//
union WORD033 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD033() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD033 &Instance() { return *reinterpret_cast<volatile WORD033*>(0x400C4298); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD5_H*>(0x400C429C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD5_H*>(0x400C429C); }
};

// Message Buffer 1 ID Register
//
union MB1_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB1_16B_ID_H*>(0x400C429C); }
};

// Message Buffer 33 WORD_8B Register
//
union MB33_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB33_8B_WORD1*>(0x400C429C); }
};

// Message Buffer 33 WORD1 Register
//
union WORD133 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD133() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD133 &Instance() { return *reinterpret_cast<volatile WORD133*>(0x400C429C); }
};

// Message Buffer 34 CS Register
//
union CS34 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS34 &Instance() { return *reinterpret_cast<volatile CS34*>(0x400C42A0); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD6_H*>(0x400C42A0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD6_H*>(0x400C42A0); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD0_H*>(0x400C42A0); }
};

// Message Buffer 34 CS Register
//
union MB34_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_CS &Instance() { return *reinterpret_cast<volatile MB34_8B_CS*>(0x400C42A0); }
};

// Message Buffer 34 ID Register
//
union ID34 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID34 &Instance() { return *reinterpret_cast<volatile ID34*>(0x400C42A4); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD7_H*>(0x400C42A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD7_H*>(0x400C42A4); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD1_H*>(0x400C42A4); }
};

// Message Buffer 34 ID Register
//
union MB34_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_ID &Instance() { return *reinterpret_cast<volatile MB34_8B_ID*>(0x400C42A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD8_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD8_H*>(0x400C42A8); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD2_H*>(0x400C42A8); }
};

// Message Buffer 1 CS Register
//
union MB1_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB1_32B_CS_H*>(0x400C42A8); }
};

// Message Buffer 34 WORD_8B Register
//
union MB34_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB34_8B_WORD0*>(0x400C42A8); }
};

// Message Buffer 34 WORD0 Register
//
union WORD034 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD034() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD034 &Instance() { return *reinterpret_cast<volatile WORD034*>(0x400C42A8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD9_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD9_H*>(0x400C42AC); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD3_H*>(0x400C42AC); }
};

// Message Buffer 1 ID Register
//
union MB1_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB1_32B_ID_H*>(0x400C42AC); }
};

// Message Buffer 34 WORD_8B Register
//
union MB34_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB34_8B_WORD1*>(0x400C42AC); }
};

// Message Buffer 34 WORD1 Register
//
union WORD134 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD134() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD134 &Instance() { return *reinterpret_cast<volatile WORD134*>(0x400C42AC); }
};

// Message Buffer 35 CS Register
//
union CS35 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS35 &Instance() { return *reinterpret_cast<volatile CS35*>(0x400C42B0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD10_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD10_H*>(0x400C42B0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD0_H*>(0x400C42B0); }
};

// Message Buffer 2 CS Register
//
union MB2_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB2_16B_CS_H*>(0x400C42B0); }
};

// Message Buffer 35 CS Register
//
union MB35_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_CS &Instance() { return *reinterpret_cast<volatile MB35_8B_CS*>(0x400C42B0); }
};

// Message Buffer 35 ID Register
//
union ID35 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID35 &Instance() { return *reinterpret_cast<volatile ID35*>(0x400C42B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD11_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD11_H*>(0x400C42B4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD1_H*>(0x400C42B4); }
};

// Message Buffer 2 ID Register
//
union MB2_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB2_16B_ID_H*>(0x400C42B4); }
};

// Message Buffer 35 ID Register
//
union MB35_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_ID &Instance() { return *reinterpret_cast<volatile MB35_8B_ID*>(0x400C42B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD12_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD12_H*>(0x400C42B8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD2_H*>(0x400C42B8); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD0_H*>(0x400C42B8); }
};

// Message Buffer 35 WORD_8B Register
//
union MB35_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB35_8B_WORD0*>(0x400C42B8); }
};

// Message Buffer 35 WORD0 Register
//
union WORD035 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD035() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD035 &Instance() { return *reinterpret_cast<volatile WORD035*>(0x400C42B8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD13_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD13_H*>(0x400C42BC); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD3_H*>(0x400C42BC); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD1_H*>(0x400C42BC); }
};

// Message Buffer 35 WORD_8B Register
//
union MB35_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB35_8B_WORD1*>(0x400C42BC); }
};

// Message Buffer 35 WORD1 Register
//
union WORD135 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD135() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD135 &Instance() { return *reinterpret_cast<volatile WORD135*>(0x400C42BC); }
};

// Message Buffer 36 CS Register
//
union CS36 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS36 &Instance() { return *reinterpret_cast<volatile CS36*>(0x400C42C0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD14_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD14_H*>(0x400C42C0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD4_H*>(0x400C42C0); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD2_H*>(0x400C42C0); }
};

// Message Buffer 36 CS Register
//
union MB36_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_CS &Instance() { return *reinterpret_cast<volatile MB36_8B_CS*>(0x400C42C0); }
};

// Message Buffer 36 ID Register
//
union ID36 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID36 &Instance() { return *reinterpret_cast<volatile ID36*>(0x400C42C4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD15_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD15_H*>(0x400C42C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD5_H*>(0x400C42C4); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD3_H*>(0x400C42C4); }
};

// Message Buffer 36 ID Register
//
union MB36_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_ID &Instance() { return *reinterpret_cast<volatile MB36_8B_ID*>(0x400C42C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD6_H*>(0x400C42C8); }
};

// Message Buffer 1 CS Register
//
union MB1_64B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB1_64B_CS_H*>(0x400C42C8); }
};

// Message Buffer 36 WORD_8B Register
//
union MB36_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB36_8B_WORD0*>(0x400C42C8); }
};

// Message Buffer 3 CS Register
//
union MB3_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB3_16B_CS_H*>(0x400C42C8); }
};

// Message Buffer 36 WORD0 Register
//
union WORD036 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD036() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD036 &Instance() { return *reinterpret_cast<volatile WORD036*>(0x400C42C8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD7_H*>(0x400C42CC); }
};

// Message Buffer 1 ID Register
//
union MB1_64B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB1_64B_ID_H*>(0x400C42CC); }
};

// Message Buffer 36 WORD_8B Register
//
union MB36_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB36_8B_WORD1*>(0x400C42CC); }
};

// Message Buffer 3 ID Register
//
union MB3_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB3_16B_ID_H*>(0x400C42CC); }
};

// Message Buffer 36 WORD1 Register
//
union WORD136 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD136() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD136 &Instance() { return *reinterpret_cast<volatile WORD136*>(0x400C42CC); }
};

// Message Buffer 37 CS Register
//
union CS37 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS37 &Instance() { return *reinterpret_cast<volatile CS37*>(0x400C42D0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD0_H*>(0x400C42D0); }
};

// Message Buffer 2 CS Register
//
union MB2_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB2_32B_CS_H*>(0x400C42D0); }
};

// Message Buffer 37 CS Register
//
union MB37_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_CS &Instance() { return *reinterpret_cast<volatile MB37_8B_CS*>(0x400C42D0); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD0_H*>(0x400C42D0); }
};

// Message Buffer 37 ID Register
//
union ID37 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID37 &Instance() { return *reinterpret_cast<volatile ID37*>(0x400C42D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD1_H*>(0x400C42D4); }
};

// Message Buffer 2 ID Register
//
union MB2_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB2_32B_ID_H*>(0x400C42D4); }
};

// Message Buffer 37 ID Register
//
union MB37_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_ID &Instance() { return *reinterpret_cast<volatile MB37_8B_ID*>(0x400C42D4); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD1_H*>(0x400C42D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD2_H*>(0x400C42D8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD0_H*>(0x400C42D8); }
};

// Message Buffer 37 WORD_8B Register
//
union MB37_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB37_8B_WORD0*>(0x400C42D8); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD2_H*>(0x400C42D8); }
};

// Message Buffer 37 WORD0 Register
//
union WORD037 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD037() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD037 &Instance() { return *reinterpret_cast<volatile WORD037*>(0x400C42D8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD3_H*>(0x400C42DC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD1_H*>(0x400C42DC); }
};

// Message Buffer 37 WORD_8B Register
//
union MB37_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB37_8B_WORD1*>(0x400C42DC); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD3_H*>(0x400C42DC); }
};

// Message Buffer 37 WORD1 Register
//
union WORD137 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD137() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD137 &Instance() { return *reinterpret_cast<volatile WORD137*>(0x400C42DC); }
};

// Message Buffer 38 CS Register
//
union CS38 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS38 &Instance() { return *reinterpret_cast<volatile CS38*>(0x400C42E0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD4_H*>(0x400C42E0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD2_H*>(0x400C42E0); }
};

// Message Buffer 38 CS Register
//
union MB38_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_CS &Instance() { return *reinterpret_cast<volatile MB38_8B_CS*>(0x400C42E0); }
};

// Message Buffer 4 CS Register
//
union MB4_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB4_16B_CS_H*>(0x400C42E0); }
};

// Message Buffer 38 ID Register
//
union ID38 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID38 &Instance() { return *reinterpret_cast<volatile ID38*>(0x400C42E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD5_H*>(0x400C42E4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD3_H*>(0x400C42E4); }
};

// Message Buffer 38 ID Register
//
union MB38_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_ID &Instance() { return *reinterpret_cast<volatile MB38_8B_ID*>(0x400C42E4); }
};

// Message Buffer 4 ID Register
//
union MB4_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB4_16B_ID_H*>(0x400C42E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD6_H*>(0x400C42E8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD4_H*>(0x400C42E8); }
};

// Message Buffer 38 WORD_8B Register
//
union MB38_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB38_8B_WORD0*>(0x400C42E8); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD0_H*>(0x400C42E8); }
};

// Message Buffer 38 WORD0 Register
//
union WORD038 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD038() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD038 &Instance() { return *reinterpret_cast<volatile WORD038*>(0x400C42E8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD7_H*>(0x400C42EC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD5_H*>(0x400C42EC); }
};

// Message Buffer 38 WORD_8B Register
//
union MB38_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB38_8B_WORD1*>(0x400C42EC); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD1_H*>(0x400C42EC); }
};

// Message Buffer 38 WORD1 Register
//
union WORD138 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD138() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD138 &Instance() { return *reinterpret_cast<volatile WORD138*>(0x400C42EC); }
};

// Message Buffer 39 CS Register
//
union CS39 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS39 &Instance() { return *reinterpret_cast<volatile CS39*>(0x400C42F0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD8_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD8_H*>(0x400C42F0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD6_H*>(0x400C42F0); }
};

// Message Buffer 39 CS Register
//
union MB39_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_CS &Instance() { return *reinterpret_cast<volatile MB39_8B_CS*>(0x400C42F0); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD2_H*>(0x400C42F0); }
};

// Message Buffer 39 ID Register
//
union ID39 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID39 &Instance() { return *reinterpret_cast<volatile ID39*>(0x400C42F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD9_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD9_H*>(0x400C42F4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD7_H*>(0x400C42F4); }
};

// Message Buffer 39 ID Register
//
union MB39_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_ID &Instance() { return *reinterpret_cast<volatile MB39_8B_ID*>(0x400C42F4); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD3_H*>(0x400C42F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD10_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD10_H*>(0x400C42F8); }
};

// Message Buffer 39 WORD_8B Register
//
union MB39_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB39_8B_WORD0*>(0x400C42F8); }
};

// Message Buffer 3 CS Register
//
union MB3_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB3_32B_CS_H*>(0x400C42F8); }
};

// Message Buffer 5 CS Register
//
union MB5_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB5_16B_CS_H*>(0x400C42F8); }
};

// Message Buffer 39 WORD0 Register
//
union WORD039 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD039() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD039 &Instance() { return *reinterpret_cast<volatile WORD039*>(0x400C42F8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD11_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD11_H*>(0x400C42FC); }
};

// Message Buffer 39 WORD_8B Register
//
union MB39_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB39_8B_WORD1*>(0x400C42FC); }
};

// Message Buffer 3 ID Register
//
union MB3_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB3_32B_ID_H*>(0x400C42FC); }
};

// Message Buffer 5 ID Register
//
union MB5_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB5_16B_ID_H*>(0x400C42FC); }
};

// Message Buffer 39 WORD1 Register
//
union WORD139 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD139() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD139 &Instance() { return *reinterpret_cast<volatile WORD139*>(0x400C42FC); }
};

// Message Buffer 40 CS Register
//
union CS40 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS40 &Instance() { return *reinterpret_cast<volatile CS40*>(0x400C4300); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD12_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD12_H*>(0x400C4300); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD0_H*>(0x400C4300); }
};

// Message Buffer 40 CS Register
//
union MB40_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_CS &Instance() { return *reinterpret_cast<volatile MB40_8B_CS*>(0x400C4300); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD0_H*>(0x400C4300); }
};

// Message Buffer 40 ID Register
//
union ID40 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID40 &Instance() { return *reinterpret_cast<volatile ID40*>(0x400C4304); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD13_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD13_H*>(0x400C4304); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD1_H*>(0x400C4304); }
};

// Message Buffer 40 ID Register
//
union MB40_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_ID &Instance() { return *reinterpret_cast<volatile MB40_8B_ID*>(0x400C4304); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD1_H*>(0x400C4304); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD14_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD14_H*>(0x400C4308); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD2_H*>(0x400C4308); }
};

// Message Buffer 40 WORD_8B Register
//
union MB40_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB40_8B_WORD0*>(0x400C4308); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD2_H*>(0x400C4308); }
};

// Message Buffer 40 WORD0 Register
//
union WORD040 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD040() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD040 &Instance() { return *reinterpret_cast<volatile WORD040*>(0x400C4308); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD15_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD15_H*>(0x400C430C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD3_H*>(0x400C430C); }
};

// Message Buffer 40 WORD_8B Register
//
union MB40_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB40_8B_WORD1*>(0x400C430C); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD3_H*>(0x400C430C); }
};

// Message Buffer 40 WORD1 Register
//
union WORD140 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD140() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD140 &Instance() { return *reinterpret_cast<volatile WORD140*>(0x400C430C); }
};

// Message Buffer 41 CS Register
//
union CS41 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS41 &Instance() { return *reinterpret_cast<volatile CS41*>(0x400C4310); }
};

// Message Buffer 2 CS Register
//
union MB2_64B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB2_64B_CS_H*>(0x400C4310); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD4_H*>(0x400C4310); }
};

// Message Buffer 41 CS Register
//
union MB41_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_CS &Instance() { return *reinterpret_cast<volatile MB41_8B_CS*>(0x400C4310); }
};

// Message Buffer 6 CS Register
//
union MB6_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB6_16B_CS_H*>(0x400C4310); }
};

// Message Buffer 41 ID Register
//
union ID41 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID41 &Instance() { return *reinterpret_cast<volatile ID41*>(0x400C4314); }
};

// Message Buffer 2 ID Register
//
union MB2_64B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB2_64B_ID_H*>(0x400C4314); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD5_H*>(0x400C4314); }
};

// Message Buffer 41 ID Register
//
union MB41_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_ID &Instance() { return *reinterpret_cast<volatile MB41_8B_ID*>(0x400C4314); }
};

// Message Buffer 6 ID Register
//
union MB6_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB6_16B_ID_H*>(0x400C4314); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD0_H*>(0x400C4318); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD6_H*>(0x400C4318); }
};

// Message Buffer 41 WORD_8B Register
//
union MB41_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB41_8B_WORD0*>(0x400C4318); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD0_H*>(0x400C4318); }
};

// Message Buffer 41 WORD0 Register
//
union WORD041 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD041() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD041 &Instance() { return *reinterpret_cast<volatile WORD041*>(0x400C4318); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD1_H*>(0x400C431C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD7_H*>(0x400C431C); }
};

// Message Buffer 41 WORD_8B Register
//
union MB41_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB41_8B_WORD1*>(0x400C431C); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD1_H*>(0x400C431C); }
};

// Message Buffer 41 WORD1 Register
//
union WORD141 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD141() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD141 &Instance() { return *reinterpret_cast<volatile WORD141*>(0x400C431C); }
};

// Message Buffer 42 CS Register
//
union CS42 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS42 &Instance() { return *reinterpret_cast<volatile CS42*>(0x400C4320); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD2_H*>(0x400C4320); }
};

// Message Buffer 42 CS Register
//
union MB42_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_CS &Instance() { return *reinterpret_cast<volatile MB42_8B_CS*>(0x400C4320); }
};

// Message Buffer 4 CS Register
//
union MB4_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB4_32B_CS_H*>(0x400C4320); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD2_H*>(0x400C4320); }
};

// Message Buffer 42 ID Register
//
union ID42 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID42 &Instance() { return *reinterpret_cast<volatile ID42*>(0x400C4324); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD3_H*>(0x400C4324); }
};

// Message Buffer 42 ID Register
//
union MB42_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_ID &Instance() { return *reinterpret_cast<volatile MB42_8B_ID*>(0x400C4324); }
};

// Message Buffer 4 ID Register
//
union MB4_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB4_32B_ID_H*>(0x400C4324); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD3_H*>(0x400C4324); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD4_H*>(0x400C4328); }
};

// Message Buffer 42 WORD_8B Register
//
union MB42_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB42_8B_WORD0*>(0x400C4328); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD0_H*>(0x400C4328); }
};

// Message Buffer 7 CS Register
//
union MB7_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB7_16B_CS_H*>(0x400C4328); }
};

// Message Buffer 42 WORD0 Register
//
union WORD042 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD042() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD042 &Instance() { return *reinterpret_cast<volatile WORD042*>(0x400C4328); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD5_H*>(0x400C432C); }
};

// Message Buffer 42 WORD_8B Register
//
union MB42_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB42_8B_WORD1*>(0x400C432C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD1_H*>(0x400C432C); }
};

// Message Buffer 7 ID Register
//
union MB7_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB7_16B_ID_H*>(0x400C432C); }
};

// Message Buffer 42 WORD1 Register
//
union WORD142 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD142() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD142 &Instance() { return *reinterpret_cast<volatile WORD142*>(0x400C432C); }
};

// Message Buffer 43 CS Register
//
union CS43 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS43 &Instance() { return *reinterpret_cast<volatile CS43*>(0x400C4330); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD6_H*>(0x400C4330); }
};

// Message Buffer 43 CS Register
//
union MB43_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_CS &Instance() { return *reinterpret_cast<volatile MB43_8B_CS*>(0x400C4330); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD2_H*>(0x400C4330); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD0_H*>(0x400C4330); }
};

// Message Buffer 43 ID Register
//
union ID43 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID43 &Instance() { return *reinterpret_cast<volatile ID43*>(0x400C4334); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD7_H*>(0x400C4334); }
};

// Message Buffer 43 ID Register
//
union MB43_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_ID &Instance() { return *reinterpret_cast<volatile MB43_8B_ID*>(0x400C4334); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD3_H*>(0x400C4334); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD1_H*>(0x400C4334); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD8_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD8_H*>(0x400C4338); }
};

// Message Buffer 43 WORD_8B Register
//
union MB43_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB43_8B_WORD0*>(0x400C4338); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD4_H*>(0x400C4338); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD2_H*>(0x400C4338); }
};

// Message Buffer 43 WORD0 Register
//
union WORD043 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD043() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD043 &Instance() { return *reinterpret_cast<volatile WORD043*>(0x400C4338); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD9_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD9_H*>(0x400C433C); }
};

// Message Buffer 43 WORD_8B Register
//
union MB43_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB43_8B_WORD1*>(0x400C433C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD5_H*>(0x400C433C); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD3_H*>(0x400C433C); }
};

// Message Buffer 43 WORD1 Register
//
union WORD143 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD143() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD143 &Instance() { return *reinterpret_cast<volatile WORD143*>(0x400C433C); }
};

// Message Buffer 44 CS Register
//
union CS44 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS44 &Instance() { return *reinterpret_cast<volatile CS44*>(0x400C4340); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD10_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD10_H*>(0x400C4340); }
};

// Message Buffer 44 CS Register
//
union MB44_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_CS &Instance() { return *reinterpret_cast<volatile MB44_8B_CS*>(0x400C4340); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD6_H*>(0x400C4340); }
};

// Message Buffer 8 CS Register
//
union MB8_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB8_16B_CS_H*>(0x400C4340); }
};

// Message Buffer 44 ID Register
//
union ID44 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID44 &Instance() { return *reinterpret_cast<volatile ID44*>(0x400C4344); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD11_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD11_H*>(0x400C4344); }
};

// Message Buffer 44 ID Register
//
union MB44_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_ID &Instance() { return *reinterpret_cast<volatile MB44_8B_ID*>(0x400C4344); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD7_H*>(0x400C4344); }
};

// Message Buffer 8 ID Register
//
union MB8_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB8_16B_ID_H*>(0x400C4344); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD12_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD12_H*>(0x400C4348); }
};

// Message Buffer 44 WORD_8B Register
//
union MB44_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB44_8B_WORD0*>(0x400C4348); }
};

// Message Buffer 5 CS Register
//
union MB5_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB5_32B_CS_H*>(0x400C4348); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD0_H*>(0x400C4348); }
};

// Message Buffer 44 WORD0 Register
//
union WORD044 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD044() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD044 &Instance() { return *reinterpret_cast<volatile WORD044*>(0x400C4348); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD13_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD13_H*>(0x400C434C); }
};

// Message Buffer 44 WORD_8B Register
//
union MB44_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB44_8B_WORD1*>(0x400C434C); }
};

// Message Buffer 5 ID Register
//
union MB5_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB5_32B_ID_H*>(0x400C434C); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD1_H*>(0x400C434C); }
};

// Message Buffer 44 WORD1 Register
//
union WORD144 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD144() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD144 &Instance() { return *reinterpret_cast<volatile WORD144*>(0x400C434C); }
};

// Message Buffer 45 CS Register
//
union CS45 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS45 &Instance() { return *reinterpret_cast<volatile CS45*>(0x400C4350); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD14_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD14_H*>(0x400C4350); }
};

// Message Buffer 45 CS Register
//
union MB45_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_CS &Instance() { return *reinterpret_cast<volatile MB45_8B_CS*>(0x400C4350); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD0_H*>(0x400C4350); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD2_H*>(0x400C4350); }
};

// Message Buffer 45 ID Register
//
union ID45 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID45 &Instance() { return *reinterpret_cast<volatile ID45*>(0x400C4354); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD15_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD15_H*>(0x400C4354); }
};

// Message Buffer 45 ID Register
//
union MB45_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_ID &Instance() { return *reinterpret_cast<volatile MB45_8B_ID*>(0x400C4354); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD1_H*>(0x400C4354); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD3_H*>(0x400C4354); }
};

// Message Buffer 3 CS Register
//
union MB3_64B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB3_64B_CS_H*>(0x400C4358); }
};

// Message Buffer 45 WORD_8B Register
//
union MB45_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB45_8B_WORD0*>(0x400C4358); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD2_H*>(0x400C4358); }
};

// Message Buffer 9 CS Register
//
union MB9_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB9_16B_CS_H*>(0x400C4358); }
};

// Message Buffer 45 WORD0 Register
//
union WORD045 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD045() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD045 &Instance() { return *reinterpret_cast<volatile WORD045*>(0x400C4358); }
};

// Message Buffer 3 ID Register
//
union MB3_64B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB3_64B_ID_H*>(0x400C435C); }
};

// Message Buffer 45 WORD_8B Register
//
union MB45_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB45_8B_WORD1*>(0x400C435C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD3_H*>(0x400C435C); }
};

// Message Buffer 9 ID Register
//
union MB9_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB9_16B_ID_H*>(0x400C435C); }
};

// Message Buffer 45 WORD1 Register
//
union WORD145 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD145() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD145 &Instance() { return *reinterpret_cast<volatile WORD145*>(0x400C435C); }
};

// Message Buffer 46 CS Register
//
union CS46 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS46 &Instance() { return *reinterpret_cast<volatile CS46*>(0x400C4360); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD0_H*>(0x400C4360); }
};

// Message Buffer 46 CS Register
//
union MB46_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_CS &Instance() { return *reinterpret_cast<volatile MB46_8B_CS*>(0x400C4360); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD4_H*>(0x400C4360); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD0_H*>(0x400C4360); }
};

// Message Buffer 46 ID Register
//
union ID46 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID46 &Instance() { return *reinterpret_cast<volatile ID46*>(0x400C4364); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD1_H*>(0x400C4364); }
};

// Message Buffer 46 ID Register
//
union MB46_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_ID &Instance() { return *reinterpret_cast<volatile MB46_8B_ID*>(0x400C4364); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD5_H*>(0x400C4364); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD1_H*>(0x400C4364); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD2_H*>(0x400C4368); }
};

// Message Buffer 46 WORD_8B Register
//
union MB46_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB46_8B_WORD0*>(0x400C4368); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD6_H*>(0x400C4368); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD2_H*>(0x400C4368); }
};

// Message Buffer 46 WORD0 Register
//
union WORD046 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD046() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD046 &Instance() { return *reinterpret_cast<volatile WORD046*>(0x400C4368); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD3_H*>(0x400C436C); }
};

// Message Buffer 46 WORD_8B Register
//
union MB46_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB46_8B_WORD1*>(0x400C436C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD7_H*>(0x400C436C); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD3_H*>(0x400C436C); }
};

// Message Buffer 46 WORD1 Register
//
union WORD146 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD146() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD146 &Instance() { return *reinterpret_cast<volatile WORD146*>(0x400C436C); }
};

// Message Buffer 47 CS Register
//
union CS47 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS47 &Instance() { return *reinterpret_cast<volatile CS47*>(0x400C4370); }
};

// Message Buffer 10 CS Register
//
union MB10_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB10_16B_CS_H*>(0x400C4370); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD4_H*>(0x400C4370); }
};

// Message Buffer 47 CS Register
//
union MB47_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_CS &Instance() { return *reinterpret_cast<volatile MB47_8B_CS*>(0x400C4370); }
};

// Message Buffer 6 CS Register
//
union MB6_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB6_32B_CS_H*>(0x400C4370); }
};

// Message Buffer 47 ID Register
//
union ID47 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID47 &Instance() { return *reinterpret_cast<volatile ID47*>(0x400C4374); }
};

// Message Buffer 10 ID Register
//
union MB10_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB10_16B_ID_H*>(0x400C4374); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD5_H*>(0x400C4374); }
};

// Message Buffer 47 ID Register
//
union MB47_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_ID &Instance() { return *reinterpret_cast<volatile MB47_8B_ID*>(0x400C4374); }
};

// Message Buffer 6 ID Register
//
union MB6_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB6_32B_ID_H*>(0x400C4374); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD0_H*>(0x400C4378); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD6_H*>(0x400C4378); }
};

// Message Buffer 47 WORD_8B Register
//
union MB47_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB47_8B_WORD0*>(0x400C4378); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD0_H*>(0x400C4378); }
};

// Message Buffer 47 WORD0 Register
//
union WORD047 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD047() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD047 &Instance() { return *reinterpret_cast<volatile WORD047*>(0x400C4378); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD1_H*>(0x400C437C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD7_H*>(0x400C437C); }
};

// Message Buffer 47 WORD_8B Register
//
union MB47_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB47_8B_WORD1*>(0x400C437C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD1_H*>(0x400C437C); }
};

// Message Buffer 47 WORD1 Register
//
union WORD147 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD147() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD147 &Instance() { return *reinterpret_cast<volatile WORD147*>(0x400C437C); }
};

// Message Buffer 48 CS Register
//
union CS48 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS48 &Instance() { return *reinterpret_cast<volatile CS48*>(0x400C4380); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD2_H*>(0x400C4380); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD8_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD8_H*>(0x400C4380); }
};

// Message Buffer 48 CS Register
//
union MB48_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_CS &Instance() { return *reinterpret_cast<volatile MB48_8B_CS*>(0x400C4380); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD2_H*>(0x400C4380); }
};

// Message Buffer 48 ID Register
//
union ID48 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID48 &Instance() { return *reinterpret_cast<volatile ID48*>(0x400C4384); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD3_H*>(0x400C4384); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD9_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD9_H*>(0x400C4384); }
};

// Message Buffer 48 ID Register
//
union MB48_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_ID &Instance() { return *reinterpret_cast<volatile MB48_8B_ID*>(0x400C4384); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD3_H*>(0x400C4384); }
};

// Message Buffer 11 CS Register
//
union MB11_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB11_16B_CS_H*>(0x400C4388); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD10_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD10_H*>(0x400C4388); }
};

// Message Buffer 48 WORD_8B Register
//
union MB48_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB48_8B_WORD0*>(0x400C4388); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD4_H*>(0x400C4388); }
};

// Message Buffer 48 WORD0 Register
//
union WORD048 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD048() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD048 &Instance() { return *reinterpret_cast<volatile WORD048*>(0x400C4388); }
};

// Message Buffer 11 ID Register
//
union MB11_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB11_16B_ID_H*>(0x400C438C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD11_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD11_H*>(0x400C438C); }
};

// Message Buffer 48 WORD_8B Register
//
union MB48_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB48_8B_WORD1*>(0x400C438C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD5_H*>(0x400C438C); }
};

// Message Buffer 48 WORD1 Register
//
union WORD148 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD148() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD148 &Instance() { return *reinterpret_cast<volatile WORD148*>(0x400C438C); }
};

// Message Buffer 49 CS Register
//
union CS49 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS49 &Instance() { return *reinterpret_cast<volatile CS49*>(0x400C4390); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD0_H*>(0x400C4390); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD12_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD12_H*>(0x400C4390); }
};

// Message Buffer 49 CS Register
//
union MB49_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_CS &Instance() { return *reinterpret_cast<volatile MB49_8B_CS*>(0x400C4390); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD6_H*>(0x400C4390); }
};

// Message Buffer 49 ID Register
//
union ID49 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID49 &Instance() { return *reinterpret_cast<volatile ID49*>(0x400C4394); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD1_H*>(0x400C4394); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD13_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD13_H*>(0x400C4394); }
};

// Message Buffer 49 ID Register
//
union MB49_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_ID &Instance() { return *reinterpret_cast<volatile MB49_8B_ID*>(0x400C4394); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD7_H*>(0x400C4394); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD2_H*>(0x400C4398); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD14_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD14_H*>(0x400C4398); }
};

// Message Buffer 49 WORD_8B Register
//
union MB49_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB49_8B_WORD0*>(0x400C4398); }
};

// Message Buffer 7 CS Register
//
union MB7_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB7_32B_CS_H*>(0x400C4398); }
};

// Message Buffer 49 WORD0 Register
//
union WORD049 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD049() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD049 &Instance() { return *reinterpret_cast<volatile WORD049*>(0x400C4398); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD3_H*>(0x400C439C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD15_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD15_H*>(0x400C439C); }
};

// Message Buffer 49 WORD_8B Register
//
union MB49_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB49_8B_WORD1*>(0x400C439C); }
};

// Message Buffer 7 ID Register
//
union MB7_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB7_32B_ID_H*>(0x400C439C); }
};

// Message Buffer 49 WORD1 Register
//
union WORD149 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD149() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD149 &Instance() { return *reinterpret_cast<volatile WORD149*>(0x400C439C); }
};

// Message Buffer 50 CS Register
//
union CS50 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS50 &Instance() { return *reinterpret_cast<volatile CS50*>(0x400C43A0); }
};

// Message Buffer 12 CS Register
//
union MB12_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB12_16B_CS_H*>(0x400C43A0); }
};

// Message Buffer 4 CS Register
//
union MB4_64B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB4_64B_CS_H*>(0x400C43A0); }
};

// Message Buffer 50 CS Register
//
union MB50_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_CS &Instance() { return *reinterpret_cast<volatile MB50_8B_CS*>(0x400C43A0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD0_H*>(0x400C43A0); }
};

// Message Buffer 50 ID Register
//
union ID50 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID50 &Instance() { return *reinterpret_cast<volatile ID50*>(0x400C43A4); }
};

// Message Buffer 12 ID Register
//
union MB12_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB12_16B_ID_H*>(0x400C43A4); }
};

// Message Buffer 4 ID Register
//
union MB4_64B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB4_64B_ID_H*>(0x400C43A4); }
};

// Message Buffer 50 ID Register
//
union MB50_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_ID &Instance() { return *reinterpret_cast<volatile MB50_8B_ID*>(0x400C43A4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD1_H*>(0x400C43A4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD0_H*>(0x400C43A8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD0_H*>(0x400C43A8); }
};

// Message Buffer 50 WORD_8B Register
//
union MB50_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB50_8B_WORD0*>(0x400C43A8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD2_H*>(0x400C43A8); }
};

// Message Buffer 50 WORD0 Register
//
union WORD050 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD050() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD050 &Instance() { return *reinterpret_cast<volatile WORD050*>(0x400C43A8); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD1_H*>(0x400C43AC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD1_H*>(0x400C43AC); }
};

// Message Buffer 50 WORD_8B Register
//
union MB50_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB50_8B_WORD1*>(0x400C43AC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD3_H*>(0x400C43AC); }
};

// Message Buffer 50 WORD1 Register
//
union WORD150 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD150() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD150 &Instance() { return *reinterpret_cast<volatile WORD150*>(0x400C43AC); }
};

// Message Buffer 51 CS Register
//
union CS51 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS51 &Instance() { return *reinterpret_cast<volatile CS51*>(0x400C43B0); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD2_H*>(0x400C43B0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD2_H*>(0x400C43B0); }
};

// Message Buffer 51 CS Register
//
union MB51_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_CS &Instance() { return *reinterpret_cast<volatile MB51_8B_CS*>(0x400C43B0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD4_H*>(0x400C43B0); }
};

// Message Buffer 51 ID Register
//
union ID51 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID51 &Instance() { return *reinterpret_cast<volatile ID51*>(0x400C43B4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD3_H*>(0x400C43B4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD3_H*>(0x400C43B4); }
};

// Message Buffer 51 ID Register
//
union MB51_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_ID &Instance() { return *reinterpret_cast<volatile MB51_8B_ID*>(0x400C43B4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD5_H*>(0x400C43B4); }
};

// Message Buffer 13 CS Register
//
union MB13_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB13_16B_CS_H*>(0x400C43B8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD4_H*>(0x400C43B8); }
};

// Message Buffer 51 WORD_8B Register
//
union MB51_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB51_8B_WORD0*>(0x400C43B8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD6_H*>(0x400C43B8); }
};

// Message Buffer 51 WORD0 Register
//
union WORD051 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD051() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD051 &Instance() { return *reinterpret_cast<volatile WORD051*>(0x400C43B8); }
};

// Message Buffer 13 ID Register
//
union MB13_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB13_16B_ID_H*>(0x400C43BC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD5_H*>(0x400C43BC); }
};

// Message Buffer 51 WORD_8B Register
//
union MB51_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB51_8B_WORD1*>(0x400C43BC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD7_H*>(0x400C43BC); }
};

// Message Buffer 51 WORD1 Register
//
union WORD151 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD151() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD151 &Instance() { return *reinterpret_cast<volatile WORD151*>(0x400C43BC); }
};

// Message Buffer 52 CS Register
//
union CS52 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS52 &Instance() { return *reinterpret_cast<volatile CS52*>(0x400C43C0); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD0_H*>(0x400C43C0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD6_H*>(0x400C43C0); }
};

// Message Buffer 52 CS Register
//
union MB52_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_CS &Instance() { return *reinterpret_cast<volatile MB52_8B_CS*>(0x400C43C0); }
};

// Message Buffer 8 CS Register
//
union MB8_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB8_32B_CS_H*>(0x400C43C0); }
};

// Message Buffer 52 ID Register
//
union ID52 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID52 &Instance() { return *reinterpret_cast<volatile ID52*>(0x400C43C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD1_H*>(0x400C43C4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD7_H*>(0x400C43C4); }
};

// Message Buffer 52 ID Register
//
union MB52_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_ID &Instance() { return *reinterpret_cast<volatile MB52_8B_ID*>(0x400C43C4); }
};

// Message Buffer 8 ID Register
//
union MB8_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB8_32B_ID_H*>(0x400C43C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD2_H*>(0x400C43C8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD8_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD8_H*>(0x400C43C8); }
};

// Message Buffer 52 WORD_8B Register
//
union MB52_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB52_8B_WORD0*>(0x400C43C8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD0_H*>(0x400C43C8); }
};

// Message Buffer 52 WORD0 Register
//
union WORD052 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD052() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD052 &Instance() { return *reinterpret_cast<volatile WORD052*>(0x400C43C8); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD3_H*>(0x400C43CC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD9_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD9_H*>(0x400C43CC); }
};

// Message Buffer 52 WORD_8B Register
//
union MB52_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB52_8B_WORD1*>(0x400C43CC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD1_H*>(0x400C43CC); }
};

// Message Buffer 52 WORD1 Register
//
union WORD152 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD152() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD152 &Instance() { return *reinterpret_cast<volatile WORD152*>(0x400C43CC); }
};

// Message Buffer 53 CS Register
//
union CS53 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS53 &Instance() { return *reinterpret_cast<volatile CS53*>(0x400C43D0); }
};

// Message Buffer 14 CS Register
//
union MB14_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB14_16B_CS_H*>(0x400C43D0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD10_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD10_H*>(0x400C43D0); }
};

// Message Buffer 53 CS Register
//
union MB53_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_CS &Instance() { return *reinterpret_cast<volatile MB53_8B_CS*>(0x400C43D0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD2_H*>(0x400C43D0); }
};

// Message Buffer 53 ID Register
//
union ID53 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID53 &Instance() { return *reinterpret_cast<volatile ID53*>(0x400C43D4); }
};

// Message Buffer 14 ID Register
//
union MB14_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB14_16B_ID_H*>(0x400C43D4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD11_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD11_H*>(0x400C43D4); }
};

// Message Buffer 53 ID Register
//
union MB53_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_ID &Instance() { return *reinterpret_cast<volatile MB53_8B_ID*>(0x400C43D4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD3_H*>(0x400C43D4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD0_H*>(0x400C43D8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD12_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD12_H*>(0x400C43D8); }
};

// Message Buffer 53 WORD_8B Register
//
union MB53_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB53_8B_WORD0*>(0x400C43D8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD4_H*>(0x400C43D8); }
};

// Message Buffer 53 WORD0 Register
//
union WORD053 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD053() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD053 &Instance() { return *reinterpret_cast<volatile WORD053*>(0x400C43D8); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD1_H*>(0x400C43DC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD13_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD13_H*>(0x400C43DC); }
};

// Message Buffer 53 WORD_8B Register
//
union MB53_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB53_8B_WORD1*>(0x400C43DC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD5_H*>(0x400C43DC); }
};

// Message Buffer 53 WORD1 Register
//
union WORD153 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD153() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD153 &Instance() { return *reinterpret_cast<volatile WORD153*>(0x400C43DC); }
};

// Message Buffer 54 CS Register
//
union CS54 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS54 &Instance() { return *reinterpret_cast<volatile CS54*>(0x400C43E0); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD2_H*>(0x400C43E0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD14_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD14_H*>(0x400C43E0); }
};

// Message Buffer 54 CS Register
//
union MB54_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_CS &Instance() { return *reinterpret_cast<volatile MB54_8B_CS*>(0x400C43E0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD6_H*>(0x400C43E0); }
};

// Message Buffer 54 ID Register
//
union ID54 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID54 &Instance() { return *reinterpret_cast<volatile ID54*>(0x400C43E4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD3_H*>(0x400C43E4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD15_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD15_H*>(0x400C43E4); }
};

// Message Buffer 54 ID Register
//
union MB54_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_ID &Instance() { return *reinterpret_cast<volatile MB54_8B_ID*>(0x400C43E4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD7_H*>(0x400C43E4); }
};

// Message Buffer 15 CS Register
//
union MB15_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB15_16B_CS_H*>(0x400C43E8); }
};

// Message Buffer 54 WORD_8B Register
//
union MB54_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB54_8B_WORD0*>(0x400C43E8); }
};

// Message Buffer 5 CS Register
//
union MB5_64B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB5_64B_CS_H*>(0x400C43E8); }
};

// Message Buffer 9 CS Register
//
union MB9_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB9_32B_CS_H*>(0x400C43E8); }
};

// Message Buffer 54 WORD0 Register
//
union WORD054 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD054() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD054 &Instance() { return *reinterpret_cast<volatile WORD054*>(0x400C43E8); }
};

// Message Buffer 15 ID Register
//
union MB15_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB15_16B_ID_H*>(0x400C43EC); }
};

// Message Buffer 54 WORD_8B Register
//
union MB54_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB54_8B_WORD1*>(0x400C43EC); }
};

// Message Buffer 5 ID Register
//
union MB5_64B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB5_64B_ID_H*>(0x400C43EC); }
};

// Message Buffer 9 ID Register
//
union MB9_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB9_32B_ID_H*>(0x400C43EC); }
};

// Message Buffer 54 WORD1 Register
//
union WORD154 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD154() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD154 &Instance() { return *reinterpret_cast<volatile WORD154*>(0x400C43EC); }
};

// Message Buffer 55 CS Register
//
union CS55 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS55 &Instance() { return *reinterpret_cast<volatile CS55*>(0x400C43F0); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD0_H*>(0x400C43F0); }
};

// Message Buffer 55 CS Register
//
union MB55_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_CS &Instance() { return *reinterpret_cast<volatile MB55_8B_CS*>(0x400C43F0); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD0_H*>(0x400C43F0); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD0_H*>(0x400C43F0); }
};

// Message Buffer 55 ID Register
//
union ID55 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID55 &Instance() { return *reinterpret_cast<volatile ID55*>(0x400C43F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD1_H*>(0x400C43F4); }
};

// Message Buffer 55 ID Register
//
union MB55_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_ID &Instance() { return *reinterpret_cast<volatile MB55_8B_ID*>(0x400C43F4); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD1_H*>(0x400C43F4); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD1_H*>(0x400C43F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD2_H*>(0x400C43F8); }
};

// Message Buffer 55 WORD_8B Register
//
union MB55_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB55_8B_WORD0*>(0x400C43F8); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD2_H*>(0x400C43F8); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD2_H*>(0x400C43F8); }
};

// Message Buffer 55 WORD0 Register
//
union WORD055 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD055() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD055 &Instance() { return *reinterpret_cast<volatile WORD055*>(0x400C43F8); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD3_H*>(0x400C43FC); }
};

// Message Buffer 55 WORD_8B Register
//
union MB55_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB55_8B_WORD1*>(0x400C43FC); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD3_H*>(0x400C43FC); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD3_H*>(0x400C43FC); }
};

// Message Buffer 55 WORD1 Register
//
union WORD155 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD155() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD155 &Instance() { return *reinterpret_cast<volatile WORD155*>(0x400C43FC); }
};

// Message Buffer 56 CS Register
//
union CS56 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS56 &Instance() { return *reinterpret_cast<volatile CS56*>(0x400C4400); }
};

// Message Buffer 16 CS Register
//
union MB16_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB16_16B_CS_H*>(0x400C4400); }
};

// Message Buffer 56 CS Register
//
union MB56_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_CS &Instance() { return *reinterpret_cast<volatile MB56_8B_CS*>(0x400C4400); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD4_H*>(0x400C4400); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD4_H*>(0x400C4400); }
};

// Message Buffer 56 ID Register
//
union ID56 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID56 &Instance() { return *reinterpret_cast<volatile ID56*>(0x400C4404); }
};

// Message Buffer 16 ID Register
//
union MB16_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB16_16B_ID_H*>(0x400C4404); }
};

// Message Buffer 56 ID Register
//
union MB56_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_ID &Instance() { return *reinterpret_cast<volatile MB56_8B_ID*>(0x400C4404); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD5_H*>(0x400C4404); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD5_H*>(0x400C4404); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD0_H*>(0x400C4408); }
};

// Message Buffer 56 WORD_8B Register
//
union MB56_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB56_8B_WORD0*>(0x400C4408); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD6_H*>(0x400C4408); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD6_H*>(0x400C4408); }
};

// Message Buffer 56 WORD0 Register
//
union WORD056 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD056() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD056 &Instance() { return *reinterpret_cast<volatile WORD056*>(0x400C4408); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD1_H*>(0x400C440C); }
};

// Message Buffer 56 WORD_8B Register
//
union MB56_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB56_8B_WORD1*>(0x400C440C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD7_H*>(0x400C440C); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD7_H*>(0x400C440C); }
};

// Message Buffer 56 WORD1 Register
//
union WORD156 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD156() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD156 &Instance() { return *reinterpret_cast<volatile WORD156*>(0x400C440C); }
};

// Message Buffer 57 CS Register
//
union CS57 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS57 &Instance() { return *reinterpret_cast<volatile CS57*>(0x400C4410); }
};

// Message Buffer 10 CS Register
//
union MB10_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB10_32B_CS_H*>(0x400C4410); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD2_H*>(0x400C4410); }
};

// Message Buffer 57 CS Register
//
union MB57_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_CS &Instance() { return *reinterpret_cast<volatile MB57_8B_CS*>(0x400C4410); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD8_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD8_H*>(0x400C4410); }
};

// Message Buffer 57 ID Register
//
union ID57 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID57 &Instance() { return *reinterpret_cast<volatile ID57*>(0x400C4414); }
};

// Message Buffer 10 ID Register
//
union MB10_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB10_32B_ID_H*>(0x400C4414); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD3_H*>(0x400C4414); }
};

// Message Buffer 57 ID Register
//
union MB57_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_ID &Instance() { return *reinterpret_cast<volatile MB57_8B_ID*>(0x400C4414); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD9_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD9_H*>(0x400C4414); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD0_H*>(0x400C4418); }
};

// Message Buffer 17 CS Register
//
union MB17_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB17_16B_CS_H*>(0x400C4418); }
};

// Message Buffer 57 WORD_8B Register
//
union MB57_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB57_8B_WORD0*>(0x400C4418); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD10_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD10_H*>(0x400C4418); }
};

// Message Buffer 57 WORD0 Register
//
union WORD057 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD057() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD057 &Instance() { return *reinterpret_cast<volatile WORD057*>(0x400C4418); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD1_H*>(0x400C441C); }
};

// Message Buffer 17 ID Register
//
union MB17_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB17_16B_ID_H*>(0x400C441C); }
};

// Message Buffer 57 WORD_8B Register
//
union MB57_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB57_8B_WORD1*>(0x400C441C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD11_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD11_H*>(0x400C441C); }
};

// Message Buffer 57 WORD1 Register
//
union WORD157 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD157() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD157 &Instance() { return *reinterpret_cast<volatile WORD157*>(0x400C441C); }
};

// Message Buffer 58 CS Register
//
union CS58 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS58 &Instance() { return *reinterpret_cast<volatile CS58*>(0x400C4420); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD2_H*>(0x400C4420); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD0_H*>(0x400C4420); }
};

// Message Buffer 58 CS Register
//
union MB58_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_CS &Instance() { return *reinterpret_cast<volatile MB58_8B_CS*>(0x400C4420); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD12_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD12_H*>(0x400C4420); }
};

// Message Buffer 58 ID Register
//
union ID58 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID58 &Instance() { return *reinterpret_cast<volatile ID58*>(0x400C4424); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD3_H*>(0x400C4424); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD1_H*>(0x400C4424); }
};

// Message Buffer 58 ID Register
//
union MB58_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_ID &Instance() { return *reinterpret_cast<volatile MB58_8B_ID*>(0x400C4424); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD13_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD13_H*>(0x400C4424); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD4_H*>(0x400C4428); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD2_H*>(0x400C4428); }
};

// Message Buffer 58 WORD_8B Register
//
union MB58_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB58_8B_WORD0*>(0x400C4428); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD14_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD14_H*>(0x400C4428); }
};

// Message Buffer 58 WORD0 Register
//
union WORD058 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD058() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD058 &Instance() { return *reinterpret_cast<volatile WORD058*>(0x400C4428); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD5_H*>(0x400C442C); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD3_H*>(0x400C442C); }
};

// Message Buffer 58 WORD_8B Register
//
union MB58_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB58_8B_WORD1*>(0x400C442C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD15_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD15_H*>(0x400C442C); }
};

// Message Buffer 58 WORD1 Register
//
union WORD158 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD158() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD158 &Instance() { return *reinterpret_cast<volatile WORD158*>(0x400C442C); }
};

// Message Buffer 59 CS Register
//
union CS59 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS59 &Instance() { return *reinterpret_cast<volatile CS59*>(0x400C4430); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD6_H*>(0x400C4430); }
};

// Message Buffer 18 CS Register
//
union MB18_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB18_16B_CS_H*>(0x400C4430); }
};

// Message Buffer 59 CS Register
//
union MB59_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_CS &Instance() { return *reinterpret_cast<volatile MB59_8B_CS*>(0x400C4430); }
};

// Message Buffer 6 CS Register
//
union MB6_64B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB6_64B_CS_H*>(0x400C4430); }
};

// Message Buffer 59 ID Register
//
union ID59 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID59 &Instance() { return *reinterpret_cast<volatile ID59*>(0x400C4434); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD7_H*>(0x400C4434); }
};

// Message Buffer 18 ID Register
//
union MB18_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB18_16B_ID_H*>(0x400C4434); }
};

// Message Buffer 59 ID Register
//
union MB59_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_ID &Instance() { return *reinterpret_cast<volatile MB59_8B_ID*>(0x400C4434); }
};

// Message Buffer 6 ID Register
//
union MB6_64B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB6_64B_ID_H*>(0x400C4434); }
};

// Message Buffer 11 CS Register
//
union MB11_32B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB11_32B_CS_H*>(0x400C4438); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD0_H*>(0x400C4438); }
};

// Message Buffer 59 WORD_8B Register
//
union MB59_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB59_8B_WORD0*>(0x400C4438); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD0_H*>(0x400C4438); }
};

// Message Buffer 59 WORD0 Register
//
union WORD059 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD059() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD059 &Instance() { return *reinterpret_cast<volatile WORD059*>(0x400C4438); }
};

// Message Buffer 11 ID Register
//
union MB11_32B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB11_32B_ID_H*>(0x400C443C); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD1_H*>(0x400C443C); }
};

// Message Buffer 59 WORD_8B Register
//
union MB59_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB59_8B_WORD1*>(0x400C443C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD1_H*>(0x400C443C); }
};

// Message Buffer 59 WORD1 Register
//
union WORD159 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD159() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD159 &Instance() { return *reinterpret_cast<volatile WORD159*>(0x400C443C); }
};

// Message Buffer 60 CS Register
//
union CS60 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS60 &Instance() { return *reinterpret_cast<volatile CS60*>(0x400C4440); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD0_H*>(0x400C4440); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD2_H*>(0x400C4440); }
};

// Message Buffer 60 CS Register
//
union MB60_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_CS &Instance() { return *reinterpret_cast<volatile MB60_8B_CS*>(0x400C4440); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD2_H*>(0x400C4440); }
};

// Message Buffer 60 ID Register
//
union ID60 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID60 &Instance() { return *reinterpret_cast<volatile ID60*>(0x400C4444); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD1_H*>(0x400C4444); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD3_H*>(0x400C4444); }
};

// Message Buffer 60 ID Register
//
union MB60_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_ID &Instance() { return *reinterpret_cast<volatile MB60_8B_ID*>(0x400C4444); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD3_H*>(0x400C4444); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD2_H*>(0x400C4448); }
};

// Message Buffer 19 CS Register
//
union MB19_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB19_16B_CS_H*>(0x400C4448); }
};

// Message Buffer 60 WORD_8B Register
//
union MB60_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB60_8B_WORD0*>(0x400C4448); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD4_H*>(0x400C4448); }
};

// Message Buffer 60 WORD0 Register
//
union WORD060 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD060() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD060 &Instance() { return *reinterpret_cast<volatile WORD060*>(0x400C4448); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD3_H*>(0x400C444C); }
};

// Message Buffer 19 ID Register
//
union MB19_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB19_16B_ID_H*>(0x400C444C); }
};

// Message Buffer 60 WORD_8B Register
//
union MB60_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB60_8B_WORD1*>(0x400C444C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD5_H*>(0x400C444C); }
};

// Message Buffer 60 WORD1 Register
//
union WORD160 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD160() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD160 &Instance() { return *reinterpret_cast<volatile WORD160*>(0x400C444C); }
};

// Message Buffer 61 CS Register
//
union CS61 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS61 &Instance() { return *reinterpret_cast<volatile CS61*>(0x400C4450); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD4_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD4_H*>(0x400C4450); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD0_H*>(0x400C4450); }
};

// Message Buffer 61 CS Register
//
union MB61_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_CS &Instance() { return *reinterpret_cast<volatile MB61_8B_CS*>(0x400C4450); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD6_H*>(0x400C4450); }
};

// Message Buffer 61 ID Register
//
union ID61 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID61 &Instance() { return *reinterpret_cast<volatile ID61*>(0x400C4454); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD5_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD5_H*>(0x400C4454); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD1_H*>(0x400C4454); }
};

// Message Buffer 61 ID Register
//
union MB61_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_ID &Instance() { return *reinterpret_cast<volatile MB61_8B_ID*>(0x400C4454); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD7_H*>(0x400C4454); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD6_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD6_H*>(0x400C4458); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD2_H*>(0x400C4458); }
};

// Message Buffer 61 WORD_8B Register
//
union MB61_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB61_8B_WORD0*>(0x400C4458); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD8_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD8_H*>(0x400C4458); }
};

// Message Buffer 61 WORD0 Register
//
union WORD061 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD061() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD061 &Instance() { return *reinterpret_cast<volatile WORD061*>(0x400C4458); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD7_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD7_H*>(0x400C445C); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD3_H*>(0x400C445C); }
};

// Message Buffer 61 WORD_8B Register
//
union MB61_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB61_8B_WORD1*>(0x400C445C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD9_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD9_H*>(0x400C445C); }
};

// Message Buffer 61 WORD1 Register
//
union WORD161 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD161() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD161 &Instance() { return *reinterpret_cast<volatile WORD161*>(0x400C445C); }
};

// Message Buffer 62 CS Register
//
union CS62 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS62 &Instance() { return *reinterpret_cast<volatile CS62*>(0x400C4460); }
};

// Message Buffer 20 CS Register
//
union MB20_16B_CS_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB20_16B_CS_H*>(0x400C4460); }
};

// Message Buffer 62 CS Register
//
union MB62_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_CS &Instance() { return *reinterpret_cast<volatile MB62_8B_CS*>(0x400C4460); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD10_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD10_H*>(0x400C4460); }
};

// Message Buffer 62 ID Register
//
union ID62 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID62 &Instance() { return *reinterpret_cast<volatile ID62*>(0x400C4464); }
};

// Message Buffer 20 ID Register
//
union MB20_16B_ID_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB20_16B_ID_H*>(0x400C4464); }
};

// Message Buffer 62 ID Register
//
union MB62_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_ID &Instance() { return *reinterpret_cast<volatile MB62_8B_ID*>(0x400C4464); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD11_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD11_H*>(0x400C4464); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD0_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD0_H*>(0x400C4468); }
};

// Message Buffer 62 WORD_8B Register
//
union MB62_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB62_8B_WORD0*>(0x400C4468); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD12_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD12_H*>(0x400C4468); }
};

// Message Buffer 62 WORD0 Register
//
union WORD062 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD062() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD062 &Instance() { return *reinterpret_cast<volatile WORD062*>(0x400C4468); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD1_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD1_H*>(0x400C446C); }
};

// Message Buffer 62 WORD_8B Register
//
union MB62_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB62_8B_WORD1*>(0x400C446C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD13_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD13_H*>(0x400C446C); }
};

// Message Buffer 62 WORD1 Register
//
union WORD162 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD162() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD162 &Instance() { return *reinterpret_cast<volatile WORD162*>(0x400C446C); }
};

// Message Buffer 63 CS Register
//
union CS63 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CS63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS63 &Instance() { return *reinterpret_cast<volatile CS63*>(0x400C4470); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD2_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD2_H*>(0x400C4470); }
};

// Message Buffer 63 CS Register
//
union MB63_8B_CS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_5 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_6 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_CS &Instance() { return *reinterpret_cast<volatile MB63_8B_CS*>(0x400C4470); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD14_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD14_H*>(0x400C4470); }
};

// Message Buffer 63 ID Register
//
union ID63 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ID63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID63 &Instance() { return *reinterpret_cast<volatile ID63*>(0x400C4474); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD3_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD3_H*>(0x400C4474); }
};

// Message Buffer 63 ID Register
//
union MB63_8B_ID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_ID &Instance() { return *reinterpret_cast<volatile MB63_8B_ID*>(0x400C4474); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD15_H {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD15_H*>(0x400C4474); }
};

// Message Buffer 63 WORD_8B Register
//
union MB63_8B_WORD0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB63_8B_WORD0*>(0x400C4478); }
};

// Message Buffer 63 WORD0 Register
//
union WORD063 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD063() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD063 &Instance() { return *reinterpret_cast<volatile WORD063*>(0x400C4478); }
};

// Message Buffer 63 WORD_8B Register
//
union MB63_8B_WORD1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB63_8B_WORD1*>(0x400C447C); }
};

// Message Buffer 63 WORD1 Register
//
union WORD163 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  WORD163() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD163 &Instance() { return *reinterpret_cast<volatile WORD163*>(0x400C447C); }
};

// Rx Individual Mask registers
//
union RXIMR[0] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[0] &Instance() { return *reinterpret_cast<volatile RXIMR[0]*>(0x400C4880); }
};
// Rx Individual Mask registers
//
union RXIMR[1] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[1] &Instance() { return *reinterpret_cast<volatile RXIMR[1]*>(0x400C4884); }
};
// Rx Individual Mask registers
//
union RXIMR[2] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[2] &Instance() { return *reinterpret_cast<volatile RXIMR[2]*>(0x400C4888); }
};
// Rx Individual Mask registers
//
union RXIMR[3] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[3] &Instance() { return *reinterpret_cast<volatile RXIMR[3]*>(0x400C488C); }
};
// Rx Individual Mask registers
//
union RXIMR[4] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[4] &Instance() { return *reinterpret_cast<volatile RXIMR[4]*>(0x400C4890); }
};
// Rx Individual Mask registers
//
union RXIMR[5] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[5] &Instance() { return *reinterpret_cast<volatile RXIMR[5]*>(0x400C4894); }
};
// Rx Individual Mask registers
//
union RXIMR[6] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[6] &Instance() { return *reinterpret_cast<volatile RXIMR[6]*>(0x400C4898); }
};
// Rx Individual Mask registers
//
union RXIMR[7] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[7] &Instance() { return *reinterpret_cast<volatile RXIMR[7]*>(0x400C489C); }
};
// Rx Individual Mask registers
//
union RXIMR[8] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[8] &Instance() { return *reinterpret_cast<volatile RXIMR[8]*>(0x400C48A0); }
};
// Rx Individual Mask registers
//
union RXIMR[9] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[9] &Instance() { return *reinterpret_cast<volatile RXIMR[9]*>(0x400C48A4); }
};
// Rx Individual Mask registers
//
union RXIMR[10] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[10] &Instance() { return *reinterpret_cast<volatile RXIMR[10]*>(0x400C48A8); }
};
// Rx Individual Mask registers
//
union RXIMR[11] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[11] &Instance() { return *reinterpret_cast<volatile RXIMR[11]*>(0x400C48AC); }
};
// Rx Individual Mask registers
//
union RXIMR[12] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[12] &Instance() { return *reinterpret_cast<volatile RXIMR[12]*>(0x400C48B0); }
};
// Rx Individual Mask registers
//
union RXIMR[13] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[13] &Instance() { return *reinterpret_cast<volatile RXIMR[13]*>(0x400C48B4); }
};
// Rx Individual Mask registers
//
union RXIMR[14] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[14] &Instance() { return *reinterpret_cast<volatile RXIMR[14]*>(0x400C48B8); }
};
// Rx Individual Mask registers
//
union RXIMR[15] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[15] &Instance() { return *reinterpret_cast<volatile RXIMR[15]*>(0x400C48BC); }
};
// Rx Individual Mask registers
//
union RXIMR[16] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[16] &Instance() { return *reinterpret_cast<volatile RXIMR[16]*>(0x400C48C0); }
};
// Rx Individual Mask registers
//
union RXIMR[17] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[17] &Instance() { return *reinterpret_cast<volatile RXIMR[17]*>(0x400C48C4); }
};
// Rx Individual Mask registers
//
union RXIMR[18] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[18] &Instance() { return *reinterpret_cast<volatile RXIMR[18]*>(0x400C48C8); }
};
// Rx Individual Mask registers
//
union RXIMR[19] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[19] &Instance() { return *reinterpret_cast<volatile RXIMR[19]*>(0x400C48CC); }
};
// Rx Individual Mask registers
//
union RXIMR[20] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[20] &Instance() { return *reinterpret_cast<volatile RXIMR[20]*>(0x400C48D0); }
};
// Rx Individual Mask registers
//
union RXIMR[21] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[21] &Instance() { return *reinterpret_cast<volatile RXIMR[21]*>(0x400C48D4); }
};
// Rx Individual Mask registers
//
union RXIMR[22] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[22] &Instance() { return *reinterpret_cast<volatile RXIMR[22]*>(0x400C48D8); }
};
// Rx Individual Mask registers
//
union RXIMR[23] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[23] &Instance() { return *reinterpret_cast<volatile RXIMR[23]*>(0x400C48DC); }
};
// Rx Individual Mask registers
//
union RXIMR[24] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[24] &Instance() { return *reinterpret_cast<volatile RXIMR[24]*>(0x400C48E0); }
};
// Rx Individual Mask registers
//
union RXIMR[25] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[25] &Instance() { return *reinterpret_cast<volatile RXIMR[25]*>(0x400C48E4); }
};
// Rx Individual Mask registers
//
union RXIMR[26] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[26] &Instance() { return *reinterpret_cast<volatile RXIMR[26]*>(0x400C48E8); }
};
// Rx Individual Mask registers
//
union RXIMR[27] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[27] &Instance() { return *reinterpret_cast<volatile RXIMR[27]*>(0x400C48EC); }
};
// Rx Individual Mask registers
//
union RXIMR[28] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[28] &Instance() { return *reinterpret_cast<volatile RXIMR[28]*>(0x400C48F0); }
};
// Rx Individual Mask registers
//
union RXIMR[29] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[29] &Instance() { return *reinterpret_cast<volatile RXIMR[29]*>(0x400C48F4); }
};
// Rx Individual Mask registers
//
union RXIMR[30] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[30] &Instance() { return *reinterpret_cast<volatile RXIMR[30]*>(0x400C48F8); }
};
// Rx Individual Mask registers
//
union RXIMR[31] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[31] &Instance() { return *reinterpret_cast<volatile RXIMR[31]*>(0x400C48FC); }
};
// Rx Individual Mask registers
//
union RXIMR[32] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[32]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[32] &Instance() { return *reinterpret_cast<volatile RXIMR[32]*>(0x400C4900); }
};
// Rx Individual Mask registers
//
union RXIMR[33] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[33]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[33] &Instance() { return *reinterpret_cast<volatile RXIMR[33]*>(0x400C4904); }
};
// Rx Individual Mask registers
//
union RXIMR[34] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[34]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[34] &Instance() { return *reinterpret_cast<volatile RXIMR[34]*>(0x400C4908); }
};
// Rx Individual Mask registers
//
union RXIMR[35] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[35]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[35] &Instance() { return *reinterpret_cast<volatile RXIMR[35]*>(0x400C490C); }
};
// Rx Individual Mask registers
//
union RXIMR[36] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[36]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[36] &Instance() { return *reinterpret_cast<volatile RXIMR[36]*>(0x400C4910); }
};
// Rx Individual Mask registers
//
union RXIMR[37] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[37]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[37] &Instance() { return *reinterpret_cast<volatile RXIMR[37]*>(0x400C4914); }
};
// Rx Individual Mask registers
//
union RXIMR[38] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[38]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[38] &Instance() { return *reinterpret_cast<volatile RXIMR[38]*>(0x400C4918); }
};
// Rx Individual Mask registers
//
union RXIMR[39] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[39]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[39] &Instance() { return *reinterpret_cast<volatile RXIMR[39]*>(0x400C491C); }
};
// Rx Individual Mask registers
//
union RXIMR[40] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[40]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[40] &Instance() { return *reinterpret_cast<volatile RXIMR[40]*>(0x400C4920); }
};
// Rx Individual Mask registers
//
union RXIMR[41] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[41]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[41] &Instance() { return *reinterpret_cast<volatile RXIMR[41]*>(0x400C4924); }
};
// Rx Individual Mask registers
//
union RXIMR[42] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[42]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[42] &Instance() { return *reinterpret_cast<volatile RXIMR[42]*>(0x400C4928); }
};
// Rx Individual Mask registers
//
union RXIMR[43] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[43]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[43] &Instance() { return *reinterpret_cast<volatile RXIMR[43]*>(0x400C492C); }
};
// Rx Individual Mask registers
//
union RXIMR[44] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[44]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[44] &Instance() { return *reinterpret_cast<volatile RXIMR[44]*>(0x400C4930); }
};
// Rx Individual Mask registers
//
union RXIMR[45] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[45]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[45] &Instance() { return *reinterpret_cast<volatile RXIMR[45]*>(0x400C4934); }
};
// Rx Individual Mask registers
//
union RXIMR[46] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[46]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[46] &Instance() { return *reinterpret_cast<volatile RXIMR[46]*>(0x400C4938); }
};
// Rx Individual Mask registers
//
union RXIMR[47] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[47]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[47] &Instance() { return *reinterpret_cast<volatile RXIMR[47]*>(0x400C493C); }
};
// Rx Individual Mask registers
//
union RXIMR[48] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[48]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[48] &Instance() { return *reinterpret_cast<volatile RXIMR[48]*>(0x400C4940); }
};
// Rx Individual Mask registers
//
union RXIMR[49] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[49]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[49] &Instance() { return *reinterpret_cast<volatile RXIMR[49]*>(0x400C4944); }
};
// Rx Individual Mask registers
//
union RXIMR[50] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[50]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[50] &Instance() { return *reinterpret_cast<volatile RXIMR[50]*>(0x400C4948); }
};
// Rx Individual Mask registers
//
union RXIMR[51] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[51]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[51] &Instance() { return *reinterpret_cast<volatile RXIMR[51]*>(0x400C494C); }
};
// Rx Individual Mask registers
//
union RXIMR[52] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[52]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[52] &Instance() { return *reinterpret_cast<volatile RXIMR[52]*>(0x400C4950); }
};
// Rx Individual Mask registers
//
union RXIMR[53] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[53]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[53] &Instance() { return *reinterpret_cast<volatile RXIMR[53]*>(0x400C4954); }
};
// Rx Individual Mask registers
//
union RXIMR[54] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[54]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[54] &Instance() { return *reinterpret_cast<volatile RXIMR[54]*>(0x400C4958); }
};
// Rx Individual Mask registers
//
union RXIMR[55] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[55]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[55] &Instance() { return *reinterpret_cast<volatile RXIMR[55]*>(0x400C495C); }
};
// Rx Individual Mask registers
//
union RXIMR[56] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[56]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[56] &Instance() { return *reinterpret_cast<volatile RXIMR[56]*>(0x400C4960); }
};
// Rx Individual Mask registers
//
union RXIMR[57] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[57]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[57] &Instance() { return *reinterpret_cast<volatile RXIMR[57]*>(0x400C4964); }
};
// Rx Individual Mask registers
//
union RXIMR[58] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[58]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[58] &Instance() { return *reinterpret_cast<volatile RXIMR[58]*>(0x400C4968); }
};
// Rx Individual Mask registers
//
union RXIMR[59] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[59]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[59] &Instance() { return *reinterpret_cast<volatile RXIMR[59]*>(0x400C496C); }
};
// Rx Individual Mask registers
//
union RXIMR[60] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[60]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[60] &Instance() { return *reinterpret_cast<volatile RXIMR[60]*>(0x400C4970); }
};
// Rx Individual Mask registers
//
union RXIMR[61] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[61]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[61] &Instance() { return *reinterpret_cast<volatile RXIMR[61]*>(0x400C4974); }
};
// Rx Individual Mask registers
//
union RXIMR[62] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[62]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[62] &Instance() { return *reinterpret_cast<volatile RXIMR[62]*>(0x400C4978); }
};
// Rx Individual Mask registers
//
union RXIMR[63] {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[63]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[63] &Instance() { return *reinterpret_cast<volatile RXIMR[63]*>(0x400C497C); }
};

// Memory Error Control register
//
union MECR {
  
  // Enum definitions.
  enum class eNCEFAFRZ : uint32_t {
    enormal = 0, // Keep normal operation.
    efreeze = 1, // Put FlexCAN in Freeze mode (see section "Freeze mode").
  };
  enum class eECCDIS : uint32_t {
    eENABLE = 0, // Enable memory error correction.
    eDISABLE = 1, // Disable memory error correction.
  };
  enum class eRERRDIS : uint32_t {
    eENABLE = 0, // Enable updates of the error report registers.
    eDISABLE = 1, // Disable updates of the error report registers.
  };
  enum class eEXTERRIE : uint32_t {
    einject_32_bit = 0, // Error injection is applied only to the 32-bit word.
    einject_64_bit = 1, // Error injection is applied to the 64-bit word.
  };
  enum class eFAERRIE : uint32_t {
    eDISABLE = 0, // Injection is disabled.
    eENABLE = 1, // Injection is enabled.
  };
  enum class eHAERRIE : uint32_t {
    eDISABLE = 0, // Injection is disabled.
    eENABLE = 1, // Injection is enabled.
  };
  enum class eCEI_MSK : uint32_t {
    eDISABLE = 0, // Interrupt is disabled.
    eENABLE = 1, // Interrupt is enabled.
  };
  enum class eFANCEI_MSK : uint32_t {
    eDISABLE = 0, // Interrupt is disabled.
    eENABLE = 1, // Interrupt is enabled.
  };
  enum class eHANCEI_MSK : uint32_t {
    eDISABLE = 0, // Interrupt is disabled.
    eENABLE = 1, // Interrupt is enabled.
  };
  enum class eECRWRDIS : uint32_t {
    eENABLE = 0, // Write is enabled.
    eDISABLE = 1, // Write is disabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eNCEFAFRZ NCEFAFRZ : 1;
    eECCDIS ECCDIS : 1;
    eRERRDIS RERRDIS : 1;
    uint32_t _reserved_3 : 3;
    eEXTERRIE EXTERRIE : 1;
    eFAERRIE FAERRIE : 1;
    eHAERRIE HAERRIE : 1;
    eCEI_MSK CEI_MSK : 1;
    uint32_t _reserved_7 : 1;
    eFANCEI_MSK FANCEI_MSK : 1;
    eHANCEI_MSK HANCEI_MSK : 1;
    uint32_t _reserved_9 : 11;
    eECRWRDIS ECRWRDIS : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MECR() = delete;
  inline void Reset() volatile { this->value = 0x800C0080; }
  static inline volatile MECR &Instance() { return *reinterpret_cast<volatile MECR*>(0x400C4AE0); }
};

// Error Injection Address register
//
union ERRIAR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t INJADDR_L : 2;
    uint32_t INJADDR_H : 12;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERRIAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRIAR &Instance() { return *reinterpret_cast<volatile ERRIAR*>(0x400C4AE4); }
};

// Error Injection Data Pattern register
//
union ERRIDPR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DFLIP : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERRIDPR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRIDPR &Instance() { return *reinterpret_cast<volatile ERRIDPR*>(0x400C4AE8); }
};

// Error Injection Parity Pattern register
//
union ERRIPPR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PFLIP0 : 5;
    uint32_t _reserved_1 : 3;
    uint32_t PFLIP1 : 5;
    uint32_t _reserved_2 : 3;
    uint32_t PFLIP2 : 5;
    uint32_t _reserved_3 : 3;
    uint32_t PFLIP3 : 5;
    uint32_t _reserved_end : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERRIPPR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRIPPR &Instance() { return *reinterpret_cast<volatile ERRIPPR*>(0x400C4AEC); }
};

// Error Report Address register
//
union RERRAR {
  
  // Enum definitions.
  enum class eNCE : uint32_t {
    ecorrectable = 0, // Reporting a correctable error
    enon_correctable = 1, // Reporting a non-correctable error
  };
  
  // Bit field definition.
  struct {
    uint32_t ERRADDR : 14;
    uint32_t _reserved_1 : 2;
    uint32_t SAID : 3;
    uint32_t _reserved_2 : 5;
    eNCE NCE : 1;
    uint32_t _reserved_end : 7;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RERRAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RERRAR &Instance() { return *reinterpret_cast<volatile RERRAR*>(0x400C4AF0); }
};

// Error Report Data register
//
union RERRDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t RDATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RERRDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RERRDR &Instance() { return *reinterpret_cast<volatile RERRDR*>(0x400C4AF4); }
};

// Error Report Syndrome register
//
union RERRSYNR {
  
  // Enum definitions.
  enum class eBE0 : uint32_t {
    enot_read = 0, // The byte was not read.
    eread = 1, // The byte was read.
  };
  enum class eBE1 : uint32_t {
    enot_read = 0, // The byte was not read.
    eread = 1, // The byte was read.
  };
  enum class eBE2 : uint32_t {
    enot_read = 0, // The byte was not read.
    eread = 1, // The byte was read.
  };
  enum class eBE3 : uint32_t {
    enot_read = 0, // The byte was not read.
    eread = 1, // The byte was read.
  };
  
  // Bit field definition.
  struct {
    uint32_t SYND0 : 5;
    uint32_t _reserved_1 : 2;
    eBE0 BE0 : 1;
    uint32_t SYND1 : 5;
    uint32_t _reserved_3 : 2;
    eBE1 BE1 : 1;
    uint32_t SYND2 : 5;
    uint32_t _reserved_5 : 2;
    eBE2 BE2 : 1;
    uint32_t SYND3 : 5;
    uint32_t _reserved_7 : 2;
    eBE3 BE3 : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RERRSYNR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RERRSYNR &Instance() { return *reinterpret_cast<volatile RERRSYNR*>(0x400C4AF8); }
};

// Error Status register
//
union ERRSR {
  
  // Enum definitions.
  enum class eCEIOF : uint32_t {
    eno_overrun = 0, // No overrun on correctable errors
    eoverrun = 1, // Overrun on correctable errors
  };
  enum class eFANCEIOF : uint32_t {
    eno_overrun = 0, // No overrun on non-correctable errors in FlexCAN access
    eoverrun = 1, // Overrun on non-correctable errors in FlexCAN access
  };
  enum class eHANCEIOF : uint32_t {
    eno_overrun = 0, // No overrun on non-correctable errors in host access
    eoverrun = 1, // Overrun on non-correctable errors in host access
  };
  enum class eCEIF : uint32_t {
    eno_errors = 0, // No correctable errors were detected so far.
    eerrors = 1, // A correctable error was detected.
  };
  enum class eFANCEIF : uint32_t {
    enot_found = 0, // No non-correctable errors were detected in FlexCAN accesses so far.
    efound = 1, // A non-correctable error was detected in a FlexCAN access.
  };
  enum class eHANCEIF : uint32_t {
    enot_found = 0, // No non-correctable errors were detected in host accesses so far.
    efound = 1, // A non-correctable error was detected in a host access.
  };
  
  // Bit field definition.
  struct {
    eCEIOF CEIOF : 1;
    uint32_t _reserved_1 : 1;
    eFANCEIOF FANCEIOF : 1;
    eHANCEIOF HANCEIOF : 1;
    uint32_t _reserved_3 : 12;
    eCEIF CEIF : 1;
    uint32_t _reserved_4 : 1;
    eFANCEIF FANCEIF : 1;
    eHANCEIF HANCEIF : 1;
    uint32_t _reserved_end : 12;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERRSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRSR &Instance() { return *reinterpret_cast<volatile ERRSR*>(0x400C4AFC); }
};

// CAN FD Control register
//
union FDCTRL {
  
  // Enum definitions.
  enum class eTDCFAIL : uint32_t {
    ein_range = 0, // Measured loop delay is in range.
    eout_of_range = 1, // Measured loop delay is out of range.
  };
  enum class eTDCEN : uint32_t {
    eDISABLE = 0, // TDC is disabled
    eENABLE = 1, // TDC is enabled
  };
  enum class eMBDSR0 : uint32_t {
    eR0_8_bytes = 0, // Selects 8 bytes per message buffer.
    eR0_16_bytes = 1, // Selects 16 bytes per message buffer.
    eR0_32_bytes = 2, // Selects 32 bytes per message buffer.
    eR0_64_bytes = 3, // Selects 64 bytes per message buffer.
  };
  enum class eMBDSR1 : uint32_t {
    eR1_8_bytes = 0, // Selects 8 bytes per message buffer.
    eR1_16_bytes = 1, // Selects 16 bytes per message buffer.
    eR1_32_bytes = 2, // Selects 32 bytes per message buffer.
    eR1_64_bytes = 3, // Selects 64 bytes per message buffer.
  };
  enum class eFDRATE : uint32_t {
    enominal = 0, // Transmit a frame in nominal rate. The BRS bit in the Tx MB has no effect.
    ebit_rate_switching = 1, // Transmit a frame with bit rate switching if the BRS bit in the Tx MB is recessive.
  };
  
  // Bit field definition.
  struct {
    uint32_t TDCVAL : 6;
    uint32_t _reserved_1 : 2;
    uint32_t TDCOFF : 5;
    uint32_t _reserved_2 : 1;
    eTDCFAIL TDCFAIL : 1;
    eTDCEN TDCEN : 1;
    eMBDSR0 MBDSR0 : 2;
    uint32_t _reserved_5 : 1;
    eMBDSR1 MBDSR1 : 2;
    uint32_t _reserved_6 : 10;
    eFDRATE FDRATE : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  FDCTRL() = delete;
  inline void Reset() volatile { this->value = 0x80000100; }
  static inline volatile FDCTRL &Instance() { return *reinterpret_cast<volatile FDCTRL*>(0x400C4C00); }
};

// CAN FD Bit Timing register
//
union FDCBT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t FPSEG2 : 3;
    uint32_t _reserved_1 : 2;
    uint32_t FPSEG1 : 3;
    uint32_t _reserved_2 : 2;
    uint32_t FPROPSEG : 5;
    uint32_t _reserved_3 : 1;
    uint32_t FRJW : 3;
    uint32_t _reserved_4 : 1;
    uint32_t FPRESDIV : 10;
    uint32_t _reserved_end : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  FDCBT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FDCBT &Instance() { return *reinterpret_cast<volatile FDCBT*>(0x400C4C04); }
};

// CAN FD CRC register
//
union FDCRC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t FD_TXCRC : 21;
    uint32_t _reserved_1 : 3;
    uint32_t FD_MBCRC : 7;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  FDCRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FDCRC &Instance() { return *reinterpret_cast<volatile FDCRC*>(0x400C4C08); }
};


} // namespace nCAN1