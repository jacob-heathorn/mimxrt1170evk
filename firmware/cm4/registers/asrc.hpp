#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // ASRC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nASRC {


// ASRC Control Register
//
union ASRCTR {
  
  // Enum definitions.
  enum class eASRCEN : uint32_t {
    edisabled = 0, // operation of ASRC disabled
    eenabled = 1, // operation ASRC is enabled
  };
  enum class eASREA : uint32_t {
    edisabled = 0, // operation of conversion A is disabled
    eenabled = 1, // operation of conversion A is enabled
  };
  enum class eASREB : uint32_t {
    edisabled = 0, // operation of conversion B is disabled
    eenabled = 1, // operation of conversion B is enabled
  };
  enum class eASREC : uint32_t {
    edisabled = 0, // operation of conversion C is disabled
    eenabled = 1, // operation of conversion C is enabled
  };
  enum class eSRST : uint32_t {
    ecleared = 0, // ASRC Software reset cleared
    ereset = 1, // ASRC Software reset generated. NOTE: This is a self-clear bit
  };
  enum class eIDRA : uint32_t {
    eidra_measured = 0, // ASRC internal measured ratio is used
    eidra_ideal = 1, // Ideal ratio from the interface register ASRIDRHA, ASRIDRLA is used
  };
  enum class eUSRA : uint32_t {
    euse_ratio_no = 0, // Do not use ratio as the input to ASRC for pair A
    euse_ratio = 1, // Use ratio as the input to ASRC for pair A
  };
  enum class eIDRB : uint32_t {
    eidra_measured = 0, // ASRC internal measured ratio is used
    eidra_ideal = 1, // Ideal ratio from the interface register ASRIDRHB, ASRIDRLB is used
  };
  enum class eUSRB : uint32_t {
    euse_ratio_no = 0, // Do not use ratio as the input to ASRC for pair B
    euse_ratio = 1, // Use ratio as the input to ASRC for pair B
  };
  enum class eIDRC : uint32_t {
    eidra_measured = 0, // ASRC internal measured ratio is used
    eidra_ideal = 1, // Ideal ratio from the interface register ASRIDRHC, ASRIDRLC is used
  };
  enum class eUSRC : uint32_t {
    euse_ratio_no = 0, // Do not use ratio as the input to ASRC for pair C
    euse_ratio = 1, // Use ratio as the input to ASRC for pair C
  };
  enum class eATSA : uint32_t {
    eno_auto_select = 0, // Pair A does not automatically update its pre-processing and post-processing options
    eauto_select = 1, // Pair A automatically updates its pre-processing and post-processing options
  };
  enum class eATSB : uint32_t {
    eno_auto_select = 0, // Pair B does not automatically update its pre-processing and post-processing options
    eauto_select = 1, // Pair B automatically updates its pre-processing and post-processing options
  };
  enum class eATSC : uint32_t {
    eno_auto_select = 0, // Pair C does not automatically update its pre-processing and post-processing options
    eauto_select = 1, // Pair C automatically updates its pre-processing and post-processing options
  };
  
  // Bit field definition.
  struct {
    eASRCEN ASRCEN : 1;
    eASREA ASREA : 1;
    eASREB ASREB : 1;
    eASREC ASREC : 1;
    eSRST SRST : 1;
    uint32_t _reserved_5 : 8;
    eIDRA IDRA : 1;
    eUSRA USRA : 1;
    eIDRB IDRB : 1;
    eUSRB USRB : 1;
    eIDRC IDRC : 1;
    eUSRC USRC : 1;
    uint32_t _reserved_11 : 1;
    eATSA ATSA : 1;
    eATSB ATSB : 1;
    eATSC ATSC : 1;
    uint32_t _reserved_end : 9;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRCTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRCTR &Instance() { return *reinterpret_cast<volatile ASRCTR*>(0x40414000); }
};

// ASRC Interrupt Enable Register
//
union ASRIER {
  
  // Enum definitions.
  enum class eADIEA : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  enum class eADIEB : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  enum class eADIEC : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  enum class eADOEA : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  enum class eADOEB : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  enum class eADOEC : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  enum class eAOLIE : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  enum class eAFPWE : uint32_t {
    edisabled = 0, // interrupt disabled
    eenabled = 1, // interrupt enabled
  };
  
  // Bit field definition.
  struct {
    eADIEA ADIEA : 1;
    eADIEB ADIEB : 1;
    eADIEC ADIEC : 1;
    eADOEA ADOEA : 1;
    eADOEB ADOEB : 1;
    eADOEC ADOEC : 1;
    eAOLIE AOLIE : 1;
    eAFPWE AFPWE : 1;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRIER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRIER &Instance() { return *reinterpret_cast<volatile ASRIER*>(0x40414004); }
};

// ASRC Channel Number Configuration Register
//
union ASRCNCR {
  
  // Enum definitions.
  enum class eANCA : uint32_t {
    ezero_chan = 0, // 0 channels in A (Pair A is disabled)
    eone_chan = 1, // 1 channel in A
    etwo_chan = 2, // 2 channels in A
    ethree_chan = 3, // 3 channels in A
    efour_chan = 4, // 4 channels in A
    efive_chan = 5, // 5 channels in A
    esix_chan = 6, // 6 channels in A
    eseven_chan = 7, // 7 channels in A
    eeight_chan = 8, // 8 channels in A
    enine_chan = 9, // 9 channels in A
    eten_chan = 10, // 10 channels in A
    enot_used = 11, // Should not be used.
    enot_used = 12, // Should not be used.
    enot_used = 13, // Should not be used.
    enot_used = 14, // Should not be used.
    enot_used = 15, // Should not be used.
  };
  enum class eANCB : uint32_t {
    ezero_chan = 0, // 0 channels in B (Pair B is disabled)
    eone_chan = 1, // 1 channel in B
    etwo_chan = 2, // 2 channels in B
    ethree_chan = 3, // 3 channels in B
    efour_chan = 4, // 4 channels in B
    efive_chan = 5, // 5 channels in B
    esix_chan = 6, // 6 channels in B
    eseven_chan = 7, // 7 channels in B
    eeight_chan = 8, // 8 channels in B
    enine_chan = 9, // 9 channels in B
    eten_chan = 10, // 10 channels in B
    enot_used = 11, // Should not be used.
    enot_used = 12, // Should not be used.
    enot_used = 13, // Should not be used.
    enot_used = 14, // Should not be used.
    enot_used = 15, // Should not be used.
  };
  enum class eANCC : uint32_t {
    ezero_chan = 0, // 0 channels in C (Pair C is disabled)
    eone_chan = 1, // 1 channel in C
    etwo_chan = 2, // 2 channels in C
    ethree_chan = 3, // 3 channels in C
    efour_chan = 4, // 4 channels in C
    efive_chan = 5, // 5 channels in C
    esix_chan = 6, // 6 channels in C
    eseven_chan = 7, // 7 channels in C
    eeight_chan = 8, // 8 channels in C
    enine_chan = 9, // 9 channels in C
    eten_chan = 10, // 10 channels in C
    enot_used = 11, // Should not be used.
    enot_used = 12, // Should not be used.
    enot_used = 13, // Should not be used.
    enot_used = 14, // Should not be used.
    enot_used = 15, // Should not be used.
  };
  
  // Bit field definition.
  struct {
    eANCA ANCA : 4;
    eANCB ANCB : 4;
    eANCC ANCC : 4;
    uint32_t _reserved_end : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRCNCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRCNCR &Instance() { return *reinterpret_cast<volatile ASRCNCR*>(0x4041400C); }
};

// ASRC Filter Configuration Status Register
//
union ASRCFG {
  
  // Enum definitions.
  enum class ePREMODA : uint32_t {
    eupsamp_2 = 0, // Select Upsampling-by-2
    edirect_connect = 1, // Select Direct-Connection
    edownsamp_2 = 2, // Select Downsampling-by-2
    epassthru = 3, // Select passthrough mode. In this case, POSTMODA[1:0] have no use.
  };
  enum class ePOSTMODA : uint32_t {
    eupsamp_2 = 0, // Select Upsampling-by-2
    edirect_connect = 1, // Select Direct-Connection
    edownsamp_2 = 2, // Select Downsampling-by-2
  };
  enum class ePREMODB : uint32_t {
    eupsamp_2 = 0, // Select Upsampling-by-2
    edirect_connect = 1, // Select Direct-Connection
    edownsamp_2 = 2, // Select Downsampling-by-2
    epassthru = 3, // Select passthrough mode. In this case, POSTMODB[1:0] have no use.
  };
  enum class ePOSTMODB : uint32_t {
    eupsamp_2 = 0, // Select Upsampling-by-2
    edirect_connect = 1, // Select Direct-Connection
    edownsamp_2 = 2, // Select Downsampling-by-2
  };
  enum class ePREMODC : uint32_t {
    eupsamp_2 = 0, // Select Upsampling-by-2
    edirect_connect = 1, // Select Direct-Connection
    edownsamp_2 = 2, // Select Downsampling-by-2
    epassthru = 3, // Select passthrough mode. In this case, POSTMODC[1:0] have no use.
  };
  enum class ePOSTMODC : uint32_t {
    eupsamp_2 = 0, // Select Upsampling-by-2 as defined in Signal Processing Flow.
    edirect_connect = 1, // Select Direct-Connection as defined in Signal Processing Flow.
    edownsamp_2 = 2, // Select Downsampling-by-2 as defined in Signal Processing Flow.
  };
  enum class eNDPRA : uint32_t {
    euse_default = 0, // Use default parameters for RAM-stored parameters. Override any parameters already in RAM.
    enot_default = 1, // Don't use default parameters for RAM-stored parameters. Use the parameters already stored in RAM.
  };
  enum class eNDPRB : uint32_t {
    euse_default = 0, // Use default parameters for RAM-stored parameters. Override any parameters already in RAM.
    enot_default = 1, // Don't use default parameters for RAM-stored parameter. Use the parameters already stored in RAM.
  };
  enum class eNDPRC : uint32_t {
    euse_default = 0, // Use default parameters for RAM-stored parameters. Override any parameters already in RAM.
    enot_default = 1, // Don't use default parameters for RAM-stored parameters. Use the parameters already stored in RAM.
  };
  enum class eINIRQA : uint32_t {
    einit_notserved = 0, // Initialization for Conversion Pair A not served
    einit_served = 1, // Initialization for Conversion Pair A served
  };
  enum class eINIRQB : uint32_t {
    einit_notserved = 0, // Initialization for Conversion Pair B not served
    einit_served = 1, // Initialization for Conversion Pair B served
  };
  enum class eINIRQC : uint32_t {
    einit_notserved = 0, // Initialization for Conversion Pair C not served
    einit_served = 1, // Initialization for Conversion Pair C served
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 6;
    ePREMODA PREMODA : 2;
    ePOSTMODA POSTMODA : 2;
    ePREMODB PREMODB : 2;
    ePOSTMODB POSTMODB : 2;
    ePREMODC PREMODC : 2;
    ePOSTMODC POSTMODC : 2;
    eNDPRA NDPRA : 1;
    eNDPRB NDPRB : 1;
    eNDPRC NDPRC : 1;
    eINIRQA INIRQA : 1;
    eINIRQB INIRQB : 1;
    eINIRQC INIRQC : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRCFG &Instance() { return *reinterpret_cast<volatile ASRCFG*>(0x40414010); }
};

// ASRC Clock Source Register
//
union ASRCSR {
  
  // Enum definitions.
  enum class eAICSA : uint32_t {
    ebitclk0 = 0, // bit clock 0
    ebitclk1 = 1, // bit clock 1
    ebitclk2 = 2, // bit clock 2
    ebitclk3 = 3, // bit clock 3
    ebitclk4 = 4, // bit clock 4
    ebitclk5 = 5, // bit clock 5
    ebitclk6 = 6, // bit clock 6
    ebitclk7 = 7, // bit clock 7
    ebitclk8 = 8, // bit clock 8
    ebitclk9 = 9, // bit clock 9
    ebitclka = 10, // bit clock A
    ebitclkb = 11, // bit clock B
    ebitclkc = 12, // bit clock C
    ebitclkd = 13, // bit clock D
    ebitclke = 14, // bit clock E
    eclk_disabled = 15, // clock disabled, connected to zero
  };
  enum class eAICSB : uint32_t {
    ebitclk0 = 0, // bit clock 0
    ebitclk1 = 1, // bit clock 1
    ebitclk2 = 2, // bit clock 2
    ebitclk3 = 3, // bit clock 3
    ebitclk4 = 4, // bit clock 4
    ebitclk5 = 5, // bit clock 5
    ebitclk6 = 6, // bit clock 6
    ebitclk7 = 7, // bit clock 7
    ebitclk8 = 8, // bit clock 8
    ebitclk9 = 9, // bit clock 9
    ebitclka = 10, // bit clock A
    ebitclkb = 11, // bit clock B
    ebitclkc = 12, // bit clock C
    ebitclkd = 13, // bit clock D
    ebitclke = 14, // bit clock E
    eclk_disabled = 15, // clock disabled, connected to zero
  };
  enum class eAICSC : uint32_t {
    ebitclk0 = 0, // bit clock 0
    ebitclk1 = 1, // bit clock 1
    ebitclk2 = 2, // bit clock 2
    ebitclk3 = 3, // bit clock 3
    ebitclk4 = 4, // bit clock 4
    ebitclk5 = 5, // bit clock 5
    ebitclk6 = 6, // bit clock 6
    ebitclk7 = 7, // bit clock 7
    ebitclk8 = 8, // bit clock 8
    ebitclk9 = 9, // bit clock 9
    ebitclka = 10, // bit clock A
    ebitclkb = 11, // bit clock B
    ebitclkc = 12, // bit clock C
    ebitclkd = 13, // bit clock D
    ebitclke = 14, // bit clock E
    eclk_disabled = 15, // clock disabled, connected to zero
  };
  enum class eAOCSA : uint32_t {
    ebitclk0 = 0, // bit clock 0
    ebitclk1 = 1, // bit clock 1
    ebitclk2 = 2, // bit clock 2
    ebitclk3 = 3, // bit clock 3
    ebitclk4 = 4, // bit clock 4
    ebitclk5 = 5, // bit clock 5
    ebitclk6 = 6, // bit clock 6
    ebitclk7 = 7, // bit clock 7
    ebitclk8 = 8, // bit clock 8
    ebitclk9 = 9, // bit clock 9
    ebitclka = 10, // bit clock A
    ebitclkb = 11, // bit clock B
    ebitclkc = 12, // bit clock C
    ebitclkd = 13, // bit clock D
    ebitclke = 14, // bit clock E
    eclk_disabled = 15, // clock disabled, connected to zero
  };
  enum class eAOCSB : uint32_t {
    ebitclk0 = 0, // bit clock 0
    ebitclk1 = 1, // bit clock 1
    ebitclk2 = 2, // bit clock 2
    ebitclk3 = 3, // bit clock 3
    ebitclk4 = 4, // bit clock 4
    ebitclk5 = 5, // bit clock 5
    ebitclk6 = 6, // bit clock 6
    ebitclk7 = 7, // bit clock 7
    ebitclk8 = 8, // bit clock 8
    ebitclk9 = 9, // bit clock 9
    ebitclka = 10, // bit clock A
    ebitclkb = 11, // bit clock B
    ebitclkc = 12, // bit clock C
    ebitclkd = 13, // bit clock D
    ebitclke = 14, // bit clock E
    eclk_disabled = 15, // clock disabled, connected to zero
  };
  enum class eAOCSC : uint32_t {
    ebitclk0 = 0, // bit clock 0
    ebitclk1 = 1, // bit clock 1
    ebitclk2 = 2, // bit clock 2
    ebitclk3 = 3, // bit clock 3
    ebitclk4 = 4, // bit clock 4
    ebitclk5 = 5, // bit clock 5
    ebitclk6 = 6, // bit clock 6
    ebitclk7 = 7, // bit clock 7
    ebitclk8 = 8, // bit clock 8
    ebitclk9 = 9, // bit clock 9
    ebitclka = 10, // bit clock A
    ebitclkb = 11, // bit clock B
    ebitclkc = 12, // bit clock C
    ebitclkd = 13, // bit clock D
    ebitclke = 14, // bit clock E
    eclk_disabled = 15, // clock disabled, connected to zero
  };
  
  // Bit field definition.
  struct {
    eAICSA AICSA : 4;
    eAICSB AICSB : 4;
    eAICSC AICSC : 4;
    eAOCSA AOCSA : 4;
    eAOCSB AOCSB : 4;
    eAOCSC AOCSC : 4;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRCSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRCSR &Instance() { return *reinterpret_cast<volatile ASRCSR*>(0x40414014); }
};

// ASRC Clock Divider Register 1
//
union ASRCDR1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t AICPA : 3;
    uint32_t AICDA : 3;
    uint32_t AICPB : 3;
    uint32_t AICDB : 3;
    uint32_t AOCPA : 3;
    uint32_t AOCDA : 3;
    uint32_t AOCPB : 3;
    uint32_t AOCDB : 3;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRCDR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRCDR1 &Instance() { return *reinterpret_cast<volatile ASRCDR1*>(0x40414018); }
};

// ASRC Clock Divider Register 2
//
union ASRCDR2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t AICPC : 3;
    uint32_t AICDC : 3;
    uint32_t AOCPC : 3;
    uint32_t AOCDC : 3;
    uint32_t _reserved_end : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRCDR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRCDR2 &Instance() { return *reinterpret_cast<volatile ASRCDR2*>(0x4041401C); }
};

// ASRC Status Register
//
union ASRSTR {
  
  // Enum definitions.
  enum class eAIDEA : uint32_t {
    ethresh_met = 0, // The threshold has been met and no data input A interrupt is generated
    elessthan_thresh = 1, // When AIDEA is set, the ASRC generates data input A interrupt request to the processor if ASRIER[AIDEA] = 1
  };
  enum class eAIDEB : uint32_t {
    ethresh_met = 0, // The threshold has been met and no data input B interrupt is generated
    elessthan_thresh = 1, // When AIDEB is set, the ASRC generates data input B interrupt request to the processor if ASRIER[AIDEB] = 1
  };
  enum class eAIDEC : uint32_t {
    ethresh_met = 0, // The threshold has been met and no data input C interrupt is generated
    elessthan_thresh = 1, // When AIDEC is set, the ASRC generates data input C interrupt request to the processor if ASRIER[AIDEC] = 1
  };
  enum class eAODFA : uint32_t {
    ethresh_notmet = 0, // The threshold has not yet been met and no data output A interrupt is generated
    egreaterthan_thresh = 1, // When AODFA is set, the ASRC generates data output A interrupt request to the processor if ASRIER[ADOEA] = 1
  };
  enum class eAODFB : uint32_t {
    ethresh_notmet = 0, // The threshold has not yet been met and no data output B interrupt is generated
    egreaterthan_thresh = 1, // When AODFB is set, the ASRC generates data output B interrupt request to the processor if ASRIER[ADOEB] = 1
  };
  enum class eAODFC : uint32_t {
    ethresh_notmet = 0, // The threshold has not yet been met and no data output C interrupt is generated
    egreaterthan_thresh = 1, // When AODFC is set, the ASRC generates data output C interrupt request to the processor if ASRIER[ADOEC] = 1
  };
  enum class eAOLE : uint32_t {
    etask_ok = 0, // No overload
    etoo_high = 1, // Task rate is too high
  };
  enum class eFPWT : uint32_t {
    eno_waitstate = 0, // ASRC is not in wait state
    ewaitstate = 1, // ASRC is in wait state
  };
  enum class eAIDUA : uint32_t {
    eno_underflow = 0, // No Underflow in Input data buffer A
    eunderflow = 1, // Underflow in Input data buffer A
  };
  enum class eAIDUB : uint32_t {
    eno_underflow = 0, // No Underflow in Input data buffer B
    eunderflow = 1, // Underflow in Input data buffer B
  };
  enum class eAIDUC : uint32_t {
    eno_underflow = 0, // No Underflow in Input data buffer C
    eunderflow = 1, // Underflow in Input data buffer C
  };
  enum class eAODOA : uint32_t {
    eno_overflow = 0, // No Overflow in Output data buffer A
    eoverflow = 1, // Overflow in Output data buffer A
  };
  enum class eAODOB : uint32_t {
    eno_overflow = 0, // No Overflow in Output data buffer B
    eoverflow = 1, // Overflow in Output data buffer B
  };
  enum class eAODOC : uint32_t {
    eno_overflow = 0, // No Overflow in Output data buffer C
    eoverflow = 1, // Overflow in Output data buffer C
  };
  enum class eAIOLA : uint32_t {
    eno_overload = 0, // Pair A input task is not oveloaded
    eoverload = 1, // Pair A input task is oveloaded
  };
  enum class eAIOLB : uint32_t {
    eno_overload = 0, // Pair B input task is not oveloaded
    eoverload = 1, // Pair B input task is oveloaded
  };
  enum class eAIOLC : uint32_t {
    eno_overload = 0, // Pair C input task is not oveloaded
    eoverload = 1, // Pair C input task is oveloaded
  };
  enum class eAOOLA : uint32_t {
    eno_overload = 0, // Pair A output task is not oveloaded
    eoverload = 1, // Pair A output task is oveloaded
  };
  enum class eAOOLB : uint32_t {
    eno_overload = 0, // Pair B output task is not oveloaded
    eoverload = 1, // Pair B output task is oveloaded
  };
  enum class eAOOLC : uint32_t {
    eno_overload = 0, // Pair C output task is not oveloaded
    eoverload = 1, // Pair C output task is oveloaded
  };
  enum class eATQOL : uint32_t {
    eno_overload = 0, // Task queue FIFO logic is not oveloaded
    eoverload = 1, // Task queue FIFO logic is oveloaded
  };
  enum class eDSLCNT : uint32_t {
    edslcnt_proc = 0, // New DSL counter information is in the process of storage into the internal ASRC FIFO
    edslcnt_stored = 1, // New DSL counter information is stored in the internal ASRC FIFO
  };
  
  // Bit field definition.
  struct {
    eAIDEA AIDEA : 1;
    eAIDEB AIDEB : 1;
    eAIDEC AIDEC : 1;
    eAODFA AODFA : 1;
    eAODFB AODFB : 1;
    eAODFC AODFC : 1;
    eAOLE AOLE : 1;
    eFPWT FPWT : 1;
    eAIDUA AIDUA : 1;
    eAIDUB AIDUB : 1;
    eAIDUC AIDUC : 1;
    eAODOA AODOA : 1;
    eAODOB AODOB : 1;
    eAODOC AODOC : 1;
    eAIOLA AIOLA : 1;
    eAIOLB AIOLB : 1;
    eAIOLC AIOLC : 1;
    eAOOLA AOOLA : 1;
    eAOOLB AOOLB : 1;
    eAOOLC AOOLC : 1;
    eATQOL ATQOL : 1;
    eDSLCNT DSLCNT : 1;
    uint32_t _reserved_end : 10;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRSTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRSTR &Instance() { return *reinterpret_cast<volatile ASRSTR*>(0x40414020); }
};

// ASRC Parameter Register n
//
union ASRPM1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PARAMETER_VALUE : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRPM1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRPM1 &Instance() { return *reinterpret_cast<volatile ASRPM1*>(0x40414040); }
};
// ASRC Parameter Register n
//
union ASRPM2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PARAMETER_VALUE : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRPM2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRPM2 &Instance() { return *reinterpret_cast<volatile ASRPM2*>(0x40414044); }
};
// ASRC Parameter Register n
//
union ASRPM3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PARAMETER_VALUE : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRPM3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRPM3 &Instance() { return *reinterpret_cast<volatile ASRPM3*>(0x40414048); }
};
// ASRC Parameter Register n
//
union ASRPM4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PARAMETER_VALUE : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRPM4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRPM4 &Instance() { return *reinterpret_cast<volatile ASRPM4*>(0x4041404C); }
};
// ASRC Parameter Register n
//
union ASRPM5 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PARAMETER_VALUE : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRPM5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRPM5 &Instance() { return *reinterpret_cast<volatile ASRPM5*>(0x40414050); }
};

// ASRC Task Queue FIFO Register 1
//
union ASRTFR1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 6;
    uint32_t TF_BASE : 7;
    uint32_t TF_FILL : 7;
    uint32_t _reserved_end : 12;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRTFR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRTFR1 &Instance() { return *reinterpret_cast<volatile ASRTFR1*>(0x40414054); }
};

// ASRC Channel Counter Register
//
union ASRCCR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ACIA : 4;
    uint32_t ACIB : 4;
    uint32_t ACIC : 4;
    uint32_t ACOA : 4;
    uint32_t ACOB : 4;
    uint32_t ACOC : 4;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRCCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRCCR &Instance() { return *reinterpret_cast<volatile ASRCCR*>(0x4041405C); }
};

// ASRC Data Input Register for Pair x
//
union ASRDIA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRDIA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRDIA &Instance() { return *reinterpret_cast<volatile ASRDIA*>(0x40414060); }
};

// ASRC Data Output Register for Pair x
//
union ASRDOA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRDOA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRDOA &Instance() { return *reinterpret_cast<volatile ASRDOA*>(0x40414064); }
};

// ASRC Data Input Register for Pair x
//
union ASRDIB {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRDIB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRDIB &Instance() { return *reinterpret_cast<volatile ASRDIB*>(0x40414068); }
};

// ASRC Data Output Register for Pair x
//
union ASRDOB {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRDOB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRDOB &Instance() { return *reinterpret_cast<volatile ASRDOB*>(0x4041406C); }
};

// ASRC Data Input Register for Pair x
//
union ASRDIC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRDIC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRDIC &Instance() { return *reinterpret_cast<volatile ASRDIC*>(0x40414070); }
};

// ASRC Data Output Register for Pair x
//
union ASRDOC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DATA : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRDOC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRDOC &Instance() { return *reinterpret_cast<volatile ASRDOC*>(0x40414074); }
};

// ASRC Ideal Ratio for Pair A-High Part
//
union ASRIDRHA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDRATIOA_H : 8;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRIDRHA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRIDRHA &Instance() { return *reinterpret_cast<volatile ASRIDRHA*>(0x40414080); }
};

// ASRC Ideal Ratio for Pair A -Low Part
//
union ASRIDRLA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDRATIOA_L : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRIDRLA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRIDRLA &Instance() { return *reinterpret_cast<volatile ASRIDRLA*>(0x40414084); }
};

// ASRC Ideal Ratio for Pair B-High Part
//
union ASRIDRHB {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDRATIOB_H : 8;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRIDRHB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRIDRHB &Instance() { return *reinterpret_cast<volatile ASRIDRHB*>(0x40414088); }
};

// ASRC Ideal Ratio for Pair B-Low Part
//
union ASRIDRLB {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDRATIOB_L : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRIDRLB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRIDRLB &Instance() { return *reinterpret_cast<volatile ASRIDRLB*>(0x4041408C); }
};

// ASRC Ideal Ratio for Pair C-High Part
//
union ASRIDRHC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDRATIOC_H : 8;
    uint32_t _reserved_end : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRIDRHC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRIDRHC &Instance() { return *reinterpret_cast<volatile ASRIDRHC*>(0x40414090); }
};

// ASRC Ideal Ratio for Pair C-Low Part
//
union ASRIDRLC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IDRATIOC_L : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRIDRLC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRIDRLC &Instance() { return *reinterpret_cast<volatile ASRIDRLC*>(0x40414094); }
};

// ASRC 76 kHz Period in terms of ASRC processing clock
//
union ASR76K {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ASR76K : 17;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASR76K() = delete;
  inline void Reset() volatile { this->value = 0x00000A47; }
  static inline volatile ASR76K &Instance() { return *reinterpret_cast<volatile ASR76K*>(0x40414098); }
};

// ASRC 56 kHz Period in terms of ASRC processing clock
//
union ASR56K {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ASR56K : 17;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASR56K() = delete;
  inline void Reset() volatile { this->value = 0x00000DF3; }
  static inline volatile ASR56K &Instance() { return *reinterpret_cast<volatile ASR56K*>(0x4041409C); }
};

// ASRC Misc Control Register for Pair A
//
union ASRMCRA {
  
  // Enum definitions.
  enum class eRSYNOFA : uint32_t {
    eno_resync = 0, // Do not touch ASRCCR[ACOA]
    eresync = 1, // Force ASRCCR[ACOA]=0
  };
  enum class eRSYNIFA : uint32_t {
    eno_resync = 0, // Do not touch ASRCCR[ACIA]
    eresync = 1, // Force ASRCCR[ACIA]=0
  };
  enum class eBYPASSPOLYA : uint32_t {
    eno_bypass = 0, // Don't bypass polyphase filtering.
    ebypass = 1, // Bypass polyphase filtering.
  };
  enum class eBUFSTALLA : uint32_t {
    eno_stall = 0, // Don't stall Pair A conversion even in case of near empty/full FIFO conditions.
    estall = 1, // Stall Pair A conversion in case of near empty/full FIFO conditions.
  };
  enum class eEXTTHRSHA : uint32_t {
    euse_default_thresh = 0, // Use default thresholds.
    euse_ext_thresh = 1, // Use external defined thresholds.
  };
  enum class eZEROBUFA : uint32_t {
    ezero_buf = 0, // Zeroize the buffer
    edo_not_zero_buf = 1, // Don't zeroize the buffer
  };
  
  // Bit field definition.
  struct {
    uint32_t INFIFO_THRESHOLDA : 6;
    uint32_t _reserved_1 : 4;
    eRSYNOFA RSYNOFA : 1;
    eRSYNIFA RSYNIFA : 1;
    uint32_t OUTFIFO_THRESHOLDA : 6;
    uint32_t _reserved_4 : 2;
    eBYPASSPOLYA BYPASSPOLYA : 1;
    eBUFSTALLA BUFSTALLA : 1;
    eEXTTHRSHA EXTTHRSHA : 1;
    eZEROBUFA ZEROBUFA : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRMCRA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRMCRA &Instance() { return *reinterpret_cast<volatile ASRMCRA*>(0x404140A0); }
};

// ASRC FIFO Status Register for Pair A
//
union ASRFSTA {
  
  // Enum definitions.
  enum class eIAEA : uint32_t {
    enot_near_empty = 0, // Input FIFO is not near empty for Pair A
    enear_empty = 1, // Input FIFO is near empty for Pair A
  };
  enum class eOAFA : uint32_t {
    enot_near_full = 0, // Output FIFO is not near full for Pair A
    enear_full = 1, // Output FIFO is near full for Pair A
  };
  
  // Bit field definition.
  struct {
    uint32_t INFIFO_FILLA : 7;
    uint32_t _reserved_1 : 4;
    eIAEA IAEA : 1;
    uint32_t OUTFIFO_FILLA : 7;
    uint32_t _reserved_3 : 4;
    eOAFA OAFA : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRFSTA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRFSTA &Instance() { return *reinterpret_cast<volatile ASRFSTA*>(0x404140A4); }
};

// ASRC Misc Control Register for Pair B
//
union ASRMCRB {
  
  // Enum definitions.
  enum class eRSYNOFB : uint32_t {
    eno_resync = 0, // Do not touch ASRCCR[ACOB]
    eresync = 1, // Force ASRCCR[ACOB]=0
  };
  enum class eRSYNIFB : uint32_t {
    eno_resync = 0, // Do not touch ASRCCR[ACIB]
    eresync = 1, // Force ASRCCR[ACIB]=0
  };
  enum class eBYPASSPOLYB : uint32_t {
    eno_bypass = 0, // Don't bypass polyphase filtering.
    ebypass = 1, // Bypass polyphase filtering.
  };
  enum class eBUFSTALLB : uint32_t {
    eno_stall = 0, // Don't stall Pair B conversion even in case of near empty/full FIFO conditions.
    estall = 1, // Stall Pair B conversion in case of near empty/full FIFO conditions.
  };
  enum class eEXTTHRSHB : uint32_t {
    euse_default_thresh = 0, // Use default thresholds.
    euse_ext_thresh = 1, // Use external defined thresholds.
  };
  enum class eZEROBUFB : uint32_t {
    ezero_buf = 0, // Zeroize the buffer
    edo_not_zero_buf = 1, // Don't zeroize the buffer
  };
  
  // Bit field definition.
  struct {
    uint32_t INFIFO_THRESHOLDB : 6;
    uint32_t _reserved_1 : 4;
    eRSYNOFB RSYNOFB : 1;
    eRSYNIFB RSYNIFB : 1;
    uint32_t OUTFIFO_THRESHOLDB : 6;
    uint32_t _reserved_4 : 2;
    eBYPASSPOLYB BYPASSPOLYB : 1;
    eBUFSTALLB BUFSTALLB : 1;
    eEXTTHRSHB EXTTHRSHB : 1;
    eZEROBUFB ZEROBUFB : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRMCRB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRMCRB &Instance() { return *reinterpret_cast<volatile ASRMCRB*>(0x404140A8); }
};

// ASRC FIFO Status Register for Pair B
//
union ASRFSTB {
  
  // Enum definitions.
  enum class eIAEB : uint32_t {
    enot_near_empty = 0, // Input FIFO is not near empty for Pair B
    enear_empty = 1, // Input FIFO is near empty for Pair B
  };
  enum class eOAFB : uint32_t {
    enot_near_full = 0, // Output FIFO is not near full for Pair B
    enear_full = 1, // Output FIFO is near full for Pair B
  };
  
  // Bit field definition.
  struct {
    uint32_t INFIFO_FILLB : 7;
    uint32_t _reserved_1 : 4;
    eIAEB IAEB : 1;
    uint32_t OUTFIFO_FILLB : 7;
    uint32_t _reserved_3 : 4;
    eOAFB OAFB : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRFSTB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRFSTB &Instance() { return *reinterpret_cast<volatile ASRFSTB*>(0x404140AC); }
};

// ASRC Misc Control Register for Pair C
//
union ASRMCRC {
  
  // Enum definitions.
  enum class eRSYNOFC : uint32_t {
    eno_resync = 0, // Do not touch ASRCCR[ACOC]
    eresync = 1, // Force ASRCCR[ACOC]=0
  };
  enum class eRSYNIFC : uint32_t {
    eno_resync = 0, // Do not touch ASRCCR[ACIC]
    eresync = 1, // Force ASRCCR[ACIC]=0
  };
  enum class eBYPASSPOLYC : uint32_t {
    eno_bypass = 0, // Don't bypass polyphase filtering.
    ebypass = 1, // Bypass polyphase filtering.
  };
  enum class eBUFSTALLC : uint32_t {
    eno_stall = 0, // Don't stall Pair C conversion even in case of near empty/full FIFO conditions.
    estall = 1, // Stall Pair C conversion in case of near empty/full FIFO conditions.
  };
  enum class eEXTTHRSHC : uint32_t {
    euse_default_thresh = 0, // Use default thresholds.
    euse_ext_thresh = 1, // Use external defined thresholds.
  };
  enum class eZEROBUFC : uint32_t {
    ezero_buf = 0, // Zeroize the buffer
    edo_not_zero_buf = 1, // Don't zeroize the buffer
  };
  
  // Bit field definition.
  struct {
    uint32_t INFIFO_THRESHOLDC : 6;
    uint32_t _reserved_1 : 4;
    eRSYNOFC RSYNOFC : 1;
    eRSYNIFC RSYNIFC : 1;
    uint32_t OUTFIFO_THRESHOLDC : 6;
    uint32_t _reserved_4 : 2;
    eBYPASSPOLYC BYPASSPOLYC : 1;
    eBUFSTALLC BUFSTALLC : 1;
    eEXTTHRSHC EXTTHRSHC : 1;
    eZEROBUFC ZEROBUFC : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRMCRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRMCRC &Instance() { return *reinterpret_cast<volatile ASRMCRC*>(0x404140B0); }
};

// ASRC FIFO Status Register for Pair C
//
union ASRFSTC {
  
  // Enum definitions.
  enum class eIAEC : uint32_t {
    enot_near_empty = 0, // Input FIFO is not near empty for Pair C
    enear_empty = 1, // Input FIFO is near empty for Pair C
  };
  enum class eOAFC : uint32_t {
    enot_near_full = 0, // Output FIFO is not near full for Pair C
    enear_full = 1, // Output FIFO is near full for Pair C
  };
  
  // Bit field definition.
  struct {
    uint32_t INFIFO_FILLC : 7;
    uint32_t _reserved_1 : 4;
    eIAEC IAEC : 1;
    uint32_t OUTFIFO_FILLC : 7;
    uint32_t _reserved_3 : 4;
    eOAFC OAFC : 1;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRFSTC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRFSTC &Instance() { return *reinterpret_cast<volatile ASRFSTC*>(0x404140B4); }
};

// ASRC Misc Control Register 1 for Pair X
//
union ASRMCR1A {
  
  // Enum definitions.
  enum class eOW16 : uint32_t {
    eout_24bit = 0, // 24-bit output data.
    eout_16bit = 1, // 16-bit output data
  };
  enum class eOSGN : uint32_t {
    eno_sign_ext = 0, // No sign extension.
    esign_ext = 1, // Sign extension.
  };
  enum class eOMSB : uint32_t {
    elsb_aligned = 0, // LSB aligned.
    emsb_aligned = 1, // MSB aligned.
  };
  enum class eIMSB : uint32_t {
    elsb_aligned = 0, // LSB aligned.
    emsb_aligned = 1, // MSB aligned.
  };
  enum class eIWD : uint32_t {
    eaudiodata_24bit = 0, // 24-bit audio data.
    eaudiodata_16bit = 1, // 16-bit audio data.
    eaudiodata_8bit = 2, // 8-bit audio data.
  };
  
  // Bit field definition.
  struct {
    eOW16 OW16 : 1;
    eOSGN OSGN : 1;
    eOMSB OMSB : 1;
    uint32_t _reserved_3 : 5;
    eIMSB IMSB : 1;
    eIWD IWD : 2;
    uint32_t _reserved_end : 21;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRMCR1A() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRMCR1A &Instance() { return *reinterpret_cast<volatile ASRMCR1A*>(0x404140C0); }
};
// ASRC Misc Control Register 1 for Pair X
//
union ASRMCR1B {
  
  // Enum definitions.
  enum class eOW16 : uint32_t {
    eout_24bit = 0, // 24-bit output data.
    eout_16bit = 1, // 16-bit output data
  };
  enum class eOSGN : uint32_t {
    eno_sign_ext = 0, // No sign extension.
    esign_ext = 1, // Sign extension.
  };
  enum class eOMSB : uint32_t {
    elsb_aligned = 0, // LSB aligned.
    emsb_aligned = 1, // MSB aligned.
  };
  enum class eIMSB : uint32_t {
    elsb_aligned = 0, // LSB aligned.
    emsb_aligned = 1, // MSB aligned.
  };
  enum class eIWD : uint32_t {
    eaudiodata_24bit = 0, // 24-bit audio data.
    eaudiodata_16bit = 1, // 16-bit audio data.
    eaudiodata_8bit = 2, // 8-bit audio data.
  };
  
  // Bit field definition.
  struct {
    eOW16 OW16 : 1;
    eOSGN OSGN : 1;
    eOMSB OMSB : 1;
    uint32_t _reserved_3 : 5;
    eIMSB IMSB : 1;
    eIWD IWD : 2;
    uint32_t _reserved_end : 21;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRMCR1B() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRMCR1B &Instance() { return *reinterpret_cast<volatile ASRMCR1B*>(0x404140C4); }
};
// ASRC Misc Control Register 1 for Pair X
//
union ASRMCR1C {
  
  // Enum definitions.
  enum class eOW16 : uint32_t {
    eout_24bit = 0, // 24-bit output data.
    eout_16bit = 1, // 16-bit output data
  };
  enum class eOSGN : uint32_t {
    eno_sign_ext = 0, // No sign extension.
    esign_ext = 1, // Sign extension.
  };
  enum class eOMSB : uint32_t {
    elsb_aligned = 0, // LSB aligned.
    emsb_aligned = 1, // MSB aligned.
  };
  enum class eIMSB : uint32_t {
    elsb_aligned = 0, // LSB aligned.
    emsb_aligned = 1, // MSB aligned.
  };
  enum class eIWD : uint32_t {
    eaudiodata_24bit = 0, // 24-bit audio data.
    eaudiodata_16bit = 1, // 16-bit audio data.
    eaudiodata_8bit = 2, // 8-bit audio data.
  };
  
  // Bit field definition.
  struct {
    eOW16 OW16 : 1;
    eOSGN OSGN : 1;
    eOMSB OMSB : 1;
    uint32_t _reserved_3 : 5;
    eIMSB IMSB : 1;
    eIWD IWD : 2;
    uint32_t _reserved_end : 21;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ASRMCR1C() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ASRMCR1C &Instance() { return *reinterpret_cast<volatile ASRMCR1C*>(0x404140C8); }
};


} // namespace nASRC