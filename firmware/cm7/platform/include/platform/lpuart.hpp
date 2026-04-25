# pragma once

#include <cassert>
#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"
#include <cstdio>
#include "registers/codegen/lpuart1.hpp"
#include "registers/codegen/dma0.hpp"
#include "registers/codegen/dmamux0.hpp"

namespace dma0 = regs::dma0;
namespace dmamux0 = regs::dmamux0;
#include "registers/codegen/dmamux0.hpp"
#include "etl/singleton.h"
#include "utils/ocram2_allocator.hpp"
#include "ftl/singleton.hpp"

#include "board.h"
#include "cachel1_armv7.h"

class Lpuart1 : public ftl::Singleton<Lpuart1>
{
    friend class ftl::Singleton<Lpuart1>;
public:
    static constexpr uint32_t kTxBufferSize = 128;
private:
    Lpuart1()
    {
        // Allocate tx buffer from non-cacheable OCRAM.
        Ocram2Allocator& ocram2 = Ocram2Allocator::instance();
        this->tx_buffer_ = reinterpret_cast<uint8_t *>(ocram2.allocate(kTxBufferSize, 4));
        assert(tx_buffer_ != nullptr);

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

        // Set done flag in case we inherit a different state.
        dma0::TCD_CSR<0>::modify(dma0::TCD_CSR<0>::DONE{true});
    }

public:
    void write(const uint8_t *buffer, uint16_t size)
    {
        // Per-channel TCD aliases — channel 0 is wired to LPUART1 TX.
        using csr    = dma0::TCD_CSR<0>;
        using citer  = dma0::TCD_CITER_ELINKNO<0>;
        using biter  = dma0::TCD_BITER_ELINKNO<0>;
        using soff   = dma0::TCD_SOFF<0>;
        using doff   = dma0::TCD_DOFF<0>;
        using saddr  = dma0::TCD_SADDR<0>;
        using daddr  = dma0::TCD_DADDR<0>;
        using attr   = dma0::TCD_ATTR<0>;
        using nbytes = dma0::TCD_NBYTES_MLNO<0>;

        using chcfg0   = dmamux0::CHCFG<0>;
        auto &ctrl     = nLPUART1::CTRL::ref();
        auto &baud     = nLPUART1::BAUD::ref();
        auto &ldata    = nLPUART1::DATA::ref();

        //─── Wait for completion of the previous write ─────────────────────────
        while (!csr::read().get<csr::DONE>()) {}

        //─── Wait for UART shift register to empty ─────────────────────────────
        auto &stat = nLPUART1::STAT::ref();
        while (stat.bits.TC != nLPUART1::STAT::eTC::eCOMPLETE) {}

        //─── Tear down any ongoing transfer ────────────────────────────────────
        // Disable UART + its DMA trigger
        ctrl.bits.TE      = nLPUART1::CTRL::eTE::eDISABLED;
        baud.bits.TDMAE   = nLPUART1::BAUD::eTDMAE::eDISABLED;
        // Disable DMAMUX channel
        chcfg0::modify(chcfg0::ENBL{chcfg0::eENBL::eENBL_0});
        // Disable DMA requests
        dma0::ERQ::modify(dma0::ERQ::ERQ0{dma0::ERQ::eERQ0::eDISABLE});

        //─── Clear sticky flags ───────────────────────────────────────────────
        // ES is read-only in SVD; any error-clear must go through CR[CX] or
        // the per-channel CERR register, not ES. The old es.Reset() write was
        // silently ignored on silicon, so dropping it.
        csr::modify(csr::DONE{true},                       // clear DONE
                    csr::DREQ{csr::eDREQ::eCLEAR});         // prevent auto-disable

        //─── Copy the data (No cache clean necesarry for OCRAM2 ───────────────
        assert(size <= kTxBufferSize);
        memcpy(tx_buffer_, buffer, size);

        //─── Reconfigure the TCD ──────────────────────────────────────────────
        saddr::write(saddr::SADDR{reinterpret_cast<std::uint32_t>(tx_buffer_)});
        soff::write (soff::SOFF{static_cast<std::uint16_t>(1)});       // step source by 1 byte
        daddr::write(daddr::DADDR{reinterpret_cast<std::uint32_t>(&ldata.value)});
        doff::write (doff::DOFF{static_cast<std::uint16_t>(0)});       // keep dest fixed
        nbytes::write(nbytes::NBYTES{1u});                              // 1 byte per minor-loop
        attr::write(attr::SSIZE{attr::eSSIZE::eEIGHT},                  // 8-bit transfers
                    attr::DSIZE{static_cast<std::uint8_t>(0)});
        biter::write(biter::BITER{size}, biter::ELINK{biter::eELINK::eDISABLED});
        // CITER must be loaded *after* BITER per the reference manual.
        citer::write(citer::CITER{size}, citer::ELINK{citer::eELINK::eDISABLED});

        //─── Arm DMAMUX & clear pending requests ─────────────────────────────
        // SOURCE=8 → LPUART1 TX
        chcfg0::modify(chcfg0::SOURCE{std::uint8_t{8}},
                       chcfg0::ENBL  {chcfg0::eENBL::eENBL_1});
        dma0::SERQ::reset();            // clear any stale request

        //─── Enable DMA + UART, then kick it off ─────────────────────────────
        dma0::ERQ::modify(dma0::ERQ::ERQ0{dma0::ERQ::eERQ0::eENABLE});
        ctrl.bits.TE      = nLPUART1::CTRL::eTE::eENABLED;
        baud.bits.TDMAE   = nLPUART1::BAUD::eTDMAE::eENABLED;
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
    uint8_t *tx_buffer_ = nullptr;
};
