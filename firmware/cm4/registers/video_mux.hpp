#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// VIDEO_MUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nVIDEO_MUX {


// Video mux Control Register
//
union VID_MUX_CTRL {
  
  enum class eCSI_SEL : uint32_t {
    ePARALLEL_CSI = 0, // CSI sensor data is from Parallel CSI
    eMIPI_CSI = 1, // CSI sensor data is from MIPI CSI
  };
  
  enum class eLCDIF2_SEL : uint32_t {
    ePARALLEL_CSI = 0, // LCDIFv2 sensor data is from Parallel CSI
    eMIPI_CSI = 1, // LCDIFv2 sensor data is from MIPI CSI
  };
  
  enum class eMIPI_DSI_SEL : uint32_t {
    ePARALLEL_CSI = 0, // MIPI DSI video data is from eLCDIF
    eMIPI_CSI = 1, // MIPI DSI video data is from LCDIFv2
  };
  
  enum class ePARA_LCD_SEL : uint32_t {
    ePARALLEL_CSI = 0, // Parallel LCDIF video data is from eLCDIF
    eMIPI_CSI = 1, // Parallel LCDIF video data is from LCDIFv2
  };
  
  // Bit field definition.
  struct {
    eCSI_SEL CSI_SEL : 1;
    eLCDIF2_SEL LCDIF2_SEL : 1;
    eMIPI_DSI_SEL MIPI_DSI_SEL : 1;
    ePARA_LCD_SEL PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL &Instance() { return *reinterpret_cast<volatile VID_MUX_CTRL*>(0x40818000); }
};

// Video mux Control Register
//
union VID_MUX_CTRL_SET {
  
  // Bit field definition.
  struct {
    uint32_t CSI_SEL : 1;
    uint32_t LCDIF2_SEL : 1;
    uint32_t MIPI_DSI_SEL : 1;
    uint32_t PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL_SET &Instance() { return *reinterpret_cast<volatile VID_MUX_CTRL_SET*>(0x40818004); }
};

// Video mux Control Register
//
union VID_MUX_CTRL_CLR {
  
  // Bit field definition.
  struct {
    uint32_t CSI_SEL : 1;
    uint32_t LCDIF2_SEL : 1;
    uint32_t MIPI_DSI_SEL : 1;
    uint32_t PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL_CLR &Instance() { return *reinterpret_cast<volatile VID_MUX_CTRL_CLR*>(0x40818008); }
};

// Video mux Control Register
//
union VID_MUX_CTRL_TOG {
  
  // Bit field definition.
  struct {
    uint32_t CSI_SEL : 1;
    uint32_t LCDIF2_SEL : 1;
    uint32_t MIPI_DSI_SEL : 1;
    uint32_t PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL_TOG &Instance() { return *reinterpret_cast<volatile VID_MUX_CTRL_TOG*>(0x4081800C); }
};

// Pixel Link Master(PLM) Control Register
//
union PLM_CTRL {
  
  enum class eENABLE : uint32_t {
    eNO_ACTIVE = 0, // No active HSYNC and VSYNC output
    eACTIVE = 1, // Active HSYNC and VSYNC output
  };
  
  enum class eVSYNC_OVERRIDE : uint32_t {
    eDEASSERT = 0, // VSYNC is not asserted
    eASSERT = 1, // VSYNC is asserted
  };
  
  enum class eHSYNC_OVERRIDE : uint32_t {
    eDEASSERT = 0, // HSYNC is not asserted
    eASSERT = 1, // HSYNC is asserted
  };
  
  enum class eVALID_OVERRIDE : uint32_t {
    eASSERT = 0, // HSYNC and VSYNC is asserted
    eDEASSERT = 1, // HSYNC and VSYNC is not asserted
  };
  
  enum class ePOLARITY : uint32_t {
    eKEEP = 0, // Keep the current polarity of HSYNC and VSYNC
    eINVERT = 1, // Invert the polarity of HSYNC and VSYNC
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    eVSYNC_OVERRIDE VSYNC_OVERRIDE : 1;
    eHSYNC_OVERRIDE HSYNC_OVERRIDE : 1;
    eVALID_OVERRIDE VALID_OVERRIDE : 1;
    ePOLARITY POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL &Instance() { return *reinterpret_cast<volatile PLM_CTRL*>(0x40818020); }
};

// Pixel Link Master(PLM) Control Register
//
union PLM_CTRL_SET {
  
  // Bit field definition.
  struct {
    uint32_t ENABLE : 1;
    uint32_t VSYNC_OVERRIDE : 1;
    uint32_t HSYNC_OVERRIDE : 1;
    uint32_t VALID_OVERRIDE : 1;
    uint32_t POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL_SET &Instance() { return *reinterpret_cast<volatile PLM_CTRL_SET*>(0x40818024); }
};

// Pixel Link Master(PLM) Control Register
//
union PLM_CTRL_CLR {
  
  // Bit field definition.
  struct {
    uint32_t ENABLE : 1;
    uint32_t VSYNC_OVERRIDE : 1;
    uint32_t HSYNC_OVERRIDE : 1;
    uint32_t VALID_OVERRIDE : 1;
    uint32_t POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL_CLR &Instance() { return *reinterpret_cast<volatile PLM_CTRL_CLR*>(0x40818028); }
};

// Pixel Link Master(PLM) Control Register
//
union PLM_CTRL_TOG {
  
  // Bit field definition.
  struct {
    uint32_t ENABLE : 1;
    uint32_t VSYNC_OVERRIDE : 1;
    uint32_t HSYNC_OVERRIDE : 1;
    uint32_t VALID_OVERRIDE : 1;
    uint32_t POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL_TOG &Instance() { return *reinterpret_cast<volatile PLM_CTRL_TOG*>(0x4081802C); }
};

// YUV420 Control Register
//
union YUV420_CTRL {
  
  enum class eFST_LN_DATA_TYPE : uint32_t {
    eODD = 0, // Odd (default)
    eEVEN = 1, // Even
  };
  
  // Bit field definition.
  struct {
    eFST_LN_DATA_TYPE FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL &Instance() { return *reinterpret_cast<volatile YUV420_CTRL*>(0x40818030); }
};

// YUV420 Control Register
//
union YUV420_CTRL_SET {
  
  // Bit field definition.
  struct {
    uint32_t FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL_SET &Instance() { return *reinterpret_cast<volatile YUV420_CTRL_SET*>(0x40818034); }
};

// YUV420 Control Register
//
union YUV420_CTRL_CLR {
  
  // Bit field definition.
  struct {
    uint32_t FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL_CLR &Instance() { return *reinterpret_cast<volatile YUV420_CTRL_CLR*>(0x40818038); }
};

// YUV420 Control Register
//
union YUV420_CTRL_TOG {
  
  // Bit field definition.
  struct {
    uint32_t FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL_TOG &Instance() { return *reinterpret_cast<volatile YUV420_CTRL_TOG*>(0x4081803C); }
};

// Data Disable Register
//
union CFG_DT_DISABLE {
  
  // Bit field definition.
  struct {
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE &Instance() { return *reinterpret_cast<volatile CFG_DT_DISABLE*>(0x40818050); }
};

// Data Disable Register
//
union CFG_DT_DISABLE_SET {
  
  // Bit field definition.
  struct {
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE_SET &Instance() { return *reinterpret_cast<volatile CFG_DT_DISABLE_SET*>(0x40818054); }
};

// Data Disable Register
//
union CFG_DT_DISABLE_CLR {
  
  // Bit field definition.
  struct {
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE_CLR &Instance() { return *reinterpret_cast<volatile CFG_DT_DISABLE_CLR*>(0x40818058); }
};

// Data Disable Register
//
union CFG_DT_DISABLE_TOG {
  
  // Bit field definition.
  struct {
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE_TOG &Instance() { return *reinterpret_cast<volatile CFG_DT_DISABLE_TOG*>(0x4081805C); }
};

// MIPI DSI Control Register
//
union MIPI_DSI_CTRL {
  
  enum class eDPI_SD : uint32_t {
    eNO = 0, // No effect
    eSENDCMD = 1, // Send shutdown command
  };
  
  enum class eDPI_CM : uint32_t {
    eNORMAL = 0, // Normal Mode
    eLOWCLR = 1, // Low-color mode
  };
  
  // Bit field definition.
  struct {
    eDPI_SD DPI_SD : 1;
    eDPI_CM DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL &Instance() { return *reinterpret_cast<volatile MIPI_DSI_CTRL*>(0x40818070); }
};

// MIPI DSI Control Register
//
union MIPI_DSI_CTRL_SET {
  
  // Bit field definition.
  struct {
    uint32_t DPI_SD : 1;
    uint32_t DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL_SET &Instance() { return *reinterpret_cast<volatile MIPI_DSI_CTRL_SET*>(0x40818074); }
};

// MIPI DSI Control Register
//
union MIPI_DSI_CTRL_CLR {
  
  // Bit field definition.
  struct {
    uint32_t DPI_SD : 1;
    uint32_t DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL_CLR &Instance() { return *reinterpret_cast<volatile MIPI_DSI_CTRL_CLR*>(0x40818078); }
};

// MIPI DSI Control Register
//
union MIPI_DSI_CTRL_TOG {
  
  // Bit field definition.
  struct {
    uint32_t DPI_SD : 1;
    uint32_t DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL_TOG &Instance() { return *reinterpret_cast<volatile MIPI_DSI_CTRL_TOG*>(0x4081807C); }
};


} // namespace nVIDEO_MUX