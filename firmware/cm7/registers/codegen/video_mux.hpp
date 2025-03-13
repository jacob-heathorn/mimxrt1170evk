#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// VIDEO_MUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nVIDEO_MUX {


// Video mux Control Register
union VID_MUX_CTRL {
  
  // CSI sensor data input mux selector
  enum class eCSI_SEL : uint32_t {
    // CSI sensor data is from Parallel CSI
    ePARALLEL_CSI = 0,
    // CSI sensor data is from MIPI CSI
    eMIPI_CSI = 1,
  };
  
  // LCDIF2 sensor data input mux selector
  enum class eLCDIF2_SEL : uint32_t {
    // LCDIFv2 sensor data is from Parallel CSI
    ePARALLEL_CSI = 0,
    // LCDIFv2 sensor data is from MIPI CSI
    eMIPI_CSI = 1,
  };
  
  // MIPI DSI video data input mux selector
  enum class eMIPI_DSI_SEL : uint32_t {
    // MIPI DSI video data is from eLCDIF
    ePARALLEL_CSI = 0,
    // MIPI DSI video data is from LCDIFv2
    eMIPI_CSI = 1,
  };
  
  // Parallel LCDIF video data input mux selector
  enum class ePARA_LCD_SEL : uint32_t {
    // Parallel LCDIF video data is from eLCDIF
    ePARALLEL_CSI = 0,
    // Parallel LCDIF video data is from LCDIFv2
    eMIPI_CSI = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - CSI sensor data input mux selector
    eCSI_SEL CSI_SEL : 1;
    // read-write - LCDIF2 sensor data input mux selector
    eLCDIF2_SEL LCDIF2_SEL : 1;
    // read-write - MIPI DSI video data input mux selector
    eMIPI_DSI_SEL MIPI_DSI_SEL : 1;
    // read-write - Parallel LCDIF video data input mux selector
    ePARA_LCD_SEL PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL &ref() { return *reinterpret_cast<volatile VID_MUX_CTRL*>(0x40818000); }
};

// Video mux Control Register
union VID_MUX_CTRL_SET {
  
  // Bit field definition.
  struct {
    // read-write - CSI sensor data input mux selector
    uint32_t CSI_SEL : 1;
    // read-write - LCDIF2 sensor data input mux selector
    uint32_t LCDIF2_SEL : 1;
    // read-write - MIPI DSI video data input mux selector
    uint32_t MIPI_DSI_SEL : 1;
    // read-write - Parallel LCDIF video data input mux selector
    uint32_t PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL_SET &ref() { return *reinterpret_cast<volatile VID_MUX_CTRL_SET*>(0x40818004); }
};

// Video mux Control Register
union VID_MUX_CTRL_CLR {
  
  // Bit field definition.
  struct {
    // read-write - CSI sensor data input mux selector
    uint32_t CSI_SEL : 1;
    // read-write - LCDIF2 sensor data input mux selector
    uint32_t LCDIF2_SEL : 1;
    // read-write - MIPI DSI video data input mux selector
    uint32_t MIPI_DSI_SEL : 1;
    // read-write - Parallel LCDIF video data input mux selector
    uint32_t PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL_CLR &ref() { return *reinterpret_cast<volatile VID_MUX_CTRL_CLR*>(0x40818008); }
};

// Video mux Control Register
union VID_MUX_CTRL_TOG {
  
  // Bit field definition.
  struct {
    // read-write - CSI sensor data input mux selector
    uint32_t CSI_SEL : 1;
    // read-write - LCDIF2 sensor data input mux selector
    uint32_t LCDIF2_SEL : 1;
    // read-write - MIPI DSI video data input mux selector
    uint32_t MIPI_DSI_SEL : 1;
    // read-write - Parallel LCDIF video data input mux selector
    uint32_t PARA_LCD_SEL : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VID_MUX_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VID_MUX_CTRL_TOG &ref() { return *reinterpret_cast<volatile VID_MUX_CTRL_TOG*>(0x4081800C); }
};

// Pixel Link Master(PLM) Control Register
union PLM_CTRL {
  
  // Enable the output of HYSNC and VSYNC
  enum class eENABLE : uint32_t {
    // No active HSYNC and VSYNC output
    eNO_ACTIVE = 0,
    // Active HSYNC and VSYNC output
    eACTIVE = 1,
  };
  
  // VSYNC override
  enum class eVSYNC_OVERRIDE : uint32_t {
    // VSYNC is not asserted
    eDEASSERT = 0,
    // VSYNC is asserted
    eASSERT = 1,
  };
  
  // HSYNC override
  enum class eHSYNC_OVERRIDE : uint32_t {
    // HSYNC is not asserted
    eDEASSERT = 0,
    // HSYNC is asserted
    eASSERT = 1,
  };
  
  // Valid override
  enum class eVALID_OVERRIDE : uint32_t {
    // HSYNC and VSYNC is asserted
    eASSERT = 0,
    // HSYNC and VSYNC is not asserted
    eDEASSERT = 1,
  };
  
  // Polarity of HYSNC/VSYNC
  enum class ePOLARITY : uint32_t {
    // Keep the current polarity of HSYNC and VSYNC
    eKEEP = 0,
    // Invert the polarity of HSYNC and VSYNC
    eINVERT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable the output of HYSNC and VSYNC
    eENABLE ENABLE : 1;
    // read-write - VSYNC override
    eVSYNC_OVERRIDE VSYNC_OVERRIDE : 1;
    // read-write - HSYNC override
    eHSYNC_OVERRIDE HSYNC_OVERRIDE : 1;
    // read-write - Valid override
    eVALID_OVERRIDE VALID_OVERRIDE : 1;
    // read-write - Polarity of HYSNC/VSYNC
    ePOLARITY POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL &ref() { return *reinterpret_cast<volatile PLM_CTRL*>(0x40818020); }
};

// Pixel Link Master(PLM) Control Register
union PLM_CTRL_SET {
  
  // Bit field definition.
  struct {
    // read-write - Enable the output of HYSNC and VSYNC
    uint32_t ENABLE : 1;
    // read-write - VSYNC override
    uint32_t VSYNC_OVERRIDE : 1;
    // read-write - HSYNC override
    uint32_t HSYNC_OVERRIDE : 1;
    // read-write - Valid override
    uint32_t VALID_OVERRIDE : 1;
    // read-write - Polarity of HYSNC/VSYNC
    uint32_t POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL_SET &ref() { return *reinterpret_cast<volatile PLM_CTRL_SET*>(0x40818024); }
};

// Pixel Link Master(PLM) Control Register
union PLM_CTRL_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Enable the output of HYSNC and VSYNC
    uint32_t ENABLE : 1;
    // read-write - VSYNC override
    uint32_t VSYNC_OVERRIDE : 1;
    // read-write - HSYNC override
    uint32_t HSYNC_OVERRIDE : 1;
    // read-write - Valid override
    uint32_t VALID_OVERRIDE : 1;
    // read-write - Polarity of HYSNC/VSYNC
    uint32_t POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL_CLR &ref() { return *reinterpret_cast<volatile PLM_CTRL_CLR*>(0x40818028); }
};

// Pixel Link Master(PLM) Control Register
union PLM_CTRL_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Enable the output of HYSNC and VSYNC
    uint32_t ENABLE : 1;
    // read-write - VSYNC override
    uint32_t VSYNC_OVERRIDE : 1;
    // read-write - HSYNC override
    uint32_t HSYNC_OVERRIDE : 1;
    // read-write - Valid override
    uint32_t VALID_OVERRIDE : 1;
    // read-write - Polarity of HYSNC/VSYNC
    uint32_t POLARITY : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLM_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLM_CTRL_TOG &ref() { return *reinterpret_cast<volatile PLM_CTRL_TOG*>(0x4081802C); }
};

// YUV420 Control Register
union YUV420_CTRL {
  
  // Data type of First Line
  enum class eFST_LN_DATA_TYPE : uint32_t {
    // Odd (default)
    eODD = 0,
    // Even
    eEVEN = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Data type of First Line
    eFST_LN_DATA_TYPE FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL &ref() { return *reinterpret_cast<volatile YUV420_CTRL*>(0x40818030); }
};

// YUV420 Control Register
union YUV420_CTRL_SET {
  
  // Bit field definition.
  struct {
    // read-write - Data type of First Line
    uint32_t FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL_SET &ref() { return *reinterpret_cast<volatile YUV420_CTRL_SET*>(0x40818034); }
};

// YUV420 Control Register
union YUV420_CTRL_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Data type of First Line
    uint32_t FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL_CLR &ref() { return *reinterpret_cast<volatile YUV420_CTRL_CLR*>(0x40818038); }
};

// YUV420 Control Register
union YUV420_CTRL_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Data type of First Line
    uint32_t FST_LN_DATA_TYPE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  YUV420_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile YUV420_CTRL_TOG &ref() { return *reinterpret_cast<volatile YUV420_CTRL_TOG*>(0x4081803C); }
};

// Data Disable Register
union CFG_DT_DISABLE {
  
  // Bit field definition.
  struct {
    // read-write - Data Type Disable
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE &ref() { return *reinterpret_cast<volatile CFG_DT_DISABLE*>(0x40818050); }
};

// Data Disable Register
union CFG_DT_DISABLE_SET {
  
  // Bit field definition.
  struct {
    // read-write - Data Type Disable
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE_SET &ref() { return *reinterpret_cast<volatile CFG_DT_DISABLE_SET*>(0x40818054); }
};

// Data Disable Register
union CFG_DT_DISABLE_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Data Type Disable
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE_CLR &ref() { return *reinterpret_cast<volatile CFG_DT_DISABLE_CLR*>(0x40818058); }
};

// Data Disable Register
union CFG_DT_DISABLE_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Data Type Disable
    uint32_t CFG_DT_DISABLE : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DT_DISABLE_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DT_DISABLE_TOG &ref() { return *reinterpret_cast<volatile CFG_DT_DISABLE_TOG*>(0x4081805C); }
};

// MIPI DSI Control Register
union MIPI_DSI_CTRL {
  
  // Shut Down - Control to shutdown display (type 4 only)
  enum class eDPI_SD : uint32_t {
    // No effect
    eNO = 0,
    // Send shutdown command
    eSENDCMD = 1,
  };
  
  // Color Mode control
  enum class eDPI_CM : uint32_t {
    // Normal Mode
    eNORMAL = 0,
    // Low-color mode
    eLOWCLR = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shut Down - Control to shutdown display (type 4 only)
    eDPI_SD DPI_SD : 1;
    // read-write - Color Mode control
    eDPI_CM DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL &ref() { return *reinterpret_cast<volatile MIPI_DSI_CTRL*>(0x40818070); }
};

// MIPI DSI Control Register
union MIPI_DSI_CTRL_SET {
  
  // Bit field definition.
  struct {
    // read-write - Shut Down - Control to shutdown display (type 4 only)
    uint32_t DPI_SD : 1;
    // read-write - Color Mode control
    uint32_t DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL_SET &ref() { return *reinterpret_cast<volatile MIPI_DSI_CTRL_SET*>(0x40818074); }
};

// MIPI DSI Control Register
union MIPI_DSI_CTRL_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Shut Down - Control to shutdown display (type 4 only)
    uint32_t DPI_SD : 1;
    // read-write - Color Mode control
    uint32_t DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL_CLR &ref() { return *reinterpret_cast<volatile MIPI_DSI_CTRL_CLR*>(0x40818078); }
};

// MIPI DSI Control Register
union MIPI_DSI_CTRL_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Shut Down - Control to shutdown display (type 4 only)
    uint32_t DPI_SD : 1;
    // read-write - Color Mode control
    uint32_t DPI_CM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIPI_DSI_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIPI_DSI_CTRL_TOG &ref() { return *reinterpret_cast<volatile MIPI_DSI_CTRL_TOG*>(0x4081807C); }
};


} // namespace nVIDEO_MUX