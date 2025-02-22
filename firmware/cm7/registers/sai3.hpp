#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SAI
namespace nSAI3 {


// Version ID
union VERID {
  
  // Feature Specification Number
  enum class eFEATURE : uint32_t {
    // Standard feature set.
    eSTD = 0,
  };
  
  // Bit field definition.
  struct {
    // read-only - Feature Specification Number
    eFEATURE FEATURE : 16;
    // read-only - Minor Version Number
    uint32_t MINOR : 8;
    // read-only - Major Version Number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x03010000; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x4040C000); }
};

// Parameter
union PARAM {
  
  // Bit field definition.
  struct {
    // read-only - Number of Datalines
    uint32_t DATALINE : 4;
    uint32_t _reserved_0 : 4;
    // read-only - FIFO Size
    uint32_t FIFO : 4;
    uint32_t _reserved_1 : 4;
    // read-only - Frame Size
    uint32_t FRAME : 4;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00050501; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x4040C004); }
};

// Transmit Control
union TCSR {
  
  // FIFO Request DMA Enable
  enum class eFRDE : uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };
  
  // FIFO Warning DMA Enable
  enum class eFWDE : uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };
  
  // FIFO Request Interrupt Enable
  enum class eFRIE : uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };
  
  // FIFO Warning Interrupt Enable
  enum class eFWIE : uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };
  
  // FIFO Error Interrupt Enable
  enum class eFEIE : uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };
  
  // Sync Error Interrupt Enable
  enum class eSEIE : uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };
  
  // Word Start Interrupt Enable
  enum class eWSIE : uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };
  
  // FIFO Request Flag
  enum class eFRF : uint32_t {
    // Transmit FIFO watermark has not been reached.
    eNO_FLAG = 0,
    // Transmit FIFO watermark has been reached.
    eFLAG = 1,
  };
  
  // FIFO Warning Flag
  enum class eFWF : uint32_t {
    // No enabled transmit FIFO is empty.
    eDISABLE = 0,
    // Enabled transmit FIFO is empty.
    eENABLE = 1,
  };
  
  // FIFO Error Flag
  enum class eFEF : uint32_t {
    // Transmit underrun not detected.
    eNO_FLAG = 0,
    // Transmit underrun detected.
    eFLAG = 1,
  };
  
  // Sync Error Flag
  enum class eSEF : uint32_t {
    // Sync error not detected.
    eNO_FLAG = 0,
    // Frame sync error detected.
    eFLAG = 1,
  };
  
  // Word Start Flag
  enum class eWSF : uint32_t {
    // Start of word not detected.
    eNO_FLAG = 0,
    // Start of word detected.
    eFLAG = 1,
  };
  
  // Software Reset
  enum class eSR : uint32_t {
    // No effect.
    eDISABLE = 0,
    // Software reset.
    eENABLE = 1,
  };
  
  // FIFO Reset
  enum class eFR : uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // FIFO reset.
    eRESET = 1,
  };
  
  // Bit Clock Enable
  enum class eBCE : uint32_t {
    // Transmit bit clock is disabled.
    eDISABLE = 0,
    // Transmit bit clock is enabled.
    eENABLE = 1,
  };
  
  // Debug Enable
  enum class eDBGE : uint32_t {
    // Transmitter is disabled in Debug mode, after completing the current frame.
    eDISABLE = 0,
    // Transmitter is enabled in Debug mode.
    eENABLE = 1,
  };
  
  // Stop Enable
  enum class eSTOPE : uint32_t {
    // Transmitter disabled in Stop mode.
    eDISABLE = 0,
    // Transmitter enabled in Stop mode.
    eENABLE = 1,
  };
  
  // Transmitter Enable
  enum class eTE : uint32_t {
    // Transmitter is disabled.
    eDISABLE = 0,
    // Transmitter is enabled, or transmitter has been disabled and has not yet reached end of frame.
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - FIFO Request DMA Enable
    eFRDE FRDE : 1;
    // read-write - FIFO Warning DMA Enable
    eFWDE FWDE : 1;
    uint32_t _reserved_0 : 6;
    // read-write - FIFO Request Interrupt Enable
    eFRIE FRIE : 1;
    // read-write - FIFO Warning Interrupt Enable
    eFWIE FWIE : 1;
    // read-write - FIFO Error Interrupt Enable
    eFEIE FEIE : 1;
    // read-write - Sync Error Interrupt Enable
    eSEIE SEIE : 1;
    // read-write - Word Start Interrupt Enable
    eWSIE WSIE : 1;
    uint32_t _reserved_1 : 3;
    // read-only - FIFO Request Flag
    eFRF FRF : 1;
    // read-only - FIFO Warning Flag
    eFWF FWF : 1;
    // read-write - FIFO Error Flag
    eFEF FEF : 1;
    // read-write - Sync Error Flag
    eSEF SEF : 1;
    // read-write - Word Start Flag
    eWSF WSF : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Software Reset
    eSR SR : 1;
    // read-write - FIFO Reset
    eFR FR : 1;
    uint32_t _reserved_3 : 2;
    // read-write - Bit Clock Enable
    eBCE BCE : 1;
    // read-write - Debug Enable
    eDBGE DBGE : 1;
    // read-write - Stop Enable
    eSTOPE STOPE : 1;
    // read-write - Transmitter Enable
    eTE TE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCSR &Instance() { return *reinterpret_cast<volatile TCSR*>(0x4040C008); }
};

// Transmit Configuration 1
union TCR1 {
  
  // Bit field definition.
  struct {
    // read-write - Transmit FIFO Watermark
    uint32_t TFW : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR1 &Instance() { return *reinterpret_cast<volatile TCR1*>(0x4040C00C); }
};

// Transmit Configuration 2
union TCR2 {
  
  // Bit Clock Bypass
  enum class eBYP : uint32_t {
    // Internal bit clock is generated from bit clock divider.
    eDISABLE = 0,
    // Internal bit clock is divide by one of the audio master clock.
    eENABLE = 1,
  };
  
  // Bit Clock Direction
  enum class eBCD : uint32_t {
    // Bit clock is generated externally in Slave mode.
    eEXT_IN_SLAVE = 0,
    // Bit clock is generated internally in Master mode.
    eINT_IN_MASTER = 1,
  };
  
  // Bit Clock Polarity
  enum class eBCP : uint32_t {
    // Bit clock is active high with drive outputs on rising edge and sample inputs on falling edge.
    eACTIVE_HIGH = 0,
    // Bit clock is active low with drive outputs on falling edge and sample inputs on rising edge.
    eACTIVE_LOW = 1,
  };
  
  // MCLK Select
  enum class eMSEL : uint32_t {
    // Bus Clock selected.
    eBUS_CLOCK = 0,
    // Master Clock (MCLK) 1 option selected.
    eMCLK1 = 1,
    // Master Clock (MCLK) 2 option selected.
    eMCLK2 = 2,
    // Master Clock (MCLK) 3 option selected.
    eMCLK3 = 3,
  };
  
  // Bit Clock Input
  enum class eBCI : uint32_t {
    // No effect.
    eDISABLE = 0,
    // Internal logic is clocked as if bit clock was externally generated.
    eENABLE = 1,
  };
  
  // Bit Clock Swap
  enum class eBCS : uint32_t {
    // Use the normal bit clock source.
    eDISABLE = 0,
    // Swap the bit clock source.
    eENABLE = 1,
  };
  
  // Synchronous Mode
  enum class eSYNC : uint32_t {
    // Asynchronous mode.
    eASYNC = 0,
    // Synchronous with receiver.
    eSYNC_W_RX = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Bit Clock Divide
    uint32_t DIV : 8;
    uint32_t _reserved_0 : 15;
    // read-write - Bit Clock Bypass
    eBYP BYP : 1;
    // read-write - Bit Clock Direction
    eBCD BCD : 1;
    // read-write - Bit Clock Polarity
    eBCP BCP : 1;
    // read-write - MCLK Select
    eMSEL MSEL : 2;
    // read-write - Bit Clock Input
    eBCI BCI : 1;
    // read-write - Bit Clock Swap
    eBCS BCS : 1;
    // read-write - Synchronous Mode
    eSYNC SYNC : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR2 &Instance() { return *reinterpret_cast<volatile TCR2*>(0x4040C010); }
};

// Transmit Configuration 3
union TCR3 {
  
  // Bit field definition.
  struct {
    // read-write - Word Flag Configuration
    uint32_t WDFL : 5;
    uint32_t _reserved_0 : 11;
    // read-write - Transmit Channel Enable
    uint32_t TCE : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR3 &Instance() { return *reinterpret_cast<volatile TCR3*>(0x4040C014); }
};

// Transmit Configuration 4
union TCR4 {
  
  // Frame Sync Direction
  enum class eFSD : uint32_t {
    // Frame sync is generated externally in Slave mode.
    eEXT_IN_SLAVE_MODE = 0,
    // Frame sync is generated internally in Master mode.
    eINT_IN_MASTER_MODE = 1,
  };
  
  // Frame Sync Polarity
  enum class eFSP : uint32_t {
    // Frame sync is active high.
    eACTIVE_HIGH = 0,
    // Frame sync is active low.
    eACTIVE_LOW = 1,
  };
  
  // On Demand Mode
  enum class eONDEM : uint32_t {
    // Internal frame sync is generated continuously.
    eCONTINUOUS_FRAME_SYNC = 0,
    // Internal frame sync is generated when the FIFO warning flag is clear.
    eON_DEMAND_FRAME_SYNC = 1,
  };
  
  // Frame Sync Early
  enum class eFSE : uint32_t {
    // Frame sync asserts with the first bit of the frame.
    eDISABLE = 0,
    // Frame sync asserts one bit before the first bit of the frame.
    eENABLE = 1,
  };
  
  // MSB First
  enum class eMF : uint32_t {
    // LSB is transmitted first.
    eDISABLE = 0,
    // MSB is transmitted first.
    eENABLE = 1,
  };
  
  // Channel Mode
  enum class eCHMOD : uint32_t {
    // TDM mode, transmit data pins are tri-stated when slots are masked or channels are disabled.
    eTDM_MODE = 0,
    // Output mode, transmit data pins are never tri-stated and will output zero when slots are masked or channels are disabled.
    eOUTPUT_MODE = 1,
  };
  
  // FIFO Packing Mode
  enum class eFPACK : uint32_t {
    // FIFO packing is disabled.
    eDISABLED = 0,
    // 8-bit FIFO packing is enabled.
    eEIGHT_BIT_FIFO_PACKING = 2,
    // 16-bit FIFO packing is enabled.
    eSIXTEEN_BIT_FIFO_PACKING = 3,
  };
  
  // FIFO Continue on Error
  enum class eFCONT : uint32_t {
    // On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
    eDISABLE = 0,
    // On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Frame Sync Direction
    eFSD FSD : 1;
    // read-write - Frame Sync Polarity
    eFSP FSP : 1;
    // read-write - On Demand Mode
    eONDEM ONDEM : 1;
    // read-write - Frame Sync Early
    eFSE FSE : 1;
    // read-write - MSB First
    eMF MF : 1;
    // read-write - Channel Mode
    eCHMOD CHMOD : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Sync Width
    uint32_t SYWD : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Frame size
    uint32_t FRSZ : 5;
    uint32_t _reserved_2 : 3;
    // read-write - FIFO Packing Mode
    eFPACK FPACK : 2;
    uint32_t _reserved_3 : 2;
    // read-write - FIFO Continue on Error
    eFCONT FCONT : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR4 &Instance() { return *reinterpret_cast<volatile TCR4*>(0x4040C018); }
};

// Transmit Configuration 5
union TCR5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - First Bit Shifted
    uint32_t FBT : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Word 0 Width
    uint32_t W0W : 5;
    uint32_t _reserved_2 : 3;
    // read-write - Word N Width
    uint32_t WNW : 5;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCR5 &Instance() { return *reinterpret_cast<volatile TCR5*>(0x4040C01C); }
};

// Transmit Data
union TDR0 {
  
  // Bit field definition.
  struct {
    // read-write - Transmit Data Register
    uint32_t TDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TDR0 &Instance() { return *reinterpret_cast<volatile TDR0*>(0x4040C020); }
};

// Transmit FIFO
union TFR0 {
  
  // Bit field definition.
  struct {
    // read-only - Read FIFO Pointer
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 10;
    // read-only - Write FIFO Pointer
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TFR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TFR0 &Instance() { return *reinterpret_cast<volatile TFR0*>(0x4040C040); }
};

// Transmit Mask
union TMR {
  
  // Transmit Word Mask
  enum class eTWM : uint32_t {
    // Word N is enabled.
    eWORD_N_ENABLED = 0,
    // Word N is masked. The transmit data pins are tri-stated or drive zero when masked.
    eWORD_N_MASKED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Transmit Word Mask
    eTWM TWM : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TMR &Instance() { return *reinterpret_cast<volatile TMR*>(0x4040C060); }
};

// Receive Control
union RCSR {
  
  // FIFO Request DMA Enable
  enum class eFRDE : uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };
  
  // FIFO Warning DMA Enable
  enum class eFWDE : uint32_t {
    // Disables the DMA request.
    eDISABLE = 0,
    // Enables the DMA request.
    eENABLE = 1,
  };
  
  // FIFO Request Interrupt Enable
  enum class eFRIE : uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };
  
  // FIFO Warning Interrupt Enable
  enum class eFWIE : uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };
  
  // FIFO Error Interrupt Enable
  enum class eFEIE : uint32_t {
    // Disables the interrupt.
    eDISABLE = 0,
    // Enables the interrupt.
    eENABLE = 1,
  };
  
  // Sync Error Interrupt Enable
  enum class eSEIE : uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };
  
  // Word Start Interrupt Enable
  enum class eWSIE : uint32_t {
    // Disables interrupt.
    eDISABLE = 0,
    // Enables interrupt.
    eENABLE = 1,
  };
  
  // FIFO Request Flag
  enum class eFRF : uint32_t {
    // Receive FIFO watermark not reached.
    eBELOW_WATERMARK = 0,
    // Receive FIFO watermark has been reached.
    eWATERMARK_REACHED = 1,
  };
  
  // FIFO Warning Flag
  enum class eFWF : uint32_t {
    // No enabled receive FIFO is full.
    eNOT_FULL = 0,
    // Enabled receive FIFO is full.
    eFULL = 1,
  };
  
  // FIFO Error Flag
  enum class eFEF : uint32_t {
    // Receive overflow not detected.
    eNO_FLAG = 0,
    // Receive overflow detected.
    eFLAG = 1,
  };
  
  // Sync Error Flag
  enum class eSEF : uint32_t {
    // Sync error not detected.
    eNO_FLAG = 0,
    // Frame sync error detected.
    eFLAG = 1,
  };
  
  // Word Start Flag
  enum class eWSF : uint32_t {
    // Start of word not detected.
    eNO_FLAG = 0,
    // Start of word detected.
    eFLAG = 1,
  };
  
  // Software Reset
  enum class eSR : uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // Software reset.
    eSW_RESET = 1,
  };
  
  // FIFO Reset
  enum class eFR : uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // FIFO reset.
    eFIFO_RESET = 1,
  };
  
  // Bit Clock Enable
  enum class eBCE : uint32_t {
    // Receive bit clock is disabled.
    eDISABLE = 0,
    // Receive bit clock is enabled.
    eENABLE = 1,
  };
  
  // Debug Enable
  enum class eDBGE : uint32_t {
    // Receiver is disabled in Debug mode, after completing the current frame.
    eDISABLE = 0,
    // Receiver is enabled in Debug mode.
    eENABLE = 1,
  };
  
  // Stop Enable
  enum class eSTOPE : uint32_t {
    // Receiver disabled in Stop mode.
    eDISABLE = 0,
    // Receiver enabled in Stop mode.
    eENABLE = 1,
  };
  
  // Receiver Enable
  enum class eRE : uint32_t {
    // Receiver is disabled.
    eDISABLE = 0,
    // Receiver is enabled, or receiver has been disabled and has not yet reached end of frame.
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - FIFO Request DMA Enable
    eFRDE FRDE : 1;
    // read-write - FIFO Warning DMA Enable
    eFWDE FWDE : 1;
    uint32_t _reserved_0 : 6;
    // read-write - FIFO Request Interrupt Enable
    eFRIE FRIE : 1;
    // read-write - FIFO Warning Interrupt Enable
    eFWIE FWIE : 1;
    // read-write - FIFO Error Interrupt Enable
    eFEIE FEIE : 1;
    // read-write - Sync Error Interrupt Enable
    eSEIE SEIE : 1;
    // read-write - Word Start Interrupt Enable
    eWSIE WSIE : 1;
    uint32_t _reserved_1 : 3;
    // read-only - FIFO Request Flag
    eFRF FRF : 1;
    // read-only - FIFO Warning Flag
    eFWF FWF : 1;
    // read-write - FIFO Error Flag
    eFEF FEF : 1;
    // read-write - Sync Error Flag
    eSEF SEF : 1;
    // read-write - Word Start Flag
    eWSF WSF : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Software Reset
    eSR SR : 1;
    // read-write - FIFO Reset
    eFR FR : 1;
    uint32_t _reserved_3 : 2;
    // read-write - Bit Clock Enable
    eBCE BCE : 1;
    // read-write - Debug Enable
    eDBGE DBGE : 1;
    // read-write - Stop Enable
    eSTOPE STOPE : 1;
    // read-write - Receiver Enable
    eRE RE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCSR &Instance() { return *reinterpret_cast<volatile RCSR*>(0x4040C088); }
};

// Receive Configuration 1
union RCR1 {
  
  // Bit field definition.
  struct {
    // read-write - Receive FIFO Watermark
    uint32_t RFW : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR1 &Instance() { return *reinterpret_cast<volatile RCR1*>(0x4040C08C); }
};

// Receive Configuration 2
union RCR2 {
  
  // Bit Clock Bypass
  enum class eBYP : uint32_t {
    // Internal bit clock is generated from bit clock divider.
    eDISABLE = 0,
    // Internal bit clock is divide by one of the audio master clock.
    eENABLE = 1,
  };
  
  // Bit Clock Direction
  enum class eBCD : uint32_t {
    // Bit clock is generated externally in Slave mode.
    eEXT_SLAVE_MODE = 0,
    // Bit clock is generated internally in Master mode.
    eINT_MASTER_MODE = 1,
  };
  
  // Bit Clock Polarity
  enum class eBCP : uint32_t {
    // Bit Clock is active high with drive outputs on rising edge and sample inputs on falling edge.
    eACTIVE_HIGH = 0,
    // Bit Clock is active low with drive outputs on falling edge and sample inputs on rising edge.
    eACTIVE_LOW = 1,
  };
  
  // MCLK Select
  enum class eMSEL : uint32_t {
    // Bus Clock selected.
    eBUS_CLOCK = 0,
    // Master Clock (MCLK) 1 option selected.
    eMCLK1 = 1,
    // Master Clock (MCLK) 2 option selected.
    eMCLK2 = 2,
    // Master Clock (MCLK) 3 option selected.
    eMCLK3 = 3,
  };
  
  // Bit Clock Input
  enum class eBCI : uint32_t {
    // No effect.
    eNO_EFFECT = 0,
    // Internal logic is clocked as if bit clock was externally generated.
    eCLOCKED_AS_IF_EXT_GENERATED = 1,
  };
  
  // Bit Clock Swap
  enum class eBCS : uint32_t {
    // Use the normal bit clock source.
    eNORMAL = 0,
    // Swap the bit clock source.
    eSWAP_BIT_CLK_SOURCE = 1,
  };
  
  // Synchronous Mode
  enum class eSYNC : uint32_t {
    // Asynchronous mode.
    eAsync = 0,
    // Synchronous with transmitter.
    eSYNC_W_TX = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Bit Clock Divide
    uint32_t DIV : 8;
    uint32_t _reserved_0 : 15;
    // read-write - Bit Clock Bypass
    eBYP BYP : 1;
    // read-write - Bit Clock Direction
    eBCD BCD : 1;
    // read-write - Bit Clock Polarity
    eBCP BCP : 1;
    // read-write - MCLK Select
    eMSEL MSEL : 2;
    // read-write - Bit Clock Input
    eBCI BCI : 1;
    // read-write - Bit Clock Swap
    eBCS BCS : 1;
    // read-write - Synchronous Mode
    eSYNC SYNC : 1;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR2 &Instance() { return *reinterpret_cast<volatile RCR2*>(0x4040C090); }
};

// Receive Configuration 3
union RCR3 {
  
  // Bit field definition.
  struct {
    // read-write - Word Flag Configuration
    uint32_t WDFL : 5;
    uint32_t _reserved_0 : 11;
    // read-write - Receive Channel Enable
    uint32_t RCE : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR3 &Instance() { return *reinterpret_cast<volatile RCR3*>(0x4040C094); }
};

// Receive Configuration 4
union RCR4 {
  
  // Frame Sync Direction
  enum class eFSD : uint32_t {
    // Frame Sync is generated externally in Slave mode.
    eEXT_SLAVE_MODE = 0,
    // Frame Sync is generated internally in Master mode.
    eINT_MASTER_MODE = 1,
  };
  
  // Frame Sync Polarity
  enum class eFSP : uint32_t {
    // Frame sync is active high.
    eACTIVE_HIGH = 0,
    // Frame sync is active low.
    eACTIVE_LOW = 1,
  };
  
  // On Demand Mode
  enum class eONDEM : uint32_t {
    // Internal frame sync is generated continuously.
    eDISABLE = 0,
    // Internal frame sync is generated when the FIFO warning flag is clear.
    eENABLE = 1,
  };
  
  // Frame Sync Early
  enum class eFSE : uint32_t {
    // Frame sync asserts with the first bit of the frame.
    eDISABLE = 0,
    // Frame sync asserts one bit before the first bit of the frame.
    eENABLE = 1,
  };
  
  // MSB First
  enum class eMF : uint32_t {
    // LSB is received first.
    eDISABLE = 0,
    // MSB is received first.
    eENABLE = 1,
  };
  
  // FIFO Packing Mode
  enum class eFPACK : uint32_t {
    // FIFO packing is disabled
    eDISABLED = 0,
    // 8-bit FIFO packing is enabled
    eEIGHT_BIT_PACKING = 2,
    // 16-bit FIFO packing is enabled
    eSIXTEEN_BIT_PACKING = 3,
  };
  
  // FIFO Continue on Error
  enum class eFCONT : uint32_t {
    // On FIFO error, the SAI will continue from the start of the next frame after the FIFO error flag has been cleared.
    eDISABLE = 0,
    // On FIFO error, the SAI will continue from the same word that caused the FIFO error to set after the FIFO warning flag has been cleared.
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Frame Sync Direction
    eFSD FSD : 1;
    // read-write - Frame Sync Polarity
    eFSP FSP : 1;
    // read-write - On Demand Mode
    eONDEM ONDEM : 1;
    // read-write - Frame Sync Early
    eFSE FSE : 1;
    // read-write - MSB First
    eMF MF : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Sync Width
    uint32_t SYWD : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Frame Size
    uint32_t FRSZ : 5;
    uint32_t _reserved_2 : 3;
    // read-write - FIFO Packing Mode
    eFPACK FPACK : 2;
    uint32_t _reserved_3 : 2;
    // read-write - FIFO Continue on Error
    eFCONT FCONT : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR4 &Instance() { return *reinterpret_cast<volatile RCR4*>(0x4040C098); }
};

// Receive Configuration 5
union RCR5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - First Bit Shifted
    uint32_t FBT : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Word 0 Width
    uint32_t W0W : 5;
    uint32_t _reserved_2 : 3;
    // read-write - Word N Width
    uint32_t WNW : 5;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RCR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RCR5 &Instance() { return *reinterpret_cast<volatile RCR5*>(0x4040C09C); }
};

// Receive Data
union RDR0 {
  
  // Bit field definition.
  struct {
    // read-only - Receive Data Register
    uint32_t RDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDR0 &Instance() { return *reinterpret_cast<volatile RDR0*>(0x4040C0A0); }
};

// Receive FIFO
union RFR0 {
  
  // Bit field definition.
  struct {
    // read-only - Read FIFO Pointer
    uint32_t RFP : 6;
    uint32_t _reserved_0 : 10;
    // read-only - Write FIFO Pointer
    uint32_t WFP : 6;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RFR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RFR0 &Instance() { return *reinterpret_cast<volatile RFR0*>(0x4040C0C0); }
};

// Receive Mask
union RMR {
  
  // Receive Word Mask
  enum class eRWM : uint32_t {
    // Word N is enabled.
    eWORD_N_ENABLED = 0,
    // Word N is masked.
    eWORD_N_MASKED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Receive Word Mask
    eRWM RWM : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RMR &Instance() { return *reinterpret_cast<volatile RMR*>(0x4040C0E0); }
};


} // namespace nSAI3