#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// CAN
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nCAN3 {


// Module Configuration Register
//
union MCR {
  
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
    uint32_t _reserved_0 : 1;
    eIDAM IDAM : 2;
    uint32_t _reserved_1 : 1;
    eFDEN FDEN : 1;
    eAEN AEN : 1;
    eLPRIOEN LPRIOEN : 1;
    uint32_t _reserved_2 : 1;
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
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR() = delete;
  inline void Reset() volatile { this->value = 0x5980000F; }
  static inline volatile MCR &Instance() { return *reinterpret_cast<volatile MCR*>(0x40C3C000); }
};

// Control 1 Register
//
union CTRL1 {
  
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
    uint32_t _reserved_0 : 2;
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
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1 &Instance() { return *reinterpret_cast<volatile CTRL1*>(0x40C3C004); }
};

// Free Running Timer
//
union TIMER {
  
  // Bit field definition.
  struct {
    uint32_t TIMER : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TIMER &Instance() { return *reinterpret_cast<volatile TIMER*>(0x40C3C008); }
};

// Rx Mailboxes Global Mask Register
//
union RXMGMASK {
  
  // Bit field definition.
  struct {
    uint32_t MG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXMGMASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXMGMASK &Instance() { return *reinterpret_cast<volatile RXMGMASK*>(0x40C3C010); }
};

// Rx 14 Mask Register
//
union RX14MASK {
  
  // Bit field definition.
  struct {
    uint32_t RX14M : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX14MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX14MASK &Instance() { return *reinterpret_cast<volatile RX14MASK*>(0x40C3C014); }
};

// Rx 15 Mask Register
//
union RX15MASK {
  
  // Bit field definition.
  struct {
    uint32_t RX15M : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX15MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX15MASK &Instance() { return *reinterpret_cast<volatile RX15MASK*>(0x40C3C018); }
};

// Error Counter
//
union ECR {
  
  // Bit field definition.
  struct {
    uint32_t TXERRCNT : 8;
    uint32_t RXERRCNT : 8;
    uint32_t TXERRCNT_FAST : 8;
    uint32_t RXERRCNT_FAST : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECR &Instance() { return *reinterpret_cast<volatile ECR*>(0x40C3C01C); }
};

// Error and Status 1 Register
//
union ESR1 {
  
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
    uint32_t _reserved_0 : 4;
    eSTFERR_FAST STFERR_FAST : 1;
    eFRMERR_FAST FRMERR_FAST : 1;
    eCRCERR_FAST CRCERR_FAST : 1;
    uint32_t _reserved_1 : 1;
    eBIT0ERR_FAST BIT0ERR_FAST : 1;
    eBIT1ERR_FAST BIT1ERR_FAST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ESR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ESR1 &Instance() { return *reinterpret_cast<volatile ESR1*>(0x40C3C020); }
};

// Interrupt Masks 2 Register
//
union IMASK2 {
  
  // Bit field definition.
  struct {
    uint32_t BUF63TO32M : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IMASK2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IMASK2 &Instance() { return *reinterpret_cast<volatile IMASK2*>(0x40C3C024); }
};

// Interrupt Masks 1 Register
//
union IMASK1 {
  
  // Bit field definition.
  struct {
    uint32_t BUF31TO0M : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IMASK1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IMASK1 &Instance() { return *reinterpret_cast<volatile IMASK1*>(0x40C3C028); }
};

// Interrupt Flags 2 Register
//
union IFLAG2 {
  
  // Bit field definition.
  struct {
    uint32_t BUF63TO32I : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IFLAG2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IFLAG2 &Instance() { return *reinterpret_cast<volatile IFLAG2*>(0x40C3C02C); }
};

// Interrupt Flags 1 Register
//
union IFLAG1 {
  
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
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IFLAG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IFLAG1 &Instance() { return *reinterpret_cast<volatile IFLAG1*>(0x40C3C030); }
};

// Control 2 Register
//
union CTRL2 {
  
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
    uint32_t _reserved_1 : 1;
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
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CTRL2 &Instance() { return *reinterpret_cast<volatile CTRL2*>(0x40C3C034); }
};

// Error and Status 2 Register
//
union ESR2 {
  
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
    uint32_t _reserved_1 : 1;
    uint32_t LPTM : 7;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ESR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ESR2 &Instance() { return *reinterpret_cast<volatile ESR2*>(0x40C3C038); }
};

// CRC Register
//
union CRCR {
  
  // Bit field definition.
  struct {
    uint32_t TXCRC : 15;
    uint32_t _reserved_0 : 1;
    uint32_t MBCRC : 7;
    uint32_t _reserved_1 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CRCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CRCR &Instance() { return *reinterpret_cast<volatile CRCR*>(0x40C3C044); }
};

// Rx FIFO Global Mask Register
//
union RXFGMASK {
  
  // Bit field definition.
  struct {
    uint32_t FGM : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXFGMASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXFGMASK &Instance() { return *reinterpret_cast<volatile RXFGMASK*>(0x40C3C048); }
};

// Rx FIFO Information Register
//
union RXFIR {
  
  // Bit field definition.
  struct {
    uint32_t IDHIT : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXFIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXFIR &Instance() { return *reinterpret_cast<volatile RXFIR*>(0x40C3C04C); }
};

// CAN Bit Timing Register
//
union CBT {
  
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
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CBT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CBT &Instance() { return *reinterpret_cast<volatile CBT*>(0x40C3C050); }
};

// Message Buffer 0 CS Register
//
union CS0 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS0 &Instance() { return *reinterpret_cast<volatile CS0*>(0x40C3C080); }
};

// Message Buffer 0 CS Register
//
union MB0_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB0_16B_CS_L*>(0x40C3C080); }
};

// Message Buffer 0 CS Register
//
union MB0_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB0_32B_CS_L*>(0x40C3C080); }
};

// Message Buffer 0 CS Register
//
union MB0_64B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB0_64B_CS_L*>(0x40C3C080); }
};

// Message Buffer 0 CS Register
//
union MB0_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_CS &Instance() { return *reinterpret_cast<volatile MB0_8B_CS*>(0x40C3C080); }
};

// Message Buffer 0 ID Register
//
union ID0 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID0 &Instance() { return *reinterpret_cast<volatile ID0*>(0x40C3C084); }
};

// Message Buffer 0 ID Register
//
union MB0_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB0_16B_ID_L*>(0x40C3C084); }
};

// Message Buffer 0 ID Register
//
union MB0_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB0_32B_ID_L*>(0x40C3C084); }
};

// Message Buffer 0 ID Register
//
union MB0_64B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB0_64B_ID_L*>(0x40C3C084); }
};

// Message Buffer 0 ID Register
//
union MB0_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_ID &Instance() { return *reinterpret_cast<volatile MB0_8B_ID*>(0x40C3C084); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD0_L*>(0x40C3C088); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD0_L*>(0x40C3C088); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD0_L*>(0x40C3C088); }
};

// Message Buffer 0 WORD_8B Register
//
union MB0_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB0_8B_WORD0*>(0x40C3C088); }
};

// Message Buffer 0 WORD0 Register
//
union WORD00 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD00() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD00 &Instance() { return *reinterpret_cast<volatile WORD00*>(0x40C3C088); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD1_L*>(0x40C3C08C); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD1_L*>(0x40C3C08C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD1_L*>(0x40C3C08C); }
};

// Message Buffer 0 WORD_8B Register
//
union MB0_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB0_8B_WORD1*>(0x40C3C08C); }
};

// Message Buffer 0 WORD1 Register
//
union WORD10 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD10 &Instance() { return *reinterpret_cast<volatile WORD10*>(0x40C3C08C); }
};

// Message Buffer 1 CS Register
//
union CS1 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS1 &Instance() { return *reinterpret_cast<volatile CS1*>(0x40C3C090); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD2_L*>(0x40C3C090); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD2_L*>(0x40C3C090); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD2_L*>(0x40C3C090); }
};

// Message Buffer 1 CS Register
//
union MB1_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_CS &Instance() { return *reinterpret_cast<volatile MB1_8B_CS*>(0x40C3C090); }
};

// Message Buffer 1 ID Register
//
union ID1 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID1 &Instance() { return *reinterpret_cast<volatile ID1*>(0x40C3C094); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD3_L*>(0x40C3C094); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD3_L*>(0x40C3C094); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD3_L*>(0x40C3C094); }
};

// Message Buffer 1 ID Register
//
union MB1_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_ID &Instance() { return *reinterpret_cast<volatile MB1_8B_ID*>(0x40C3C094); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD4_L*>(0x40C3C098); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD4_L*>(0x40C3C098); }
};

// Message Buffer 1 CS Register
//
union MB1_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB1_16B_CS_L*>(0x40C3C098); }
};

// Message Buffer 1 WORD_8B Register
//
union MB1_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB1_8B_WORD0*>(0x40C3C098); }
};

// Message Buffer 1 WORD0 Register
//
union WORD01 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD01() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD01 &Instance() { return *reinterpret_cast<volatile WORD01*>(0x40C3C098); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD5_L*>(0x40C3C09C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD5_L*>(0x40C3C09C); }
};

// Message Buffer 1 ID Register
//
union MB1_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB1_16B_ID_L*>(0x40C3C09C); }
};

// Message Buffer 1 WORD_8B Register
//
union MB1_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB1_8B_WORD1*>(0x40C3C09C); }
};

// Message Buffer 1 WORD1 Register
//
union WORD11 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD11 &Instance() { return *reinterpret_cast<volatile WORD11*>(0x40C3C09C); }
};

// Message Buffer 2 CS Register
//
union CS2 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS2 &Instance() { return *reinterpret_cast<volatile CS2*>(0x40C3C0A0); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD6_L*>(0x40C3C0A0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD6_L*>(0x40C3C0A0); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD0_L*>(0x40C3C0A0); }
};

// Message Buffer 2 CS Register
//
union MB2_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_CS &Instance() { return *reinterpret_cast<volatile MB2_8B_CS*>(0x40C3C0A0); }
};

// Message Buffer 2 ID Register
//
union ID2 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID2 &Instance() { return *reinterpret_cast<volatile ID2*>(0x40C3C0A4); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD7_L*>(0x40C3C0A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD7_L*>(0x40C3C0A4); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD1_L*>(0x40C3C0A4); }
};

// Message Buffer 2 ID Register
//
union MB2_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_ID &Instance() { return *reinterpret_cast<volatile MB2_8B_ID*>(0x40C3C0A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD8_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD8_L*>(0x40C3C0A8); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD2_L*>(0x40C3C0A8); }
};

// Message Buffer 1 CS Register
//
union MB1_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB1_32B_CS_L*>(0x40C3C0A8); }
};

// Message Buffer 2 WORD_8B Register
//
union MB2_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB2_8B_WORD0*>(0x40C3C0A8); }
};

// Message Buffer 2 WORD0 Register
//
union WORD02 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD02() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD02 &Instance() { return *reinterpret_cast<volatile WORD02*>(0x40C3C0A8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD9_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD9_L*>(0x40C3C0AC); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD3_L*>(0x40C3C0AC); }
};

// Message Buffer 1 ID Register
//
union MB1_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB1_32B_ID_L*>(0x40C3C0AC); }
};

// Message Buffer 2 WORD_8B Register
//
union MB2_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB2_8B_WORD1*>(0x40C3C0AC); }
};

// Message Buffer 2 WORD1 Register
//
union WORD12 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD12 &Instance() { return *reinterpret_cast<volatile WORD12*>(0x40C3C0AC); }
};

// Message Buffer 3 CS Register
//
union CS3 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS3 &Instance() { return *reinterpret_cast<volatile CS3*>(0x40C3C0B0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD10_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD10_L*>(0x40C3C0B0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD0_L*>(0x40C3C0B0); }
};

// Message Buffer 2 CS Register
//
union MB2_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB2_16B_CS_L*>(0x40C3C0B0); }
};

// Message Buffer 3 CS Register
//
union MB3_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_CS &Instance() { return *reinterpret_cast<volatile MB3_8B_CS*>(0x40C3C0B0); }
};

// Message Buffer 3 ID Register
//
union ID3 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID3 &Instance() { return *reinterpret_cast<volatile ID3*>(0x40C3C0B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD11_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD11_L*>(0x40C3C0B4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD1_L*>(0x40C3C0B4); }
};

// Message Buffer 2 ID Register
//
union MB2_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB2_16B_ID_L*>(0x40C3C0B4); }
};

// Message Buffer 3 ID Register
//
union MB3_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_ID &Instance() { return *reinterpret_cast<volatile MB3_8B_ID*>(0x40C3C0B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD12_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD12_L*>(0x40C3C0B8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD2_L*>(0x40C3C0B8); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD0_L*>(0x40C3C0B8); }
};

// Message Buffer 3 WORD_8B Register
//
union MB3_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB3_8B_WORD0*>(0x40C3C0B8); }
};

// Message Buffer 3 WORD0 Register
//
union WORD03 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD03() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD03 &Instance() { return *reinterpret_cast<volatile WORD03*>(0x40C3C0B8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD13_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD13_L*>(0x40C3C0BC); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD3_L*>(0x40C3C0BC); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD1_L*>(0x40C3C0BC); }
};

// Message Buffer 3 WORD_8B Register
//
union MB3_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB3_8B_WORD1*>(0x40C3C0BC); }
};

// Message Buffer 3 WORD1 Register
//
union WORD13 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD13 &Instance() { return *reinterpret_cast<volatile WORD13*>(0x40C3C0BC); }
};

// Message Buffer 4 CS Register
//
union CS4 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS4 &Instance() { return *reinterpret_cast<volatile CS4*>(0x40C3C0C0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD14_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD14_L*>(0x40C3C0C0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD4_L*>(0x40C3C0C0); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD2_L*>(0x40C3C0C0); }
};

// Message Buffer 4 CS Register
//
union MB4_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_CS &Instance() { return *reinterpret_cast<volatile MB4_8B_CS*>(0x40C3C0C0); }
};

// Message Buffer 4 ID Register
//
union ID4 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID4 &Instance() { return *reinterpret_cast<volatile ID4*>(0x40C3C0C4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD15_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD15_L*>(0x40C3C0C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD5_L*>(0x40C3C0C4); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD3_L*>(0x40C3C0C4); }
};

// Message Buffer 4 ID Register
//
union MB4_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_ID &Instance() { return *reinterpret_cast<volatile MB4_8B_ID*>(0x40C3C0C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD6_L*>(0x40C3C0C8); }
};

// Message Buffer 1 CS Register
//
union MB1_64B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB1_64B_CS_L*>(0x40C3C0C8); }
};

// Message Buffer 3 CS Register
//
union MB3_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB3_16B_CS_L*>(0x40C3C0C8); }
};

// Message Buffer 4 WORD_8B Register
//
union MB4_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB4_8B_WORD0*>(0x40C3C0C8); }
};

// Message Buffer 4 WORD0 Register
//
union WORD04 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD04() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD04 &Instance() { return *reinterpret_cast<volatile WORD04*>(0x40C3C0C8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD7_L*>(0x40C3C0CC); }
};

// Message Buffer 1 ID Register
//
union MB1_64B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB1_64B_ID_L*>(0x40C3C0CC); }
};

// Message Buffer 3 ID Register
//
union MB3_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB3_16B_ID_L*>(0x40C3C0CC); }
};

// Message Buffer 4 WORD_8B Register
//
union MB4_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB4_8B_WORD1*>(0x40C3C0CC); }
};

// Message Buffer 4 WORD1 Register
//
union WORD14 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD14 &Instance() { return *reinterpret_cast<volatile WORD14*>(0x40C3C0CC); }
};

// Message Buffer 5 CS Register
//
union CS5 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS5 &Instance() { return *reinterpret_cast<volatile CS5*>(0x40C3C0D0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD0_L*>(0x40C3C0D0); }
};

// Message Buffer 2 CS Register
//
union MB2_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB2_32B_CS_L*>(0x40C3C0D0); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD0_L*>(0x40C3C0D0); }
};

// Message Buffer 5 CS Register
//
union MB5_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_CS &Instance() { return *reinterpret_cast<volatile MB5_8B_CS*>(0x40C3C0D0); }
};

// Message Buffer 5 ID Register
//
union ID5 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID5 &Instance() { return *reinterpret_cast<volatile ID5*>(0x40C3C0D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD1_L*>(0x40C3C0D4); }
};

// Message Buffer 2 ID Register
//
union MB2_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB2_32B_ID_L*>(0x40C3C0D4); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD1_L*>(0x40C3C0D4); }
};

// Message Buffer 5 ID Register
//
union MB5_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_ID &Instance() { return *reinterpret_cast<volatile MB5_8B_ID*>(0x40C3C0D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD2_L*>(0x40C3C0D8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD0_L*>(0x40C3C0D8); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD2_L*>(0x40C3C0D8); }
};

// Message Buffer 5 WORD_8B Register
//
union MB5_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB5_8B_WORD0*>(0x40C3C0D8); }
};

// Message Buffer 5 WORD0 Register
//
union WORD05 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD05() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD05 &Instance() { return *reinterpret_cast<volatile WORD05*>(0x40C3C0D8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD3_L*>(0x40C3C0DC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD1_L*>(0x40C3C0DC); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD3_L*>(0x40C3C0DC); }
};

// Message Buffer 5 WORD_8B Register
//
union MB5_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB5_8B_WORD1*>(0x40C3C0DC); }
};

// Message Buffer 5 WORD1 Register
//
union WORD15 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD15 &Instance() { return *reinterpret_cast<volatile WORD15*>(0x40C3C0DC); }
};

// Message Buffer 6 CS Register
//
union CS6 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS6 &Instance() { return *reinterpret_cast<volatile CS6*>(0x40C3C0E0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD4_L*>(0x40C3C0E0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD2_L*>(0x40C3C0E0); }
};

// Message Buffer 4 CS Register
//
union MB4_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB4_16B_CS_L*>(0x40C3C0E0); }
};

// Message Buffer 6 CS Register
//
union MB6_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_CS &Instance() { return *reinterpret_cast<volatile MB6_8B_CS*>(0x40C3C0E0); }
};

// Message Buffer 6 ID Register
//
union ID6 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID6 &Instance() { return *reinterpret_cast<volatile ID6*>(0x40C3C0E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD5_L*>(0x40C3C0E4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD3_L*>(0x40C3C0E4); }
};

// Message Buffer 4 ID Register
//
union MB4_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB4_16B_ID_L*>(0x40C3C0E4); }
};

// Message Buffer 6 ID Register
//
union MB6_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_ID &Instance() { return *reinterpret_cast<volatile MB6_8B_ID*>(0x40C3C0E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD6_L*>(0x40C3C0E8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD4_L*>(0x40C3C0E8); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD0_L*>(0x40C3C0E8); }
};

// Message Buffer 6 WORD_8B Register
//
union MB6_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB6_8B_WORD0*>(0x40C3C0E8); }
};

// Message Buffer 6 WORD0 Register
//
union WORD06 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD06() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD06 &Instance() { return *reinterpret_cast<volatile WORD06*>(0x40C3C0E8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD7_L*>(0x40C3C0EC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD5_L*>(0x40C3C0EC); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD1_L*>(0x40C3C0EC); }
};

// Message Buffer 6 WORD_8B Register
//
union MB6_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB6_8B_WORD1*>(0x40C3C0EC); }
};

// Message Buffer 6 WORD1 Register
//
union WORD16 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD16 &Instance() { return *reinterpret_cast<volatile WORD16*>(0x40C3C0EC); }
};

// Message Buffer 7 CS Register
//
union CS7 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS7 &Instance() { return *reinterpret_cast<volatile CS7*>(0x40C3C0F0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD8_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD8_L*>(0x40C3C0F0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD6_L*>(0x40C3C0F0); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD2_L*>(0x40C3C0F0); }
};

// Message Buffer 7 CS Register
//
union MB7_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_CS &Instance() { return *reinterpret_cast<volatile MB7_8B_CS*>(0x40C3C0F0); }
};

// Message Buffer 7 ID Register
//
union ID7 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID7 &Instance() { return *reinterpret_cast<volatile ID7*>(0x40C3C0F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD9_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD9_L*>(0x40C3C0F4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD7_L*>(0x40C3C0F4); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD3_L*>(0x40C3C0F4); }
};

// Message Buffer 7 ID Register
//
union MB7_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_ID &Instance() { return *reinterpret_cast<volatile MB7_8B_ID*>(0x40C3C0F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD10_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD10_L*>(0x40C3C0F8); }
};

// Message Buffer 3 CS Register
//
union MB3_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB3_32B_CS_L*>(0x40C3C0F8); }
};

// Message Buffer 5 CS Register
//
union MB5_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB5_16B_CS_L*>(0x40C3C0F8); }
};

// Message Buffer 7 WORD_8B Register
//
union MB7_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB7_8B_WORD0*>(0x40C3C0F8); }
};

// Message Buffer 7 WORD0 Register
//
union WORD07 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD07() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD07 &Instance() { return *reinterpret_cast<volatile WORD07*>(0x40C3C0F8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD11_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD11_L*>(0x40C3C0FC); }
};

// Message Buffer 3 ID Register
//
union MB3_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB3_32B_ID_L*>(0x40C3C0FC); }
};

// Message Buffer 5 ID Register
//
union MB5_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB5_16B_ID_L*>(0x40C3C0FC); }
};

// Message Buffer 7 WORD_8B Register
//
union MB7_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB7_8B_WORD1*>(0x40C3C0FC); }
};

// Message Buffer 7 WORD1 Register
//
union WORD17 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD17 &Instance() { return *reinterpret_cast<volatile WORD17*>(0x40C3C0FC); }
};

// Message Buffer 8 CS Register
//
union CS8 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS8 &Instance() { return *reinterpret_cast<volatile CS8*>(0x40C3C100); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD12_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD12_L*>(0x40C3C100); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD0_L*>(0x40C3C100); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD0_L*>(0x40C3C100); }
};

// Message Buffer 8 CS Register
//
union MB8_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_CS &Instance() { return *reinterpret_cast<volatile MB8_8B_CS*>(0x40C3C100); }
};

// Message Buffer 8 ID Register
//
union ID8 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID8 &Instance() { return *reinterpret_cast<volatile ID8*>(0x40C3C104); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD13_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD13_L*>(0x40C3C104); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD1_L*>(0x40C3C104); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD1_L*>(0x40C3C104); }
};

// Message Buffer 8 ID Register
//
union MB8_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_ID &Instance() { return *reinterpret_cast<volatile MB8_8B_ID*>(0x40C3C104); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD14_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD14_L*>(0x40C3C108); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD2_L*>(0x40C3C108); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD2_L*>(0x40C3C108); }
};

// Message Buffer 8 WORD_8B Register
//
union MB8_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB8_8B_WORD0*>(0x40C3C108); }
};

// Message Buffer 8 WORD0 Register
//
union WORD08 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD08() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD08 &Instance() { return *reinterpret_cast<volatile WORD08*>(0x40C3C108); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD15_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD15_L*>(0x40C3C10C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD3_L*>(0x40C3C10C); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD3_L*>(0x40C3C10C); }
};

// Message Buffer 8 WORD_8B Register
//
union MB8_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB8_8B_WORD1*>(0x40C3C10C); }
};

// Message Buffer 8 WORD1 Register
//
union WORD18 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD18 &Instance() { return *reinterpret_cast<volatile WORD18*>(0x40C3C10C); }
};

// Message Buffer 9 CS Register
//
union CS9 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS9 &Instance() { return *reinterpret_cast<volatile CS9*>(0x40C3C110); }
};

// Message Buffer 2 CS Register
//
union MB2_64B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB2_64B_CS_L*>(0x40C3C110); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD4_L*>(0x40C3C110); }
};

// Message Buffer 6 CS Register
//
union MB6_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB6_16B_CS_L*>(0x40C3C110); }
};

// Message Buffer 9 CS Register
//
union MB9_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_CS &Instance() { return *reinterpret_cast<volatile MB9_8B_CS*>(0x40C3C110); }
};

// Message Buffer 9 ID Register
//
union ID9 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID9 &Instance() { return *reinterpret_cast<volatile ID9*>(0x40C3C114); }
};

// Message Buffer 2 ID Register
//
union MB2_64B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB2_64B_ID_L*>(0x40C3C114); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD5_L*>(0x40C3C114); }
};

// Message Buffer 6 ID Register
//
union MB6_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB6_16B_ID_L*>(0x40C3C114); }
};

// Message Buffer 9 ID Register
//
union MB9_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_ID &Instance() { return *reinterpret_cast<volatile MB9_8B_ID*>(0x40C3C114); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD0_L*>(0x40C3C118); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD6_L*>(0x40C3C118); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD0_L*>(0x40C3C118); }
};

// Message Buffer 9 WORD_8B Register
//
union MB9_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB9_8B_WORD0*>(0x40C3C118); }
};

// Message Buffer 9 WORD0 Register
//
union WORD09 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD09() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD09 &Instance() { return *reinterpret_cast<volatile WORD09*>(0x40C3C118); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD1_L*>(0x40C3C11C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD7_L*>(0x40C3C11C); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD1_L*>(0x40C3C11C); }
};

// Message Buffer 9 WORD_8B Register
//
union MB9_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB9_8B_WORD1*>(0x40C3C11C); }
};

// Message Buffer 9 WORD1 Register
//
union WORD19 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD19 &Instance() { return *reinterpret_cast<volatile WORD19*>(0x40C3C11C); }
};

// Message Buffer 10 CS Register
//
union CS10 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS10 &Instance() { return *reinterpret_cast<volatile CS10*>(0x40C3C120); }
};

// Message Buffer 10 CS Register
//
union MB10_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_CS &Instance() { return *reinterpret_cast<volatile MB10_8B_CS*>(0x40C3C120); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD2_L*>(0x40C3C120); }
};

// Message Buffer 4 CS Register
//
union MB4_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB4_32B_CS_L*>(0x40C3C120); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD2_L*>(0x40C3C120); }
};

// Message Buffer 10 ID Register
//
union ID10 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID10 &Instance() { return *reinterpret_cast<volatile ID10*>(0x40C3C124); }
};

// Message Buffer 10 ID Register
//
union MB10_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_ID &Instance() { return *reinterpret_cast<volatile MB10_8B_ID*>(0x40C3C124); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD3_L*>(0x40C3C124); }
};

// Message Buffer 4 ID Register
//
union MB4_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB4_32B_ID_L*>(0x40C3C124); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD3_L*>(0x40C3C124); }
};

// Message Buffer 10 WORD_8B Register
//
union MB10_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB10_8B_WORD0*>(0x40C3C128); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD4_L*>(0x40C3C128); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD0_L*>(0x40C3C128); }
};

// Message Buffer 7 CS Register
//
union MB7_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB7_16B_CS_L*>(0x40C3C128); }
};

// Message Buffer 10 WORD0 Register
//
union WORD010 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD010() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD010 &Instance() { return *reinterpret_cast<volatile WORD010*>(0x40C3C128); }
};

// Message Buffer 10 WORD_8B Register
//
union MB10_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB10_8B_WORD1*>(0x40C3C12C); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD5_L*>(0x40C3C12C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD1_L*>(0x40C3C12C); }
};

// Message Buffer 7 ID Register
//
union MB7_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB7_16B_ID_L*>(0x40C3C12C); }
};

// Message Buffer 10 WORD1 Register
//
union WORD110 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD110() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD110 &Instance() { return *reinterpret_cast<volatile WORD110*>(0x40C3C12C); }
};

// Message Buffer 11 CS Register
//
union CS11 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS11 &Instance() { return *reinterpret_cast<volatile CS11*>(0x40C3C130); }
};

// Message Buffer 11 CS Register
//
union MB11_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_CS &Instance() { return *reinterpret_cast<volatile MB11_8B_CS*>(0x40C3C130); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD6_L*>(0x40C3C130); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD2_L*>(0x40C3C130); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD0_L*>(0x40C3C130); }
};

// Message Buffer 11 ID Register
//
union ID11 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID11 &Instance() { return *reinterpret_cast<volatile ID11*>(0x40C3C134); }
};

// Message Buffer 11 ID Register
//
union MB11_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_ID &Instance() { return *reinterpret_cast<volatile MB11_8B_ID*>(0x40C3C134); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD7_L*>(0x40C3C134); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD3_L*>(0x40C3C134); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD1_L*>(0x40C3C134); }
};

// Message Buffer 11 WORD_8B Register
//
union MB11_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB11_8B_WORD0*>(0x40C3C138); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD8_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD8_L*>(0x40C3C138); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD4_L*>(0x40C3C138); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD2_L*>(0x40C3C138); }
};

// Message Buffer 11 WORD0 Register
//
union WORD011 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD011() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD011 &Instance() { return *reinterpret_cast<volatile WORD011*>(0x40C3C138); }
};

// Message Buffer 11 WORD_8B Register
//
union MB11_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB11_8B_WORD1*>(0x40C3C13C); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD9_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD9_L*>(0x40C3C13C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD5_L*>(0x40C3C13C); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD3_L*>(0x40C3C13C); }
};

// Message Buffer 11 WORD1 Register
//
union WORD111 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD111() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD111 &Instance() { return *reinterpret_cast<volatile WORD111*>(0x40C3C13C); }
};

// Message Buffer 12 CS Register
//
union CS12 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS12 &Instance() { return *reinterpret_cast<volatile CS12*>(0x40C3C140); }
};

// Message Buffer 12 CS Register
//
union MB12_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_CS &Instance() { return *reinterpret_cast<volatile MB12_8B_CS*>(0x40C3C140); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD10_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD10_L*>(0x40C3C140); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD6_L*>(0x40C3C140); }
};

// Message Buffer 8 CS Register
//
union MB8_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB8_16B_CS_L*>(0x40C3C140); }
};

// Message Buffer 12 ID Register
//
union ID12 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID12 &Instance() { return *reinterpret_cast<volatile ID12*>(0x40C3C144); }
};

// Message Buffer 12 ID Register
//
union MB12_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_ID &Instance() { return *reinterpret_cast<volatile MB12_8B_ID*>(0x40C3C144); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD11_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD11_L*>(0x40C3C144); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD7_L*>(0x40C3C144); }
};

// Message Buffer 8 ID Register
//
union MB8_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB8_16B_ID_L*>(0x40C3C144); }
};

// Message Buffer 12 WORD_8B Register
//
union MB12_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB12_8B_WORD0*>(0x40C3C148); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD12_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD12_L*>(0x40C3C148); }
};

// Message Buffer 5 CS Register
//
union MB5_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB5_32B_CS_L*>(0x40C3C148); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD0_L*>(0x40C3C148); }
};

// Message Buffer 12 WORD0 Register
//
union WORD012 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD012() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD012 &Instance() { return *reinterpret_cast<volatile WORD012*>(0x40C3C148); }
};

// Message Buffer 12 WORD_8B Register
//
union MB12_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB12_8B_WORD1*>(0x40C3C14C); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD13_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD13_L*>(0x40C3C14C); }
};

// Message Buffer 5 ID Register
//
union MB5_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB5_32B_ID_L*>(0x40C3C14C); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD1_L*>(0x40C3C14C); }
};

// Message Buffer 12 WORD1 Register
//
union WORD112 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD112() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD112 &Instance() { return *reinterpret_cast<volatile WORD112*>(0x40C3C14C); }
};

// Message Buffer 13 CS Register
//
union CS13 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS13 &Instance() { return *reinterpret_cast<volatile CS13*>(0x40C3C150); }
};

// Message Buffer 13 CS Register
//
union MB13_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_CS &Instance() { return *reinterpret_cast<volatile MB13_8B_CS*>(0x40C3C150); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD14_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD14_L*>(0x40C3C150); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD0_L*>(0x40C3C150); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD2_L*>(0x40C3C150); }
};

// Message Buffer 13 ID Register
//
union ID13 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID13 &Instance() { return *reinterpret_cast<volatile ID13*>(0x40C3C154); }
};

// Message Buffer 13 ID Register
//
union MB13_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_ID &Instance() { return *reinterpret_cast<volatile MB13_8B_ID*>(0x40C3C154); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD15_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD15_L*>(0x40C3C154); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD1_L*>(0x40C3C154); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD3_L*>(0x40C3C154); }
};

// Message Buffer 13 WORD_8B Register
//
union MB13_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB13_8B_WORD0*>(0x40C3C158); }
};

// Message Buffer 3 CS Register
//
union MB3_64B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB3_64B_CS_L*>(0x40C3C158); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD2_L*>(0x40C3C158); }
};

// Message Buffer 9 CS Register
//
union MB9_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB9_16B_CS_L*>(0x40C3C158); }
};

// Message Buffer 13 WORD0 Register
//
union WORD013 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD013() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD013 &Instance() { return *reinterpret_cast<volatile WORD013*>(0x40C3C158); }
};

// Message Buffer 13 WORD_8B Register
//
union MB13_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB13_8B_WORD1*>(0x40C3C15C); }
};

// Message Buffer 3 ID Register
//
union MB3_64B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB3_64B_ID_L*>(0x40C3C15C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD3_L*>(0x40C3C15C); }
};

// Message Buffer 9 ID Register
//
union MB9_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB9_16B_ID_L*>(0x40C3C15C); }
};

// Message Buffer 13 WORD1 Register
//
union WORD113 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD113() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD113 &Instance() { return *reinterpret_cast<volatile WORD113*>(0x40C3C15C); }
};

// Message Buffer 14 CS Register
//
union CS14 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS14 &Instance() { return *reinterpret_cast<volatile CS14*>(0x40C3C160); }
};

// Message Buffer 14 CS Register
//
union MB14_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_CS &Instance() { return *reinterpret_cast<volatile MB14_8B_CS*>(0x40C3C160); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD0_L*>(0x40C3C160); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD4_L*>(0x40C3C160); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD0_L*>(0x40C3C160); }
};

// Message Buffer 14 ID Register
//
union ID14 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID14 &Instance() { return *reinterpret_cast<volatile ID14*>(0x40C3C164); }
};

// Message Buffer 14 ID Register
//
union MB14_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_ID &Instance() { return *reinterpret_cast<volatile MB14_8B_ID*>(0x40C3C164); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD1_L*>(0x40C3C164); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD5_L*>(0x40C3C164); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD1_L*>(0x40C3C164); }
};

// Message Buffer 14 WORD_8B Register
//
union MB14_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB14_8B_WORD0*>(0x40C3C168); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD2_L*>(0x40C3C168); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD6_L*>(0x40C3C168); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD2_L*>(0x40C3C168); }
};

// Message Buffer 14 WORD0 Register
//
union WORD014 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD014() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD014 &Instance() { return *reinterpret_cast<volatile WORD014*>(0x40C3C168); }
};

// Message Buffer 14 WORD_8B Register
//
union MB14_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB14_8B_WORD1*>(0x40C3C16C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD3_L*>(0x40C3C16C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD7_L*>(0x40C3C16C); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD3_L*>(0x40C3C16C); }
};

// Message Buffer 14 WORD1 Register
//
union WORD114 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD114() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD114 &Instance() { return *reinterpret_cast<volatile WORD114*>(0x40C3C16C); }
};

// Message Buffer 15 CS Register
//
union CS15 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS15 &Instance() { return *reinterpret_cast<volatile CS15*>(0x40C3C170); }
};

// Message Buffer 10 CS Register
//
union MB10_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB10_16B_CS_L*>(0x40C3C170); }
};

// Message Buffer 15 CS Register
//
union MB15_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_CS &Instance() { return *reinterpret_cast<volatile MB15_8B_CS*>(0x40C3C170); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD4_L*>(0x40C3C170); }
};

// Message Buffer 6 CS Register
//
union MB6_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB6_32B_CS_L*>(0x40C3C170); }
};

// Message Buffer 15 ID Register
//
union ID15 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID15 &Instance() { return *reinterpret_cast<volatile ID15*>(0x40C3C174); }
};

// Message Buffer 10 ID Register
//
union MB10_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB10_16B_ID_L*>(0x40C3C174); }
};

// Message Buffer 15 ID Register
//
union MB15_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_ID &Instance() { return *reinterpret_cast<volatile MB15_8B_ID*>(0x40C3C174); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD5_L*>(0x40C3C174); }
};

// Message Buffer 6 ID Register
//
union MB6_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB6_32B_ID_L*>(0x40C3C174); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD0_L*>(0x40C3C178); }
};

// Message Buffer 15 WORD_8B Register
//
union MB15_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB15_8B_WORD0*>(0x40C3C178); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD6_L*>(0x40C3C178); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD0_L*>(0x40C3C178); }
};

// Message Buffer 15 WORD0 Register
//
union WORD015 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD015() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD015 &Instance() { return *reinterpret_cast<volatile WORD015*>(0x40C3C178); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD1_L*>(0x40C3C17C); }
};

// Message Buffer 15 WORD_8B Register
//
union MB15_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB15_8B_WORD1*>(0x40C3C17C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD7_L*>(0x40C3C17C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD1_L*>(0x40C3C17C); }
};

// Message Buffer 15 WORD1 Register
//
union WORD115 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD115() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD115 &Instance() { return *reinterpret_cast<volatile WORD115*>(0x40C3C17C); }
};

// Message Buffer 16 CS Register
//
union CS16 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS16 &Instance() { return *reinterpret_cast<volatile CS16*>(0x40C3C180); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD2_L*>(0x40C3C180); }
};

// Message Buffer 16 CS Register
//
union MB16_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_CS &Instance() { return *reinterpret_cast<volatile MB16_8B_CS*>(0x40C3C180); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD8_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD8_L*>(0x40C3C180); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD2_L*>(0x40C3C180); }
};

// Message Buffer 16 ID Register
//
union ID16 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID16 &Instance() { return *reinterpret_cast<volatile ID16*>(0x40C3C184); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD3_L*>(0x40C3C184); }
};

// Message Buffer 16 ID Register
//
union MB16_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_ID &Instance() { return *reinterpret_cast<volatile MB16_8B_ID*>(0x40C3C184); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD9_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD9_L*>(0x40C3C184); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD3_L*>(0x40C3C184); }
};

// Message Buffer 11 CS Register
//
union MB11_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB11_16B_CS_L*>(0x40C3C188); }
};

// Message Buffer 16 WORD_8B Register
//
union MB16_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB16_8B_WORD0*>(0x40C3C188); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD10_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD10_L*>(0x40C3C188); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD4_L*>(0x40C3C188); }
};

// Message Buffer 16 WORD0 Register
//
union WORD016 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD016() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD016 &Instance() { return *reinterpret_cast<volatile WORD016*>(0x40C3C188); }
};

// Message Buffer 11 ID Register
//
union MB11_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB11_16B_ID_L*>(0x40C3C18C); }
};

// Message Buffer 16 WORD_8B Register
//
union MB16_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB16_8B_WORD1*>(0x40C3C18C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD11_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD11_L*>(0x40C3C18C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD5_L*>(0x40C3C18C); }
};

// Message Buffer 16 WORD1 Register
//
union WORD116 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD116() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD116 &Instance() { return *reinterpret_cast<volatile WORD116*>(0x40C3C18C); }
};

// Message Buffer 17 CS Register
//
union CS17 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS17 &Instance() { return *reinterpret_cast<volatile CS17*>(0x40C3C190); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD0_L*>(0x40C3C190); }
};

// Message Buffer 17 CS Register
//
union MB17_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_CS &Instance() { return *reinterpret_cast<volatile MB17_8B_CS*>(0x40C3C190); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD12_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD12_L*>(0x40C3C190); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD6_L*>(0x40C3C190); }
};

// Message Buffer 17 ID Register
//
union ID17 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID17 &Instance() { return *reinterpret_cast<volatile ID17*>(0x40C3C194); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD1_L*>(0x40C3C194); }
};

// Message Buffer 17 ID Register
//
union MB17_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_ID &Instance() { return *reinterpret_cast<volatile MB17_8B_ID*>(0x40C3C194); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD13_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD13_L*>(0x40C3C194); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD7_L*>(0x40C3C194); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD2_L*>(0x40C3C198); }
};

// Message Buffer 17 WORD_8B Register
//
union MB17_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB17_8B_WORD0*>(0x40C3C198); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD14_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD14_L*>(0x40C3C198); }
};

// Message Buffer 7 CS Register
//
union MB7_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB7_32B_CS_L*>(0x40C3C198); }
};

// Message Buffer 17 WORD0 Register
//
union WORD017 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD017() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD017 &Instance() { return *reinterpret_cast<volatile WORD017*>(0x40C3C198); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD3_L*>(0x40C3C19C); }
};

// Message Buffer 17 WORD_8B Register
//
union MB17_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB17_8B_WORD1*>(0x40C3C19C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD15_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD15_L*>(0x40C3C19C); }
};

// Message Buffer 7 ID Register
//
union MB7_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB7_32B_ID_L*>(0x40C3C19C); }
};

// Message Buffer 17 WORD1 Register
//
union WORD117 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD117() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD117 &Instance() { return *reinterpret_cast<volatile WORD117*>(0x40C3C19C); }
};

// Message Buffer 18 CS Register
//
union CS18 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS18 &Instance() { return *reinterpret_cast<volatile CS18*>(0x40C3C1A0); }
};

// Message Buffer 12 CS Register
//
union MB12_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB12_16B_CS_L*>(0x40C3C1A0); }
};

// Message Buffer 18 CS Register
//
union MB18_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_CS &Instance() { return *reinterpret_cast<volatile MB18_8B_CS*>(0x40C3C1A0); }
};

// Message Buffer 4 CS Register
//
union MB4_64B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB4_64B_CS_L*>(0x40C3C1A0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD0_L*>(0x40C3C1A0); }
};

// Message Buffer 18 ID Register
//
union ID18 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID18 &Instance() { return *reinterpret_cast<volatile ID18*>(0x40C3C1A4); }
};

// Message Buffer 12 ID Register
//
union MB12_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB12_16B_ID_L*>(0x40C3C1A4); }
};

// Message Buffer 18 ID Register
//
union MB18_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_ID &Instance() { return *reinterpret_cast<volatile MB18_8B_ID*>(0x40C3C1A4); }
};

// Message Buffer 4 ID Register
//
union MB4_64B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB4_64B_ID_L*>(0x40C3C1A4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD1_L*>(0x40C3C1A4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD0_L*>(0x40C3C1A8); }
};

// Message Buffer 18 WORD_8B Register
//
union MB18_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB18_8B_WORD0*>(0x40C3C1A8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD0_L*>(0x40C3C1A8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD2_L*>(0x40C3C1A8); }
};

// Message Buffer 18 WORD0 Register
//
union WORD018 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD018() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD018 &Instance() { return *reinterpret_cast<volatile WORD018*>(0x40C3C1A8); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD1_L*>(0x40C3C1AC); }
};

// Message Buffer 18 WORD_8B Register
//
union MB18_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB18_8B_WORD1*>(0x40C3C1AC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD1_L*>(0x40C3C1AC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD3_L*>(0x40C3C1AC); }
};

// Message Buffer 18 WORD1 Register
//
union WORD118 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD118() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD118 &Instance() { return *reinterpret_cast<volatile WORD118*>(0x40C3C1AC); }
};

// Message Buffer 19 CS Register
//
union CS19 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS19 &Instance() { return *reinterpret_cast<volatile CS19*>(0x40C3C1B0); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD2_L*>(0x40C3C1B0); }
};

// Message Buffer 19 CS Register
//
union MB19_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_CS &Instance() { return *reinterpret_cast<volatile MB19_8B_CS*>(0x40C3C1B0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD2_L*>(0x40C3C1B0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD4_L*>(0x40C3C1B0); }
};

// Message Buffer 19 ID Register
//
union ID19 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID19 &Instance() { return *reinterpret_cast<volatile ID19*>(0x40C3C1B4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD3_L*>(0x40C3C1B4); }
};

// Message Buffer 19 ID Register
//
union MB19_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_ID &Instance() { return *reinterpret_cast<volatile MB19_8B_ID*>(0x40C3C1B4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD3_L*>(0x40C3C1B4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD5_L*>(0x40C3C1B4); }
};

// Message Buffer 13 CS Register
//
union MB13_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB13_16B_CS_L*>(0x40C3C1B8); }
};

// Message Buffer 19 WORD_8B Register
//
union MB19_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB19_8B_WORD0*>(0x40C3C1B8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD4_L*>(0x40C3C1B8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD6_L*>(0x40C3C1B8); }
};

// Message Buffer 19 WORD0 Register
//
union WORD019 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD019() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD019 &Instance() { return *reinterpret_cast<volatile WORD019*>(0x40C3C1B8); }
};

// Message Buffer 13 ID Register
//
union MB13_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB13_16B_ID_L*>(0x40C3C1BC); }
};

// Message Buffer 19 WORD_8B Register
//
union MB19_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB19_8B_WORD1*>(0x40C3C1BC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD5_L*>(0x40C3C1BC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD7_L*>(0x40C3C1BC); }
};

// Message Buffer 19 WORD1 Register
//
union WORD119 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD119() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD119 &Instance() { return *reinterpret_cast<volatile WORD119*>(0x40C3C1BC); }
};

// Message Buffer 20 CS Register
//
union CS20 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS20 &Instance() { return *reinterpret_cast<volatile CS20*>(0x40C3C1C0); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD0_L*>(0x40C3C1C0); }
};

// Message Buffer 20 CS Register
//
union MB20_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_CS &Instance() { return *reinterpret_cast<volatile MB20_8B_CS*>(0x40C3C1C0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD6_L*>(0x40C3C1C0); }
};

// Message Buffer 8 CS Register
//
union MB8_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB8_32B_CS_L*>(0x40C3C1C0); }
};

// Message Buffer 20 ID Register
//
union ID20 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID20 &Instance() { return *reinterpret_cast<volatile ID20*>(0x40C3C1C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD1_L*>(0x40C3C1C4); }
};

// Message Buffer 20 ID Register
//
union MB20_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_ID &Instance() { return *reinterpret_cast<volatile MB20_8B_ID*>(0x40C3C1C4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD7_L*>(0x40C3C1C4); }
};

// Message Buffer 8 ID Register
//
union MB8_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB8_32B_ID_L*>(0x40C3C1C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD2_L*>(0x40C3C1C8); }
};

// Message Buffer 20 WORD_8B Register
//
union MB20_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB20_8B_WORD0*>(0x40C3C1C8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD8_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD8_L*>(0x40C3C1C8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD0_L*>(0x40C3C1C8); }
};

// Message Buffer 20 WORD0 Register
//
union WORD020 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD020() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD020 &Instance() { return *reinterpret_cast<volatile WORD020*>(0x40C3C1C8); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD3_L*>(0x40C3C1CC); }
};

// Message Buffer 20 WORD_8B Register
//
union MB20_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB20_8B_WORD1*>(0x40C3C1CC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD9_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD9_L*>(0x40C3C1CC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD1_L*>(0x40C3C1CC); }
};

// Message Buffer 20 WORD1 Register
//
union WORD120 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD120() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD120 &Instance() { return *reinterpret_cast<volatile WORD120*>(0x40C3C1CC); }
};

// Message Buffer 21 CS Register
//
union CS21 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS21 &Instance() { return *reinterpret_cast<volatile CS21*>(0x40C3C1D0); }
};

// Message Buffer 14 CS Register
//
union MB14_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB14_16B_CS_L*>(0x40C3C1D0); }
};

// Message Buffer 21 CS Register
//
union MB21_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_CS &Instance() { return *reinterpret_cast<volatile MB21_8B_CS*>(0x40C3C1D0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD10_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD10_L*>(0x40C3C1D0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD2_L*>(0x40C3C1D0); }
};

// Message Buffer 21 ID Register
//
union ID21 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID21 &Instance() { return *reinterpret_cast<volatile ID21*>(0x40C3C1D4); }
};

// Message Buffer 14 ID Register
//
union MB14_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB14_16B_ID_L*>(0x40C3C1D4); }
};

// Message Buffer 21 ID Register
//
union MB21_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_ID &Instance() { return *reinterpret_cast<volatile MB21_8B_ID*>(0x40C3C1D4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD11_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD11_L*>(0x40C3C1D4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD3_L*>(0x40C3C1D4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD0_L*>(0x40C3C1D8); }
};

// Message Buffer 21 WORD_8B Register
//
union MB21_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB21_8B_WORD0*>(0x40C3C1D8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD12_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD12_L*>(0x40C3C1D8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD4_L*>(0x40C3C1D8); }
};

// Message Buffer 21 WORD0 Register
//
union WORD021 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD021() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD021 &Instance() { return *reinterpret_cast<volatile WORD021*>(0x40C3C1D8); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD1_L*>(0x40C3C1DC); }
};

// Message Buffer 21 WORD_8B Register
//
union MB21_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB21_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB21_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB21_8B_WORD1*>(0x40C3C1DC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD13_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD13_L*>(0x40C3C1DC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD5_L*>(0x40C3C1DC); }
};

// Message Buffer 21 WORD1 Register
//
union WORD121 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD121() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD121 &Instance() { return *reinterpret_cast<volatile WORD121*>(0x40C3C1DC); }
};

// Message Buffer 22 CS Register
//
union CS22 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS22 &Instance() { return *reinterpret_cast<volatile CS22*>(0x40C3C1E0); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD2_L*>(0x40C3C1E0); }
};

// Message Buffer 22 CS Register
//
union MB22_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_CS &Instance() { return *reinterpret_cast<volatile MB22_8B_CS*>(0x40C3C1E0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD14_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD14_L*>(0x40C3C1E0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD6_L*>(0x40C3C1E0); }
};

// Message Buffer 22 ID Register
//
union ID22 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID22 &Instance() { return *reinterpret_cast<volatile ID22*>(0x40C3C1E4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD3_L*>(0x40C3C1E4); }
};

// Message Buffer 22 ID Register
//
union MB22_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_ID &Instance() { return *reinterpret_cast<volatile MB22_8B_ID*>(0x40C3C1E4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD15_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD15_L*>(0x40C3C1E4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD7_L*>(0x40C3C1E4); }
};

// Message Buffer 15 CS Register
//
union MB15_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB15_16B_CS_L*>(0x40C3C1E8); }
};

// Message Buffer 22 WORD_8B Register
//
union MB22_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB22_8B_WORD0*>(0x40C3C1E8); }
};

// Message Buffer 5 CS Register
//
union MB5_64B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB5_64B_CS_L*>(0x40C3C1E8); }
};

// Message Buffer 9 CS Register
//
union MB9_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB9_32B_CS_L*>(0x40C3C1E8); }
};

// Message Buffer 22 WORD0 Register
//
union WORD022 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD022() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD022 &Instance() { return *reinterpret_cast<volatile WORD022*>(0x40C3C1E8); }
};

// Message Buffer 15 ID Register
//
union MB15_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB15_16B_ID_L*>(0x40C3C1EC); }
};

// Message Buffer 22 WORD_8B Register
//
union MB22_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB22_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB22_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB22_8B_WORD1*>(0x40C3C1EC); }
};

// Message Buffer 5 ID Register
//
union MB5_64B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB5_64B_ID_L*>(0x40C3C1EC); }
};

// Message Buffer 9 ID Register
//
union MB9_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB9_32B_ID_L*>(0x40C3C1EC); }
};

// Message Buffer 22 WORD1 Register
//
union WORD122 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD122() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD122 &Instance() { return *reinterpret_cast<volatile WORD122*>(0x40C3C1EC); }
};

// Message Buffer 23 CS Register
//
union CS23 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS23 &Instance() { return *reinterpret_cast<volatile CS23*>(0x40C3C1F0); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD0_L*>(0x40C3C1F0); }
};

// Message Buffer 23 CS Register
//
union MB23_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_CS &Instance() { return *reinterpret_cast<volatile MB23_8B_CS*>(0x40C3C1F0); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD0_L*>(0x40C3C1F0); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD0_L*>(0x40C3C1F0); }
};

// Message Buffer 23 ID Register
//
union ID23 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID23 &Instance() { return *reinterpret_cast<volatile ID23*>(0x40C3C1F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD1_L*>(0x40C3C1F4); }
};

// Message Buffer 23 ID Register
//
union MB23_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_ID &Instance() { return *reinterpret_cast<volatile MB23_8B_ID*>(0x40C3C1F4); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD1_L*>(0x40C3C1F4); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD1_L*>(0x40C3C1F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD2_L*>(0x40C3C1F8); }
};

// Message Buffer 23 WORD_8B Register
//
union MB23_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB23_8B_WORD0*>(0x40C3C1F8); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD2_L*>(0x40C3C1F8); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD2_L*>(0x40C3C1F8); }
};

// Message Buffer 23 WORD0 Register
//
union WORD023 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD023() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD023 &Instance() { return *reinterpret_cast<volatile WORD023*>(0x40C3C1F8); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD3_L*>(0x40C3C1FC); }
};

// Message Buffer 23 WORD_8B Register
//
union MB23_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB23_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB23_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB23_8B_WORD1*>(0x40C3C1FC); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD3_L*>(0x40C3C1FC); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD3_L*>(0x40C3C1FC); }
};

// Message Buffer 23 WORD1 Register
//
union WORD123 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD123() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD123 &Instance() { return *reinterpret_cast<volatile WORD123*>(0x40C3C1FC); }
};

// Message Buffer 24 CS Register
//
union CS24 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS24 &Instance() { return *reinterpret_cast<volatile CS24*>(0x40C3C200); }
};

// Message Buffer 16 CS Register
//
union MB16_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB16_16B_CS_L*>(0x40C3C200); }
};

// Message Buffer 24 CS Register
//
union MB24_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_CS &Instance() { return *reinterpret_cast<volatile MB24_8B_CS*>(0x40C3C200); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD4_L*>(0x40C3C200); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD4_L*>(0x40C3C200); }
};

// Message Buffer 24 ID Register
//
union ID24 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID24 &Instance() { return *reinterpret_cast<volatile ID24*>(0x40C3C204); }
};

// Message Buffer 16 ID Register
//
union MB16_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB16_16B_ID_L*>(0x40C3C204); }
};

// Message Buffer 24 ID Register
//
union MB24_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_ID &Instance() { return *reinterpret_cast<volatile MB24_8B_ID*>(0x40C3C204); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD5_L*>(0x40C3C204); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD5_L*>(0x40C3C204); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD0_L*>(0x40C3C208); }
};

// Message Buffer 24 WORD_8B Register
//
union MB24_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB24_8B_WORD0*>(0x40C3C208); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD6_L*>(0x40C3C208); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD6_L*>(0x40C3C208); }
};

// Message Buffer 24 WORD0 Register
//
union WORD024 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD024() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD024 &Instance() { return *reinterpret_cast<volatile WORD024*>(0x40C3C208); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD1_L*>(0x40C3C20C); }
};

// Message Buffer 24 WORD_8B Register
//
union MB24_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB24_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB24_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB24_8B_WORD1*>(0x40C3C20C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD7_L*>(0x40C3C20C); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD7_L*>(0x40C3C20C); }
};

// Message Buffer 24 WORD1 Register
//
union WORD124 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD124() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD124 &Instance() { return *reinterpret_cast<volatile WORD124*>(0x40C3C20C); }
};

// Message Buffer 25 CS Register
//
union CS25 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS25 &Instance() { return *reinterpret_cast<volatile CS25*>(0x40C3C210); }
};

// Message Buffer 10 CS Register
//
union MB10_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB10_32B_CS_L*>(0x40C3C210); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD2_L*>(0x40C3C210); }
};

// Message Buffer 25 CS Register
//
union MB25_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_CS &Instance() { return *reinterpret_cast<volatile MB25_8B_CS*>(0x40C3C210); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD8_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD8_L*>(0x40C3C210); }
};

// Message Buffer 25 ID Register
//
union ID25 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID25 &Instance() { return *reinterpret_cast<volatile ID25*>(0x40C3C214); }
};

// Message Buffer 10 ID Register
//
union MB10_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB10_32B_ID_L*>(0x40C3C214); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD3_L*>(0x40C3C214); }
};

// Message Buffer 25 ID Register
//
union MB25_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_ID &Instance() { return *reinterpret_cast<volatile MB25_8B_ID*>(0x40C3C214); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD9_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD9_L*>(0x40C3C214); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD0_L*>(0x40C3C218); }
};

// Message Buffer 17 CS Register
//
union MB17_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB17_16B_CS_L*>(0x40C3C218); }
};

// Message Buffer 25 WORD_8B Register
//
union MB25_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB25_8B_WORD0*>(0x40C3C218); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD10_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD10_L*>(0x40C3C218); }
};

// Message Buffer 25 WORD0 Register
//
union WORD025 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD025() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD025 &Instance() { return *reinterpret_cast<volatile WORD025*>(0x40C3C218); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD1_L*>(0x40C3C21C); }
};

// Message Buffer 17 ID Register
//
union MB17_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB17_16B_ID_L*>(0x40C3C21C); }
};

// Message Buffer 25 WORD_8B Register
//
union MB25_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB25_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB25_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB25_8B_WORD1*>(0x40C3C21C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD11_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD11_L*>(0x40C3C21C); }
};

// Message Buffer 25 WORD1 Register
//
union WORD125 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD125() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD125 &Instance() { return *reinterpret_cast<volatile WORD125*>(0x40C3C21C); }
};

// Message Buffer 26 CS Register
//
union CS26 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS26 &Instance() { return *reinterpret_cast<volatile CS26*>(0x40C3C220); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD2_L*>(0x40C3C220); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD0_L*>(0x40C3C220); }
};

// Message Buffer 26 CS Register
//
union MB26_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_CS &Instance() { return *reinterpret_cast<volatile MB26_8B_CS*>(0x40C3C220); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD12_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD12_L*>(0x40C3C220); }
};

// Message Buffer 26 ID Register
//
union ID26 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID26 &Instance() { return *reinterpret_cast<volatile ID26*>(0x40C3C224); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD3_L*>(0x40C3C224); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD1_L*>(0x40C3C224); }
};

// Message Buffer 26 ID Register
//
union MB26_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_ID &Instance() { return *reinterpret_cast<volatile MB26_8B_ID*>(0x40C3C224); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD13_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD13_L*>(0x40C3C224); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD4_L*>(0x40C3C228); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD2_L*>(0x40C3C228); }
};

// Message Buffer 26 WORD_8B Register
//
union MB26_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB26_8B_WORD0*>(0x40C3C228); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD14_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD14_L*>(0x40C3C228); }
};

// Message Buffer 26 WORD0 Register
//
union WORD026 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD026() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD026 &Instance() { return *reinterpret_cast<volatile WORD026*>(0x40C3C228); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD5_L*>(0x40C3C22C); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD3_L*>(0x40C3C22C); }
};

// Message Buffer 26 WORD_8B Register
//
union MB26_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB26_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB26_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB26_8B_WORD1*>(0x40C3C22C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD15_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD15_L*>(0x40C3C22C); }
};

// Message Buffer 26 WORD1 Register
//
union WORD126 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD126() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD126 &Instance() { return *reinterpret_cast<volatile WORD126*>(0x40C3C22C); }
};

// Message Buffer 27 CS Register
//
union CS27 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS27 &Instance() { return *reinterpret_cast<volatile CS27*>(0x40C3C230); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD6_L*>(0x40C3C230); }
};

// Message Buffer 18 CS Register
//
union MB18_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB18_16B_CS_L*>(0x40C3C230); }
};

// Message Buffer 27 CS Register
//
union MB27_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_CS &Instance() { return *reinterpret_cast<volatile MB27_8B_CS*>(0x40C3C230); }
};

// Message Buffer 6 CS Register
//
union MB6_64B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_CS_L &Instance() { return *reinterpret_cast<volatile MB6_64B_CS_L*>(0x40C3C230); }
};

// Message Buffer 27 ID Register
//
union ID27 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID27 &Instance() { return *reinterpret_cast<volatile ID27*>(0x40C3C234); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD7_L*>(0x40C3C234); }
};

// Message Buffer 18 ID Register
//
union MB18_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB18_16B_ID_L*>(0x40C3C234); }
};

// Message Buffer 27 ID Register
//
union MB27_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_ID &Instance() { return *reinterpret_cast<volatile MB27_8B_ID*>(0x40C3C234); }
};

// Message Buffer 6 ID Register
//
union MB6_64B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_ID_L &Instance() { return *reinterpret_cast<volatile MB6_64B_ID_L*>(0x40C3C234); }
};

// Message Buffer 11 CS Register
//
union MB11_32B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_CS_L &Instance() { return *reinterpret_cast<volatile MB11_32B_CS_L*>(0x40C3C238); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD0_L*>(0x40C3C238); }
};

// Message Buffer 27 WORD_8B Register
//
union MB27_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB27_8B_WORD0*>(0x40C3C238); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD0_L*>(0x40C3C238); }
};

// Message Buffer 27 WORD0 Register
//
union WORD027 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD027() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD027 &Instance() { return *reinterpret_cast<volatile WORD027*>(0x40C3C238); }
};

// Message Buffer 11 ID Register
//
union MB11_32B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_ID_L &Instance() { return *reinterpret_cast<volatile MB11_32B_ID_L*>(0x40C3C23C); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD1_L*>(0x40C3C23C); }
};

// Message Buffer 27 WORD_8B Register
//
union MB27_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB27_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB27_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB27_8B_WORD1*>(0x40C3C23C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD1_L*>(0x40C3C23C); }
};

// Message Buffer 27 WORD1 Register
//
union WORD127 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD127 &Instance() { return *reinterpret_cast<volatile WORD127*>(0x40C3C23C); }
};

// Message Buffer 28 CS Register
//
union CS28 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS28 &Instance() { return *reinterpret_cast<volatile CS28*>(0x40C3C240); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD0_L*>(0x40C3C240); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD2_L*>(0x40C3C240); }
};

// Message Buffer 28 CS Register
//
union MB28_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_CS &Instance() { return *reinterpret_cast<volatile MB28_8B_CS*>(0x40C3C240); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD2_L*>(0x40C3C240); }
};

// Message Buffer 28 ID Register
//
union ID28 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID28 &Instance() { return *reinterpret_cast<volatile ID28*>(0x40C3C244); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD1_L*>(0x40C3C244); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD3_L*>(0x40C3C244); }
};

// Message Buffer 28 ID Register
//
union MB28_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_ID &Instance() { return *reinterpret_cast<volatile MB28_8B_ID*>(0x40C3C244); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD3_L*>(0x40C3C244); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD2_L*>(0x40C3C248); }
};

// Message Buffer 19 CS Register
//
union MB19_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB19_16B_CS_L*>(0x40C3C248); }
};

// Message Buffer 28 WORD_8B Register
//
union MB28_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB28_8B_WORD0*>(0x40C3C248); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD4_L*>(0x40C3C248); }
};

// Message Buffer 28 WORD0 Register
//
union WORD028 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD028() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD028 &Instance() { return *reinterpret_cast<volatile WORD028*>(0x40C3C248); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD3_L*>(0x40C3C24C); }
};

// Message Buffer 19 ID Register
//
union MB19_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB19_16B_ID_L*>(0x40C3C24C); }
};

// Message Buffer 28 WORD_8B Register
//
union MB28_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB28_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB28_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB28_8B_WORD1*>(0x40C3C24C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD5_L*>(0x40C3C24C); }
};

// Message Buffer 28 WORD1 Register
//
union WORD128 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD128() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD128 &Instance() { return *reinterpret_cast<volatile WORD128*>(0x40C3C24C); }
};

// Message Buffer 29 CS Register
//
union CS29 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS29 &Instance() { return *reinterpret_cast<volatile CS29*>(0x40C3C250); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD4_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD4_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD4_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD4_L*>(0x40C3C250); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD0_L*>(0x40C3C250); }
};

// Message Buffer 29 CS Register
//
union MB29_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_CS &Instance() { return *reinterpret_cast<volatile MB29_8B_CS*>(0x40C3C250); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD6_L*>(0x40C3C250); }
};

// Message Buffer 29 ID Register
//
union ID29 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID29 &Instance() { return *reinterpret_cast<volatile ID29*>(0x40C3C254); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD5_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD5_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD5_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD5_L*>(0x40C3C254); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD1_L*>(0x40C3C254); }
};

// Message Buffer 29 ID Register
//
union MB29_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_ID &Instance() { return *reinterpret_cast<volatile MB29_8B_ID*>(0x40C3C254); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD7_L*>(0x40C3C254); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD6_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD6_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD6_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD6_L*>(0x40C3C258); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD2_L*>(0x40C3C258); }
};

// Message Buffer 29 WORD_8B Register
//
union MB29_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB29_8B_WORD0*>(0x40C3C258); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD8_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD8_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD8_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD8_L*>(0x40C3C258); }
};

// Message Buffer 29 WORD0 Register
//
union WORD029 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD029() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD029 &Instance() { return *reinterpret_cast<volatile WORD029*>(0x40C3C258); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD7_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD7_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD7_L &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD7_L*>(0x40C3C25C); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD3_L*>(0x40C3C25C); }
};

// Message Buffer 29 WORD_8B Register
//
union MB29_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB29_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB29_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB29_8B_WORD1*>(0x40C3C25C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD9_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD9_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD9_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD9_L*>(0x40C3C25C); }
};

// Message Buffer 29 WORD1 Register
//
union WORD129 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD129() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD129 &Instance() { return *reinterpret_cast<volatile WORD129*>(0x40C3C25C); }
};

// Message Buffer 30 CS Register
//
union CS30 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS30 &Instance() { return *reinterpret_cast<volatile CS30*>(0x40C3C260); }
};

// Message Buffer 20 CS Register
//
union MB20_16B_CS_L {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_CS_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_CS_L &Instance() { return *reinterpret_cast<volatile MB20_16B_CS_L*>(0x40C3C260); }
};

// Message Buffer 30 CS Register
//
union MB30_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_CS &Instance() { return *reinterpret_cast<volatile MB30_8B_CS*>(0x40C3C260); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD10_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD10_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD10_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD10_L*>(0x40C3C260); }
};

// Message Buffer 30 ID Register
//
union ID30 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID30 &Instance() { return *reinterpret_cast<volatile ID30*>(0x40C3C264); }
};

// Message Buffer 20 ID Register
//
union MB20_16B_ID_L {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_ID_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_ID_L &Instance() { return *reinterpret_cast<volatile MB20_16B_ID_L*>(0x40C3C264); }
};

// Message Buffer 30 ID Register
//
union MB30_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_ID &Instance() { return *reinterpret_cast<volatile MB30_8B_ID*>(0x40C3C264); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD11_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD11_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD11_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD11_L*>(0x40C3C264); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD0_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD0_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD0_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD0_L*>(0x40C3C268); }
};

// Message Buffer 30 WORD_8B Register
//
union MB30_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB30_8B_WORD0*>(0x40C3C268); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD12_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD12_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD12_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD12_L*>(0x40C3C268); }
};

// Message Buffer 30 WORD0 Register
//
union WORD030 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD030() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD030 &Instance() { return *reinterpret_cast<volatile WORD030*>(0x40C3C268); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD1_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD1_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD1_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD1_L*>(0x40C3C26C); }
};

// Message Buffer 30 WORD_8B Register
//
union MB30_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB30_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB30_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB30_8B_WORD1*>(0x40C3C26C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD13_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD13_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD13_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD13_L*>(0x40C3C26C); }
};

// Message Buffer 30 WORD1 Register
//
union WORD130 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD130() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD130 &Instance() { return *reinterpret_cast<volatile WORD130*>(0x40C3C26C); }
};

// Message Buffer 31 CS Register
//
union CS31 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS31 &Instance() { return *reinterpret_cast<volatile CS31*>(0x40C3C270); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD2_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD2_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD2_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD2_L*>(0x40C3C270); }
};

// Message Buffer 31 CS Register
//
union MB31_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_CS &Instance() { return *reinterpret_cast<volatile MB31_8B_CS*>(0x40C3C270); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD14_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD14_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD14_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD14_L*>(0x40C3C270); }
};

// Message Buffer 31 ID Register
//
union ID31 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID31 &Instance() { return *reinterpret_cast<volatile ID31*>(0x40C3C274); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD3_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD3_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD3_L &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD3_L*>(0x40C3C274); }
};

// Message Buffer 31 ID Register
//
union MB31_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_ID &Instance() { return *reinterpret_cast<volatile MB31_8B_ID*>(0x40C3C274); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD15_L {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD15_L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD15_L &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD15_L*>(0x40C3C274); }
};

// Message Buffer 31 WORD_8B Register
//
union MB31_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB31_8B_WORD0*>(0x40C3C278); }
};

// Message Buffer 31 WORD0 Register
//
union WORD031 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD031() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD031 &Instance() { return *reinterpret_cast<volatile WORD031*>(0x40C3C278); }
};

// Message Buffer 31 WORD_8B Register
//
union MB31_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB31_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB31_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB31_8B_WORD1*>(0x40C3C27C); }
};

// Message Buffer 31 WORD1 Register
//
union WORD131 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD131() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD131 &Instance() { return *reinterpret_cast<volatile WORD131*>(0x40C3C27C); }
};

// Message Buffer 32 CS Register
//
union CS32 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS32 &Instance() { return *reinterpret_cast<volatile CS32*>(0x40C3C280); }
};

// Message Buffer 0 CS Register
//
union MB0_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB0_16B_CS_H*>(0x40C3C280); }
};

// Message Buffer 0 CS Register
//
union MB0_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB0_32B_CS_H*>(0x40C3C280); }
};

// Message Buffer 0 CS Register
//
union MB0_64B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB0_64B_CS_H*>(0x40C3C280); }
};

// Message Buffer 32 CS Register
//
union MB32_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_CS &Instance() { return *reinterpret_cast<volatile MB32_8B_CS*>(0x40C3C280); }
};

// Message Buffer 32 ID Register
//
union ID32 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID32 &Instance() { return *reinterpret_cast<volatile ID32*>(0x40C3C284); }
};

// Message Buffer 0 ID Register
//
union MB0_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB0_16B_ID_H*>(0x40C3C284); }
};

// Message Buffer 0 ID Register
//
union MB0_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB0_32B_ID_H*>(0x40C3C284); }
};

// Message Buffer 0 ID Register
//
union MB0_64B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB0_64B_ID_H*>(0x40C3C284); }
};

// Message Buffer 32 ID Register
//
union MB32_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_ID &Instance() { return *reinterpret_cast<volatile MB32_8B_ID*>(0x40C3C284); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD0_H*>(0x40C3C288); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD0_H*>(0x40C3C288); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD0_H*>(0x40C3C288); }
};

// Message Buffer 32 WORD_8B Register
//
union MB32_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB32_8B_WORD0*>(0x40C3C288); }
};

// Message Buffer 32 WORD0 Register
//
union WORD032 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD032() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD032 &Instance() { return *reinterpret_cast<volatile WORD032*>(0x40C3C288); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD1_H*>(0x40C3C28C); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD1_H*>(0x40C3C28C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD1_H*>(0x40C3C28C); }
};

// Message Buffer 32 WORD_8B Register
//
union MB32_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB32_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB32_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB32_8B_WORD1*>(0x40C3C28C); }
};

// Message Buffer 32 WORD1 Register
//
union WORD132 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD132() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD132 &Instance() { return *reinterpret_cast<volatile WORD132*>(0x40C3C28C); }
};

// Message Buffer 33 CS Register
//
union CS33 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS33 &Instance() { return *reinterpret_cast<volatile CS33*>(0x40C3C290); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD2_H*>(0x40C3C290); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD2_H*>(0x40C3C290); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD2_H*>(0x40C3C290); }
};

// Message Buffer 33 CS Register
//
union MB33_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_CS &Instance() { return *reinterpret_cast<volatile MB33_8B_CS*>(0x40C3C290); }
};

// Message Buffer 33 ID Register
//
union ID33 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID33 &Instance() { return *reinterpret_cast<volatile ID33*>(0x40C3C294); }
};

// Message Buffer 0 WORD_16B Register
//
union MB0_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB0_16B_WORD3_H*>(0x40C3C294); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD3_H*>(0x40C3C294); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD3_H*>(0x40C3C294); }
};

// Message Buffer 33 ID Register
//
union MB33_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_ID &Instance() { return *reinterpret_cast<volatile MB33_8B_ID*>(0x40C3C294); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD4_H*>(0x40C3C298); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD4_H*>(0x40C3C298); }
};

// Message Buffer 1 CS Register
//
union MB1_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB1_16B_CS_H*>(0x40C3C298); }
};

// Message Buffer 33 WORD_8B Register
//
union MB33_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB33_8B_WORD0*>(0x40C3C298); }
};

// Message Buffer 33 WORD0 Register
//
union WORD033 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD033() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD033 &Instance() { return *reinterpret_cast<volatile WORD033*>(0x40C3C298); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD5_H*>(0x40C3C29C); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD5_H*>(0x40C3C29C); }
};

// Message Buffer 1 ID Register
//
union MB1_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB1_16B_ID_H*>(0x40C3C29C); }
};

// Message Buffer 33 WORD_8B Register
//
union MB33_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB33_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB33_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB33_8B_WORD1*>(0x40C3C29C); }
};

// Message Buffer 33 WORD1 Register
//
union WORD133 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD133() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD133 &Instance() { return *reinterpret_cast<volatile WORD133*>(0x40C3C29C); }
};

// Message Buffer 34 CS Register
//
union CS34 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS34 &Instance() { return *reinterpret_cast<volatile CS34*>(0x40C3C2A0); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD6_H*>(0x40C3C2A0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD6_H*>(0x40C3C2A0); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD0_H*>(0x40C3C2A0); }
};

// Message Buffer 34 CS Register
//
union MB34_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_CS &Instance() { return *reinterpret_cast<volatile MB34_8B_CS*>(0x40C3C2A0); }
};

// Message Buffer 34 ID Register
//
union ID34 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID34 &Instance() { return *reinterpret_cast<volatile ID34*>(0x40C3C2A4); }
};

// Message Buffer 0 WORD_32B Register
//
union MB0_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB0_32B_WORD7_H*>(0x40C3C2A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD7_H*>(0x40C3C2A4); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD1_H*>(0x40C3C2A4); }
};

// Message Buffer 34 ID Register
//
union MB34_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_ID &Instance() { return *reinterpret_cast<volatile MB34_8B_ID*>(0x40C3C2A4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD8_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD8_H*>(0x40C3C2A8); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD2_H*>(0x40C3C2A8); }
};

// Message Buffer 1 CS Register
//
union MB1_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB1_32B_CS_H*>(0x40C3C2A8); }
};

// Message Buffer 34 WORD_8B Register
//
union MB34_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB34_8B_WORD0*>(0x40C3C2A8); }
};

// Message Buffer 34 WORD0 Register
//
union WORD034 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD034() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD034 &Instance() { return *reinterpret_cast<volatile WORD034*>(0x40C3C2A8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD9_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD9_H*>(0x40C3C2AC); }
};

// Message Buffer 1 WORD_16B Register
//
union MB1_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB1_16B_WORD3_H*>(0x40C3C2AC); }
};

// Message Buffer 1 ID Register
//
union MB1_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB1_32B_ID_H*>(0x40C3C2AC); }
};

// Message Buffer 34 WORD_8B Register
//
union MB34_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB34_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB34_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB34_8B_WORD1*>(0x40C3C2AC); }
};

// Message Buffer 34 WORD1 Register
//
union WORD134 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD134() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD134 &Instance() { return *reinterpret_cast<volatile WORD134*>(0x40C3C2AC); }
};

// Message Buffer 35 CS Register
//
union CS35 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS35 &Instance() { return *reinterpret_cast<volatile CS35*>(0x40C3C2B0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD10_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD10_H*>(0x40C3C2B0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD0_H*>(0x40C3C2B0); }
};

// Message Buffer 2 CS Register
//
union MB2_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB2_16B_CS_H*>(0x40C3C2B0); }
};

// Message Buffer 35 CS Register
//
union MB35_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_CS &Instance() { return *reinterpret_cast<volatile MB35_8B_CS*>(0x40C3C2B0); }
};

// Message Buffer 35 ID Register
//
union ID35 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID35 &Instance() { return *reinterpret_cast<volatile ID35*>(0x40C3C2B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD11_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD11_H*>(0x40C3C2B4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD1_H*>(0x40C3C2B4); }
};

// Message Buffer 2 ID Register
//
union MB2_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB2_16B_ID_H*>(0x40C3C2B4); }
};

// Message Buffer 35 ID Register
//
union MB35_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_ID &Instance() { return *reinterpret_cast<volatile MB35_8B_ID*>(0x40C3C2B4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD12_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD12_H*>(0x40C3C2B8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD2_H*>(0x40C3C2B8); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD0_H*>(0x40C3C2B8); }
};

// Message Buffer 35 WORD_8B Register
//
union MB35_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB35_8B_WORD0*>(0x40C3C2B8); }
};

// Message Buffer 35 WORD0 Register
//
union WORD035 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD035() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD035 &Instance() { return *reinterpret_cast<volatile WORD035*>(0x40C3C2B8); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD13_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD13_H*>(0x40C3C2BC); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD3_H*>(0x40C3C2BC); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD1_H*>(0x40C3C2BC); }
};

// Message Buffer 35 WORD_8B Register
//
union MB35_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB35_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB35_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB35_8B_WORD1*>(0x40C3C2BC); }
};

// Message Buffer 35 WORD1 Register
//
union WORD135 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD135() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD135 &Instance() { return *reinterpret_cast<volatile WORD135*>(0x40C3C2BC); }
};

// Message Buffer 36 CS Register
//
union CS36 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS36 &Instance() { return *reinterpret_cast<volatile CS36*>(0x40C3C2C0); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD14_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD14_H*>(0x40C3C2C0); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD4_H*>(0x40C3C2C0); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD2_H*>(0x40C3C2C0); }
};

// Message Buffer 36 CS Register
//
union MB36_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_CS &Instance() { return *reinterpret_cast<volatile MB36_8B_CS*>(0x40C3C2C0); }
};

// Message Buffer 36 ID Register
//
union ID36 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID36 &Instance() { return *reinterpret_cast<volatile ID36*>(0x40C3C2C4); }
};

// Message Buffer 0 WORD_64B Register
//
union MB0_64B_WORD15_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB0_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB0_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB0_64B_WORD15_H*>(0x40C3C2C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD5_H*>(0x40C3C2C4); }
};

// Message Buffer 2 WORD_16B Register
//
union MB2_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB2_16B_WORD3_H*>(0x40C3C2C4); }
};

// Message Buffer 36 ID Register
//
union MB36_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_ID &Instance() { return *reinterpret_cast<volatile MB36_8B_ID*>(0x40C3C2C4); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD6_H*>(0x40C3C2C8); }
};

// Message Buffer 1 CS Register
//
union MB1_64B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB1_64B_CS_H*>(0x40C3C2C8); }
};

// Message Buffer 36 WORD_8B Register
//
union MB36_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB36_8B_WORD0*>(0x40C3C2C8); }
};

// Message Buffer 3 CS Register
//
union MB3_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB3_16B_CS_H*>(0x40C3C2C8); }
};

// Message Buffer 36 WORD0 Register
//
union WORD036 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD036() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD036 &Instance() { return *reinterpret_cast<volatile WORD036*>(0x40C3C2C8); }
};

// Message Buffer 1 WORD_32B Register
//
union MB1_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB1_32B_WORD7_H*>(0x40C3C2CC); }
};

// Message Buffer 1 ID Register
//
union MB1_64B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB1_64B_ID_H*>(0x40C3C2CC); }
};

// Message Buffer 36 WORD_8B Register
//
union MB36_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB36_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB36_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB36_8B_WORD1*>(0x40C3C2CC); }
};

// Message Buffer 3 ID Register
//
union MB3_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB3_16B_ID_H*>(0x40C3C2CC); }
};

// Message Buffer 36 WORD1 Register
//
union WORD136 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD136() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD136 &Instance() { return *reinterpret_cast<volatile WORD136*>(0x40C3C2CC); }
};

// Message Buffer 37 CS Register
//
union CS37 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS37 &Instance() { return *reinterpret_cast<volatile CS37*>(0x40C3C2D0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD0_H*>(0x40C3C2D0); }
};

// Message Buffer 2 CS Register
//
union MB2_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB2_32B_CS_H*>(0x40C3C2D0); }
};

// Message Buffer 37 CS Register
//
union MB37_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_CS &Instance() { return *reinterpret_cast<volatile MB37_8B_CS*>(0x40C3C2D0); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD0_H*>(0x40C3C2D0); }
};

// Message Buffer 37 ID Register
//
union ID37 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID37 &Instance() { return *reinterpret_cast<volatile ID37*>(0x40C3C2D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD1_H*>(0x40C3C2D4); }
};

// Message Buffer 2 ID Register
//
union MB2_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB2_32B_ID_H*>(0x40C3C2D4); }
};

// Message Buffer 37 ID Register
//
union MB37_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_ID &Instance() { return *reinterpret_cast<volatile MB37_8B_ID*>(0x40C3C2D4); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD1_H*>(0x40C3C2D4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD2_H*>(0x40C3C2D8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD0_H*>(0x40C3C2D8); }
};

// Message Buffer 37 WORD_8B Register
//
union MB37_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB37_8B_WORD0*>(0x40C3C2D8); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD2_H*>(0x40C3C2D8); }
};

// Message Buffer 37 WORD0 Register
//
union WORD037 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD037() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD037 &Instance() { return *reinterpret_cast<volatile WORD037*>(0x40C3C2D8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD3_H*>(0x40C3C2DC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD1_H*>(0x40C3C2DC); }
};

// Message Buffer 37 WORD_8B Register
//
union MB37_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB37_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB37_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB37_8B_WORD1*>(0x40C3C2DC); }
};

// Message Buffer 3 WORD_16B Register
//
union MB3_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB3_16B_WORD3_H*>(0x40C3C2DC); }
};

// Message Buffer 37 WORD1 Register
//
union WORD137 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD137() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD137 &Instance() { return *reinterpret_cast<volatile WORD137*>(0x40C3C2DC); }
};

// Message Buffer 38 CS Register
//
union CS38 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS38 &Instance() { return *reinterpret_cast<volatile CS38*>(0x40C3C2E0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD4_H*>(0x40C3C2E0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD2_H*>(0x40C3C2E0); }
};

// Message Buffer 38 CS Register
//
union MB38_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_CS &Instance() { return *reinterpret_cast<volatile MB38_8B_CS*>(0x40C3C2E0); }
};

// Message Buffer 4 CS Register
//
union MB4_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB4_16B_CS_H*>(0x40C3C2E0); }
};

// Message Buffer 38 ID Register
//
union ID38 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID38 &Instance() { return *reinterpret_cast<volatile ID38*>(0x40C3C2E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD5_H*>(0x40C3C2E4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD3_H*>(0x40C3C2E4); }
};

// Message Buffer 38 ID Register
//
union MB38_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_ID &Instance() { return *reinterpret_cast<volatile MB38_8B_ID*>(0x40C3C2E4); }
};

// Message Buffer 4 ID Register
//
union MB4_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB4_16B_ID_H*>(0x40C3C2E4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD6_H*>(0x40C3C2E8); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD4_H*>(0x40C3C2E8); }
};

// Message Buffer 38 WORD_8B Register
//
union MB38_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB38_8B_WORD0*>(0x40C3C2E8); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD0_H*>(0x40C3C2E8); }
};

// Message Buffer 38 WORD0 Register
//
union WORD038 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD038() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD038 &Instance() { return *reinterpret_cast<volatile WORD038*>(0x40C3C2E8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD7_H*>(0x40C3C2EC); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD5_H*>(0x40C3C2EC); }
};

// Message Buffer 38 WORD_8B Register
//
union MB38_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB38_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB38_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB38_8B_WORD1*>(0x40C3C2EC); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD1_H*>(0x40C3C2EC); }
};

// Message Buffer 38 WORD1 Register
//
union WORD138 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD138() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD138 &Instance() { return *reinterpret_cast<volatile WORD138*>(0x40C3C2EC); }
};

// Message Buffer 39 CS Register
//
union CS39 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS39 &Instance() { return *reinterpret_cast<volatile CS39*>(0x40C3C2F0); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD8_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD8_H*>(0x40C3C2F0); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD6_H*>(0x40C3C2F0); }
};

// Message Buffer 39 CS Register
//
union MB39_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_CS &Instance() { return *reinterpret_cast<volatile MB39_8B_CS*>(0x40C3C2F0); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD2_H*>(0x40C3C2F0); }
};

// Message Buffer 39 ID Register
//
union ID39 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID39 &Instance() { return *reinterpret_cast<volatile ID39*>(0x40C3C2F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD9_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD9_H*>(0x40C3C2F4); }
};

// Message Buffer 2 WORD_32B Register
//
union MB2_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB2_32B_WORD7_H*>(0x40C3C2F4); }
};

// Message Buffer 39 ID Register
//
union MB39_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_ID &Instance() { return *reinterpret_cast<volatile MB39_8B_ID*>(0x40C3C2F4); }
};

// Message Buffer 4 WORD_16B Register
//
union MB4_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB4_16B_WORD3_H*>(0x40C3C2F4); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD10_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD10_H*>(0x40C3C2F8); }
};

// Message Buffer 39 WORD_8B Register
//
union MB39_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB39_8B_WORD0*>(0x40C3C2F8); }
};

// Message Buffer 3 CS Register
//
union MB3_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB3_32B_CS_H*>(0x40C3C2F8); }
};

// Message Buffer 5 CS Register
//
union MB5_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB5_16B_CS_H*>(0x40C3C2F8); }
};

// Message Buffer 39 WORD0 Register
//
union WORD039 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD039() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD039 &Instance() { return *reinterpret_cast<volatile WORD039*>(0x40C3C2F8); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD11_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD11_H*>(0x40C3C2FC); }
};

// Message Buffer 39 WORD_8B Register
//
union MB39_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB39_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB39_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB39_8B_WORD1*>(0x40C3C2FC); }
};

// Message Buffer 3 ID Register
//
union MB3_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB3_32B_ID_H*>(0x40C3C2FC); }
};

// Message Buffer 5 ID Register
//
union MB5_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB5_16B_ID_H*>(0x40C3C2FC); }
};

// Message Buffer 39 WORD1 Register
//
union WORD139 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD139() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD139 &Instance() { return *reinterpret_cast<volatile WORD139*>(0x40C3C2FC); }
};

// Message Buffer 40 CS Register
//
union CS40 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS40 &Instance() { return *reinterpret_cast<volatile CS40*>(0x40C3C300); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD12_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD12_H*>(0x40C3C300); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD0_H*>(0x40C3C300); }
};

// Message Buffer 40 CS Register
//
union MB40_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_CS &Instance() { return *reinterpret_cast<volatile MB40_8B_CS*>(0x40C3C300); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD0_H*>(0x40C3C300); }
};

// Message Buffer 40 ID Register
//
union ID40 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID40 &Instance() { return *reinterpret_cast<volatile ID40*>(0x40C3C304); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD13_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD13_H*>(0x40C3C304); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD1_H*>(0x40C3C304); }
};

// Message Buffer 40 ID Register
//
union MB40_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_ID &Instance() { return *reinterpret_cast<volatile MB40_8B_ID*>(0x40C3C304); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD1_H*>(0x40C3C304); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD14_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD14_H*>(0x40C3C308); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD2_H*>(0x40C3C308); }
};

// Message Buffer 40 WORD_8B Register
//
union MB40_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB40_8B_WORD0*>(0x40C3C308); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD2_H*>(0x40C3C308); }
};

// Message Buffer 40 WORD0 Register
//
union WORD040 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD040() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD040 &Instance() { return *reinterpret_cast<volatile WORD040*>(0x40C3C308); }
};

// Message Buffer 1 WORD_64B Register
//
union MB1_64B_WORD15_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB1_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB1_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB1_64B_WORD15_H*>(0x40C3C30C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD3_H*>(0x40C3C30C); }
};

// Message Buffer 40 WORD_8B Register
//
union MB40_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB40_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB40_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB40_8B_WORD1*>(0x40C3C30C); }
};

// Message Buffer 5 WORD_16B Register
//
union MB5_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB5_16B_WORD3_H*>(0x40C3C30C); }
};

// Message Buffer 40 WORD1 Register
//
union WORD140 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD140() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD140 &Instance() { return *reinterpret_cast<volatile WORD140*>(0x40C3C30C); }
};

// Message Buffer 41 CS Register
//
union CS41 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS41 &Instance() { return *reinterpret_cast<volatile CS41*>(0x40C3C310); }
};

// Message Buffer 2 CS Register
//
union MB2_64B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB2_64B_CS_H*>(0x40C3C310); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD4_H*>(0x40C3C310); }
};

// Message Buffer 41 CS Register
//
union MB41_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_CS &Instance() { return *reinterpret_cast<volatile MB41_8B_CS*>(0x40C3C310); }
};

// Message Buffer 6 CS Register
//
union MB6_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB6_16B_CS_H*>(0x40C3C310); }
};

// Message Buffer 41 ID Register
//
union ID41 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID41 &Instance() { return *reinterpret_cast<volatile ID41*>(0x40C3C314); }
};

// Message Buffer 2 ID Register
//
union MB2_64B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB2_64B_ID_H*>(0x40C3C314); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD5_H*>(0x40C3C314); }
};

// Message Buffer 41 ID Register
//
union MB41_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_ID &Instance() { return *reinterpret_cast<volatile MB41_8B_ID*>(0x40C3C314); }
};

// Message Buffer 6 ID Register
//
union MB6_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB6_16B_ID_H*>(0x40C3C314); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD0_H*>(0x40C3C318); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD6_H*>(0x40C3C318); }
};

// Message Buffer 41 WORD_8B Register
//
union MB41_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB41_8B_WORD0*>(0x40C3C318); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD0_H*>(0x40C3C318); }
};

// Message Buffer 41 WORD0 Register
//
union WORD041 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD041() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD041 &Instance() { return *reinterpret_cast<volatile WORD041*>(0x40C3C318); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD1_H*>(0x40C3C31C); }
};

// Message Buffer 3 WORD_32B Register
//
union MB3_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB3_32B_WORD7_H*>(0x40C3C31C); }
};

// Message Buffer 41 WORD_8B Register
//
union MB41_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB41_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB41_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB41_8B_WORD1*>(0x40C3C31C); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD1_H*>(0x40C3C31C); }
};

// Message Buffer 41 WORD1 Register
//
union WORD141 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD141() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD141 &Instance() { return *reinterpret_cast<volatile WORD141*>(0x40C3C31C); }
};

// Message Buffer 42 CS Register
//
union CS42 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS42 &Instance() { return *reinterpret_cast<volatile CS42*>(0x40C3C320); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD2_H*>(0x40C3C320); }
};

// Message Buffer 42 CS Register
//
union MB42_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_CS &Instance() { return *reinterpret_cast<volatile MB42_8B_CS*>(0x40C3C320); }
};

// Message Buffer 4 CS Register
//
union MB4_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB4_32B_CS_H*>(0x40C3C320); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD2_H*>(0x40C3C320); }
};

// Message Buffer 42 ID Register
//
union ID42 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID42 &Instance() { return *reinterpret_cast<volatile ID42*>(0x40C3C324); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD3_H*>(0x40C3C324); }
};

// Message Buffer 42 ID Register
//
union MB42_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_ID &Instance() { return *reinterpret_cast<volatile MB42_8B_ID*>(0x40C3C324); }
};

// Message Buffer 4 ID Register
//
union MB4_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB4_32B_ID_H*>(0x40C3C324); }
};

// Message Buffer 6 WORD_16B Register
//
union MB6_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB6_16B_WORD3_H*>(0x40C3C324); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD4_H*>(0x40C3C328); }
};

// Message Buffer 42 WORD_8B Register
//
union MB42_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB42_8B_WORD0*>(0x40C3C328); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD0_H*>(0x40C3C328); }
};

// Message Buffer 7 CS Register
//
union MB7_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB7_16B_CS_H*>(0x40C3C328); }
};

// Message Buffer 42 WORD0 Register
//
union WORD042 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD042() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD042 &Instance() { return *reinterpret_cast<volatile WORD042*>(0x40C3C328); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD5_H*>(0x40C3C32C); }
};

// Message Buffer 42 WORD_8B Register
//
union MB42_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB42_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB42_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB42_8B_WORD1*>(0x40C3C32C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD1_H*>(0x40C3C32C); }
};

// Message Buffer 7 ID Register
//
union MB7_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB7_16B_ID_H*>(0x40C3C32C); }
};

// Message Buffer 42 WORD1 Register
//
union WORD142 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD142() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD142 &Instance() { return *reinterpret_cast<volatile WORD142*>(0x40C3C32C); }
};

// Message Buffer 43 CS Register
//
union CS43 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS43 &Instance() { return *reinterpret_cast<volatile CS43*>(0x40C3C330); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD6_H*>(0x40C3C330); }
};

// Message Buffer 43 CS Register
//
union MB43_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_CS &Instance() { return *reinterpret_cast<volatile MB43_8B_CS*>(0x40C3C330); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD2_H*>(0x40C3C330); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD0_H*>(0x40C3C330); }
};

// Message Buffer 43 ID Register
//
union ID43 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID43 &Instance() { return *reinterpret_cast<volatile ID43*>(0x40C3C334); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD7_H*>(0x40C3C334); }
};

// Message Buffer 43 ID Register
//
union MB43_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_ID &Instance() { return *reinterpret_cast<volatile MB43_8B_ID*>(0x40C3C334); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD3_H*>(0x40C3C334); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD1_H*>(0x40C3C334); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD8_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD8_H*>(0x40C3C338); }
};

// Message Buffer 43 WORD_8B Register
//
union MB43_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB43_8B_WORD0*>(0x40C3C338); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD4_H*>(0x40C3C338); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD2_H*>(0x40C3C338); }
};

// Message Buffer 43 WORD0 Register
//
union WORD043 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD043() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD043 &Instance() { return *reinterpret_cast<volatile WORD043*>(0x40C3C338); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD9_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD9_H*>(0x40C3C33C); }
};

// Message Buffer 43 WORD_8B Register
//
union MB43_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB43_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB43_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB43_8B_WORD1*>(0x40C3C33C); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD5_H*>(0x40C3C33C); }
};

// Message Buffer 7 WORD_16B Register
//
union MB7_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB7_16B_WORD3_H*>(0x40C3C33C); }
};

// Message Buffer 43 WORD1 Register
//
union WORD143 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD143() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD143 &Instance() { return *reinterpret_cast<volatile WORD143*>(0x40C3C33C); }
};

// Message Buffer 44 CS Register
//
union CS44 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS44 &Instance() { return *reinterpret_cast<volatile CS44*>(0x40C3C340); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD10_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD10_H*>(0x40C3C340); }
};

// Message Buffer 44 CS Register
//
union MB44_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_CS &Instance() { return *reinterpret_cast<volatile MB44_8B_CS*>(0x40C3C340); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD6_H*>(0x40C3C340); }
};

// Message Buffer 8 CS Register
//
union MB8_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB8_16B_CS_H*>(0x40C3C340); }
};

// Message Buffer 44 ID Register
//
union ID44 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID44 &Instance() { return *reinterpret_cast<volatile ID44*>(0x40C3C344); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD11_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD11_H*>(0x40C3C344); }
};

// Message Buffer 44 ID Register
//
union MB44_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_ID &Instance() { return *reinterpret_cast<volatile MB44_8B_ID*>(0x40C3C344); }
};

// Message Buffer 4 WORD_32B Register
//
union MB4_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB4_32B_WORD7_H*>(0x40C3C344); }
};

// Message Buffer 8 ID Register
//
union MB8_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB8_16B_ID_H*>(0x40C3C344); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD12_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD12_H*>(0x40C3C348); }
};

// Message Buffer 44 WORD_8B Register
//
union MB44_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB44_8B_WORD0*>(0x40C3C348); }
};

// Message Buffer 5 CS Register
//
union MB5_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB5_32B_CS_H*>(0x40C3C348); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD0_H*>(0x40C3C348); }
};

// Message Buffer 44 WORD0 Register
//
union WORD044 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD044() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD044 &Instance() { return *reinterpret_cast<volatile WORD044*>(0x40C3C348); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD13_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD13_H*>(0x40C3C34C); }
};

// Message Buffer 44 WORD_8B Register
//
union MB44_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB44_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB44_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB44_8B_WORD1*>(0x40C3C34C); }
};

// Message Buffer 5 ID Register
//
union MB5_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB5_32B_ID_H*>(0x40C3C34C); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD1_H*>(0x40C3C34C); }
};

// Message Buffer 44 WORD1 Register
//
union WORD144 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD144() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD144 &Instance() { return *reinterpret_cast<volatile WORD144*>(0x40C3C34C); }
};

// Message Buffer 45 CS Register
//
union CS45 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS45 &Instance() { return *reinterpret_cast<volatile CS45*>(0x40C3C350); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD14_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD14_H*>(0x40C3C350); }
};

// Message Buffer 45 CS Register
//
union MB45_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_CS &Instance() { return *reinterpret_cast<volatile MB45_8B_CS*>(0x40C3C350); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD0_H*>(0x40C3C350); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD2_H*>(0x40C3C350); }
};

// Message Buffer 45 ID Register
//
union ID45 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID45 &Instance() { return *reinterpret_cast<volatile ID45*>(0x40C3C354); }
};

// Message Buffer 2 WORD_64B Register
//
union MB2_64B_WORD15_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB2_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB2_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB2_64B_WORD15_H*>(0x40C3C354); }
};

// Message Buffer 45 ID Register
//
union MB45_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_ID &Instance() { return *reinterpret_cast<volatile MB45_8B_ID*>(0x40C3C354); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD1_H*>(0x40C3C354); }
};

// Message Buffer 8 WORD_16B Register
//
union MB8_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB8_16B_WORD3_H*>(0x40C3C354); }
};

// Message Buffer 3 CS Register
//
union MB3_64B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB3_64B_CS_H*>(0x40C3C358); }
};

// Message Buffer 45 WORD_8B Register
//
union MB45_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB45_8B_WORD0*>(0x40C3C358); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD2_H*>(0x40C3C358); }
};

// Message Buffer 9 CS Register
//
union MB9_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB9_16B_CS_H*>(0x40C3C358); }
};

// Message Buffer 45 WORD0 Register
//
union WORD045 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD045() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD045 &Instance() { return *reinterpret_cast<volatile WORD045*>(0x40C3C358); }
};

// Message Buffer 3 ID Register
//
union MB3_64B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB3_64B_ID_H*>(0x40C3C35C); }
};

// Message Buffer 45 WORD_8B Register
//
union MB45_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB45_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB45_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB45_8B_WORD1*>(0x40C3C35C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD3_H*>(0x40C3C35C); }
};

// Message Buffer 9 ID Register
//
union MB9_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB9_16B_ID_H*>(0x40C3C35C); }
};

// Message Buffer 45 WORD1 Register
//
union WORD145 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD145() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD145 &Instance() { return *reinterpret_cast<volatile WORD145*>(0x40C3C35C); }
};

// Message Buffer 46 CS Register
//
union CS46 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS46 &Instance() { return *reinterpret_cast<volatile CS46*>(0x40C3C360); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD0_H*>(0x40C3C360); }
};

// Message Buffer 46 CS Register
//
union MB46_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_CS &Instance() { return *reinterpret_cast<volatile MB46_8B_CS*>(0x40C3C360); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD4_H*>(0x40C3C360); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD0_H*>(0x40C3C360); }
};

// Message Buffer 46 ID Register
//
union ID46 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID46 &Instance() { return *reinterpret_cast<volatile ID46*>(0x40C3C364); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD1_H*>(0x40C3C364); }
};

// Message Buffer 46 ID Register
//
union MB46_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_ID &Instance() { return *reinterpret_cast<volatile MB46_8B_ID*>(0x40C3C364); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD5_H*>(0x40C3C364); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD1_H*>(0x40C3C364); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD2_H*>(0x40C3C368); }
};

// Message Buffer 46 WORD_8B Register
//
union MB46_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB46_8B_WORD0*>(0x40C3C368); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD6_H*>(0x40C3C368); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD2_H*>(0x40C3C368); }
};

// Message Buffer 46 WORD0 Register
//
union WORD046 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD046() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD046 &Instance() { return *reinterpret_cast<volatile WORD046*>(0x40C3C368); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD3_H*>(0x40C3C36C); }
};

// Message Buffer 46 WORD_8B Register
//
union MB46_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB46_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB46_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB46_8B_WORD1*>(0x40C3C36C); }
};

// Message Buffer 5 WORD_32B Register
//
union MB5_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB5_32B_WORD7_H*>(0x40C3C36C); }
};

// Message Buffer 9 WORD_16B Register
//
union MB9_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB9_16B_WORD3_H*>(0x40C3C36C); }
};

// Message Buffer 46 WORD1 Register
//
union WORD146 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD146() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD146 &Instance() { return *reinterpret_cast<volatile WORD146*>(0x40C3C36C); }
};

// Message Buffer 47 CS Register
//
union CS47 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS47 &Instance() { return *reinterpret_cast<volatile CS47*>(0x40C3C370); }
};

// Message Buffer 10 CS Register
//
union MB10_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB10_16B_CS_H*>(0x40C3C370); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD4_H*>(0x40C3C370); }
};

// Message Buffer 47 CS Register
//
union MB47_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_CS &Instance() { return *reinterpret_cast<volatile MB47_8B_CS*>(0x40C3C370); }
};

// Message Buffer 6 CS Register
//
union MB6_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB6_32B_CS_H*>(0x40C3C370); }
};

// Message Buffer 47 ID Register
//
union ID47 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID47 &Instance() { return *reinterpret_cast<volatile ID47*>(0x40C3C374); }
};

// Message Buffer 10 ID Register
//
union MB10_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB10_16B_ID_H*>(0x40C3C374); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD5_H*>(0x40C3C374); }
};

// Message Buffer 47 ID Register
//
union MB47_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_ID &Instance() { return *reinterpret_cast<volatile MB47_8B_ID*>(0x40C3C374); }
};

// Message Buffer 6 ID Register
//
union MB6_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB6_32B_ID_H*>(0x40C3C374); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD0_H*>(0x40C3C378); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD6_H*>(0x40C3C378); }
};

// Message Buffer 47 WORD_8B Register
//
union MB47_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB47_8B_WORD0*>(0x40C3C378); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD0_H*>(0x40C3C378); }
};

// Message Buffer 47 WORD0 Register
//
union WORD047 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD047() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD047 &Instance() { return *reinterpret_cast<volatile WORD047*>(0x40C3C378); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD1_H*>(0x40C3C37C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD7_H*>(0x40C3C37C); }
};

// Message Buffer 47 WORD_8B Register
//
union MB47_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB47_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB47_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB47_8B_WORD1*>(0x40C3C37C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD1_H*>(0x40C3C37C); }
};

// Message Buffer 47 WORD1 Register
//
union WORD147 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD147() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD147 &Instance() { return *reinterpret_cast<volatile WORD147*>(0x40C3C37C); }
};

// Message Buffer 48 CS Register
//
union CS48 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS48 &Instance() { return *reinterpret_cast<volatile CS48*>(0x40C3C380); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD2_H*>(0x40C3C380); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD8_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD8_H*>(0x40C3C380); }
};

// Message Buffer 48 CS Register
//
union MB48_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_CS &Instance() { return *reinterpret_cast<volatile MB48_8B_CS*>(0x40C3C380); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD2_H*>(0x40C3C380); }
};

// Message Buffer 48 ID Register
//
union ID48 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID48 &Instance() { return *reinterpret_cast<volatile ID48*>(0x40C3C384); }
};

// Message Buffer 10 WORD_16B Register
//
union MB10_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB10_16B_WORD3_H*>(0x40C3C384); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD9_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD9_H*>(0x40C3C384); }
};

// Message Buffer 48 ID Register
//
union MB48_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_ID &Instance() { return *reinterpret_cast<volatile MB48_8B_ID*>(0x40C3C384); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD3_H*>(0x40C3C384); }
};

// Message Buffer 11 CS Register
//
union MB11_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB11_16B_CS_H*>(0x40C3C388); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD10_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD10_H*>(0x40C3C388); }
};

// Message Buffer 48 WORD_8B Register
//
union MB48_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB48_8B_WORD0*>(0x40C3C388); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD4_H*>(0x40C3C388); }
};

// Message Buffer 48 WORD0 Register
//
union WORD048 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD048() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD048 &Instance() { return *reinterpret_cast<volatile WORD048*>(0x40C3C388); }
};

// Message Buffer 11 ID Register
//
union MB11_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB11_16B_ID_H*>(0x40C3C38C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD11_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD11_H*>(0x40C3C38C); }
};

// Message Buffer 48 WORD_8B Register
//
union MB48_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB48_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB48_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB48_8B_WORD1*>(0x40C3C38C); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD5_H*>(0x40C3C38C); }
};

// Message Buffer 48 WORD1 Register
//
union WORD148 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD148() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD148 &Instance() { return *reinterpret_cast<volatile WORD148*>(0x40C3C38C); }
};

// Message Buffer 49 CS Register
//
union CS49 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS49 &Instance() { return *reinterpret_cast<volatile CS49*>(0x40C3C390); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD0_H*>(0x40C3C390); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD12_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD12_H*>(0x40C3C390); }
};

// Message Buffer 49 CS Register
//
union MB49_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_CS &Instance() { return *reinterpret_cast<volatile MB49_8B_CS*>(0x40C3C390); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD6_H*>(0x40C3C390); }
};

// Message Buffer 49 ID Register
//
union ID49 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID49 &Instance() { return *reinterpret_cast<volatile ID49*>(0x40C3C394); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD1_H*>(0x40C3C394); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD13_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD13_H*>(0x40C3C394); }
};

// Message Buffer 49 ID Register
//
union MB49_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_ID &Instance() { return *reinterpret_cast<volatile MB49_8B_ID*>(0x40C3C394); }
};

// Message Buffer 6 WORD_32B Register
//
union MB6_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB6_32B_WORD7_H*>(0x40C3C394); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD2_H*>(0x40C3C398); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD14_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD14_H*>(0x40C3C398); }
};

// Message Buffer 49 WORD_8B Register
//
union MB49_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB49_8B_WORD0*>(0x40C3C398); }
};

// Message Buffer 7 CS Register
//
union MB7_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB7_32B_CS_H*>(0x40C3C398); }
};

// Message Buffer 49 WORD0 Register
//
union WORD049 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD049() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD049 &Instance() { return *reinterpret_cast<volatile WORD049*>(0x40C3C398); }
};

// Message Buffer 11 WORD_16B Register
//
union MB11_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB11_16B_WORD3_H*>(0x40C3C39C); }
};

// Message Buffer 3 WORD_64B Register
//
union MB3_64B_WORD15_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB3_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB3_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB3_64B_WORD15_H*>(0x40C3C39C); }
};

// Message Buffer 49 WORD_8B Register
//
union MB49_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB49_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB49_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB49_8B_WORD1*>(0x40C3C39C); }
};

// Message Buffer 7 ID Register
//
union MB7_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB7_32B_ID_H*>(0x40C3C39C); }
};

// Message Buffer 49 WORD1 Register
//
union WORD149 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD149() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD149 &Instance() { return *reinterpret_cast<volatile WORD149*>(0x40C3C39C); }
};

// Message Buffer 50 CS Register
//
union CS50 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS50 &Instance() { return *reinterpret_cast<volatile CS50*>(0x40C3C3A0); }
};

// Message Buffer 12 CS Register
//
union MB12_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB12_16B_CS_H*>(0x40C3C3A0); }
};

// Message Buffer 4 CS Register
//
union MB4_64B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB4_64B_CS_H*>(0x40C3C3A0); }
};

// Message Buffer 50 CS Register
//
union MB50_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_CS &Instance() { return *reinterpret_cast<volatile MB50_8B_CS*>(0x40C3C3A0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD0_H*>(0x40C3C3A0); }
};

// Message Buffer 50 ID Register
//
union ID50 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID50 &Instance() { return *reinterpret_cast<volatile ID50*>(0x40C3C3A4); }
};

// Message Buffer 12 ID Register
//
union MB12_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB12_16B_ID_H*>(0x40C3C3A4); }
};

// Message Buffer 4 ID Register
//
union MB4_64B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB4_64B_ID_H*>(0x40C3C3A4); }
};

// Message Buffer 50 ID Register
//
union MB50_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_ID &Instance() { return *reinterpret_cast<volatile MB50_8B_ID*>(0x40C3C3A4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD1_H*>(0x40C3C3A4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD0_H*>(0x40C3C3A8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD0_H*>(0x40C3C3A8); }
};

// Message Buffer 50 WORD_8B Register
//
union MB50_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB50_8B_WORD0*>(0x40C3C3A8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD2_H*>(0x40C3C3A8); }
};

// Message Buffer 50 WORD0 Register
//
union WORD050 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD050() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD050 &Instance() { return *reinterpret_cast<volatile WORD050*>(0x40C3C3A8); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD1_H*>(0x40C3C3AC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD1_H*>(0x40C3C3AC); }
};

// Message Buffer 50 WORD_8B Register
//
union MB50_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB50_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB50_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB50_8B_WORD1*>(0x40C3C3AC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD3_H*>(0x40C3C3AC); }
};

// Message Buffer 50 WORD1 Register
//
union WORD150 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD150() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD150 &Instance() { return *reinterpret_cast<volatile WORD150*>(0x40C3C3AC); }
};

// Message Buffer 51 CS Register
//
union CS51 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS51 &Instance() { return *reinterpret_cast<volatile CS51*>(0x40C3C3B0); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD2_H*>(0x40C3C3B0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD2_H*>(0x40C3C3B0); }
};

// Message Buffer 51 CS Register
//
union MB51_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_CS &Instance() { return *reinterpret_cast<volatile MB51_8B_CS*>(0x40C3C3B0); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD4_H*>(0x40C3C3B0); }
};

// Message Buffer 51 ID Register
//
union ID51 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID51 &Instance() { return *reinterpret_cast<volatile ID51*>(0x40C3C3B4); }
};

// Message Buffer 12 WORD_16B Register
//
union MB12_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB12_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB12_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB12_16B_WORD3_H*>(0x40C3C3B4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD3_H*>(0x40C3C3B4); }
};

// Message Buffer 51 ID Register
//
union MB51_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_ID &Instance() { return *reinterpret_cast<volatile MB51_8B_ID*>(0x40C3C3B4); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD5_H*>(0x40C3C3B4); }
};

// Message Buffer 13 CS Register
//
union MB13_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB13_16B_CS_H*>(0x40C3C3B8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD4_H*>(0x40C3C3B8); }
};

// Message Buffer 51 WORD_8B Register
//
union MB51_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB51_8B_WORD0*>(0x40C3C3B8); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD6_H*>(0x40C3C3B8); }
};

// Message Buffer 51 WORD0 Register
//
union WORD051 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD051() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD051 &Instance() { return *reinterpret_cast<volatile WORD051*>(0x40C3C3B8); }
};

// Message Buffer 13 ID Register
//
union MB13_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB13_16B_ID_H*>(0x40C3C3BC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD5_H*>(0x40C3C3BC); }
};

// Message Buffer 51 WORD_8B Register
//
union MB51_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB51_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB51_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB51_8B_WORD1*>(0x40C3C3BC); }
};

// Message Buffer 7 WORD_32B Register
//
union MB7_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB7_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB7_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB7_32B_WORD7_H*>(0x40C3C3BC); }
};

// Message Buffer 51 WORD1 Register
//
union WORD151 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD151() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD151 &Instance() { return *reinterpret_cast<volatile WORD151*>(0x40C3C3BC); }
};

// Message Buffer 52 CS Register
//
union CS52 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS52 &Instance() { return *reinterpret_cast<volatile CS52*>(0x40C3C3C0); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD0_H*>(0x40C3C3C0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD6_H*>(0x40C3C3C0); }
};

// Message Buffer 52 CS Register
//
union MB52_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_CS &Instance() { return *reinterpret_cast<volatile MB52_8B_CS*>(0x40C3C3C0); }
};

// Message Buffer 8 CS Register
//
union MB8_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB8_32B_CS_H*>(0x40C3C3C0); }
};

// Message Buffer 52 ID Register
//
union ID52 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID52 &Instance() { return *reinterpret_cast<volatile ID52*>(0x40C3C3C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD1_H*>(0x40C3C3C4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD7_H*>(0x40C3C3C4); }
};

// Message Buffer 52 ID Register
//
union MB52_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_ID &Instance() { return *reinterpret_cast<volatile MB52_8B_ID*>(0x40C3C3C4); }
};

// Message Buffer 8 ID Register
//
union MB8_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB8_32B_ID_H*>(0x40C3C3C4); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD2_H*>(0x40C3C3C8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD8_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD8_H*>(0x40C3C3C8); }
};

// Message Buffer 52 WORD_8B Register
//
union MB52_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB52_8B_WORD0*>(0x40C3C3C8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD0_H*>(0x40C3C3C8); }
};

// Message Buffer 52 WORD0 Register
//
union WORD052 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD052() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD052 &Instance() { return *reinterpret_cast<volatile WORD052*>(0x40C3C3C8); }
};

// Message Buffer 13 WORD_16B Register
//
union MB13_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB13_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB13_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB13_16B_WORD3_H*>(0x40C3C3CC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD9_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD9_H*>(0x40C3C3CC); }
};

// Message Buffer 52 WORD_8B Register
//
union MB52_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB52_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB52_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB52_8B_WORD1*>(0x40C3C3CC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD1_H*>(0x40C3C3CC); }
};

// Message Buffer 52 WORD1 Register
//
union WORD152 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD152() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD152 &Instance() { return *reinterpret_cast<volatile WORD152*>(0x40C3C3CC); }
};

// Message Buffer 53 CS Register
//
union CS53 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS53 &Instance() { return *reinterpret_cast<volatile CS53*>(0x40C3C3D0); }
};

// Message Buffer 14 CS Register
//
union MB14_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB14_16B_CS_H*>(0x40C3C3D0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD10_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD10_H*>(0x40C3C3D0); }
};

// Message Buffer 53 CS Register
//
union MB53_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_CS &Instance() { return *reinterpret_cast<volatile MB53_8B_CS*>(0x40C3C3D0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD2_H*>(0x40C3C3D0); }
};

// Message Buffer 53 ID Register
//
union ID53 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID53 &Instance() { return *reinterpret_cast<volatile ID53*>(0x40C3C3D4); }
};

// Message Buffer 14 ID Register
//
union MB14_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB14_16B_ID_H*>(0x40C3C3D4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD11_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD11_H*>(0x40C3C3D4); }
};

// Message Buffer 53 ID Register
//
union MB53_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_ID &Instance() { return *reinterpret_cast<volatile MB53_8B_ID*>(0x40C3C3D4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD3_H*>(0x40C3C3D4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD0_H*>(0x40C3C3D8); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD12_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD12_H*>(0x40C3C3D8); }
};

// Message Buffer 53 WORD_8B Register
//
union MB53_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB53_8B_WORD0*>(0x40C3C3D8); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD4_H*>(0x40C3C3D8); }
};

// Message Buffer 53 WORD0 Register
//
union WORD053 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD053() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD053 &Instance() { return *reinterpret_cast<volatile WORD053*>(0x40C3C3D8); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD1_H*>(0x40C3C3DC); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD13_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD13_H*>(0x40C3C3DC); }
};

// Message Buffer 53 WORD_8B Register
//
union MB53_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB53_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB53_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB53_8B_WORD1*>(0x40C3C3DC); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD5_H*>(0x40C3C3DC); }
};

// Message Buffer 53 WORD1 Register
//
union WORD153 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD153() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD153 &Instance() { return *reinterpret_cast<volatile WORD153*>(0x40C3C3DC); }
};

// Message Buffer 54 CS Register
//
union CS54 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS54 &Instance() { return *reinterpret_cast<volatile CS54*>(0x40C3C3E0); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD2_H*>(0x40C3C3E0); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD14_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD14_H*>(0x40C3C3E0); }
};

// Message Buffer 54 CS Register
//
union MB54_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_CS &Instance() { return *reinterpret_cast<volatile MB54_8B_CS*>(0x40C3C3E0); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD6_H*>(0x40C3C3E0); }
};

// Message Buffer 54 ID Register
//
union ID54 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID54 &Instance() { return *reinterpret_cast<volatile ID54*>(0x40C3C3E4); }
};

// Message Buffer 14 WORD_16B Register
//
union MB14_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB14_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB14_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB14_16B_WORD3_H*>(0x40C3C3E4); }
};

// Message Buffer 4 WORD_64B Register
//
union MB4_64B_WORD15_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB4_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB4_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB4_64B_WORD15_H*>(0x40C3C3E4); }
};

// Message Buffer 54 ID Register
//
union MB54_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_ID &Instance() { return *reinterpret_cast<volatile MB54_8B_ID*>(0x40C3C3E4); }
};

// Message Buffer 8 WORD_32B Register
//
union MB8_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB8_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB8_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB8_32B_WORD7_H*>(0x40C3C3E4); }
};

// Message Buffer 15 CS Register
//
union MB15_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB15_16B_CS_H*>(0x40C3C3E8); }
};

// Message Buffer 54 WORD_8B Register
//
union MB54_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB54_8B_WORD0*>(0x40C3C3E8); }
};

// Message Buffer 5 CS Register
//
union MB5_64B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB5_64B_CS_H*>(0x40C3C3E8); }
};

// Message Buffer 9 CS Register
//
union MB9_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB9_32B_CS_H*>(0x40C3C3E8); }
};

// Message Buffer 54 WORD0 Register
//
union WORD054 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD054() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD054 &Instance() { return *reinterpret_cast<volatile WORD054*>(0x40C3C3E8); }
};

// Message Buffer 15 ID Register
//
union MB15_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB15_16B_ID_H*>(0x40C3C3EC); }
};

// Message Buffer 54 WORD_8B Register
//
union MB54_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB54_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB54_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB54_8B_WORD1*>(0x40C3C3EC); }
};

// Message Buffer 5 ID Register
//
union MB5_64B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB5_64B_ID_H*>(0x40C3C3EC); }
};

// Message Buffer 9 ID Register
//
union MB9_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB9_32B_ID_H*>(0x40C3C3EC); }
};

// Message Buffer 54 WORD1 Register
//
union WORD154 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD154() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD154 &Instance() { return *reinterpret_cast<volatile WORD154*>(0x40C3C3EC); }
};

// Message Buffer 55 CS Register
//
union CS55 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS55 &Instance() { return *reinterpret_cast<volatile CS55*>(0x40C3C3F0); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD0_H*>(0x40C3C3F0); }
};

// Message Buffer 55 CS Register
//
union MB55_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_CS &Instance() { return *reinterpret_cast<volatile MB55_8B_CS*>(0x40C3C3F0); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD0_H*>(0x40C3C3F0); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD0_H*>(0x40C3C3F0); }
};

// Message Buffer 55 ID Register
//
union ID55 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID55 &Instance() { return *reinterpret_cast<volatile ID55*>(0x40C3C3F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD1_H*>(0x40C3C3F4); }
};

// Message Buffer 55 ID Register
//
union MB55_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_ID &Instance() { return *reinterpret_cast<volatile MB55_8B_ID*>(0x40C3C3F4); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD1_H*>(0x40C3C3F4); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD1_H*>(0x40C3C3F4); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD2_H*>(0x40C3C3F8); }
};

// Message Buffer 55 WORD_8B Register
//
union MB55_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB55_8B_WORD0*>(0x40C3C3F8); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD2_H*>(0x40C3C3F8); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD2_H*>(0x40C3C3F8); }
};

// Message Buffer 55 WORD0 Register
//
union WORD055 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD055() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD055 &Instance() { return *reinterpret_cast<volatile WORD055*>(0x40C3C3F8); }
};

// Message Buffer 15 WORD_16B Register
//
union MB15_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB15_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB15_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB15_16B_WORD3_H*>(0x40C3C3FC); }
};

// Message Buffer 55 WORD_8B Register
//
union MB55_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB55_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB55_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB55_8B_WORD1*>(0x40C3C3FC); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD3_H*>(0x40C3C3FC); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD3_H*>(0x40C3C3FC); }
};

// Message Buffer 55 WORD1 Register
//
union WORD155 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD155() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD155 &Instance() { return *reinterpret_cast<volatile WORD155*>(0x40C3C3FC); }
};

// Message Buffer 56 CS Register
//
union CS56 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS56 &Instance() { return *reinterpret_cast<volatile CS56*>(0x40C3C400); }
};

// Message Buffer 16 CS Register
//
union MB16_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB16_16B_CS_H*>(0x40C3C400); }
};

// Message Buffer 56 CS Register
//
union MB56_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_CS &Instance() { return *reinterpret_cast<volatile MB56_8B_CS*>(0x40C3C400); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD4_H*>(0x40C3C400); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD4_H*>(0x40C3C400); }
};

// Message Buffer 56 ID Register
//
union ID56 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID56 &Instance() { return *reinterpret_cast<volatile ID56*>(0x40C3C404); }
};

// Message Buffer 16 ID Register
//
union MB16_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB16_16B_ID_H*>(0x40C3C404); }
};

// Message Buffer 56 ID Register
//
union MB56_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_ID &Instance() { return *reinterpret_cast<volatile MB56_8B_ID*>(0x40C3C404); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD5_H*>(0x40C3C404); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD5_H*>(0x40C3C404); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD0_H*>(0x40C3C408); }
};

// Message Buffer 56 WORD_8B Register
//
union MB56_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB56_8B_WORD0*>(0x40C3C408); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD6_H*>(0x40C3C408); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD6_H*>(0x40C3C408); }
};

// Message Buffer 56 WORD0 Register
//
union WORD056 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD056() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD056 &Instance() { return *reinterpret_cast<volatile WORD056*>(0x40C3C408); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD1_H*>(0x40C3C40C); }
};

// Message Buffer 56 WORD_8B Register
//
union MB56_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB56_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB56_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB56_8B_WORD1*>(0x40C3C40C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD7_H*>(0x40C3C40C); }
};

// Message Buffer 9 WORD_32B Register
//
union MB9_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB9_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB9_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB9_32B_WORD7_H*>(0x40C3C40C); }
};

// Message Buffer 56 WORD1 Register
//
union WORD156 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD156() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD156 &Instance() { return *reinterpret_cast<volatile WORD156*>(0x40C3C40C); }
};

// Message Buffer 57 CS Register
//
union CS57 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS57 &Instance() { return *reinterpret_cast<volatile CS57*>(0x40C3C410); }
};

// Message Buffer 10 CS Register
//
union MB10_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB10_32B_CS_H*>(0x40C3C410); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD2_H*>(0x40C3C410); }
};

// Message Buffer 57 CS Register
//
union MB57_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_CS &Instance() { return *reinterpret_cast<volatile MB57_8B_CS*>(0x40C3C410); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD8_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD8_H*>(0x40C3C410); }
};

// Message Buffer 57 ID Register
//
union ID57 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID57 &Instance() { return *reinterpret_cast<volatile ID57*>(0x40C3C414); }
};

// Message Buffer 10 ID Register
//
union MB10_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB10_32B_ID_H*>(0x40C3C414); }
};

// Message Buffer 16 WORD_16B Register
//
union MB16_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB16_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB16_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB16_16B_WORD3_H*>(0x40C3C414); }
};

// Message Buffer 57 ID Register
//
union MB57_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_ID &Instance() { return *reinterpret_cast<volatile MB57_8B_ID*>(0x40C3C414); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD9_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD9_H*>(0x40C3C414); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD0_H*>(0x40C3C418); }
};

// Message Buffer 17 CS Register
//
union MB17_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB17_16B_CS_H*>(0x40C3C418); }
};

// Message Buffer 57 WORD_8B Register
//
union MB57_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB57_8B_WORD0*>(0x40C3C418); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD10_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD10_H*>(0x40C3C418); }
};

// Message Buffer 57 WORD0 Register
//
union WORD057 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD057() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD057 &Instance() { return *reinterpret_cast<volatile WORD057*>(0x40C3C418); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD1_H*>(0x40C3C41C); }
};

// Message Buffer 17 ID Register
//
union MB17_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB17_16B_ID_H*>(0x40C3C41C); }
};

// Message Buffer 57 WORD_8B Register
//
union MB57_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB57_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB57_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB57_8B_WORD1*>(0x40C3C41C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD11_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD11_H*>(0x40C3C41C); }
};

// Message Buffer 57 WORD1 Register
//
union WORD157 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD157() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD157 &Instance() { return *reinterpret_cast<volatile WORD157*>(0x40C3C41C); }
};

// Message Buffer 58 CS Register
//
union CS58 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS58 &Instance() { return *reinterpret_cast<volatile CS58*>(0x40C3C420); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD2_H*>(0x40C3C420); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD0_H*>(0x40C3C420); }
};

// Message Buffer 58 CS Register
//
union MB58_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_CS &Instance() { return *reinterpret_cast<volatile MB58_8B_CS*>(0x40C3C420); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD12_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD12_H*>(0x40C3C420); }
};

// Message Buffer 58 ID Register
//
union ID58 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID58 &Instance() { return *reinterpret_cast<volatile ID58*>(0x40C3C424); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD3_H*>(0x40C3C424); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD1_H*>(0x40C3C424); }
};

// Message Buffer 58 ID Register
//
union MB58_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_ID &Instance() { return *reinterpret_cast<volatile MB58_8B_ID*>(0x40C3C424); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD13_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD13_H*>(0x40C3C424); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD4_H*>(0x40C3C428); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD2_H*>(0x40C3C428); }
};

// Message Buffer 58 WORD_8B Register
//
union MB58_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB58_8B_WORD0*>(0x40C3C428); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD14_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD14_H*>(0x40C3C428); }
};

// Message Buffer 58 WORD0 Register
//
union WORD058 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD058() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD058 &Instance() { return *reinterpret_cast<volatile WORD058*>(0x40C3C428); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD5_H*>(0x40C3C42C); }
};

// Message Buffer 17 WORD_16B Register
//
union MB17_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB17_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB17_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB17_16B_WORD3_H*>(0x40C3C42C); }
};

// Message Buffer 58 WORD_8B Register
//
union MB58_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB58_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB58_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB58_8B_WORD1*>(0x40C3C42C); }
};

// Message Buffer 5 WORD_64B Register
//
union MB5_64B_WORD15_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB5_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB5_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB5_64B_WORD15_H*>(0x40C3C42C); }
};

// Message Buffer 58 WORD1 Register
//
union WORD158 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD158() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD158 &Instance() { return *reinterpret_cast<volatile WORD158*>(0x40C3C42C); }
};

// Message Buffer 59 CS Register
//
union CS59 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS59 &Instance() { return *reinterpret_cast<volatile CS59*>(0x40C3C430); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD6_H*>(0x40C3C430); }
};

// Message Buffer 18 CS Register
//
union MB18_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB18_16B_CS_H*>(0x40C3C430); }
};

// Message Buffer 59 CS Register
//
union MB59_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_CS &Instance() { return *reinterpret_cast<volatile MB59_8B_CS*>(0x40C3C430); }
};

// Message Buffer 6 CS Register
//
union MB6_64B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_CS_H &Instance() { return *reinterpret_cast<volatile MB6_64B_CS_H*>(0x40C3C430); }
};

// Message Buffer 59 ID Register
//
union ID59 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID59 &Instance() { return *reinterpret_cast<volatile ID59*>(0x40C3C434); }
};

// Message Buffer 10 WORD_32B Register
//
union MB10_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB10_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB10_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB10_32B_WORD7_H*>(0x40C3C434); }
};

// Message Buffer 18 ID Register
//
union MB18_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB18_16B_ID_H*>(0x40C3C434); }
};

// Message Buffer 59 ID Register
//
union MB59_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_ID &Instance() { return *reinterpret_cast<volatile MB59_8B_ID*>(0x40C3C434); }
};

// Message Buffer 6 ID Register
//
union MB6_64B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_ID_H &Instance() { return *reinterpret_cast<volatile MB6_64B_ID_H*>(0x40C3C434); }
};

// Message Buffer 11 CS Register
//
union MB11_32B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_CS_H &Instance() { return *reinterpret_cast<volatile MB11_32B_CS_H*>(0x40C3C438); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD0_H*>(0x40C3C438); }
};

// Message Buffer 59 WORD_8B Register
//
union MB59_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB59_8B_WORD0*>(0x40C3C438); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD0_H*>(0x40C3C438); }
};

// Message Buffer 59 WORD0 Register
//
union WORD059 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD059() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD059 &Instance() { return *reinterpret_cast<volatile WORD059*>(0x40C3C438); }
};

// Message Buffer 11 ID Register
//
union MB11_32B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_ID_H &Instance() { return *reinterpret_cast<volatile MB11_32B_ID_H*>(0x40C3C43C); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD1_H*>(0x40C3C43C); }
};

// Message Buffer 59 WORD_8B Register
//
union MB59_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB59_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB59_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB59_8B_WORD1*>(0x40C3C43C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD1_H*>(0x40C3C43C); }
};

// Message Buffer 59 WORD1 Register
//
union WORD159 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD159() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD159 &Instance() { return *reinterpret_cast<volatile WORD159*>(0x40C3C43C); }
};

// Message Buffer 60 CS Register
//
union CS60 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS60 &Instance() { return *reinterpret_cast<volatile CS60*>(0x40C3C440); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD0_H*>(0x40C3C440); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD2_H*>(0x40C3C440); }
};

// Message Buffer 60 CS Register
//
union MB60_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_CS &Instance() { return *reinterpret_cast<volatile MB60_8B_CS*>(0x40C3C440); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD2_H*>(0x40C3C440); }
};

// Message Buffer 60 ID Register
//
union ID60 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID60 &Instance() { return *reinterpret_cast<volatile ID60*>(0x40C3C444); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD1_H*>(0x40C3C444); }
};

// Message Buffer 18 WORD_16B Register
//
union MB18_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB18_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB18_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB18_16B_WORD3_H*>(0x40C3C444); }
};

// Message Buffer 60 ID Register
//
union MB60_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_ID &Instance() { return *reinterpret_cast<volatile MB60_8B_ID*>(0x40C3C444); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD3_H*>(0x40C3C444); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD2_H*>(0x40C3C448); }
};

// Message Buffer 19 CS Register
//
union MB19_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB19_16B_CS_H*>(0x40C3C448); }
};

// Message Buffer 60 WORD_8B Register
//
union MB60_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB60_8B_WORD0*>(0x40C3C448); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD4_H*>(0x40C3C448); }
};

// Message Buffer 60 WORD0 Register
//
union WORD060 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD060() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD060 &Instance() { return *reinterpret_cast<volatile WORD060*>(0x40C3C448); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD3_H*>(0x40C3C44C); }
};

// Message Buffer 19 ID Register
//
union MB19_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB19_16B_ID_H*>(0x40C3C44C); }
};

// Message Buffer 60 WORD_8B Register
//
union MB60_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB60_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB60_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB60_8B_WORD1*>(0x40C3C44C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD5_H*>(0x40C3C44C); }
};

// Message Buffer 60 WORD1 Register
//
union WORD160 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD160() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD160 &Instance() { return *reinterpret_cast<volatile WORD160*>(0x40C3C44C); }
};

// Message Buffer 61 CS Register
//
union CS61 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS61 &Instance() { return *reinterpret_cast<volatile CS61*>(0x40C3C450); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD4_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_19 : 8;
    uint32_t DATA_BYTE_18 : 8;
    uint32_t DATA_BYTE_17 : 8;
    uint32_t DATA_BYTE_16 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD4_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD4_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD4_H*>(0x40C3C450); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD0_H*>(0x40C3C450); }
};

// Message Buffer 61 CS Register
//
union MB61_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_CS &Instance() { return *reinterpret_cast<volatile MB61_8B_CS*>(0x40C3C450); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD6_H*>(0x40C3C450); }
};

// Message Buffer 61 ID Register
//
union ID61 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID61 &Instance() { return *reinterpret_cast<volatile ID61*>(0x40C3C454); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD5_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_23 : 8;
    uint32_t DATA_BYTE_22 : 8;
    uint32_t DATA_BYTE_21 : 8;
    uint32_t DATA_BYTE_20 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD5_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD5_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD5_H*>(0x40C3C454); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD1_H*>(0x40C3C454); }
};

// Message Buffer 61 ID Register
//
union MB61_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_ID &Instance() { return *reinterpret_cast<volatile MB61_8B_ID*>(0x40C3C454); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD7_H*>(0x40C3C454); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD6_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_27 : 8;
    uint32_t DATA_BYTE_26 : 8;
    uint32_t DATA_BYTE_25 : 8;
    uint32_t DATA_BYTE_24 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD6_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD6_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD6_H*>(0x40C3C458); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD2_H*>(0x40C3C458); }
};

// Message Buffer 61 WORD_8B Register
//
union MB61_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB61_8B_WORD0*>(0x40C3C458); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD8_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_35 : 8;
    uint32_t DATA_BYTE_34 : 8;
    uint32_t DATA_BYTE_33 : 8;
    uint32_t DATA_BYTE_32 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD8_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD8_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD8_H*>(0x40C3C458); }
};

// Message Buffer 61 WORD0 Register
//
union WORD061 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD061() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD061 &Instance() { return *reinterpret_cast<volatile WORD061*>(0x40C3C458); }
};

// Message Buffer 11 WORD_32B Register
//
union MB11_32B_WORD7_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_31 : 8;
    uint32_t DATA_BYTE_30 : 8;
    uint32_t DATA_BYTE_29 : 8;
    uint32_t DATA_BYTE_28 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB11_32B_WORD7_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB11_32B_WORD7_H &Instance() { return *reinterpret_cast<volatile MB11_32B_WORD7_H*>(0x40C3C45C); }
};

// Message Buffer 19 WORD_16B Register
//
union MB19_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB19_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB19_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB19_16B_WORD3_H*>(0x40C3C45C); }
};

// Message Buffer 61 WORD_8B Register
//
union MB61_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB61_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB61_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB61_8B_WORD1*>(0x40C3C45C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD9_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_39 : 8;
    uint32_t DATA_BYTE_38 : 8;
    uint32_t DATA_BYTE_37 : 8;
    uint32_t DATA_BYTE_36 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD9_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD9_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD9_H*>(0x40C3C45C); }
};

// Message Buffer 61 WORD1 Register
//
union WORD161 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD161() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD161 &Instance() { return *reinterpret_cast<volatile WORD161*>(0x40C3C45C); }
};

// Message Buffer 62 CS Register
//
union CS62 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS62 &Instance() { return *reinterpret_cast<volatile CS62*>(0x40C3C460); }
};

// Message Buffer 20 CS Register
//
union MB20_16B_CS_H {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_CS_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_CS_H &Instance() { return *reinterpret_cast<volatile MB20_16B_CS_H*>(0x40C3C460); }
};

// Message Buffer 62 CS Register
//
union MB62_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_CS &Instance() { return *reinterpret_cast<volatile MB62_8B_CS*>(0x40C3C460); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD10_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_43 : 8;
    uint32_t DATA_BYTE_42 : 8;
    uint32_t DATA_BYTE_41 : 8;
    uint32_t DATA_BYTE_40 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD10_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD10_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD10_H*>(0x40C3C460); }
};

// Message Buffer 62 ID Register
//
union ID62 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID62 &Instance() { return *reinterpret_cast<volatile ID62*>(0x40C3C464); }
};

// Message Buffer 20 ID Register
//
union MB20_16B_ID_H {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_ID_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_ID_H &Instance() { return *reinterpret_cast<volatile MB20_16B_ID_H*>(0x40C3C464); }
};

// Message Buffer 62 ID Register
//
union MB62_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_ID &Instance() { return *reinterpret_cast<volatile MB62_8B_ID*>(0x40C3C464); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD11_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_47 : 8;
    uint32_t DATA_BYTE_46 : 8;
    uint32_t DATA_BYTE_45 : 8;
    uint32_t DATA_BYTE_44 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD11_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD11_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD11_H*>(0x40C3C464); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD0_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD0_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD0_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD0_H*>(0x40C3C468); }
};

// Message Buffer 62 WORD_8B Register
//
union MB62_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB62_8B_WORD0*>(0x40C3C468); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD12_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_51 : 8;
    uint32_t DATA_BYTE_50 : 8;
    uint32_t DATA_BYTE_49 : 8;
    uint32_t DATA_BYTE_48 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD12_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD12_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD12_H*>(0x40C3C468); }
};

// Message Buffer 62 WORD0 Register
//
union WORD062 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD062() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD062 &Instance() { return *reinterpret_cast<volatile WORD062*>(0x40C3C468); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD1_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD1_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD1_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD1_H*>(0x40C3C46C); }
};

// Message Buffer 62 WORD_8B Register
//
union MB62_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB62_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB62_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB62_8B_WORD1*>(0x40C3C46C); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD13_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_55 : 8;
    uint32_t DATA_BYTE_54 : 8;
    uint32_t DATA_BYTE_53 : 8;
    uint32_t DATA_BYTE_52 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD13_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD13_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD13_H*>(0x40C3C46C); }
};

// Message Buffer 62 WORD1 Register
//
union WORD162 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD162() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD162 &Instance() { return *reinterpret_cast<volatile WORD162*>(0x40C3C46C); }
};

// Message Buffer 63 CS Register
//
union CS63 {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CS63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CS63 &Instance() { return *reinterpret_cast<volatile CS63*>(0x40C3C470); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD2_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_11 : 8;
    uint32_t DATA_BYTE_10 : 8;
    uint32_t DATA_BYTE_9 : 8;
    uint32_t DATA_BYTE_8 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD2_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD2_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD2_H*>(0x40C3C470); }
};

// Message Buffer 63 CS Register
//
union MB63_8B_CS {
  
  // Bit field definition.
  struct {
    uint32_t TIME_STAMP : 16;
    uint32_t DLC : 4;
    uint32_t RTR : 1;
    uint32_t IDE : 1;
    uint32_t SRR : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CODE : 4;
    uint32_t _reserved_1 : 1;
    uint32_t ESI : 1;
    uint32_t BRS : 1;
    uint32_t EDL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_CS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_CS &Instance() { return *reinterpret_cast<volatile MB63_8B_CS*>(0x40C3C470); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD14_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_59 : 8;
    uint32_t DATA_BYTE_58 : 8;
    uint32_t DATA_BYTE_57 : 8;
    uint32_t DATA_BYTE_56 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD14_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD14_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD14_H*>(0x40C3C470); }
};

// Message Buffer 63 ID Register
//
union ID63 {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ID63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ID63 &Instance() { return *reinterpret_cast<volatile ID63*>(0x40C3C474); }
};

// Message Buffer 20 WORD_16B Register
//
union MB20_16B_WORD3_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_15 : 8;
    uint32_t DATA_BYTE_14 : 8;
    uint32_t DATA_BYTE_13 : 8;
    uint32_t DATA_BYTE_12 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB20_16B_WORD3_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB20_16B_WORD3_H &Instance() { return *reinterpret_cast<volatile MB20_16B_WORD3_H*>(0x40C3C474); }
};

// Message Buffer 63 ID Register
//
union MB63_8B_ID {
  
  // Bit field definition.
  struct {
    uint32_t EXT : 18;
    uint32_t STD : 11;
    uint32_t PRIO : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_ID() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_ID &Instance() { return *reinterpret_cast<volatile MB63_8B_ID*>(0x40C3C474); }
};

// Message Buffer 6 WORD_64B Register
//
union MB6_64B_WORD15_H {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_63 : 8;
    uint32_t DATA_BYTE_62 : 8;
    uint32_t DATA_BYTE_61 : 8;
    uint32_t DATA_BYTE_60 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB6_64B_WORD15_H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB6_64B_WORD15_H &Instance() { return *reinterpret_cast<volatile MB6_64B_WORD15_H*>(0x40C3C474); }
};

// Message Buffer 63 WORD_8B Register
//
union MB63_8B_WORD0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_WORD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_WORD0 &Instance() { return *reinterpret_cast<volatile MB63_8B_WORD0*>(0x40C3C478); }
};

// Message Buffer 63 WORD0 Register
//
union WORD063 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_3 : 8;
    uint32_t DATA_BYTE_2 : 8;
    uint32_t DATA_BYTE_1 : 8;
    uint32_t DATA_BYTE_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD063() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD063 &Instance() { return *reinterpret_cast<volatile WORD063*>(0x40C3C478); }
};

// Message Buffer 63 WORD_8B Register
//
union MB63_8B_WORD1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MB63_8B_WORD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MB63_8B_WORD1 &Instance() { return *reinterpret_cast<volatile MB63_8B_WORD1*>(0x40C3C47C); }
};

// Message Buffer 63 WORD1 Register
//
union WORD163 {
  
  // Bit field definition.
  struct {
    uint32_t DATA_BYTE_7 : 8;
    uint32_t DATA_BYTE_6 : 8;
    uint32_t DATA_BYTE_5 : 8;
    uint32_t DATA_BYTE_4 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WORD163() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WORD163 &Instance() { return *reinterpret_cast<volatile WORD163*>(0x40C3C47C); }
};

// Rx Individual Mask Registers
//
union RXIMR[0] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[0] &Instance() { return *reinterpret_cast<volatile RXIMR[0]*>(0x40C3C880); }
};
// Rx Individual Mask Registers
//
union RXIMR[1] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[1] &Instance() { return *reinterpret_cast<volatile RXIMR[1]*>(0x40C3C884); }
};
// Rx Individual Mask Registers
//
union RXIMR[2] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[2] &Instance() { return *reinterpret_cast<volatile RXIMR[2]*>(0x40C3C888); }
};
// Rx Individual Mask Registers
//
union RXIMR[3] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[3] &Instance() { return *reinterpret_cast<volatile RXIMR[3]*>(0x40C3C88C); }
};
// Rx Individual Mask Registers
//
union RXIMR[4] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[4] &Instance() { return *reinterpret_cast<volatile RXIMR[4]*>(0x40C3C890); }
};
// Rx Individual Mask Registers
//
union RXIMR[5] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[5] &Instance() { return *reinterpret_cast<volatile RXIMR[5]*>(0x40C3C894); }
};
// Rx Individual Mask Registers
//
union RXIMR[6] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[6] &Instance() { return *reinterpret_cast<volatile RXIMR[6]*>(0x40C3C898); }
};
// Rx Individual Mask Registers
//
union RXIMR[7] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[7] &Instance() { return *reinterpret_cast<volatile RXIMR[7]*>(0x40C3C89C); }
};
// Rx Individual Mask Registers
//
union RXIMR[8] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[8] &Instance() { return *reinterpret_cast<volatile RXIMR[8]*>(0x40C3C8A0); }
};
// Rx Individual Mask Registers
//
union RXIMR[9] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[9] &Instance() { return *reinterpret_cast<volatile RXIMR[9]*>(0x40C3C8A4); }
};
// Rx Individual Mask Registers
//
union RXIMR[10] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[10] &Instance() { return *reinterpret_cast<volatile RXIMR[10]*>(0x40C3C8A8); }
};
// Rx Individual Mask Registers
//
union RXIMR[11] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[11] &Instance() { return *reinterpret_cast<volatile RXIMR[11]*>(0x40C3C8AC); }
};
// Rx Individual Mask Registers
//
union RXIMR[12] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[12] &Instance() { return *reinterpret_cast<volatile RXIMR[12]*>(0x40C3C8B0); }
};
// Rx Individual Mask Registers
//
union RXIMR[13] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[13] &Instance() { return *reinterpret_cast<volatile RXIMR[13]*>(0x40C3C8B4); }
};
// Rx Individual Mask Registers
//
union RXIMR[14] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[14] &Instance() { return *reinterpret_cast<volatile RXIMR[14]*>(0x40C3C8B8); }
};
// Rx Individual Mask Registers
//
union RXIMR[15] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[15] &Instance() { return *reinterpret_cast<volatile RXIMR[15]*>(0x40C3C8BC); }
};
// Rx Individual Mask Registers
//
union RXIMR[16] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[16] &Instance() { return *reinterpret_cast<volatile RXIMR[16]*>(0x40C3C8C0); }
};
// Rx Individual Mask Registers
//
union RXIMR[17] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[17] &Instance() { return *reinterpret_cast<volatile RXIMR[17]*>(0x40C3C8C4); }
};
// Rx Individual Mask Registers
//
union RXIMR[18] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[18] &Instance() { return *reinterpret_cast<volatile RXIMR[18]*>(0x40C3C8C8); }
};
// Rx Individual Mask Registers
//
union RXIMR[19] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[19] &Instance() { return *reinterpret_cast<volatile RXIMR[19]*>(0x40C3C8CC); }
};
// Rx Individual Mask Registers
//
union RXIMR[20] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[20] &Instance() { return *reinterpret_cast<volatile RXIMR[20]*>(0x40C3C8D0); }
};
// Rx Individual Mask Registers
//
union RXIMR[21] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[21] &Instance() { return *reinterpret_cast<volatile RXIMR[21]*>(0x40C3C8D4); }
};
// Rx Individual Mask Registers
//
union RXIMR[22] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[22] &Instance() { return *reinterpret_cast<volatile RXIMR[22]*>(0x40C3C8D8); }
};
// Rx Individual Mask Registers
//
union RXIMR[23] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[23] &Instance() { return *reinterpret_cast<volatile RXIMR[23]*>(0x40C3C8DC); }
};
// Rx Individual Mask Registers
//
union RXIMR[24] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[24] &Instance() { return *reinterpret_cast<volatile RXIMR[24]*>(0x40C3C8E0); }
};
// Rx Individual Mask Registers
//
union RXIMR[25] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[25] &Instance() { return *reinterpret_cast<volatile RXIMR[25]*>(0x40C3C8E4); }
};
// Rx Individual Mask Registers
//
union RXIMR[26] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[26] &Instance() { return *reinterpret_cast<volatile RXIMR[26]*>(0x40C3C8E8); }
};
// Rx Individual Mask Registers
//
union RXIMR[27] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[27] &Instance() { return *reinterpret_cast<volatile RXIMR[27]*>(0x40C3C8EC); }
};
// Rx Individual Mask Registers
//
union RXIMR[28] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[28] &Instance() { return *reinterpret_cast<volatile RXIMR[28]*>(0x40C3C8F0); }
};
// Rx Individual Mask Registers
//
union RXIMR[29] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[29] &Instance() { return *reinterpret_cast<volatile RXIMR[29]*>(0x40C3C8F4); }
};
// Rx Individual Mask Registers
//
union RXIMR[30] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[30] &Instance() { return *reinterpret_cast<volatile RXIMR[30]*>(0x40C3C8F8); }
};
// Rx Individual Mask Registers
//
union RXIMR[31] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[31] &Instance() { return *reinterpret_cast<volatile RXIMR[31]*>(0x40C3C8FC); }
};
// Rx Individual Mask Registers
//
union RXIMR[32] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[32]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[32] &Instance() { return *reinterpret_cast<volatile RXIMR[32]*>(0x40C3C900); }
};
// Rx Individual Mask Registers
//
union RXIMR[33] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[33]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[33] &Instance() { return *reinterpret_cast<volatile RXIMR[33]*>(0x40C3C904); }
};
// Rx Individual Mask Registers
//
union RXIMR[34] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[34]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[34] &Instance() { return *reinterpret_cast<volatile RXIMR[34]*>(0x40C3C908); }
};
// Rx Individual Mask Registers
//
union RXIMR[35] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[35]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[35] &Instance() { return *reinterpret_cast<volatile RXIMR[35]*>(0x40C3C90C); }
};
// Rx Individual Mask Registers
//
union RXIMR[36] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[36]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[36] &Instance() { return *reinterpret_cast<volatile RXIMR[36]*>(0x40C3C910); }
};
// Rx Individual Mask Registers
//
union RXIMR[37] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[37]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[37] &Instance() { return *reinterpret_cast<volatile RXIMR[37]*>(0x40C3C914); }
};
// Rx Individual Mask Registers
//
union RXIMR[38] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[38]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[38] &Instance() { return *reinterpret_cast<volatile RXIMR[38]*>(0x40C3C918); }
};
// Rx Individual Mask Registers
//
union RXIMR[39] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[39]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[39] &Instance() { return *reinterpret_cast<volatile RXIMR[39]*>(0x40C3C91C); }
};
// Rx Individual Mask Registers
//
union RXIMR[40] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[40]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[40] &Instance() { return *reinterpret_cast<volatile RXIMR[40]*>(0x40C3C920); }
};
// Rx Individual Mask Registers
//
union RXIMR[41] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[41]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[41] &Instance() { return *reinterpret_cast<volatile RXIMR[41]*>(0x40C3C924); }
};
// Rx Individual Mask Registers
//
union RXIMR[42] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[42]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[42] &Instance() { return *reinterpret_cast<volatile RXIMR[42]*>(0x40C3C928); }
};
// Rx Individual Mask Registers
//
union RXIMR[43] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[43]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[43] &Instance() { return *reinterpret_cast<volatile RXIMR[43]*>(0x40C3C92C); }
};
// Rx Individual Mask Registers
//
union RXIMR[44] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[44]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[44] &Instance() { return *reinterpret_cast<volatile RXIMR[44]*>(0x40C3C930); }
};
// Rx Individual Mask Registers
//
union RXIMR[45] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[45]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[45] &Instance() { return *reinterpret_cast<volatile RXIMR[45]*>(0x40C3C934); }
};
// Rx Individual Mask Registers
//
union RXIMR[46] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[46]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[46] &Instance() { return *reinterpret_cast<volatile RXIMR[46]*>(0x40C3C938); }
};
// Rx Individual Mask Registers
//
union RXIMR[47] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[47]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[47] &Instance() { return *reinterpret_cast<volatile RXIMR[47]*>(0x40C3C93C); }
};
// Rx Individual Mask Registers
//
union RXIMR[48] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[48]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[48] &Instance() { return *reinterpret_cast<volatile RXIMR[48]*>(0x40C3C940); }
};
// Rx Individual Mask Registers
//
union RXIMR[49] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[49]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[49] &Instance() { return *reinterpret_cast<volatile RXIMR[49]*>(0x40C3C944); }
};
// Rx Individual Mask Registers
//
union RXIMR[50] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[50]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[50] &Instance() { return *reinterpret_cast<volatile RXIMR[50]*>(0x40C3C948); }
};
// Rx Individual Mask Registers
//
union RXIMR[51] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[51]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[51] &Instance() { return *reinterpret_cast<volatile RXIMR[51]*>(0x40C3C94C); }
};
// Rx Individual Mask Registers
//
union RXIMR[52] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[52]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[52] &Instance() { return *reinterpret_cast<volatile RXIMR[52]*>(0x40C3C950); }
};
// Rx Individual Mask Registers
//
union RXIMR[53] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[53]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[53] &Instance() { return *reinterpret_cast<volatile RXIMR[53]*>(0x40C3C954); }
};
// Rx Individual Mask Registers
//
union RXIMR[54] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[54]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[54] &Instance() { return *reinterpret_cast<volatile RXIMR[54]*>(0x40C3C958); }
};
// Rx Individual Mask Registers
//
union RXIMR[55] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[55]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[55] &Instance() { return *reinterpret_cast<volatile RXIMR[55]*>(0x40C3C95C); }
};
// Rx Individual Mask Registers
//
union RXIMR[56] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[56]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[56] &Instance() { return *reinterpret_cast<volatile RXIMR[56]*>(0x40C3C960); }
};
// Rx Individual Mask Registers
//
union RXIMR[57] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[57]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[57] &Instance() { return *reinterpret_cast<volatile RXIMR[57]*>(0x40C3C964); }
};
// Rx Individual Mask Registers
//
union RXIMR[58] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[58]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[58] &Instance() { return *reinterpret_cast<volatile RXIMR[58]*>(0x40C3C968); }
};
// Rx Individual Mask Registers
//
union RXIMR[59] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[59]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[59] &Instance() { return *reinterpret_cast<volatile RXIMR[59]*>(0x40C3C96C); }
};
// Rx Individual Mask Registers
//
union RXIMR[60] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[60]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[60] &Instance() { return *reinterpret_cast<volatile RXIMR[60]*>(0x40C3C970); }
};
// Rx Individual Mask Registers
//
union RXIMR[61] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[61]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[61] &Instance() { return *reinterpret_cast<volatile RXIMR[61]*>(0x40C3C974); }
};
// Rx Individual Mask Registers
//
union RXIMR[62] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[62]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[62] &Instance() { return *reinterpret_cast<volatile RXIMR[62]*>(0x40C3C978); }
};
// Rx Individual Mask Registers
//
union RXIMR[63] {
  
  // Bit field definition.
  struct {
    uint32_t MI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXIMR[63]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXIMR[63] &Instance() { return *reinterpret_cast<volatile RXIMR[63]*>(0x40C3C97C); }
};

// Memory Error Control Register
//
union MECR {
  
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
    uint32_t _reserved_1 : 3;
    eEXTERRIE EXTERRIE : 1;
    eFAERRIE FAERRIE : 1;
    eHAERRIE HAERRIE : 1;
    eCEI_MSK CEI_MSK : 1;
    uint32_t _reserved_2 : 1;
    eFANCEI_MSK FANCEI_MSK : 1;
    eHANCEI_MSK HANCEI_MSK : 1;
    uint32_t _reserved_3 : 11;
    eECRWRDIS ECRWRDIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MECR() = delete;
  inline void Reset() volatile { this->value = 0x800C0080; }
  static inline volatile MECR &Instance() { return *reinterpret_cast<volatile MECR*>(0x40C3CAE0); }
};

// Error Injection Address Register
//
union ERRIAR {
  
  // Bit field definition.
  struct {
    uint32_t INJADDR_L : 2;
    uint32_t INJADDR_H : 12;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERRIAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRIAR &Instance() { return *reinterpret_cast<volatile ERRIAR*>(0x40C3CAE4); }
};

// Error Injection Data Pattern Register
//
union ERRIDPR {
  
  // Bit field definition.
  struct {
    uint32_t DFLIP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERRIDPR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRIDPR &Instance() { return *reinterpret_cast<volatile ERRIDPR*>(0x40C3CAE8); }
};

// Error Injection Parity Pattern Register
//
union ERRIPPR {
  
  // Bit field definition.
  struct {
    uint32_t PFLIP0 : 5;
    uint32_t _reserved_0 : 3;
    uint32_t PFLIP1 : 5;
    uint32_t _reserved_1 : 3;
    uint32_t PFLIP2 : 5;
    uint32_t _reserved_2 : 3;
    uint32_t PFLIP3 : 5;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERRIPPR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRIPPR &Instance() { return *reinterpret_cast<volatile ERRIPPR*>(0x40C3CAEC); }
};

// Error Report Address Register
//
union RERRAR {
  
  enum class eNCE : uint32_t {
    ecorrectable = 0, // Reporting a correctable error
    enon_correctable = 1, // Reporting a non-correctable error
  };
  
  // Bit field definition.
  struct {
    uint32_t ERRADDR : 14;
    uint32_t _reserved_0 : 2;
    uint32_t SAID : 3;
    uint32_t _reserved_1 : 5;
    eNCE NCE : 1;
    uint32_t _reserved_2 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RERRAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RERRAR &Instance() { return *reinterpret_cast<volatile RERRAR*>(0x40C3CAF0); }
};

// Error Report Data Register
//
union RERRDR {
  
  // Bit field definition.
  struct {
    uint32_t RDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RERRDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RERRDR &Instance() { return *reinterpret_cast<volatile RERRDR*>(0x40C3CAF4); }
};

// Error Report Syndrome Register
//
union RERRSYNR {
  
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
    uint32_t _reserved_0 : 2;
    eBE0 BE0 : 1;
    uint32_t SYND1 : 5;
    uint32_t _reserved_1 : 2;
    eBE1 BE1 : 1;
    uint32_t SYND2 : 5;
    uint32_t _reserved_2 : 2;
    eBE2 BE2 : 1;
    uint32_t SYND3 : 5;
    uint32_t _reserved_3 : 2;
    eBE3 BE3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RERRSYNR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RERRSYNR &Instance() { return *reinterpret_cast<volatile RERRSYNR*>(0x40C3CAF8); }
};

// Error Status Register
//
union ERRSR {
  
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
    uint32_t _reserved_0 : 1;
    eFANCEIOF FANCEIOF : 1;
    eHANCEIOF HANCEIOF : 1;
    uint32_t _reserved_1 : 12;
    eCEIF CEIF : 1;
    uint32_t _reserved_2 : 1;
    eFANCEIF FANCEIF : 1;
    eHANCEIF HANCEIF : 1;
    uint32_t _reserved_3 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERRSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERRSR &Instance() { return *reinterpret_cast<volatile ERRSR*>(0x40C3CAFC); }
};

// CAN FD Control Register
//
union FDCTRL {
  
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
    uint32_t _reserved_0 : 2;
    uint32_t TDCOFF : 5;
    uint32_t _reserved_1 : 1;
    eTDCFAIL TDCFAIL : 1;
    eTDCEN TDCEN : 1;
    eMBDSR0 MBDSR0 : 2;
    uint32_t _reserved_2 : 1;
    eMBDSR1 MBDSR1 : 2;
    uint32_t _reserved_3 : 10;
    eFDRATE FDRATE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FDCTRL() = delete;
  inline void Reset() volatile { this->value = 0x80000100; }
  static inline volatile FDCTRL &Instance() { return *reinterpret_cast<volatile FDCTRL*>(0x40C3CC00); }
};

// CAN FD Bit Timing Register
//
union FDCBT {
  
  // Bit field definition.
  struct {
    uint32_t FPSEG2 : 3;
    uint32_t _reserved_0 : 2;
    uint32_t FPSEG1 : 3;
    uint32_t _reserved_1 : 2;
    uint32_t FPROPSEG : 5;
    uint32_t _reserved_2 : 1;
    uint32_t FRJW : 3;
    uint32_t _reserved_3 : 1;
    uint32_t FPRESDIV : 10;
    uint32_t _reserved_4 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FDCBT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FDCBT &Instance() { return *reinterpret_cast<volatile FDCBT*>(0x40C3CC04); }
};

// CAN FD CRC Register
//
union FDCRC {
  
  // Bit field definition.
  struct {
    uint32_t FD_TXCRC : 21;
    uint32_t _reserved_0 : 3;
    uint32_t FD_MBCRC : 7;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FDCRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FDCRC &Instance() { return *reinterpret_cast<volatile FDCRC*>(0x40C3CC08); }
};


} // namespace nCAN3