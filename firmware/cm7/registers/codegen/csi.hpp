#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CSI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Csi {
  // CSI Control Register 1
  struct CsiCr1Fields {
    enum class ePIXEL_BIT : std::uint32_t {
      // 8-bit data for each pixel
      ePIXEL_BIT_0 = 0,
      // 10-bit data for each pixel
      ePIXEL_BIT_1 = 1,
    };

    enum class eREDGE : std::uint32_t {
      // Pixel data is latched at the falling edge of CSI_PIXCLK
      eREDGE_0 = 0,
      // Pixel data is latched at the rising edge of CSI_PIXCLK
      eREDGE_1 = 1,
    };

    enum class eINV_PCLK : std::uint32_t {
      // CSI_PIXCLK is directly applied to internal circuitry
      eINV_PCLK_0 = 0,
      // CSI_PIXCLK is inverted before applied to internal circuitry
      eINV_PCLK_1 = 1,
    };

    enum class eINV_DATA : std::uint32_t {
      // CSI_D[7:0] data lines are directly applied to internal circuitry
      eINV_DATA_0 = 0,
      // CSI_D[7:0] data lines are inverted before applied to internal circuitry
      eINV_DATA_1 = 1,
    };

    enum class eGCLK_MODE : std::uint32_t {
      // Non-gated clock mode. All incoming pixel clocks are valid. HSYNC is ignored.
      eGCLK_MODE_0 = 0,
      // Gated clock mode. Pixel clock signal is valid only when HSYNC is active.
      eGCLK_MODE_1 = 1,
    };

    enum class ePACK_DIR : std::uint32_t {
      // Pack from LSB first. For image data, 0x11, 0x22, 0x33, 0x44, it will appear as 0x44332211 in RX FIFO. For stat data, 0xAAAA, 0xBBBB, it will appear as 0xBBBBAAAA in STAT FIFO.
      ePACK_DIR_0 = 0,
      // Pack from MSB first. For image data, 0x11, 0x22, 0x33, 0x44, it will appear as 0x11223344 in RX FIFO. For stat data, 0xAAAA, 0xBBBB, it will appear as 0xAAAABBBB in STAT FIFO.
      ePACK_DIR_1 = 1,
    };

    enum class eFCC : std::uint32_t {
      // Asynchronous FIFO clear is selected.
      eFCC_0 = 0,
      // Synchronous FIFO clear is selected.
      eFCC_1 = 1,
    };

    enum class eCCIR_EN : std::uint32_t {
      // Traditional interface is selected.
      eCCIR_EN_0 = 0,
      // BT.656 interface is selected.
      eCCIR_EN_1 = 1,
    };

    enum class eHSYNC_POL : std::uint32_t {
      // HSYNC is active low
      eHSYNC_POL_0 = 0,
      // HSYNC is active high
      eHSYNC_POL_1 = 1,
    };

    enum class eHISTOGRAM_CALC_DONE_IE : std::uint32_t {
      // Histogram done interrupt disable
      eHISTOGRAM_CALC_DONE_IE_0 = 0,
      // Histogram done interrupt enable
      eHISTOGRAM_CALC_DONE_IE_1 = 1,
    };

    enum class eSOF_INTEN : std::uint32_t {
      // SOF interrupt disable
      eSOF_INTEN_0 = 0,
      // SOF interrupt enable
      eSOF_INTEN_1 = 1,
    };

    enum class eSOF_POL : std::uint32_t {
      // SOF interrupt is generated on SOF falling edge
      eSOF_POL_0 = 0,
      // SOF interrupt is generated on SOF rising edge
      eSOF_POL_1 = 1,
    };

    enum class eRXFF_INTEN : std::uint32_t {
      // RxFIFO full interrupt disable
      eRXFF_INTEN_0 = 0,
      // RxFIFO full interrupt enable
      eRXFF_INTEN_1 = 1,
    };

    enum class eFB1_DMA_DONE_INTEN : std::uint32_t {
      // Frame Buffer1 DMA Transfer Done interrupt disable
      eFB1_DMA_DONE_INTEN_0 = 0,
      // Frame Buffer1 DMA Transfer Done interrupt enable
      eFB1_DMA_DONE_INTEN_1 = 1,
    };

    enum class eFB2_DMA_DONE_INTEN : std::uint32_t {
      // Frame Buffer2 DMA Transfer Done interrupt disable
      eFB2_DMA_DONE_INTEN_0 = 0,
      // Frame Buffer2 DMA Transfer Done interrupt enable
      eFB2_DMA_DONE_INTEN_1 = 1,
    };

    enum class eSTATFF_INTEN : std::uint32_t {
      // STATFIFO full interrupt disable
      eSTATFF_INTEN_0 = 0,
      // STATFIFO full interrupt enable
      eSTATFF_INTEN_1 = 1,
    };

    enum class eSFF_DMA_DONE_INTEN : std::uint32_t {
      // STATFIFO DMA Transfer Done interrupt disable
      eSFF_DMA_DONE_INTEN_0 = 0,
      // STATFIFO DMA Transfer Done interrupt enable
      eSFF_DMA_DONE_INTEN_1 = 1,
    };

    enum class eRF_OR_INTEN : std::uint32_t {
      // RxFIFO overrun interrupt is disabled
      eRF_OR_INTEN_0 = 0,
      // RxFIFO overrun interrupt is enabled
      eRF_OR_INTEN_1 = 1,
    };

    enum class eSF_OR_INTEN : std::uint32_t {
      // STATFIFO overrun interrupt is disabled
      eSF_OR_INTEN_0 = 0,
      // STATFIFO overrun interrupt is enabled
      eSF_OR_INTEN_1 = 1,
    };

    enum class eCOF_INT_EN : std::uint32_t {
      // COF interrupt is disabled
      eCOF_INT_EN_0 = 0,
      // COF interrupt is enabled
      eCOF_INT_EN_1 = 1,
    };

    enum class eVIDEO_MODE : std::uint32_t {
      // Progressive mode is selected
      eVIDEO_MODE_0 = 0,
      // Interlace mode is selected
      eVIDEO_MODE_1 = 1,
    };

    enum class eEOF_INT_EN : std::uint32_t {
      // EOF interrupt is disabled.
      eEOF_INT_EN_0 = 0,
      // EOF interrupt is generated when RX count value is reached.
      eEOF_INT_EN_1 = 1,
    };

    enum class eEXT_VSYNC : std::uint32_t {
      // Internal VSYNC mode
      eEXT_VSYNC_0 = 0,
      // External VSYNC mode
      eEXT_VSYNC_1 = 1,
    };

    enum class eSWAP16_EN : std::uint32_t {
      // Disable swapping
      eSWAP16_EN_0 = 0,
      // Enable swapping
      eSWAP16_EN_1 = 1,
    };

    // Pixel Bit
    using PIXEL_BIT = ftl::mmio::Field<1, 0, ePIXEL_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Valid Pixel Clock Edge Select
    using REDGE = ftl::mmio::Field<1, 1, eREDGE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invert Pixel Clock Input
    using INV_PCLK = ftl::mmio::Field<1, 2, eINV_PCLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invert Data Input. This bit enables or disables internal inverters on the data lines.
    using INV_DATA = ftl::mmio::Field<1, 3, eINV_DATA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Gated Clock Mode Enable
    using GCLK_MODE = ftl::mmio::Field<1, 4, eGCLK_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Asynchronous RXFIFO Clear
    using CLR_RXFIFO = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Asynchronous STATFIFO Clear
    using CLR_STATFIFO = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data Packing Direction
    using PACK_DIR = ftl::mmio::Field<1, 7, ePACK_DIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Clear Control
    using FCC = ftl::mmio::Field<1, 8, eFCC, ftl::mmio::RW, ftl::mmio::Normal>;
    // BT.656 Interface Enable. This bit selects the type of interface used.
    using CCIR_EN = ftl::mmio::Field<1, 10, eCCIR_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // HSYNC Polarity Select
    using HSYNC_POL = ftl::mmio::Field<1, 11, eHSYNC_POL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Histogram Interrupt Enable
    using HISTOGRAM_CALC_DONE_IE = ftl::mmio::Field<1, 12, eHISTOGRAM_CALC_DONE_IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Start Of Frame (SOF) Interrupt Enable. This bit enables the SOF interrupt.
    using SOF_INTEN = ftl::mmio::Field<1, 16, eSOF_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // SOF Interrupt Polarity. This bit controls the condition that generates an SOF interrupt.
    using SOF_POL = ftl::mmio::Field<1, 17, eSOF_POL, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFO Full Interrupt Enable. This bit enables the RxFIFO full interrupt.
    using RXFF_INTEN = ftl::mmio::Field<1, 18, eRXFF_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Frame Buffer1 DMA Transfer Done Interrupt Enable
    using FB1_DMA_DONE_INTEN = ftl::mmio::Field<1, 19, eFB1_DMA_DONE_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Frame Buffer2 DMA Transfer Done Interrupt Enable
    using FB2_DMA_DONE_INTEN = ftl::mmio::Field<1, 20, eFB2_DMA_DONE_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // STATFIFO Full Interrupt Enable. This bit enables the STAT FIFO interrupt.
    using STATFF_INTEN = ftl::mmio::Field<1, 21, eSTATFF_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // STATFIFO DMA Transfer Done Interrupt Enable
    using SFF_DMA_DONE_INTEN = ftl::mmio::Field<1, 22, eSFF_DMA_DONE_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFO Overrun Interrupt Enable. This bit enables the RX FIFO overrun interrupt.
    using RF_OR_INTEN = ftl::mmio::Field<1, 24, eRF_OR_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // STAT FIFO Overrun Interrupt Enable. This bit enables the STATFIFO overrun interrupt.
    using SF_OR_INTEN = ftl::mmio::Field<1, 25, eSF_OR_INTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Change Of Image Field (COF) Interrupt Enable
    using COF_INT_EN = ftl::mmio::Field<1, 26, eCOF_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Video mode select. This bit controls the video mode in BT.656 mode and TV decoder input.
    using VIDEO_MODE = ftl::mmio::Field<1, 27, eVIDEO_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // End-of-Frame Interrupt Enable. This bit enables and disables the EOF interrupt.
    using EOF_INT_EN = ftl::mmio::Field<1, 29, eEOF_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External VSYNC Enable
    using EXT_VSYNC = ftl::mmio::Field<1, 30, eEXT_VSYNC, ftl::mmio::RW, ftl::mmio::Normal>;
    // SWAP 16-Bit Enable
    using SWAP16_EN = ftl::mmio::Field<1, 31, eSWAP16_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiCr1Fields

  struct CSI_CR1 : ftl::mmio::Register<
      0x40800000u,
      std::uint32_t,
      0x40000800u,
      ftl::mmio::RW,
      CsiCr1Fields::PIXEL_BIT,
      CsiCr1Fields::REDGE,
      CsiCr1Fields::INV_PCLK,
      CsiCr1Fields::INV_DATA,
      CsiCr1Fields::GCLK_MODE,
      CsiCr1Fields::CLR_RXFIFO,
      CsiCr1Fields::CLR_STATFIFO,
      CsiCr1Fields::PACK_DIR,
      CsiCr1Fields::FCC,
      ftl::mmio::Reserved<1, 9>,
      CsiCr1Fields::CCIR_EN,
      CsiCr1Fields::HSYNC_POL,
      CsiCr1Fields::HISTOGRAM_CALC_DONE_IE,
      ftl::mmio::Reserved<3, 13>,
      CsiCr1Fields::SOF_INTEN,
      CsiCr1Fields::SOF_POL,
      CsiCr1Fields::RXFF_INTEN,
      CsiCr1Fields::FB1_DMA_DONE_INTEN,
      CsiCr1Fields::FB2_DMA_DONE_INTEN,
      CsiCr1Fields::STATFF_INTEN,
      CsiCr1Fields::SFF_DMA_DONE_INTEN,
      ftl::mmio::Reserved<1, 23>,
      CsiCr1Fields::RF_OR_INTEN,
      CsiCr1Fields::SF_OR_INTEN,
      CsiCr1Fields::COF_INT_EN,
      CsiCr1Fields::VIDEO_MODE,
      ftl::mmio::Reserved<1, 28>,
      CsiCr1Fields::EOF_INT_EN,
      CsiCr1Fields::EXT_VSYNC,
      CsiCr1Fields::SWAP16_EN> {
    using ePIXEL_BIT = CsiCr1Fields::ePIXEL_BIT;
    using eREDGE = CsiCr1Fields::eREDGE;
    using eINV_PCLK = CsiCr1Fields::eINV_PCLK;
    using eINV_DATA = CsiCr1Fields::eINV_DATA;
    using eGCLK_MODE = CsiCr1Fields::eGCLK_MODE;
    using ePACK_DIR = CsiCr1Fields::ePACK_DIR;
    using eFCC = CsiCr1Fields::eFCC;
    using eCCIR_EN = CsiCr1Fields::eCCIR_EN;
    using eHSYNC_POL = CsiCr1Fields::eHSYNC_POL;
    using eHISTOGRAM_CALC_DONE_IE = CsiCr1Fields::eHISTOGRAM_CALC_DONE_IE;
    using eSOF_INTEN = CsiCr1Fields::eSOF_INTEN;
    using eSOF_POL = CsiCr1Fields::eSOF_POL;
    using eRXFF_INTEN = CsiCr1Fields::eRXFF_INTEN;
    using eFB1_DMA_DONE_INTEN = CsiCr1Fields::eFB1_DMA_DONE_INTEN;
    using eFB2_DMA_DONE_INTEN = CsiCr1Fields::eFB2_DMA_DONE_INTEN;
    using eSTATFF_INTEN = CsiCr1Fields::eSTATFF_INTEN;
    using eSFF_DMA_DONE_INTEN = CsiCr1Fields::eSFF_DMA_DONE_INTEN;
    using eRF_OR_INTEN = CsiCr1Fields::eRF_OR_INTEN;
    using eSF_OR_INTEN = CsiCr1Fields::eSF_OR_INTEN;
    using eCOF_INT_EN = CsiCr1Fields::eCOF_INT_EN;
    using eVIDEO_MODE = CsiCr1Fields::eVIDEO_MODE;
    using eEOF_INT_EN = CsiCr1Fields::eEOF_INT_EN;
    using eEXT_VSYNC = CsiCr1Fields::eEXT_VSYNC;
    using eSWAP16_EN = CsiCr1Fields::eSWAP16_EN;
    using PIXEL_BIT = CsiCr1Fields::PIXEL_BIT;
    using REDGE = CsiCr1Fields::REDGE;
    using INV_PCLK = CsiCr1Fields::INV_PCLK;
    using INV_DATA = CsiCr1Fields::INV_DATA;
    using GCLK_MODE = CsiCr1Fields::GCLK_MODE;
    using CLR_RXFIFO = CsiCr1Fields::CLR_RXFIFO;
    using CLR_STATFIFO = CsiCr1Fields::CLR_STATFIFO;
    using PACK_DIR = CsiCr1Fields::PACK_DIR;
    using FCC = CsiCr1Fields::FCC;
    using CCIR_EN = CsiCr1Fields::CCIR_EN;
    using HSYNC_POL = CsiCr1Fields::HSYNC_POL;
    using HISTOGRAM_CALC_DONE_IE = CsiCr1Fields::HISTOGRAM_CALC_DONE_IE;
    using SOF_INTEN = CsiCr1Fields::SOF_INTEN;
    using SOF_POL = CsiCr1Fields::SOF_POL;
    using RXFF_INTEN = CsiCr1Fields::RXFF_INTEN;
    using FB1_DMA_DONE_INTEN = CsiCr1Fields::FB1_DMA_DONE_INTEN;
    using FB2_DMA_DONE_INTEN = CsiCr1Fields::FB2_DMA_DONE_INTEN;
    using STATFF_INTEN = CsiCr1Fields::STATFF_INTEN;
    using SFF_DMA_DONE_INTEN = CsiCr1Fields::SFF_DMA_DONE_INTEN;
    using RF_OR_INTEN = CsiCr1Fields::RF_OR_INTEN;
    using SF_OR_INTEN = CsiCr1Fields::SF_OR_INTEN;
    using COF_INT_EN = CsiCr1Fields::COF_INT_EN;
    using VIDEO_MODE = CsiCr1Fields::VIDEO_MODE;
    using EOF_INT_EN = CsiCr1Fields::EOF_INT_EN;
    using EXT_VSYNC = CsiCr1Fields::EXT_VSYNC;
    using SWAP16_EN = CsiCr1Fields::SWAP16_EN;
  };

  // CSI Control Register 2
  struct CsiCr2Fields {
    enum class eHSC : std::uint32_t {
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

    enum class eVSC : std::uint32_t {
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

    enum class eLVRM : std::uint32_t {
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

    enum class eBTS : std::uint32_t {
      // GR
      eBTS_0 = 0,
      // RG
      eBTS_1 = 1,
      // BG
      eBTS_2 = 2,
      // GB
      eBTS_3 = 3,
    };

    enum class eSCE : std::uint32_t {
      // Skip count disable
      eSCE_0 = 0,
      // Skip count enable
      eSCE_1 = 1,
    };

    enum class eAFS : std::uint32_t {
      // Abs Diff on consecutive green pixels
      eAFS_0 = 0,
      // Abs Diff on every third green pixels
      eAFS_1 = 1,
      // Abs Diff on every four green pixels
      eAFS_2 = 2,
    };

    enum class eDRM : std::uint32_t {
      // Stats grid of 8 x 6
      eDRM_0 = 0,
      // Stats grid of 8 x 12
      eDRM_1 = 1,
    };

    enum class eDMA_BURST_TYPE_SFF : std::uint32_t {
      // INCR8
      eDMA_BURST_TYPE_SFF_0 = 0,
      // INCR4
      eDMA_BURST_TYPE_SFF_1 = 1,
      // INCR16
      eDMA_BURST_TYPE_SFF_3 = 3,
    };

    enum class eDMA_BURST_TYPE_RFF : std::uint32_t {
      // INCR8
      eDMA_BURST_TYPE_RFF_0 = 0,
      // INCR4
      eDMA_BURST_TYPE_RFF_1 = 1,
      // INCR16
      eDMA_BURST_TYPE_RFF_3 = 3,
    };

    // Horizontal Skip Count
    using HSC = ftl::mmio::Field<8, 0, eHSC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Vertical Skip Count. Contains the number of rows to skip. SCE must be 1, otherwise VSC is ignored.
    using VSC = ftl::mmio::Field<8, 8, eVSC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Live View Resolution Mode. Selects the grid size used for live view resolution.
    using LVRM = ftl::mmio::Field<3, 16, eLVRM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bayer Tile Start. Controls the Bayer pattern starting point.
    using BTS = ftl::mmio::Field<2, 19, eBTS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Skip Count Enable
    using SCE = ftl::mmio::Field<1, 23, eSCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto Focus Spread. Selects which green pixels are used for auto-focus.
    using AFS = ftl::mmio::Field<2, 24, eAFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Double Resolution Mode. Controls size of statistics grid.
    using DRM = ftl::mmio::Field<1, 26, eDRM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Type of DMA Transfer from STATFIFO. Selects the burst type of DMA transfer from STATFIFO.
    using DMA_BURST_TYPE_SFF = ftl::mmio::Field<2, 28, eDMA_BURST_TYPE_SFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Type of DMA Transfer from RxFIFO. Selects the burst type of DMA transfer from RxFIFO.
    using DMA_BURST_TYPE_RFF = ftl::mmio::Field<2, 30, eDMA_BURST_TYPE_RFF, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiCr2Fields

  struct CSI_CR2 : ftl::mmio::Register<
      0x40800004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CsiCr2Fields::HSC,
      CsiCr2Fields::VSC,
      CsiCr2Fields::LVRM,
      CsiCr2Fields::BTS,
      ftl::mmio::Reserved<2, 21>,
      CsiCr2Fields::SCE,
      CsiCr2Fields::AFS,
      CsiCr2Fields::DRM,
      ftl::mmio::Reserved<1, 27>,
      CsiCr2Fields::DMA_BURST_TYPE_SFF,
      CsiCr2Fields::DMA_BURST_TYPE_RFF> {
    using eHSC = CsiCr2Fields::eHSC;
    using eVSC = CsiCr2Fields::eVSC;
    using eLVRM = CsiCr2Fields::eLVRM;
    using eBTS = CsiCr2Fields::eBTS;
    using eSCE = CsiCr2Fields::eSCE;
    using eAFS = CsiCr2Fields::eAFS;
    using eDRM = CsiCr2Fields::eDRM;
    using eDMA_BURST_TYPE_SFF = CsiCr2Fields::eDMA_BURST_TYPE_SFF;
    using eDMA_BURST_TYPE_RFF = CsiCr2Fields::eDMA_BURST_TYPE_RFF;
    using HSC = CsiCr2Fields::HSC;
    using VSC = CsiCr2Fields::VSC;
    using LVRM = CsiCr2Fields::LVRM;
    using BTS = CsiCr2Fields::BTS;
    using SCE = CsiCr2Fields::SCE;
    using AFS = CsiCr2Fields::AFS;
    using DRM = CsiCr2Fields::DRM;
    using DMA_BURST_TYPE_SFF = CsiCr2Fields::DMA_BURST_TYPE_SFF;
    using DMA_BURST_TYPE_RFF = CsiCr2Fields::DMA_BURST_TYPE_RFF;
  };

  // CSI Control Register 3
  struct CsiCr3Fields {
    enum class eECC_AUTO_EN : std::uint32_t {
      // Auto Error correction is disabled.
      eECC_AUTO_EN_0 = 0,
      // Auto Error correction is enabled.
      eECC_AUTO_EN_1 = 1,
    };

    enum class eECC_INT_EN : std::uint32_t {
      // No interrupt is generated when error is detected. Only the status bit ECC_INT is set.
      eECC_INT_EN_0 = 0,
      // Interrupt is generated when error is detected.
      eECC_INT_EN_1 = 1,
    };

    enum class eZERO_PACK_EN : std::uint32_t {
      // Zero packing disabled
      eZERO_PACK_EN_0 = 0,
      // Zero packing enabled
      eZERO_PACK_EN_1 = 1,
    };

    enum class eSENSOR_16BITS : std::uint32_t {
      // Only one 8-bit sensor is connected.
      eSENSOR_16BITS_0 = 0,
      // One 16-bit sensor is connected.
      eSENSOR_16BITS_1 = 1,
    };

    enum class eRxFF_LEVEL : std::uint32_t {
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

    enum class eHRESP_ERR_EN : std::uint32_t {
      // Disable hresponse error interrupt
      eHRESP_ERR_EN_0 = 0,
      // Enable hresponse error interrupt
      eHRESP_ERR_EN_1 = 1,
    };

    enum class eSTATFF_LEVEL : std::uint32_t {
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

    enum class eDMA_REQ_EN_SFF : std::uint32_t {
      // Disable the dma request
      eDMA_REQ_EN_SFF_0 = 0,
      // Enable the dma request
      eDMA_REQ_EN_SFF_1 = 1,
    };

    enum class eDMA_REQ_EN_RFF : std::uint32_t {
      // Disable the dma request
      eDMA_REQ_EN_RFF_0 = 0,
      // Enable the dma request
      eDMA_REQ_EN_RFF_1 = 1,
    };

    enum class eDMA_REFLASH_SFF : std::uint32_t {
      // No reflashing
      eDMA_REFLASH_SFF_0 = 0,
      // Reflash the embedded DMA controller
      eDMA_REFLASH_SFF_1 = 1,
    };

    enum class eDMA_REFLASH_RFF : std::uint32_t {
      // No reflashing
      eDMA_REFLASH_RFF_0 = 0,
      // Reflash the embedded DMA controller
      eDMA_REFLASH_RFF_1 = 1,
    };

    enum class eFRMCNT_RST : std::uint32_t {
      // Do not reset
      eFRMCNT_RST_0 = 0,
      // Reset frame counter immediately
      eFRMCNT_RST_1 = 1,
    };

    // Automatic Error Correction Enable
    using ECC_AUTO_EN = ftl::mmio::Field<1, 0, eECC_AUTO_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Error Detection Interrupt Enable
    using ECC_INT_EN = ftl::mmio::Field<1, 1, eECC_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Dummy Zero Packing Enable
    using ZERO_PACK_EN = ftl::mmio::Field<1, 2, eZERO_PACK_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // 16-bit Sensor Mode
    using SENSOR_16BITS = ftl::mmio::Field<1, 3, eSENSOR_16BITS, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFO Full Level
    using RxFF_LEVEL = ftl::mmio::Field<3, 4, eRxFF_LEVEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hresponse Error Enable. This bit enables the hresponse (AHB protocol standard) error interrupt.
    using HRESP_ERR_EN = ftl::mmio::Field<1, 7, eHRESP_ERR_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // STATFIFO Full Level
    using STATFF_LEVEL = ftl::mmio::Field<3, 8, eSTATFF_LEVEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Request Enable for STATFIFO
    using DMA_REQ_EN_SFF = ftl::mmio::Field<1, 11, eDMA_REQ_EN_SFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Request Enable for RxFIFO
    using DMA_REQ_EN_RFF = ftl::mmio::Field<1, 12, eDMA_REQ_EN_RFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reflash DMA Controller for STATFIFO
    using DMA_REFLASH_SFF = ftl::mmio::Field<1, 13, eDMA_REFLASH_SFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reflash DMA Controller for RxFIFO
    using DMA_REFLASH_RFF = ftl::mmio::Field<1, 14, eDMA_REFLASH_RFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Frame Count Reset. Resets the Frame Counter. (Cleared automatically after reset is done)
    using FRMCNT_RST = ftl::mmio::Field<1, 15, eFRMCNT_RST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Frame Counter
    using FRMCNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiCr3Fields

  struct CSI_CR3 : ftl::mmio::Register<
      0x40800008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CsiCr3Fields::ECC_AUTO_EN,
      CsiCr3Fields::ECC_INT_EN,
      CsiCr3Fields::ZERO_PACK_EN,
      CsiCr3Fields::SENSOR_16BITS,
      CsiCr3Fields::RxFF_LEVEL,
      CsiCr3Fields::HRESP_ERR_EN,
      CsiCr3Fields::STATFF_LEVEL,
      CsiCr3Fields::DMA_REQ_EN_SFF,
      CsiCr3Fields::DMA_REQ_EN_RFF,
      CsiCr3Fields::DMA_REFLASH_SFF,
      CsiCr3Fields::DMA_REFLASH_RFF,
      CsiCr3Fields::FRMCNT_RST,
      CsiCr3Fields::FRMCNT> {
    using eECC_AUTO_EN = CsiCr3Fields::eECC_AUTO_EN;
    using eECC_INT_EN = CsiCr3Fields::eECC_INT_EN;
    using eZERO_PACK_EN = CsiCr3Fields::eZERO_PACK_EN;
    using eSENSOR_16BITS = CsiCr3Fields::eSENSOR_16BITS;
    using eRxFF_LEVEL = CsiCr3Fields::eRxFF_LEVEL;
    using eHRESP_ERR_EN = CsiCr3Fields::eHRESP_ERR_EN;
    using eSTATFF_LEVEL = CsiCr3Fields::eSTATFF_LEVEL;
    using eDMA_REQ_EN_SFF = CsiCr3Fields::eDMA_REQ_EN_SFF;
    using eDMA_REQ_EN_RFF = CsiCr3Fields::eDMA_REQ_EN_RFF;
    using eDMA_REFLASH_SFF = CsiCr3Fields::eDMA_REFLASH_SFF;
    using eDMA_REFLASH_RFF = CsiCr3Fields::eDMA_REFLASH_RFF;
    using eFRMCNT_RST = CsiCr3Fields::eFRMCNT_RST;
    using ECC_AUTO_EN = CsiCr3Fields::ECC_AUTO_EN;
    using ECC_INT_EN = CsiCr3Fields::ECC_INT_EN;
    using ZERO_PACK_EN = CsiCr3Fields::ZERO_PACK_EN;
    using SENSOR_16BITS = CsiCr3Fields::SENSOR_16BITS;
    using RxFF_LEVEL = CsiCr3Fields::RxFF_LEVEL;
    using HRESP_ERR_EN = CsiCr3Fields::HRESP_ERR_EN;
    using STATFF_LEVEL = CsiCr3Fields::STATFF_LEVEL;
    using DMA_REQ_EN_SFF = CsiCr3Fields::DMA_REQ_EN_SFF;
    using DMA_REQ_EN_RFF = CsiCr3Fields::DMA_REQ_EN_RFF;
    using DMA_REFLASH_SFF = CsiCr3Fields::DMA_REFLASH_SFF;
    using DMA_REFLASH_RFF = CsiCr3Fields::DMA_REFLASH_RFF;
    using FRMCNT_RST = CsiCr3Fields::FRMCNT_RST;
    using FRMCNT = CsiCr3Fields::FRMCNT;
  };

  // CSI Statistic FIFO Register
  struct CsiStatfifoFields {
    // Static data from sensor
    using STAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CsiStatfifoFields

  struct CSI_STATFIFO : ftl::mmio::Register<
      0x4080000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      CsiStatfifoFields::STAT> {
    using STAT = CsiStatfifoFields::STAT;
  };

  // CSI RX FIFO Register
  struct CsiRfifoFields {
    // Received image data
    using IMAGE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CsiRfifoFields

  struct CSI_RFIFO : ftl::mmio::Register<
      0x40800010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      CsiRfifoFields::IMAGE> {
    using IMAGE = CsiRfifoFields::IMAGE;
  };

  // CSI RX Count Register
  struct CsiRxcntFields {
    // RxFIFO Count
    using RXCNT = ftl::mmio::Field<22, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiRxcntFields

  struct CSI_RXCNT : ftl::mmio::Register<
      0x40800014u,
      std::uint32_t,
      0x00009600u,
      ftl::mmio::RW,
      CsiRxcntFields::RXCNT,
      ftl::mmio::Reserved<10, 22>> {
    using RXCNT = CsiRxcntFields::RXCNT;
  };

  // CSI Status Register
  struct CsiSrFields {
    enum class eDRDY : std::uint32_t {
      // No data (word) is ready
      eDRDY_0 = 0,
      // At least 1 datum (word) is ready in RXFIFO.
      eDRDY_1 = 1,
    };

    enum class eECC_INT : std::uint32_t {
      // No error detected
      eECC_INT_0 = 0,
      // Error is detected in BT.656 coding
      eECC_INT_1 = 1,
    };

    enum class eHISTOGRAM_CALC_DONE_INT : std::uint32_t {
      // Histogram calculation is not finished
      eHISTOGRAM_CALC_DONE_INT_0 = 0,
      // Histogram calculation is done and driver can access the PIXEL_COUNTERS(CSI_CSICR21~CSI_CSICR276) to get the gray level
      eHISTOGRAM_CALC_DONE_INT_1 = 1,
    };

    enum class eHRESP_ERR_INT : std::uint32_t {
      // No hresponse error.
      eHRESP_ERR_INT_0 = 0,
      // Hresponse error is detected.
      eHRESP_ERR_INT_1 = 1,
    };

    enum class eCOF_INT : std::uint32_t {
      // Video field has no change.
      eCOF_INT_0 = 0,
      // Change of video field is detected.
      eCOF_INT_1 = 1,
    };

    enum class eF1_INT : std::uint32_t {
      // Field 1 of video is not detected.
      eF1_INT_0 = 0,
      // Field 1 of video is about to start.
      eF1_INT_1 = 1,
    };

    enum class eF2_INT : std::uint32_t {
      // Field 2 of video is not detected
      eF2_INT_0 = 0,
      // Field 2 of video is about to start
      eF2_INT_1 = 1,
    };

    enum class eSOF_INT : std::uint32_t {
      // SOF is not detected.
      eSOF_INT_0 = 0,
      // SOF is detected.
      eSOF_INT_1 = 1,
    };

    enum class eEOF_INT : std::uint32_t {
      // EOF is not detected.
      eEOF_INT_0 = 0,
      // EOF is detected.
      eEOF_INT_1 = 1,
    };

    enum class eRxFF_INT : std::uint32_t {
      // RxFIFO is not full.
      eRxFF_INT_0 = 0,
      // RxFIFO is full.
      eRxFF_INT_1 = 1,
    };

    enum class eDMA_TSF_DONE_FB1 : std::uint32_t {
      // DMA transfer is not completed.
      eDMA_TSF_DONE_FB1_0 = 0,
      // DMA transfer is completed.
      eDMA_TSF_DONE_FB1_1 = 1,
    };

    enum class eDMA_TSF_DONE_FB2 : std::uint32_t {
      // DMA transfer is not completed.
      eDMA_TSF_DONE_FB2_0 = 0,
      // DMA transfer is completed.
      eDMA_TSF_DONE_FB2_1 = 1,
    };

    enum class eSTATFF_INT : std::uint32_t {
      // STATFIFO is not full.
      eSTATFF_INT_0 = 0,
      // STATFIFO is full.
      eSTATFF_INT_1 = 1,
    };

    enum class eDMA_TSF_DONE_SFF : std::uint32_t {
      // DMA transfer is not completed.
      eDMA_TSF_DONE_SFF_0 = 0,
      // DMA transfer is completed.
      eDMA_TSF_DONE_SFF_1 = 1,
    };

    enum class eRF_OR_INT : std::uint32_t {
      // RXFIFO has not overflowed.
      eRF_OR_INT_0 = 0,
      // RXFIFO has overflowed.
      eRF_OR_INT_1 = 1,
    };

    enum class eSF_OR_INT : std::uint32_t {
      // STATFIFO has not overflowed.
      eSF_OR_INT_0 = 0,
      // STATFIFO has overflowed.
      eSF_OR_INT_1 = 1,
    };

    // RXFIFO Data Ready
    using DRDY = ftl::mmio::Field<1, 0, eDRDY, ftl::mmio::RW, ftl::mmio::Normal>;
    // BT
    using ECC_INT = ftl::mmio::Field<1, 1, eECC_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using HISTOGRAM_CALC_DONE_INT = ftl::mmio::Field<1, 2, eHISTOGRAM_CALC_DONE_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hresponse Error Interrupt Status
    using HRESP_ERR_INT = ftl::mmio::Field<1, 7, eHRESP_ERR_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Change Of Field Interrupt Status
    using COF_INT = ftl::mmio::Field<1, 13, eCOF_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // BT
    using F1_INT = ftl::mmio::Field<1, 14, eF1_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // BT
    using F2_INT = ftl::mmio::Field<1, 15, eF2_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Start of Frame Interrupt Status. Indicates when SOF is detected. (Cleared by writing 1)
    using SOF_INT = ftl::mmio::Field<1, 16, eSOF_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // End of Frame (EOF) Interrupt Status. Indicates when EOF is detected. (Cleared by writing 1)
    using EOF_INT = ftl::mmio::Field<1, 17, eEOF_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // RXFIFO Full Interrupt Status
    using RxFF_INT = ftl::mmio::Field<1, 18, eRxFF_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Transfer Done in Frame Buffer1
    using DMA_TSF_DONE_FB1 = ftl::mmio::Field<1, 19, eDMA_TSF_DONE_FB1, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Transfer Done in Frame Buffer2
    using DMA_TSF_DONE_FB2 = ftl::mmio::Field<1, 20, eDMA_TSF_DONE_FB2, ftl::mmio::RW, ftl::mmio::Normal>;
    // STATFIFO Full Interrupt Status
    using STATFF_INT = ftl::mmio::Field<1, 21, eSTATFF_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Transfer Done from StatFIFO
    using DMA_TSF_DONE_SFF = ftl::mmio::Field<1, 22, eDMA_TSF_DONE_SFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // RxFIFO Overrun Interrupt Status
    using RF_OR_INT = ftl::mmio::Field<1, 24, eRF_OR_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // STATFIFO Overrun Interrupt Status
    using SF_OR_INT = ftl::mmio::Field<1, 25, eSF_OR_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // When DMA field 1 is complete, this bit will be set to 1(clear by writing 1).
    using DMA_FIELD1_DONE = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When DMA field 0 is complete, this bit will be set to 1(clear by writing 1).
    using DMA_FIELD0_DONE = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When using base address switching enable, this bit will be 1 when switching occur before DMA complete
    using BASEADDR_CHHANGE_ERROR = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiSrFields

  struct CSI_SR : ftl::mmio::Register<
      0x40800018u,
      std::uint32_t,
      0x80004000u,
      ftl::mmio::RW,
      CsiSrFields::DRDY,
      CsiSrFields::ECC_INT,
      CsiSrFields::HISTOGRAM_CALC_DONE_INT,
      ftl::mmio::Reserved<4, 3>,
      CsiSrFields::HRESP_ERR_INT,
      ftl::mmio::Reserved<5, 8>,
      CsiSrFields::COF_INT,
      CsiSrFields::F1_INT,
      CsiSrFields::F2_INT,
      CsiSrFields::SOF_INT,
      CsiSrFields::EOF_INT,
      CsiSrFields::RxFF_INT,
      CsiSrFields::DMA_TSF_DONE_FB1,
      CsiSrFields::DMA_TSF_DONE_FB2,
      CsiSrFields::STATFF_INT,
      CsiSrFields::DMA_TSF_DONE_SFF,
      ftl::mmio::Reserved<1, 23>,
      CsiSrFields::RF_OR_INT,
      CsiSrFields::SF_OR_INT,
      CsiSrFields::DMA_FIELD1_DONE,
      CsiSrFields::DMA_FIELD0_DONE,
      CsiSrFields::BASEADDR_CHHANGE_ERROR,
      ftl::mmio::Reserved<3, 29>> {
    using eDRDY = CsiSrFields::eDRDY;
    using eECC_INT = CsiSrFields::eECC_INT;
    using eHISTOGRAM_CALC_DONE_INT = CsiSrFields::eHISTOGRAM_CALC_DONE_INT;
    using eHRESP_ERR_INT = CsiSrFields::eHRESP_ERR_INT;
    using eCOF_INT = CsiSrFields::eCOF_INT;
    using eF1_INT = CsiSrFields::eF1_INT;
    using eF2_INT = CsiSrFields::eF2_INT;
    using eSOF_INT = CsiSrFields::eSOF_INT;
    using eEOF_INT = CsiSrFields::eEOF_INT;
    using eRxFF_INT = CsiSrFields::eRxFF_INT;
    using eDMA_TSF_DONE_FB1 = CsiSrFields::eDMA_TSF_DONE_FB1;
    using eDMA_TSF_DONE_FB2 = CsiSrFields::eDMA_TSF_DONE_FB2;
    using eSTATFF_INT = CsiSrFields::eSTATFF_INT;
    using eDMA_TSF_DONE_SFF = CsiSrFields::eDMA_TSF_DONE_SFF;
    using eRF_OR_INT = CsiSrFields::eRF_OR_INT;
    using eSF_OR_INT = CsiSrFields::eSF_OR_INT;
    using DRDY = CsiSrFields::DRDY;
    using ECC_INT = CsiSrFields::ECC_INT;
    using HISTOGRAM_CALC_DONE_INT = CsiSrFields::HISTOGRAM_CALC_DONE_INT;
    using HRESP_ERR_INT = CsiSrFields::HRESP_ERR_INT;
    using COF_INT = CsiSrFields::COF_INT;
    using F1_INT = CsiSrFields::F1_INT;
    using F2_INT = CsiSrFields::F2_INT;
    using SOF_INT = CsiSrFields::SOF_INT;
    using EOF_INT = CsiSrFields::EOF_INT;
    using RxFF_INT = CsiSrFields::RxFF_INT;
    using DMA_TSF_DONE_FB1 = CsiSrFields::DMA_TSF_DONE_FB1;
    using DMA_TSF_DONE_FB2 = CsiSrFields::DMA_TSF_DONE_FB2;
    using STATFF_INT = CsiSrFields::STATFF_INT;
    using DMA_TSF_DONE_SFF = CsiSrFields::DMA_TSF_DONE_SFF;
    using RF_OR_INT = CsiSrFields::RF_OR_INT;
    using SF_OR_INT = CsiSrFields::SF_OR_INT;
    using DMA_FIELD1_DONE = CsiSrFields::DMA_FIELD1_DONE;
    using DMA_FIELD0_DONE = CsiSrFields::DMA_FIELD0_DONE;
    using BASEADDR_CHHANGE_ERROR = CsiSrFields::BASEADDR_CHHANGE_ERROR;
  };

  // CSI DMA Start Address Register - for STATFIFO
  struct CsiDmasaStatfifoFields {
    // DMA Start Address for STATFIFO
    using DMA_START_ADDR_SFF = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiDmasaStatfifoFields

  struct CSI_DMASA_STATFIFO : ftl::mmio::Register<
      0x40800020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      CsiDmasaStatfifoFields::DMA_START_ADDR_SFF> {
    using DMA_START_ADDR_SFF = CsiDmasaStatfifoFields::DMA_START_ADDR_SFF;
  };

  // CSI DMA Transfer Size Register - for STATFIFO
  struct CsiDmatsStatfifoFields {
    // DMA Transfer Size for STATFIFO
    using DMA_TSF_SIZE_SFF = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiDmatsStatfifoFields

  struct CSI_DMATS_STATFIFO : ftl::mmio::Register<
      0x40800024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CsiDmatsStatfifoFields::DMA_TSF_SIZE_SFF> {
    using DMA_TSF_SIZE_SFF = CsiDmatsStatfifoFields::DMA_TSF_SIZE_SFF;
  };

  // CSI DMA Start Address Register - for Frame Buffer1
  struct CsiDmasaFb1Fields {
    // DMA Start Address in Frame Buffer1
    using DMA_START_ADDR_FB1 = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiDmasaFb1Fields

  struct CSI_DMASA_FB1 : ftl::mmio::Register<
      0x40800028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      CsiDmasaFb1Fields::DMA_START_ADDR_FB1> {
    using DMA_START_ADDR_FB1 = CsiDmasaFb1Fields::DMA_START_ADDR_FB1;
  };

  // CSI DMA Transfer Size Register - for Frame Buffer2
  struct CsiDmasaFb2Fields {
    // DMA Start Address in Frame Buffer2
    using DMA_START_ADDR_FB2 = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiDmasaFb2Fields

  struct CSI_DMASA_FB2 : ftl::mmio::Register<
      0x4080002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      CsiDmasaFb2Fields::DMA_START_ADDR_FB2> {
    using DMA_START_ADDR_FB2 = CsiDmasaFb2Fields::DMA_START_ADDR_FB2;
  };

  // CSI Frame Buffer Parameter Register
  struct CsiFbufParaFields {
    // Frame Buffer Parameter
    using FBUF_STRIDE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DEINTERLACE_STRIDE is only used in the deinterlace mode
    using DEINTERLACE_STRIDE = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiFbufParaFields

  struct CSI_FBUF_PARA : ftl::mmio::Register<
      0x40800030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CsiFbufParaFields::FBUF_STRIDE,
      CsiFbufParaFields::DEINTERLACE_STRIDE> {
    using FBUF_STRIDE = CsiFbufParaFields::FBUF_STRIDE;
    using DEINTERLACE_STRIDE = CsiFbufParaFields::DEINTERLACE_STRIDE;
  };

  // CSI Image Parameter Register
  struct CsiImagParaFields {
    // Image Height. Indicates how many pixels in a column of the image from the sensor.
    using IMAGE_HEIGHT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field indicates the number of active pixel cycles per line
    using IMAGE_WIDTH = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiImagParaFields

  struct CSI_IMAG_PARA : ftl::mmio::Register<
      0x40800034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CsiImagParaFields::IMAGE_HEIGHT,
      CsiImagParaFields::IMAGE_WIDTH> {
    using IMAGE_HEIGHT = CsiImagParaFields::IMAGE_HEIGHT;
    using IMAGE_WIDTH = CsiImagParaFields::IMAGE_WIDTH;
  };

  // CSI Control Register 18
  struct CsiCr18Fields {
    enum class eNTSC_EN : std::uint32_t {
      // PAL
      eNTSC_EN_0 = 0,
      // NTSC
      eNTSC_EN_1 = 1,
    };

    enum class eDEINTERLACE_EN : std::uint32_t {
      // Deinterlace disabled
      eDEINTERLACE_EN_0 = 0,
      // Deinterlace enabled
      eDEINTERLACE_EN_1 = 1,
    };

    enum class ePARALLEL24_EN : std::uint32_t {
      // Input is disabled
      ePARALLEL24_EN_0 = 0,
      // Input is enabled
      ePARALLEL24_EN_1 = 1,
    };

    enum class eBASEADDR_SWITCH_SEL : std::uint32_t {
      // Switching base address at the edge of the vsync
      eBASEADDR_SWITCH_SEL_0 = 0,
      // Switching base address at the edge of the first data of each frame
      eBASEADDR_SWITCH_SEL_1 = 1,
    };

    enum class eFIELD0_DONE_IE : std::uint32_t {
      // Interrupt disabled
      eFIELD0_DONE_IE_0 = 0,
      // Interrupt enabled
      eFIELD0_DONE_IE_1 = 1,
    };

    enum class eDMA_FIELD1_DONE_IE : std::uint32_t {
      // Interrupt disabled
      eDMA_FIELD1_DONE_IE_0 = 0,
      // Interrupt enabled
      eDMA_FIELD1_DONE_IE_1 = 1,
    };

    enum class eLAST_DMA_REQ_SEL : std::uint32_t {
      // fifo_full_level
      eLAST_DMA_REQ_SEL_0 = 0,
      // hburst_length
      eLAST_DMA_REQ_SEL_1 = 1,
    };

    enum class eBASEADDR_CHANGE_ERROR_IE : std::uint32_t {
      // Interrupt disabled
      eBASEADDR_CHANGE_ERROR_IE_0 = 0,
      // Interrupt enabled
      eBASEADDR_CHANGE_ERROR_IE_1 = 1,
    };

    enum class eRGB888A_FORMAT_SEL : std::uint32_t {
      // {8'h0, data[23:0]}
      eRGB888A_FORMAT_SEL_0 = 0,
      // {data[23:0], 8'h0}
      eRGB888A_FORMAT_SEL_1 = 1,
    };

    enum class eMASK_OPTION : std::uint32_t {
      // Writing to memory (OCRAM or external DDR) from first completely frame, when using this option, the CSI_ENABLE should be 1.
      eMASK_OPTION_0 = 0,
      // Writing to memory when CSI_ENABLE is 1.
      eMASK_OPTION_1 = 1,
      // Writing to memory from second completely frame, when using this option, the CSI_ENABLE should be 1.
      eMASK_OPTION_2 = 2,
      // Writing to memory when data comes in, not matter the CSI_ENABLE is 1 or 0.
      eMASK_OPTION_3 = 3,
    };

    enum class eMIPI_DOUBLE_CMPNT : std::uint32_t {
      // Single component per clock cycle (half pixel per clock cycle)
      eMIPI_DOUBLE_CMPNT_0 = 0,
      // Double component per clock cycle (a pixel per clock cycle)
      eMIPI_DOUBLE_CMPNT_1 = 1,
    };

    enum class eDATA_FROM_MIPI : std::uint32_t {
      // Data from parallel sensor
      eDATA_FROM_MIPI_0 = 0,
      // Data from MIPI
      eDATA_FROM_MIPI_1 = 1,
    };

    // This bit is used to select NTSC/PAL mode When input is TVDECODER or standard BT.656 video.
    using NTSC_EN = ftl::mmio::Field<1, 0, eNTSC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // When input is from TV decoder, this bit is enabled.
    using TVDECODER_IN_EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is used to select the output method When input is TVDECODER or standard BT.656 video.
    using DEINTERLACE_EN = ftl::mmio::Field<1, 2, eDEINTERLACE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable bit for Parallel RGB888/YUV444 24bit input
    using PARALLEL24_EN = ftl::mmio::Field<1, 3, ePARALLEL24_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is enabled, CSI DMA will switch the base address according to BASEADDR_SWITCH_SEL rather than automatically by DMA completed
    using BASEADDR_SWITCH_EN = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CSI 2 base addresses switching method. When using this bit, BASEADDR_SWITCH_EN is 1.
    using BASEADDR_SWITCH_SEL = ftl::mmio::Field<1, 5, eBASEADDR_SWITCH_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // In interlace mode, field 0 means interrupt enabled.
    using FIELD0_DONE_IE = ftl::mmio::Field<1, 6, eFIELD0_DONE_IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // When in interlace mode, field 1 done interrupt enable.
    using DMA_FIELD1_DONE_IE = ftl::mmio::Field<1, 7, eDMA_FIELD1_DONE_IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Choosing the last DMA request condition
    using LAST_DMA_REQ_SEL = ftl::mmio::Field<1, 8, eLAST_DMA_REQ_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base address change error interrupt enable signal.
    using BASEADDR_CHANGE_ERROR_IE = ftl::mmio::Field<1, 9, eBASEADDR_CHANGE_ERROR_IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output is 32-bit format.
    using RGB888A_FORMAT_SEL = ftl::mmio::Field<1, 10, eRGB888A_FORMAT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hprot value in AHB bus protocol.
    using AHB_HPROT = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // These bits used to choose the method to mask the CSI input.
    using MASK_OPTION = ftl::mmio::Field<2, 18, eMASK_OPTION, ftl::mmio::RW, ftl::mmio::Normal>;
    // Double component per clock cycle in YUV422 formats.
    using MIPI_DOUBLE_CMPNT = ftl::mmio::Field<1, 20, eMIPI_DOUBLE_CMPNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // It only works in MIPI CSI YUV422 double component mode.
    using MIPI_YU_SWAP = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using DATA_FROM_MIPI = ftl::mmio::Field<1, 22, eDATA_FROM_MIPI, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the line width are not the multiple of the burst length, assert this bit.
    using LINE_STRIDE_EN = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Image Data Format
    using MIPI_DATA_FORMAT = ftl::mmio::Field<6, 25, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // CSI global enable signal
    using CSI_ENABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiCr18Fields

  struct CSI_CR18 : ftl::mmio::Register<
      0x40800048u,
      std::uint32_t,
      0x0002D000u,
      ftl::mmio::RW,
      CsiCr18Fields::NTSC_EN,
      CsiCr18Fields::TVDECODER_IN_EN,
      CsiCr18Fields::DEINTERLACE_EN,
      CsiCr18Fields::PARALLEL24_EN,
      CsiCr18Fields::BASEADDR_SWITCH_EN,
      CsiCr18Fields::BASEADDR_SWITCH_SEL,
      CsiCr18Fields::FIELD0_DONE_IE,
      CsiCr18Fields::DMA_FIELD1_DONE_IE,
      CsiCr18Fields::LAST_DMA_REQ_SEL,
      CsiCr18Fields::BASEADDR_CHANGE_ERROR_IE,
      CsiCr18Fields::RGB888A_FORMAT_SEL,
      ftl::mmio::Reserved<1, 11>,
      CsiCr18Fields::AHB_HPROT,
      ftl::mmio::Reserved<2, 16>,
      CsiCr18Fields::MASK_OPTION,
      CsiCr18Fields::MIPI_DOUBLE_CMPNT,
      CsiCr18Fields::MIPI_YU_SWAP,
      CsiCr18Fields::DATA_FROM_MIPI,
      ftl::mmio::Reserved<1, 23>,
      CsiCr18Fields::LINE_STRIDE_EN,
      CsiCr18Fields::MIPI_DATA_FORMAT,
      CsiCr18Fields::CSI_ENABLE> {
    using eNTSC_EN = CsiCr18Fields::eNTSC_EN;
    using eDEINTERLACE_EN = CsiCr18Fields::eDEINTERLACE_EN;
    using ePARALLEL24_EN = CsiCr18Fields::ePARALLEL24_EN;
    using eBASEADDR_SWITCH_SEL = CsiCr18Fields::eBASEADDR_SWITCH_SEL;
    using eFIELD0_DONE_IE = CsiCr18Fields::eFIELD0_DONE_IE;
    using eDMA_FIELD1_DONE_IE = CsiCr18Fields::eDMA_FIELD1_DONE_IE;
    using eLAST_DMA_REQ_SEL = CsiCr18Fields::eLAST_DMA_REQ_SEL;
    using eBASEADDR_CHANGE_ERROR_IE = CsiCr18Fields::eBASEADDR_CHANGE_ERROR_IE;
    using eRGB888A_FORMAT_SEL = CsiCr18Fields::eRGB888A_FORMAT_SEL;
    using eMASK_OPTION = CsiCr18Fields::eMASK_OPTION;
    using eMIPI_DOUBLE_CMPNT = CsiCr18Fields::eMIPI_DOUBLE_CMPNT;
    using eDATA_FROM_MIPI = CsiCr18Fields::eDATA_FROM_MIPI;
    using NTSC_EN = CsiCr18Fields::NTSC_EN;
    using TVDECODER_IN_EN = CsiCr18Fields::TVDECODER_IN_EN;
    using DEINTERLACE_EN = CsiCr18Fields::DEINTERLACE_EN;
    using PARALLEL24_EN = CsiCr18Fields::PARALLEL24_EN;
    using BASEADDR_SWITCH_EN = CsiCr18Fields::BASEADDR_SWITCH_EN;
    using BASEADDR_SWITCH_SEL = CsiCr18Fields::BASEADDR_SWITCH_SEL;
    using FIELD0_DONE_IE = CsiCr18Fields::FIELD0_DONE_IE;
    using DMA_FIELD1_DONE_IE = CsiCr18Fields::DMA_FIELD1_DONE_IE;
    using LAST_DMA_REQ_SEL = CsiCr18Fields::LAST_DMA_REQ_SEL;
    using BASEADDR_CHANGE_ERROR_IE = CsiCr18Fields::BASEADDR_CHANGE_ERROR_IE;
    using RGB888A_FORMAT_SEL = CsiCr18Fields::RGB888A_FORMAT_SEL;
    using AHB_HPROT = CsiCr18Fields::AHB_HPROT;
    using MASK_OPTION = CsiCr18Fields::MASK_OPTION;
    using MIPI_DOUBLE_CMPNT = CsiCr18Fields::MIPI_DOUBLE_CMPNT;
    using MIPI_YU_SWAP = CsiCr18Fields::MIPI_YU_SWAP;
    using DATA_FROM_MIPI = CsiCr18Fields::DATA_FROM_MIPI;
    using LINE_STRIDE_EN = CsiCr18Fields::LINE_STRIDE_EN;
    using MIPI_DATA_FORMAT = CsiCr18Fields::MIPI_DATA_FORMAT;
    using CSI_ENABLE = CsiCr18Fields::CSI_ENABLE;
  };

  // CSI Control Register 19
  struct CsiCr19Fields {
    // This byte stores the highest FIFO level achieved by CSI FIFO timely and will be clear by writing 8'ff to it
    using DMA_RFIFO_HIGHEST_FIFO_LEVEL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiCr19Fields

  struct CSI_CR19 : ftl::mmio::Register<
      0x4080004Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CsiCr19Fields::DMA_RFIFO_HIGHEST_FIFO_LEVEL,
      ftl::mmio::Reserved<24, 8>> {
    using DMA_RFIFO_HIGHEST_FIFO_LEVEL = CsiCr19Fields::DMA_RFIFO_HIGHEST_FIFO_LEVEL;
  };

  // CSI Control Register 20
  struct CsiCr20Fields {
    enum class eBINARY_EN : std::uint32_t {
      // Output is Y8 format(8 bits each pixel)
      eBINARY_EN_0 = 0,
      // Output is Y1 format(1 bit each pixel)
      eBINARY_EN_1 = 1,
    };

    enum class eQR_DATA_FORMAT : std::uint32_t {
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

    enum class eBIG_END : std::uint32_t {
      // The newest (most recent) data will be assigned the lowest position when store to memory.
      eBIG_END_0 = 0,
      // The newest (most recent) data will be assigned the highest position when store to memory.
      eBIG_END_1 = 1,
    };

    enum class e_10BIT_NEW_EN : std::uint32_t {
      // When input 8bits data, it will use the data[9:2]
      e10BIT_NEW_EN_0 = 0,
      // If input is 10bits data, it will use the data[7:0] (optional)
      e10BIT_NEW_EN_1 = 1,
    };

    enum class eHISTOGRAM_EN : std::uint32_t {
      // Histogram disable
      eHISTOGRAM_EN_0 = 0,
      // Histogram enable
      eHISTOGRAM_EN_1 = 1,
    };

    enum class eQRCODE_EN : std::uint32_t {
      // Normal mode
      eQRCODE_EN_0 = 0,
      // Gray scale mode
      eQRCODE_EN_1 = 1,
    };

    // THRESHOLD used for binary function. When data value > THRESHOLD, output will be 1 Else will be 0.
    using THRESHOLD = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using BINARY_EN = ftl::mmio::Field<1, 8, eBINARY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using QR_DATA_FORMAT = ftl::mmio::Field<3, 9, eQR_DATA_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using BIG_END = ftl::mmio::Field<1, 12, eBIG_END, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using _10BIT_NEW_EN = ftl::mmio::Field<1, 29, e_10BIT_NEW_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Histogram enable
    using HISTOGRAM_EN = ftl::mmio::Field<1, 30, eHISTOGRAM_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Gray scale mode enable
    using QRCODE_EN = ftl::mmio::Field<1, 31, eQRCODE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CsiCr20Fields

  struct CSI_CR20 : ftl::mmio::Register<
      0x40800050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CsiCr20Fields::THRESHOLD,
      CsiCr20Fields::BINARY_EN,
      CsiCr20Fields::QR_DATA_FORMAT,
      CsiCr20Fields::BIG_END,
      ftl::mmio::Reserved<16, 13>,
      CsiCr20Fields::_10BIT_NEW_EN,
      CsiCr20Fields::HISTOGRAM_EN,
      CsiCr20Fields::QRCODE_EN> {
    using eBINARY_EN = CsiCr20Fields::eBINARY_EN;
    using eQR_DATA_FORMAT = CsiCr20Fields::eQR_DATA_FORMAT;
    using eBIG_END = CsiCr20Fields::eBIG_END;
    using e_10BIT_NEW_EN = CsiCr20Fields::e_10BIT_NEW_EN;
    using eHISTOGRAM_EN = CsiCr20Fields::eHISTOGRAM_EN;
    using eQRCODE_EN = CsiCr20Fields::eQRCODE_EN;
    using THRESHOLD = CsiCr20Fields::THRESHOLD;
    using BINARY_EN = CsiCr20Fields::BINARY_EN;
    using QR_DATA_FORMAT = CsiCr20Fields::QR_DATA_FORMAT;
    using BIG_END = CsiCr20Fields::BIG_END;
    using _10BIT_NEW_EN = CsiCr20Fields::_10BIT_NEW_EN;
    using HISTOGRAM_EN = CsiCr20Fields::HISTOGRAM_EN;
    using QRCODE_EN = CsiCr20Fields::QRCODE_EN;
  };

  // CSI Control Register
  struct CrFields {
    // Number of pixels (Y component of the input pixel) equals: 0 (CSICR21) 1 (CSICR22)
    using PIXEL_COUNTERS = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CrFields

  template<std::uint32_t Index>
  struct CR : ftl::mmio::Register<
      0x40800054u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CrFields::PIXEL_COUNTERS,
      ftl::mmio::Reserved<8, 24>> {
    static_assert(Index < 256u, "CR: Index out of range");
    using PIXEL_COUNTERS = CrFields::PIXEL_COUNTERS;
  };

};

}  // namespace regs