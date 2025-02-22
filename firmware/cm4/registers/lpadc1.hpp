#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // LPADC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nLPADC1 {


// Version ID Register
//
union VERID {
  
  // Enum definitions.
  enum class eRES : uint32_t {
    eRES_0 = 0, // Up to 13-bit differential/12-bit single ended resolution supported.
    eRES_1 = 1, // Up to 16-bit differential/15-bit single ended resolution supported.
  };
  enum class eDIFFEN : uint32_t {
    eDIFFEN_0 = 0, // Differential operation not supported.
    eDIFFEN_1 = 1, // Differential operation supported. CMDLa[DIFF] and CMDLa[ABSEL] control fields implemented.
  };
  enum class eMVI : uint32_t {
    eMVI_0 = 0, // Single voltage reference input supported.
    eMVI_1 = 1, // Multiple voltage reference inputs supported.
  };
  enum class eCSW : uint32_t {
    eCSW_0 = 0, // Channel scaling not supported.
    eCSW_1 = 1, // Channel scaling supported. 1-bit CSCALE control field.
    eCSW_6 = 6, // Channel scaling supported. 6-bit CSCALE control field.
  };
  enum class eVR1RNGI : uint32_t {
    eVR1RNGI_0 = 0, // Range control not required. CFG[VREF1RNG] is not implemented.
    eVR1RNGI_1 = 1, // Range control required. CFG[VREF1RNG] is implemented.
  };
  enum class eIADCKI : uint32_t {
    eIADCKI_0 = 0, // Internal clock source not implemented.
    eIADCKI_1 = 1, // Internal clock source (and CFG[ADCKEN]) implemented.
  };
  enum class eCALOFSI : uint32_t {
    eCALOFSI_0 = 0, // Offset calibration and offset trimming not implemented.
    eCALOFSI_1 = 1, // Offset calibration and offset trimming implemented.
  };
  
  // Bit field definition.
  struct {
    eRES RES : 1;
    eDIFFEN DIFFEN : 1;
    uint32_t _reserved_2 : 1;
    eMVI MVI : 1;
    eCSW CSW : 3;
    uint32_t _reserved_4 : 1;
    eVR1RNGI VR1RNGI : 1;
    eIADCKI IADCKI : 1;
    eCALOFSI CALOFSI : 1;
    uint32_t _reserved_7 : 5;
    uint32_t MINOR : 8;
    uint32_t MAJOR : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x0100001A; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x40050000); }
};

// Parameter Register
//
union PARAM {
  
  // Enum definitions.
  enum class eTRIG_NUM : uint32_t {
    eTRIG_NUM_8 = 8, // 8 hardware triggers implemented
  };
  enum class eFIFOSIZE : uint32_t {
    eFIFOSIZE_16 = 16, // Result FIFO depth = 16 datawords.
  };
  enum class eCV_NUM : uint32_t {
    eCV_NUM_4 = 4, // 4 compare value registers implemented
  };
  enum class eCMD_NUM : uint32_t {
    eCMD_NUM_15 = 15, // 15 command buffers implemented
  };
  
  // Bit field definition.
  struct {
    eTRIG_NUM TRIG_NUM : 8;
    eFIFOSIZE FIFOSIZE : 8;
    eCV_NUM CV_NUM : 8;
    eCMD_NUM CMD_NUM : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x0F041008; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x40050004); }
};

// LPADC Control Register
//
union CTRL {
  
  // Enum definitions.
  enum class eADCEN : uint32_t {
    eADCEN_0 = 0, // LPADC is disabled.
    eADCEN_1 = 1, // LPADC is enabled.
  };
  enum class eRST : uint32_t {
    eRST_0 = 0, // LPADC logic is not reset.
    eRST_1 = 1, // LPADC logic is reset.
  };
  enum class eDOZEN : uint32_t {
    eDOZEN_0 = 0, // LPADC is enabled in Doze mode.
    eDOZEN_1 = 1, // LPADC is disabled in Doze mode.
  };
  enum class eTRIG_SRC : uint32_t {
    eTRIG_SRC_0 = 0, // ADC_ETC hw trigger , and HW trigger are enabled
    eTRIG_SRC_1 = 1, // ADC_ETC hw trigger is enabled
    eTRIG_SRC_2 = 2, // HW trigger is enabled
  };
  enum class eRSTFIFO : uint32_t {
    eRSTFIFO_0 = 0, // No effect.
    eRSTFIFO_1 = 1, // FIFO is reset.
  };
  
  // Bit field definition.
  struct {
    eADCEN ADCEN : 1;
    eRST RST : 1;
    eDOZEN DOZEN : 1;
    eTRIG_SRC TRIG_SRC : 2;
    uint32_t _reserved_4 : 3;
    eRSTFIFO RSTFIFO : 1;
    uint32_t _reserved_end : 23;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40050010); }
};

// LPADC Status Register
//
union STAT {
  
  // Enum definitions.
  enum class eRDY : uint32_t {
    eRDY_0 = 0, // Result FIFO data level not above watermark level.
    eRDY_1 = 1, // Result FIFO holding data above watermark level.
  };
  enum class eFOF : uint32_t {
    eFOF_0 = 0, // No result FIFO overflow has occurred since the last time the flag was cleared.
    eFOF_1 = 1, // At least one result FIFO overflow has occurred since the last time the flag was cleared.
  };
  enum class eADC_ACTIVE : uint32_t {
    eADC_ACTIVE_0 = 0, // The LPADC is IDLE. There are no pending triggers to service and no active commands are being processed.
    eADC_ACTIVE_1 = 1, // The LPADC is processing a conversion, running through the power up delay, or servicing a trigger.
  };
  enum class eTRGACT : uint32_t {
    eTRGACT_0 = 0, // Command (sequence) associated with Trigger 0 currently being executed.
    eTRGACT_1 = 1, // Command (sequence) associated with Trigger 1 currently being executed.
    eTRGACT_2 = 2, // Command (sequence) associated with Trigger 2 currently being executed.
    eTRGACT_3 = 3, // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_4 = 4, // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_5 = 5, // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_6 = 6, // Command (sequence) from the associated Trigger number is currently being executed.
    eTRGACT_7 = 7, // Command (sequence) from the associated Trigger number is currently being executed.
  };
  enum class eCMDACT : uint32_t {
    eCMDACT_0 = 0, // No command is currently in progress.
    eCMDACT_1 = 1, // Command 1 currently being executed.
    eCMDACT_2 = 2, // Command 2 currently being executed.
    eCMDACT_3 = 3, // Associated command number is currently being executed.
    eCMDACT_4 = 4, // Associated command number is currently being executed.
    eCMDACT_5 = 5, // Associated command number is currently being executed.
    eCMDACT_6 = 6, // Associated command number is currently being executed.
    eCMDACT_7 = 7, // Associated command number is currently being executed.
    eCMDACT_8 = 8, // Associated command number is currently being executed.
    eCMDACT_9 = 9, // Associated command number is currently being executed.
  };
  
  // Bit field definition.
  struct {
    eRDY RDY : 1;
    eFOF FOF : 1;
    uint32_t _reserved_2 : 6;
    eADC_ACTIVE ADC_ACTIVE : 1;
    uint32_t _reserved_3 : 7;
    eTRGACT TRGACT : 3;
    uint32_t _reserved_4 : 5;
    eCMDACT CMDACT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT &Instance() { return *reinterpret_cast<volatile STAT*>(0x40050014); }
};

// Interrupt Enable Register
//
union IE {
  
  // Enum definitions.
  enum class eFWMIE : uint32_t {
    eFWMIE_0 = 0, // FIFO watermark interrupts are not enabled.
    eFWMIE_1 = 1, // FIFO watermark interrupts are enabled.
  };
  enum class eFOFIE : uint32_t {
    eFOFIE_0 = 0, // FIFO overflow interrupts are not enabled.
    eFOFIE_1 = 1, // FIFO overflow interrupts are enabled.
  };
  
  // Bit field definition.
  struct {
    eFWMIE FWMIE : 1;
    eFOFIE FOFIE : 1;
    uint32_t _reserved_end : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IE &Instance() { return *reinterpret_cast<volatile IE*>(0x40050018); }
};

// DMA Enable Register
//
union DE {
  
  // Enum definitions.
  enum class eFWMDE : uint32_t {
    eFWMDE_0 = 0, // DMA request disabled.
    eFWMDE_1 = 1, // DMA request enabled.
  };
  
  // Bit field definition.
  struct {
    eFWMDE FWMDE : 1;
    uint32_t _reserved_end : 31;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DE &Instance() { return *reinterpret_cast<volatile DE*>(0x4005001C); }
};

// LPADC Configuration Register
//
union CFG {
  
  // Enum definitions.
  enum class eTPRICTRL : uint32_t {
    eTPRICTRL_0 = 0, // If a higher priority trigger is detected during command processing, the current conversion is aborted and the new command specified by the trigger is started.
    eTPRICTRL_1 = 1, // If a higher priority trigger is received during command processing, the current conversion is completed (including averaging iterations if enabled) and stored to the RESFIFO before the higher priority trigger/command is initiated. Note that compare until true commands can be interrupted prior to resulting in a true conversion.
  };
  enum class ePWRSEL : uint32_t {
    ePWRSEL_0 = 0, // Level 1 (Lowest power setting)
    ePWRSEL_1 = 1, // Level 2
    ePWRSEL_2 = 2, // Level 3
    ePWRSEL_3 = 3, // Level 4 (Highest power setting)
  };
  enum class eREFSEL : uint32_t {
    eREFSEL_0 = 0, // (Default) Option 1 setting.
    eREFSEL_1 = 1, // Option 2 setting.
    eREFSEL_2 = 2, // Option 3 setting.
  };
  enum class ePWREN : uint32_t {
    ePWREN_0 = 0, // LPADC analog circuits are only enabled while conversions are active. Performance is affected due to analog startup delays.
    ePWREN_1 = 1, // LPADC analog circuits are pre-enabled and ready to execute conversions without startup delays (at the cost of higher DC current consumption). When PWREN is set, the power up delay is enforced such that any detected trigger does not begin ADC operation until the power up delay time has passed.
  };
  
  // Bit field definition.
  struct {
    eTPRICTRL TPRICTRL : 1;
    uint32_t _reserved_1 : 3;
    ePWRSEL PWRSEL : 2;
    eREFSEL REFSEL : 2;
    uint32_t _reserved_3 : 8;
    uint32_t PUDLY : 8;
    uint32_t _reserved_4 : 4;
    ePWREN PWREN : 1;
    uint32_t _reserved_end : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CFG() = delete;
  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CFG &Instance() { return *reinterpret_cast<volatile CFG*>(0x40050020); }
};

// LPADC Pause Register
//
union PAUSE {
  
  // Enum definitions.
  enum class ePAUSEEN : uint32_t {
    ePAUSEEN_0 = 0, // Pause operation disabled
    ePAUSEEN_1 = 1, // Pause operation enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t PAUSEDLY : 9;
    uint32_t _reserved_1 : 22;
    ePAUSEEN PAUSEEN : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PAUSE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PAUSE &Instance() { return *reinterpret_cast<volatile PAUSE*>(0x40050024); }
};

// LPADC FIFO Control Register
//
union FCTRL {
  
  // Enum definitions.
  enum class eFCOUNT : uint32_t {
    eFCOUNT_0 = 0, // No data stored in FIFO
    eFCOUNT_1 = 1, // 1 dataword stored in FIFO
    eFCOUNT_2 = 2, // 2 datawords stored in FIFO
    eFCOUNT_4 = 4, // 4 datawords stored in FIFO
    eFCOUNT_8 = 8, // 8 datawords stored in FIFO
    eFCOUNT_16 = 16, // 16 datawords stored in FIFO
  };
  enum class eFWMARK : uint32_t {
    eFWMARK_0 = 0, // Generates STAT[RDY] flag after 1st successful conversion - single conversion
    eFWMARK_1 = 1, // Generates STAT[RDY] flag after 2nd successful conversion
    eFWMARK_2 = 2, // Generates STAT[RDY] flag after 3rd successful conversion
    eFWMARK_3 = 3, // Generates STAT[RDY] flag after 4th successful conversion
    eFWMARK_4 = 4, // Generates STAT[RDY] flag after 5th successful conversion
    eFWMARK_5 = 5, // Generates STAT[RDY] flag after 6th successful conversion
    eFWMARK_6 = 6, // Generates STAT[RDY] flag after 7th successful conversion
    eFWMARK_7 = 7, // Generates STAT[RDY] flag after 8th successful conversion
    eFWMARK_8 = 8, // Generates STAT[RDY] flag after 9th successful conversion
    eFWMARK_9 = 9, // Generates STAT[RDY] flag after 10th successful conversion
    eFWMARK_10 = 10, // Generates STAT[RDY] flag after 11th successful conversion
    eFWMARK_11 = 11, // Generates STAT[RDY] flag after 12th successful conversion
    eFWMARK_12 = 12, // Generates STAT[RDY] flag after 13th successful conversion
    eFWMARK_13 = 13, // Generates STAT[RDY] flag after 14th successful conversion
    eFWMARK_14 = 14, // Generates STAT[RDY] flag after 15th successful conversion
    eFWMARK_15 = 15, // Generates STAT[RDY] flag after 16th successful conversion
  };
  
  // Bit field definition.
  struct {
    eFCOUNT FCOUNT : 5;
    uint32_t _reserved_1 : 11;
    eFWMARK FWMARK : 4;
    uint32_t _reserved_end : 12;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  FCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCTRL &Instance() { return *reinterpret_cast<volatile FCTRL*>(0x40050030); }
};

// Software Trigger Register
//
union SWTRIG {
  
  // Enum definitions.
  enum class eSWT0 : uint32_t {
    eSWT0_0 = 0, // No trigger 0 event generated.
    eSWT0_1 = 1, // Trigger 0 event generated.
  };
  enum class eSWT1 : uint32_t {
    eSWT1_0 = 0, // No trigger 1 event generated.
    eSWT1_1 = 1, // Trigger 1 event generated.
  };
  enum class eSWT2 : uint32_t {
    eSWT2_0 = 0, // No trigger 2 event generated.
    eSWT2_1 = 1, // Trigger 2 event generated.
  };
  enum class eSWT3 : uint32_t {
    eSWT3_0 = 0, // No trigger 3 event generated.
    eSWT3_1 = 1, // Trigger 3 event generated.
  };
  enum class eSWT4 : uint32_t {
    eSWT4_0 = 0, // No trigger 4 event generated.
    eSWT4_1 = 1, // Trigger 4 event generated.
  };
  enum class eSWT5 : uint32_t {
    eSWT5_0 = 0, // No trigger 5 event generated.
    eSWT5_1 = 1, // Trigger 5 event generated.
  };
  enum class eSWT6 : uint32_t {
    eSWT6_0 = 0, // No trigger 6 event generated.
    eSWT6_1 = 1, // Trigger 6 event generated.
  };
  enum class eSWT7 : uint32_t {
    eSWT7_0 = 0, // No trigger 7 event generated.
    eSWT7_1 = 1, // Trigger 7 event generated.
  };
  
  // Bit field definition.
  struct {
    eSWT0 SWT0 : 1;
    eSWT1 SWT1 : 1;
    eSWT2 SWT2 : 1;
    eSWT3 SWT3 : 1;
    eSWT4 SWT4 : 1;
    eSWT5 SWT5 : 1;
    eSWT6 SWT6 : 1;
    eSWT7 SWT7 : 1;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SWTRIG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SWTRIG &Instance() { return *reinterpret_cast<volatile SWTRIG*>(0x40050034); }
};

// Trigger Control Register
//
union TCTRL[0] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[0] &Instance() { return *reinterpret_cast<volatile TCTRL[0]*>(0x400500C0); }
};
// Trigger Control Register
//
union TCTRL[1] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[1] &Instance() { return *reinterpret_cast<volatile TCTRL[1]*>(0x400500C4); }
};
// Trigger Control Register
//
union TCTRL[2] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[2] &Instance() { return *reinterpret_cast<volatile TCTRL[2]*>(0x400500C8); }
};
// Trigger Control Register
//
union TCTRL[3] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[3] &Instance() { return *reinterpret_cast<volatile TCTRL[3]*>(0x400500CC); }
};
// Trigger Control Register
//
union TCTRL[4] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[4] &Instance() { return *reinterpret_cast<volatile TCTRL[4]*>(0x400500D0); }
};
// Trigger Control Register
//
union TCTRL[5] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[5] &Instance() { return *reinterpret_cast<volatile TCTRL[5]*>(0x400500D4); }
};
// Trigger Control Register
//
union TCTRL[6] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[6] &Instance() { return *reinterpret_cast<volatile TCTRL[6]*>(0x400500D8); }
};
// Trigger Control Register
//
union TCTRL[7] {
  
  // Enum definitions.
  enum class eHTEN : uint32_t {
    eHTEN_0 = 0, // Hardware trigger source disabled
    eHTEN_1 = 1, // Hardware trigger source enabled
  };
  enum class eCMD_SEL : uint32_t {
    eCMD_SEL_0 = 0, // TCTRLa[TCMD] will determine the command
    eCMD_SEL_1 = 1, // Software TCDM is bypassed , and hardware TCMD from ADC_ETC module will be used. The trigger command is then defined by ADC hardware trigger command selection field in ADC_ETC->TRIGx_CHAINy_z_n[CSEL].
  };
  enum class eTPRI : uint32_t {
    eTPRI_0 = 0, // Set to highest priority, Level 1
    eTPRI_1 = 1, // Set to corresponding priority level
    eTPRI_2 = 2, // Set to corresponding priority level
    eTPRI_3 = 3, // Set to corresponding priority level
    eTPRI_4 = 4, // Set to corresponding priority level
    eTPRI_5 = 5, // Set to corresponding priority level
    eTPRI_6 = 6, // Set to corresponding priority level
    eTPRI_7 = 7, // Set to lowest priority, Level 8
  };
  enum class eTCMD : uint32_t {
    eTCMD_0 = 0, // Not a valid selection from the command buffer. Trigger event is ignored.
    eTCMD_1 = 1, // CMD1 is executed
    eTCMD_2 = 2, // Corresponding CMD is executed
    eTCMD_3 = 3, // Corresponding CMD is executed
    eTCMD_4 = 4, // Corresponding CMD is executed
    eTCMD_5 = 5, // Corresponding CMD is executed
    eTCMD_6 = 6, // Corresponding CMD is executed
    eTCMD_7 = 7, // Corresponding CMD is executed
    eTCMD_8 = 8, // Corresponding CMD is executed
    eTCMD_9 = 9, // Corresponding CMD is executed
    eTCMD_15 = 15, // CMD15 is executed
  };
  
  // Bit field definition.
  struct {
    eHTEN HTEN : 1;
    eCMD_SEL CMD_SEL : 1;
    uint32_t _reserved_2 : 6;
    eTPRI TPRI : 3;
    uint32_t _reserved_3 : 5;
    uint32_t TDLY : 4;
    uint32_t _reserved_4 : 4;
    eTCMD TCMD : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  TCTRL[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCTRL[7] &Instance() { return *reinterpret_cast<volatile TCTRL[7]*>(0x400500DC); }
};

// LPADC Command Low Buffer Register
//
union CMDL1 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL1() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL1 &Instance() { return *reinterpret_cast<volatile CMDL1*>(0x40050100); }
};

// LPADC Command High Buffer Register
//
union CMDH1 {
  
  // Enum definitions.
  enum class eCMPEN : uint32_t {
    eCMPEN_0 = 0, // Compare disabled.
    eCMPEN_2 = 2, // Compare enabled. Store on true.
    eCMPEN_3 = 3, // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
  };
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    eCMPEN CMPEN : 2;
    uint32_t _reserved_1 : 5;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_3 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_4 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_5 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH1 &Instance() { return *reinterpret_cast<volatile CMDH1*>(0x40050104); }
};

// LPADC Command Low Buffer Register
//
union CMDL2 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL2() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL2 &Instance() { return *reinterpret_cast<volatile CMDL2*>(0x40050108); }
};

// LPADC Command High Buffer Register
//
union CMDH2 {
  
  // Enum definitions.
  enum class eCMPEN : uint32_t {
    eCMPEN_0 = 0, // Compare disabled.
    eCMPEN_2 = 2, // Compare enabled. Store on true.
    eCMPEN_3 = 3, // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
  };
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    eCMPEN CMPEN : 2;
    uint32_t _reserved_1 : 5;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_3 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_4 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_5 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH2 &Instance() { return *reinterpret_cast<volatile CMDH2*>(0x4005010C); }
};

// LPADC Command Low Buffer Register
//
union CMDL3 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL3() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL3 &Instance() { return *reinterpret_cast<volatile CMDL3*>(0x40050110); }
};

// LPADC Command High Buffer Register
//
union CMDH3 {
  
  // Enum definitions.
  enum class eCMPEN : uint32_t {
    eCMPEN_0 = 0, // Compare disabled.
    eCMPEN_2 = 2, // Compare enabled. Store on true.
    eCMPEN_3 = 3, // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
  };
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    eCMPEN CMPEN : 2;
    uint32_t _reserved_1 : 5;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_3 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_4 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_5 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH3 &Instance() { return *reinterpret_cast<volatile CMDH3*>(0x40050114); }
};

// LPADC Command Low Buffer Register
//
union CMDL4 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL4() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL4 &Instance() { return *reinterpret_cast<volatile CMDL4*>(0x40050118); }
};

// LPADC Command High Buffer Register
//
union CMDH4 {
  
  // Enum definitions.
  enum class eCMPEN : uint32_t {
    eCMPEN_0 = 0, // Compare disabled.
    eCMPEN_2 = 2, // Compare enabled. Store on true.
    eCMPEN_3 = 3, // Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
  };
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    eCMPEN CMPEN : 2;
    uint32_t _reserved_1 : 5;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_3 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_4 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_5 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH4 &Instance() { return *reinterpret_cast<volatile CMDH4*>(0x4005011C); }
};

// LPADC Command Low Buffer Register
//
union CMDL5 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL5() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL5 &Instance() { return *reinterpret_cast<volatile CMDL5*>(0x40050120); }
};

// LPADC Command High Buffer Register
//
union CMDH5 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH5 &Instance() { return *reinterpret_cast<volatile CMDH5*>(0x40050124); }
};

// LPADC Command Low Buffer Register
//
union CMDL6 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL6() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL6 &Instance() { return *reinterpret_cast<volatile CMDL6*>(0x40050128); }
};

// LPADC Command High Buffer Register
//
union CMDH6 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH6 &Instance() { return *reinterpret_cast<volatile CMDH6*>(0x4005012C); }
};

// LPADC Command Low Buffer Register
//
union CMDL7 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL7() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL7 &Instance() { return *reinterpret_cast<volatile CMDL7*>(0x40050130); }
};

// LPADC Command High Buffer Register
//
union CMDH7 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH7 &Instance() { return *reinterpret_cast<volatile CMDH7*>(0x40050134); }
};

// LPADC Command Low Buffer Register
//
union CMDL8 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL8() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL8 &Instance() { return *reinterpret_cast<volatile CMDL8*>(0x40050138); }
};

// LPADC Command High Buffer Register
//
union CMDH8 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH8 &Instance() { return *reinterpret_cast<volatile CMDH8*>(0x4005013C); }
};

// LPADC Command Low Buffer Register
//
union CMDL9 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL9() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL9 &Instance() { return *reinterpret_cast<volatile CMDL9*>(0x40050140); }
};

// LPADC Command High Buffer Register
//
union CMDH9 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH9 &Instance() { return *reinterpret_cast<volatile CMDH9*>(0x40050144); }
};

// LPADC Command Low Buffer Register
//
union CMDL10 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL10() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL10 &Instance() { return *reinterpret_cast<volatile CMDL10*>(0x40050148); }
};

// LPADC Command High Buffer Register
//
union CMDH10 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH10 &Instance() { return *reinterpret_cast<volatile CMDH10*>(0x4005014C); }
};

// LPADC Command Low Buffer Register
//
union CMDL11 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL11() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL11 &Instance() { return *reinterpret_cast<volatile CMDL11*>(0x40050150); }
};

// LPADC Command High Buffer Register
//
union CMDH11 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH11 &Instance() { return *reinterpret_cast<volatile CMDH11*>(0x40050154); }
};

// LPADC Command Low Buffer Register
//
union CMDL12 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL12() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL12 &Instance() { return *reinterpret_cast<volatile CMDL12*>(0x40050158); }
};

// LPADC Command High Buffer Register
//
union CMDH12 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH12 &Instance() { return *reinterpret_cast<volatile CMDH12*>(0x4005015C); }
};

// LPADC Command Low Buffer Register
//
union CMDL13 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL13() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL13 &Instance() { return *reinterpret_cast<volatile CMDL13*>(0x40050160); }
};

// LPADC Command High Buffer Register
//
union CMDH13 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH13 &Instance() { return *reinterpret_cast<volatile CMDH13*>(0x40050164); }
};

// LPADC Command Low Buffer Register
//
union CMDL14 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL14() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL14 &Instance() { return *reinterpret_cast<volatile CMDL14*>(0x40050168); }
};

// LPADC Command High Buffer Register
//
union CMDH14 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH14 &Instance() { return *reinterpret_cast<volatile CMDH14*>(0x4005016C); }
};

// LPADC Command Low Buffer Register
//
union CMDL15 {
  
  // Enum definitions.
  enum class eADCH : uint32_t {
    eADCH_0 = 0, // Select CH0A or CH0B or CH0A/CH0B pair.
    eADCH_1 = 1, // Select CH1A or CH1B or CH1A/CH1B pair.
    eADCH_2 = 2, // Select CH2A or CH2B or CH2A/CH2B pair.
    eADCH_3 = 3, // Select CH3A or CH3B or CH3A/CH3B pair.
    eADCH_4 = 4, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_5 = 5, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_6 = 6, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_7 = 7, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_8 = 8, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_9 = 9, // Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
    eADCH_30 = 30, // Select CH30A or CH30B or CH30A/CH30B pair.
    eADCH_31 = 31, // Select CH31A or CH31B or CH31A/CH31B pair.
  };
  enum class eABSEL : uint32_t {
    eABSEL_0 = 0, // When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
    eABSEL_1 = 1, // When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
  };
  enum class eDIFF : uint32_t {
    eDIFF_0 = 0, // Single-ended mode.
    eDIFF_1 = 1, // Differential mode.
  };
  enum class eCSCALE : uint32_t {
    eCSCALE_0 = 0, // Scale selected analog channel (Factor of 30/64)
    eCSCALE_1 = 1, // (Default) Full scale (Factor of 1)
  };
  
  // Bit field definition.
  struct {
    eADCH ADCH : 5;
    eABSEL ABSEL : 1;
    eDIFF DIFF : 1;
    uint32_t _reserved_3 : 6;
    eCSCALE CSCALE : 1;
    uint32_t _reserved_end : 18;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDL15() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile CMDL15 &Instance() { return *reinterpret_cast<volatile CMDL15*>(0x40050170); }
};

// LPADC Command High Buffer Register
//
union CMDH15 {
  
  // Enum definitions.
  enum class eLWI : uint32_t {
    eLWI_0 = 0, // Auto channel increment disabled
    eLWI_1 = 1, // Auto channel increment enabled
  };
  enum class eSTS : uint32_t {
    eSTS_0 = 0, // Minimum sample time of 3 ADCK cycles.
    eSTS_1 = 1, // 3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
    eSTS_2 = 2, // 3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
    eSTS_3 = 3, // 3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
    eSTS_4 = 4, // 3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
    eSTS_5 = 5, // 3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
    eSTS_6 = 6, // 3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
    eSTS_7 = 7, // 3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
  };
  enum class eAVGS : uint32_t {
    eAVGS_0 = 0, // Single conversion.
    eAVGS_1 = 1, // 2 conversions averaged.
    eAVGS_2 = 2, // 4 conversions averaged.
    eAVGS_3 = 3, // 8 conversions averaged.
    eAVGS_4 = 4, // 16 conversions averaged.
    eAVGS_5 = 5, // 32 conversions averaged.
    eAVGS_6 = 6, // 64 conversions averaged.
    eAVGS_7 = 7, // 128 conversions averaged.
  };
  enum class eLOOP : uint32_t {
    eLOOP_0 = 0, // Looping not enabled. Command executes 1 time.
    eLOOP_1 = 1, // Loop 1 time. Command executes 2 times.
    eLOOP_2 = 2, // Loop 2 times. Command executes 3 times.
    eLOOP_3 = 3, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_4 = 4, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_5 = 5, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_6 = 6, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_7 = 7, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_8 = 8, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_9 = 9, // Loop corresponding number of times. Command executes LOOP+1 times.
    eLOOP_15 = 15, // Loop 15 times. Command executes 16 times.
  };
  enum class eNEXT : uint32_t {
    eNEXT_0 = 0, // No next command defined. Terminate conversions at completion of current command. If lower priority trigger pending, begin command associated with lower priority trigger.
    eNEXT_1 = 1, // Select CMD1 command buffer register as next command.
    eNEXT_2 = 2, // Select corresponding CMD command buffer register as next command
    eNEXT_3 = 3, // Select corresponding CMD command buffer register as next command
    eNEXT_4 = 4, // Select corresponding CMD command buffer register as next command
    eNEXT_5 = 5, // Select corresponding CMD command buffer register as next command
    eNEXT_6 = 6, // Select corresponding CMD command buffer register as next command
    eNEXT_7 = 7, // Select corresponding CMD command buffer register as next command
    eNEXT_8 = 8, // Select corresponding CMD command buffer register as next command
    eNEXT_9 = 9, // Select corresponding CMD command buffer register as next command
    eNEXT_15 = 15, // Select CMD15 command buffer register as next command.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eLWI LWI : 1;
    eSTS STS : 3;
    uint32_t _reserved_2 : 1;
    eAVGS AVGS : 3;
    uint32_t _reserved_3 : 1;
    eLOOP LOOP : 4;
    uint32_t _reserved_4 : 4;
    eNEXT NEXT : 4;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CMDH15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMDH15 &Instance() { return *reinterpret_cast<volatile CMDH15*>(0x40050174); }
};

// Compare Value Register
//
union CV1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CVL : 16;
    uint32_t CVH : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CV1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV1 &Instance() { return *reinterpret_cast<volatile CV1*>(0x40050200); }
};
// Compare Value Register
//
union CV2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CVL : 16;
    uint32_t CVH : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CV2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV2 &Instance() { return *reinterpret_cast<volatile CV2*>(0x40050204); }
};
// Compare Value Register
//
union CV3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CVL : 16;
    uint32_t CVH : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CV3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV3 &Instance() { return *reinterpret_cast<volatile CV3*>(0x40050208); }
};
// Compare Value Register
//
union CV4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CVL : 16;
    uint32_t CVH : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CV4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CV4 &Instance() { return *reinterpret_cast<volatile CV4*>(0x4005020C); }
};

// LPADC Data Result FIFO Register
//
union RESFIFO {
  
  // Enum definitions.
  enum class eTSRC : uint32_t {
    eTSRC_0 = 0, // Trigger source 0 initiated this conversion.
    eTSRC_1 = 1, // Trigger source 1 initiated this conversion.
    eTSRC_2 = 2, // Corresponding trigger source initiated this conversion.
    eTSRC_3 = 3, // Corresponding trigger source initiated this conversion.
    eTSRC_4 = 4, // Corresponding trigger source initiated this conversion.
    eTSRC_5 = 5, // Corresponding trigger source initiated this conversion.
    eTSRC_6 = 6, // Corresponding trigger source initiated this conversion.
    eTSRC_7 = 7, // Trigger source 7 initiated this conversion.
  };
  enum class eLOOPCNT : uint32_t {
    eLOOPCNT_0 = 0, // Result is from initial conversion in command.
    eLOOPCNT_1 = 1, // Result is from second conversion in command.
    eLOOPCNT_2 = 2, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_3 = 3, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_4 = 4, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_5 = 5, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_6 = 6, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_7 = 7, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_8 = 8, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_9 = 9, // Result is from LOOPCNT+1 conversion in command.
    eLOOPCNT_15 = 15, // Result is from 16th conversion in command.
  };
  enum class eCMDSRC : uint32_t {
    eCMDSRC_0 = 0, // Not a valid value CMDSRC value for a dataword in RESFIFO. 0x0 is only found in initial FIFO state prior to an ADC conversion result dataword being stored to a RESFIFO buffer.
    eCMDSRC_1 = 1, // CMD1 buffer used as control settings for this conversion.
    eCMDSRC_2 = 2, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_3 = 3, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_4 = 4, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_5 = 5, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_6 = 6, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_7 = 7, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_8 = 8, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_9 = 9, // Corresponding command buffer used as control settings for this conversion.
    eCMDSRC_15 = 15, // CMD15 buffer used as control settings for this conversion.
  };
  enum class eVALID : uint32_t {
    eVALID_0 = 0, // FIFO is empty. Discard any read from RESFIFO.
    eVALID_1 = 1, // FIFO record read from RESFIFO is valid.
  };
  
  // Bit field definition.
  struct {
    uint32_t D : 16;
    eTSRC TSRC : 3;
    uint32_t _reserved_2 : 1;
    eLOOPCNT LOOPCNT : 4;
    eCMDSRC CMDSRC : 4;
    uint32_t _reserved_4 : 3;
    eVALID VALID : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RESFIFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RESFIFO &Instance() { return *reinterpret_cast<volatile RESFIFO*>(0x40050300); }
};


} // namespace nLPADC1