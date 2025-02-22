#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SAI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSAI1 {


// Version ID
//
union VERID {
  
  enum class eFEATURE : uint32_t {
    eSTD = 0, // Standard feature set.
  };
  
  // Bit field definition.
  struct {
    eFEATURE FEATURE : 16;
    uint32_t MINOR : 8;
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x03010000; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x40404000); }
};

// Parameter
//
union PARAM {
  
  // Bit field definition.
  struct {
    uint32_t DATALINE : 4;
    uint32_t _reserved_0 : 4;
    uint32_t FIFO : 4;
    uint32_t _reserved_1 : 4;
    uint32_t FRAME : 4;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00050504; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x40404004); }
};

// Transmit Control
//
union TCSR {
  
  enum class eFRDE : uint32_t {
    eDISABLE = 0, // Disables the DMA request.
    eENABLE = 1, // Enables the DMA request.
  };
  
  enum class eFWDE : uint32_t {
    eDISABLE = 0, // Disables the DMA request.
    eENABLE = 1, // Enables the DMA request.
  };
  
  enum class eFRIE : uint32_t {
    eDISABLE = 0, // Disables the interrupt.
    eENABLE = 1, // Enables the interrupt.
  };
  
  enum class eFWIE : uint32_t {
    eDISABLE = 0, // Disables the interrupt.
    eENABLE = 1, // Enables the interrupt.
  };
  
  enum class eFEIE : uint32_t {
    eDISABLE = 0, // Disables the interrupt.
    eENABLE = 1, // Enables the interrupt.
  };
  
  enum class eSEIE : uint32_t {
    eDISABLE = 0, // Disables interrupt.
    eENABLE = 1, // Enables interrupt.
  };
  
  enum class eWSIE : uint32_t {
    eDISABLE = 0, // Disables interrupt.
    eENABLE = 1, // Enables interrupt.
  };
  
  enum class eFRF : uint32_t {
    eNO_FLAG = 0, // Transmit FIFO watermark has not been reached.
    eFLAG = 1, // Transmit FIFO watermark has been reached.
  };
  
  enum class eFWF : uint32_t {
    eDISABLE = 0, // No enabled transmit FIFO is empty.
    eENABLE = 1, // Enabled transmit FIFO is empty.
  };
  
  enum class eFEF : uint32_t {
    eNO_FLAG = 0, // Transmit underrun not detected.
    eFLAG = 1, // Transmit underrun detected.
  };
  
  enum class eSEF : uint32_t {
    eNO_FLAG = 0, // Sync error not detected.
    eFLAG = 1, // Frame sync error detected.
  };
  
  enum class eWSF : uint32_t {
    eNO_FLAG = 0, // Start of word not detected.
    eFLAG = 1, // Start of word detected.
  };
  
  enum class eSR : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // Software reset.
  };
  
  enum class eFR : uint32_t {
    eNO_EFFECT = 0, // No effect.
    eRESET = 1, // FIFO reset.
  };
  
  enum class eBCE : uint32_t {
    eDISABLE = 0, // Transmit bit clock is disabled.
    eENABLE = 1, // Transmit bit clock is enabled.
  };
  
  enum class eDBGE : uint32_t {
    eDISABLE = 0, // Transmitter is disabled in Debug mode, after completing the current frame.
    eENABLE = 1, // Transmitter is enabled in Debug mode.
  };
  
  enum class eSTOPE : uint32_t {
    eDISABLE = 0, // Transmitter disabled in Stop mode.
    eENABLE = 1, // Transmitter enabled in Stop mode.
  };
  
  enum class eTE : uint32_t {
    eDISABLE = 0, // Transmitter is disabled.
    eENABLE = 1, // Transmitter is enabled, or transmitter has been disabled and has not yet reached end of frame.
  };
  
  // Bit field definition.
  struct {
    eFRDE FRDE : 1;
    eFWDE FWDE : 1;
    uint32_t _reserved_0 : 6;
    eFRIE FRIE : 1;
    eFWIE FWIE : 1;
    eFEIE FEIE : 1;
    eSEIE SEIE : 1;
    eWSIE WSIE : 1;
    uint32_t _reserved_1 : 3;
    eFRF FRF : 1;
    eFWF FWF : 1;
    eFEF FEF : 1;
    eSEF SEF : 1;
    eWSF WSF : 1;
    uint32_t _reserved_2 : 3;
    eSR SR : 1;
    eFR FR : 1;
    uint32_t _reserved_3 : 2;
    eBCE BCE : 1;
    eDBGE DBGE : 1;
    eSTOPE STOPE : 1;
    eTE TE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR &Instance() { return *reinterpret_cast<volatile TCSR*>(0x40404008); }
};

// Transmit Configuration 1
//
union TCR1 {
  
  // Bit field definition.
  struct {
    uint32_t TFW : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR1 &Instance() { return *reinterpret_cast<volatile TCR1*>(0x4040400C); }
};

// Transmit Configuration 2
//
union TCR2 {
  
  enum class eBYP : uint32_t {
    eDISABLE = 0, // Internal bit clock is generated from bit clock divider.
    eENABLE = 1, // Internal bit clock is divide by one of the audio master clock.
  };
  
  enum class eBCD : uint32_t {
    eEXT_IN_SLAVE = 0, // Bit clock is generated externally in Slave mode.
    eINT_IN_MASTER = 1, // Bit clock is generated internally in Master mode.
  };
  
  enum class eBCP : uint32_t {
    eACTIVE_HIGH = 0, // Bit clock is active high with drive outputs on rising edge and sample inputs on falling edge.
    eACTIVE_LOW = 1, // Bit clock is active low with drive outputs on falling edge and sample inputs on rising edge.
  };
  
  enum class eMSEL : uint32_t {
    eBUS_CLOCK = 0, // Bus Clock selected.
    eMCLK1 = 1, // Master Clock (MCLK) 1 option selected.
    eMCLK2 = 2, // Master Clock (MCLK) 2 option selected.
    eMCLK3 = 3, // Master Clock (MCLK) 3 option selected.
  };
  
  enum class eBCI : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // Internal logic is clocked as if bit clock was externally generated.
  };
  
  enum class eBCS : uint32_t {
    eDISABLE = 0, // Use the normal bit clock source.
    eENABLE = 1, // Swap the bit clock source.
  };
  
  enum class eSYNC : uint32_t {
    eASYNC = 0, // Asynchronous mode.
    eSYNC_W_RX = 1, // Synchronous with receiver.
  };
  
  // Bit field definition.
  struct {
    uint32_t DIV : 8;
    uint32_t _reserved_0 : 15;
    eBYP BYP : 1;
    eBCD BCD : 1;
    eBCP BCP : 1;
    eMSEL MSEL : 2;
    eBCI BCI : 1;
    eBCS BCS : 1;
    eSYNC SYNC : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR2 &Instance() { return *reinterpret_cast<volatile TCR2*>(0x40404010); }
};

// Transmit Configuration 3
//
union TCR3 {
  
  // Bit field definition.
  struct {
    uint32_t WDFL : 5;
    uint32_t _reserved_0 : 11;
    uint32_t TCE : 4;
    uint32_t _reserved_1 : 4;
    uint32_t CFR : 4;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR3 &Instance() { return *reinterpret_cast<volatile TCR3*>(0x40404014); }
};

// Transmit Configuration 4
//
union TCR4 {
  
  enum class eFSD : uint32_t {
    eEXT_IN_SLAVE_MODE = 0, // Frame sync is generated externally in Slave mode.
    eINT_IN_MASTER_MODE = 1, // Frame sync is generated internally in Master mode.
  };
  
  enum class eFSP : uint32_t {
    eACTIVE_HIGH = 0, // Frame sync is active high.
    eACTIVE_LOW = 1, // Frame sync is active low.
  };
  
  enum class eONDEM : uint32_t {
    eCONTINUOUS_FRAME_SYNC = 0, // Internal frame sync is generated continuously.
    eON_DEMAND_FRAME_SYNC = 1, // Internal frame sync is generated when the FIFO warning flag is clear.
  };
  
  enum class eFSE : uint32_t {
    eDISABLE = 0, // Frame sync asserts with the first bit of the frame.
    eENABLE = 1, // Frame sync asserts one bit before the first bit of the frame.
  };
  
  enum class eMF : uint32_t {
    eDISABLE = 0, // LSB is transmitted first.
    eENABLE = 1, // MSB is transmitted first.
  };
  
  enum class eCHMOD : uint32_t {
    eTDM_MODE = 0, // TDM mode, transmit data pins are tri-stated when slots are masked or channels are disabled.
    eOUTPUT_MODE = 1, // Output mode, transmit data pins are never tri-stated and will output zero when slots are masked or channels are disabled.
  };
  
  enum class eFPACK : uint32_t {
    eDISABLED = 0, // FIFO packing is disabled.
    eEIGHT_BIT_FIFO_PACKING = 2, // 8-bit FIFO packing is enabled.
    eSIXTEEN_BIT_FIFO_PACKING = 3, // 16-bit FIFO packing is enabled.
  };
  
  enum class eFCOMB : uint32_t {
    eDISABLED = 0, // FIFO combine mode disabled.
    eENABLED_ON_FIFO_READS = 1, // FIFO combine mode enabled on FIFO reads (from transmit shift registers).
    eENABLED_ON_FIFO_WRITES = 2, // FIFO combine mode enabled on FIFO writes (by software).
    eENABLED_ON_FIFO_READS_WRITES = 3, // FIFO combine mode enabled on FIFO reads (from transmit shift registers) and writes (by software).
  };
  
  enum class eFCONT : uint32_t {
    eDISABLE = 0, // On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
    eENABLE = 1, // On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
  };
  
  // Bit field definition.
  struct {
    eFSD FSD : 1;
    eFSP FSP : 1;
    eONDEM ONDEM : 1;
    eFSE FSE : 1;
    eMF MF : 1;
    eCHMOD CHMOD : 1;
    uint32_t _reserved_0 : 2;
    uint32_t SYWD : 5;
    uint32_t _reserved_1 : 3;
    uint32_t FRSZ : 5;
    uint32_t _reserved_2 : 3;
    eFPACK FPACK : 2;
    eFCOMB FCOMB : 2;
    eFCONT FCONT : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR4 &Instance() { return *reinterpret_cast<volatile TCR4*>(0x40404018); }
};

// Transmit Configuration 5
//
union TCR5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    uint32_t FBT : 5;
    uint32_t _reserved_1 : 3;
    uint32_t W0W : 5;
    uint32_t _reserved_2 : 3;
    uint32_t WNW : 5;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR5 &Instance() { return *reinterpret_cast<volatile TCR5*>(0x4040401C); }
};

// Transmit Data
//
union TDR[0] {
  
  // Bit field definition.
  struct {
    uint32_t TDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDR[0] &Instance() { return *reinterpret_cast<volatile TDR[0]*>(0x40404020); }
};
// Transmit Data
//
union TDR[1] {
  
  // Bit field definition.
  struct {
    uint32_t TDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDR[1] &Instance() { return *reinterpret_cast<volatile TDR[1]*>(0x40404024); }
};
// Transmit Data
//
union TDR[2] {
  
  // Bit field definition.
  struct {
    uint32_t TDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDR[2] &Instance() { return *reinterpret_cast<volatile TDR[2]*>(0x40404028); }
};
// Transmit Data
//
union TDR[3] {
  
  // Bit field definition.
  struct {
    uint32_t TDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDR[3] &Instance() { return *reinterpret_cast<volatile TDR[3]*>(0x4040402C); }
};

// Transmit FIFO
//
union TFR[0] {
  
  enum class eWCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO writes and this FIFO will be written on the next FIFO write.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 10;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 9;
    eWCP WCP : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFR[0] &Instance() { return *reinterpret_cast<volatile TFR[0]*>(0x40404040); }
};
// Transmit FIFO
//
union TFR[1] {
  
  enum class eWCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO writes and this FIFO will be written on the next FIFO write.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 10;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 9;
    eWCP WCP : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFR[1] &Instance() { return *reinterpret_cast<volatile TFR[1]*>(0x40404044); }
};
// Transmit FIFO
//
union TFR[2] {
  
  enum class eWCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO writes and this FIFO will be written on the next FIFO write.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 10;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 9;
    eWCP WCP : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFR[2] &Instance() { return *reinterpret_cast<volatile TFR[2]*>(0x40404048); }
};
// Transmit FIFO
//
union TFR[3] {
  
  enum class eWCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO writes and this FIFO will be written on the next FIFO write.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 10;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 9;
    eWCP WCP : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFR[3] &Instance() { return *reinterpret_cast<volatile TFR[3]*>(0x4040404C); }
};

// Transmit Mask
//
union TMR {
  
  enum class eTWM : uint32_t {
    eWORD_N_ENABLED = 0, // Word N is enabled.
    eWORD_N_MASKED = 1, // Word N is masked. The transmit data pins are tri-stated or drive zero when masked.
  };
  
  // Bit field definition.
  struct {
    eTWM TWM : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TMR &Instance() { return *reinterpret_cast<volatile TMR*>(0x40404060); }
};

// Receive Control
//
union RCSR {
  
  enum class eFRDE : uint32_t {
    eDISABLE = 0, // Disables the DMA request.
    eENABLE = 1, // Enables the DMA request.
  };
  
  enum class eFWDE : uint32_t {
    eDISABLE = 0, // Disables the DMA request.
    eENABLE = 1, // Enables the DMA request.
  };
  
  enum class eFRIE : uint32_t {
    eDISABLE = 0, // Disables the interrupt.
    eENABLE = 1, // Enables the interrupt.
  };
  
  enum class eFWIE : uint32_t {
    eDISABLE = 0, // Disables the interrupt.
    eENABLE = 1, // Enables the interrupt.
  };
  
  enum class eFEIE : uint32_t {
    eDISABLE = 0, // Disables the interrupt.
    eENABLE = 1, // Enables the interrupt.
  };
  
  enum class eSEIE : uint32_t {
    eDISABLE = 0, // Disables interrupt.
    eENABLE = 1, // Enables interrupt.
  };
  
  enum class eWSIE : uint32_t {
    eDISABLE = 0, // Disables interrupt.
    eENABLE = 1, // Enables interrupt.
  };
  
  enum class eFRF : uint32_t {
    eBELOW_WATERMARK = 0, // Receive FIFO watermark not reached.
    eWATERMARK_REACHED = 1, // Receive FIFO watermark has been reached.
  };
  
  enum class eFWF : uint32_t {
    eNOT_FULL = 0, // No enabled receive FIFO is full.
    eFULL = 1, // Enabled receive FIFO is full.
  };
  
  enum class eFEF : uint32_t {
    eNO_FLAG = 0, // Receive overflow not detected.
    eFLAG = 1, // Receive overflow detected.
  };
  
  enum class eSEF : uint32_t {
    eNO_FLAG = 0, // Sync error not detected.
    eFLAG = 1, // Frame sync error detected.
  };
  
  enum class eWSF : uint32_t {
    eNO_FLAG = 0, // Start of word not detected.
    eFLAG = 1, // Start of word detected.
  };
  
  enum class eSR : uint32_t {
    eNO_EFFECT = 0, // No effect.
    eSW_RESET = 1, // Software reset.
  };
  
  enum class eFR : uint32_t {
    eNO_EFFECT = 0, // No effect.
    eFIFO_RESET = 1, // FIFO reset.
  };
  
  enum class eBCE : uint32_t {
    eDISABLE = 0, // Receive bit clock is disabled.
    eENABLE = 1, // Receive bit clock is enabled.
  };
  
  enum class eDBGE : uint32_t {
    eDISABLE = 0, // Receiver is disabled in Debug mode, after completing the current frame.
    eENABLE = 1, // Receiver is enabled in Debug mode.
  };
  
  enum class eSTOPE : uint32_t {
    eDISABLE = 0, // Receiver disabled in Stop mode.
    eENABLE = 1, // Receiver enabled in Stop mode.
  };
  
  enum class eRE : uint32_t {
    eDISABLE = 0, // Receiver is disabled.
    eENABLE = 1, // Receiver is enabled, or receiver has been disabled and has not yet reached end of frame.
  };
  
  // Bit field definition.
  struct {
    eFRDE FRDE : 1;
    eFWDE FWDE : 1;
    uint32_t _reserved_0 : 6;
    eFRIE FRIE : 1;
    eFWIE FWIE : 1;
    eFEIE FEIE : 1;
    eSEIE SEIE : 1;
    eWSIE WSIE : 1;
    uint32_t _reserved_1 : 3;
    eFRF FRF : 1;
    eFWF FWF : 1;
    eFEF FEF : 1;
    eSEF SEF : 1;
    eWSF WSF : 1;
    uint32_t _reserved_2 : 3;
    eSR SR : 1;
    eFR FR : 1;
    uint32_t _reserved_3 : 2;
    eBCE BCE : 1;
    eDBGE DBGE : 1;
    eSTOPE STOPE : 1;
    eRE RE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCSR &Instance() { return *reinterpret_cast<volatile RCSR*>(0x40404088); }
};

// Receive Configuration 1
//
union RCR1 {
  
  // Bit field definition.
  struct {
    uint32_t RFW : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR1 &Instance() { return *reinterpret_cast<volatile RCR1*>(0x4040408C); }
};

// Receive Configuration 2
//
union RCR2 {
  
  enum class eBYP : uint32_t {
    eDISABLE = 0, // Internal bit clock is generated from bit clock divider.
    eENABLE = 1, // Internal bit clock is divide by one of the audio master clock.
  };
  
  enum class eBCD : uint32_t {
    eEXT_SLAVE_MODE = 0, // Bit clock is generated externally in Slave mode.
    eINT_MASTER_MODE = 1, // Bit clock is generated internally in Master mode.
  };
  
  enum class eBCP : uint32_t {
    eACTIVE_HIGH = 0, // Bit Clock is active high with drive outputs on rising edge and sample inputs on falling edge.
    eACTIVE_LOW = 1, // Bit Clock is active low with drive outputs on falling edge and sample inputs on rising edge.
  };
  
  enum class eMSEL : uint32_t {
    eBUS_CLOCK = 0, // Bus Clock selected.
    eMCLK1 = 1, // Master Clock (MCLK) 1 option selected.
    eMCLK2 = 2, // Master Clock (MCLK) 2 option selected.
    eMCLK3 = 3, // Master Clock (MCLK) 3 option selected.
  };
  
  enum class eBCI : uint32_t {
    eNO_EFFECT = 0, // No effect.
    eCLOCKED_AS_IF_EXT_GENERATED = 1, // Internal logic is clocked as if bit clock was externally generated.
  };
  
  enum class eBCS : uint32_t {
    eNORMAL = 0, // Use the normal bit clock source.
    eSWAP_BIT_CLK_SOURCE = 1, // Swap the bit clock source.
  };
  
  enum class eSYNC : uint32_t {
    eAsync = 0, // Asynchronous mode.
    eSYNC_W_TX = 1, // Synchronous with transmitter.
  };
  
  // Bit field definition.
  struct {
    uint32_t DIV : 8;
    uint32_t _reserved_0 : 15;
    eBYP BYP : 1;
    eBCD BCD : 1;
    eBCP BCP : 1;
    eMSEL MSEL : 2;
    eBCI BCI : 1;
    eBCS BCS : 1;
    eSYNC SYNC : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR2 &Instance() { return *reinterpret_cast<volatile RCR2*>(0x40404090); }
};

// Receive Configuration 3
//
union RCR3 {
  
  // Bit field definition.
  struct {
    uint32_t WDFL : 5;
    uint32_t _reserved_0 : 11;
    uint32_t RCE : 4;
    uint32_t _reserved_1 : 4;
    uint32_t CFR : 4;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR3 &Instance() { return *reinterpret_cast<volatile RCR3*>(0x40404094); }
};

// Receive Configuration 4
//
union RCR4 {
  
  enum class eFSD : uint32_t {
    eEXT_SLAVE_MODE = 0, // Frame Sync is generated externally in Slave mode.
    eINT_MASTER_MODE = 1, // Frame Sync is generated internally in Master mode.
  };
  
  enum class eFSP : uint32_t {
    eACTIVE_HIGH = 0, // Frame sync is active high.
    eACTIVE_LOW = 1, // Frame sync is active low.
  };
  
  enum class eONDEM : uint32_t {
    eDISABLE = 0, // Internal frame sync is generated continuously.
    eENABLE = 1, // Internal frame sync is generated when the FIFO warning flag is clear.
  };
  
  enum class eFSE : uint32_t {
    eDISABLE = 0, // Frame sync asserts with the first bit of the frame.
    eENABLE = 1, // Frame sync asserts one bit before the first bit of the frame.
  };
  
  enum class eMF : uint32_t {
    eDISABLE = 0, // LSB is received first.
    eENABLE = 1, // MSB is received first.
  };
  
  enum class eFPACK : uint32_t {
    eDISABLED = 0, // FIFO packing is disabled
    eEIGHT_BIT_PACKING = 2, // 8-bit FIFO packing is enabled
    eSIXTEEN_BIT_PACKING = 3, // 16-bit FIFO packing is enabled
  };
  
  enum class eFCOMB : uint32_t {
    eDISABLED = 0, // FIFO combine mode disabled.
    eENA_ON_FIFO_WRITES = 1, // FIFO combine mode enabled on FIFO writes (from receive shift registers).
    eENA_ON_FIFO_READS = 2, // FIFO combine mode enabled on FIFO reads (by software).
    eENA_ON_FIFO_WRITES_READS = 3, // FIFO combine mode enabled on FIFO writes (from receive shift registers) and reads (by software).
  };
  
  enum class eFCONT : uint32_t {
    eDISABLE = 0, // On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
    eENABLE = 1, // On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
  };
  
  // Bit field definition.
  struct {
    eFSD FSD : 1;
    eFSP FSP : 1;
    eONDEM ONDEM : 1;
    eFSE FSE : 1;
    eMF MF : 1;
    uint32_t _reserved_0 : 3;
    uint32_t SYWD : 5;
    uint32_t _reserved_1 : 3;
    uint32_t FRSZ : 5;
    uint32_t _reserved_2 : 3;
    eFPACK FPACK : 2;
    eFCOMB FCOMB : 2;
    eFCONT FCONT : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR4 &Instance() { return *reinterpret_cast<volatile RCR4*>(0x40404098); }
};

// Receive Configuration 5
//
union RCR5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    uint32_t FBT : 5;
    uint32_t _reserved_1 : 3;
    uint32_t W0W : 5;
    uint32_t _reserved_2 : 3;
    uint32_t WNW : 5;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR5 &Instance() { return *reinterpret_cast<volatile RCR5*>(0x4040409C); }
};

// Receive Data
//
union RDR[0] {
  
  // Bit field definition.
  struct {
    uint32_t RDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDR[0] &Instance() { return *reinterpret_cast<volatile RDR[0]*>(0x404040A0); }
};
// Receive Data
//
union RDR[1] {
  
  // Bit field definition.
  struct {
    uint32_t RDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDR[1] &Instance() { return *reinterpret_cast<volatile RDR[1]*>(0x404040A4); }
};
// Receive Data
//
union RDR[2] {
  
  // Bit field definition.
  struct {
    uint32_t RDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDR[2] &Instance() { return *reinterpret_cast<volatile RDR[2]*>(0x404040A8); }
};
// Receive Data
//
union RDR[3] {
  
  // Bit field definition.
  struct {
    uint32_t RDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDR[3] &Instance() { return *reinterpret_cast<volatile RDR[3]*>(0x404040AC); }
};

// Receive FIFO
//
union RFR[0] {
  
  enum class eRCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO reads and this FIFO will be read on the next FIFO read.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 9;
    eRCP RCP : 1;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFR[0] &Instance() { return *reinterpret_cast<volatile RFR[0]*>(0x404040C0); }
};
// Receive FIFO
//
union RFR[1] {
  
  enum class eRCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO reads and this FIFO will be read on the next FIFO read.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 9;
    eRCP RCP : 1;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFR[1] &Instance() { return *reinterpret_cast<volatile RFR[1]*>(0x404040C4); }
};
// Receive FIFO
//
union RFR[2] {
  
  enum class eRCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO reads and this FIFO will be read on the next FIFO read.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 9;
    eRCP RCP : 1;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFR[2] &Instance() { return *reinterpret_cast<volatile RFR[2]*>(0x404040C8); }
};
// Receive FIFO
//
union RFR[3] {
  
  enum class eRCP : uint32_t {
    eDISABLE = 0, // No effect.
    eENABLE = 1, // FIFO combine is enabled for FIFO reads and this FIFO will be read on the next FIFO read.
  };
  
  // Bit field definition.
  struct {
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 9;
    eRCP RCP : 1;
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFR[3] &Instance() { return *reinterpret_cast<volatile RFR[3]*>(0x404040CC); }
};

// Receive Mask
//
union RMR {
  
  enum class eRWM : uint32_t {
    eWORD_N_ENABLED = 0, // Word N is enabled.
    eWORD_N_MASKED = 1, // Word N is masked.
  };
  
  // Bit field definition.
  struct {
    eRWM RWM : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMR &Instance() { return *reinterpret_cast<volatile RMR*>(0x404040E0); }
};


} // namespace nSAI1