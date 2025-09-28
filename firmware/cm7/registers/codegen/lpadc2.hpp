#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LPADC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nLPADC2 {


// Version ID Register
union VERID {
  
  // Resolution
  enum class eRES : uint32_t {
    // Up to 13-bit differential/12-bit single ended resolution supported.
    eRES_0 = 0,
    // Up to 16-bit differential/15-bit single ended resolution supported.
    eRES_1 = 1,
  };
  
  // Differential Supported
  enum class eDIFFEN : uint32_t {
    // Differential operation not supported.
    eDIFFEN_0 = 0,
    // Differential operation supported. CMDLa[DIFF] and CMDLa[ABSEL] control fields implemented.
    eDIFFEN_1 = 1,
  };
  
  // Multi Vref Implemented
  enum class eMVI : uint32_t {
    // Single voltage reference input supported.
    eMVI_0 = 0,
    // Multiple voltage reference inputs supported.
    eMVI_1 = 1,
  };
  
  // Channel Scale Width
  enum class eCSW : uint32_t {
    // Channel scaling not supported.
    eCSW_0 = 0,
    // Channel scaling supported. 1-bit CSCALE control field.
    eCSW_1 = 1,
    // Channel scaling supported. 6-bit CSCALE control field.
    eCSW_6 = 6,
  };
  
  // Voltage Reference 1 Range Control Bit Implemented
  enum class eVR1RNGI : uint32_t {
    // Range control not required. CFG[VREF1RNG] is not implemented.
    eVR1RNGI_0 = 0,
    // Range control required. CFG[VREF1RNG] is implemented.
    eVR1RNGI_1 = 1,
  };
  
  // Internal LPADC Clock implemented
  enum class eIADCKI : uint32_t {
    // Internal clock source not implemented.
    eIADCKI_0 = 0,
    // Internal clock source (and CFG[ADCKEN]) implemented.
    eIADCKI_1 = 1,
  };
  
  // Calibration Offset Function Implemented
  enum class eCALOFSI : uint32_t {
    // Offset calibration and offset trimming not implemented.
    eCALOFSI_0 = 0,
    // Offset calibration and offset trimming implemented.
    eCALOFSI_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Resolution
    eRES RES : 1;
    // read-only - Differential Supported
    eDIFFEN DIFFEN : 1;
    uint32_t _reserved_0 : 1;
    // read-only - Multi Vref Implemented
    eMVI MVI : 1;
    // read-only - Channel Scale Width
    eCSW CSW : 3;
    uint32_t _reserved_1 : 1;
    // read-only - Voltage Reference 1 Range Control Bit Implemented
    eVR1RNGI VR1RNGI : 1;
    // read-only - Internal LPADC Clock implemented
    eIADCKI IADCKI : 1;
    // read-only - Calibration Offset Function Implemented
    eCALOFSI CALOFSI : 1;
    uint32_t _reserved_2 : 5;
    // read-only - Minor Version Number
    uint32_t MINOR : 8;
    // read-only - Major Version Number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0100001A; }
  static inline volatile VERID &ref() { return *reinterpret_cast<volatile VERID*>(0x40054000); }
};

// Parameter Register
union PARAM {
  
  // Trigger Number
  enum class eTRIG_NUM : uint32_t {
    // 8 hardware triggers implemented
    eTRIG_NUM_8 = 8,
  };
  
  // Result FIFO Depth
  enum class eFIFOSIZE : uint32_t {
    // Result FIFO depth = 16 datawords.
    eFIFOSIZE_16 = 16,
  };
  
  // Compare Value Number
  enum class eCV_NUM : uint32_t {
    // 4 compare value registers implemented
    eCV_NUM_4 = 4,
  };
  
  // Command Buffer Number
  enum class eCMD_NUM : uint32_t {
    // 15 command buffers implemented
    eCMD_NUM_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-only - Trigger Number
    eTRIG_NUM TRIG_NUM : 8;
    // read-only - Result FIFO Depth
    eFIFOSIZE FIFOSIZE : 8;
    // read-only - Compare Value Number
    eCV_NUM CV_NUM : 8;
    // read-only - Command Buffer Number
    eCMD_NUM CMD_NUM : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0F041008; }
  static inline volatile PARAM &ref() { return *reinterpret_cast<volatile PARAM*>(0x40054004); }
};

// LPADC Control Register
union CTRL {
  
  // LPADC Enable
  enum class eADCEN : uint32_t {
    // LPADC is disabled.
    eADCEN_0 = 0,
    // LPADC is enabled.
    eADCEN_1 = 1,
  };
  
  // Software Reset
  enum class eRST : uint32_t {
    // LPADC logic is not reset.
    eRST_0 = 0,
    // LPADC logic is reset.
    eRST_1 = 1,
  };
  
  // Doze Enable
  enum class eDOZEN : uint32_t {
    // LPADC is enabled in Doze mode.
    eDOZEN_0 = 0,
    // LPADC is disabled in Doze mode.
    eDOZEN_1 = 1,
  };
  
  // Hardware trigger source selection
  enum class eTRIG_SRC : uint32_t {
    // ADC_ETC hw trigger , and HW trigger are enabled
    eTRIG_SRC_0 = 0,
    // ADC_ETC hw trigger is enabled
    eTRIG_SRC_1 = 1,
    // HW trigger is enabled
    eTRIG_SRC_2 = 2,
  };
  
  // Reset FIFO
  enum class eRSTFIFO : uint32_t {
    // No effect.
    eRSTFIFO_0 = 0,
    // FIFO is reset.
    eRSTFIFO_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - LPADC Enable
    eADCEN ADCEN : 1;
    // read-write - Software Reset
    eRST RST : 1;
    // read-write - Doze Enable
    eDOZEN DOZEN : 1;
    // read-write - Hardware trigger source selection
    eTRIG_SRC TRIG_SRC : 2;
    uint32_t _reserved_0 : 3;
    // read-write - Reset FIFO
    eRSTFIFO RSTFIFO : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &ref() { return *reinterpret_cast<volatile CTRL*>(0x40054010); }
};

// LPADC Status Register
union STAT {
  
  // Result FIFO Ready Flag
  enum class eRDY : uint32_t {
    // Result FIFO data level not above watermark level.
    eRDY_0 = 0,
    // Result FIFO holding data above watermark level.
    eRDY_1 = 1,
  };
  
  // Result FIFO Overflow Flag
  enum class eFOF : uint32_t {
    // No result FIFO overflow has occurred since the last time the flag was cleared.
    eFOF_0 = 0,
    // At least one result FIFO overflow has occurred since the last time the flag was cleared.
    eFOF_1 = 1,
  };
  
  // ADC Active
  enum class eADC_ACTIVE : uint32_t {
    // The LPADC is IDLE. There are no pending triggers to service and no active commands are being processed.
    eADC_ACTIVE_0 = 0,
    // The LPADC is processing a conversion, running through the power up delay, or servicing a trigger.
    eADC_ACTIVE_1 = 1,
  };
  
  // Trigger Active
  enum class eTRGACT : uint32_t {
    // Command (sequence) associated with Trigger 0 currently being executed.
    eTRGACT_0 = 0,
    // Command (sequence) associated with Trigger 1 currently being executed.
    eTRGACT_1 = 1,
    // Command (sequence) associated with Trigger 2 currently being executed.
    eTRGACT_2 = 2,
    // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_3 = 3,
    // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_4 = 4,
    // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_5 = 5,
    // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_6 = 6,
    // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_7 = 7,
  };
  
  // Command Active
  enum class eCMDACT : uint32_t {
    // No command is currently in progress.
    eCMDACT_0 = 0,
    // Command 1 currently being executed.
    eCMDACT_1 = 1,
    // Command 2 currently being executed.
    eCMDACT_2 = 2,
    // Associated command number is currently being executed.
    eCMDACT_3 = 3,
    // Associated command number is currently being executed.
    eCMDACT_4 = 4,
    // Associated command number is currently being executed.
    eCMDACT_5 = 5,
    // Associated command number is currently being executed.
    eCMDACT_6 = 6,
    // Associated command number is currently being executed.
    eCMDACT_7 = 7,
    // Associated command number is currently being executed.
    eCMDACT_8 = 8,
    // Associated command number is currently being executed.
    eCMDACT_9 = 9,
  };
  
  // Bit field definition.
  struct {
    // read-only - Result FIFO Ready Flag
    eRDY RDY : 1;
    // read-write - Result FIFO Overflow Flag
    eFOF FOF : 1;
    uint32_t _reserved_0 : 6;
    // read-only - ADC Active
    eADC_ACTIVE ADC_ACTIVE : 1;
    uint32_t _reserved_1 : 7;
    // read-only - Trigger Active
    eTRGACT TRGACT : 3;
    uint32_t _reserved_2 : 5;
    // read-only - Command Active
    eCMDACT CMDACT : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT &ref() { return *reinterpret_cast<volatile STAT*>(0x40054014); }
};

// Interrupt Enable Register
union IE {
  
  // FIFO Watermark Interrupt Enable
  enum class eFWMIE : uint32_t {
    // FIFO watermark interrupts are not enabled.
    eFWMIE_0 = 0,
    // FIFO watermark interrupts are enabled.
    eFWMIE_1 = 1,
  };
  
  // Result FIFO Overflow Interrupt Enable
  enum class eFOFIE : uint32_t {
    // FIFO overflow interrupts are not enabled.
    eFOFIE_0 = 0,
    // FIFO overflow interrupts are enabled.
    eFOFIE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - FIFO Watermark Interrupt Enable
    eFWMIE FWMIE : 1;
    // read-write - Result FIFO Overflow Interrupt Enable
    eFOFIE FOFIE : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IE &ref() { return *reinterpret_cast<volatile IE*>(0x40054018); }
};

// DMA Enable Register
union DE {
  
  // FIFO Watermark DMA Enable
  enum class eFWMDE : uint32_t {
    // DMA request disabled.
    eFWMDE_0 = 0,
    // DMA request enabled.
    eFWMDE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - FIFO Watermark DMA Enable
    eFWMDE FWMDE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DE &ref() { return *reinterpret_cast<volatile DE*>(0x4005401C); }
};

// LPADC Configuration Register
union CFG {
  
  // LPADC trigger priority control
  enum class eTPRICTRL : uint32_t {
    // If a higher priority trigger is detected during command processing, the current conversion is aborted and the new command specified by the trigger is started.
    eTPRICTRL_0 = 0,
    // If a higher priority trigger is received during command processing, the current conversion is completed (including averaging iterations if enabled) and stored to the RESFIFO before the higher priority trigger/command is initiated. Note that compare until true commands can be interrupted prior to resulting in a true conversion.
    eTPRICTRL_1 = 1,
  };
  
  // Power Configuration Select
  enum class ePWRSEL : uint32_t {
    // Level 1 (Lowest power setting)
    ePWRSEL_0 = 0,
    // Level 2
    ePWRSEL_1 = 1,
    // Level 3
    ePWRSEL_2 = 2,
    // Level 4 (Highest power setting)
    ePWRSEL_3 = 3,
  };
  
  // Voltage Reference Selection
  enum class eREFSEL : uint32_t {
    // (Default) Option 1 setting.
    eREFSEL_0 = 0,
    // Option 2 setting.
    eREFSEL_1 = 1,
    // Option 3 setting.
    eREFSEL_2 = 2,
  };
  
  // LPADC Analog Pre-Enable
  enum class ePWREN : uint32_t {
    // LPADC analog circuits are only enabled while conversions are active. Performance is affected due to analog startup delays.
    ePWREN_0 = 0,
    // LPADC analog circuits are pre-enabled and ready to execute conversions without startup delays (at the cost of higher DC current consumption). When PWREN is set, the power up delay is enforced such that any detected trigger does not begin ADC operation until the power up delay time has passed.
    ePWREN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - LPADC trigger priority control
    eTPRICTRL TPRICTRL : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Power Configuration Select
    ePWRSEL PWRSEL : 2;
    // read-write - Voltage Reference Selection
    eREFSEL REFSEL : 2;
    uint32_t _reserved_1 : 8;
    // read-write - Power Up Delay
    uint32_t PUDLY : 8;
    uint32_t _reserved_2 : 4;
    // read-write - LPADC Analog Pre-Enable
    ePWREN PWREN : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CFG &ref() { return *reinterpret_cast<volatile CFG*>(0x40054020); }
};

// LPADC Pause Register
union PAUSE {
  
  // PAUSE Option Enable
  enum class ePAUSEEN : uint32_t {
    // Pause operation disabled
    ePAUSEEN_0 = 0,
    // Pause operation enabled
    ePAUSEEN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Pause Delay
    uint32_t PAUSEDLY : 9;
    uint32_t _reserved_0 : 22;
    // read-write - PAUSE Option Enable
    ePAUSEEN PAUSEEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PAUSE &ref() { return *reinterpret_cast<volatile PAUSE*>(0x40054024); }
};

// LPADC FIFO Control Register
union FCTRL {
  
  // Result FIFO counter
  enum class eFCOUNT : uint32_t {
    // No data stored in FIFO
    eFCOUNT_0 = 0,
    // 1 dataword stored in FIFO
    eFCOUNT_1 = 1,
    // 2 datawords stored in FIFO
    eFCOUNT_2 = 2,
    // 4 datawords stored in FIFO
    eFCOUNT_4 = 4,
    // 8 datawords stored in FIFO
    eFCOUNT_8 = 8,
    // 16 datawords stored in FIFO
    eFCOUNT_16 = 16,
  };
  
  // Watermark level selection
  enum class eFWMARK : uint32_t {
    // Generates STAT[RDY] flag after 1st successful conversion - single conversion
    eFWMARK_0 = 0,
    // Generates STAT[RDY] flag after 2nd successful conversion
    eFWMARK_1 = 1,
    // Generates STAT[RDY] flag after 3rd successful conversion
    eFWMARK_2 = 2,
    // Generates STAT[RDY] flag after 4th successful conversion
    eFWMARK_3 = 3,
    // Generates STAT[RDY] flag after 5th successful conversion
    eFWMARK_4 = 4,
    // Generates STAT[RDY] flag after 6th successful conversion
    eFWMARK_5 = 5,
    // Generates STAT[RDY] flag after 7th successful conversion
    eFWMARK_6 = 6,
    // Generates STAT[RDY] flag after 8th successful conversion
    eFWMARK_7 = 7,
    // Generates STAT[RDY] flag after 9th successful conversion
    eFWMARK_8 = 8,
    // Generates STAT[RDY] flag after 10th successful conversion
    eFWMARK_9 = 9,
    // Generates STAT[RDY] flag after 11th successful conversion
    eFWMARK_10 = 10,
    // Generates STAT[RDY] flag after 12th successful conversion
    eFWMARK_11 = 11,
    // Generates STAT[RDY] flag after 13th successful conversion
    eFWMARK_12 = 12,
    // Generates STAT[RDY] flag after 14th successful conversion
    eFWMARK_13 = 13,
    // Generates STAT[RDY] flag after 15th successful conversion
    eFWMARK_14 = 14,
    // Generates STAT[RDY] flag after 16th successful conversion
    eFWMARK_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-only - Result FIFO counter
    eFCOUNT FCOUNT : 5;
    uint32_t _reserved_0 : 11;
    // read-write - Watermark level selection
    eFWMARK FWMARK : 4;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCTRL &ref() { return *reinterpret_cast<volatile FCTRL*>(0x40054030); }
};

// Software Trigger Register
union SWTRIG {
  
  // Software trigger 0 event
  enum class eSWT0 : uint32_t {
    // No trigger 0 event generated.
    eSWT0_0 = 0,
    // Trigger 0 event generated.
    eSWT0_1 = 1,
  };
  
  // Software trigger 1 event
  enum class eSWT1 : uint32_t {
    // No trigger 1 event generated.
    eSWT1_0 = 0,
    // Trigger 1 event generated.
    eSWT1_1 = 1,
  };
  
  // Software trigger 2 event
  enum class eSWT2 : uint32_t {
    // No trigger 2 event generated.
    eSWT2_0 = 0,
    // Trigger 2 event generated.
    eSWT2_1 = 1,
  };
  
  // Software trigger 3 event
  enum class eSWT3 : uint32_t {
    // No trigger 3 event generated.
    eSWT3_0 = 0,
    // Trigger 3 event generated.
    eSWT3_1 = 1,
  };
  
  // Software trigger 4 event
  enum class eSWT4 : uint32_t {
    // No trigger 4 event generated.
    eSWT4_0 = 0,
    // Trigger 4 event generated.
    eSWT4_1 = 1,
  };
  
  // Software trigger 5 event
  enum class eSWT5 : uint32_t {
    // No trigger 5 event generated.
    eSWT5_0 = 0,
    // Trigger 5 event generated.
    eSWT5_1 = 1,
  };
  
  // Software trigger 6 event
  enum class eSWT6 : uint32_t {
    // No trigger 6 event generated.
    eSWT6_0 = 0,
    // Trigger 6 event generated.
    eSWT6_1 = 1,
  };
  
  // Software trigger 7 event
  enum class eSWT7 : uint32_t {
    // No trigger 7 event generated.
    eSWT7_0 = 0,
    // Trigger 7 event generated.
    eSWT7_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger 0 event
    eSWT0 SWT0 : 1;
    // read-write - Software trigger 1 event
    eSWT1 SWT1 : 1;
    // read-write - Software trigger 2 event
    eSWT2 SWT2 : 1;
    // read-write - Software trigger 3 event
    eSWT3 SWT3 : 1;
    // read-write - Software trigger 4 event
    eSWT4 SWT4 : 1;
    // read-write - Software trigger 5 event
    eSWT5 SWT5 : 1;
    // read-write - Software trigger 6 event
    eSWT6 SWT6 : 1;
    // read-write - Software trigger 7 event
    eSWT7 SWT7 : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SWTRIG &ref() { return *reinterpret_cast<volatile SWTRIG*>(0x40054034); }
};

// Trigger Control Register
union TCTRL_0 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_0 &ref() { return *reinterpret_cast<volatile TCTRL_0*>(0x400540C0); }
};
// Trigger Control Register
union TCTRL_1 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_1 &ref() { return *reinterpret_cast<volatile TCTRL_1*>(0x400540C4); }
};
// Trigger Control Register
union TCTRL_2 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_2 &ref() { return *reinterpret_cast<volatile TCTRL_2*>(0x400540C8); }
};
// Trigger Control Register
union TCTRL_3 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_3 &ref() { return *reinterpret_cast<volatile TCTRL_3*>(0x400540CC); }
};
// Trigger Control Register
union TCTRL_4 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_4 &ref() { return *reinterpret_cast<volatile TCTRL_4*>(0x400540D0); }
};
// Trigger Control Register
union TCTRL_5 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_5 &ref() { return *reinterpret_cast<volatile TCTRL_5*>(0x400540D4); }
};
// Trigger Control Register
union TCTRL_6 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_6 &ref() { return *reinterpret_cast<volatile TCTRL_6*>(0x400540D8); }
};
// Trigger Control Register
union TCTRL_7 {
  
  // Trigger enable
  enum class eHTEN : uint32_t {
    // Hardware trigger source disabled
    eHTEN_0 = 0,
    // Hardware trigger source enabled
    eHTEN_1 = 1,
  };
  
  // The command number is selected by software TCMD or hardware tcmd signal
  enum class eCMD_SEL : uint32_t {
    // TCTRLa[TCMD] will determine the command
    eCMD_SEL_0 = 0,
    // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
    eCMD_SEL_1 = 1,
  };
  
  // Trigger priority setting
  enum class eTPRI : uint32_t {
    // Set to highest priority, Level 1
    eTPRI_0 = 0,
    // Set to corresponding priority level
    eTPRI_1 = 1,
    // Set to corresponding priority level
    eTPRI_2 = 2,
    // Set to corresponding priority level
    eTPRI_3 = 3,
    // Set to corresponding priority level
    eTPRI_4 = 4,
    // Set to corresponding priority level
    eTPRI_5 = 5,
    // Set to corresponding priority level
    eTPRI_6 = 6,
    // Set to lowest priority, Level 8
    eTPRI_7 = 7,
  };
  
  // Trigger command select
  enum class eTCMD : uint32_t {
    // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_0 = 0,
    // CMD1 is executed
    eTCMD_1 = 1,
    // Corresponding CMD is executed
    eTCMD_2 = 2,
    // Corresponding CMD is executed
    eTCMD_3 = 3,
    // Corresponding CMD is executed
    eTCMD_4 = 4,
    // Corresponding CMD is executed
    eTCMD_5 = 5,
    // Corresponding CMD is executed
    eTCMD_6 = 6,
    // Corresponding CMD is executed
    eTCMD_7 = 7,
    // Corresponding CMD is executed
    eTCMD_8 = 8,
    // Corresponding CMD is executed
    eTCMD_9 = 9,
    // CMD15 is executed
    eTCMD_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Trigger enable
    eHTEN HTEN : 1;
    // read-write - The command number is selected by software TCMD or hardware tcmd signal
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger priority setting
    eTPRI TPRI : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Trigger delay select
    uint32_t TDLY : 4;
    uint32_t _reserved_2 : 4;
    // read-write - Trigger command select
    eTCMD TCMD : 4;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL_7 &ref() { return *reinterpret_cast<volatile TCTRL_7*>(0x400540DC); }
};

// LPADC Command Low Buffer Register
union CMDL1 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL1 &ref() { return *reinterpret_cast<volatile CMDL1*>(0x40054100); }
};

// LPADC Command High Buffer Register
union CMDH1 {
  
  // Compare Function Enable
  enum class eCMPEN : uint32_t {
    // Compare disabled.
    eCMPEN_0 = 0,
    // Compare enabled. Store on true.
    eCMPEN_2 = 2,
    // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
    eCMPEN_3 = 3,
  };
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Function Enable
    eCMPEN CMPEN : 2;
    uint32_t _reserved_0 : 5;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH1 &ref() { return *reinterpret_cast<volatile CMDH1*>(0x40054104); }
};

// LPADC Command Low Buffer Register
union CMDL2 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL2 &ref() { return *reinterpret_cast<volatile CMDL2*>(0x40054108); }
};

// LPADC Command High Buffer Register
union CMDH2 {
  
  // Compare Function Enable
  enum class eCMPEN : uint32_t {
    // Compare disabled.
    eCMPEN_0 = 0,
    // Compare enabled. Store on true.
    eCMPEN_2 = 2,
    // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
    eCMPEN_3 = 3,
  };
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Function Enable
    eCMPEN CMPEN : 2;
    uint32_t _reserved_0 : 5;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH2 &ref() { return *reinterpret_cast<volatile CMDH2*>(0x4005410C); }
};

// LPADC Command Low Buffer Register
union CMDL3 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL3 &ref() { return *reinterpret_cast<volatile CMDL3*>(0x40054110); }
};

// LPADC Command High Buffer Register
union CMDH3 {
  
  // Compare Function Enable
  enum class eCMPEN : uint32_t {
    // Compare disabled.
    eCMPEN_0 = 0,
    // Compare enabled. Store on true.
    eCMPEN_2 = 2,
    // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
    eCMPEN_3 = 3,
  };
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Function Enable
    eCMPEN CMPEN : 2;
    uint32_t _reserved_0 : 5;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH3 &ref() { return *reinterpret_cast<volatile CMDH3*>(0x40054114); }
};

// LPADC Command Low Buffer Register
union CMDL4 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL4 &ref() { return *reinterpret_cast<volatile CMDL4*>(0x40054118); }
};

// LPADC Command High Buffer Register
union CMDH4 {
  
  // Compare Function Enable
  enum class eCMPEN : uint32_t {
    // Compare disabled.
    eCMPEN_0 = 0,
    // Compare enabled. Store on true.
    eCMPEN_2 = 2,
    // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
    eCMPEN_3 = 3,
  };
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Function Enable
    eCMPEN CMPEN : 2;
    uint32_t _reserved_0 : 5;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH4 &ref() { return *reinterpret_cast<volatile CMDH4*>(0x4005411C); }
};

// LPADC Command Low Buffer Register
union CMDL5 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL5 &ref() { return *reinterpret_cast<volatile CMDL5*>(0x40054120); }
};

// LPADC Command High Buffer Register
union CMDH5 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH5 &ref() { return *reinterpret_cast<volatile CMDH5*>(0x40054124); }
};

// LPADC Command Low Buffer Register
union CMDL6 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL6 &ref() { return *reinterpret_cast<volatile CMDL6*>(0x40054128); }
};

// LPADC Command High Buffer Register
union CMDH6 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH6 &ref() { return *reinterpret_cast<volatile CMDH6*>(0x4005412C); }
};

// LPADC Command Low Buffer Register
union CMDL7 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL7 &ref() { return *reinterpret_cast<volatile CMDL7*>(0x40054130); }
};

// LPADC Command High Buffer Register
union CMDH7 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH7 &ref() { return *reinterpret_cast<volatile CMDH7*>(0x40054134); }
};

// LPADC Command Low Buffer Register
union CMDL8 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL8 &ref() { return *reinterpret_cast<volatile CMDL8*>(0x40054138); }
};

// LPADC Command High Buffer Register
union CMDH8 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH8 &ref() { return *reinterpret_cast<volatile CMDH8*>(0x4005413C); }
};

// LPADC Command Low Buffer Register
union CMDL9 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL9 &ref() { return *reinterpret_cast<volatile CMDL9*>(0x40054140); }
};

// LPADC Command High Buffer Register
union CMDH9 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH9 &ref() { return *reinterpret_cast<volatile CMDH9*>(0x40054144); }
};

// LPADC Command Low Buffer Register
union CMDL10 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL10 &ref() { return *reinterpret_cast<volatile CMDL10*>(0x40054148); }
};

// LPADC Command High Buffer Register
union CMDH10 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH10 &ref() { return *reinterpret_cast<volatile CMDH10*>(0x4005414C); }
};

// LPADC Command Low Buffer Register
union CMDL11 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL11 &ref() { return *reinterpret_cast<volatile CMDL11*>(0x40054150); }
};

// LPADC Command High Buffer Register
union CMDH11 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH11 &ref() { return *reinterpret_cast<volatile CMDH11*>(0x40054154); }
};

// LPADC Command Low Buffer Register
union CMDL12 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL12 &ref() { return *reinterpret_cast<volatile CMDL12*>(0x40054158); }
};

// LPADC Command High Buffer Register
union CMDH12 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH12 &ref() { return *reinterpret_cast<volatile CMDH12*>(0x4005415C); }
};

// LPADC Command Low Buffer Register
union CMDL13 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL13 &ref() { return *reinterpret_cast<volatile CMDL13*>(0x40054160); }
};

// LPADC Command High Buffer Register
union CMDH13 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH13 &ref() { return *reinterpret_cast<volatile CMDH13*>(0x40054164); }
};

// LPADC Command Low Buffer Register
union CMDL14 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL14 &ref() { return *reinterpret_cast<volatile CMDL14*>(0x40054168); }
};

// LPADC Command High Buffer Register
union CMDH14 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH14 &ref() { return *reinterpret_cast<volatile CMDH14*>(0x4005416C); }
};

// LPADC Command Low Buffer Register
union CMDL15 {
  
  // Input channel select
  enum class eADCH : uint32_t {
    // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_0 = 0,
    // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_1 = 1,
    // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_2 = 2,
    // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_3 = 3,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_4 = 4,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8,
    // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9,
    // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_30 = 30,
    // Select CH31A or CH31B or CH31A/CH31B pair.
    eADCH_31 = 31,
  };
  
  // A-side vs. B-side Select
  enum class eABSEL : uint32_t {
    // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_0 = 0,
    // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
    eABSEL_1 = 1,
  };
  
  // Differential Mode Enable
  enum class eDIFF : uint32_t {
    // Single-ended mode.
    eDIFF_0 = 0,
    // Differential mode.
    eDIFF_1 = 1,
  };
  
  // Channel Scale
  enum class eCSCALE : uint32_t {
    // Scale selected analog channel (Factor of 30/64)
    eCSCALE_0 = 0,
    // (Default) Full scale (Factor of 1)
    eCSCALE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Input channel select
    eADCH ADCH : 5;
    // read-write - A-side vs. B-side Select
    eABSEL ABSEL : 1;
    // read-write - Differential Mode Enable
    eDIFF DIFF : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Channel Scale
    eCSCALE CSCALE : 1;
    uint32_t _reserved_1 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL15 &ref() { return *reinterpret_cast<volatile CMDL15*>(0x40054170); }
};

// LPADC Command High Buffer Register
union CMDH15 {
  
  // Loop with Increment
  enum class eLWI : uint32_t {
    // Auto channel increment disabled
    eLWI_0 = 0,
    // Auto channel increment enabled
    eLWI_1 = 1,
  };
  
  // Sample Time Select
  enum class eSTS : uint32_t {
    // Minimum sample time of 3.5 ADCK cycles.
    eSTS_0 = 0,
    // 3.5 + 21 ADCK cycles; 5.5 ADCK cycles total sample time.
    eSTS_1 = 1,
    // 3.5 + 22 ADCK cycles; 7.5 ADCK cycles total sample time.
    eSTS_2 = 2,
    // 3.5 + 23 ADCK cycles; 11.5 ADCK cycles total sample time.
    eSTS_3 = 3,
    // 3.5 + 24 ADCK cycles; 19.5 ADCK cycles total sample time.
    eSTS_4 = 4,
    // 3.5 + 25 ADCK cycles; 35.5 ADCK cycles total sample time.
    eSTS_5 = 5,
    // 3.5 + 26 ADCK cycles; 67.5 ADCK cycles total sample time.
    eSTS_6 = 6,
    // 3.5 + 27 ADCK cycles; 131.5 ADCK cycles total sample time.
    eSTS_7 = 7,
  };
  
  // Hardware Average Select
  enum class eAVGS : uint32_t {
    // Single conversion.
    eAVGS_0 = 0,
    // 2 conversions averaged.
    eAVGS_1 = 1,
    // 4 conversions averaged.
    eAVGS_2 = 2,
    // 8 conversions averaged.
    eAVGS_3 = 3,
    // 16 conversions averaged.
    eAVGS_4 = 4,
    // 32 conversions averaged.
    eAVGS_5 = 5,
    // 64 conversions averaged.
    eAVGS_6 = 6,
    // 128 conversions averaged.
    eAVGS_7 = 7,
  };
  
  // Loop Count Select
  enum class eLOOP : uint32_t {
    // Looping not enabled. Command executes 1 time.
    eLOOP_0 = 0,
    // Loop 1 time. Command executes 2 times.
    eLOOP_1 = 1,
    // Loop 2 times. Command executes 3 times.
    eLOOP_2 = 2,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_3 = 3,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8,
    // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9,
    // Loop 15 times. Command executes 16 times.
    eLOOP_15 = 15,
  };
  
  // Next Command Select
  enum class eNEXT : uint32_t {
    // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_0 = 0,
    // Select CMD1 command buffer register as next command.
    eNEXT_1 = 1,
    // Select corresponding CMD command buffer register as next command
    eNEXT_2 = 2,
    // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3,
    // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4,
    // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5,
    // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6,
    // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7,
    // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8,
    // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9,
    // Select CMD15 command buffer register as next command.
    eNEXT_15 = 15,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Loop with Increment
    eLWI LWI : 1;
    // read-write - Sample Time Select
    eSTS STS : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Hardware Average Select
    eAVGS AVGS : 3;
    uint32_t _reserved_2 : 1;
    // read-write - Loop Count Select
    eLOOP LOOP : 4;
    uint32_t _reserved_3 : 4;
    // read-write - Next Command Select
    eNEXT NEXT : 4;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH15 &ref() { return *reinterpret_cast<volatile CMDH15*>(0x40054174); }
};

// Compare Value Register
union CV1 {
  
  // Bit field definition.
  struct {
    // read-write - Compare Value Low
    uint32_t CVL : 16;
    // read-write - Compare Value High.
    uint32_t CVH : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV1 &ref() { return *reinterpret_cast<volatile CV1*>(0x40054200); }
};
// Compare Value Register
union CV2 {
  
  // Bit field definition.
  struct {
    // read-write - Compare Value Low
    uint32_t CVL : 16;
    // read-write - Compare Value High.
    uint32_t CVH : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV2 &ref() { return *reinterpret_cast<volatile CV2*>(0x40054204); }
};
// Compare Value Register
union CV3 {
  
  // Bit field definition.
  struct {
    // read-write - Compare Value Low
    uint32_t CVL : 16;
    // read-write - Compare Value High.
    uint32_t CVH : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV3 &ref() { return *reinterpret_cast<volatile CV3*>(0x40054208); }
};
// Compare Value Register
union CV4 {
  
  // Bit field definition.
  struct {
    // read-write - Compare Value Low
    uint32_t CVL : 16;
    // read-write - Compare Value High.
    uint32_t CVH : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV4 &ref() { return *reinterpret_cast<volatile CV4*>(0x4005420C); }
};

// LPADC Data Result FIFO Register
union RESFIFO {
  
  // Trigger Source
  enum class eTSRC : uint32_t {
    // Trigger source 0 initiated this conversion.
    eTSRC_0 = 0,
    // Trigger source 1 initiated this conversion.
    eTSRC_1 = 1,
    // Corresponding trigger source initiated this conversion.
    eTSRC_2 = 2,
    // Corresponding trigger source initiated this conversion.
    eTSRC_3 = 3,
    // Corresponding trigger source initiated this conversion.
    eTSRC_4 = 4,
    // Corresponding trigger source initiated this conversion.
    eTSRC_5 = 5,
    // Corresponding trigger source initiated this conversion.
    eTSRC_6 = 6,
    // Trigger source 7 initiated this conversion.
    eTSRC_7 = 7,
  };
  
  // Loop count value
  enum class eLOOPCNT : uint32_t {
    // Result is from initial conversion in command.
    eLOOPCNT_0 = 0,
    // Result is from second conversion in command.
    eLOOPCNT_1 = 1,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_2 = 2,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_3 = 3,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_4 = 4,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_5 = 5,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_6 = 6,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_7 = 7,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_8 = 8,
    // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_9 = 9,
    // Result is from 16th conversion in command.
    eLOOPCNT_15 = 15,
  };
  
  // Command Buffer Source
  enum class eCMDSRC : uint32_t {
    // Not a valid value CMDSRC value for a dataword in RESFIFO. 0x0 is only found in initial FIFO state prior to an ADC conversion result dataword being stored to a RESFIFO buffer.
    eCMDSRC_0 = 0,
    // CMD1 buffer used as control settings for this conversion.
    eCMDSRC_1 = 1,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_2 = 2,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_3 = 3,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_4 = 4,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_5 = 5,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_6 = 6,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_7 = 7,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_8 = 8,
    // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_9 = 9,
    // CMD15 buffer used as control settings for this conversion.
    eCMDSRC_15 = 15,
  };
  
  // FIFO entry is valid
  enum class eVALID : uint32_t {
    // FIFO is empty. Discard any read from RESFIFO.
    eVALID_0 = 0,
    // FIFO record read from RESFIFO is valid.
    eVALID_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Data result
    uint32_t D : 16;
    // read-only - Trigger Source
    eTSRC TSRC : 3;
    uint32_t _reserved_0 : 1;
    // read-only - Loop count value
    eLOOPCNT LOOPCNT : 4;
    // read-only - Command Buffer Source
    eCMDSRC CMDSRC : 4;
    uint32_t _reserved_1 : 3;
    // read-only - FIFO entry is valid
    eVALID VALID : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RESFIFO &ref() { return *reinterpret_cast<volatile RESFIFO*>(0x40054300); }
};


} // namespace nLPADC2