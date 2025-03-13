#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// CSI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nCSI {


// CSI Control Register 1
union CSI_CR1 {
  
  // Pixel Bit
  enum class ePIXEL_BIT : uint32_t {
    // 8-bit data for each pixel
    ePIXEL_BIT_0 = 0,
    // 10-bit data for each pixel
    ePIXEL_BIT_1 = 1,
  };
  
  // Valid Pixel Clock Edge Select
  enum class eREDGE : uint32_t {
    // Pixel data is latched at the falling edge of CSI_PIXCLK
    eREDGE_0 = 0,
    // Pixel data is latched at the rising edge of CSI_PIXCLK
    eREDGE_1 = 1,
  };
  
  // Invert Pixel Clock Input
  enum class eINV_PCLK : uint32_t {
    // CSI_PIXCLK is directly applied to internal circuitry
    eINV_PCLK_0 = 0,
    // CSI_PIXCLK is inverted before applied to internal circuitry
    eINV_PCLK_1 = 1,
  };
  
  // Invert Data Input. This bit enables or disables internal inverters on the data lines.
  enum class eINV_DATA : uint32_t {
    // CSI_D[7:0] data lines are directly applied to internal circuitry
    eINV_DATA_0 = 0,
    // CSI_D[7:0] data lines are inverted before applied to internal circuitry
    eINV_DATA_1 = 1,
  };
  
  // Gated Clock Mode Enable
  enum class eGCLK_MODE : uint32_t {
    // Non-gated clock mode. All incoming pixel clocks are valid. HSYNC is ignored.
    eGCLK_MODE_0 = 0,
    // Gated clock mode. Pixel clock signal is valid only when HSYNC is active.
    eGCLK_MODE_1 = 1,
  };
  
  // Data Packing Direction
  enum class ePACK_DIR : uint32_t {
    // Pack from LSB first. For image data, 0x11, 0x22, 0x33, 0x44, it will appear as 0x44332211 in RX FIFO. For stat data, 0xAAAA, 0xBBBB, it will appear as 0xBBBBAAAA in STAT FIFO.
    ePACK_DIR_0 = 0,
    // Pack from MSB first. For image data, 0x11, 0x22, 0x33, 0x44, it will appear as 0x11223344 in RX FIFO. For stat data, 0xAAAA, 0xBBBB, it will appear as 0xAAAABBBB in STAT FIFO.
    ePACK_DIR_1 = 1,
  };
  
  // FIFO Clear Control
  enum class eFCC : uint32_t {
    // Asynchronous FIFO clear is selected.
    eFCC_0 = 0,
    // Synchronous FIFO clear is selected.
    eFCC_1 = 1,
  };
  
  // BT.656 Interface Enable. This bit selects the type of interface used.
  enum class eCCIR_EN : uint32_t {
    // Traditional interface is selected.
    eCCIR_EN_0 = 0,
    // BT.656 interface is selected.
    eCCIR_EN_1 = 1,
  };
  
  // HSYNC Polarity Select
  enum class eHSYNC_POL : uint32_t {
    // HSYNC is active low
    eHSYNC_POL_0 = 0,
    // HSYNC is active high
    eHSYNC_POL_1 = 1,
  };
  
  // Histogram Interrupt Enable
  enum class eHISTOGRAM_CALC_DONE_IE : uint32_t {
    // Histogram done interrupt disable
    eHISTOGRAM_CALC_DONE_IE_0 = 0,
    // Histogram done interrupt enable
    eHISTOGRAM_CALC_DONE_IE_1 = 1,
  };
  
  // Start Of Frame (SOF) Interrupt Enable. This bit enables the SOF interrupt.
  enum class eSOF_INTEN : uint32_t {
    // SOF interrupt disable
    eSOF_INTEN_0 = 0,
    // SOF interrupt enable
    eSOF_INTEN_1 = 1,
  };
  
  // SOF Interrupt Polarity. This bit controls the condition that generates an SOF interrupt.
  enum class eSOF_POL : uint32_t {
    // SOF interrupt is generated on SOF falling edge
    eSOF_POL_0 = 0,
    // SOF interrupt is generated on SOF rising edge
    eSOF_POL_1 = 1,
  };
  
  // RxFIFO Full Interrupt Enable. This bit enables the RxFIFO full interrupt.
  enum class eRXFF_INTEN : uint32_t {
    // RxFIFO full interrupt disable
    eRXFF_INTEN_0 = 0,
    // RxFIFO full interrupt enable
    eRXFF_INTEN_1 = 1,
  };
  
  // Frame Buffer1 DMA Transfer Done Interrupt Enable
  enum class eFB1_DMA_DONE_INTEN : uint32_t {
    // Frame Buffer1 DMA Transfer Done interrupt disable
    eFB1_DMA_DONE_INTEN_0 = 0,
    // Frame Buffer1 DMA Transfer Done interrupt enable
    eFB1_DMA_DONE_INTEN_1 = 1,
  };
  
  // Frame Buffer2 DMA Transfer Done Interrupt Enable
  enum class eFB2_DMA_DONE_INTEN : uint32_t {
    // Frame Buffer2 DMA Transfer Done interrupt disable
    eFB2_DMA_DONE_INTEN_0 = 0,
    // Frame Buffer2 DMA Transfer Done interrupt enable
    eFB2_DMA_DONE_INTEN_1 = 1,
  };
  
  // STATFIFO Full Interrupt Enable. This bit enables the STAT FIFO interrupt.
  enum class eSTATFF_INTEN : uint32_t {
    // STATFIFO full interrupt disable
    eSTATFF_INTEN_0 = 0,
    // STATFIFO full interrupt enable
    eSTATFF_INTEN_1 = 1,
  };
  
  // STATFIFO DMA Transfer Done Interrupt Enable
  enum class eSFF_DMA_DONE_INTEN : uint32_t {
    // STATFIFO DMA Transfer Done interrupt disable
    eSFF_DMA_DONE_INTEN_0 = 0,
    // STATFIFO DMA Transfer Done interrupt enable
    eSFF_DMA_DONE_INTEN_1 = 1,
  };
  
  // RxFIFO Overrun Interrupt Enable. This bit enables the RX FIFO overrun interrupt.
  enum class eRF_OR_INTEN : uint32_t {
    // RxFIFO overrun interrupt is disabled
    eRF_OR_INTEN_0 = 0,
    // RxFIFO overrun interrupt is enabled
    eRF_OR_INTEN_1 = 1,
  };
  
  // STAT FIFO Overrun Interrupt Enable. This bit enables the STATFIFO overrun interrupt.
  enum class eSF_OR_INTEN : uint32_t {
    // STATFIFO overrun interrupt is disabled
    eSF_OR_INTEN_0 = 0,
    // STATFIFO overrun interrupt is enabled
    eSF_OR_INTEN_1 = 1,
  };
  
  // Change Of Image Field (COF) Interrupt Enable
  enum class eCOF_INT_EN : uint32_t {
    // COF interrupt is disabled
    eCOF_INT_EN_0 = 0,
    // COF interrupt is enabled
    eCOF_INT_EN_1 = 1,
  };
  
  // Video mode select. This bit controls the video mode in BT.656 mode and TV decoder input.
  enum class eVIDEO_MODE : uint32_t {
    // Progressive mode is selected
    eVIDEO_MODE_0 = 0,
    // Interlace mode is selected
    eVIDEO_MODE_1 = 1,
  };
  
  // End-of-Frame Interrupt Enable. This bit enables and disables the EOF interrupt.
  enum class eEOF_INT_EN : uint32_t {
    // EOF interrupt is disabled.
    eEOF_INT_EN_0 = 0,
    // EOF interrupt is generated when RX count value is reached.
    eEOF_INT_EN_1 = 1,
  };
  
  // External VSYNC Enable
  enum class eEXT_VSYNC : uint32_t {
    // Internal VSYNC mode
    eEXT_VSYNC_0 = 0,
    // External VSYNC mode
    eEXT_VSYNC_1 = 1,
  };
  
  // SWAP 16-Bit Enable
  enum class eSWAP16_EN : uint32_t {
    // Disable swapping
    eSWAP16_EN_0 = 0,
    // Enable swapping
    eSWAP16_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Pixel Bit
    ePIXEL_BIT PIXEL_BIT : 1;
    // read-write - Valid Pixel Clock Edge Select
    eREDGE REDGE : 1;
    // read-write - Invert Pixel Clock Input
    eINV_PCLK INV_PCLK : 1;
    // read-write - Invert Data Input. This bit enables or disables internal inverters on the data lines.
    eINV_DATA INV_DATA : 1;
    // read-write - Gated Clock Mode Enable
    eGCLK_MODE GCLK_MODE : 1;
    // read-write - Asynchronous RXFIFO Clear
    uint32_t CLR_RXFIFO : 1;
    // read-write - Asynchronous STATFIFO Clear
    uint32_t CLR_STATFIFO : 1;
    // read-write - Data Packing Direction
    ePACK_DIR PACK_DIR : 1;
    // read-write - FIFO Clear Control
    eFCC FCC : 1;
    uint32_t _reserved_0 : 1;
    // read-write - BT.656 Interface Enable. This bit selects the type of interface used.
    eCCIR_EN CCIR_EN : 1;
    // read-write - HSYNC Polarity Select
    eHSYNC_POL HSYNC_POL : 1;
    // read-write - Histogram Interrupt Enable
    eHISTOGRAM_CALC_DONE_IE HISTOGRAM_CALC_DONE_IE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Start Of Frame (SOF) Interrupt Enable. This bit enables the SOF interrupt.
    eSOF_INTEN SOF_INTEN : 1;
    // read-write - SOF Interrupt Polarity. This bit controls the condition that generates an SOF interrupt.
    eSOF_POL SOF_POL : 1;
    // read-write - RxFIFO Full Interrupt Enable. This bit enables the RxFIFO full interrupt.
    eRXFF_INTEN RXFF_INTEN : 1;
    // read-write - Frame Buffer1 DMA Transfer Done Interrupt Enable
    eFB1_DMA_DONE_INTEN FB1_DMA_DONE_INTEN : 1;
    // read-write - Frame Buffer2 DMA Transfer Done Interrupt Enable
    eFB2_DMA_DONE_INTEN FB2_DMA_DONE_INTEN : 1;
    // read-write - STATFIFO Full Interrupt Enable. This bit enables the STAT FIFO interrupt.
    eSTATFF_INTEN STATFF_INTEN : 1;
    // read-write - STATFIFO DMA Transfer Done Interrupt Enable
    eSFF_DMA_DONE_INTEN SFF_DMA_DONE_INTEN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - RxFIFO Overrun Interrupt Enable. This bit enables the RX FIFO overrun interrupt.
    eRF_OR_INTEN RF_OR_INTEN : 1;
    // read-write - STAT FIFO Overrun Interrupt Enable. This bit enables the STATFIFO overrun interrupt.
    eSF_OR_INTEN SF_OR_INTEN : 1;
    // read-write - Change Of Image Field (COF) Interrupt Enable
    eCOF_INT_EN COF_INT_EN : 1;
    // read-write - Video mode select. This bit controls the video mode in BT.656 mode and TV decoder input.
    eVIDEO_MODE VIDEO_MODE : 1;
    uint32_t _reserved_3 : 1;
    // read-write - End-of-Frame Interrupt Enable. This bit enables and disables the EOF interrupt.
    eEOF_INT_EN EOF_INT_EN : 1;
    // read-write - External VSYNC Enable
    eEXT_VSYNC EXT_VSYNC : 1;
    // read-write - SWAP 16-Bit Enable
    eSWAP16_EN SWAP16_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR1() = delete;
  inline void Reset() volatile { this->value = 0x40000800; }
  static inline volatile CSI_CR1 &ref() { return *reinterpret_cast<volatile CSI_CR1*>(0x40800000); }
};

// CSI Control Register 2
union CSI_CR2 {
  
  // Horizontal Skip Count
  enum class eHSC : uint32_t {
    // Number of pixels to skip minus 1
    eHSC_0 = 0,
    // Number of pixels to skip minus 1
    eHSC_1 = 1,
    // Number of pixels to skip minus 1
    eHSC_2 = 2,
    // Number of pixels to skip minus 1
    eHSC_3 = 3,
    // Number of pixels to skip minus 1
    eHSC_4 = 4,
    // Number of pixels to skip minus 1
    eHSC_5 = 5,
    // Number of pixels to skip minus 1
    eHSC_6 = 6,
    // Number of pixels to skip minus 1
    eHSC_7 = 7,
    // Number of pixels to skip minus 1
    eHSC_8 = 8,
    // Number of pixels to skip minus 1
    eHSC_9 = 9,
  };
  
  // Vertical Skip Count. Contains the number of rows to skip. SCE must be 1, otherwise VSC is ignored.
  enum class eVSC : uint32_t {
    // Number of rows to skip minus 1
    eVSC_0 = 0,
    // Number of rows to skip minus 1
    eVSC_1 = 1,
    // Number of rows to skip minus 1
    eVSC_2 = 2,
    // Number of rows to skip minus 1
    eVSC_3 = 3,
    // Number of rows to skip minus 1
    eVSC_4 = 4,
    // Number of rows to skip minus 1
    eVSC_5 = 5,
    // Number of rows to skip minus 1
    eVSC_6 = 6,
    // Number of rows to skip minus 1
    eVSC_7 = 7,
    // Number of rows to skip minus 1
    eVSC_8 = 8,
    // Number of rows to skip minus 1
    eVSC_9 = 9,
  };
  
  // Live View Resolution Mode. Selects the grid size used for live view resolution.
  enum class eLVRM : uint32_t {
    // 512 x 384
    eLVRM_0 = 0,
    // 448 x 336
    eLVRM_1 = 1,
    // 384 x 288
    eLVRM_2 = 2,
    // 384 x 256
    eLVRM_3 = 3,
    // 320 x 240
    eLVRM_4 = 4,
    // 288 x 216
    eLVRM_5 = 5,
    // 400 x 300
    eLVRM_6 = 6,
  };
  
  // Bayer Tile Start. Controls the Bayer pattern starting point.
  enum class eBTS : uint32_t {
    // GR
    eBTS_0 = 0,
    // RG
    eBTS_1 = 1,
    // BG
    eBTS_2 = 2,
    // GB
    eBTS_3 = 3,
  };
  
  // Skip Count Enable
  enum class eSCE : uint32_t {
    // Skip count disable
    eSCE_0 = 0,
    // Skip count enable
    eSCE_1 = 1,
  };
  
  // Auto Focus Spread. Selects which green pixels are used for auto-focus.
  enum class eAFS : uint32_t {
    // Abs Diff on consecutive green pixels
    eAFS_0 = 0,
    // Abs Diff on every third green pixels
    eAFS_1 = 1,
    // Abs Diff on every four green pixels
    eAFS_2 = 2,
  };
  
  // Double Resolution Mode. Controls size of statistics grid.
  enum class eDRM : uint32_t {
    // Stats grid of 8 x 6
    eDRM_0 = 0,
    // Stats grid of 8 x 12
    eDRM_1 = 1,
  };
  
  // Burst Type of DMA Transfer from STATFIFO. Selects the burst type of DMA transfer from STATFIFO.
  enum class eDMA_BURST_TYPE_SFF : uint32_t {
    // INCR8
    eDMA_BURST_TYPE_SFF_0 = 0,
    // INCR4
    eDMA_BURST_TYPE_SFF_1 = 1,
    // INCR16
    eDMA_BURST_TYPE_SFF_3 = 3,
  };
  
  // Burst Type of DMA Transfer from RxFIFO. Selects the burst type of DMA transfer from RxFIFO.
  enum class eDMA_BURST_TYPE_RFF : uint32_t {
    // INCR8
    eDMA_BURST_TYPE_RFF_0 = 0,
    // INCR4
    eDMA_BURST_TYPE_RFF_1 = 1,
    // INCR16
    eDMA_BURST_TYPE_RFF_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Horizontal Skip Count
    eHSC HSC : 8;
    // read-write - Vertical Skip Count. Contains the number of rows to skip. SCE must be 1, otherwise VSC is ignored.
    eVSC VSC : 8;
    // read-write - Live View Resolution Mode. Selects the grid size used for live view resolution.
    eLVRM LVRM : 3;
    // read-write - Bayer Tile Start. Controls the Bayer pattern starting point.
    eBTS BTS : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Skip Count Enable
    eSCE SCE : 1;
    // read-write - Auto Focus Spread. Selects which green pixels are used for auto-focus.
    eAFS AFS : 2;
    // read-write - Double Resolution Mode. Controls size of statistics grid.
    eDRM DRM : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Burst Type of DMA Transfer from STATFIFO. Selects the burst type of DMA transfer from STATFIFO.
    eDMA_BURST_TYPE_SFF DMA_BURST_TYPE_SFF : 2;
    // read-write - Burst Type of DMA Transfer from RxFIFO. Selects the burst type of DMA transfer from RxFIFO.
    eDMA_BURST_TYPE_RFF DMA_BURST_TYPE_RFF : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR2 &ref() { return *reinterpret_cast<volatile CSI_CR2*>(0x40800004); }
};

// CSI Control Register 3
union CSI_CR3 {
  
  // Automatic Error Correction Enable
  enum class eECC_AUTO_EN : uint32_t {
    // Auto Error correction is disabled.
    eECC_AUTO_EN_0 = 0,
    // Auto Error correction is enabled.
    eECC_AUTO_EN_1 = 1,
  };
  
  // Error Detection Interrupt Enable
  enum class eECC_INT_EN : uint32_t {
    // No interrupt is generated when error is detected. Only the status bit ECC_INT is set.
    eECC_INT_EN_0 = 0,
    // Interrupt is generated when error is detected.
    eECC_INT_EN_1 = 1,
  };
  
  // Dummy Zero Packing Enable
  enum class eZERO_PACK_EN : uint32_t {
    // Zero packing disabled
    eZERO_PACK_EN_0 = 0,
    // Zero packing enabled
    eZERO_PACK_EN_1 = 1,
  };
  
  // 16-bit Sensor Mode
  enum class eSENSOR_16BITS : uint32_t {
    // Only one 8-bit sensor is connected.
    eSENSOR_16BITS_0 = 0,
    // One 16-bit sensor is connected.
    eSENSOR_16BITS_1 = 1,
  };
  
  // RxFIFO Full Level
  enum class eRxFF_LEVEL : uint32_t {
    // 4 Double words
    eRxFF_LEVEL_0 = 0,
    // 8 Double words
    eRxFF_LEVEL_1 = 1,
    // 16 Double words
    eRxFF_LEVEL_2 = 2,
    // 24 Double words
    eRxFF_LEVEL_3 = 3,
    // 32 Double words
    eRxFF_LEVEL_4 = 4,
    // 48 Double words
    eRxFF_LEVEL_5 = 5,
    // 64 Double words
    eRxFF_LEVEL_6 = 6,
    // 96 Double words
    eRxFF_LEVEL_7 = 7,
  };
  
  // Hresponse Error Enable. This bit enables the hresponse (AHB protocol standard) error interrupt.
  enum class eHRESP_ERR_EN : uint32_t {
    // Disable hresponse error interrupt
    eHRESP_ERR_EN_0 = 0,
    // Enable hresponse error interrupt
    eHRESP_ERR_EN_1 = 1,
  };
  
  // STATFIFO Full Level
  enum class eSTATFF_LEVEL : uint32_t {
    // 4 Double words
    eSTATFF_LEVEL_0 = 0,
    // 8 Double words
    eSTATFF_LEVEL_1 = 1,
    // 12 Double words
    eSTATFF_LEVEL_2 = 2,
    // 16 Double words
    eSTATFF_LEVEL_3 = 3,
    // 24 Double words
    eSTATFF_LEVEL_4 = 4,
    // 32 Double words
    eSTATFF_LEVEL_5 = 5,
    // 48 Double words
    eSTATFF_LEVEL_6 = 6,
    // 64 Double words
    eSTATFF_LEVEL_7 = 7,
  };
  
  // DMA Request Enable for STATFIFO
  enum class eDMA_REQ_EN_SFF : uint32_t {
    // Disable the dma request
    eDMA_REQ_EN_SFF_0 = 0,
    // Enable the dma request
    eDMA_REQ_EN_SFF_1 = 1,
  };
  
  // DMA Request Enable for RxFIFO
  enum class eDMA_REQ_EN_RFF : uint32_t {
    // Disable the dma request
    eDMA_REQ_EN_RFF_0 = 0,
    // Enable the dma request
    eDMA_REQ_EN_RFF_1 = 1,
  };
  
  // Reflash DMA Controller for STATFIFO
  enum class eDMA_REFLASH_SFF : uint32_t {
    // No reflashing
    eDMA_REFLASH_SFF_0 = 0,
    // Reflash the embedded DMA controller
    eDMA_REFLASH_SFF_1 = 1,
  };
  
  // Reflash DMA Controller for RxFIFO
  enum class eDMA_REFLASH_RFF : uint32_t {
    // No reflashing
    eDMA_REFLASH_RFF_0 = 0,
    // Reflash the embedded DMA controller
    eDMA_REFLASH_RFF_1 = 1,
  };
  
  // Frame Count Reset. Resets the Frame Counter. (Cleared automatically after reset is done)
  enum class eFRMCNT_RST : uint32_t {
    // Do not reset
    eFRMCNT_RST_0 = 0,
    // Reset frame counter immediately
    eFRMCNT_RST_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Automatic Error Correction Enable
    eECC_AUTO_EN ECC_AUTO_EN : 1;
    // read-write - Error Detection Interrupt Enable
    eECC_INT_EN ECC_INT_EN : 1;
    // read-write - Dummy Zero Packing Enable
    eZERO_PACK_EN ZERO_PACK_EN : 1;
    // read-write - 16-bit Sensor Mode
    eSENSOR_16BITS SENSOR_16BITS : 1;
    // read-write - RxFIFO Full Level
    eRxFF_LEVEL RxFF_LEVEL : 3;
    // read-write - Hresponse Error Enable. This bit enables the hresponse (AHB protocol standard) error interrupt.
    eHRESP_ERR_EN HRESP_ERR_EN : 1;
    // read-write - STATFIFO Full Level
    eSTATFF_LEVEL STATFF_LEVEL : 3;
    // read-write - DMA Request Enable for STATFIFO
    eDMA_REQ_EN_SFF DMA_REQ_EN_SFF : 1;
    // read-write - DMA Request Enable for RxFIFO
    eDMA_REQ_EN_RFF DMA_REQ_EN_RFF : 1;
    // read-write - Reflash DMA Controller for STATFIFO
    eDMA_REFLASH_SFF DMA_REFLASH_SFF : 1;
    // read-write - Reflash DMA Controller for RxFIFO
    eDMA_REFLASH_RFF DMA_REFLASH_RFF : 1;
    // read-write - Frame Count Reset. Resets the Frame Counter. (Cleared automatically after reset is done)
    eFRMCNT_RST FRMCNT_RST : 1;
    // read-write - Frame Counter
    uint32_t FRMCNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR3 &ref() { return *reinterpret_cast<volatile CSI_CR3*>(0x40800008); }
};

// CSI Statistic FIFO Register
union CSI_STATFIFO {
  
  // Bit field definition.
  struct {
    // read-only - Static data from sensor
    uint32_t STAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_STATFIFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_STATFIFO &ref() { return *reinterpret_cast<volatile CSI_STATFIFO*>(0x4080000C); }
};

// CSI RX FIFO Register
union CSI_RFIFO {
  
  // Bit field definition.
  struct {
    // read-only - Received image data
    uint32_t IMAGE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_RFIFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_RFIFO &ref() { return *reinterpret_cast<volatile CSI_RFIFO*>(0x40800010); }
};

// CSI RX Count Register
union CSI_RXCNT {
  
  // Bit field definition.
  struct {
    // read-write - RxFIFO Count
    uint32_t RXCNT : 22;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_RXCNT() = delete;
  inline void Reset() volatile { this->value = 0x00009600; }
  static inline volatile CSI_RXCNT &ref() { return *reinterpret_cast<volatile CSI_RXCNT*>(0x40800014); }
};

// CSI Status Register
union CSI_SR {
  
  // RXFIFO Data Ready
  enum class eDRDY : uint32_t {
    // No data (word) is ready
    eDRDY_0 = 0,
    // At least 1 datum (word) is ready in RXFIFO.
    eDRDY_1 = 1,
  };
  
  // BT
  enum class eECC_INT : uint32_t {
    // No error detected
    eECC_INT_0 = 0,
    // Error is detected in BT.656 coding
    eECC_INT_1 = 1,
  };
  
  // no description available
  enum class eHISTOGRAM_CALC_DONE_INT : uint32_t {
    // Histogram calculation is not finished
    eHISTOGRAM_CALC_DONE_INT_0 = 0,
    // Histogram calculation is done and driver can access the PIXEL_COUNTERS(CSI_CSICR21~CSI_CSICR276) to get the gray level
    eHISTOGRAM_CALC_DONE_INT_1 = 1,
  };
  
  // Hresponse Error Interrupt Status
  enum class eHRESP_ERR_INT : uint32_t {
    // No hresponse error.
    eHRESP_ERR_INT_0 = 0,
    // Hresponse error is detected.
    eHRESP_ERR_INT_1 = 1,
  };
  
  // Change Of Field Interrupt Status
  enum class eCOF_INT : uint32_t {
    // Video field has no change.
    eCOF_INT_0 = 0,
    // Change of video field is detected.
    eCOF_INT_1 = 1,
  };
  
  // BT
  enum class eF1_INT : uint32_t {
    // Field 1 of video is not detected.
    eF1_INT_0 = 0,
    // Field 1 of video is about to start.
    eF1_INT_1 = 1,
  };
  
  // BT
  enum class eF2_INT : uint32_t {
    // Field 2 of video is not detected
    eF2_INT_0 = 0,
    // Field 2 of video is about to start
    eF2_INT_1 = 1,
  };
  
  // Start of Frame Interrupt Status. Indicates when SOF is detected. (Cleared by writing 1)
  enum class eSOF_INT : uint32_t {
    // SOF is not detected.
    eSOF_INT_0 = 0,
    // SOF is detected.
    eSOF_INT_1 = 1,
  };
  
  // End of Frame (EOF) Interrupt Status. Indicates when EOF is detected. (Cleared by writing 1)
  enum class eEOF_INT : uint32_t {
    // EOF is not detected.
    eEOF_INT_0 = 0,
    // EOF is detected.
    eEOF_INT_1 = 1,
  };
  
  // RXFIFO Full Interrupt Status
  enum class eRxFF_INT : uint32_t {
    // RxFIFO is not full.
    eRxFF_INT_0 = 0,
    // RxFIFO is full.
    eRxFF_INT_1 = 1,
  };
  
  // DMA Transfer Done in Frame Buffer1
  enum class eDMA_TSF_DONE_FB1 : uint32_t {
    // DMA transfer is not completed.
    eDMA_TSF_DONE_FB1_0 = 0,
    // DMA transfer is completed.
    eDMA_TSF_DONE_FB1_1 = 1,
  };
  
  // DMA Transfer Done in Frame Buffer2
  enum class eDMA_TSF_DONE_FB2 : uint32_t {
    // DMA transfer is not completed.
    eDMA_TSF_DONE_FB2_0 = 0,
    // DMA transfer is completed.
    eDMA_TSF_DONE_FB2_1 = 1,
  };
  
  // STATFIFO Full Interrupt Status
  enum class eSTATFF_INT : uint32_t {
    // STATFIFO is not full.
    eSTATFF_INT_0 = 0,
    // STATFIFO is full.
    eSTATFF_INT_1 = 1,
  };
  
  // DMA Transfer Done from StatFIFO
  enum class eDMA_TSF_DONE_SFF : uint32_t {
    // DMA transfer is not completed.
    eDMA_TSF_DONE_SFF_0 = 0,
    // DMA transfer is completed.
    eDMA_TSF_DONE_SFF_1 = 1,
  };
  
  // RxFIFO Overrun Interrupt Status
  enum class eRF_OR_INT : uint32_t {
    // RXFIFO has not overflowed.
    eRF_OR_INT_0 = 0,
    // RXFIFO has overflowed.
    eRF_OR_INT_1 = 1,
  };
  
  // STATFIFO Overrun Interrupt Status
  enum class eSF_OR_INT : uint32_t {
    // STATFIFO has not overflowed.
    eSF_OR_INT_0 = 0,
    // STATFIFO has overflowed.
    eSF_OR_INT_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - RXFIFO Data Ready
    eDRDY DRDY : 1;
    // read-write - BT
    eECC_INT ECC_INT : 1;
    // read-write - no description available
    eHISTOGRAM_CALC_DONE_INT HISTOGRAM_CALC_DONE_INT : 1;
    uint32_t _reserved_0 : 4;
    // read-write - Hresponse Error Interrupt Status
    eHRESP_ERR_INT HRESP_ERR_INT : 1;
    uint32_t _reserved_1 : 5;
    // read-write - Change Of Field Interrupt Status
    eCOF_INT COF_INT : 1;
    // read-write - BT
    eF1_INT F1_INT : 1;
    // read-write - BT
    eF2_INT F2_INT : 1;
    // read-write - Start of Frame Interrupt Status. Indicates when SOF is detected. (Cleared by writing 1)
    eSOF_INT SOF_INT : 1;
    // read-write - End of Frame (EOF) Interrupt Status. Indicates when EOF is detected. (Cleared by writing 1)
    eEOF_INT EOF_INT : 1;
    // read-write - RXFIFO Full Interrupt Status
    eRxFF_INT RxFF_INT : 1;
    // read-write - DMA Transfer Done in Frame Buffer1
    eDMA_TSF_DONE_FB1 DMA_TSF_DONE_FB1 : 1;
    // read-write - DMA Transfer Done in Frame Buffer2
    eDMA_TSF_DONE_FB2 DMA_TSF_DONE_FB2 : 1;
    // read-write - STATFIFO Full Interrupt Status
    eSTATFF_INT STATFF_INT : 1;
    // read-write - DMA Transfer Done from StatFIFO
    eDMA_TSF_DONE_SFF DMA_TSF_DONE_SFF : 1;
    uint32_t _reserved_2 : 1;
    // read-write - RxFIFO Overrun Interrupt Status
    eRF_OR_INT RF_OR_INT : 1;
    // read-write - STATFIFO Overrun Interrupt Status
    eSF_OR_INT SF_OR_INT : 1;
    // read-write - When DMA field 1 is complete, this bit will be set to 1(clear by writing 1).
    uint32_t DMA_FIELD1_DONE : 1;
    // read-write - When DMA field 0 is complete, this bit will be set to 1(clear by writing 1).
    uint32_t DMA_FIELD0_DONE : 1;
    // read-write - When using base address switching enable, this bit will be 1 when switching occur before DMA complete
    uint32_t BASEADDR_CHHANGE_ERROR : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_SR() = delete;
  inline void Reset() volatile { this->value = 0x80004000; }
  static inline volatile CSI_SR &ref() { return *reinterpret_cast<volatile CSI_SR*>(0x40800018); }
};

// CSI DMA Start Address Register - for STATFIFO
union CSI_DMASA_STATFIFO {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - DMA Start Address for STATFIFO
    uint32_t DMA_START_ADDR_SFF : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_DMASA_STATFIFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_DMASA_STATFIFO &ref() { return *reinterpret_cast<volatile CSI_DMASA_STATFIFO*>(0x40800020); }
};

// CSI DMA Transfer Size Register - for STATFIFO
union CSI_DMATS_STATFIFO {
  
  // Bit field definition.
  struct {
    // read-write - DMA Transfer Size for STATFIFO
    uint32_t DMA_TSF_SIZE_SFF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_DMATS_STATFIFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_DMATS_STATFIFO &ref() { return *reinterpret_cast<volatile CSI_DMATS_STATFIFO*>(0x40800024); }
};

// CSI DMA Start Address Register - for Frame Buffer1
union CSI_DMASA_FB1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - DMA Start Address in Frame Buffer1
    uint32_t DMA_START_ADDR_FB1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_DMASA_FB1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_DMASA_FB1 &ref() { return *reinterpret_cast<volatile CSI_DMASA_FB1*>(0x40800028); }
};

// CSI DMA Transfer Size Register - for Frame Buffer2
union CSI_DMASA_FB2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - DMA Start Address in Frame Buffer2
    uint32_t DMA_START_ADDR_FB2 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_DMASA_FB2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_DMASA_FB2 &ref() { return *reinterpret_cast<volatile CSI_DMASA_FB2*>(0x4080002C); }
};

// CSI Frame Buffer Parameter Register
union CSI_FBUF_PARA {
  
  // Bit field definition.
  struct {
    // read-write - Frame Buffer Parameter
    uint32_t FBUF_STRIDE : 16;
    // read-write - DEINTERLACE_STRIDE is only used in the deinterlace mode
    uint32_t DEINTERLACE_STRIDE : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_FBUF_PARA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_FBUF_PARA &ref() { return *reinterpret_cast<volatile CSI_FBUF_PARA*>(0x40800030); }
};

// CSI Image Parameter Register
union CSI_IMAG_PARA {
  
  // Bit field definition.
  struct {
    // read-write - Image Height. Indicates how many pixels in a column of the image from the sensor.
    uint32_t IMAGE_HEIGHT : 16;
    // read-write - This field indicates the number of active pixel cycles per line
    uint32_t IMAGE_WIDTH : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_IMAG_PARA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_IMAG_PARA &ref() { return *reinterpret_cast<volatile CSI_IMAG_PARA*>(0x40800034); }
};

// CSI Control Register 18
union CSI_CR18 {
  
  // This bit is used to select NTSC/PAL mode When input is TVDECODER or standard BT.656 video.
  enum class eNTSC_EN : uint32_t {
    // PAL
    eNTSC_EN_0 = 0,
    // NTSC
    eNTSC_EN_1 = 1,
  };
  
  // This bit is used to select the output method When input is TVDECODER or standard BT.656 video.
  enum class eDEINTERLACE_EN : uint32_t {
    // Deinterlace disabled
    eDEINTERLACE_EN_0 = 0,
    // Deinterlace enabled
    eDEINTERLACE_EN_1 = 1,
  };
  
  // Enable bit for Parallel RGB888/YUV444 24bit input
  enum class ePARALLEL24_EN : uint32_t {
    // Input is disabled
    ePARALLEL24_EN_0 = 0,
    // Input is enabled
    ePARALLEL24_EN_1 = 1,
  };
  
  // CSI 2 base addresses switching method. When using this bit, BASEADDR_SWITCH_EN is 1.
  enum class eBASEADDR_SWITCH_SEL : uint32_t {
    // Switching base address at the edge of the vsync
    eBASEADDR_SWITCH_SEL_0 = 0,
    // Switching base address at the edge of the first data of each frame
    eBASEADDR_SWITCH_SEL_1 = 1,
  };
  
  // In interlace mode, field 0 means interrupt enabled.
  enum class eFIELD0_DONE_IE : uint32_t {
    // Interrupt disabled
    eFIELD0_DONE_IE_0 = 0,
    // Interrupt enabled
    eFIELD0_DONE_IE_1 = 1,
  };
  
  // When in interlace mode, field 1 done interrupt enable.
  enum class eDMA_FIELD1_DONE_IE : uint32_t {
    // Interrupt disabled
    eDMA_FIELD1_DONE_IE_0 = 0,
    // Interrupt enabled
    eDMA_FIELD1_DONE_IE_1 = 1,
  };
  
  // Choosing the last DMA request condition
  enum class eLAST_DMA_REQ_SEL : uint32_t {
    // fifo_full_level
    eLAST_DMA_REQ_SEL_0 = 0,
    // hburst_length
    eLAST_DMA_REQ_SEL_1 = 1,
  };
  
  // Base address change error interrupt enable signal.
  enum class eBASEADDR_CHANGE_ERROR_IE : uint32_t {
    // Interrupt disabled
    eBASEADDR_CHANGE_ERROR_IE_0 = 0,
    // Interrupt enabled
    eBASEADDR_CHANGE_ERROR_IE_1 = 1,
  };
  
  // Output is 32-bit format.
  enum class eRGB888A_FORMAT_SEL : uint32_t {
    // {8'h0, data[23:0]}
    eRGB888A_FORMAT_SEL_0 = 0,
    // {data[23:0], 8'h0}
    eRGB888A_FORMAT_SEL_1 = 1,
  };
  
  // These bits used to choose the method to mask the CSI input.
  enum class eMASK_OPTION : uint32_t {
    // Writing to memory (OCRAM or external DDR) from first completely frame, when using this option, the CSI_ENABLE should be 1.
    eMASK_OPTION_0 = 0,
    // Writing to memory when CSI_ENABLE is 1.
    eMASK_OPTION_1 = 1,
    // Writing to memory from second completely frame, when using this option, the CSI_ENABLE should be 1.
    eMASK_OPTION_2 = 2,
    // Writing to memory when data comes in, not matter the CSI_ENABLE is 1 or 0.
    eMASK_OPTION_3 = 3,
  };
  
  // Double component per clock cycle in YUV422 formats.
  enum class eMIPI_DOUBLE_CMPNT : uint32_t {
    // Single component per clock cycle (half pixel per clock cycle)
    eMIPI_DOUBLE_CMPNT_0 = 0,
    // Double component per clock cycle (a pixel per clock cycle)
    eMIPI_DOUBLE_CMPNT_1 = 1,
  };
  
  // no description available
  enum class eDATA_FROM_MIPI : uint32_t {
    // Data from parallel sensor
    eDATA_FROM_MIPI_0 = 0,
    // Data from MIPI
    eDATA_FROM_MIPI_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - This bit is used to select NTSC/PAL mode When input is TVDECODER or standard BT.656 video.
    eNTSC_EN NTSC_EN : 1;
    // read-write - When input is from TV decoder, this bit is enabled.
    uint32_t TVDECODER_IN_EN : 1;
    // read-write - This bit is used to select the output method When input is TVDECODER or standard BT.656 video.
    eDEINTERLACE_EN DEINTERLACE_EN : 1;
    // read-write - Enable bit for Parallel RGB888/YUV444 24bit input
    ePARALLEL24_EN PARALLEL24_EN : 1;
    // read-write - When this bit is enabled, CSI DMA will switch the base address according to BASEADDR_SWITCH_SEL rather than automatically by DMA completed
    uint32_t BASEADDR_SWITCH_EN : 1;
    // read-write - CSI 2 base addresses switching method. When using this bit, BASEADDR_SWITCH_EN is 1.
    eBASEADDR_SWITCH_SEL BASEADDR_SWITCH_SEL : 1;
    // read-write - In interlace mode, field 0 means interrupt enabled.
    eFIELD0_DONE_IE FIELD0_DONE_IE : 1;
    // read-write - When in interlace mode, field 1 done interrupt enable.
    eDMA_FIELD1_DONE_IE DMA_FIELD1_DONE_IE : 1;
    // read-write - Choosing the last DMA request condition
    eLAST_DMA_REQ_SEL LAST_DMA_REQ_SEL : 1;
    // read-write - Base address change error interrupt enable signal.
    eBASEADDR_CHANGE_ERROR_IE BASEADDR_CHANGE_ERROR_IE : 1;
    // read-write - Output is 32-bit format.
    eRGB888A_FORMAT_SEL RGB888A_FORMAT_SEL : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Hprot value in AHB bus protocol.
    uint32_t AHB_HPROT : 4;
    uint32_t _reserved_1 : 2;
    // read-write - These bits used to choose the method to mask the CSI input.
    eMASK_OPTION MASK_OPTION : 2;
    // read-write - Double component per clock cycle in YUV422 formats.
    eMIPI_DOUBLE_CMPNT MIPI_DOUBLE_CMPNT : 1;
    // read-write - It only works in MIPI CSI YUV422 double component mode.
    uint32_t MIPI_YU_SWAP : 1;
    // read-write - no description available
    eDATA_FROM_MIPI DATA_FROM_MIPI : 1;
    uint32_t _reserved_2 : 1;
    // read-write - When the line width are not the multiple of the burst length, assert this bit.
    uint32_t LINE_STRIDE_EN : 1;
    // read-only - Image Data Format
    uint32_t MIPI_DATA_FORMAT : 6;
    // read-write - CSI global enable signal
    uint32_t CSI_ENABLE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR18() = delete;
  inline void Reset() volatile { this->value = 0x0002D000; }
  static inline volatile CSI_CR18 &ref() { return *reinterpret_cast<volatile CSI_CR18*>(0x40800048); }
};

// CSI Control Register 19
union CSI_CR19 {
  
  // Bit field definition.
  struct {
    // read-write - This byte stores the highest FIFO level achieved by CSI FIFO timely and will be clear by writing 8'ff to it
    uint32_t DMA_RFIFO_HIGHEST_FIFO_LEVEL : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR19 &ref() { return *reinterpret_cast<volatile CSI_CR19*>(0x4080004C); }
};

// CSI Control Register 20
union CSI_CR20 {
  
  // no description available
  enum class eBINARY_EN : uint32_t {
    // Output is Y8 format(8 bits each pixel)
    eBINARY_EN_0 = 0,
    // Output is Y1 format(1 bit each pixel)
    eBINARY_EN_1 = 1,
  };
  
  // no description available
  enum class eQR_DATA_FORMAT : uint32_t {
    // YU YV one cycle per 1 pixel input
    eQR_DATA_FORMAT_0 = 0,
    // UY VY one cycle per1 pixel input
    eQR_DATA_FORMAT_1 = 1,
    // Y U Y V two cycles per 1 pixel input
    eQR_DATA_FORMAT_2 = 2,
    // U Y V Y two cycles per 1 pixel input
    eQR_DATA_FORMAT_3 = 3,
    // YUV one cycle per 1 pixel input
    eQR_DATA_FORMAT_4 = 4,
    // Y U V three cycles per 1 pixel input
    eQR_DATA_FORMAT_5 = 5,
  };
  
  // no description available
  enum class eBIG_END : uint32_t {
    // The newest (most recent) data will be assigned the lowest position when store to memory.
    eBIG_END_0 = 0,
    // The newest (most recent) data will be assigned the highest position when store to memory.
    eBIG_END_1 = 1,
  };
  
  // no description available
  enum class e_10BIT_NEW_EN : uint32_t {
    // When input 8bits data, it will use the data[9:2]
    e10BIT_NEW_EN_0 = 0,
    // If input is 10bits data, it will use the data[7:0] (optional)
    e10BIT_NEW_EN_1 = 1,
  };
  
  // Histogram enable
  enum class eHISTOGRAM_EN : uint32_t {
    // Histogram disable
    eHISTOGRAM_EN_0 = 0,
    // Histogram enable
    eHISTOGRAM_EN_1 = 1,
  };
  
  // Gray scale mode enable
  enum class eQRCODE_EN : uint32_t {
    // Normal mode
    eQRCODE_EN_0 = 0,
    // Gray scale mode
    eQRCODE_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - THRESHOLD used for binary function. When data value > THRESHOLD, output will be 1 Else will be 0.
    uint32_t THRESHOLD : 8;
    // read-write - no description available
    eBINARY_EN BINARY_EN : 1;
    // read-write - no description available
    eQR_DATA_FORMAT QR_DATA_FORMAT : 3;
    // read-write - no description available
    eBIG_END BIG_END : 1;
    uint32_t _reserved_0 : 16;
    // read-write - no description available
    e_10BIT_NEW_EN _10BIT_NEW_EN : 1;
    // read-write - Histogram enable
    eHISTOGRAM_EN HISTOGRAM_EN : 1;
    // read-write - Gray scale mode enable
    eQRCODE_EN QRCODE_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR20 &ref() { return *reinterpret_cast<volatile CSI_CR20*>(0x40800050); }
};

// CSI Control Register
union CSI_CR21 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR21 &ref() { return *reinterpret_cast<volatile CSI_CR21*>(0x40800054); }
};
// CSI Control Register
union CSI_CR22 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR22 &ref() { return *reinterpret_cast<volatile CSI_CR22*>(0x40800058); }
};
// CSI Control Register
union CSI_CR23 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR23 &ref() { return *reinterpret_cast<volatile CSI_CR23*>(0x4080005C); }
};
// CSI Control Register
union CSI_CR24 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR24 &ref() { return *reinterpret_cast<volatile CSI_CR24*>(0x40800060); }
};
// CSI Control Register
union CSI_CR25 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR25 &ref() { return *reinterpret_cast<volatile CSI_CR25*>(0x40800064); }
};
// CSI Control Register
union CSI_CR26 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR26 &ref() { return *reinterpret_cast<volatile CSI_CR26*>(0x40800068); }
};
// CSI Control Register
union CSI_CR27 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR27 &ref() { return *reinterpret_cast<volatile CSI_CR27*>(0x4080006C); }
};
// CSI Control Register
union CSI_CR28 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR28 &ref() { return *reinterpret_cast<volatile CSI_CR28*>(0x40800070); }
};
// CSI Control Register
union CSI_CR29 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR29 &ref() { return *reinterpret_cast<volatile CSI_CR29*>(0x40800074); }
};
// CSI Control Register
union CSI_CR30 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR30 &ref() { return *reinterpret_cast<volatile CSI_CR30*>(0x40800078); }
};
// CSI Control Register
union CSI_CR31 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR31 &ref() { return *reinterpret_cast<volatile CSI_CR31*>(0x4080007C); }
};
// CSI Control Register
union CSI_CR32 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR32 &ref() { return *reinterpret_cast<volatile CSI_CR32*>(0x40800080); }
};
// CSI Control Register
union CSI_CR33 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR33 &ref() { return *reinterpret_cast<volatile CSI_CR33*>(0x40800084); }
};
// CSI Control Register
union CSI_CR34 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR34 &ref() { return *reinterpret_cast<volatile CSI_CR34*>(0x40800088); }
};
// CSI Control Register
union CSI_CR35 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR35 &ref() { return *reinterpret_cast<volatile CSI_CR35*>(0x4080008C); }
};
// CSI Control Register
union CSI_CR36 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR36 &ref() { return *reinterpret_cast<volatile CSI_CR36*>(0x40800090); }
};
// CSI Control Register
union CSI_CR37 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR37 &ref() { return *reinterpret_cast<volatile CSI_CR37*>(0x40800094); }
};
// CSI Control Register
union CSI_CR38 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR38 &ref() { return *reinterpret_cast<volatile CSI_CR38*>(0x40800098); }
};
// CSI Control Register
union CSI_CR39 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR39 &ref() { return *reinterpret_cast<volatile CSI_CR39*>(0x4080009C); }
};
// CSI Control Register
union CSI_CR40 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR40 &ref() { return *reinterpret_cast<volatile CSI_CR40*>(0x408000A0); }
};
// CSI Control Register
union CSI_CR41 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR41 &ref() { return *reinterpret_cast<volatile CSI_CR41*>(0x408000A4); }
};
// CSI Control Register
union CSI_CR42 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR42 &ref() { return *reinterpret_cast<volatile CSI_CR42*>(0x408000A8); }
};
// CSI Control Register
union CSI_CR43 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR43 &ref() { return *reinterpret_cast<volatile CSI_CR43*>(0x408000AC); }
};
// CSI Control Register
union CSI_CR44 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR44 &ref() { return *reinterpret_cast<volatile CSI_CR44*>(0x408000B0); }
};
// CSI Control Register
union CSI_CR45 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR45 &ref() { return *reinterpret_cast<volatile CSI_CR45*>(0x408000B4); }
};
// CSI Control Register
union CSI_CR46 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR46 &ref() { return *reinterpret_cast<volatile CSI_CR46*>(0x408000B8); }
};
// CSI Control Register
union CSI_CR47 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR47 &ref() { return *reinterpret_cast<volatile CSI_CR47*>(0x408000BC); }
};
// CSI Control Register
union CSI_CR48 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR48 &ref() { return *reinterpret_cast<volatile CSI_CR48*>(0x408000C0); }
};
// CSI Control Register
union CSI_CR49 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR49 &ref() { return *reinterpret_cast<volatile CSI_CR49*>(0x408000C4); }
};
// CSI Control Register
union CSI_CR50 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR50 &ref() { return *reinterpret_cast<volatile CSI_CR50*>(0x408000C8); }
};
// CSI Control Register
union CSI_CR51 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR51 &ref() { return *reinterpret_cast<volatile CSI_CR51*>(0x408000CC); }
};
// CSI Control Register
union CSI_CR52 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR52 &ref() { return *reinterpret_cast<volatile CSI_CR52*>(0x408000D0); }
};
// CSI Control Register
union CSI_CR53 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR53 &ref() { return *reinterpret_cast<volatile CSI_CR53*>(0x408000D4); }
};
// CSI Control Register
union CSI_CR54 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR54 &ref() { return *reinterpret_cast<volatile CSI_CR54*>(0x408000D8); }
};
// CSI Control Register
union CSI_CR55 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR55 &ref() { return *reinterpret_cast<volatile CSI_CR55*>(0x408000DC); }
};
// CSI Control Register
union CSI_CR56 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR56 &ref() { return *reinterpret_cast<volatile CSI_CR56*>(0x408000E0); }
};
// CSI Control Register
union CSI_CR57 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR57 &ref() { return *reinterpret_cast<volatile CSI_CR57*>(0x408000E4); }
};
// CSI Control Register
union CSI_CR58 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR58 &ref() { return *reinterpret_cast<volatile CSI_CR58*>(0x408000E8); }
};
// CSI Control Register
union CSI_CR59 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR59 &ref() { return *reinterpret_cast<volatile CSI_CR59*>(0x408000EC); }
};
// CSI Control Register
union CSI_CR60 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR60 &ref() { return *reinterpret_cast<volatile CSI_CR60*>(0x408000F0); }
};
// CSI Control Register
union CSI_CR61 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR61 &ref() { return *reinterpret_cast<volatile CSI_CR61*>(0x408000F4); }
};
// CSI Control Register
union CSI_CR62 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR62 &ref() { return *reinterpret_cast<volatile CSI_CR62*>(0x408000F8); }
};
// CSI Control Register
union CSI_CR63 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR63 &ref() { return *reinterpret_cast<volatile CSI_CR63*>(0x408000FC); }
};
// CSI Control Register
union CSI_CR64 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR64 &ref() { return *reinterpret_cast<volatile CSI_CR64*>(0x40800100); }
};
// CSI Control Register
union CSI_CR65 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR65() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR65 &ref() { return *reinterpret_cast<volatile CSI_CR65*>(0x40800104); }
};
// CSI Control Register
union CSI_CR66 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR66() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR66 &ref() { return *reinterpret_cast<volatile CSI_CR66*>(0x40800108); }
};
// CSI Control Register
union CSI_CR67 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR67() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR67 &ref() { return *reinterpret_cast<volatile CSI_CR67*>(0x4080010C); }
};
// CSI Control Register
union CSI_CR68 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR68() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR68 &ref() { return *reinterpret_cast<volatile CSI_CR68*>(0x40800110); }
};
// CSI Control Register
union CSI_CR69 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR69() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR69 &ref() { return *reinterpret_cast<volatile CSI_CR69*>(0x40800114); }
};
// CSI Control Register
union CSI_CR70 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR70() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR70 &ref() { return *reinterpret_cast<volatile CSI_CR70*>(0x40800118); }
};
// CSI Control Register
union CSI_CR71 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR71() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR71 &ref() { return *reinterpret_cast<volatile CSI_CR71*>(0x4080011C); }
};
// CSI Control Register
union CSI_CR72 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR72() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR72 &ref() { return *reinterpret_cast<volatile CSI_CR72*>(0x40800120); }
};
// CSI Control Register
union CSI_CR73 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR73() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR73 &ref() { return *reinterpret_cast<volatile CSI_CR73*>(0x40800124); }
};
// CSI Control Register
union CSI_CR74 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR74() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR74 &ref() { return *reinterpret_cast<volatile CSI_CR74*>(0x40800128); }
};
// CSI Control Register
union CSI_CR75 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR75() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR75 &ref() { return *reinterpret_cast<volatile CSI_CR75*>(0x4080012C); }
};
// CSI Control Register
union CSI_CR76 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR76() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR76 &ref() { return *reinterpret_cast<volatile CSI_CR76*>(0x40800130); }
};
// CSI Control Register
union CSI_CR77 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR77() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR77 &ref() { return *reinterpret_cast<volatile CSI_CR77*>(0x40800134); }
};
// CSI Control Register
union CSI_CR78 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR78() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR78 &ref() { return *reinterpret_cast<volatile CSI_CR78*>(0x40800138); }
};
// CSI Control Register
union CSI_CR79 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR79() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR79 &ref() { return *reinterpret_cast<volatile CSI_CR79*>(0x4080013C); }
};
// CSI Control Register
union CSI_CR80 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR80() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR80 &ref() { return *reinterpret_cast<volatile CSI_CR80*>(0x40800140); }
};
// CSI Control Register
union CSI_CR81 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR81() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR81 &ref() { return *reinterpret_cast<volatile CSI_CR81*>(0x40800144); }
};
// CSI Control Register
union CSI_CR82 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR82() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR82 &ref() { return *reinterpret_cast<volatile CSI_CR82*>(0x40800148); }
};
// CSI Control Register
union CSI_CR83 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR83() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR83 &ref() { return *reinterpret_cast<volatile CSI_CR83*>(0x4080014C); }
};
// CSI Control Register
union CSI_CR84 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR84() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR84 &ref() { return *reinterpret_cast<volatile CSI_CR84*>(0x40800150); }
};
// CSI Control Register
union CSI_CR85 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR85() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR85 &ref() { return *reinterpret_cast<volatile CSI_CR85*>(0x40800154); }
};
// CSI Control Register
union CSI_CR86 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR86() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR86 &ref() { return *reinterpret_cast<volatile CSI_CR86*>(0x40800158); }
};
// CSI Control Register
union CSI_CR87 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR87() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR87 &ref() { return *reinterpret_cast<volatile CSI_CR87*>(0x4080015C); }
};
// CSI Control Register
union CSI_CR88 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR88() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR88 &ref() { return *reinterpret_cast<volatile CSI_CR88*>(0x40800160); }
};
// CSI Control Register
union CSI_CR89 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR89() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR89 &ref() { return *reinterpret_cast<volatile CSI_CR89*>(0x40800164); }
};
// CSI Control Register
union CSI_CR90 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR90() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR90 &ref() { return *reinterpret_cast<volatile CSI_CR90*>(0x40800168); }
};
// CSI Control Register
union CSI_CR91 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR91() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR91 &ref() { return *reinterpret_cast<volatile CSI_CR91*>(0x4080016C); }
};
// CSI Control Register
union CSI_CR92 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR92() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR92 &ref() { return *reinterpret_cast<volatile CSI_CR92*>(0x40800170); }
};
// CSI Control Register
union CSI_CR93 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR93() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR93 &ref() { return *reinterpret_cast<volatile CSI_CR93*>(0x40800174); }
};
// CSI Control Register
union CSI_CR94 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR94() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR94 &ref() { return *reinterpret_cast<volatile CSI_CR94*>(0x40800178); }
};
// CSI Control Register
union CSI_CR95 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR95() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR95 &ref() { return *reinterpret_cast<volatile CSI_CR95*>(0x4080017C); }
};
// CSI Control Register
union CSI_CR96 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR96() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR96 &ref() { return *reinterpret_cast<volatile CSI_CR96*>(0x40800180); }
};
// CSI Control Register
union CSI_CR97 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR97() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR97 &ref() { return *reinterpret_cast<volatile CSI_CR97*>(0x40800184); }
};
// CSI Control Register
union CSI_CR98 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR98() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR98 &ref() { return *reinterpret_cast<volatile CSI_CR98*>(0x40800188); }
};
// CSI Control Register
union CSI_CR99 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR99() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR99 &ref() { return *reinterpret_cast<volatile CSI_CR99*>(0x4080018C); }
};
// CSI Control Register
union CSI_CR100 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR100() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR100 &ref() { return *reinterpret_cast<volatile CSI_CR100*>(0x40800190); }
};
// CSI Control Register
union CSI_CR101 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR101() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR101 &ref() { return *reinterpret_cast<volatile CSI_CR101*>(0x40800194); }
};
// CSI Control Register
union CSI_CR102 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR102() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR102 &ref() { return *reinterpret_cast<volatile CSI_CR102*>(0x40800198); }
};
// CSI Control Register
union CSI_CR103 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR103() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR103 &ref() { return *reinterpret_cast<volatile CSI_CR103*>(0x4080019C); }
};
// CSI Control Register
union CSI_CR104 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR104() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR104 &ref() { return *reinterpret_cast<volatile CSI_CR104*>(0x408001A0); }
};
// CSI Control Register
union CSI_CR105 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR105() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR105 &ref() { return *reinterpret_cast<volatile CSI_CR105*>(0x408001A4); }
};
// CSI Control Register
union CSI_CR106 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR106() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR106 &ref() { return *reinterpret_cast<volatile CSI_CR106*>(0x408001A8); }
};
// CSI Control Register
union CSI_CR107 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR107() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR107 &ref() { return *reinterpret_cast<volatile CSI_CR107*>(0x408001AC); }
};
// CSI Control Register
union CSI_CR108 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR108() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR108 &ref() { return *reinterpret_cast<volatile CSI_CR108*>(0x408001B0); }
};
// CSI Control Register
union CSI_CR109 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR109() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR109 &ref() { return *reinterpret_cast<volatile CSI_CR109*>(0x408001B4); }
};
// CSI Control Register
union CSI_CR110 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR110() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR110 &ref() { return *reinterpret_cast<volatile CSI_CR110*>(0x408001B8); }
};
// CSI Control Register
union CSI_CR111 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR111() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR111 &ref() { return *reinterpret_cast<volatile CSI_CR111*>(0x408001BC); }
};
// CSI Control Register
union CSI_CR112 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR112() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR112 &ref() { return *reinterpret_cast<volatile CSI_CR112*>(0x408001C0); }
};
// CSI Control Register
union CSI_CR113 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR113() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR113 &ref() { return *reinterpret_cast<volatile CSI_CR113*>(0x408001C4); }
};
// CSI Control Register
union CSI_CR114 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR114() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR114 &ref() { return *reinterpret_cast<volatile CSI_CR114*>(0x408001C8); }
};
// CSI Control Register
union CSI_CR115 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR115() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR115 &ref() { return *reinterpret_cast<volatile CSI_CR115*>(0x408001CC); }
};
// CSI Control Register
union CSI_CR116 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR116() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR116 &ref() { return *reinterpret_cast<volatile CSI_CR116*>(0x408001D0); }
};
// CSI Control Register
union CSI_CR117 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR117() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR117 &ref() { return *reinterpret_cast<volatile CSI_CR117*>(0x408001D4); }
};
// CSI Control Register
union CSI_CR118 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR118() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR118 &ref() { return *reinterpret_cast<volatile CSI_CR118*>(0x408001D8); }
};
// CSI Control Register
union CSI_CR119 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR119() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR119 &ref() { return *reinterpret_cast<volatile CSI_CR119*>(0x408001DC); }
};
// CSI Control Register
union CSI_CR120 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR120() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR120 &ref() { return *reinterpret_cast<volatile CSI_CR120*>(0x408001E0); }
};
// CSI Control Register
union CSI_CR121 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR121() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR121 &ref() { return *reinterpret_cast<volatile CSI_CR121*>(0x408001E4); }
};
// CSI Control Register
union CSI_CR122 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR122() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR122 &ref() { return *reinterpret_cast<volatile CSI_CR122*>(0x408001E8); }
};
// CSI Control Register
union CSI_CR123 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR123() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR123 &ref() { return *reinterpret_cast<volatile CSI_CR123*>(0x408001EC); }
};
// CSI Control Register
union CSI_CR124 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR124() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR124 &ref() { return *reinterpret_cast<volatile CSI_CR124*>(0x408001F0); }
};
// CSI Control Register
union CSI_CR125 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR125() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR125 &ref() { return *reinterpret_cast<volatile CSI_CR125*>(0x408001F4); }
};
// CSI Control Register
union CSI_CR126 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR126() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR126 &ref() { return *reinterpret_cast<volatile CSI_CR126*>(0x408001F8); }
};
// CSI Control Register
union CSI_CR127 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR127 &ref() { return *reinterpret_cast<volatile CSI_CR127*>(0x408001FC); }
};
// CSI Control Register
union CSI_CR128 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR128() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR128 &ref() { return *reinterpret_cast<volatile CSI_CR128*>(0x40800200); }
};
// CSI Control Register
union CSI_CR129 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR129() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR129 &ref() { return *reinterpret_cast<volatile CSI_CR129*>(0x40800204); }
};
// CSI Control Register
union CSI_CR130 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR130() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR130 &ref() { return *reinterpret_cast<volatile CSI_CR130*>(0x40800208); }
};
// CSI Control Register
union CSI_CR131 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR131() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR131 &ref() { return *reinterpret_cast<volatile CSI_CR131*>(0x4080020C); }
};
// CSI Control Register
union CSI_CR132 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR132() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR132 &ref() { return *reinterpret_cast<volatile CSI_CR132*>(0x40800210); }
};
// CSI Control Register
union CSI_CR133 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR133() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR133 &ref() { return *reinterpret_cast<volatile CSI_CR133*>(0x40800214); }
};
// CSI Control Register
union CSI_CR134 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR134() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR134 &ref() { return *reinterpret_cast<volatile CSI_CR134*>(0x40800218); }
};
// CSI Control Register
union CSI_CR135 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR135() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR135 &ref() { return *reinterpret_cast<volatile CSI_CR135*>(0x4080021C); }
};
// CSI Control Register
union CSI_CR136 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR136() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR136 &ref() { return *reinterpret_cast<volatile CSI_CR136*>(0x40800220); }
};
// CSI Control Register
union CSI_CR137 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR137() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR137 &ref() { return *reinterpret_cast<volatile CSI_CR137*>(0x40800224); }
};
// CSI Control Register
union CSI_CR138 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR138() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR138 &ref() { return *reinterpret_cast<volatile CSI_CR138*>(0x40800228); }
};
// CSI Control Register
union CSI_CR139 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR139() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR139 &ref() { return *reinterpret_cast<volatile CSI_CR139*>(0x4080022C); }
};
// CSI Control Register
union CSI_CR140 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR140() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR140 &ref() { return *reinterpret_cast<volatile CSI_CR140*>(0x40800230); }
};
// CSI Control Register
union CSI_CR141 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR141() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR141 &ref() { return *reinterpret_cast<volatile CSI_CR141*>(0x40800234); }
};
// CSI Control Register
union CSI_CR142 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR142() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR142 &ref() { return *reinterpret_cast<volatile CSI_CR142*>(0x40800238); }
};
// CSI Control Register
union CSI_CR143 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR143() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR143 &ref() { return *reinterpret_cast<volatile CSI_CR143*>(0x4080023C); }
};
// CSI Control Register
union CSI_CR144 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR144() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR144 &ref() { return *reinterpret_cast<volatile CSI_CR144*>(0x40800240); }
};
// CSI Control Register
union CSI_CR145 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR145() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR145 &ref() { return *reinterpret_cast<volatile CSI_CR145*>(0x40800244); }
};
// CSI Control Register
union CSI_CR146 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR146() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR146 &ref() { return *reinterpret_cast<volatile CSI_CR146*>(0x40800248); }
};
// CSI Control Register
union CSI_CR147 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR147() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR147 &ref() { return *reinterpret_cast<volatile CSI_CR147*>(0x4080024C); }
};
// CSI Control Register
union CSI_CR148 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR148() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR148 &ref() { return *reinterpret_cast<volatile CSI_CR148*>(0x40800250); }
};
// CSI Control Register
union CSI_CR149 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR149() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR149 &ref() { return *reinterpret_cast<volatile CSI_CR149*>(0x40800254); }
};
// CSI Control Register
union CSI_CR150 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR150() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR150 &ref() { return *reinterpret_cast<volatile CSI_CR150*>(0x40800258); }
};
// CSI Control Register
union CSI_CR151 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR151() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR151 &ref() { return *reinterpret_cast<volatile CSI_CR151*>(0x4080025C); }
};
// CSI Control Register
union CSI_CR152 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR152() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR152 &ref() { return *reinterpret_cast<volatile CSI_CR152*>(0x40800260); }
};
// CSI Control Register
union CSI_CR153 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR153() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR153 &ref() { return *reinterpret_cast<volatile CSI_CR153*>(0x40800264); }
};
// CSI Control Register
union CSI_CR154 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR154() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR154 &ref() { return *reinterpret_cast<volatile CSI_CR154*>(0x40800268); }
};
// CSI Control Register
union CSI_CR155 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR155() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR155 &ref() { return *reinterpret_cast<volatile CSI_CR155*>(0x4080026C); }
};
// CSI Control Register
union CSI_CR156 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR156() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR156 &ref() { return *reinterpret_cast<volatile CSI_CR156*>(0x40800270); }
};
// CSI Control Register
union CSI_CR157 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR157() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR157 &ref() { return *reinterpret_cast<volatile CSI_CR157*>(0x40800274); }
};
// CSI Control Register
union CSI_CR158 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR158() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR158 &ref() { return *reinterpret_cast<volatile CSI_CR158*>(0x40800278); }
};
// CSI Control Register
union CSI_CR159 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR159() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR159 &ref() { return *reinterpret_cast<volatile CSI_CR159*>(0x4080027C); }
};
// CSI Control Register
union CSI_CR160 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR160() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR160 &ref() { return *reinterpret_cast<volatile CSI_CR160*>(0x40800280); }
};
// CSI Control Register
union CSI_CR161 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR161() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR161 &ref() { return *reinterpret_cast<volatile CSI_CR161*>(0x40800284); }
};
// CSI Control Register
union CSI_CR162 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR162() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR162 &ref() { return *reinterpret_cast<volatile CSI_CR162*>(0x40800288); }
};
// CSI Control Register
union CSI_CR163 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR163() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR163 &ref() { return *reinterpret_cast<volatile CSI_CR163*>(0x4080028C); }
};
// CSI Control Register
union CSI_CR164 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR164() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR164 &ref() { return *reinterpret_cast<volatile CSI_CR164*>(0x40800290); }
};
// CSI Control Register
union CSI_CR165 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR165() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR165 &ref() { return *reinterpret_cast<volatile CSI_CR165*>(0x40800294); }
};
// CSI Control Register
union CSI_CR166 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR166() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR166 &ref() { return *reinterpret_cast<volatile CSI_CR166*>(0x40800298); }
};
// CSI Control Register
union CSI_CR167 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR167() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR167 &ref() { return *reinterpret_cast<volatile CSI_CR167*>(0x4080029C); }
};
// CSI Control Register
union CSI_CR168 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR168() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR168 &ref() { return *reinterpret_cast<volatile CSI_CR168*>(0x408002A0); }
};
// CSI Control Register
union CSI_CR169 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR169() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR169 &ref() { return *reinterpret_cast<volatile CSI_CR169*>(0x408002A4); }
};
// CSI Control Register
union CSI_CR170 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR170() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR170 &ref() { return *reinterpret_cast<volatile CSI_CR170*>(0x408002A8); }
};
// CSI Control Register
union CSI_CR171 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR171() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR171 &ref() { return *reinterpret_cast<volatile CSI_CR171*>(0x408002AC); }
};
// CSI Control Register
union CSI_CR172 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR172() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR172 &ref() { return *reinterpret_cast<volatile CSI_CR172*>(0x408002B0); }
};
// CSI Control Register
union CSI_CR173 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR173() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR173 &ref() { return *reinterpret_cast<volatile CSI_CR173*>(0x408002B4); }
};
// CSI Control Register
union CSI_CR174 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR174() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR174 &ref() { return *reinterpret_cast<volatile CSI_CR174*>(0x408002B8); }
};
// CSI Control Register
union CSI_CR175 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR175() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR175 &ref() { return *reinterpret_cast<volatile CSI_CR175*>(0x408002BC); }
};
// CSI Control Register
union CSI_CR176 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR176() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR176 &ref() { return *reinterpret_cast<volatile CSI_CR176*>(0x408002C0); }
};
// CSI Control Register
union CSI_CR177 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR177() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR177 &ref() { return *reinterpret_cast<volatile CSI_CR177*>(0x408002C4); }
};
// CSI Control Register
union CSI_CR178 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR178() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR178 &ref() { return *reinterpret_cast<volatile CSI_CR178*>(0x408002C8); }
};
// CSI Control Register
union CSI_CR179 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR179() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR179 &ref() { return *reinterpret_cast<volatile CSI_CR179*>(0x408002CC); }
};
// CSI Control Register
union CSI_CR180 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR180() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR180 &ref() { return *reinterpret_cast<volatile CSI_CR180*>(0x408002D0); }
};
// CSI Control Register
union CSI_CR181 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR181() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR181 &ref() { return *reinterpret_cast<volatile CSI_CR181*>(0x408002D4); }
};
// CSI Control Register
union CSI_CR182 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR182() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR182 &ref() { return *reinterpret_cast<volatile CSI_CR182*>(0x408002D8); }
};
// CSI Control Register
union CSI_CR183 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR183() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR183 &ref() { return *reinterpret_cast<volatile CSI_CR183*>(0x408002DC); }
};
// CSI Control Register
union CSI_CR184 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR184() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR184 &ref() { return *reinterpret_cast<volatile CSI_CR184*>(0x408002E0); }
};
// CSI Control Register
union CSI_CR185 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR185() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR185 &ref() { return *reinterpret_cast<volatile CSI_CR185*>(0x408002E4); }
};
// CSI Control Register
union CSI_CR186 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR186() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR186 &ref() { return *reinterpret_cast<volatile CSI_CR186*>(0x408002E8); }
};
// CSI Control Register
union CSI_CR187 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR187() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR187 &ref() { return *reinterpret_cast<volatile CSI_CR187*>(0x408002EC); }
};
// CSI Control Register
union CSI_CR188 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR188() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR188 &ref() { return *reinterpret_cast<volatile CSI_CR188*>(0x408002F0); }
};
// CSI Control Register
union CSI_CR189 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR189() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR189 &ref() { return *reinterpret_cast<volatile CSI_CR189*>(0x408002F4); }
};
// CSI Control Register
union CSI_CR190 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR190() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR190 &ref() { return *reinterpret_cast<volatile CSI_CR190*>(0x408002F8); }
};
// CSI Control Register
union CSI_CR191 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR191() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR191 &ref() { return *reinterpret_cast<volatile CSI_CR191*>(0x408002FC); }
};
// CSI Control Register
union CSI_CR192 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR192() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR192 &ref() { return *reinterpret_cast<volatile CSI_CR192*>(0x40800300); }
};
// CSI Control Register
union CSI_CR193 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR193() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR193 &ref() { return *reinterpret_cast<volatile CSI_CR193*>(0x40800304); }
};
// CSI Control Register
union CSI_CR194 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR194() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR194 &ref() { return *reinterpret_cast<volatile CSI_CR194*>(0x40800308); }
};
// CSI Control Register
union CSI_CR195 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR195() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR195 &ref() { return *reinterpret_cast<volatile CSI_CR195*>(0x4080030C); }
};
// CSI Control Register
union CSI_CR196 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR196() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR196 &ref() { return *reinterpret_cast<volatile CSI_CR196*>(0x40800310); }
};
// CSI Control Register
union CSI_CR197 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR197() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR197 &ref() { return *reinterpret_cast<volatile CSI_CR197*>(0x40800314); }
};
// CSI Control Register
union CSI_CR198 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR198() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR198 &ref() { return *reinterpret_cast<volatile CSI_CR198*>(0x40800318); }
};
// CSI Control Register
union CSI_CR199 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR199() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR199 &ref() { return *reinterpret_cast<volatile CSI_CR199*>(0x4080031C); }
};
// CSI Control Register
union CSI_CR200 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR200() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR200 &ref() { return *reinterpret_cast<volatile CSI_CR200*>(0x40800320); }
};
// CSI Control Register
union CSI_CR201 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR201() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR201 &ref() { return *reinterpret_cast<volatile CSI_CR201*>(0x40800324); }
};
// CSI Control Register
union CSI_CR202 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR202() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR202 &ref() { return *reinterpret_cast<volatile CSI_CR202*>(0x40800328); }
};
// CSI Control Register
union CSI_CR203 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR203() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR203 &ref() { return *reinterpret_cast<volatile CSI_CR203*>(0x4080032C); }
};
// CSI Control Register
union CSI_CR204 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR204() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR204 &ref() { return *reinterpret_cast<volatile CSI_CR204*>(0x40800330); }
};
// CSI Control Register
union CSI_CR205 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR205() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR205 &ref() { return *reinterpret_cast<volatile CSI_CR205*>(0x40800334); }
};
// CSI Control Register
union CSI_CR206 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR206() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR206 &ref() { return *reinterpret_cast<volatile CSI_CR206*>(0x40800338); }
};
// CSI Control Register
union CSI_CR207 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR207() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR207 &ref() { return *reinterpret_cast<volatile CSI_CR207*>(0x4080033C); }
};
// CSI Control Register
union CSI_CR208 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR208() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR208 &ref() { return *reinterpret_cast<volatile CSI_CR208*>(0x40800340); }
};
// CSI Control Register
union CSI_CR209 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR209() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR209 &ref() { return *reinterpret_cast<volatile CSI_CR209*>(0x40800344); }
};
// CSI Control Register
union CSI_CR210 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR210() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR210 &ref() { return *reinterpret_cast<volatile CSI_CR210*>(0x40800348); }
};
// CSI Control Register
union CSI_CR211 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR211() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR211 &ref() { return *reinterpret_cast<volatile CSI_CR211*>(0x4080034C); }
};
// CSI Control Register
union CSI_CR212 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR212() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR212 &ref() { return *reinterpret_cast<volatile CSI_CR212*>(0x40800350); }
};
// CSI Control Register
union CSI_CR213 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR213() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR213 &ref() { return *reinterpret_cast<volatile CSI_CR213*>(0x40800354); }
};
// CSI Control Register
union CSI_CR214 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR214() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR214 &ref() { return *reinterpret_cast<volatile CSI_CR214*>(0x40800358); }
};
// CSI Control Register
union CSI_CR215 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR215() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR215 &ref() { return *reinterpret_cast<volatile CSI_CR215*>(0x4080035C); }
};
// CSI Control Register
union CSI_CR216 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR216() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR216 &ref() { return *reinterpret_cast<volatile CSI_CR216*>(0x40800360); }
};
// CSI Control Register
union CSI_CR217 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR217() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR217 &ref() { return *reinterpret_cast<volatile CSI_CR217*>(0x40800364); }
};
// CSI Control Register
union CSI_CR218 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR218() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR218 &ref() { return *reinterpret_cast<volatile CSI_CR218*>(0x40800368); }
};
// CSI Control Register
union CSI_CR219 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR219() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR219 &ref() { return *reinterpret_cast<volatile CSI_CR219*>(0x4080036C); }
};
// CSI Control Register
union CSI_CR220 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR220() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR220 &ref() { return *reinterpret_cast<volatile CSI_CR220*>(0x40800370); }
};
// CSI Control Register
union CSI_CR221 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR221() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR221 &ref() { return *reinterpret_cast<volatile CSI_CR221*>(0x40800374); }
};
// CSI Control Register
union CSI_CR222 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR222() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR222 &ref() { return *reinterpret_cast<volatile CSI_CR222*>(0x40800378); }
};
// CSI Control Register
union CSI_CR223 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR223() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR223 &ref() { return *reinterpret_cast<volatile CSI_CR223*>(0x4080037C); }
};
// CSI Control Register
union CSI_CR224 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR224() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR224 &ref() { return *reinterpret_cast<volatile CSI_CR224*>(0x40800380); }
};
// CSI Control Register
union CSI_CR225 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR225() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR225 &ref() { return *reinterpret_cast<volatile CSI_CR225*>(0x40800384); }
};
// CSI Control Register
union CSI_CR226 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR226() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR226 &ref() { return *reinterpret_cast<volatile CSI_CR226*>(0x40800388); }
};
// CSI Control Register
union CSI_CR227 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR227() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR227 &ref() { return *reinterpret_cast<volatile CSI_CR227*>(0x4080038C); }
};
// CSI Control Register
union CSI_CR228 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR228() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR228 &ref() { return *reinterpret_cast<volatile CSI_CR228*>(0x40800390); }
};
// CSI Control Register
union CSI_CR229 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR229() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR229 &ref() { return *reinterpret_cast<volatile CSI_CR229*>(0x40800394); }
};
// CSI Control Register
union CSI_CR230 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR230() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR230 &ref() { return *reinterpret_cast<volatile CSI_CR230*>(0x40800398); }
};
// CSI Control Register
union CSI_CR231 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR231() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR231 &ref() { return *reinterpret_cast<volatile CSI_CR231*>(0x4080039C); }
};
// CSI Control Register
union CSI_CR232 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR232() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR232 &ref() { return *reinterpret_cast<volatile CSI_CR232*>(0x408003A0); }
};
// CSI Control Register
union CSI_CR233 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR233() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR233 &ref() { return *reinterpret_cast<volatile CSI_CR233*>(0x408003A4); }
};
// CSI Control Register
union CSI_CR234 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR234() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR234 &ref() { return *reinterpret_cast<volatile CSI_CR234*>(0x408003A8); }
};
// CSI Control Register
union CSI_CR235 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR235() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR235 &ref() { return *reinterpret_cast<volatile CSI_CR235*>(0x408003AC); }
};
// CSI Control Register
union CSI_CR236 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR236() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR236 &ref() { return *reinterpret_cast<volatile CSI_CR236*>(0x408003B0); }
};
// CSI Control Register
union CSI_CR237 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR237() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR237 &ref() { return *reinterpret_cast<volatile CSI_CR237*>(0x408003B4); }
};
// CSI Control Register
union CSI_CR238 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR238() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR238 &ref() { return *reinterpret_cast<volatile CSI_CR238*>(0x408003B8); }
};
// CSI Control Register
union CSI_CR239 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR239() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR239 &ref() { return *reinterpret_cast<volatile CSI_CR239*>(0x408003BC); }
};
// CSI Control Register
union CSI_CR240 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR240() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR240 &ref() { return *reinterpret_cast<volatile CSI_CR240*>(0x408003C0); }
};
// CSI Control Register
union CSI_CR241 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR241() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR241 &ref() { return *reinterpret_cast<volatile CSI_CR241*>(0x408003C4); }
};
// CSI Control Register
union CSI_CR242 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR242() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR242 &ref() { return *reinterpret_cast<volatile CSI_CR242*>(0x408003C8); }
};
// CSI Control Register
union CSI_CR243 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR243() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR243 &ref() { return *reinterpret_cast<volatile CSI_CR243*>(0x408003CC); }
};
// CSI Control Register
union CSI_CR244 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR244() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR244 &ref() { return *reinterpret_cast<volatile CSI_CR244*>(0x408003D0); }
};
// CSI Control Register
union CSI_CR245 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR245() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR245 &ref() { return *reinterpret_cast<volatile CSI_CR245*>(0x408003D4); }
};
// CSI Control Register
union CSI_CR246 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR246() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR246 &ref() { return *reinterpret_cast<volatile CSI_CR246*>(0x408003D8); }
};
// CSI Control Register
union CSI_CR247 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR247() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR247 &ref() { return *reinterpret_cast<volatile CSI_CR247*>(0x408003DC); }
};
// CSI Control Register
union CSI_CR248 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR248() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR248 &ref() { return *reinterpret_cast<volatile CSI_CR248*>(0x408003E0); }
};
// CSI Control Register
union CSI_CR249 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR249() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR249 &ref() { return *reinterpret_cast<volatile CSI_CR249*>(0x408003E4); }
};
// CSI Control Register
union CSI_CR250 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR250() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR250 &ref() { return *reinterpret_cast<volatile CSI_CR250*>(0x408003E8); }
};
// CSI Control Register
union CSI_CR251 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR251() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR251 &ref() { return *reinterpret_cast<volatile CSI_CR251*>(0x408003EC); }
};
// CSI Control Register
union CSI_CR252 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR252() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR252 &ref() { return *reinterpret_cast<volatile CSI_CR252*>(0x408003F0); }
};
// CSI Control Register
union CSI_CR253 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR253() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR253 &ref() { return *reinterpret_cast<volatile CSI_CR253*>(0x408003F4); }
};
// CSI Control Register
union CSI_CR254 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR254() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR254 &ref() { return *reinterpret_cast<volatile CSI_CR254*>(0x408003F8); }
};
// CSI Control Register
union CSI_CR255 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR255() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR255 &ref() { return *reinterpret_cast<volatile CSI_CR255*>(0x408003FC); }
};
// CSI Control Register
union CSI_CR256 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR256() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR256 &ref() { return *reinterpret_cast<volatile CSI_CR256*>(0x40800400); }
};
// CSI Control Register
union CSI_CR257 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR257() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR257 &ref() { return *reinterpret_cast<volatile CSI_CR257*>(0x40800404); }
};
// CSI Control Register
union CSI_CR258 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR258() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR258 &ref() { return *reinterpret_cast<volatile CSI_CR258*>(0x40800408); }
};
// CSI Control Register
union CSI_CR259 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR259() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR259 &ref() { return *reinterpret_cast<volatile CSI_CR259*>(0x4080040C); }
};
// CSI Control Register
union CSI_CR260 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR260() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR260 &ref() { return *reinterpret_cast<volatile CSI_CR260*>(0x40800410); }
};
// CSI Control Register
union CSI_CR261 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR261() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR261 &ref() { return *reinterpret_cast<volatile CSI_CR261*>(0x40800414); }
};
// CSI Control Register
union CSI_CR262 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR262() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR262 &ref() { return *reinterpret_cast<volatile CSI_CR262*>(0x40800418); }
};
// CSI Control Register
union CSI_CR263 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR263() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR263 &ref() { return *reinterpret_cast<volatile CSI_CR263*>(0x4080041C); }
};
// CSI Control Register
union CSI_CR264 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR264() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR264 &ref() { return *reinterpret_cast<volatile CSI_CR264*>(0x40800420); }
};
// CSI Control Register
union CSI_CR265 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR265() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR265 &ref() { return *reinterpret_cast<volatile CSI_CR265*>(0x40800424); }
};
// CSI Control Register
union CSI_CR266 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR266() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR266 &ref() { return *reinterpret_cast<volatile CSI_CR266*>(0x40800428); }
};
// CSI Control Register
union CSI_CR267 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR267() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR267 &ref() { return *reinterpret_cast<volatile CSI_CR267*>(0x4080042C); }
};
// CSI Control Register
union CSI_CR268 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR268() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR268 &ref() { return *reinterpret_cast<volatile CSI_CR268*>(0x40800430); }
};
// CSI Control Register
union CSI_CR269 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR269() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR269 &ref() { return *reinterpret_cast<volatile CSI_CR269*>(0x40800434); }
};
// CSI Control Register
union CSI_CR270 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR270() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR270 &ref() { return *reinterpret_cast<volatile CSI_CR270*>(0x40800438); }
};
// CSI Control Register
union CSI_CR271 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR271() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR271 &ref() { return *reinterpret_cast<volatile CSI_CR271*>(0x4080043C); }
};
// CSI Control Register
union CSI_CR272 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR272() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR272 &ref() { return *reinterpret_cast<volatile CSI_CR272*>(0x40800440); }
};
// CSI Control Register
union CSI_CR273 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR273() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR273 &ref() { return *reinterpret_cast<volatile CSI_CR273*>(0x40800444); }
};
// CSI Control Register
union CSI_CR274 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR274() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR274 &ref() { return *reinterpret_cast<volatile CSI_CR274*>(0x40800448); }
};
// CSI Control Register
union CSI_CR275 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR275() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR275 &ref() { return *reinterpret_cast<volatile CSI_CR275*>(0x4080044C); }
};
// CSI Control Register
union CSI_CR276 {
  
  // Bit field definition.
  struct {
    // read-write - Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    uint32_t PIXEL_COUNTERS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSI_CR276() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSI_CR276 &ref() { return *reinterpret_cast<volatile CSI_CR276*>(0x40800450); }
};


} // namespace nCSI