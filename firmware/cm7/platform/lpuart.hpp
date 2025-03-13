#include <cassert>
// #include "clock_config.h"
// #include "board.h"
// #include "mcmgr.h"
#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"
//#include "core_cm7.h"
//#include "cachel1_armv7.h"
#include <cstdio>
#include "registers/codegen/lpuart1.hpp"
#include "registers/codegen/dma0.hpp"
#include "registers/handwritten/dma0.hpp"
#include "registers/codegen/dmamux0.hpp"

#define DMA0_BASE 0x40070000
// #define DMA0_TCD0_SADDR  (*(volatile uint32_t*)(DMA0_BASE + 0x1000))
#define DMA0_TCD0_DADDR  (*(volatile uint32_t*)(DMA0_BASE + 0x1010))
#define DMA0_TCD0_NBYTES_MLOFFNO  (*(volatile uint32_t*)(DMA0_BASE + 0x1008))
#define DMA0_TCD0_ATTR  (*(volatile uint16_t*)(DMA0_BASE + 0x1006))
#define DMA0_TCD0_CITER_ELINKNO  (*(volatile uint16_t*)(DMA0_BASE + 0x1016))
#define DMA0_TCD0_BITER_ELINKNO  (*(volatile uint16_t*)(DMA0_BASE + 0x101E))
#define DMA0_TCD0_CSR  (*(volatile uint16_t*)(DMA0_BASE + 0x101C))
#define DMA0_TCD0_DOFF (*(volatile uint16_t*)(DMA0_BASE + 0x1014))
#define DMA0_TCD0_SOFF (*(volatile int16_t*)(DMA0_BASE + 0x1004))
#define DMA0_SERQ (*(volatile uint8_t*)(DMA0_BASE + 0x1B)) // 8-bit register
#define DMA0_SSRT (*(volatile uint8_t*)(DMA0_BASE + 0x1D)) // 8-bit register
#define DMA0_LPUART1_TX_CHANNEL 0 // eDMA Channel for LPUART1 TX

class Lpuart1
{
public:
    Lpuart1()
    {
        // 1. Enable Clocks
        auto &dma0_clk_direct = nCCM::LPCG22_DIRECT::ref();
        auto &dma0_clk_status = nCCM::LPCG22_STATUS0::ref();
        if (dma0_clk_status.bits.ON != nCCM::LPCG22_STATUS0::eON::eON_1) {
            dma0_clk_direct.bits.ON = nCCM::LPCG22_DIRECT::eON::eON_1;
            while (dma0_clk_status.bits.ON != nCCM::LPCG22_STATUS0::eON::eON_1) {}
        }

        auto &lpuart_clk_direct = nCCM::LPCG86_DIRECT::ref();
        auto &lpuart_clk_status = nCCM::LPCG86_STATUS0::ref();
        if (lpuart_clk_status.bits.ON != nCCM::LPCG86_STATUS0::eON::eON_1) {
            lpuart_clk_direct.bits.ON = nCCM::LPCG86_DIRECT::eON::eON_1;
            while (lpuart_clk_status.bits.ON != nCCM::LPCG86_STATUS0::eON::eON_1) {}
        }

        // 2. Configure LPUART (Transmitter Disabled Initially)
        //
        // Software reset lpuart1.
        nLPUART1::GLOBAL::ref().bits.RST = nLPUART1::GLOBAL::eRST::eRESET;
        nLPUART1::GLOBAL::ref().bits.RST = nLPUART1::GLOBAL::eRST::eNO_EFFECT;

        auto &baud = nLPUART1::BAUD::ref();
        // BaudRate = LPUART Clock Frequency / ((OSR+1) * SBR)
        // TODO assert uartClkSrcFreq = 24'000'000;
        baud.bits.SBR = 8;
        baud.bits.OSR = nLPUART1::BAUD::eOSR::eOSR_25;
        baud.bits.SBNS = nLPUART1::BAUD::eSBNS::eONE;
        baud.bits.RXEDGIE = nLPUART1::BAUD::eRXEDGIE::eDISABLE;
        baud.bits.LBKDIE = nLPUART1::BAUD::eLBKDIE::eDISABLE;
        baud.bits.RESYNCDIS = nLPUART1::BAUD::eRESYNCDIS::eRESYNC;
        baud.bits.BOTHEDGE = nLPUART1::BAUD::eBOTHEDGE::eDISABLED;
        baud.bits.MATCFG = nLPUART1::BAUD::eMATCFG::eADDR_MATCH;
        baud.bits.RDMAE = nLPUART1::BAUD::eRDMAE::eDISABLED;
        baud.bits.TDMAE = nLPUART1::BAUD::eTDMAE::eDISABLED;  // Keep disabled
        baud.bits.M10 = nLPUART1::BAUD::eM10::eDISABLED;
        baud.bits.MAEN2 = nLPUART1::BAUD::eMAEN2::eDISABLED;
        baud.bits.MAEN1 = nLPUART1::BAUD::eMAEN1::eDISABLED;

        auto &fifo = nLPUART1::FIFO::ref();
        fifo.bits.RXFIFOSIZE = nLPUART1::FIFO::eRXFIFOSIZE::eFIFO_4;
        fifo.bits.RXFE = nLPUART1::FIFO::eRXFE::eENABLED;
        fifo.bits.TXFIFOSIZE = nLPUART1::FIFO::eTXFIFOSIZE::eFIFO_4;
        fifo.bits.TXFE = nLPUART1::FIFO::eTXFE::eENABLED;
        fifo.bits.RXUFE = nLPUART1::FIFO::eRXUFE::eDISABLED;
        fifo.bits.TXOFE = nLPUART1::FIFO::eTXOFE::eDISABLED;
        fifo.bits.RXIDEN = nLPUART1::FIFO::eRXIDEN::eDISABLED;
        fifo.bits.RXFLUSH = nLPUART1::FIFO::eRXFLUSH::eNO_EFFECT;
        fifo.bits.TXFLUSH = nLPUART1::FIFO::eTXFLUSH::eTXFIFO_RST;  // Flush TX FIFO
        fifo.bits.RXUF = nLPUART1::FIFO::eRXUF::eNO_UNDERFLOW;
        fifo.bits.TXOF = nLPUART1::FIFO::eTXOF::eNO_OVERFLOW;
        fifo.bits.RXEMPT = nLPUART1::FIFO::eRXEMPT::eEMPTY;
        fifo.bits.TXEMPT = nLPUART1::FIFO::eTXEMPT::eEMPTY;

        // Set Watermark
        auto &water = nLPUART1::WATER::ref();
        water.Reset();

        // Set MODIR
        auto &modir = nLPUART1::MODIR::ref();
        modir.Reset();

        // Set stat, not msb
        auto &stat = nLPUART1::STAT::ref();
        stat.bits.MA2F = nLPUART1::STAT::eMA2F::eNOMATCH;
        stat.bits.MA1F = nLPUART1::STAT::eMA1F::eNOMATCH;
        stat.bits.PF = nLPUART1::STAT::ePF::eNOPARITY;
        stat.bits.FE = nLPUART1::STAT::eFE::eNOERROR;
        stat.bits.NF = nLPUART1::STAT::eNF::eNONOISE;
        stat.bits.OR = nLPUART1::STAT::eOR::eNO_OVERRUN;
        stat.bits.IDLE = nLPUART1::STAT::eIDLE::eNOIDLE;

        stat.bits.LBKDE = nLPUART1::STAT::eLBKDE::eDISABLED;
        stat.bits.BRK13 = nLPUART1::STAT::eBRK13::eSHORT;
        stat.bits.RWUID = nLPUART1::STAT::eRWUID::eIDLE_NOTSET;
        stat.bits.RXINV = nLPUART1::STAT::eRXINV::eNOT_INVERTED;
        stat.bits.MSBF = nLPUART1::STAT::eMSBF::eLSB_FIRST;
        stat.bits.RXEDGIF = nLPUART1::STAT::eRXEDGIF::eNO_EDGE;
        stat.bits.LBKDIF = nLPUART1::STAT::eLBKDIF::eNOT_DETECTED;

        // Set CTRL.
        auto &ctrl = nLPUART1::CTRL::ref();
        ctrl.bits.PT = nLPUART1::CTRL::ePT::eEVEN;
        ctrl.bits.PE = nLPUART1::CTRL::ePE::eDISABLED;
        ctrl.bits.ILT = nLPUART1::CTRL::eILT::eFROM_STOP;
        ctrl.bits.WAKE = nLPUART1::CTRL::eWAKE::eIDLE;
        ctrl.bits.M = nLPUART1::CTRL::eM::eDATA8;
        ctrl.bits.RSRC = nLPUART1::CTRL::eRSRC::eNO_EFFECT;
        ctrl.bits.DOZEEN = nLPUART1::CTRL::eDOZEEN::eENABLED;
        ctrl.bits.LOOPS = nLPUART1::CTRL::eLOOPS::eNOFFECT;
        ctrl.bits.IDLECFG = nLPUART1::CTRL::eIDLECFG::eIDLE_2;
        ctrl.bits.M7 = nLPUART1::CTRL::eM7::eNO_EFFECT;
        ctrl.bits.MA2IE = nLPUART1::CTRL::eMA2IE::eDISABLED;
        ctrl.bits.MA1IE = nLPUART1::CTRL::eMA1IE::eDISABLED;
        ctrl.bits.SBK = nLPUART1::CTRL::eSBK::eNO_EFFECT;
        ctrl.bits.RWU = nLPUART1::CTRL::eRWU::eNO_EFFECT;
        ctrl.bits.RE = nLPUART1::CTRL::eRE::eENABLED;
        ctrl.bits.TE = nLPUART1::CTRL::eTE::eDISABLED;  // Disable TX until DMA ready
    }

    void write(const uint8_t *buffer, uint16_t size)
    {
        // TODO check and handle es.
        auto &es = nDMA0::ES::ref();
        es.Reset();

        // TODO: CITER is not decrimenting properly, it gets stuck at 2, so we check the uart status
        // instead.
        //
        // Wait for UART to finish transmitting.
        while (!(nLPUART1::STAT::ref().bits.TC == nLPUART1::STAT::eTC::eCOMPLETE)) {}

        // Move the txBuffer. TODO error if doesn't fit.
        memcpy(this->tx_buffer_, buffer, size);  // Copies 'size' bytes from 'src' to 'dest'
        
        // Disable DMA requests
        nDMA0::ERQ::ref().bits.ERQ0 = nDMA0::ERQ::eERQ0::eDISABLE;
        
        // Clear DONE and any pending status
        DMA0_TCD0_CSR &= ~(1 << 7);  // Clear DONE bit (write 0 has no effect, but ensure it’s reset)
        
        // 3. Configure DMA TCD
        auto &lpuart_data = nLPUART1::DATA::ref();
        nDMA0::TCD0_SADDR::ref().value = (uint32_t)tx_buffer_;
        DMA0_TCD0_DADDR = (uint32_t)&lpuart_data.value;
        DMA0_TCD0_SOFF = 1;  // Increment source by 1 byte
        DMA0_TCD0_DOFF = 0;  // No dest increment
        DMA0_TCD0_NBYTES_MLOFFNO = 1;  // 1 byte per minor loop
        DMA0_TCD0_ATTR = (0 << 8) | (0 << 0);  // 8-bit transfers
        DMA0_TCD0_CITER_ELINKNO = size;
        DMA0_TCD0_BITER_ELINKNO = size;
        DMA0_TCD0_CSR = (1 << 1);  // Interrupt on completion (optional)

        // 4. Configure DMAMUX
        auto &chcfg0 = nDMAMUX0::CHCFG_0::ref();
        chcfg0.bits.SOURCE = 8;  // LPUART1 TX (RM Table 4-3)
        chcfg0.bits.ENBL = nDMAMUX0::CHCFG_0::eENBL::eENBL_1;

        // 5. Enable DMA Channel
        nDMA0::ERQ::ref().bits.ERQ0 = nDMA0::ERQ::eERQ0::eENABLE;
        DMA0_SERQ = 0;  // Clear any pending requests

        // 6. Enable UART Transmitter and DMA
        auto &ctrl = nLPUART1::CTRL::ref();
        auto &baud = nLPUART1::BAUD::ref();
        ctrl.bits.TE = nLPUART1::CTRL::eTE::eENABLED;  // Enable TX now
        baud.bits.TDMAE = nLPUART1::BAUD::eTDMAE::eENABLED;  // Enable DMA trigger

        // // 7. Start DMA Transfer
        // DMA0_SSRT = 0;  // Trigger DMA
    }

    int read(uint8_t *buffer, size_t max_length)
    {
        assert(buffer != nullptr);

        size_t i = 0;
        uint8_t* data_address = buffer;
        
        while (i < max_length - 1)
        {
            uint8_t c = this->read_byte();
            data_address[i++] = c;
            if (c == '\r' || c == '\n') break;  // Stop on Enter key
        }
        buffer[i++] = '\0';  // Null-terminate string
        return i;
    }

    uint8_t read_byte()
    {
        auto &stat = nLPUART1::STAT::ref();
        auto &data = nLPUART1::DATA::ref();
        while (stat.bits.RDRF == nLPUART1::STAT::eRDRF::eNO_RXDATA) {}
        return (uint8_t)(data.value & 0xFF);
    }
private:
    // TODO how large should this buffer be.
    uint8_t tx_buffer_[100];
};
